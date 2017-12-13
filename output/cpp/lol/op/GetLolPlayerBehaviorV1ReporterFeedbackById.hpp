#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolPlayerBehaviorReporterFeedback.hpp>
namespace lol {
  Result<LolPlayerBehaviorReporterFeedback> GetLolPlayerBehaviorV1ReporterFeedbackById(const LeagueClient& _client, const std::string& id)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolPlayerBehaviorReporterFeedback> {
        _client_.request("get", "/lol-player-behavior/v1/reporter-feedback/"+to_string(id)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolPlayerBehaviorReporterFeedback> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}