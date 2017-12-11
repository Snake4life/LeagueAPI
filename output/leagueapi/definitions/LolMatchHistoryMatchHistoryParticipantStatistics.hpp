#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolMatchHistoryMatchHistoryParticipantStatistics { /**/ 
    int64_t perk4;/**/
    int64_t perk1;/**/
    int64_t totalHeal;/**/
    int64_t totalDamageTaken;/**/
    int64_t longestTimeSpentLiving;/**/
    int64_t largestMultiKill;/**/
    int64_t quadraKills;/**/
    int64_t playerScore2;/**/
    int64_t trueDamageDealtToChampions;/**/
    int64_t physicalDamageTaken;/**/
    bool firstInhibitorKill;/**/
    int64_t timeCCingOthers;/**/
    bool gameEndedInEarlySurrender;/**/
    bool firstTowerKill;/**/
    int64_t perk3Var1;/**/
    bool causedEarlySurrender;/**/
    int64_t perk0Var1;/**/
    int64_t perk5;/**/
    int64_t tripleKills;/**/
    int64_t totalMinionsKilled;/**/
    int64_t perk0Var3;/**/
    int64_t playerScore4;/**/
    bool win;/**/
    bool earlySurrenderAccomplice;/**/
    int64_t largestKillingSpree;/**/
    bool gameEndedInSurrender;/**/
    int64_t goldSpent;/**/
    int64_t perk1Var3;/**/
    int64_t magicDamageDealtToChampions;/**/
    int64_t perk3Var3;/**/
    int64_t perk5Var3;/**/
    bool firstInhibitorAssist;/**/
    int64_t sightWardsBoughtInGame;/**/
    int64_t visionWardsBoughtInGame;/**/
    uint16_t item2;/**/
    uint16_t item6;/**/
    bool teamEarlySurrendered;/**/
    int64_t totalTimeCrowdControlDealt;/**/
    int64_t inhibitorKills;/**/
    int64_t neutralMinionsKilled;/**/
    int64_t perk4Var1;/**/
    int64_t playerScore0;/**/
    int64_t turretKills;/**/
    int64_t playerScore6;/**/
    int64_t combatPlayerScore;/**/
    int64_t damageSelfMitigated;/**/
    int64_t perk4Var3;/**/
    int64_t perk2Var1;/**/
    int64_t perk1Var2;/**/
    int64_t magicalDamageTaken;/**/
    int64_t perk5Var1;/**/
    bool firstBloodAssist;/**/
    int64_t perk2Var2;/**/
    int64_t totalScoreRank;/**/
    int64_t perk2;/**/
    int64_t perk0;/**/
    int64_t killingSprees;/**/
    uint16_t item4;/**/
    int64_t trueDamageTaken;/**/
    int64_t totalDamageDealtToChampions;/**/
    int64_t goldEarned;/**/
    uint16_t item5;/**/
    int64_t perk5Var2;/**/
    int64_t neutralMinionsKilledEnemyJungle;/**/
    int64_t doubleKills;/**/
    int64_t playerScore8;/**/
    uint16_t item3;/**/
    int64_t playerScore7;/**/
    int64_t physicalDamageDealt;/**/
    int64_t damageDealtToTurrets;/**/
    int64_t assists;/**/
    int64_t totalDamageDealt;/**/
    uint16_t item0;/**/
    int64_t visionScore;/**/
    int64_t magicDamageDealt;/**/
    int64_t objectivePlayerScore;/**/
    uint16_t participantId;/**/
    int64_t physicalDamageDealtToChampions;/**/
    int64_t unrealKills;/**/
    int64_t perk0Var2;/**/
    int64_t wardsKilled;/**/
    bool firstBloodKill;/**/
    int64_t totalPlayerScore;/**/
    int64_t deaths;/**/
    int64_t playerScore5;/**/
    int64_t playerScore3;/**/
    int64_t wardsPlaced;/**/
    int64_t pentaKills;/**/
    uint16_t item1;/**/
    int64_t damageDealtToObjectives;/**/
    int64_t champLevel;/**/
    int64_t totalUnitsHealed;/**/
    int64_t perk2Var3;/**/
    int64_t perk3;/**/
    int64_t playerScore9;/**/
    int64_t neutralMinionsKilledTeamJungle;/**/
    int64_t largestCriticalStrike;/**/
    int64_t trueDamageDealt;/**/
    int64_t perkPrimaryStyle;/**/
    int64_t kills;/**/
    int64_t perk3Var2;/**/
    int64_t perk4Var2;/**/
    int64_t perkSubStyle;/**/
    int64_t perk1Var1;/**/
    bool firstTowerAssist;/**/
    int64_t playerScore1;/**/
  };
  static void to_json(json& j, const LolMatchHistoryMatchHistoryParticipantStatistics& v) { 
    j["perk4"] = v.perk4;
    j["perk1"] = v.perk1;
    j["totalHeal"] = v.totalHeal;
    j["totalDamageTaken"] = v.totalDamageTaken;
    j["longestTimeSpentLiving"] = v.longestTimeSpentLiving;
    j["largestMultiKill"] = v.largestMultiKill;
    j["quadraKills"] = v.quadraKills;
    j["playerScore2"] = v.playerScore2;
    j["trueDamageDealtToChampions"] = v.trueDamageDealtToChampions;
    j["physicalDamageTaken"] = v.physicalDamageTaken;
    j["firstInhibitorKill"] = v.firstInhibitorKill;
    j["timeCCingOthers"] = v.timeCCingOthers;
    j["gameEndedInEarlySurrender"] = v.gameEndedInEarlySurrender;
    j["firstTowerKill"] = v.firstTowerKill;
    j["perk3Var1"] = v.perk3Var1;
    j["causedEarlySurrender"] = v.causedEarlySurrender;
    j["perk0Var1"] = v.perk0Var1;
    j["perk5"] = v.perk5;
    j["tripleKills"] = v.tripleKills;
    j["totalMinionsKilled"] = v.totalMinionsKilled;
    j["perk0Var3"] = v.perk0Var3;
    j["playerScore4"] = v.playerScore4;
    j["win"] = v.win;
    j["earlySurrenderAccomplice"] = v.earlySurrenderAccomplice;
    j["largestKillingSpree"] = v.largestKillingSpree;
    j["gameEndedInSurrender"] = v.gameEndedInSurrender;
    j["goldSpent"] = v.goldSpent;
    j["perk1Var3"] = v.perk1Var3;
    j["magicDamageDealtToChampions"] = v.magicDamageDealtToChampions;
    j["perk3Var3"] = v.perk3Var3;
    j["perk5Var3"] = v.perk5Var3;
    j["firstInhibitorAssist"] = v.firstInhibitorAssist;
    j["sightWardsBoughtInGame"] = v.sightWardsBoughtInGame;
    j["visionWardsBoughtInGame"] = v.visionWardsBoughtInGame;
    j["item2"] = v.item2;
    j["item6"] = v.item6;
    j["teamEarlySurrendered"] = v.teamEarlySurrendered;
    j["totalTimeCrowdControlDealt"] = v.totalTimeCrowdControlDealt;
    j["inhibitorKills"] = v.inhibitorKills;
    j["neutralMinionsKilled"] = v.neutralMinionsKilled;
    j["perk4Var1"] = v.perk4Var1;
    j["playerScore0"] = v.playerScore0;
    j["turretKills"] = v.turretKills;
    j["playerScore6"] = v.playerScore6;
    j["combatPlayerScore"] = v.combatPlayerScore;
    j["damageSelfMitigated"] = v.damageSelfMitigated;
    j["perk4Var3"] = v.perk4Var3;
    j["perk2Var1"] = v.perk2Var1;
    j["perk1Var2"] = v.perk1Var2;
    j["magicalDamageTaken"] = v.magicalDamageTaken;
    j["perk5Var1"] = v.perk5Var1;
    j["firstBloodAssist"] = v.firstBloodAssist;
    j["perk2Var2"] = v.perk2Var2;
    j["totalScoreRank"] = v.totalScoreRank;
    j["perk2"] = v.perk2;
    j["perk0"] = v.perk0;
    j["killingSprees"] = v.killingSprees;
    j["item4"] = v.item4;
    j["trueDamageTaken"] = v.trueDamageTaken;
    j["totalDamageDealtToChampions"] = v.totalDamageDealtToChampions;
    j["goldEarned"] = v.goldEarned;
    j["item5"] = v.item5;
    j["perk5Var2"] = v.perk5Var2;
    j["neutralMinionsKilledEnemyJungle"] = v.neutralMinionsKilledEnemyJungle;
    j["doubleKills"] = v.doubleKills;
    j["playerScore8"] = v.playerScore8;
    j["item3"] = v.item3;
    j["playerScore7"] = v.playerScore7;
    j["physicalDamageDealt"] = v.physicalDamageDealt;
    j["damageDealtToTurrets"] = v.damageDealtToTurrets;
    j["assists"] = v.assists;
    j["totalDamageDealt"] = v.totalDamageDealt;
    j["item0"] = v.item0;
    j["visionScore"] = v.visionScore;
    j["magicDamageDealt"] = v.magicDamageDealt;
    j["objectivePlayerScore"] = v.objectivePlayerScore;
    j["participantId"] = v.participantId;
    j["physicalDamageDealtToChampions"] = v.physicalDamageDealtToChampions;
    j["unrealKills"] = v.unrealKills;
    j["perk0Var2"] = v.perk0Var2;
    j["wardsKilled"] = v.wardsKilled;
    j["firstBloodKill"] = v.firstBloodKill;
    j["totalPlayerScore"] = v.totalPlayerScore;
    j["deaths"] = v.deaths;
    j["playerScore5"] = v.playerScore5;
    j["playerScore3"] = v.playerScore3;
    j["wardsPlaced"] = v.wardsPlaced;
    j["pentaKills"] = v.pentaKills;
    j["item1"] = v.item1;
    j["damageDealtToObjectives"] = v.damageDealtToObjectives;
    j["champLevel"] = v.champLevel;
    j["totalUnitsHealed"] = v.totalUnitsHealed;
    j["perk2Var3"] = v.perk2Var3;
    j["perk3"] = v.perk3;
    j["playerScore9"] = v.playerScore9;
    j["neutralMinionsKilledTeamJungle"] = v.neutralMinionsKilledTeamJungle;
    j["largestCriticalStrike"] = v.largestCriticalStrike;
    j["trueDamageDealt"] = v.trueDamageDealt;
    j["perkPrimaryStyle"] = v.perkPrimaryStyle;
    j["kills"] = v.kills;
    j["perk3Var2"] = v.perk3Var2;
    j["perk4Var2"] = v.perk4Var2;
    j["perkSubStyle"] = v.perkSubStyle;
    j["perk1Var1"] = v.perk1Var1;
    j["firstTowerAssist"] = v.firstTowerAssist;
    j["playerScore1"] = v.playerScore1;
  }
  static void from_json(const json& j, LolMatchHistoryMatchHistoryParticipantStatistics& v) { 
    v.perk4 = j.at("perk4").get<int64_t>(); 
    v.perk1 = j.at("perk1").get<int64_t>(); 
    v.totalHeal = j.at("totalHeal").get<int64_t>(); 
    v.totalDamageTaken = j.at("totalDamageTaken").get<int64_t>(); 
    v.longestTimeSpentLiving = j.at("longestTimeSpentLiving").get<int64_t>(); 
    v.largestMultiKill = j.at("largestMultiKill").get<int64_t>(); 
    v.quadraKills = j.at("quadraKills").get<int64_t>(); 
    v.playerScore2 = j.at("playerScore2").get<int64_t>(); 
    v.trueDamageDealtToChampions = j.at("trueDamageDealtToChampions").get<int64_t>(); 
    v.physicalDamageTaken = j.at("physicalDamageTaken").get<int64_t>(); 
    v.firstInhibitorKill = j.at("firstInhibitorKill").get<bool>(); 
    v.timeCCingOthers = j.at("timeCCingOthers").get<int64_t>(); 
    v.gameEndedInEarlySurrender = j.at("gameEndedInEarlySurrender").get<bool>(); 
    v.firstTowerKill = j.at("firstTowerKill").get<bool>(); 
    v.perk3Var1 = j.at("perk3Var1").get<int64_t>(); 
    v.causedEarlySurrender = j.at("causedEarlySurrender").get<bool>(); 
    v.perk0Var1 = j.at("perk0Var1").get<int64_t>(); 
    v.perk5 = j.at("perk5").get<int64_t>(); 
    v.tripleKills = j.at("tripleKills").get<int64_t>(); 
    v.totalMinionsKilled = j.at("totalMinionsKilled").get<int64_t>(); 
    v.perk0Var3 = j.at("perk0Var3").get<int64_t>(); 
    v.playerScore4 = j.at("playerScore4").get<int64_t>(); 
    v.win = j.at("win").get<bool>(); 
    v.earlySurrenderAccomplice = j.at("earlySurrenderAccomplice").get<bool>(); 
    v.largestKillingSpree = j.at("largestKillingSpree").get<int64_t>(); 
    v.gameEndedInSurrender = j.at("gameEndedInSurrender").get<bool>(); 
    v.goldSpent = j.at("goldSpent").get<int64_t>(); 
    v.perk1Var3 = j.at("perk1Var3").get<int64_t>(); 
    v.magicDamageDealtToChampions = j.at("magicDamageDealtToChampions").get<int64_t>(); 
    v.perk3Var3 = j.at("perk3Var3").get<int64_t>(); 
    v.perk5Var3 = j.at("perk5Var3").get<int64_t>(); 
    v.firstInhibitorAssist = j.at("firstInhibitorAssist").get<bool>(); 
    v.sightWardsBoughtInGame = j.at("sightWardsBoughtInGame").get<int64_t>(); 
    v.visionWardsBoughtInGame = j.at("visionWardsBoughtInGame").get<int64_t>(); 
    v.item2 = j.at("item2").get<uint16_t>(); 
    v.item6 = j.at("item6").get<uint16_t>(); 
    v.teamEarlySurrendered = j.at("teamEarlySurrendered").get<bool>(); 
    v.totalTimeCrowdControlDealt = j.at("totalTimeCrowdControlDealt").get<int64_t>(); 
    v.inhibitorKills = j.at("inhibitorKills").get<int64_t>(); 
    v.neutralMinionsKilled = j.at("neutralMinionsKilled").get<int64_t>(); 
    v.perk4Var1 = j.at("perk4Var1").get<int64_t>(); 
    v.playerScore0 = j.at("playerScore0").get<int64_t>(); 
    v.turretKills = j.at("turretKills").get<int64_t>(); 
    v.playerScore6 = j.at("playerScore6").get<int64_t>(); 
    v.combatPlayerScore = j.at("combatPlayerScore").get<int64_t>(); 
    v.damageSelfMitigated = j.at("damageSelfMitigated").get<int64_t>(); 
    v.perk4Var3 = j.at("perk4Var3").get<int64_t>(); 
    v.perk2Var1 = j.at("perk2Var1").get<int64_t>(); 
    v.perk1Var2 = j.at("perk1Var2").get<int64_t>(); 
    v.magicalDamageTaken = j.at("magicalDamageTaken").get<int64_t>(); 
    v.perk5Var1 = j.at("perk5Var1").get<int64_t>(); 
    v.firstBloodAssist = j.at("firstBloodAssist").get<bool>(); 
    v.perk2Var2 = j.at("perk2Var2").get<int64_t>(); 
    v.totalScoreRank = j.at("totalScoreRank").get<int64_t>(); 
    v.perk2 = j.at("perk2").get<int64_t>(); 
    v.perk0 = j.at("perk0").get<int64_t>(); 
    v.killingSprees = j.at("killingSprees").get<int64_t>(); 
    v.item4 = j.at("item4").get<uint16_t>(); 
    v.trueDamageTaken = j.at("trueDamageTaken").get<int64_t>(); 
    v.totalDamageDealtToChampions = j.at("totalDamageDealtToChampions").get<int64_t>(); 
    v.goldEarned = j.at("goldEarned").get<int64_t>(); 
    v.item5 = j.at("item5").get<uint16_t>(); 
    v.perk5Var2 = j.at("perk5Var2").get<int64_t>(); 
    v.neutralMinionsKilledEnemyJungle = j.at("neutralMinionsKilledEnemyJungle").get<int64_t>(); 
    v.doubleKills = j.at("doubleKills").get<int64_t>(); 
    v.playerScore8 = j.at("playerScore8").get<int64_t>(); 
    v.item3 = j.at("item3").get<uint16_t>(); 
    v.playerScore7 = j.at("playerScore7").get<int64_t>(); 
    v.physicalDamageDealt = j.at("physicalDamageDealt").get<int64_t>(); 
    v.damageDealtToTurrets = j.at("damageDealtToTurrets").get<int64_t>(); 
    v.assists = j.at("assists").get<int64_t>(); 
    v.totalDamageDealt = j.at("totalDamageDealt").get<int64_t>(); 
    v.item0 = j.at("item0").get<uint16_t>(); 
    v.visionScore = j.at("visionScore").get<int64_t>(); 
    v.magicDamageDealt = j.at("magicDamageDealt").get<int64_t>(); 
    v.objectivePlayerScore = j.at("objectivePlayerScore").get<int64_t>(); 
    v.participantId = j.at("participantId").get<uint16_t>(); 
    v.physicalDamageDealtToChampions = j.at("physicalDamageDealtToChampions").get<int64_t>(); 
    v.unrealKills = j.at("unrealKills").get<int64_t>(); 
    v.perk0Var2 = j.at("perk0Var2").get<int64_t>(); 
    v.wardsKilled = j.at("wardsKilled").get<int64_t>(); 
    v.firstBloodKill = j.at("firstBloodKill").get<bool>(); 
    v.totalPlayerScore = j.at("totalPlayerScore").get<int64_t>(); 
    v.deaths = j.at("deaths").get<int64_t>(); 
    v.playerScore5 = j.at("playerScore5").get<int64_t>(); 
    v.playerScore3 = j.at("playerScore3").get<int64_t>(); 
    v.wardsPlaced = j.at("wardsPlaced").get<int64_t>(); 
    v.pentaKills = j.at("pentaKills").get<int64_t>(); 
    v.item1 = j.at("item1").get<uint16_t>(); 
    v.damageDealtToObjectives = j.at("damageDealtToObjectives").get<int64_t>(); 
    v.champLevel = j.at("champLevel").get<int64_t>(); 
    v.totalUnitsHealed = j.at("totalUnitsHealed").get<int64_t>(); 
    v.perk2Var3 = j.at("perk2Var3").get<int64_t>(); 
    v.perk3 = j.at("perk3").get<int64_t>(); 
    v.playerScore9 = j.at("playerScore9").get<int64_t>(); 
    v.neutralMinionsKilledTeamJungle = j.at("neutralMinionsKilledTeamJungle").get<int64_t>(); 
    v.largestCriticalStrike = j.at("largestCriticalStrike").get<int64_t>(); 
    v.trueDamageDealt = j.at("trueDamageDealt").get<int64_t>(); 
    v.perkPrimaryStyle = j.at("perkPrimaryStyle").get<int64_t>(); 
    v.kills = j.at("kills").get<int64_t>(); 
    v.perk3Var2 = j.at("perk3Var2").get<int64_t>(); 
    v.perk4Var2 = j.at("perk4Var2").get<int64_t>(); 
    v.perkSubStyle = j.at("perkSubStyle").get<int64_t>(); 
    v.perk1Var1 = j.at("perk1Var1").get<int64_t>(); 
    v.firstTowerAssist = j.at("firstTowerAssist").get<bool>(); 
    v.playerScore1 = j.at("playerScore1").get<int64_t>(); 
  }
} 