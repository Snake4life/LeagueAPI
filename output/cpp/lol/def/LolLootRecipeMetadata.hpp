#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLootLootDescription.hpp>
namespace lol {
  struct LolLootRecipeMetadata { 
    std::vector<LolLootLootDescription> guaranteedDescriptions;
    std::vector<LolLootLootDescription> bonusDescriptions;
    bool tooltipsDisabled; 
  };
  void to_json(json& j, const LolLootRecipeMetadata& v) {
    j["guaranteedDescriptions"] = v.guaranteedDescriptions; 
    j["bonusDescriptions"] = v.bonusDescriptions; 
    j["tooltipsDisabled"] = v.tooltipsDisabled; 
  }
  void from_json(const json& j, LolLootRecipeMetadata& v) {
    v.guaranteedDescriptions = j.at("guaranteedDescriptions").get<std::vector<LolLootLootDescription>>(); 
    v.bonusDescriptions = j.at("bonusDescriptions").get<std::vector<LolLootLootDescription>>(); 
    v.tooltipsDisabled = j.at("tooltipsDisabled").get<bool>(); 
  }
}