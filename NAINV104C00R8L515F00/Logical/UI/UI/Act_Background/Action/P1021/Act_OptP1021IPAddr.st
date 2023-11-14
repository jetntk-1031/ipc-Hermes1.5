
ACTION Act_OptP1021IPAddr:
	
	IF tyP1021McSetGen.tyGen.tyStringIPAddr.bRtCompl = TRUE THEN
		
		IF fIPValid(tyP1021McSetGen.tyGen.tyStringIPAddr.sValue , ADR(a_iIPPart1)) THEN
			
			IF usiSaveIPAddrStep = 0 THEN
				p_tyC0008MsgBox ACCESS ADR(tyP1021McSetGen.tyMsgBoxUpdtIPAddrAsk);
				
				IF tyP1021McSetGen.tyMsgBoxUpdtIPAddrAsk.tyBtnYes.bRtCompl = TRUE THEN
					tyP1021McSetGen.tyMsgBoxUpdtIPAddrAsk.tyBtnYes.bRtCompl	:= FALSE;
					tyP1021McSetGen.tyMsgBoxUpdtIPAddrAsk.tyBtnYes.bValue	:= FALSE;
					
					p_tyC0008MsgBox ACCESS ADR(tyP1021McSetGen.tyMsgBoxHide);
					
					usiSaveIPAddrStep	:= 1;
					
				ELSIF tyP1021McSetGen.tyMsgBoxUpdtIPAddrAsk.tyBtnNo.bRtCompl = TRUE THEN
					tyP1021McSetGen.tyMsgBoxUpdtIPAddrAsk.tyBtnNo.bRtCompl	:= FALSE;
					tyP1021McSetGen.tyMsgBoxUpdtIPAddrAsk.tyBtnNo.bValue	:= FALSE;
					
					//Recover IP Address
					tyP1021McSetGen.tyGen.tyStringIPAddr.sValue	:= p_sHWInfoIPAddr;
					
					tyP1021McSetGen.tyGen.tyStringIPAddr.bRtCompl	:= FALSE;
					
					p_tyC0008MsgBox ACCESS ADR(tyP1021McSetGen.tyMsgBoxHide);
					
				END_IF
				
			ELSIF usiSaveIPAddrStep = 1 THEN
				//Set IP Address
				sSetIPAddr	:= tyP1021McSetGen.tyGen.tyStringIPAddr.sValue;
				
				eHWInfoAct	:= HWInfoActSetIPAddr;
				
				IF p_eHWInfoStat = HWInfoActSetIPAddr AND p_eHWInfoStatus = Done THEN
					eHWInfoAct	:= HWInfoActIdle;
						
					bUpdateP1021Network	:= TRUE;
				
					usiSaveIPAddrStep	:= 0;
					
					tyP1021McSetGen.tyGen.tyStringIPAddr.bRtCompl	:= FALSE;
					
				ELSIF p_eHWInfoStatus = Error THEN
					p_tyC0008MsgBox ACCESS ADR(tyP1021McSetGen.tyMsgBoxUpdtIPAddrErr);
					
					IF tyP1021McSetGen.tyMsgBoxUpdtIPAddrErr.tyBtnNo.bRtCompl = TRUE THEN
						tyP1021McSetGen.tyMsgBoxUpdtIPAddrErr.tyBtnNo.bRtCompl	:= FALSE;
						tyP1021McSetGen.tyMsgBoxUpdtIPAddrErr.tyBtnNo.bValue	:= FALSE;
						
						p_tyC0008MsgBox ACCESS ADR(tyP1021McSetGen.tyMsgBoxHide);
						
						//Recover IP Address
						tyP1021McSetGen.tyGen.tyStringIPAddr.sValue	:= p_sHWInfoIPAddr;
						
						usiSaveIPAddrStep	:= 0;
						
						tyP1021McSetGen.tyGen.tyStringIPAddr.bRtCompl	:= FALSE;
						
					END_IF
					
				END_IF
				
			END_IF
			
		ELSE
			
			p_tyC0008MsgBox ACCESS ADR(tyP1021McSetGen.tyMsgBoxIPAddrInvalid);
			
			IF tyP1021McSetGen.tyMsgBoxIPAddrInvalid.tyBtnNo.bRtCompl = TRUE THEN
				tyP1021McSetGen.tyMsgBoxIPAddrInvalid.tyBtnNo.bRtCompl	:= FALSE;
				tyP1021McSetGen.tyMsgBoxIPAddrInvalid.tyBtnNo.bValue	:= FALSE;
				
				p_tyC0008MsgBox ACCESS ADR(tyP1021McSetGen.tyMsgBoxHide);
				
				//Recover IP Address
				tyP1021McSetGen.tyGen.tyStringIPAddr.sValue	:= p_sHWInfoIPAddr;
				
				tyP1021McSetGen.tyGen.tyStringIPAddr.bRtCompl	:= FALSE;
				
			END_IF
			
		END_IF
		
	END_IF
	
END_ACTION
