#region Local Var
	struct<4> ScriptParam_0 = { 0, 0, 0, 0 } ;
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
		
		case 0:
		case 1:
			if (ScriptParam_0.f_1 == -1931845307)
			{
				func_2(1, 0, -1705870862, 25, 1, "PM_PANE_AUD", 0, 0);
				func_2(1, 1, -1705870862, 50, 1, "PM_PANE_DIS", 0, 0);
				func_1(1);
			}
			if (ScriptParam_0.f_1 == -1705871862)
			{
			}
			break;
		
		case 2:
			switch (ScriptParam_0.f_1)
			{
				case -1931845307:
					break;
				
				case -1705871862:
					switch (ScriptParam_0.f_3)
					{
						case 25:
							break;
						
						case 50:
							break;
					}
					break;
			}
			break;
	}
	unk_0x95E4B6F3ED223F5A();
}

void func_1(int iParam0)//Position - 0xBA
{
	if (unk_0x10A688CDD54F82E3("DISPLAY_DATA_SLOT"))
	{
		unk_0x1E1FB49121565EB6(iParam0);
		unk_0xF9FBC2F3F73D94C9();
	}
}

void func_2(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, char* sParam5, int iParam6, int iParam7)//Position - 0xD6
{
	if (unk_0x10A688CDD54F82E3("SET_DATA_SLOT"))
	{
		unk_0x1E1FB49121565EB6(iParam0);
		unk_0x1E1FB49121565EB6(iParam1);
		unk_0x1E1FB49121565EB6(iParam2);
		unk_0x1E1FB49121565EB6(iParam3);
		unk_0x1E1FB49121565EB6(iParam7);
		unk_0x1E1FB49121565EB6(0);
		if (bParam4)
		{
			unk_0x1E1FB49121565EB6(1);
		}
		else
		{
			unk_0x1E1FB49121565EB6(0);
		}
		if (iParam6 == 0)
		{
			func_3(sParam5);
		}
		else
		{
			unk_0xCB30200B8055CA57(sParam5);
		}
		unk_0xF9FBC2F3F73D94C9();
	}
}

void func_3(char* sParam0)//Position - 0x136
{
	unk_0x57016C44F10111F0(sParam0);
	unk_0x64989E60CF560CA1();
}

