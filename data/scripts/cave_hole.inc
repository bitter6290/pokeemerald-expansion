CaveHole_CheckFallDownHole:
	map_script_2 VAR_SINK, 0, EventScript_FallDownHole
	.2byte 0

CaveHole_FixCrackedGround:
	copyvar VAR_SINK, 1
	end

EventScript_FallDownHole::
	lockall
	delay 20
	applymovement OBJ_EVENT_ID_PLAYER, Movement_SetInvisible
	waitmovement 0
	playse SE_FALL
	delay 60
	warphole MAP_UNDEFINED
	waitstate
	end

EventScript_FallDownHoleMtPyre::
	lockall
	delay 20
	applymovement OBJ_EVENT_ID_PLAYER, Movement_SetInvisible
	waitmovement 0
	playse SE_FALL
	delay 60
	special DoFallWarp
	waitstate
	end

Movement_SetInvisible:
	set_invisible
	step_end
