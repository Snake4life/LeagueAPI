#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLoginLoginQueue { 
    bool isPositionCapped;
    uint64_t estimatedPositionInQueue;
    std::optional<uint64_t> approximateWaitTimeSeconds; 
  };
  inline void to_json(json& j, const LolLoginLoginQueue& v) {
    j["isPositionCapped"] = v.isPositionCapped; 
    j["estimatedPositionInQueue"] = v.estimatedPositionInQueue; 
    if(v.approximateWaitTimeSeconds)
      j["approximateWaitTimeSeconds"] = *v.approximateWaitTimeSeconds;
  }
  inline void from_json(const json& j, LolLoginLoginQueue& v) {
    v.isPositionCapped = j.at("isPositionCapped").get<bool>(); 
    v.estimatedPositionInQueue = j.at("estimatedPositionInQueue").get<uint64_t>(); 
    if(auto it = j.find("approximateWaitTimeSeconds"); it != j.end() && !it->is_null())
      v.approximateWaitTimeSeconds = it->get<std::optional<uint64_t>>(); 
  }
}