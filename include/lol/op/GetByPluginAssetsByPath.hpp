#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  template<typename T>
  inline Result<json> GetByPluginAssetsByPath(T& _client, const std::string& plugin, const std::string& path, const std::optional<std::string>& if_none_match = std::nullopt)
  {
    try {
      return ToResult<json>(_client.https.request("get", "/"+to_string(plugin)+"/assets/"+to_string(path)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth}, 
          { "if-none-match", to_string(if_none_match) }, })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<json>(e.code());
    }
  }
  template<typename T>
  inline void GetByPluginAssetsByPath(T& _client, const std::string& plugin, const std::string& path, const std::optional<std::string>& if_none_match = std::nullopt, std::function<void(T&, const Result<json>&)> cb)
  {
    _client.httpsa.request("get", "/"+to_string(plugin)+"/assets/"+to_string(path)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth}, 
          { "if-none-match", to_string(if_none_match) }, }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<json>(e));
            else
              cb(_client, ToResult<json>(response));
        });
  }
}