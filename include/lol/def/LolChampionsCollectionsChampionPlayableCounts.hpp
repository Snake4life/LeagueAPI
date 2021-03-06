#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolChampionsCollectionsChampionPlayableCounts { 
    uint32_t championsOwned;
    uint32_t championsRented;
    uint32_t championsFreeToPlay;
    uint32_t championsFreeToPlayReward; 
  };
  inline void to_json(json& j, const LolChampionsCollectionsChampionPlayableCounts& v) {
    j["championsOwned"] = v.championsOwned; 
    j["championsRented"] = v.championsRented; 
    j["championsFreeToPlay"] = v.championsFreeToPlay; 
    j["championsFreeToPlayReward"] = v.championsFreeToPlayReward; 
  }
  inline void from_json(const json& j, LolChampionsCollectionsChampionPlayableCounts& v) {
    v.championsOwned = j.at("championsOwned").get<uint32_t>(); 
    v.championsRented = j.at("championsRented").get<uint32_t>(); 
    v.championsFreeToPlay = j.at("championsFreeToPlay").get<uint32_t>(); 
    v.championsFreeToPlayReward = j.at("championsFreeToPlayReward").get<uint32_t>(); 
  }
}