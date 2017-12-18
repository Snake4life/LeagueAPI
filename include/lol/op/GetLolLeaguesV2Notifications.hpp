#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLeaguesLeaguesNotification.hpp"
namespace lol {
  inline Result<std::vector<LolLeaguesLeaguesNotification>> GetLolLeaguesV2Notifications(LeagueClient& _client)
  {
    try {
      return ToResult<std::vector<LolLeaguesLeaguesNotification>>(_client.https.request("get", "/lol-leagues/v2/notifications?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::vector<LolLeaguesLeaguesNotification>>(e.code());
    }
  }
  inline void GetLolLeaguesV2Notifications(LeagueClient& _client, std::function<void(LeagueClient&, const Result<std::vector<LolLeaguesLeaguesNotification>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-leagues/v2/notifications?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::vector<LolLeaguesLeaguesNotification>>(e));
            else
              cb(_client, ToResult<std::vector<LolLeaguesLeaguesNotification>>(response));
        });
  }
}