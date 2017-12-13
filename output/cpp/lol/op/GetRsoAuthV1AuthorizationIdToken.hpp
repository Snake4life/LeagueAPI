#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/RsoAuthIdToken.hpp>
namespace lol {
  Result<RsoAuthIdToken> GetRsoAuthV1AuthorizationIdToken(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<RsoAuthIdToken> {
        _client_.request("get", "/rso-auth/v1/authorization/id-token?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<RsoAuthIdToken> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}