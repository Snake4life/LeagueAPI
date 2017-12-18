#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/RecofrienderContactResource.hpp"
namespace lol {
  inline Result<std::vector<RecofrienderContactResource>> GetRecofrienderV1Contacts(LeagueClient& _client, const std::optional<uint64_t>& accountId = std::nullopt, const std::optional<std::string>& source = std::nullopt, const std::optional<std::string>& friendState = std::nullopt)
  {
    try {
      return ToResult<std::vector<RecofrienderContactResource>>(_client.https.request("get", "/recofriender/v1/contacts?" +
        SimpleWeb::QueryString::create(Args2Headers({ 
          { "accountId", to_string(accountId) },
          { "source", to_string(source) },
          { "friendState", to_string(friendState) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::vector<RecofrienderContactResource>>(e.code());
    }
  }
  inline void GetRecofrienderV1Contacts(LeagueClient& _client, const std::optional<uint64_t>& accountId = std::nullopt, const std::optional<std::string>& source = std::nullopt, const std::optional<std::string>& friendState = std::nullopt, std::function<void(LeagueClient&, const Result<std::vector<RecofrienderContactResource>>&)> cb)
  {
    _client.httpsa.request("get", "/recofriender/v1/contacts?" +
      SimpleWeb::QueryString::create(Args2Headers({ 
          { "accountId", to_string(accountId) },
          { "source", to_string(source) },
          { "friendState", to_string(friendState) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::vector<RecofrienderContactResource>>(e));
            else
              cb(_client, ToResult<std::vector<RecofrienderContactResource>>(response));
        });
  }
}