#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/RankedLeagueListDTO.hpp>
namespace lol {
  struct RankedSummonerLeaguesDTO { 
    std::vector<RankedLeagueListDTO> summonerLeagues; 
  };
  void to_json(json& j, const RankedSummonerLeaguesDTO& v) {
    j["summonerLeagues"] = v.summonerLeagues; 
  }
  void from_json(const json& j, RankedSummonerLeaguesDTO& v) {
    v.summonerLeagues = j.at("summonerLeagues").get<std::vector<RankedLeagueListDTO>>(); 
  }
}