PMD2_MapScripts::
	.byte 0

PMD2_EventScript_Employee1::
	msgbox PMD2_Text_Employee1, MSGBOX_NPC
	end

PMD2_EventScript_Employee2::
	msgbox PMD2_Text_Employee2, MSGBOX_NPC
	end

PMD2_EventScript_Employee3::
	msgbox PMD2_Text_Employee3, MSGBOX_NPC
	end

PMD2_EventScript_Employee4::
	msgbox PMD2_Text_Employee4, MSGBOX_NPC
	end

PMD2_EventScript_Employee5::
	msgbox PMD2_Text_Employee5, MSGBOX_NPC
	end

PMD2_EventScript_Employee6::
	msgbox PMD2_Text_Employee6, MSGBOX_NPC
	end

PMD2_EventScript_Employee7::
	msgbox PMD2_Text_Employee7, MSGBOX_NPC
	end

PMD2_EventScript_Employee8::
	msgbox PMD2_Text_Employee8, MSGBOX_NPC
	end

PMD2_EventScript_Guard1::
	msgbox PMD2_Text_Guard1, MSGBOX_NPC
	end

PMD2_EventScript_Guard2::
	msgbox PMD2_Text_Guard2, MSGBOX_NPC
	end

PMD2_EventScript_Final::
	lockall
	setvar VAR_PMD_STATE, 1
	applymovement LOCALID_MARY, PMD2_Movement_MaryL
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, PMD2_Movement_PlayerFirst
	waitmovement 0
	delay 50
	msgbox PMD2_Text_MaryLIntro, MSGBOX_NPC
	goto PMD2_EventScript_MaryBattle
	end
	
PMD2_EventScript_MaryBattle::
	trainerbattle_no_intro TRAINER_MARYL, PMD2_Text_MaryLDefeated
	msgbox Text_Tears, MSGBOX_AUTOCLOSE
	end

PMD2_EventScript_Love::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, PMD2_Movement_Player1
	waitmovement 0 
	applymovement LOCALID_GUARD1, PMD2_Movement_Guard1
	waitmovement 0
	applymovement LOCALID_BRENDAN, PMD2_Movement_BrendanC
	waitmovement 0
	delay 50
	msgbox Text_Saved, MSGBOX_AUTOCLOSE
	goto PMD2_EventScript_GameClear
	end

PMD2_EventScript_GameClear::
	fadescreenspeed FADE_TO_BLACK, 24
	special GameClear
	waitstate
	releaseall
	end

PMD2_Text_Employee1:
	.string "Shut up! Leave me alone.\p"
	.string "You'll get me fired.$"

PMD2_Text_Employee2:
	.string "I need to maintain a \n"
	.string "typing speed of 135 words per \l"
	.string "minute...\p"
	.string "Otherwise, I might get written up!$"

PMD2_Text_Employee3:
	.string "Underground parking this...\n"
	.string "Underground parking that. \p"
	.string "How about Mary underground park\n"
	.string "some vegetables into her fat mouth!$"

PMD2_Text_Employee4:
	.string "What did the ICD9 code 5693\n"
	.string "stand for again?\p"
	.string "Ah! Bingo! Rectal bleeding! Thanks!$"

PMD2_Text_Employee5:
	.string "CRUNCH CRUNCH CRUNCH CRUNCH\n"
	.string "...Mmffh.$"

PMD2_Text_Employee6:
	.string "If I work here for three more years\n"
	.string "they're bound to let me take over!\p"
	.string "Then, I'LL be the one with heated\n"
	.string "underground parking!$"

PMD2_Text_Employee7:
	.string "Yo, did you hear? Mary kidnapped\n"
	.string "that old employee because\l"
	.string "she thinks he committed wage theft!\p"
	.string "I mean...to be fair, he was on the\n"
	.string "toilet for an absurd amount of time...\p"
	.string "But Mary and this company totally\n"
	.string "deserved it!$"

PMD2_Text_Employee8:
	.string "Shut UP! Can't you see she's right there?$"

PMD2_Text_Guard1:
	.string "Get back. Do I need to call the police?$"

PMD2_Text_Guard2:
	.string "Keep your nose out of our business.$"

PMD2_Text_MaryLIntro:
	.string "Of COURSE you're here.\n"
	.string "You can't just mind your own business.\p"
	.string "You wouldn't understand - we're a small\n"
	.string "company...It's hard to find a good\l"
	.string "employee!\p"
	.string "You just had to encourage him to leave.\n"
	.string "He won't be any good as an x-ray tech.\l"
	.string "He's DESTINED to be a medical biller!\p"
	.string "Watch! I'll show you with my power!$"

PMD2_Text_MaryLDefeated:
	.string "How could I have lost to that little\n"
	.string "yellow...RAT?!\p"
	.string "No...please...I'm going to lose\n"
	.string "everything!\l"
	.string "You heartless woman...$"

Text_Tears:
	.string "You can hear Mary sobbing quietly.$"

Text_Saved:
	.string "Baby...I can't believe you came for me...\n"
	.string "I love you so much. You've changed my\l"
	.string "life in so many different ways.\p"
	.string "I can't even begin to describe them in\n"
	.string "a short little Pokemon fangame.\p"
	.string "You complete me.\n"
	.string "I can't wait to see where our future\l"
	.string "leads together.\p"
	.string "I can't envision\n"
	.string "any path without you by my side.\l"
	.string "Let's go home <3$"

PMD2_Movement_Guard1:
	walk_left
	step_end

PMD2_Movement_MaryL:
	walk_down
	walk_in_place_left
	step_end

PMD2_Movement_BrendanC:
	walk_up
	walk_up
	walk_up
	step_end

PMD2_Movement_PlayerFirst:
	walk_in_place_right
	walk_in_place_right
	step_end

PMD2_Movement_Player1:
	walk_in_place_down
	step_end

