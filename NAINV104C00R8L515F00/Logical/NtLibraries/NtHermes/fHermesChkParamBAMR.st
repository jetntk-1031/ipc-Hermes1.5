
(* Hermes Checking Parameter Board Available & Machine Ready *)
FUNCTION fHermesChkParamBAMR
	
	fHermesChkParamBAMR	:= 0;
	
	IF fHermesChkParamBAMR = 0 THEN
		
		IF tyBoardAvailable.tyAvl.bBoardId = TRUE AND tyMachineReady.tyAvl.bBoardId = TRUE THEN
			
			IF tyBoardAvailable.tyData.sBoardId <> tyMachineReady.tyData.sBoardId THEN
				
				fHermesChkParamBAMR	:= 2700;	//BoardId Mismatch While Checking Board Available & Machine Ready
				
			END_IF
			
		END_IF
		
	END_IF
		
	
	IF fHermesChkParamBAMR = 0 THEN
		
		IF tyBoardAvailable.tyAvl.bProductTypeId = TRUE AND tyMachineReady.tyAvl.bProductTypeId = TRUE THEN
			
			IF tyBoardAvailable.tyData.sProductTypeId <> tyMachineReady.tyData.sProductTypeId THEN
				
				fHermesChkParamBAMR	:= 2701;	//ProductTypeId Mismatch While Checking Board Available & Machine Ready
				
			END_IF
			
		END_IF
		
	END_IF
		
	
	IF fHermesChkParamBAMR = 0 THEN
		
		IF tyBoardAvailable.tyAvl.bFlippedBoard = TRUE AND tyMachineReady.tyAvl.bFlippedBoard = TRUE THEN
			
			IF tyBoardAvailable.tyData.eFlippedBoard <> tyMachineReady.tyData.eFlippedBoard THEN
				
				fHermesChkParamBAMR	:= 2702;	//FlippedBoard Mismatch While Checking Board Available & Machine Ready
				
			END_IF
			
		END_IF
		
	END_IF
	
	
	IF fHermesChkParamBAMR = 0 THEN
		
		IF tyBoardAvailable.tyAvl.bLength = TRUE AND tyMachineReady.tyAvl.bLength = TRUE THEN
			
			IF tyBoardAvailable.tyData.rLength <> tyMachineReady.tyData.rLength THEN
				
				fHermesChkParamBAMR	:= 2703;	//Length Mismatch While Checking Board Available & Machine Ready
				
			END_IF
			
		END_IF
		
	END_IF
	
	
	IF fHermesChkParamBAMR = 0 THEN
		
		IF tyBoardAvailable.tyAvl.bWidth = TRUE AND tyMachineReady.tyAvl.bWidth = TRUE THEN
			
			IF tyBoardAvailable.tyData.rWidth <> tyMachineReady.tyData.rWidth THEN
				
				fHermesChkParamBAMR	:= 2704;	//Width Mismatch While Checking Board Available & Machine Ready
				
			END_IF
			
		END_IF
		
	END_IF
	
	
	IF fHermesChkParamBAMR = 0 THEN
		
		IF tyBoardAvailable.tyAvl.bThickness = TRUE AND tyMachineReady.tyAvl.bThickness = TRUE THEN
			
			IF tyBoardAvailable.tyData.rThickness <> tyMachineReady.tyData.rThickness THEN
				
				fHermesChkParamBAMR	:= 2705;	//Thickness Mismatch While Checking Board Available & Machine Ready
				
			END_IF
			
		END_IF
		
	END_IF
	
	
	IF fHermesChkParamBAMR = 0 THEN
		
		IF tyBoardAvailable.tyAvl.bConveyorSpeed = TRUE AND tyMachineReady.tyAvl.bConveyorSpeed = TRUE THEN
			
			IF tyBoardAvailable.tyData.rConveyorSpeed <> tyMachineReady.tyData.rConveyorSpeed THEN
				
				fHermesChkParamBAMR	:= 2706;	//ConveyorSpeed Mismatch While Checking Board Available & Machine Ready
				
			END_IF
			
		END_IF
		
	END_IF
	
	
	IF fHermesChkParamBAMR = 0 THEN
		
		IF tyBoardAvailable.tyAvl.bTopClearanceHeight = TRUE AND tyMachineReady.tyAvl.bTopClearanceHeight = TRUE THEN
			
			IF tyBoardAvailable.tyData.rTopClearanceHeight <> tyMachineReady.tyData.rTopClearanceHeight THEN
				
				fHermesChkParamBAMR	:= 2707;	//TopClearanceHeight Mismatch While Checking Board Available & Machine Ready
				
			END_IF
			
		END_IF
		
	END_IF
	
	
	IF fHermesChkParamBAMR = 0 THEN
		
		IF tyBoardAvailable.tyAvl.bBottomClearanceHeight = TRUE AND tyMachineReady.tyAvl.bBottomClearanceHeight = TRUE THEN
			
			IF tyBoardAvailable.tyData.rBottomClearanceHeight <> tyMachineReady.tyData.rBottomClearanceHeight THEN
				
				fHermesChkParamBAMR	:= 2708;	//BottomClearanceHeight Mismatch While Checking Board Available & Machine Ready
				
			END_IF
			
		END_IF
		
	END_IF
	
	
	IF fHermesChkParamBAMR = 0 THEN
		
		IF tyBoardAvailable.tyAvl.bWeight = TRUE AND tyMachineReady.tyAvl.bWeight = TRUE THEN
			
			IF tyBoardAvailable.tyData.rWeight <> tyMachineReady.tyData.rWeight THEN
				
				fHermesChkParamBAMR	:= 2709;	//Weight Mismatch While Checking Board Available & Machine Ready
				
			END_IF
			
		END_IF
		
	END_IF
	
END_FUNCTION
