#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLeaguesSignedSummonerLeagueItemsDTO.hpp>
namespace lol {
  Result<LolLeaguesSignedSummonerLeagueItemsDTO> GetLolLeaguesV2SummonerLeaguesCurrentSummonerSignedLeagues(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-leagues/v2/summoner-leagues/current-summoner/signed-leagues?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}