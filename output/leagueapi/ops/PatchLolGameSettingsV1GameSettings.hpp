#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PatchLolGameSettingsV1GameSettings (const https::Info& _info_,
      const json& settingsResource /**/ )
  { 
    return { https::Do(_info_, "patch", "/lol-game-settings/v1/game-settings?", { 
    }, { 
    },settingsResource) };
  }
} 