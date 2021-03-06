#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLobbyUserResource { 
    uint64_t summonerId;
    std::map<std::string, std::string> lol; 
  };
  inline void to_json(json& j, const LolLobbyUserResource& v) {
    j["summonerId"] = v.summonerId; 
    j["lol"] = v.lol; 
  }
  inline void from_json(const json& j, LolLobbyUserResource& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.lol = j.at("lol").get<std::map<std::string, std::string>>(); 
  }
}