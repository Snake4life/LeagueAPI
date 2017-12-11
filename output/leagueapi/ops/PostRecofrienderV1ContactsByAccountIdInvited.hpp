#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/RecofrienderContactStateResource.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<RecofrienderContactStateResource> PostRecofrienderV1ContactsByAccountIdInvited (const https::Info& _info_,
      const uint64_t& accountId /**/ ,
      const std::optional<bool>& retainInCache = std::nullopt /**/)
  { 
    return { https::Do(_info_, "post", "/recofriender/v1/contacts/"+to_string(accountId)+"/invited?", { 
      { "retainInCache", https::to_string(retainInCache) },
    }, { 
    },"") };
  }
} 