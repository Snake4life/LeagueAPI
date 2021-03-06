#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolStoreOrderNotificationResource.hpp"
namespace lol {
  template<typename T>
  inline Result<std::vector<LolStoreOrderNotificationResource>> GetLolStoreV1OrderNotifications(T& _client)
  {
    try {
      return ToResult<std::vector<LolStoreOrderNotificationResource>>(_client.https.request("get", "/lol-store/v1/order-notifications?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::vector<LolStoreOrderNotificationResource>>(e.code());
    }
  }
  template<typename T>
  inline void GetLolStoreV1OrderNotifications(T& _client, std::function<void(T&, const Result<std::vector<LolStoreOrderNotificationResource>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-store/v1/order-notifications?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::vector<LolStoreOrderNotificationResource>>(e));
            else
              cb(_client, ToResult<std::vector<LolStoreOrderNotificationResource>>(response));
        });
  }
}