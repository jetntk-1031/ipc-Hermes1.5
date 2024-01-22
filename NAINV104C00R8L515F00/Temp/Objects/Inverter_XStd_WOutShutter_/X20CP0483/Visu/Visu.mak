######################################################
#                                                    #
# Automatic generated Makefile for Visual Components #
#                                                    #
#                  Do NOT edit!                      #
#                                                    #
######################################################

VCC:=@'$(AS_BIN_PATH)/br.vc.pc.exe'
LINK:=@'$(AS_BIN_PATH)/BR.VC.Link.exe'
MODGEN:=@'$(AS_BIN_PATH)/BR.VC.ModGen.exe'
VCPL:=@'$(AS_BIN_PATH)/BR.VC.PL.exe'
VCHWPP:=@'$(AS_BIN_PATH)/BR.VC.HWPP.exe'
VCDEP:=@'$(AS_BIN_PATH)/BR.VC.Depend.exe'
VCFLGEN:=@'$(AS_BIN_PATH)/BR.VC.lfgen.exe'
VCREFHANDLER:=@'$(AS_BIN_PATH)/BR.VC.CrossReferenceHandler.exe'
VCXREFEXTENDER:=@'$(AS_BIN_PATH)/BR.AS.CrossRefVCExtender.exe'
RM=CMD /C DEL
PALFILE_Visu=$(AS_PROJECT_PATH)/Logical/UI/Visu/Palette.vcr
VCCFLAGS_Visu=-server -proj Visu -vc '$(AS_PROJECT_PATH)/Logical/UI/Visu/VCObject.vc' -prj_path '$(AS_PROJECT_PATH)' -temp_path '$(AS_TEMP_PATH)' -cfg $(AS_CONFIGURATION) -plc $(AS_PLC) -plctemp $(AS_TEMP_PLC) -cpu_path '$(AS_CPU_PATH)'
VCFIRMWARE=4.72.1
VCFIRMWAREPATH=$(AS_VC_PATH)/Firmware/V4.72.1/SG4
VCOBJECT_Visu=$(AS_PROJECT_PATH)/Logical/UI/Visu/VCObject.vc
VCSTARTUP='vcstart.br'
VCLOD='vclod.br'
VCSTPOST='vcstpost.br'
TARGET_FILE_Visu=$(AS_CPU_PATH)/Visu.br
OBJ_SCOPE_Visu=UI
PRJ_PATH_Visu=$(AS_PROJECT_PATH)
SRC_PATH_Visu=$(AS_PROJECT_PATH)/Logical/$(OBJ_SCOPE_Visu)/Visu
TEMP_PATH_Visu=$(AS_TEMP_PATH)/Objects/$(AS_CONFIGURATION)/$(AS_TEMP_PLC)/Visu
TEMP_PATH_Shared=$(AS_TEMP_PATH)/Objects/$(AS_CONFIGURATION)/$(AS_TEMP_PLC)/VCShared
TEMP_PATH_ROOT_Visu=$(AS_TEMP_PATH)
VC_LIBRARY_LIST_Visu=$(TEMP_PATH_Visu)/libraries.vci
VC_XREF_BUILDFILE_Visu=$(AS_TEMP_PATH)/Objects/$(AS_CONFIGURATION)/$(AS_TEMP_PLC)/vcxref.build
VC_XREF_CLEANFILE=$(AS_TEMP_PATH)/Objects/$(AS_CONFIGURATION)/$(AS_TEMP_PLC)/vcxref.clean
VC_LANGUAGES_Visu=$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr
CPUHWC='$(TEMP_PATH_Visu)/cpuhwc.vci'
VC_STATIC_OPTIONS_Visu='$(TEMP_PATH_Visu)/vcStaticOptions.xml'
VC_STATIC_OPTIONS_Shared='$(TEMP_PATH_Shared)/vcStaticOptions.xml'
# include Shared and Font Makefile (only once)
	include $(AS_TEMP_PATH)/objects/$(AS_CONFIGURATION)/$(AS_TEMP_PLC)/VCFntDat/Font_Visu.mak
ifneq ($(VCINC),1)
	VCINC=1
	include $(AS_TEMP_PATH)/objects/$(AS_CONFIGURATION)/$(AS_TEMP_PLC)/VCShared/VCShared.mak
endif

DEPENDENCIES_Visu=-d vcgclass -profile 'False'
DEFAULT_STYLE_SHEET_Visu='Source[local].StyleSheet[Style_1_0_0]'
SHARED_MODULE=$(TEMP_PATH_ROOT_Visu)/Objects/$(AS_CONFIGURATION)/$(AS_TEMP_PLC)/vcshared.br
LFNTFLAGS_Visu=-P '$(AS_PROJECT_PATH)' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)'
BDRFLAGS_Visu=-P '$(AS_PROJECT_PATH)' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)'

# Local Libs
LIB_LOCAL_OBJ_Visu=$(TEMP_PATH_Visu)/localobj.vca

# Hardware sources
PANEL_HW_OBJECT_Visu=$(TEMP_PATH_ROOT_Visu)/Objects/$(AS_CONFIGURATION)/$(AS_TEMP_PLC)/Visu/dis.Hardware.vco
PANEL_HW_VCI_Visu=$(TEMP_PATH_ROOT_Visu)/Objects/$(AS_CONFIGURATION)/$(AS_TEMP_PLC)/Visu/dis.Hardware.vci
PANEL_HW_SOURCE_Visu=C:/Users/wongjl/Desktop/job/Hermes\ 1_5\ 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Physical/Inverter_XStd_WOutShutter_/Hardware.hw 
DIS_OBJECTS_Visu=$(PANEL_HW_OBJECT_Visu) $(KEYMAP_OBJECTS_Visu)

# KeyMapping flags
$(TEMP_PATH_Visu)/dis.PS2-Keyboard.vco: $(AS_PROJECT_PATH)/Physical/Inverter_XStd_WOutShutter_/X20CP0483/VC/PS2-Keyboard.dis $(PANEL_HW_SOURCE_Visu)
	$(VCHWPP) -f '$(PANEL_HW_SOURCE_Visu)' -o '$(subst .vco,.vci,$(TEMP_PATH_Visu)/dis.PS2-Keyboard.vco)' -n Visu -d Visu -pal '$(PALFILE_Visu)' -c '$(AS_CONFIGURATION)' -p '$(AS_PLC)' -ptemp '$(AS_TEMP_PLC)' -B 'B4.82' -L 'AsRfbExt: V*, visapi: V*' -hw '$(CPUHWC)' -warninglevel 2 -so $(VC_STATIC_OPTIONS_Visu) -sos $(VC_STATIC_OPTIONS_Shared) -keyboard '$(AS_PROJECT_PATH)/Physical/Inverter_XStd_WOutShutter_/X20CP0483/VC/PS2-Keyboard.dis' -fp '$(AS_VC_PATH)/Firmware/V4.72.1/SG4' -prj '$(AS_PROJECT_PATH)' -apj 'NAINV104C00R8L515F00' -sfas -vcob '$(VCOBJECT_Visu)'
	$(VCC) -f '$(subst .vco,.vci,$@)' -o '$@' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -k '$(VCVK_SOURCES_Visu)' $(VCCFLAGS_Visu) -p Visu -sfas

KEYMAP_SOURCES_Visu=$(AS_PROJECT_PATH)/Physical/Inverter_XStd_WOutShutter_/X20CP0483/VC/PS2-Keyboard.dis 
KEYMAP_OBJECTS_Visu=$(TEMP_PATH_Visu)/dis.PS2-Keyboard.vco 

# All Source Objects
FNINFO_SOURCES_Visu=$(AS_PROJECT_PATH)/Logical/UI/Visu/Fonts/Arial12px.fninfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Fonts/BigHeaderFont.fninfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Fonts/GeneralLabelFont.fninfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Fonts/HeaderFont.fninfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Fonts/Keypad.fninfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Fonts/MenuButtonCmd.fninfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Fonts/NumericDisplayFont.fninfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Fonts/OptSubHeaderFont.fninfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Fonts/StringInputFont.fninfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Fonts/SubHeaderFont.fninfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Fonts/Arial10pxBold.fninfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Fonts/Arial9pxBold.fninfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Fonts/Arial9px.fninfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Fonts/DateTimeFont.fninfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Fonts/Languages_Chinese.fninfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Fonts/Languages_English.fninfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Fonts/Font_Button_Below150.fninfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Fonts/Font_Notification_User.fninfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Fonts/Font_Notification_Time.fninfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Fonts/Font_Notification_Date.fninfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Fonts/Font_Notification_Title.fninfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Fonts/Font_SubHeader.fninfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Fonts/Font_DisplayIO.fninfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Fonts/Font_Button_Above150.fninfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Fonts/Font_SMEMA.fninfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Fonts/ScreenSaver.fninfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Fonts/Font_Button_Menu.fninfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Fonts/HeaderFont_Big.fninfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Fonts/GeneralWarningFont.fninfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Fonts/Font_DisplayIOSmall.fninfo 

BMINFO_SOURCES_Visu=$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/CheckBox_Off.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/CheckBox_On.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Group_Black.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Group_White.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Menu_Alarm.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Menu_MachineInfo.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Menu_Operation.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Menu_UserLogin.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Menu_UserLogout.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Alarm_Current_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Alarm_History_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Dialog_Cancel.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Dialog_Close.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Dialog_OK.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LED_Grey_10.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LED_Grey_20.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LED_Grey_25.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LED_Grey_30.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LED_Grey_40.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LED_Green_10.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LED_Green_20.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LED_Green_25.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LED_Green_30.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LED_Green_40.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Triangle_Left_Green.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Triangle_Left_Red.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Triangle_Left_White.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LF_Delete_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LF_Edit_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LF_From_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LF_Leader_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LF_Offline_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LF_Online_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LF_Follower_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LF_Time_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LF_To_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LF_Tx_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Msg_Warning.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Ops_Auto_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Ops_Stop_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Recipe_Add_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Recipe_Copy_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Recipe_Delete_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Recipe_Download_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Recipe_Edit_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Recipe_Load_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Recipe_Paste_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Recipe_Preview_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Recipe_Save_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Recipe_Search_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Triangle_Right_Green.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Triangle_Right_Red.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Triangle_Right_White.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_User_Add_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_User_Delete_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_User_Edit_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_User_Login_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Menu_BufferInfo.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Menu_BufferSelection.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Menu_BufferSetting.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Menu_InputManual.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Menu_LangDateTime.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Menu_MachineSetting.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Menu_LF.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Menu_LFSetting.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Menu_ModeSelection.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Menu_MotionManual.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Menu_Nutek.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Menu_OutputManual.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Menu_OvenInfo.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Menu_RecipeSelection.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Menu_RecipeSetting.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Menu_SMEMAManual.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Menu_SMEMASetting.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Menu_Simulation.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Menu_UserSetting.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Buffer_Delete_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Buffer_Load_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Buffer_Preview_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Buffer_Save_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LED_Grey_15.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Motion_Abs_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Motion_Close_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Motion_Down_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Motion_Front_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Motion_Get_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Motion_Home_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Motion_Open_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Motion_Power_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Motion_Rear_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Motion_Rel_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Motion_Reset_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Motion_Stop_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Motion_Teach_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Motion_Up_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Pneumatic_Close_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Pneumatic_Extend_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Pneumatic_Open_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Pneumatic_Retract_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_InspConv_Front.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_OvenLR_Front.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_OvenRL_Front.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Nutek_Full_Blue.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Border_MsgBox_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/QuickAccess_BG_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Common_Arrow_Left_White_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Common_Arrow_Right_White_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_QuickAccess_Audio_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_QuickAccess_Audio_Off_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_QuickAccess_Audio_On_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Slider_Button.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Border_Detail.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Border_Display.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Border_Input.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mask_800x480.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/RadioButton_Off.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/RadioButton_On.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Slider_Bar.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Transparent.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Common_Page_2_1.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Common_Page_3_1.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Common_Page_3_3.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Msg_Alarm.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Msg_Info.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtn_Green_80x35_R5.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtn_Grey_80x35_R5.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtn_Silver_80x35_R5.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Nutek_Building_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtn_Green_100x35_R6.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtn_Grey_100x35_R6.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtn_Silver_100x35_R6.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/QuickAccess_Icon_Grey_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtn_Green_150x50_R8.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtn_Silver_150x50_R8.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtn_Red_150x50_R8.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtn_Green_340x80_R17.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtn_Grey_340x80_R17.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtn_Silver_340x80_R17.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtn_Green_100x50_R10.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtn_Grey_100x50_R10.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtn_Silver_100x50_R10.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Switch_Up_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtn_Green_160x35_R10.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtn_Grey_160x35_R10.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtn_Silver_160x35_R10.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtn_Grey_65x25_R6.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtn_Silver_65x25_R6.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Group_Silver.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Common_Page_2_2.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Common_Page_3_2.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Common_Page_4_1.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Common_Page_4_2.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Common_Page_4_3.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Common_Page_4_4.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Text_Disabled_400x400.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Text_Disabled_340x80.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/QuickAccess_Icon_Mask_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Keypad_NumPad.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtn_Red_100x50_R10.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/GenBtn_32x32_Arrow_Up_Active.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/GenBtn_32x32_Arrow_Up_Pressed.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Menu_ManualReset.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Menu_ManualResetting.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtnRound_Red_65.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtnRound_DarkRed_65.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtnRound_Green_65.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtnRound_DardGreen_65.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtnRound_LightBlue_65.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtnRound_DarkBlue_65.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Border_SMEMA.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/QuickAccess_Rst_Blue_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/QuickAccess_Rst_Mask_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtn_Blue_100x50_R10.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtn_LightBlue_100x50_R10.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/QuickAccess_Rst_Red_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Buffer_Reset_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Motion_Setting_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/QuickAccess_Rst_Yellow_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/QuickAccess_Icon_Green_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Table_ShiftDown_Active_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Table_ShiftDown_Pressed_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Table_ShiftUp_Active_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Table_ShiftUp_Pressed_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Common_Home_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Recipe_Sync_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/QuickAccess_Full_Mask_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Menu_Backup.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Clamper_Disengage.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Clamper_Disengage_Small.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Clamper_Engage_Small.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Conveyor.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_FIFO.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_FIFO_Small.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Front.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Front_Small.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Lifter_Down_Small.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Lifter_Top_Small.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Outlet_Close_Small.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Switch_Down_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LED_Blue_10.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LED_Blue_15.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LED_Blue_20.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LED_Blue_25.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LED_Blue_30.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LED_Blue_40.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Text_Virtual_58x41.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Ops_Pause_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Motion_Run_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Hermes_Logo_40x40.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtn_Yellow_150x50_R8.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LED_Green_15.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/GenBtn_32x32_Arrow_Down_Active.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/GenBtn_32x32_Arrow_Down_Pressed.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorStat_Red_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorStat_Green_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorStat_Yellow_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorStat_Amber_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorStat_DarkBlue_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorStat_LightBlue_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_QuickAccess_ShowInfo_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Cmn_Arrw_DnRgt_White_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Cmn_Arrw_DnRgt_Green_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Cmn_Arrw_DnRgt_Yellow_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Cmn_Arrw_DnRgt_Red_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Cmn_Arrw_DnRgtExp_Green_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Cmn_Arrw_DnRgtExp_White_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Cmn_Arrw_DnRgtExp_Yellow_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Cmn_Arrw_DnRgtExp_Red_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBar_Red_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBar_Green_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBar_Yellow_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBar_Amber_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBar_DarkBlue_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBar_LightBlue_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Cmn_Save_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Cmn_Undo_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Cmn_Redo_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Cmn_Pause_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Cmn_Play_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Cmn_Stop_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Cmn_Reset_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mask_Round_53x43.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Motion_TopUp_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Comm_Back_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Common_Page_5_1.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Common_Page_5_2.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Common_Page_5_3.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Common_Page_5_4.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Common_Page_5_5.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Common_User_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Nutek_Login_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_User_Logout_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtnRound_Silver_50.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtnRound_Grey_50.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LftToRgt_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Ops_Hermes.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LED_Red_10.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LED_Red_25.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_PDestacker_AWClose_210x250.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_RgtToLft_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtn_Silver_400x300.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtn_Yellow_400x300.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mask_LCSManage_80x80.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_AWClose_210x250.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_AWOpen_210x250.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_LifterTop_245x245.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_LifterMid_245x245.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_LifterDown_245x245.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Guide_245x245.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Conv_Small_23x40.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Lifter_Small_23x40.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Flipper_Small_23x40.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Guide_Small_23x40.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_AW_Small_23x40.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Conv_245x250.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_FrontView_400x250.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_FrontView_150x150.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Conv_40x40.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_AW_40x40.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_40x40.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Stopper_40x40.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Conv_245x245.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_InverterHm_210x250.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_InverteMid_210x250.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_InverterRmt_210x250.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Stopper1_245x245.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Stopper2_245x245.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_AW_Small.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_Conv.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_Conv_Small.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_ConvInv1.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_Stpr2_Small.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_Stpr3.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Invert_Home_165x250.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Invert_Remote_165x250.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_Stpr_Extend.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_Stpr_Retract.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Numpad_Black.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LogOut.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Loading_1.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Loading_2.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Loading_3.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Loading_4.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/MC_Inverter_Clamp_Extend_Small.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_Clamp_Retract.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_Clamp_Extend.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Ops_Warning.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/SMEMA_Logo_Lft_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_FrontView_138x276.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Clamp_With_RS_Small.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_Clamped1.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_Clamped2.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_Clamped3.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_Unclamp1.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_UnClamp2.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_UnClamp3.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_ShutterIn_Close.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_Shutter_Small.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_ShutterIn_Open.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_ShutterOut_Close.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_ShutterOut_Open.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_AWClose_210x250_BHTC.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_AWOpen_210x250_BHTC.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_FrontView_138x276_BHTC.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_FrontView_150x150_BHTC.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Invert_Home_165x250_BHTC.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Invert_Remote_165x250_BHTC.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_AW_Small_BHTC.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_Conv_BHTC.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_Shutter_Small_BHTC.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_ShutterIn_Close_BHTC.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_ShutterIn_Open_BHTC.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_ShuttrOut_Close_BHTC.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_ShutterOut_Open_BHTC.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_With_TL_40x40_BHTC.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_AWClose_WithTL_210x250.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_AWOpen_WithTL_210x250.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_FrontView_With_TL_138x276.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_FrontView_With_TL_150x150.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Invert_Home_WithTL_165x250.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Invert_Remote_WithTL_165x250.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_AW_Small_WithTL.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_Conv_WithTL.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_Shutter_Small_WithTL.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_With_TL_40x40.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_ShutterIn_Open_TL.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_ShutterOut_Open_TL.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_ShutterIn_Close_TL.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_ShutterOut_Close_TL.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Keypad_AlphaPad_Down_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Keypad_AlphaPad_Down_7_black.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Keypad_AlphaPad_Up_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Keypad_AlphaPad_Up_7_black.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Alarm_7.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Border_ArrowUp.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Border_ArrowUpWhPressed.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Border_ArrowDn.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Border_ArrowDnWhPressed.bminfo \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/IMG_4204.bminfo 

BMGRP_SOURCES_Visu=$(AS_PROJECT_PATH)/Logical/UI/Visu/BitmapGroups/AlphaPad.bmgrp \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/BitmapGroups/Numpad.bmgrp \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/BitmapGroups/Alarm.bmgrp \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/BitmapGroups/Borders.bmgrp \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/BitmapGroups/Dialog.bmgrp \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/BitmapGroups/LeadFollow.bmgrp \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/BitmapGroups/Operation.bmgrp \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/BitmapGroups/Recipe.bmgrp \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/BitmapGroups/SMEMA.bmgrp \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/BitmapGroups/StatusDisplay.bmgrp \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/BitmapGroups/UserManagement.bmgrp \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/BitmapGroups/Buffer.bmgrp \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/BitmapGroups/Machine.bmgrp \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/BitmapGroups/Menu.bmgrp \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/BitmapGroups/MessageBox.bmgrp \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/BitmapGroups/Motion.bmgrp \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/BitmapGroups/Pneumatic.bmgrp \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/BitmapGroups/CommonLayer.bmgrp \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/BitmapGroups/QuickAccess.bmgrp \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/BitmapGroups/DropDown.bmgrp \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/BitmapGroups/ScreenSaver.bmgrp \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/BitmapGroups/LeadFollowColor.bmgrp \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/BitmapGroups/Loading_Screen.bmgrp 

PAGE_SOURCES_Visu=$(AS_PROJECT_PATH)/Logical/UI/Visu/Pages/P0000_SSaver.page \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Pages/P0002_Menu.page \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Pages/P0100_Login.page \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Pages/P0201_OpsConv.page \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Pages/P0300_MachineInfo.page \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Pages/P0400_ProductSelection.page \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Pages/P0700_LeadFollow.page \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Pages/P0900_GeneralInput.page \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Pages/P0910_GeneralOutput.page \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Pages/P0940_CommCtrl.page \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Pages/P1080_UsrMgmt.page \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Pages/P0934_AutoWidth.page \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Pages/P1000_LanguageAndTimeSetup.page \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Pages/P1040_ProdSet.page \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Pages/P1050_LFSet.page \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Pages/P0001_StartupPage.page \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Pages/P1020_McSetNavi.page \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Pages/P0600_Alarm.page \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Pages/P1021_McSetGen.page \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Pages/P1023_McSetComm.page \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Pages/P1024_McSetAntiGap.page \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Pages/P1081_UsrMgmtUsrAccessRgt.page \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Pages/P0950_Simulation.page \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Pages/P0200_OpsGen.page \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Pages/P1022_MachineSettingVComm.page \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Pages/P0931_ConvInvert.page \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Pages/P0920_MotorAndPneumaticControl.page \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Pages/P0923_StopperControl.page \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Pages/P0921_ClampNoRSControl.page \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Pages/P0924_ClampWithRS.page \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Pages/P0922_Shutter.page 

LAYER_SOURCES_Visu=$(AS_PROJECT_PATH)/Logical/UI/Visu/Layers/C0005_MainLayer.layer \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Layers/C0008_MsgBoxLayer.layer \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Layers/C0002_FullMaskLayer.layer \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Layers/C0006_SetLayer.layer \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Layers/C0004_NaviLayer.layer \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Layers/C0003_DualMaskLayer.layer \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Layers/C0001_MotionStd.layer \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Layers/C0007_NotifLayer.layer \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Layers/C0009_InfoLayer.layer \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Layers/C0010_RcyMsgLayer.layer \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Layers/C0011_LoadingLayer.layer \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Layers/C0012_RcpPopUpLayer.layer 

VCS_SOURCES_Visu=$(AS_PROJECT_PATH)/Logical/UI/Visu/StyleSheets/Style_1_0_0.vcs 

BDR_SOURCES_Visu=$(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/Border_MsgBox.bdr \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/Flat_Black.bdr \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/Flat_White.bdr \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/ColorBtn_Red_150x50_R8.bdr \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/CheckBox_Off.bdr \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/CheckBox_On.bdr \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/RadioButton_Off.bdr \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/RadioButton_On.bdr \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/Transparent.bdr \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/QuickAccess_BG.bdr \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/QuickAccess_Icon_Grey.bdr \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/ColorBtn_Grey_100x35_R6.bdr \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/ColorBtn_Silver_80x35_R5.bdr \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/ColorBtn_Grey_80x35_R5.bdr \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/Mask_800x480.bdr \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/Border_Display.bdr \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/ColorBtn_Silver_100x35_R6.bdr \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/Border_Input.bdr \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/ColorBtn_Silver_150x50_R8.bdr \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/ColorBtn_Green_150x50_R8.bdr \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/ColorBtn_Silver_340x80_R17.bdr \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/ColorBtn_Grey_340x80_R17.bdr \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/ColorBtn_Silver_100x50_R10.bdr \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/ColorBtn_Grey_100x50_R10.bdr \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/ColorBtn_Green_100x50_R10.bdr \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/Switch_Up.bdr \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/Switch_Down.bdr \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/Slider_Bar.bdr \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/ColorBtn_Silver_160x35_R10.bdr \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/ColorBtn_Grey_160x35_R10.bdr \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/Border_Detail.bdr \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/ColorBtn_Silver_65x25_R6.bdr \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/ColorBtn_Grey_65x25_R6.bdr \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/Group_Silver.bdr \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/Text_Disabled.bdr \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/Text_Disabled1.bdr \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/QuickAccess_Icon_Mask.bdr \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/QuickAccess_Full_Mask.bdr \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/ColorBtn_Red_100x50_R10.bdr \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/ColorBtn_Green_100x35_R6.bdr \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/SMEMA.bdr \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/QuickAccess_Rst_Red.bdr \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/QuickAccess_Rst_Mask.bdr \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/ColorBtn_Blue_100x50_R10.bdr \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/ColorBtn_LightBlue_100x50_R10.bdr \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/QuickAccess_Rst_Blue.bdr \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/Icon_Table_ShiftDown_Active.bdr \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/Icon_Table_ShiftDown_Pressed.bdr \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/Icon_Table_ShiftUp_Pressed.bdr \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/Icon_Table_ShiftUp_Active.bdr \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/Flat_Amber.bdr \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/ColorBtn_Yellow_150x50_R8.bdr \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/Mask_Round_53x43.bdr \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/Mask_LCSManage_80x80.bdr \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/Btn_AlarmHis_Up.bdr \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/Btn_AlarmHis_Up_Pressed.bdr \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/Btn_AlarmHis_Dn.bdr \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/Btn_AlarmHis_Dn_Pressed.bdr 

TPR_SOURCES_Visu=$(AS_PROJECT_PATH)/Logical/UI/Visu/TouchPads/NumPad.tpr \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/TouchPads/AlphaPad.tpr 

TDC_SOURCES_Visu=$(AS_PROJECT_PATH)/Logical/UI/Visu/Trends/TrendData.tdc 

TRD_SOURCES_Visu=$(AS_PROJECT_PATH)/Logical/UI/Visu/Trends/TrendData_1.trd 

TRE_SOURCES_Visu=$(AS_PROJECT_PATH)/Logical/UI/Visu/Trends/Trend_1.tre 

CLM_SOURCES_Visu=$(AS_PROJECT_PATH)/Logical/UI/Visu/ColorMaps/BtnChkReject.clm \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/ColorMaps/BtnLoad.clm \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/ColorMaps/CheckBoxNRadio.clm \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/ColorMaps/NumGeneralDisp.clm \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/ColorMaps/NumGeneralInput.clm \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/ColorMaps/TxtGeneral.clm \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/ColorMaps/AlarmDisplay.clm \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/ColorMaps/BtnGeneral.clm \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/ColorMaps/BufferStatus.clm \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/ColorMaps/CheckBox.clm \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/ColorMaps/General.clm \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/ColorMaps/LED.clm \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/ColorMaps/MachineStatus.clm \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/ColorMaps/MenuBtn.clm \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/ColorMaps/MessageBoxMsg.clm \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/ColorMaps/MessageBoxTitle.clm \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/ColorMaps/MotionStatus.clm \
	$(AS_PROJECT_PATH)/Logical/UI/Visu/ColorMaps/Table.clm 

PRC_SOURCES_Visu=$(AS_PROJECT_PATH)/Logical/UI/Visu/Processes/Process_1.prc 

VCVK_SOURCES_Visu=$(AS_PROJECT_PATH)/Logical/UI/Visu/VirtualKeys.vcvk 

VCR_SOURCES_Visu=$(AS_PROJECT_PATH)/Logical/UI/Visu/Palette.vcr 

# Runtime Object sources
VCR_OBJECT_Visu=$(TEMP_PATH_Visu)/vcrt.vco
VCR_SOURCE_Visu=$(SRC_PATH_Visu)/package.vcp
# All Source Objects END

#Panel Hardware
$(PANEL_HW_VCI_Visu): $(PANEL_HW_SOURCE_Visu) $(VC_LIBRARY_LIST_Visu) $(KEYMAP_SOURCES_Visu) $(PALFILE_Visu)
	$(VCHWPP) -f '$<' -o '$@' -n Visu -d Visu -pal '$(PALFILE_Visu)' -c '$(AS_CONFIGURATION)' -p '$(AS_PLC)' -ptemp '$(AS_TEMP_PLC)' -B 'B4.82' -L 'AsRfbExt: V*, visapi: V*' -verbose 'False' -profile 'False' -hw '$(CPUHWC)' -warninglevel 2 -so $(VC_STATIC_OPTIONS_Visu) -sos $(VC_STATIC_OPTIONS_Shared) -fp '$(AS_VC_PATH)/Firmware/V4.72.1/SG4' -sfas -prj '$(AS_PROJECT_PATH)' -apj 'NAINV104C00R8L515F00' -vcob '$(VCOBJECT_Visu)'

$(PANEL_HW_OBJECT_Visu): $(PANEL_HW_VCI_Visu) $(VC_LIBRARY_LIST_Visu)
	$(VCC) -f '$(subst .vco,.vci,$@)' -o '$@' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -k '$(VCVK_SOURCES_Visu)' $(VCCFLAGS_Visu) -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


# Pages
PAGE_OBJECTS_Visu = $(addprefix $(TEMP_PATH_Visu)/page., $(notdir $(PAGE_SOURCES_Visu:.page=.vco)))

$(TEMP_PATH_Visu)/page.P0000_SSaver.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Pages/P0000_SSaver.page $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -P '$(AS_PROJECT_PATH)' -ds '$(SRC_PATH_Visu)/StyleSheets/Style_1_0_0.vcs' -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/page.P0002_Menu.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Pages/P0002_Menu.page $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -P '$(AS_PROJECT_PATH)' -ds '$(SRC_PATH_Visu)/StyleSheets/Style_1_0_0.vcs' -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/page.P0100_Login.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Pages/P0100_Login.page $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -P '$(AS_PROJECT_PATH)' -ds '$(SRC_PATH_Visu)/StyleSheets/Style_1_0_0.vcs' -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/page.P0201_OpsConv.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Pages/P0201_OpsConv.page $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -P '$(AS_PROJECT_PATH)' -ds '$(SRC_PATH_Visu)/StyleSheets/Style_1_0_0.vcs' -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/page.P0300_MachineInfo.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Pages/P0300_MachineInfo.page $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -P '$(AS_PROJECT_PATH)' -ds '$(SRC_PATH_Visu)/StyleSheets/Style_1_0_0.vcs' -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/page.P0400_ProductSelection.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Pages/P0400_ProductSelection.page $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -P '$(AS_PROJECT_PATH)' -ds '$(SRC_PATH_Visu)/StyleSheets/Style_1_0_0.vcs' -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/page.P0700_LeadFollow.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Pages/P0700_LeadFollow.page $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -P '$(AS_PROJECT_PATH)' -ds '$(SRC_PATH_Visu)/StyleSheets/Style_1_0_0.vcs' -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/page.P0900_GeneralInput.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Pages/P0900_GeneralInput.page $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -P '$(AS_PROJECT_PATH)' -ds '$(SRC_PATH_Visu)/StyleSheets/Style_1_0_0.vcs' -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/page.P0910_GeneralOutput.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Pages/P0910_GeneralOutput.page $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -P '$(AS_PROJECT_PATH)' -ds '$(SRC_PATH_Visu)/StyleSheets/Style_1_0_0.vcs' -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/page.P0940_CommCtrl.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Pages/P0940_CommCtrl.page $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -P '$(AS_PROJECT_PATH)' -ds '$(SRC_PATH_Visu)/StyleSheets/Style_1_0_0.vcs' -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/page.P1080_UsrMgmt.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Pages/P1080_UsrMgmt.page $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -P '$(AS_PROJECT_PATH)' -ds '$(SRC_PATH_Visu)/StyleSheets/Style_1_0_0.vcs' -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/page.P0934_AutoWidth.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Pages/P0934_AutoWidth.page $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -P '$(AS_PROJECT_PATH)' -ds '$(SRC_PATH_Visu)/StyleSheets/Style_1_0_0.vcs' -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/page.P1000_LanguageAndTimeSetup.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Pages/P1000_LanguageAndTimeSetup.page $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -P '$(AS_PROJECT_PATH)' -ds '$(SRC_PATH_Visu)/StyleSheets/Style_1_0_0.vcs' -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/page.P1040_ProdSet.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Pages/P1040_ProdSet.page $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -P '$(AS_PROJECT_PATH)' -ds '$(SRC_PATH_Visu)/StyleSheets/Style_1_0_0.vcs' -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/page.P1050_LFSet.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Pages/P1050_LFSet.page $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -P '$(AS_PROJECT_PATH)' -ds '$(SRC_PATH_Visu)/StyleSheets/Style_1_0_0.vcs' -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/page.P0001_StartupPage.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Pages/P0001_StartupPage.page $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -P '$(AS_PROJECT_PATH)' -ds '$(SRC_PATH_Visu)/StyleSheets/Style_1_0_0.vcs' -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/page.P1020_McSetNavi.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Pages/P1020_McSetNavi.page $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -P '$(AS_PROJECT_PATH)' -ds '$(SRC_PATH_Visu)/StyleSheets/Style_1_0_0.vcs' -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/page.P0600_Alarm.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Pages/P0600_Alarm.page $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -P '$(AS_PROJECT_PATH)' -ds '$(SRC_PATH_Visu)/StyleSheets/Style_1_0_0.vcs' -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/page.P1021_McSetGen.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Pages/P1021_McSetGen.page $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -P '$(AS_PROJECT_PATH)' -ds '$(SRC_PATH_Visu)/StyleSheets/Style_1_0_0.vcs' -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/page.P1023_McSetComm.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Pages/P1023_McSetComm.page $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -P '$(AS_PROJECT_PATH)' -ds '$(SRC_PATH_Visu)/StyleSheets/Style_1_0_0.vcs' -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/page.P1024_McSetAntiGap.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Pages/P1024_McSetAntiGap.page $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -P '$(AS_PROJECT_PATH)' -ds '$(SRC_PATH_Visu)/StyleSheets/Style_1_0_0.vcs' -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/page.P1081_UsrMgmtUsrAccessRgt.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Pages/P1081_UsrMgmtUsrAccessRgt.page $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -P '$(AS_PROJECT_PATH)' -ds '$(SRC_PATH_Visu)/StyleSheets/Style_1_0_0.vcs' -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/page.P0950_Simulation.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Pages/P0950_Simulation.page $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -P '$(AS_PROJECT_PATH)' -ds '$(SRC_PATH_Visu)/StyleSheets/Style_1_0_0.vcs' -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/page.P0200_OpsGen.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Pages/P0200_OpsGen.page $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -P '$(AS_PROJECT_PATH)' -ds '$(SRC_PATH_Visu)/StyleSheets/Style_1_0_0.vcs' -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/page.P1022_MachineSettingVComm.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Pages/P1022_MachineSettingVComm.page $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -P '$(AS_PROJECT_PATH)' -ds '$(SRC_PATH_Visu)/StyleSheets/Style_1_0_0.vcs' -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/page.P0931_ConvInvert.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Pages/P0931_ConvInvert.page $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -P '$(AS_PROJECT_PATH)' -ds '$(SRC_PATH_Visu)/StyleSheets/Style_1_0_0.vcs' -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/page.P0920_MotorAndPneumaticControl.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Pages/P0920_MotorAndPneumaticControl.page $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -P '$(AS_PROJECT_PATH)' -ds '$(SRC_PATH_Visu)/StyleSheets/Style_1_0_0.vcs' -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/page.P0923_StopperControl.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Pages/P0923_StopperControl.page $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -P '$(AS_PROJECT_PATH)' -ds '$(SRC_PATH_Visu)/StyleSheets/Style_1_0_0.vcs' -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/page.P0921_ClampNoRSControl.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Pages/P0921_ClampNoRSControl.page $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -P '$(AS_PROJECT_PATH)' -ds '$(SRC_PATH_Visu)/StyleSheets/Style_1_0_0.vcs' -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/page.P0924_ClampWithRS.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Pages/P0924_ClampWithRS.page $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -P '$(AS_PROJECT_PATH)' -ds '$(SRC_PATH_Visu)/StyleSheets/Style_1_0_0.vcs' -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/page.P0922_Shutter.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Pages/P0922_Shutter.page $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -P '$(AS_PROJECT_PATH)' -ds '$(SRC_PATH_Visu)/StyleSheets/Style_1_0_0.vcs' -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


#Pages END




# Stylesheets
VCS_OBJECTS_Visu = $(addprefix $(TEMP_PATH_Visu)/vcs., $(notdir $(VCS_SOURCES_Visu:.vcs=.vco)))

$(TEMP_PATH_Visu)/vcs.Style_1_0_0.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/StyleSheets/Style_1_0_0.vcs
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -P '$(AS_PROJECT_PATH)' -ds $(DEFAULT_STYLE_SHEET_Visu) -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


#Stylesheets END




# Layers
LAYER_OBJECTS_Visu = $(addprefix $(TEMP_PATH_Visu)/layer., $(notdir $(LAYER_SOURCES_Visu:.layer=.vco)))

$(TEMP_PATH_Visu)/layer.C0005_MainLayer.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Layers/C0005_MainLayer.layer $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -ds $(DEFAULT_STYLE_SHEET_Visu) -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/layer.C0008_MsgBoxLayer.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Layers/C0008_MsgBoxLayer.layer $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -ds $(DEFAULT_STYLE_SHEET_Visu) -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/layer.C0002_FullMaskLayer.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Layers/C0002_FullMaskLayer.layer $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -ds $(DEFAULT_STYLE_SHEET_Visu) -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/layer.C0006_SetLayer.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Layers/C0006_SetLayer.layer $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -ds $(DEFAULT_STYLE_SHEET_Visu) -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/layer.C0004_NaviLayer.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Layers/C0004_NaviLayer.layer $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -ds $(DEFAULT_STYLE_SHEET_Visu) -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/layer.C0003_DualMaskLayer.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Layers/C0003_DualMaskLayer.layer $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -ds $(DEFAULT_STYLE_SHEET_Visu) -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/layer.C0001_MotionStd.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Layers/C0001_MotionStd.layer $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -ds $(DEFAULT_STYLE_SHEET_Visu) -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/layer.C0007_NotifLayer.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Layers/C0007_NotifLayer.layer $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -ds $(DEFAULT_STYLE_SHEET_Visu) -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/layer.C0009_InfoLayer.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Layers/C0009_InfoLayer.layer $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -ds $(DEFAULT_STYLE_SHEET_Visu) -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/layer.C0010_RcyMsgLayer.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Layers/C0010_RcyMsgLayer.layer $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -ds $(DEFAULT_STYLE_SHEET_Visu) -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/layer.C0011_LoadingLayer.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Layers/C0011_LoadingLayer.layer $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -ds $(DEFAULT_STYLE_SHEET_Visu) -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/layer.C0012_RcpPopUpLayer.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Layers/C0012_RcpPopUpLayer.layer $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -ds $(DEFAULT_STYLE_SHEET_Visu) -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


#Layers END




# Virtual Keys
VCVK_OBJECTS_Visu = $(addprefix $(TEMP_PATH_Visu)/vcvk., $(notdir $(VCVK_SOURCES_Visu:.vcvk=.vco)))

$(TEMP_PATH_Visu)/vcvk.VirtualKeys.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/VirtualKeys.vcvk
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas

$(VCVK_OBJECTS_Visu): $(VC_LANGUAGES_Visu)

#Virtual Keys END




# Touch Pads
TPR_OBJECTS_Visu = $(addprefix $(TEMP_PATH_Visu)/tpr., $(notdir $(TPR_SOURCES_Visu:.tpr=.vco)))

$(TEMP_PATH_Visu)/tpr.NumPad.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/TouchPads/NumPad.tpr
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -prj 'C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/Visu' -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/tpr.AlphaPad.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/TouchPads/AlphaPad.tpr
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu) -prj 'C:/Users/wongjl/Desktop/job/Hermes 1_5 29_8_2023/inverter/ipc-Hermes1.5/NAINV104C00R8L515F00/Logical/UI/Visu' -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


#Touch Pads END




# BitmapGroups
BMGRP_OBJECTS_Visu = $(addprefix $(TEMP_PATH_Visu)/bmgrp., $(notdir $(BMGRP_SOURCES_Visu:.bmgrp=.vco)))

$(TEMP_PATH_Visu)/bmgrp.AlphaPad.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/BitmapGroups/AlphaPad.bmgrp
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bmgrp.Numpad.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/BitmapGroups/Numpad.bmgrp
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bmgrp.Alarm.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/BitmapGroups/Alarm.bmgrp
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bmgrp.Borders.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/BitmapGroups/Borders.bmgrp
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bmgrp.Dialog.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/BitmapGroups/Dialog.bmgrp
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bmgrp.LeadFollow.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/BitmapGroups/LeadFollow.bmgrp
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bmgrp.Operation.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/BitmapGroups/Operation.bmgrp
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bmgrp.Recipe.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/BitmapGroups/Recipe.bmgrp
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bmgrp.SMEMA.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/BitmapGroups/SMEMA.bmgrp
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bmgrp.StatusDisplay.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/BitmapGroups/StatusDisplay.bmgrp
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bmgrp.UserManagement.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/BitmapGroups/UserManagement.bmgrp
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bmgrp.Buffer.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/BitmapGroups/Buffer.bmgrp
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bmgrp.Machine.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/BitmapGroups/Machine.bmgrp
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bmgrp.Menu.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/BitmapGroups/Menu.bmgrp
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bmgrp.MessageBox.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/BitmapGroups/MessageBox.bmgrp
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bmgrp.Motion.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/BitmapGroups/Motion.bmgrp
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bmgrp.Pneumatic.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/BitmapGroups/Pneumatic.bmgrp
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bmgrp.CommonLayer.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/BitmapGroups/CommonLayer.bmgrp
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bmgrp.QuickAccess.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/BitmapGroups/QuickAccess.bmgrp
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bmgrp.DropDown.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/BitmapGroups/DropDown.bmgrp
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bmgrp.ScreenSaver.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/BitmapGroups/ScreenSaver.bmgrp
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bmgrp.LeadFollowColor.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/BitmapGroups/LeadFollowColor.bmgrp
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bmgrp.Loading_Screen.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/BitmapGroups/Loading_Screen.bmgrp
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


#BitmapGroups END




# Bitmaps
BMINFO_OBJECTS_Visu = $(addprefix $(TEMP_PATH_Visu)/bminfo., $(notdir $(BMINFO_SOURCES_Visu:.bminfo=.vco)))

$(TEMP_PATH_Visu)/bminfo.CheckBox_Off.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/CheckBox_Off.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/CheckBox_Off.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.CheckBox_On.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/CheckBox_On.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/CheckBox_On.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Group_Black.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Group_Black.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Group_Black.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Group_White.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Group_White.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Group_White.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Menu_Alarm.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Menu_Alarm.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Menu_Alarm.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Menu_MachineInfo.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Menu_MachineInfo.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Menu_MachineInfo.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Menu_Operation.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Menu_Operation.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Menu_Operation.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Menu_UserLogin.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Menu_UserLogin.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Menu_UserLogin.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Menu_UserLogout.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Menu_UserLogout.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Menu_UserLogout.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Alarm_Current_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Alarm_Current_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Alarm_Current_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Alarm_History_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Alarm_History_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Alarm_History_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Dialog_Cancel.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Dialog_Cancel.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Dialog_Cancel.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Dialog_Close.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Dialog_Close.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Dialog_Close.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Dialog_OK.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Dialog_OK.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Dialog_OK.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_LED_Grey_10.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LED_Grey_10.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LED_Grey_10.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_LED_Grey_20.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LED_Grey_20.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LED_Grey_20.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_LED_Grey_25.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LED_Grey_25.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LED_Grey_25.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_LED_Grey_30.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LED_Grey_30.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LED_Grey_30.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_LED_Grey_40.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LED_Grey_40.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LED_Grey_40.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_LED_Green_10.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LED_Green_10.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LED_Green_10.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_LED_Green_20.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LED_Green_20.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LED_Green_20.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_LED_Green_25.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LED_Green_25.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LED_Green_25.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_LED_Green_30.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LED_Green_30.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LED_Green_30.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_LED_Green_40.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LED_Green_40.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LED_Green_40.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Triangle_Left_Green.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Triangle_Left_Green.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Triangle_Left_Green.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Triangle_Left_Red.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Triangle_Left_Red.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Triangle_Left_Red.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Triangle_Left_White.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Triangle_Left_White.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Triangle_Left_White.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_LF_Delete_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LF_Delete_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LF_Delete_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_LF_Edit_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LF_Edit_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LF_Edit_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_LF_From_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LF_From_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LF_From_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_LF_Leader_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LF_Leader_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LF_Leader_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_LF_Offline_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LF_Offline_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LF_Offline_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_LF_Online_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LF_Online_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LF_Online_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_LF_Follower_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LF_Follower_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LF_Follower_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_LF_Time_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LF_Time_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LF_Time_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_LF_To_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LF_To_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LF_To_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_LF_Tx_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LF_Tx_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LF_Tx_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Msg_Warning.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Msg_Warning.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Msg_Warning.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Ops_Auto_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Ops_Auto_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Ops_Auto_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Ops_Stop_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Ops_Stop_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Ops_Stop_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Recipe_Add_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Recipe_Add_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Recipe_Add_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Recipe_Copy_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Recipe_Copy_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Recipe_Copy_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Recipe_Delete_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Recipe_Delete_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Recipe_Delete_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Recipe_Download_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Recipe_Download_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Recipe_Download_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Recipe_Edit_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Recipe_Edit_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Recipe_Edit_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Recipe_Load_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Recipe_Load_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Recipe_Load_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Recipe_Paste_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Recipe_Paste_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Recipe_Paste_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Recipe_Preview_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Recipe_Preview_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Recipe_Preview_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Recipe_Save_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Recipe_Save_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Recipe_Save_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Recipe_Search_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Recipe_Search_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Recipe_Search_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Triangle_Right_Green.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Triangle_Right_Green.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Triangle_Right_Green.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Triangle_Right_Red.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Triangle_Right_Red.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Triangle_Right_Red.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Triangle_Right_White.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Triangle_Right_White.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Triangle_Right_White.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_User_Add_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_User_Add_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_User_Add_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_User_Delete_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_User_Delete_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_User_Delete_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_User_Edit_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_User_Edit_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_User_Edit_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_User_Login_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_User_Login_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_User_Login_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Menu_BufferInfo.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Menu_BufferInfo.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Menu_BufferInfo.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Menu_BufferSelection.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Menu_BufferSelection.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Menu_BufferSelection.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Menu_BufferSetting.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Menu_BufferSetting.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Menu_BufferSetting.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Menu_InputManual.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Menu_InputManual.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Menu_InputManual.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Menu_LangDateTime.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Menu_LangDateTime.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Menu_LangDateTime.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Menu_MachineSetting.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Menu_MachineSetting.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Menu_MachineSetting.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Menu_LF.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Menu_LF.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Menu_LF.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Menu_LFSetting.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Menu_LFSetting.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Menu_LFSetting.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Menu_ModeSelection.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Menu_ModeSelection.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Menu_ModeSelection.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Menu_MotionManual.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Menu_MotionManual.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Menu_MotionManual.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Menu_Nutek.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Menu_Nutek.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Menu_Nutek.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Menu_OutputManual.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Menu_OutputManual.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Menu_OutputManual.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Menu_OvenInfo.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Menu_OvenInfo.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Menu_OvenInfo.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Menu_RecipeSelection.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Menu_RecipeSelection.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Menu_RecipeSelection.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Menu_RecipeSetting.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Menu_RecipeSetting.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Menu_RecipeSetting.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Menu_SMEMAManual.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Menu_SMEMAManual.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Menu_SMEMAManual.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Menu_SMEMASetting.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Menu_SMEMASetting.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Menu_SMEMASetting.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Menu_Simulation.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Menu_Simulation.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Menu_Simulation.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Menu_UserSetting.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Menu_UserSetting.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Menu_UserSetting.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Buffer_Delete_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Buffer_Delete_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Buffer_Delete_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Buffer_Load_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Buffer_Load_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Buffer_Load_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Buffer_Preview_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Buffer_Preview_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Buffer_Preview_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Buffer_Save_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Buffer_Save_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Buffer_Save_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_LED_Grey_15.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LED_Grey_15.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LED_Grey_15.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Motion_Abs_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Motion_Abs_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Motion_Abs_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Motion_Close_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Motion_Close_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Motion_Close_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Motion_Down_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Motion_Down_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Motion_Down_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Motion_Front_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Motion_Front_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Motion_Front_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Motion_Get_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Motion_Get_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Motion_Get_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Motion_Home_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Motion_Home_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Motion_Home_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Motion_Open_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Motion_Open_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Motion_Open_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Motion_Power_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Motion_Power_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Motion_Power_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Motion_Rear_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Motion_Rear_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Motion_Rear_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Motion_Rel_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Motion_Rel_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Motion_Rel_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Motion_Reset_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Motion_Reset_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Motion_Reset_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Motion_Stop_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Motion_Stop_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Motion_Stop_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Motion_Teach_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Motion_Teach_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Motion_Teach_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Motion_Up_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Motion_Up_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Motion_Up_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Pneumatic_Close_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Pneumatic_Close_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Pneumatic_Close_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Pneumatic_Extend_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Pneumatic_Extend_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Pneumatic_Extend_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Pneumatic_Open_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Pneumatic_Open_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Pneumatic_Open_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Pneumatic_Retract_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Pneumatic_Retract_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Pneumatic_Retract_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_InspConv_Front.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_InspConv_Front.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_InspConv_Front.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_OvenLR_Front.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_OvenLR_Front.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_OvenLR_Front.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_OvenRL_Front.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_OvenRL_Front.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_OvenRL_Front.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Nutek_Full_Blue.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Nutek_Full_Blue.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Nutek_Full_Blue.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Border_MsgBox_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Border_MsgBox_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Border_MsgBox_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.QuickAccess_BG_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/QuickAccess_BG_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/QuickAccess_BG_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Common_Arrow_Left_White_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Common_Arrow_Left_White_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Common_Arrow_Left_White_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Common_Arrow_Right_White_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Common_Arrow_Right_White_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Common_Arrow_Right_White_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_QuickAccess_Audio_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_QuickAccess_Audio_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_QuickAccess_Audio_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_QuickAccess_Audio_Off_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_QuickAccess_Audio_Off_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_QuickAccess_Audio_Off_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_QuickAccess_Audio_On_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_QuickAccess_Audio_On_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_QuickAccess_Audio_On_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Slider_Button.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Slider_Button.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Slider_Button.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Border_Detail.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Border_Detail.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Border_Detail.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Border_Display.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Border_Display.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Border_Display.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Border_Input.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Border_Input.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Border_Input.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mask_800x480.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mask_800x480.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mask_800x480.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.RadioButton_Off.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/RadioButton_Off.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/RadioButton_Off.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.RadioButton_On.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/RadioButton_On.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/RadioButton_On.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Slider_Bar.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Slider_Bar.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Slider_Bar.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Transparent.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Transparent.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Transparent.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Common_Page_2_1.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Common_Page_2_1.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Common_Page_2_1.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Common_Page_3_1.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Common_Page_3_1.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Common_Page_3_1.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Common_Page_3_3.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Common_Page_3_3.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Common_Page_3_3.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Msg_Alarm.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Msg_Alarm.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Msg_Alarm.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Msg_Info.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Msg_Info.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Msg_Info.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.ColorBtn_Green_80x35_R5.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtn_Green_80x35_R5.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtn_Green_80x35_R5.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.ColorBtn_Grey_80x35_R5.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtn_Grey_80x35_R5.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtn_Grey_80x35_R5.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.ColorBtn_Silver_80x35_R5.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtn_Silver_80x35_R5.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtn_Silver_80x35_R5.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Nutek_Building_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Nutek_Building_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Nutek_Building_7.jpg
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.ColorBtn_Green_100x35_R6.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtn_Green_100x35_R6.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtn_Green_100x35_R6.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.ColorBtn_Grey_100x35_R6.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtn_Grey_100x35_R6.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtn_Grey_100x35_R6.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.ColorBtn_Silver_100x35_R6.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtn_Silver_100x35_R6.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtn_Silver_100x35_R6.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.QuickAccess_Icon_Grey_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/QuickAccess_Icon_Grey_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/QuickAccess_Icon_Grey_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.ColorBtn_Green_150x50_R8.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtn_Green_150x50_R8.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtn_Green_150x50_R8.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.ColorBtn_Silver_150x50_R8.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtn_Silver_150x50_R8.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtn_Silver_150x50_R8.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.ColorBtn_Red_150x50_R8.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtn_Red_150x50_R8.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtn_Red_150x50_R8.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.ColorBtn_Green_340x80_R17.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtn_Green_340x80_R17.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtn_Green_340x80_R17.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.ColorBtn_Grey_340x80_R17.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtn_Grey_340x80_R17.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtn_Grey_340x80_R17.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.ColorBtn_Silver_340x80_R17.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtn_Silver_340x80_R17.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtn_Silver_340x80_R17.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.ColorBtn_Green_100x50_R10.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtn_Green_100x50_R10.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtn_Green_100x50_R10.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.ColorBtn_Grey_100x50_R10.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtn_Grey_100x50_R10.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtn_Grey_100x50_R10.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.ColorBtn_Silver_100x50_R10.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtn_Silver_100x50_R10.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtn_Silver_100x50_R10.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Switch_Up_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Switch_Up_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Switch_Up_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.ColorBtn_Green_160x35_R10.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtn_Green_160x35_R10.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtn_Green_160x35_R10.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.ColorBtn_Grey_160x35_R10.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtn_Grey_160x35_R10.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtn_Grey_160x35_R10.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.ColorBtn_Silver_160x35_R10.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtn_Silver_160x35_R10.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtn_Silver_160x35_R10.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.ColorBtn_Grey_65x25_R6.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtn_Grey_65x25_R6.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtn_Grey_65x25_R6.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.ColorBtn_Silver_65x25_R6.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtn_Silver_65x25_R6.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtn_Silver_65x25_R6.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Group_Silver.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Group_Silver.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Group_Silver.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Common_Page_2_2.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Common_Page_2_2.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Common_Page_2_2.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Common_Page_3_2.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Common_Page_3_2.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Common_Page_3_2.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Common_Page_4_1.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Common_Page_4_1.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Common_Page_4_1.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Common_Page_4_2.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Common_Page_4_2.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Common_Page_4_2.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Common_Page_4_3.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Common_Page_4_3.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Common_Page_4_3.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Common_Page_4_4.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Common_Page_4_4.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Common_Page_4_4.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Text_Disabled_400x400.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Text_Disabled_400x400.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Text_Disabled_400x400.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Text_Disabled_340x80.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Text_Disabled_340x80.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Text_Disabled_340x80.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.QuickAccess_Icon_Mask_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/QuickAccess_Icon_Mask_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/QuickAccess_Icon_Mask_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Keypad_NumPad.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Keypad_NumPad.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Keypad_NumPad.bmp
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.ColorBtn_Red_100x50_R10.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtn_Red_100x50_R10.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtn_Red_100x50_R10.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.GenBtn_32x32_Arrow_Up_Active.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/GenBtn_32x32_Arrow_Up_Active.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/GenBtn_32x32_Arrow_Up_Active.bmp
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.GenBtn_32x32_Arrow_Up_Pressed.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/GenBtn_32x32_Arrow_Up_Pressed.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/GenBtn_32x32_Arrow_Up_Pressed.bmp
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Menu_ManualReset.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Menu_ManualReset.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Menu_ManualReset.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Menu_ManualResetting.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Menu_ManualResetting.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Menu_ManualResetting.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.ColorBtnRound_Red_65.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtnRound_Red_65.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtnRound_Red_65.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.ColorBtnRound_DarkRed_65.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtnRound_DarkRed_65.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtnRound_DarkRed_65.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.ColorBtnRound_Green_65.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtnRound_Green_65.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtnRound_Green_65.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.ColorBtnRound_DardGreen_65.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtnRound_DardGreen_65.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtnRound_DardGreen_65.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.ColorBtnRound_LightBlue_65.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtnRound_LightBlue_65.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtnRound_LightBlue_65.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.ColorBtnRound_DarkBlue_65.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtnRound_DarkBlue_65.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtnRound_DarkBlue_65.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Border_SMEMA.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Border_SMEMA.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Border_SMEMA.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.QuickAccess_Rst_Blue_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/QuickAccess_Rst_Blue_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/QuickAccess_Rst_Blue_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.QuickAccess_Rst_Mask_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/QuickAccess_Rst_Mask_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/QuickAccess_Rst_Mask_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.ColorBtn_Blue_100x50_R10.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtn_Blue_100x50_R10.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtn_Blue_100x50_R10.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.ColorBtn_LightBlue_100x50_R10.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtn_LightBlue_100x50_R10.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtn_LightBlue_100x50_R10.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.QuickAccess_Rst_Red_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/QuickAccess_Rst_Red_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/QuickAccess_Rst_Red_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Buffer_Reset_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Buffer_Reset_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Buffer_Reset_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Motion_Setting_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Motion_Setting_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Motion_Setting_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.QuickAccess_Rst_Yellow_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/QuickAccess_Rst_Yellow_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/QuickAccess_Rst_Yellow_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.QuickAccess_Icon_Green_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/QuickAccess_Icon_Green_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/QuickAccess_Icon_Green_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Table_ShiftDown_Active_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Table_ShiftDown_Active_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Table_ShiftDown_Active_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Table_ShiftDown_Pressed_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Table_ShiftDown_Pressed_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Table_ShiftDown_Pressed_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Table_ShiftUp_Active_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Table_ShiftUp_Active_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Table_ShiftUp_Active_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Table_ShiftUp_Pressed_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Table_ShiftUp_Pressed_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Table_ShiftUp_Pressed_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Common_Home_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Common_Home_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Common_Home_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Recipe_Sync_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Recipe_Sync_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Recipe_Sync_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.QuickAccess_Full_Mask_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/QuickAccess_Full_Mask_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/QuickAccess_Full_Mask_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Menu_Backup.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Menu_Backup.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Menu_Backup.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_Clamper_Disengage.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Clamper_Disengage.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Clamper_Disengage.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_Clamper_Disengage_Small.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Clamper_Disengage_Small.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Clamper_Disengage_Small.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_Clamper_Engage_Small.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Clamper_Engage_Small.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Clamper_Engage_Small.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_Conveyor.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Conveyor.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Conveyor.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_FIFO.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_FIFO.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_FIFO.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_FIFO_Small.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_FIFO_Small.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_FIFO_Small.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_Front.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Front.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Front.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_Front_Small.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Front_Small.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Front_Small.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_Lifter_Down_Small.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Lifter_Down_Small.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Lifter_Down_Small.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_Lifter_Top_Small.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Lifter_Top_Small.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Lifter_Top_Small.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_Outlet_Close_Small.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Outlet_Close_Small.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Outlet_Close_Small.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Switch_Down_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Switch_Down_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Switch_Down_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_LED_Blue_10.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LED_Blue_10.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LED_Blue_10.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_LED_Blue_15.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LED_Blue_15.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LED_Blue_15.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_LED_Blue_20.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LED_Blue_20.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LED_Blue_20.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_LED_Blue_25.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LED_Blue_25.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LED_Blue_25.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_LED_Blue_30.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LED_Blue_30.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LED_Blue_30.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_LED_Blue_40.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LED_Blue_40.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LED_Blue_40.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Text_Virtual_58x41.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Text_Virtual_58x41.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Text_Virtual_58x41.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Ops_Pause_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Ops_Pause_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Ops_Pause_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Motion_Run_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Motion_Run_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Motion_Run_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Hermes_Logo_40x40.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Hermes_Logo_40x40.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Hermes_Logo_40x40.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.ColorBtn_Yellow_150x50_R8.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtn_Yellow_150x50_R8.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtn_Yellow_150x50_R8.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_LED_Green_15.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LED_Green_15.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LED_Green_15.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.GenBtn_32x32_Arrow_Down_Active.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/GenBtn_32x32_Arrow_Down_Active.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/GenBtn_32x32_Arrow_Down_Active.bmp
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.GenBtn_32x32_Arrow_Down_Pressed.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/GenBtn_32x32_Arrow_Down_Pressed.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/GenBtn_32x32_Arrow_Down_Pressed.bmp
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.ColorStat_Red_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorStat_Red_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorStat_Red_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.ColorStat_Green_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorStat_Green_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorStat_Green_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.ColorStat_Yellow_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorStat_Yellow_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorStat_Yellow_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.ColorStat_Amber_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorStat_Amber_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorStat_Amber_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.ColorStat_DarkBlue_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorStat_DarkBlue_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorStat_DarkBlue_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.ColorStat_LightBlue_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorStat_LightBlue_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorStat_LightBlue_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_QuickAccess_ShowInfo_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_QuickAccess_ShowInfo_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_QuickAccess_ShowInfo_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Cmn_Arrw_DnRgt_White_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Cmn_Arrw_DnRgt_White_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Cmn_Arrw_DnRgt_White_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Cmn_Arrw_DnRgt_Green_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Cmn_Arrw_DnRgt_Green_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Cmn_Arrw_DnRgt_Green_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Cmn_Arrw_DnRgt_Yellow_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Cmn_Arrw_DnRgt_Yellow_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Cmn_Arrw_DnRgt_Yellow_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Cmn_Arrw_DnRgt_Red_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Cmn_Arrw_DnRgt_Red_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Cmn_Arrw_DnRgt_Red_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Cmn_Arrw_DnRgtExp_Green_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Cmn_Arrw_DnRgtExp_Green_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Cmn_Arrw_DnRgtExp_Green_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Cmn_Arrw_DnRgtExp_White_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Cmn_Arrw_DnRgtExp_White_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Cmn_Arrw_DnRgtExp_White_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Cmn_Arrw_DnRgtExp_Yellow_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Cmn_Arrw_DnRgtExp_Yellow_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Cmn_Arrw_DnRgtExp_Yellow_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Cmn_Arrw_DnRgtExp_Red_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Cmn_Arrw_DnRgtExp_Red_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Cmn_Arrw_DnRgtExp_Red_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.ColorBar_Red_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBar_Red_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBar_Red_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.ColorBar_Green_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBar_Green_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBar_Green_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.ColorBar_Yellow_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBar_Yellow_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBar_Yellow_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.ColorBar_Amber_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBar_Amber_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBar_Amber_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.ColorBar_DarkBlue_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBar_DarkBlue_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBar_DarkBlue_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.ColorBar_LightBlue_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBar_LightBlue_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBar_LightBlue_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Cmn_Save_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Cmn_Save_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Cmn_Save_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Cmn_Undo_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Cmn_Undo_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Cmn_Undo_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Cmn_Redo_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Cmn_Redo_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Cmn_Redo_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Cmn_Pause_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Cmn_Pause_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Cmn_Pause_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Cmn_Play_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Cmn_Play_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Cmn_Play_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Cmn_Stop_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Cmn_Stop_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Cmn_Stop_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Cmn_Reset_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Cmn_Reset_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Cmn_Reset_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mask_Round_53x43.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mask_Round_53x43.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mask_Round_53x43.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Motion_TopUp_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Motion_TopUp_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Motion_TopUp_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Comm_Back_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Comm_Back_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Comm_Back_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Common_Page_5_1.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Common_Page_5_1.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Common_Page_5_1.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Common_Page_5_2.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Common_Page_5_2.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Common_Page_5_2.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Common_Page_5_3.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Common_Page_5_3.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Common_Page_5_3.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Common_Page_5_4.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Common_Page_5_4.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Common_Page_5_4.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Common_Page_5_5.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Common_Page_5_5.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Common_Page_5_5.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Common_User_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Common_User_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Common_User_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Nutek_Login_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Nutek_Login_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Nutek_Login_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_User_Logout_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_User_Logout_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_User_Logout_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.ColorBtnRound_Silver_50.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtnRound_Silver_50.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtnRound_Silver_50.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.ColorBtnRound_Grey_50.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtnRound_Grey_50.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtnRound_Grey_50.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_LftToRgt_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LftToRgt_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LftToRgt_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Ops_Hermes.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Ops_Hermes.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Ops_Hermes.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_LED_Red_10.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LED_Red_10.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LED_Red_10.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_LED_Red_25.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LED_Red_25.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LED_Red_25.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_PDestacker_AWClose_210x250.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_PDestacker_AWClose_210x250.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_PDestacker_AWClose_210x250.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_RgtToLft_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_RgtToLft_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_RgtToLft_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.ColorBtn_Silver_400x300.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtn_Silver_400x300.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtn_Silver_400x300.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.ColorBtn_Yellow_400x300.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtn_Yellow_400x300.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/ColorBtn_Yellow_400x300.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mask_LCSManage_80x80.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mask_LCSManage_80x80.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mask_LCSManage_80x80.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_AWClose_210x250.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_AWClose_210x250.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_AWClose_210x250.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_AWOpen_210x250.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_AWOpen_210x250.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_AWOpen_210x250.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_LifterTop_245x245.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_LifterTop_245x245.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_LifterTop_245x245.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_LifterMid_245x245.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_LifterMid_245x245.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_LifterMid_245x245.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_LifterDown_245x245.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_LifterDown_245x245.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_LifterDown_245x245.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_Guide_245x245.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Guide_245x245.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Guide_245x245.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_Conv_Small_23x40.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Conv_Small_23x40.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Conv_Small_23x40.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_Lifter_Small_23x40.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Lifter_Small_23x40.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Lifter_Small_23x40.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_Flipper_Small_23x40.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Flipper_Small_23x40.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Flipper_Small_23x40.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_Guide_Small_23x40.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Guide_Small_23x40.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Guide_Small_23x40.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_AW_Small_23x40.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_AW_Small_23x40.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_AW_Small_23x40.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_Conv_245x250.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Conv_245x250.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Conv_245x250.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_FrontView_400x250.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_FrontView_400x250.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_FrontView_400x250.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_FrontView_150x150.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_FrontView_150x150.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_FrontView_150x150.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_Conv_40x40.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Conv_40x40.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Conv_40x40.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_AW_40x40.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_AW_40x40.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_AW_40x40.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_Inverter_40x40.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_40x40.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_40x40.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_Stopper_40x40.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Stopper_40x40.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Stopper_40x40.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_Conv_245x245.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Conv_245x245.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Conv_245x245.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_InverterHm_210x250.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_InverterHm_210x250.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_InverterHm_210x250.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_InverteMid_210x250.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_InverteMid_210x250.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_InverteMid_210x250.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_InverterRmt_210x250.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_InverterRmt_210x250.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_InverterRmt_210x250.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_Stopper1_245x245.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Stopper1_245x245.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Stopper1_245x245.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_Stopper2_245x245.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Stopper2_245x245.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Stopper2_245x245.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_Inverter_AW_Small.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_AW_Small.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_AW_Small.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_Inverter_Conv.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_Conv.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_Conv.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_Inverter_Conv_Small.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_Conv_Small.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_Conv_Small.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_Inverter_ConvInv1.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_ConvInv1.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_ConvInv1.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_Inverter_Stpr2_Small.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_Stpr2_Small.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_Stpr2_Small.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_Inverter_Stpr3.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_Stpr3.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_Stpr3.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_Invert_Home_165x250.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Invert_Home_165x250.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Invert_Home_165x250.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_Invert_Remote_165x250.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Invert_Remote_165x250.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Invert_Remote_165x250.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_Inverter_Stpr_Extend.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_Stpr_Extend.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_Stpr_Extend.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_Inverter_Stpr_Retract.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_Stpr_Retract.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_Stpr_Retract.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Numpad_Black.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Numpad_Black.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Numpad_Black.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_LogOut.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LogOut.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_LogOut.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Loading_1.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Loading_1.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Loading_1.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Loading_2.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Loading_2.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Loading_2.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Loading_3.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Loading_3.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Loading_3.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Loading_4.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Loading_4.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Loading_4.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.MC_Inverter_Clamp_Extend_Small.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/MC_Inverter_Clamp_Extend_Small.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/MC_Inverter_Clamp_Extend_Small.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_Inverter_Clamp_Retract.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_Clamp_Retract.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_Clamp_Retract.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_Inverter_Clamp_Extend.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_Clamp_Extend.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_Clamp_Extend.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Ops_Warning.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Ops_Warning.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Ops_Warning.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.SMEMA_Logo_Lft_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/SMEMA_Logo_Lft_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/SMEMA_Logo_Lft_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_FrontView_138x276.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_FrontView_138x276.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_FrontView_138x276.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_Clamp_With_RS_Small.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Clamp_With_RS_Small.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Clamp_With_RS_Small.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_Inverter_Clamped1.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_Clamped1.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_Clamped1.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_Inverter_Clamped2.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_Clamped2.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_Clamped2.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_Inverter_Clamped3.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_Clamped3.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_Clamped3.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_Inverter_Unclamp1.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_Unclamp1.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_Unclamp1.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_Inverter_UnClamp2.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_UnClamp2.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_UnClamp2.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_Inverter_UnClamp3.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_UnClamp3.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_UnClamp3.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_Inverter_ShutterIn_Close.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_ShutterIn_Close.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_ShutterIn_Close.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_Inverter_Shutter_Small.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_Shutter_Small.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_Shutter_Small.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_Inverter_ShutterIn_Open.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_ShutterIn_Open.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_ShutterIn_Open.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_Inverter_ShutterOut_Close.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_ShutterOut_Close.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_ShutterOut_Close.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_Inverter_ShutterOut_Open.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_ShutterOut_Open.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_ShutterOut_Open.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_AWClose_210x250_BHTC.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_AWClose_210x250_BHTC.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_AWClose_210x250_BHTC.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_AWOpen_210x250_BHTC.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_AWOpen_210x250_BHTC.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_AWOpen_210x250_BHTC.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_FrontView_138x276_BHTC.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_FrontView_138x276_BHTC.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_FrontView_138x276_BHTC.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_FrontView_150x150_BHTC.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_FrontView_150x150_BHTC.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_FrontView_150x150_BHTC.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_Invert_Home_165x250_BHTC.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Invert_Home_165x250_BHTC.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Invert_Home_165x250_BHTC.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_Invert_Remote_165x250_BHTC.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Invert_Remote_165x250_BHTC.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Invert_Remote_165x250_BHTC.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_Inverter_AW_Small_BHTC.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_AW_Small_BHTC.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_AW_Small_BHTC.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_Inverter_Conv_BHTC.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_Conv_BHTC.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_Conv_BHTC.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_Inverter_Shutter_Small_BHTC.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_Shutter_Small_BHTC.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_Shutter_Small_BHTC.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_Inverter_ShutterIn_Close_BHTC.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_ShutterIn_Close_BHTC.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_ShutterIn_Close_BHTC.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_Inverter_ShutterIn_Open_BHTC.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_ShutterIn_Open_BHTC.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_ShutterIn_Open_BHTC.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_Inverter_ShuttrOut_Close_BHTC.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_ShuttrOut_Close_BHTC.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_ShuttrOut_Close_BHTC.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_Inverter_ShutterOut_Open_BHTC.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_ShutterOut_Open_BHTC.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_ShutterOut_Open_BHTC.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_Inverter_With_TL_40x40_BHTC.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_With_TL_40x40_BHTC.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_With_TL_40x40_BHTC.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_AWClose_WithTL_210x250.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_AWClose_WithTL_210x250.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_AWClose_WithTL_210x250.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_AWOpen_WithTL_210x250.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_AWOpen_WithTL_210x250.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_AWOpen_WithTL_210x250.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_FrontView_With_TL_138x276.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_FrontView_With_TL_138x276.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_FrontView_With_TL_138x276.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_FrontView_With_TL_150x150.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_FrontView_With_TL_150x150.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_FrontView_With_TL_150x150.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_Invert_Home_WithTL_165x250.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Invert_Home_WithTL_165x250.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Invert_Home_WithTL_165x250.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_Invert_Remote_WithTL_165x250.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Invert_Remote_WithTL_165x250.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Invert_Remote_WithTL_165x250.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_Inverter_AW_Small_WithTL.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_AW_Small_WithTL.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_AW_Small_WithTL.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_Inverter_Conv_WithTL.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_Conv_WithTL.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_Conv_WithTL.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_Inverter_Shutter_Small_WithTL.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_Shutter_Small_WithTL.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_Shutter_Small_WithTL.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_Inverter_With_TL_40x40.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_With_TL_40x40.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_With_TL_40x40.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_Inverter_ShutterIn_Open_TL.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_ShutterIn_Open_TL.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_ShutterIn_Open_TL.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_Inverter_ShutterOut_Open_TL.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_ShutterOut_Open_TL.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_ShutterOut_Open_TL.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_Inverter_ShutterIn_Close_TL.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_ShutterIn_Close_TL.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_ShutterIn_Close_TL.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Mc_Inverter_ShutterOut_Close_TL.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_ShutterOut_Close_TL.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Mc_Inverter_ShutterOut_Close_TL.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Keypad_AlphaPad_Down_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Keypad_AlphaPad_Down_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Keypad_AlphaPad_Down_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Keypad_AlphaPad_Down_7_black.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Keypad_AlphaPad_Down_7_black.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Keypad_AlphaPad_Down_7_black.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Keypad_AlphaPad_Up_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Keypad_AlphaPad_Up_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Keypad_AlphaPad_Up_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Keypad_AlphaPad_Up_7_black.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Keypad_AlphaPad_Up_7_black.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Keypad_AlphaPad_Up_7_black.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Icon_Alarm_7.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Alarm_7.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Icon_Alarm_7.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Border_ArrowUp.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Border_ArrowUp.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Border_ArrowUp.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Border_ArrowUpWhPressed.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Border_ArrowUpWhPressed.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Border_ArrowUpWhPressed.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Border_ArrowDn.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Border_ArrowDn.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Border_ArrowDn.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.Border_ArrowDnWhPressed.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Border_ArrowDnWhPressed.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/Border_ArrowDnWhPressed.png
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/bminfo.IMG_4204.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/IMG_4204.bminfo $(AS_PROJECT_PATH)/Logical/UI/Visu/Bitmaps/IMG_4204.jpg
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


#Bitmaps END




# Trend Configuration
TRE_OBJECTS_Visu = $(addprefix $(TEMP_PATH_Visu)/tre., $(notdir $(TRE_SOURCES_Visu:.tre=.vco)))

$(TEMP_PATH_Visu)/tre.Trend_1.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Trends/Trend_1.tre
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


#Trend Configuration END




# Trend Data
TRD_OBJECTS_Visu = $(addprefix $(TEMP_PATH_Visu)/trd., $(notdir $(TRD_SOURCES_Visu:.trd=.vco)))

$(TEMP_PATH_Visu)/trd.TrendData_1.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Trends/TrendData_1.trd
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


#Trend Data END




# Trend Data Configuration
TDC_OBJECTS_Visu = $(addprefix $(TEMP_PATH_Visu)/tdc., $(notdir $(TDC_SOURCES_Visu:.tdc=.vco)))

$(TEMP_PATH_Visu)/tdc.TrendData.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Trends/TrendData.tdc
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


#Trend Data Configuration END




# ColorMap Table
CLM_OBJECTS_Visu = $(addprefix $(TEMP_PATH_Visu)/clm., $(notdir $(CLM_SOURCES_Visu:.clm=.vco)))

$(TEMP_PATH_Visu)/clm.BtnChkReject.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/ColorMaps/BtnChkReject.clm
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/clm.BtnLoad.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/ColorMaps/BtnLoad.clm
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/clm.CheckBoxNRadio.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/ColorMaps/CheckBoxNRadio.clm
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/clm.NumGeneralDisp.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/ColorMaps/NumGeneralDisp.clm
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/clm.NumGeneralInput.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/ColorMaps/NumGeneralInput.clm
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/clm.TxtGeneral.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/ColorMaps/TxtGeneral.clm
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/clm.AlarmDisplay.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/ColorMaps/AlarmDisplay.clm
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/clm.BtnGeneral.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/ColorMaps/BtnGeneral.clm
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/clm.BufferStatus.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/ColorMaps/BufferStatus.clm
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/clm.CheckBox.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/ColorMaps/CheckBox.clm
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/clm.General.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/ColorMaps/General.clm
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/clm.LED.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/ColorMaps/LED.clm
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/clm.MachineStatus.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/ColorMaps/MachineStatus.clm
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/clm.MenuBtn.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/ColorMaps/MenuBtn.clm
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/clm.MessageBoxMsg.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/ColorMaps/MessageBoxMsg.clm
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/clm.MessageBoxTitle.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/ColorMaps/MessageBoxTitle.clm
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/clm.MotionStatus.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/ColorMaps/MotionStatus.clm
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


$(TEMP_PATH_Visu)/clm.Table.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/ColorMaps/Table.clm
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


#ColorMap Table END




# Process
PRC_OBJECTS_Visu = $(addprefix $(TEMP_PATH_Visu)/prc., $(notdir $(PRC_SOURCES_Visu:.prc=.vco)))

$(TEMP_PATH_Visu)/prc.Process_1.vco: $(AS_PROJECT_PATH)/Logical/UI/Visu/Processes/Process_1.prc
	 $(VCC) -f '$<' -o '$@' -l '$(AS_PROJECT_PATH)/Logical/VCShared/Languages.vcr' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -pal '$(PALFILE_Visu)' $(VCCFLAGS_Visu)  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas


#Process END


#
# Borders
#
BDR_SOURCES_Visu=$(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/Border_MsgBox.bdr $(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/Flat_Black.bdr $(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/Flat_White.bdr $(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/ColorBtn_Red_150x50_R8.bdr $(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/CheckBox_Off.bdr $(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/CheckBox_On.bdr $(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/RadioButton_Off.bdr $(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/RadioButton_On.bdr $(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/Transparent.bdr $(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/QuickAccess_BG.bdr $(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/QuickAccess_Icon_Grey.bdr $(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/ColorBtn_Grey_100x35_R6.bdr $(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/ColorBtn_Silver_80x35_R5.bdr $(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/ColorBtn_Grey_80x35_R5.bdr $(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/Mask_800x480.bdr $(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/Border_Display.bdr $(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/ColorBtn_Silver_100x35_R6.bdr $(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/Border_Input.bdr $(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/ColorBtn_Silver_150x50_R8.bdr $(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/ColorBtn_Green_150x50_R8.bdr $(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/ColorBtn_Silver_340x80_R17.bdr $(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/ColorBtn_Grey_340x80_R17.bdr $(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/ColorBtn_Silver_100x50_R10.bdr $(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/ColorBtn_Grey_100x50_R10.bdr $(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/ColorBtn_Green_100x50_R10.bdr $(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/Switch_Up.bdr $(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/Switch_Down.bdr $(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/Slider_Bar.bdr $(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/ColorBtn_Silver_160x35_R10.bdr $(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/ColorBtn_Grey_160x35_R10.bdr $(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/Border_Detail.bdr $(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/ColorBtn_Silver_65x25_R6.bdr $(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/ColorBtn_Grey_65x25_R6.bdr $(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/Group_Silver.bdr $(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/Text_Disabled.bdr $(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/Text_Disabled1.bdr $(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/QuickAccess_Icon_Mask.bdr $(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/QuickAccess_Full_Mask.bdr $(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/ColorBtn_Red_100x50_R10.bdr $(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/ColorBtn_Green_100x35_R6.bdr $(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/SMEMA.bdr $(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/QuickAccess_Rst_Red.bdr $(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/QuickAccess_Rst_Mask.bdr $(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/ColorBtn_Blue_100x50_R10.bdr $(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/ColorBtn_LightBlue_100x50_R10.bdr $(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/QuickAccess_Rst_Blue.bdr $(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/Icon_Table_ShiftDown_Active.bdr $(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/Icon_Table_ShiftDown_Pressed.bdr $(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/Icon_Table_ShiftUp_Pressed.bdr $(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/Icon_Table_ShiftUp_Active.bdr $(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/Flat_Amber.bdr $(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/ColorBtn_Yellow_150x50_R8.bdr $(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/Mask_Round_53x43.bdr $(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/Mask_LCSManage_80x80.bdr $(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/Btn_AlarmHis_Up.bdr $(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/Btn_AlarmHis_Up_Pressed.bdr $(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/Btn_AlarmHis_Dn.bdr $(AS_PROJECT_PATH)/Logical/UI/Visu/Borders/Btn_AlarmHis_Dn_Pressed.bdr 
BDR_OBJECTS_Visu=$(TEMP_PATH_Visu)/bdr.Bordermanager.vco
$(TEMP_PATH_Visu)/bdr.Bordermanager.vco: $(BDR_SOURCES_Visu)
	$(VCC) -f '$<' -o '$@' -pkg '$(SRC_PATH_Visu)' $(BDRFLAGS_Visu) $(VCCFLAGS_Visu) -p Visu$(SRC_PATH_Visu)
#
# Logical fonts
#
$(TEMP_PATH_Visu)/lfnt.de.vco: $(TEMP_PATH_Visu)/de.lfnt $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' $(LFNTFLAGS_Visu) $(VCCFLAGS_Visu) -p Visu -sfas
$(TEMP_PATH_Visu)/lfnt.en.vco: $(TEMP_PATH_Visu)/en.lfnt $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' $(LFNTFLAGS_Visu) $(VCCFLAGS_Visu) -p Visu -sfas
$(TEMP_PATH_Visu)/lfnt.pt.vco: $(TEMP_PATH_Visu)/pt.lfnt $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' $(LFNTFLAGS_Visu) $(VCCFLAGS_Visu) -p Visu -sfas
$(TEMP_PATH_Visu)/lfnt.zh.vco: $(TEMP_PATH_Visu)/zh.lfnt $(VC_LANGUAGES_Visu)
	 $(VCC) -f '$<' -o '$@' $(LFNTFLAGS_Visu) $(VCCFLAGS_Visu) -p Visu -sfas
LFNT_OBJECTS_Visu=$(TEMP_PATH_Visu)/lfnt.de.vco $(TEMP_PATH_Visu)/lfnt.en.vco $(TEMP_PATH_Visu)/lfnt.pt.vco $(TEMP_PATH_Visu)/lfnt.zh.vco 

#Runtime Object
$(VCR_OBJECT_Visu) : $(VCR_SOURCE_Visu)
	$(VCC) -f '$<' -o '$@' -cv '$(AS_PROJECT_PATH)/Logical/VCShared/ControlVersion.cvinfo' -sl en $(VCCFLAGS_Visu) -rt  -p Visu -so $(VC_STATIC_OPTIONS_Visu) -vcr 4721 -sfas
# Local resources Library rules
LIB_LOCAL_RES_Visu=$(TEMP_PATH_Visu)/localres.vca
$(LIB_LOCAL_RES_Visu) : $(TEMP_PATH_Visu)/Visu02.ccf

# Bitmap Library rules
LIB_BMP_RES_Visu=$(TEMP_PATH_Visu)/bmpres.vca
$(LIB_BMP_RES_Visu) : $(TEMP_PATH_Visu)/Visu03.ccf
$(BMGRP_OBJECTS_Visu) : $(PALFILE_Visu) $(VC_LANGUAGES_Visu)
$(BMINFO_OBJECTS_Visu) : $(PALFILE_Visu)

BUILD_FILE_Visu=$(TEMP_PATH_Visu)/BuildFiles.arg
$(BUILD_FILE_Visu) : BUILD_FILE_CLEAN_Visu $(BUILD_SOURCES_Visu)
BUILD_FILE_CLEAN_Visu:
	$(RM) /F /Q '$(BUILD_FILE_Visu)' 2>nul
#All Modules depending to this project
PROJECT_MODULES_Visu=$(AS_CPU_PATH)/Visu01.br $(AS_CPU_PATH)/Visu02.br $(AS_CPU_PATH)/Visu03.br $(FONT_MODULES_Visu) $(SHARED_MODULE)

# General Build rules

$(TARGET_FILE_Visu): $(PROJECT_MODULES_Visu) $(TEMP_PATH_Visu)/Visu.prj
	$(MODGEN) -so $(VC_STATIC_OPTIONS_Visu) -fw '$(VCFIRMWAREPATH)' -m $(VCSTPOST) -v V1.00.0 -f '$(TEMP_PATH_Visu)/Visu.prj' -o '$@' -vc '$(VCOBJECT_Visu)' $(DEPENDENCIES_Visu) $(addprefix -d ,$(notdir $(PROJECT_MODULES_Visu:.br=)))

$(AS_CPU_PATH)/Visu01.br: $(TEMP_PATH_Visu)/Visu01.ccf
	$(MODGEN) -so $(VC_STATIC_OPTIONS_Visu) -fw '$(VCFIRMWAREPATH)' -m $(VCLOD) -v V1.00.0 -b -vc '$(VCOBJECT_Visu)' -f '$<' -o '$@' $(DEPENDENCIES_Visu)

$(AS_CPU_PATH)/Visu02.br: $(TEMP_PATH_Visu)/Visu02.ccf
	$(MODGEN) -so $(VC_STATIC_OPTIONS_Visu) -fw '$(VCFIRMWAREPATH)' -m $(VCLOD) -v V1.00.0 -b -vc '$(VCOBJECT_Visu)' -f '$<' -o '$@' $(DEPENDENCIES_Visu)

$(AS_CPU_PATH)/Visu03.br: $(TEMP_PATH_Visu)/Visu03.ccf
	$(MODGEN) -so $(VC_STATIC_OPTIONS_Visu) -fw '$(VCFIRMWAREPATH)' -m $(VCLOD) -v V1.00.0 -b -vc '$(VCOBJECT_Visu)' -f '$<' -o '$@' $(DEPENDENCIES_Visu)

# General Build rules END
$(LIB_LOCAL_OBJ_Visu) : $(TEMP_PATH_Visu)/Visu01.ccf

# Main Module
$(TEMP_PATH_ROOT_Visu)/Objects/$(AS_CONFIGURATION)/$(AS_TEMP_PLC)/VCShared/Visu.vcm:
$(TEMP_PATH_Visu)/Visu.prj: $(TEMP_PATH_ROOT_Visu)/Objects/$(AS_CONFIGURATION)/$(AS_TEMP_PLC)/VCShared/Visu.vcm
	$(VCDEP) -m '$(TEMP_PATH_ROOT_Visu)/Objects/$(AS_CONFIGURATION)/$(AS_TEMP_PLC)/VCShared/Visu.vcm' -s '$(AS_CPU_PATH)/VCShared/Shared.vcm' -p '$(AS_PATH)/AS/VC/Firmware' -c '$(AS_CPU_PATH)' -fw '$(VCFIRMWAREPATH)' -hw '$(CPUHWC)' -so $(VC_STATIC_OPTIONS_Visu) -o Visu -proj Visu
	$(VCPL) $(notdir $(PROJECT_MODULES_Visu:.br=,4)) Visu,2 -o '$@' -p Visu -vc 'Visu' -verbose 'False' -fl '$(TEMP_PATH_ROOT_Visu)/Objects/$(AS_CONFIGURATION)/$(AS_TEMP_PLC)/VCShared/Visu.vcm' -vcr '$(VCR_SOURCE_Visu)' -prj '$(AS_PROJECT_PATH)' -warningLevel2 -sfas

# 01 Module

DEL_TARGET01_LFL_Visu=$(TEMP_PATH_Visu)\Visu01.ccf.lfl
$(TEMP_PATH_Visu)/Visu01.ccf: $(LIB_SHARED) $(SHARED_CCF) $(LIB_BMP_RES_Visu) $(TEMP_PATH_Visu)/Visu03.ccf $(LIB_LOCAL_RES_Visu) $(TEMP_PATH_Visu)/Visu02.ccf $(DIS_OBJECTS_Visu) $(PAGE_OBJECTS_Visu) $(VCS_OBJECTS_Visu) $(VCVK_OBJECTS_Visu) $(VCRT_OBJECTS_Visu) $(TPR_OBJECTS_Visu) $(TXTGRP_OBJECTS_Visu) $(LAYER_OBJECTS_Visu) $(VCR_OBJECT_Visu) $(TDC_OBJECTS_Visu) $(TRD_OBJECTS_Visu) $(TRE_OBJECTS_Visu) $(PRC_OBJECTS_Visu) $(SCR_OBJECTS_Visu)
	-@CMD /Q /C if exist "$(DEL_TARGET01_LFL_Visu)" DEL /F /Q "$(DEL_TARGET01_LFL_Visu)" 2>nul
	@$(VCFLGEN) '$@.lfl' '$(LIB_SHARED)' -temp '$(TEMP_PATH_Visu)' -prj '$(PRJ_PATH_Visu)' -sfas
	@$(VCFLGEN) '$@.lfl' '$(LIB_BMP_RES_Visu)' -temp '$(TEMP_PATH_Visu)' -prj '$(PRJ_PATH_Visu)' -sfas
	@$(VCFLGEN) '$@.lfl' '$(LIB_LOCAL_RES_Visu)' -temp '$(TEMP_PATH_Visu)' -prj '$(PRJ_PATH_Visu)' -sfas
	@$(VCFLGEN) '$@.lfl' '$(DIS_OBJECTS_Visu:.vco=.vco|)' -temp '$(TEMP_PATH_Visu)' -prj '$(PRJ_PATH_Visu)' -sfas
	@$(VCFLGEN) '$@.lfl' -mask .page -vcp '$(AS_PROJECT_PATH)/Logical/UI/Visu/Package.vcp' -temp '$(TEMP_PATH_Visu)' -prj '$(PRJ_PATH_Visu)' -sfas
	@$(VCFLGEN) '$@.lfl' '$(VCS_OBJECTS_Visu:.vco=.vco|)' -temp '$(TEMP_PATH_Visu)' -prj '$(PRJ_PATH_Visu)' -sfas
	@$(VCFLGEN) '$@.lfl' -mask .vcvk -vcp '$(AS_PROJECT_PATH)/Logical/UI/Visu/Package.vcp' -temp '$(TEMP_PATH_Visu)' -prj '$(PRJ_PATH_Visu)' -sfas
	@$(VCFLGEN) '$@.lfl' '$(VCRT_OBJECTS_Visu:.vco=.vco|)' -temp '$(TEMP_PATH_Visu)' -prj '$(PRJ_PATH_Visu)' -sfas
	@$(VCFLGEN) '$@.lfl' '$(TPR_OBJECTS_Visu:.vco=.vco|)' -temp '$(TEMP_PATH_Visu)' -prj '$(PRJ_PATH_Visu)' -sfas
	@$(VCFLGEN) '$@.lfl' -mask .txtgrp -vcp '$(AS_PROJECT_PATH)/Logical/UI/Visu/Package.vcp' -temp '$(TEMP_PATH_Visu)' -prj '$(PRJ_PATH_Visu)' -sfas
	@$(VCFLGEN) '$@.lfl' -mask .layer -vcp '$(AS_PROJECT_PATH)/Logical/UI/Visu/Package.vcp' -temp '$(TEMP_PATH_Visu)' -prj '$(PRJ_PATH_Visu)' -sfas
	@$(VCFLGEN) '$@.lfl' '$(VCR_OBJECT_Visu:.vco=.vco|)' -temp '$(TEMP_PATH_Visu)' -prj '$(PRJ_PATH_Visu)' -sfas
	@$(VCFLGEN) '$@.lfl' -mask .tdc -vcp '$(AS_PROJECT_PATH)/Logical/UI/Visu/Package.vcp' -temp '$(TEMP_PATH_Visu)' -prj '$(PRJ_PATH_Visu)' -sfas
	@$(VCFLGEN) '$@.lfl' -mask .trd -vcp '$(AS_PROJECT_PATH)/Logical/UI/Visu/Package.vcp' -temp '$(TEMP_PATH_Visu)' -prj '$(PRJ_PATH_Visu)' -sfas
	@$(VCFLGEN) '$@.lfl' '$(TEMP_PATH_Visu)/tre.Trend_1.vco' -temp '$(TEMP_PATH_Visu)' -prj '$(PRJ_PATH_Visu)' -sfas
	@$(VCFLGEN) '$@.lfl' '$(TEMP_PATH_Visu)/prc.Process_1.vco' -temp '$(TEMP_PATH_Visu)' -prj '$(PRJ_PATH_Visu)' -sfas
	@$(VCFLGEN) '$@.lfl' '$(SCR_OBJECTS_Visu:.vco=.vco|)' -temp '$(TEMP_PATH_Visu)' -prj '$(PRJ_PATH_Visu)' -sfas
	$(LINK) '$@.lfl' -o '$@' -p Visu -lib '$(LIB_LOCAL_OBJ_Visu)' -P '$(AS_PROJECT_PATH)' -m 'local objects' -profile 'False' -warningLevel2 -vcr 4721 -sfas
# 01 Module END

# 02 Module

DEL_TARGET02_LFL_Visu=$(TEMP_PATH_Visu)\Visu02.ccf.lfl
$(TEMP_PATH_Visu)/Visu02.ccf: $(LIB_SHARED) $(SHARED_CCF) $(LIB_BMP_RES_Visu) $(TEMP_PATH_Visu)/Visu03.ccf $(BDR_OBJECTS_Visu) $(LFNT_OBJECTS_Visu) $(CLM_OBJECTS_Visu)
	-@CMD /Q /C if exist "$(DEL_TARGET02_LFL_Visu)" DEL /F /Q "$(DEL_TARGET02_LFL_Visu)" 2>nul
	@$(VCFLGEN) '$@.lfl' '$(LIB_SHARED)' -temp '$(TEMP_PATH_Visu)' -prj '$(PRJ_PATH_Visu)' -sfas
	@$(VCFLGEN) '$@.lfl' '$(LIB_BMP_RES_Visu)' -temp '$(TEMP_PATH_Visu)' -prj '$(PRJ_PATH_Visu)' -sfas
	@$(VCFLGEN) '$@.lfl' '$(BDR_OBJECTS_Visu:.vco=.vco|)' -temp '$(TEMP_PATH_Visu)' -prj '$(PRJ_PATH_Visu)' -sfas
	@$(VCFLGEN) '$@.lfl' '$(LFNT_OBJECTS_Visu:.vco=.vco|)' -temp '$(TEMP_PATH_Visu)' -prj '$(PRJ_PATH_Visu)' -sfas
	@$(VCFLGEN) '$@.lfl' '$(CLM_OBJECTS_Visu:.vco=.vco|)' -temp '$(TEMP_PATH_Visu)' -prj '$(PRJ_PATH_Visu)' -sfas
	$(LINK) '$@.lfl' -o '$@' -p Visu -lib '$(LIB_LOCAL_RES_Visu)' -P '$(AS_PROJECT_PATH)' -m 'local resources' -profile 'False' -warningLevel2 -vcr 4721 -sfas
# 02 Module END

# 03 Module

DEL_TARGET03_LFL_Visu=$(TEMP_PATH_Visu)\Visu03.ccf.lfl
$(TEMP_PATH_Visu)/Visu03.ccf: $(LIB_SHARED) $(SHARED_CCF) $(BMGRP_OBJECTS_Visu) $(BMINFO_OBJECTS_Visu) $(PALFILE_Visu)
	-@CMD /Q /C if exist "$(DEL_TARGET03_LFL_Visu)" DEL /F /Q "$(DEL_TARGET03_LFL_Visu)" 2>nul
	@$(VCFLGEN) '$@.lfl' '$(LIB_SHARED)' -temp '$(TEMP_PATH_Visu)' -prj '$(PRJ_PATH_Visu)' -sfas
	@$(VCFLGEN) '$@.lfl' -mask .bmgrp -vcp '$(AS_PROJECT_PATH)/Logical/UI/Visu/Package.vcp' -temp '$(TEMP_PATH_Visu)' -prj '$(PRJ_PATH_Visu)' -sfas
	@$(VCFLGEN) '$@.lfl' -mask .bminfo -vcp '$(AS_PROJECT_PATH)/Logical/UI/Visu/Package.vcp' -temp '$(TEMP_PATH_Visu)' -prj '$(PRJ_PATH_Visu)' -sfas
	$(LINK) '$@.lfl' -o '$@' -p Visu -lib '$(LIB_BMP_RES_Visu)' -P '$(AS_PROJECT_PATH)' -m 'bitmap resources' -profile 'False' -warningLevel2 -vcr 4721 -sfas
# 03 Module END

# Post Build Steps

.PHONY : vcPostBuild_Visu

vcPostBuild_Visu :
	$(VCC) -pb -vcm '$(TEMP_PATH_Visu)/MODULEFILES.vcm' -fw '$(VCFIRMWAREPATH)' $(VCCFLAGS_Visu) -p Visu -vcr 4721 -sfas

# Post Build Steps END
