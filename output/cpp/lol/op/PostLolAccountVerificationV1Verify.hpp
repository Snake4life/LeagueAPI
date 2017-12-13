#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolAccountVerificationVerifyResponse.hpp>
#include <lol/def/LolAccountVerificationVerifyRequest.hpp>
namespace lol {
  Result<LolAccountVerificationVerifyResponse> PostLolAccountVerificationV1Verify(const LeagueClient& _client, const LolAccountVerificationVerifyRequest& VerifyRequest)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolAccountVerificationVerifyResponse> {
        _client_.request("post", "/lol-account-verification/v1/verify?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(VerifyRequest).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolAccountVerificationVerifyResponse> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}