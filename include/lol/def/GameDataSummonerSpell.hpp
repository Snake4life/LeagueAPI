#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct GameDataSummonerSpell { 
    uint32_t summonerLevel;
    uint64_t id; 
  };
  inline void to_json(json& j, const GameDataSummonerSpell& v) {
    j["summonerLevel"] = v.summonerLevel; 
    j["id"] = v.id; 
  }
  inline void from_json(const json& j, GameDataSummonerSpell& v) {
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>(); 
    v.id = j.at("id").get<uint64_t>(); 
  }
}