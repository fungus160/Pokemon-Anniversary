LilycoveCity_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LilycoveCity_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

LilycoveCity_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_LILYCOVE_CITY
	goto LilycoveCity_PokemonCenter_1F_EventScript_SetLilycoveLadyGfx
	end

@ SetLilycoveLadyGfx returns TRUE if its the Contest Lady
LilycoveCity_PokemonCenter_1F_EventScript_SetLilycoveLadyGfx::
	special SetLilycoveLadyGfx
	goto_if_eq VAR_RESULT, FALSE, LilycoveCity_PokemonCenter_1F_EventScript_HideContestLadyMon
	goto_if_eq VAR_RESULT, TRUE, LilycoveCity_PokemonCenter_1F_EventScript_ShowContestLadyMon
	end

LilycoveCity_PokemonCenter_1F_EventScript_HideContestLadyMon::
	setflag FLAG_HIDE_LILYCOVE_POKEMON_CENTER_CONTEST_LADY_MON
	end

LilycoveCity_PokemonCenter_1F_EventScript_ShowContestLadyMon::
	clearflag FLAG_HIDE_LILYCOVE_POKEMON_CENTER_CONTEST_LADY_MON
	end

LilycoveCity_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_LILYCOVE_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

LilycoveCity_PokemonCenter_1F_EventScript_Boy::
	msgbox LilycoveCity_PokemonCenter_1F_Text_HowManyKindsOfPokemon, MSGBOX_NPC
	end

LilycoveCity_PokemonCenter_1F_EventScript_Maniac::
	msgbox LilycoveCity_PokemonCenter_1F_Text_HeardAboutRottenScoundrels, MSGBOX_NPC
	end

LilycoveCity_PokemonCenter_1F_Text_HowManyKindsOfPokemon:
	.string "Brendan always talked about how\n"
	.string "beautiful you are and how much\l"
	.string "he loved you.\p"
	.string "You'd better get him back!$"

LilycoveCity_PokemonCenter_1F_Text_HeardAboutRottenScoundrels:
	.string "Would you like to come upstairs and\n"
	.string "see my collection of anime figures\l"
	.string "in jars?\p"
	.string "I PROMISE the white stuff is just\n"
	.string "a preservative so the paint stays\l"
	.string "nice and bright.\p"
	.string "...\p"
	.string "What? I swear!$"
