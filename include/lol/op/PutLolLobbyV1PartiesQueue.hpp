#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  inline Result<std::nullptr_t> PutLolLobbyV1PartiesQueue(LeagueClient& _client, const int32_t& queueId)
  {
    try {
      return ToResult<std::nullptr_t>(_client.https.request("put", "/lol-lobby/v1/parties/queue?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(queueId).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::nullptr_t>(e.code());
    }
  }
  inline void PutLolLobbyV1PartiesQueue(LeagueClient& _client, const int32_t& queueId, std::function<void(LeagueClient&, const Result<std::nullptr_t>&)> cb)
  {
    _client.httpsa.request("put", "/lol-lobby/v1/parties/queue?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(queueId).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::nullptr_t>(e));
            else
              cb(_client, ToResult<std::nullptr_t>(response));
        });
  }
}