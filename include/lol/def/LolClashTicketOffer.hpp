#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolClashTicketOffer { 
    uint64_t summonerId;
    int32_t amount;
    bool isAccepted; 
  };
  inline void to_json(json& j, const LolClashTicketOffer& v) {
    j["summonerId"] = v.summonerId; 
    j["amount"] = v.amount; 
    j["isAccepted"] = v.isAccepted; 
  }
  inline void from_json(const json& j, LolClashTicketOffer& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.amount = j.at("amount").get<int32_t>(); 
    v.isAccepted = j.at("isAccepted").get<bool>(); 
  }
}