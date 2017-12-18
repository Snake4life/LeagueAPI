#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLeaguesSignedSummonerLeagueItemsDTO.hpp"
namespace lol {
  inline Result<LolLeaguesSignedSummonerLeagueItemsDTO> GetLolLeaguesV2SummonerLeaguesCurrentSummonerSignedLeagues(LeagueClient& _client)
  {
    try {
      return ToResult<LolLeaguesSignedSummonerLeagueItemsDTO>(_client.https.request("get", "/lol-leagues/v2/summoner-leagues/current-summoner/signed-leagues?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolLeaguesSignedSummonerLeagueItemsDTO>(e.code());
    }
  }
  inline void GetLolLeaguesV2SummonerLeaguesCurrentSummonerSignedLeagues(LeagueClient& _client, std::function<void(LeagueClient&, const Result<LolLeaguesSignedSummonerLeagueItemsDTO>&)> cb)
  {
    _client.httpsa.request("get", "/lol-leagues/v2/summoner-leagues/current-summoner/signed-leagues?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolLeaguesSignedSummonerLeagueItemsDTO>(e));
            else
              cb(_client, ToResult<LolLeaguesSignedSummonerLeagueItemsDTO>(response));
        });
  }
}