#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LeaverBusterLcdsSimpleMessage { 
    std::string type;
    std::string msgId;
    uint64_t accountId;
    std::vector<std::string> params; 
  };
  void to_json(json& j, const LeaverBusterLcdsSimpleMessage& v) {
  j["type"] = v.type; 
  j["msgId"] = v.msgId; 
  j["accountId"] = v.accountId; 
  j["params"] = v.params; 
  }
  void from_json(const json& j, LeaverBusterLcdsSimpleMessage& v) {
  v.type = j.at("type").get<std::string>(); 
  v.msgId = j.at("msgId").get<std::string>(); 
  v.accountId = j.at("accountId").get<uint64_t>(); 
  v.params = j.at("params").get<std::vector<std::string>>(); 
  }
}