SargentPark_MapScripts::
	.byte 0

SargentPark_EventScript_Man::
	msgbox SargentPark_Text_Indoors, MSGBOX_NPC
	end

SargentPark_EventScript_Child::
	msgbox SargentPark_Text_Ratata, MSGBOX_NPC
	end

SargentPark_EventScript_Girl::
	msgbox SargentPark_Text_Running, MSGBOX_NPC
	end

SargentPark_EventScript_Warning::
	msgbox SargentPark_Text_Crackheads, MSGBOX_NPC
	end

SargentPark_Text_Indoors:
	.string "Game Freak doesn't know how to\n"
	.string "model the inside of buildings\l"
	.string "so nobody can enter their own homes!\p"
	.string "Whoever modeled your building must\n"
	.string "really care about you.$"

SargentPark_Text_Ratata:
	.string "My RATATA is level 100,\n"
	.string "but I still lose every battle.\p"
	.string "Do you know where I could\n"
	.string "get some anabolic steroids?\p"
	.string "I think that might help me win.$"

SargentPark_Text_Running:
	.string "Hey! Get out of my way!\p"
	.string "Don't you know it's rude to get\n"
	.string "in the way of a girl on her\l"
	.string "hot girl walk?$"

SargentPark_Text_Crackheads::
	.string "Watch out when you get onto\n"
	.string "Main Street. Those crackheads\l"
	.string "are no joke.$"

