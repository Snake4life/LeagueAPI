#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolCollectionsCollectionsChampionMastery.hpp>
namespace lol {
  Result<std::vector<LolCollectionsCollectionsChampionMastery>> GetLolCollectionsV1InventoriesBySummonerIdChampionMastery(const LeagueClient& _client, const uint64_t& summonerId)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::vector<LolCollectionsCollectionsChampionMastery>> {
        _client_.request("get", "/lol-collections/v1/inventories/"+to_string(summonerId)+"/champion-mastery?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolCollectionsCollectionsChampionMastery>> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}