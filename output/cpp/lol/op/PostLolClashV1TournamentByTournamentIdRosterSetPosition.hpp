#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolClashSetPositionRequest.hpp>
namespace lol {
  Result<json> PostLolClashV1TournamentByTournamentIdRosterSetPosition(const LeagueClient& _client, const int64_t& tournamentId, const LolClashSetPositionRequest& setPositionRequest)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-clash/v1/tournament/"+to_string(tournamentId)+"/roster/set-position?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(setPositionRequest).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}