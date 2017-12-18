#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolClashPlayerChatRoster.hpp"
namespace lol {
  inline Result<std::vector<LolClashPlayerChatRoster>> GetLolClashV1PlayerChatRosters(LeagueClient& _client)
  {
    try {
      return ToResult<std::vector<LolClashPlayerChatRoster>>(_client.https.request("get", "/lol-clash/v1/player/chat-rosters?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::vector<LolClashPlayerChatRoster>>(e.code());
    }
  }
  inline void GetLolClashV1PlayerChatRosters(LeagueClient& _client, std::function<void(LeagueClient&, const Result<std::vector<LolClashPlayerChatRoster>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-clash/v1/player/chat-rosters?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::vector<LolClashPlayerChatRoster>>(e));
            else
              cb(_client, ToResult<std::vector<LolClashPlayerChatRoster>>(response));
        });
  }
}