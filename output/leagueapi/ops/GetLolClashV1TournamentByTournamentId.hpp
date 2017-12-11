#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolClashTournament.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolClashTournament> GetLolClashV1TournamentByTournamentId (const https::Info& _info_,
      const int64_t& tournamentId /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-clash/v1/tournament/"+to_string(tournamentId)+"?", { 
    }, { 
    },"") };
  }
} 