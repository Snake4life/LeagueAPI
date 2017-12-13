#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<json> GetLolAcsV1GametimelinesByGameId(const LeagueClient& _client, const uint64_t& gameId)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-acs/v1/gametimelines/"+to_string(gameId)+"?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}