#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  template<typename T>
  inline Result<Nothing> PostProcessControlV1ProcessRestart(T& _client, const uint32_t& delaySeconds, const std::optional<uint32_t>& restartVersion = std::nullopt)
  {
    try {
      return ToResult<Nothing>(_client.https.request("post", "/process-control/v1/process/restart?" +
        SimpleWeb::QueryString::create(Args2Headers({ 
          { "delaySeconds", to_string(delaySeconds) },
          { "restartVersion", to_string(restartVersion) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<Nothing>(e.code());
    }
  }
  template<typename T>
  inline void PostProcessControlV1ProcessRestart(T& _client, const uint32_t& delaySeconds, const std::optional<uint32_t>& restartVersion = std::nullopt, std::function<void(T&, const Result<Nothing>&)> cb)
  {
    _client.httpsa.request("post", "/process-control/v1/process/restart?" +
      SimpleWeb::QueryString::create(Args2Headers({ 
          { "delaySeconds", to_string(delaySeconds) },
          { "restartVersion", to_string(restartVersion) }, })), 
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