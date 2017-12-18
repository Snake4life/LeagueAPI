#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolChatGroupResource.hpp"
namespace lol {
  inline Result<json> PostLolChatV1FriendGroups(LeagueClient& _client, const LolChatGroupResource& group)
  {
    try {
      return ToResult<json>(_client.https.request("post", "/lol-chat/v1/friend-groups?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(group).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<json>(e.code());
    }
  }
  inline void PostLolChatV1FriendGroups(LeagueClient& _client, const LolChatGroupResource& group, std::function<void(LeagueClient&, const Result<json>&)> cb)
  {
    _client.httpsa.request("post", "/lol-chat/v1/friend-groups?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(group).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<json>(e));
            else
              cb(_client, ToResult<json>(response));
        });
  }
}