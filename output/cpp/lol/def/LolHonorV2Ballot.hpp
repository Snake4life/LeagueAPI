#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolHonorV2EligiblePlayer.hpp>
namespace lol {
  struct LolHonorV2Ballot { 
    uint64_t gameId;
    std::vector<LolHonorV2EligiblePlayer> eligiblePlayers; 
  };
  void to_json(json& j, const LolHonorV2Ballot& v) {
  j["gameId"] = v.gameId; 
  j["eligiblePlayers"] = v.eligiblePlayers; 
  }
  void from_json(const json& j, LolHonorV2Ballot& v) {
  v.gameId = j.at("gameId").get<uint64_t>(); 
  v.eligiblePlayers = j.at("eligiblePlayers").get<std::vector<LolHonorV2EligiblePlayer>>(); 
  }
}