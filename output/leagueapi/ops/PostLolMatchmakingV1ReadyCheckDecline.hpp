#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PostLolMatchmakingV1ReadyCheckDecline (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "post", "/lol-matchmaking/v1/ready-check/decline?", { 
    }, { 
    },"") };
  }
} 