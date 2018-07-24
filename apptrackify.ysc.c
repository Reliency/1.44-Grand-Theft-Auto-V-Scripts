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
	vector3 vLocal_20 = { 0f, 0f, 0f };
	float fLocal_21 = 0f;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	int iLocal_29 = 0;
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
	fLocal_25 = 9.99f;
	fLocal_26 = 0f;
	fLocal_27 = 0f;
	fLocal_28 = 0f;
	unk_0xC1A27D367CCA8C15();
	func_10();
	func_7();
	SYSTEM::SETTIMERA(0);
	SYSTEM::SETTIMERB(0);
	while (true)
	{
		SYSTEM::WAIT(0);
		if (Global_389D.f_1 != 9)
		{
			switch (Global_389D.f_1)
			{
				case 7:
					if (SYSTEM::TIMERA() > 125)
					{
						func_10();
						SYSTEM::SETTIMERA(0);
					}
					if (SYSTEM::TIMERB() > SYSTEM::FLOOR(fLocal_27) * 30 && SYSTEM::TIMERB() > 150)
					{
						unk_0x29CD142125FE177B(Global_388A, "APP_FUNCTION");
						unk_0x1E1FB49121565EB6(1);
						unk_0xF9FBC2F3F73D94C9();
						SYSTEM::SETTIMERB(0);
					}
					if (SYSTEM::TIMERB() > 2000)
					{
						unk_0x29CD142125FE177B(Global_388A, "APP_FUNCTION");
						unk_0x1E1FB49121565EB6(1);
						unk_0xF9FBC2F3F73D94C9();
						SYSTEM::SETTIMERB(0);
					}
					break;
				
				case 8:
					if (func_6(2, Global_387D, 0))
					{
						func_5();
						Global_3887 = 1;
						func_10();
						func_7();
						if (Global_389D.f_1 > 3)
						{
							Global_389D.f_1 = 7;
						}
					}
					break;
				
				default:
					break;
			}
			if (func_4())
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

int func_1()//Position - 0x144
{
	if (((Global_389D.f_1 == 1 || Global_389D.f_1 == 3) || Global_389D.f_1 == 0) || Global_3865 == 1)
	{
		Global_3890 = 1;
		return 1;
	}
	return 0;
}

void func_2()//Position - 0x187
{
	func_3(0, 0);
	func_3(1, 0);
	func_3(2, 0);
	func_3(3, 0);
	func_3(4, 0);
	unk_0x7CB6FD92BE491AD9(&Global_93C, 22);
	unk_0x95E4B6F3ED223F5A();
}

void func_3(int iParam0, int iParam1)//Position - 0x1BA
{
	Global_411E97[iParam0] = iParam1;
}

int func_4()//Position - 0x1CC
{
	if (Global_B99 == 1 || Global_389D.f_1 < 7)
	{
		Global_3890 = 1;
		return 1;
	}
	return 0;
}

void func_5()//Position - 0x1F5
{
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0xC4BA30B532FE260F(-1, "Menu_Back", &Global_3892, 1);
	}
}

int func_6(int iParam0, int iParam1, int iParam2)//Position - 0x216
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

void func_7()//Position - 0x288
{
	if (Global_3891)
	{
		func_8(Global_388A, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		func_8(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else
	{
		func_8(Global_388A, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		func_8(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_8(Global_388A, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x7CB6FD92BE491AD9(&Global_93B, 17);
}

void func_8(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x31A
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

void func_9(char* sParam0)//Position - 0x3CD
{
	unk_0x57016C44F10111F0(sParam0);
	unk_0x64989E60CF560CA1();
}

void func_10()//Position - 0x3DF
{
	int iVar0;
	bool bVar1;
	
	if (func_18() == 0)
	{
		if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			vLocal_20 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) };
			fLocal_21 = unk_0x349C94FFF43E2979(unk_0xBC25C936A095B5BA());
			func_17();
			func_16();
			func_15();
			fLocal_22 = (360f - fLocal_21);
			fLocal_25 = (fLocal_25 - fLocal_22);
			if (fLocal_25 < 0f)
			{
				fLocal_25 = (fLocal_25 + 360f);
			}
			if (iLocal_29 == 0)
			{
				unk_0x29CD142125FE177B(Global_388A, "SET_DATA_SLOT");
				unk_0x1E1FB49121565EB6(23);
				unk_0x1E1FB49121565EB6(0);
				if (unk_0xFA30DFD0084E92FE(Global_93C, 30))
				{
					unk_0x1E1FB49121565EB6(-99);
					unk_0x1E1FB49121565EB6(0);
				}
				else
				{
					unk_0x1E1FB49121565EB6(SYSTEM::FLOOR(fLocal_25));
					unk_0x1E1FB49121565EB6(SYSTEM::FLOOR(fLocal_26));
				}
				unk_0x1E1FB49121565EB6(100);
				if (unk_0xFA30DFD0084E92FE(Global_93C, 22))
				{
					unk_0x1E1FB49121565EB6(1);
				}
				else
				{
					unk_0x1E1FB49121565EB6(0);
				}
				if (unk_0xFA30DFD0084E92FE(Global_93C, 29))
				{
					unk_0x5E5DBD0A6623969E(false);
				}
				else
				{
					unk_0x5E5DBD0A6623969E(true);
				}
				if (unk_0xFA30DFD0084E92FE(Global_93D, 1))
				{
					unk_0xD44E04EBBDC4CE88(fLocal_28);
				}
				unk_0xF9FBC2F3F73D94C9();
			}
			if (fLocal_21 == fLocal_21)
			{
			}
			func_14(Global_388A, "DISPLAY_VIEW", 23f, SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432);
		}
	}
	else if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		vLocal_20 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) };
		fLocal_21 = unk_0x349C94FFF43E2979(unk_0xBC25C936A095B5BA());
		if (Global_411E9D > 5)
		{
		}
		iVar0 = 0;
		while (iVar0 < Global_411E9D)
		{
			func_13(iVar0);
			func_12(iVar0);
			func_11(iVar0);
			fLocal_22 = (360f - fLocal_21);
			fLocal_25 = (fLocal_25 - fLocal_22);
			if (fLocal_25 < 0f)
			{
				fLocal_25 = (fLocal_25 + 360f);
			}
			if (iLocal_29 == 0)
			{
				unk_0x29CD142125FE177B(Global_388A, "SET_DATA_SLOT");
				unk_0x1E1FB49121565EB6(23);
				unk_0x1E1FB49121565EB6(iVar0);
				bVar1 = false;
				switch (iVar0)
				{
					case 0:
						if (unk_0xFA30DFD0084E92FE(Global_411DCA, 5))
						{
							bVar1 = true;
						}
						break;
					
					case 1:
						if (unk_0xFA30DFD0084E92FE(Global_411DCA, 6))
						{
							bVar1 = true;
						}
						break;
					
					case 2:
						if (unk_0xFA30DFD0084E92FE(Global_411DCA, 7))
						{
							bVar1 = true;
						}
						break;
					
					case 3:
						if (unk_0xFA30DFD0084E92FE(Global_411DCA, 8))
						{
							bVar1 = true;
						}
						break;
				}
				if (bVar1)
				{
					unk_0x1E1FB49121565EB6(-99);
					unk_0x1E1FB49121565EB6(0);
				}
				else
				{
					unk_0x1E1FB49121565EB6(SYSTEM::FLOOR(fLocal_25));
					unk_0x1E1FB49121565EB6(SYSTEM::FLOOR(fLocal_26));
				}
				unk_0x1E1FB49121565EB6(100);
				if (unk_0xFA30DFD0084E92FE(Global_93C, 22))
				{
					unk_0x5E5DBD0A6623969E(true);
				}
				else
				{
					unk_0x5E5DBD0A6623969E(true);
				}
				if (unk_0xFA30DFD0084E92FE(Global_93C, 29))
				{
					unk_0x5E5DBD0A6623969E(false);
				}
				else
				{
					unk_0x5E5DBD0A6623969E(true);
				}
				unk_0xD44E04EBBDC4CE88(fLocal_28);
				unk_0x1E1FB49121565EB6(Global_411E97[iVar0]);
				unk_0xF9FBC2F3F73D94C9();
			}
			if (fLocal_21 == fLocal_21)
			{
			}
			func_14(Global_388A, "DISPLAY_VIEW", 23f, SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432);
			iVar0++;
		}
	}
}

float func_11(int iParam0)//Position - 0x6AB
{
	fLocal_23 = (Global_411E87[iParam0 /*3*/] - vLocal_20.x);
	fLocal_24 = (SYSTEM::COS(((3.14159f / 180f) * vLocal_20.x)) * (Global_411E87[iParam0 /*3*/].f_1 - vLocal_20.y));
	fLocal_25 = unk_0xE8CFCB6B2165523B(fLocal_23, fLocal_24);
	if (fLocal_25 < 0f)
	{
		fLocal_25 = (fLocal_25 + 360f);
	}
	return fLocal_25;
}

float func_12(int iParam0)//Position - 0x701
{
	fLocal_27 = SYSTEM::SQRT(SYSTEM::VDIST2(Global_411E87[iParam0 /*3*/], vLocal_20));
	fLocal_28 = (Global_411E87[iParam0 /*3*/].f_2 - vLocal_20.z);
	return fLocal_27;
}

float func_13(int iParam0)//Position - 0x734
{
	fLocal_26 = SYSTEM::SQRT((((Global_411E87[iParam0 /*3*/] - vLocal_20.x) * (Global_411E87[iParam0 /*3*/] - vLocal_20.x)) + ((Global_411E87[iParam0 /*3*/].f_1 - vLocal_20.y) * (Global_411E87[iParam0 /*3*/].f_1 - vLocal_20.y))));
	return fLocal_26;
}

void func_14(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x77B
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

float func_15()//Position - 0x7DE
{
	fLocal_23 = (Global_420A - vLocal_20.x);
	fLocal_24 = (SYSTEM::COS(((3.14159f / 180f) * vLocal_20.x)) * (Global_420A.f_1 - vLocal_20.y));
	fLocal_25 = unk_0xE8CFCB6B2165523B(fLocal_23, fLocal_24);
	if (fLocal_25 < 0f)
	{
		fLocal_25 = (fLocal_25 + 360f);
	}
	return fLocal_25;
}

float func_16()//Position - 0x82A
{
	fLocal_27 = SYSTEM::SQRT(SYSTEM::VDIST2(Global_420A, vLocal_20));
	fLocal_28 = (Global_420A.f_2 - vLocal_20.z);
	return fLocal_27;
}

float func_17()//Position - 0x853
{
	fLocal_26 = SYSTEM::SQRT((((Global_420A - vLocal_20.x) * (Global_420A - vLocal_20.x)) + ((Global_420A.f_1 - vLocal_20.y) * (Global_420A.f_1 - vLocal_20.y))));
	return fLocal_26;
}

int func_18()//Position - 0x886
{
	if (Global_11542 == 1)
	{
		return 1;
	}
	return 0;
}

