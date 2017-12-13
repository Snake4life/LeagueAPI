#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/PlayerClub.hpp>
namespace lol {
  Result<PlayerClub> PostLolClubsV1ClubsByClubKeyMembersBySummonerId(const LeagueClient& _client, const std::string& clubKey, const uint64_t& summonerId)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<PlayerClub> {
        _client_.request("post", "/lol-clubs/v1/clubs/"+to_string(clubKey)+"/members/"+to_string(summonerId)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<PlayerClub> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}