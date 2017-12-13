#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<json> HttpApiDocsV3(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/v3/openapi.json?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}