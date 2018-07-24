#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	int iLocal_20 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	unk_0xC1A27D367CCA8C15();
	if (iLocal_20 == 0)
	{
		func_10();
		iLocal_20 = 1;
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (Global_389D.f_1 != 9)
		{
			switch (Global_389D.f_1)
			{
				case 7:
					if (iLocal_20 == 1)
					{
						func_6();
					}
					break;
				
				case 8:
					if (func_5(2, Global_387D, 0))
					{
						func_4();
						Global_3887 = 1;
						if (Global_389D.f_1 > 3)
						{
							Global_389D.f_1 = 7;
						}
					}
					break;
				
				default:
					break;
			}
			if (func_3())
			{
				func_2();
			}
		}
		else
		{
			Global_389F = 6;
			func_2();
		}
		if (func_1())
		{
			func_2();
		}
	}
}

int func_1()//Position - 0xC9
{
	if (((Global_389D.f_1 == 1 || Global_389D.f_1 == 3) || Global_389D.f_1 == 0) || Global_3865 == 1)
	{
		Global_3890 = 1;
		return 1;
	}
	return 0;
}

void func_2()//Position - 0x10C
{
	unk_0x95E4B6F3ED223F5A();
}

int func_3()//Position - 0x118
{
	if (Global_B99 == 1 || Global_389D.f_1 < 7)
	{
		Global_3890 = 1;
		return 1;
	}
	return 0;
}

void func_4()//Position - 0x141
{
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0xC4BA30B532FE260F(-1, "Menu_Back", &Global_3892, 1);
	}
}

int func_5(int iParam0, int iParam1, int iParam2)//Position - 0x161
{
	if (unk_0x694514BD37EC4E94(iParam0, iParam1) || (iParam2 == 1 && unk_0xF7DDAAF0EFDAFA22(iParam0, iParam1)))
	{
		if (unk_0x8ACB0C3FACC09467())
		{
			if (unk_0x0F8865E539C1FCE8() == 0 || (unk_0xF32BA80A2DED1FC6() && unk_0x50465D2C022B9E04(2)))
			{
				return 0;
			}
		}
		if (unk_0xE186ACC7BE9B244E() || unk_0x18158A50125911B6())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_6()//Position - 0x1D3
{
	func_7();
	unk_0xBBC4195AD74D153D(0, 80, 1);
}

void func_7()//Position - 0x1E7
{
	unk_0x29CD142125FE177B(Global_388A, "SET_DATA_SLOT");
	unk_0x1E1FB49121565EB6(27);
	unk_0x1E1FB49121565EB6(0);
	unk_0x1E1FB49121565EB6(Global_411EAA);
	unk_0x1E1FB49121565EB6(Global_411EA9);
	func_9("");
	func_9(&Global_411EAB);
	unk_0xF9FBC2F3F73D94C9();
	unk_0x29CD142125FE177B(Global_388A, "DISPLAY_VIEW");
	unk_0x1E1FB49121565EB6(27);
	unk_0xF9FBC2F3F73D94C9();
	if (!unk_0xFA30DFD0084E92FE(Global_440000.f_15, 30))
	{
		func_8(Global_388A, "SET_SOFT_KEYS", 3f, 0f, 27f, -1f, -1f, 0, 0, 0, 0, 0);
	}
}

void func_8(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x265
{
	unk_0x29CD142125FE177B(iParam0, sParam1);
	unk_0x1E1FB49121565EB6(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x1E1FB49121565EB6(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x1E1FB49121565EB6(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x1E1FB49121565EB6(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x1E1FB49121565EB6(SYSTEM::ROUND(fParam6));
	}
	if (!unk_0xF1734B55490E9045(sParam7))
	{
		func_9(sParam7);
	}
	if (!unk_0xF1734B55490E9045(sParam8))
	{
		func_9(sParam8);
	}
	if (!unk_0xF1734B55490E9045(sParam9))
	{
		func_9(sParam9);
	}
	if (!unk_0xF1734B55490E9045(sParam10))
	{
		func_9(sParam10);
	}
	if (!unk_0xF1734B55490E9045(sParam11))
	{
		func_9(sParam11);
	}
	unk_0xF9FBC2F3F73D94C9();
}

void func_9(char* sParam0)//Position - 0x318
{
	unk_0x57016C44F10111F0(sParam0);
	unk_0x64989E60CF560CA1();
}

void func_10()//Position - 0x32A
{
	func_7();
	func_8(Global_388A, "SET_SOFT_KEYS", 2f, 0f, 27f, -1f, -1f, 0, 0, 0, 0, 0);
}

