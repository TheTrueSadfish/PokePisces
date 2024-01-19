const u8 gTrainerClassNames[][13] = {
    [TRAINER_CLASS_PKMN_TRAINER_1] = _("{PKMN} TRAINER"),
    [TRAINER_CLASS_PKMN_TRAINER_2] = _("{PKMN} TRAINER"),
    [TRAINER_CLASS_HIKER] = _("HIKER"),
    [TRAINER_CLASS_TEAM_AQUA] = _("OZONE STAFF"),
    [TRAINER_CLASS_PKMN_BREEDER] = _("{PKMN} BREEDER"),
    [TRAINER_CLASS_COOLTRAINER] = _("FIRST-RATE"),
    [TRAINER_CLASS_BIRD_KEEPER] = _("BIRD KEEPER"),
    [TRAINER_CLASS_COLLECTOR] = _("COLLECTOR"),
    [TRAINER_CLASS_SWIMMER_M] = _("SURFER"),
    [TRAINER_CLASS_TEAM_MAGMA] = _("OZONE WORKER"),
    [TRAINER_CLASS_EXPERT] = _("EXPERT"),
    [TRAINER_CLASS_AQUA_ADMIN] = _("OZONE ADMIN"),
    [TRAINER_CLASS_BLACK_BELT] = _("CONTENDER"),
    [TRAINER_CLASS_AQUA_LEADER] = _("OZONE HEAD"),
    [TRAINER_CLASS_HEX_MANIAC] = _("HEX MANIAC"),
    [TRAINER_CLASS_AROMA_LADY] = _("AROMA LADY"),
    [TRAINER_CLASS_RUIN_MANIAC] = _("RUIN MANIAC"),
    [TRAINER_CLASS_INTERVIEWER] = _("INTERVIEWER"),
    [TRAINER_CLASS_TUBER_F] = _("FLOATER"),
    [TRAINER_CLASS_TUBER_M] = _("TUBER"),
    [TRAINER_CLASS_LADY] = _("LADY"),
    [TRAINER_CLASS_BEAUTY] = _("BEAUTY"),
    [TRAINER_CLASS_RICH_BOY] = _("RICH BOY"),
    [TRAINER_CLASS_POKEMANIAC] = _("POKéMANIAC"),
    [TRAINER_CLASS_GUITARIST] = _("GUITARIST"),
    [TRAINER_CLASS_KINDLER] = _("HAWKER"),
    [TRAINER_CLASS_CAMPER] = _("CAMPER"),
    [TRAINER_CLASS_PICNICKER] = _("PICNICKER"),
    [TRAINER_CLASS_BUG_MANIAC] = _("BUG MANIAC"),
    [TRAINER_CLASS_PSYCHIC] = _("PSYCHIC"),
    [TRAINER_CLASS_GENTLEMAN] = _("GENTLEMAN"),
    [TRAINER_CLASS_ELITE_FOUR] = _("ELITE FOUR"),
    [TRAINER_CLASS_LEADER] = _("LEADER"),
    [TRAINER_CLASS_SCHOOL_KID] = _("STUDENT"),
    [TRAINER_CLASS_SR_AND_JR] = _("SR. AND JR."),
    [TRAINER_CLASS_WINSTRATE] = _("WINSTRATE"),
    [TRAINER_CLASS_POKEFAN] = _("POKé FAN"),
    [TRAINER_CLASS_YOUNGSTER] = _("YOUNGSTER"),
    [TRAINER_CLASS_CHAMPION] = _("CHAMPION"),
    [TRAINER_CLASS_FISHERMAN] = _("FISHER"),
    [TRAINER_CLASS_TRIATHLETE] = _("TRIATHLETE"),
    [TRAINER_CLASS_DRAGON_TAMER] = _("DRAGON TAMER"),
    [TRAINER_CLASS_NINJA_BOY] = _("NINJA BOY"),
    [TRAINER_CLASS_BATTLE_GIRL] = _("BATTLE GAL"),
    [TRAINER_CLASS_PARASOL_LADY] = _("PARASOL LADY"),
    [TRAINER_CLASS_SWIMMER_F] = _("SWIMMER"),
    [TRAINER_CLASS_TWINS] = _("TWINS"),
    [TRAINER_CLASS_SAILOR] = _("SAILOR"),
    [TRAINER_CLASS_COOLTRAINER_2] = _("COOLTRAINER"),
    [TRAINER_CLASS_MAGMA_ADMIN] = _("EX-OZONE"),
    [TRAINER_CLASS_RIVAL] = _("OZONE SCOUT"),
    [TRAINER_CLASS_BUG_CATCHER] = _("BUG CATCHER"),
    [TRAINER_CLASS_PKMN_RANGER] = _("{PKMN} RANGER"),
    [TRAINER_CLASS_MAGMA_LEADER] = _("MAGMA LEADER"),
    [TRAINER_CLASS_LASS] = _("LASS"),
    [TRAINER_CLASS_YOUNG_COUPLE] = _("LOVEY DOVEY"),
    [TRAINER_CLASS_OLD_COUPLE] = _("POKé LOVER"),
    [TRAINER_CLASS_SIS_AND_BRO] = _("{PKMN} FORESTER"),
    [TRAINER_CLASS_SALON_MAIDEN] = _("SALON MAIDEN"),
    [TRAINER_CLASS_DOME_ACE] = _("BULWARK"),
    [TRAINER_CLASS_PALACE_MAVEN] = _("PALACE MAVEN"),
    [TRAINER_CLASS_ARENA_TYCOON] = _("ARENA TYCOON"),
    [TRAINER_CLASS_FACTORY_HEAD] = _("FACTORY HEAD"),
    [TRAINER_CLASS_PIKE_QUEEN] = _("PIKE QUEEN"),
    [TRAINER_CLASS_PYRAMID_KING] = _("PYRAMID KING"),
    [TRAINER_CLASS_RS_PROTAG] = _("{PKMN} TRAINER"),
    [TRAINER_CLASS_ACE_TRAINER] = _("ACE TRAINER"),
    [TRAINER_CLASS_ESPER] = _("ESPER"),
    [TRAINER_CLASS_MASTER] = _("MASTER"),
    [TRAINER_CLASS_PKMN_RANCHER] = _("{PKMN} RANCHER"),
    [TRAINER_CLASS_PLUMBER] = _("PLUMBER"),
    [TRAINER_CLASS_BIRD_WATCHER] = _("BIRD WATCHER"),
    [TRAINER_CLASS_DRAGON_RIDER] = _("DRAGON RIDER"),
    [TRAINER_CLASS_SEA_SHELLER] = _("SEA SHELLER"),
    [TRAINER_CLASS_YOU_TUBER] = _("TUBER"),
    [TRAINER_CLASS_FAIRYTALE_GIRL] = _("FAIRY GIRL"),
    [TRAINER_CLASS_SNOW_KID] = _("SNOW KID"),
    [TRAINER_CLASS_SNOW_CHILD] = _("SNOW CHILD"),
    [TRAINER_CLASS_CHARMER] = _("CHARMER"),
    [TRAINER_CLASS_POKE_FREAK] = _("POKé FREAK"),
    [TRAINER_CLASS_BURGLAR] = _("BURGLAR"),
    [TRAINER_CLASS_ANGLER] = _("ANGLER"),
    [TRAINER_CLASS_VANDAL] = _("VANDAL"),
    [TRAINER_CLASS_PRESENTER] = _("PRESENTER"),
    [TRAINER_CLASS_BASSIST] = _("BASSIST"),
    [TRAINER_CLASS_KLUTZ] = _("KLUTZ"),
    [TRAINER_CLASS_STREET_THUG] = _("STREET THUG"),
    [TRAINER_CLASS_DELINQUENT] = _("DELINQUENT"),
    [TRAINER_CLASS_WAYFARER] = _("WAYFARER"),
    [TRAINER_CLASS_CLIMBER] = _("CLIMBER"),
    [TRAINER_CLASS_DEMOLITIONIST] = _("BOMBARDIER"),
    [TRAINER_CLASS_SHRINE_MAIDEN] = _("MIKO"),
    [TRAINER_CLASS_MEDIUM] = _("MEDIUM"),
    [TRAINER_CLASS_WALTZER] = _("WALTZER"),
    [TRAINER_CLASS_DANCER] = _("DANCER"),
    [TRAINER_CLASS_JANITOR] = _("JANITOR"),
    [TRAINER_CLASS_KUNOICHI] = _("KUNOICHI"),
    [TRAINER_CLASS_CLOWN] = _("CLOWN"),
    [TRAINER_CLASS_ELECTRICIAN] = _("ELECTRICIAN"),
    [TRAINER_CLASS_SCUBA_DIVER] = _("SCUBA DIVER"),
    [TRAINER_CLASS_FREE_DIVER] = _("FREE DIVER"),
    [TRAINER_CLASS_NURSE] = _("NURSE"),
    [TRAINER_CLASS_MADAME] = _("MADAME"),
    [TRAINER_CLASS_PROFITEER] = _("PROFITEER"),
    [TRAINER_CLASS_MOGUL] = _("MOGUL"),
    [TRAINER_CLASS_RESEARCHER] = _("RESEARCHER"),
    [TRAINER_CLASS_SCIENTIST] = _("SCIENTIST"),
    [TRAINER_CLASS_GO_GETTER] = _("GO GETTER"),
    [TRAINER_CLASS_UPSTART] = _("UPSTART"),
    [TRAINER_CLASS_DRAGON_CALLER] = _("DRAGONCALLER"),
    [TRAINER_CLASS_MONK] = _("MONK"),
    [TRAINER_CLASS_ANGY_WANGY] = _("ANGY WANGY"),
    [TRAINER_CLASS_LANDSCAPERS] = _("LANDSCAPERS"),
    [TRAINER_CLASS_STROLLER] = _("STROLLER"),
    [TRAINER_CLASS_MECHANIC] = _("MECHANIC"),
    [TRAINER_CLASS_METEOROLOGISTS] = _("MET OFFICERS"),
    [TRAINER_CLASS_RUIN_HUNTER] = _("RUIN HUNTER"),
    [TRAINER_CLASS_SKIER] = _("SKIER"),
    [TRAINER_CLASS_ICE_POPS] = _("ICE POPS"),
    [TRAINER_CLASS_HARDHATTER] = _("HARDHATTER"),
    [TRAINER_CLASS_GAMBLER] = _("GAMBLER"),
    [TRAINER_CLASS_PAPER_BOY] = _("PAPER BOY"),
    [TRAINER_CLASS_COURIER] = _("COURIER"),
    [TRAINER_CLASS_GILDED_MONK] = _("GILDED MONK"),
    [TRAINER_CLASS_CHEERLEADERS] = _("CHEERLEADERS"),
    [TRAINER_CLASS_HUNTER] = _("HUNTER"),
    [TRAINER_CLASS_BREADWINNER] = _("BREADWINNER"),
};
