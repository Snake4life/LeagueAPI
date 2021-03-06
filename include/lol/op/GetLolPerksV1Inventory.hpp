#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolPerksPlayerInventory.hpp"
namespace lol {
  template<typename T>
  inline Result<LolPerksPlayerInventory> GetLolPerksV1Inventory(T& _client)
  {
    try {
      return ToResult<LolPerksPlayerInventory>(_client.https.request("get", "/lol-perks/v1/inventory?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolPerksPlayerInventory>(e.code());
    }
  }
  template<typename T>
  inline void GetLolPerksV1Inventory(T& _client, std::function<void(T&, const Result<LolPerksPlayerInventory>&)> cb)
  {
    _client.httpsa.request("get", "/lol-perks/v1/inventory?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolPerksPlayerInventory>(e));
            else
              cb(_client, ToResult<LolPerksPlayerInventory>(response));
        });
  }
}