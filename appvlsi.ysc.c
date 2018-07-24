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
	int iLocal_21 = 0;
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
	iLocal_21 = 0;
	if (iLocal_20 == 0)
	{
		func_10();
		func_9();
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
					if (iLocal_21 == 1)
					{
						if (func_8(2, Global_387E, 0))
						{
							unk_0xC4BA30B532FE260F(-1, "Lester_Laugh_Phone", "DLC_HEIST_HACKING_SNAKE_SOUNDS", 1);
							Global_3887 = 1;
							func_10();
							func_5();
							SYSTEM::SETTIMERA(0);
							SYSTEM::SETTIMERB(0);
						}
					}
					if (iLocal_21 == 2)
					{
						if (SYSTEM::TIMERB() > 499)
						{
							SYSTEM::SETTIMERB(0);
						}
						if (SYSTEM::TIMERA() > 2200)
						{
							iLocal_21 = 3;
						}
					}
					if (iLocal_21 == 3)
					{
						Global_180415 = 1;
					}
					break;
				
				case 8:
					if (func_8(2, Global_387D, 0))
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

int func_1()//Position - 0x126
{
	if (((Global_389D.f_1 == 1 || Global_389D.f_1 == 3) || Global_389D.f_1 == 0) || Global_3865 == 1)
	{
		Global_3890 = 1;
		return 1;
	}
	return 0;
}

void func_2()//Position - 0x169
{
	unk_0xDA70546257A3ED8B("DLC_MPHEIST/HEIST_HACK_SNAKE");
	unk_0x95E4B6F3ED223F5A();
}

int func_3()//Position - 0x17C
{
	if (Global_B99 == 1 || Global_389D.f_1 < 7)
	{
		Global_3890 = 1;
		return 1;
	}
	return 0;
}

void func_4()//Position - 0x1A5
{
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0xC4BA30B532FE260F(-1, "Menu_Back", &Global_3892, 1);
	}
}

void func_5()//Position - 0x1C6
{
	if (Global_3891)
	{
		func_6(Global_388A, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		func_6(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else
	{
		func_6(Global_388A, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		func_6(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_6(Global_388A, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x7CB6FD92BE491AD9(&Global_93B, 17);
}

void func_6(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x258
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
		func_7(sParam7);
	}
	if (!unk_0xF1734B55490E9045(sParam8))
	{
		func_7(sParam8);
	}
	if (!unk_0xF1734B55490E9045(sParam9))
	{
		func_7(sParam9);
	}
	if (!unk_0xF1734B55490E9045(sParam10))
	{
		func_7(sParam10);
	}
	if (!unk_0xF1734B55490E9045(sParam11))
	{
		func_7(sParam11);
	}
	unk_0xF9FBC2F3F73D94C9();
}

void func_7(char* sParam0)//Position - 0x30B
{
	unk_0x57016C44F10111F0(sParam0);
	unk_0x64989E60CF560CA1();
}

int func_8(int iParam0, int iParam1, int iParam2)//Position - 0x31D
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

void func_9()//Position - 0x38F
{
	if (Global_3891)
	{
		func_6(Global_388A, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		func_6(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else
	{
		func_6(Global_388A, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		func_6(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_6(Global_388A, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x7CB6FD92BE491AD9(&Global_93B, 17);
}

void func_10()//Position - 0x421
{
	if (iLocal_21 == 0)
	{
		unk_0x284F2ACE6839D3C0("DLC_MPHEIST/HEIST_HACK_SNAKE", 0, -1);
		while (unk_0x284F2ACE6839D3C0("DLC_MPHEIST/HEIST_HACK_SNAKE", 0, -1) == 0)
		{
			SYSTEM::WAIT(0);
		}
		func_11(Global_388A, "SET_DATA_SLOT_EMPTY", 23f, -1082130432, -1082130432, -1082130432, -1082130432);
		unk_0x29CD142125FE177B(Global_388A, "SET_DATA_SLOT");
		unk_0x1E1FB49121565EB6(23);
		unk_0x1E1FB49121565EB6(0);
		unk_0x1E1FB49121565EB6(-99);
		unk_0x1E1FB49121565EB6(0);
		unk_0x1E1FB49121565EB6(100);
		unk_0x1E1FB49121565EB6(2);
		unk_0x5E5DBD0A6623969E(false);
		if (unk_0xFA30DFD0084E92FE(Global_93D, 1))
		{
			unk_0xD44E04EBBDC4CE88(0f);
		}
		unk_0xF9FBC2F3F73D94C9();
		func_11(Global_388A, "DISPLAY_VIEW", 23f, SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432);
		iLocal_21 = 1;
	}
	else if (iLocal_21 == 1)
	{
		func_11(Global_388A, "SET_DATA_SLOT_EMPTY", 23f, -1082130432, -1082130432, -1082130432, -1082130432);
		unk_0x29CD142125FE177B(Global_388A, "SET_DATA_SLOT");
		unk_0x1E1FB49121565EB6(23);
		unk_0x1E1FB49121565EB6(0);
		unk_0x1E1FB49121565EB6(-99);
		unk_0x1E1FB49121565EB6(0);
		unk_0x1E1FB49121565EB6(100);
		unk_0x1E1FB49121565EB6(3);
		unk_0x5E5DBD0A6623969E(false);
		if (unk_0xFA30DFD0084E92FE(Global_93D, 1))
		{
			unk_0xD44E04EBBDC4CE88(0f);
		}
		unk_0xF9FBC2F3F73D94C9();
		func_11(Global_388A, "DISPLAY_VIEW", 23f, SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432);
		iLocal_21 = 2;
	}
}

void func_11(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x575
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
	unk_0xF9FBC2F3F73D94C9();
}

