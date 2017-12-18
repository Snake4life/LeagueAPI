#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  inline Result<std::nullptr_t> DeleteLolGameClientChatV1IgnoredSummoners(LeagueClient& _client, const std::string& summonerName)
  {
    try {
      return ToResult<std::nullptr_t>(_client.https.request("delete", "/lol-game-client-chat/v1/ignored-summoners?" +
        SimpleWeb::QueryString::create(Args2Headers({ 
          { "summonerName", to_string(summonerName) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::nullptr_t>(e.code());
    }
  }
  inline void DeleteLolGameClientChatV1IgnoredSummoners(LeagueClient& _client, const std::string& summonerName, std::function<void(LeagueClient&, const Result<std::nullptr_t>&)> cb)
  {
    _client.httpsa.request("delete", "/lol-game-client-chat/v1/ignored-summoners?" +
      SimpleWeb::QueryString::create(Args2Headers({ 
          { "summonerName", to_string(summonerName) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::nullptr_t>(e));
            else
              cb(_client, ToResult<std::nullptr_t>(response));
        });
  }
}