#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/SpectateGameInfo.hpp"
namespace lol {
  inline Result<json> PostLolSpectatorV1SpectateLaunch(LeagueClient& _client, const SpectateGameInfo& spectateGameInfo)
  {
    try {
      return ToResult<json>(_client.https.request("post", "/lol-spectator/v1/spectate/launch?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(spectateGameInfo).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<json>(e.code());
    }
  }
  inline void PostLolSpectatorV1SpectateLaunch(LeagueClient& _client, const SpectateGameInfo& spectateGameInfo, std::function<void(LeagueClient&, const Result<json>&)> cb)
  {
    _client.httpsa.request("post", "/lol-spectator/v1/spectate/launch?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(spectateGameInfo).dump(),
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