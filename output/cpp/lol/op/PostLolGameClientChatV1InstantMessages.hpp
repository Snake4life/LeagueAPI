#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<void> PostLolGameClientChatV1InstantMessages(const LeagueClient& _client, const std::string& summonerName, const std::string& message)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-game-client-chat/v1/instant-messages?" + SimpleWeb::QueryString::create(Args2Headers({ { "summonerName", to_string(summonerName) },
    { "message", to_string(message) } })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}