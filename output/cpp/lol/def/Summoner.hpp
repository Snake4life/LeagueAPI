#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct Summoner { 
    uint64_t acctId;
    uint64_t sumId; 
  };
  void to_json(json& j, const Summoner& v) {
    j["acctId"] = v.acctId; 
    j["sumId"] = v.sumId; 
  }
  void from_json(const json& j, Summoner& v) {
    v.acctId = j.at("acctId").get<uint64_t>(); 
    v.sumId = j.at("sumId").get<uint64_t>(); 
  }
}