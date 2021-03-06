#pragma once
#include "../base_def.hpp" 
#include "FellowPlayerInfo.hpp"
namespace lol {
  struct PlayerGameStats { 
    uint64_t userId;
    uint64_t gameId;
    uint64_t createDate;
    std::vector<FellowPlayerInfo> fellowPlayers; 
  };
  inline void to_json(json& j, const PlayerGameStats& v) {
    j["userId"] = v.userId; 
    j["gameId"] = v.gameId; 
    j["createDate"] = v.createDate; 
    j["fellowPlayers"] = v.fellowPlayers; 
  }
  inline void from_json(const json& j, PlayerGameStats& v) {
    v.userId = j.at("userId").get<uint64_t>(); 
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.createDate = j.at("createDate").get<uint64_t>(); 
    v.fellowPlayers = j.at("fellowPlayers").get<std::vector<FellowPlayerInfo>>(); 
  }
}