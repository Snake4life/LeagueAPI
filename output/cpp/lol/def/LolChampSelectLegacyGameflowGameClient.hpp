#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolChampSelectLegacyGameflowGameClient { 
    bool running;
    bool visible; 
  };
  void to_json(json& j, const LolChampSelectLegacyGameflowGameClient& v) {
    j["running"] = v.running; 
    j["visible"] = v.visible; 
  }
  void from_json(const json& j, LolChampSelectLegacyGameflowGameClient& v) {
    v.running = j.at("running").get<bool>(); 
    v.visible = j.at("visible").get<bool>(); 
  }
}