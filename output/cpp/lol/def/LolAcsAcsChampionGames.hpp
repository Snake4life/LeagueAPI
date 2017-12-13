#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolAcsAcsChampionGames { 
    int32_t queue;
    std::string lane;
    int32_t championId;
    std::string role; 
  };
  void to_json(json& j, const LolAcsAcsChampionGames& v) {
  j["queue"] = v.queue; 
  j["lane"] = v.lane; 
  j["championId"] = v.championId; 
  j["role"] = v.role; 
  }
  void from_json(const json& j, LolAcsAcsChampionGames& v) {
  v.queue = j.at("queue").get<int32_t>(); 
  v.lane = j.at("lane").get<std::string>(); 
  v.championId = j.at("championId").get<int32_t>(); 
  v.role = j.at("role").get<std::string>(); 
  }
}