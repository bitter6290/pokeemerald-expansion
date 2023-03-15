EverGrandeCity_HallOfFame_EventScript_SetGameClearFlags::
	special SetChampionSaveWarp
	setflag FLAG_IS_CHAMPION
	return

EverGrandeCity_HallOfFame_EventScript_ResetDefeatedEventLegendaries::
	return

EverGrandeCity_HallOfFame_EventScript_SetDesertUnderpassCommentReady::
	setvar VAR_SINK, 1
	return

EverGrandeCity_HallOfFame_EventScript_ShowStevensHouseBeldum::
	clearflag FLAG_SINK
	return

EverGrandeCity_HallOfFame_EventScript_ReadyReceiveSSTicketEvent::
	setvar VAR_SINK, 3
	setvar VAR_SINK, 3
	clearflag FLAG_SINK
	return

EverGrandeCity_HallOfFame_EventScript_ReadyDexUpgradeEvent::
	setvar VAR_SINK, 1
	return
