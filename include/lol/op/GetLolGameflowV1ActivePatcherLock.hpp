#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  template<typename T>
  inline Result<bool> GetLolGameflowV1ActivePatcherLock(T& _client)
  {
    try {
      return ToResult<bool>(_client.https.request("get", "/lol-gameflow/v1/active-patcher-lock?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<bool>(e.code());
    }
  }
  template<typename T>
  inline void GetLolGameflowV1ActivePatcherLock(T& _client, std::function<void(T&, const Result<bool>&)> cb)
  {
    _client.httpsa.request("get", "/lol-gameflow/v1/active-patcher-lock?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<bool>(e));
            else
              cb(_client, ToResult<bool>(response));
        });
  }
}