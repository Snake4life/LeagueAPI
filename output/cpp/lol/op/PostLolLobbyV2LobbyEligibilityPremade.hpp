#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLobbyEligibility.hpp>
namespace lol {
  Result<std::vector<LolLobbyEligibility>> PostLolLobbyV2LobbyEligibilityPremade(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::vector<LolLobbyEligibility>> {
        _client_.request("post", "/lol-lobby/v2/lobby/eligibility/premade?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolLobbyEligibility>> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}