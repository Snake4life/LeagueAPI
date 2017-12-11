#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PostLolLobbyTeamBuilderV1LobbyMembersByIdKick (const https::Info& _info_,
      const uint64_t& id /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-lobby-team-builder/v1/lobby/members/"+to_string(id)+"/kick?", { 
    }, { 
    },"") };
  }
} 