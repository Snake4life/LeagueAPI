#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolInventoryInventoryItem.hpp>
namespace lol {
  Result<std::vector<LolInventoryInventoryItem>> GetLolInventoryV1Inventory(const LeagueClient& _client, const std::vector<std::string>& inventoryTypes)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::vector<LolInventoryInventoryItem>> {
        _client_.request("get", "/lol-inventory/v1/inventory?" +
          SimpleWeb::QueryString::create(Args2Headers({ 
           { "inventoryTypes", to_string(inventoryTypes) }, })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolInventoryInventoryItem>> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}