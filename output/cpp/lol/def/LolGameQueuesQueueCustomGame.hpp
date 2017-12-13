#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolGameQueuesQueueAvailability.hpp>
#include <lol/def/LolGameQueuesQueueCustomGameSpectatorPolicy.hpp>
#include <lol/def/LolGameQueuesQueueCustomGameSubcategory.hpp>
namespace lol {
  struct LolGameQueuesQueueCustomGame { 
    std::vector<LolGameQueuesQueueCustomGameSubcategory> subcategories;
    std::optional<std::vector<std::string>> gameServerRegions;
    std::vector<LolGameQueuesQueueCustomGameSpectatorPolicy> spectatorPolicies;
    uint32_t spectatorSlotLimit;
    LolGameQueuesQueueAvailability queueAvailability; 
  };
  void to_json(json& j, const LolGameQueuesQueueCustomGame& v) {
    j["subcategories"] = v.subcategories; 
    if(v.gameServerRegions)
      j["gameServerRegions"] = *v.gameServerRegions;
    j["spectatorPolicies"] = v.spectatorPolicies; 
    j["spectatorSlotLimit"] = v.spectatorSlotLimit; 
    j["queueAvailability"] = v.queueAvailability; 
  }
  void from_json(const json& j, LolGameQueuesQueueCustomGame& v) {
    v.subcategories = j.at("subcategories").get<std::vector<LolGameQueuesQueueCustomGameSubcategory>>(); 
    if(auto it = j.find("gameServerRegions"); it != j.end() && !it->is_null())
      v.gameServerRegions = it->get<std::optional<std::vector<std::string>>>(); 
    v.spectatorPolicies = j.at("spectatorPolicies").get<std::vector<LolGameQueuesQueueCustomGameSpectatorPolicy>>(); 
    v.spectatorSlotLimit = j.at("spectatorSlotLimit").get<uint32_t>(); 
    v.queueAvailability = j.at("queueAvailability").get<LolGameQueuesQueueAvailability>(); 
  }
}