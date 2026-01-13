OldaleTown_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, OldaleTown_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

OldaleTown_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_OLDALE_TOWN
	call Common_EventScript_UpdateBrineyLocation
	end

OldaleTown_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_OLDALE_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

OldaleTown_PokemonCenter_1F_EventScript_Gentleman::
	msgbox OldaleTown_PokemonCenter_1F_Text_TrainersCanUsePC, MSGBOX_NPC
	end

OldaleTown_PokemonCenter_1F_EventScript_Boy::
	msgbox OldaleTown_PokemonCenter_1F_Text_PokemonCentersAreGreat, MSGBOX_NPC
	end

OldaleTown_PokemonCenter_1F_EventScript_Girl::
	msgbox OldaleTown_PokemonCenter_1F_Text_WirelessClubNotAvailable, MSGBOX_NPC
	end

OldaleTown_PokemonCenter_1F_Text_TrainersCanUsePC:
.string "Would you like to come upstairs and\n"
	.string "see my collection of anime figures\l"
	.string "in jars?\p"
	.string "I PROMISE the white stuff is just\n"
	.string "a preservative so the paint stays\l"
	.string "nice and bright.\p"
	.string "...\p"
	.string "What? I swear!$"

OldaleTown_PokemonCenter_1F_Text_PokemonCentersAreGreat:
	.string "Brendan always talked about how\n"
	.string "beautiful you are and how much\l"
	.string "he loved you.\p"
	.string "You'd better get him back!$"

OldaleTown_PokemonCenter_1F_Text_WirelessClubNotAvailable:
	.string "Everyone in town is jealous\n"
	.string "of you and Brendan.\p"
	.string "We all wish we could have a\n"
	.string "relationship like you two.$"
