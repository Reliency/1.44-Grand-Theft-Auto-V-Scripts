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
	struct<10> Local_60 = { 0, 0, 0, 0, 0, 0, -1, 0, 0, 0 } ;
	var uLocal_61 = 0;
	vector3 vLocal_62[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_63 = 0;
	var uLocal_64 = 0;
	int iLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	bool bLocal_68 = 0;
	struct<21> Local_69 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	if (unk_0x7AF0088ABFA713B6())
	{
		if (!func_239(ScriptParam_69))
		{
			func_233();
		}
		if (ScriptParam_69.f_10 >= 32)
		{
			if (func_232(unk_0xB5CEFD608600A09F()) != 1 && !unk_0xFA30DFD0084E92FE(Global_267214.f_350.f_7, 0))
			{
				func_233();
			}
		}
	}
	uLocal_64 = ScriptParam_69.f_13;
	while (true)
	{
		func_231();
		if (func_221())
		{
			func_233();
		}
		if (ScriptParam_69.f_10 >= 32)
		{
			if (func_232(unk_0xB5CEFD608600A09F()) != 1 && Global_18C288 == 0)
			{
				func_233();
			}
		}
		if (unk_0x2F7EEEA6378AC19B() != bLocal_68)
		{
			func_233();
		}
		unk_0x135885FDD612D1A8();
		switch (func_220(unk_0x6BAA0516CC970D99()))
		{
			case 0:
				if (func_219())
				{
					if (func_218() == 1)
					{
						vLocal_62[unk_0x6BAA0516CC970D99() /*3*/] = 1;
					}
					else if (func_218() == 4)
					{
						vLocal_62[unk_0x6BAA0516CC970D99() /*3*/] = 3;
					}
				}
				break;
			
			case 1:
				if (func_218() == 1)
				{
					func_183();
				}
				else if (func_218() == 4)
				{
					vLocal_62[unk_0x6BAA0516CC970D99() /*3*/] = 3;
				}
				if (vLocal_62[unk_0x6BAA0516CC970D99() /*3*/].f_2 == 0)
				{
					if ((!unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), Local_60.f_3, 500f, 500f, 500f, 0, 1, 0) && func_232(unk_0xB5CEFD608600A09F()) != 1) && !unk_0xFA30DFD0084E92FE(Global_267214.f_350.f_7, 0))
					{
						vLocal_62[unk_0x6BAA0516CC970D99() /*3*/] = 4;
					}
				}
				break;
			
			case 3:
				func_181(&(Local_60.f_9));
				if (func_180(&(Local_60.f_9)))
				{
					vLocal_62[unk_0x6BAA0516CC970D99() /*3*/] = 4;
				}
				break;
			
			case 2:
				vLocal_62[unk_0x6BAA0516CC970D99() /*3*/] = 4;
			
			case 4:
				func_233();
				break;
		}
		if (unk_0x0DE6397A2CB3EF75())
		{
			switch (func_218())
			{
				case 0:
					if (func_6())
					{
						Local_60 = 1;
					}
					break;
				
				case 1:
					func_5();
					func_4();
					if (func_1())
					{
						Local_60 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()//Position - 0x25A
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()//Position - 0x26E
{
	if (Local_60.f_7 >= 32 && func_232(unk_0xB5CEFD608600A09F()) == 1)
	{
		if (func_3(Global_267214.f_350.f_1))
		{
			return 1;
		}
	}
	if (Local_60.f_8 == 2)
	{
		return 1;
	}
	return 0;
}

int func_3(vector3 vParam0)//Position - 0x2B2
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_4()//Position - 0x2DC
{
	switch (Local_60.f_8)
	{
		case 0:
			if (!unk_0x7FFE36DB9042AF23(Local_60.f_2) || Local_60.f_6 != -1)
			{
				Local_60.f_8 = 1;
			}
			break;
		
		case 1:
			Local_60.f_8 = 2;
			break;
		
		case 2:
			break;
	}
}

void func_5()//Position - 0x32A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0x81C86888AEA2F49B())
	{
		if (unk_0x05086B70D2CFEA6F(unk_0xCFA8A401AAD7BB5A(iVar0)))
		{
			if (Local_60.f_6 == -1)
			{
				if (unk_0xFA30DFD0084E92FE(vLocal_62[iVar0 /*3*/].f_1, 0))
				{
					Local_60.f_6 = iVar0;
				}
			}
			if (!unk_0xFA30DFD0084E92FE(Local_60.f_1, 7))
			{
				if (unk_0xFA30DFD0084E92FE(vLocal_62[iVar0 /*3*/].f_1, 1))
				{
					unk_0xF0059F27F7BB6680(&(Local_60.f_1), 7);
				}
			}
		}
		iVar0++;
	}
}

int func_6()//Position - 0x398
{
	vector3 vVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	vector3 vVar4;
	vector3 vVar5;
	int iVar6;
	struct<35> Var7;
	
	if (!unk_0x7FFE36DB9042AF23(Local_60.f_2))
	{
		if (func_219())
		{
			if (unk_0x892B896276E3AB8B(1))
			{
				fVar3 = 250f;
				vVar4 = { Local_60.f_3 };
				if (unk_0xFA30DFD0084E92FE(Local_60.f_1, 8))
				{
					vVar0 = { Global_267214.f_350.f_1 };
					fVar1 = Global_267214.f_350.f_4;
				}
				if (func_232(unk_0xB5CEFD608600A09F()) == 7)
				{
					iVar6 = unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F());
					if (Global_440000.f_62[iVar6 /*10231*/].f_4DA[0 /*33*/].f_A > 0f)
					{
						vVar4 = { Global_440000.f_62[iVar6 /*10231*/].f_4DA[0 /*33*/].f_3 };
						vVar5 = { Global_440000.f_62[iVar6 /*10231*/].f_4DA[0 /*33*/].f_6 };
						fVar3 = Global_440000.f_62[iVar6 /*10231*/].f_4DA[0 /*33*/].f_A;
						iVar2 = 1;
					}
					else if (Global_440000.f_62[iVar6 /*10231*/].f_4DA[0 /*33*/].f_9 > 0f)
					{
						vVar4 = { Global_440000.f_62[iVar6 /*10231*/].f_4DA[0 /*33*/] };
						fVar3 = Global_440000.f_62[iVar6 /*10231*/].f_4DA[0 /*33*/].f_9;
					}
				}
				Var7.f_5 = 1115815936;
				Var7.f_D = 2;
				Var7.f_14 = 2;
				Var7.f_20 = -1082130432;
				Var7.f_22 = 1;
				Var7.f_4 = 1;
				Var7.f_5 = 30f;
				Var7.f_A = 1;
				if (iVar2 == 0)
				{
					if (unk_0xFA30DFD0084E92FE(Local_60.f_1, 8) || func_179(vVar4, fVar3, &vVar0, &fVar1, Var7))
					{
						if (Local_60.f_7 >= 32 || func_232(unk_0xB5CEFD608600A09F()) == 1)
						{
							Local_60.f_2 = unk_0x2448E4C54354F8D6(unk_0x9AAFCC33C3B745BA(joaat("pickup_portable_package"), vVar0, 1, joaat("prop_drug_package_02")));
						}
						else
						{
							Local_60.f_2 = unk_0x2448E4C54354F8D6(unk_0xBB442C3BCC64C10E(joaat("pickup_portable_package"), vVar0, 1, joaat("prop_drug_package_02")));
						}
						unk_0x019CE76D5286C95C(unk_0x370629AFF3A5C45C(Local_60.f_2), fVar1);
					}
				}
				else if (unk_0xFA30DFD0084E92FE(Local_60.f_1, 8) || func_7(vVar4, vVar5, fVar3, &vVar0, &fVar1, Var7))
				{
					if (Local_60.f_7 >= 32 || func_232(unk_0xB5CEFD608600A09F()) == 1)
					{
						Local_60.f_2 = unk_0x2448E4C54354F8D6(unk_0x9AAFCC33C3B745BA(joaat("pickup_portable_package"), vVar0, 1, joaat("prop_drug_package_02")));
					}
					else
					{
						Local_60.f_2 = unk_0x2448E4C54354F8D6(unk_0xBB442C3BCC64C10E(joaat("pickup_portable_package"), vVar0, 1, joaat("prop_drug_package_02")));
					}
					unk_0x019CE76D5286C95C(unk_0x370629AFF3A5C45C(Local_60.f_2), fVar1);
				}
			}
		}
	}
	if (unk_0x7FFE36DB9042AF23(Local_60.f_2))
	{
		return 1;
	}
	return 0;
}

int func_7(vector3 vParam0, vector3 vParam1, float fParam2, var uParam3, float fParam4, struct<8> Param5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32)//Position - 0x622
{
	struct<17> Var0;
	struct<25> Var1;
	
	if (Param5.f_5 < 20f)
	{
		Param5.f_5 = 20f;
	}
	Var0 = 5;
	Var0.f_10 = 5;
	Var0.f_16 = 5;
	Var0.f_1C = 5;
	Var1.f_10 = 1;
	Var1.f_16 = 1;
	Var1.f_17 = 1;
	Var1.f_18 = 1;
	Var1.f_5 = 0;
	Var1.f_6 = 1;
	Var1.f_7 = 2;
	Var1.f_8 = { vParam0 };
	Var1.f_B = { vParam1 };
	Var1.f_E = fParam2;
	Var1.f_F = 0;
	Var1.f_10 = 1;
	Var1.f_11 = 0;
	Param5.f_7 = 0;
	if (func_8(&Var1, &Param5, &Var0))
	{
		*uParam3 = { Var0[0 /*3*/] };
		*fParam4 = Var0.f_10[0];
		return 1;
	}
	return 0;
}

int func_8(var uParam0, var uParam1, var uParam2)//Position - 0x6D8
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	vector3 vVar6;
	vector3 vVar7;
	vector3 vVar8;
	int iVar9;
	vector3 vVar10;
	vector3 vVar11;
	var uVar12;
	bool bVar13;
	struct<56> Var14;
	bool bVar15;
	
	bVar13 = false;
	switch (uParam0->f_7)
	{
		case 0:
			if (((!Global_24B2CE.f_990 == *uParam0 || !Global_24B2CE.f_990.f_1 == uParam0->f_1) || !Global_24B2CE.f_990.f_2 == uParam0->f_2) || !Global_24B2CE.f_993 == uParam0->f_4)
			{
				bVar13 = true;
			}
			break;
		
		case 1:
			if (((((!Global_24B2CE.f_99E == uParam0->f_8 || !Global_24B2CE.f_99E.f_1 == uParam0->f_8.f_1) || !Global_24B2CE.f_99E.f_2 == uParam0->f_8.f_2) || !Global_24B2CE.f_9A1 == uParam0->f_B) || !Global_24B2CE.f_9A1.f_1 == uParam0->f_B.f_1) || !Global_24B2CE.f_9A1.f_2 == uParam0->f_B.f_2)
			{
				bVar13 = true;
			}
			break;
		
		case 2:
			if ((((((!Global_24B2CE.f_99E == uParam0->f_8 || !Global_24B2CE.f_99E.f_1 == uParam0->f_8.f_1) || !Global_24B2CE.f_99E.f_2 == uParam0->f_8.f_2) || !Global_24B2CE.f_9A1 == uParam0->f_B) || !Global_24B2CE.f_9A1.f_1 == uParam0->f_B.f_1) || !Global_24B2CE.f_9A1.f_2 == uParam0->f_B.f_2) || !Global_24B2CE.f_9A4 == uParam0->f_E)
			{
				bVar13 = true;
			}
			break;
	}
	if (bVar13)
	{
		if (Global_24B2CE.f_98E == 1)
		{
			if (unk_0x3C406FC829C1E14A(Global_24B2CE.f_997))
			{
				if (Global_24B2CE.f_997 == unk_0x8A55B15F4133C912())
				{
					if (unk_0xCCA9497DA4595710(unk_0xED678C85A82F0AB9(), Global_24B2CE.f_994) < func_178(0))
					{
						return 0;
					}
				}
				else if (unk_0xCCA9497DA4595710(unk_0xED678C85A82F0AB9(), Global_24B2CE.f_994) < func_178(0))
				{
					return 0;
				}
			}
			unk_0xF75B799C230EFB11();
			unk_0xA8AB1E14B86B6053();
			func_177();
		}
		Global_24B2CE.f_98E = 0;
	}
	else if (unk_0xCCA9497DA4595710(unk_0xED678C85A82F0AB9(), Global_24B2CE.f_994) > func_178(0))
	{
		Global_24B2CE.f_995 = unk_0xED678C85A82F0AB9();
		func_171();
	}
	switch (uParam0->f_7)
	{
		case 0:
			fVar2 = (*uParam0 - uParam0->f_4);
			fVar3 = (uParam0->f_1 - uParam0->f_4);
			fVar4 = (*uParam0 + uParam0->f_4);
			fVar5 = (uParam0->f_1 + uParam0->f_4);
			break;
		
		case 1:
			if (uParam0->f_8 < uParam0->f_B)
			{
				fVar2 = uParam0->f_8;
				fVar4 = uParam0->f_B;
			}
			else
			{
				fVar2 = uParam0->f_B;
				fVar4 = uParam0->f_8;
			}
			if (uParam0->f_8.f_1 < uParam0->f_B.f_1)
			{
				fVar3 = uParam0->f_8.f_1;
				fVar5 = uParam0->f_B.f_1;
			}
			else
			{
				fVar3 = uParam0->f_B.f_1;
				fVar5 = uParam0->f_8.f_1;
			}
			break;
		
		case 2:
			if (uParam0->f_8 < uParam0->f_B)
			{
				fVar2 = (uParam0->f_8 - (0.5f * uParam0->f_E));
				fVar4 = (uParam0->f_B + (0.5f * uParam0->f_E));
			}
			else
			{
				fVar2 = (uParam0->f_B - (0.5f * uParam0->f_E));
				fVar4 = (uParam0->f_8 + (0.5f * uParam0->f_E));
			}
			if (uParam0->f_8.f_1 < uParam0->f_B.f_1)
			{
				fVar3 = (uParam0->f_8.f_1 - (0.5f * uParam0->f_E));
				fVar5 = (uParam0->f_B.f_1 + (0.5f * uParam0->f_E));
			}
			else
			{
				fVar3 = (uParam0->f_B.f_1 - (0.5f * uParam0->f_E));
				fVar5 = (uParam0->f_8.f_1 + (0.5f * uParam0->f_E));
			}
			break;
	}
	unk_0x4B656426561BA934(fVar2, fVar3, fVar4, fVar5);
	if (uParam0->f_7 == 0)
	{
		vVar6 = { *uParam0 };
	}
	else
	{
		vVar6 = { uParam0->f_8 + uParam0->f_B * Vector(0.5f, 0.5f, 0.5f) };
	}
	vVar7 = { vVar6 + Vector(-0.1f, -0.1f, -0.1f) };
	vVar8 = { vVar6 + Vector(0.1f, 0.1f, 0.1f) };
	if (!Global_24B2CE.f_98E)
	{
		unk_0xF75B799C230EFB11();
		unk_0xA8AB1E14B86B6053();
		func_177();
		if (uParam1->f_7 && uParam0->f_7 == 0)
		{
			if (SYSTEM::VMAG(*uParam0) > 0f)
			{
				if (func_170(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, uParam1->f_5, uParam0->f_11, 0, 0, 0))
				{
					*(uParam2[0 /*3*/]) = { *uParam0 };
					uParam2->f_10[0] = uParam0->f_3;
					return 1;
				}
			}
		}
		if (!unk_0x5CBE37ADBC334A75())
		{
			Global_24B2CE.f_9A5 = uParam0->f_7;
			switch (uParam0->f_7)
			{
				case 0:
					Global_24B2CE.f_990 = { *uParam0 };
					Global_24B2CE.f_993 = uParam0->f_4;
					break;
				
				case 1:
					Global_24B2CE.f_99E = { uParam0->f_8 };
					Global_24B2CE.f_9A1 = { uParam0->f_B };
					Global_24B2CE.f_9A4 = 0f;
					Global_24B2CE.f_990 = { uParam0->f_8 + uParam0->f_B / Vector(2f, 2f, 2f) };
					break;
				
				case 2:
					Global_24B2CE.f_99E = { uParam0->f_8 };
					Global_24B2CE.f_9A1 = { uParam0->f_B };
					Global_24B2CE.f_9A4 = uParam0->f_E;
					Global_24B2CE.f_990 = { uParam0->f_8 + uParam0->f_B / Vector(2f, 2f, 2f) };
					break;
			}
			if (!uParam1->f_8 && !uParam1->f_9)
			{
				func_169(vVar6.x, vVar6.y);
			}
			Global_24B2CE.f_98F = 1;
			Global_24B2CE.f_98E = 1;
			Global_24B2CE.f_995 = unk_0xED678C85A82F0AB9();
			Global_24B2CE.f_994 = unk_0xED678C85A82F0AB9();
			Global_24B2CE.f_997 = unk_0x8A55B15F4133C912();
		}
		else
		{
			return 0;
		}
	}
	if (Global_24B2CE.f_98E)
	{
		if (Global_24B2CE.f_98F == 1)
		{
			if (unk_0x37718415CE714A5B(fVar2, fVar3, fVar4, fVar5) || unk_0xCCA9497DA4595710(unk_0xED678C85A82F0AB9(), Global_24B2CE.f_995) > 5000)
			{
				Global_24B2CE.f_995 = unk_0xED678C85A82F0AB9();
				if (uParam1->f_8 || uParam1->f_9)
				{
					if (uParam0->f_15)
					{
						*(uParam2[0 /*3*/]) = { uParam0->f_12 };
					}
					else
					{
						*(uParam2[0 /*3*/]) = { vVar6 };
					}
					Var14.f_6 = 1082130432;
					Var14.f_7 = 1176255488;
					Var14.f_8 = 1;
					Var14.f_A = 1;
					Var14.f_D = 1;
					Var14.f_F = 1;
					Var14.f_10 = 1;
					Var14.f_1F = 1;
					Var14.f_22 = joaat("tailgater");
					Var14.f_26 = 2;
					Var14.f_2D = 2;
					Var14.f_31 = 1123024896;
					Var14.f_35 = 999;
					Var14.f_36 = 1176256410;
					Var14.f_37 = 1;
					Var14.f_38 = 1;
					Var14.f_39 = 1;
					Var14 = { *uParam1 };
					Var14.f_3 = uParam1->f_5;
					Var14.f_B = uParam1->f_9;
					Var14.f_12 = 1;
					if (uParam1->f_20 > 0f)
					{
						Var14.f_6 = uParam1->f_20;
					}
					switch (uParam0->f_7)
					{
						case 0:
							Var14.f_13 = { *uParam0 };
							Var14.f_19 = uParam0->f_4;
							break;
						
						case 1:
							Var14.f_13 = { uParam0->f_8 };
							Var14.f_16 = { uParam0->f_B };
							Var14.f_19 = 0f;
							break;
						
						case 2:
							Var14.f_13 = { uParam0->f_8 };
							Var14.f_16 = { uParam0->f_B };
							Var14.f_19 = uParam0->f_E;
							break;
					}
					Var14.f_1A = uParam0->f_7;
					Var14.f_C = uParam0->f_F;
					if (uParam0->f_15)
					{
						Var14.f_1E = 1;
						Var14.f_20 = 1;
					}
					iVar9 = 0;
					while (iVar9 < 2)
					{
						Var14.f_26[iVar9 /*3*/] = { uParam1->f_D[iVar9 /*3*/] };
						Var14.f_2D[iVar9] = uParam1->f_14[iVar9];
						iVar9++;
					}
					Var14.f_33 = uParam1->f_1E;
					Var14.f_37 = uParam0->f_10;
					if (uParam0->f_1A)
					{
						Var14.f_A = 0;
					}
					if (func_168(Global_440000.f_243FE))
					{
						Var14.f_9 = 1;
					}
					func_143(uParam2[0 /*3*/], &(uParam2->f_10[0]), &Var14);
					if ((uParam1->f_7 && uParam1->f_9) && uParam0->f_7 == 0)
					{
						if (!func_142(*(uParam2[0 /*3*/]), *uParam0, uParam0->f_4, 1, 1))
						{
							*(uParam2[0 /*3*/]) = { *uParam0 };
							uParam2->f_10[0] = uParam0->f_3;
						}
					}
					Global_24B2CE.f_98F = 9;
				}
				else
				{
					Global_24B2CE.f_98F = 2;
				}
			}
		}
		if (Global_24B2CE.f_98F == 2)
		{
			if ((unk_0xC024116C608125C3(vVar7, vVar8) || unk_0xCCA9497DA4595710(unk_0xED678C85A82F0AB9(), Global_24B2CE.f_995) > 15000) || unk_0x5C2EA7E0858E9938(vVar7, vVar8) == 0)
			{
				Global_24B2CE.f_995 = unk_0xED678C85A82F0AB9();
				if (uParam0->f_5 && !func_139(unk_0xB5CEFD608600A09F(), 0))
				{
					Global_24B2CE.f_98F = 3;
				}
				else
				{
					Global_24B2CE.f_98F = 4;
				}
			}
			else if (unk_0xCCA9497DA4595710(unk_0xED678C85A82F0AB9(), Global_24B2CE.f_999) > 7000)
			{
				func_138(vVar6.x, vVar6.y);
			}
		}
		if (Global_24B2CE.f_98F == 3)
		{
			if (func_137() || unk_0xCCA9497DA4595710(unk_0xED678C85A82F0AB9(), Global_24B2CE.f_995) > 10000)
			{
				Global_24B2CE.f_995 = unk_0xED678C85A82F0AB9();
				Global_24B2CE.f_98F = 4;
			}
		}
		if (Global_24B2CE.f_98F == 4)
		{
			if (unk_0x5CBE37ADBC334A75())
			{
				unk_0xF75B799C230EFB11();
				unk_0xA8AB1E14B86B6053();
			}
			else
			{
				iVar0 = 0;
				func_171();
				if (uParam0->f_5)
				{
					if (SYSTEM::VMAG(*uParam1) == 0f)
					{
						iVar0 += 2;
					}
					if (uParam1->f_3)
					{
						iVar0 += 8;
					}
					iVar0 += 16;
					iVar0 += 32;
					if (!unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()) == -1)
					{
						iVar0 += 64;
						iVar0 += 128;
						iVar0 += 256;
					}
					iVar0 += 2048;
					iVar0 += 512;
					iVar0 += 1024;
					switch (uParam0->f_7)
					{
						case 0:
							if (unk_0x8CBA7D344BD35F06(unk_0xB5CEFD608600A09F(), *uParam0, uParam0->f_4, *uParam1, iVar0))
							{
								Global_24B2CE.f_995 = unk_0xED678C85A82F0AB9();
								Global_24B2CE.f_98F = 5;
							}
							break;
						
						case 1:
							func_136(uParam0->f_8, uParam0->f_B, &vVar10, &vVar11, &uVar12);
							if (unk_0xB88DE9CA099A4DB9(unk_0xB5CEFD608600A09F(), vVar10, vVar11, uVar12, *uParam1, iVar0))
							{
								Global_24B2CE.f_995 = unk_0xED678C85A82F0AB9();
								Global_24B2CE.f_98F = 5;
							}
							break;
						
						case 2:
							if (unk_0xB88DE9CA099A4DB9(unk_0xB5CEFD608600A09F(), uParam0->f_8, uParam0->f_B, uParam0->f_E, *uParam1, iVar0))
							{
								Global_24B2CE.f_995 = unk_0xED678C85A82F0AB9();
								Global_24B2CE.f_98F = 5;
							}
							break;
					}
				}
				else
				{
					if (uParam1->f_3)
					{
						iVar0++;
					}
					iVar0 += 2;
					if (uParam1->f_A)
					{
						iVar0 += 32;
					}
					Global_24B2CE.f_995 = unk_0xED678C85A82F0AB9();
					Global_24B2CE.f_98F = 5;
					switch (uParam0->f_7)
					{
						case 0:
							unk_0xD1309BDDAAD56CA3(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
							break;
						
						case 1:
							func_136(uParam0->f_8, uParam0->f_B, &vVar10, &vVar11, &uVar12);
							unk_0xDB409A4D9FA829C0(vVar10, vVar11, uVar12, iVar0, 2f, 5000);
							break;
						
						case 2:
							unk_0xDB409A4D9FA829C0(uParam0->f_8, uParam0->f_B, uParam0->f_E, iVar0, 2f, 5000);
							break;
						}
					}
				}
		}
		if (Global_24B2CE.f_98F == 5)
		{
			if (func_62(uParam2, uParam0, uParam1, 0))
			{
				if (Global_24B2CE.f_9A9.f_5)
				{
					Global_24B2CE.f_995 = unk_0xED678C85A82F0AB9();
					Global_24B2CE.f_98F = 6;
				}
				else
				{
					Global_24B2CE.f_995 = unk_0xED678C85A82F0AB9();
					if (!uParam0->f_5)
					{
						if (!SYSTEM::VMAG(*uParam1) == 0f)
						{
							vVar1 = { *uParam1 - *(uParam2[0 /*3*/]) };
							uParam2->f_10[0] = unk_0xFDC254CE02DB0919(vVar1.x, vVar1.y);
						}
					}
					Global_24B2CE.f_98F = 9;
				}
			}
			else if (unk_0xCCA9497DA4595710(unk_0xED678C85A82F0AB9(), Global_24B2CE.f_995) > 20000)
			{
				unk_0xF75B799C230EFB11();
				unk_0xA8AB1E14B86B6053();
				Global_24B2CE.f_995 = unk_0xED678C85A82F0AB9();
				Global_24B2CE.f_98F = 8;
			}
		}
		if (Global_24B2CE.f_98F == 6)
		{
			iVar0 = 0;
			Global_24B2CE.f_9A9.f_1 = 0;
			if (uParam1->f_3)
			{
				iVar0++;
			}
			else if (uParam0->f_7 == 0)
			{
				if (!func_61(uParam0->f_4))
				{
					if (unk_0xBF697FA7422C0621(unk_0x9911032C958CE1B0(vVar6)))
					{
						iVar0++;
					}
				}
			}
			else if (!func_60(uParam0->f_8, uParam0->f_B, uParam0->f_E))
			{
				if (unk_0xBF697FA7422C0621(unk_0x9911032C958CE1B0(vVar6)))
				{
					iVar0++;
				}
			}
			iVar0 += 2;
			if (uParam1->f_A)
			{
				iVar0 += 32;
			}
			if (uParam0->f_F)
			{
				iVar0 += 16;
			}
			Global_24B2CE.f_995 = unk_0xED678C85A82F0AB9();
			Global_24B2CE.f_98F = 7;
			switch (uParam0->f_7)
			{
				case 0:
					unk_0xD1309BDDAAD56CA3(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
					break;
				
				case 1:
					func_136(uParam0->f_8, uParam0->f_B, &vVar10, &vVar11, &uVar12);
					unk_0xDB409A4D9FA829C0(vVar10, vVar11, uVar12, iVar0, 2f, 5000);
					break;
				
				case 2:
					unk_0xDB409A4D9FA829C0(uParam0->f_8, uParam0->f_B, uParam0->f_E, iVar0, 2f, 5000);
					break;
				}
		}
		if (Global_24B2CE.f_98F == 7)
		{
			if (func_62(uParam2, uParam0, uParam1, 1))
			{
				if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
				{
					iVar9 = 0;
					while (iVar9 < 3)
					{
						if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
						{
							if (!SYSTEM::VMAG(Global_24B2CE.f_A2F[iVar9 /*3*/]) == 0f)
							{
								switch (uParam0->f_7)
								{
									case 0:
										if (func_142(Global_24B2CE.f_A2F[iVar9 /*3*/], *uParam0, uParam0->f_4, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_24B2CE.f_A2F[iVar9 /*3*/] };
										}
										break;
									
									case 1:
										if (func_58(Global_24B2CE.f_A2F[iVar9 /*3*/], uParam0->f_8, uParam0->f_B, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_24B2CE.f_A2F[iVar9 /*3*/] };
										}
										break;
									
									case 2:
										if (unk_0x7352105EC4D7541F(Global_24B2CE.f_A2F[iVar9 /*3*/], uParam0->f_8, uParam0->f_B, uParam0->f_E, 0, 1))
										{
											*(uParam2[0 /*3*/]) = { Global_24B2CE.f_A2F[iVar9 /*3*/] };
										}
										break;
									}
								}
						}
						iVar9++;
					}
					if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
					{
						switch (uParam0->f_7)
						{
							case 0:
								vVar1 = { *uParam0 };
								break;
							
							case 1:
							case 2:
								vVar1 = { uParam0->f_8 + uParam0->f_B / Vector(2f, 2f, 2f) };
								break;
						}
						func_11(&vVar1, 0, 1, 1, 0, uParam0, uParam1);
						*(uParam2[0 /*3*/]) = { vVar1 };
					}
				}
				Global_24B2CE.f_995 = unk_0xED678C85A82F0AB9();
				if (!SYSTEM::VMAG(*uParam1) == 0f)
				{
					iVar9 = 0;
					while (iVar9 < 5)
					{
						vVar1 = { *uParam1 - *(uParam2[iVar9 /*3*/]) };
						uParam2->f_10[iVar9] = unk_0xFDC254CE02DB0919(vVar1.x, vVar1.y);
						iVar9++;
					}
				}
				Global_24B2CE.f_98F = 9;
			}
			else if (unk_0xCCA9497DA4595710(unk_0xED678C85A82F0AB9(), Global_24B2CE.f_995) > 20000)
			{
				Global_24B2CE.f_995 = unk_0xED678C85A82F0AB9();
				Global_24B2CE.f_98F = 8;
			}
		}
		if (Global_24B2CE.f_98F == 8)
		{
			if (uParam0->f_5)
			{
				if (func_10(Global_24B2CE.f_1E2))
				{
				}
			}
			else if (Global_24B2CE.f_9A9.f_2)
			{
				func_9(uParam2, &(Global_24B2CE.f_9A9.f_6));
			}
			else
			{
				if (uParam0->f_F)
				{
					bVar15 = false;
				}
				else
				{
					bVar15 = true;
				}
				*(uParam2[0 /*3*/]) = { Global_24B2CE.f_990 };
				func_11(uParam2[0 /*3*/], 0, bVar15, 0, 0, uParam0, uParam1);
			}
			Global_24B2CE.f_995 = unk_0xED678C85A82F0AB9();
			Global_24B2CE.f_98F = 9;
		}
		if (Global_24B2CE.f_98F == 9)
		{
			Global_24B2CE.f_98E = 0;
			unk_0xF75B799C230EFB11();
			unk_0xA8AB1E14B86B6053();
			func_177();
			return 1;
		}
		Global_24B2CE.f_994 = unk_0xED678C85A82F0AB9();
	}
	return 0;
}

void func_9(var uParam0, var uParam1)//Position - 0x1691
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		*(uParam0[iVar0 /*3*/]) = { (uParam1[iVar0 /*10*/])->f_4 };
		uParam0->f_10[iVar0] = (uParam1[iVar0 /*10*/])->f_7;
		uParam0->f_16[iVar0] = (*uParam1)[iVar0 /*10*/];
		iVar0++;
	}
}

int func_10(int iParam0)//Position - 0x16DB
{
	if (iParam0 == 3 || iParam0 == 26)
	{
		return 1;
	}
	return 0;
}

void func_11(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, var uParam5, var uParam6)//Position - 0x16FA
{
	vector3 vVar0;
	var uVar1;
	struct<56> Var2;
	var uVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	vector3 vVar7;
	vector3 vVar8;
	vector3 vVar9;
	float fVar10;
	
	Var2.f_6 = 1082130432;
	Var2.f_7 = 1176255488;
	Var2.f_8 = 1;
	Var2.f_A = 1;
	Var2.f_D = 1;
	Var2.f_F = 1;
	Var2.f_10 = 1;
	Var2.f_1F = 1;
	Var2.f_22 = joaat("tailgater");
	Var2.f_26 = 2;
	Var2.f_2D = 2;
	Var2.f_31 = 1123024896;
	Var2.f_35 = 999;
	Var2.f_36 = 1176256410;
	Var2.f_37 = 1;
	Var2.f_38 = 1;
	Var2.f_39 = 1;
	if (bParam1)
	{
		iVar6 = 0;
	}
	else
	{
		iVar6 = 16;
	}
	if (!uParam6->f_3)
	{
		if (uParam5->f_5)
		{
			if (!uParam5->f_16)
			{
				iVar6 += 4;
			}
			else
			{
				switch (uParam5->f_7)
				{
					case 0:
						vVar7 = { *uParam5 };
						if (func_61(uParam5->f_4) || !unk_0xBF697FA7422C0621(unk_0x9911032C958CE1B0(vVar7)))
						{
							iVar6 += 4;
						}
						break;
					
					case 1:
						vVar7 = { uParam5->f_8 + uParam5->f_B * Vector(0.5f, 0.5f, 0.5f) };
						if (func_60(uParam5->f_8, uParam5->f_B, 0f) || !unk_0xBF697FA7422C0621(unk_0x9911032C958CE1B0(vVar7)))
						{
							iVar6 += 4;
						}
						break;
					
					case 2:
						vVar7 = { uParam5->f_8 + uParam5->f_B * Vector(0.5f, 0.5f, 0.5f) };
						if (func_60(uParam5->f_8, uParam5->f_B, uParam5->f_E) || !unk_0xBF697FA7422C0621(unk_0x9911032C958CE1B0(vVar7)))
						{
							iVar6 += 4;
						}
						break;
					}
			}
		}
		else
		{
			iVar6 += 4;
		}
	}
	if (func_17(*uParam0, &vVar0, iVar6, iParam3, 1))
	{
	}
	else
	{
		bVar5 = true;
	}
	if (bVar5)
	{
		vVar0 = { *uParam0 };
		Var2 = { *uParam6 };
		Var2.f_8 = 1;
		Var2.f_3 = uParam6->f_5;
		if (bParam2)
		{
			Var2.f_A = 0;
		}
		else
		{
			Var2.f_A = 1;
		}
		Var2.f_D = uParam5->f_F;
		Var2.f_F = iParam3;
		if (uParam6->f_20 > 0f)
		{
			Var2.f_6 = uParam6->f_20;
		}
		if (bParam4)
		{
			Var2.f_12 = 1;
			Var2.f_1A = uParam5->f_7;
			switch (uParam5->f_7)
			{
				case 0:
					Var2.f_13 = { *uParam5 };
					Var2.f_19 = uParam5->f_4;
					break;
				
				case 1:
					Var2.f_13 = { uParam5->f_8 };
					Var2.f_16 = { uParam5->f_B };
					Var2.f_19 = 0f;
					break;
				
				case 2:
					Var2.f_13 = { uParam5->f_8 };
					Var2.f_16 = { uParam5->f_B };
					Var2.f_19 = uParam5->f_E;
					break;
				}
		}
		iVar4 = 0;
		while (iVar4 < 2)
		{
			Var2.f_26[iVar4 /*3*/] = { uParam6->f_D[iVar4 /*3*/] };
			Var2.f_2D[iVar4] = uParam6->f_14[iVar4];
			iVar4++;
		}
		Var2.f_33 = uParam6->f_1E;
		Var2.f_37 = uParam5->f_10;
		if (func_13(unk_0xB5CEFD608600A09F(), 0))
		{
			Var2.f_9 = 1;
		}
		func_143(&vVar0, &uVar1, &Var2);
	}
	if (bParam4)
	{
		switch (uParam5->f_7)
		{
			case 0:
				vVar8 = { *uParam5 };
				fVar10 = uParam5->f_4;
				break;
			
			case 1:
				vVar8 = { uParam5->f_8 };
				vVar9 = { uParam5->f_B };
				break;
			
			case 2:
				vVar8 = { uParam5->f_8 };
				vVar9 = { uParam5->f_B };
				fVar10 = uParam5->f_E;
				break;
		}
		if (!func_12(vVar0, uParam5->f_7, vVar8, vVar9, fVar10))
		{
			if (func_17(*uParam0, &vVar0, iVar6, iParam3, 0))
			{
				if (!func_12(vVar0, uParam5->f_7, vVar8, vVar9, fVar10))
				{
					if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
					{
						vVar0 = { vVar8 + vVar9 * Vector(0.5f, 0.5f, 0.5f) };
					}
					else
					{
						vVar0 = { vVar8 };
					}
					if (unk_0x2084D4C6C2DF616F(vVar0, &uVar3, 0, 0))
					{
						vVar0.z = uVar3;
					}
				}
			}
			else
			{
				if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
				{
					vVar0 = { vVar8 + vVar9 * Vector(0.5f, 0.5f, 0.5f) };
				}
				else
				{
					vVar0 = { vVar8 };
				}
				if (unk_0x2084D4C6C2DF616F(vVar0, &uVar3, 0, 0))
				{
					vVar0.z = uVar3;
				}
			}
		}
	}
	*uParam0 = { vVar0 };
	Global_24B2CE.f_291 = 1;
}

int func_12(vector3 vParam0, int iParam1, vector3 vParam2, vector3 vParam3, float fParam4)//Position - 0x1B43
{
	switch (iParam1)
	{
		case 0:
			if (SYSTEM::VDIST(vParam0, vParam2) <= fParam4)
			{
				return 1;
			}
			break;
		
		case 1:
			return func_58(vParam0, vParam2, vParam3, 0, 0);
			break;
		
		case 2:
			return unk_0x7352105EC4D7541F(vParam0, vParam2, vParam3, fParam4, 0, 1);
			break;
	}
	return 0;
}

int func_13(int iParam0, bool bParam1)//Position - 0x1BB0
{
	int iVar0;
	
	if (bParam1)
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
			if (unk_0x6F79ECA8C83E4357(iVar0) == -1988428699)
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_16())
	{
		if (func_15(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1 && Global_24FB5C[iParam0 /*406*/].f_131.f_4 != func_16())
			{
				return func_14(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 12;
			}
		}
	}
	return 0;
}

int func_14(int iParam0)//Position - 0x1C3E
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

int func_15(int iParam0, bool bParam1, bool bParam2)//Position - 0x1F8A
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

int func_16()//Position - 0x1FD4
{
	return -1;
}

int func_17(vector3 vParam0, var uParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x1FDD
{
	if (func_57(vParam0, uParam1))
	{
		if (func_18(vParam0, uParam1, iParam3, bParam4))
		{
			return 1;
		}
	}
	if (unk_0xF5D5237E20BDAEE6(vParam0, 0, uParam1, iParam2))
	{
		if (func_18(vParam0, uParam1, iParam3, bParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_18(vector3 vParam0, var uParam1, int iParam2, bool bParam3)//Position - 0x2039
{
	float fVar0;
	var uVar1;
	var uVar2;
	
	fVar0 = SYSTEM::VDIST(vParam0, *uParam1);
	if (fVar0 < 40f)
	{
		uVar1 = 2;
		uVar2 = 2;
		if ((iParam2 == 1 && !func_38(Global_24B2CE.f_1F9, uParam1, &uVar1, &uVar2, bParam3, 1)) || iParam2 == 0)
		{
			if (!func_25(*uParam1, 1056964608))
			{
				if (!func_19(uParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_19(var uParam0, bool bParam1)//Position - 0x20BE
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	
	vVar1 = { *uParam0 };
	iVar2 = func_24(vVar1);
	iVar0 = 0;
	while (iVar0 < Global_24CACB[iVar2])
	{
		if (func_23(vVar1, &(Global_24C653[iVar2 /*127*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_20(&vVar1, Global_24C653[iVar2 /*127*/][iVar0 /*7*/], Global_24C653[iVar2 /*127*/][iVar0 /*7*/].f_3, Global_24C653[iVar2 /*127*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { vVar1 };
			}
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_24CACB[8])
	{
		if (func_23(vVar1, &(Global_24C653[8 /*127*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_20(&vVar1, Global_24C653[8 /*127*/][iVar0 /*7*/], Global_24C653[8 /*127*/][iVar0 /*7*/].f_3, Global_24C653[8 /*127*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { vVar1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_20(var uParam0, vector3 vParam1, vector3 vParam2, float fParam3, float fParam4, bool bParam5)//Position - 0x21CB
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	vector3 vVar4;
	vector3 vVar5;
	float fVar6;
	vector3 vVar7;
	vector3 vVar8;
	vector3 vVar9;
	vector3 vVar10;
	vector3 vVar11;
	
	vVar0 = { vParam2 - vParam1 };
	vVar0.z = 0f;
	vVar1 = { *uParam0 - vParam1 };
	vVar1.z = 0f;
	vVar2 = { func_22(0f, 0f, 1f, vVar0) };
	vVar2 = { vVar2 / FtoV(SYSTEM::VMAG(vVar2)) };
	fVar3 = (SYSTEM::VMAG(vVar1) * SYSTEM::SIN(unk_0x77211CE25DED4FDB(vVar0.x, vVar0.y, vVar1.x, vVar1.y)));
	if (fVar3 < (fParam3 * 0.5f))
	{
		if (!bParam5)
		{
			if (func_21(vVar2, vVar1) >= 0f)
			{
				vVar2 = { vVar2 * FtoV((((fParam3 * 0.5f) - fVar3) + fParam4)) };
			}
			else
			{
				vVar2 = { vVar2 * FtoV(((((fParam3 * 0.5f) - fVar3) + fParam4) * -1f)) };
			}
		}
		else if (func_21(vVar2, vVar1) >= 0f)
		{
			vVar2 = { vVar2 * FtoV(((((fParam3 * 0.5f) + fVar3) + fParam4) * -1f)) };
		}
		else
		{
			vVar2 = { vVar2 * FtoV((((fParam3 * 0.5f) + fVar3) + fParam4)) };
		}
		vVar4 = { *uParam0 + vVar2 };
		fVar6 = SYSTEM::VDIST(vParam1.x, vParam1.y, 0f, vParam2.x, vParam2.y, 0f);
		vVar7 = { vParam1 + vParam2 / Vector(2f, 2f, 2f) };
		vVar7.z = 0f;
		vVar2 = { func_22(0f, 0f, 1f, vVar0) };
		vVar2 = { vVar2 / FtoV(SYSTEM::VMAG(vVar2)) };
		vVar2 = { vVar2 * FtoV((fParam3 * 0.5f)) };
		vVar8 = { vVar7 - vVar2 };
		vVar9 = { vVar7 + vVar2 };
		vVar10 = { vVar9 - vVar8 };
		vVar10.z = 0f;
		vVar11 = { *uParam0 - vVar8 };
		vVar11.z = 0f;
		vVar2 = { func_22(0f, 0f, 1f, vVar10) };
		vVar2 = { vVar2 / FtoV(SYSTEM::VMAG(vVar2)) };
		fVar3 = (SYSTEM::VMAG(vVar11) * SYSTEM::SIN(unk_0x77211CE25DED4FDB(vVar10.x, vVar10.y, vVar11.x, vVar11.y)));
		if (!bParam5)
		{
			if (func_21(vVar2, vVar11) >= 0f)
			{
				vVar2 = { vVar2 * FtoV((((fVar6 * 0.5f) - fVar3) + fParam4)) };
			}
			else
			{
				vVar2 = { vVar2 * FtoV(((((fVar6 * 0.5f) - fVar3) + fParam4) * -1f)) };
			}
		}
		else if (func_21(vVar2, vVar11) >= 0f)
		{
			vVar2 = { vVar2 * FtoV(((((fVar6 * 0.5f) + fVar3) + fParam4) * -1f)) };
		}
		else
		{
			vVar2 = { vVar2 * FtoV((((fVar6 * 0.5f) + fVar3) + fParam4)) };
		}
		vVar5 = { *uParam0 + vVar2 };
		if (SYSTEM::VDIST(vVar4, *uParam0, uParam0->f_1, 0f) < SYSTEM::VDIST(vVar5, *uParam0, uParam0->f_1, 0f))
		{
			*uParam0 = { vVar4 };
		}
		else
		{
			*uParam0 = { vVar5 };
		}
	}
}

float func_21(vector3 vParam0, vector3 vParam1)//Position - 0x249A
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

Vector3 func_22(vector3 vParam0, vector3 vParam1)//Position - 0x24BB
{
	return ((vParam0.y * vParam1.z) - (vParam0.z * vParam1.y)), ((vParam0.z * vParam1.x) - (vParam0.x * vParam1.z)), ((vParam0.x * vParam1.y) - (vParam0.y * vParam1.x));
}

bool func_23(vector3 vParam0, var uParam1)//Position - 0x24F4
{
	return unk_0x7352105EC4D7541F(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 1);
}

int func_24(struct<2> Param0, var uParam1)//Position - 0x2514
{
	if (Param0.f_1 > Global_24CAD5[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_24CAD5[1])
	{
		if (Param0 < Global_24CAD9[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_24CAD5[2])
	{
		if (Param0 < Global_24CAD9[1])
		{
			return 3;
		}
		else if (Param0 < Global_24CAD9[2])
		{
			return 4;
		}
		else if (Param0 < Global_24CAD9[3])
		{
			return 5;
		}
		else
		{
			return 6;
		}
	}
	return 7;
}

int func_25(vector3 vParam0, float fParam1)//Position - 0x25AF
{
	int iVar0;
	
	if (func_35(unk_0xB5CEFD608600A09F(), 1))
	{
		if (Global_440000.f_DD6F > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_440000.f_DD6F)
			{
				if (Global_440000.f_DD70[iVar0 /*76*/].f_7 != 0)
				{
					if (func_26(vParam0, Global_440000.f_DD70[iVar0 /*76*/], Global_440000.f_DD70[iVar0 /*76*/].f_6, Global_440000.f_DD70[iVar0 /*76*/].f_7, fParam1))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_440000.f_D0E6 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_440000.f_D0E6)
			{
				if (Global_440000.f_D0E9[iVar0 /*130*/].f_10 != 0)
				{
					if (func_26(vParam0, Global_440000.f_D0E9[iVar0 /*130*/], Global_440000.f_D0E9[iVar0 /*130*/].f_3, Global_440000.f_D0E9[iVar0 /*130*/].f_10, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_440000.f_1274E > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_440000.f_1274E)
			{
				if (Global_440000.f_12752[iVar0 /*217*/].f_C != 0)
				{
					if (func_26(vParam0, Global_440000.f_12752[iVar0 /*217*/], Global_440000.f_12752[iVar0 /*217*/].f_3, Global_440000.f_12752[iVar0 /*217*/].f_C, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
	}
	return 0;
}

int func_26(vector3 vParam0, vector3 vParam1, float fParam2, int iParam3, float fParam4)//Position - 0x2738
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	if (SYSTEM::VDIST(vParam0, vParam1) < func_34(iParam3, 1008981770))
	{
		func_27(vParam1, fParam2, iParam3, &vVar0, &vVar1, &fVar2, fParam4);
		if (unk_0x7352105EC4D7541F(vParam0, vVar0, vVar1, fVar2, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_27(vector3 vParam0, float fParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6)//Position - 0x278B
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	
	vVar0 = { 0f, 1f, 0f };
	func_33(&vVar0, 0f, 0f, fParam1);
	vVar0 = { vVar0 / FtoV(SYSTEM::VMAG(vVar0)) };
	func_28(iParam2, &vVar1, &vVar2, 1086324736, 1080033280, 1077936128);
	vVar3 = { vParam0 + vVar0 * FtoV((vVar2.y + fParam6)) };
	vVar3.z = (vVar3.z - ((0.5f * unk_0x357058E632979E65((vVar2.z - vVar1.z))) + fParam6));
	vVar4 = { vParam0 - vVar0 * FtoV(((vVar1.y * -1f) + fParam6)) };
	vVar4.z = (vVar4.z + ((0.5f * unk_0x357058E632979E65((vVar2.z - vVar1.z))) + fParam6));
	*uParam3 = { vVar3 };
	*uParam4 = { vVar4 };
	*uParam5 = unk_0x357058E632979E65((vVar2.x - vVar1.x));
}

void func_28(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)//Position - 0x2857
{
	int iVar0;
	
	if (unk_0x4A09C6BA3AFA4242(iParam0))
	{
		unk_0x2B3953EE61953843(iParam0, uParam1, uParam2);
	}
	else
	{
		iVar0 = func_31(iParam0);
		if (iVar0 != 0)
		{
			func_29(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
			return;
		}
	}
	if (SYSTEM::VMAG(*uParam1) <= 0.01f || SYSTEM::VMAG(*uParam2) <= 0.01f)
	{
		*uParam1 = (0f - (fParam4 * 0.5f));
		*uParam2 = (0f + (fParam4 * 0.5f));
		uParam1->f_1 = (0f - (fParam3 * 0.5f));
		uParam2->f_1 = (0f + (fParam3 * 0.5f));
		uParam1->f_2 = (0f - (fParam5 * 0.5f));
		uParam2->f_2 = (0f + (fParam5 * 0.5f));
	}
}

void func_29(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)//Position - 0x2916
{
	int iVar0;
	
	func_30(iParam0, &Global_1413CC);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x4A09C6BA3AFA4242(Global_1413CC[iVar0]))
		{
			unk_0x2B3953EE61953843(Global_1413CC[iVar0], &(Global_1413D0[iVar0 /*3*/]), &(Global_1413D7[iVar0 /*3*/]));
		}
		if (SYSTEM::VMAG(Global_1413D0[iVar0 /*3*/]) <= 0.01f || SYSTEM::VMAG(Global_1413D7[iVar0 /*3*/]) <= 0.01f)
		{
			Global_1413D0[iVar0 /*3*/] = (0f - (fParam4 * 0.5f));
			Global_1413D7[iVar0 /*3*/] = (0f + (fParam4 * 0.5f));
			Global_1413D0[iVar0 /*3*/].f_1 = (0f - (fParam3 * 0.5f));
			Global_1413D7[iVar0 /*3*/].f_1 = (0f + (fParam3 * 0.5f));
			Global_1413D0[iVar0 /*3*/].f_2 = (0f - (fParam5 * 0.5f));
			Global_1413D7[iVar0 /*3*/].f_2 = (0f + (fParam5 * 0.5f));
		}
		Global_1413DE[iVar0] = (Global_1413D7[iVar0 /*3*/] - Global_1413D0[iVar0 /*3*/]);
		Global_1413E1[iVar0] = (Global_1413D7[iVar0 /*3*/].f_1 - Global_1413D0[iVar0 /*3*/].f_1);
		Global_1413E4[iVar0] = (Global_1413D7[iVar0 /*3*/].f_2 - Global_1413D0[iVar0 /*3*/].f_2);
		if (Global_1413DE[iVar0] > Global_1413E7)
		{
			Global_1413E7 = Global_1413DE[iVar0];
		}
		if (Global_1413E4[iVar0] > Global_1413E8)
		{
			Global_1413E8 = Global_1413E4[iVar0];
		}
		iVar0++;
	}
	Global_1413E9 = (Global_1413E7 * -0.5f);
	Global_1413EC = (Global_1413E7 * 0.5f);
	Global_1413E9.f_1 = ((((0.5f * Global_1413E1[0]) + Global_1413E1[1]) + Global_1413CC.f_3) * -1f);
	Global_1413EC.f_1 = (0.5f * Global_1413E1[0]);
	Global_1413E9.f_2 = (Global_1413E4[0] * -0.5f);
	Global_1413EC.f_2 = (Global_1413E4[0] * 0.5f);
	*uParam1 = { Global_1413E9 };
	*uParam2 = { Global_1413EC };
}

void func_30(int iParam0, var uParam1)//Position - 0x2B22
{
	switch (iParam0)
	{
		case 1:
			(*uParam1)[0] = 387748548;
			(*uParam1)[1] = 1502869817;
			uParam1->f_3 = -2.6f;
			break;
		
		case 2:
			(*uParam1)[0] = 177270108;
			(*uParam1)[1] = 1502869817;
			uParam1->f_3 = -2.6f;
			break;
		
		case 3:
			(*uParam1)[0] = 433954513;
			(*uParam1)[1] = -1881846085;
			uParam1->f_3 = 0.5f;
			break;
	}
}

int func_31(int iParam0)//Position - 0x2BA3
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_32(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_32(int iParam0)//Position - 0x2BD2
{
	int iVar0;
	
	iVar0 = (1000 + iParam0);
	return iVar0;
}

void func_33(var uParam0, vector3 vParam1)//Position - 0x2BE4
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	
	fVar0 = SYSTEM::COS(vParam1.x);
	fVar1 = SYSTEM::SIN(vParam1.x);
	vVar2.x = *uParam0;
	vVar2.y = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	vVar2.z = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { vVar2 };
	fVar0 = SYSTEM::COS(vParam1.y);
	fVar1 = SYSTEM::SIN(vParam1.y);
	vVar2.x = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	vVar2.y = uParam0->f_1;
	vVar2.z = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { vVar2 };
	fVar0 = SYSTEM::COS(vParam1.z);
	fVar1 = SYSTEM::SIN(vParam1.z);
	vVar2.x = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	vVar2.y = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	vVar2.z = uParam0->f_2;
	*uParam0 = { vVar2 };
}

float func_34(int iParam0, float fParam1)//Position - 0x2CBB
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_28(iParam0, &vVar0, &vVar1, 1086324736, 1080033280, 1077936128);
	vVar2 = { vVar1 - vVar0 };
	fVar3 = (SYSTEM::SQRT(((((vVar2.x * 0.5f) * (vVar2.x * 0.5f)) + ((vVar2.y * 0.5f) * (vVar2.y * 0.5f))) + ((vVar2.z * 0.5f) * (vVar2.z * 0.5f)))) + fParam1);
	return fVar3;
}

int func_35(int iParam0, bool bParam1)//Position - 0x2D3B
{
	if (bParam1)
	{
		if (func_36(iParam0))
		{
			return 1;
		}
	}
	if (Global_18402B[iParam0 /*770*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_36(int iParam0)//Position - 0x2D67
{
	return func_37(iParam0);
}

bool func_37(int iParam0)//Position - 0x2D75
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_D.f_1, 0);
}

int func_38(vector3 vParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)//Position - 0x2D8F
{
	int iVar0;
	bool bVar1;
	
	if (func_51(vParam0))
	{
		if (func_50(uParam1, bParam4, 0, 1, 1))
		{
			if (bParam4)
			{
			}
			return 1;
		}
	}
	if (func_41(uParam1, bParam4, 1))
	{
		if (bParam4)
		{
		}
		return 1;
	}
	if (bParam5)
	{
		if (func_40(*uParam1, 1056964608))
		{
			return 1;
		}
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (SYSTEM::VDIST(*uParam1, *(uParam2[iVar0 /*3*/])) < (*uParam3)[iVar0])
		{
			if (bParam4)
			{
				func_39(uParam1, *(uParam2[iVar0 /*3*/]), (*uParam3)[iVar0], 1036831949, 0, 0);
			}
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	return 0;
}

void func_39(var uParam0, vector3 vParam1, float fParam2, float fParam3, bool bParam4, float fParam5)//Position - 0x2E4B
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { *uParam0 - vParam1 };
	vVar0.z = 0f;
	if (SYSTEM::VMAG(vVar0) > 0f)
	{
		vVar0 = { vVar0 / FtoV(SYSTEM::VMAG(vVar0)) };
	}
	else
	{
		vVar0 = { 0f, 1f, 0f };
		if (fParam5 == 0f)
		{
			func_33(&vVar0, 0f, 0f, unk_0x55AEFCD285ECC0F2(0f, 360f));
		}
		else
		{
			func_33(&vVar0, 0f, 0f, fParam5);
		}
	}
	vVar0 = { vVar0 * FtoV((fParam2 + fParam3)) };
	if (!bParam4)
	{
		vVar1 = { vParam1 + vVar0 };
	}
	else
	{
		vVar1 = { vParam1 - vVar0 };
	}
	*uParam0 = vVar1.x;
	uParam0->f_1 = vVar1.y;
}

int func_40(vector3 vParam0, float fParam1)//Position - 0x2EF3
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (SYSTEM::VDIST(vParam0, Global_24B2CE.f_A9C[iVar0 /*3*/]) < fParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_41(var uParam0, bool bParam1, bool bParam2)//Position - 0x2F2E
{
	int iVar0;
	var uVar1;
	vector3 vVar2;
	
	if (func_46(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			vVar2 = { *uParam0 };
			func_43(&vVar2, &(Global_24B2CE.f_169[iVar0 /*12*/]), 1036831949, 0, bParam2);
			if (func_46(vVar2, &uVar1) || func_42(vVar2))
			{
				vVar2 = { *uParam0 };
				func_43(&vVar2, &(Global_24B2CE.f_169[iVar0 /*12*/]), 1036831949, 1, bParam2);
			}
			*uParam0 = { vVar2 };
		}
		return 1;
	}
	return 0;
}

int func_42(vector3 vParam0)//Position - 0x2FB2
{
	float fVar0;
	
	if (Global_24B2CE.f_24A > 0f)
	{
		fVar0 = SYSTEM::VDIST(vParam0, Global_24B2CE.f_247);
		if (fVar0 < Global_24B2CE.f_24A)
		{
			return 1;
		}
	}
	return 0;
}

void func_43(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)//Position - 0x2FEB
{
	if (bParam4)
	{
		switch (uParam1->f_A)
		{
			case 0:
				*uParam0 = { func_45(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_24B2CE.f_A9A) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_45(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_45(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_A)
		{
			case 0:
				func_39(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_24B2CE.f_A9A) * uParam1->f_8)), fParam2, bParam3, 0);
				break;
			
			case 1:
				func_44(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_20(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

void func_44(var uParam0, struct<2> Param1, var uParam2, struct<2> Param3, var uParam4, float fParam5, bool bParam6)//Position - 0x30F5
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	vVar0 = { *uParam0 };
	fVar1 = (*uParam0 - Param1);
	fVar2 = (*uParam0 - Param3);
	if (fVar1 < fVar2)
	{
		fVar3 = fVar1;
	}
	else
	{
		fVar3 = fVar2;
	}
	fVar4 = (uParam0->f_1 - Param1.f_1);
	fVar5 = (uParam0->f_1 - Param3.f_1);
	if (fVar4 < fVar5)
	{
		fVar6 = fVar4;
	}
	else
	{
		fVar6 = fVar5;
	}
	vVar0 = { *uParam0 };
	if (!bParam6)
	{
		if (fVar3 < fVar6)
		{
			if (fVar1 < fVar2)
			{
				vVar0.x = (Param1 - fParam5);
			}
			else
			{
				vVar0.x = (Param3 + fParam5);
			}
		}
		else if (fVar4 < fVar5)
		{
			vVar0.y = (Param1.f_1 - fParam5);
		}
		else
		{
			vVar0.y = (Param3.f_1 + fParam5);
		}
	}
	else if (fVar3 < fVar6)
	{
		if (fVar1 < fVar2)
		{
			vVar0.x = (Param3 + fParam5);
		}
		else
		{
			vVar0.x = (Param1 - fParam5);
		}
	}
	else if (fVar4 < fVar5)
	{
		vVar0.y = (Param3.f_1 + fParam5);
	}
	else
	{
		vVar0.y = (Param1.f_1 - fParam5);
	}
	*uParam0 = { vVar0 };
}

Vector3 func_45(vector3 vParam0, vector3 vParam1, vector3 vParam2, float fParam3, int iParam4, float fParam5, bool bParam6)//Position - 0x31F4
{
	int iVar0;
	vector3 vVar1;
	
	switch (iParam4)
	{
		case 0:
			func_39(&vParam0, vParam1, fParam3, fParam5, bParam6, 0);
			break;
		
		case 1:
			func_44(&vParam0, vParam1, vParam2, fParam5, bParam6);
			break;
		
		case 2:
			func_20(&vParam0, vParam1, vParam2, fParam3, fParam5, bParam6);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		unk_0x29EBF830A072263F(vParam0, iVar0 * 5, &vVar1, 1, 0f, 0f);
		switch (iParam4)
		{
			case 0:
				if (!func_142(vVar1, vParam1, fParam3, 0, 0))
				{
					return vVar1;
				}
				break;
			
			case 1:
				if (!func_58(vVar1, vParam1, vParam2, 0, 0))
				{
					return vVar1;
				}
				break;
			
			case 2:
				if (!unk_0x7352105EC4D7541F(vVar1, vParam1, vParam2, fParam3, 0, 1))
				{
					return vVar1;
				}
				break;
		}
		iVar0++;
	}
	return vParam0;
}

int func_46(vector3 vParam0, var uParam1)//Position - 0x32F7
{
	int iVar0;
	int iVar1;
	
	if (func_49())
	{
		return 0;
	}
	iVar1 = func_48();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_24B2CE.f_169[iVar0 /*12*/].f_9 == 1)
		{
			if (func_47(vParam0, &(Global_24B2CE.f_169[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				*uParam1 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_47(vector3 vParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)//Position - 0x335B
{
	switch (uParam1->f_A)
	{
		case 0:
			return func_142(vParam0, *uParam1, ((uParam1->f_6 + fParam2) + (IntToFloat(Global_24B2CE.f_A9A) * uParam1->f_8)), bParam3, bParam4);
			break;
		
		case 1:
			return func_58(vParam0, *uParam1 + Vector((fParam2 * -1f), (fParam2 * -1f), (fParam2 * -1f)), uParam1->f_3 + Vector(fParam2, fParam2, fParam2), bParam3, bParam4);
			break;
		
		case 2:
			if (bParam3 && bParam4)
			{
				return unk_0x7352105EC4D7541F(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 0);
			}
			else if (bParam3)
			{
				if (unk_0x7352105EC4D7541F(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 0) && !(vParam0.z < uParam1->f_2 && vParam0.z < uParam1->f_3.f_2))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (bParam4)
			{
				if (unk_0x7352105EC4D7541F(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 0) && !(vParam0.z > uParam1->f_2 && vParam0.z > uParam1->f_3.f_2))
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
				return unk_0x7352105EC4D7541F(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 1);
			}
			break;
	}
	return 0;
}

int func_48()//Position - 0x34BC
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_24B2CE.f_169[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_49()//Position - 0x34EF
{
	return Global_197055.f_1C;
}

int func_50(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x34FD
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_24C5CA[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_24C5CA[iVar0 /*17*/].f_10))
			{
				if (func_47(*uParam0, &(Global_24C5CA[iVar0 /*17*/]), 1008981770, bParam4, 0))
				{
					if (bParam1)
					{
						if (Global_24C5CA[iVar0 /*17*/].f_C)
						{
							*uParam0 = { Global_24C5CA[iVar0 /*17*/].f_D };
						}
						else
						{
							vVar1 = { *uParam0 };
							func_43(&vVar1, &(Global_24C5CA[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_50(&vVar1, 0, 0, 0, 1))
							{
								vVar1 = { *uParam0 };
								func_43(&vVar1, &(Global_24C5CA[iVar0 /*17*/]), 1036831949, 1, 0);
							}
							*uParam0 = { vVar1 };
						}
					}
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_51(vector3 vParam0)//Position - 0x35D8
{
	int iVar0;
	vector3 vVar1;
	
	if (!Global_24B2CE.f_1FC && !Global_24B2CE.f_1FD)
	{
		if (!Global_24B2CE.f_2C.f_13A)
		{
			if (!func_55(unk_0xB5CEFD608600A09F(), 1))
			{
				return 1;
			}
			if (!func_54(vParam0, 1008981770))
			{
				if (!func_50(&vParam0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_50(&vParam0, 0, 1, 0, 1))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = func_53(vParam0, 1008981770);
				if (iVar0 > -1)
				{
					vVar1 = { func_52(&(Global_24B2CE.f_2C[iVar0 /*12*/])) };
					if (!func_50(&vVar1, 0, 0, 0, 1))
					{
						if (!func_50(&vParam0, 0, 0, 0, 1))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

Vector3 func_52(var uParam0)//Position - 0x3698
{
	switch (uParam0->f_A)
	{
		case 0:
			return *uParam0;
			break;
		
		case 1:
		case 2:
			return *uParam0 + uParam0->f_3 * Vector(0.5f, 0.5f, 0.5f);
			break;
	}
	return *uParam0;
}

int func_53(vector3 vParam0, float fParam1)//Position - 0x36E1
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_24B2CE.f_2C[iVar0 /*12*/].f_9)
		{
			if (func_47(vParam0, &(Global_24B2CE.f_2C[iVar0 /*12*/]), fParam1, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_54(vector3 vParam0, float fParam1)//Position - 0x3729
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_24B2CE.f_2C[iVar0 /*12*/].f_9)
		{
			if (func_47(vParam0, &(Global_24B2CE.f_2C[iVar0 /*12*/]), fParam1, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_55(int iParam0, bool bParam1)//Position - 0x3770
{
	if (Global_1406BF != 0)
	{
		return func_56(iParam0) != 0;
	}
	return func_35(iParam0, bParam1);
}

int func_56(int iParam0)//Position - 0x3796
{
	if (func_15(iParam0, 0, 1))
	{
		return Global_24FB5C[iParam0 /*406*/].f_1;
	}
	return 0;
}

int func_57(vector3 vParam0, var uParam1)//Position - 0x37B8
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	iVar1 = -1;
	fVar2 = 999999.9f;
	if (Global_24B2CE.f_8C4 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_24B2CE.f_8C4)
		{
			fVar3 = SYSTEM::VDIST(Global_24B2CE.f_8C5[iVar0 /*4*/], vParam0);
			if (fVar3 < fVar2)
			{
				iVar1 = iVar0;
				fVar2 = fVar3;
			}
			iVar0++;
		}
		if (!iVar1 == -1)
		{
			*uParam1 = { Global_24B2CE.f_8C5[iVar1 /*4*/] };
			return 1;
		}
	}
	return 0;
}

int func_58(vector3 vParam0, vector3 vParam1, vector3 vParam2, bool bParam3, bool bParam4)//Position - 0x3832
{
	func_59(&vParam1, &vParam2);
	if (((!vParam0.x >= vParam1.x || !vParam0.y >= vParam1.y) || !vParam0.x <= vParam2.x) || !vParam0.y <= vParam2.y)
	{
		return 0;
	}
	if (bParam3 && bParam4)
	{
		return 1;
	}
	else if (bParam3)
	{
		if (vParam0.z >= vParam1.z)
		{
			return 1;
		}
	}
	else if (bParam4)
	{
		if (vParam0.z <= vParam2.z)
		{
			return 1;
		}
	}
	else if (vParam0.z >= vParam1.z && vParam0.z <= vParam2.z)
	{
		return 1;
	}
	return 0;
}

void func_59(var uParam0, var uParam1)//Position - 0x38DD
{
	var uVar0;
	
	if (*uParam0 > *uParam1)
	{
		uVar0 = *uParam1;
		*uParam1 = *uParam0;
		*uParam0 = uVar0;
	}
	if (uParam0->f_1 > uParam1->f_1)
	{
		uVar0 = uParam1->f_1;
		uParam1->f_1 = uParam0->f_1;
		uParam0->f_1 = uVar0;
	}
	if (uParam0->f_2 > uParam1->f_2)
	{
		uVar0 = uParam1->f_2;
		uParam1->f_2 = uParam0->f_2;
		uParam0->f_2 = uVar0;
	}
}

int func_60(vector3 vParam0, vector3 vParam1, float fParam2)//Position - 0x393F
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (vParam0.x > vParam1.x)
	{
		vVar1.x = vParam0.x;
		vVar0.x = vParam1.x;
	}
	else
	{
		vVar1.x = vParam1.x;
		vVar0.x = vParam0.x;
	}
	if (vParam0.y > vParam1.y)
	{
		vVar1.y = vParam0.y;
		vVar0.y = vParam1.y;
	}
	else
	{
		vVar1.y = vParam1.y;
		vVar0.y = vParam0.y;
	}
	if (vParam0.z > vParam1.z)
	{
		vVar1.z = vParam0.z;
		vVar0.z = vParam1.z;
	}
	else
	{
		vVar1.z = vParam1.z;
		vVar0.z = vParam0.z;
	}
	if (SYSTEM::VMAG(vVar1 - vVar0) > 100f)
	{
		return 1;
	}
	if (fParam2 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_61(float fParam0)//Position - 0x39EA
{
	if (fParam0 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_62(var uParam0, var uParam1, var uParam2, bool bParam3)//Position - 0x3A02
{
	vector3 vVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	
	if (Global_24B2CE.f_9A9.f_1 == 0 && Global_24B2CE.f_9A9 == 0)
	{
		if (uParam1->f_5 && !bParam3)
		{
			switch (unk_0xC59E4613981C716D(&(Global_24B2CE.f_9A9.f_1)))
			{
				case 0:
					func_134(uParam1, uParam2);
					if (!Global_24B2CE.f_9A9.f_2)
					{
						if (uParam2->f_7 && Global_24B2CE.f_224.f_7 == 0)
						{
							*(uParam0[0 /*3*/]) = { *uParam1 };
							uParam0->f_10[0] = uParam1->f_3;
							return 1;
						}
						else
						{
							if (uParam1->f_15)
							{
								*(uParam0[0 /*3*/]) = { uParam1->f_12 };
							}
							else
							{
								*(uParam0[0 /*3*/]) = { Global_24B2CE.f_990 };
							}
							if (uParam1->f_5 && func_10(Global_24B2CE.f_1E2))
							{
								if (!Global_24B2CE.f_9A9.f_5)
								{
									Global_24B2CE.f_9A9.f_5 = 1;
								}
								else
								{
									func_11(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
								}
							}
							else
							{
								func_11(uParam0[0 /*3*/], 0, 0, 1, 0, uParam1, uParam2);
							}
							uParam0->f_10[0] = unk_0x55AEFCD285ECC0F2(0f, 360f);
							return 1;
						}
					}
					break;
				
				case 1:
					func_134(uParam1, uParam2);
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 0;
					break;
			}
		}
		else if (unk_0x5CBE37ADBC334A75())
		{
			if (!unk_0xED1BF24BE110D8F6())
			{
				if (unk_0x889916463BBF90C3())
				{
					func_134(uParam1, uParam2);
					Global_24B2CE.f_9A9.f_1 = unk_0x0C30CC1D72623F11();
				}
				else
				{
					return 0;
				}
			}
			else
			{
				unk_0xA8AB1E14B86B6053();
				func_134(uParam1, uParam2);
				if (!Global_24B2CE.f_9A9.f_2)
				{
					Global_24B2CE.f_9A9.f_5 = 1;
					return 1;
				}
			}
		}
		else
		{
			return 0;
		}
	}
	if (uParam1->f_5)
	{
		func_131(Global_24B2CE.f_224, &(Global_24B2CE.f_9A9.f_39), &(Global_24B2CE.f_9A9.f_5A));
	}
	if (uParam2->f_7 && !Global_24B2CE.f_9A9.f_4)
	{
		Global_24B2CE.f_9A9.f_4 = 1;
		func_70(*uParam1, uParam1->f_3, uParam1, uParam2, 1, -1);
	}
	iVar4 = 0;
	if (uParam1->f_5)
	{
		iVar5 = 64;
	}
	else
	{
		iVar5 = 32;
	}
	if (Global_24B2CE.f_9A9.f_1 > 0 || Global_24B2CE.f_9A9 > 0)
	{
		if (uParam1->f_5 || unk_0x5CBE37ADBC334A75())
		{
			iVar2 = 0;
			while (iVar2 < Global_24B2CE.f_9A9.f_1)
			{
				if (iVar4 < iVar5)
				{
					if (iVar2 <= Global_24B2CE.f_9A9.f_3)
					{
						iVar2 = Global_24B2CE.f_9A9.f_3 + 1;
					}
					if (iVar2 > (Global_24B2CE.f_9A9.f_1 - 1))
					{
						iVar2 = (Global_24B2CE.f_9A9.f_1 - 1);
					}
					if (iVar2 < 0)
					{
						iVar2 = 0;
					}
					if (uParam1->f_5 && !bParam3)
					{
						unk_0xBDF6A78EFF9F163B(iVar2, &vVar0, &fVar1);
						fVar1 = (fVar1 * 57.29578f);
					}
					else
					{
						unk_0x02504955C05BBA48(iVar2, &vVar0, &(vVar0.f_1), &(vVar0.f_2));
					}
					if (uParam1->f_5 && !bParam3)
					{
						iVar3 = unk_0x51075D30FF64563A(iVar2);
					}
					else
					{
						unk_0x73B66316C77A5550(iVar2, &iVar3);
					}
					func_70(vVar0, fVar1, uParam1, uParam2, 0, iVar3);
					iVar4++;
					Global_24B2CE.f_9A9.f_3 = iVar2;
				}
				else
				{
					return 0;
				}
				iVar2++;
			}
		}
		else
		{
			iVar2 = Global_24B2CE.f_9A9.f_1;
		}
		if (Global_24B2CE.f_9A9.f_1 == iVar2)
		{
			if (uParam1->f_5 && Global_24B2CE.f_B34)
			{
				func_64(&(Global_24B2CE.f_9A9.f_6[0 /*10*/]), &(Global_24B2CE.f_9A9.f_6[1 /*10*/]), &(Global_24B2CE.f_9A9.f_6[2 /*10*/]));
			}
			if (uParam1->f_5 && func_10(Global_24B2CE.f_1E2))
			{
				if (Global_24B2CE.f_9A9.f_2)
				{
					func_9(uParam0, &(Global_24B2CE.f_9A9.f_6));
					func_63(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_24B2CE.f_990 };
					func_11(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
					uParam0->f_10[0] = unk_0x55AEFCD285ECC0F2(0f, 360f);
					func_63(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else if (Global_24B2CE.f_9A9.f_2)
			{
				func_9(uParam0, &(Global_24B2CE.f_9A9.f_6));
				func_63(*(uParam0[0 /*3*/]));
				return 1;
			}
			else if (uParam1->f_5)
			{
				iVar2 = unk_0x491B2241281A03B7(0, Global_24B2CE.f_9A9.f_1);
				unk_0xBDF6A78EFF9F163B(iVar2, uParam0[0 /*3*/], &(uParam0->f_10[0]));
				if (!func_19(uParam0[0 /*3*/], 0))
				{
					uParam0->f_10[0] = (uParam0->f_10[0] * 57.29578f);
					func_63(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_24B2CE.f_990 };
					func_11(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
					uParam0->f_10[0] = unk_0x55AEFCD285ECC0F2(0f, 360f);
					func_63(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_24B2CE.f_990 };
				func_11(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
				uParam0->f_10[0] = unk_0x55AEFCD285ECC0F2(0f, 360f);
				func_63(*(uParam0[0 /*3*/]));
				return 1;
			}
		}
	}
	else
	{
		*(uParam0[0 /*3*/]) = { Global_24B2CE.f_990 };
		if (uParam1->f_5 && func_10(Global_24B2CE.f_1E2))
		{
			if (!Global_24B2CE.f_9A9.f_5)
			{
				Global_24B2CE.f_9A9.f_5 = 1;
			}
			else
			{
				func_11(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
			}
		}
		else
		{
			if (uParam1->f_F)
			{
				bVar6 = false;
			}
			else
			{
				bVar6 = true;
			}
			func_11(uParam0[0 /*3*/], 0, bVar6, 0, 0, uParam1, uParam2);
		}
		uParam0->f_10[0] = unk_0x55AEFCD285ECC0F2(0f, 360f);
		func_63(*(uParam0[0 /*3*/]));
		return 1;
	}
	return 0;
}

void func_63(vector3 vParam0)//Position - 0x3FC9
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 > 0)
		{
			Global_24B2CE.f_A2F[(3 - iVar0) /*3*/] = { Global_24B2CE.f_A2F[(3 - iVar0 + 1) /*3*/] };
		}
		iVar0++;
	}
	Global_24B2CE.f_A2F[0 /*3*/] = { vParam0 };
}

void func_64(var uParam0, var uParam1, var uParam2)//Position - 0x401A
{
	if (func_10(Global_24B2CE.f_1E2) && func_69() < 4096)
	{
		func_68(uParam0, 0f);
		func_68(uParam1, uParam0->f_2);
		func_68(uParam2, uParam1->f_2);
	}
	else
	{
		func_67(uParam0);
		func_66(uParam2, uParam0->f_4);
		func_65(uParam1, uParam0->f_4, uParam2->f_4);
	}
}

void func_65(var uParam0, vector3 vParam1, vector3 vParam2)//Position - 0x407F
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	struct<10> Var5;
	
	fVar1 = -1f;
	Var5.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_24BE1E[iVar0 /*10*/] > 0)
		{
			fVar2 = SYSTEM::VDIST(Global_24BE1E[iVar0 /*10*/].f_4, vParam1);
			fVar3 = SYSTEM::VDIST(Global_24BE1E[iVar0 /*10*/].f_4, vParam2);
			fVar4 = (fVar2 + fVar3);
			fVar4 = (fVar4 * Global_24BE1E[iVar0 /*10*/].f_1);
			if (fVar4 > fVar1)
			{
				fVar1 = fVar4;
				Var5 = { Global_24BE1E[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var5 };
}

void func_66(var uParam0, vector3 vParam1)//Position - 0x411E
{
	int iVar0;
	float fVar1;
	float fVar2;
	struct<10> Var3;
	
	fVar1 = -1f;
	Var3.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_24BE1E[iVar0 /*10*/] > 0)
		{
			fVar2 = SYSTEM::VDIST(Global_24BE1E[iVar0 /*10*/].f_4, vParam1);
			fVar2 = (fVar2 * Global_24BE1E[iVar0 /*10*/].f_1);
			if (fVar2 > fVar1)
			{
				fVar1 = fVar2;
				Var3 = { Global_24BE1E[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var3 };
}

void func_67(var uParam0)//Position - 0x41A0
{
	int iVar0;
	float fVar1;
	struct<10> Var2;
	
	fVar1 = -1f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_24BE1E[iVar0 /*10*/] > 0)
		{
			if (Global_24BE1E[iVar0 /*10*/].f_1 > fVar1)
			{
				fVar1 = Global_24BE1E[iVar0 /*10*/].f_1;
				Var2 = { Global_24BE1E[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

void func_68(var uParam0, float fParam1)//Position - 0x420D
{
	int iVar0;
	float fVar1;
	struct<10> Var2;
	
	fVar1 = 999999.9f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_24BE1E[iVar0 /*10*/] > 0)
		{
			if (Global_24BE1E[iVar0 /*10*/].f_2 < fVar1 && Global_24BE1E[iVar0 /*10*/].f_2 > fParam1)
			{
				fVar1 = Global_24BE1E[iVar0 /*10*/].f_2;
				Var2 = { Global_24BE1E[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

int func_69()//Position - 0x4290
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_24BE1E[iVar0 /*10*/] > iVar1)
		{
			iVar1 = Global_24BE1E[iVar0 /*10*/];
		}
		iVar0++;
	}
	return iVar1;
}

void func_70(vector3 vParam0, float fParam1, var uParam2, var uParam3, bool bParam4, int iParam5)//Position - 0x42C7
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	float fVar6;
	var uVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	vector3 vVar12;
	bool bVar13;
	int iVar14;
	vector3 vVar15;
	vector3 vVar16;
	float fVar17;
	int iVar18;
	struct<10> Var19;
	bool bVar20;
	bool bVar21;
	
	iVar10 = 0;
	iVar8 = 0;
	bVar9 = false;
	if (uParam2->f_5)
	{
		if (Global_24B2CE.f_1E2 == 1)
		{
			if (unk_0x357058E632979E65((Global_24B2CE.f_1F9.f_2 - vParam0.z)) < 25f)
			{
				iVar8++;
			}
		}
		else
		{
			iVar8++;
		}
	}
	else
	{
		iVar8++;
	}
	if (uParam2->f_5)
	{
		if (func_127(unk_0xB5CEFD608600A09F()))
		{
			if (iParam5 == -1)
			{
				bVar9 = true;
			}
			else if (!iParam5 & 1 == 0)
			{
				bVar9 = true;
			}
		}
		else if (iParam5 == -1)
		{
			iVar8 += 2;
		}
		else if (!iParam5 & 1 == 0)
		{
			iVar8 += 2;
		}
	}
	else
	{
		iVar8 += 2;
	}
	if (uParam2->f_5 && uParam2->f_6)
	{
		if (!func_126(vParam0, 1084227584, 1123024896, 0))
		{
			iVar8 += 4;
		}
	}
	else
	{
		iVar8 += 4;
	}
	if (uParam2->f_5)
	{
		if (!unk_0x6A857E4D4E6BD499(unk_0xBC25C936A095B5BA(), vParam0, 65f))
		{
			iVar8 += 8;
			iVar8 += 16;
		}
		else if (!unk_0x6A857E4D4E6BD499(unk_0xBC25C936A095B5BA(), vParam0, 20f))
		{
			iVar8 += 8;
		}
	}
	else
	{
		iVar8 += 8;
		iVar8 += 16;
	}
	if (uParam2->f_5)
	{
		if (!func_125(vParam0, uParam3->f_5, 1, 1, 1, 1, 1, 1))
		{
			iVar8 += 32;
		}
	}
	else
	{
		iVar8 += 32;
	}
	bVar13 = true;
	iVar11 = 0;
	while (iVar11 < 2)
	{
		if (SYSTEM::VMAG(uParam3->f_D[iVar11 /*3*/]) > 0f)
		{
			if (!SYSTEM::VDIST(vParam0, uParam3->f_D[iVar11 /*3*/]) > uParam3->f_14[iVar11])
			{
				bVar13 = false;
			}
		}
		iVar11++;
	}
	if (bVar13)
	{
		if ((SYSTEM::VMAG(uParam3->f_17) > 0f && SYSTEM::VMAG(uParam3->f_1A) > 0f) && uParam3->f_1D > 0f)
		{
			if (unk_0x7352105EC4D7541F(vParam0, uParam3->f_17, uParam3->f_1A, uParam3->f_1D, 0, 1))
			{
				bVar13 = false;
			}
		}
	}
	if (bVar13)
	{
		iVar8 += 256;
	}
	if (uParam2->f_5)
	{
		if (func_119(vParam0, fParam1, uParam2->f_F, func_124(1), uParam2->f_10, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0, 0))
		{
			iVar8 += 64;
			iVar8 += 128;
		}
		else
		{
			iVar10 = Global_24B2CE.f_3;
		}
	}
	else if (!func_116(vParam0, 25f, unk_0xB5CEFD608600A09F(), 1, 1))
	{
		if (uParam2->f_F)
		{
			fVar1 = 3.5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!func_113(vParam0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar8 += 128;
			iVar8 += 64;
		}
		else if (!func_113(vParam0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
		{
			iVar8 += 64;
		}
	}
	if (uParam2->f_5)
	{
		if (!Global_24B2CE.f_2B1)
		{
			vVar12 = { Global_24B2CE.f_1F9 };
			if (Global_24B2CE.f_1E2 == 26)
			{
				vVar12 = { Global_24B2CE.f_224.f_12 };
			}
			if (!func_40(vParam0, 0.5f))
			{
				if (func_51(vVar12))
				{
					if (!func_50(&vParam0, 0, 0, 0, 1) && !func_112(&vParam0, 0))
					{
						iVar8 += 512;
					}
				}
				else if (!func_112(&vParam0, 0))
				{
					iVar8 += 512;
				}
			}
		}
		else
		{
			iVar8 += 512;
		}
	}
	else if (!func_111(vParam0, 2.5f, 3))
	{
		iVar8 += 512;
	}
	if (uParam2->f_5)
	{
		if (!(func_110(unk_0xB5CEFD608600A09F()) && func_108(unk_0xB5CEFD608600A09F())))
		{
			if (!func_107(&vParam0, &(Global_24B2CE.f_9A9.f_5A), 0, 1065353216))
			{
				iVar8 += 1024;
			}
		}
		else
		{
			iVar8 += 1024;
		}
	}
	else
	{
		iVar8 += 1024;
	}
	if (uParam2->f_5)
	{
		if (!func_108(unk_0xB5CEFD608600A09F()))
		{
			if (!func_106(vParam0, &(Global_24B2CE.f_9A9.f_39), &(Global_24B2CE.f_9A9.f_5A), 1073741824))
			{
				iVar8 += 2048;
			}
		}
		else
		{
			iVar8 += 2048;
		}
	}
	else
	{
		iVar8 += 2048;
	}
	if (func_105(vParam0))
	{
		if (uParam2->f_5)
		{
			if (func_10(Global_24B2CE.f_1E2))
			{
				if (func_54(vParam0, 0.01f))
				{
					iVar8 += 4096;
				}
			}
			else
			{
				iVar8 += 4096;
			}
		}
		else
		{
			iVar8 += 4096;
		}
	}
	if (uParam2->f_5)
	{
		if (func_104(vParam0))
		{
			iVar8 += 8192;
		}
	}
	else
	{
		iVar8 += 8192;
	}
	if (!Global_24B2CE.f_2C.f_37)
	{
		iVar8 += 16384;
	}
	else if (uParam2->f_5)
	{
		if (!iParam5 & 1 == 0)
		{
			if (unk_0xBF697FA7422C0621(unk_0x9911032C958CE1B0(vParam0)))
			{
				iVar8 += 16384;
			}
		}
	}
	else if (!iParam5 & 2 == 0)
	{
		if (unk_0xBF697FA7422C0621(unk_0x9911032C958CE1B0(vParam0)))
		{
			iVar8 += 16384;
		}
	}
	if (uParam2->f_5)
	{
		if (!Global_24B2CE.f_2B1)
		{
			if (!func_41(&vParam0, 0, 0))
			{
				iVar8 = (iVar8 + 32768);
			}
		}
		else
		{
			iVar8 = (iVar8 + 32768);
		}
	}
	else
	{
		iVar8 = (iVar8 + 32768);
	}
	if (!func_19(&vParam0, 0))
	{
		iVar8 = (iVar8 + 65536);
	}
	else
	{
		iVar14 = func_53(vParam0, 1008981770);
		if (iVar14 > -1)
		{
			func_103(vParam0, &vVar15, &vVar16, &fVar17);
			if (!func_98(&(Global_24B2CE.f_2C[iVar14 /*12*/]), vVar15, vVar16, fVar17))
			{
				iVar8 = -1;
			}
		}
		else
		{
			iVar8 = -1;
		}
	}
	if (func_25(vParam0, 1056964608))
	{
		iVar8 = -1;
	}
	if (uParam3->f_21)
	{
		if (unk_0xAE7193AAF1ECF1DB(vParam0.x, vParam0.y, (vParam0.z + 1f), 0.3f))
		{
			iVar8 = -1;
		}
	}
	if (uParam3->f_22)
	{
		if (unk_0x38B362A95EA24163(vParam0.x, vParam0.y, (vParam0.z + 1f), 1f))
		{
			iVar8 = -1;
		}
	}
	if (uParam2->f_5)
	{
	}
	else if (func_97(vParam0, 1, 0, uParam2->f_F, 1060320051, 1086324736, 1065353216, 1088421888))
	{
		iVar8 = 0;
	}
	Var19.f_2 = 1176256410;
	bVar20 = false;
	bVar21 = false;
	if (Global_24B2CE.f_B34 && uParam2->f_5)
	{
		if (iVar8 > 0)
		{
			if (bParam4)
			{
				uParam3->f_4 = 0;
				bVar4 = false;
			}
			else
			{
				bVar4 = true;
			}
			if (uParam2->f_15)
			{
				fVar0 = func_89(vParam0, uParam2->f_12, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
			}
			else
			{
				fVar0 = func_89(vParam0, Global_24B2CE.f_990, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
			}
			if (bVar9)
			{
				fVar0 = (fVar0 * 3f);
			}
			if (func_10(Global_24B2CE.f_1E2) && iVar8 < 4096)
			{
				Var19.f_2 = func_87(vParam0);
			}
			uVar7 = func_76(vParam0, 1, 0, 0, 0);
			Var19.f_4 = { vParam0 };
			Var19.f_7 = fParam1;
			Var19 = iVar8;
			Var19.f_1 = fVar0;
			Var19.f_9 = uVar7;
			func_75(Var19);
			Global_24B2CE.f_9A9.f_2 = 1;
		}
	}
	else
	{
		iVar18 = 0;
		while (iVar18 < 5)
		{
			if (iVar8 >= Global_24B2CE.f_9A9.f_6[iVar18 /*10*/])
			{
				if (uParam2->f_5)
				{
					if (!bVar20)
					{
						if (bParam4)
						{
							uParam3->f_4 = 0;
							bVar4 = false;
						}
						else
						{
							bVar4 = true;
						}
						if (uParam2->f_15)
						{
							fVar0 = func_89(vParam0, uParam2->f_12, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
						}
						else
						{
							fVar0 = func_89(vParam0, Global_24B2CE.f_990, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
						}
						if (bVar9)
						{
							fVar0 = (fVar0 * 3f);
						}
						bVar20 = true;
					}
					if ((func_10(Global_24B2CE.f_1E2) && iVar8 == Global_24B2CE.f_9A9.f_6[iVar18 /*10*/]) && iVar8 < 4096)
					{
						if (!bVar21)
						{
							fVar2 = func_87(vParam0);
							bVar21 = true;
						}
						if (fVar2 < Global_24B2CE.f_9A9.f_6[iVar18 /*10*/].f_2)
						{
							Var19.f_4 = { vParam0 };
							Var19.f_7 = fParam1;
							Var19 = iVar8;
							Var19.f_1 = fVar0;
							Var19.f_2 = fVar2;
							func_74(Var19, iVar18);
							Global_24B2CE.f_9A9.f_2 = 1;
							return;
						}
					}
					else if (iVar8 > Global_24B2CE.f_9A9.f_6[iVar18 /*10*/] || (iVar8 == Global_24B2CE.f_9A9.f_6[iVar18 /*10*/] && fVar0 > Global_24B2CE.f_9A9.f_6[iVar18 /*10*/].f_1))
					{
						Var19.f_4 = { vParam0 };
						Var19.f_7 = fParam1;
						Var19 = iVar8;
						Var19.f_1 = fVar0;
						func_74(Var19, iVar18);
						Global_24B2CE.f_9A9.f_2 = 1;
						return;
					}
				}
				else
				{
					if (!bVar20)
					{
						if (uParam2->f_F)
						{
							fVar1 = 3.5f;
						}
						else
						{
							fVar1 = 1f;
						}
						fVar5 = func_72(vParam0, fVar1, 1, 1, 0, -1, 1);
						fVar6 = func_76(vParam0, 1, 1, 1, 1);
						if (fVar5 > 15f && fVar6 > 5f)
						{
							fVar3 = func_71(fVar5, 0f, 80f, 160f, 1f, 1.2f);
						}
						else
						{
							fVar3 = func_71(fVar6, 0f, 80f, 160f, 0f, 0.2f);
						}
						bVar20 = true;
					}
					if (iVar8 > Global_24B2CE.f_9A9.f_6[iVar18 /*10*/] || (iVar8 == Global_24B2CE.f_9A9.f_6[iVar18 /*10*/] && fVar3 > Global_24B2CE.f_9A9.f_6[iVar18 /*10*/].f_3))
					{
						Var19.f_4 = { vParam0 };
						Var19.f_7 = fParam1;
						Var19 = iVar8;
						Var19.f_3 = fVar3;
						func_74(Var19, iVar18);
						Global_24B2CE.f_9A9.f_2 = 1;
						return;
					}
				}
			}
			iVar18++;
		}
	}
}

float func_71(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)//Position - 0x4C82
{
	float fVar0;
	
	if (fParam1 >= fParam3)
	{
		fParam1 = (fParam3 * 0.5f);
	}
	if (fParam0 < fParam1)
	{
		fParam0 = fParam1;
	}
	if (fParam0 > fParam3)
	{
		fParam0 = fParam3;
	}
	if (fParam2 < fParam3 && fParam2 > fParam1)
	{
		if (fParam0 < fParam2)
		{
			fVar0 = (fParam4 + ((1f - fParam4) - ((1f - fParam4) * ((fParam2 - fParam0) / (fParam2 - fParam1)))));
		}
		else
		{
			fVar0 = (fParam5 + ((1f - fParam5) - ((1f - fParam5) * ((fParam0 - fParam2) / (fParam3 - fParam2)))));
		}
	}
	else
	{
		fVar0 = (fParam4 + (((fParam0 - fParam1) / (fParam3 - fParam1)) * (fParam5 - fParam4)));
	}
	return fVar0;
}

float func_72(vector3 vParam0, float fParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x4D20
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	float fVar4;
	
	bVar2 = false;
	fVar3 = 1E+13f;
	if (iParam2 && !bParam4)
	{
		if (func_15(unk_0xB5CEFD608600A09F(), 1, 1))
		{
			if (!unk_0x17FAADF9916EF741())
			{
				if (unk_0x33CC9445B2DF9387(vParam0, fParam1))
				{
					fVar4 = SYSTEM::VDIST2(vParam0, unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0));
					if (fVar4 < fVar3)
					{
						fVar3 = fVar4;
						bVar2 = true;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_15(iVar1, 1, 1))
		{
			if (!func_139(iVar1, 0) && unk_0x75206900382D1E30(unk_0xB5CEFD608600A09F(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0xB5CEFD608600A09F()))
				{
					if (func_73(iVar1) || !bParam6)
					{
						if (!bParam4)
						{
							if ((iParam3 || (iParam3 == 0 && unk_0x343CB262BF0CDF5A(iVar1) != unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()))) || unk_0x343CB262BF0CDF5A(iVar1) == -1)
							{
								if (unk_0xCFC6F6FA0A38CF65(iVar1, vParam0, fParam1))
								{
									fVar4 = SYSTEM::VDIST2(vParam0, unk_0x541C2AEF053615BC(unk_0xA95CF30C72EB526E(iVar1), 0));
									if (fVar4 < fVar3)
									{
										fVar3 = fVar4;
										bVar2 = true;
									}
								}
							}
						}
						else if (unk_0x343CB262BF0CDF5A(iVar1) != iParam5 || unk_0x343CB262BF0CDF5A(iVar1) == -1)
						{
							if (unk_0xCFC6F6FA0A38CF65(iVar1, vParam0, fParam1))
							{
								fVar4 = SYSTEM::VDIST2(vParam0, unk_0x541C2AEF053615BC(unk_0xA95CF30C72EB526E(iVar1), 0));
								if (fVar4 < fVar3)
								{
									fVar3 = fVar4;
									bVar2 = true;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar2)
	{
		return SYSTEM::SQRT(fVar3);
	}
	return -1f;
}

int func_73(int iParam0)//Position - 0x4EB7
{
	if (unk_0xE904009319A7A43E(unk_0xA95CF30C72EB526E(iParam0)) || Global_24FB5C[iParam0 /*406*/].f_F1)
	{
		return 1;
	}
	return 0;
}

void func_74(struct<10> Param0, int iParam1)//Position - 0x4EE2
{
	struct<10> Var0;
	
	Var0.f_2 = 1176256410;
	Var0 = { Global_24B2CE.f_9A9.f_6[iParam1 /*10*/] };
	Global_24B2CE.f_9A9.f_6[iParam1 /*10*/] = { Param0 };
	if (iParam1 < 4)
	{
		func_74(Var0, iParam1 + 1);
	}
}

void func_75(struct<10> Param0)//Position - 0x4F34
{
	int iVar0;
	struct<10> Var1;
	int iVar2;
	float fVar3;
	int iVar4;
	
	Var1.f_2 = 1176256410;
	iVar2 = func_69();
	if (Param0 > iVar2)
	{
		iVar2 = Param0;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_24BE1E[iVar0 /*10*/] < iVar2)
		{
			Global_24BE1E[iVar0 /*10*/] = { Var1 };
		}
		iVar0++;
	}
	if (Param0 < iVar2)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_24BE1E[iVar0 /*10*/] == 0)
		{
			Global_24BE1E[iVar0 /*10*/] = { Param0 };
			return;
		}
		iVar0++;
	}
	fVar3 = 9999.9f;
	iVar4 = -1;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_24BE1E[iVar0 /*10*/] > 0)
		{
			if (Global_24BE1E[iVar0 /*10*/].f_1 < fVar3)
			{
				fVar3 = Global_24BE1E[iVar0 /*10*/].f_1;
				iVar4 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar4 > -1)
	{
		Global_24BE1E[iVar4 /*10*/] = { Param0 };
	}
}

float func_76(vector3 vParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4)//Position - 0x5028
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar6;
	int iVar7;
	
	fVar3 = 999999.9f;
	bVar4 = false;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar7 = iVar0;
		if (func_15(iVar7, 1, 1))
		{
			if (!iVar7 == unk_0xB5CEFD608600A09F() || iParam3 == 1)
			{
				bVar4 = false;
				if (bParam1)
				{
					if (func_78(iVar7))
					{
						bVar4 = true;
					}
				}
				if (bParam2)
				{
					if (unk_0x343CB262BF0CDF5A(iVar7) == unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()))
					{
						if (!unk_0x343CB262BF0CDF5A(iVar7) == -1 || !func_55(unk_0xB5CEFD608600A09F(), 1))
						{
							bVar4 = true;
						}
					}
				}
				if (bVar4)
				{
					if (unk_0x75206900382D1E30(unk_0xB5CEFD608600A09F(), iVar7) || !bParam4)
					{
						if (func_73(iVar7))
						{
							vVar5 = { func_77(iVar7) };
							if (!iVar7 == unk_0xB5CEFD608600A09F())
							{
								vVar6 = { unk_0xCCA038CFFE1C48BC(unk_0xA95CF30C72EB526E(iVar7)) };
							}
							else
							{
								vVar6 = { vVar5 };
							}
							if (!bParam4)
							{
								if (vVar5.z < -100f)
								{
									vVar5.z = vParam0.z;
								}
								if (vVar6.z < -100f)
								{
									vVar6.z = vParam0.z;
								}
							}
							fVar1 = unk_0xF0F2FC9DE291567F(vParam0, vVar5, true);
							fVar2 = unk_0xF0F2FC9DE291567F(vParam0, vVar6, true);
							if (fVar1 < fVar3)
							{
								fVar3 = fVar1;
							}
							if (fVar2 < fVar3)
							{
								fVar3 = fVar2;
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return fVar3;
}

Vector3 func_77(int iParam0)//Position - 0x5174
{
	return unk_0x541C2AEF053615BC(unk_0xA95CF30C72EB526E(iParam0), 0);
}

int func_78(int iParam0)//Position - 0x5187
{
	if (func_15(iParam0, 0, 1))
	{
		if (!func_85(iParam0))
		{
			if (unk_0x75206900382D1E30(unk_0xB5CEFD608600A09F(), iParam0))
			{
				if (!unk_0x343CB262BF0CDF5A(iParam0) == unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()))
				{
					if (func_35(unk_0xB5CEFD608600A09F(), 1))
					{
						if (!func_84(unk_0x343CB262BF0CDF5A(iParam0), unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()), 0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (unk_0x343CB262BF0CDF5A(iParam0) == -1 && unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()) == -1)
				{
					if (!func_35(unk_0xB5CEFD608600A09F(), 1))
					{
						if (!func_79(iParam0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_79(int iParam0)//Position - 0x5232
{
	if (func_83(unk_0xB5CEFD608600A09F(), iParam0))
	{
		return 1;
	}
	Global_26210D = { func_82(iParam0) };
	if (unk_0xE140B7178EA00705(&Global_26210D))
	{
		return 1;
	}
	if (func_80(unk_0xB5CEFD608600A09F(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_80(int iParam0, int iParam1)//Position - 0x5279
{
	int iVar0;
	
	iVar0 = func_81(iParam0);
	if (!iVar0 == func_16())
	{
		if (iVar0 == func_81(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_81(int iParam0)//Position - 0x52A4
{
	if (iParam0 != func_16())
	{
		return Global_18C80F[iParam0 /*558*/].f_B;
	}
	return func_16();
}

struct<13> func_82(int iParam0)//Position - 0x52C7
{
	struct<13> Var0;
	
	unk_0xB7DBA2C6D2C3C41A(iParam0, &Var0, 13);
	return Var0;
}

int func_83(int iParam0, int iParam1)//Position - 0x52DE
{
	if (unk_0xB9ACC1154C623363())
	{
		Global_26210D = { func_82(iParam0) };
		Global_26211A = { func_82(iParam1) };
		if (unk_0xD7F4457CECF10121(&Global_26210D))
		{
			if (unk_0xD7F4457CECF10121(&Global_26211A))
			{
				unk_0x24723877416AAAFC(&Global_2620C7, 35, &Global_26210D);
				unk_0x24723877416AAAFC(&Global_2620EA, 35, &Global_26211A);
				if (Global_2620C7 == Global_2620EA)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_84(int iParam0, int iParam1, int iParam2)//Position - 0x534B
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return unk_0xFA30DFD0084E92FE(Global_440000.f_32, 0);
				
				case 1:
					return unk_0xFA30DFD0084E92FE(Global_440000.f_32, 1);
				
				case 2:
					return unk_0xFA30DFD0084E92FE(Global_440000.f_32, 2);
				
				case 3:
					return unk_0xFA30DFD0084E92FE(Global_440000.f_32, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0xFA30DFD0084E92FE(Global_440000.f_32, 4);
				
				case 1:
					return unk_0xFA30DFD0084E92FE(Global_440000.f_32, 5);
				
				case 2:
					return unk_0xFA30DFD0084E92FE(Global_440000.f_32, 6);
				
				case 3:
					return unk_0xFA30DFD0084E92FE(Global_440000.f_32, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0xFA30DFD0084E92FE(Global_440000.f_32, 8);
				
				case 1:
					return unk_0xFA30DFD0084E92FE(Global_440000.f_32, 9);
				
				case 2:
					return unk_0xFA30DFD0084E92FE(Global_440000.f_32, 10);
				
				case 3:
					return unk_0xFA30DFD0084E92FE(Global_440000.f_32, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0xFA30DFD0084E92FE(Global_440000.f_32, 12);
				
				case 1:
					return unk_0xFA30DFD0084E92FE(Global_440000.f_32, 13);
				
				case 2:
					return unk_0xFA30DFD0084E92FE(Global_440000.f_32, 14);
				
				case 3:
					return unk_0xFA30DFD0084E92FE(Global_440000.f_32, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_85(int iParam0)//Position - 0x5516
{
	if (func_139(iParam0, 0))
	{
		return 1;
	}
	if (func_86())
	{
		if (iParam0 == unk_0xB5CEFD608600A09F())
		{
			return 1;
		}
	}
	if (unk_0xFA30DFD0084E92FE(Global_24FB5C[iParam0 /*406*/].f_BF, 2))
	{
		return 1;
	}
	return 0;
}

bool func_86()//Position - 0x5558
{
	return unk_0xFA30DFD0084E92FE(Global_240006, 3);
}

float func_87(vector3 vParam0)//Position - 0x5569
{
	var uVar0;
	
	return func_88(vParam0, &(Global_24B2CE.f_2C), &uVar0);
}

float func_88(vector3 vParam0, var uParam1, var uParam2)//Position - 0x5581
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = -1;
	fVar2 = 1E+07f;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if ((uParam1[iVar0 /*12*/])->f_9)
		{
			fVar1 = 0f;
			switch ((uParam1[iVar0 /*12*/])->f_A)
			{
				case 0:
					fVar1 = SYSTEM::VDIST(*(uParam1[iVar0 /*12*/]), vParam0);
					fVar1 = (fVar1 - ((uParam1[iVar0 /*12*/])->f_6 + (IntToFloat(Global_24B2CE.f_A9A) * (uParam1[iVar0 /*12*/])->f_8)));
					break;
				
				case 1:
				case 2:
					if (vParam0.x < (*uParam1)[iVar0 /*12*/])
					{
						fVar1 = (fVar1 + ((*uParam1)[iVar0 /*12*/] - vParam0.x));
					}
					else if (vParam0.x > (uParam1[iVar0 /*12*/])->f_3)
					{
						fVar1 = (fVar1 + (vParam0.x - (uParam1[iVar0 /*12*/])->f_3));
					}
					if (vParam0.y < (uParam1[iVar0 /*12*/])->f_1)
					{
						fVar1 = (fVar1 + ((uParam1[iVar0 /*12*/])->f_1 - vParam0.y));
					}
					else if (vParam0.y > (uParam1[iVar0 /*12*/])->f_3.f_1)
					{
						fVar1 = (fVar1 + (vParam0.y - (uParam1[iVar0 /*12*/])->f_3.f_1));
					}
					if (vParam0.z < (uParam1[iVar0 /*12*/])->f_2)
					{
						fVar1 = (fVar1 + ((uParam1[iVar0 /*12*/])->f_2 - vParam0.z));
					}
					else if (vParam0.z > (uParam1[iVar0 /*12*/])->f_3.f_2)
					{
						fVar1 = (fVar1 + (vParam0.z - (uParam1[iVar0 /*12*/])->f_3.f_2));
					}
					break;
			}
			if (fVar1 < fVar2)
			{
				fVar2 = fVar1;
				iVar3 = iVar0;
			}
		}
		iVar0++;
	}
	if (fVar2 < 0f)
	{
		fVar2 = 0f;
	}
	*uParam2 = iVar3;
	return fVar2;
}

float func_89(vector3 vParam0, vector3 vParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, var uParam6)//Position - 0x56FD
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	
	fVar1 = 1f;
	if (iParam5 > 0)
	{
		fVar1 = (SYSTEM::TO_FLOAT(iParam5) / SYSTEM::TO_FLOAT(8));
	}
	if (bParam2)
	{
		fVar0 = func_71(SYSTEM::VDIST(vParam0, vParam1), 0f, 0f, 200f, 1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.95f));
	}
	*uParam6 = 1E+07f;
	fVar4 = func_76(vParam0, 1, 0, 0, 1);
	fVar0 = func_71(fVar4, 0f, func_96(), func_94(), 0f, 0.3f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	fVar4 = func_92(vParam0);
	fVar0 = func_71(fVar4, 0f, 0f, 60f, 0.5f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	fVar5 = 100f;
	if (unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()) == -1 && !func_55(unk_0xB5CEFD608600A09F(), 1))
	{
		fVar5 = 1f;
	}
	fVar4 = func_91(vParam0, unk_0xB5CEFD608600A09F(), 0);
	fVar0 = func_71(fVar4, 0f, 0f, fVar5, 0f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	if (bParam3)
	{
		if (func_90(vParam0, &fVar2, &fVar3))
		{
			if (fVar2 < 10f)
			{
				fVar2 = 10f;
			}
			if (fVar3 < 0.5f)
			{
				fVar3 = 0.5f;
			}
			fVar0 = func_71(fVar2, 0f, 0f, 200f, 1f, 0.1f);
			fVar0 = (fVar0 + func_71(fVar3, 0f, 0f, 6f, 1f, 0.5f));
			fVar0 = (fVar0 * 0.5f);
			fVar1 = (fVar1 * (fVar0 * 0.85f));
		}
	}
	if (bParam4)
	{
		fVar0 = func_71(SYSTEM::VDIST(Global_24B2CE.f_1F9, vParam0), 0f, 100f, 200f, 0.1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.9f));
	}
	return fVar1;
}

int func_90(vector3 vParam0, var uParam1, var uParam2)//Position - 0x58E3
{
	vector3 vVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	iVar1 = unk_0x2E0AE46DCB1D97E5(vParam0, 1, &uVar3, &uVar2, 1, 3f, 0f);
	if (unk_0x7A0512982A9448C2(iVar1))
	{
		unk_0x2487DB62997A4150(iVar1, &vVar0);
		*uParam1 = SYSTEM::VDIST(vParam0.x, vParam0.y, 0f, vVar0.x, vVar0.y, 0f);
		*uParam2 = unk_0x357058E632979E65((vParam0.z - vVar0.z));
		return 1;
	}
	return 0;
}

float func_91(vector3 vParam0, int iParam1, int iParam2)//Position - 0x593C
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 999999.9f;
	if (func_15(iParam1, 0, 1))
	{
		iVar2 = 0;
		while (iVar2 < 32)
		{
			if (!iParam1 == iVar2 || iParam2 == 1)
			{
				iVar3 = iVar2;
				if (func_15(iVar3, 0, 1))
				{
					if (unk_0x343CB262BF0CDF5A(iVar3) != unk_0x343CB262BF0CDF5A(iParam1) || (unk_0x343CB262BF0CDF5A(iVar3) == -1 && unk_0x343CB262BF0CDF5A(iParam1) == -1))
					{
						if (Global_24E35D.f_105[iVar2])
						{
							fVar1 = SYSTEM::VDIST(Global_24E35D.f_83[iVar2 /*3*/], vParam0);
							if (fVar1 < fVar0)
							{
								fVar0 = fVar1;
							}
						}
					}
				}
			}
			iVar2++;
		}
	}
	return fVar0;
}

float func_92(vector3 vParam0)//Position - 0x59E8
{
	float fVar0;
	float fVar1;
	int iVar2;
	vector3 vVar3;
	var uVar4[32];
	int iVar5;
	
	iVar5 = unk_0x252B0CBDBF5803ED(unk_0xBC25C936A095B5BA(), &uVar4, -1);
	fVar0 = 1E+07f;
	iVar2 = 0;
	while (iVar2 < iVar5)
	{
		if (unk_0x724D816EA203A79E(uVar4[iVar2]))
		{
			if (!unk_0x1D403DFADBC2DE3C(uVar4[iVar2], 0))
			{
				if (func_93(uVar4[iVar2]))
				{
					vVar3 = { unk_0x541C2AEF053615BC(uVar4[iVar2], 1) };
					fVar1 = unk_0xF0F2FC9DE291567F(vParam0, vVar3, true);
					if (fVar1 < fVar0)
					{
						fVar0 = fVar1;
					}
				}
			}
		}
		iVar2++;
	}
	return fVar0;
}

int func_93(int iParam0)//Position - 0x5A75
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x84788C4CA5E15BDC(iParam0);
	switch (unk_0xF9E3B31053F43360(iVar0, 1862763509))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	if (unk_0x4EE7377FBE72B4BC(Global_180770[unk_0xB5CEFD608600A09F()]))
	{
		switch (unk_0xF9E3B31053F43360(iVar0, Global_180770[unk_0xB5CEFD608600A09F()]))
		{
			case 3:
			case 5:
				return 1;
				break;
			}
	}
	if (Global_18402B[unk_0xB5CEFD608600A09F() /*770*/] == 0)
	{
		iVar1 = unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F());
		if (iVar1 > -1 && iVar1 < 4)
		{
			if (unk_0x4EE7377FBE72B4BC(Global_18064F[iVar1]))
			{
				switch (unk_0xF9E3B31053F43360(iVar0, Global_18064F[iVar1]))
				{
					case 3:
					case 5:
						return 1;
						break;
					}
				}
			}
	}
	return 0;
}

float func_94()//Position - 0x5B40
{
	if (func_95())
	{
		if ((unk_0xA19D269B4B5A1532(Global_24B2CE.f_2C.f_43) || unk_0x8C1A6E7D5F410F4A(Global_24B2CE.f_2C.f_43)) || Global_24B2CE.f_2C.f_43 == joaat("rhino"))
		{
			return 640f;
		}
		else
		{
			return 320f;
		}
	}
	return 160f;
}

int func_95()//Position - 0x5B9C
{
	if (Global_24B2CE.f_2C.f_41 && !Global_24B2CE.f_2C.f_12D)
	{
		if (!func_85(unk_0xB5CEFD608600A09F()))
		{
			return 1;
		}
	}
	return 0;
}

float func_96()//Position - 0x5BD2
{
	if (func_95())
	{
		if ((unk_0xA19D269B4B5A1532(Global_24B2CE.f_2C.f_43) || unk_0x8C1A6E7D5F410F4A(Global_24B2CE.f_2C.f_43)) || Global_24B2CE.f_2C.f_43 == joaat("rhino"))
		{
			return 320f;
		}
		else
		{
			return 160f;
		}
	}
	return 80f;
}

int func_97(vector3 vParam0, int iParam1, int iParam2, bool bParam3, int iParam4, float fParam5, float fParam6, float fParam7)//Position - 0x5C2E
{
	float fVar0;
	
	fVar0 = iParam4;
	if (bParam3)
	{
		fVar0 = fParam5;
	}
	if ((((fParam5 > 0f && unk_0x38B362A95EA24163(vParam0, fParam5)) || (fVar0 > 0f && unk_0xAE7193AAF1ECF1DB(vParam0, fVar0))) || ((iParam2 == 1 && fParam6 > 0f) && unk_0x85BF1D9693A8E47F(vParam0, fParam6, 0))) || ((iParam1 == 1 && fParam7 > 0f) && unk_0x85BF1D9693A8E47F(vParam0, fParam7, 1)))
	{
		return 1;
	}
	return 0;
}

int func_98(var uParam0, vector3 vParam1, vector3 vParam2, float fParam3)//Position - 0x5CBD
{
	switch (uParam0->f_A)
	{
		case 0:
			if (func_102(*uParam0, uParam0->f_6, vParam1, vParam2, fParam3))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_101(*uParam0, uParam0->f_3, vParam1, vParam2, fParam3))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_99(*uParam0, uParam0->f_3, uParam0->f_6, vParam1, vParam2, fParam3))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_99(vector3 vParam0, vector3 vParam1, float fParam2, vector3 vParam3, vector3 vParam4, float fParam5)//Position - 0x5D49
{
	vector3 vVar0[8];
	int iVar1;
	
	func_100(vParam0, vParam1, fParam2, &vVar0);
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (!unk_0x7352105EC4D7541F(vVar0[iVar1 /*3*/], vParam3, vParam4, fParam5, 0, 1))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

void func_100(vector3 vParam0, vector3 vParam1, float fParam2, var uParam3)//Position - 0x5D9B
{
	vector3 vVar0;
	vector3 vVar1;
	var uVar2;
	var uVar3;
	
	if (vParam0.z == vParam1.z)
	{
		vParam1.z = (vParam1.z + 0.01f);
	}
	vVar0 = { vParam0 - vParam1 };
	vVar1 = { func_22(vVar0, vVar0.x, vVar0.y, 0f) };
	vVar1 = { vVar1 / FtoV(SYSTEM::VMAG(vVar1)) };
	vVar1 = { vVar1 * FtoV((fParam2 * 0.5f)) };
	if (vParam0.z > vParam1.z)
	{
		uVar2 = vParam1.z;
		uVar3 = vParam0.z;
	}
	else
	{
		uVar2 = vParam0.z;
		uVar3 = vParam1.z;
	}
	*(uParam3[0 /*3*/]) = { Vector(uVar2, vParam0.y, vParam0.x) + vVar1 };
	*(uParam3[1 /*3*/]) = { Vector(uVar2, vParam0.y, vParam0.x) - vVar1 };
	*(uParam3[2 /*3*/]) = { Vector(uVar3, vParam0.y, vParam0.x) - vVar1 };
	*(uParam3[3 /*3*/]) = { Vector(uVar3, vParam0.y, vParam0.x) + vVar1 };
	*(uParam3[4 /*3*/]) = { Vector(uVar2, vParam1.y, vParam1.x) + vVar1 };
	*(uParam3[5 /*3*/]) = { Vector(uVar2, vParam1.y, vParam1.x) - vVar1 };
	*(uParam3[6 /*3*/]) = { Vector(uVar3, vParam1.y, vParam1.x) - vVar1 };
	*(uParam3[7 /*3*/]) = { Vector(uVar3, vParam1.y, vParam1.x) + vVar1 };
}

int func_101(vector3 vParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, float fParam4)//Position - 0x5EC8
{
	vector3 vVar0[8];
	int iVar1;
	
	vVar0[0 /*3*/] = { vParam0.x, vParam0.y, vParam0.z };
	vVar0[1 /*3*/] = { vParam0.x, vParam0.y, vParam1.z };
	vVar0[2 /*3*/] = { vParam0.x, vParam1.y, vParam1.z };
	vVar0[3 /*3*/] = { vParam0.x, vParam1.y, vParam0.z };
	vVar0[4 /*3*/] = { vParam1.x, vParam0.y, vParam0.z };
	vVar0[5 /*3*/] = { vParam1.x, vParam0.y, vParam1.z };
	vVar0[6 /*3*/] = { vParam1.x, vParam1.y, vParam1.z };
	vVar0[7 /*3*/] = { vParam1.x, vParam1.y, vParam0.z };
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (!unk_0x7352105EC4D7541F(vVar0[iVar1 /*3*/], vParam2, vParam3, fParam4, 0, 1))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

int func_102(vector3 vParam0, float fParam1, vector3 vParam2, vector3 vParam3, float fParam4)//Position - 0x5F92
{
	vector3 vVar0[4];
	int iVar1;
	
	vVar0[0 /*3*/] = { vParam0 + Vector(0f, fParam1, 0f) };
	vVar0[1 /*3*/] = { vParam0 + Vector(0f, (-1f * fParam1), 0f) };
	vVar0[2 /*3*/] = { vParam0 + Vector(0f, 0f, fParam1) };
	vVar0[3 /*3*/] = { vParam0 + Vector(0f, 0f, (-1f * fParam1)) };
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (!unk_0x7352105EC4D7541F(vVar0[iVar1 /*3*/], vParam2, vParam3, fParam4, 0, 1))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

void func_103(vector3 vParam0, var uParam1, var uParam2, var uParam3)//Position - 0x6016
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	
	vVar1 = { vParam0 };
	iVar2 = func_24(vVar1);
	iVar0 = 0;
	while (iVar0 < Global_24CACB[iVar2])
	{
		if (func_23(vVar1, &(Global_24C653[iVar2 /*127*/][iVar0 /*7*/])))
		{
			*uParam1 = { Global_24C653[iVar2 /*127*/][iVar0 /*7*/] };
			*uParam2 = { Global_24C653[iVar2 /*127*/][iVar0 /*7*/].f_3 };
			*uParam3 = Global_24C653[iVar2 /*127*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_24CACB[8])
	{
		if (func_23(vVar1, &(Global_24C653[8 /*127*/][iVar0 /*7*/])))
		{
			*uParam1 = { Global_24C653[8 /*127*/][iVar0 /*7*/] };
			*uParam2 = { Global_24C653[8 /*127*/][iVar0 /*7*/].f_3 };
			*uParam3 = Global_24C653[8 /*127*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
}

int func_104(vector3 vParam0)//Position - 0x6104
{
	int iVar0;
	int iVar1;
	
	if (Global_24B2CE.f_2C.f_37)
	{
		if (unk_0xBF697FA7422C0621(Global_24B2CE.f_2C.f_38))
		{
			if (!unk_0xB47B61546691E6E3(vParam0))
			{
				iVar0 = unk_0x9911032C958CE1B0(vParam0);
				if (unk_0xBF697FA7422C0621(iVar0))
				{
					iVar1 = unk_0x8481E9D8CEA242E2(iVar0);
					if (!iVar1 == Global_24B2CE.f_2C.f_39)
					{
						return 0;
					}
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
	}
	return 1;
}

int func_105(vector3 vParam0)//Position - 0x616F
{
	switch (Global_24B2CE.f_9A5)
	{
		case 0:
			return func_142(vParam0, Global_24B2CE.f_990, Global_24B2CE.f_993, 0, 0);
			break;
		
		case 1:
			return func_58(vParam0, Global_24B2CE.f_99E, Global_24B2CE.f_9A1, 0, 0);
			break;
		
		case 2:
			return unk_0x7352105EC4D7541F(vParam0, Global_24B2CE.f_99E, Global_24B2CE.f_9A1, Global_24B2CE.f_9A4, 0, 1);
			break;
	}
	return 0;
}

int func_106(vector3 vParam0, var uParam1, var uParam2, float fParam3)//Position - 0x6201
{
	float fVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar3;
	float fVar4;
	
	fVar0 = 0f;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < *uParam1)
	{
		fVar0 = ((uParam1[iVar1 /*4*/])->f_3 + fParam3);
		if (SYSTEM::VDIST(*(uParam1[iVar1 /*4*/]), vParam0) < fVar0)
		{
			return 1;
		}
		iVar1++;
	}
	vVar2 = { 0f, 0f, 0f };
	vVar3 = { 0f, 0f, 0f };
	fVar4 = 0f;
	iVar1 = 0;
	while (iVar1 < *uParam2)
	{
		vVar2 = { *(uParam2[iVar1 /*10*/]) };
		vVar3 = { (uParam2[iVar1 /*10*/])->f_3 };
		fVar4 = (uParam2[iVar1 /*10*/])->f_6;
		if (unk_0x7352105EC4D7541F(vParam0, vVar2, vVar3, fVar4, 0, 1))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_107(var uParam0, var uParam1, bool bParam2, float fParam3)//Position - 0x62AF
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (SYSTEM::VDIST((uParam1[iVar0 /*10*/])->f_7, *uParam0) < (80f * fParam3))
		{
			if (bParam2)
			{
				vVar1 = { *uParam0 };
				func_39(&vVar1, (uParam1[iVar0 /*10*/])->f_7, 80f, 1036831949, 0, 0);
				*uParam0 = { vVar1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_108(int iParam0)//Position - 0x6322
{
	switch (Global_1406BF)
	{
		case 0:
			if (!func_109(iParam0))
			{
				if (Global_18402B[iParam0 /*770*/] == 0)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_109(int iParam0)//Position - 0x6358
{
	return Global_18402B[iParam0 /*770*/].f_C4 != 0;
}

int func_110(int iParam0)//Position - 0x636D
{
	if (func_35(iParam0, 1))
	{
		if (Global_18402B[iParam0 /*770*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_111(vector3 vParam0, float fParam1, int iParam2)//Position - 0x6391
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (SYSTEM::VDIST2(Global_24B2CE.f_A2F[iVar0 /*3*/], vParam0) < (fParam1 * fParam1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_112(var uParam0, bool bParam1)//Position - 0x63CF
{
	var uVar0;
	vector3 vVar1;
	float fVar2;
	
	if (func_42(*uParam0))
	{
		if (bParam1)
		{
			vVar1 = { *uParam0 };
			fVar2 = unk_0x55AEFCD285ECC0F2(0.01f, 360f);
			func_39(&vVar1, Global_24B2CE.f_247, Global_24B2CE.f_24A, 1036831949, 0, fVar2);
			if (func_46(vVar1, &uVar0) || func_42(vVar1))
			{
				vVar1 = { *uParam0 };
				func_39(&vVar1, Global_24B2CE.f_247, Global_24B2CE.f_24A, 1036831949, 1, fVar2);
			}
			*uParam0 = { vVar1 };
		}
	}
	return 0;
}

int func_113(vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)//Position - 0x6467
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_15(unk_0xB5CEFD608600A09F(), 1, 1))
		{
			if (!unk_0x17FAADF9916EF741())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0xF0F2FC9DE291567F(func_114(unk_0xB5CEFD608600A09F()), vParam0, true) <= (fVar2 + fParam1))
				{
					if (unk_0x33CC9445B2DF9387(vParam0, fParam1))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_15(iVar1, 1, 1))
		{
			if (!func_139(iVar1, 0) && unk_0x75206900382D1E30(unk_0xB5CEFD608600A09F(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0xB5CEFD608600A09F()))
				{
					if ((func_73(iVar1) || !bParam8) && !Global_24FB5C[iVar1 /*406*/].f_FF)
					{
						fVar2 = fParam4;
						if (fParam7 > 0f)
						{
							if (!unk_0x343CB262BF0CDF5A(iVar1) == -1)
							{
								if (unk_0x343CB262BF0CDF5A(iVar1) == unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()))
								{
									fVar2 = fParam7;
								}
							}
						}
						if (!bParam5)
						{
							if ((iParam3 || (iParam3 == 0 && unk_0x343CB262BF0CDF5A(iVar1) != unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()))) || unk_0x343CB262BF0CDF5A(iVar1) == -1)
							{
								if (unk_0xF0F2FC9DE291567F(func_114(iVar1), vParam0, true) <= (fVar2 + fParam1))
								{
									if (unk_0xCFC6F6FA0A38CF65(iVar1, vParam0, fParam1))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x343CB262BF0CDF5A(iVar1) != iParam6 || unk_0x343CB262BF0CDF5A(iVar1) == -1)
						{
							if (unk_0xF0F2FC9DE291567F(func_114(iVar1), vParam0, true) <= (fVar2 + fParam1))
							{
								if (unk_0xCFC6F6FA0A38CF65(iVar1, vParam0, fParam1))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

Vector3 func_114(int iParam0)//Position - 0x661E
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_115() && Global_18402B[iVar0 /*770*/].f_2EA) && !func_3(Global_18402B[iVar0 /*770*/].f_2EB))
	{
		return Global_18402B[iVar0 /*770*/].f_2EB;
	}
	return func_77(iParam0);
}

var func_115()//Position - 0x6671
{
	return Global_255A46.f_10;
}

int func_116(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4)//Position - 0x667F
{
	if (func_118(vParam0, fParam1, iParam2, iParam3, 0) || func_117(vParam0, iParam2, iParam4))
	{
		return 1;
	}
	return 0;
}

int func_117(vector3 vParam0, int iParam1, int iParam2)//Position - 0x66B0
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam1 == iVar0 || iParam2 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (!Global_24E35D.f_1AB[iVar0 /*11*/][iVar1 /*5*/].f_4 == 0)
				{
					if (func_26(vParam0, Global_24E35D.f_1AB[iVar0 /*11*/][iVar1 /*5*/], Global_24E35D.f_1AB[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_24E35D.f_1AB[iVar0 /*11*/][iVar1 /*5*/].f_4, 1036831949))
					{
						if (func_15(iVar2, 0, 1) && func_15(iParam1, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_118(vector3 vParam0, float fParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x6772
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam2 == iVar0 || iParam3 == 1)
		{
			iVar1 = iVar0;
			bVar2 = false;
			if (bParam4)
			{
				if (func_15(iVar1, 0, 1) && func_15(iParam2, 0, 1))
				{
					if (unk_0x343CB262BF0CDF5A(iVar1) == unk_0x343CB262BF0CDF5A(iParam2))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_15(iVar1, 0, 1) && func_15(iParam2, 0, 1))
				{
					if (Global_24E35D.f_105[iVar0])
					{
						if (SYSTEM::VDIST(Global_24E35D.f_83[iVar0 /*3*/], vParam0) < fParam1)
						{
							return 1;
						}
					}
					else if (SYSTEM::VDIST(func_77(iVar1), vParam0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_24E35D.f_105[iVar0])
				{
					if (SYSTEM::VDIST(Global_24E35D.f_83[iVar0 /*3*/], vParam0) < fParam1)
					{
						return 1;
					}
				}
				else if (func_15(iVar1, 0, 1))
				{
					if (SYSTEM::VDIST(func_77(iVar1), vParam0) < 1f)
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_119(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11, bool bParam12, bool bParam13)//Position - 0x688F
{
	Global_24B2CE.f_3 = 0;
	if (!func_116(vParam0, 0.5f, unk_0xB5CEFD608600A09F(), 0, 0))
	{
		Global_24B2CE.f_3++;
		if (bParam3)
		{
			if (func_170(vParam0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam4, iParam5, fParam6, bParam13, -1, 1, 0, 0, fParam11, bParam12, 0))
			{
				Global_24B2CE.f_3 = (Global_24B2CE.f_3 + Global_24B2CE.f_2);
				if (!func_123(vParam0, fParam10))
				{
					Global_24B2CE.f_3++;
					if (!func_25(vParam0, 1056964608))
					{
						Global_24B2CE.f_3++;
						return 1;
					}
				}
			}
			else
			{
				Global_24B2CE.f_3 = (Global_24B2CE.f_3 + Global_24B2CE.f_2);
			}
		}
		else if (!bParam2)
		{
			if (func_170(vParam0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam4, iParam5, fParam6, bParam13, -1, 1, 0, 0, fParam11, bParam12, 0))
			{
				Global_24B2CE.f_3 = (Global_24B2CE.f_3 + Global_24B2CE.f_2);
				if (!func_123(vParam0, fParam10))
				{
					Global_24B2CE.f_3++;
					if (!func_120(vParam0, fParam1, fParam7, fParam8, 1084227584))
					{
						Global_24B2CE.f_3++;
						if (!func_25(vParam0, 1056964608))
						{
							Global_24B2CE.f_3++;
							return 1;
						}
					}
				}
			}
			else
			{
				Global_24B2CE.f_3 = (Global_24B2CE.f_3 + Global_24B2CE.f_2);
			}
		}
		else if (func_170(vParam0, 6f, 5f, 5f, 5f, 0, bParam4, iParam5, fParam6, bParam13, -1, 1, 0, 0, fParam11, bParam12, 0))
		{
			Global_24B2CE.f_3 = (Global_24B2CE.f_3 + Global_24B2CE.f_2);
			if (!func_123(vParam0, fParam10))
			{
				Global_24B2CE.f_3++;
				if (!func_120(vParam0, fParam1, fParam7, fParam8, fParam9))
				{
					Global_24B2CE.f_3++;
					if (!func_25(vParam0, 1056964608))
					{
						Global_24B2CE.f_3++;
						return 1;
					}
				}
			}
		}
		else
		{
			Global_24B2CE.f_3 = (Global_24B2CE.f_3 + Global_24B2CE.f_2);
		}
	}
	return 0;
}

int func_120(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4)//Position - 0x6ACF
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (!unk_0xB5CEFD608600A09F() == iVar1)
		{
			if ((func_15(iVar1, 1, 1) && func_73(iVar1)) && unk_0x75206900382D1E30(unk_0xB5CEFD608600A09F(), iVar1))
			{
				if (!func_122(unk_0xB5CEFD608600A09F(), iVar1, -2, 0))
				{
					if (func_121(func_77(iVar1), vParam0, fParam1, fParam2, fParam3, fParam4))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_121(vector3 vParam0, vector3 vParam1, float fParam2, float fParam3, float fParam4, float fParam5)//Position - 0x6B4E
{
	vector3 vVar0;
	vector3 vVar1;
	
	fParam2 = (fParam2 * -1f);
	fParam2 = (fParam2 + 360f);
	vVar0.x = SYSTEM::SIN(fParam2);
	vVar0.y = SYSTEM::COS(fParam2);
	vVar0.z = 0f;
	vVar0 = { vVar0 / FtoV(SYSTEM::VMAG(vVar0)) };
	vVar0 = { vVar0 * Vector(fParam3, fParam3, fParam3) };
	vVar1 = { vParam1 + vVar0 };
	vVar1.z = vParam1.z;
	vVar1.z = (vVar1.z + fParam5);
	vParam1.z = (vParam1.z + fParam5);
	return unk_0x7352105EC4D7541F(vParam0, vParam1, vVar1, fParam4, 0, 1);
}

bool func_122(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x6BDA
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x343CB262BF0CDF5A(iParam0) == -1 && unk_0x343CB262BF0CDF5A(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x343CB262BF0CDF5A(iParam0) == unk_0x343CB262BF0CDF5A(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x343CB262BF0CDF5A(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x343CB262BF0CDF5A(iParam0) == iParam2;
	}
	return unk_0x343CB262BF0CDF5A(iParam0) == iParam2;
}

int func_123(vector3 vParam0, float fParam1)//Position - 0x6C52
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((func_15(iVar1, 1, 1) && func_73(iVar1)) && unk_0x75206900382D1E30(unk_0xB5CEFD608600A09F(), iVar1))
		{
			if ((unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()) == -1 && unk_0x343CB262BF0CDF5A(iVar1) == -1) && !func_55(unk_0xB5CEFD608600A09F(), 1))
			{
				return 0;
			}
			else if ((unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()) == -1 && !unk_0xB5CEFD608600A09F() == iVar1) || !func_122(unk_0xB5CEFD608600A09F(), iVar1, -2, 0))
			{
				if (SYSTEM::VDIST(vParam0, func_77(iVar1)) < fParam1)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_124(int iParam0)//Position - 0x6D0E
{
	if ((Global_24B2CE.f_1E2 == 9 || Global_24B2CE.f_1E2 == 9) || (Global_24B2CE.f_1E2 == 15 && iParam0 == 1))
	{
		return 1;
	}
	return 0;
}

int func_125(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, int iParam7)//Position - 0x6D51
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && unk_0xB5CEFD608600A09F() != iVar1) || iParam6 == 0)
		{
			if (func_15(iVar1, bParam2, bParam3))
			{
				if (unk_0x75206900382D1E30(unk_0xB5CEFD608600A09F(), iVar1))
				{
					if (!bParam5 || (!unk_0x36CEFBE9B745A58D(unk_0xA95CF30C72EB526E(iVar1)) && func_73(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()) != unk_0x343CB262BF0CDF5A(iVar1))) || unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()) == -1)
						{
							if (((unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()) == -1 && iParam7) && bParam4) && func_79(iVar1))
							{
							}
							else if (unk_0x724D816EA203A79E(unk_0xA95CF30C72EB526E(iVar1)))
							{
								if (unk_0xF0F2FC9DE291567F(func_77(iVar1), vParam0, true) < fParam1)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_126(vector3 vParam0, float fParam1, int iParam2, float fParam3)//Position - 0x6E4D
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F());
	if (!iVar3 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = iVar0;
			if (func_15(iVar1, 1, 1))
			{
				if ((!func_139(iVar1, 0) && unk_0x75206900382D1E30(unk_0xB5CEFD608600A09F(), iVar1)) && iVar1 != unk_0xB5CEFD608600A09F())
				{
					fVar2 = iParam2;
					if (fParam3 > 0f)
					{
						if (!unk_0x343CB262BF0CDF5A(iVar1) == -1)
						{
							if (unk_0x343CB262BF0CDF5A(iVar1) == unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()))
							{
								fVar2 = fParam3;
							}
						}
					}
					if (unk_0x343CB262BF0CDF5A(iVar1) == iVar3)
					{
						if (unk_0xF0F2FC9DE291567F(func_77(iVar1), vParam0, true) <= (fVar2 + fParam1))
						{
							if (unk_0xCFC6F6FA0A38CF65(iVar1, vParam0, fParam1))
							{
								return 1;
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_127(int iParam0)//Position - 0x6F12
{
	if (((func_55(iParam0, 1) || func_130(iParam0)) || func_129(iParam0, 0)) || func_128(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_128(int iParam0)//Position - 0x6F4E
{
	if (!func_15(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_18402B[iParam0 /*770*/].f_23;
}

int func_129(int iParam0, int iParam1)//Position - 0x6F71
{
	if (Global_18C80F[iParam0 /*558*/].f_B.f_21 != -1 || (iParam1 && Global_18C80F[iParam0 /*558*/].f_B.f_20 != -1))
	{
		return 1;
	}
	return 0;
}

int func_130(int iParam0)//Position - 0x6FAC
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_18C80F[iVar0 /*558*/] != -1;
	}
	return 0;
}

void func_131(vector3 vParam0, var uParam1, var uParam2)//Position - 0x6FCD
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	struct<8> Var3;
	vector3 vVar4;
	vector3 vVar5;
	
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		*(uParam1[iVar0 /*4*/]) = { Var2 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		*(uParam2[iVar0 /*10*/]) = { Var3 };
		iVar0++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1403FD)
	{
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (!unk_0xFA30DFD0084E92FE(Global_2401A9[iVar1 /*26*/].f_C, 11))
			{
				if (SYSTEM::VMAG(*(uParam1[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_2401A9[iVar1 /*26*/].f_3, vParam0) < SYSTEM::VDIST(*(uParam1[iVar0 /*4*/]), vParam0))
				{
					Var2 = { Global_2401A9[iVar1 /*26*/].f_3 };
					Var2.f_3 = Global_2401A9[iVar1 /*26*/].f_6.f_2;
					func_133(&Var2, uParam1, iVar0);
					iVar0 = *uParam1;
				}
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1403DA)
	{
		iVar0 = 0;
		while (iVar0 < *uParam2)
		{
			vVar4 = { Global_140131[iVar1 /*8*/].f_1 + Global_140131[iVar1 /*8*/].f_4 * Vector(0.5f, 0.5f, 0.5f) };
			vVar5 = { *(uParam2[iVar0 /*10*/]) + (uParam2[iVar0 /*10*/])->f_3 * Vector(0.5f, 0.5f, 0.5f) };
			if (SYSTEM::VMAG(*(uParam2[iVar0 /*10*/])) == 0f || SYSTEM::VDIST(vVar4, vParam0) < SYSTEM::VDIST(vVar5, vParam0))
			{
				Var3 = { Global_140131[iVar1 /*8*/].f_1 };
				Var3.f_3 = { Global_140131[iVar1 /*8*/].f_4 };
				Var3.f_6 = Global_140131[iVar1 /*8*/].f_7;
				Var3.f_7 = { Global_240065[iVar1 /*3*/] };
				func_132(&Var3, uParam2, iVar0);
				iVar0 = *uParam2;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_132(var uParam0, var uParam1, int iParam2)//Position - 0x71B5
{
	Global_24CEB1 = { *(uParam1[iParam2 /*10*/]) };
	*(uParam1[iParam2 /*10*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_132(&Global_24CEB1, uParam1, iParam2 + 1);
	}
}

void func_133(var uParam0, var uParam1, int iParam2)//Position - 0x71F3
{
	Global_24CEAD = { *(uParam1[iParam2 /*4*/]) };
	*(uParam1[iParam2 /*4*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_133(&Global_24CEAD, uParam1, iParam2 + 1);
	}
}

void func_134(var uParam0, var uParam1)//Position - 0x722D
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	
	if (Global_24B2CE.f_8C4 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_24B2CE.f_8C4)
		{
			if (func_135(Global_24B2CE.f_8C5[iVar0 /*4*/], uParam0))
			{
				fVar2 = Global_24B2CE.f_8C5[iVar0 /*4*/].f_3;
				if (SYSTEM::VMAG(*uParam1) > 0.01f)
				{
					vVar1 = { *uParam1 - Global_24B2CE.f_8C5[iVar0 /*4*/] };
					fVar2 = unk_0xFDC254CE02DB0919(vVar1.x, vVar1.y);
				}
				func_70(Global_24B2CE.f_8C5[iVar0 /*4*/], fVar2, uParam0, uParam1, 0, -1);
				Global_24B2CE.f_9A9++;
			}
			iVar0++;
		}
	}
	if (uParam0->f_5 && Global_24B2CE.f_B34)
	{
		func_64(&(Global_24B2CE.f_9A9.f_6[0 /*10*/]), &(Global_24B2CE.f_9A9.f_6[1 /*10*/]), &(Global_24B2CE.f_9A9.f_6[2 /*10*/]));
	}
}

int func_135(vector3 vParam0, var uParam1)//Position - 0x731A
{
	switch (uParam1->f_7)
	{
		case 0:
			return func_12(vParam0, uParam1->f_7, *uParam1, 0f, 0f, 0f, uParam1->f_4);
		
		case 1:
		case 2:
			return func_12(vParam0, uParam1->f_7, uParam1->f_8, uParam1->f_B, uParam1->f_E);
		
		default:
	}
	return 0;
}

void func_136(vector3 vParam0, vector3 vParam1, var uParam2, var uParam3, var uParam4)//Position - 0x7377
{
	float fVar0;
	
	func_59(&vParam0, &vParam1);
	fVar0 = (vParam1.x - vParam0.x);
	*uParam2 = (vParam0.x + (fVar0 * 0.5f));
	uParam2->f_1 = vParam0.y;
	uParam2->f_2 = vParam0.z;
	*uParam3 = *uParam2;
	uParam3->f_1 = vParam1.y;
	uParam3->f_2 = vParam1.z;
	*uParam4 = (fVar0 * 0.5f);
}

var func_137()//Position - 0x73CD
{
	return Global_14010B.f_4;
}

void func_138(var uParam0, var uParam1)//Position - 0x73DB
{
	func_177();
	func_169(uParam0, uParam1);
}

bool func_139(int iParam0, int iParam1)//Position - 0x73EF
{
	bool bVar0;
	
	if (iParam0 == unk_0xB5CEFD608600A09F())
	{
		bVar0 = func_140(-1, 0) == 8;
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

int func_140(int iParam0, bool bParam1)//Position - 0x743A
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_141();
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

int func_141()//Position - 0x747B
{
	return Global_1407E0;
}

bool func_142(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3, bool bParam4)//Position - 0x7487
{
	if (bParam3 && bParam4)
	{
		vParam0.z = 0f;
		vParam1.z = 0f;
		return SYSTEM::VDIST(vParam0, vParam1) < (fParam2 + 0.01f);
	}
	else if (bParam3)
	{
		if (vParam0.z > vParam1.z)
		{
			vParam0.z = vParam1.z;
		}
		return SYSTEM::VDIST(vParam0, vParam1) < (fParam2 + 0.01f);
	}
	else if (bParam4)
	{
		if (vParam0.z < vParam1.z)
		{
			vParam0.z = vParam1.z;
		}
		return SYSTEM::VDIST(vParam0, vParam1) < (fParam2 + 0.01f);
	}
	return SYSTEM::VDIST(vParam0, vParam1) < (fParam2 + 0.01f);
}

void func_143(var uParam0, var uParam1, var uParam2)//Position - 0x753A
{
	if (Global_24B2CE.f_6C8 > 0 && func_165(uParam0, uParam1, uParam2))
	{
	}
	else
	{
		func_144(uParam0, uParam1, uParam2);
	}
}

void func_144(var uParam0, var uParam1, var uParam2)//Position - 0x756A
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	bool bVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	float fVar20;
	int iVar21;
	int iVar22;
	float fVar23;
	int iVar24;
	vector3 vVar25;
	var uVar26;
	vector3 vVar27;
	float fVar28;
	bool bVar29;
	
	iVar0 = 0;
	if (!SYSTEM::VMAG(uParam2->f_23) > 0f)
	{
		uParam2->f_23 = { *uParam0 };
	}
	if (uParam2->f_F)
	{
		if (func_38(uParam2->f_23, uParam0, &(uParam2->f_26), &(uParam2->f_2D), 1, 1))
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
	}
	if (uParam2->f_33)
	{
		uParam2->f_6 = 9999.9f;
	}
	if (uParam2->f_30)
	{
		if (func_164(uParam0, 1))
		{
		}
	}
	if (uParam0->f_2 < -80f)
	{
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
	}
	iVar3 = 0;
	iVar8 = 1;
	if (uParam2->f_B)
	{
		iVar3 += 2;
		iVar3++;
		iVar8 = 0;
	}
	else if (uParam2->f_A == 0 || (uParam2->f_21 > 0 && uParam2->f_10))
	{
		iVar3++;
		iVar8 = 0;
	}
	iVar3 += 4;
	fVar11 = 3f;
	fVar12 = 5f;
	switch (uParam2->f_21)
	{
		case 0:
			fVar11 = 3f;
			fVar12 = 5f;
			break;
		
		case 1:
			fVar11 = 2.75f;
			fVar12 = 7.5f;
			break;
		
		default:
			fVar11 = 2.5f;
			fVar12 = 10f;
			break;
	}
	iVar13 = 0;
	Global_24CEBB.f_A2 = 0;
	Global_24CEBB.f_A3 = 0;
	Global_24CEBB.f_A4 = -99;
	Global_24CEBB.f_A5 = { 0f, 0f, 0f };
	iVar14 = 0;
	while (iVar14 < 40)
	{
		Global_24CEBB[iVar14 /*3*/] = { 0f, 0f, 0f };
		Global_24CEBB.f_79[iVar14] = 0f;
		iVar14++;
	}
	iVar15 = 1;
	if (func_31(uParam2->f_22) != 0)
	{
		iVar15 = 3;
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
		uParam2->f_12 = 0;
	}
	while (true)
	{
		iVar6 = unk_0x2E0AE46DCB1D97E5(*uParam0, (iVar0 * iVar15), &fVar2, &iVar7, iVar3, fVar11, fVar12);
		if (unk_0x7A0512982A9448C2(iVar6))
		{
			unk_0x2487DB62997A4150(iVar6, &vVar1);
			bVar10 = false;
			if (Global_24CEBB.f_A4 == iVar6)
			{
				bVar10 = true;
			}
			Global_24CEBB.f_A5 = { vVar1 };
			if (((uParam2->f_A || uParam2->f_21 > 0) || !unk_0x6F0339DC0CD61C94(iVar6)) || unk_0x77F84A8EA1958F2B(iVar6))
			{
				unk_0x7834AEB00A32C3DF(vVar1, &uVar4, &uVar5);
				if (SYSTEM::VDIST(vVar1, uParam2->f_23) > uParam2->f_4)
				{
					if (!func_112(&vVar1, 0))
					{
						if ((uParam2->f_D || uVar5 & 64 == 0) || uParam2->f_21 == 1)
						{
							if (uParam2->f_E || uVar5 & 16 == 0)
							{
								if ((uVar5 & 128 == 0 && uVar5 & 256 == 0) && uVar5 & 512 == 0)
								{
									if (!func_163(vVar1))
									{
										vVar1 = { func_159(vVar1, &fVar2, iVar7, uParam2->f_9, *uParam2, iVar8, uParam2->f_B, uParam2->f_22, &bVar9, bVar10, 1, uParam2->f_33) };
										if (SYSTEM::VMAG(vVar1) > 0f)
										{
											if (!func_25(vVar1, 5f))
											{
												if (vVar1.z >= (uParam2->f_23.f_2 - uParam2->f_7) || uParam2->f_21 >= 2)
												{
													if (vVar1.z <= (uParam2->f_23.f_2 + uParam2->f_6) || uParam2->f_21 >= 2)
													{
														if (func_158(vVar1, uParam2))
														{
															if ((uParam2->f_30 && !func_164(&vVar1, 0)) || uParam2->f_30 == 0)
															{
																bVar16 = true;
																if (!bVar10)
																{
																	if (bVar9)
																	{
																		iVar0 = (iVar0 + -1);
																		bVar16 = false;
																	}
																}
																if (SYSTEM::VMAG(vVar1) > 0f)
																{
																	if (((uParam2->f_5 > 0f && SYSTEM::VDIST(vVar1.x, vVar1.y, 0f, uParam2->f_23, uParam2->f_23.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f) || uParam2->f_21 >= 2)
																	{
																		if ((uParam2->f_C && !func_154(vVar1, fVar2, uParam2->f_22, unk_0xB5CEFD608600A09F(), 0, uParam2->f_38)) || !uParam2->f_C)
																		{
																			if (!uParam2->f_F || !func_38(uParam2->f_23, &vVar1, &(uParam2->f_26), &(uParam2->f_2D), 0, 1))
																			{
																				if (uParam2->f_8)
																				{
																					iVar17 = uParam2->f_1F;
																					bVar18 = true;
																					iVar19 = 1;
																					fVar20 = uParam2->f_31;
																					if (!uParam2->f_37)
																					{
																						iVar17 = 0;
																						bVar18 = false;
																						iVar19 = 0;
																						fVar20 = 1f;
																					}
																					else if (uParam2->f_11)
																					{
																						iVar17 = 0;
																						bVar18 = false;
																						iVar19 = 0;
																						if (uParam2->f_21 == 1)
																						{
																							fVar20 = (fVar20 * 0.375f);
																						}
																					}
																					else
																					{
																						bVar18 = true;
																						iVar19 = 1;
																						if (uParam2->f_1C)
																						{
																							if (uParam2->f_21 == 1)
																							{
																								fVar20 = (fVar20 * 0.375f);
																							}
																						}
																					}
																					iVar21 = 0;
																					if (!func_153(vVar1, fVar2, uParam2->f_22))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (func_170(vVar1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_3A, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar21 = 1;
																							}
																						}
																						else if (func_170(vVar1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_3A, -1, 1, 0f, 0, 0, 0, 0) && !func_151(vVar1, fVar2, uParam2->f_22, 1, 1, 0, 0, 0, 0))
																						{
																							iVar21 = 1;
																						}
																					}
																					if (iVar21 || uParam2->f_21 >= 2)
																					{
																						if (((uParam2->f_1D || uParam2->f_1E) || uParam2->f_34) || uParam2->f_21 >= 2)
																						{
																							fVar23 = 0f;
																							if (uParam2->f_34)
																							{
																								iVar22 = func_150(vVar1, uParam2->f_36, &fVar23);
																							}
																							if (!uParam2->f_34 || (uParam2->f_34 && iVar22 <= uParam2->f_35))
																							{
																								if (uParam2->f_34)
																								{
																									if (iVar22 < uParam2->f_35)
																									{
																										iVar14 = 0;
																										while (iVar14 < Global_24CEBB.f_A2)
																										{
																											Global_24CEBB[iVar14 /*3*/] = { 0f, 0f, 0f };
																											Global_24CEBB.f_79[iVar14] = 0f;
																											iVar14++;
																										}
																										Global_24CEBB.f_A2 = 0;
																										uParam2->f_35 = iVar22;
																									}
																								}
																								if (uParam2->f_1E)
																								{
																									if (Global_24CEBB.f_A2 == 0)
																									{
																										Global_24CEBB[0 /*3*/] = { vVar1 };
																										Global_24CEBB.f_79[0] = fVar2;
																									}
																									else
																									{
																										iVar14 = 0;
																										while (iVar14 < Global_24CEBB.f_A2 + 1)
																										{
																											if (iVar14 < 40)
																											{
																												if (SYSTEM::VDIST2(vVar1, uParam2->f_23) < SYSTEM::VDIST2(Global_24CEBB[iVar14 /*3*/], uParam2->f_23))
																												{
																													func_149(vVar1, fVar2, iVar14);
																													iVar14 = Global_24CEBB.f_A2 + 1;
																												}
																											}
																											iVar14++;
																										}
																									}
																									Global_24CEBB.f_A2++;
																									if (Global_24CEBB.f_A2 >= 5)
																									{
																										if ((uParam2->f_34 && uParam2->f_35 == 0) || uParam2->f_34 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_24CEBB.f_A2 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																								else
																								{
																									Global_24CEBB[Global_24CEBB.f_A2 /*3*/] = { vVar1 };
																									Global_24CEBB.f_79[Global_24CEBB.f_A2] = fVar2;
																									Global_24CEBB.f_A2++;
																									if (func_158(vVar1, uParam2))
																									{
																										Global_24CEBB.f_A3++;
																									}
																									if (Global_24CEBB.f_A2 >= 10)
																									{
																										if ((uParam2->f_34 && uParam2->f_35 == 0) || uParam2->f_34 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_24CEBB.f_A2 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							*uParam0 = { vVar1 };
																							*uParam1 = fVar2;
																							return;
																						}
																					}
																					else if (bVar16)
																					{
																						iVar0++;
																					}
																				}
																				else
																				{
																					*uParam0 = { vVar1 };
																					*uParam1 = fVar2;
																					return;
																				}
																			}
																		}
																		else
																		{
																			iVar13++;
																		}
																	}
																	else
																	{
																		iVar0 = 100;
																	}
																}
															}
															else
															{
																iVar0++;
															}
														}
														else if (!uParam2->f_20)
														{
															iVar0 = 100;
														}
													}
													else
													{
														iVar0++;
													}
												}
												else
												{
													iVar0++;
												}
											}
										}
									}
									else
									{
										iVar0++;
									}
								}
							}
							else
							{
								iVar0++;
							}
						}
						else
						{
							iVar0++;
						}
					}
					else
					{
						iVar13++;
					}
				}
				else
				{
					iVar13++;
				}
			}
			iVar0++;
			if (iVar0 >= (40 + iVar13) || iVar0 >= 100)
			{
				if (Global_24CEBB.f_A2 > 0 && ((uParam2->f_1D || uParam2->f_1E) || uParam2->f_21 >= 2))
				{
					if (uParam2->f_1E)
					{
						*uParam0 = { Global_24CEBB[0 /*3*/] };
						*uParam1 = Global_24CEBB.f_79[0];
						return;
					}
					else
					{
						if (Global_24CEBB.f_A3 > 0 && !Global_24CEBB.f_A3 == Global_24CEBB.f_A2)
						{
							func_147(0, uParam2);
						}
						iVar24 = unk_0x491B2241281A03B7(0, Global_24CEBB.f_A2);
						if (uParam2->f_12 && uParam2->f_1E)
						{
							iVar24 = 0;
						}
						vVar25 = { Global_24CEBB[0 /*3*/] };
						uVar26 = Global_24CEBB.f_79[0];
						Global_24CEBB[0 /*3*/] = { Global_24CEBB[iVar24 /*3*/] };
						Global_24CEBB.f_79[0] = Global_24CEBB.f_79[iVar24];
						Global_24CEBB[iVar24 /*3*/] = { vVar25 };
						Global_24CEBB.f_79[iVar24] = uVar26;
						*uParam0 = { Global_24CEBB[0 /*3*/] };
						*uParam1 = Global_24CEBB.f_79[0];
						return;
					}
				}
				else
				{
					uParam2->f_21++;
					if (uParam2->f_21 < 3)
					{
						func_144(uParam0, uParam1, uParam2);
						return;
					}
					else
					{
						func_146(iVar13, *uParam0, &iVar0, &vVar1, &fVar2, uParam2, iVar8, iVar7, iVar3, fVar11, fVar12, bVar9);
						vVar27 = { vVar1 };
						fVar28 = fVar2;
						if (!uParam2->f_32)
						{
							bVar29 = true;
						}
						else
						{
							bVar29 = false;
						}
						if (func_38(uParam2->f_23, &vVar27, &(uParam2->f_26), &(uParam2->f_2D), bVar29, 1) || func_164(&vVar27, bVar29))
						{
							if (!uParam2->f_32)
							{
								uParam2->f_21 = 0;
								uParam2->f_32 = 1;
								*uParam0 = { vVar27 };
								*uParam1 = fVar28;
								uParam2->f_6 = 9999.9f;
								uParam2->f_7 = 9999.9f;
								func_144(uParam0, uParam1, uParam2);
								return;
							}
							else
							{
								*uParam0 = { vVar27 };
								*uParam1 = fVar28;
								return;
							}
						}
						else
						{
							*uParam0 = { vVar27 };
							*uParam1 = fVar28;
							return;
						}
					}
				}
			}
		}
		else
		{
			uParam2->f_21++;
			if (uParam2->f_21 < 3)
			{
				func_144(uParam0, uParam1, uParam2);
				return;
			}
			else
			{
				func_145(&Global_14053D, uParam0, uParam1, *uParam0);
				if (uParam2->f_B)
				{
					uParam2->f_1B = 1;
				}
				return;
			}
		}
		Global_24CEBB.f_A4 = iVar6;
	}
}

void func_145(var uParam0, var uParam1, var uParam2, vector3 vParam3)//Position - 0x7FA7
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 1E+09f;
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < *uParam0)
	{
		fVar1 = SYSTEM::VDIST(*(uParam0[iVar2 /*4*/]), vParam3);
		if (fVar1 < fVar0)
		{
			if (!func_116(*(uParam0[iVar2 /*4*/]), 5f, unk_0xB5CEFD608600A09F(), 0, 0))
			{
				fVar0 = fVar1;
				iVar3 = iVar2;
			}
		}
		iVar2++;
	}
	if (!iVar3 == -1)
	{
		*uParam1 = { *(uParam0[iVar3 /*4*/]) };
		*uParam2 = (uParam0[iVar3 /*4*/])->f_3;
	}
}

void func_146(int iParam0, vector3 vParam1, int iParam2, var uParam3, float fParam4, var uParam5, int iParam6, int iParam7, int iParam8, float fParam9, float fParam10, bool bParam11)//Position - 0x802C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		*iParam2 = unk_0x491B2241281A03B7((1 + iParam0), (40 + iParam0));
		unk_0xF1893A29A79EED3B(vParam1, *iParam2, uParam3, fParam4, &iParam7, iParam8, fParam9, fParam10);
		*uParam3 = { func_159(*uParam3, fParam4, iParam7, uParam5->f_9, *uParam5, iParam6, uParam5->f_B, uParam5->f_22, &bParam11, 0, 0, uParam5->f_33) };
		if (!func_163(*uParam3))
		{
			iVar0 = 999;
			return;
		}
		iVar0++;
	}
}

void func_147(int iParam0, var uParam1)//Position - 0x80B0
{
	if (!func_158(Global_24CEBB[iParam0 /*3*/], uParam1))
	{
		Global_24CEBB.f_A2 = (Global_24CEBB.f_A2 - 1);
		func_148(iParam0);
		if (Global_24CEBB.f_A2 > Global_24CEBB.f_A3)
		{
			func_147(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_147(iParam0 + 1, uParam1);
	}
}

void func_148(int iParam0)//Position - 0x810B
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_24CEBB[iParam0 /*3*/] = { Global_24CEBB[iParam0 + 1 /*3*/] };
			Global_24CEBB.f_79[iParam0] = Global_24CEBB.f_79[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_149(vector3 vParam0, float fParam1, int iParam2)//Position - 0x8156
{
	vector3 vVar0;
	var uVar1;
	
	vVar0 = { Global_24CEBB[iParam2 /*3*/] };
	uVar1 = Global_24CEBB.f_79[iParam2];
	Global_24CEBB[iParam2 /*3*/] = { vParam0 };
	Global_24CEBB.f_79[iParam2] = fParam1;
	if (iParam2 <= Global_24CEBB.f_A2 && iParam2 < 39)
	{
		if (SYSTEM::VMAG(vVar0) > 0f)
		{
			func_149(vVar0, uVar1, iParam2 + 1);
		}
	}
}

int func_150(vector3 vParam0, float fParam1, float fParam2)//Position - 0x81C3
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	
	fVar4 = 99999.9f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar3 = iVar0;
		if (func_78(iVar3))
		{
			vVar1 = { func_77(iVar3) };
			fVar5 = SYSTEM::VDIST(vParam0, vVar1);
			if (fVar5 < fParam1)
			{
				if (fVar5 < fVar4)
				{
					fVar4 = fVar5;
				}
				iVar2++;
			}
		}
		iVar0++;
	}
	*fParam2 = fVar4;
	return iVar2;
}

int func_151(vector3 vParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)//Position - 0x822B
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	float fVar6;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam7 == 1 && unk_0xB5CEFD608600A09F() != iVar1) || iParam7 == 0)
		{
			if (func_15(iVar1, bParam3, bParam4))
			{
				if (unk_0x75206900382D1E30(unk_0xB5CEFD608600A09F(), iVar1))
				{
					if (!bParam6 || (!unk_0x36CEFBE9B745A58D(unk_0xA95CF30C72EB526E(iVar1)) && func_73(iVar1)))
					{
						if ((!bParam5 || (bParam5 == 1 && unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()) != unk_0x343CB262BF0CDF5A(iVar1))) || unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()) == -1)
						{
							if (((unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()) == -1 && iParam8) && bParam5) && func_79(iVar1))
							{
							}
							else if (unk_0x724D816EA203A79E(unk_0xA95CF30C72EB526E(iVar1)))
							{
								fVar2 = 0.1f;
								if (unk_0x5237AF95232D78C5(unk_0xA95CF30C72EB526E(iVar1), 0))
								{
									iVar3 = unk_0x9FE9D386222EEE47(unk_0xA95CF30C72EB526E(iVar1), 0);
									if (unk_0x724D816EA203A79E(iVar3) && !unk_0x1D403DFADBC2DE3C(iVar3, 0))
									{
										iVar4 = unk_0x6F79ECA8C83E4357(iVar3);
										vVar5 = { unk_0x541C2AEF053615BC(iVar3, 0) };
										fVar6 = unk_0x349C94FFF43E2979(iVar3);
										if (func_152(vParam0, fParam1, iParam2, vVar5, fVar6, iVar4, 0))
										{
											return 1;
										}
									}
									else
									{
										fVar2 = 5f;
									}
								}
								if (func_26(func_77(iVar1), vParam0, fParam1, iParam2, fVar2))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_152(vector3 vParam0, float fParam1, int iParam2, vector3 vParam3, float fParam4, int iParam5, bool bParam6)//Position - 0x839E
{
	int iVar0;
	vector3 vVar1[4];
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	
	if (func_26(vParam0, vParam3, fParam4, iParam5, 1036831949))
	{
		return 1;
	}
	func_28(iParam2, &vVar2, &vVar3, 1086324736, 1080033280, 1077936128);
	vVar4 = { 0f, vVar3.y, 0f };
	func_33(&vVar4, 0f, 0f, fParam1);
	vVar5 = { 0f, vVar2.y, 0f };
	func_33(&vVar5, 0f, 0f, fParam1);
	vVar6 = { (unk_0x357058E632979E65((vVar3.x - vVar2.x)) * 0.5f), 0f, 0f };
	func_33(&vVar6, 0f, 0f, fParam1);
	vVar1[0 /*3*/] = { vParam0 + vVar4 + vVar6 };
	vVar1[0 /*3*/].f_2 = (vVar1[0 /*3*/].f_2 + (0.5f * unk_0x357058E632979E65((vVar3.z - vVar2.z))));
	vVar1[1 /*3*/] = { vParam0 + vVar4 - vVar6 };
	vVar1[1 /*3*/].f_2 = (vVar1[1 /*3*/].f_2 + (0.5f * unk_0x357058E632979E65((vVar3.z - vVar2.z))));
	vVar1[2 /*3*/] = { vParam0 + vVar5 + vVar6 };
	vVar1[2 /*3*/].f_2 = (vVar1[2 /*3*/].f_2 + (0.5f * unk_0x357058E632979E65((vVar3.z - vVar2.z))));
	vVar1[3 /*3*/] = { vParam0 + vVar5 - vVar6 };
	vVar1[3 /*3*/].f_2 = (vVar1[3 /*3*/].f_2 + (0.5f * unk_0x357058E632979E65((vVar3.z - vVar2.z))));
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_26(vVar1[iVar0 /*3*/], vParam3, fParam4, iParam5, 1036831949))
		{
			return 1;
		}
		iVar0++;
	}
	if (!bParam6)
	{
		if (func_152(vParam3, fParam4, iParam5, vParam0, fParam1, iParam2, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_153(vector3 vParam0, float fParam1, int iParam2)//Position - 0x8558
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	float fVar4;
	
	iVar0 = 1;
	iVar0 += 2;
	iVar0 += 4;
	iVar0 += 8;
	iVar0 += 16;
	iVar0 += 32;
	iVar0 += 64;
	iVar0 = (iVar0 + 131076);
	iVar1 = unk_0x39827CF9BEAB804C(vParam0, 30f, 0, iVar0);
	if (unk_0x724D816EA203A79E(iVar1) && !unk_0x1D403DFADBC2DE3C(iVar1, 0))
	{
		iVar2 = unk_0x6F79ECA8C83E4357(iVar1);
		vVar3 = { unk_0x541C2AEF053615BC(iVar1, 0) };
		fVar4 = unk_0x349C94FFF43E2979(iVar1);
		if (func_152(vParam0, fParam1, iParam2, vVar3, fVar4, iVar2, 0))
		{
			return 1;
		}
	}
	iVar0 += 4096;
	iVar0 += 8192;
	iVar0 += 16384;
	iVar1 = unk_0x39827CF9BEAB804C(vParam0, 30f, 0, iVar0);
	if (unk_0x724D816EA203A79E(iVar1) && !unk_0x1D403DFADBC2DE3C(iVar1, 0))
	{
		iVar2 = unk_0x6F79ECA8C83E4357(iVar1);
		vVar3 = { unk_0x541C2AEF053615BC(iVar1, 0) };
		fVar4 = unk_0x349C94FFF43E2979(iVar1);
		if (func_152(vParam0, fParam1, iParam2, vVar3, fVar4, iVar2, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_154(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x8664
{
	if (func_157(vParam0, fParam1, iParam2, iParam3, iParam4) || func_155(vParam0, fParam1, iParam2, iParam3, iParam5))
	{
		return 1;
	}
	return 0;
}

int func_155(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4)//Position - 0x869A
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (func_156(vParam0, iParam2, Global_24E35D.f_1AB[iVar0 /*11*/][iVar1 /*5*/], Global_24E35D.f_1AB[iVar0 /*11*/][iVar1 /*5*/].f_4))
				{
					if (func_152(vParam0, fParam1, iParam2, Global_24E35D.f_1AB[iVar0 /*11*/][iVar1 /*5*/], Global_24E35D.f_1AB[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_24E35D.f_1AB[iVar0 /*11*/][iVar1 /*5*/].f_4, 0))
					{
						if (func_15(iVar2, 0, 1) && func_15(iParam3, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_156(vector3 vParam0, int iParam1, vector3 vParam2, int iParam3)//Position - 0x8774
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_34(iParam1, 1008981770);
	fVar1 = func_34(iParam3, 1008981770);
	fVar2 = SYSTEM::VDIST(vParam0, vParam2);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

int func_157(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4)//Position - 0x87B4
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar1 = iVar0;
			if (func_15(iVar1, 0, 1) && func_15(iParam3, 0, 1))
			{
				if (Global_24E35D.f_105[iVar0])
				{
					if (func_26(Global_24E35D.f_83[iVar0 /*3*/], vParam0, fParam1, iParam2, 1036831949))
					{
						return 1;
					}
				}
				else if (func_26(func_77(iVar1), vParam0, fParam1, iParam2, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_24E35D.f_105[iVar0])
			{
				if (func_26(Global_24E35D.f_83[iVar0 /*3*/], vParam0, fParam1, iParam2, 1036831949))
				{
					return 1;
				}
			}
			else if (func_15(iVar1, 0, 0))
			{
				if (unk_0x724D816EA203A79E(unk_0xA95CF30C72EB526E(iVar1)))
				{
					if (func_26(func_77(iVar1), vParam0, fParam1, iParam2, 1036831949))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_158(vector3 vParam0, var uParam1)//Position - 0x88C3
{
	if (uParam1->f_12)
	{
		switch (uParam1->f_1A)
		{
			case 0:
				if (func_142(vParam0, uParam1->f_13, uParam1->f_19, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_58(vParam0, uParam1->f_13, uParam1->f_16, 0, 0))
				{
					return 1;
				}
				break;
			
			case 2:
				if (unk_0x7352105EC4D7541F(vParam0, uParam1->f_13, uParam1->f_16, uParam1->f_19, 0, 1))
				{
					return 1;
				}
				break;
		}
		return 0;
	}
	return 1;
}

Vector3 func_159(vector3 vParam0, float fParam1, int iParam2, bool bParam3, vector3 vParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10, bool bParam11)//Position - 0x8954
{
	vector3 vVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	float fVar10;
	vector3 vVar11;
	vector3 vVar12;
	vector3 vVar13;
	
	if (bParam11)
	{
		if (SYSTEM::VMAG(vParam4) > 0f)
		{
			if (!func_162(vParam0, *fParam1, vParam4))
			{
				*fParam1 = (*fParam1 + 180f);
			}
		}
		return vParam0;
	}
	unk_0x7834AEB00A32C3DF(vParam0, &uVar1, &uVar2);
	if (uVar2 & 1024 == 0 && !bParam6)
	{
		unk_0x0B9FA0F40EF282A2(vParam0, 1f, 1, &uVar3, &uVar3, &iVar4, &iVar5, &fVar6, iParam5);
		if (iVar4 == iVar5)
		{
			*uParam8 = 1;
		}
		if (bParam10)
		{
			if (!uVar2 & 128 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar2 & 256 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar2 & 512 == 0)
			{
				return 0f, 0f, 0f;
			}
			if ((iVar4 + iVar5) != iParam2)
			{
				return 0f, 0f, 0f;
			}
			if (unk_0x8C1A6E7D5F410F4A(iParam7) && func_161(vParam0))
			{
				return 0f, 0f, 0f;
			}
		}
		if (iParam9 && *uParam8)
		{
			*fParam1 = (*fParam1 + 180f);
			if (*fParam1 > 360f)
			{
				*fParam1 = (*fParam1 + -360f);
			}
		}
		if (*fParam1 <= 90f || *fParam1 > 270f)
		{
			bVar8 = true;
		}
		else
		{
			bVar8 = false;
		}
		bVar9 = false;
		if (bVar8)
		{
			if (iVar4 == 0)
			{
				if (bParam10)
				{
					return 0f, 0f, 0f;
				}
			}
			else if (iParam2 == iVar4)
			{
				bVar9 = true;
			}
		}
		else if (iVar5 == 0)
		{
			if (bParam10)
			{
				return 0f, 0f, 0f;
			}
		}
		else if (iParam2 == iVar5)
		{
			bVar9 = true;
		}
		if (fVar6 < 0f)
		{
			fVar7 = 0f;
		}
		else
		{
			if (bVar8)
			{
				if (bVar9)
				{
					fVar7 = (4.2f * (SYSTEM::TO_FLOAT(iVar4) * 0.5f));
				}
				else
				{
					fVar7 = (4.2f * SYSTEM::TO_FLOAT(iVar4));
				}
				if (bVar9)
				{
					if (iVar4 > 2)
					{
						fVar7 = (fVar7 + (IntToFloat((iVar4 - 2)) * 1f));
					}
				}
				else if (iVar4 > 1)
				{
					fVar7 = (fVar7 + (IntToFloat((iVar4 - 1)) * 1f));
				}
			}
			else
			{
				if (bVar9)
				{
					fVar7 = (4.2f * (SYSTEM::TO_FLOAT(iVar5) * 0.5f));
				}
				else
				{
					fVar7 = (4.2f * SYSTEM::TO_FLOAT(iVar5));
				}
				if (bVar9)
				{
					if (iVar5 > 2)
					{
						fVar7 = (fVar7 + (IntToFloat((iVar5 - 2)) * 1f));
					}
				}
				else if (iVar5 > 1)
				{
					fVar7 = (fVar7 + (IntToFloat((iVar5 - 1)) * 1f));
				}
			}
			if (!uVar2 & 64 == 0)
			{
				fVar7 = (fVar7 + (0.95f * fVar6));
			}
			if (!uVar2 & 4 == 0 || !uVar2 & 8 == 0)
			{
				fVar7 = (fVar7 + -0.5f);
			}
			if ((!uVar2 & 32 == 0 && uVar2 & 4 == 0) && uVar2 & 8 == 0)
			{
				fVar7 = (fVar7 + -1f);
			}
			if (!bParam3 || !uVar2 & 8 == 0)
			{
				fVar7 = (fVar7 + (4.2f * -0.5f));
			}
			if (!iParam7 == 0)
			{
				if (uVar2 & 8 != 0)
				{
					fVar10 = func_160(iParam7, 3.5f);
				}
				else
				{
					fVar10 = func_160(iParam7, 1.5f);
				}
				if (fVar10 > 1.8f)
				{
					fVar7 = (fVar7 + ((fVar10 - 1.8f) * -0.5f));
				}
			}
		}
	}
	if (SYSTEM::VMAG(vParam4) > 0f)
	{
		if (!func_162(vParam0, *fParam1, vParam4))
		{
			if (bParam3 || ((uVar2 & 1024 != 0 || vParam0.z == 0f) && bParam6))
			{
				*fParam1 = (*fParam1 + 180f);
			}
			else if (bParam10)
			{
				return 0f, 0f, 0f;
			}
		}
	}
	if (fVar7 < 0f)
	{
		fVar7 = 0f;
	}
	vVar0 = { unk_0x89D97EB4FAE4A574(vParam0, *fParam1, fVar7, 0f, 0f) };
	if (bParam3)
	{
		if (unk_0x4264B2362A7E120F(vParam0, *fParam1, &vVar11))
		{
			vVar12 = { vVar11 - vParam0 };
			if (!iParam7 == 0)
			{
				vVar13 = { vVar12 / FtoV(SYSTEM::VMAG(vVar12)) };
				if (uVar2 & 8 != 0)
				{
					fVar10 = func_160(iParam7, 3.5f);
				}
				else
				{
					fVar10 = func_160(iParam7, 1.5f);
				}
				vVar13 = { vVar13 * FtoV((fVar10 * 0.5f)) };
				vVar12 = { vVar12 - vVar13 };
				vVar11 = { vParam0 + vVar12 };
			}
			vVar13 = { vVar0 - vVar11 };
			vVar0 = { vVar11 };
		}
	}
	return vVar0;
}

float func_160(int iParam0, float fParam1)//Position - 0x8D9B
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	func_28(iParam0, &fVar0, &fVar1, 1086324736, 1080033280, 1077936128);
	fVar2 = (fVar1 - fVar0);
	if (fVar2 < fParam1)
	{
		return fParam1;
	}
	return fVar2;
}

int func_161(vector3 vParam0)//Position - 0x8DD2
{
	float fVar0;
	
	if (unk_0x2084D4C6C2DF616F(vParam0.x, vParam0.y, (vParam0.z + 500f), &fVar0, 0, 0))
	{
		fVar0 = (fVar0 - vParam0.z);
		if (fVar0 > 6f)
		{
			return 1;
		}
	}
	return 0;
}

int func_162(vector3 vParam0, float fParam1, vector3 vParam2)//Position - 0x8E0A
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { 0f, 1f, 0f };
	func_33(&vVar0, 0f, 0f, fParam1);
	vVar1 = { vParam2 - vParam0 };
	if (func_21(vVar1, vVar0) >= 0f)
	{
		return 1;
	}
	return 0;
}

int func_163(vector3 vParam0)//Position - 0x8E46
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_24(vParam0);
	iVar0 = 0;
	while (iVar0 < Global_24CD9D[iVar1])
	{
		if (func_23(vParam0, &(Global_24CADE[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_24CD9D[8])
	{
		if (func_23(vParam0, &(Global_24CADE[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_164(var uParam0, bool bParam1)//Position - 0x8EC1
{
	bool bVar0;
	
	bVar0 = false;
	if (Global_24B2CE.f_1A.f_11)
	{
		switch (Global_24B2CE.f_1A.f_10)
		{
			case 0:
				if (func_142(*uParam0, Global_24B2CE.f_1A.f_9, Global_24B2CE.f_1A.f_F, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_58(*uParam0, Global_24B2CE.f_1A.f_9, Global_24B2CE.f_1A.f_C, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 2:
				if (unk_0x7352105EC4D7541F(*uParam0, Global_24B2CE.f_1A.f_9, Global_24B2CE.f_1A.f_C, Global_24B2CE.f_1A.f_F, 0, 1))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_45(*uParam0, Global_24B2CE.f_1A.f_9, Global_24B2CE.f_1A.f_C, Global_24B2CE.f_1A.f_F, Global_24B2CE.f_1A.f_10, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

int func_165(var uParam0, var uParam1, var uParam2)//Position - 0x8FB3
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	float fVar8;
	bool bVar9;
	int iVar10;
	float fVar11;
	int iVar12;
	vector3 vVar13;
	var uVar14;
	
	if (Global_24B2CE.f_6C8 > 0)
	{
		iVar0 = 0;
		iVar1 = 0;
		if (!SYSTEM::VMAG(uParam2->f_23) > 0f)
		{
			uParam2->f_23 = { *uParam0 };
		}
		if (uParam2->f_F)
		{
			if (func_38(uParam2->f_23, uParam0, &(uParam2->f_26), &(uParam2->f_2D), 1, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam2->f_30)
		{
			if (func_164(uParam0, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam0->f_2 < -80f)
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
		Global_24CEBB.f_A2 = 0;
		Global_24CEBB.f_A3 = 0;
		iVar4 = 0;
		while (iVar4 < 40)
		{
			Global_24CEBB[iVar4 /*3*/] = { 0f, 0f, 0f };
			Global_24CEBB.f_79[iVar4] = 0f;
			iVar4++;
		}
		func_166(*uParam0);
		iVar0 = 0;
		while (iVar0 < Global_24B2CE.f_6C8)
		{
			iVar1 = Global_24B2CE.f_85E[iVar0];
			if (iVar1 > -1 && iVar1 < 101)
			{
				vVar2 = { Global_24B2CE.f_6C9[iVar1 /*4*/] };
				fVar3 = Global_24B2CE.f_6C9[iVar1 /*4*/].f_3;
				if (SYSTEM::VMAG(vVar2) > 0f)
				{
					if ((uParam2->f_39 && SYSTEM::VDIST(vVar2, uParam2->f_23) > uParam2->f_4) || uParam2->f_39 == 0)
					{
						if ((uParam2->f_5 > 0f && SYSTEM::VDIST(vVar2.x, vVar2.y, 0f, uParam2->f_23, uParam2->f_23.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
						{
							if ((uParam2->f_C && !func_154(vVar2, fVar3, uParam2->f_22, unk_0xB5CEFD608600A09F(), 0, uParam2->f_38)) || !uParam2->f_C)
							{
								if (!uParam2->f_F || !func_38(uParam2->f_23, &vVar2, &(uParam2->f_26), &(uParam2->f_2D), 0, 1))
								{
									if (uParam2->f_8)
									{
										iVar5 = uParam2->f_1F;
										bVar6 = true;
										iVar7 = 1;
										fVar8 = uParam2->f_31;
										if (!uParam2->f_37)
										{
											iVar5 = 0;
											bVar6 = false;
											iVar7 = 0;
											fVar8 = 1f;
										}
										else if (uParam2->f_11)
										{
											iVar5 = 0;
											bVar6 = false;
											iVar7 = 0;
											if (uParam2->f_21 == 1)
											{
												fVar8 = (fVar8 * 0.375f);
											}
										}
										else
										{
											bVar6 = true;
											iVar7 = 1;
											if (uParam2->f_1C)
											{
												if (uParam2->f_21 == 1)
												{
													fVar8 = (fVar8 * 0.375f);
												}
											}
										}
										bVar9 = false;
										if (!func_153(vVar2, fVar3, uParam2->f_22))
										{
											if (uParam2->f_3 > 7f)
											{
												if (func_170(vVar2, 6f, 1f, 1f, 5f, iVar5, bVar6, iVar7, fVar8, uParam2->f_3A, -1, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar9 = true;
												}
											}
											else if (func_170(vVar2, 6f, 1f, 1f, 5f, iVar5, bVar6, iVar7, fVar8, uParam2->f_3A, -1, 1, 0f, 0, 0, 0, 0) && !func_151(vVar2, fVar3, uParam2->f_22, 1, 1, 0, 0, uParam2->f_3A, 0))
											{
												bVar9 = true;
											}
										}
										if (bVar9)
										{
											if ((uParam2->f_1D || uParam2->f_1E) || uParam2->f_34)
											{
												fVar11 = 0f;
												if (uParam2->f_34)
												{
													iVar10 = func_150(vVar2, uParam2->f_36, &fVar11);
												}
												if (!uParam2->f_34 || (uParam2->f_34 && iVar10 <= uParam2->f_35))
												{
													if (uParam2->f_34)
													{
														if (iVar10 < uParam2->f_35)
														{
															iVar4 = 0;
															while (iVar4 < Global_24CEBB.f_A2)
															{
																Global_24CEBB[iVar4 /*3*/] = { 0f, 0f, 0f };
																Global_24CEBB.f_79[iVar4] = 0f;
																iVar4++;
															}
															Global_24CEBB.f_A2 = 0;
															uParam2->f_35 = iVar10;
														}
													}
													if (uParam2->f_1E)
													{
														if (Global_24CEBB.f_A2 == 0)
														{
															Global_24CEBB[0 /*3*/] = { vVar2 };
															Global_24CEBB.f_79[0] = fVar3;
														}
														else
														{
															iVar4 = 0;
															while (iVar4 < Global_24CEBB.f_A2 + 1)
															{
																if (iVar4 < 40)
																{
																	if (SYSTEM::VDIST2(vVar2, uParam2->f_23) < SYSTEM::VDIST2(Global_24CEBB[iVar4 /*3*/], uParam2->f_23))
																	{
																		func_149(vVar2, fVar3, iVar4);
																		iVar4 = Global_24CEBB.f_A2 + 1;
																	}
																}
																iVar4++;
															}
														}
														Global_24CEBB.f_A2++;
														if (Global_24CEBB.f_A2 >= 5)
														{
															if ((uParam2->f_34 && uParam2->f_35 == 0) || uParam2->f_34 == 0)
															{
																iVar0 = Global_24B2CE.f_6C8;
															}
															else if (Global_24CEBB.f_A2 == 40)
															{
																iVar0 = Global_24B2CE.f_6C8;
															}
														}
													}
													else
													{
														Global_24CEBB[Global_24CEBB.f_A2 /*3*/] = { vVar2 };
														Global_24CEBB.f_79[Global_24CEBB.f_A2] = fVar3;
														Global_24CEBB.f_A2++;
														if (Global_24CEBB.f_A2 >= 10)
														{
															if ((uParam2->f_34 && uParam2->f_35 == 0) || uParam2->f_34 == 0)
															{
																iVar0 = Global_24B2CE.f_6C8;
															}
															else if (Global_24CEBB.f_A2 == 40)
															{
																iVar0 = Global_24B2CE.f_6C8;
															}
														}
													}
												}
											}
											else
											{
												*uParam0 = { vVar2 };
												*uParam1 = fVar3;
												return 1;
											}
										}
									}
									else
									{
										*uParam0 = { vVar2 };
										*uParam1 = fVar3;
										return 1;
									}
								}
							}
						}
					}
				}
			}
			iVar0++;
		}
		if (Global_24CEBB.f_A2 > 0)
		{
			if (uParam2->f_1E)
			{
				*uParam0 = { Global_24CEBB[0 /*3*/] };
				*uParam1 = Global_24CEBB.f_79[0];
				return 1;
			}
			else
			{
				if (Global_24CEBB.f_A3 > 0 && !Global_24CEBB.f_A3 == Global_24CEBB.f_A2)
				{
					func_147(0, uParam2);
				}
				iVar12 = unk_0x491B2241281A03B7(0, Global_24CEBB.f_A2);
				vVar13 = { Global_24CEBB[0 /*3*/] };
				uVar14 = Global_24CEBB.f_79[0];
				Global_24CEBB[0 /*3*/] = { Global_24CEBB[iVar12 /*3*/] };
				Global_24CEBB.f_79[0] = Global_24CEBB.f_79[iVar12];
				Global_24CEBB[iVar12 /*3*/] = { vVar13 };
				Global_24CEBB.f_79[iVar12] = uVar14;
				*uParam0 = { Global_24CEBB[0 /*3*/] };
				*uParam1 = Global_24CEBB.f_79[0];
				return 1;
			}
		}
		else
		{
			uParam2->f_21++;
			if (uParam2->f_21 < 2)
			{
				return func_165(uParam0, uParam1, uParam2);
			}
			else
			{
				uParam2->f_21 = 0;
				func_144(uParam0, uParam1, uParam2);
				return 1;
			}
		}
	}
	return 0;
}

void func_166(vector3 vParam0)//Position - 0x9603
{
	float fVar0;
	var uVar1;
	int iVar2;
	
	fVar0 = -1f;
	while (iVar2 < Global_24B2CE.f_6C8)
	{
		uVar1 = func_167(vParam0, fVar0, &fVar0);
		Global_24B2CE.f_85E[iVar2] = uVar1;
		iVar2++;
	}
}

int func_167(vector3 vParam0, float fParam1, float fParam2)//Position - 0x963E
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = -1;
	fVar1 = 1E+08f;
	iVar3 = 0;
	while (iVar3 < Global_24B2CE.f_6C8)
	{
		fVar2 = SYSTEM::VDIST2(vParam0, Global_24B2CE.f_6C9[iVar3 /*4*/]);
		if (fVar2 < fVar1 && fVar2 > fParam1)
		{
			iVar0 = iVar3;
			fVar1 = fVar2;
		}
		iVar3++;
	}
	*fParam2 = fVar1;
	return iVar0;
}

bool func_168(int iParam0)//Position - 0x96A0
{
	return iParam0 == 50;
}

void func_169(var uParam0, var uParam1)//Position - 0x96AD
{
	unk_0x03903ED3123A1EBC(uParam0, uParam1, 0.1f);
	Global_24B2CE.f_998 = unk_0x8A55B15F4133C912();
	Global_24B2CE.f_996 = 1;
	Global_24B2CE.f_999 = unk_0xED678C85A82F0AB9();
}

int func_170(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)//Position - 0x96E0
{
	Global_24B2CE.f_2 = 0;
	if (fParam1 > 0f)
	{
		if (unk_0x38B362A95EA24163(vParam0, fParam1))
		{
			return 0;
		}
	}
	if (fParam2 > 0f)
	{
		if (unk_0xAE7193AAF1ECF1DB(vParam0.x, vParam0.y, (vParam0.z + 1f), fParam2) || unk_0xAE7193AAF1ECF1DB(vParam0, fParam2))
		{
			return 0;
		}
	}
	if (fParam3 > 0f)
	{
		if (unk_0x85BF1D9693A8E47F(vParam0, fParam3, iParam16))
		{
			return 0;
		}
	}
	Global_24B2CE.f_2++;
	if (bParam11)
	{
		if (unk_0x90629C6D0C640733(vParam0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_24B2CE.f_2++;
	if (fParam12 > 0f)
	{
		if (func_125(vParam0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13))
		{
			return 0;
		}
	}
	Global_24B2CE.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_113(vParam0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_24B2CE.f_2++;
	return 1;
}

void func_171()//Position - 0x97F1
{
	func_176();
	func_175();
	func_174();
	func_173();
	func_172();
}

void func_172()//Position - 0x980D
{
	struct<10> Var0;
	int iVar1;
	
	Var0.f_2 = 1176256410;
	iVar1 = 0;
	while (iVar1 < 128)
	{
		Global_24BE1E[iVar1 /*10*/] = { Var0 };
		iVar1++;
	}
}

void func_173()//Position - 0x9845
{
	struct<10> Var0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 4)
	{
		Global_24B2CE.f_9A9.f_5A[iVar1 /*10*/] = { Var0 };
		iVar1++;
	}
}

void func_174()//Position - 0x9874
{
	struct<4> Var0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 8)
	{
		Global_24B2CE.f_9A9.f_39[iVar1 /*4*/] = { Var0 };
		iVar1++;
	}
}

void func_175()//Position - 0x98A2
{
	struct<10> Var0;
	int iVar1;
	
	Var0.f_2 = 1176256410;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		Global_24B2CE.f_9A9.f_6[iVar1 /*10*/] = { Var0 };
		iVar1++;
	}
}

void func_176()//Position - 0x98DE
{
	struct<6> Var0;
	
	Var0.f_3 = -1;
	Global_24B2CE.f_9A9 = { Var0 };
}

void func_177()//Position - 0x98FC
{
	if (Global_24B2CE.f_996)
	{
		if (unk_0x8A55B15F4133C912() == Global_24B2CE.f_998)
		{
			unk_0x156000B85911BE27();
		}
		else
		{
			unk_0x156000B85911BE27();
		}
		Global_24B2CE.f_996 = 0;
	}
}

int func_178(bool bParam0)//Position - 0x992F
{
	if (unk_0x17FAADF9916EF741())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

int func_179(vector3 vParam0, float fParam1, var uParam2, var uParam3, struct<13> Param4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26)//Position - 0x9952
{
	struct<17> Var0;
	struct<18> Var1;
	vector3 vVar2;
	
	if (Param4.f_5 > (fParam1 - 20f))
	{
		Param4.f_5 = (fParam1 - 20f);
	}
	Var0 = 5;
	Var0.f_10 = 5;
	Var0.f_16 = 5;
	Var0.f_1C = 5;
	Var1.f_10 = 1;
	Var1.f_16 = 1;
	Var1.f_17 = 1;
	Var1.f_18 = 1;
	Var1 = { vParam0 };
	Var1.f_3 = Param4.f_B;
	Var1.f_4 = fParam1;
	Var1.f_5 = 0;
	Var1.f_6 = 1;
	Var1.f_7 = 0;
	Var1.f_F = 0;
	Var1.f_10 = 1;
	Var1.f_11 = 0;
	if (func_8(&Var1, &Param4, &Var0))
	{
		if ((Param4.f_C > 0f && Param4.f_7) && Param4.f_8)
		{
			vVar2 = { vParam0 - Var0[0 /*3*/] };
			if (vVar2.z > Param4.f_C)
			{
				Var0[0 /*3*/] = { vParam0 };
				Var0.f_10[0] = Param4.f_B;
			}
		}
		*uParam2 = { Var0[0 /*3*/] };
		*uParam3 = Var0.f_10[0];
		return 1;
	}
	return 0;
}

int func_180(var uParam0)//Position - 0x9A52
{
	if (uParam0->f_1)
	{
		if (unk_0xC40EDFF7541407A8(unk_0xCCA9497DA4595710(unk_0xED678C85A82F0AB9(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_181(var uParam0)//Position - 0x9A7B
{
	if (!uParam0->f_1)
	{
		if (unk_0x0DE6397A2CB3EF75())
		{
			func_182(uParam0, 0, 0);
		}
	}
}

void func_182(var uParam0, bool bParam1, bool bParam2)//Position - 0x9A9A
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

void func_183()//Position - 0x9ADF
{
	switch (vLocal_62[unk_0x6BAA0516CC970D99() /*3*/].f_2)
	{
		case 0:
			func_217();
			func_216();
			if (func_205())
			{
				func_203();
				func_202();
				func_184(35);
				vLocal_62[unk_0x6BAA0516CC970D99() /*3*/].f_2 = 1;
			}
			else if (Local_60.f_8 >= 1)
			{
				func_202();
				vLocal_62[unk_0x6BAA0516CC970D99() /*3*/].f_2 = 1;
			}
			break;
		
		case 1:
			if (Local_60.f_8 >= 2)
			{
				vLocal_62[unk_0x6BAA0516CC970D99() /*3*/].f_2 = 2;
			}
			break;
		
		case 2:
			break;
	}
}

void func_184(int iParam0)//Position - 0x9B66
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!Global_40001.f_1F18)
	{
		iVar1 = iParam0;
		iVar2 = -1;
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (Global_200000[func_201() /*12171*/].f_1E08.f_EFE[iVar0 /*3*/] == iVar1)
			{
				iVar2 = iVar0;
			}
			if (Global_200000[func_201() /*12171*/].f_1E08.f_EFE[iVar0 /*3*/].f_1)
			{
				iVar3++;
			}
			iVar0++;
		}
		if (iVar2 > -1 && iVar2 < 3)
		{
			if (!Global_200000[func_201() /*12171*/].f_1E08.f_EFE[iVar2 /*3*/].f_1)
			{
				func_197(iVar2, 1);
				unk_0xF0059F27F7BB6680(&Global_26233A, (8 + iVar2));
				func_192(2110, -1);
				func_188(67, -1);
				func_192(2577, -1);
				func_188(69, -1);
				unk_0x7481F930F09A9108(1000, iVar1);
				if (iVar3 < 2)
				{
					if (!unk_0xFA30DFD0084E92FE(Global_26233A, 12))
					{
						func_185(7, 0);
					}
					else
					{
						func_185(15, 0);
					}
				}
			}
		}
	}
}

void func_185(int iParam0, int iParam1)//Position - 0x9C5D
{
	int iVar0;
	
	if (func_187(iParam0, iParam1))
	{
		iVar0 = func_186();
		Global_258004[iVar0] = iParam0;
	}
}

int func_186()//Position - 0x9C80
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_258004[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_187(int iParam0, var uParam1)//Position - 0x9CB5
{
	if (Global_14084A)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_140856) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_188(int iParam0, int iParam1)//Position - 0x9D3B
{
	int iVar0;
	
	iVar0 = func_190(iParam0, func_191(iParam1));
	iVar0++;
	func_189(iParam0, iVar0, iParam1);
}

void func_189(int iParam0, int iParam1, var uParam2)//Position - 0x9D61
{
	int iVar0;
	
	iVar0 = Global_270B3A[iParam0 /*3*/][func_191(uParam2)];
	unk_0x3A57956BCE003880(iVar0, iParam1, 1);
}

int func_190(int iParam0, int iParam1)//Position - 0x9D85
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_270B3A[iParam0 /*3*/][func_191(iParam1)];
	if (unk_0x6CB99B97664C3727(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_191(var uParam0)//Position - 0x9DB1
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_141();
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

void func_192(int iParam0, int iParam1)//Position - 0x9DE5
{
	int iVar0;
	
	iVar0 = func_196(iParam0, func_191(iParam1), 0);
	iVar0++;
	if (!func_195(iParam0))
	{
		func_194(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_193(iParam0, iVar0, iParam1, 1);
	}
}

void func_193(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x9E26
{
	int iVar0;
	
	iVar0 = Global_269BC5[iParam0 /*3*/][func_191(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x3A57956BCE003880(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_14F606[func_191(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_14F60C[func_191(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_14F612[func_191(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_14F618[func_191(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_14F5EE[func_191(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_14F5F4[func_191(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_14F5FA[func_191(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_14F600[func_191(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_14F5D6[func_191(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_14F5DC[func_191(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_14F5E2[func_191(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_14F5E8[func_191(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_14F61E[func_191(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_14F624[func_191(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_14F62A[func_191(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_14F630[func_191(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_14F636[func_191(iParam2)] = iParam1;
			break;
		
		case 7229:
			Global_14F63C[func_191(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_14F642[func_191(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_14F648[func_191(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_270CF3[0 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_270CF3[1 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 2925:
			Global_270CF3[2 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_270CF3[3 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 7818:
			Global_270D5E[func_191(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_14F64E[func_191(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_14F654[func_191(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_14F65A[func_191(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_14F660[func_191(iParam2)] = iParam1;
			break;
		
		case 3049:
			Global_270D27[0 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 3050:
			Global_270D27[1 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 3051:
			Global_270D27[2 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 3052:
			Global_270D27[3 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_270D27[4 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 3632:
			Global_270D61[0 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 3633:
			Global_270D61[1 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 3634:
			Global_270D61[2 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 3635:
			Global_270D61[3 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_270D61[4 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_270D71[0 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_270D71[1 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_270D71[2 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_270D71[3 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_270D71[4 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 3217:
			Global_270D27[5 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_270CF3[4 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 3659:
			Global_270D81[func_191(iParam2)] = iParam1;
			break;
		
		case 3660:
			Global_270D8A[func_191(iParam2)] = iParam1;
			break;
		
		case 3661:
			Global_270D84[func_191(iParam2)] = iParam1;
			break;
		
		case 3662:
			Global_270D8D[func_191(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_270D87[func_191(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_270D90[func_191(iParam2)] = iParam1;
			break;
		
		case 3685:
			Global_270D93[func_191(iParam2)] = iParam1;
			break;
		
		case 3225:
			Global_270D27[6 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 3226:
			Global_270CF3[5 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_270D27[7 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 3228:
			Global_270CF3[6 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 4015:
			Global_270D27[8 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 4016:
			Global_270CF3[7 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 4018:
			Global_270D27[9 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_270CF3[8 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 4021:
			Global_270D27[10 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_270CF3[9 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 4024:
			Global_270D27[11 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_270CF3[10 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 6105:
			Global_270D27[12 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 6106:
			Global_270CF3[11 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 6163:
			Global_270D27[13 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 6164:
			Global_270CF3[12 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 6541:
			Global_270D27[14 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 6542:
			Global_270CF3[13 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 6554:
			Global_270D27[15 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 6555:
			Global_270CF3[14 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 6557:
			Global_270D27[16 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_270CF3[15 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 6560:
			Global_270D27[17 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_270CF3[16 /*3*/][func_191(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_194(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0xA5E0
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_269BC5[iParam0 /*3*/][func_191(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x3A57956BCE003880(iVar0, iParam1, iParam3);
	}
}

int func_195(int iParam0)//Position - 0xA610
{
	if (Global_14F5C3)
	{
		switch (iParam0)
		{
			case 787:
			case 788:
			case 789:
			case 790:
			case 777:
			case 778:
			case 779:
			case 780:
			case 767:
			case 768:
			case 769:
			case 770:
			case 757:
			case 758:
			case 759:
			case 760:
			case 1303:
			case 7229:
			case 639:
			case 1278:
			case 764:
			case 765:
			case 766:
			case 1236:
			case 1876:
			case 2267:
			case 2925:
			case 3054:
			case 7818:
			case 3049:
			case 3050:
			case 3051:
			case 3052:
			case 3053:
			case 3228:
			case 3230:
			case 3632:
			case 3633:
			case 3634:
			case 3635:
			case 3636:
			case 3637:
			case 3638:
			case 3639:
			case 3640:
			case 3641:
			case 3223:
			case 3217:
			case 3659:
			case 3660:
			case 3661:
			case 3662:
			case 3663:
			case 3664:
			case 3685:
			case 3226:
			case 3225:
			case 4016:
			case 4015:
			case 4019:
			case 4018:
			case 4022:
			case 4021:
			case 4025:
			case 4024:
			case 6106:
			case 6105:
			case 6164:
			case 6163:
			case 6529:
			case 6528:
			case 6542:
			case 6541:
			case 6555:
			case 6554:
			case 6558:
			case 6557:
			case 6561:
			case 6560:
				return 1;
				break;
			}
	}
	return 0;
}

int func_196(int iParam0, int iParam1, int iParam2)//Position - 0xA808
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_269BC5[iParam0 /*3*/][func_191(iParam1)];
	if (unk_0x6CB99B97664C3727(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_197(int iParam0, int iParam1)//Position - 0xA83A
{
	if (Global_200000[func_201() /*12171*/].f_1E08.f_EFE[iParam0 /*3*/].f_1 != iParam1)
	{
		Global_200000[func_201() /*12171*/].f_1E08.f_EFE[iParam0 /*3*/].f_1 = iParam1;
		func_198(func_200(iParam0), iParam1, -1, 1);
	}
}

void func_198(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xA885
{
	int iVar0;
	
	if (func_199())
	{
		iVar0 = Global_2705A2[iParam0 /*3*/][func_191(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x7DB90DFB4AE71E86(iVar0, iParam1, iParam3);
		}
	}
}

int func_199()//Position - 0xA8B7
{
	return 1;
	return 0;
}

int func_200(int iParam0)//Position - 0xA8C4
{
	switch (iParam0)
	{
		case 0:
			return 169;
		
		case 1:
			return 170;
		
		case 2:
			return 171;
		
		default:
	}
	return 169;
}

int func_201()//Position - 0xA8F6
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_202()//Position - 0xA903
{
	if (unk_0x2DA8CA50A72528FB(iLocal_65))
	{
		unk_0x07B8ECB35A4ED3AC(&iLocal_65);
	}
}

void func_203()//Position - 0xA91A
{
	if (!unk_0xFA30DFD0084E92FE(Global_252E21.f_F23, 0))
	{
		unk_0xF0059F27F7BB6680(&(Global_252E21.f_F23), 0);
		func_204();
	}
	else
	{
		unk_0xF0059F27F7BB6680(&(Global_252E21.f_F23), 1);
	}
}

void func_204()//Position - 0xA951
{
	func_192(1188, -1);
}

int func_205()//Position - 0xA961
{
	struct<14> Var0;
	
	if (unk_0x7FFE36DB9042AF23(Local_60.f_2))
	{
		if (unk_0x8EA6CABD14F1B89A(Local_60.f_2))
		{
			if (unk_0xB6A16B5E7EB81F9B(unk_0x370629AFF3A5C45C(Local_60.f_2), unk_0xBC25C936A095B5BA()) && func_215(Local_60.f_2))
			{
				func_214(&(Local_60.f_2));
				if (unk_0x2DA8CA50A72528FB(iLocal_65))
				{
					unk_0x07B8ECB35A4ED3AC(&iLocal_65);
				}
				if (!func_213(1))
				{
					func_208("ABB_BOXCT", 1);
				}
				Var0.f_2 = 883164062;
				Var0.f_A = unk_0xB5CEFD608600A09F();
				Var0.f_3 = uLocal_64;
				func_206(Var0, func_207(1));
				unk_0xF0059F27F7BB6680(&(vLocal_62[unk_0x6BAA0516CC970D99() /*3*/].f_1), 0);
				return 1;
			}
		}
	}
	return 0;
}

void func_206(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)//Position - 0xAA00
{
	Param0 = -471892217;
	Param0.f_1 = unk_0xB5CEFD608600A09F();
	if (!iParam13 == 0)
	{
		unk_0x38E776D9FA75679B(1, &Param0, 14, iParam13);
	}
}

int func_207(int iParam0)//Position - 0xAA2D
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0x81C86888AEA2F49B())
	{
		if (unk_0x05086B70D2CFEA6F(unk_0xCFA8A401AAD7BB5A(iVar1)))
		{
			iVar2 = unk_0x4ED43B67B3F05E0F(unk_0xCFA8A401AAD7BB5A(iVar1));
			if (func_15(iVar2, 0, 0))
			{
				if (iVar2 != unk_0xB5CEFD608600A09F() || iParam0)
				{
					unk_0xF0059F27F7BB6680(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_208(char* sParam0, int iParam1)//Position - 0xAA8A
{
	int iVar0;
	
	iVar0 = -1;
	unk_0x2E94302CFF011F2E(sParam0);
	iVar0 = unk_0x5E48BB10C6423FD5(0, 1);
	func_209(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_209(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0xAAB6
{
	int iVar0;
	
	if ((!func_212() || !unk_0x517823CA390A19F6()) || !func_139(unk_0xB5CEFD608600A09F(), 0))
	{
		return;
	}
	iVar0 = func_210(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_195C05.f_5[iVar0 /*53*/] = iParam0;
		Global_195C05.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_195C05.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_195C05.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_195C05.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_195C05.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_195C05.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_195C05.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_195C05.f_5[iVar0 /*53*/].f_C), sParam3, 64);
		StringCopy(&(Global_195C05.f_5[iVar0 /*53*/].f_1C[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_195C05.f_5[iVar0 /*53*/].f_1C[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_195C05.f_5[iVar0 /*53*/].f_1C[2 /*6*/]), sParam11, 24);
	}
}

int func_210(int iParam0)//Position - 0xABBE
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_195C05 - 1))
	{
		if (iParam0 > Global_195C05.f_5[iVar0 /*53*/].f_1)
		{
			func_211(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_195C05++;
	if (Global_195C05 > 5)
	{
		Global_195C05 = 5;
		return Global_195C05;
	}
	return (Global_195C05 - 1);
}

void func_211(int iParam0)//Position - 0xAC20
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_195C05.f_5[iVar0 /*53*/] = { Global_195C05.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_212()//Position - 0xAC59
{
	return unk_0x7B2F21BFE86AEB61(-1762644250);
}

int func_213(int iParam0)//Position - 0xAC6A
{
	switch (iParam0)
	{
		case 1:
			return Global_18C288 > 0;
		
		case 2:
			return Global_18C288.f_1 > 0;
		
		case 3:
			return Global_18C288.f_2 > 0;
		
		case 4:
			return Global_18C288.f_4 > 0;
		
		case 5:
			return Global_18C288.f_3 > 0;
		
		default:
	}
	return 0;
}

void func_214(var uParam0)//Position - 0xACCD
{
	int iVar0;
	
	if (unk_0x7FFE36DB9042AF23(*uParam0))
	{
		if (!unk_0x89B5CBCE9D131B32(*uParam0))
		{
		}
	}
	if (unk_0x8EA6CABD14F1B89A(*uParam0))
	{
		iVar0 = unk_0xD14280F674B4DBF4(*uParam0);
		unk_0xC46CA8E9D2A3F4DD(&iVar0);
	}
}

int func_215(int iParam0)//Position - 0xAD06
{
	if (unk_0x7FFE36DB9042AF23(iParam0))
	{
		unk_0xCDF25F6ADC88CCB4(iParam0);
		return unk_0x89B5CBCE9D131B32(iParam0);
	}
	return 0;
}

void func_216()//Position - 0xAD28
{
	if (!unk_0x2DA8CA50A72528FB(iLocal_65))
	{
		if (unk_0x7FFE36DB9042AF23(Local_60.f_2))
		{
			iLocal_65 = unk_0x511FE22BCF5353CD(unk_0x370629AFF3A5C45C(Local_60.f_2));
			unk_0x3F5F1772D71D5EC4(iLocal_65, 1.2f);
			unk_0xBF0E22F3E083C33D(iLocal_65, 403);
			unk_0x0D5352939CC40C16(iLocal_65, 2);
			unk_0x436D0272182E484D(iLocal_65, "ABB_BLIPN");
		}
	}
}

void func_217()//Position - 0xAD77
{
	int iVar0;
	
	if (!unk_0xF16DAFF595E80F7C())
	{
		iVar0 = func_196(1190, -1, 0);
		if (!unk_0xFA30DFD0084E92FE(iVar0, 14))
		{
			unk_0xF0059F27F7BB6680(&iVar0, 14);
			func_194(1190, iVar0, -1, 1, 0);
		}
	}
}

int func_218()//Position - 0xADB2
{
	return Local_60;
}

int func_219()//Position - 0xADBC
{
	unk_0xF243B7A14FCFD0F4(joaat("prop_drug_package_02"));
	if (unk_0xD6513D668481290A(joaat("prop_drug_package_02")))
	{
		return 1;
	}
	return 0;
}

int func_220(int iParam0)//Position - 0xADDE
{
	return vLocal_62[iParam0 /*3*/];
}

int func_221()//Position - 0xADEC
{
	var uVar0;
	
	func_228(&uVar0);
	if (Global_14083F == 0)
	{
		if (!unk_0x7AF0088ABFA713B6())
		{
			return 1;
		}
	}
	if (func_227())
	{
		return 1;
	}
	if (Global_25891C)
	{
		return 1;
	}
	if (func_226())
	{
		return 1;
	}
	if (func_225(157))
	{
		if (!func_224())
		{
			return 1;
		}
	}
	if (func_225(155))
	{
		return 1;
	}
	if (!unk_0x57D316754A262B34())
	{
		return 1;
	}
	if (func_222() != 0)
	{
		if (unk_0xB731B8C5BCE89836(func_222()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_222()//Position - 0xAE76
{
	switch (func_223())
	{
		case 0:
			return joaat("freemode");
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_223()//Position - 0xAEAA
{
	return Global_62BD;
}

bool func_224()//Position - 0xAEB5
{
	return Global_255A46.f_24A;
}

int func_225(int iParam0)//Position - 0xAEC4
{
	if (unk_0xA1AC399BCBEE5B2D(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_226()//Position - 0xAEDB
{
	return Global_258063;
}

bool func_227()//Position - 0xAEE7
{
	return Global_255A46.f_245;
}

void func_228(var uParam0)//Position - 0xAEF6
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	
	iVar0 = 0;
	while (iVar0 < unk_0x432AA9CCB3EE0174(1))
	{
		iVar1 = unk_0x2BFAC254CC069912(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0x414AA1932D1C88E2(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 1113296425:
					func_229(iVar0);
					break;
				
				case -319074860:
					unk_0x414AA1932D1C88E2(1, iVar0, &vVar3, 4);
					if (vVar3.z == -1987561915)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_229(int iParam0)//Position - 0xAF69
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x414AA1932D1C88E2(1, iParam0, &vVar0, 3))
	{
		if (func_15(vVar0.y, 1, 1))
		{
			iVar1 = unk_0xA95CF30C72EB526E(vVar0.y);
			if (unk_0x724D816EA203A79E(iVar1))
			{
				if (unk_0x5237AF95232D78C5(iVar1, 0))
				{
					iVar2 = unk_0x9FE9D386222EEE47(iVar1, 0);
					if (unk_0x403C891106DCABAF(iVar2, vVar0.z) && unk_0x32405B7614E36453())
					{
						if (func_230(iVar2, &bVar3))
						{
							unk_0xD5DC0505375F4D00(iVar2, vVar0.z);
						}
						if (bVar3)
						{
							unk_0x1E7A09C1710FB071(&iVar2);
						}
					}
				}
			}
		}
	}
}

int func_230(int iParam0, var uParam1)//Position - 0xAFEA
{
	if (unk_0x724D816EA203A79E(iParam0))
	{
		if (!unk_0x5CAE759AE8219D20(iParam0))
		{
			if (unk_0x63B5FF8D34CBC98E(iParam0))
			{
				if (!unk_0xFF2234981505F7F4(unk_0x6F79ECA8C83E4357(iParam0)))
				{
					unk_0x77815D3407C6700D(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0xB248FAA35ED47DB9(iParam0, 0))
		{
			if (unk_0x4DF785C4DF542CD0(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_231()//Position - 0xB049
{
	SYSTEM::WAIT(0);
}

int func_232(int iParam0)//Position - 0xB056
{
	return Global_18402B[iParam0 /*770*/];
}

void func_233()//Position - 0xB067
{
	Global_14F6A2 = -1;
	if (unk_0x2DA8CA50A72528FB(iLocal_65))
	{
		unk_0x07B8ECB35A4ED3AC(&iLocal_65);
	}
	func_236();
	if (unk_0x7AF0088ABFA713B6())
	{
		if (unk_0x0DE6397A2CB3EF75())
		{
			if (unk_0x7FFE36DB9042AF23(Local_60.f_2) && unk_0x89B5CBCE9D131B32(Local_60.f_2))
			{
				func_214(&(Local_60.f_2));
			}
			Local_60 = 4;
		}
	}
	if (unk_0xFA30DFD0084E92FE(Local_60.f_1, 8))
	{
		func_235();
	}
	func_234();
}

void func_234()//Position - 0xB0CD
{
	unk_0x95E4B6F3ED223F5A();
}

void func_235()//Position - 0xB0D9
{
	Global_267214.f_350 = 0;
	Global_267214.f_350.f_1 = { 0f, 0f, 0f };
	Global_267214.f_350.f_4 = 0f;
	Global_267214.f_350.f_8 = 0;
	unk_0x7CB6FD92BE491AD9(&(Global_267214.f_350.f_7), 0);
}

void func_236()//Position - 0xB119
{
	if (unk_0xFA30DFD0084E92FE(iLocal_63, 4))
	{
		unk_0x08BCE902FC1DD80D(unk_0xB5CEFD608600A09F(), 0.72f);
		unk_0xBCB43C2514486D78(unk_0xB5CEFD608600A09F(), 1f, 1);
		unk_0xF7B9AAEB82B6437F(unk_0xB5CEFD608600A09F(), 1f);
		unk_0xF6B0DBDB75FE4049(unk_0xB5CEFD608600A09F(), 1f);
		func_237(1);
		unk_0x7CB6FD92BE491AD9(&iLocal_63, 5);
		unk_0x7CB6FD92BE491AD9(&iLocal_63, 7);
		unk_0x7CB6FD92BE491AD9(&iLocal_63, 4);
	}
}

void func_237(int iParam0)//Position - 0xB16E
{
	char* sVar0;
	
	sVar0 = func_238(iParam0, 0);
	unk_0x1A058EB0D1ACEC78(sVar0);
}

char* func_238(int iParam0, bool bParam1)//Position - 0xB185
{
	switch (iParam0)
	{
		case 1:
			if (bParam1)
			{
				return "MP_Bull_tost_Out";
			}
			else
			{
				return "MP_Bull_tost";
			}
			break;
		
		case 2:
			if (bParam1)
			{
				return "MP_Powerplay_Out";
			}
			else
			{
				return "MP_Powerplay";
			}
			break;
		
		case 3:
			if (bParam1)
			{
				return "MP_Killstreak_Out";
			}
			else
			{
				return "MP_Killstreak";
			}
			break;
		
		case 4:
			if (bParam1)
			{
				return "MP_Loser_Streak_Out";
			}
			else
			{
				return "MP_Loser_Streak";
			}
			break;
		
		case 6:
			if (bParam1)
			{
				return "BikerFilterOut";
			}
			else
			{
				return "BikerFilter";
			}
			break;
	}
	return "";
}

int func_239(struct<21> Param0)//Position - 0xB228
{
	func_243(func_244(Param0), Param0);
	unk_0x38A34821FCF0B79E(1);
	func_241(0, -1, 0);
	unk_0x76AE988734CA7760(&Local_60, 11);
	unk_0xE45D6A3FD6454198(&vLocal_62, 97);
	if (!func_240())
	{
		return 0;
	}
	unk_0x6C87EFD58B261C6F(0);
	if (unk_0x0DE6397A2CB3EF75())
	{
		Local_60.f_7 = Param0.f_10;
		Global_14F6A2 = Local_60.f_7;
		Local_60.f_3 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0) };
		if (!func_3(Global_267214.f_350.f_1))
		{
			unk_0xF0059F27F7BB6680(&(Local_60.f_1), 8);
		}
	}
	bLocal_68 = unk_0x2F7EEEA6378AC19B();
	vLocal_62[unk_0x6BAA0516CC970D99() /*3*/] = 0;
	return 1;
}

int func_240()//Position - 0xB2C0
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x7AF0088ABFA713B6())
		{
			return 0;
		}
		if (unk_0xB3E1B1F67FB95F04())
		{
			return 1;
		}
		if (func_227())
		{
			return 0;
		}
		if (func_225(155))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		SYSTEM::WAIT(0);
	}
	return 0;
}

int func_241(int iParam0, int iParam1, bool bParam2)//Position - 0xB319
{
	int iVar0;
	
	iVar0 = unk_0x4796DAD7A8894E2F();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_234();
			}
			else
			{
				return 0;
			}
		}
		if (!func_242())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x7AF0088ABFA713B6())
				{
					if (!bParam2)
					{
						func_234();
					}
					else
					{
						return 0;
					}
				}
				if (func_227())
				{
					if (!bParam2)
					{
						func_234();
					}
					else
					{
						return 0;
					}
				}
				if (func_225(155))
				{
					if (!bParam2)
					{
						func_234();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xF5F5C6DD66B0FB2A())
			{
				if (!bParam2)
				{
					func_234();
				}
				else
				{
					return 0;
				}
			}
		}
		SYSTEM::WAIT(0);
		iVar0 = unk_0x4796DAD7A8894E2F();
	}
	if (iParam1 > -1)
	{
		Global_1406F4 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x7AF0088ABFA713B6())
		{
			if (!bParam2)
			{
				func_234();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xF5F5C6DD66B0FB2A())
	{
		if (!bParam2)
		{
			func_234();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_242()//Position - 0xB42E
{
	return Global_14083F;
}

void func_243(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0xB43A
{
	if (!unk_0x7AF0088ABFA713B6())
	{
		func_234();
	}
	unk_0xBF463BC3D6FFDE31(iParam0, 0, Param1.f_10);
}

int func_244(int iParam0)//Position - 0xB459
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case 79:
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 32;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 8;
		
		case 91:
			return 32;
		
		case 92:
			return 8;
		
		case 93:
			return 8;
		
		case 101:
			return 8;
		
		case 94:
			return 8;
		
		case 95:
			return 32;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 8;
		
		case 99:
			return 32;
		
		case 100:
			return 32;
		
		case 102:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 8;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 113:
			return 32;
		
		case 114:
			return 8;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 32;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 8;
		
		case 123:
			return 8;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 124:
			return 32;
		
		case 125:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 136:
			return 32;
		
		case 137:
			return 32;
		
		case 126:
			return 32;
		
		case 127:
			return 32;
		
		case 131:
			return 32;
		
		case 129:
			return 32;
		
		case 130:
			return 32;
		
		case 134:
			return 32;
		
		case 135:
			return 32;
		
		case 132:
			return 32;
		
		case 133:
			return 32;
		
		case 138:
			return 32;
		
		case 139:
			return 32;
		
		case 140:
			return 32;
		
		case 141:
			return 32;
		
		case 142:
			return 2;
		
		case 147:
			return 1;
		
		case 143:
			return 2;
		
		case 144:
			return 4;
		
		case 145:
			return 2;
		
		case 146:
			return 2;
		
		case 128:
			return 1;
		
		case 148:
			return 2;
		
		case 149:
		case 150:
		case 151:
		case 152:
		case 153:
		case 154:
			return 0;
		
		case 158:
			return 1;
		
		case 155:
			return 4;
		
		case 156:
			return 16;
		
		case 157:
			return 32;
		
		default:
	}
	return 0;
}

