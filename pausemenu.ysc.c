#region Local Var
	struct<2> ScriptParam_0 = { 0, 0 } ;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	switch (ScriptParam_0)
	{
		case 3:
			while (true)
			{
				SYSTEM::WAIT(5000);
			}
			break;
		
		case 2:
			if (ScriptParam_0.f_1 == -1029820160)
			{
			}
			break;
		
		case 0:
		case 1:
			if (ScriptParam_0.f_1 == -1931845307)
			{
				func_2(1, 0, -1029819160, 0, 1, "PM_PANE_AUD");
				func_2(1, 1, -1029819160, 1, 0, "PM_PANE_DIS");
				func_1(1);
			}
			if (ScriptParam_0.f_1 == -1029820160)
			{
			}
			break;
	}
	unk_0x95E4B6F3ED223F5A();
}

void func_1(int iParam0)//Position - 0x8A
{
	if (unk_0x10A688CDD54F82E3("DISPLAY_DATA_SLOT"))
	{
		unk_0x1E1FB49121565EB6(iParam0);
		unk_0xF9FBC2F3F73D94C9();
	}
}

void func_2(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, char* sParam5)//Position - 0xA6
{
	if (unk_0x10A688CDD54F82E3("SET_DATA_SLOT"))
	{
		unk_0x1E1FB49121565EB6(iParam0);
		unk_0x1E1FB49121565EB6(iParam1);
		unk_0x1E1FB49121565EB6(iParam2);
		unk_0x1E1FB49121565EB6(iParam3);
		unk_0x1E1FB49121565EB6(0);
		unk_0x1E1FB49121565EB6(0);
		if (bParam4)
		{
			unk_0x1E1FB49121565EB6(1);
		}
		else
		{
			unk_0x1E1FB49121565EB6(0);
		}
		func_3(sParam5);
		unk_0xF9FBC2F3F73D94C9();
	}
}

void func_3(char* sParam0)//Position - 0xF6
{
	unk_0x57016C44F10111F0(sParam0);
	unk_0x64989E60CF560CA1();
}

