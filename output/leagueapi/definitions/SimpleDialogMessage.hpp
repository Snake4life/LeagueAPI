#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct SimpleDialogMessage { /**/ 
    std::string type;/**/
    std::string msgId;/**/
    uint64_t accountId;/**/
    json params;/**/
  };
  static void to_json(json& j, const SimpleDialogMessage& v) { 
    j["type"] = v.type;
    j["msgId"] = v.msgId;
    j["accountId"] = v.accountId;
    j["params"] = v.params;
  }
  static void from_json(const json& j, SimpleDialogMessage& v) { 
    v.type = j.at("type").get<std::string>(); 
    v.msgId = j.at("msgId").get<std::string>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.params = j.at("params").get<json>(); 
  }
} 