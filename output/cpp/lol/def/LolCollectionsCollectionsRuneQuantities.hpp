#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolCollectionsCollectionsRuneQuantity.hpp>
namespace lol {
  struct LolCollectionsCollectionsRuneQuantities { 
    std::vector<LolCollectionsCollectionsRuneQuantity> runeQuantities;
    uint64_t summonerId; 
  };
  void to_json(json& j, const LolCollectionsCollectionsRuneQuantities& v) {
    j["runeQuantities"] = v.runeQuantities; 
    j["summonerId"] = v.summonerId; 
  }
  void from_json(const json& j, LolCollectionsCollectionsRuneQuantities& v) {
    v.runeQuantities = j.at("runeQuantities").get<std::vector<LolCollectionsCollectionsRuneQuantity>>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}