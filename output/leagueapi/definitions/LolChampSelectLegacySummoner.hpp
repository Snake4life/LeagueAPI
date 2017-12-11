#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolChampSelectLegacySummoner { /**/ 
    uint32_t summonerLevel;/**/
  };
  static void to_json(json& j, const LolChampSelectLegacySummoner& v) { 
    j["summonerLevel"] = v.summonerLevel;
  }
  static void from_json(const json& j, LolChampSelectLegacySummoner& v) { 
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>(); 
  }
} 