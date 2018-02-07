#pragma once
#include "../base_def.hpp" 
#include "LolClashQueueAvailability.hpp"
#include "LolClashQueueReward.hpp"
#include "LolClashQueueGameCategory.hpp"
#include "LolClashQueueGameTypeConfig.hpp"
namespace lol {
  struct LolClashQueue { 
    int32_t id;
    int32_t mapId;
    std::string name;
    std::string shortName;
    std::string description;
    std::string detailedDescription;
    std::string type;
    std::string gameMode;
    std::string gameMutator;
    LolClashQueueGameCategory category;
    LolClashQueueGameTypeConfig gameTypeConfig;
    int32_t numPlayersPerTeam;
    int32_t minimumParticipantListSize;
    int32_t maximumParticipantListSize;
    uint32_t minLevel;
    uint32_t maxLevel;
    uint32_t maxSummonerLevelForFirstWinOfTheDay;
    bool isRanked;
    bool isTeamOnly;
    bool areFreeChampionsAllowed;
    bool isTeamBuilderManaged;
    LolClashQueueAvailability queueAvailability;
    LolClashQueueReward queueRewards;
    bool spectatorEnabled; 
  };
  inline void to_json(json& j, const LolClashQueue& v) {
    j["id"] = v.id; 
    j["mapId"] = v.mapId; 
    j["name"] = v.name; 
    j["shortName"] = v.shortName; 
    j["description"] = v.description; 
    j["detailedDescription"] = v.detailedDescription; 
    j["type"] = v.type; 
    j["gameMode"] = v.gameMode; 
    j["gameMutator"] = v.gameMutator; 
    j["category"] = v.category; 
    j["gameTypeConfig"] = v.gameTypeConfig; 
    j["numPlayersPerTeam"] = v.numPlayersPerTeam; 
    j["minimumParticipantListSize"] = v.minimumParticipantListSize; 
    j["maximumParticipantListSize"] = v.maximumParticipantListSize; 
    j["minLevel"] = v.minLevel; 
    j["maxLevel"] = v.maxLevel; 
    j["maxSummonerLevelForFirstWinOfTheDay"] = v.maxSummonerLevelForFirstWinOfTheDay; 
    j["isRanked"] = v.isRanked; 
    j["isTeamOnly"] = v.isTeamOnly; 
    j["areFreeChampionsAllowed"] = v.areFreeChampionsAllowed; 
    j["isTeamBuilderManaged"] = v.isTeamBuilderManaged; 
    j["queueAvailability"] = v.queueAvailability; 
    j["queueRewards"] = v.queueRewards; 
    j["spectatorEnabled"] = v.spectatorEnabled; 
  }
  inline void from_json(const json& j, LolClashQueue& v) {
    v.id = j.at("id").get<int32_t>(); 
    v.mapId = j.at("mapId").get<int32_t>(); 
    v.name = j.at("name").get<std::string>(); 
    v.shortName = j.at("shortName").get<std::string>(); 
    v.description = j.at("description").get<std::string>(); 
    v.detailedDescription = j.at("detailedDescription").get<std::string>(); 
    v.type = j.at("type").get<std::string>(); 
    v.gameMode = j.at("gameMode").get<std::string>(); 
    v.gameMutator = j.at("gameMutator").get<std::string>(); 
    v.category = j.at("category").get<LolClashQueueGameCategory>(); 
    v.gameTypeConfig = j.at("gameTypeConfig").get<LolClashQueueGameTypeConfig>(); 
    v.numPlayersPerTeam = j.at("numPlayersPerTeam").get<int32_t>(); 
    v.minimumParticipantListSize = j.at("minimumParticipantListSize").get<int32_t>(); 
    v.maximumParticipantListSize = j.at("maximumParticipantListSize").get<int32_t>(); 
    v.minLevel = j.at("minLevel").get<uint32_t>(); 
    v.maxLevel = j.at("maxLevel").get<uint32_t>(); 
    v.maxSummonerLevelForFirstWinOfTheDay = j.at("maxSummonerLevelForFirstWinOfTheDay").get<uint32_t>(); 
    v.isRanked = j.at("isRanked").get<bool>(); 
    v.isTeamOnly = j.at("isTeamOnly").get<bool>(); 
    v.areFreeChampionsAllowed = j.at("areFreeChampionsAllowed").get<bool>(); 
    v.isTeamBuilderManaged = j.at("isTeamBuilderManaged").get<bool>(); 
    v.queueAvailability = j.at("queueAvailability").get<LolClashQueueAvailability>(); 
    v.queueRewards = j.at("queueRewards").get<LolClashQueueReward>(); 
    v.spectatorEnabled = j.at("spectatorEnabled").get<bool>(); 
  }
}