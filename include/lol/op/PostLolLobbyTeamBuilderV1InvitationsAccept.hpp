#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLobbyTeamBuilderLobbyInvitation.hpp"
namespace lol {
  template<typename T>
  inline Result<json> PostLolLobbyTeamBuilderV1InvitationsAccept(T& _client, const LolLobbyTeamBuilderLobbyInvitation& invitation)
  {
    try {
      return ToResult<json>(_client.https.request("post", "/lol-lobby-team-builder/v1/invitations/accept?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(invitation).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<json>(e.code());
    }
  }
  template<typename T>
  inline void PostLolLobbyTeamBuilderV1InvitationsAccept(T& _client, const LolLobbyTeamBuilderLobbyInvitation& invitation, std::function<void(T&, const Result<json>&)> cb)
  {
    _client.httpsa.request("post", "/lol-lobby-team-builder/v1/invitations/accept?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(invitation).dump(),
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