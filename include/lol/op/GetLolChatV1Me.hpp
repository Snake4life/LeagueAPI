#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolChatUserResource.hpp"
namespace lol {
  inline Result<LolChatUserResource> GetLolChatV1Me(LeagueClient& _client)
  {
    try {
      return ToResult<LolChatUserResource>(_client.https.request("get", "/lol-chat/v1/me?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolChatUserResource>(e.code());
    }
  }
  inline void GetLolChatV1Me(LeagueClient& _client, std::function<void(LeagueClient&, const Result<LolChatUserResource>&)> cb)
  {
    _client.httpsa.request("get", "/lol-chat/v1/me?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolChatUserResource>(e));
            else
              cb(_client, ToResult<LolChatUserResource>(response));
        });
  }
}