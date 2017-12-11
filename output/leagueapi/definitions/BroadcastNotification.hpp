#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct BroadcastNotification { /**/ 
    std::vector<json> broadcastMessages;/**/
  };
  static void to_json(json& j, const BroadcastNotification& v) { 
    j["broadcastMessages"] = v.broadcastMessages;
  }
  static void from_json(const json& j, BroadcastNotification& v) { 
    v.broadcastMessages = j.at("broadcastMessages").get<std::vector<json>>(); 
  }
} 