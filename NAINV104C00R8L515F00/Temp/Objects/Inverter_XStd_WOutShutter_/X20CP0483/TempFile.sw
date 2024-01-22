<?xml version="1.0" encoding="utf-8"?>
<?AutomationStudio Version=4.8.4.50 SP?>
<SwConfiguration CpuAddress="SL1" xmlns="http://br-automation.co.at/AS/SwConfiguration">
  <TaskClass Name="Cyclic#1">
    <Task Name="DInput" Source="DInput.DInput.prg" Memory="UserROM" Language="IEC" Debugging="true" />
    <Task Name="DOutput" Source="DOutput.DOutput.prg" Memory="UserROM" Language="IEC" Debugging="true" />
  </TaskClass>
  <TaskClass Name="Cyclic#2">
    <Task Name="Conv" Source="Conv.Conv.prg" Memory="UserROM" Language="IEC" Debugging="true" />
  </TaskClass>
  <TaskClass Name="Cyclic#3">
    <Task Name="UI" Source="UI.UI.prg" Memory="UserROM" Language="IEC" Debugging="true" />
    <Task Name="Startup" Source="Startup.Startup.prg" Memory="UserROM" Language="IEC" Debugging="true" />
    <Task Name="General" Source="General.General.prg" Memory="UserROM" Language="IEC" Debugging="true" />
    <Task Name="UsrFolder" Source="UsrFolder.UsrFolder.prg" Memory="UserROM" Language="IEC" Debugging="true" />
    <Task Name="LibVer" Source="LibVer.LibVer.prg" Memory="UserROM" Language="IEC" Debugging="true" />
    <Task Name="Time" Source="Time.Time.prg" Memory="UserROM" Language="IEC" Debugging="true" />
    <Task Name="HWInfo" Source="HWInfo.HWInfo.prg" Memory="UserROM" Language="IEC" Debugging="true" />
    <Task Name="TLBuz" Source="TLBuz.TLBuz.prg" Memory="UserROM" Language="IEC" Debugging="true" />
    <Task Name="Alarm" Source="Alarm.Alarm.prg" Memory="UserROM" Language="IEC" Debugging="true" />
    <Task Name="RstErr" Source="RstErr.RstErr.prg" Memory="UserROM" Language="IEC" Debugging="true" />
    <Task Name="ProdRcp" Source="ProdRcp.ProdRcp.prg" Memory="UserROM" Language="IEC" Debugging="true" />
    <Task Name="MpProdRcp" Source="MpProdRcp.MpProdRcp.prg" Memory="UserROM" Language="IEC" Debugging="true" />
    <Task Name="McParam" Source="McParam.McParam.prg" Memory="UserROM" Language="IEC" Debugging="true" />
    <Task Name="NtParam" Source="NtParam.NtParam.prg" Memory="UserROM" Language="IEC" Debugging="true" />
    <Task Name="UsrMgmt" Source="UsrMgmt.UsrMgmt.prg" Memory="UserROM" Language="IEC" Debugging="true" />
    <Task Name="USSMEMA" Source="SMEMA.USSMEMA.prg" Memory="UserROM" Language="IEC" Debugging="true" />
    <Task Name="DSSMEMA" Source="SMEMA.DSSMEMA.prg" Memory="UserROM" Language="IEC" Debugging="true" />
    <Task Name="USSMEMA2" Source="SMEMA.USSMEMA2.prg" Memory="UserROM" Language="IEC" Debugging="true" />
    <Task Name="PneuNoSenS" Source="Pneu.PneuNoSenStopper.prg" Memory="UserROM" Language="IEC" Debugging="true" />
    <Task Name="PneuNoSenC" Source="Pneu.PneuNoSenClamp.prg" Memory="UserROM" Language="IEC" Debugging="true" />
    <Task Name="Pneu2SenIn" Source="Pneu.Pneu2SenInShutter.prg" Memory="UserROM" Language="IEC" Debugging="true" />
    <Task Name="Pneu2SenOu" Source="Pneu.Pneu2SenOutShutter.prg" Memory="UserROM" Language="IEC" Debugging="true" />
    <Task Name="Pneu2SenI1" Source="Pneu.Pneu2SenInClamp1.prg" Memory="UserROM" Language="IEC" Debugging="true" />
    <Task Name="Pneu2SenI2" Source="Pneu.Pneu2SenInClamp2.prg" Memory="UserROM" Language="IEC" Debugging="true" />
    <Task Name="Pneu2SenI3" Source="Pneu.Pneu2SenInClamp3.prg" Memory="UserROM" Language="IEC" Debugging="true" />
    <Task Name="AWOpen" Source="CANOpenServo.AW.AWOpen.prg" Memory="UserROM" Language="IEC" Debugging="true" />
    <Task Name="Hermes" Source="Hermes.Hermes.prg" Memory="UserROM" Language="IEC" Debugging="true" />
    <Task Name="USHermes" Source="Hermes.USHermes.prg" Memory="UserROM" Language="IEC" Debugging="true" />
    <Task Name="USHermes2" Source="Hermes.USHermes2.prg" Memory="UserROM" Language="IEC" Debugging="true" />
    <Task Name="DSHermes" Source="Hermes.DSHermes.prg" Memory="UserROM" Language="IEC" Debugging="true" />
    <Task Name="DSHermes2" Source="Hermes.DSHermes2.prg" Memory="UserROM" Language="IEC" Debugging="true" />
    <Task Name="RmtHermes" Source="Hermes.RmtHermes.prg" Memory="UserROM" Language="IEC" Debugging="true" />
    <Task Name="LFLeader" Source="LF.LFLeader.prg" Memory="UserROM" Language="IEC" Debugging="true" />
    <Task Name="LFFollower" Source="LF.LFFollower.prg" Memory="UserROM" Language="IEC" Debugging="true" />
    <Task Name="Follower1" Source="LF.Follower1.prg" Memory="UserROM" Language="IEC" Debugging="true" />
    <Task Name="LCS" Source="LCS.LCS.prg" Memory="UserROM" Language="IEC" Debugging="true" />
    <Task Name="LCSMngRcp" Source="LCS.LCSMngRcp.prg" Memory="UserROM" Language="IEC" Debugging="true" />
    <Task Name="LCSLF" Source="LCS.LCSLF.prg" Memory="UserROM" Language="IEC" Debugging="true" />
    <Task Name="Ops" Source="Operations.Ops.prg" Memory="UserROM" Language="IEC" Debugging="true" />
    <Task Name="OpsInvert" Source="Operations.OpsInvert.prg" Memory="UserROM" Language="IEC" Debugging="true" />
    <Task Name="Machine" Source="Machine.Machine.prg" Memory="UserROM" Language="IEC" Debugging="true" />
    <Task Name="MotorBrk" Source="MotorBrk.MotorBrk.prg" Memory="UserROM" Language="IEC" Debugging="true" />
    <Task Name="Simu" Source="Simulation.Simu.prg" Memory="UserROM" Language="IEC" Debugging="true" />
    <Task Name="SimuInv" Source="Simulation.SimuInv.prg" Memory="UserROM" Language="IEC" Debugging="true" />
  </TaskClass>
  <TaskClass Name="Cyclic#4" />
  <TaskClass Name="Cyclic#5" />
  <TaskClass Name="Cyclic#6" />
  <TaskClass Name="Cyclic#7" />
  <TaskClass Name="Cyclic#8" />
  <DataObjects>
    <DataObject Name="Acp10sys" Source="" Memory="UserROM" Language="Binary" />
  </DataObjects>
  <VcDataObjects>
    <VcDataObject Name="Visu" Source="UI.Visu.dob" Memory="UserROM" Language="Vc" WarningLevel="2" />
  </VcDataObjects>
  <Binaries>
    <BinaryObject Name="vccslider" Source="" Memory="UserROM" Language="Binary" />
    <BinaryObject Name="vccnum" Source="" Memory="UserROM" Language="Binary" />
    <BinaryObject Name="vcpdvnc" Source="" Memory="UserROM" Language="Binary" />
    <BinaryObject Name="Visu02" Source="" Memory="UserROM" Language="Binary" />
    <BinaryObject Name="vccalarm" Source="" Memory="UserROM" Language="Binary" />
    <BinaryObject Name="vccovl" Source="" Memory="UserROM" Language="Binary" />
    <BinaryObject Name="vcfile" Source="" Memory="UserROM" Language="Binary" />
    <BinaryObject Name="vccstr" Source="" Memory="UserROM" Language="Binary" />
    <BinaryObject Name="vccline" Source="" Memory="UserROM" Language="Binary" />
    <BinaryObject Name="arial" Source="" Memory="UserROM" Language="Binary" />
    <BinaryObject Name="udbdef" Source="" Memory="UserROM" Language="Binary" />
    <BinaryObject Name="vcgclass" Source="" Memory="UserROM" Language="Binary" />
    <BinaryObject Name="vccbtn" Source="" Memory="UserROM" Language="Binary" />
    <BinaryObject Name="vcrt" Source="" Memory="UserROM" Language="Binary" />
    <BinaryObject Name="Visu03" Source="" Memory="UserROM" Language="Binary" />
    <BinaryObject Name="vcctext" Source="" Memory="UserROM" Language="Binary" />
    <BinaryObject Name="TCData" Source="" Memory="SystemROM" Language="Binary" />
    <BinaryObject Name="arialxsr" Source="" Memory="UserROM" Language="Binary" />
    <BinaryObject Name="vccbmp" Source="" Memory="UserROM" Language="Binary" />
    <BinaryObject Name="vcfntttf" Source="" Memory="UserROM" Language="Binary" />
    <BinaryObject Name="vccddbox" Source="" Memory="UserROM" Language="Binary" />
    <BinaryObject Name="vcalarm" Source="" Memory="UserROM" Language="Binary" />
    <BinaryObject Name="vcdsint" Source="" Memory="UserROM" Language="Binary" />
    <BinaryObject Name="vccpopup" Source="" Memory="UserROM" Language="Binary" />
    <BinaryObject Name="vccshape" Source="" Memory="UserROM" Language="Binary" />
    <BinaryObject Name="vcchspot" Source="" Memory="UserROM" Language="Binary" />
    <BinaryObject Name="arialbd" Source="" Memory="UserROM" Language="Binary" />
    <BinaryObject Name="vctcal" Source="" Memory="UserROM" Language="Binary" />
    <BinaryObject Name="arsvcreg" Source="" Memory="UserROM" Language="Binary" />
    <BinaryObject Name="vcmgr" Source="" Memory="UserROM" Language="Binary" />
    <BinaryObject Name="vcnet" Source="" Memory="UserROM" Language="Binary" />
    <BinaryObject Name="vcdsloc" Source="" Memory="UserROM" Language="Binary" />
    <BinaryObject Name="Visu01" Source="" Memory="UserROM" Language="Binary" />
    <BinaryObject Name="arialbi" Source="" Memory="UserROM" Language="Binary" />
    <BinaryObject Name="vcpkat" Source="" Memory="UserROM" Language="Binary" />
    <BinaryObject Name="visvc" Source="" Memory="UserROM" Language="Binary" />
    <BinaryObject Name="vccdt" Source="" Memory="UserROM" Language="Binary" />
    <BinaryObject Name="vccbar" Source="" Memory="UserROM" Language="Binary" />
    <BinaryObject Name="vcpdsw" Source="" Memory="UserROM" Language="Binary" />
    <BinaryObject Name="vcshared" Source="" Memory="UserROM" Language="Binary" />
    <BinaryObject Name="vcbclass" Source="" Memory="UserROM" Language="Binary" />
    <BinaryObject Name="vcpfar00" Source="" Memory="UserROM" Language="Binary" />
    <BinaryObject Name="Acp10map" Source="" Memory="UserROM" Language="Binary" />
    <BinaryObject Name="acp10cfg" Source="" Memory="UserROM" Language="Binary" />
    <BinaryObject Name="iomap" Source="" Memory="UserROM" Language="Binary" />
    <BinaryObject Name="User" Source="" Memory="UserROM" Language="Binary" />
    <BinaryObject Name="ashwac" Source="" Memory="UserROM" Language="Binary" />
    <BinaryObject Name="arconfig" Source="" Memory="SystemROM" Language="Binary" />
    <BinaryObject Name="Role" Source="" Memory="UserROM" Language="Binary" />
    <BinaryObject Name="Config" Source="" Memory="UserROM" Language="Binary" />
    <BinaryObject Name="ashwd" Source="" Memory="SystemROM" Language="Binary" />
    <BinaryObject Name="asfw" Source="" Memory="SystemROM" Language="Binary" />
    <BinaryObject Name="sysconf" Source="" Memory="SystemROM" Language="Binary" />
    <BinaryObject Name="vcpfgen" Source="" Memory="UserROM" Language="Binary" />
    <BinaryObject Name="OpcUaMap" Source="" Memory="UserROM" Language="Binary" />
    <BinaryObject Name="segoeuib" Source="" Memory="UserROM" Language="Binary" />
    <BinaryObject Name="vcctrend" Source="" Memory="UserROM" Language="Binary" />
  </Binaries>
  <Libraries>
    <LibraryObject Name="NtBuffer" Source="NtLibraries.NtBuffer.lby" Memory="UserROM" Language="Binary" Debugging="true" />
    <LibraryObject Name="NtMem" Source="NtLibraries.NtMem.lby" Memory="UserROM" Language="Binary" Debugging="true" />
    <LibraryObject Name="NtOvenInfo" Source="NtLibraries.NtOvenInfo.lby" Memory="UserROM" Language="Binary" Debugging="true" />
    <LibraryObject Name="NtRS232" Source="NtLibraries.NtRS232.lby" Memory="UserROM" Language="Binary" Debugging="true" />
    <LibraryObject Name="NtStepper" Source="NtLibraries.NtStepper.lby" Memory="UserROM" Language="Binary" Debugging="true" />
    <LibraryObject Name="NtFileIO" Source="NtLibraries.NtFileIO.lby" Memory="UserROM" Language="Binary" Debugging="true" />
    <LibraryObject Name="NtLogFile" Source="NtLibraries.NtLogFile.lby" Memory="UserROM" Language="Binary" Debugging="true" />
    <LibraryObject Name="NtTLBuz" Source="NtLibraries.NtTLBuz.lby" Memory="UserROM" Language="Binary" Debugging="true" />
    <LibraryObject Name="NtMotion" Source="NtLibraries.NtMotion.lby" Memory="UserROM" Language="Binary" Debugging="true" />
    <LibraryObject Name="NtPneu" Source="NtLibraries.NtPneu.lby" Memory="UserROM" Language="Binary" Debugging="true" />
    <LibraryObject Name="NtConv" Source="NtLibraries.NtConv.lby" Memory="UserROM" Language="Binary" Debugging="true" />
    <LibraryObject Name="NtTCP" Source="NtLibraries.NtTCP.lby" Memory="UserROM" Language="Binary" Debugging="true" />
    <LibraryObject Name="NtMessage" Source="NtLibraries.NtMessage.lby" Memory="UserROM" Language="Binary" Debugging="true" />
    <LibraryObject Name="NtSMEMA" Source="NtLibraries.NtSMEMA.lby" Memory="UserROM" Language="Binary" Debugging="true" />
    <LibraryObject Name="NtOPCUA" Source="NtLibraries.NtOPCUA.lby" Memory="UserROM" Language="Binary" Debugging="true" />
    <LibraryObject Name="NtVersion" Source="NtLibraries.NtVersion.lby" Memory="UserROM" Language="Binary" Debugging="true" />
    <LibraryObject Name="NtLF" Source="NtLibraries.NtLF.lby" Memory="UserROM" Language="Binary" Debugging="true" />
    <LibraryObject Name="NtRecipe" Source="NtLibraries.NtRecipe.lby" Memory="UserROM" Language="Binary" Debugging="true" />
    <LibraryObject Name="NtUI" Source="NtLibraries.NtUI.lby" Memory="UserROM" Language="IEC" Debugging="true" />
    <LibraryObject Name="NtGeneral" Source="NtLibraries.NtGeneral.lby" Memory="UserROM" Language="IEC" Debugging="true" />
    <LibraryObject Name="standard" Source="Libraries.standard.lby" Memory="UserROM" Language="Binary" Debugging="true" />
    <LibraryObject Name="runtime" Source="Libraries.runtime.lby" Memory="UserROM" Language="Binary" Debugging="true" />
    <LibraryObject Name="astime" Source="Libraries.astime.lby" Memory="UserROM" Language="Binary" Debugging="true" />
    <LibraryObject Name="asstring" Source="Libraries.asstring.lby" Memory="UserROM" Language="Binary" Debugging="true" />
    <LibraryObject Name="AsIecCon" Source="Libraries.AsIecCon.lby" Memory="UserROM" Language="Binary" Debugging="true" />
    <LibraryObject Name="AsCANopen" Source="Libraries.AsCANopen.lby" Memory="UserROM" Language="Binary" Debugging="true" />
    <LibraryObject Name="FileIO" Source="Libraries.FileIO.lby" Memory="UserROM" Language="Binary" Debugging="true" />
    <LibraryObject Name="AsIODiag" Source="Libraries.AsIODiag.lby" Memory="UserROM" Language="Binary" Debugging="true" />
    <LibraryObject Name="AsMem" Source="Libraries.AsMem.lby" Memory="UserROM" Language="Binary" Debugging="true" />
    <LibraryObject Name="dvframe" Source="Libraries.dvframe.lby" Memory="UserROM" Language="Binary" Debugging="true" />
    <LibraryObject Name="AsOpcUac" Source="Libraries.AsOpcUac.lby" Memory="UserROM" Language="Binary" Debugging="true" />
    <LibraryObject Name="sys_lib" Source="Libraries.sys_lib.lby" Memory="UserROM" Language="Binary" Debugging="true" />
    <LibraryObject Name="AsTCP" Source="Libraries.AsTCP.lby" Memory="UserROM" Language="Binary" Debugging="true" />
    <LibraryObject Name="brsystem" Source="Libraries.brsystem.lby" Memory="UserROM" Language="Binary" Debugging="true" />
    <LibraryObject Name="AsFltGen" Source="Libraries.AsFltGen.lby" Memory="UserROM" Language="Binary" Debugging="true" />
    <LibraryObject Name="Acp10man" Source="Libraries.Acp10man.lby" Memory="UserROM" Language="Binary" Debugging="true" />
    <LibraryObject Name="Acp10par" Source="Libraries.Acp10par.lby" Memory="UserROM" Language="Binary" Debugging="true" />
    <LibraryObject Name="NcGlobal" Source="Libraries.NcGlobal.lby" Memory="UserROM" Language="Binary" Debugging="true" />
    <LibraryObject Name="Acp10_MC" Source="Libraries.Acp10_MC.lby" Memory="UserROM" Language="Binary" Debugging="true" />
    <LibraryObject Name="NtHermes" Source="NtLibraries.NtHermes.lby" Memory="UserROM" Language="IEC" Debugging="true" />
    <LibraryObject Name="AsARCfg" Source="" Memory="UserROM" Language="Binary" Debugging="true" />
    <LibraryObject Name="visapi" Source="" Memory="UserROM" Language="Binary" Debugging="true" />
    <LibraryObject Name="MpRecipe" Source="" Memory="UserROM" Language="Binary" Debugging="true" />
    <LibraryObject Name="MpBase" Source="" Memory="UserROM" Language="Binary" Debugging="true" />
    <LibraryObject Name="powerlnk" Source="" Memory="UserROM" Language="Binary" Debugging="true" />
    <LibraryObject Name="dataobj" Source="" Memory="UserROM" Language="Binary" Debugging="true" />
    <LibraryObject Name="vcresman" Source="" Memory="UserROM" Language="Binary" Debugging="true" />
    <LibraryObject Name="AsUSB" Source="" Memory="UserROM" Language="Binary" Debugging="true" />
    <LibraryObject Name="MpCom" Source="" Memory="UserROM" Language="Binary" Debugging="true" />
    <LibraryObject Name="AsRfbExt" Source="" Memory="UserROM" Language="Binary" Debugging="true" />
    <LibraryObject Name="operator" Source="" Memory="UserROM" Language="Binary" Debugging="true" />
    <LibraryObject Name="AsIORTI" Source="" Memory="UserROM" Language="Binary" Debugging="true" />
  </Libraries>
</SwConfiguration>