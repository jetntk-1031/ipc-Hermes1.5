
ACTION Act_OptP1021SubnetMask:
	
	IF tyP1021McSetGen.tyGen.tyStringSubnetMask.bRtCompl = TRUE THEN
		
		IF fIPValid(tyP1021McSetGen.tyGen.tyStringSubnetMask.sValue , ADR(a_iSubnetMaskPart1)) THEN
			
			IF usiSaveSubnetMaskStep = 0 THEN
				p_tyC0008MsgBox ACCESS ADR(tyP1021McSetGen.tyMsgBoxUpdtSubnetAsk);
				
				IF tyP1021McSetGen.tyMsgBoxUpdtSubnetAsk.tyBtnYes.bRtCompl = TRUE THEN
					tyP1021McSetGen.tyMsgBoxUpdtSubnetAsk.tyBtnYes.bRtCompl	:= FALSE;
					tyP1021McSetGen.tyMsgBoxUpdtSubnetAsk.tyBtnYes.bValue	:= FALSE;
					
					p_tyC0008MsgBox ACCESS ADR(tyP1021McSetGen.tyMsgBoxHide);
					
					usiSaveSubnetMaskStep	:= 1;
					
				ELSIF tyP1021McSetGen.tyMsgBoxUpdtSubnetAsk.tyBtnNo.bRtCompl = TRUE THEN
					tyP1021McSetGen.tyMsgBoxUpdtSubnetAsk.tyBtnNo.bRtCompl	:= FALSE;
					tyP1021McSetGen.tyMsgBoxUpdtSubnetAsk.tyBtnNo.bValue	:= FALSE;
					
					p_tyC0008MsgBox ACCESS ADR(tyP1021McSetGen.tyMsgBoxHide);
					
					//Recover Subnet Mask
					tyP1021McSetGen.tyGen.tyStringSubnetMask.sValue	:= p_sHWInfoSubnetMask;
					
					tyP1021McSetGen.tyGen.tyStringSubnetMask.bRtCompl	:= FALSE;
					
				END_IF
				
			ELSIF usiSaveSubnetMaskStep = 1 THEN
				//Set Subnet Mask
				sSetSubnetMask	:= tyP1021McSetGen.tyGen.tyStringSubnetMask.sValue;
				
				eHWInfoAct	:= HWInfoActSetSubnetMask;
				
				IF p_eHWInfoStat = HWInfoActSetSubnetMask AND p_eHWInfoStatus = Done THEN
					eHWInfoAct	:= HWInfoActIdle;
									
					bUpdateP1021Network	:= TRUE;
	
					usiSaveSubnetMaskStep	:= 0;
					
					tyP1021McSetGen.tyGen.tyStringSubnetMask.bRtCompl	:= FALSE;
					
				ELSIF p_eHWInfoStatus = Error THEN
					p_tyC0008MsgBox ACCESS ADR(tyP1021McSetGen.tyMsgBoxUpdtSubnetErr);
					
					IF tyP1021McSetGen.tyMsgBoxUpdtSubnetErr.tyBtnNo.bRtCompl = TRUE THEN
						tyP1021McSetGen.tyMsgBoxUpdtSubnetErr.tyBtnNo.bRtCompl	:= FALSE;
						tyP1021McSetGen.tyMsgBoxUpdtSubnetErr.tyBtnNo.bValue	:= FALSE;
						
						p_tyC0008MsgBox ACCESS ADR(tyP1021McSetGen.tyMsgBoxHide);
						
						//Recover Subnet Mask
						tyP1021McSetGen.tyGen.tyStringSubnetMask.sValue	:= p_sHWInfoSubnetMask;
						
						usiSaveSubnetMaskStep	:= 0;
						
						tyP1021McSetGen.tyGen.tyStringSubnetMask.bRtCompl	:= FALSE;
						
					END_IF
					
				END_IF
				
			END_IF
			
		ELSE
			
			p_tyC0008MsgBox ACCESS ADR(tyP1021McSetGen.tyMsgBoxSubnetInvalid);
			
			IF tyP1021McSetGen.tyMsgBoxSubnetInvalid.tyBtnNo.bRtCompl = TRUE THEN
				tyP1021McSetGen.tyMsgBoxSubnetInvalid.tyBtnNo.bRtCompl	:= FALSE;
				tyP1021McSetGen.tyMsgBoxSubnetInvalid.tyBtnNo.bValue	:= FALSE;
				
				p_tyC0008MsgBox ACCESS ADR(tyP1021McSetGen.tyMsgBoxHide);
				
				//Recover Subnet Mask
				tyP1021McSetGen.tyGen.tyStringSubnetMask.sValue	:= p_sHWInfoSubnetMask;
				
				tyP1021McSetGen.tyGen.tyStringSubnetMask.bRtCompl	:= FALSE;	
				
			END_IF
			
		END_IF
		
	END_IF
	
END_ACTION
