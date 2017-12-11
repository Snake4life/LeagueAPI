#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LcdsSummoner { /**/ 
    std::string name;/**/
    uint64_t sumId;/**/
  };
  static void to_json(json& j, const LcdsSummoner& v) { 
    j["name"] = v.name;
    j["sumId"] = v.sumId;
  }
  static void from_json(const json& j, LcdsSummoner& v) { 
    v.name = j.at("name").get<std::string>(); 
    v.sumId = j.at("sumId").get<uint64_t>(); 
  }
} 