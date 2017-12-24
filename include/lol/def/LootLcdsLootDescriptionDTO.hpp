#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LootLcdsLootDescriptionDTO { 
    std::map<std::string, std::string> localizationLongDescriptionMap;
    std::map<std::string, std::string> localizationMap;
    std::string lootName;
    std::vector<std::string> childLootTableNames; 
  };
  inline void to_json(json& j, const LootLcdsLootDescriptionDTO& v) {
    j["localizationLongDescriptionMap"] = v.localizationLongDescriptionMap; 
    j["localizationMap"] = v.localizationMap; 
    j["lootName"] = v.lootName; 
    j["childLootTableNames"] = v.childLootTableNames; 
  }
  inline void from_json(const json& j, LootLcdsLootDescriptionDTO& v) {
    v.localizationLongDescriptionMap = j.at("localizationLongDescriptionMap").get<std::map<std::string, std::string>>(); 
    v.localizationMap = j.at("localizationMap").get<std::map<std::string, std::string>>(); 
    v.lootName = j.at("lootName").get<std::string>(); 
    v.childLootTableNames = j.at("childLootTableNames").get<std::vector<std::string>>(); 
  }
}