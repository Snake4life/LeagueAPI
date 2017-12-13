#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLoginUsernameAndPassword { 
    std::string password;
    std::string username; 
  };
  void to_json(json& j, const LolLoginUsernameAndPassword& v) {
    j["password"] = v.password; 
    j["username"] = v.username; 
  }
  void from_json(const json& j, LolLoginUsernameAndPassword& v) {
    v.password = j.at("password").get<std::string>(); 
    v.username = j.at("username").get<std::string>(); 
  }
}