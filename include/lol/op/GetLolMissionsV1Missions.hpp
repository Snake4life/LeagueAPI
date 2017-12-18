#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/PlayerMissionDTO.hpp"
namespace lol {
  inline Result<std::vector<PlayerMissionDTO>> GetLolMissionsV1Missions(LeagueClient& _client)
  {
    try {
      return ToResult<std::vector<PlayerMissionDTO>>(_client.https.request("get", "/lol-missions/v1/missions?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::vector<PlayerMissionDTO>>(e.code());
    }
  }
  inline void GetLolMissionsV1Missions(LeagueClient& _client, std::function<void(LeagueClient&, const Result<std::vector<PlayerMissionDTO>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-missions/v1/missions?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::vector<PlayerMissionDTO>>(e));
            else
              cb(_client, ToResult<std::vector<PlayerMissionDTO>>(response));
        });
  }
}