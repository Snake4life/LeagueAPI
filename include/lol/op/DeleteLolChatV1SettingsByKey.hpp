#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  inline Result<json> DeleteLolChatV1SettingsByKey(LeagueClient& _client, const std::string& key, const std::optional<bool>& doAsync = std::nullopt)
  {
    try {
      return ToResult<json>(_client.https.request("delete", "/lol-chat/v1/settings/"+to_string(key)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({ 
          { "doAsync", to_string(doAsync) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<json>(e.code());
    }
  }
  inline void DeleteLolChatV1SettingsByKey(LeagueClient& _client, const std::string& key, const std::optional<bool>& doAsync = std::nullopt, std::function<void(LeagueClient&, const Result<json>&)> cb)
  {
    _client.httpsa.request("delete", "/lol-chat/v1/settings/"+to_string(key)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({ 
          { "doAsync", to_string(doAsync) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<json>(e));
            else
              cb(_client, ToResult<json>(response));
        });
  }
}