#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolClashTournamentGameEnd.hpp"
namespace lol {
  inline Result<LolClashTournamentGameEnd> GetLolClashV1GameEnd(LeagueClient& _client)
  {
    try {
      return ToResult<LolClashTournamentGameEnd>(_client.https.request("get", "/lol-clash/v1/gameEnd?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolClashTournamentGameEnd>(e.code());
    }
  }
  inline void GetLolClashV1GameEnd(LeagueClient& _client, std::function<void(LeagueClient&, const Result<LolClashTournamentGameEnd>&)> cb)
  {
    _client.httpsa.request("get", "/lol-clash/v1/gameEnd?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolClashTournamentGameEnd>(e));
            else
              cb(_client, ToResult<LolClashTournamentGameEnd>(response));
        });
  }
}