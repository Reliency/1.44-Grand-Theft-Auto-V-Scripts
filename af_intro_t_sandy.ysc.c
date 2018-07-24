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
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	var uLocal_38 = 15;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	vector3 vVar0;
	vector3 vVar1;
	
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	func_29(29);
	if (unk_0xE8A79675302ED812(210))
	{
		func_28();
	}
	iLocal_37 = 0;
	func_27(&uLocal_38);
	func_26(&uLocal_38, 1701.78f, 3225.148f, 40.0202f);
	func_26(&uLocal_38, 1678.909f, 3287.602f, 39.9648f);
	func_26(&uLocal_38, 1710.438f, 3326.499f, 40.1797f);
	func_26(&uLocal_38, 1738.879f, 3335.25f, 40.1493f);
	func_26(&uLocal_38, 1768.387f, 3312.101f, 40.2875f);
	func_26(&uLocal_38, 1819.241f, 3225.449f, 42.9019f);
	func_25(&uLocal_38);
	while (true)
	{
		switch (iLocal_37)
		{
			case 0:
				if (func_18())
				{
					if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
					{
						vVar0 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) };
						vVar1 = { 1749.71f, 3267.83f, 40.24f };
						if (func_17(vVar0, vVar1, 75f))
						{
							if (func_16(&uLocal_38, vVar0))
							{
								if (vVar0.z > 39f && vVar0.z < 43f)
								{
									iLocal_37 = 1;
								}
								else
								{
									SYSTEM::WAIT(100);
								}
							}
							else
							{
								SYSTEM::WAIT(100);
							}
						}
						else
						{
							SYSTEM::WAIT(1500);
						}
					}
				}
				else
				{
					SYSTEM::WAIT(1500);
				}
				break;
			
			case 1:
				func_2();
				break;
			
			case 2:
				func_1(29);
				func_28();
				break;
		}
		SYSTEM::WAIT(0);
	}
}

int func_1(int iParam0)//Position - 0x1D9
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (unk_0xFA30DFD0084E92FE(Global_19B04.f_2360.f_63.f_DB[iVar0], iVar1))
	{
		unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_2360.f_63.f_DB[iVar0]), iVar1);
		return 1;
	}
	return 0;
}

void func_2()//Position - 0x233
{
	func_6(-815326385);
	func_3("SHI_T_SANDY_2", 0, 0, -1, 10000, 7, 0, 0, 0);
	SYSTEM::WAIT(0);
	func_3("SHI_T_SANDY_3", 0, 0, -1, 10000, 7, 0, 0, 0);
	iLocal_37 = 2;
}

void func_3(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x26E
{
	func_4(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_4(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x28F
{
	int iVar0;
	
	if (unk_0x3362CDE8460ED38B(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_19B04.f_4F9D.f_91)
	{
		if (unk_0x3362CDE8460ED38B(&(Global_19B04.f_4F9D[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_19B04.f_4F9D.f_91 < 9)
	{
		StringCopy(&(Global_19B04.f_4F9D[Global_19B04.f_4F9D.f_91 /*16*/]), sParam0, 16);
		StringCopy(&(Global_19B04.f_4F9D[Global_19B04.f_4F9D.f_91 /*16*/].f_4), sParam1, 16);
		Global_19B04.f_4F9D[Global_19B04.f_4F9D.f_91 /*16*/].f_8 = (unk_0x105601648511CC64() + iParam3);
		Global_19B04.f_4F9D[Global_19B04.f_4F9D.f_91 /*16*/].f_9 = iParam5;
		Global_19B04.f_4F9D[Global_19B04.f_4F9D.f_91 /*16*/].f_B = iParam6;
		Global_19B04.f_4F9D[Global_19B04.f_4F9D.f_91 /*16*/].f_C = uParam2;
		Global_19B04.f_4F9D[Global_19B04.f_4F9D.f_91 /*16*/].f_D = iParam7;
		Global_19B04.f_4F9D[Global_19B04.f_4F9D.f_91 /*16*/].f_E = iParam8;
		Global_19B04.f_4F9D[Global_19B04.f_4F9D.f_91 /*16*/].f_F = uParam9;
		if (iParam4 != -1)
		{
			Global_19B04.f_4F9D[Global_19B04.f_4F9D.f_91 /*16*/].f_A = ((unk_0x105601648511CC64() + iParam3) + iParam4);
		}
		else
		{
			Global_19B04.f_4F9D[Global_19B04.f_4F9D.f_91 /*16*/].f_A = -1;
		}
		Global_19B04.f_4F9D.f_91++;
		func_5();
	}
}

void func_5()//Position - 0x462
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_19B04.f_4F9D.f_92[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_19B04.f_4F9D.f_91)
	{
		if (unk_0xFA30DFD0084E92FE(Global_19B04.f_4F9D[iVar0 /*16*/].f_B, 0))
		{
			if (Global_19B04.f_4F9D[iVar0 /*16*/].f_C > Global_19B04.f_4F9D.f_92[0])
			{
				Global_19B04.f_4F9D.f_92[0] = Global_19B04.f_4F9D[iVar0 /*16*/].f_C;
			}
		}
		if (unk_0xFA30DFD0084E92FE(Global_19B04.f_4F9D[iVar0 /*16*/].f_B, 1))
		{
			if (Global_19B04.f_4F9D[iVar0 /*16*/].f_C > Global_19B04.f_4F9D.f_92[1])
			{
				Global_19B04.f_4F9D.f_92[1] = Global_19B04.f_4F9D[iVar0 /*16*/].f_C;
			}
		}
		if (unk_0xFA30DFD0084E92FE(Global_19B04.f_4F9D[iVar0 /*16*/].f_B, 2))
		{
			if (Global_19B04.f_4F9D[iVar0 /*16*/].f_C > Global_19B04.f_4F9D.f_92[2])
			{
				Global_19B04.f_4F9D.f_92[2] = Global_19B04.f_4F9D[iVar0 /*16*/].f_C;
			}
		}
		iVar0++;
	}
}

int func_6(int iParam0)//Position - 0x582
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < Global_19B04.f_1DEB.f_88)
	{
		if (Global_19B04.f_1DEB[iVar0 /*15*/] == iParam0)
		{
			if (Global_8E64 != iVar0)
			{
				func_15(iVar0);
				func_12(iParam0);
				iVar1 = 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_19B04.f_1DEB.f_C6)
	{
		if (Global_19B04.f_1DEB.f_89[iVar0 /*15*/] == iParam0)
		{
			func_12(iParam0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_19B04.f_1DEB.f_28A)
	{
		if (Global_19B04.f_1DEB.f_C7[iVar0 /*15*/] == iParam0)
		{
			func_11(iParam0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_19B04.f_1DEB.f_2FC)
	{
		if (Global_19B04.f_1DEB.f_28B[iVar0 /*14*/] == iParam0)
		{
			func_8(iVar0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_19B04.f_1DEB.f_362)
	{
		if (Global_19B04.f_1DEB.f_2FD[iVar0 /*10*/] == iParam0)
		{
			func_7(iVar0);
			iVar1 = 1;
		}
		iVar0++;
	}
	return iVar1;
}

void func_7(int iParam0)//Position - 0x6A9
{
	int iVar0;
	struct<10> Var1;
	
	if (iParam0 < 0 || iParam0 >= Global_19B04.f_1DEB.f_362)
	{
		return;
	}
	if (Global_19B04.f_1DEB.f_362 > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_19B04.f_1DEB.f_362 - 2))
		{
			Global_19B04.f_1DEB.f_2FD[iVar0 /*10*/] = { Global_19B04.f_1DEB.f_2FD[iVar0 + 1 /*10*/] };
			iVar0++;
		}
	}
	if (Global_19B04.f_1DEB.f_362 > 0)
	{
		Global_19B04.f_1DEB.f_2FD[(Global_19B04.f_1DEB.f_362 - 1) /*10*/] = { Var1 };
		Global_19B04.f_1DEB.f_362 = (Global_19B04.f_1DEB.f_362 - 1);
	}
}

void func_8(int iParam0)//Position - 0x762
{
	int iVar0;
	struct<14> Var1;
	
	if (iParam0 < 0 || iParam0 >= Global_19B04.f_1DEB.f_2FC)
	{
		return;
	}
	if (Global_19B04.f_1DEB.f_2FC > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_19B04.f_1DEB.f_2FC - 2))
		{
			Global_19B04.f_1DEB.f_28B[iVar0 /*14*/] = { Global_19B04.f_1DEB.f_28B[iVar0 + 1 /*14*/] };
			iVar0++;
		}
	}
	if (Global_19B04.f_1DEB.f_2FC > 0)
	{
		Global_19B04.f_1DEB.f_28B[(Global_19B04.f_1DEB.f_2FC - 1) /*14*/] = { Var1 };
		Global_19B04.f_1DEB.f_2FC = (Global_19B04.f_1DEB.f_2FC - 1);
	}
	func_9(0);
	func_9(1);
	func_9(2);
}

void func_9(int iParam0)//Position - 0x82A
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_10(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_19B04.f_1DEB.f_88)
	{
		if (unk_0xFA30DFD0084E92FE(Global_19B04.f_1DEB[iVar0 /*15*/].f_2, iParam0))
		{
			if (Global_19B04.f_1DEB[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_19B04.f_1DEB[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_19B04.f_1DEB.f_2FC)
	{
		if (unk_0xFA30DFD0084E92FE(Global_19B04.f_1DEB.f_28B[iVar2 /*14*/].f_2, iParam0))
		{
			if (Global_19B04.f_1DEB.f_28B[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_19B04.f_1DEB.f_397[iParam0] = iVar1;
}

bool func_10(int iParam0)//Position - 0x8EE
{
	return iParam0 < 3;
}

void func_11(int iParam0)//Position - 0x8FA
{
	struct<15> Var0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < Global_19B04.f_1DEB.f_28A)
	{
		if (Global_19B04.f_1DEB.f_C7[iVar1 /*15*/] == iParam0)
		{
			iVar2 = iVar1;
			while (iVar2 <= (Global_19B04.f_1DEB.f_28A - 2))
			{
				Global_19B04.f_1DEB.f_C7[iVar2 /*15*/] = { Global_19B04.f_1DEB.f_C7[iVar2 + 1 /*15*/] };
				iVar2++;
			}
			Global_19B04.f_1DEB.f_C7[(Global_19B04.f_1DEB.f_28A - 1) /*15*/] = { Var0 };
			Global_19B04.f_1DEB.f_28A = (Global_19B04.f_1DEB.f_28A - 1);
			return;
		}
		iVar1++;
	}
}

void func_12(int iParam0)//Position - 0x9A7
{
	struct<15> Var0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < Global_19B04.f_1DEB.f_C6)
	{
		if (Global_19B04.f_1DEB.f_89[iVar1 /*15*/] == iParam0)
		{
			func_13(Global_19B04.f_1DEB.f_89[iVar1 /*15*/].f_6);
			iVar2 = iVar1;
			while (iVar2 <= (Global_19B04.f_1DEB.f_C6 - 2))
			{
				Global_19B04.f_1DEB.f_89[iVar2 /*15*/] = { Global_19B04.f_1DEB.f_89[iVar2 + 1 /*15*/] };
				iVar2++;
			}
			Global_19B04.f_1DEB.f_89[(Global_19B04.f_1DEB.f_C6 - 1) /*15*/] = { Var0 };
			Global_19B04.f_1DEB.f_C6 = (Global_19B04.f_1DEB.f_C6 - 1);
			return;
		}
		iVar1++;
	}
}

int func_13(int iParam0)//Position - 0xA63
{
	int iVar0;
	
	if (Global_75[iParam0 /*10*/].f_8 != 144)
	{
		if (Global_19B04.f_6D75[iParam0 /*29*/].f_13[Global_389D] == 1)
		{
			Global_19B04.f_6D75[iParam0 /*29*/].f_13[Global_389D] = 0;
			if (Global_19B04.f_6D75[iParam0 /*29*/].f_18[Global_389D] == 0)
			{
				iVar0 = Global_389D;
				func_14(iParam0, iVar0);
			}
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

void func_14(int iParam0, int iParam1)//Position - 0xAD4
{
	if (Global_75[iParam0 /*10*/].f_8 != 144)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			Global_19B04.f_6D75[iParam0 /*29*/].f_C[iParam1] = 0;
			Global_19B04.f_6D75[iParam0 /*29*/].f_18[iParam1] = 0;
		}
	}
}

void func_15(int iParam0)//Position - 0xB17
{
	int iVar0;
	int iVar1;
	struct<15> Var2;
	
	if (iParam0 < 0 || iParam0 >= Global_19B04.f_1DEB.f_88)
	{
		return;
	}
	iVar1 = Global_19B04.f_1DEB[iParam0 /*15*/].f_2;
	if (Global_19B04.f_1DEB.f_88 > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_19B04.f_1DEB.f_88 - 2))
		{
			Global_19B04.f_1DEB[iVar0 /*15*/] = { Global_19B04.f_1DEB[iVar0 + 1 /*15*/] };
			iVar0++;
		}
	}
	if (Global_19B04.f_1DEB.f_88 > 0)
	{
		Global_19B04.f_1DEB[(Global_19B04.f_1DEB.f_88 - 1) /*15*/] = { Var2 };
		Global_19B04.f_1DEB.f_88 = (Global_19B04.f_1DEB.f_88 - 1);
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xFA30DFD0084E92FE(iVar1, iVar0))
		{
			func_9(iVar0);
		}
		iVar0++;
	}
}

bool func_16(var uParam0, struct<2> Param1, var uParam2)//Position - 0xBF2
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (uParam0->f_2E < 3)
	{
	}
	bVar0 = false;
	iVar1 = 0;
	iVar2 = (uParam0->f_2E - 1);
	while (iVar1 < uParam0->f_2E)
	{
		if (((uParam0[iVar1 /*3*/])->f_1 < Param1.f_1 && (uParam0[iVar2 /*3*/])->f_1 >= Param1.f_1) || ((uParam0[iVar2 /*3*/])->f_1 < Param1.f_1 && (uParam0[iVar1 /*3*/])->f_1 >= Param1.f_1))
		{
			if (((*uParam0)[iVar1 /*3*/] + (((Param1.f_1 - (uParam0[iVar1 /*3*/])->f_1) / ((uParam0[iVar2 /*3*/])->f_1 - (uParam0[iVar1 /*3*/])->f_1)) * ((*uParam0)[iVar2 /*3*/] - (*uParam0)[iVar1 /*3*/]))) < Param1)
			{
				bVar0 = !bVar0;
			}
		}
		iVar2 = iVar1;
		iVar1++;
	}
	return bVar0;
}

bool func_17(vector3 vParam0, vector3 vParam1, float fParam2)//Position - 0xCAE
{
	vector3 vVar0;
	
	vVar0 = { vParam1 - vParam0 };
	return ((vVar0.x * vVar0.x) + (vVar0.y * vVar0.y)) <= (fParam2 * fParam2);
}

int func_18()//Position - 0xCD8
{
	if (!unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		return 0;
	}
	if (func_20() != 2)
	{
		return 0;
	}
	if (Global_62BF)
	{
		return 0;
	}
	if (Global_DA99)
	{
		return 0;
	}
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0)
		{
			return 0;
		}
	}
	if (unk_0x866EAD7E27D8D0F8())
	{
		return 0;
	}
	if (unk_0x7930B3E9C919E90F())
	{
		return 0;
	}
	if (func_19())
	{
		return 0;
	}
	return 1;
}

int func_19()//Position - 0xD4E
{
	if (unk_0xB731B8C5BCE89836(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_20()//Position - 0xD68
{
	func_21();
	return Global_19B04.f_932.f_21B.f_10CD;
}

void func_21()//Position - 0xD81
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_24(Global_19B04.f_932.f_21B.f_10CD) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_23(unk_0xBC25C936A095B5BA());
			if (func_10(iVar0) && (!func_22(14) || Global_196EB))
			{
				if (Global_19B04.f_932.f_21B.f_10CD != iVar0 && func_10(Global_19B04.f_932.f_21B.f_10CD))
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

bool func_22(int iParam0)//Position - 0xE7E
{
	return Global_8C41 == iParam0;
}

int func_23(int iParam0)//Position - 0xE8C
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_24(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_24(int iParam0)//Position - 0xEC9
{
	if (func_10(iParam0))
	{
		return Global_19B04.f_6D75[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_25(var uParam0)//Position - 0xEF3
{
	int iVar0;
	float fVar1;
	
	if (uParam0->f_33 == 0)
	{
	}
	if (uParam0->f_2E < 3)
	{
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_2E)
	{
		uParam0->f_2F = { uParam0->f_2F + *(uParam0[iVar0 /*3*/]) };
		iVar0++;
	}
	uParam0->f_2F = { uParam0->f_2F / FtoV(SYSTEM::TO_FLOAT(iVar0)) };
	iVar0 = 0;
	while (iVar0 < uParam0->f_2E)
	{
		fVar1 = SYSTEM::VDIST2(uParam0->f_2F, *(uParam0[iVar0 /*3*/]));
		if (fVar1 > uParam0->f_32)
		{
			uParam0->f_32 = fVar1;
		}
		iVar0++;
	}
	uParam0->f_32 = SYSTEM::SQRT(uParam0->f_32);
	uParam0->f_33 = 0;
}

void func_26(var uParam0, vector3 vParam1)//Position - 0xF93
{
	if (uParam0->f_33 == 0)
	{
	}
	if (uParam0->f_2E >= 15)
	{
	}
	*(uParam0[uParam0->f_2E /*3*/]) = { vParam1 };
	uParam0->f_2E++;
}

void func_27(var uParam0)//Position - 0xFC4
{
	if (uParam0->f_33)
	{
	}
	uParam0->f_2E = 0;
	uParam0->f_2F = { 0f, 0f, 0f };
	uParam0->f_32 = 0f;
	uParam0->f_33 = 1;
}

void func_28()//Position - 0xFEB
{
	unk_0x7DC864BD5FD9E6A0();
	unk_0xCD75CCD2505EA200();
	unk_0x95E4B6F3ED223F5A();
}

int func_29(int iParam0)//Position - 0xFFF
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (unk_0xFA30DFD0084E92FE(Global_19B04.f_2360.f_63.f_DB[iVar0], iVar1))
	{
		return 0;
	}
	unk_0xF0059F27F7BB6680(&(Global_19B04.f_2360.f_63.f_DB[iVar0]), iVar1);
	return 1;
}

