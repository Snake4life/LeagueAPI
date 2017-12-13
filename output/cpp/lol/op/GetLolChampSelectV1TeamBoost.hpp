#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolChampSelectTeamBoost.hpp>
namespace lol {
  Result<LolChampSelectTeamBoost> GetLolChampSelectV1TeamBoost(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolChampSelectTeamBoost> {
        _client_.request("get", "/lol-champ-select/v1/team-boost?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolChampSelectTeamBoost> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}