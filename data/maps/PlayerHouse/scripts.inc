PlayerHouse_MapScripts::
	.byte 0 

PlayerHouse_EventScript_AcquireDedenne::
	lock
	faceplayer
	showmonpic SPECIES_DEDENNE, 10, 3
	msgbox Text_TakeDedenne, MSGBOX_DEFAULT
	hidemonpic
	givemon SPECIES_DEDENNE, 50, ITEM_SITRUS_BERRY
	playfanfare MUS_CAUGHT
	msgbox Text_ReceivedDedenne, MSGBOX_DEFAULT
	setflag FLAG_SYS_POKEMON_GET
	waitfanfare
	removeobject 1
	closemessage
	setflag FLAG_HIDE_DEDENNE_BALL
	release
	end

PlayerHouse_EventScript_Supplies::
	lock
	faceplayer
	msgbox Text_TakePokedex, MSGBOX_DEFAULT
	playfanfare MUS_OBTAIN_ITEM
	setflag FLAG_SYS_POKEDEX_GET
	setflag FLAG_SYS_B_DASH
	setflag FLAG_ADVENTURE_STARTED
	closemessage
	giveitem ITEM_ULTRA_BALL, 100
	giveitem ITEM_FULL_RESTORE, 20
	removeobject 2
	setflag FLAG_HIDE_SUPPLY_BALL
	release
	end

Text_TakeDedenne:
	.string "It's a silly little Dedenne!$"

Text_ReceivedDedenne:
	.string "{PLAYER} received a Dedenne!$"	

Text_TakePokedex:
	.string "You found a Pokedex, running shoes\n"
	.string "and some supplies!$"
