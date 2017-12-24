#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolSuggestedPlayersSuggestedPlayersQueue { 
    uint32_t minLevel;
    int32_t id; 
  };
  inline void to_json(json& j, const LolSuggestedPlayersSuggestedPlayersQueue& v) {
    j["minLevel"] = v.minLevel; 
    j["id"] = v.id; 
  }
  inline void from_json(const json& j, LolSuggestedPlayersSuggestedPlayersQueue& v) {
    v.minLevel = j.at("minLevel").get<uint32_t>(); 
    v.id = j.at("id").get<int32_t>(); 
  }
}