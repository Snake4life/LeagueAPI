#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  template<typename T>
  inline Result<Nothing> PutLolLoginV1ShutdownLocksByLockName(T& _client, const std::string& lockName)
  {
    try {
      return ToResult<Nothing>(_client.https.request("put", "/lol-login/v1/shutdown-locks/"+to_string(lockName)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<Nothing>(e.code());
    }
  }
  template<typename T>
  inline void PutLolLoginV1ShutdownLocksByLockName(T& _client, const std::string& lockName, std::function<void(T&, const Result<Nothing>&)> cb)
  {
    _client.httpsa.request("put", "/lol-login/v1/shutdown-locks/"+to_string(lockName)+"?" +
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