#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolChatUserResource { 
    std::map<std::string, std::string> lol;
    int32_t icon;
    std::optional<std::string> statusMessage;
    std::optional<std::string> lastSeenOnlineTimestamp;
    std::string name;
    std::string availability;
    uint64_t id; 
  };
  void to_json(json& j, const LolChatUserResource& v) {
    j["lol"] = v.lol; 
    j["icon"] = v.icon; 
    if(v.statusMessage)
      j["statusMessage"] = *v.statusMessage;
    if(v.lastSeenOnlineTimestamp)
      j["lastSeenOnlineTimestamp"] = *v.lastSeenOnlineTimestamp;
    j["name"] = v.name; 
    j["availability"] = v.availability; 
    j["id"] = v.id; 
  }
  void from_json(const json& j, LolChatUserResource& v) {
    v.lol = j.at("lol").get<std::map<std::string, std::string>>(); 
    v.icon = j.at("icon").get<int32_t>(); 
    if(auto it = j.find("statusMessage"); it != j.end() && !it->is_null())
      v.statusMessage = it->get<std::optional<std::string>>(); 
    if(auto it = j.find("lastSeenOnlineTimestamp"); it != j.end() && !it->is_null())
      v.lastSeenOnlineTimestamp = it->get<std::optional<std::string>>(); 
    v.name = j.at("name").get<std::string>(); 
    v.availability = j.at("availability").get<std::string>(); 
    v.id = j.at("id").get<uint64_t>(); 
  }
}