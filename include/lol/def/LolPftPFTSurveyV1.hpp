#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolPftPFTSurveyV1 { 
    uint64_t id;
    std::string title;
    std::string caption;
    std::string type;
    std::string url; 
  };
  inline void to_json(json& j, const LolPftPFTSurveyV1& v) {
    j["id"] = v.id; 
    j["title"] = v.title; 
    j["caption"] = v.caption; 
    j["type"] = v.type; 
    j["url"] = v.url; 
  }
  inline void from_json(const json& j, LolPftPFTSurveyV1& v) {
    v.id = j.at("id").get<uint64_t>(); 
    v.title = j.at("title").get<std::string>(); 
    v.caption = j.at("caption").get<std::string>(); 
    v.type = j.at("type").get<std::string>(); 
    v.url = j.at("url").get<std::string>(); 
  }
}