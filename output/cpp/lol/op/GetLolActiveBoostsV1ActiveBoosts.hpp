#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/ActiveBoosts.hpp>
namespace lol {
  Result<ActiveBoosts> GetLolActiveBoostsV1ActiveBoosts(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<ActiveBoosts> {
        _client_.request("get", "/lol-active-boosts/v1/active-boosts?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<ActiveBoosts> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}