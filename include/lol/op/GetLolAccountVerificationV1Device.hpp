#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolAccountVerificationDeviceResponse.hpp"
namespace lol {
  template<typename T>
  inline Result<LolAccountVerificationDeviceResponse> GetLolAccountVerificationV1Device(T& _client)
  {
    try {
      return ToResult<LolAccountVerificationDeviceResponse>(_client.https.request("get", "/lol-account-verification/v1/device?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolAccountVerificationDeviceResponse>(e.code());
    }
  }
  template<typename T>
  inline void GetLolAccountVerificationV1Device(T& _client, std::function<void(T&, const Result<LolAccountVerificationDeviceResponse>&)> cb)
  {
    _client.httpsa.request("get", "/lol-account-verification/v1/device?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolAccountVerificationDeviceResponse>(e));
            else
              cb(_client, ToResult<LolAccountVerificationDeviceResponse>(response));
        });
  }
}