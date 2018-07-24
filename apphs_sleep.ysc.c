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
	int iLocal_18[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
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
	fLocal_25 = 0.82f;
	fLocal_26 = 0.42f;
	fLocal_27 = 0f;
	fLocal_28 = 0f;
	unk_0xC1A27D367CCA8C15();
	func_28();
	iLocal_24 = 1;
	func_27();
	func_26();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (Global_389D.f_1 != 9)
		{
			switch (Global_389D.f_1)
			{
				case 7:
					func_21();
					if (iLocal_24)
					{
						func_18();
					}
					else
					{
						func_12();
					}
					break;
				
				case 8:
					func_21();
					func_12();
					if (func_11(2, Global_387D, 0))
					{
						func_10();
						Global_3887 = 1;
						func_9(Global_388A, "DISPLAY_VIEW", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_26();
						if (Global_389D.f_1 > 3)
						{
							Global_389D.f_1 = 7;
						}
					}
					break;
				
				default:
					break;
			}
			if (func_8())
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

int func_1()//Position - 0x113
{
	if (((Global_389D.f_1 == 1 || Global_389D.f_1 == 3) || Global_389D.f_1 == 0) || Global_3865 == 1)
	{
		Global_3890 = 1;
		return 1;
	}
	return 0;
}

void func_2()//Position - 0x156
{
	func_7();
	if (func_4(0))
	{
		func_3();
	}
	unk_0x95E4B6F3ED223F5A();
}

void func_3()//Position - 0x172
{
	if (Global_C60[0 /*2811*/][0 /*281*/].f_103 == 2)
	{
		Global_C60[0 /*2811*/][0 /*281*/].f_103 = 0;
	}
	if (Global_C60[1 /*2811*/][0 /*281*/].f_103 == 2)
	{
		Global_C60[1 /*2811*/][0 /*281*/].f_103 = 0;
	}
	if (Global_C60[2 /*2811*/][0 /*281*/].f_103 == 2)
	{
		Global_C60[2 /*2811*/][0 /*281*/].f_103 = 0;
	}
	unk_0x7CB6FD92BE491AD9(&Global_93B, 25);
	unk_0xF0059F27F7BB6680(&Global_93C, 11);
}

int func_4(int iParam0)//Position - 0x1EF
{
	if (Global_8C41 == 15)
	{
		return 0;
	}
	if (func_5(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_5(int iParam0)//Position - 0x211
{
	return func_6(iParam0, Global_8C41);
}

int func_6(int iParam0, int iParam1)//Position - 0x222
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_7()//Position - 0x403
{
	func_28();
	Global_C60[Global_389D /*2811*/][0 /*281*/].f_7C[2] = 1;
}

int func_8()//Position - 0x422
{
	if (Global_B99 == 1 || Global_389D.f_1 < 7)
	{
		Global_3890 = 1;
		return 1;
	}
	return 0;
}

void func_9(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x44B
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

void func_10()//Position - 0x4AE
{
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0xC4BA30B532FE260F(-1, "Menu_Back", &Global_3892, 1);
	}
}

int func_11(int iParam0, int iParam1, int iParam2)//Position - 0x4CF
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

void func_12()//Position - 0x541
{
	if (Global_3887 == 0)
	{
		if (func_11(2, Global_387E, 0))
		{
			func_15();
			Global_3887 = 1;
			func_28();
			unk_0x29CD142125FE177B(Global_388A, "GET_CURRENT_SELECTION");
			uLocal_21 = unk_0xC27A95D32A8160C0();
			while (!unk_0x3B6BD69AB08B86C2(uLocal_21))
			{
				SYSTEM::WAIT(0);
			}
			Global_C60[Global_389D /*2811*/][iLocal_23 /*281*/].f_103 = iLocal_18[unk_0x6AE1427A38313694(uLocal_21)];
			func_13(Global_388A, "SET_HEADER", &(Global_C60[Global_389D /*2811*/][iLocal_23 /*281*/].f_7[Global_C60[Global_389D /*2811*/][iLocal_23 /*281*/].f_103 /*4*/]), 0, 0, 0, 0);
			if (Global_C60[Global_389D /*2811*/][0 /*281*/].f_103 == 2)
			{
				func_9(Global_388A, "SET_SLEEP_MODE", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else
			{
				func_9(Global_388A, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			if (func_4(0))
			{
				func_3();
			}
		}
	}
}

void func_13(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)//Position - 0x638
{
	unk_0x29CD142125FE177B(iParam0, sParam1);
	func_14(sParam2);
	if (!unk_0xF1734B55490E9045(sParam3))
	{
		func_14(sParam3);
	}
	if (!unk_0xF1734B55490E9045(sParam4))
	{
		func_14(sParam4);
	}
	if (!unk_0xF1734B55490E9045(sParam5))
	{
		func_14(sParam5);
	}
	if (!unk_0xF1734B55490E9045(sParam6))
	{
		func_14(sParam6);
	}
	unk_0xF9FBC2F3F73D94C9();
}

void func_14(char* sParam0)//Position - 0x693
{
	unk_0x57016C44F10111F0(sParam0);
	unk_0x64989E60CF560CA1();
}

void func_15()//Position - 0x6A5
{
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0xC4BA30B532FE260F(-1, "Menu_Accept", &Global_3892, 1);
		func_16();
	}
}

void func_16()//Position - 0x6CA
{
	if (func_17())
	{
		unk_0x32A023E2F8F8566C(5);
	}
}

int func_17()//Position - 0x6DE
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_11542)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0xEBC6179F395EFBEB();
	iVar1 = unk_0x3D875C2512206692(iVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_411EA0 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_18()//Position - 0x725
{
	Global_3887 = 1;
	iLocal_23 = 0;
	iLocal_24 = 0;
	func_19();
}

void func_19()//Position - 0x73B
{
	int iVar0[15];
	int iVar1;
	int iVar2;
	int iVar3;
	
	func_9(Global_388A, "DISPLAY_VIEW", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_28();
	iLocal_19 = 0;
	iVar1 = 0;
	while (iVar1 < 9)
	{
		iVar2 = 0;
		iVar3 = 9;
		Global_C60[Global_389D /*2811*/][iLocal_23 /*281*/].f_54[iVar3] = 5000;
		while (iVar2 < 9)
		{
			if (Global_C60[Global_389D /*2811*/][iLocal_23 /*281*/].f_7C[iVar2] == 1)
			{
				if (iVar0[iVar2] == 0)
				{
					if (Global_C60[Global_389D /*2811*/][iLocal_23 /*281*/].f_54[iVar2] < Global_C60[Global_389D /*2811*/][iLocal_23 /*281*/].f_54[iVar3])
					{
						iVar3 = iVar2;
						func_20(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(13), SYSTEM::TO_FLOAT(iVar1), SYSTEM::TO_FLOAT(Global_C60[Global_389D /*2811*/][iLocal_23 /*281*/].f_68[iVar3]), -1f, -1f, &(Global_C60[Global_389D /*2811*/][iLocal_23 /*281*/].f_7[iVar3 /*4*/]), 0, 0, 0, 0);
					}
				}
			}
			iVar2++;
		}
		iLocal_18[iVar1] = iVar3;
		iVar0[iVar3] = 1;
		if (Global_C60[Global_389D /*2811*/][iLocal_23 /*281*/].f_7C[iVar1] == 1)
		{
			iLocal_19++;
		}
		iVar1++;
	}
	func_9(Global_388A, "DISPLAY_VIEW", 13f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_13(Global_388A, "SET_HEADER", &(Global_C60[Global_389D /*2811*/][iLocal_23 /*281*/].f_7[Global_C60[Global_389D /*2811*/][iLocal_23 /*281*/].f_103 /*4*/]), 0, 0, 0, 0);
	if (Global_3891)
	{
		func_20(Global_388A, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_20(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_20(Global_388A, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_20(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_20(Global_388A, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x7CB6FD92BE491AD9(&Global_93B, 17);
}

void func_20(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x942
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
		func_14(sParam7);
	}
	if (!unk_0xF1734B55490E9045(sParam8))
	{
		func_14(sParam8);
	}
	if (!unk_0xF1734B55490E9045(sParam9))
	{
		func_14(sParam9);
	}
	if (!unk_0xF1734B55490E9045(sParam10))
	{
		func_14(sParam10);
	}
	if (!unk_0xF1734B55490E9045(sParam11))
	{
		func_14(sParam11);
	}
	unk_0xF9FBC2F3F73D94C9();
}

void func_21()//Position - 0x9F5
{
	if (iLocal_29)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			iLocal_29 = 0;
		}
	}
	if (unk_0x50465D2C022B9E04(2))
	{
		if (func_11(2, 181, 0))
		{
			if (iLocal_20 > 0)
			{
				iLocal_20 = (iLocal_20 - 1);
			}
			func_24();
		}
		if (func_11(2, 180, 0))
		{
			iLocal_20++;
			if (iLocal_20 == iLocal_19)
			{
				iLocal_20 = 0;
			}
			func_22();
		}
	}
	if (iLocal_29 == 0)
	{
		if (func_11(2, Global_3885, 0))
		{
			if (iLocal_20 > 0)
			{
				iLocal_20 = (iLocal_20 - 1);
			}
			func_24();
			iLocal_29 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_11(2, Global_3886, 0))
		{
			iLocal_20++;
			if (iLocal_20 == iLocal_19)
			{
				iLocal_20 = 0;
			}
			func_22();
			iLocal_29 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_22()//Position - 0xAA2
{
	func_9(Global_388A, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xC4BA30B532FE260F(-1, "Menu_Navigate", &Global_3892, 1);
	func_23();
}

void func_23()//Position - 0xADD
{
	if (func_17())
	{
		if (Global_3948 == 0)
		{
			unk_0x32A023E2F8F8566C(2);
		}
		else
		{
			unk_0x32A023E2F8F8566C(1);
		}
	}
}

void func_24()//Position - 0xB00
{
	func_9(Global_388A, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xC4BA30B532FE260F(-1, "Menu_Navigate", &Global_3892, 1);
	func_25();
}

void func_25()//Position - 0xB3B
{
	if (func_17())
	{
		if (Global_3948 == 0)
		{
			unk_0x32A023E2F8F8566C(1);
		}
		else
		{
			unk_0x32A023E2F8F8566C(2);
		}
	}
}

void func_26()//Position - 0xB5E
{
	int iVar0[15];
	int iVar1;
	int iVar2;
	int iVar3;
	
	iLocal_19 = 0;
	iVar1 = 0;
	func_28();
	while (iVar1 < 9)
	{
		iVar2 = 0;
		iVar3 = 9;
		Global_C60[Global_389D /*2811*/][iVar3 /*281*/] = 5000;
		while (iVar2 < 9)
		{
			if (Global_C60[Global_389D /*2811*/][iVar2 /*281*/].f_118 == 1)
			{
				if (iVar0[iVar2] == 0)
				{
					if (iVar2 == 0)
					{
						if (Global_C60[Global_389D /*2811*/][iVar2 /*281*/] < Global_C60[Global_389D /*2811*/][iVar3 /*281*/])
						{
							iVar3 = iVar2;
							func_20(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(2), SYSTEM::TO_FLOAT(iVar1), -1f, -1f, -1f, &(Global_C60[Global_389D /*2811*/][iVar3 /*281*/].f_2), 0, 0, 0, 0);
						}
					}
				}
			}
			iVar2++;
		}
		iLocal_18[iVar1] = iVar3;
		iVar0[iVar3] = 1;
		if (Global_C60[Global_389D /*2811*/][iVar1 /*281*/].f_118 == 1)
		{
			iLocal_19++;
		}
		iVar1++;
	}
	func_9(Global_388A, "DISPLAY_VIEW", 13f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_13(Global_388A, "SET_HEADER", "CELL_16", 0, 0, 0, 0);
	if (Global_3891)
	{
		func_20(Global_388A, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_20(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_20(Global_388A, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_20(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_20(Global_388A, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x7CB6FD92BE491AD9(&Global_93B, 17);
}

void func_27()//Position - 0xCF9
{
	if (Global_8C41 != 15)
	{
		func_28();
		Global_C60[Global_389D /*2811*/][0 /*281*/].f_7C[2] = 0;
	}
}

void func_28()//Position - 0xD20
{
	if (func_34(14))
	{
		if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			if (unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()) == Global_19B04.f_6D75[0 /*29*/])
			{
				Global_389D = 0;
			}
			else if (unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()) == Global_19B04.f_6D75[1 /*29*/])
			{
				Global_389D = 1;
			}
			else if (unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()) == Global_19B04.f_6D75[2 /*29*/])
			{
				Global_389D = 2;
			}
			else
			{
				Global_389D = 0;
			}
		}
	}
	else
	{
		Global_389D = func_29();
		if (Global_389D == 145)
		{
			Global_389D = 3;
		}
		if (Global_11542)
		{
			Global_389D = 3;
		}
		if (Global_389D > 3)
		{
			Global_389D = 3;
		}
	}
}

var func_29()//Position - 0xDC2
{
	func_30();
	return Global_19B04.f_932.f_21B.f_10CD;
}

void func_30()//Position - 0xDDB
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_33(Global_19B04.f_932.f_21B.f_10CD) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_32(unk_0xBC25C936A095B5BA());
			if (func_31(iVar0) && (!func_34(14) || Global_196EB))
			{
				if (Global_19B04.f_932.f_21B.f_10CD != iVar0 && func_31(Global_19B04.f_932.f_21B.f_10CD))
				{
					Global_19B04.f_932.f_21B.f_10CE = Global_19B04.f_932.f_21B.f_10CD;
				}
				Global_19B04.f_932.f_21B.f_10CF = iVar0;
				Global_19B04.f_932.f_21B.f_10CD = iVar0;
				return;
			}
		}
		else
		{
			if (Global_19B04.f_932.f_21B.f_10CD != 145)
			{
				Global_19B04.f_932.f_21B.f_10CF = Global_19B04.f_932.f_21B.f_10CD;
			}
			return;
		}
	}
	Global_19B04.f_932.f_21B.f_10CD = 145;
}

bool func_31(int iParam0)//Position - 0xED8
{
	return iParam0 < 3;
}

int func_32(int iParam0)//Position - 0xEE4
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_33(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_33(int iParam0)//Position - 0xF21
{
	if (func_31(iParam0))
	{
		return Global_19B04.f_6D75[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_34(int iParam0)//Position - 0xF4B
{
	return Global_8C41 == iParam0;
}

