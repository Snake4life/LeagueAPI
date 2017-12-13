#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<void> GetLolLootV1RecipesConfiguration(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-loot/v1/recipes/configuration?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}