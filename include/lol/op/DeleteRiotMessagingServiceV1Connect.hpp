#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  template<typename T>
  inline Result<Nothing> DeleteRiotMessagingServiceV1Connect(T& _client)
  {
    try {
      return ToResult<Nothing>(_client.https.request("delete", "/riot-messaging-service/v1/connect?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<Nothing>(e.code());
    }
  }
  template<typename T>
  inline void DeleteRiotMessagingServiceV1Connect(T& _client, std::function<void(T&, const Result<Nothing>&)> cb)
  {
    _client.httpsa.request("delete", "/riot-messaging-service/v1/connect?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<Nothing>(e));
            else
              cb(_client, ToResult<Nothing>(response));
        });
  }
}