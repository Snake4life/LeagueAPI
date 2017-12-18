#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/RsoAuthAuthError.hpp"
namespace lol {
  inline Result<RsoAuthAuthError> GetRsoAuthV1AuthorizationError(LeagueClient& _client)
  {
    try {
      return ToResult<RsoAuthAuthError>(_client.https.request("get", "/rso-auth/v1/authorization/error?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<RsoAuthAuthError>(e.code());
    }
  }
  inline void GetRsoAuthV1AuthorizationError(LeagueClient& _client, std::function<void(LeagueClient&, const Result<RsoAuthAuthError>&)> cb)
  {
    _client.httpsa.request("get", "/rso-auth/v1/authorization/error?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<RsoAuthAuthError>(e));
            else
              cb(_client, ToResult<RsoAuthAuthError>(response));
        });
  }
}