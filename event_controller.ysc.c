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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	float fLocal_47 = 0f;
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
	var uLocal_62 = 10;
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
	var uLocal_73 = 2;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 8;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 8;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	int iLocal_96 = 0;
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
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_47 = ((0.05f + 0.275f) - 0.01f);
	if (unk_0xE8A79675302ED812(34))
	{
		unk_0x95E4B6F3ED223F5A();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		func_132();
		func_1();
	}
}

void func_1()//Position - 0xA5
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar2 = 0;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = 0;
	iVar6 = 0;
	if (unk_0x97EF4023B86C354F())
	{
		iVar2 = 0;
		while (iVar2 < unk_0x432AA9CCB3EE0174(1))
		{
			iVar7 = unk_0x2BFAC254CC069912(1, iVar2);
			switch (iVar7)
			{
				case 189:
					func_129();
					break;
				
				case 190:
					func_128();
					break;
				
				case 191:
					func_122(iVar2);
					break;
				
				case 192:
					func_121(iVar2);
					break;
				
				case 193:
					func_112(iVar2);
					break;
				
				case 211:
					func_3(iVar2);
					break;
			}
			iVar2++;
		}
	}
	iVar2 = 0;
	while (iVar2 < unk_0x432AA9CCB3EE0174(0))
	{
		iVar0 = unk_0x2BFAC254CC069912(0, iVar2);
		iLocal_96 = 1;
		switch (iVar0)
		{
			case 139:
				unk_0x414AA1932D1C88E2(0, iVar2, &iVar1, 1);
				if (unk_0x724D816EA203A79E(iVar1))
				{
					if (unk_0xD27AC0E9B78CFDD7(iVar1))
					{
						if (func_2(iVar3))
						{
							Global_BC5A.f_1[iVar3] = iVar1;
							iVar3++;
						}
					}
					else if (unk_0x386592AF38881675(iVar1))
					{
						if (func_2(iVar5))
						{
							Global_BC5A.f_19[iVar5] = iVar1;
							iVar5++;
						}
					}
				}
				break;
			
			case 140:
				unk_0x414AA1932D1C88E2(0, iVar2, &iVar1, 1);
				if (unk_0x724D816EA203A79E(iVar1))
				{
					if (unk_0xD27AC0E9B78CFDD7(iVar1))
					{
						if (func_2(iVar4))
						{
							Global_BC5A.f_D[iVar4] = iVar1;
							iVar4++;
						}
					}
					else if (unk_0x386592AF38881675(iVar1))
					{
						if (func_2(iVar6))
						{
							Global_BC5A.f_25[iVar6] = iVar1;
							iVar6++;
						}
					}
				}
				break;
		}
		iVar2++;
	}
	Global_BC5A = iVar3;
	Global_BC5A.f_C = iVar4;
	Global_BC5A.f_18 = iVar5;
	Global_BC5A.f_24 = iVar6;
}

bool func_2(int iParam0)//Position - 0x24E
{
	return iParam0 < 10;
}

void func_3(int iParam0)//Position - 0x25B
{
	struct<39> Var0;
	int iVar1;
	
	if (unk_0x414AA1932D1C88E2(1, iParam0, &Var0, 39))
	{
		iVar1 = unk_0x74634CEB24A9CAAF(Var0.f_26);
		if (iVar1 >= 0 && iVar1 < unk_0x0F2C8D019FA37423())
		{
			if (unk_0x64D32342A58B1876(iVar1) || unk_0x682AA4F5B4D1E692(iVar1))
			{
				if (unk_0x682AA4F5B4D1E692(iVar1))
				{
					func_55(iVar1);
				}
				else
				{
					unk_0xB8D9B25B8C571B90(iVar1);
				}
				func_54(Var0.f_25, -1);
			}
			else if (func_47())
			{
				func_4(Var0.f_1D, Var0, Var0.f_26, Var0.f_10, Var0.f_23, Var0.f_24);
			}
		}
	}
}

int func_4(struct<6> Param0, struct<16> Param1, var uParam2, struct<13> Param3, var uParam4, int iParam5)//Position - 0x2F8
{
	bool bVar0;
	bool bVar1;
	struct<16> Var2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	struct<10> Var7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	struct<16> Var12;
	struct<16> Var13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	var uVar20;
	var uVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	
	bVar0 = false;
	if (iParam5 >= 1000000)
	{
		iParam5 = (iParam5 - 1000000);
		bVar0 = true;
	}
	if (unk_0x7AF0088ABFA713B6())
	{
		if (func_46())
		{
			func_45(uParam2);
			return 0;
		}
		if (func_44())
		{
			func_45(uParam2);
			return 0;
		}
	}
	if (!unk_0x7AF0088ABFA713B6())
	{
		if (bVar0)
		{
		}
		else if (!unk_0xE140B7178EA00705(&Param3))
		{
			func_45(uParam2);
			return 0;
		}
		if (Global_3864)
		{
			func_45(uParam2);
			return 0;
		}
		bVar1 = true;
		if (!func_43())
		{
			if (!func_42(0))
			{
				if (bVar1)
				{
					func_45(uParam2);
					return 0;
				}
			}
		}
	}
	if (unk_0x7AF0088ABFA713B6())
	{
		if (!func_41(unk_0xB5CEFD608600A09F()))
		{
			func_45(uParam2);
			return 0;
		}
	}
	if (unk_0xF1734B55490E9045(&Param1))
	{
		func_45(uParam2);
		return 0;
	}
	if (unk_0xF1734B55490E9045(&Param0))
	{
		func_45(uParam2);
		return 0;
	}
	Var2 = { Param1 };
	iVar3 = func_40(Var2);
	if (iVar3 != -1)
	{
		func_37(iVar3);
	}
	uVar4 = unk_0x74634CEB24A9CAAF(uParam2);
	iVar5 = unk_0x51DC28833353D7ED(uVar4);
	iVar6 = 0;
	iVar6 = 0;
	while (iVar6 <= 11)
	{
		if (iVar5 == Global_248C9C[iVar6 /*4*/].f_3 && unk_0x105601648511CC64() < Global_248C9C[iVar6 /*4*/].f_2)
		{
			Global_248C9C[iVar6 /*4*/].f_2 = unk_0x105601648511CC64() + 30000;
			iVar6 = 12;
			func_45(uParam2);
			return 0;
		}
		iVar6++;
	}
	Var7.f_1 = -1;
	Var7.f_2 = -1;
	Var7.f_9 = -1;
	func_36(&Var7);
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 63;
	iVar11 = 0;
	StringCopy(&Var12, "", 64);
	StringCopy(&Var13, "", 64);
	iVar14 = 0;
	iVar15 = 0;
	iVar16 = 0;
	iVar17 = 1;
	iVar18 = 0;
	iVar19 = 0;
	if (func_35(&Param0, &iVar8, &iVar11))
	{
		iVar10 = 40;
		iVar15 = 0;
		iVar11 = iVar11;
	}
	else if (func_33(&Param0, &Var7, 0))
	{
		iVar10 = Var7.f_2;
		iVar8 = func_32(iVar10, Var7.f_1);
		iVar9 = func_31(&Var7);
		Var12 = { func_30(&Var7, 0) };
		Var13 = { func_29(&Var7) };
		iVar15 = 1;
		iVar14 = func_28(&Var7, 0);
		iVar19 = func_27(&Var7);
		uVar20 = func_25(&Var7);
		uVar21 = func_24(&Var7);
		bVar22 = func_19(&Var7);
		if (!bVar22)
		{
			iVar18 = 1;
		}
	}
	else
	{
		bVar23 = false;
		if (func_17(unk_0xB5CEFD608600A09F(), Param3))
		{
			if (!unk_0x7AF0088ABFA713B6())
			{
				bVar23 = true;
			}
			else
			{
				func_45(uParam2);
				func_15(0);
				return 0;
			}
		}
		if (!unk_0xF49912B78E2591B6())
		{
			if (!bVar23)
			{
				if (func_13(unk_0xB5CEFD608600A09F(), Param3))
				{
					func_45(uParam2);
					func_15(0);
					return 0;
				}
			}
		}
		if (!func_12())
		{
			func_45(uParam2);
			bVar24 = true;
			func_15(bVar24);
			return 0;
		}
		bVar25 = false;
		if (!bVar23)
		{
			if (func_7(Param3, &bVar25, 1))
			{
				func_45(uParam2);
				func_15(bVar25);
				return 0;
			}
		}
		iVar16 = 1;
		iVar17 = 0;
		iVar15 = 1;
	}
	iVar26 = Global_14F519;
	if (iVar26 >= 12)
	{
		iVar26 = (iVar26 - 1);
	}
	iVar27 = (iVar26 - 1);
	while (iVar27 >= 0)
	{
		Global_24839F[iVar26 /*99*/] = { Global_24839F[iVar27 /*99*/] };
		iVar26 = (iVar26 - 1);
		iVar27 = (iVar27 - 1);
	}
	Global_14F519++;
	if (Global_14F519 > 12)
	{
		Global_14F519 = 12;
	}
	iVar28 = 0;
	Global_24839F[iVar28 /*99*/] = 0;
	Global_24839F[iVar28 /*99*/].f_1 = 0;
	Global_24839F[iVar28 /*99*/].f_5 = 0;
	Global_24839F[iVar28 /*99*/].f_2 = iVar16;
	Global_24839F[iVar28 /*99*/].f_3 = 0;
	Global_24839F[iVar28 /*99*/].f_4 = iVar17;
	Global_24839F[iVar28 /*99*/].f_6 = { Param0 };
	Global_24839F[iVar28 /*99*/].f_C = uVar20;
	Global_24839F[iVar28 /*99*/].f_D = uVar21;
	Global_24839F[iVar28 /*99*/].f_F = { Param1 };
	StringCopy(&(Global_24839F[iVar28 /*99*/].f_1F), "", 64);
	Global_24839F[iVar28 /*99*/].f_31 = iVar10;
	Global_24839F[iVar28 /*99*/].f_32 = iVar8;
	Global_24839F[iVar28 /*99*/].f_33 = iVar9;
	Global_24839F[iVar28 /*99*/].f_5B = uParam2;
	Global_24839F[iVar28 /*99*/].f_39 = { Var12 };
	Global_24839F[iVar28 /*99*/].f_49 = { Var13 };
	Global_24839F[iVar28 /*99*/].f_34 = iVar14;
	Global_24839F[iVar28 /*99*/].f_35 = 0;
	Global_24839F[iVar28 /*99*/].f_35.f_1 = 0;
	Global_24839F[iVar28 /*99*/].f_35.f_2 = 0;
	Global_24839F[iVar28 /*99*/].f_38 = iVar15;
	Global_24839F[iVar28 /*99*/].f_5A = uParam4;
	Global_24839F[iVar28 /*99*/].f_5C = -1;
	Global_24839F[iVar28 /*99*/].f_5D = iVar18;
	Global_24839F[iVar28 /*99*/].f_5E = Global_248CD0;
	Global_24839F[iVar28 /*99*/].f_5F = iVar19;
	Global_24839F[iVar28 /*99*/].f_62 = unk_0xE140B7178EA00705(&Param3);
	if (Global_24839F[iVar28 /*99*/].f_32 == 0)
	{
		if (Global_24839F[iVar28 /*99*/].f_33 == 1)
		{
			Global_24839F[iVar28 /*99*/].f_38 = 0;
		}
	}
	Global_24839F[iVar28 /*99*/].f_60 = func_6(Param3, iVar28);
	Global_24839F[iVar28 /*99*/].f_61 = 0;
	Global_24839F[iVar28 /*99*/].f_59 = iParam5;
	Global_248CD0++;
	Global_24839F[iVar28 /*99*/].f_2F = func_5(Param3);
	if (Global_24839F[iVar28 /*99*/].f_2F != -1)
	{
		Global_24839F[iVar28 /*99*/].f_30 = unk_0x105601648511CC64() + 15000;
	}
	return 1;
}

int func_5(struct<13> Param0)//Position - 0x845
{
	struct<13> Var0[1];
	int iVar1;
	
	if (!unk_0xF49912B78E2591B6())
	{
		return -1;
	}
	Var0[0 /*13*/] = { Param0 };
	iVar1 = unk_0xF18EB09A1D516C58(&Var0, 1);
	if (iVar1 < 0)
	{
		return -1;
	}
	return iVar1;
}

int func_6(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)//Position - 0x880
{
	if (!unk_0xE140B7178EA00705(&uParam0))
	{
		return 0;
	}
	if (Global_24839F[iParam13 /*99*/].f_5A > 0)
	{
		return 0;
	}
	return 1;
}

int func_7(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13, bool bParam14)//Position - 0x8A9
{
	struct<13> Var0;
	
	*iParam13 = 0;
	if (func_11(0))
	{
		return 0;
	}
	if (unk_0xF49912B78E2591B6())
	{
		if (!func_10())
		{
			*iParam13 = 1;
			return 1;
		}
	}
	if (!func_9(1) && !bParam14)
	{
		return 1;
	}
	Var0 = { func_8(unk_0xB5CEFD608600A09F()) };
	if (!bParam14 && !unk_0x8C3429C475E8DB5D(&Var0, &uParam0))
	{
		if (!unk_0xE140B7178EA00705(&uParam0))
		{
			return 1;
		}
	}
	return 0;
}

struct<13> func_8(int iParam0)//Position - 0x91D
{
	struct<13> Var0;
	
	unk_0xB7DBA2C6D2C3C41A(iParam0, &Var0, 13);
	return Var0;
}

int func_9(int iParam0)//Position - 0x934
{
	if (unk_0x3E9993F328985CCB() || (unk_0xF7E138CFA19B55E7() && iParam0 == 0))
	{
		if (unk_0x5553DFDA03631860(1) == 0 || unk_0xC46C045B74A03589(1, -1) == 0)
		{
			return 0;
		}
	}
	else if (unk_0x5553DFDA03631860(1) == 0)
	{
		return 0;
	}
	if (func_10() == 0)
	{
		return 0;
	}
	return 1;
}

int func_10()//Position - 0x98F
{
	if (unk_0x3E9993F328985CCB() && unk_0x36C1DE668967177B())
	{
		return 1;
	}
	if (unk_0xA76D65C63ED50F67() && unk_0x36C1DE668967177B())
	{
		return 1;
	}
	if ((unk_0xF7E138CFA19B55E7() && unk_0x11F704A1BA7AC122() == 0) && unk_0x36C1DE668967177B())
	{
		return 1;
	}
	if (unk_0xF49912B78E2591B6() && unk_0x36C1DE668967177B())
	{
		return 1;
	}
	if (unk_0x8ACB0C3FACC09467() && unk_0x36C1DE668967177B())
	{
		return 1;
	}
	return 0;
}

int func_11(int iParam0)//Position - 0xA07
{
	if (unk_0x3E9993F328985CCB() || (unk_0xF7E138CFA19B55E7() && iParam0 == 0))
	{
		if (unk_0x5553DFDA03631860(0) == 0 || unk_0xC46C045B74A03589(0, -1) == 0)
		{
			return 0;
		}
	}
	else if (unk_0x5553DFDA03631860(0) == 0)
	{
		return 0;
	}
	if (func_10() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_12()//Position - 0xA62
{
	if (!unk_0xA76D65C63ED50F67())
	{
		return 1;
	}
	return unk_0x36C1DE668967177B();
}

int func_13(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13)//Position - 0xA7A
{
	if (!func_14(iParam0))
	{
		if (unk_0xF49912B78E2591B6())
		{
			if (unk_0x43AECC0539840131(&uParam1))
			{
				return 0;
			}
		}
		if (!unk_0x5553DFDA03631860(0))
		{
			if (!unk_0x5553DFDA03631860(1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_14(int iParam0)//Position - 0xAB7
{
	switch (iParam0)
	{
		case 63:
		case 62:
		case 61:
		case 40:
			return 1;
		
		default:
	}
	return 0;
}

void func_15(bool bParam0)//Position - 0xAE3
{
	int iVar0;
	
	if (bParam0)
	{
		if (!unk_0xA76D65C63ED50F67())
		{
			return;
		}
	}
	if (unk_0xF49912B78E2591B6())
	{
		return;
	}
	iVar0 = unk_0x105601648511CC64();
	if (iVar0 < Global_248CCD)
	{
		return;
	}
	if (unk_0xF16DAFF595E80F7C())
	{
		return;
	}
	if (bParam0)
	{
		func_16("INV_NO_XBOXLIVE", -1);
	}
	else
	{
		func_16("INV_RESTRICT", -1);
	}
	Global_248CCD = (iVar0 + 1800000);
}

void func_16(char* sParam0, int iParam1)//Position - 0xB43
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 0, true, iParam1);
}

int func_17(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13)//Position - 0xB5A
{
	if (!func_14(iParam0))
	{
		if (unk_0xF49912B78E2591B6())
		{
			if (unk_0x43AECC0539840131(&uParam1))
			{
				return 0;
			}
		}
		if (!func_18())
		{
			return 1;
		}
	}
	return 0;
}

int func_18()//Position - 0xB8D
{
	if (unk_0x823F3E7DB232ED49() == 0)
	{
		return 0;
	}
	if (unk_0x3E9993F328985CCB())
	{
		if (unk_0xC46C045B74A03589(1, -1))
		{
			if (unk_0x36C1DE668967177B())
			{
				return 1;
			}
		}
	}
	if (unk_0xF7E138CFA19B55E7())
	{
		if (unk_0x5553DFDA03631860(1))
		{
			if (unk_0x36C1DE668967177B())
			{
				return 1;
			}
		}
	}
	if (unk_0xA76D65C63ED50F67() || unk_0xF49912B78E2591B6())
	{
		if (unk_0x7A3896EC51DA2E5E(0, -3, 1))
		{
			return 1;
		}
	}
	if (unk_0x8ACB0C3FACC09467())
	{
		if (unk_0xC46C045B74A03589(0, -1))
		{
			if (unk_0x36C1DE668967177B())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_19(var uParam0)//Position - 0xC13
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (func_23(uParam0))
	{
		return unk_0xFA30DFD0084E92FE(Global_248CD2.f_164[uParam0->f_9 /*75*/].f_A.f_3F, 14);
	}
	if (func_22(uParam0->f_1))
	{
		if (func_21(uParam0))
		{
			return unk_0xFA30DFD0084E92FE(Global_249797.f_1.f_3F, 14);
		}
		return iVar0;
	}
	iVar1 = func_20(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return unk_0xFA30DFD0084E92FE(Global_C2055.f_4[iVar1 /*88*/].f_4C, 14);
		
		case 62:
			return unk_0xFA30DFD0084E92FE(Global_DD9BA.f_4B4[iVar1 /*88*/].f_4C, 14);
		
		case 40:
			return iVar0;
		
		default:
	}
	if (uParam0->f_2 == unk_0xB5CEFD608600A09F())
	{
		return iVar0;
	}
	else if (uParam0->f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

int func_20(var uParam0)//Position - 0xCEF
{
	int iVar0;
	
	if (unk_0xF1734B55490E9045(&(uParam0->f_3)))
	{
		return -1;
	}
	if (func_22(uParam0->f_1))
	{
		if (func_21(uParam0))
		{
			return 9999;
		}
		return -1;
	}
	iVar0 = 0;
	switch (uParam0->f_2)
	{
		case 63:
			if (unk_0xFA30DFD0084E92FE(Global_C2055.f_4[uParam0->f_1 /*88*/].f_4C, 13))
			{
				if (unk_0x3362CDE8460ED38B(&(Global_C2055.f_4[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!unk_0xFA30DFD0084E92FE(Global_C2055.f_4[uParam0->f_1 /*88*/].f_4C, 13))
			{
				if (Global_14010B.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 1118)
			{
				if (unk_0xFA30DFD0084E92FE(Global_C2055.f_4[iVar0 /*88*/].f_4C, 13))
				{
					if (unk_0x3362CDE8460ED38B(&(Global_C2055.f_4[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 62:
			if (unk_0xFA30DFD0084E92FE(Global_DD9BA.f_4B4[uParam0->f_1 /*88*/].f_4C, 13))
			{
				if (unk_0x3362CDE8460ED38B(&(Global_DD9BA.f_4B4[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!unk_0xFA30DFD0084E92FE(Global_DD9BA.f_4B4[uParam0->f_1 /*88*/].f_4C, 13))
			{
				if (Global_14010B.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 200)
			{
				if (unk_0xFA30DFD0084E92FE(Global_DD9BA.f_4B4[iVar0 /*88*/].f_4C, 13))
				{
					if (unk_0x3362CDE8460ED38B(&(Global_DD9BA.f_4B4[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 40:
			return uParam0->f_1;
		
		default:
	}
	if (uParam0->f_2 == unk_0xB5CEFD608600A09F())
	{
		if (unk_0xFA30DFD0084E92FE(Global_E82A8.f_5[uParam0->f_1 /*88*/].f_4C, 13))
		{
			if (unk_0x3362CDE8460ED38B(&(Global_E82A8.f_5[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
			{
				return uParam0->f_1;
			}
		}
		if (unk_0xFA30DFD0084E92FE(Global_E82A8.f_5[uParam0->f_1 /*88*/].f_4C, 13))
		{
			if (Global_14010B.f_5)
			{
				return -1;
			}
		}
		iVar0 = 0;
		while (iVar0 < 62)
		{
			if (unk_0xFA30DFD0084E92FE(Global_E82A8.f_5[iVar0 /*88*/].f_4C, 13))
			{
				if (unk_0x3362CDE8460ED38B(&(Global_E82A8.f_5[iVar0 /*88*/]), &(uParam0->f_3)))
				{
					uParam0->f_1 = iVar0;
					return iVar0;
				}
			}
			iVar0++;
		}
		return -1;
	}
	else if (uParam0->f_2 < 32)
	{
		return -1;
	}
	return -1;
}

int func_21(var uParam0)//Position - 0xF5F
{
	if (Global_249797)
	{
		if (unk_0x3362CDE8460ED38B(&(Global_249797.f_1), &(uParam0->f_3)))
		{
			return 1;
		}
	}
	return 0;
}

bool func_22(int iParam0)//Position - 0xF84
{
	return iParam0 == 9999;
}

int func_23(var uParam0)//Position - 0xF92
{
	int iVar0;
	
	iVar0 = uParam0->f_9;
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!Global_248CD2.f_164[iVar0 /*75*/])
	{
		return 0;
	}
	if (!unk_0x3362CDE8460ED38B(&(Global_248CD2.f_164[iVar0 /*75*/].f_A), &(uParam0->f_3)))
	{
		return 0;
	}
	if (!unk_0xFA30DFD0084E92FE(Global_248CD2.f_164[iVar0 /*75*/].f_5, 3))
	{
		return 0;
	}
	return 1;
}

int func_24(var uParam0)//Position - 0xFF5
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_20(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_C2055.f_4[iVar1 /*88*/].f_50;
		
		case 62:
			return iVar0;
		
		default:
	}
	return iVar0;
}

int func_25(var uParam0)//Position - 0x103E
{
	struct<13> Var0;
	int iVar1;
	int iVar2;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_C = -1;
	iVar1 = 0;
	iVar2 = func_20(uParam0);
	if (iVar2 == -1)
	{
		return iVar1;
	}
	switch (uParam0->f_2)
	{
		case 63:
			Var0 = { func_26(uParam0) };
			return Var0.f_1;
		
		case 62:
			return iVar1;
		
		default:
	}
	return iVar1;
}

struct<13> func_26(var uParam0)//Position - 0x10A5
{
	struct<13> Var0;
	int iVar1;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_C = -1;
	iVar1 = func_20(uParam0);
	if (iVar1 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_C2055.f_18055[iVar1 /*13*/];
		
		case 62:
			return Global_DD9BA.f_4975[iVar1 /*13*/];
		
		default:
	}
	return Var0;
}

int func_27(var uParam0)//Position - 0x111C
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (func_23(uParam0))
	{
		return unk_0xFA30DFD0084E92FE(Global_248CD2.f_164[uParam0->f_9 /*75*/].f_A.f_3F, 17);
	}
	if (func_22(uParam0->f_1))
	{
		if (func_21(uParam0))
		{
			return unk_0xFA30DFD0084E92FE(Global_249797.f_1.f_3F, 17);
		}
		return iVar0;
	}
	iVar1 = func_20(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return unk_0xFA30DFD0084E92FE(Global_C2055.f_4[iVar1 /*88*/].f_4C, 17);
		
		case 62:
			return unk_0xFA30DFD0084E92FE(Global_DD9BA.f_4B4[iVar1 /*88*/].f_4C, 17);
		
		case 40:
			return iVar0;
		
		default:
	}
	if (uParam0->f_2 == unk_0xB5CEFD608600A09F())
	{
		return iVar0;
	}
	else if (uParam0->f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

int func_28(var uParam0, bool bParam1)//Position - 0x11F8
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!bParam1)
	{
		if (func_23(uParam0))
		{
			if (unk_0xFA30DFD0084E92FE(Global_14041C.f_1[uParam0->f_9 /*2*/], 0))
			{
				return Global_24981D.f_201[uParam0->f_9];
			}
		}
	}
	if (func_22(uParam0->f_1))
	{
		if (func_21(uParam0))
		{
			return Global_249797.f_1.f_36;
		}
		return iVar0;
	}
	iVar1 = func_20(uParam0);
	if (iVar1 == -1)
	{
		return 0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_C2055.f_4[iVar1 /*88*/].f_36;
		
		case 62:
			return Global_DD9BA.f_4B4[iVar1 /*88*/].f_36;
		
		case 40:
			return 0;
		
		default:
	}
	if (uParam0->f_2 == unk_0xB5CEFD608600A09F())
	{
		return Global_E82A8.f_5[iVar1 /*88*/].f_36;
	}
	else if (uParam0->f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

struct<16> func_29(var uParam0)//Position - 0x12DA
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "NO DESCRIPTION", 64);
	if (func_23(uParam0))
	{
		return Global_248CD2.f_164[uParam0->f_9 /*75*/].f_A.f_1C;
	}
	if (func_22(uParam0->f_1))
	{
		if (func_21(uParam0))
		{
			return Global_249797.f_1.f_1C;
		}
		return Var0;
	}
	iVar1 = func_20(uParam0);
	if (iVar1 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_C2055.f_4[iVar1 /*88*/].f_26;
		
		case 62:
			return Global_DD9BA.f_4B4[iVar1 /*88*/].f_26;
		
		case 40:
			return Var0;
		
		default:
	}
	if (uParam0->f_2 == unk_0xB5CEFD608600A09F())
	{
		return Global_E82A8.f_5[iVar1 /*88*/].f_26;
	}
	else if (uParam0->f_2 < 32)
	{
		return Var0;
	}
	return Var0;
}

struct<16> func_30(var uParam0, bool bParam1)//Position - 0x13CA
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "UNKNOWN", 64);
	if (bParam1)
	{
		StringCopy(&Var0, "", 64);
	}
	if (!bParam1)
	{
		if (func_23(uParam0))
		{
			if (unk_0xFA30DFD0084E92FE(Global_14041C.f_1[uParam0->f_9 /*2*/], 0))
			{
				return Global_24981D[uParam0->f_9 /*16*/];
			}
			return Global_248CD2.f_164[uParam0->f_9 /*75*/].f_A.f_C;
		}
	}
	if (func_22(uParam0->f_1))
	{
		if (func_21(uParam0))
		{
			return Global_249797.f_1.f_C;
		}
		return Var0;
	}
	iVar1 = func_20(uParam0);
	if (iVar1 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_C2055.f_4[iVar1 /*88*/].f_16;
		
		case 62:
			return Global_DD9BA.f_4B4[iVar1 /*88*/].f_16;
		
		case 40:
			return Var0;
		
		default:
	}
	if (uParam0->f_2 == unk_0xB5CEFD608600A09F())
	{
		return Global_E82A8.f_5[iVar1 /*88*/].f_16;
	}
	else if (uParam0->f_2 < 32)
	{
		return Var0;
	}
	return Var0;
}

int func_31(var uParam0)//Position - 0x14EF
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	if (func_23(uParam0))
	{
		return Global_248CD2.f_164[uParam0->f_9 /*75*/].f_A.f_37;
	}
	if (func_22(uParam0->f_1))
	{
		if (func_21(uParam0))
		{
			return Global_249797.f_1.f_37;
		}
		return iVar0;
	}
	iVar1 = func_20(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_C2055.f_4[iVar1 /*88*/].f_44;
		
		case 62:
			return Global_DD9BA.f_4B4[iVar1 /*88*/].f_44;
		
		case 40:
			return iVar0;
		
		default:
	}
	if (uParam0->f_2 == unk_0xB5CEFD608600A09F())
	{
		return Global_E82A8.f_5[iVar1 /*88*/].f_44;
	}
	else if (uParam0->f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

int func_32(int iParam0, int iParam1)//Position - 0x15BD
{
	if (func_22(iParam1))
	{
		if (Global_249797)
		{
			return Global_249797.f_1.f_35;
		}
		return 251;
	}
	switch (iParam0)
	{
		case 63:
			return Global_C2055.f_4[iParam1 /*88*/].f_41;
		
		case 62:
			return Global_DD9BA.f_4B4[iParam1 /*88*/].f_41;
		
		default:
	}
	if (iParam0 == unk_0xB5CEFD608600A09F())
	{
		return Global_E82A8.f_5[iParam1 /*88*/].f_41;
	}
	else if (iParam0 < 32)
	{
		return 251;
	}
	return 251;
}

int func_33(char* sParam0, var uParam1, bool bParam2)//Position - 0x1643
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0x7AF0088ABFA713B6())
	{
		return 0;
	}
	if (unk_0xF1734B55490E9045(sParam0))
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = -1;
	iVar2 = 1118;
	if (!bParam2)
	{
		iVar2 = 1100;
	}
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		if (unk_0xFA30DFD0084E92FE(Global_C2055.f_4[iVar0 /*88*/].f_4C, 13))
		{
			if (unk_0x3362CDE8460ED38B(&(Global_C2055.f_4[iVar0 /*88*/]), sParam0))
			{
				iVar1 = Global_C2055.f_4[iVar0 /*88*/].f_41;
				*uParam1 = func_34(iVar1);
				uParam1->f_1 = iVar0;
				uParam1->f_2 = 63;
				uParam1->f_3 = { Global_C2055.f_4[iVar0 /*88*/] };
				uParam1->f_9 = -1;
				return 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 200)
	{
		if (unk_0xFA30DFD0084E92FE(Global_DD9BA.f_4B4[iVar0 /*88*/].f_4C, 13))
		{
			if (unk_0x3362CDE8460ED38B(&(Global_DD9BA.f_4B4[iVar0 /*88*/]), sParam0))
			{
				iVar1 = Global_DD9BA.f_4B4[iVar0 /*88*/].f_41;
				*uParam1 = func_34(iVar1);
				uParam1->f_1 = iVar0;
				uParam1->f_2 = 62;
				uParam1->f_3 = { *sParam0 };
				uParam1->f_9 = -1;
				return 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 62)
	{
		if (unk_0xFA30DFD0084E92FE(Global_E82A8.f_5[iVar0 /*88*/].f_4C, 13))
		{
			if (unk_0x3362CDE8460ED38B(&(Global_E82A8.f_5[iVar0 /*88*/]), sParam0))
			{
				iVar1 = Global_E82A8.f_5[iVar0 /*88*/].f_41;
				*uParam1 = func_34(iVar1);
				uParam1->f_1 = iVar0;
				uParam1->f_2 = unk_0xB5CEFD608600A09F();
				uParam1->f_3 = { *sParam0 };
				uParam1->f_9 = -1;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_34(int iParam0)//Position - 0x17DB
{
	switch (iParam0)
	{
		case 15:
			return 142;
		
		case 14:
			return 143;
		
		case 122:
			return 147;
		
		case 11:
			return 144;
		
		case 13:
			return 145;
		
		case 12:
			return 146;
		
		case 8:
			return 149;
		
		case 1:
			return 150;
		
		case 5:
			return 148;
		
		case 6:
			return 151;
		
		case 3:
			return 154;
		
		case 0:
			return 152;
		
		case 2:
			return 153;
		
		case 148:
			return 49;
		
		case 151:
			return 52;
		
		case 152:
			return 53;
		
		case 157:
			return 54;
		
		case 153:
			return 55;
		
		case 154:
			return 56;
		
		case 155:
			return 57;
		
		case 159:
			return 58;
		
		case 162:
			return 51;
		
		case 142:
			return 60;
		
		case 160:
			return 62;
		
		case 164:
			return 63;
		
		case 163:
			return 64;
		
		case 166:
			return 65;
		
		case 167:
			return 66;
		
		case 168:
			return 67;
		
		case 169:
			return 68;
		
		case 170:
			return 69;
		
		case 171:
			return 70;
		
		case 172:
			return 71;
		
		case 173:
			return 72;
		
		case 178:
			return 73;
		
		case 188:
			return 74;
		
		case 214:
			return 75;
		
		case 215:
			return 76;
		
		case 216:
			return 77;
		
		case 217:
			return 78;
		
		case 218:
			return 79;
		
		case 219:
			return 80;
		
		case 220:
			return 81;
		
		case 221:
			return 82;
		
		case 179:
			return 84;
		
		case 189:
			return 83;
		
		case 180:
			return 85;
		
		case 182:
			return 86;
		
		case 183:
			return 87;
		
		case 185:
			return 88;
		
		case 186:
			return 89;
		
		case 190:
			return 90;
		
		case 191:
			return 91;
		
		case 192:
			return 92;
		
		case 193:
			return 93;
		
		case 205:
			return 101;
		
		case 194:
			return 94;
		
		case 197:
			return 95;
		
		case 198:
			return 96;
		
		case 195:
			return 97;
		
		case 199:
			return 98;
		
		case 200:
			return 99;
		
		case 201:
			return 100;
		
		case 207:
			return 102;
		
		case 208:
			return 103;
		
		case 209:
			return 104;
		
		case 210:
			return 105;
		
		case 225:
			return 106;
		
		case 226:
			return 107;
		
		case 227:
			return 108;
		
		case 229:
			return 109;
		
		case 230:
			return 110;
		
		case 233:
			return 112;
		
		case 237:
			return 114;
		
		case 238:
			return 115;
		
		case 249:
			return 122;
		
		case 239:
			return 116;
		
		case 240:
			return 117;
		
		case 241:
			return 118;
		
		case 242:
			return 119;
		
		case 244:
			return 120;
		
		case 248:
			return 121;
		
		case 250:
			return 123;
		
		default:
	}
	return 0;
}

int func_35(char* sParam0, int iParam1, int iParam2)//Position - 0x1B7C
{
	int iVar0;
	char[] cVar1[8];
	char cVar2[16];
	char[] cVar3[8];
	
	if (unk_0xF1734B55490E9045(sParam0))
	{
		return 0;
	}
	iVar0 = unk_0xF5429F058A48A07C(sParam0);
	if (!iVar0 > 12)
	{
		return 0;
	}
	StringCopy(&cVar1, unk_0x4CA86FDC32570015(sParam0, 0, 5), 8);
	if (!unk_0x3362CDE8460ED38B(&cVar1, "FAKE_"))
	{
		return 0;
	}
	StringCopy(&cVar2, unk_0x4CA86FDC32570015(sParam0, 5, 12), 16);
	if (unk_0x3362CDE8460ED38B(&cVar2, "GOLF___"))
	{
		*iParam1 = 11;
	}
	else if (unk_0x3362CDE8460ED38B(&cVar2, "TENNIS_"))
	{
		*iParam1 = 12;
	}
	else if (unk_0x3362CDE8460ED38B(&cVar2, "PILOTS_"))
	{
		*iParam1 = 122;
	}
	else if (unk_0x3362CDE8460ED38B(&cVar2, "SHOOTR_"))
	{
		*iParam1 = 13;
	}
	else if (unk_0x3362CDE8460ED38B(&cVar2, "DARTS__"))
	{
		*iParam1 = 14;
	}
	else if (unk_0x3362CDE8460ED38B(&cVar2, "ARMWRS_"))
	{
		*iParam1 = 15;
	}
	else
	{
		return 0;
	}
	StringCopy(&cVar3, unk_0x4CA86FDC32570015(sParam0, 12, iVar0), 8);
	if (!unk_0x94FA6AFEA819AB24(&cVar3, iParam2))
	{
		return 0;
	}
	return 1;
}

void func_36(var uParam0)//Position - 0x1C6B
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	StringCopy(&(uParam0->f_3), "", 24);
	uParam0->f_9 = -1;
}

void func_37(int iParam0)//Position - 0x1C8E
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 >= Global_14F519)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if (unk_0x105601648511CC64() > Global_248C9C[iVar0 /*4*/].f_2 || Global_248C9C[iVar0 /*4*/].f_2 == 0)
		{
			if (unk_0x0F2C8D019FA37423() > 0 && Global_24839F[iParam0 /*99*/].f_5B < unk_0x0F2C8D019FA37423())
			{
				Global_248C9C[iVar0 /*4*/].f_3 = unk_0x51DC28833353D7ED(Global_24839F[iParam0 /*99*/].f_5B);
				Global_248C9C[iVar0 /*4*/].f_2 = unk_0x105601648511CC64() + 30000;
				iVar0 = 12;
			}
		}
		iVar0++;
	}
	if (Global_24839F[iParam0 /*99*/].f_5C != -1)
	{
		unk_0x8C563C8EA840EA02(Global_24839F[iParam0 /*99*/].f_5C);
	}
	if (!Global_24839F[iParam0 /*99*/].f_38)
	{
		if (Global_24839F[iParam0 /*99*/].f_34 != 0)
		{
			unk_0x5D81ECD75D8C2F43(Global_24839F[iParam0 /*99*/].f_34);
		}
	}
	func_45(Global_24839F[iParam0 /*99*/].f_5B);
	iVar1 = iParam0;
	iVar2 = iVar1 + 1;
	while (iVar2 < Global_14F519)
	{
		Global_24839F[iVar1 /*99*/] = { Global_24839F[iVar2 /*99*/] };
		iVar1++;
		iVar2++;
	}
	func_39(iVar1);
	Global_14F519 = (Global_14F519 - 1);
	if (Global_14F4FE)
	{
		if (Global_14F4FC > 0)
		{
			func_38();
		}
	}
}

void func_38()//Position - 0x1DD6
{
	Global_14F4FE = 0;
}

void func_39(int iParam0)//Position - 0x1DE3
{
	Global_24839F[iParam0 /*99*/] = 0;
	Global_24839F[iParam0 /*99*/].f_1 = 0;
	Global_24839F[iParam0 /*99*/].f_5 = 0;
	StringCopy(&(Global_24839F[iParam0 /*99*/].f_F), "", 64);
	StringCopy(&(Global_24839F[iParam0 /*99*/].f_1F), "", 64);
	Global_24839F[iParam0 /*99*/].f_2F = -1;
	Global_24839F[iParam0 /*99*/].f_30 = unk_0x105601648511CC64();
	Global_24839F[iParam0 /*99*/].f_31 = -1;
	Global_24839F[iParam0 /*99*/].f_32 = -1;
	Global_24839F[iParam0 /*99*/].f_33 = -1;
	Global_24839F[iParam0 /*99*/].f_34 = 0;
	Global_24839F[iParam0 /*99*/].f_35 = 0;
	Global_24839F[iParam0 /*99*/].f_35.f_1 = 0;
	Global_24839F[iParam0 /*99*/].f_35.f_2 = 0;
	Global_24839F[iParam0 /*99*/].f_38 = 0;
	StringCopy(&(Global_24839F[iParam0 /*99*/].f_39), "", 64);
	StringCopy(&(Global_24839F[iParam0 /*99*/].f_49), "", 64);
	Global_24839F[iParam0 /*99*/].f_59 = 0;
	Global_24839F[iParam0 /*99*/].f_5A = 0;
	Global_24839F[iParam0 /*99*/].f_5B = -1;
	Global_24839F[iParam0 /*99*/].f_5C = -1;
	Global_24839F[iParam0 /*99*/].f_5D = 0;
	Global_24839F[iParam0 /*99*/].f_5E = -1;
	Global_24839F[iParam0 /*99*/].f_5F = 0;
	Global_24839F[iParam0 /*99*/].f_60 = 0;
	Global_24839F[iParam0 /*99*/].f_61 = 0;
	Global_24839F[iParam0 /*99*/].f_62 = 0;
}

int func_40(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15)//Position - 0x1F25
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_14F519)
	{
		if (unk_0x3362CDE8460ED38B(&uParam0, &(Global_24839F[iVar0 /*99*/].f_F)))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_41(int iParam0)//Position - 0x1F5E
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_8E, 22);
}

bool func_42(bool bParam0)//Position - 0x1F77
{
	if (!bParam0 && unk_0xB731B8C5BCE89836(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_1163A, 0);
}

int func_43()//Position - 0x1FA2
{
	if (Global_19B04.f_2360.f_14A[0 /*6*/])
	{
		return 1;
	}
	return 0;
}

bool func_44()//Position - 0x1FBF
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_8E, 2);
}

void func_45(var uParam0)//Position - 0x1FD9
{
	int iVar0;
	
	iVar0 = unk_0x74634CEB24A9CAAF(uParam0);
	if (iVar0 < 0 || iVar0 >= unk_0x0F2C8D019FA37423())
	{
		return;
	}
	if (unk_0x12D7EA0C4978CE88(iVar0))
	{
		return;
	}
}

bool func_46()//Position - 0x200C
{
	return Global_14082E == 10;
}

int func_47()//Position - 0x201B
{
	if (!Global_11542)
	{
		return 1;
	}
	else if (func_48())
	{
		return 1;
	}
	return 0;
}

int func_48()//Position - 0x203E
{
	if (Global_1406BE)
	{
		return 1;
	}
	if (func_53())
	{
		return 1;
	}
	if (func_52())
	{
		return 1;
	}
	return func_49(120, -1);
}

int func_49(int iParam0, int iParam1)//Position - 0x206E
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2705A2[iParam0 /*3*/][func_50(iParam1)];
	if (unk_0x9CADE88F210A0BAE(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_50(var uParam0)//Position - 0x209A
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_51();
		if (iVar1 > -1)
		{
			Global_269AA6 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_269AA6 = 1;
		}
	}
	return iVar0;
}

int func_51()//Position - 0x20CE
{
	return Global_1407E0;
}

bool func_52()//Position - 0x20DA
{
	return Global_14084A;
}

bool func_53()//Position - 0x20E6
{
	return Global_14084C;
}

void func_54(var uParam0, int iParam1)//Position - 0x20F2
{
	int iVar0;
	
	iVar0 = iParam1;
	if (iVar0 == -1)
	{
		iVar0 = func_51();
	}
	Global_140842[iVar0] = uParam0;
}

void func_55(int iParam0)//Position - 0x2114
{
	func_105();
	if (func_104(1))
	{
		if (!func_95())
		{
			if (!func_84(1))
			{
				if (unk_0x517823CA390A19F6())
				{
					func_83();
				}
				func_58(1, 0);
				unk_0xB8D9B25B8C571B90(iParam0);
				func_57();
				func_56();
			}
		}
	}
}

void func_56()//Position - 0x2159
{
	Global_193A13.f_7 = 1;
}

void func_57()//Position - 0x2168
{
	Global_193A13.f_6 = 1;
}

void func_58(int iParam0, bool bParam1)//Position - 0x2177
{
	if (func_104(iParam0))
	{
		Global_193A13.f_10[iParam0 /*44*/].f_5 = 1;
		func_60(iParam0, 0);
		func_59();
		if (bParam1)
		{
			Global_193A13 = 1;
		}
	}
}

void func_59()//Position - 0x21AA
{
	Global_193A13.f_2 = 1;
}

void func_60(int iParam0, bool bParam1)//Position - 0x21B9
{
	struct<6> Var0;
	
	if (!unk_0x517823CA390A19F6())
	{
		if (bParam1)
		{
			func_82();
			func_72(unk_0xB5CEFD608600A09F(), 0, 81920);
			Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_62 = 8;
			func_71();
			func_70();
		}
		func_69(iParam0);
		func_68(iParam0);
		func_66();
		func_65();
		func_59();
	}
	Var0 = { func_64(iParam0) };
	func_63(iParam0);
	func_61(&Var0);
}

void func_61(char* sParam0)//Position - 0x2224
{
	StringCopy(&(Global_255A46.f_2EA), sParam0, 24);
	if (func_62())
	{
		StringCopy(&(Global_ED138.f_2A), sParam0, 24);
	}
}

bool func_62()//Position - 0x2248
{
	return unk_0xFA30DFD0084E92FE(Global_255D53.f_1.f_AF9, 5);
}

void func_63(int iParam0)//Position - 0x225E
{
	Global_193A13.f_10[iParam0 /*44*/].f_3 = 1;
}

struct<6> func_64(int iParam0)//Position - 0x2273
{
	return Global_193A13.f_10[iParam0 /*44*/].f_6;
}

void func_65()//Position - 0x2289
{
	Global_255A46.f_6 = 100;
}

void func_66()//Position - 0x2299
{
	unk_0xF0059F27F7BB6680(&Global_255A46, 5);
	func_67();
}

void func_67()//Position - 0x22AE
{
	unk_0xF0059F27F7BB6680(&Global_255A46, 8);
}

void func_68(var uParam0)//Position - 0x22C0
{
	Global_193A13.f_8 = uParam0;
}

void func_69(var uParam0)//Position - 0x22D0
{
	Global_193A13.f_9 = uParam0;
}

void func_70()//Position - 0x22E0
{
	Global_2579BD.f_1 = 0;
}

void func_71()//Position - 0x22EF
{
	char* sVar0;
	
	StringCopy(&(Global_255A46.f_2EA), sVar0, 24);
}

void func_72(int iParam0, bool bParam1, int iParam2)//Position - 0x2302
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	int iVar25;
	int iVar26;
	
	if (bParam1)
	{
		if (unk_0x778F0492FD6A3D74())
		{
			unk_0xC4248B71D9B26306(false);
		}
	}
	if (!unk_0x7AF0088ABFA713B6())
	{
		iVar0 = iParam2;
		unk_0xDDCAA2E64649E083(iParam0, bParam1, iVar0);
	}
	else
	{
		bVar1 = iParam2 & 2 != false;
		bVar2 = iParam2 & 4 != false;
		bVar3 = iParam2 & 8 != false;
		bVar4 = iParam2 & 16 != false;
		bVar5 = iParam2 & 32 != false;
		bVar6 = iParam2 & 64 != false;
		bVar7 = iParam2 & 128 != false;
		bVar8 = iParam2 & 256 != false;
		bVar9 = iParam2 & 512 != false;
		bVar10 = iParam2 & 1024 != false;
		bVar11 = iParam2 & 2048 != false;
		bVar12 = iParam2 & 4096 != false;
		bVar13 = iParam2 & 8192 != false;
		bVar14 = iParam2 & 16384 != false;
		bVar15 = iParam2 & 32768 != false;
		bVar16 = iParam2 & 65536 != false;
		bVar17 = iParam2 & 131072 != false;
		bVar18 = iParam2 & 262144 != false;
		bVar19 = iParam2 & 524288 != false;
		bVar20 = iParam2 & 1048576 != false;
		bVar21 = iParam2 & 2097152 != false;
		bVar22 = iParam2 & 4194304 != false;
		bVar23 = iParam2 & 8388608 != false;
		if (!func_80())
		{
			bVar24 = false;
			if (bParam1 == 1)
			{
				bVar24 = true;
			}
			if (bVar15 == 0 && !bVar20)
			{
				bVar24 = true;
			}
			if (bVar9 == 1)
			{
				bVar24 = true;
			}
			if (bVar24)
			{
				return;
			}
		}
		if (bVar17)
		{
		}
		if (unk_0x96B1061E8F3CBC9A(iParam0) && unk_0x6A9CDB766DF7216F(iParam0))
		{
			iVar25 = unk_0xA95CF30C72EB526E(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && unk_0x7AF0088ABFA713B6())
				{
					unk_0x32E44624A62DB55D(1);
				}
				else if (bVar13 || (!func_78(unk_0xB5CEFD608600A09F(), 0) && !func_77()))
				{
					unk_0xDC078F87049ECECE(iVar25, !bVar13, 0);
				}
				if (!bVar13)
				{
					if (unk_0x7AF0088ABFA713B6() && !bVar18)
					{
						unk_0x32E44624A62DB55D(0);
					}
					Global_24FB5C[iParam0 /*406*/].f_F0 = 0;
				}
			}
			if (bParam1)
			{
				if (!func_76(iVar25) && !unk_0xE55B9B1B2A172FD4(iVar25))
				{
					if (!bVar21)
					{
						unk_0xD434A01DEA38A939(iVar25, true, 0);
					}
				}
				if (!unk_0xE7E55F7532DEE345(iVar25))
				{
					if (!bVar20)
					{
						unk_0x346478B12F69D4E3(iVar25, false);
					}
					unk_0x656194E145691D3E(iVar25, 1);
				}
				else if (!bVar20)
				{
					unk_0x346478B12F69D4E3(iVar25, false);
				}
				unk_0xB105531EDD3DE51B(iVar25, true);
				unk_0x3D7FF8418367D451(iParam0, 0);
				if (unk_0xE58FD1D062663A04(iVar25) && unk_0xCF9FD9F078487083(iVar25))
				{
					unk_0xF1B63714B0383791(iVar25);
				}
				unk_0xF1FC2182A76AD7FC(iVar25, 1);
				if (unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F()) == 0)
				{
					func_75();
					func_74();
				}
				if (unk_0x9C8234ED756EFA0E())
				{
					if (!bVar22)
					{
					}
				}
				if (unk_0x719413B40BB63D86())
				{
				}
				Global_24FB5C[iParam0 /*406*/].f_F1 = 0;
				if (!bVar23)
				{
					bVar2 = true;
				}
			}
			else
			{
				if (!func_76(iVar25) && !unk_0xE55B9B1B2A172FD4(iVar25))
				{
					if (!bVar21)
					{
						unk_0xD434A01DEA38A939(iVar25, !bVar14, 0);
					}
					if (!unk_0xE7E55F7532DEE345(iVar25))
					{
						if (!bVar20)
						{
							unk_0x346478B12F69D4E3(iVar25, bVar15);
						}
						if (!bVar15)
						{
							unk_0x656194E145691D3E(iVar25, 1);
						}
					}
					if (func_73(Global_440000.f_243FE))
					{
						unk_0x346478B12F69D4E3(iVar25, true);
					}
				}
				if (Global_14083F)
				{
					bVar9 = false;
				}
				if (bVar9)
				{
					unk_0x3D7FF8418367D451(iParam0, 0);
				}
				else
				{
					unk_0x3D7FF8418367D451(iParam0, 1);
				}
				unk_0xB105531EDD3DE51B(iVar25, bVar16);
				if (bVar2)
				{
					if (!unk_0xC3532F7D5B045BFC(iVar25) && !unk_0x5237AF95232D78C5(iVar25, 0))
					{
						unk_0x49D46EE47C9CCB66(iVar25);
					}
				}
			}
			iVar26 = 0;
			if (bVar1)
			{
				iVar26 |= 2;
			}
			if (bVar2)
			{
				iVar26 |= 4;
			}
			if (bVar3)
			{
				iVar26 |= 8;
			}
			if (bVar4)
			{
				iVar26 |= 16;
			}
			if (bVar5)
			{
				iVar26 |= 32;
			}
			if (bVar6)
			{
				iVar26 |= 64;
			}
			if (bVar7)
			{
				iVar26 |= 128;
			}
			if (bVar8)
			{
				iVar26 |= 256;
			}
			if (bVar9)
			{
				iVar26 |= 512;
			}
			if (bVar10)
			{
				iVar26 |= 1024;
			}
			if (bVar11)
			{
				iVar26 |= 2048;
			}
			if (bVar12)
			{
				iVar26 |= 4096;
			}
			unk_0xDDCAA2E64649E083(iParam0, bParam1, iVar26);
		}
	}
}

bool func_73(int iParam0)//Position - 0x2702
{
	return iParam0 == 17;
}

void func_74()//Position - 0x270F
{
	vector3 vVar0;
	
	Global_252E21.f_4CC = 0;
	Global_252E21.f_4CD = 0;
	Global_252E21.f_4CE = { 9999.9f, 9999.9f, 9999.9f };
	Global_252E21.f_4D3 = -1;
	Global_252E21.f_4D4 = 0;
	Global_24B2CE.f_A6F = { vVar0 };
}

void func_75()//Position - 0x275C
{
	Global_24B2CE.f_2B2 = 0;
	Global_24B2CE.f_A9A = 0;
	Global_24B2CE.f_1FC = 0;
	Global_24B2CE.f_254 = 0;
	Global_24FB5C[unk_0xB5CEFD608600A09F() /*406*/].f_CB = 0;
	Global_24B2CE.f_A6E = 0;
}

int func_76(int iParam0)//Position - 0x279A
{
	int iVar0;
	
	if (unk_0x5237AF95232D78C5(iParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0xF4FCC3C1048FF2AB(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_77()//Position - 0x27CB
{
	return unk_0xFA30DFD0084E92FE(Global_240006, 3);
}

bool func_78(int iParam0, int iParam1)//Position - 0x27DC
{
	bool bVar0;
	
	if (iParam0 == unk_0xB5CEFD608600A09F())
	{
		bVar0 = func_79(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_18402B[iParam0 /*770*/].f_D3 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x96B1061E8F3CBC9A(iParam0))
		{
			bVar0 = unk_0x343CB262BF0CDF5A(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_79(int iParam0, bool bParam1)//Position - 0x2827
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_51();
	}
	if (Global_140842[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1407DA[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_80()//Position - 0x2868
{
	if (func_81() == 0)
	{
		return 1;
	}
	return 0;
}

int func_81()//Position - 0x287D
{
	return Global_1406D2.f_12;
}

void func_82()//Position - 0x288B
{
	unk_0xF0059F27F7BB6680(&Global_255A46, 7);
}

void func_83()//Position - 0x289C
{
	unk_0xF0059F27F7BB6680(&(Global_255A46.f_2), 15);
}

int func_84(int iParam0)//Position - 0x28B0
{
	if (iParam0 || func_94())
	{
		if (!func_86(1))
		{
			return 1;
		}
		if (!func_85())
		{
			return 1;
		}
		if (unk_0x8BEB5B1064243AE5())
		{
			return 1;
		}
	}
	return 0;
}

bool func_85()//Position - 0x28EC
{
	return Global_193A13.f_4;
}

int func_86(bool bParam0)//Position - 0x28FA
{
	if (!func_91())
	{
		return 0;
	}
	if ((func_89(func_90(-1), 0) >= 1 || func_49(123, -1)) && func_49(133, -1))
	{
		func_88();
		return 1;
	}
	else if (bParam0)
	{
		func_87();
	}
	return 0;
}

void func_87()//Position - 0x294B
{
	Global_193A13.f_5 = 1;
}

void func_88()//Position - 0x295A
{
	Global_193A13.f_4 = 1;
}

int func_89(int iParam0, int iParam1)//Position - 0x2969
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_45E53[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_45E53[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((SYSTEM::TO_FLOAT(iVar1) - SYSTEM::TO_FLOAT(iVar2)) / 2f) + SYSTEM::TO_FLOAT(iVar2));
		iVar3 = SYSTEM::ROUND(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_90(int iParam0)//Position - 0x2A28
{
	return Global_14F642[func_50(iParam0)];
}

int func_91()//Position - 0x2A3C
{
	if (func_93() && func_92(0))
	{
		return 1;
	}
	return 0;
}

var func_92(int iParam0)//Position - 0x2A5A
{
	return Global_140675[iParam0];
}

var func_93()//Position - 0x2A6A
{
	return func_92(func_51() + 1);
}

var func_94()//Position - 0x2A7C
{
	return Global_193A13.f_2;
}

int func_95()//Position - 0x2A8A
{
	if (((((func_103() || !func_101(-1)) || !func_99()) || !func_98()) || !func_97()) || func_96())
	{
		return 1;
	}
	return 0;
}

var func_96()//Position - 0x2AD5
{
	return Global_258070;
}

int func_97()//Position - 0x2AE1
{
	if (unk_0x2DC92D46FC48E795(903) == 1)
	{
		return 1;
	}
	return 0;
}

int func_98()//Position - 0x2AFC
{
	int iVar0;
	
	if (unk_0x644782B62ABCAC68(&iVar0) == 0)
	{
		if (iVar0 == 1)
		{
			return 0;
		}
	}
	return 1;
}

int func_99()//Position - 0x2B19
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (func_100(iVar0) == 1)
		{
			iVar0 = 2;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_100(int iParam0)//Position - 0x2B45
{
	if (func_49(76, iParam0) == 1)
	{
		return 1;
	}
	return 0;
}

int func_101(int iParam0)//Position - 0x2B61
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_102(iParam0);
	iVar1 = unk_0x2DC92D46FC48E795(iVar0);
	if (unk_0xFA30DFD0084E92FE(iVar1, 1))
	{
		return 1;
	}
	return 0;
}

int func_102(int iParam0)//Position - 0x2B88
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_51();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 914;
			break;
		
		case 1:
			iVar0 = 915;
			break;
		
		case 2:
			iVar0 = 916;
			break;
		
		case 3:
			iVar0 = 917;
			break;
		
		case 4:
			iVar0 = 918;
			break;
	}
	return iVar0;
}

var func_103()//Position - 0x2BEB
{
	return Global_255A46.f_276;
}

bool func_104(int iParam0)//Position - 0x2BFA
{
	return Global_193A13.f_10[iParam0 /*44*/].f_4;
}

void func_105()//Position - 0x2C0E
{
	int iVar0;
	int iVar1;
	
	func_111();
	if (unk_0x39A337F287613D2E() && !func_108())
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			iVar1 = unk_0xE83EA9EE4434E6EA(func_107(iVar0));
			if (iVar1 > 0)
			{
				Global_193A13.f_10[iVar0 /*44*/] = iVar1;
				func_106(iVar0, iVar1);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			Global_193A13.f_10[iVar0 /*44*/].f_4 = 0;
			iVar0++;
		}
	}
}

void func_106(int iParam0, int iParam1)//Position - 0x2C85
{
	bool bVar0;
	struct<16> Var1;
	var uVar2;
	
	bVar0 = true;
	if (unk_0xBD98192D1F3A007E(iParam1, "contentId", &Var1))
	{
		MemCopy(&(Global_193A13.f_10[iParam0 /*44*/].f_6), {Var1}, 6);
	}
	else
	{
		bVar0 = false;
	}
	if (unk_0xBD98192D1F3A007E(iParam1, "playlist", &Var1))
	{
		Global_193A13.f_10[iParam0 /*44*/].f_C = { Var1 };
	}
	else
	{
		bVar0 = false;
	}
	if (unk_0xBC92736A69A9AA9F(iParam1, &Var1))
	{
		Global_193A13.f_10[iParam0 /*44*/].f_1C = { Var1 };
	}
	else
	{
		bVar0 = false;
	}
	if (iParam0 == 1)
	{
		if (unk_0x73AF1831C739FBF4(iParam1, "coronaCountdown", &uVar2))
		{
			Global_193A13.f_10[iParam0 /*44*/].f_1 = uVar2;
		}
		else
		{
			Global_193A13.f_10[iParam0 /*44*/].f_1 = 120000;
		}
		Global_193A13.f_10[iParam0 /*44*/].f_2 = 0;
		if (unk_0x73AF1831C739FBF4(iParam1, "eventSubType", &uVar2))
		{
			Global_193A13.f_10[iParam0 /*44*/].f_2 = uVar2;
		}
	}
	if (bVar0)
	{
		if (iParam0 != 1)
		{
			Global_193A13.f_1 = 1;
		}
		Global_193A13.f_10[iParam0 /*44*/].f_4 = 1;
	}
	else
	{
		Global_193A13.f_10[iParam0 /*44*/].f_4 = 0;
	}
}

char* func_107(int iParam0)//Position - 0x2D93
{
	switch (iParam0)
	{
		case 0:
			return "TournamentQualifying";
		
		case 1:
			return "Tournament";
		
		case 2:
			return "LiveStreaming";
		
		case 3:
			return "Sweepstakes";
		
		case 4:
			return "FeaturedPlaylist";
		
		default:
	}
	return "";
}

int func_108()//Position - 0x2DE0
{
	if (!func_109())
	{
		return 1;
	}
	return 0;
}

int func_109()//Position - 0x2DF5
{
	if (func_110())
	{
		return 0;
	}
	if (unk_0x670C0C6C780A3F84() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_110()//Position - 0x2E15
{
	return Global_258255;
}

void func_111()//Position - 0x2E21
{
	struct<281> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = 6;
	Global_193A13 = { Var0 };
}

void func_112(int iParam0)//Position - 0x2E4C
{
	var uVar0;
	
	if (Global_11542)
	{
		unk_0xC4BA30B532FE260F(-1, "Hang_Up", "Phone_SoundSet_Michael", 1);
	}
	else
	{
		unk_0xC4BA30B532FE260F(-1, "Hang_Up", &Global_3892, 1);
	}
	if (unk_0x414AA1932D1C88E2(1, iParam0, &uVar0, 21))
	{
		func_114();
	}
	Global_268A34.f_1 = 0;
	Global_268A34.f_21 = -1;
	Global_268A34.f_22 = -1;
	StringCopy(&(Global_268A34.f_4), "", 64);
	func_113(&(Global_268A34.f_14));
}

void func_113(var uParam0)//Position - 0x2EB4
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_A = 0;
	uParam0->f_B = 0;
	uParam0->f_C = 0;
}

void func_114()//Position - 0x2EFC
{
	Global_268A34.f_2 = 1;
	Global_268A34.f_26 = 1;
	if (unk_0x57D316754A262B34())
	{
		if (unk_0x5F1FADF056F1CC85())
		{
			while (unk_0x95FD43CFE24C9F0D())
			{
				SYSTEM::WAIT(0);
			}
			unk_0x20405E3A95992098();
			Global_268A34 = 0;
			Global_268A34.f_2 = 0;
		}
		else if (func_120(Global_268A34.f_14))
		{
			if (unk_0xE140B7178EA00705(&(Global_268A34.f_14)))
			{
				if (!unk_0xCB39420213F43498(&(Global_268A34.f_14)))
				{
					func_119();
				}
			}
		}
		else
		{
			func_119();
		}
	}
	else
	{
		func_119();
	}
	if (Global_268A34.f_25)
	{
		func_115(0);
	}
	Global_268A34.f_25 = 0;
	Global_268A34.f_3 = 0;
}

void func_115(int iParam0)//Position - 0x2F9C
{
	if (Global_3943)
	{
		func_117(0, 0);
	}
	if (Global_389D.f_1 == 10 || Global_389D.f_1 == 9)
	{
		unk_0xF0059F27F7BB6680(&Global_93C, 16);
	}
	if (unk_0x58E7DDFF8D17A82A())
	{
		unk_0x1E08809A5041F85B(false);
	}
	Global_3DB8 = 5;
	if (iParam0 == 1)
	{
		unk_0xF0059F27F7BB6680(&Global_93B, 30);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&Global_93B, 30);
	}
	if (!func_116())
	{
		Global_389D.f_1 = 3;
	}
}

int func_116()//Position - 0x300C
{
	if (Global_389D.f_1 == 1 || Global_389D.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_117(bool bParam0, bool bParam1)//Position - 0x3033
{
	if (bParam0)
	{
		if (func_118(0))
		{
			Global_3943 = 1;
			if (bParam1)
			{
				unk_0x652515566BB40BA9(&Global_385E);
			}
			Global_3855 = { Global_3867[Global_3866 /*3*/] };
			unk_0x3D7D94BDD4D22C14(Global_3855);
		}
	}
	else if (Global_3943 == 1)
	{
		Global_3943 = 0;
		Global_3855 = { Global_386E[Global_3866 /*3*/] };
		if (bParam1)
		{
			unk_0x3D7D94BDD4D22C14(Global_385E);
		}
		else
		{
			unk_0x3D7D94BDD4D22C14(Global_3855);
		}
	}
}

int func_118(int iParam0)//Position - 0x30A7
{
	if (iParam0 == 1)
	{
		if (Global_389D.f_1 > 3)
		{
			if (unk_0xFA30DFD0084E92FE(Global_93B, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xB731B8C5BCE89836(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_389D.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_119()//Position - 0x3101
{
	Global_268A34.f_1 = 0;
	Global_268A34 = 0;
	Global_268A34.f_2 = 0;
	Global_268A34.f_21 = -1;
	Global_268A34.f_22 = -1;
	StringCopy(&(Global_268A34.f_4), "", 64);
	StringCopy(&(Global_268A34.f_27[0 /*16*/]), "", 64);
	Global_268A34.f_26 = 0;
	Global_268A34.f_38 = 0;
	Global_268A34.f_39 = 0;
	Global_268A34.f_3A = -2;
	Global_268A34.f_3 = 0;
	func_113(&(Global_268A34.f_14));
}

bool func_120(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)//Position - 0x3170
{
	return unk_0x700A9F370C80C9E1(&uParam0, 13);
}

void func_121(int iParam0)//Position - 0x3180
{
	struct<2> Var0;
	
	if (unk_0x414AA1932D1C88E2(1, iParam0, &Var0, 15))
	{
		Global_268A34.f_21 = Var0.f_1;
		Global_268A34.f_22 = Var0;
	}
}

void func_122(int iParam0)//Position - 0x31AB
{
	struct<9> Var0;
	
	if (unk_0x414AA1932D1C88E2(1, iParam0, &Var0, 21))
	{
		if (Global_268A34.f_3 == 0)
		{
			if (!func_123(&(Var0.f_8)))
			{
				unk_0xF9E8B7A2F3AC9DB0(0, 2);
			}
			else
			{
				Global_268A34.f_3 = 1;
				MemCopy(&(Global_268A34.f_4), {Var0}, 16);
				Global_268A34.f_14 = { Var0.f_8 };
				StringCopy(&(Global_268A34.f_27[0 /*16*/]), "", 64);
				Global_268A34.f_3A = -2;
				Global_268A34.f_38 = 0;
				Global_268A34.f_39 = 0;
			}
		}
		else if (!func_123(&(Var0.f_8)))
		{
			unk_0xF9E8B7A2F3AC9DB0(0, 2);
		}
		else
		{
			Global_268A34.f_3 = 1;
			MemCopy(&(Global_268A34.f_4), {Var0}, 16);
			Global_268A34.f_14 = { Var0.f_8 };
			StringCopy(&(Global_268A34.f_27[0 /*16*/]), "", 64);
			Global_268A34.f_3A = -2;
			Global_268A34.f_38 = 0;
			Global_268A34.f_39 = 0;
		}
	}
}

int func_123(var uParam0)//Position - 0x328F
{
	if (Global_11542)
	{
		if (func_48() == 0)
		{
			return 0;
		}
		if (func_127(unk_0xB5CEFD608600A09F(), 1, 1))
		{
			if (unk_0x149E9368A11035DE(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x2C13E57F6AC776F8(unk_0xBC25C936A095B5BA()) >= 1f)
				{
					return 0;
				}
			}
		}
	}
	if (unk_0x670C0C6C780A3F84() == 0)
	{
		return 0;
	}
	if (Global_268A34.f_1)
	{
	}
	if (Global_394B == 1)
	{
		return 0;
	}
	if (Global_1805E8)
	{
		return 0;
	}
	if (Global_268A34.f_24)
	{
		return 0;
	}
	if (func_116())
	{
		return 0;
	}
	if (((Global_8C41 != 6 && Global_8C41 != 8) && Global_8C41 != 12) && Global_8C41 != 15)
	{
		return 0;
	}
	if (func_126() && !func_125(12))
	{
		return 0;
	}
	if (unk_0x58E7DDFF8D17A82A())
	{
		return 0;
	}
	if (unk_0x102F1A3BD4B68933())
	{
		return 0;
	}
	if (!func_124(unk_0xB5CEFD608600A09F()))
	{
		return 0;
	}
	if (unk_0xE186ACC7BE9B244E())
	{
		return 0;
	}
	if (Global_11646)
	{
		return 0;
	}
	if (unk_0xC404A53993BF8595())
	{
		if (!unk_0x81DF0C84D541EB84(unk_0xB5CEFD608600A09F()))
		{
			return 0;
		}
	}
	if (!unk_0x57D316754A262B34())
	{
		return 0;
	}
	if (unk_0xCE838A0680E73021(uParam0) || unk_0x26714D533E20E3D0(uParam0))
	{
		return 0;
	}
	if (unk_0xAFBA81738D8F4CE3(uParam0) || unk_0x2D4300FC43F947D7(uParam0))
	{
		return 0;
	}
	if (unk_0x9C46DA8C3366349D())
	{
		if (unk_0xF49912B78E2591B6())
		{
			if (unk_0x4AABC11B5841E3FF())
			{
				return 0;
			}
		}
		else if (unk_0xF7E138CFA19B55E7())
		{
			return 0;
		}
	}
	return 1;
}

int func_124(int iParam0)//Position - 0x3413
{
	int iVar0;
	struct<13> Var1;
	
	if (unk_0x823F3E7DB232ED49() == 0)
	{
		return 0;
	}
	iVar0 = -1;
	if (iParam0 != unk_0xB5CEFD608600A09F())
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			return 0;
		}
	}
	if (unk_0x3E9993F328985CCB() || unk_0xF7E138CFA19B55E7())
	{
		if (unk_0xC46C045B74A03589(0, iVar0))
		{
			if (unk_0x36C1DE668967177B())
			{
				return 1;
			}
		}
	}
	if (unk_0xA76D65C63ED50F67() || unk_0xF49912B78E2591B6())
	{
		if (iParam0 == unk_0xB5CEFD608600A09F())
		{
			if (unk_0x516B243FD7C71CE0(0, -3, 1) || unk_0xC46C045B74A03589(1, -1))
			{
				return 1;
			}
		}
		else
		{
			Var1 = { func_8(iParam0) };
			if (unk_0xC46C045B74A03589(0, -1) || (unk_0xC46C045B74A03589(1, -1) && unk_0xE140B7178EA00705(&Var1)))
			{
				return 1;
			}
		}
	}
	if (unk_0x8ACB0C3FACC09467())
	{
		if (unk_0xC46C045B74A03589(0, iVar0))
		{
			if (unk_0x36C1DE668967177B())
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_125(int iParam0)//Position - 0x34EC
{
	return Global_8C41 == iParam0;
}

int func_126()//Position - 0x34FA
{
	if (Global_8C41 == 15)
	{
		return 0;
	}
	return 1;
}

int func_127(int iParam0, bool bParam1, bool bParam2)//Position - 0x350F
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x96B1061E8F3CBC9A(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x6A9CDB766DF7216F(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_252E21.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_128()//Position - 0x3559
{
	func_119();
}

void func_129()//Position - 0x3565
{
	Global_268A34.f_1 = 1;
	Global_268A34.f_21 = -1;
	Global_268A34.f_22 = -1;
	if (unk_0xA7F138B5B1AB2CF6(Global_388A) == 1)
	{
		if (Global_3891)
		{
			func_130(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
			if (Global_3864)
			{
				func_130(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
		else
		{
			func_130(Global_388A, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
		}
	}
}

void func_130(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x35DE
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
		func_131(sParam7);
	}
	if (!unk_0xF1734B55490E9045(sParam8))
	{
		func_131(sParam8);
	}
	if (!unk_0xF1734B55490E9045(sParam9))
	{
		func_131(sParam9);
	}
	if (!unk_0xF1734B55490E9045(sParam10))
	{
		func_131(sParam10);
	}
	if (!unk_0xF1734B55490E9045(sParam11))
	{
		func_131(sParam11);
	}
	unk_0xF9FBC2F3F73D94C9();
}

void func_131(char* sParam0)//Position - 0x3691
{
	unk_0x57016C44F10111F0(sParam0);
	unk_0x64989E60CF560CA1();
}

void func_132()//Position - 0x36A3
{
	int iVar0;
	
	if (iLocal_96)
	{
		Global_BC5A = 0;
		Global_BC5A.f_C = 0;
		Global_BC5A.f_18 = 0;
		Global_BC5A.f_24 = 0;
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Global_BC5A.f_1[iVar0] = 0;
			Global_BC5A.f_D[iVar0] = 0;
			Global_BC5A.f_19[iVar0] = 0;
			Global_BC5A.f_25[iVar0] = 0;
			iVar0++;
		}
		iLocal_96 = 0;
	}
}

