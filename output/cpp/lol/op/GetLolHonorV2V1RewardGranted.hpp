#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolHonorV2Reward.hpp>
namespace lol {
  Result<LolHonorV2Reward> GetLolHonorV2V1RewardGranted(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolHonorV2Reward> {
        _client_.request("get", "/lol-honor-v2/v1/reward-granted?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolHonorV2Reward> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}