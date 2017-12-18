#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolStoreWallet.hpp"
namespace lol {
  inline Result<LolStoreWallet> GetLolStoreV1Wallet(LeagueClient& _client)
  {
    try {
      return ToResult<LolStoreWallet>(_client.https.request("get", "/lol-store/v1/wallet?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolStoreWallet>(e.code());
    }
  }
  inline void GetLolStoreV1Wallet(LeagueClient& _client, std::function<void(LeagueClient&, const Result<LolStoreWallet>&)> cb)
  {
    _client.httpsa.request("get", "/lol-store/v1/wallet?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolStoreWallet>(e));
            else
              cb(_client, ToResult<LolStoreWallet>(response));
        });
  }
}