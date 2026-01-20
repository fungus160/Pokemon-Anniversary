MAINSTREET_MapScripts::
	.byte 0

MAINSTREET_EventScript_TownSign::
	msgbox MAINSTREET_Text_TownSign, MSGBOX_SIGN
	end

MAINSTREET_Text_TownSign:
	.string "Main Street, Winnipeg$"

MAINSTREET_EventScript_BuzzLord::
	trainerbattle_single TRAINER_BUZZ, MAINSTREET_Text_BuzzLordIntro, MAINSTREET_Text_BuzzLordDefeated
	msgbox MAINSTREET_Text_BuzzLordPostBattle, MSGBOX_AUTOCLOSE
	end

MAINSTREET_EventScript_FentFrank::
	trainerbattle_single TRAINER_FENT, MAINSTREET_Text_FentFrankIntro, MAINSTREET_Text_FentFrankDefeated
	msgbox MAINSTREET_Text_FentFrankPostBattle, MSGBOX_AUTOCLOSE
	end

MAINSTREET_EventScript_MrInjectable::
	trainerbattle_single TRAINER_MRINJ, MAINSTREET_Text_MrInjectableIntro, MAINSTREET_Text_MrInjectableDefeated
	msgbox MAINSTREET_Text_MrInjectablePostBattle, MSGBOX_AUTOCLOSE
	end

MAINSTREET_Text_BuzzLordIntro:
	.string "I feel like I'm FLYING!\n"
	.string "HEY. YOU. GOT A DART?\p"
	.string "GIMME IT NOW!$"

MAINSTREET_Text_BuzzLordDefeated:
	.string "Seriously? All you have\n"
	.string "is a vape? Damn kids.$"

MAINSTREET_Text_BuzzLordPostBattle:
	.string "Come on, do you at least have\n"
	.string "some cash so I can go get a pack\l"
	.string "of DuMaurier?$"

MAINSTREET_Text_FentFrankIntro:
	.string "Guh hahahahahahahaha...$"

MAINSTREET_Text_FentFrankDefeated:
	.string "zzzzzzzz...$"

MAINSTREET_Text_FentFrankPostBattle:
	.string "He seems to be keeled over.$"

MAINSTREET_Text_MrInjectableIntro:
	.string "I have but one rule...\n"
	.string "I will inject any needle, no\l"
	.string "matter where I find it.\p"
	.string "I haven't lost a battle yet!$"

MAINSTREET_Text_MrInjectableDefeated:
	.string "My needle broke...$"

MAINSTREET_Text_MrInjectablePostBattle:
	.string "Oh, I see...So you know your\n"
	.string "way around a needle better\l"
	.string "than I ever could.\p"
	.string "Explains why I lost.$"

