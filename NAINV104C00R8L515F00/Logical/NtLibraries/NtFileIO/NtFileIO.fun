
FUNCTION_BLOCK fbFileOldDel
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		sDevice : STRING[80]; (*Device name. Points to the name of an existing file device*)
		sPath : STRING[80]; (*Path*)
		sKeyword : STRING[80]; (*Keyword to Search*)
		dtDTNow : DATE_AND_TIME; (*Current Date & Time*)
		udiFileKeepDay : UDINT; (*Day To Keep File*)
	END_VAR
	VAR_OUTPUT
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyFileOldDelInternal; (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK
(**)

FUNCTION_BLOCK fbDirBackUp (*Directory BackUp*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		sUsrDevice : STRING[80]; (*User Directory Device Name*)
		sUsrDirNm : STRING[80]; (*User Directory Name*)
		sBackupDevice : STRING[80]; (*Backup Device Name*)
		sBackupDirNm : STRING[80]; (*Backup Directory Name*)
	END_VAR
	VAR_OUTPUT
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyDirBackUpInternal; (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbDirRestore (*Directory Restore*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		sUsrDevice : STRING[80]; (*User Device Name*)
		sUsrDirNm : STRING[80]; (*User Directory Name*)
		sUsrDeviceTemp : STRING[80]; (*Temp User Device Name*)
		sUsrDirNmTemp : STRING[80]; (*Temp User Directory Name*)
		sBackupDevice : STRING[80]; (*Backup Device Name*)
		sBackupDirNm : STRING[80]; (*Backup Directory Name*)
	END_VAR
	VAR_OUTPUT
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyDirRestoreInternal; (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbLFFileBackUp (*Recipe Back Up To Leader Machine*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		sLeaderIPAddr : STRING[15]; (*Leader IP Address*)
		sFTPUsrNm : STRING[15]; (*FTP User Name*)
		sFTPPw : STRING[15]; (*FTP Password*)
		sLeaderFilePath : STRING[80]; (*File Path With File Name*)
		sFollowerIPAddr : STRING[15]; (*Follower IP Address*)
		p_Dest : UDINT; (*Target address where the data is to be copied to. / pointer to the write buffer*)
		udiLen : UDINT; (*Length of the data to be read / write.*)
	END_VAR
	VAR_OUTPUT
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyLFFileBackUpInternal; (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbLFFileRestore (*Recipe Restore From Leader Machine*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		sFollowerDevice : STRING[80]; (*Device name. The name of an existing file device (e.g. "HD0") that was created with AS or the DevLink function block.*)
		sFollowerFile : STRING[80]; (*Filename. The filename is made up of the path and filename (e.g. "dir1\file1.txt"). The path specification refers to the file device.*)
		sLeaderIPAddr : STRING[15]; (*Leader IP Address*)
		sFTPUsrNm : STRING[15]; (*FTP User Name*)
		sFTPPw : STRING[15]; (*FTP Password*)
		sLeaderFilePath : STRING[80]; (*File Path With File Name*)
		sFollowerIPAddr : STRING[15]; (*Follower IP Address*)
		p_Dest : UDINT; (*Target address where the data is to be copied to. / pointer to the write buffer*)
		udiLen : UDINT; (*Length of the data to be read / write.*)
	END_VAR
	VAR_OUTPUT
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyLFFileRestoreInternal; (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbLFFileSync (*Follower File Synchronize With Leader Machine*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		sFollowerDevice : STRING[80]; (*Device name. The name of an existing file device (e.g. "HD0") that was created with AS or the DevLink function block.*)
		sFollowerFile : STRING[80]; (*Filename. The filename is made up of the path and filename (e.g. "dir1\file1.txt"). The path specification refers to the file device.*)
		sLeaderIPAddr : STRING[15]; (*Leader IP Address*)
		sFTPUsrNm : STRING[15]; (*FTP User Name*)
		sFTPPw : STRING[15]; (*FTP Password*)
		sLeaderFilePath : STRING[80]; (*File Path With File Name*)
		sFollowerIPAddr : STRING[15]; (*Follower IP Address*)
		p_LeaderRcpDest : UDINT; (*Target address where the data is to be copied to. / pointer to the write buffer*)
		p_FollowerRcpDest : UDINT; (*Target address where the data is to be copied to. / pointer to the write buffer*)
		udiFullLen : UDINT; (*Length of the data to be read / write for all recipe*)
		udiSingleLen : UDINT; (*Length of the data to be read / write for single recipe*)
		p_FirstNmDest : UDINT; (*First Product Name Position For Compare And Update Purpose*)
		udiNmLen : UDINT; (*Length Of The Product Name Data*)
		p_FirstDTDest : UDINT; (*First Date And Time Position For Compare And Update Purpose*)
		udiDTLen : UDINT; (*Length Of The Date And Time Data*)
		udiAllRecipeNo : UDINT; (*Total Recipe Number*)
	END_VAR
	VAR_OUTPUT
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyLFFileSyncInternal; (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION fSyncFile : BOOL (*Synchronize File*)
	VAR_INPUT
		p_Dest : UDINT; (*Pointer To Destination. Data To Compare With*)
		p_Src : UDINT; (*Pointer To Source. End Result Will Update Here*)
		udiSingleLen : UDINT; (*Length of the data to be read / write for single recipe*)
		p_FirstNmDest : UDINT; (*First Product Name Position For Compare And Update Purpose*)
		udiNmLen : UDINT; (*Length Of The Product Name Data*)
		p_FirstDTDest : UDINT; (*Target Address First Date And Time Position For Compare And Update Purpose*)
		udiDTLen : UDINT; (*Length Of The Date And Time Data*)
		udiAllRecipeNo : UDINT; (*Total Recipe Number*)
	END_VAR
	VAR
		tyInternal : tySyncFileInternal; (*Local Variables*)
	END_VAR
END_FUNCTION

FUNCTION fFollowerPathInLeader : BOOL (*Generate Follower Folder Path In Leader*)
	VAR_INPUT
		p_sPath : REFERENCE TO STRING[80]; (*File Path With File Name*)
		sLeaderFilePath : STRING[80]; (*File Path With File Name*)
		sFollowerIPAddr : STRING[15]; (*Follower IP Address*)
	END_VAR
	VAR
		tyInternal : tyFollowerPathInternal; (*Local Variables*)
	END_VAR
END_FUNCTION
(**)

FUNCTION_BLOCK fbFileFullAppendEncry (*File Full Append With Encryption*) (*$GROUP=Nutek,$CAT=NtTemplate,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		sDevice : STRING[80]; (*Device name. The name of an existing file device (e.g. "HD0") that was created with AS or the DevLink function block.*)
		sFile : STRING[80]; (*Filename. The filename is made up of the path and filename (e.g. "dir1\file1.txt"). The path specification refers to the file device.*)
		p_Src : UDINT; (*Target address where the data is to be copied to. / pointer to the write buffer*)
		udiLen : UDINT; (*Length of the data to be read / write.*)
		usiEncryptCode : USINT; (*Encryption Code*)
	END_VAR
	VAR_OUTPUT
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyFileFullAppendEncryInternal; (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbFileFullWriteEncry (*File Full Write With Encryption*) (*$GROUP=Nutek,$CAT=NtTemplate,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		sDevice : STRING[80]; (*Device name. The name of an existing file device (e.g. "HD0") that was created with AS or the DevLink function block.*)
		sFile : STRING[80]; (*Filename. The filename is made up of the path and filename (e.g. "dir1\file1.txt"). The path specification refers to the file device.*)
		udiOffset : UDINT; (*Offset in the file from where the data is read.*)
		p_Src : UDINT; (*Target address where the data is to be copied to. / pointer to the write buffer*)
		udiLen : UDINT; (*Length of the data to be read / write.*)
		udiOption : UDINT;
		usiEncryptCode : USINT; (*Encryption Code*)
	END_VAR
	VAR_OUTPUT
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyFileFullWriteEncryInternal; (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbFileFullReadEncry (*File Full Read With Encryption*) (*$GROUP=Nutek,$CAT=NtTemplate,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		sDevice : STRING[80]; (*Device name. The name of an existing file device (e.g. "HD0") that was created with AS or the DevLink function block.*)
		sFile : STRING[80]; (*Filename. The filename is made up of the path and filename (e.g. "dir1\file1.txt"). The path specification refers to the file device.*)
		udiOffset : UDINT; (*Offset in the file from where the data is read.*)
		p_Dest : UDINT; (*Pointer To The Read Buffer*)
		udiLen : UDINT; (*Length of the data to be read / write.*)
		usiEncryptCode : USINT; (*Encryption Code*)
	END_VAR
	VAR_OUTPUT
		udiBytesRead : UDINT; (*Output - Number of actually read bytes.*)
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyFileFullReadEncryInternal; (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION fEncryptionCurrAdr : BOOL (*Data Encryption To Current Address*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		p_Adr : UDINT; (*Pointer To Data To Encrypt*)
		udiLen : UDINT; (*Length*)
		usiCode : USINT; (*Encryption Code*)
	END_VAR
	VAR
		tyInternal : tyEncryptionInternal; (*Local Variables*)
	END_VAR
END_FUNCTION

FUNCTION fEncryption2ndAdr : BOOL (*Data Encryption To Another Address*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		p_Src : UDINT; (*Pointer To Source*)
		p_Dest : UDINT; (*Pointer To Destination*)
		udiLen : UDINT; (*Length*)
		usiCode : USINT; (*Encryption Code*)
	END_VAR
	VAR
		tyInternal : tyEncryptionInternal; (*Local Variables*)
	END_VAR
END_FUNCTION
(**)

FUNCTION_BLOCK fbFileFullAppend (*File Full Append*) (*$GROUP=Nutek,$CAT=NtTemplate,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		sDevice : STRING[80]; (*Device name. The name of an existing file device (e.g. "HD0") that was created with AS or the DevLink function block.*)
		sFile : STRING[80]; (*Filename. The filename is made up of the path and filename (e.g. "dir1\file1.txt"). The path specification refers to the file device.*)
		p_Src : UDINT; (*Target address where the data is to be copied to. / pointer to the write buffer*)
		udiLen : UDINT; (*Length of the data to be read / write.*)
	END_VAR
	VAR_OUTPUT
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyFileFullAppendInternal; (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbFileFullWrite (*File Full Write*) (*$GROUP=Nutek,$CAT=NtTemplate,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		sDevice : STRING[80]; (*Device name. The name of an existing file device (e.g. "HD0") that was created with AS or the DevLink function block.*)
		sFile : STRING[80]; (*Filename. The filename is made up of the path and filename (e.g. "dir1\file1.txt"). The path specification refers to the file device.*)
		udiOffset : UDINT; (*Offset in the file from where the data is read.*)
		p_Src : UDINT; (*Target address where the data is to be copied to. / pointer to the write buffer*)
		udiLen : UDINT; (*Length of the data to be read / write.*)
		udiOption : UDINT;
	END_VAR
	VAR_OUTPUT
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyFileFullWriteInternal; (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbFileFullRead (*File Full Read*) (*$GROUP=Nutek,$CAT=NtTemplate,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		sDevice : STRING[80]; (*Device name. The name of an existing file device (e.g. "HD0") that was created with AS or the DevLink function block.*)
		sFile : STRING[80]; (*Filename. The filename is made up of the path and filename (e.g. "dir1\file1.txt"). The path specification refers to the file device.*)
		udiOffset : UDINT; (*Offset in the file from where the data is read.*)
		p_Dest : UDINT; (*Pointer To The Read Buffer*)
		udiLen : UDINT; (*Length of the data to be read / write.*)
	END_VAR
	VAR_OUTPUT
		udiBytesRead : UDINT; (*Output - Number of actually read bytes.*)
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyFileFullReadInternal; (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbDirCopyFrmFTP (*Directory Copy From FTP To Local*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		sSrcDirName : STRING[80]; (*Pointer to the source directory string*)
		sDestDevice : STRING[80]; (*Pointer to the device name. Points to the name of a destination file device. If device name is 'FTP', then must fill in FTP parameters and sDestDevice must not be 'FTP'*)
		sDestDirName : STRING[80]; (*Pointer to the destination directory string*)
		sFTPIPAdd : STRING[15]; (*FTP IP Address*)
		sFTPUsrNm : STRING[15]; (*FTP User Name*)
		sFTPPw : STRING[15]; (*FTP Password*)
	END_VAR
	VAR_OUTPUT
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyDirCopyFTPInternal; (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbDirCopyToFTP (*Directory Copy From Local To FTP*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		sSrcDevice : STRING[80]; (*Pointer to the device name. Points to the name of a source  file device. If device name is 'FTP', then must fill in FTP parameters and sDestDevice must not be 'FTP'*)
		sSrcDirName : STRING[80]; (*Pointer to the source directory string*)
		sDestDirName : STRING[80]; (*Pointer to the destination directory string*)
		sFTPIPAdd : STRING[15]; (*FTP IP Address*)
		sFTPUsrNm : STRING[15]; (*FTP User Name*)
		sFTPPw : STRING[15]; (*FTP Password*)
	END_VAR
	VAR_OUTPUT
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyDirCopyFTPInternal; (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK
(**)

FUNCTION_BLOCK fbDirRead (*Directory Read*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		sDevice : STRING[80]; (*Device Name*)
		sPath : STRING[80]; (*Directory Path*)
		udiEntry : UDINT; (*Entry*)
		usiOption : USINT; (*Option*)
	END_VAR
	VAR_OUTPUT
		tyDirReadData : fiDIR_READ_DATA; (*Directory Read Data*)
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyDirReadInternal; (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbDirInfo (*Directory Info*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		sDevice : STRING[80]; (*Device Name*)
		sPath : STRING[80]; (*Directory Path*)
	END_VAR
	VAR_OUTPUT
		udiSubDirNum : UDINT; (*Sub Directory Number*)
		udiFileNum : UDINT; (*File Number*)
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyDirInfoInternal; (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbDirCopy (*Directory Copy*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		sSrcDevice : STRING[80]; (*Pointer to the device name. Points to the name of a source  file device. If device name is 'FTP', then must fill in FTP parameters and sDestDevice must not be 'FTP'*)
		sSrcDirName : STRING[80]; (*Pointer to the source directory string*)
		sDestDevice : STRING[80]; (*Pointer to the device name. Points to the name of a destination file device. If device name is 'FTP', then must fill in FTP parameters and sDestDevice must not be 'FTP'*)
		sDestDirName : STRING[80]; (*Pointer to the destination directory string*)
	END_VAR
	VAR_OUTPUT
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyDirCopyInternal; (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbDirCreate (*Directory Create*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		sDevice : STRING[80]; (*Device name.The name of an existing file device.*)
		sDirName : STRING[80]; (*Directory string*)
	END_VAR
	VAR_OUTPUT
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyDirCreateInternal; (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbDirDelete (*Directory Delete*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		sDevice : STRING[80]; (*Device name.The name of an existing file device.*)
		sDirName : STRING[80]; (*Directory string*)
	END_VAR
	VAR_OUTPUT
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyDirDeleteInternal; (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbFileClose (*File Close*) (*$GROUP=Nutek,$CAT=NtTemplate,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		udiIdent : UDINT; (*Ident*)
	END_VAR
	VAR_OUTPUT
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyFileCloseInternal; (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbFileDelete (*File Delete*) (*$GROUP=Nutek,$CAT=NtTemplate,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		sDevice : STRING[80]; (*Device name. The name of an existing file device (e.g. "HD0") that was created with AS or the DevLink function block.*)
		sFile : STRING[80]; (*Filename. The filename is made up of the path and filename (e.g. "dir1\file1.txt"). The path specification refers to the file device.*)
	END_VAR
	VAR_OUTPUT
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyFileDeleteInternal; (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbFileInfo (*File Info*) (*$GROUP=Nutek,$CAT=NtTemplate,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		sDevice : STRING[80]; (*Device name. The name of an existing file device (e.g. "HD0") that was created with AS or the DevLink function block.*)
		sFile : STRING[80]; (*Filename. The filename is made up of the path and filename (e.g. "dir1\file1.txt"). The path specification refers to the file device.*)
	END_VAR
	VAR_OUTPUT
		tyFileInfo : fiFILE_INFO; (*File Information*)
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyFileInfoInternal; (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbFileWrite (*File Write*) (*$GROUP=Nutek,$CAT=NtTemplate,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		udiIdent : UDINT; (*Ident*)
		udiOffset : UDINT; (*Offset in the file from where the data is read.*)
		p_Src : UDINT; (*Target address where the data is to be copied to. / pointer to the write buffer*)
		udiLen : UDINT; (*Length of the data to be read / write.*)
		udiOption : UDINT; (*File Write Option*)
	END_VAR
	VAR_OUTPUT
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyFileWriteInternal; (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbFileRead (*File Read*) (*$GROUP=Nutek,$CAT=NtTemplate,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		udiIdent : UDINT; (*Ident*)
		udiOffset : UDINT; (*Offset in the file from where the data is read.*)
		p_Dest : UDINT; (*Pointer To The Read Buffer*)
		udiLen : UDINT; (*Length of the data to be read / write.*)
	END_VAR
	VAR_OUTPUT
		udiBytesRead : UDINT; (*Output - Number of actually read bytes.*)
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyFileReadInternal; (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbFileOpenCreate (*File Open Or Create*) (*$GROUP=Nutek,$CAT=NtTemplate,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		sDevice : STRING[80]; (*Device name. The name of an existing file device (e.g. "HD0") that was created with AS or the DevLink function block.*)
		sFile : STRING[80]; (*Filename. The filename is made up of the path and filename (e.g. "dir1\file1.txt"). The path specification refers to the file device.*)
		usiMode : USINT; (*File Open Mode (Read Only, Write Only, Read & Write)*)
	END_VAR
	VAR_OUTPUT
		udiIdent : UDINT; (*Ident*)
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyFileOpenCreateInternal; (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbFileOpen (*File Open*) (*$GROUP=Nutek,$CAT=NtTemplate,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		sDevice : STRING[80]; (*Device name. The name of an existing file device (e.g. "HD0") that was created with AS or the DevLink function block.*)
		sFile : STRING[80]; (*Filename. The filename is made up of the path and filename (e.g. "dir1\file1.txt"). The path specification refers to the file device.*)
		usiMode : USINT; (*File Open Mode (Read Only, Write Only, Read & Write)*)
	END_VAR
	VAR_OUTPUT
		udiIdent : UDINT; (*Ident*)
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyFileOpenInternal; (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbDevUnlink (*Device Unlink*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		udiHandle : UDINT; (*Handle*)
	END_VAR
	VAR_OUTPUT
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyDevUnlinkInternal; (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK fbDevLinkFTP (*Device Link For FTP*)
	VAR_INPUT
		bEn : BOOL; (*Enable*)
		sDevice : STRING[80]; (*Device Name To Link*)
		sFTPIPAdd : STRING[15]; (*FTP IP Address*)
		sFTPUsrNm : STRING[15]; (*FTP User Name*)
		sFTPPw : STRING[15]; (*FTP Password*)
	END_VAR
	VAR_OUTPUT
		udiHandle : UDINT; (*Handle*)
		udiStatus : UDINT; (*Ready = 65534 , Busy = 65535 , Done = 0 , Other = Error ID*)
	END_VAR
	VAR
		tyInternal : tyDevLinkFTPInternal; (*Local Variables*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION fFTPDevlinkParam : BOOL (*Build Devlink Parameter For FTP*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		p_sParam : REFERENCE TO STRING[80]; (*Pointer to the device parameter string*)
		sIPAddr : STRING[15]; (*IP Address*)
		sUsrNm : STRING[15]; (*FTP User Name*)
		sPw : STRING[15]; (*FTP Password*)
	END_VAR
	VAR
		tyInternal : tyFTPDevlinkParamInternal; (*Local Variables*)
	END_VAR
END_FUNCTION

FUNCTION fLocalDevlinkParam : BOOL (*Build Devlink Parameter For Local File*) (*$GROUP=Nutek,$CAT=User,$GROUPICON=Icon_Nutek.png,$CATICON=User.png*)
	VAR_INPUT
		p_sParam : REFERENCE TO STRING[80]; (*Pointer to the device parameter string*)
		sPath : STRING[80]; (*Local File Path*)
	END_VAR
	VAR
		tyInternal : tyLocalDevlinkParamInternal; (*Local Variables*)
	END_VAR
END_FUNCTION
