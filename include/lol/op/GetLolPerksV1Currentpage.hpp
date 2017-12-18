#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolPerksPerkPageResource.hpp"
namespace lol {
  inline Result<LolPerksPerkPageResource> GetLolPerksV1Currentpage(LeagueClient& _client)
  {
    try {
      return ToResult<LolPerksPerkPageResource>(_client.https.request("get", "/lol-perks/v1/currentpage?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolPerksPerkPageResource>(e.code());
    }
  }
  inline void GetLolPerksV1Currentpage(LeagueClient& _client, std::function<void(LeagueClient&, const Result<LolPerksPerkPageResource>&)> cb)
  {
    _client.httpsa.request("get", "/lol-perks/v1/currentpage?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolPerksPerkPageResource>(e));
            else
              cb(_client, ToResult<LolPerksPerkPageResource>(response));
        });
  }
}