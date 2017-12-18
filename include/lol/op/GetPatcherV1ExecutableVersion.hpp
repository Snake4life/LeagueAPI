#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  inline Result<std::string> GetPatcherV1ExecutableVersion(LeagueClient& _client)
  {
    try {
      return ToResult<std::string>(_client.https.request("get", "/patcher/v1/executable-version?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::string>(e.code());
    }
  }
  inline void GetPatcherV1ExecutableVersion(LeagueClient& _client, std::function<void(LeagueClient&, const Result<std::string>&)> cb)
  {
    _client.httpsa.request("get", "/patcher/v1/executable-version?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::string>(e));
            else
              cb(_client, ToResult<std::string>(response));
        });
  }
}