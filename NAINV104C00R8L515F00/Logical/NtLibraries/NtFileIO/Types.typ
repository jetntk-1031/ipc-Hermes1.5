
TYPE
	tyFileOldDelInternal : 	STRUCT  (*Local Variables*)
		fbDirInfo : fbDirInfo; (*Get Directory Info*)
		fbDirRead : fbDirRead; (*Read Directory*)
		fbFileDel : fbFileDelete; (*Delete File*)
		sFileNm : STRING[260]; (*File Name*)
		tyfiDIR_READ_DATA : fiDIR_READ_DATA; (*Directory Read Data*)
		udiDTNow : UDINT; (*Date & Time Now*)
		udiFileDT : UDINT; (*Date & Time of File*)
		udiFileKeep : UDINT; (*Days of File Keep*)
		udiFileNum : UDINT; (*File Number In Directory*)
		udiKeywordLen : UDINT; (*Length of Keyword*)
		usiStep : USINT;
	END_STRUCT;
	tyDirBackUpInternal : 	STRUCT  (*Local Variables*)
		fbDirDelete : fbDirDelete; (*Delete Directory*)
		fbDirCopy : fbDirCopy; (*Copy Directory*)
		usiStep : USINT;
	END_STRUCT;
	tyDirRestoreInternal : 	STRUCT  (*Local Variables*)
		fbDirDelete : fbDirDelete; (*Delete Directory*)
		fbDirCopy : fbDirCopy; (*Copy Directory*)
		usiStep : USINT;
	END_STRUCT;
	tyLFFileBackUpInternal : 	STRUCT  (*Local Variables*)
		fbDevLinkFTP : fbDevLinkFTP; (*Device Link*)
		fbDevUnlink : fbDevUnlink; (*Device Unlink*)
		fbFileWrite : fbFileFullWrite; (*File Read & Write*)
		sFile : STRING[80]; (*File Name*)
		udiHandle : UDINT; (*Handle ID*)
		usiStep : USINT;
	END_STRUCT;
	tyLFFileRestoreInternal : 	STRUCT  (*Local Variables*)
		fbDevLinkFTP : fbDevLinkFTP; (*Device Link*)
		fbDevUnlink : fbDevUnlink; (*Device Unlink*)
		fbFileRead : fbFileFullRead; (*File Read*)
		fbFileWrite : fbFileFullWrite; (*File Write*)
		sFile : STRING[80]; (*File Name*)
		udiHandle : UDINT; (*Handle ID*)
		usiStep : USINT;
	END_STRUCT;
	tyLFFileSyncInternal : 	STRUCT  (*Local Variables*)
		fbDevLinkFTP : fbDevLinkFTP; (*Device Link*)
		fbDevUnlink : fbDevUnlink; (*Device Unlink*)
		fbFileReadL : fbFileFullRead; (*File Read Leader*)
		fbFileWriteF : fbFileFullWrite; (*File Write Follower*)
		fbFileWriteL : fbFileFullWrite; (*File Write Leader*)
		sFile : STRING[80]; (*File Name*)
		udiHandle : UDINT; (*Handle ID*)
		usiStep : USINT;
	END_STRUCT;
	tySyncFileInternal : 	STRUCT  (*Local Variables*)
		i : UDINT;
		j : UDINT;
		udiDestDTOffset : UDINT; (*Destination Date & Time Offset*)
		udiDestNmOffset : UDINT; (*Destination Name Offset*)
		bNmExist : BOOL;
	END_STRUCT;
	tyFollowerPathInternal : 	STRUCT  (*Local Variables*)
		a_iIPPart : ARRAY[1..4]OF INT; (*IP Address Part*)
		sLastIPPart : STRING[3]; (*Last IP Address Part*)
	END_STRUCT;
	tyFileFullAppendEncryInternal : 	STRUCT  (*Local Variables*)
		fbFileAppend : fbFileFullAppend;
		fbMemCreate : fbMemCreate;
		fbMemDestroy : fbMemDestroy;
		p_Dest : UDINT;
		udiIdent : UDINT; (*Ident*)
		usiStep : USINT;
	END_STRUCT;
	tyFileFullWriteEncryInternal : 	STRUCT  (*Local Variables*)
		fbFileWrite : fbFileFullWrite;
		fbMemCreate : fbMemCreate;
		fbMemDestroy : fbMemDestroy;
		p_Dest : UDINT;
		udiIdent : UDINT; (*Ident*)
		usiStep : USINT;
	END_STRUCT;
	tyFileFullReadEncryInternal : 	STRUCT  (*Local Variables*)
		fbFileRead : fbFileFullRead;
		fbMemCreate : fbMemCreate;
		fbMemDestroy : fbMemDestroy;
		p_Dest : UDINT;
		udiIdent : UDINT; (*Ident*)
		usiStep : USINT;
	END_STRUCT;
	tyFileFullAppendInternal : 	STRUCT  (*Local Variables*)
		fbFileClose : fbFileClose; (*Close File*)
		fbFileOpenCreate : fbFileOpenCreate; (*Create File*)
		fbFileInfo : fbFileInfo; (*Read File Info*)
		fbFileWrite : fbFileWrite; (*Write to File*)
		tyFileInfo : fiFILE_INFO; (*File Info Data*)
		udiIdent : UDINT; (*Ident*)
		usiStep : USINT;
	END_STRUCT;
	tyFileFullWriteInternal : 	STRUCT  (*Local Variables*)
		fbFileClose : fbFileClose; (*Close File*)
		fbFileOpenCreate : fbFileOpenCreate; (*Open Or Create File*)
		fbFileWrite : fbFileWrite; (*Write to File*)
		udiIdent : UDINT; (*Ident*)
		usiStep : USINT;
	END_STRUCT;
	tyFileFullReadInternal : 	STRUCT  (*Local Variables*)
		fbFileClose : fbFileClose; (*Close File*)
		fbFileOpen : fbFileOpen; (*Open File*)
		fbFileRead : fbFileRead; (*Read From File*)
		udiIdent : UDINT; (*Ident*)
		usiStep : USINT;
	END_STRUCT;
	tyDirCopyFTPInternal : 	STRUCT  (*Local Variables*)
		usiStep : USINT;
		fbDirCopy : fbDirCopy;
		fbDevLinkFTP : fbDevLinkFTP;
		fbDevUnlink : fbDevUnlink;
		udiHandle : UDINT;
	END_STRUCT;
	tyDirReadInternal : 	STRUCT  (*Local Variables*)
		fbDirRead : DirRead; (*Directory Read*)
	END_STRUCT;
	tyDirInfoInternal : 	STRUCT  (*Local Variables*)
		fbDirInfo : DirInfo; (*Directory Info*)
	END_STRUCT;
	tyDirCopyInternal : 	STRUCT  (*Local Variables*)
		fbDirCopy : DirCopy; (*Copy Directory*)
	END_STRUCT;
	tyDirCreateInternal : 	STRUCT  (*Local Variables*)
		fbDirCreate : DirCreate; (*Create Directory*)
	END_STRUCT;
	tyDirDeleteInternal : 	STRUCT  (*Local Variables*)
		fbDirDeleteEx : DirDeleteEx; (*Delete Directory*)
	END_STRUCT;
	tyFileCloseInternal : 	STRUCT  (*Local Variables*)
		fbFileClose : FileClose; (*Close File*)
	END_STRUCT;
	tyFileDeleteInternal : 	STRUCT  (*Local Variables*)
		fbFileDelete : FileDelete;
	END_STRUCT;
	tyFileInfoInternal : 	STRUCT  (*Local Variables*)
		fbFileInfo : FileInfo; (*Read File Info*)
	END_STRUCT;
	tyFileWriteInternal : 	STRUCT  (*Local Variables*)
		fbFileWrite : FileWriteEx; (*Write to File*)
	END_STRUCT;
	tyFileReadInternal : 	STRUCT  (*Local Variables*)
		fbFileRead : FileReadEx; (*Read From File*)
	END_STRUCT;
	tyFileOpenCreateInternal : 	STRUCT  (*Local Variables*)
		fbFileCreate : FileCreate; (*Create File*)
		fbFileOpen : FileOpen; (*Open File*)
		usiStep : USINT;
	END_STRUCT;
	tyFileOpenInternal : 	STRUCT  (*Local Variables*)
		fbFileOpen : FileOpen; (*Open File*)
	END_STRUCT;
	tyDevUnlinkInternal : 	STRUCT  (*Local Variables*)
		fbDevUnlink : DevUnlink;
	END_STRUCT;
	tyDevLinkFTPInternal : 	STRUCT  (*Local Variables*)
		fbDevLink : DevLink;
		sParam : STRING[80];
	END_STRUCT;
	tyEncryptionInternal : 	STRUCT  (*Local Variables*)
		usiTemp : USINT;
		udi : UDINT;
	END_STRUCT;
	tyLocalDevlinkParamInternal : 	STRUCT  (*Local Variables*)
		i : INT; (*Loop Index*)
		j : INT; (*Loop Index*)
		iTemp : INT;
		a_iPos : ARRAY[0..9]OF INT;
		sPath1 : STRING[80];
		sPath2 : STRING[80];
	END_STRUCT;
	tyFTPDevlinkParamInternal : 	STRUCT  (*Local Variables*)
		sIPAddr : STRING[80]; (*IP Address*)
		sUsrNm : STRING[80]; (*User Name*)
		sPw : STRING[80]; (*Password*)
	END_STRUCT;
END_TYPE
