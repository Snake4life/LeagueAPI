#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct BasePublicSummonerDTO { 
    uint64_t sumId;
    uint64_t acctId;
    std::string name;
    std::string internalName;
    std::string previousSeasonHighestTier;
    int32_t profileIconId;
    std::string puuid; 
  };
  inline void to_json(json& j, const BasePublicSummonerDTO& v) {
    j["sumId"] = v.sumId; 
    j["acctId"] = v.acctId; 
    j["name"] = v.name; 
    j["internalName"] = v.internalName; 
    j["previousSeasonHighestTier"] = v.previousSeasonHighestTier; 
    j["profileIconId"] = v.profileIconId; 
    j["puuid"] = v.puuid; 
  }
  inline void from_json(const json& j, BasePublicSummonerDTO& v) {
    v.sumId = j.at("sumId").get<uint64_t>(); 
    v.acctId = j.at("acctId").get<uint64_t>(); 
    v.name = j.at("name").get<std::string>(); 
    v.internalName = j.at("internalName").get<std::string>(); 
    v.previousSeasonHighestTier = j.at("previousSeasonHighestTier").get<std::string>(); 
    v.profileIconId = j.at("profileIconId").get<int32_t>(); 
    v.puuid = j.at("puuid").get<std::string>(); 
  }
}