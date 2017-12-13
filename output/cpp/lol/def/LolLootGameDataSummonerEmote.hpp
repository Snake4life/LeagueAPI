#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLootGameDataSummonerEmote { 
    std::string inventoryIcon;
    std::string description;
    int64_t id;
    std::string name; 
  };
  void to_json(json& j, const LolLootGameDataSummonerEmote& v) {
  j["inventoryIcon"] = v.inventoryIcon; 
  j["description"] = v.description; 
  j["id"] = v.id; 
  j["name"] = v.name; 
  }
  void from_json(const json& j, LolLootGameDataSummonerEmote& v) {
  v.inventoryIcon = j.at("inventoryIcon").get<std::string>(); 
  v.description = j.at("description").get<std::string>(); 
  v.id = j.at("id").get<int64_t>(); 
  v.name = j.at("name").get<std::string>(); 
  }
}