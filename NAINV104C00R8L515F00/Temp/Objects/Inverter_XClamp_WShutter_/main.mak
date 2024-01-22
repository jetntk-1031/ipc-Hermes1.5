SHELL := cmd.exe
CYGWIN=nontsec
export PATH := C:\Program Files (x86)\Siemens\Automation\SCADA-RT_V11\WinCC\Bin;C:\Program Files\Common Files\Siemens\Automation\Simatic OAM\bin;C:\Program Files (x86)\Common Files\Siemens\Bin;C:\Program Files (x86)\Common Files\Siemens\CommonArchiving;C:\Program Files (x86)\Common Files\Siemens\ACE\Bin;C:\WINDOWS\system32;C:\WINDOWS;C:\WINDOWS\System32\Wbem;C:\WINDOWS\System32\WindowsPowerShell\v1.0\;C:\Program Files (x86)\NAiS MEWNET;C:\Program Files (x86)\Microsoft VS Code\bin;C:\Program Files\Microsoft SQL Server\Client SDK\ODBC\130\Tools\Binn\;C:\Program Files (x86)\Microsoft SQL Server\130\Tools\Binn\;C:\Program Files\Microsoft SQL Server\130\Tools\Binn\;C:\Program Files\Microsoft SQL Server\130\DTS\Binn\;C:\Program Files (x86)\Siemens\Automation\SCADA-RT_V11\WinCC\Interfaces;C:\Program Files (x86)\Common Files\Siemens\;C:\Program Files (x86)\Common Files\Siemens\Interfaces;C:\Program Files (x86)\Common Files\Siemens\ACE\Interfaces;C:\Users\wongjl\AppData\Local\Microsoft\WindowsApps;C:\Users\wongjl\AppData\Local\Programs\Microsoft VS Code\bin;C:\Users\wongjl\AppData\Local\Programs\Git\cmd;C:\Users\wongjl\AppData\Local\GitHubDesktop\bin;C:\Users\wongjl\AppData\Local\Microsoft\WindowsApps;C:\Users\wongjl\AppData\Local\Programs\Microsoft VS Code\bin;C:\Users\wongjl\AppData\Local\Programs\Git\cmd;C:\Users\wongjl\AppData\Local\GitHubDesktop\bin
export AS_BUILD_MODE := BuildAndTransfer
export AS_VERSION := 4.8.4.50 SP
export AS_COMPANY_NAME := HP Inc.
export AS_USER_NAME := wongjl
export AS_PATH := C:/BrAutomation/AS48
export AS_BIN_PATH := C:/BrAutomation/AS48/Bin-en
export AS_PROJECT_PATH := C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00
export AS_PROJECT_NAME := NAINV104C00R8L515F00
export AS_SYSTEM_PATH := C:/BrAutomation/AS/System
export AS_VC_PATH := C:/BrAutomation/AS48/AS/VC
export AS_TEMP_PATH := C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Temp
export AS_CONFIGURATION := Inverter_XClamp_WShutter_
export AS_BINARIES_PATH := C:/Users/wongjl/Desktop/job/Github/ipc-Hermes1.5/NAINV104C00R8L515F00/Binaries
export AS_GNU_INST_PATH := C:/BrAutomation/AS48/AS/GnuInst/V4.1.2
export AS_GNU_BIN_PATH := $(AS_GNU_INST_PATH)/bin
export AS_GNU_INST_PATH_SUB_MAKE := C:/BrAutomation/AS48/AS/GnuInst/V4.1.2
export AS_GNU_BIN_PATH_SUB_MAKE := $(AS_GNU_INST_PATH_SUB_MAKE)/bin
export AS_INSTALL_PATH := C:/BrAutomation/AS48
export WIN32_AS_PATH := "C:\BrAutomation\AS48"
export WIN32_AS_BIN_PATH := "C:\BrAutomation\AS48\Bin-en"
export WIN32_AS_PROJECT_PATH := "C:\Users\wongjl\Desktop\job\Github\ipc-Hermes1.5\NAINV104C00R8L515F00"
export WIN32_AS_SYSTEM_PATH := "C:\BrAutomation\AS\System"
export WIN32_AS_VC_PATH := "C:\BrAutomation\AS48\AS\VC"
export WIN32_AS_TEMP_PATH := "C:\Users\wongjl\Desktop\job\Github\ipc-Hermes1.5\NAINV104C00R8L515F00\Temp"
export WIN32_AS_BINARIES_PATH := "C:\Users\wongjl\Desktop\job\Github\ipc-Hermes1.5\NAINV104C00R8L515F00\Binaries"
export WIN32_AS_GNU_INST_PATH := "C:\BrAutomation\AS48\AS\GnuInst\V4.1.2"
export WIN32_AS_GNU_BIN_PATH := "$(WIN32_AS_GNU_INST_PATH)\\bin" 
export WIN32_AS_INSTALL_PATH := "C:\BrAutomation\AS48"

.suffixes:

ProjectMakeFile:

	@'$(AS_BIN_PATH)/BR.AS.AnalyseProject.exe' '$(AS_PROJECT_PATH)/NAINV104C00R8L515F00.apj' -t '$(AS_TEMP_PATH)' -c '$(AS_CONFIGURATION)' -o '$(AS_BINARIES_PATH)'   -sfas -buildMode 'BuildAndTransfer'   

