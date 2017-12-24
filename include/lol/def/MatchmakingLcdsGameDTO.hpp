#pragma once
#include "../base_def.hpp" 
#include "MatchmakingLcdsPlayerParticipant.hpp"
namespace lol {
  struct MatchmakingLcdsGameDTO { 
    std::vector<MatchmakingLcdsPlayerParticipant> teamOne;
    std::string statusOfParticipants;
    std::string gameState;
    std::string terminatedCondition;
    std::vector<MatchmakingLcdsPlayerParticipant> teamTwo; 
  };
  inline void to_json(json& j, const MatchmakingLcdsGameDTO& v) {
    j["teamOne"] = v.teamOne; 
    j["statusOfParticipants"] = v.statusOfParticipants; 
    j["gameState"] = v.gameState; 
    j["terminatedCondition"] = v.terminatedCondition; 
    j["teamTwo"] = v.teamTwo; 
  }
  inline void from_json(const json& j, MatchmakingLcdsGameDTO& v) {
    v.teamOne = j.at("teamOne").get<std::vector<MatchmakingLcdsPlayerParticipant>>(); 
    v.statusOfParticipants = j.at("statusOfParticipants").get<std::string>(); 
    v.gameState = j.at("gameState").get<std::string>(); 
    v.terminatedCondition = j.at("terminatedCondition").get<std::string>(); 
    v.teamTwo = j.at("teamTwo").get<std::vector<MatchmakingLcdsPlayerParticipant>>(); 
  }
}