#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/RosterMemberDTO.hpp>
namespace lol {
  struct PlayerRosterHistoryDTO { 
    std::vector<RosterMemberDTO> rosters; 
  };
  void to_json(json& j, const PlayerRosterHistoryDTO& v) {
  j["rosters"] = v.rosters; 
  }
  void from_json(const json& j, PlayerRosterHistoryDTO& v) {
  v.rosters = j.at("rosters").get<std::vector<RosterMemberDTO>>(); 
  }
}