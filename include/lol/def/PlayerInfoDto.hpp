#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct PlayerInfoDto { 
    uint64_t currentAccountId;
    uint64_t summonerId;
    std::string currentPlatformId; 
  };
  inline void to_json(json& j, const PlayerInfoDto& v) {
    j["currentAccountId"] = v.currentAccountId; 
    j["summonerId"] = v.summonerId; 
    j["currentPlatformId"] = v.currentPlatformId; 
  }
  inline void from_json(const json& j, PlayerInfoDto& v) {
    v.currentAccountId = j.at("currentAccountId").get<uint64_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.currentPlatformId = j.at("currentPlatformId").get<std::string>(); 
  }
}