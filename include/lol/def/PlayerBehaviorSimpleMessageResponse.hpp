#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct PlayerBehaviorSimpleMessageResponse { 
    uint64_t accountId;
    std::string msgId;
    std::string command; 
  };
  inline void to_json(json& j, const PlayerBehaviorSimpleMessageResponse& v) {
    j["accountId"] = v.accountId; 
    j["msgId"] = v.msgId; 
    j["command"] = v.command; 
  }
  inline void from_json(const json& j, PlayerBehaviorSimpleMessageResponse& v) {
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.msgId = j.at("msgId").get<std::string>(); 
    v.command = j.at("command").get<std::string>(); 
  }
}