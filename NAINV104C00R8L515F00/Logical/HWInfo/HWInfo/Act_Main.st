(** 2020-10-05 **)
ACTION Act_Main:
	
	//Main
	CASE eStat OF
		
		HWInfoActIdle:
			IF eStatus <> Idle THEN	//Reset Data
				//Private
				fbGetIPAddr(enable := FALSE);
				fbGetMacAddr(enable := FALSE);
				fbSetIPAddr(enable := FALSE);
				fbSetSubnetMask(enable := FALSE);
				fbGetETHConfigMode(enable := FALSE);
				fbSetETHConfigMode(enable := FALSE);
		
				sStatTxt	:= a_sStatText[eStat];
		
			END_IF
			
			eStatus	:= Idle;
		
		HWInfoActGetIPAddr:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		
				sStatTxt	:= a_sStatText[eStat];
		
				IF DiagCpuIsSimulated() = FALSE THEN
					fbGetIPAddr(enable := TRUE);
					IF fbGetIPAddr.status = 0 THEN
						eStatus	:= Done;
					ELSIF fbGetIPAddr.status < 65534 THEN
						udiStatus	:= 10000;	//Get IP Address Error
						eStatus		:= Error;
					END_IF
					
				ELSE
					eStatus	:= Done;
					sIPAddr	:= '127.0.0.1';
					
				END_IF
				
			END_IF
		
		HWInfoActGetSubnetMask:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		
				sStatTxt	:= a_sStatText[eStat];
		
				IF DiagCpuIsSimulated() = FALSE THEN
					fbGetSubnetMask(enable := TRUE);
					IF fbGetSubnetMask.status = 0 THEN
						eStatus	:= Done;
					ELSIF fbGetSubnetMask.status < 65534 THEN
						udiStatus	:= 10001;	//Get Subnet Mask Error
						eStatus		:= Error;
					END_IF
					
				ELSE
					eStatus		:= Done;
					sSubnetMask	:= '255.255.0.0';
					
				END_IF
				
			END_IF
		
		HWInfoActGetMacAddr:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		
				sStatTxt	:= a_sStatText[eStat];
		
				IF DiagCpuIsSimulated() = FALSE THEN
					fbGetMacAddr(enable := TRUE);
					IF fbGetMacAddr.status = 0 THEN
						eStatus	:= Done;
					ELSIF fbGetMacAddr.status < 65534 THEN
						udiStatus	:= 10002;	//Get Mac Address Error
						eStatus		:= Error;
					END_IF
					
				ELSE
					eStatus	:= Done;
					
				END_IF
				
			END_IF
		
		HWInfoActSetIPAddr:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		
				sStatTxt	:= a_sStatText[eStat];
		
				IF DiagCpuIsSimulated() = FALSE THEN
					fbSetIPAddr(enable := TRUE);
					IF fbSetIPAddr.status = 0 THEN
						sIPAddr	:= p_sSetIPAddr;
						eStatus	:= Done;
					ELSIF fbSetIPAddr.status < 65534 THEN
						udiStatus	:= 10003;	//Set IP Address Error
						eStatus		:= Error;
					END_IF
					
				ELSE
					eStatus	:= Done;
					
				END_IF
				
			END_IF
		
		HWInfoActSetSubnetMask:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		
				sStatTxt	:= a_sStatText[eStat];
		
				IF DiagCpuIsSimulated() = FALSE THEN
					fbSetSubnetMask(enable := TRUE);
					IF fbSetSubnetMask.status = 0 THEN
						sSubnetMask	:= p_sSetSubnetMask;
						eStatus		:= Done;
					ELSIF fbSetSubnetMask.status < 65534 THEN
						udiStatus	:= 10004;	//Set Subnet Mask Error
						eStatus		:= Error;
					END_IF
					
				ELSE
					eStatus	:= Done;
					
				END_IF
				
			END_IF
		
		HWInfoActGetEthConfigMode:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		
				sStatTxt	:= a_sStatText[eStat];
				
				IF DiagCpuIsSimulated() = FALSE THEN
					fbGetETHConfigMode(enable := TRUE);
					IF fbGetETHConfigMode.status = 0 THEN
						udiConfigMode := fbGetETHConfigMode.ConfigMode;
						eStatus	:= Done;
					ELSIF fbGetETHConfigMode.status < 65534 THEN
						udiStatus	:= 10005;	//Get Network Configuration  Error
						eStatus		:= Error;
					END_IF
					
				ELSE
					eStatus	:= Done;
					
				END_IF
				
			END_IF
		
		HWInfoActSetEthConfigMode:
			IF eStatus = Idle OR eStatus = Busy THEN
				
				eStatus	:= Busy;
		
				sStatTxt	:= a_sStatText[eStat];
				
				IF DiagCpuIsSimulated() = FALSE THEN
					fbSetETHConfigMode.ConfigMode := USINT_TO_UDINT(p_usiNetworkMod);
					fbSetETHConfigMode(enable := TRUE);
					
					IF fbSetETHConfigMode.status = 0 THEN
						eStatus	:= Done;
					ELSIF fbSetETHConfigMode.status < 65534 THEN
						udiStatus	:= 10006;	//Set Network Configuration  Error
						eStatus		:= Error;
					END_IF
					
				ELSE
					eStatus	:= Done;
					
				END_IF
				
			END_IF
		
	END_CASE
	
END_ACTION
