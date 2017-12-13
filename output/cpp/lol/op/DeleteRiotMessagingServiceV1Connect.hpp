#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<void> DeleteRiotMessagingServiceV1Connect(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<void> {
        _client_.request("delete", "/riot-messaging-service/v1/connect?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<void> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}