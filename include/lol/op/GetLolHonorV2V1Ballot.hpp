#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolHonorV2Ballot.hpp"
namespace lol {
  inline Result<LolHonorV2Ballot> GetLolHonorV2V1Ballot(LeagueClient& _client)
  {
    try {
      return ToResult<LolHonorV2Ballot>(_client.https.request("get", "/lol-honor-v2/v1/ballot?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolHonorV2Ballot>(e.code());
    }
  }
  inline void GetLolHonorV2V1Ballot(LeagueClient& _client, std::function<void(LeagueClient&, const Result<LolHonorV2Ballot>&)> cb)
  {
    _client.httpsa.request("get", "/lol-honor-v2/v1/ballot?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolHonorV2Ballot>(e));
            else
              cb(_client, ToResult<LolHonorV2Ballot>(response));
        });
  }
}