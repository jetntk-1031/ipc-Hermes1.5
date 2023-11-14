
TYPE
	tyMemDestroyInternal : 	STRUCT  (*Local Variables*)
		fbMemPartDestroy : AsMemPartDestroy;
	END_STRUCT;
	tyMemCreateInternal : 	STRUCT  (*Local Variables*)
		fbMemPartAlloc : AsMemPartAlloc;
		fbMemPartCreate : AsMemPartCreate;
		usiStep : USINT;
	END_STRUCT;
END_TYPE
