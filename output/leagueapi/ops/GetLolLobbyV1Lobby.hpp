#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolLobbyLobby.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolLobbyLobby> GetLolLobbyV1Lobby (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-lobby/v1/lobby?", { 
    }, { 
    },"") };
  }
} 