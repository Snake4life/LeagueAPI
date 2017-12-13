#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/RegionLocale.hpp>
namespace lol {
  Result<void> PutRiotclientRegionLocale(const LeagueClient& _client, const RegionLocale& data)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<void> {
        _client_.request("put", "/riotclient/region-locale?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(data).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<void> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}