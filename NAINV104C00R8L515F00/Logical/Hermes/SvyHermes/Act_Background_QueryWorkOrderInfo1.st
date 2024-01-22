(** 2021-08-01 **)
ACTION Act_Background_QueryWorkOrderInfo1:
	
	IF EDGEPOS(p_bQueryWorkOrderInfo) THEN

		fHermesAddOneMsgSend(ADR(a_eMsgSend) , ADR(udiMsgSendBffr) , HermesMsgTypeQueryWorkOrderInfo);
			
		fHermesGenerateUUID(ADR(tyQueryWorkOrderInfo.tyData.sQueryId) , p_tyDTStructure , pa_usiMacAddr); //Generate QueryID

		tyQueryWorkOrderInfo.tyData.sMachineId							:= p_sMcId;
		tyQueryWorkOrderInfo.tyData.sMagazineId							:= p_sMagazineId;
		tyQueryWorkOrderInfo.tyData.iSlotId								:= p_iSlotId;
		tyQueryWorkOrderInfo.tyData.sBarcode						    := p_sBarcode;
			
		tyQueryWorkOrderInfo.tyAvl.bQueryId							    := tyQueryWorkOrderInfo.tyData.sQueryId <> '';
		tyQueryWorkOrderInfo.tyAvl.bMachineId							:= tyQueryWorkOrderInfo.tyData.sMachineId <> '';
		tyQueryWorkOrderInfo.tyAvl.bMagazineId							:= tyQueryWorkOrderInfo.tyData.sMagazineId <> '';
		tyQueryWorkOrderInfo.tyAvl.bSlotId								:= tyQueryWorkOrderInfo.tyData.iSlotId <> 0;
		tyQueryWorkOrderInfo.tyAvl.bBarcode								:= tyQueryWorkOrderInfo.tyData.sBarcode <> '';
		
		

		tyQueryQueue[usiQueueIdx].usiPriority := 0;
		tyQueryQueue[usiQueueIdx].udiTracedSubjectAddr := ADR(bhvBrd);
		tyQueryQueue[usiQueueIdx].tyQueryWorkOrder := tyQueryWorkOrderInfo;
		usiQueueIdx := usiQueueIdx +1;
	END_IF
	
	FOR usidx:= 0 TO usiQueueIdxDO DO
		
		
	END_FOR

END_ACTION
