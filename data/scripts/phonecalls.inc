EventScript_RoamersPhoneCall::
    lockall
    playse SE_DING_DONG
    applymovement OBJ_EVENT_ID_PLAYER, Movement_ExclamationMark
    compare VAR_CURRENT_ROAMER, SPECIES_RAIKOU
    goto_if_eq EventScript_RoamersPhoneCall_Buffer_Raikou
    compare VAR_CURRENT_ROAMER, SPECIES_SUICUNE
    goto_if_eq EventScript_RoamersPhoneCall_Buffer_Suicune
    compare VAR_CURRENT_ROAMER, SPECIES_ENTEI
    goto_if_eq EventScript_RoamersPhoneCall_Buffer_Entei
    end

EventScript_RoamersPhoneCall_Buffer_Raikou::
    bufferstring 0, EventScript_RoamersPhoneCall_Text_Raikou
    goto EventScript_RoamersPhoneCall_Buffer_Roamer_Location
    end

EventScript_RoamersPhoneCall_Buffer_Suicune::
    bufferstring 0, EventScript_RoamersPhoneCall_Text_Suicune
    goto EventScript_RoamersPhoneCall_Buffer_Roamer_Location
    end

EventScript_RoamersPhoneCall_Buffer_Entei::
    bufferstring 0, EventScript_RoamersPhoneCall_Text_Entei
    goto EventScript_RoamersPhoneCall_Buffer_Roamer_Location
    end

EventScript_RoamersPhoneCall_Buffer_Roamer_Location::
    compare VAR_CURRENT_ROAMER_ROUTE, 19
    goto_if_eq EventScript_RoamersPhoneCall_Buffer_Route1
    compare VAR_CURRENT_ROAMER_ROUTE, 20
    goto_if_eq EventScript_RoamersPhoneCall_Buffer_Route2
    compare VAR_CURRENT_ROAMER_ROUTE, 21
    goto_if_eq EventScript_RoamersPhoneCall_Buffer_Route3
    compare VAR_CURRENT_ROAMER_ROUTE, 22
    goto_if_eq EventScript_RoamersPhoneCall_Buffer_Route4
    compare VAR_CURRENT_ROAMER_ROUTE, 23
    goto_if_eq EventScript_RoamersPhoneCall_Buffer_Route5
    compare VAR_CURRENT_ROAMER_ROUTE, 24
    goto_if_eq EventScript_RoamersPhoneCall_Buffer_Route6
    compare VAR_CURRENT_ROAMER_ROUTE, 25
    goto_if_eq EventScript_RoamersPhoneCall_Buffer_Route7
    compare VAR_CURRENT_ROAMER_ROUTE, 26
    goto_if_eq EventScript_RoamersPhoneCall_Buffer_Route8
    compare VAR_CURRENT_ROAMER_ROUTE, 27
    goto_if_eq EventScript_RoamersPhoneCall_Buffer_Route9
    compare VAR_CURRENT_ROAMER_ROUTE, 28
    goto_if_eq EventScript_RoamersPhoneCall_Buffer_Route10
    compare VAR_CURRENT_ROAMER_ROUTE, 29
    goto_if_eq EventScript_RoamersPhoneCall_Buffer_Route11
    compare VAR_CURRENT_ROAMER_ROUTE, 30
    goto_if_eq EventScript_RoamersPhoneCall_Buffer_Route12
    compare VAR_CURRENT_ROAMER_ROUTE, 34
    goto_if_eq EventScript_RoamersPhoneCall_Buffer_Route16
    compare VAR_CURRENT_ROAMER_ROUTE, 39
    goto_if_eq EventScript_RoamersPhoneCall_Buffer_Route21North
    compare VAR_CURRENT_ROAMER_ROUTE, 41
    goto_if_eq EventScript_RoamersPhoneCall_Buffer_Route22
    compare VAR_CURRENT_ROAMER_ROUTE, 43
    goto_if_eq EventScript_RoamersPhoneCall_Buffer_Route24
    end

EventScript_RoamersPhoneCall_Buffer_Route1::
    bufferstring 1, EventScript_RoamersPhoneCall_Text_Route1
    goto EventScript_RoamersPhoneCall_Msgbox_Roamer
    end

EventScript_RoamersPhoneCall_Buffer_Route2::
    bufferstring 1, EventScript_RoamersPhoneCall_Text_Route2
    goto EventScript_RoamersPhoneCall_Msgbox_Roamer
    end

EventScript_RoamersPhoneCall_Buffer_Route3::
    bufferstring 1, EventScript_RoamersPhoneCall_Text_Route3
    goto EventScript_RoamersPhoneCall_Msgbox_Roamer
    end

EventScript_RoamersPhoneCall_Buffer_Route4::
    bufferstring 1, EventScript_RoamersPhoneCall_Text_Route4
    goto EventScript_RoamersPhoneCall_Msgbox_Roamer
    end

EventScript_RoamersPhoneCall_Buffer_Route5::
    bufferstring 1, EventScript_RoamersPhoneCall_Text_Route5
    goto EventScript_RoamersPhoneCall_Msgbox_Roamer
    end

EventScript_RoamersPhoneCall_Buffer_Route6::
    bufferstring 1, EventScript_RoamersPhoneCall_Text_Route6
    goto EventScript_RoamersPhoneCall_Msgbox_Roamer
    end

EventScript_RoamersPhoneCall_Buffer_Route7::
    bufferstring 1, EventScript_RoamersPhoneCall_Text_Route7
    goto EventScript_RoamersPhoneCall_Msgbox_Roamer
    end

EventScript_RoamersPhoneCall_Buffer_Route8::
    bufferstring 1, EventScript_RoamersPhoneCall_Text_Route8
    goto EventScript_RoamersPhoneCall_Msgbox_Roamer
    end

EventScript_RoamersPhoneCall_Buffer_Route9::
    bufferstring 1, EventScript_RoamersPhoneCall_Text_Route9
    goto EventScript_RoamersPhoneCall_Msgbox_Roamer
    end

EventScript_RoamersPhoneCall_Buffer_Route10::
    bufferstring 1, EventScript_RoamersPhoneCall_Text_Route10
    goto EventScript_RoamersPhoneCall_Msgbox_Roamer
    end

EventScript_RoamersPhoneCall_Buffer_Route11::
    bufferstring 1, EventScript_RoamersPhoneCall_Text_Route11
    goto EventScript_RoamersPhoneCall_Msgbox_Roamer
    end

EventScript_RoamersPhoneCall_Buffer_Route12::
    bufferstring 1, EventScript_RoamersPhoneCall_Text_Route12
    goto EventScript_RoamersPhoneCall_Msgbox_Roamer
    end

EventScript_RoamersPhoneCall_Buffer_Route16::
    bufferstring 1, EventScript_RoamersPhoneCall_Text_Route16
    goto EventScript_RoamersPhoneCall_Msgbox_Roamer
    end

EventScript_RoamersPhoneCall_Buffer_Route21North::
    bufferstring 1, EventScript_RoamersPhoneCall_Text_Route21North
    goto EventScript_RoamersPhoneCall_Msgbox_Roamer
    end

EventScript_RoamersPhoneCall_Buffer_Route22::
    bufferstring 1, EventScript_RoamersPhoneCall_Text_Route22
    goto EventScript_RoamersPhoneCall_Msgbox_Roamer
    end

EventScript_RoamersPhoneCall_Buffer_Route24::
    bufferstring 1, EventScript_RoamersPhoneCall_Text_Route24
    goto EventScript_RoamersPhoneCall_Msgbox_Roamer
    end

EventScript_RoamersPhoneCall_Msgbox_Roamer::
    compare VAR_CURRENT_ROAMER_NUM, 0
    goto_if_eq EventScript_RoamersPhoneCall_1stLegendary
    compare VAR_CURRENT_ROAMER_NUM, 1
    goto_if_eq EventScript_RoamersPhoneCall_2ndLegendary
    compare VAR_CURRENT_ROAMER_NUM, 2
    goto_if_eq EventScript_RoamersPhoneCall_3rdLegendary
    end

EventScript_RoamersPhoneCall_1stLegendary::
    msgbox EventScript_RoamersPhoneCall_Text_Find1stLegendary
    goto EventScript_RoamersPhoneCall_MsgBox_End
    end

EventScript_RoamersPhoneCall_2ndLegendary::
    msgbox EventScript_RoamersPhoneCall_Text_Find2ndLegendary
    goto EventScript_RoamersPhoneCall_MsgBox_End
    end

EventScript_RoamersPhoneCall_3rdLegendary::
    msgbox EventScript_RoamersPhoneCall_Text_Find3rdLegendary
    goto EventScript_RoamersPhoneCall_MsgBox_End
    end

EventScript_RoamersPhoneCall_MsgBox_End::
    waitmessage
    closemessage
    releaseall
    end
