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
	int iLocal_18[4] = { 0, 0, 0, 0 };
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	int iLocal_27 = 0;
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
	fLocal_23 = 0.72f;
	fLocal_24 = 0.42f;
	fLocal_25 = 0f;
	fLocal_26 = 0f;
	unk_0xC1A27D367CCA8C15();
	Global_41E2 = 0;
	Global_3942 = 0;
	func_18();
	Global_389D.f_1 = 7;
	func_17(Global_388A, "DISPLAY_VIEW", 14f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_16(Global_388A, "SET_HEADER", "CELL_4", 0, 0, 0, 0);
	while (true)
	{
		SYSTEM::WAIT(0);
		if (Global_389D.f_1 != 9)
		{
			switch (Global_389D.f_1)
			{
				case 7:
					if (Global_41E2 == 0)
					{
						func_15();
						func_14();
						func_11();
					}
					break;
				
				case 8:
					if (Global_41E2 == 1)
					{
						func_5();
					}
					break;
				
				case 3:
					unk_0x95E4B6F3ED223F5A();
					break;
				
				default:
					break;
			}
			if (Global_41E2 == 0)
			{
				if (func_4())
				{
					func_3();
				}
			}
			else if (func_2(2, Global_387D, 0))
			{
				Global_3887 = 1;
				Global_41E2 = 0;
				Global_389D.f_1 = 7;
				func_18();
				func_17(Global_388A, "DISPLAY_VIEW", 14f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_16(Global_388A, "SET_HEADER", "CELL_4", 0, 0, 0, 0);
			}
		}
		if (func_1())
		{
			func_3();
		}
	}
}

int func_1()//Position - 0x163
{
	if (((Global_389D.f_1 == 1 || Global_389D.f_1 == 3) || Global_389D.f_1 == 0) || Global_3865 == 1)
	{
		Global_3890 = 1;
		return 1;
	}
	return 0;
}

int func_2(int iParam0, int iParam1, int iParam2)//Position - 0x1A6
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

void func_3()//Position - 0x218
{
	unk_0x95E4B6F3ED223F5A();
}

int func_4()//Position - 0x224
{
	if (Global_B99 == 1 || Global_389D.f_1 < 7)
	{
		Global_3890 = 1;
		return 1;
	}
	return 0;
}

void func_5()//Position - 0x24D
{
	unk_0xF7EBEC3FF57AEC65(0.824f, 0.5f, 0.253f, 0.313f, 0, 0, 0, 155, 0);
	func_6();
}

void func_6()//Position - 0x277
{
	int iVar0;
	
	fLocal_25 = fLocal_23;
	fLocal_26 = fLocal_24;
	func_10(255, 255, 255, 205);
	func_9();
	func_8(fLocal_25, fLocal_26, &(Global_19B04.f_6D75[Global_42C0[iLocal_21 /*9*/] /*29*/].f_3), 0);
	fLocal_25 = (fLocal_25 + 0.07f);
	func_10(255, 255, 255, 205);
	if (Global_42C0[iLocal_21 /*9*/].f_2.f_1 < 10)
	{
		func_7(fLocal_25, fLocal_26, "CELL_506", Global_42C0[iLocal_21 /*9*/].f_2.f_2, Global_42C0[iLocal_21 /*9*/].f_2.f_1);
	}
	else
	{
		func_7(fLocal_25, fLocal_26, "CELL_503", Global_42C0[iLocal_21 /*9*/].f_2.f_2, Global_42C0[iLocal_21 /*9*/].f_2.f_1);
	}
	fLocal_25 = (fLocal_25 + 0.07f);
	func_10(255, 255, 255, 205);
	func_7(fLocal_25, fLocal_26, "CELL_505", Global_42C0[iLocal_21 /*9*/].f_2.f_3, Global_42C0[iLocal_21 /*9*/].f_2.f_4);
	fLocal_25 = fLocal_23;
	func_10(255, 255, 255, 205);
	fLocal_26 = (fLocal_26 + 0.02f);
	if (Global_4217[Global_42C0[iLocal_21 /*9*/].f_1 /*42*/].f_8 == 0)
	{
		func_9();
	}
	unk_0x666751E43D377EAA(0f, 0.93f);
	func_8(fLocal_25, fLocal_26, &(Global_4217[Global_42C0[iLocal_21 /*9*/].f_1 /*42*/].f_4), 0);
	fLocal_26 = (fLocal_26 + 0.07f);
	iVar0 = 1;
	while (iVar0 <= Global_4217[Global_42C0[iLocal_21 /*9*/].f_1 /*42*/].f_9)
	{
		func_10(255, 255, 255, 255);
		fLocal_26 = (fLocal_26 + 0.04f);
		if (Global_4217[Global_42C0[iLocal_21 /*9*/].f_1 /*42*/].f_20[iVar0] == -1)
		{
			func_8(fLocal_25, fLocal_26, &(Global_4217[Global_42C0[iLocal_21 /*9*/].f_1 /*42*/].f_A[iVar0 /*4*/]), 0);
		}
		else
		{
			func_7(fLocal_25, fLocal_26, &(Global_4217[Global_42C0[iLocal_21 /*9*/].f_1 /*42*/].f_A[iVar0 /*4*/]), Global_4217[Global_42C0[iLocal_21 /*9*/].f_1 /*42*/].f_1B[iVar0], Global_4217[Global_42C0[iLocal_21 /*9*/].f_1 /*42*/].f_20[iVar0]);
		}
		iVar0++;
	}
}

void func_7(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x45C
{
	unk_0x8B371195127AACF2(sParam2);
	unk_0xAA5C5BF0489E5553(iParam3);
	unk_0xAA5C5BF0489E5553(iParam4);
	unk_0x3A8B9C7B1C825123(fParam0, fParam1, 0);
}

void func_8(float fParam0, float fParam1, char* sParam2, int iParam3)//Position - 0x47F
{
	unk_0x8B371195127AACF2(sParam2);
	unk_0x3A8B9C7B1C825123(fParam0, fParam1, iParam3);
}

void func_9()//Position - 0x497
{
	unk_0xB8F3C51875F7BEA3(0.4f, 0.4f);
	unk_0xCC4FE6A016BA0765(255, 128, 0, 255);
	unk_0x08F1F5EC48E158AB(1, 0, 78, 255, 255);
}

void func_10(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x4C1
{
	unk_0xB8F3C51875F7BEA3(0.3f, 0.3f);
	unk_0x08F1F5EC48E158AB(0, 0, 0, 0, 0);
	unk_0x1EC7F2EE7CC55F66(1, 0, 0, 0, 205);
	unk_0x39AFAD5E153F0203(1);
	unk_0xC8793973D4960AC4(0);
	unk_0xCC4FE6A016BA0765(iParam0, iParam1, iParam2, iParam3);
}

void func_11()//Position - 0x500
{
	if (func_2(2, Global_387E, 0))
	{
		iLocal_21 = iLocal_18[iLocal_20];
		Global_41E2 = 1;
		func_12(Global_388A, "SET_DATA_SLOT", 15f, 0f, -1f, -1f, -1f, "CELL_287", "CELL_280", "CELL_285", "CELL_284", 0);
		func_17(Global_388A, "DISPLAY_VIEW", 15f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_16(Global_388A, "SET_HEADER", "CELL_4", 0, 0, 0, 0);
		Global_389D.f_1 = 8;
		Global_41E2 = 1;
	}
}

void func_12(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x57E
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
		func_13(sParam7);
	}
	if (!unk_0xF1734B55490E9045(sParam8))
	{
		func_13(sParam8);
	}
	if (!unk_0xF1734B55490E9045(sParam9))
	{
		func_13(sParam9);
	}
	if (!unk_0xF1734B55490E9045(sParam10))
	{
		func_13(sParam10);
	}
	if (!unk_0xF1734B55490E9045(sParam11))
	{
		func_13(sParam11);
	}
	unk_0xF9FBC2F3F73D94C9();
}

void func_13(char* sParam0)//Position - 0x631
{
	unk_0x57016C44F10111F0(sParam0);
	unk_0x64989E60CF560CA1();
}

void func_14()//Position - 0x643
{
	if (iLocal_27)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			iLocal_27 = 0;
		}
	}
	if (unk_0x50465D2C022B9E04(2))
	{
		if (func_2(2, 181, 0))
		{
			if (iLocal_20 > 0)
			{
				iLocal_20 = (iLocal_20 - 1);
			}
		}
		if (func_2(2, 180, 0))
		{
			iLocal_20++;
			if (iLocal_20 == iLocal_19)
			{
				iLocal_20 = 0;
			}
		}
	}
	if (iLocal_27 == 0)
	{
		if (func_2(2, Global_3885, 0))
		{
			if (iLocal_20 > 0)
			{
				iLocal_20 = (iLocal_20 - 1);
			}
			iLocal_27 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_2(2, Global_3886, 0))
		{
			iLocal_20++;
			if (iLocal_20 == iLocal_19)
			{
				iLocal_20 = 0;
			}
			iLocal_27 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_15()//Position - 0x6E0
{
	int iVar0;
	
	iVar0 = 0;
	fLocal_25 = fLocal_23;
	fLocal_26 = fLocal_24;
	iLocal_22 = iLocal_19;
	while (iVar0 < iLocal_22)
	{
		func_10(255, 255, 255, 205);
		if (iVar0 == iLocal_20)
		{
			func_9();
		}
		func_8(fLocal_25, fLocal_26, &(Global_19B04.f_6D75[Global_42C0[iLocal_18[iVar0] /*9*/] /*29*/].f_3), 0);
		fLocal_25 = (fLocal_25 + 0.07f);
		func_10(255, 255, 255, 205);
		if (Global_42C0[iLocal_18[iVar0] /*9*/].f_2.f_1 < 10)
		{
			func_7(fLocal_25, fLocal_26, "CELL_506", Global_42C0[iLocal_18[iVar0] /*9*/].f_2.f_2, Global_42C0[iLocal_18[iVar0] /*9*/].f_2.f_1);
		}
		else
		{
			func_7(fLocal_25, fLocal_26, "CELL_503", Global_42C0[iLocal_18[iVar0] /*9*/].f_2.f_2, Global_42C0[iLocal_18[iVar0] /*9*/].f_2.f_1);
		}
		fLocal_25 = (fLocal_25 + 0.07f);
		func_10(255, 255, 255, 205);
		func_7(fLocal_25, fLocal_26, "CELL_505", Global_42C0[iLocal_18[iVar0] /*9*/].f_2.f_3, Global_42C0[iLocal_18[iVar0] /*9*/].f_2.f_4);
		fLocal_25 = fLocal_23;
		func_10(255, 255, 255, 205);
		if (iVar0 == iLocal_20)
		{
			func_9();
		}
		fLocal_26 = (fLocal_26 + 0.02f);
		unk_0x666751E43D377EAA(0f, 0.93f);
		func_8(fLocal_25, fLocal_26, &(Global_4217[Global_42C0[iLocal_18[iVar0] /*9*/].f_1 /*42*/]), 0);
		fLocal_26 = (fLocal_26 + 0.05f);
		iVar0++;
	}
}

void func_16(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)//Position - 0x847
{
	unk_0x29CD142125FE177B(iParam0, sParam1);
	func_13(sParam2);
	if (!unk_0xF1734B55490E9045(sParam3))
	{
		func_13(sParam3);
	}
	if (!unk_0xF1734B55490E9045(sParam4))
	{
		func_13(sParam4);
	}
	if (!unk_0xF1734B55490E9045(sParam5))
	{
		func_13(sParam5);
	}
	if (!unk_0xF1734B55490E9045(sParam6))
	{
		func_13(sParam6);
	}
	unk_0xF9FBC2F3F73D94C9();
}

void func_17(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x8A2
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

void func_18()//Position - 0x905
{
	int iVar0[4];
	int iVar1;
	int iVar2;
	int iVar3;
	
	iLocal_19 = 0;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		iVar2 = 0;
		iVar3 = 3;
		Global_42C0[iVar3 /*9*/].f_2 = -1;
		Global_42C0[iVar3 /*9*/].f_2.f_1 = 0;
		Global_42C0[iVar3 /*9*/].f_2.f_2 = 0;
		Global_42C0[iVar3 /*9*/].f_2.f_3 = 0;
		Global_42C0[iVar3 /*9*/].f_2.f_5 = 0;
		while (iVar2 < 4)
		{
			if (iVar0[iVar2] == 0)
			{
				if (Global_42C0[iVar2 /*9*/].f_8 != 0)
				{
					if (func_19(Global_42C0[iVar2 /*9*/].f_2, Global_42C0[iVar3 /*9*/].f_2))
					{
						iVar3 = iVar2;
					}
				}
			}
			iVar2++;
		}
		iLocal_18[iVar1] = iVar3;
		iVar0[iVar3] = 1;
		if (Global_42C0[iVar1 /*9*/].f_8 != 0)
		{
			iLocal_19++;
		}
		iVar1++;
	}
	func_12(Global_388A, "SET_DATA_SLOT", 14f, 0f, 25f, -1f, -1f, "CELL_287", "CELL_280", 0, 0, 0);
}

int func_19(struct<6> Param0, struct<6> Param1)//Position - 0x9F0
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	if (Param0.f_5 < Param1.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param1.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param1.f_5)
	{
		if (Param0.f_4 < Param1.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param1.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param1.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar2 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var1 = Param1;
			Var1.f_1 = Param1.f_1 * 60;
			Var1.f_2 = Param1.f_2 * 3600;
			Var1.f_3 = (Param1.f_3 * 86400);
			iVar3 = (((Var1 + Var1.f_1) + Var1.f_2) + Var1.f_3);
			if (iVar2 > iVar3 || iVar2 == iVar3)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

