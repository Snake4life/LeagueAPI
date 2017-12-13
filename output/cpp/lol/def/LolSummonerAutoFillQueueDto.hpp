#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolSummonerAutoFillQueueDto { 
    bool autoFillProtectedForStreaking;
    bool autoFillEligible;
    int32_t queueId;
    bool autoFillProtectedForPromos; 
  };
  void to_json(json& j, const LolSummonerAutoFillQueueDto& v) {
    j["autoFillProtectedForStreaking"] = v.autoFillProtectedForStreaking; 
    j["autoFillEligible"] = v.autoFillEligible; 
    j["queueId"] = v.queueId; 
    j["autoFillProtectedForPromos"] = v.autoFillProtectedForPromos; 
  }
  void from_json(const json& j, LolSummonerAutoFillQueueDto& v) {
    v.autoFillProtectedForStreaking = j.at("autoFillProtectedForStreaking").get<bool>(); 
    v.autoFillEligible = j.at("autoFillEligible").get<bool>(); 
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.autoFillProtectedForPromos = j.at("autoFillProtectedForPromos").get<bool>(); 
  }
}