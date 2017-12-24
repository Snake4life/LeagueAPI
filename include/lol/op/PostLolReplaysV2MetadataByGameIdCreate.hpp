#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolReplaysReplayCreateMetadata.hpp"
namespace lol {
  inline Result<std::nullptr_t> PostLolReplaysV2MetadataByGameIdCreate(LeagueClient& _client, const uint64_t& gameId, const LolReplaysReplayCreateMetadata& request)
  {
    try {
      return ToResult<std::nullptr_t>(_client.https.request("post", "/lol-replays/v2/metadata/"+to_string(gameId)+"/create?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(request).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::nullptr_t>(e.code());
    }
  }
  inline void PostLolReplaysV2MetadataByGameIdCreate(LeagueClient& _client, const uint64_t& gameId, const LolReplaysReplayCreateMetadata& request, std::function<void(LeagueClient&, const Result<std::nullptr_t>&)> cb)
  {
    _client.httpsa.request("post", "/lol-replays/v2/metadata/"+to_string(gameId)+"/create?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(request).dump(),
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