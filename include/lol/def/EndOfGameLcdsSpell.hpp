#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct EndOfGameLcdsSpell { 
    int32_t spellId; 
  };
  inline void to_json(json& j, const EndOfGameLcdsSpell& v) {
    j["spellId"] = v.spellId; 
  }
  inline void from_json(const json& j, EndOfGameLcdsSpell& v) {
    v.spellId = j.at("spellId").get<int32_t>(); 
  }
}