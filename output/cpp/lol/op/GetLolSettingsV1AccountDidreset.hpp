#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<bool> GetLolSettingsV1AccountDidreset(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-settings/v1/account/didreset?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}