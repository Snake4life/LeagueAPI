#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolPftPFTSurvey.hpp"
namespace lol {
  inline Result<LolPftPFTSurvey> GetLolPftV2Survey(LeagueClient& _client)
  {
    try {
      return ToResult<LolPftPFTSurvey>(_client.https.request("get", "/lol-pft/v2/survey?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolPftPFTSurvey>(e.code());
    }
  }
  inline void GetLolPftV2Survey(LeagueClient& _client, std::function<void(LeagueClient&, const Result<LolPftPFTSurvey>&)> cb)
  {
    _client.httpsa.request("get", "/lol-pft/v2/survey?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolPftPFTSurvey>(e));
            else
              cb(_client, ToResult<LolPftPFTSurvey>(response));
        });
  }
}