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
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	struct<5> Local_43 = { 0, 0, 0, 0, 0 } ;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	bool bLocal_46 = 0;
	bool bLocal_47 = 0;
	float fLocal_48 = 0f;
	float fLocal_49 = 0f;
	char* sLocal_50 = NULL;
	struct<5> Local_51 = { 0, 0, 0, 0, 0 } ;
	vector3 vLocal_52 = { 0f, 0f, 0f };
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	struct<5> Local_55 = { 0, 0, 0, 0, 0 } ;
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
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_44 = -1;
	iLocal_45 = -1;
	fLocal_48 = 1.7f;
	fLocal_49 = 0f;
	sLocal_50 = "";
	iLocal_53 = -1;
	if (unk_0xE8A79675302ED812(2))
	{
		func_155();
	}
	Local_43 = { ScriptParam_55 };
	func_154();
	func_153();
	func_148(iLocal_44, 0, 0);
	SYSTEM::SETTIMERA(0);
	func_147();
	func_143();
	while (true)
	{
		SYSTEM::WAIT(0);
		func_142(iLocal_44);
		func_141();
		func_139();
		func_132();
		func_148(iLocal_44, 0, 0);
		func_154();
		func_9();
		if ((unk_0x7AF0088ABFA713B6() && !unk_0x517823CA390A19F6()) && !func_8())
		{
			func_1();
		}
	}
}

void func_1()//Position - 0x106
{
	if (func_7() || func_6())
	{
		func_5();
		func_2();
	}
}

void func_2()//Position - 0x127
{
	if ((!func_4() && !func_3()) && Global_255D52)
	{
		Global_440000.f_1EF38 = 0;
	}
}

bool func_3()//Position - 0x155
{
	return Global_255A46.f_243;
}

bool func_4()//Position - 0x164
{
	return Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_C4 != 0;
}

void func_5()//Position - 0x17B
{
	Global_255A46.f_283 = 1;
}

var func_6()//Position - 0x18B
{
	return Global_255A46.f_26E;
}

bool func_7()//Position - 0x19A
{
	return unk_0xFA30DFD0084E92FE(Global_255A46.f_2, 11);
}

bool func_8()//Position - 0x1AE
{
	return unk_0xFA30DFD0084E92FE(Global_255D53.f_1.f_AFA, 3);
}

void func_9()//Position - 0x1C4
{
	bool bVar0;
	
	if (unk_0x1D403DFADBC2DE3C(Local_43.f_1, 0))
	{
		func_155();
	}
	if (bLocal_46)
	{
		if (!unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
		{
			func_155();
		}
	}
	func_131();
	bVar0 = true;
	switch (vLocal_52.x)
	{
		case 4:
			func_130();
			return;
		
		case 5:
			func_127();
			return;
		
		case 6:
			func_125();
			return;
		
		case 7:
			func_124();
			return;
		
		case 8:
			func_123();
			return;
		
		case 9:
			func_121();
			return;
		
		case 10:
			func_120();
			func_117();
			func_116();
			return;
		
		case 11:
			func_115();
			return;
		
		case 12:
			break;
		
		default:
			bVar0 = false;
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (!vLocal_52.x == 12)
	{
		return;
	}
	switch (vLocal_52.y)
	{
		case 1:
			if (!func_114())
			{
				func_110();
				func_117();
			}
			break;
		
		case 2:
			func_108();
			break;
		
		case 12:
			func_95();
			break;
		
		case 3:
			func_10();
			break;
		
		default:
			break;
	}
}

void func_10()//Position - 0x2DF
{
	var uVar0;
	char* sVar1;
	struct<53> Var2;
	int iVar3;
	
	unk_0x50FBC3BBBAC48D06(Local_43.f_1, 3000, 3500, 0, 1, 1, 0);
	Global_195D5B = 1;
	if (!unk_0x17FAADF9916EF741())
	{
		unk_0x7A41D32A383895D8(2500);
		while (unk_0x422F9EDE839E6ABB())
		{
			SYSTEM::WAIT(0);
		}
	}
	if (unk_0x7AF0088ABFA713B6())
	{
		func_94(&uVar0, 0, 0);
		if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()) && !unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			unk_0xA5F3B1C95DEB48C4(unk_0xBC25C936A095B5BA(), 0, 1);
		}
		while ((unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()) && !unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0)) && unk_0x86C7ABC4462AF150(unk_0xBC25C936A095B5BA()))
		{
			SYSTEM::WAIT(0);
		}
		func_84(unk_0xB5CEFD608600A09F(), 0, 57344);
		Global_24B2CE.f_A65 = 1;
		if (unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0))
		{
			Global_24B2CE.f_A66 = 1;
		}
		else
		{
			Global_24B2CE.f_A66 = 0;
		}
		if (unk_0x6CACA595557C5755())
		{
			unk_0x01EB6657F2BCE9D3(0);
		}
		if (func_80(1))
		{
			func_67(0);
		}
		func_65(1);
		func_155();
	}
	sVar1 = "";
	Var2.f_3 = 1064514355;
	Var2.f_1E = 1148829696;
	Var2.f_1F = 1148829696;
	Var2.f_34 = 1148829696;
	iVar3 = 7;
	switch (func_60())
	{
		case 0:
			if (func_58() != 2)
			{
				iVar3 = 0;
			}
			else
			{
				iVar3 = 1;
			}
			break;
		
		case 1:
			if (!func_57(126))
			{
				iVar3 = 2;
			}
			else
			{
				iVar3 = 3;
			}
			break;
		
		case 2:
			if (!func_56(4))
			{
				if (func_57(58))
				{
					iVar3 = 4;
				}
				if (func_57(59))
				{
					iVar3 = 5;
				}
				if (iVar3 == 7)
				{
					if (!func_55())
					{
						iVar3 = 4;
					}
					else
					{
						iVar3 = 5;
					}
				}
			}
			else
			{
				iVar3 = 6;
			}
			break;
	}
	switch (iVar3)
	{
		case 0:
			sVar1 = "DWC_MICHAEL_mansion";
			Var2 = "SAVEM_Default@";
			Var2.f_1 = "M_GetOut_R";
			Var2.f_2 = "M_GetOut_R_CAM";
			Var2.f_5 = { -814.181f, 181.1f, 75.74f };
			Var2.f_8 = { 0f, 0f, 21.1994f };
			Var2.f_4 = -1871534317;
			break;
		
		case 1:
			sVar1 = "DWC_MICHAEL_trailer";
			Var2 = "SAVECountryside@";
			Var2.f_1 = "M_GetOut_countryside";
			Var2.f_2 = "M_GetOut_countryside_CAM";
			Var2.f_5 = { 1968.14f, 3816.79f, 32.4287f };
			Var2.f_8 = { 0f, 0f, 29.7938f };
			Var2.f_4 = -1871534317;
			break;
		
		case 2:
			sVar1 = "DWC_FRANKLIN_city";
			Var2 = "SWITCH@FRANKLIN@BED";
			Var2.f_1 = "Sleep_GetUp_RubEyes";
			Var2.f_2 = "Sleep_GetUp_RubEyes_CAM";
			Var2.f_5 = { -17.2168f, -1441.224f, 30.1015f };
			Var2.f_8 = { 0f, 0f, -179.653f };
			Var2.f_4 = -1871534317;
			break;
		
		case 3:
			sVar1 = "DWC_FRANKLIN_hills";
			Var2 = "SAVEBighouse@";
			Var2.f_1 = "F_GetOut_r_bighouse";
			Var2.f_2 = "F_GetOut_r_bighouse_CAM";
			Var2.f_5 = { -1.049f, 524.283f, 170.064f };
			Var2.f_8 = { 0f, 0f, 24f };
			Var2.f_4 = -1871534317;
			break;
		
		case 4:
			sVar1 = "DWC_TREVOR_trailer";
			Var2 = "SAVECountryside@";
			Var2.f_1 = "T_GetOut_countryside";
			Var2.f_2 = "T_GetOut_countryside_CAM";
			Var2.f_5 = { 1968.14f, 3816.79f, 32.4287f };
			Var2.f_8 = { 0f, 0f, 29.7938f };
			Var2.f_4 = -1871534317;
			break;
		
		case 5:
			sVar1 = "DWC_TREVOR_beach";
			Var2 = "SAVEVeniceB@";
			Var2.f_1 = "T_GetOut_r_veniceB";
			Var2.f_2 = "T_GetOut_r_veniceB_CAM";
			Var2.f_5 = { -1148.438f, -1512.246f, 9.689f };
			Var2.f_8 = { 0f, 0f, 36.25f };
			Var2.f_4 = -1871534317;
			break;
		
		case 6:
			sVar1 = "DWC_TREVOR_stripclub";
			Var2 = "SAVECouch@";
			Var2.f_1 = "T_GetOut_couch";
			Var2.f_2 = "T_GetOut_couch_CAM";
			Var2.f_5 = { 94.53f, -1289.86f, 28.27f };
			Var2.f_8 = { 0f, 0f, 29.7938f };
			Var2.f_4 = -1871534317;
			break;
	}
	if (!unk_0x1D403DFADBC2DE3C(Local_43.f_1, 0))
	{
		unk_0x641B19E156645A92(Local_43.f_1, Var2.f_5, 1, 0, 0, 1);
	}
	SYSTEM::WAIT(500);
	StringCopy(&(Var2.f_B), "", 16);
	Var2.f_F = -1f;
	func_12(sVar1, &Var2, "");
	func_11(126, 1);
	func_155();
}

void func_11(int iParam0, int iParam1)//Position - 0x6FC
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

void func_12(char* sParam0, var uParam1, char* sParam2)//Position - 0x759
{
	float fVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;
	var uVar9;
	int iVar10;
	int iVar11;
	char* sVar12;
	char* sVar13;
	char* sVar14;
	int iVar15;
	float fVar16;
	float fVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	float fVar21;
	vector3 vVar22;
	vector3 vVar23;
	float fVar24;
	float fVar25;
	float fVar26;
	vector3 vVar27;
	float fVar28;
	float fVar29;
	float fVar30;
	vector3 vVar31;
	vector3 vVar32;
	float fVar33;
	int iVar34;
	float fVar35;
	float fVar36;
	vector3 vVar37;
	float fVar38;
	float fVar39;
	float fVar40;
	vector3 vVar41;
	vector3 vVar42;
	float fVar43;
	int iVar44;
	bool bVar45;
	bool bVar46;
	int iVar47;
	
	fVar0 = 0f;
	unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 0);
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0x1E5C2A1EAB944289(unk_0xBC25C936A095B5BA(), true);
	}
	unk_0x5DEC86EE2E34A59D(uParam1->f_5, 4500f);
	unk_0x6A54FD861D871600(uParam1->f_5, 4500f);
	unk_0x6C5F5B5F6894CCE3(uParam1->f_5, 5f, 1, 0, 0, false);
	unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), uParam1->f_5, 1, 0, 0, 1);
	unk_0x346478B12F69D4E3(unk_0xBC25C936A095B5BA(), true);
	SYSTEM::WAIT(0);
	unk_0x121BBDEFA4F0C22B(1);
	unk_0x522053D86D6E1C7A(*uParam1);
	if (unk_0xF1734B55490E9045(uParam1->f_10))
	{
	}
	else
	{
		unk_0x522053D86D6E1C7A(uParam1->f_10);
	}
	if (!unk_0x17FAADF9916EF741())
	{
		unk_0x7A41D32A383895D8(0);
	}
	func_50(uParam1->f_5, uParam1->f_8.f_2, 0, 1);
	if (!unk_0x17FAADF9916EF741())
	{
		unk_0x7A41D32A383895D8(0);
	}
	iVar1 = unk_0x105601648511CC64() + 20000;
	bVar2 = false;
	uParam1->f_21 = 0;
	while (!bVar2 && iVar1 > unk_0x105601648511CC64())
	{
		bVar2 = true;
		unk_0x522053D86D6E1C7A(*uParam1);
		if (!unk_0xF9E082857622D91E(*uParam1))
		{
			bVar2 = false;
		}
		if (!unk_0xF1734B55490E9045(uParam1->f_10))
		{
			unk_0x522053D86D6E1C7A(uParam1->f_10);
			if (!unk_0xF9E082857622D91E(uParam1->f_10))
			{
				bVar2 = false;
			}
		}
		if (!unk_0x17FAADF9916EF741())
		{
			unk_0x7A41D32A383895D8(0);
		}
		SYSTEM::WAIT(0);
	}
	func_47();
	if (!func_46(uParam1->f_16, 0f, 0f, 0f, 0))
	{
		unk_0x6935EBF9868982DC(uParam1->f_5 + uParam1->f_13 - uParam1->f_16, uParam1->f_5 + uParam1->f_13 + uParam1->f_16, false, 1);
		unk_0xEDAD35A0D81ED3FB(uParam1->f_5 + uParam1->f_13, (SYSTEM::VMAG(uParam1->f_16) + 25f), 0, 0, 0, 0, false, 0);
		unk_0x6C5F5B5F6894CCE3(uParam1->f_5 + uParam1->f_13, (SYSTEM::VMAG(uParam1->f_16) + 25f), 1, 0, 0, false);
	}
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0xA98B19EC1C93FC3C(unk_0xB5CEFD608600A09F());
		unk_0x8E25082A46F87892(unk_0xBC25C936A095B5BA(), joaat("weapon_unarmed"), true);
		unk_0x49D46EE47C9CCB66(unk_0xBC25C936A095B5BA());
	}
	unk_0x346478B12F69D4E3(unk_0xBC25C936A095B5BA(), false);
	unk_0x121BBDEFA4F0C22B(0);
	unk_0x6C5F5B5F6894CCE3(uParam1->f_5, 15f, 1, 0, 0, false);
	unk_0xDA1FC589059DA9F2();
	unk_0xEE1FDC041B0DABCC();
	func_44();
	while (func_43())
	{
		SYSTEM::WAIT(0);
	}
	if (!unk_0x726D9204B160D23E() && !unk_0x26641E1BFD792DBC())
	{
		unk_0x829FA4611BD56B44(250);
	}
	unk_0xC63520BF0B3FB162(1);
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		iVar4 = unk_0xD0D858E538FD01C3(uParam1->f_5, uParam1->f_8, 2);
		unk_0xC2BF3DE5E47F801D(iVar4, false);
		unk_0x69D4A898629B0BDA(iVar4, 0);
		iVar5 = unk_0x578D5D08EC980893("DEFAULT_ANIMATED_CAMERA", 1);
		iVar6 = 4;
		if (uParam1->f_4 != -1871534317)
		{
			iVar6 |= 2;
		}
		func_41(unk_0xBC25C936A095B5BA(), uParam1->f_12);
		unk_0xB62398E536F695FC(unk_0xBC25C936A095B5BA(), iVar4, *uParam1, uParam1->f_1, 1000f, -1.5f, iVar6, 0, 1148846080, 0);
		unk_0xCF27C3A90021C5A5(unk_0xBC25C936A095B5BA(), 1);
		unk_0xCBB1B2FE4F8A5378(unk_0xB5CEFD608600A09F(), 1);
		bVar3 = unk_0xE5B7E3F1770AD404(unk_0xBC25C936A095B5BA(), 77);
		unk_0x2E9860A2B72187F5(unk_0xBC25C936A095B5BA(), 77, true);
		unk_0xA4DB448107C6D171(iVar5, iVar4, uParam1->f_2, *uParam1);
		unk_0x062C9995BFD27B2A(true, false, 3000, 1, 0, 0);
		if (!unk_0xF1734B55490E9045(uParam1->f_10) && !unk_0xF1734B55490E9045(uParam1->f_11))
		{
			unk_0xE896C0AD02364F2A(unk_0xBC25C936A095B5BA(), uParam1->f_10, uParam1->f_11, 1000f, -1.5f, 10000, 33, 0, 0, 0, 0);
		}
	}
	else
	{
		iVar4 = -1;
	}
	if (!uParam1->f_19)
	{
		if (!unk_0xF1734B55490E9045(sParam2))
		{
			func_40(sParam2, -1);
			uParam1->f_19 = 1;
		}
	}
	bVar7 = false;
	bVar8 = false;
	uVar9 = 16;
	if (!unk_0xF1734B55490E9045(&(uParam1->f_B)))
	{
		iVar10 = func_60();
		iVar11 = -1;
		sVar12 = "";
		switch (iVar10)
		{
			case 0:
				iVar11 = 0;
				sVar12 = "MICHAEL";
				break;
			
			case 1:
				iVar11 = 1;
				sVar12 = "FRANKLIN";
				break;
			
			case 2:
				iVar11 = 2;
				sVar12 = "TREVOR";
				break;
			
			default:
				break;
		}
		func_39(&uVar9, iVar11, unk_0xBC25C936A095B5BA(), sVar12, 0, 1);
	}
	if (unk_0x77FC50899603581D(iVar4))
	{
		sVar13 = "WalkInterruptible";
		sVar14 = "ForceBlendout";
		while (unk_0x77FC50899603581D(iVar4) && !unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			if (!bVar8)
			{
				if (!unk_0x17FAADF9916EF741())
				{
					if (!unk_0xF1734B55490E9045(uParam1->f_1A))
					{
						unk_0x9216004FAC08D1DC(uParam1->f_1A, 0, 0);
						bVar8 = true;
					}
					if (!unk_0xF1734B55490E9045(uParam1->f_1B))
					{
						if (!unk_0xF1734B55490E9045(uParam1->f_1C))
						{
							unk_0xC4BA30B532FE260F(-1, uParam1->f_1C, uParam1->f_1B, 0);
							bVar8 = true;
						}
						if (!unk_0xF1734B55490E9045(uParam1->f_1D))
						{
							unk_0xC4BA30B532FE260F(-1, uParam1->f_1D, uParam1->f_1B, 0);
							bVar8 = true;
						}
					}
				}
			}
			unk_0xDE7B9CB38D019BF0();
			unk_0x4E0EC60D119222B1(18);
			unk_0x22461BAEAB7226C1();
			func_35(0);
			iVar15 = unk_0x105601648511CC64();
			if (iVar15 >= (Global_8E68 - 500))
			{
				func_34(4000);
			}
			fVar16 = -1f;
			fVar17 = -1f;
			fVar0 = unk_0x8FD30584EB38411B(iVar4);
			if (!unk_0xF1734B55490E9045(&(uParam1->f_B)))
			{
				if (!bVar7)
				{
					if (fVar0 >= uParam1->f_F)
					{
						if (func_22(&uVar9, "PRSAUD", &(uParam1->f_B), 3, 0, 0, 0))
						{
							bVar7 = true;
						}
					}
				}
			}
			iVar18 = 0;
			if (unk_0x619CCA1A6FD0BC87(unk_0xBC25C936A095B5BA(), unk_0x56BEECB328B6D29D(sVar13)))
			{
				iVar19 = (unk_0x1B3AE5B27313855F(2, 195) - 128);
				iVar20 = (unk_0x1B3AE5B27313855F(2, 196) - 128);
				if (((iVar19 < 64 && iVar19 > -64) && iVar20 < 64) && iVar20 > -64)
				{
				}
				else
				{
					iVar18 = 1;
				}
			}
			else
			{
				fVar16 = -1f;
				fVar17 = -1f;
				iVar18 = 0;
				uParam1->f_3 = uParam1->f_3;
				fVar16 = fVar16;
				fVar17 = fVar17;
			}
			if (unk_0x7FCE28BE45D0735E() == 4 && uParam1->f_34 > 0f)
			{
				if (fVar0 >= uParam1->f_34)
				{
					if (!uParam1->f_20)
					{
						fVar21 = 1.5f;
						vVar22 = { unk_0x8AB4E14F6E158D9D() };
						vVar23 = { unk_0x823166D9421223CA(unk_0xBC25C936A095B5BA(), 31086, 0f, 0f, 0f) };
						fVar24 = unk_0xF0F2FC9DE291567F(vVar22, vVar23, true);
						fVar21 = func_21(fVar21, 0.001f, (fVar24 - 0.75f));
						if (fVar21 < 0f)
						{
							fVar21 = 0.001f;
						}
						func_20(&(uParam1->f_22), unk_0xBC25C936A095B5BA(), func_60(), 1E-06f, 300, 300, 0, 0, 1045220557);
						func_19(&(uParam1->f_22), uParam1->f_35);
						if (!uParam1->f_21)
						{
							uParam1->f_22 = 1;
							uParam1->f_22.f_7 = unk_0x105601648511CC64();
							uParam1->f_22.f_8 = 0;
							uParam1->f_21 = 1;
						}
						if (uParam1->f_39 == 999f)
						{
							uParam1->f_38 = 0f;
						}
						if (uParam1->f_39 == 999f)
						{
							vVar27 = { unk_0x51171D01E0465184(2) };
							fVar28 = unk_0x349C94FFF43E2979(unk_0xBC25C936A095B5BA());
							fVar29 = vVar27.z;
							fVar30 = fVar28;
							uParam1->f_39 = (fVar29 - fVar30);
							if (uParam1->f_39 < 360f)
							{
								uParam1->f_39 = (uParam1->f_39 + 360f);
							}
							if (uParam1->f_39 > 360f)
							{
								uParam1->f_39 = (uParam1->f_39 - 360f);
							}
						}
						fVar25 = uParam1->f_38;
						fVar26 = uParam1->f_39;
						unk_0x2B9AEC08E469E384(fVar25, 1065353216);
						unk_0xF3F01A78937DC905(fVar26);
						unk_0x264EADF2C7FF8C54(fVar25);
						unk_0x8F76C59688D13CF0(fVar26);
						vVar31 = { unk_0x8AB4E14F6E158D9D() };
						vVar32 = { unk_0x4E95580B2DDCC7A9() };
						fVar33 = unk_0xF0F2FC9DE291567F(vVar31, vVar32, true);
						iVar34 = SYSTEM::ROUND((fVar33 * 1000f));
						uParam1->f_20 = 1;
					}
					if (uParam1->f_20)
					{
						unk_0xE236EA1E77255E8F();
						if (func_16(&(uParam1->f_22), 1, 1, 1, 0, 0, 0))
						{
						}
					}
				}
			}
			if (unk_0x619CCA1A6FD0BC87(unk_0xBC25C936A095B5BA(), unk_0x56BEECB328B6D29D(sVar14)) || iVar18)
			{
				if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
				{
					unk_0xA4E856A8CD53B8DF(unk_0xBC25C936A095B5BA());
					switch (uParam1->f_4)
					{
						case -1871534317:
							unk_0x3E2B7D349B5735D3(unk_0xBC25C936A095B5BA(), -1871534317, 1, 0, 0);
							unk_0x9CB4DD3D88846081(0, 0, 3, 0);
							break;
						
						case -668482597:
							unk_0x3E2B7D349B5735D3(unk_0xBC25C936A095B5BA(), -668482597, 1, 0, 0);
							unk_0x56EDA6006F1B166D(unk_0xB5CEFD608600A09F(), 1f, 500, 0f, 1, 0);
							if (unk_0x7FCE28BE45D0735E() != 4)
							{
								if (uParam1->f_1F == 999f)
								{
									uParam1->f_1E = 0f;
								}
								if (uParam1->f_1F == 999f)
								{
									vVar37 = { unk_0x51171D01E0465184(2) };
									fVar38 = unk_0x349C94FFF43E2979(unk_0xBC25C936A095B5BA());
									fVar39 = vVar37.z;
									fVar40 = fVar38;
									uParam1->f_1F = (fVar39 - fVar40);
									if (uParam1->f_1F < 360f)
									{
										uParam1->f_1F = (uParam1->f_1F + 360f);
									}
									if (uParam1->f_1F > 360f)
									{
										uParam1->f_1F = (uParam1->f_1F - 360f);
									}
								}
								fVar35 = uParam1->f_1E;
								fVar36 = uParam1->f_1F;
								unk_0x2B9AEC08E469E384(fVar35, 1065353216);
								unk_0xF3F01A78937DC905(fVar36);
								vVar41 = { unk_0x8AB4E14F6E158D9D() };
								vVar42 = { unk_0x4E95580B2DDCC7A9() };
								fVar43 = unk_0xF0F2FC9DE291567F(vVar41, vVar42, true);
								iVar44 = SYSTEM::ROUND((fVar43 * 1000f));
								unk_0x062C9995BFD27B2A(false, true, iVar44, 0, 0, 0);
							}
							break;
						
						default:
							break;
					}
					if (unk_0x77FC50899603581D(iVar4))
					{
						unk_0x2A7E436A4653E829(iVar4);
						iVar4 = -1;
					}
				}
			}
			SYSTEM::WAIT(0);
		}
	}
	if (!func_46(uParam1->f_16, 0f, 0f, 0f, 0))
	{
		unk_0x832ADB79A274D4E9(uParam1->f_5 + uParam1->f_13 - uParam1->f_16, uParam1->f_5 + uParam1->f_13 + uParam1->f_16, 1);
	}
	unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0xA4E856A8CD53B8DF(unk_0xBC25C936A095B5BA());
	}
	bVar45 = unk_0x4DAE8F727552BD64();
	bVar46 = false;
	if (uParam1->f_20)
	{
		unk_0xE236EA1E77255E8F();
		if (!func_16(&(uParam1->f_22), 1, 1, 1, 0, 1, 0))
		{
			bVar46 = true;
		}
	}
	if (bVar45 || bVar46)
	{
		while ((bVar45 || bVar46) && !unk_0x7930B3E9C919E90F())
		{
			if (bVar45)
			{
			}
			if (bVar46)
			{
			}
			iVar47 = 2;
			func_15(1, 26, &iVar47);
			func_15(1, 79, &iVar47);
			func_15(1, 1, &iVar47);
			func_15(1, 2, &iVar47);
			func_15(0, 22, &iVar47);
			func_15(0, 36, &iVar47);
			func_15(0, 142, &iVar47);
			func_15(0, 141, &iVar47);
			func_15(0, 140, &iVar47);
			func_15(0, 263, &iVar47);
			func_15(0, 264, &iVar47);
			SYSTEM::WAIT(0);
			bVar45 = unk_0x4DAE8F727552BD64();
			bVar46 = false;
			if (uParam1->f_20)
			{
				unk_0xE236EA1E77255E8F();
				if (!func_16(&(uParam1->f_22), 1, 1, 1, 0, 1, 0))
				{
					bVar46 = true;
				}
			}
		}
	}
	if (!unk_0xF1734B55490E9045(uParam1->f_10))
	{
		unk_0x4EA570997E107F35(uParam1->f_10);
	}
	unk_0x4EA570997E107F35(*uParam1);
	unk_0x4EC087603E1DEF9C(iVar5, 0);
	func_13(&(uParam1->f_22));
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0x2E9860A2B72187F5(unk_0xBC25C936A095B5BA(), 77, bVar3);
		unk_0x1E5C2A1EAB944289(unk_0xBC25C936A095B5BA(), false);
	}
	sParam0 = sParam0;
}

void func_13(var uParam0)//Position - 0x1194
{
	func_14(uParam0);
	*uParam0 = 0;
	uParam0->f_9 = { 0f, 0f, 0f };
}

void func_14(var uParam0)//Position - 0x11AF
{
	if (unk_0xEF0E25DA0CB6E8FF(uParam0->f_1))
	{
		unk_0x4EC087603E1DEF9C(uParam0->f_1, 0);
	}
	if (unk_0xEF0E25DA0CB6E8FF(uParam0->f_2))
	{
		unk_0x4EC087603E1DEF9C(uParam0->f_2, 0);
	}
	if (unk_0xEF0E25DA0CB6E8FF(uParam0->f_3))
	{
		unk_0x4EC087603E1DEF9C(uParam0->f_3, 0);
	}
	if (unk_0xEF0E25DA0CB6E8FF(uParam0->f_4))
	{
		unk_0x4EC087603E1DEF9C(uParam0->f_4, 0);
	}
}

void func_15(int iParam0, int iParam1, int iParam2)//Position - 0x1207
{
	unk_0xBBC4195AD74D153D(iParam0, iParam1, 1);
	*iParam2++;
}

int func_16(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x1220
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	float fVar7;
	
	switch (*uParam0)
	{
		case 0:
			func_17();
			if (!unk_0x1D403DFADBC2DE3C(uParam0->f_5, 0))
			{
				func_14(uParam0);
				vVar0 = { unk_0x8AB4E14F6E158D9D() };
				if (bParam1)
				{
					vVar0 = { vVar0 + unk_0xB5D9AE572C19509E(uParam0->f_5) * FtoV(unk_0x11F9F9006143871A()) };
				}
				vVar1 = { unk_0x1483995DFFF0DEEA(uParam0->f_5, vVar0) };
				vVar2 = { unk_0x51171D01E0465184(2) };
				vVar3 = { vVar2 + uParam0->f_9 };
				vVar4 = { vVar3 - unk_0xD7490CDEF40F3DA2(uParam0->f_5, 2) };
				vVar5 = { (-SYSTEM::SIN(vVar3.z) * SYSTEM::COS(vVar3.x)), (SYSTEM::COS(vVar3.z) * SYSTEM::COS(vVar3.x)), SYSTEM::SIN(vVar3.x) };
				vVar6 = { (-SYSTEM::SIN(vVar4.z) * SYSTEM::COS(vVar4.x)), (SYSTEM::COS(vVar4.z) * SYSTEM::COS(vVar4.x)), SYSTEM::SIN(vVar4.x) };
				fVar7 = unk_0x721971B93B6D1885();
				if (uParam0->f_11 > 0 || iParam6 != 0)
				{
					uParam0->f_3 = unk_0x8932882019580516(1775630800, 0);
				}
				uParam0->f_1 = unk_0x8932882019580516(26379945, 1);
				if (bParam1)
				{
					unk_0x5BB58B645F7051F4(uParam0->f_1, uParam0->f_5, vVar1, 1);
				}
				else
				{
					unk_0x6125108F6208C1F6(uParam0->f_1, vVar0);
				}
				unk_0x3553F2A72957724E(uParam0->f_1, vVar2, 2);
				unk_0x9DF315A9EFFF87AC(uParam0->f_1, fVar7);
				uParam0->f_2 = unk_0x8932882019580516(26379945, 1);
				if (bParam1 && !bParam4)
				{
					unk_0x5BB58B645F7051F4(uParam0->f_2, uParam0->f_5, vVar1 + vVar6 * Vector(uParam0->f_C, uParam0->f_C, uParam0->f_C), 1);
				}
				else
				{
					unk_0x6125108F6208C1F6(uParam0->f_2, vVar0 + vVar5 * Vector(uParam0->f_C, uParam0->f_C, uParam0->f_C));
				}
				unk_0x3553F2A72957724E(uParam0->f_2, vVar2, 2);
				unk_0x9DF315A9EFFF87AC(uParam0->f_2, fVar7);
				if (uParam0->f_11 > 0 && iParam6 == 0)
				{
					uParam0->f_4 = unk_0x8932882019580516(26379945, 1);
					if (bParam1 && !bParam4)
					{
						unk_0x5BB58B645F7051F4(uParam0->f_4, uParam0->f_5, vVar1 + vVar6 * Vector(uParam0->f_C, uParam0->f_C, uParam0->f_C) * Vector(uParam0->f_D, uParam0->f_D, uParam0->f_D), 1);
					}
					else
					{
						unk_0x6125108F6208C1F6(uParam0->f_4, vVar0 + vVar5 * Vector(uParam0->f_C, uParam0->f_C, uParam0->f_C) * Vector(uParam0->f_D, uParam0->f_D, uParam0->f_D));
					}
					unk_0x3553F2A72957724E(uParam0->f_4, vVar2, 2);
					unk_0x9DF315A9EFFF87AC(uParam0->f_4, fVar7);
				}
				if (uParam0->f_11 > 0 || iParam6 != 0)
				{
					unk_0xF5ECA94DF1CEBB69(uParam0->f_3, uParam0->f_1, 0, 2);
					if (iParam6 == 0)
					{
						unk_0xF5ECA94DF1CEBB69(uParam0->f_3, uParam0->f_4, uParam0->f_11, 2);
					}
					unk_0xF5ECA94DF1CEBB69(uParam0->f_3, uParam0->f_2, (uParam0->f_E - uParam0->f_11), 2);
					unk_0x0EE3BD85F728F360(uParam0->f_3, iParam6);
					unk_0x348665177DBFB93B(uParam0->f_3, true);
				}
				else
				{
					unk_0xAE099C1ADC89C331(uParam0->f_2, uParam0->f_1, uParam0->f_E, 2, 2);
				}
				unk_0x062C9995BFD27B2A(true, false, 3000, 1, 0, 0);
				uParam0->f_7 = unk_0x105601648511CC64();
				uParam0->f_8 = 0;
				*uParam0 = 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 1:
			func_17();
			if (bParam3)
			{
				if (!uParam0->f_8)
				{
					if (unk_0x105601648511CC64() >= (uParam0->f_7 + uParam0->f_10))
					{
						if (bParam5)
						{
							switch (uParam0->f_6)
							{
								case 1:
									unk_0x9216004FAC08D1DC("CamPushInFranklin", 0, 0);
									break;
								
								case 0:
									unk_0x9216004FAC08D1DC("CamPushInMichael", 0, 0);
									break;
								
								case 2:
									unk_0x9216004FAC08D1DC("CamPushInTrevor", 0, 0);
									break;
							}
						}
						else
						{
							unk_0x9216004FAC08D1DC("CamPushInNeutral", 0, 0);
						}
						unk_0xC4BA30B532FE260F(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						uParam0->f_8 = 1;
					}
				}
			}
			if (unk_0x105601648511CC64() >= (uParam0->f_7 + uParam0->f_F))
			{
				if (bParam2)
				{
					func_14(uParam0);
					unk_0x062C9995BFD27B2A(false, false, 3000, 1, 0, 0);
				}
				return 1;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

void func_17()//Position - 0x15C3
{
	unk_0x2423B13D9CFAD1DD();
	func_18();
}

void func_18()//Position - 0x15D3
{
	Global_4336.f_86 = 1;
}

void func_19(var uParam0, vector3 vParam1)//Position - 0x15E1
{
	uParam0->f_9 = { vParam1 };
}

void func_20(var uParam0, int iParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x15F3
{
	uParam0->f_5 = iParam1;
	uParam0->f_6 = iParam2;
	uParam0->f_C = fParam3;
	uParam0->f_E = iParam4;
	uParam0->f_F = iParam5;
	uParam0->f_10 = iParam6;
	uParam0->f_11 = iParam7;
	uParam0->f_D = iParam8;
}

float func_21(float fParam0, float fParam1, float fParam2)//Position - 0x162B
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

bool func_22(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1652
{
	func_33(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_3DBF = 0;
	Global_3DC1 = 0;
	Global_3DC6 = 0;
	Global_4197 = 0;
	Global_4199 = 0;
	Global_419D = 0;
	Global_280001 = 0;
	return func_23(sParam2, iParam3, 0);
}

int func_23(char* sParam0, int iParam1, bool bParam2)//Position - 0x16A0
{
	Global_3DB9 = 0;
	if (Global_3DB8 == 0 || Global_3DBA == 2)
	{
		if (Global_3DB8 != 0)
		{
			if (iParam1 > Global_3DBA)
			{
				if (Global_3DBF == 0)
				{
					unk_0x1E08809A5041F85B(false);
					Global_389D.f_1 = 3;
					Global_3DB8 = 0;
					Global_3DB9 = 1;
					Global_3DED = 0;
					Global_3DB4 = 0;
					Global_3DB5 = 0;
					Global_3DC3 = 0;
					Global_3DC2 = 0;
					Global_389C = 0;
				}
				else
				{
					func_32();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xE6711F601F11B66B())
		{
			return 0;
		}
		if (func_31(8, -1))
		{
			return 0;
		}
		Global_3E04 = { Global_3DFE };
		func_30();
		Global_3AF1 = { Global_3B96 };
		Global_3DBE = Global_3DBF;
		Global_3DC5 = Global_3DC6;
		Global_280002 = Global_280001;
		Global_3DC7 = { Global_3DD7 };
		Global_3DC0 = Global_3DC1;
		Global_4196 = Global_4197;
		Global_419E = { Global_41A4 };
		Global_4198 = Global_4199;
		Global_419A = Global_419B;
		Global_419C = Global_419D;
		Global_3C3B.f_172 = Global_4195;
		Global_3C3B.f_170 = Global_4193;
		Global_3C3B.f_171 = Global_4194;
		Global_3DB4 = Global_3DB5;
		if (Global_3DBE)
		{
			unk_0x7CB6FD92BE491AD9(&Global_93B, 20);
			unk_0x7CB6FD92BE491AD9(&Global_93C, 17);
			unk_0x7CB6FD92BE491AD9(&Global_93D, 0);
			if (bParam2)
			{
				func_28();
				if (Global_C60[Global_389D /*2811*/][0 /*281*/].f_103 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_389D.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_387B == 1)
			{
				return 0;
			}
			if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
			{
				if (unk_0xABB2AFD7539464EA(unk_0xBC25C936A095B5BA()))
				{
					return 0;
				}
				if (func_27())
				{
					return 0;
				}
				if (unk_0x7199482D96955B9E(unk_0xBC25C936A095B5BA()))
				{
					return 0;
				}
				if (unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA()))
				{
					return 0;
				}
				if (unk_0x01666D754C368931(unk_0xBC25C936A095B5BA()))
				{
					return 0;
				}
				if (unk_0xE959459C9FB1C42E(unk_0xBC25C936A095B5BA(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_11542)
				{
					if (unk_0x149E9368A11035DE(unk_0xBC25C936A095B5BA()))
					{
						return 0;
					}
					if (unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F()))
					{
						return 0;
					}
					if (unk_0x042228744678C7D4(unk_0xBC25C936A095B5BA()))
					{
						return 0;
					}
					if (unk_0x36210078ECC9DC40(unk_0xB5CEFD608600A09F()))
					{
						return 0;
					}
				}
			}
			if (func_26())
			{
				return 0;
			}
			else
			{
				switch (Global_389D.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (unk_0xFA30DFD0084E92FE(Global_93B, 9))
				{
					return 0;
				}
			}
			func_25();
			Global_3DC2 = bParam2;
		}
		Global_3DBA = iParam1;
		StringCopy(&Global_3C3B, sParam0, 24);
		Global_394A = 0;
		func_24();
		return 1;
	}
	if (Global_3DB8 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_3DBA || iParam1 == Global_3DBA)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_32();
	}
	return 0;
}

void func_24()//Position - 0x196C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_394C[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x1E08809A5041F85B(false);
	Global_3DB8 = 1;
}

void func_25()//Position - 0x199C
{
	Global_3DED = Global_3DEC;
	Global_3DE7 = Global_3DE8;
	Global_3E16 = { Global_3E0A };
	Global_3E1C = { Global_3E10 };
	Global_3DEF = Global_3DEE;
	Global_3E34 = { Global_3E22 };
	Global_3E3A = { Global_3E28 };
	Global_3E40 = { Global_3E2E };
	Global_3E46 = { Global_3E4C };
	Global_68E = Global_68F;
	Global_690 = Global_691;
	Global_3DC3 = Global_3DC4;
	Global_3DC5 = Global_3DC6;
	Global_3DC7 = { Global_3DD7 };
	Global_3DBC = Global_3DBD;
	Global_41B0 = 0;
	Global_3DE9 = 0;
	Global_3DEA = 0;
	unk_0x7CB6FD92BE491AD9(&Global_93C, 16);
}

int func_26()//Position - 0x1A31
{
	if (Global_389D.f_1 == 1 || Global_389D.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_27()//Position - 0x1A58
{
	int iVar0;
	int iVar1;
	
	if (Global_11542)
	{
		iVar0 = 0;
		unk_0x9CDD10270A1ACF6F(unk_0xBC25C936A095B5BA(), &iVar1, 1);
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0xCDE05E3688DE990D() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (unk_0xA0747FCBCF1D1424(unk_0xBC25C936A095B5BA(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_28()//Position - 0x1AF1
{
	if (func_29(14))
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
		Global_389D = func_60();
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

bool func_29(int iParam0)//Position - 0x1B93
{
	return Global_8C41 == iParam0;
}

void func_30()//Position - 0x1BA1
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_3AF1[iVar0 /*10*/] = 0;
		StringCopy(&(Global_3AF1[iVar0 /*10*/].f_1), "", 24);
		Global_3AF1[iVar0 /*10*/].f_7 = 0;
		Global_3AF1[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_3AF1.f_A1 = -99;
	Global_3AF1.f_A2 = { 0f, 0f, 0f };
}

bool func_31(int iParam0, int iParam1)//Position - 0x1BF7
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_14CC81.f_CB[iParam1];
			}
			break;
	}
	return unk_0xFA30DFD0084E92FE(Global_14CC81.f_418, iParam0);
}

void func_32()//Position - 0x1C32
{
	unk_0x5C7DC611411E2CF9();
	Global_41AB = 0;
	if ((unk_0x58E7DDFF8D17A82A() || Global_389D.f_1 == 9) || Global_389C == 1)
	{
		unk_0x1E08809A5041F85B(false);
		Global_3DB8 = 6;
		Global_389D.f_1 = 3;
		return;
	}
	if (unk_0xE6711F601F11B66B())
	{
		unk_0x1E08809A5041F85B(true);
		Global_3DB8 = 6;
		return;
	}
}

void func_33(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x1C89
{
	Global_3B96 = { *uParam0 };
	Global_68F = iParam1;
	StringCopy(&Global_3DFE, sParam2, 24);
	Global_4195 = uParam5;
	if (iParam3 == 0)
	{
		Global_4193 = 1;
		Global_4191 = 0;
	}
	else
	{
		Global_4193 = 0;
		Global_4191 = 1;
	}
	if (iParam4 == 0)
	{
		Global_4194 = 1;
		Global_4192 = 0;
	}
	else
	{
		Global_4194 = 0;
		Global_4192 = 1;
	}
}

void func_34(int iParam0)//Position - 0x1CDF
{
	Global_8E68 = (unk_0x105601648511CC64() + iParam0);
}

void func_35(int iParam0)//Position - 0x1CF1
{
	if (!Global_389D.f_1 == 1)
	{
		if (func_38(0))
		{
			func_36(iParam0);
		}
		unk_0xF0059F27F7BB6680(&Global_93C, 2);
	}
}

void func_36(int iParam0)//Position - 0x1D1A
{
	if (Global_3943)
	{
		func_37(0, 0);
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
	if (!func_26())
	{
		Global_389D.f_1 = 3;
	}
}

void func_37(bool bParam0, bool bParam1)//Position - 0x1D8A
{
	if (bParam0)
	{
		if (func_38(0))
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

int func_38(int iParam0)//Position - 0x1DFE
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

void func_39(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x1E58
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_11542)
	{
		if (!unk_0x36CEFBE9B745A58D(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x8941EA87BBF38C6F(iParam2, 0);
			}
			else
			{
				unk_0x8941EA87BBF38C6F(iParam2, 1);
			}
		}
		if (!unk_0x36CEFBE9B745A58D(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x7C7F4D01B6DB297B(iParam2, 0);
			}
			else
			{
				unk_0x7C7F4D01B6DB297B(iParam2, 1);
			}
		}
	}
}

void func_40(char* sParam0, int iParam1)//Position - 0x1EF3
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 0, true, iParam1);
}

void func_41(int iParam0, var uParam1)//Position - 0x1F0A
{
	if (func_42(uParam1, 1))
	{
		unk_0x42806D7A5D645048(iParam0, "HOSPITAL_0", 0f, 1f);
	}
	if (func_42(uParam1, 2))
	{
		unk_0x42806D7A5D645048(iParam0, "HOSPITAL_1", 0f, 1f);
	}
	if (func_42(uParam1, 4))
	{
		unk_0x42806D7A5D645048(iParam0, "HOSPITAL_2", 0f, 1f);
	}
	if (func_42(uParam1, 8))
	{
		unk_0x42806D7A5D645048(iParam0, "HOSPITAL_3", 0f, 1f);
	}
	if (func_42(uParam1, 16))
	{
		unk_0x42806D7A5D645048(iParam0, "HOSPITAL_4", 0f, 1f);
	}
	if (func_42(uParam1, 32))
	{
		unk_0x42806D7A5D645048(iParam0, "HOSPITAL_5", 0f, 1f);
	}
	if (func_42(uParam1, 64))
	{
		unk_0x42806D7A5D645048(iParam0, "HOSPITAL_6", 0f, 1f);
	}
	if (func_42(uParam1, 128))
	{
		unk_0x42806D7A5D645048(iParam0, "HOSPITAL_7", 0f, 1f);
	}
	if (func_42(uParam1, 256))
	{
		unk_0x42806D7A5D645048(iParam0, "HOSPITAL_8", 0f, 1f);
	}
	if (func_42(uParam1, 512))
	{
		unk_0x42806D7A5D645048(iParam0, "HOSPITAL_9", 0f, 1f);
	}
	if (func_42(uParam1, 0))
	{
	}
}

bool func_42(var uParam0, int iParam1)//Position - 0x2001
{
	return (uParam0 && iParam1) != 0;
}

int func_43()//Position - 0x2010
{
	if (((Global_16B1B == 13 || Global_16B1B == 10) || Global_16B1B == 11) || Global_16B1B == 12)
	{
		return 0;
	}
	return 1;
}

void func_44()//Position - 0x204E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_15FB1[iVar0 /*17*/] && !Global_15FB1[iVar0 /*17*/].f_1)
		{
			if (Global_15FB1[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_15FB1[iVar0 /*17*/].f_5 != 88 && Global_15FB1[iVar0 /*17*/].f_5 != 89) && Global_15FB1[iVar0 /*17*/].f_5 != 92)
				{
					func_45(Global_15FB1[iVar0 /*17*/].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_45(int iParam0, bool bParam1)//Position - 0x20D5
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_1542D[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_1542D[iParam0 /*2*/] = 0;
	}
}

bool func_46(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x2113
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

void func_47()//Position - 0x215A
{
	func_48();
	func_65(1);
}

void func_48()//Position - 0x216B
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		iVar1 = Global_8FEC[iVar0 /*5*/];
		if (!iVar1 == -1)
		{
			func_148(1, iVar1, 1);
		}
		iVar0++;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_8FD2[iVar2 /*5*/] == 0)
		{
			func_49(iVar2);
		}
		iVar2++;
	}
}

void func_49(int iParam0)//Position - 0x21CB
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_8FD2[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_8FD2[iParam0 /*5*/].f_1 == unk_0xBC25C936A095B5BA())
		{
			Global_90BF = 0;
		}
	}
	Global_8FD2[iParam0 /*5*/] = 13;
	Global_8FD2[iParam0 /*5*/].f_1 = 0;
	Global_8FD2[iParam0 /*5*/].f_2 = 0;
	Global_8FD2[iParam0 /*5*/].f_3 = 0;
	Global_8FD2[iParam0 /*5*/].f_4 = 0;
	Global_8FD1 = (Global_8FD1 - 1);
	if (Global_8FD1 < 0)
	{
		Global_8FD1 = 0;
	}
}

int func_50(vector3 vParam0, float fParam1, int iParam2, int iParam3)//Position - 0x224E
{
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		func_54(0);
		unk_0x6C5F5B5F6894CCE3(vParam0, 5f, 1, 0, 0, false);
		if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
		{
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), vParam0, 1, 0, 0, 1);
				unk_0x019CE76D5286C95C(unk_0xBC25C936A095B5BA(), fParam1);
				unk_0x2B9AEC08E469E384(0f, 1065353216);
				unk_0xF3F01A78937DC905(0f);
			}
		}
		unk_0x1732A8A5D2D39430(vParam0, 4500f, 0);
		SYSTEM::WAIT(0);
		unk_0x6C5F5B5F6894CCE3(vParam0, 5000f, 1, 0, 0, false);
		unk_0x4516EDD0A096FB5B(vParam0, 5000f, 0);
		unk_0x5DEC86EE2E34A59D(vParam0, 5000f);
		unk_0x6A54FD861D871600(vParam0, 5000f);
		func_53();
		func_52();
		SYSTEM::SETTIMERA(0);
		func_54(1);
		if (!unk_0x719413B40BB63D86())
		{
			while (!unk_0x1732A8A5D2D39430(vParam0, 4500f, 0))
			{
				SYSTEM::WAIT(0);
				if (SYSTEM::TIMERA() > 2000)
				{
					unk_0x121BBDEFA4F0C22B(0);
					return 0;
				}
			}
		}
		SYSTEM::SETTIMERA(0);
		while (!unk_0xF220370B0C08EC20())
		{
			SYSTEM::WAIT(0);
			if (SYSTEM::TIMERA() > 20000)
			{
				unk_0x121BBDEFA4F0C22B(0);
				if (unk_0x719413B40BB63D86())
				{
					unk_0x13D5880CBA449AA9();
				}
				return 0;
			}
		}
		if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
		{
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x719413B40BB63D86())
				{
					unk_0x13D5880CBA449AA9();
				}
				unk_0x121BBDEFA4F0C22B(0);
				SYSTEM::SETTIMERA(0);
				unk_0xDA1FC589059DA9F2();
				if (iParam3 == 1)
				{
					unk_0xEE1FDC041B0DABCC();
				}
				else
				{
					SYSTEM::SETTIMERA(5000);
				}
				unk_0x9FCCC18C27AFE848();
			}
		}
		while ((!unk_0x8D4597D12C9BB336() && !func_51()) && SYSTEM::TIMERA() < 1500)
		{
			SYSTEM::WAIT(0);
		}
		if (SYSTEM::TIMERA() > 1500)
		{
			if (iParam3 == 1)
			{
			}
		}
		if (iParam2 == 1)
		{
			unk_0x2084D4C6C2DF616F(vParam0, &(vParam0.f_2), 0, 0);
			unk_0x6C5F5B5F6894CCE3(vParam0, 5f, 1, 0, 0, false);
			if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
			{
				if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
				{
					unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), vParam0, 1, 0, 0, 1);
					unk_0x019CE76D5286C95C(unk_0xBC25C936A095B5BA(), fParam1);
				}
			}
		}
		unk_0x2B9AEC08E469E384(0f, 1065353216);
		unk_0xF3F01A78937DC905(0f);
		func_54(0);
		return 1;
	}
	func_54(0);
	return 0;
}

bool func_51()//Position - 0x246D
{
	return !Global_110A8.f_229;
}

void func_52()//Position - 0x247D
{
	Global_110A8.f_229 = 1;
	Global_110A8.f_22A = 0;
}

void func_53()//Position - 0x2495
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		Global_110A8[iVar0] = 0;
		iVar0++;
	}
}

void func_54(int iParam0)//Position - 0x24B9
{
	int iVar0;
	
	iVar0 = 0;
	if (iVar0 == 0)
	{
		if (iParam0 == 1)
		{
			if (!unk_0xFA30DFD0084E92FE(Global_16B1B.f_14, 2))
			{
				unk_0x121BBDEFA4F0C22B(1);
				unk_0xF0059F27F7BB6680(&(Global_16B1B.f_14), 2);
			}
		}
		else if (unk_0xFA30DFD0084E92FE(Global_16B1B.f_14, 2))
		{
			unk_0x121BBDEFA4F0C22B(0);
			unk_0x7CB6FD92BE491AD9(&(Global_16B1B.f_14), 2);
		}
	}
}

int func_55()//Position - 0x2510
{
	if (unk_0xFA30DFD0084E92FE(unk_0x491B2241281A03B7(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

bool func_56(int iParam0)//Position - 0x2531
{
	return unk_0xFA30DFD0084E92FE(Global_19B04.f_1C20[iParam0], 0);
}

int func_57(int iParam0)//Position - 0x2549
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_19B04.f_2360.f_63.f_3A[iParam0];
}

int func_58()//Position - 0x2576
{
	if (Global_81F6[11] == 1)
	{
		return 4;
	}
	if (!func_59(21))
	{
		return 0;
	}
	if (!func_57(130))
	{
		return 1;
	}
	if (!func_57(131))
	{
		return 2;
	}
	if (!func_59(22))
	{
		return 1;
	}
	if (!func_59(49))
	{
		return 3;
	}
	if (!func_59(28))
	{
		return 1;
	}
	return 3;
}

int func_59(int iParam0)//Position - 0x25F4
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_19B04.f_2360.f_14A[iParam0 /*6*/];
}

int func_60()//Position - 0x2620
{
	func_61();
	return Global_19B04.f_932.f_21B.f_10CD;
}

void func_61()//Position - 0x2639
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_64(Global_19B04.f_932.f_21B.f_10CD) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_63(unk_0xBC25C936A095B5BA());
			if (func_62(iVar0) && (!func_29(14) || Global_196EB))
			{
				if (Global_19B04.f_932.f_21B.f_10CD != iVar0 && func_62(Global_19B04.f_932.f_21B.f_10CD))
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

bool func_62(int iParam0)//Position - 0x2736
{
	return iParam0 < 3;
}

int func_63(int iParam0)//Position - 0x2742
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_64(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_64(int iParam0)//Position - 0x277F
{
	if (func_62(iParam0))
	{
		return Global_19B04.f_6D75[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_65(bool bParam0)//Position - 0x27A9
{
	unk_0xC0231BA8D252A9AE(0f);
	unk_0x07A21648E1E26132(0f);
	unk_0xC7B707F8F56F2EAA(0f);
	unk_0x7D9EA045634DD11D(1);
	unk_0x3B35C0FF76598EE9(0f);
	unk_0x99FD3E61CA8D5A34(1);
	unk_0xE752383E5104F3D0(0);
	if (unk_0x144E80F5C46A6B75("SAFEHOUSE_STONED_MICHAEL"))
	{
		unk_0xC1300D0F3A74E20B("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!unk_0xF1734B55490E9045(&Global_90AB))
	{
		if (unk_0x144E80F5C46A6B75(&Global_90AB))
		{
			unk_0xC1300D0F3A74E20B(&Global_90AB);
		}
	}
	if (unk_0xEF0E25DA0CB6E8FF(Global_90A0))
	{
		if (unk_0xA3AE65489EB30BF4(Global_90A0))
		{
			unk_0xCE33D5EFE2BDE6EF(Global_90A0, 0f);
			unk_0x2880294117B40FE9(Global_90A0, 1);
		}
	}
	if (unk_0x6CACA595557C5755())
	{
		unk_0x01EB6657F2BCE9D3(0);
	}
	if (bParam0)
	{
		if (unk_0xAF37936E3740DA19() != -1 || unk_0x68A80623278A92F5() != -1)
		{
			unk_0x38505EF4199EB062();
		}
		else if (unk_0x7930B3E9C919E90F())
		{
			unk_0x38505EF4199EB062();
		}
	}
	Global_90A6 = 0f;
	StringCopy(&Global_90A7, "", 16);
	StringCopy(&Global_90AB, "", 64);
	StringCopy(&Global_90BB, "", 16);
	func_66();
}

void func_66()//Position - 0x2882
{
	Global_909F = 0;
	Global_90A0 = 0;
	Global_90A1 = 0;
	Global_90A2 = 30000;
	Global_90A3 = 0f;
	Global_90A5 = 0f;
	Global_90A4 = 0f;
	Global_90A6 = 0f;
	StringCopy(&Global_90A7, "", 16);
}

void func_67(int iParam0)//Position - 0x28B3
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_40001.f_42A7;
			break;
		
		case 1:
			iVar0 = Global_40001.f_429D;
			break;
		
		case 2:
			iVar0 = Global_40001.f_42A8;
			break;
		
		case 3:
			iVar0 = Global_40001.f_42A0;
			break;
		
		case 4:
			iVar0 = Global_40001.f_429C;
			break;
		
		case 6:
			iVar0 = 3;
			break;
		
		case 7:
			iVar0 = Global_40001.f_42AB;
			break;
		
		case 8:
			iVar0 = Global_40001.f_42AC;
			break;
		
		case 9:
			iVar0 = Global_40001.f_42AF;
			break;
		
		case 22:
			iVar0 = Global_40001.f_42B0;
			break;
		
		case 23:
			iVar0 = Global_40001.f_42A9;
			break;
		
		case 25:
			iVar0 = Global_40001.f_4621;
			break;
		
		case 26:
			iVar0 = Global_40001.f_4620;
			break;
	}
	if (iVar0 != 0)
	{
		unk_0x0022CBDAA2EA4C4F(func_78(func_79()), func_76(func_79()), func_75(), func_74(), iParam0, iVar0);
	}
	func_73(iVar0);
	func_68(iVar0);
}

void func_68(int iParam0)//Position - 0x29D8
{
	int iVar0;
	
	iVar0 = func_72(3964, -1, 0);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 9999)
	{
		iVar0 = 9999;
	}
	Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_1C1 = iVar0;
	func_69(3964, iVar0, -1, 1, 0);
}

void func_69(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x2A26
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_269BC5[iParam0 /*3*/][func_70(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x3A57956BCE003880(iVar0, iParam1, iParam3);
	}
}

int func_70(var uParam0)//Position - 0x2A56
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_71();
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

int func_71()//Position - 0x2A8A
{
	return Global_1407E0;
}

int func_72(int iParam0, int iParam1, int iParam2)//Position - 0x2A96
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_269BC5[iParam0 /*3*/][func_70(iParam1)];
	if (unk_0x6CB99B97664C3727(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_73(int iParam0)//Position - 0x2AC8
{
	int iVar0;
	
	iVar0 = unk_0xB5CEFD608600A09F();
	Global_18C80F[iVar0 /*558*/].f_B.f_1C0 = (Global_18C80F[iVar0 /*558*/].f_B.f_1C0 + iParam0);
	if (Global_18C80F[iVar0 /*558*/].f_B.f_1C0 < -9999)
	{
		Global_18C80F[iVar0 /*558*/].f_B.f_1C0 = 9999;
	}
	else if (Global_18C80F[iVar0 /*558*/].f_B.f_1C0 > 9999)
	{
		Global_18C80F[iVar0 /*558*/].f_B.f_1C0 = 9999;
	}
}

int func_74()//Position - 0x2B42
{
	if (Global_196948.f_3 != 0)
	{
		return Global_196948.f_3;
	}
	return -1;
}

int func_75()//Position - 0x2B5E
{
	if (Global_196948.f_2 != 0)
	{
		return Global_196948.f_2;
	}
	return -1;
}

int func_76(int iParam0)//Position - 0x2B7A
{
	if (iParam0 == func_77())
	{
		return -1;
	}
	return Global_18C80F[iParam0 /*558*/].f_B.f_8[1];
}

int func_77()//Position - 0x2B9F
{
	return -1;
}

int func_78(int iParam0)//Position - 0x2BA8
{
	if (iParam0 == func_77())
	{
		return -1;
	}
	return Global_18C80F[iParam0 /*558*/].f_B.f_8[0];
}

int func_79()//Position - 0x2BCD
{
	return Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B;
}

bool func_80(bool bParam0)//Position - 0x2BE2
{
	return func_81(unk_0xB5CEFD608600A09F(), bParam0);
}

int func_81(int iParam0, bool bParam1)//Position - 0x2BF4
{
	return func_82(iParam0, bParam1, 1);
}

int func_82(int iParam0, bool bParam1, int iParam2)//Position - 0x2C05
{
	int iVar0;
	
	if (iParam0 == func_77())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_83(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_18C80F[iParam0 /*558*/].f_B;
	if (iVar0 != func_77() && Global_18C80F[iVar0 /*558*/].f_B.f_199 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_83(int iParam0, int iParam1)//Position - 0x2C61
{
	if (iParam0 != func_77())
	{
		if (Global_18C80F[iParam0 /*558*/].f_B != func_77())
		{
			if (Global_18C80F[iParam0 /*558*/].f_B == iParam0 && Global_18C80F[iParam0 /*558*/].f_B.f_199 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_84(int iParam0, bool bParam1, int iParam2)//Position - 0x2CB0
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
		if (!func_92())
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
				else if (bVar13 || (!func_90(unk_0xB5CEFD608600A09F(), 0) && !func_89()))
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
				if (!func_88(iVar25) && !unk_0xE55B9B1B2A172FD4(iVar25))
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
					func_87();
					func_86();
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
				if (!func_88(iVar25) && !unk_0xE55B9B1B2A172FD4(iVar25))
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
					if (func_85(Global_440000.f_243FE))
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

bool func_85(int iParam0)//Position - 0x30B0
{
	return iParam0 == 17;
}

void func_86()//Position - 0x30BD
{
	vector3 vVar0;
	
	Global_252E21.f_4CC = 0;
	Global_252E21.f_4CD = 0;
	Global_252E21.f_4CE = { 9999.9f, 9999.9f, 9999.9f };
	Global_252E21.f_4D3 = -1;
	Global_252E21.f_4D4 = 0;
	Global_24B2CE.f_A6F = { vVar0 };
}

void func_87()//Position - 0x310A
{
	Global_24B2CE.f_2B2 = 0;
	Global_24B2CE.f_A9A = 0;
	Global_24B2CE.f_1FC = 0;
	Global_24B2CE.f_254 = 0;
	Global_24FB5C[unk_0xB5CEFD608600A09F() /*406*/].f_CB = 0;
	Global_24B2CE.f_A6E = 0;
}

int func_88(int iParam0)//Position - 0x3148
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

bool func_89()//Position - 0x3179
{
	return unk_0xFA30DFD0084E92FE(Global_240006, 3);
}

bool func_90(int iParam0, int iParam1)//Position - 0x318A
{
	bool bVar0;
	
	if (iParam0 == unk_0xB5CEFD608600A09F())
	{
		bVar0 = func_91(-1, 0) == 8;
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

int func_91(int iParam0, bool bParam1)//Position - 0x31D5
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_71();
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

int func_92()//Position - 0x3216
{
	if (func_93() == 0)
	{
		return 1;
	}
	return 0;
}

int func_93()//Position - 0x322B
{
	return Global_1406D2.f_12;
}

void func_94(var uParam0, bool bParam1, bool bParam2)//Position - 0x3239
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x7AF0088ABFA713B6() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0xED678C85A82F0AB9();
			}
			else
			{
				*uParam0 = unk_0x1C44CABA911F93F7();
			}
		}
		else
		{
			*uParam0 = unk_0x105601648511CC64();
		}
		uParam0->f_1 = 1;
	}
}

void func_95()//Position - 0x327E
{
	int iVar0;
	
	if (bLocal_46)
	{
		return;
	}
	Local_43.f_4 = 0;
	if (!func_96(Global_8FEC[iLocal_54 /*5*/].f_2))
	{
		return;
	}
	iVar0 = unk_0x491B2241281A03B7(500, 3000);
	vLocal_52.x = 5;
	Local_51.f_2 = (SYSTEM::TIMERA() + iVar0);
}

int func_96(int iParam0)//Position - 0x32C1
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	int iVar4;
	
	iVar0 = func_107();
	if (iVar0 == -2)
	{
		return 0;
	}
	if (unk_0x36CEFBE9B745A58D(Local_43.f_1))
	{
		if (unk_0x5237AF95232D78C5(Local_43.f_1, 0) || unk_0x8F1FDD0A40DC834A(Local_43.f_1))
		{
			return 0;
		}
		if (unk_0xF3160454EE16A1B1(Local_43.f_1))
		{
			return 0;
		}
		if (func_103(Local_43.f_1))
		{
			return 0;
		}
	}
	if ((Global_8FEC[iLocal_54 /*5*/].f_3 < 3 && Global_8FEC[iLocal_54 /*5*/].f_3 != 0) && Global_8FEC[iLocal_54 /*5*/].f_3 > Global_8FEC[iLocal_54 /*5*/].f_4)
	{
		return 0;
	}
	if ((Global_8FEC[iLocal_54 /*5*/].f_4 < 9 && Global_8FEC[iLocal_54 /*5*/].f_4 != 0) && Global_8FEC[iLocal_54 /*5*/].f_4 > Global_8FEC[iLocal_54 /*5*/].f_3)
	{
		return 0;
	}
	sVar1 = func_102(iParam0);
	if (unk_0xF1734B55490E9045(sVar1))
	{
		return 0;
	}
	if (func_103(Local_43.f_1))
	{
		return 0;
	}
	unk_0x37FA5A8A7F1136BA(sVar1);
	if (func_99(Local_43.f_1))
	{
		sVar2 = "MOVE_M@DRUNK@TRANSITIONS";
		sVar3 = "";
		switch (iParam0)
		{
			case 0:
				sVar3 = "";
				break;
			
			case 2:
				sVar3 = "VERY_TO_MODERATE";
				break;
			
			case 1:
				sVar3 = "MODERATE_TO_SLIGHTLY";
				break;
			
			default:
				break;
		}
		if (!unk_0xF1734B55490E9045(sVar2) && !unk_0xF1734B55490E9045(sVar3))
		{
			unk_0x522053D86D6E1C7A(sVar2);
			while (!unk_0xF9E082857622D91E(sVar2))
			{
				SYSTEM::WAIT(0);
			}
			if (!unk_0x36CEFBE9B745A58D(Local_43.f_1))
			{
				unk_0xE896C0AD02364F2A(Local_43.f_1, sVar2, sVar3, 1.5f, -1.5f, -1, 48, 0, 0, 0, 0);
				sLocal_50 = sVar3;
			}
		}
	}
	if (!unk_0x320539481B2F0121(sVar1))
	{
		return 0;
	}
	if (unk_0x36CEFBE9B745A58D(Local_43.f_1))
	{
		return 0;
	}
	unk_0x43B967881C60631D(Local_43.f_1, sVar1, 0.75f);
	if (unk_0x7FCE28BE45D0735E() == 4)
	{
		unk_0x5CCBDF674448F1F1(Local_43.f_1, "move_ped_strafing_firstperson@drunk");
	}
	unk_0x2ED10ACF200755F4(Local_43.f_1, 0, sVar1, "idle", 2f, 1);
	vLocal_52.z = sVar1;
	bLocal_47 = true;
	iVar4 = 0;
	switch (func_63(Local_43.f_1))
	{
		case 0:
			iVar4 = "FACIALS@P_M_ZERO@BASE";
			break;
		
		case 1:
			iVar4 = "FACIALS@P_M_ONE@BASE";
			break;
		
		case 2:
			iVar4 = "FACIALS@P_M_TWO@BASE";
			break;
		
		default:
			if (unk_0x15DBD981998D4FE1(Local_43.f_1))
			{
				if (!func_97())
				{
					iVar4 = "FACIALS@GEN_MALE@BASE";
				}
				else
				{
					iVar4 = "FACIALS@GEN_FEMALE@BASE";
				}
			}
			else if (unk_0xB6FD7D587FE0A1B4(Local_43.f_1))
			{
				iVar4 = "FACIALS@GEN_MALE@BASE";
			}
			else
			{
				iVar4 = "FACIALS@GEN_FEMALE@BASE";
			}
			break;
	}
	unk_0xA3860F0641D38992(Local_43.f_1, "mood_drunk_1", iVar4);
	unk_0x2E9860A2B72187F5(Local_43.f_1, 200, true);
	unk_0x2E9860A2B72187F5(Local_43.f_1, 46, true);
	unk_0x8941EA87BBF38C6F(Local_43.f_1, 0);
	unk_0xABA7AE40608505F2(Local_43.f_1, 262144, true);
	unk_0x30A2BBDD27175C81(Local_43.f_1, 1);
	return 1;
}

bool func_97()//Position - 0x3583
{
	return func_98(unk_0xB5CEFD608600A09F());
}

int func_98(int iParam0)//Position - 0x3593
{
	if (unk_0x6F79ECA8C83E4357(unk_0xA95CF30C72EB526E(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_99(int iParam0)//Position - 0x35B2
{
	vector3 vVar0;
	
	if (unk_0x5237AF95232D78C5(iParam0, 1) || unk_0x8F1FDD0A40DC834A(iParam0))
	{
		return 0;
	}
	if (unk_0xF4FCC3C1048FF2AB(iParam0, -2017877118) != 7)
	{
		return 0;
	}
	if (unk_0xF4FCC3C1048FF2AB(iParam0, 1785177548) != 7)
	{
		return 0;
	}
	if (unk_0x32E373675659FDB0(iParam0))
	{
		return 0;
	}
	if (unk_0x2A348A3A98B80B13(iParam0))
	{
		return 0;
	}
	if (unk_0x2CDE18D6C89522AD(iParam0))
	{
		return 0;
	}
	if (unk_0x3BFD283B5133A140(iParam0))
	{
		return 0;
	}
	if (Global_10AB8)
	{
		return 0;
	}
	if (func_101())
	{
		return 0;
	}
	if (iParam0 == unk_0xBC25C936A095B5BA())
	{
		if (!unk_0x7C0DA819D1835E07(unk_0xB5CEFD608600A09F()))
		{
			return 0;
		}
		if (!unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F()))
		{
			return 0;
		}
		if (unk_0xC2D39D2C720A03B0(unk_0xB5CEFD608600A09F()) || unk_0xE1C3A331B6951C3D(unk_0xB5CEFD608600A09F()))
		{
			return 0;
		}
		if (func_100())
		{
			return 0;
		}
	}
	vVar0 = { unk_0xB5D9AE572C19509E(iParam0) };
	if (SYSTEM::VMAG2(vVar0) >= (1f * 1f))
	{
		return 0;
	}
	return 1;
}

bool func_100()//Position - 0x36B3
{
	return Global_16B4F.f_142 > 0;
}

bool func_101()//Position - 0x36C4
{
	return unk_0x105601648511CC64() <= Global_43C1.f_1671 + 100;
}

char* func_102(int iParam0)//Position - 0x36D9
{
	switch (iParam0)
	{
		case 0:
			return "move_m@drunk@verydrunk";
			break;
		
		case 1:
			return "move_m@drunk@slightlydrunk";
			break;
		
		case 2:
			return "move_m@drunk@moderatedrunk";
			break;
	}
	return "";
}

bool func_103(int iParam0)//Position - 0x371A
{
	int iVar0;
	char* sVar1;
	
	iVar0 = func_104(iParam0);
	sVar1 = func_102(iVar0);
	if (unk_0xF1734B55490E9045(vLocal_52.z))
	{
		if (unk_0xF1734B55490E9045(sVar1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return unk_0x3362CDE8460ED38B(vLocal_52.z, sVar1);
}

int func_104(int iParam0)//Position - 0x375B
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!unk_0x724D816EA203A79E(iParam0))
	{
		return -1;
	}
	iVar0 = func_106(iParam0);
	iVar1 = func_105(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_8FEC[iVar1 /*5*/].f_2;
}

int func_105(int iParam0)//Position - 0x379E
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_8FEC[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_106(int iParam0)//Position - 0x37CE
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_8FEC[iVar0 /*5*/].f_1)
		{
			return Global_8FEC[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

int func_107()//Position - 0x380F
{
	int iVar0;
	
	if (Local_51 == -2)
	{
		return -2;
	}
	if (Local_51 == -1)
	{
		return -1;
	}
	iVar0 = (Local_51 - SYSTEM::TIMERA());
	if (iVar0 < 0)
	{
		return -2;
	}
	if (iVar0 > 65534)
	{
		iVar0 = 65534;
	}
	return iVar0;
}

void func_108()//Position - 0x3855
{
	if (bLocal_46)
	{
		return;
	}
	if (!func_109())
	{
		vLocal_52.x = 5;
		Local_51.f_2 = SYSTEM::TIMERA() + 5000;
		return;
	}
	vLocal_52.x = 6;
}

bool func_109()//Position - 0x3881
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	if (Local_43.f_4 == 0)
	{
		return 0;
	}
	if (unk_0x1D403DFADBC2DE3C(Local_43.f_4, 0))
	{
		return 0;
	}
	vVar0 = { unk_0x541C2AEF053615BC(Local_43.f_1, true) };
	vVar1 = { unk_0x541C2AEF053615BC(Local_43.f_4, true) };
	fVar2 = unk_0xF0F2FC9DE291567F(vVar0, vVar1, true);
	return fVar2 < 7f;
}

void func_110()//Position - 0x38D2
{
	int iVar0;
	char* sVar1;
	
	if (Local_43.f_1 == unk_0xBC25C936A095B5BA())
	{
		unk_0xBBC4195AD74D153D(0, 36, 1);
		if (unk_0xB3B744D2D9D757D1(Local_43.f_1))
		{
			if (Global_8FEC[iLocal_54 /*5*/].f_2 == 0 || Global_8FEC[iLocal_54 /*5*/].f_2 == 2)
			{
				unk_0x4060A19D5551068A(Local_43.f_1, 0, 0);
			}
		}
		if (unk_0xFC1354EC06B3E9F8(Local_43.f_1))
		{
			unk_0x5845955B5CBDB595(Local_43.f_1, 0);
		}
	}
	if (Local_51 != -2)
	{
		if (Local_51 == -1)
		{
			if (Global_8FEC[iLocal_54 /*5*/].f_2 != 0)
			{
				Global_8FEC[iLocal_54 /*5*/].f_2 = 0;
			}
		}
		else
		{
			iVar0 = (Local_51 - SYSTEM::TIMERA());
			if (iVar0 <= 0)
			{
				iVar0 = 0;
			}
			iVar0 = (iVar0 / 1000) + 1;
			if (Global_8FEC[iLocal_54 /*5*/].f_2 == 0)
			{
				if (iVar0 < 30)
				{
					Global_8FEC[iLocal_54 /*5*/].f_2 = 2;
					if (!func_96(2))
					{
						Global_8FEC[iLocal_54 /*5*/].f_2 = 0;
						return;
					}
				}
			}
			if (Global_8FEC[iLocal_54 /*5*/].f_2 == 2)
			{
				if (iVar0 < 10)
				{
					Global_8FEC[iLocal_54 /*5*/].f_2 = 1;
					if (!func_96(2))
					{
						Global_8FEC[iLocal_54 /*5*/].f_2 = 2;
						return;
					}
				}
			}
			if (Global_8FEC[iLocal_54 /*5*/].f_2 == 1)
			{
			}
		}
	}
	else
	{
		return;
	}
	if (!unk_0xF1734B55490E9045(sLocal_50))
	{
		if (!func_99(Local_43.f_1))
		{
			sVar1 = "MOVE_M@DRUNK@TRANSITIONS";
			if (unk_0x96044E39418AAF17(Local_43.f_1, sVar1, sLocal_50, 3))
			{
				unk_0x08FA5F7132D73F6F(Local_43.f_1, sVar1, sLocal_50, -4f);
			}
			sLocal_50 = "";
			return;
		}
	}
	if (Global_8FEC[iLocal_54 /*5*/].f_3 >= 10 || Global_8FEC[iLocal_54 /*5*/].f_4 >= 15)
	{
		if (unk_0xF4FCC3C1048FF2AB(Local_43.f_1, 1785177548) == 1)
		{
			return;
		}
		if (unk_0x8C2668F45F2BB3F2(Local_43.f_1))
		{
			return;
		}
		if (unk_0x5237AF95232D78C5(Local_43.f_1, 1))
		{
			if (Global_8FEC[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_8FEC[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_8FEC[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_8FEC[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		if (((unk_0x7AF0088ABFA713B6() && Local_43.f_1 == unk_0xBC25C936A095B5BA()) && func_111(unk_0xB5CEFD608600A09F())) && Global_40001.f_5A89)
		{
			if (Global_8FEC[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_8FEC[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_8FEC[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_8FEC[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		vLocal_52.y = 3;
		return;
	}
	if (!bLocal_47)
	{
		return;
	}
	if (!func_103(Local_43.f_1))
	{
		return;
	}
}

int func_111(int iParam0)//Position - 0x3B42
{
	if (iParam0 != func_77())
	{
		if (func_113(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1)
			{
				return func_112(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 11;
			}
		}
	}
	return 0;
}

int func_112(int iParam0)//Position - 0x3B89
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
	}
	return -1;
}

int func_113(int iParam0, bool bParam1, bool bParam2)//Position - 0x3ED5
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

int func_114()//Position - 0x3F1F
{
	int iVar0;
	
	if (!unk_0xCBBE5AFE2CD2E9B6(Local_43.f_1))
	{
		return 0;
	}
	iVar0 = 0;
	iVar0 = unk_0x9FE9D386222EEE47(Local_43.f_1, 0);
	if (!unk_0xE59B7F5A03335350(iVar0, 0))
	{
		return 0;
	}
	if (!unk_0x3187EF5798B5D209(iVar0, -1, 0) == Local_43.f_1)
	{
		return 0;
	}
	Local_43.f_4 = iVar0;
	vLocal_52.x = 7;
	return 1;
}

void func_115()//Position - 0x3F73
{
	if (!unk_0x5237AF95232D78C5(Local_43.f_1, 0))
	{
		vLocal_52.x = 4;
		return;
	}
}

void func_116()//Position - 0x3F8E
{
	int iVar0;
	float fVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	
	if (!bLocal_46)
	{
		return;
	}
	if (!unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		return;
	}
	if (!unk_0xCBBE5AFE2CD2E9B6(unk_0xBC25C936A095B5BA()))
	{
		return;
	}
	if (unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0))
	{
		return;
	}
	iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
	fVar1 = unk_0x8910237449BB6F79(iVar0);
	if (fVar1 < 5f)
	{
		return;
	}
	vVar2 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true) };
	vVar3 = { vVar2 - Vector(3f, 30f, 30f) };
	vVar4 = { vVar2 + Vector(3f, 30f, 30f) };
	if (!unk_0x89E5F484A37AE468(vVar3, vVar4) && !unk_0xBFED55DE95EA4B0C(vVar3, vVar4))
	{
		return;
	}
	unk_0xED946BB96C5E9C4A(unk_0xB5CEFD608600A09F(), 1, 0);
	unk_0xCE6A8FE7DACF8BD4(unk_0xB5CEFD608600A09F(), 0);
	func_11(73, 1);
}

void func_117()//Position - 0x4061
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	
	iVar0 = Local_43.f_1;
	if (unk_0x5237AF95232D78C5(Local_43.f_1, 0))
	{
		iVar1 = unk_0x9FE9D386222EEE47(Local_43.f_1, 0);
		iVar2 = unk_0x3187EF5798B5D209(iVar1, -1, 0);
		if (!iVar2 == Local_43.f_1)
		{
			return;
		}
		if (unk_0x7AF0088ABFA713B6() && !unk_0x4DF785C4DF542CD0(iVar1))
		{
			return;
		}
		iVar0 = iVar1;
	}
	else if (!unk_0xBC25C936A095B5BA() == Local_43.f_1)
	{
		return;
	}
	else if (!unk_0x7FCE28BE45D0735E() == 4)
	{
		fLocal_49 = 0f;
		func_119(iVar0, 0f);
		return;
	}
	if (SYSTEM::TIMERA() < Local_51.f_4)
	{
		func_119(iVar0, fLocal_49);
		return;
	}
	if (unk_0x386592AF38881675(iVar0))
	{
		Local_51.f_4 = SYSTEM::TIMERA() + 2000;
	}
	else
	{
		Local_51.f_4 = SYSTEM::TIMERA() + 1000;
	}
	fVar3 = unk_0x8910237449BB6F79(iVar0);
	if (fVar3 < 0.04f)
	{
		fLocal_49 = 0f;
		func_119(iVar0, 0f);
		return;
	}
	if (Local_51.f_1 == -1)
	{
		fLocal_49 = func_118(iVar0, 0.13f, 0.06f);
	}
	else
	{
		iVar4 = (Local_51.f_1 - SYSTEM::TIMERA());
		if (iVar4 < 5000)
		{
			fLocal_49 = 0f;
		}
		else if (iVar4 < 15000)
		{
			fLocal_49 = func_118(iVar0, 0.05f, 0.02f);
		}
		else if (iVar4 < 30000)
		{
			fLocal_49 = func_118(iVar0, 0.07f, 0.03f);
		}
		else if (iVar4 < 45000)
		{
			fLocal_49 = func_118(iVar0, 0.09f, 0.04f);
		}
		else if (iVar4 < 600000)
		{
			fLocal_49 = func_118(iVar0, 0.1f, 0.05f);
		}
		else
		{
			fLocal_49 = func_118(iVar0, 0.13f, 0.06f);
		}
	}
	func_119(iVar0, fLocal_49);
}

float func_118(int iParam0, float fParam1, float fParam2)//Position - 0x4203
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = unk_0x55AEFCD285ECC0F2(-fParam1, fParam1);
	fVar1 = unk_0x55AEFCD285ECC0F2(0f, fParam2);
	if (fVar0 < 0f)
	{
		fVar0 = (fVar0 - fVar1);
	}
	else
	{
		fVar0 = (fVar0 + fVar1);
	}
	if (unk_0x386592AF38881675(iParam0))
	{
		if (unk_0x7199482D96955B9E(unk_0x399F7937FFE4DEBF(iParam0)))
		{
			fVar0 = (fVar0 * 4.5f);
		}
		else
		{
			fVar0 = (fVar0 * 3f);
		}
	}
	else
	{
		iVar2 = unk_0x6F79ECA8C83E4357(iParam0);
		if (unk_0x7512ED01F3F46714(iVar2))
		{
			fVar0 = (fVar0 * 1.5f);
		}
		else
		{
			fVar0 = (fVar0 * 0.5f);
		}
	}
	fVar0 = func_21(fVar0, -1f, 1f);
	return fVar0;
}

void func_119(int iParam0, float fParam1)//Position - 0x4297
{
	if (unk_0x7AF0088ABFA713B6() && !unk_0x4DF785C4DF542CD0(iParam0))
	{
		return;
	}
	if (unk_0x386592AF38881675(iParam0))
	{
		unk_0xEEA5BE3E827BD534(unk_0x399F7937FFE4DEBF(iParam0), fParam1);
	}
	else if (unk_0xD27AC0E9B78CFDD7(iParam0))
	{
		unk_0xCF883E5A10A252C1(unk_0x233ED4CD1F1A42C1(iParam0), fParam1);
	}
}

void func_120()//Position - 0x42E2
{
	int iVar0;
	
	if (!unk_0x5237AF95232D78C5(Local_43.f_1, 0))
	{
		vLocal_52.x = 4;
		return;
	}
	if (unk_0x7AF0088ABFA713B6())
	{
		if (Global_8FEC[iLocal_54 /*5*/].f_3 >= 10 || Global_8FEC[iLocal_54 /*5*/].f_4 >= 15)
		{
			if (Global_8FEC[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_8FEC[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_8FEC[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_8FEC[iLocal_54 /*5*/].f_4 = 14;
			}
		}
	}
	if (bLocal_46)
	{
		return;
	}
	iVar0 = unk_0x9FE9D386222EEE47(Local_43.f_1, 0);
	if (!unk_0xE59B7F5A03335350(iVar0, 0))
	{
		unk_0xA3981DED4FC2E56E(Local_43.f_1, 0, 0);
		vLocal_52.x = 11;
		return;
	}
}

void func_121()//Position - 0x4386
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (SYSTEM::TIMERA() <= Local_51.f_3)
	{
		return;
	}
	iVar0 = unk_0xF4FCC3C1048FF2AB(unk_0xBC25C936A095B5BA(), 355471868);
	if (!iVar0 == 7)
	{
		Local_51.f_3 = SYSTEM::TIMERA() + 1000;
		return;
	}
	if (!unk_0x5237AF95232D78C5(Local_43.f_1, 0))
	{
		vLocal_52.x = 4;
		Local_51.f_3 = -2;
		return;
	}
	iVar1 = unk_0x9FE9D386222EEE47(Local_43.f_1, 0);
	iVar2 = unk_0x3187EF5798B5D209(iVar1, -1, 0);
	if (iVar2 == Local_43.f_1)
	{
		func_122();
		Local_51.f_3 = -2;
		return;
	}
	unk_0x9BFB4F4439403039(Local_43.f_1, iVar1, 0);
	vLocal_52.x = 9;
	Local_51.f_3 = SYSTEM::TIMERA() + 1000;
}

void func_122()//Position - 0x4421
{
	if (vLocal_52.x == 10)
	{
		return;
	}
	vLocal_52.x = 10;
	if (iLocal_44 == -1)
	{
		return;
	}
	func_148(iLocal_44, 2, 5);
	Local_51.f_4 = SYSTEM::TIMERA();
	fLocal_49 = 0f;
}

void func_123()//Position - 0x4453
{
	if (unk_0xCBBE5AFE2CD2E9B6(Local_43.f_1))
	{
		vLocal_52.x = 10;
		return;
	}
	if (SYSTEM::TIMERA() < Local_51.f_3)
	{
		return;
	}
	vLocal_52.x = 4;
	Local_51.f_3 = -2;
}

void func_124()//Position - 0x4485
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if (!bLocal_46)
	{
	}
	iVar0 = 0;
	bVar1 = false;
	if (bVar1 || unk_0xCBBE5AFE2CD2E9B6(Local_43.f_1))
	{
		if (!bLocal_46)
		{
		}
		iVar0 = unk_0x9FE9D386222EEE47(Local_43.f_1, 0);
		if (!iVar0 == Local_43.f_4)
		{
			if (!bLocal_46)
			{
			}
			if (!bLocal_46)
			{
				if (!bLocal_46)
				{
				}
				unk_0xA3981DED4FC2E56E(Local_43.f_1, 0, 0);
				vLocal_52.x = 11;
				return;
			}
			Local_43.f_4 = iVar0;
		}
		if (bVar1)
		{
			if (!bLocal_46)
			{
			}
			func_122();
			return;
		}
		if (!bLocal_46)
		{
			if (!bLocal_46)
			{
			}
			func_122();
			return;
		}
		if (!bLocal_46)
		{
		}
		iVar2 = unk_0x3187EF5798B5D209(Local_43.f_4, -1, 0);
		if (iVar2 == Local_43.f_1)
		{
			func_122();
			return;
		}
		unk_0x9BFB4F4439403039(Local_43.f_1, iVar0, 0);
		vLocal_52.x = 9;
		Local_51.f_3 = SYSTEM::TIMERA() + 1000;
		return;
	}
	if (!func_109())
	{
		unk_0xA4E856A8CD53B8DF(Local_43.f_1);
		vLocal_52.x = 4;
		return;
	}
	if (!bLocal_46)
	{
		iVar3 = unk_0xF4FCC3C1048FF2AB(Local_43.f_1, -1794415470);
		if (iVar3 == 7)
		{
			if (!unk_0x5237AF95232D78C5(Local_43.f_1, 0))
			{
				unk_0xA4E856A8CD53B8DF(Local_43.f_1);
				vLocal_52.x = 4;
				return;
			}
		}
	}
}

void func_125()//Position - 0x45A1
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	if (bLocal_46)
	{
		return;
	}
	if (Local_43.f_4 == 0)
	{
		vLocal_52.x = 4;
		return;
	}
	if (!unk_0xE59B7F5A03335350(Local_43.f_4, 0))
	{
		Local_43.f_4 = 0;
		vLocal_52.x = 4;
		return;
	}
	vVar0 = { unk_0x541C2AEF053615BC(Local_43.f_1, true) };
	vVar1 = { unk_0x541C2AEF053615BC(Local_43.f_4, true) };
	fVar2 = unk_0xF0F2FC9DE291567F(vVar0, vVar1, true);
	if (fVar2 > 3f)
	{
		if (!func_96(Global_8FEC[iLocal_54 /*5*/].f_2))
		{
			vLocal_52.x = 12;
			return;
		}
		vLocal_52.x = 5;
		Local_51.f_2 = SYSTEM::TIMERA() + 2000;
		return;
	}
	iVar3 = unk_0x524ABB0435146845(Local_43.f_4);
	iVar4 = 0;
	bVar5 = true;
	iVar4 = 1;
	while (bVar5)
	{
		if (iVar4 < iVar3)
		{
			if (unk_0x1AAF0C23233C57AF(Local_43.f_4, iVar4, 0))
			{
				bVar5 = false;
			}
			else
			{
				iVar4++;
			}
		}
		else
		{
			bVar5 = false;
			iVar4 = -1;
		}
	}
	if (iVar4 == -1)
	{
		if (iVar4 == -1)
		{
			vLocal_52.x = 4;
			return;
		}
	}
	func_126();
	unk_0xD179FA0466FA4FE3(Local_43.f_1, Local_43.f_4, -1, iVar4, 2f, 1, 0);
	vLocal_52.x = 7;
}

void func_126()//Position - 0x46A4
{
	if (!unk_0x724D816EA203A79E(Local_43.f_1))
	{
		return;
	}
	if (!unk_0x36CEFBE9B745A58D(Local_43.f_1))
	{
		unk_0x7FD552896FDFC9E4(Local_43.f_1, 1048576000);
		unk_0x58D1D67B673B070D(Local_43.f_1);
		unk_0x2396C3BAAE2ACE94(Local_43.f_1, 0, -1056964608);
		vLocal_52.z = "";
		unk_0x851D6A4006011A10(Local_43.f_1);
		unk_0x2E9860A2B72187F5(Local_43.f_1, 200, false);
		unk_0x2E9860A2B72187F5(Local_43.f_1, 46, false);
		unk_0x8941EA87BBF38C6F(Local_43.f_1, 1);
		unk_0xABA7AE40608505F2(Local_43.f_1, 262144, false);
		unk_0x30A2BBDD27175C81(Local_43.f_1, 0);
	}
	if (!bLocal_47)
	{
		return;
	}
	bLocal_47 = false;
}

void func_127()//Position - 0x4739
{
	if (SYSTEM::TIMERA() < Local_51.f_2)
	{
		func_110();
		return;
	}
	func_128();
	Local_51.f_2 = -2;
	vLocal_52.x = 12;
}

int func_128()//Position - 0x4763
{
	if (!func_103(Local_43.f_1))
	{
		return 0;
	}
	if (!bLocal_47)
	{
		return 0;
	}
	func_129(Local_43.f_1);
	vLocal_52.z = "";
	Global_267214.f_11AE = 1;
	return 1;
}

void func_129(int iParam0)//Position - 0x479C
{
	unk_0x7FD552896FDFC9E4(iParam0, 1048576000);
	unk_0x2396C3BAAE2ACE94(iParam0, 0, -1056964608);
	unk_0x2E9860A2B72187F5(iParam0, 200, false);
	unk_0x8941EA87BBF38C6F(iParam0, 1);
	unk_0xABA7AE40608505F2(iParam0, 262144, false);
	unk_0x30A2BBDD27175C81(iParam0, 0);
}

void func_130()//Position - 0x47DD
{
	int iVar0;
	
	if (Local_51 == -1)
	{
		Global_8FEC[iLocal_54 /*5*/].f_2 = 0;
	}
	else if (Global_8FEC[iLocal_54 /*5*/].f_3 < 3 && Global_8FEC[iLocal_54 /*5*/].f_3 != 0)
	{
		Global_8FEC[iLocal_54 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_51 - SYSTEM::TIMERA());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_8FEC[iLocal_54 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_8FEC[iLocal_54 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_8FEC[iLocal_54 /*5*/].f_2 = 1;
		}
	}
	if (unk_0x5237AF95232D78C5(Local_43.f_1, 0))
	{
		vLocal_52.x = 10;
		return;
	}
	if (func_103(Local_43.f_1))
	{
		vLocal_52.x = 12;
		return;
	}
	if (Local_51 == -2)
	{
		return;
	}
	if (!func_96(Global_8FEC[iLocal_54 /*5*/].f_2))
	{
		return;
	}
	vLocal_52.x = 12;
}

void func_131()//Position - 0x48B3
{
}

void func_132()//Position - 0x48BB
{
	int iVar0;
	int iVar1;
	
	iVar0 = 6;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 16)
	{
		iVar0 = Global_903D[iVar1 /*6*/].f_2;
		if (!iVar0 == 6)
		{
			if (Global_903D[iVar1 /*6*/].f_1 == iLocal_44)
			{
				func_134(iVar1);
				func_133(iVar1);
			}
			else if (Global_903D[iVar1 /*6*/].f_1 == 2)
			{
				if (!iLocal_45 == -1)
				{
					if (iLocal_45 == Global_903D[iVar1 /*6*/])
					{
						func_134(iVar1);
					}
				}
			}
		}
		iVar1++;
	}
}

void func_133(int iParam0)//Position - 0x4933
{
	if (iParam0 < 0 || iParam0 >= 16)
	{
		return;
	}
	Global_903D[iParam0 /*6*/] = -1;
	Global_903D[iParam0 /*6*/].f_1 = -1;
	Global_903D[iParam0 /*6*/].f_2 = 6;
	Global_903D[iParam0 /*6*/].f_3 = 0;
	Global_903D[iParam0 /*6*/].f_4 = 0;
}

void func_134(int iParam0)//Position - 0x4980
{
	int iVar0;
	
	iVar0 = Global_903D[iParam0 /*6*/].f_2;
	switch (iVar0)
	{
		case 1:
			func_155();
			break;
		
		case 2:
			func_138(Global_903D[iParam0 /*6*/].f_4);
			break;
		
		case 3:
			func_137(Global_903D[iParam0 /*6*/].f_5);
			break;
		
		case 4:
			func_136();
			break;
		
		case 5:
			func_135();
			break;
		
		case 0:
			break;
		
		case 6:
			break;
		
		default:
			break;
	}
}

void func_135()//Position - 0x4A02
{
	vLocal_52.y = 2;
}

void func_136()//Position - 0x4A0F
{
	int iVar0;
	
	Global_8FEC[iLocal_54 /*5*/].f_4++;
	if (Local_51 == -1)
	{
		Global_8FEC[iLocal_54 /*5*/].f_2 = 0;
	}
	else if (Global_8FEC[iLocal_54 /*5*/].f_4 < 9 && Global_8FEC[iLocal_54 /*5*/].f_4 != 0)
	{
		Global_8FEC[iLocal_54 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_51 - SYSTEM::TIMERA());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_8FEC[iLocal_54 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_8FEC[iLocal_54 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_8FEC[iLocal_54 /*5*/].f_2 = 1;
		}
		if (!func_103(Local_43.f_1))
		{
			func_96(Global_8FEC[iLocal_54 /*5*/].f_2);
		}
	}
}

void func_137(int iParam0)//Position - 0x4ACF
{
	int iVar0;
	
	Global_8FEC[iLocal_54 /*5*/].f_3 = (Global_8FEC[iLocal_54 /*5*/].f_3 + iParam0);
	if (Local_51 == -1)
	{
		Global_8FEC[iLocal_54 /*5*/].f_2 = 0;
	}
	else if (Global_8FEC[iLocal_54 /*5*/].f_3 < 3 && Global_8FEC[iLocal_54 /*5*/].f_3 != 0)
	{
		Global_8FEC[iLocal_54 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_51 - SYSTEM::TIMERA());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_8FEC[iLocal_54 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_8FEC[iLocal_54 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_8FEC[iLocal_54 /*5*/].f_2 = 1;
		}
		if (!func_103(Local_43.f_1))
		{
			func_96(Global_8FEC[iLocal_54 /*5*/].f_2);
		}
	}
}

void func_138(int iParam0)//Position - 0x4B8F
{
	Local_43.f_3 = (Local_43.f_3 + iParam0);
	Local_43.f_2 = (Local_43.f_2 + iParam0);
	Local_51.f_1 = (Local_51.f_1 + iParam0);
	Local_51 = (Local_51 + iParam0);
}

void func_139()//Position - 0x4BBF
{
	int iVar0;
	
	if (!bLocal_46)
	{
		iLocal_53 = -1;
		return;
	}
	if (iLocal_53 < 0)
	{
		iLocal_53 = unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F());
		return;
	}
	iVar0 = unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F());
	if (iVar0 != iLocal_53)
	{
		if (iVar0 > iLocal_53)
		{
			func_140();
		}
		iLocal_53 = iVar0;
		return;
	}
}

void func_140()//Position - 0x4C09
{
}

void func_141()//Position - 0x4C11
{
	if (!Local_51 == -1)
	{
		if (!Local_51 == -2)
		{
			if (SYSTEM::TIMERA() >= Local_51)
			{
				func_126();
				Local_51 = -2;
				vLocal_52.x = 12;
			}
		}
		if (SYSTEM::TIMERA() > Local_51.f_1)
		{
			func_155();
		}
	}
}

void func_142(int iParam0)//Position - 0x4C50
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_903D[iVar0 /*6*/])
		{
			func_133(iVar0);
		}
		iVar0++;
	}
}

void func_143()//Position - 0x4C80
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	vLocal_52.x = 4;
	if (!unk_0x1D403DFADBC2DE3C(Local_43.f_1, 0))
	{
		if (unk_0xCBBE5AFE2CD2E9B6(Local_43.f_1))
		{
			vLocal_52.x = 10;
		}
	}
	if (bLocal_46)
	{
		func_146();
		func_11(71, 1);
		if (unk_0x7AF0088ABFA713B6())
		{
			iVar0 = func_72(2057, -1, 0);
			iVar1 = (iVar0 / 10) + 1 * 10;
			if (iVar0 + 1 >= iVar1)
			{
				func_144(iVar1);
			}
			func_69(2057, iVar0 + 1, -1, 1, 0);
		}
		else
		{
			iVar2 = 0;
			iVar3 = 0;
			iVar4 = 0;
			unk_0x6CB99B97664C3727(joaat("sp0_sp_num_times_drunk"), &iVar2, -1);
			unk_0x6CB99B97664C3727(joaat("sp1_sp_num_times_drunk"), &iVar3, -1);
			unk_0x6CB99B97664C3727(joaat("sp2_sp_num_times_drunk"), &iVar4, -1);
			iVar5 = ((iVar2 + iVar3) + iVar4);
			iVar6 = (iVar5 / 10) + 1 * 10;
			if (iVar5 + 1 >= iVar6)
			{
				func_144(iVar6);
			}
			switch (func_60())
			{
				case 0:
					unk_0x3A57956BCE003880(joaat("sp0_sp_num_times_drunk"), iVar2 + 1, 1);
					break;
				
				case 1:
					unk_0x3A57956BCE003880(joaat("sp1_sp_num_times_drunk"), iVar3 + 1, 1);
					break;
				
				case 2:
					unk_0x3A57956BCE003880(joaat("sp2_sp_num_times_drunk"), iVar4 + 1, 1);
					break;
				}
		}
		vLocal_52.y = 1;
		return;
	}
	vLocal_52.y = 12;
	if (Local_51 == -1)
	{
		Global_8FEC[iLocal_54 /*5*/].f_2 = 0;
	}
	else if (Global_8FEC[iLocal_54 /*5*/].f_3 < 3 && Global_8FEC[iLocal_54 /*5*/].f_3 != 0)
	{
		Global_8FEC[iLocal_54 /*5*/].f_2 = -1;
	}
	else
	{
		iVar7 = (Local_51 - SYSTEM::TIMERA());
		if (iVar7 <= 0)
		{
			iVar7 = 0;
		}
		iVar7 = (iVar7 / 1000) + 1;
		Global_8FEC[iLocal_54 /*5*/].f_2 = 0;
		if (iVar7 < 30)
		{
			Global_8FEC[iLocal_54 /*5*/].f_2 = 2;
		}
		if (iVar7 < 10)
		{
			Global_8FEC[iLocal_54 /*5*/].f_2 = 1;
		}
	}
}

void func_144(int iParam0)//Position - 0x4E2D
{
	int iVar0;
	
	iVar0 = func_145(81);
	Global_24D643[iVar0 /*83*/] = 81;
	Global_24D643[iVar0 /*83*/].f_11 = iParam0;
	StringCopy(&(Global_24D643[iVar0 /*83*/].f_12[0 /*16*/]), "", 64);
}

int func_145(int iParam0)//Position - 0x4E64
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_24D643[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_24D643[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

void func_146()//Position - 0x4EB1
{
}

void func_147()//Position - 0x4EB9
{
	Local_51 = Local_43.f_2;
	Local_51.f_1 = Local_43.f_3;
	Local_51.f_2 = -2;
	Local_51.f_3 = -2;
}

void func_148(int iParam0, int iParam1, int iParam2)//Position - 0x4EDD
{
	func_149(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_149(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x4EF2
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_151(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_150();
	if (iVar0 == -1)
	{
		return;
	}
	Global_903D[iVar0 /*6*/] = iParam0;
	Global_903D[iVar0 /*6*/].f_1 = iParam1;
	Global_903D[iVar0 /*6*/].f_2 = iParam2;
	Global_903D[iVar0 /*6*/].f_3 = iParam3;
	Global_903D[iVar0 /*6*/].f_4 = iParam4;
	Global_903D[iVar0 /*6*/].f_5 = iParam5;
}

int func_150()//Position - 0x4F74
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_903D[iVar0 /*6*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_151(int iParam0, int iParam1, int iParam2)//Position - 0x4FA5
{
	if (func_152(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_152(int iParam0, int iParam1, int iParam2)//Position - 0x4FC0
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_903D[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_903D[iVar0 /*6*/])
			{
				if (iParam1 == Global_903D[iVar0 /*6*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

void func_153()//Position - 0x500C
{
	int iVar0;
	
	bLocal_46 = false;
	if (Local_43.f_1 == unk_0xBC25C936A095B5BA())
	{
		bLocal_46 = true;
		Global_90C0 = 1;
		Global_90C2++;
	}
	if (!unk_0x1D403DFADBC2DE3C(Local_43.f_1, 0))
	{
		iVar0 = func_63(Local_43.f_1);
		switch (iVar0)
		{
			case 17:
				unk_0x36C3B58DA78A2679(Local_43.f_1, "AMANDA_DRUNK");
				break;
			
			case 19:
				unk_0x36C3B58DA78A2679(Local_43.f_1, "LAMAR_DRUNK");
				break;
			}
	}
}

void func_154()//Position - 0x5079
{
	if (!iLocal_44 == -1)
	{
		return;
	}
	iLocal_44 = func_106(Local_43.f_1);
	if (iLocal_44 == -1)
	{
		return;
	}
	iLocal_54 = func_105(iLocal_44);
}

void func_155()//Position - 0x50A7
{
	int iVar0;
	
	if (!func_29(0) && !func_29(3))
	{
		if (!unk_0x1D403DFADBC2DE3C(Local_43.f_1, 0))
		{
			iVar0 = func_63(Local_43.f_1);
			if (Global_8FEC[iLocal_54 /*5*/].f_4 > 0)
			{
				switch (iVar0)
				{
					case 0:
						func_157(Local_43.f_1, "POST_STONED", 24);
						break;
					
					case 1:
						func_157(Local_43.f_1, "POST_STONED", 24);
						break;
					
					case 2:
						func_157(Local_43.f_1, "POST_STONED", 24);
						break;
					}
			}
			switch (iVar0)
			{
				case 17:
					unk_0x36C3B58DA78A2679(Local_43.f_1, "AMANDA_NORMAL");
					break;
				
				case 19:
					unk_0x36C3B58DA78A2679(Local_43.f_1, "LAMAR_NORMAL");
					break;
				}
			}
	}
	func_126();
	if (bLocal_46)
	{
		Global_90C0 = 0;
	}
	func_156();
	unk_0x4EA570997E107F35(func_102(0));
	unk_0x4EA570997E107F35(func_102(2));
	unk_0x4EA570997E107F35(func_102(1));
	Global_195D5B = 0;
	if (unk_0xB731B8C5BCE89836(joaat("appemail")) > 0)
	{
		func_36(0);
	}
	unk_0x95E4B6F3ED223F5A();
}

void func_156()//Position - 0x51AB
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x1D403DFADBC2DE3C(Local_43.f_1, 0))
	{
		return;
	}
	iVar0 = Local_43.f_1;
	if (unk_0x5237AF95232D78C5(Local_43.f_1, 0))
	{
		iVar1 = unk_0x9FE9D386222EEE47(Local_43.f_1, 0);
		iVar2 = unk_0x3187EF5798B5D209(iVar1, -1, 0);
		if (!Local_43.f_1 == iVar2)
		{
			return;
		}
		iVar0 = iVar1;
	}
	else if (!unk_0x7FCE28BE45D0735E() == 4 || !unk_0xBC25C936A095B5BA() == Local_43.f_1)
	{
		return;
	}
	fLocal_49 = 0f;
	func_119(iVar0, 0f);
}

void func_157(int iParam0, char* sParam1, int iParam2)//Position - 0x5225
{
	unk_0x53D8178763EDCE60(iParam0, sParam1, func_158(iParam2), 1);
}

int func_158(int iParam0)//Position - 0x523C
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

