#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/PlaytimeReminder.hpp>
namespace lol {
  Result<PlaytimeReminder> GetLolKrPlaytimeReminderV1Playtime(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-kr-playtime-reminder/v1/playtime?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}