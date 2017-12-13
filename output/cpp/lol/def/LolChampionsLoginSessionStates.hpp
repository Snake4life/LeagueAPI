#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolChampionsLoginSessionStates {  
    ERROR_e = 3,
    IN_PROGRESS_e = 0,
    LOGGING_OUT_e = 2,
    SUCCEEDED_e = 1,
  };
  void to_json(json& j, const LolChampionsLoginSessionStates& v) {
  if(v == LolChampionsLoginSessionStates::ERROR_e) {
    j = "ERROR";
    return;
  }
  if(v == LolChampionsLoginSessionStates::IN_PROGRESS_e) {
    j = "IN_PROGRESS";
    return;
  }
  if(v == LolChampionsLoginSessionStates::LOGGING_OUT_e) {
    j = "LOGGING_OUT";
    return;
  }
  if(v == LolChampionsLoginSessionStates::SUCCEEDED_e) {
    j = "SUCCEEDED";
    return;
  }
  }
  void from_json(const json& j, LolChampionsLoginSessionStates& v) {
  if(j.get<std::string>() == "ERROR") {
    v = LolChampionsLoginSessionStates::ERROR_e;
    return;
  } 
  if(j.get<std::string>() == "IN_PROGRESS") {
    v = LolChampionsLoginSessionStates::IN_PROGRESS_e;
    return;
  } 
  if(j.get<std::string>() == "LOGGING_OUT") {
    v = LolChampionsLoginSessionStates::LOGGING_OUT_e;
    return;
  } 
  if(j.get<std::string>() == "SUCCEEDED") {
    v = LolChampionsLoginSessionStates::SUCCEEDED_e;
    return;
  } 
  }
}