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
	struct<26> Local_20 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	int iLocal_26 = 0;
	char cLocal_27[32] = "";
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
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
	iLocal_26 = -99;
	StringCopy(&cLocal_27, "TRACKID", 32);
	unk_0xC1A27D367CCA8C15();
	unk_0x900CF084251DED26(&cLocal_27, 1);
	while (!unk_0xFA9040D29FE330BD(1))
	{
		SYSTEM::WAIT(0);
	}
	func_15();
	func_14();
	func_11();
	SYSTEM::SETTIMERA(0);
	while (true)
	{
		SYSTEM::WAIT(0);
		if (iLocal_33)
		{
			if (iLocal_35 < 101)
			{
				if (SYSTEM::TIMERA() > 30)
				{
					iLocal_35++;
					unk_0x29CD142125FE177B(Global_388A, "SET_DATA_SLOT");
					unk_0x1E1FB49121565EB6(23);
					unk_0x1E1FB49121565EB6(0);
					unk_0x1E1FB49121565EB6(1);
					func_10("CELL_4005");
					unk_0x1E1FB49121565EB6(iLocal_35);
					unk_0xF9FBC2F3F73D94C9();
					func_9(Global_388A, "DISPLAY_VIEW", 23f, SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432);
					SYSTEM::SETTIMERA(0);
				}
			}
			else
			{
				unk_0x29CD142125FE177B(Global_388A, "SET_DATA_SLOT");
				unk_0x1E1FB49121565EB6(23);
				unk_0x1E1FB49121565EB6(0);
				unk_0x1E1FB49121565EB6(2);
				func_10("CELL_4006");
				func_10("CELL_4007");
				unk_0xF9FBC2F3F73D94C9();
				func_9(Global_388A, "DISPLAY_VIEW", 23f, SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432);
				iLocal_34 = 1;
				iLocal_33 = 0;
			}
		}
		if (Global_389D.f_1 != 9)
		{
			switch (Global_389D.f_1)
			{
				case 7:
					func_8();
					if (iLocal_32 == 0)
					{
						func_6();
					}
					break;
				
				case 8:
					if (func_5(2, Global_387D, 0))
					{
						func_4();
						iLocal_33 = 0;
						iLocal_34 = 0;
						Global_3887 = 1;
						func_14();
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

int func_1()//Position - 0x1C6
{
	if (((Global_389D.f_1 == 1 || Global_389D.f_1 == 3) || Global_389D.f_1 == 0) || Global_3865 == 1)
	{
		Global_3890 = 1;
		return 1;
	}
	return 0;
}

void func_2()//Position - 0x209
{
	iLocal_33 = 0;
	unk_0x95E4B6F3ED223F5A();
}

int func_3()//Position - 0x218
{
	if (Global_B99 == 1 || Global_389D.f_1 < 7)
	{
		Global_3890 = 1;
		return 1;
	}
	return 0;
}

void func_4()//Position - 0x241
{
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0xC4BA30B532FE260F(-1, "Menu_Back", &Global_3892, 1);
	}
}

int func_5(int iParam0, int iParam1, int iParam2)//Position - 0x262
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

void func_6()//Position - 0x2D4
{
	if (SYSTEM::TIMERA() > 2200)
	{
		if (Global_3891)
		{
			func_7(Global_388A, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		}
		else
		{
			func_7(Global_388A, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		iLocal_32 = 1;
	}
}

void func_7(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x324
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
		func_10(sParam7);
	}
	if (!unk_0xF1734B55490E9045(sParam8))
	{
		func_10(sParam8);
	}
	if (!unk_0xF1734B55490E9045(sParam9))
	{
		func_10(sParam9);
	}
	if (!unk_0xF1734B55490E9045(sParam10))
	{
		func_10(sParam10);
	}
	if (!unk_0xF1734B55490E9045(sParam11))
	{
		func_10(sParam11);
	}
	unk_0xF9FBC2F3F73D94C9();
}

void func_8()//Position - 0x3D7
{
	if (Global_3887 == 0)
	{
		if (func_5(2, Global_387E, 0))
		{
			if ((iLocal_32 && iLocal_34 == 0) && iLocal_33 == 0)
			{
				iLocal_35 = 0;
				unk_0x29CD142125FE177B(Global_388A, "SET_DATA_SLOT");
				unk_0x1E1FB49121565EB6(23);
				unk_0x1E1FB49121565EB6(0);
				unk_0x1E1FB49121565EB6(1);
				func_10("CELL_4005");
				unk_0x1E1FB49121565EB6(iLocal_35);
				unk_0xF9FBC2F3F73D94C9();
				func_9(Global_388A, "DISPLAY_VIEW", 23f, SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432);
				if (Global_3891)
				{
					func_7(Global_388A, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					func_7(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
				}
				else
				{
					func_7(Global_388A, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
					func_7(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				func_7(Global_388A, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x7CB6FD92BE491AD9(&Global_93B, 17);
				iLocal_33 = 1;
				SYSTEM::SETTIMERA(0);
			}
		}
	}
}

void func_9(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x4ED
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

void func_10(char* sParam0)//Position - 0x550
{
	unk_0x57016C44F10111F0(sParam0);
	unk_0x64989E60CF560CA1();
}

void func_11()//Position - 0x562
{
	int iVar0;
	
	func_13(134, 1);
	iVar0 = unk_0x93DD0CE3F3963C56();
	switch (func_12(iVar0))
	{
		case 1:
			func_13(82, 1);
			break;
		
		case 2:
			func_13(81, 1);
			break;
		
		default:
			func_13(83, 1);
			break;
	}
}

int func_12(int iParam0)//Position - 0x5AC
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
			return 3;
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
			return 4;
			break;
		
		case 9:
		case 10:
		case 11:
		case 12:
			return 1;
			break;
		
		case 13:
		case 14:
		case 15:
		case 16:
			return 2;
			break;
	}
	return 0;
}

void func_13(int iParam0, int iParam1)//Position - 0x638
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_C9FD[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x7AF0088ABFA713B6())
	{
		return;
	}
	if (Global_C9FD[iParam0 /*7*/])
	{
		unk_0x6CB99B97664C3727(Global_C9FD[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x3A57956BCE003880(Global_C9FD[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_14()//Position - 0x695
{
	unk_0x29CD142125FE177B(Global_388A, "SET_DATA_SLOT");
	unk_0x1E1FB49121565EB6(23);
	unk_0x1E1FB49121565EB6(0);
	unk_0x1E1FB49121565EB6(0);
	func_10("CELL_4001");
	func_10(&Local_20);
	func_10(&(Local_20.f_10));
	func_10("CELL_4002");
	unk_0x1E1FB49121565EB6(Local_20.f_18);
	func_10("CELL_4003");
	func_10(&(Local_20.f_19));
	func_10("CELL_4004");
	unk_0xF9FBC2F3F73D94C9();
	func_9(Global_388A, "DISPLAY_VIEW", 23f, SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432);
	if (Global_3891)
	{
		if (iLocal_32)
		{
			func_7(Global_388A, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		}
		else
		{
			func_7(Global_388A, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		}
		func_7(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else
	{
		if (iLocal_32)
		{
			func_7(Global_388A, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		else
		{
			func_7(Global_388A, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		func_7(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_7(Global_388A, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x7CB6FD92BE491AD9(&Global_93B, 17);
}

void func_15()//Position - 0x7E5
{
	iLocal_26 = unk_0xB28391B2C157AC9B();
	StringCopy(&Local_20, "", 64);
	StringIntConCat(&Local_20, iLocal_26, 64);
	StringConCat(&Local_20, "S", 64);
	StringCopy(&(Local_20.f_10), "", 32);
	StringIntConCat(&(Local_20.f_10), iLocal_26, 32);
	StringConCat(&(Local_20.f_10), "A", 32);
	StringCopy(&(Local_20.f_19), unk_0x6451F9ED1F8684A5(), 24);
	if (!unk_0x0F6F4C227FB5DD52(&Local_20))
	{
		StringCopy(&Local_20, "CELL_195", 64);
	}
	if (!unk_0x0F6F4C227FB5DD52(&(Local_20.f_10)))
	{
		StringCopy(&(Local_20.f_10), "CELL_195", 32);
		StringCopy(&(Local_20.f_19), "CELL_195", 24);
	}
}

