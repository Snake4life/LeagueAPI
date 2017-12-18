#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  inline Result<json> GetPerformanceV1Report(LeagueClient& _client)
  {
    try {
      return ToResult<json>(_client.https.request("get", "/performance/v1/report?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<json>(e.code());
    }
  }
  inline void GetPerformanceV1Report(LeagueClient& _client, std::function<void(LeagueClient&, const Result<json>&)> cb)
  {
    _client.httpsa.request("get", "/performance/v1/report?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<json>(e));
            else
              cb(_client, ToResult<json>(response));
        });
  }
}