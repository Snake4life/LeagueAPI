#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/SubState.hpp>"
#include "<leagueapi/definitions/Position.hpp>"

namespace leagueapi {
  struct PhaseRosterSubDTO { /**/ 
    uint64_t playerId;/**/
    SubState subState;/**/
    int32_t pay;/**/
    uint64_t replacedPlayerId;/**/
    Position position;/**/
    int32_t bet;/**/
  };
  static void to_json(json& j, const PhaseRosterSubDTO& v) { 
    j["playerId"] = v.playerId;
    j["subState"] = v.subState;
    j["pay"] = v.pay;
    j["replacedPlayerId"] = v.replacedPlayerId;
    j["position"] = v.position;
    j["bet"] = v.bet;
  }
  static void from_json(const json& j, PhaseRosterSubDTO& v) { 
    v.playerId = j.at("playerId").get<uint64_t>(); 
    v.subState = j.at("subState").get<SubState>(); 
    v.pay = j.at("pay").get<int32_t>(); 
    v.replacedPlayerId = j.at("replacedPlayerId").get<uint64_t>(); 
    v.position = j.at("position").get<Position>(); 
    v.bet = j.at("bet").get<int32_t>(); 
  }
} 