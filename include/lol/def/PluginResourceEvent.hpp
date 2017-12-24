#pragma once
#include "../base_def.hpp" 
#include "PluginResourceEventType.hpp"
namespace lol {
  struct PluginResourceEvent { 
    PluginResourceEventType eventType;
    std::string uri;
    json data; 
  };
  inline void to_json(json& j, const PluginResourceEvent& v) {
    j["eventType"] = v.eventType; 
    j["uri"] = v.uri; 
    j["data"] = v.data; 
  }
  inline void from_json(const json& j, PluginResourceEvent& v) {
    v.eventType = j.at("eventType").get<PluginResourceEventType>(); 
    v.uri = j.at("uri").get<std::string>(); 
    v.data = j.at("data").get<json>(); 
  }
}