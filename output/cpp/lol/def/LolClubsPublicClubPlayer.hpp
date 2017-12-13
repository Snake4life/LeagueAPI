#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolClubsPublicClubPlayer { 
    std::string summonerName;
    uint64_t summonerId; 
  };
  void to_json(json& j, const LolClubsPublicClubPlayer& v) {
  j["summonerName"] = v.summonerName; 
  j["summonerId"] = v.summonerId; 
  }
  void from_json(const json& j, LolClubsPublicClubPlayer& v) {
  v.summonerName = j.at("summonerName").get<std::string>(); 
  v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}