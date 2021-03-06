#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct ActiveBoostsLcdsSummonerActiveBoostsDTO { 
    uint64_t summonerId;
    int64_t ipBoostEndDate;
    uint32_t ipBoostPerWinCount;
    uint32_t ipLoyaltyBoost;
    int64_t xpBoostEndDate;
    uint32_t xpBoostPerWinCount;
    uint32_t xpLoyaltyBoost; 
  };
  inline void to_json(json& j, const ActiveBoostsLcdsSummonerActiveBoostsDTO& v) {
    j["summonerId"] = v.summonerId; 
    j["ipBoostEndDate"] = v.ipBoostEndDate; 
    j["ipBoostPerWinCount"] = v.ipBoostPerWinCount; 
    j["ipLoyaltyBoost"] = v.ipLoyaltyBoost; 
    j["xpBoostEndDate"] = v.xpBoostEndDate; 
    j["xpBoostPerWinCount"] = v.xpBoostPerWinCount; 
    j["xpLoyaltyBoost"] = v.xpLoyaltyBoost; 
  }
  inline void from_json(const json& j, ActiveBoostsLcdsSummonerActiveBoostsDTO& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.ipBoostEndDate = j.at("ipBoostEndDate").get<int64_t>(); 
    v.ipBoostPerWinCount = j.at("ipBoostPerWinCount").get<uint32_t>(); 
    v.ipLoyaltyBoost = j.at("ipLoyaltyBoost").get<uint32_t>(); 
    v.xpBoostEndDate = j.at("xpBoostEndDate").get<int64_t>(); 
    v.xpBoostPerWinCount = j.at("xpBoostPerWinCount").get<uint32_t>(); 
    v.xpLoyaltyBoost = j.at("xpLoyaltyBoost").get<uint32_t>(); 
  }
}