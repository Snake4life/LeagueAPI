#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolChatSessionResource.hpp"
namespace lol {
  inline Result<LolChatSessionResource> GetLolChatV1Session(LeagueClient& _client)
  {
    try {
      return ToResult<LolChatSessionResource>(_client.https.request("get", "/lol-chat/v1/session?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolChatSessionResource>(e.code());
    }
  }
  inline void GetLolChatV1Session(LeagueClient& _client, std::function<void(LeagueClient&, const Result<LolChatSessionResource>&)> cb)
  {
    _client.httpsa.request("get", "/lol-chat/v1/session?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolChatSessionResource>(e));
            else
              cb(_client, ToResult<LolChatSessionResource>(response));
        });
  }
}