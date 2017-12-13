#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/PlayerClubMembership.hpp>
namespace lol {
  Result<PlayerClubMembership> GetLolClubsV1ClubsMembership(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<PlayerClubMembership> {
        _client_.request("get", "/lol-clubs/v1/clubs/membership?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<PlayerClubMembership> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}