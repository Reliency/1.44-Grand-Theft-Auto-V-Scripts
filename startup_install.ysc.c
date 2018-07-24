void __EntryFunction__()//Position - 0x0
{
	unk_0xC1A27D367CCA8C15();
	func_1("main_install", 1424);
}

void func_1(char* sParam0, int iParam1)//Position - 0x15
{
	unk_0x63831D2D5110C305(sParam0);
	while (!unk_0xACE95AD318CE412B(sParam0))
	{
		SYSTEM::WAIT(0);
		unk_0x63831D2D5110C305(sParam0);
	}
	SYSTEM::START_NEW_SCRIPT(sParam0, iParam1);
}

