#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolChampSelectLegacyChampSelectPickableChampions { 
    std::vector<int32_t> championIds; 
  };
  void to_json(json& j, const LolChampSelectLegacyChampSelectPickableChampions& v) {
  j["championIds"] = v.championIds; 
  }
  void from_json(const json& j, LolChampSelectLegacyChampSelectPickableChampions& v) {
  v.championIds = j.at("championIds").get<std::vector<int32_t>>(); 
  }
}