#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLoadoutsCreateOrUpdateItemsRequest { 
    std::map<std::string, json> items;
    std::vector<std::string> inventoryJWTs;
    uint32_t id; 
  };
  void to_json(json& j, const LolLoadoutsCreateOrUpdateItemsRequest& v) {
  j["items"] = v.items; 
  j["inventoryJWTs"] = v.inventoryJWTs; 
  j["id"] = v.id; 
  }
  void from_json(const json& j, LolLoadoutsCreateOrUpdateItemsRequest& v) {
  v.items = j.at("items").get<std::map<std::string, json>>(); 
  v.inventoryJWTs = j.at("inventoryJWTs").get<std::vector<std::string>>(); 
  v.id = j.at("id").get<uint32_t>(); 
  }
}