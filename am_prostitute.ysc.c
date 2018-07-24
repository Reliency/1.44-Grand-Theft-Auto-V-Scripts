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
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	vector3 vLocal_58[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	struct<21> Local_59 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	sLocal_20 = "NULL";
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
		func_46(ScriptParam_59);
	}
	else
	{
		func_43();
	}
	iLocal_53 = unk_0x105601648511CC64();
	while (true)
	{
		func_42();
		if (((func_32() || unk_0x2F7EEEA6378AC19B()) || (func_31(unk_0xB5CEFD608600A09F()) || func_30(unk_0xB5CEFD608600A09F()))) || func_27(unk_0xB5CEFD608600A09F()))
		{
			func_43();
		}
		if (unk_0x7AF0088ABFA713B6())
		{
			func_2();
			func_1();
			iLocal_54++;
			if (iLocal_54 >= unk_0x81C86888AEA2F49B())
			{
				iLocal_54 = 0;
			}
		}
		else
		{
			func_43();
		}
	}
}

void func_1()//Position - 0x100
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = unk_0x822BEC8031773562();
	iVar0 = 0;
	while (iVar0 < unk_0x81C86888AEA2F49B())
	{
		if ((iLocal_54 % iVar0) == 0)
		{
			if (unk_0x05086B70D2CFEA6F(unk_0xCFA8A401AAD7BB5A(iVar0)))
			{
				iVar2 = unk_0xA95CF30C72EB526E(unk_0x4ED43B67B3F05E0F(unk_0xCFA8A401AAD7BB5A(iVar0)));
				if (!unk_0x1D403DFADBC2DE3C(iVar2, 0))
				{
					if (vLocal_58[iVar0 /*3*/].f_2)
					{
						if (SYSTEM::VDIST2(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0), unk_0x541C2AEF053615BC(iVar2, 1)) <= 22500f)
						{
							if (!iLocal_56)
							{
								unk_0x522053D86D6E1C7A("mini@prostitutes@sexlow_veh");
								unk_0x522053D86D6E1C7A("mini@prostitutes@sexnorm_veh");
								unk_0x522053D86D6E1C7A("mini@prostitutes@sexlow_veh_first_person");
								unk_0x522053D86D6E1C7A("mini@prostitutes@sexnorm_veh_first_person");
								iLocal_56 = 1;
							}
							if (!unk_0xFA30DFD0084E92FE(iLocal_55, iVar0))
							{
								unk_0xF0059F27F7BB6680(&iLocal_55, iVar0);
							}
						}
						else if (unk_0xFA30DFD0084E92FE(iLocal_55, iVar0))
						{
							unk_0x7CB6FD92BE491AD9(&iLocal_55, iVar0);
						}
					}
					else if (unk_0xFA30DFD0084E92FE(iLocal_55, iVar0))
					{
						unk_0x7CB6FD92BE491AD9(&iLocal_55, iVar0);
					}
				}
				else if (unk_0xFA30DFD0084E92FE(iLocal_55, iVar0))
				{
					unk_0x7CB6FD92BE491AD9(&iLocal_55, iVar0);
				}
			}
		}
		iVar0++;
	}
	if ((iLocal_55 == 0 && iLocal_56) && !vLocal_58[iVar1 /*3*/].f_2)
	{
		unk_0x4EA570997E107F35("mini@prostitutes@sexlow_veh");
		unk_0x4EA570997E107F35("mini@prostitutes@sexnorm_veh");
		unk_0x4EA570997E107F35("mini@prostitutes@sexlow_veh_first_person");
		unk_0x4EA570997E107F35("mini@prostitutes@sexnorm_veh_first_person");
		iLocal_56 = 0;
	}
}

void func_2()//Position - 0x230
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	
	if (unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		return;
	}
	if (iLocal_53 > unk_0x105601648511CC64())
	{
		return;
	}
	iVar0 = 0;
	iVar2 = unk_0x822BEC8031773562();
	bVar3 = false;
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			iVar1 = unk_0xBC25C936A095B5BA();
			if (func_26(&iVar1))
			{
				bVar3 = true;
			}
		}
	}
	switch (iLocal_52)
	{
		case 0:
			if (((func_23(unk_0xB5CEFD608600A09F(), 1) || func_22()) || !bVar3) || func_17())
			{
				iLocal_52 = 4;
			}
			else
			{
				iVar0 = func_13();
				if (iVar0 != func_12(iVar2) && iVar0 != 0)
				{
					func_11(iVar0);
					iLocal_53 = unk_0x105601648511CC64();
					iLocal_52 = 2;
				}
				else
				{
					iLocal_53 = unk_0x105601648511CC64() + 500;
				}
			}
			break;
		
		case 2:
			if (func_4())
			{
				Global_6356 = 0f;
				unk_0x63831D2D5110C305("pb_prostitute");
				iLocal_53 = unk_0x105601648511CC64() + 250;
				vLocal_58[iVar2 /*3*/].f_2 = 0;
				iLocal_52 = 3;
			}
			else
			{
				iLocal_53 = unk_0x105601648511CC64() + 250;
			}
			break;
		
		case 3:
			if ((unk_0xACE95AD318CE412B("pb_prostitute") && unk_0xB731B8C5BCE89836(joaat("pb_prostitute")) <= 0) && !unk_0x18C4EA3345AA5A99("pb_prostitute", unk_0x822BEC8031773562(), 1, 0))
			{
				iVar4 = func_12(iVar2);
				iLocal_57 = SYSTEM::START_NEW_SCRIPT_WITH_ARGS("pb_prostitute", &iVar4, 1, 2050);
				unk_0x91DEC7187FA01089("pb_prostitute");
				iLocal_52 = 0;
			}
			iLocal_53 = unk_0x105601648511CC64();
			break;
		
		case 4:
			if (func_4())
			{
				vLocal_58[iVar2 /*3*/].f_2 = 0;
				iLocal_53 = unk_0x105601648511CC64() + 250;
				iLocal_52 = 5;
			}
			else
			{
				iLocal_53 = unk_0x105601648511CC64() + 500;
			}
			break;
		
		case 5:
			if (((!func_23(unk_0xB5CEFD608600A09F(), 1) && !func_22()) && bVar3) && !func_3())
			{
				iLocal_53 = unk_0x105601648511CC64() + 250;
				iLocal_52 = 0;
			}
			else
			{
				iLocal_53 = unk_0x105601648511CC64() + 500;
			}
			break;
	}
}

bool func_3()//Position - 0x410
{
	return Global_19AF9B;
}

int func_4()//Position - 0x41C
{
	if (unk_0xB731B8C5BCE89836(joaat("pb_prostitute")) <= 0 && !unk_0x18C4EA3345AA5A99("pb_prostitute", unk_0x822BEC8031773562(), 1, 0))
	{
		return 1;
	}
	if (iLocal_57 == 0)
	{
		return 1;
	}
	if (unk_0x7AF0088ABFA713B6())
	{
		func_5();
	}
	else
	{
		unk_0x46F3E7CA971834FD("pb_prostitute", 1);
	}
	return 0;
}

void func_5()//Position - 0x46A
{
	struct<2> Var0;
	int iVar1;
	
	Var0 = 1500932196;
	Var0.f_1 = unk_0xB5CEFD608600A09F();
	iVar1 = func_6(1, 1);
	if (iVar1 != 0)
	{
		unk_0x38E776D9FA75679B(1, &Var0, 2, iVar1);
	}
}

var func_6(int iParam0, bool bParam1)//Position - 0x499
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x3171C34AB3FE6F2E(iVar1);
		if (func_10(iVar2, 0, 0))
		{
			if (iVar2 != unk_0xB5CEFD608600A09F() || iParam0)
			{
				if (bParam1)
				{
					unk_0xF0059F27F7BB6680(&uVar0, iVar1);
				}
				else if (!func_7(iVar2, 0))
				{
					unk_0xF0059F27F7BB6680(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_7(int iParam0, int iParam1)//Position - 0x4FE
{
	bool bVar0;
	
	if (iParam0 == unk_0xB5CEFD608600A09F())
	{
		bVar0 = func_8(-1, 0) == 8;
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

int func_8(int iParam0, bool bParam1)//Position - 0x549
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_9();
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

int func_9()//Position - 0x58A
{
	return Global_1407E0;
}

int func_10(int iParam0, bool bParam1, bool bParam2)//Position - 0x596
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

void func_11(int iParam0)//Position - 0x5E0
{
	vLocal_58[unk_0x822BEC8031773562() /*3*/] = iParam0;
}

int func_12(int iParam0)//Position - 0x5F2
{
	if (iParam0 == -1)
	{
		return vLocal_58[unk_0x822BEC8031773562() /*3*/];
	}
	return vLocal_58[iParam0 /*3*/];
}

int func_13()//Position - 0x611
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	float fVar7;
	float fVar8;
	
	iVar0 = func_14();
	iVar1 = unk_0x822BEC8031773562();
	if (!unk_0x724D816EA203A79E(func_12(iVar1)))
	{
		func_11(0);
		return iVar0;
	}
	if (iLocal_57 != 0 && unk_0x3C406FC829C1E14A(iLocal_57))
	{
		if (vLocal_58[iVar1 /*3*/].f_2)
		{
			return func_12(iVar1);
		}
		if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
		{
			if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
			{
				iVar2 = unk_0xBC25C936A095B5BA();
				if (func_26(&iVar2))
				{
					iVar3 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
					if (unk_0x724D816EA203A79E(iVar3))
					{
						if (func_12(iVar1) == unk_0x3187EF5798B5D209(iVar3, 0, 0) || unk_0x62F3A07C43FFB568(func_12(iVar1), iVar3, 1))
						{
							vLocal_58[iVar1 /*3*/].f_2 = 1;
							return func_12(iVar1);
						}
					}
					if (iVar0 == 0)
					{
						return func_12(iVar1);
					}
					vVar4 = { unk_0x541C2AEF053615BC(func_12(iVar1), 0) };
					vVar5 = { unk_0x541C2AEF053615BC(iVar0, 0) };
					vVar6 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0) };
					fVar7 = SYSTEM::VDIST(vVar4, vVar6);
					fVar8 = SYSTEM::VDIST(vVar6, vVar5);
					if (fVar7 > fVar8)
					{
						if ((fVar7 - fVar8) > 25f)
						{
							return iVar0;
						}
						else if (fVar8 < 6f && fVar7 > 11f)
						{
							return iVar0;
						}
						else
						{
							return func_12(iVar1);
						}
					}
					else
					{
						return func_12(iVar1);
					}
				}
			}
		}
	}
	return iVar0;
}

int func_14()//Position - 0x777
{
	int iVar0;
	var uVar1[8];
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	iVar2 = unk_0x252B0CBDBF5803ED(unk_0xBC25C936A095B5BA(), &uVar1, -1);
	if (iVar2 > 0)
	{
		iVar3 = 0;
		while (iVar3 <= 7)
		{
			if (!unk_0x36CEFBE9B745A58D(uVar1[iVar3]))
			{
				if (unk_0x4DF0825BB012BDB0(uVar1[iVar3], "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS") || unk_0x4DF0825BB012BDB0(uVar1[iVar3], "WORLD_HUMAN_PROSTITUTE_LOW_CLASS"))
				{
					if (func_16(uVar1[iVar3]))
					{
						if (!func_15(uVar1[iVar3]))
						{
							if (!unk_0x889DA6CE8E4DB344(uVar1[iVar3]))
							{
								return uVar1[iVar3];
							}
						}
					}
				}
			}
			iVar3++;
		}
	}
	return iVar0;
}

int func_15(int iParam0)//Position - 0x812
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (vLocal_58[iVar0 /*3*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_16(int iParam0)//Position - 0x840
{
	var uVar0;
	char* sVar1;
	
	sVar1 = unk_0x0B00D4CDDAB33814(iParam0, &uVar0);
	if (!unk_0xF1734B55490E9045(sVar1))
	{
		if (unk_0x3362CDE8460ED38B(sVar1, "GB_VEHICLE_EXPORT"))
		{
			return 0;
		}
		if (unk_0x3362CDE8460ED38B(sVar1, "BUSINESS_BATTLES_SELL"))
		{
			return 0;
		}
		if (unk_0x3362CDE8460ED38B(sVar1, "BUSINESS_BATTLES"))
		{
			return 0;
		}
	}
	return 1;
}

int func_17()//Position - 0x88E
{
	if (func_3())
	{
		return 1;
	}
	if (func_18(unk_0xB5CEFD608600A09F()) != -1)
	{
		return 1;
	}
	return 0;
}

int func_18(int iParam0)//Position - 0x8B2
{
	if (func_21(iParam0) == 237 || func_21(iParam0) == 250)
	{
		return func_19(iParam0);
	}
	return -1;
}

int func_19(int iParam0)//Position - 0x8DF
{
	if (func_20(iParam0, 0))
	{
		return Global_18C80F[iParam0 /*558*/].f_B.f_B0;
	}
	return -1;
}

int func_20(int iParam0, int iParam1)//Position - 0x902
{
	if (Global_18C80F[iParam0 /*558*/].f_B.f_21 != -1 || (iParam1 && Global_18C80F[iParam0 /*558*/].f_B.f_20 != -1))
	{
		return 1;
	}
	return 0;
}

int func_21(int iParam0)//Position - 0x93D
{
	if (func_20(iParam0, 0))
	{
		return Global_18C80F[iParam0 /*558*/].f_B.f_21;
	}
	return -1;
}

bool func_22()//Position - 0x960
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_27.f_12, 0);
}

int func_23(int iParam0, bool bParam1)//Position - 0x97C
{
	if (bParam1)
	{
		if (func_24(iParam0))
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

bool func_24(int iParam0)//Position - 0x9A8
{
	return func_25(iParam0);
}

bool func_25(int iParam0)//Position - 0x9B6
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_D.f_1, 0);
}

int func_26(int iParam0)//Position - 0x9D0
{
	if (unk_0x5237AF95232D78C5(*iParam0, 0))
	{
		if (unk_0x3187EF5798B5D209(unk_0xD20EBB97FE8799ED(*iParam0), -1, 0) == *iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_27(int iParam0)//Position - 0x9FB
{
	if (iParam0 != func_29())
	{
		if (func_10(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1)
			{
				return func_28(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 11;
			}
		}
	}
	return 0;
}

int func_28(int iParam0)//Position - 0xA42
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

int func_29()//Position - 0xD8E
{
	return -1;
}

bool func_30(int iParam0)//Position - 0xD97
{
	return Global_24FB5C[iParam0 /*406*/].f_6F == 7;
}

bool func_31(int iParam0)//Position - 0xDAC
{
	return Global_24FB5C[iParam0 /*406*/].f_6F == 2;
}

int func_32()//Position - 0xDC1
{
	var uVar0;
	
	func_39(&uVar0);
	if (Global_14083F == 0)
	{
		if (!unk_0x7AF0088ABFA713B6())
		{
			return 1;
		}
	}
	if (func_38())
	{
		return 1;
	}
	if (Global_25891C)
	{
		return 1;
	}
	if (func_37())
	{
		return 1;
	}
	if (func_36(157))
	{
		if (!func_35())
		{
			return 1;
		}
	}
	if (func_36(155))
	{
		return 1;
	}
	if (!unk_0x57D316754A262B34())
	{
		return 1;
	}
	if (func_33() != 0)
	{
		if (unk_0xB731B8C5BCE89836(func_33()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_33()//Position - 0xE4B
{
	switch (func_34())
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

int func_34()//Position - 0xE7F
{
	return Global_62BD;
}

bool func_35()//Position - 0xE8A
{
	return Global_255A46.f_24A;
}

int func_36(int iParam0)//Position - 0xE99
{
	if (unk_0xA1AC399BCBEE5B2D(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_37()//Position - 0xEB0
{
	return Global_258063;
}

bool func_38()//Position - 0xEBC
{
	return Global_255A46.f_245;
}

void func_39(var uParam0)//Position - 0xECB
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
					func_40(iVar0);
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

void func_40(int iParam0)//Position - 0xF3E
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x414AA1932D1C88E2(1, iParam0, &vVar0, 3))
	{
		if (func_10(vVar0.y, 1, 1))
		{
			iVar1 = unk_0xA95CF30C72EB526E(vVar0.y);
			if (unk_0x724D816EA203A79E(iVar1))
			{
				if (unk_0x5237AF95232D78C5(iVar1, 0))
				{
					iVar2 = unk_0x9FE9D386222EEE47(iVar1, 0);
					if (unk_0x403C891106DCABAF(iVar2, vVar0.z) && unk_0x32405B7614E36453())
					{
						if (func_41(iVar2, &bVar3))
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

int func_41(int iParam0, var uParam1)//Position - 0xFBF
{
	if (unk_0x724D816EA203A79E(iParam0))
	{
		if (!unk_0x5CAE759AE8219D20(iParam0))
		{
			if (unk_0x63B5FF8D34CBC98E(iParam0))
			{
				if (!unk_0xFF2234981505F7F4(unk_0x6F79ECA8C83E4357(iParam0)))
				{
					unk_0x77815D3407C6700D(iParam0, false, 1);
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

void func_42()//Position - 0x101E
{
	SYSTEM::WAIT(0);
}

void func_43()//Position - 0x102B
{
	if (iLocal_56)
	{
		unk_0x4EA570997E107F35("mini@prostitutes@sexlow_veh");
		unk_0x4EA570997E107F35("mini@prostitutes@sexnorm_veh");
		unk_0x4EA570997E107F35("mini@prostitutes@sexlow_veh_first_person");
		unk_0x4EA570997E107F35("mini@prostitutes@sexnorm_veh_first_person");
	}
	func_45();
	func_4();
	if (unk_0x7AF0088ABFA713B6())
	{
		func_5();
	}
	else
	{
		unk_0x46F3E7CA971834FD("pb_prostitute", 1);
	}
	Global_267214.f_4 = 0;
	func_44();
}

void func_44()//Position - 0x107D
{
	unk_0x95E4B6F3ED223F5A();
}

void func_45()//Position - 0x1089
{
	Global_252E21.f_47F.f_A = 0;
}

void func_46(struct<21> Param0)//Position - 0x109B
{
	func_49(func_50(Param0), Param0);
	func_47(0, -1, 0);
	unk_0xE45D6A3FD6454198(&vLocal_58, 97);
	if (unk_0x7AF0088ABFA713B6())
	{
		func_5();
	}
	else
	{
		unk_0x46F3E7CA971834FD("pb_prostitute", 1);
	}
	unk_0x6C87EFD58B261C6F(0);
}

int func_47(int iParam0, int iParam1, bool bParam2)//Position - 0x10DD
{
	int iVar0;
	
	iVar0 = unk_0x4796DAD7A8894E2F();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_44();
			}
			else
			{
				return 0;
			}
		}
		if (!func_48())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x7AF0088ABFA713B6())
				{
					if (!bParam2)
					{
						func_44();
					}
					else
					{
						return 0;
					}
				}
				if (func_38())
				{
					if (!bParam2)
					{
						func_44();
					}
					else
					{
						return 0;
					}
				}
				if (func_36(155))
				{
					if (!bParam2)
					{
						func_44();
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
					func_44();
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
				func_44();
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
			func_44();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_48()//Position - 0x11F2
{
	return Global_14083F;
}

void func_49(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x11FE
{
	if (!unk_0x7AF0088ABFA713B6())
	{
		func_44();
	}
	unk_0xBF463BC3D6FFDE31(iParam0, 0, Param1.f_10);
}

int func_50(int iParam0)//Position - 0x121D
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

