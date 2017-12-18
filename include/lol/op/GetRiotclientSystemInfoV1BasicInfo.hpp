#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/basicSystemInfo.hpp"
namespace lol {
  inline Result<basicSystemInfo> GetRiotclientSystemInfoV1BasicInfo(LeagueClient& _client)
  {
    try {
      return ToResult<basicSystemInfo>(_client.https.request("get", "/riotclient/system-info/v1/basic-info?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<basicSystemInfo>(e.code());
    }
  }
  inline void GetRiotclientSystemInfoV1BasicInfo(LeagueClient& _client, std::function<void(LeagueClient&, const Result<basicSystemInfo>&)> cb)
  {
    _client.httpsa.request("get", "/riotclient/system-info/v1/basic-info?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<basicSystemInfo>(e));
            else
              cb(_client, ToResult<basicSystemInfo>(response));
        });
  }
}