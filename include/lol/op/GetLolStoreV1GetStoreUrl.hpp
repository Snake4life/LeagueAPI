#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  inline Result<std::string> GetLolStoreV1GetStoreUrl(LeagueClient& _client)
  {
    try {
      return ToResult<std::string>(_client.https.request("get", "/lol-store/v1/getStoreUrl?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::string>(e.code());
    }
  }
  inline void GetLolStoreV1GetStoreUrl(LeagueClient& _client, std::function<void(LeagueClient&, const Result<std::string>&)> cb)
  {
    _client.httpsa.request("get", "/lol-store/v1/getStoreUrl?" +
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