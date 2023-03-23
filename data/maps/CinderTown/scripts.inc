CinderTown_MapScripts::
	.byte 0


EventScript_EvoTest::
	trainerbattle_single TRAINER_EVO_TEST, EventScript_EvoTest_Text_0, EventScript_EvoTest_Text_1
	msgbox EventScript_EvoTest_Text_2, MSGBOX_AUTOCLOSE
	end


EventScript_EvoTest_Text_0:
	.string "Testing...$"

EventScript_EvoTest_Text_1:
	.string "Tested!$"

EventScript_EvoTest_Text_2:
	.string "Hello.$"
