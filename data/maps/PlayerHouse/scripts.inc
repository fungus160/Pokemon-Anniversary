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
	closemessage
	release
	end

PlayerHouse_EventScript_Supplies::
	lock
	faceplayer
	msgbox Text_TakePokedex, MSGBOX_DEFAULT
	playfanfare MUS_OBTAIN_ITEM
	msgbox Text_ReceivedPokedex, MSGBOX_DEFAULT
	setflag FLAG_SYS_POKEDEX_GET
	setflag FLAG_ADVENTURE_STARTED
	special SetUnlockedPokedexFlags
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
	closemessage
	msgbox Text_FindPokeballs, MSGBOX_DEFAULT
	giveitem ITEM_ULTRA_BALL, 50
	release
	end

Text_TakeDedenne:
	.string "It's a silly little Dedenne!$"

Text_ReceivedDedenne:
	.string "{PLAYER} received a Dedenne!$"	

Text_TakePokedex:
	.string "You also found a Pokedex!$"

Text_FindPokeballs:
	.string "{PLAYER} also found some Pokeballs.$"

Text_ReceivedPokedex:
	.string "{PLAYER} received the Pokedex!"
