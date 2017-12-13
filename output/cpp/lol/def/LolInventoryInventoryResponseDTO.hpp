#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolInventoryInventoryDTO.hpp>
namespace lol {
  struct LolInventoryInventoryResponseDTO { 
    LolInventoryInventoryDTO data; 
  };
  void to_json(json& j, const LolInventoryInventoryResponseDTO& v) {
    j["data"] = v.data; 
  }
  void from_json(const json& j, LolInventoryInventoryResponseDTO& v) {
    v.data = j.at("data").get<LolInventoryInventoryDTO>(); 
  }
}