#pragma once
#include "../base_def.hpp" 
#include "LolBannersTournamentFlagInventoryItem.hpp"
namespace lol {
  struct LolBannersInventoryItemsByType { 
    std::vector<LolBannersTournamentFlagInventoryItem> TOURNAMENT_FLAG; 
  };
  inline void to_json(json& j, const LolBannersInventoryItemsByType& v) {
    j["TOURNAMENT_FLAG"] = v.TOURNAMENT_FLAG; 
  }
  inline void from_json(const json& j, LolBannersInventoryItemsByType& v) {
    v.TOURNAMENT_FLAG = j.at("TOURNAMENT_FLAG").get<std::vector<LolBannersTournamentFlagInventoryItem>>(); 
  }
}