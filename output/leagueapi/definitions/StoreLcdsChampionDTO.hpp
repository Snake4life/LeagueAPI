#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/StoreLcdsChampionSkinDTO.hpp>"

namespace leagueapi {
  struct StoreLcdsChampionDTO { /**/ 
    bool rankedPlayEnabled;/**/
    bool freeToPlay;/**/
    uint64_t endDate;/**/
    std::vector<std::string> sources;/**/
    int32_t championId;/**/
    uint32_t winCountRemaining;/**/
    std::vector<StoreLcdsChampionSkinDTO> championSkins;/**/
    bool botEnabled;/**/
    uint64_t purchaseDate;/**/
    bool freeToPlayReward;/**/
    bool active;/**/
    bool owned;/**/
  };
  static void to_json(json& j, const StoreLcdsChampionDTO& v) { 
    j["rankedPlayEnabled"] = v.rankedPlayEnabled;
    j["freeToPlay"] = v.freeToPlay;
    j["endDate"] = v.endDate;
    j["sources"] = v.sources;
    j["championId"] = v.championId;
    j["winCountRemaining"] = v.winCountRemaining;
    j["championSkins"] = v.championSkins;
    j["botEnabled"] = v.botEnabled;
    j["purchaseDate"] = v.purchaseDate;
    j["freeToPlayReward"] = v.freeToPlayReward;
    j["active"] = v.active;
    j["owned"] = v.owned;
  }
  static void from_json(const json& j, StoreLcdsChampionDTO& v) { 
    v.rankedPlayEnabled = j.at("rankedPlayEnabled").get<bool>(); 
    v.freeToPlay = j.at("freeToPlay").get<bool>(); 
    v.endDate = j.at("endDate").get<uint64_t>(); 
    v.sources = j.at("sources").get<std::vector<std::string>>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.winCountRemaining = j.at("winCountRemaining").get<uint32_t>(); 
    v.championSkins = j.at("championSkins").get<std::vector<StoreLcdsChampionSkinDTO>>(); 
    v.botEnabled = j.at("botEnabled").get<bool>(); 
    v.purchaseDate = j.at("purchaseDate").get<uint64_t>(); 
    v.freeToPlayReward = j.at("freeToPlayReward").get<bool>(); 
    v.active = j.at("active").get<bool>(); 
    v.owned = j.at("owned").get<bool>(); 
  }
} 