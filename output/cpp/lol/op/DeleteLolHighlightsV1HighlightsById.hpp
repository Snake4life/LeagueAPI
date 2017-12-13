#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/Highlight.hpp>
namespace lol {
  Result<Highlight> DeleteLolHighlightsV1HighlightsById(const LeagueClient& _client, const uint64_t& id)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("delete", "/lol-highlights/v1/highlights/"+to_string(id)+"?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}