NorthKildonan_MapScripts::
	.byte 0

NorthKildonan_EventScript_TownSign::
	msgbox NorthKildonan_Text_TownSign, MSGBOX_SIGN
	end

NorthKildonan_Text_TownSign:
	.string "Progressive Medical Development$"

NorthKildonan_EventScript_Richman::
	msgbox NorthKildonan_Text_Wages, MSGBOX_NPC
	end

NorthKildonan_Text_Wages:
	.string "I hear Mary pays her\n"
	.string "employees slave wages, but they\l"
	.string "still stay working there.\p"
	.string "Man! I wish I was that good\n"
	.string "at running a business!\p"
	.string "Then I might be able to afford\n"
	.string "heated underground parking,\l"
	.string "just like her.$"

NorthKildonan_EventScript_Dude::
	msgbox NorthKildonan_Text_Crying, MSGBOX_NPC
	end

NorthKildonan_Text_Crying:
	.string "My Mom told me to get a job,\n"
	.string "so I tried applying to PMD.\p"
	.string "Mary bullied me for being\n"
	.string "broke, and when I started\l"
	.string "crying, she fired me.\p"
	.string "Oh well. Now I must wander\n"
	.string "the streets, homeless...$"

NorthKildonan_EventScript_Girl::
	msgbox NorthKildonan_Text_Cats, MSGBOX_NPC
	end

NorthKildonan_Text_Cats:
	.string "Hey! Don't move...\n"
	.string "...\p"
	.string "...\n"
	.string "...\l"
	.string "...\p"
	.string "I saw a cute tuxedo cat\n"
	.string "just a second ago!\p"
	.string "I wonder what it was\n"
	.string "doing here in this part\l"
	.string "of town.\p"
	.string "Maybe something to do with\n"
	.string "that kidnapped boy Mary brought\l"
	.string "back to her business.$"

