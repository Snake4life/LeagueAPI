#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLobbyLobbyCustomGame.hpp"
namespace lol {
  inline Result<std::vector<LolLobbyLobbyCustomGame>> GetLolLobbyV1CustomGames(LeagueClient& _client)
  {
    try {
      return ToResult<std::vector<LolLobbyLobbyCustomGame>>(_client.https.request("get", "/lol-lobby/v1/custom-games?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::vector<LolLobbyLobbyCustomGame>>(e.code());
    }
  }
  inline void GetLolLobbyV1CustomGames(LeagueClient& _client, std::function<void(LeagueClient&, const Result<std::vector<LolLobbyLobbyCustomGame>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-lobby/v1/custom-games?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::vector<LolLobbyLobbyCustomGame>>(e));
            else
              cb(_client, ToResult<std::vector<LolLobbyLobbyCustomGame>>(response));
        });
  }
}