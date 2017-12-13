#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<void> PostLolLobbyV2PartiesOverridesEnabledForTeamBuilderQueues(const LeagueClient& _client, const bool& enabledForTeambuilderQueues)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-lobby/v2/parties/overrides/EnabledForTeamBuilderQueues?" + SimpleWeb::QueryString::create(Args2Headers({ { "enabledForTeambuilderQueues", to_string(enabledForTeambuilderQueues) } })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}