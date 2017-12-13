#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<void> DeleteRiotMessagingServiceV1Connect(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("delete", "/riot-messaging-service/v1/connect?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}