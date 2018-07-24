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
	var uLocal_60 = 0;
	var uLocal_61 = 10;
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
	var uLocal_72 = 2;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 8;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 8;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	float fLocal_94 = 0f;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	struct<48> Local_103 = { 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, -808831384, 588969535, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_104 = 0;
	vector3 vLocal_105[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_106 = 0;
	var uLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	struct<8> Local_121[3];
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	struct<21> Local_124 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_94 = ((0.05f + 0.275f) - 0.01f);
	iLocal_110 = 1076369579;
	iLocal_111 = 20;
	if (unk_0x7AF0088ABFA713B6() && func_225(unk_0xB5CEFD608600A09F(), 0, 1))
	{
		func_216(ScriptParam_124);
	}
	else
	{
		func_212();
	}
	while (true)
	{
		func_211();
		if (func_201() || func_197(17))
		{
			func_212();
		}
		if (unk_0x2F7EEEA6378AC19B())
		{
			func_212();
		}
		switch (func_196(unk_0x6BAA0516CC970D99()))
		{
			case 0:
				if (func_195() == 1)
				{
					func_194();
					func_192();
					if (func_191(60000))
					{
						if (!func_189())
						{
							if (!unk_0x7512ED01F3F46714(Local_103.f_A))
							{
								func_188("DSV_HELP1", -1);
							}
							else
							{
								func_188("DSV_HELP2", -1);
							}
						}
					}
					vLocal_105[unk_0x6BAA0516CC970D99() /*3*/] = 1;
				}
				else if (func_195() == 4)
				{
					vLocal_105[unk_0x6BAA0516CC970D99() /*3*/] = 3;
				}
				break;
			
			case 1:
				if (func_195() == 1)
				{
					func_43();
				}
				else if (func_195() == 4)
				{
					vLocal_105[unk_0x6BAA0516CC970D99() /*3*/] = 3;
				}
				break;
			
			case 3:
				func_42(&(Local_103.f_2D));
				if (func_41(&(Local_103.f_2D)))
				{
					vLocal_105[unk_0x6BAA0516CC970D99() /*3*/] = 4;
				}
				break;
			
			case 2:
				vLocal_105[unk_0x6BAA0516CC970D99() /*3*/] = 4;
			
			case 4:
				func_212();
				break;
		}
		if (unk_0x0DE6397A2CB3EF75())
		{
			switch (func_195())
			{
				case 0:
					if (func_10())
					{
						func_194();
						func_9(&(Local_103.f_2B), 0, 0);
						Local_103 = 1;
					}
					break;
				
				case 1:
					func_8();
					func_7();
					if (func_1())
					{
						Local_103 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()//Position - 0x216
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()//Position - 0x22A
{
	struct<14> Var0;
	struct<14> Var1;
	
	if (Local_103.f_2A == 0)
	{
		if (Local_103 != 4)
		{
			if (unk_0x1D403DFADBC2DE3C(unk_0x19D7F09C2FABDDA0(Local_103.f_2), 0))
			{
				if (func_6(&(Local_103.f_2F), 3000, 0))
				{
					if (Local_103.f_8 == func_5())
					{
						Var0.f_2 = -2043358833;
						func_3(Var0, func_4(1));
					}
					else
					{
						Var0.f_2 = 1242858497;
						Var0.f_A = Local_103.f_8;
						func_3(Var0, func_4(1));
					}
					return 1;
				}
			}
			if (func_6(&(Local_103.f_2B), Global_40001.f_2918, 0))
			{
				Var1.f_2 = -1810711604;
				func_3(Var1, func_4(1));
				return 1;
			}
		}
	}
	return 0;
}

void func_3(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)//Position - 0x2D6
{
	Param0 = -471892217;
	Param0.f_1 = unk_0xB5CEFD608600A09F();
	if (!iParam13 == 0)
	{
		unk_0x38E776D9FA75679B(1, &Param0, 14, iParam13);
	}
}

int func_4(int iParam0)//Position - 0x303
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
			if (func_225(iVar2, 0, 0))
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

int func_5()//Position - 0x360
{
	return -1;
}

int func_6(var uParam0, int iParam1, bool bParam2)//Position - 0x369
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_9(uParam0, bParam2, 0);
	if (unk_0x7AF0088ABFA713B6() && !bParam2)
	{
		if (unk_0xC40EDFF7541407A8(unk_0xCCA9497DA4595710(unk_0xED678C85A82F0AB9(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xC40EDFF7541407A8(unk_0xCCA9497DA4595710(unk_0x105601648511CC64(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_7()//Position - 0x3C7
{
	switch (Local_103.f_2A)
	{
		case 0:
			break;
		
		case 1:
			break;
	}
}

void func_8()//Position - 0x3EA
{
	struct<14> Var0;
	int iVar1;
	
	if (Local_103 != 4)
	{
		iLocal_108 = 0;
		while (iLocal_108 < unk_0x81C86888AEA2F49B())
		{
			if (unk_0x05086B70D2CFEA6F(unk_0xCFA8A401AAD7BB5A(iLocal_108)))
			{
				iVar1 = unk_0x4ED43B67B3F05E0F(unk_0xCFA8A401AAD7BB5A(iLocal_108));
				if (unk_0xFA30DFD0084E92FE(vLocal_105[iLocal_108 /*3*/].f_1, 0))
				{
					Var0.f_2 = 1242858497;
					Var0.f_A = iVar1;
					Local_103.f_8 = iVar1;
					func_3(Var0, func_4(1));
					Local_103 = 4;
					return;
				}
				if (!unk_0xFA30DFD0084E92FE(Local_103.f_1, 0))
				{
					if (unk_0xFA30DFD0084E92FE(vLocal_105[iLocal_108 /*3*/].f_1, 1))
					{
						unk_0xF0059F27F7BB6680(&(Local_103.f_1), 0);
					}
					if (unk_0xFA30DFD0084E92FE(vLocal_105[iLocal_108 /*3*/].f_1, 2))
					{
						unk_0xF0059F27F7BB6680(&(Local_103.f_1), 0);
					}
				}
				else
				{
					if (!unk_0xFA30DFD0084E92FE(Local_103.f_1, 1))
					{
						if (unk_0xFA30DFD0084E92FE(vLocal_105[iLocal_108 /*3*/].f_1, 3))
						{
							unk_0xF0059F27F7BB6680(&(Local_103.f_1), 1);
						}
					}
					if (!unk_0xFA30DFD0084E92FE(Local_103.f_1, 2))
					{
						if (unk_0xFA30DFD0084E92FE(vLocal_105[iLocal_108 /*3*/].f_1, 4))
						{
							unk_0xF0059F27F7BB6680(&(Local_103.f_1), 2);
						}
					}
					if (!unk_0xFA30DFD0084E92FE(Local_103.f_1, 3))
					{
						if (unk_0xFA30DFD0084E92FE(vLocal_105[iLocal_108 /*3*/].f_1, 5))
						{
							unk_0xF0059F27F7BB6680(&(Local_103.f_1), 3);
						}
					}
					if (!unk_0xFA30DFD0084E92FE(Local_103.f_1, 4))
					{
						if (unk_0xFA30DFD0084E92FE(vLocal_105[iLocal_108 /*3*/].f_1, 6))
						{
							unk_0xF0059F27F7BB6680(&(Local_103.f_1), 4);
						}
					}
				}
			}
			iLocal_108++;
		}
	}
}

void func_9(var uParam0, bool bParam1, bool bParam2)//Position - 0x539
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

int func_10()//Position - 0x57E
{
	if (func_40(Local_103.f_A) && func_40(Local_103.f_B))
	{
		if ((func_21() && func_19()) && func_11())
		{
			unk_0x2CA123B0622F495C(Local_103.f_A);
			unk_0x2CA123B0622F495C(Local_103.f_B);
			return 1;
		}
	}
	return 0;
}

int func_11()//Position - 0x5CC
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_103.f_E)
	{
		if ((!unk_0x7FFE36DB9042AF23(Local_103.f_4[iVar0]) && func_40(Local_103.f_B)) && unk_0x7FFE36DB9042AF23(Local_103.f_2))
		{
			if (func_17(Local_103.f_2))
			{
				if (Local_103.f_C == 0)
				{
					if (func_16(&(Local_103.f_4[iVar0]), Local_103.f_2, 22, Local_103.f_B, iVar0, 1, 1, 1))
					{
						func_13(&(Local_103.f_4[iVar0]));
					}
				}
				else if (func_12(&(Local_103.f_4[iVar0]), 22, Local_103.f_B, Local_103.f_1C[iVar0 /*3*/], Local_103.f_26[iVar0], 1, 1, 1))
				{
					func_13(&(Local_103.f_4[iVar0]));
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_103.f_E)
	{
		if (!unk_0x7FFE36DB9042AF23(Local_103.f_4[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_12(var uParam0, int iParam1, int iParam2, vector3 vParam3, float fParam4, bool bParam5, int iParam6, int iParam7)//Position - 0x6B3
{
	int iVar0;
	
	if (!unk_0x88E77A85289CC883(1))
	{
		return 0;
	}
	iVar0 = unk_0x01B3635C3E8EDD81(iParam1, iParam2, vParam3, fParam4, iParam6, bParam5);
	*uParam0 = unk_0x5902CDB733CD6ADE(iVar0);
	if (unk_0x7FFE36DB9042AF23(*uParam0))
	{
		unk_0x656194E145691D3E(iVar0, iParam7);
		if (unk_0x270072584099CC42(iVar0))
		{
			if (bParam5)
			{
				unk_0xF2A50F5F6E7737D8(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

void func_13(var uParam0)//Position - 0x712
{
	int iVar0;
	
	unk_0x4106FAF8AA1D69D5(unk_0xE48AD7BF7762E114(*uParam0), Global_180793);
	unk_0x7D314AB19CA29C96(unk_0xE48AD7BF7762E114(*uParam0), 0);
	unk_0x22321800954A532E(unk_0xE48AD7BF7762E114(*uParam0), 1);
	unk_0x7A853DA478E4882E(unk_0xE48AD7BF7762E114(*uParam0), func_15(), 25000, 1);
	iVar0 = unk_0x491B2241281A03B7(0, 10);
	if (iVar0 == 0 || iVar0 == 1)
	{
		unk_0xE20EB9C9BC14ECEB(unk_0xE48AD7BF7762E114(*uParam0), 0);
	}
	else if ((iVar0 == 2 || iVar0 == 3) || iVar0 == 4)
	{
		unk_0xE20EB9C9BC14ECEB(unk_0xE48AD7BF7762E114(*uParam0), 2);
	}
	else
	{
		unk_0xE20EB9C9BC14ECEB(unk_0xE48AD7BF7762E114(*uParam0), 1);
	}
	iVar0 = unk_0x491B2241281A03B7(0, 10);
	if ((iVar0 == 0 || iVar0 == 1) || iVar0 == 2)
	{
		unk_0x91629AC1E1F78419(unk_0xE48AD7BF7762E114(*uParam0), 5, 1);
	}
	else if (iVar0 == 3)
	{
		unk_0x91629AC1E1F78419(unk_0xE48AD7BF7762E114(*uParam0), 17, 1);
	}
	else if ((iVar0 == 4 || iVar0 == 5) || iVar0 == 6)
	{
		unk_0x91629AC1E1F78419(unk_0xE48AD7BF7762E114(*uParam0), 13, 1);
	}
	if (func_14())
	{
		unk_0x91629AC1E1F78419(unk_0xE48AD7BF7762E114(*uParam0), 20, 1);
	}
	unk_0x91629AC1E1F78419(unk_0xE48AD7BF7762E114(*uParam0), 2, 1);
	iVar0 = unk_0x491B2241281A03B7(0, 4);
	if (iVar0 == 0)
	{
		unk_0x54480313BB3E8DD0(unk_0xE48AD7BF7762E114(*uParam0), 2);
	}
	else if (iVar0 == 1)
	{
		unk_0x54480313BB3E8DD0(unk_0xE48AD7BF7762E114(*uParam0), 1);
	}
	else if (iVar0 == 2)
	{
		unk_0x54480313BB3E8DD0(unk_0xE48AD7BF7762E114(*uParam0), 3);
	}
	unk_0xF2DC3E89B858957C(unk_0xE48AD7BF7762E114(*uParam0), 1);
	unk_0x2FEB3A9B7C91A02D(unk_0xE48AD7BF7762E114(*uParam0), 1);
	unk_0xC8FD3EBBB90E8D7F(unk_0xE48AD7BF7762E114(*uParam0), 29, true);
	unk_0x8A8475988CA32D80(unk_0xE48AD7BF7762E114(*uParam0), 3);
	unk_0x65E471E4A2D56226(unk_0xE48AD7BF7762E114(*uParam0), SYSTEM::ROUND((200f * Global_40001.f_99)), 0);
}

int func_14()//Position - 0x8DB
{
	if (unk_0xFA30DFD0084E92FE(unk_0x491B2241281A03B7(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_15()//Position - 0x8FC
{
	switch (Local_103.f_B)
	{
		case joaat("g_m_y_ballaorig_01"):
		case joaat("g_m_y_ballaeast_01"):
			switch (unk_0x491B2241281A03B7(0, 5))
			{
				case 0:
					return joaat("weapon_combatpistol");
				
				case 1:
					return joaat("weapon_pumpshotgun");
				
				case 2:
					return joaat("weapon_microsmg");
				
				case 3:
					return joaat("weapon_mg");
				
				case 4:
					return joaat("weapon_assaultrifle");
				
				default:
			}
			break;
		
		case joaat("g_m_y_mexgoon_02"):
		case joaat("g_f_y_vagos_01"):
			switch (unk_0x491B2241281A03B7(0, 5))
			{
				case 0:
					return joaat("weapon_pistol");
				
				case 1:
					return joaat("weapon_pumpshotgun");
				
				case 2:
					return joaat("weapon_microsmg");
				
				case 3:
					return joaat("weapon_mg");
				
				case 4:
					return joaat("weapon_assaultrifle");
				
				default:
			}
			break;
		
		case joaat("g_m_y_lost_01"):
		case joaat("g_f_y_lost_01"):
			switch (unk_0x491B2241281A03B7(0, 5))
			{
				case 0:
					return joaat("weapon_combatpistol");
				
				case 1:
					return joaat("weapon_sawnoffshotgun");
				
				case 2:
					return joaat("weapon_smg");
				
				case 3:
					return joaat("weapon_mg");
				
				case 4:
					return joaat("weapon_assaultrifle");
				
				default:
			}
			break;
		
		case joaat("g_m_m_chigoon_02"):
		case joaat("g_m_m_chigoon_01"):
			switch (unk_0x491B2241281A03B7(0, 5))
			{
				case 0:
					return joaat("weapon_pistol");
				
				case 1:
					return joaat("weapon_pumpshotgun");
				
				case 2:
					return joaat("weapon_advancedrifle");
				
				case 3:
					return joaat("weapon_mg");
				
				case 4:
					return joaat("weapon_carbinerifle");
				
				default:
			}
			break;
		
		case joaat("g_m_m_armgoon_01"):
		case joaat("g_m_y_armgoon_02"):
			switch (unk_0x491B2241281A03B7(0, 5))
			{
				case 0:
					return joaat("weapon_pistol");
				
				case 1:
					return joaat("weapon_sawnoffshotgun");
				
				case 2:
					return joaat("weapon_smg");
				
				case 3:
					return joaat("weapon_mg");
				
				case 4:
					return joaat("weapon_carbinerifle");
				
				default:
			}
			break;
		
		case joaat("a_m_m_hillbilly_02"):
		case joaat("a_m_m_hillbilly_01"):
			switch (unk_0x491B2241281A03B7(0, 5))
			{
				case 0:
					return joaat("weapon_combatpistol");
				
				case 1:
					return joaat("weapon_sawnoffshotgun");
				
				case 2:
					return joaat("weapon_microsmg");
				
				case 3:
					return joaat("weapon_mg");
				
				case 4:
					return joaat("weapon_combatmg");
				
				default:
			}
			break;
		
		case joaat("g_m_y_salvagoon_01"):
		case joaat("g_m_y_salvagoon_02"):
			switch (unk_0x491B2241281A03B7(0, 5))
			{
				case 0:
					return joaat("weapon_pistol");
				
				case 1:
					return joaat("weapon_pumpshotgun");
				
				case 2:
					return joaat("weapon_microsmg");
				
				case 3:
					return joaat("weapon_mg");
				
				case 4:
					return joaat("weapon_assaultrifle");
				
				default:
			}
			break;
		
		case joaat("g_m_y_strpunk_01"):
		case joaat("g_m_y_strpunk_02"):
			switch (unk_0x491B2241281A03B7(0, 5))
			{
				case 0:
					return joaat("weapon_pistol");
				
				case 1:
					return joaat("weapon_sawnoffshotgun");
				
				case 2:
					return joaat("weapon_microsmg");
				
				case 3:
					return joaat("weapon_mg");
				
				case 4:
					return joaat("weapon_assaultrifle");
				
				default:
			}
			break;
		
		default:
			switch (unk_0x491B2241281A03B7(0, 5))
			{
				case 0:
					return joaat("weapon_pistol");
				
				case 1:
					return joaat("weapon_pumpshotgun");
				
				case 2:
					return joaat("weapon_smg");
				
				case 3:
					return joaat("weapon_combatmg");
				
				case 4:
					return joaat("weapon_carbinerifle");
				
				default:
			}
			break;
	}
	return joaat("weapon_pistol");
}

int func_16(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)//Position - 0xC66
{
	if (!unk_0x88E77A85289CC883(1))
	{
		return 0;
	}
	if (!unk_0x7FFE36DB9042AF23(iParam1))
	{
		return 0;
	}
	if (!unk_0xE59B7F5A03335350(unk_0x19D7F09C2FABDDA0(iParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0x5902CDB733CD6ADE(unk_0xFD8987C090669BD5(unk_0x19D7F09C2FABDDA0(iParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
	if (unk_0x7FFE36DB9042AF23(*uParam0))
	{
		unk_0x656194E145691D3E(unk_0xE48AD7BF7762E114(*uParam0), iParam7);
		if (unk_0x270072584099CC42(unk_0xE48AD7BF7762E114(*uParam0)))
		{
			if (bParam5)
			{
				unk_0xF2A50F5F6E7737D8(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_17(int iParam0)//Position - 0xCEE
{
	if (unk_0x7FFE36DB9042AF23(iParam0))
	{
		return !func_18(unk_0x19D7F09C2FABDDA0(iParam0));
	}
	return 0;
}

int func_18(int iParam0)//Position - 0xD0E
{
	if (unk_0x724D816EA203A79E(iParam0))
	{
		if (unk_0x1D403DFADBC2DE3C(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0xE59B7F5A03335350(iParam0, 0))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_19()//Position - 0xD47
{
	if ((!unk_0x7FFE36DB9042AF23(Local_103.f_3) && func_40(Local_103.f_B)) && unk_0x7FFE36DB9042AF23(Local_103.f_2))
	{
		if (func_17(Local_103.f_2))
		{
			if (Local_103.f_C == 1)
			{
				if (func_12(&(Local_103.f_3), 22, Local_103.f_B, Local_103.f_18, Local_103.f_1B, 1, 1, 1))
				{
					func_13(&(Local_103.f_3));
					func_20();
				}
			}
			else if (func_16(&(Local_103.f_3), Local_103.f_2, 22, Local_103.f_B, -1, 1, 1, 1))
			{
				func_13(&(Local_103.f_3));
				func_20();
			}
		}
	}
	if (!unk_0x7FFE36DB9042AF23(Local_103.f_3))
	{
		return 0;
	}
	return 1;
}

void func_20()//Position - 0xDEB
{
	if (Local_103.f_C == 0)
	{
		if (func_14())
		{
			unk_0x204BA7B1C7DD25F4(unk_0xE48AD7BF7762E114(Local_103.f_3), unk_0x19D7F09C2FABDDA0(Local_103.f_2), unk_0x55AEFCD285ECC0F2(7f, 18f), 786468);
		}
		else
		{
			unk_0x204BA7B1C7DD25F4(unk_0xE48AD7BF7762E114(Local_103.f_3), unk_0x19D7F09C2FABDDA0(Local_103.f_2), unk_0x55AEFCD285ECC0F2(7f, 18f), 786599);
		}
	}
	else if (Local_103.f_C == 2)
	{
		func_194();
		unk_0xA8E6405305C0D7DF(unk_0xE48AD7BF7762E114(Local_103.f_3), uLocal_107);
	}
}

int func_21()//Position - 0xE69
{
	int iVar0;
	
	if (!unk_0x7FFE36DB9042AF23(Local_103.f_2))
	{
		if (func_40(Local_103.f_A))
		{
			if (func_23(&(Local_103.f_10), &(Local_103.f_13)))
			{
				if (func_22(&(Local_103.f_2), Local_103.f_A, Local_103.f_10, Local_103.f_13, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0))
				{
					unk_0x346478B12F69D4E3(unk_0x19D7F09C2FABDDA0(Local_103.f_2), false);
					unk_0x73FD5B32F266E65D(unk_0x19D7F09C2FABDDA0(Local_103.f_2), 1);
					unk_0x46913653D1C7E82E(unk_0x19D7F09C2FABDDA0(Local_103.f_2));
					unk_0x2D655AA68FA1736B(unk_0x19D7F09C2FABDDA0(Local_103.f_2), true, 1, 0);
					unk_0x656194E145691D3E(unk_0x19D7F09C2FABDDA0(Local_103.f_2), 0);
					if (unk_0x46032D09AA009EC4("Not_Allow_As_Saved_Veh", 3))
					{
						unk_0x3F9FE9BB735B1604(unk_0x19D7F09C2FABDDA0(Local_103.f_2), "Not_Allow_As_Saved_Veh", 1);
					}
					if (unk_0x46032D09AA009EC4("MPBitset", 3))
					{
						if (unk_0x3C03CFD5DD1E2D97(unk_0x19D7F09C2FABDDA0(Local_103.f_2), "MPBitset"))
						{
							iVar0 = unk_0x67CFC62D543B19EF(unk_0x19D7F09C2FABDDA0(Local_103.f_2), "MPBitset");
						}
						unk_0xF0059F27F7BB6680(&iVar0, 10);
						unk_0x3F9FE9BB735B1604(unk_0x19D7F09C2FABDDA0(Local_103.f_2), "MPBitset", iVar0);
					}
					if (Local_103.f_C == 0)
					{
						if (unk_0x524ABB0435146845(unk_0x19D7F09C2FABDDA0(Local_103.f_2)) < Local_103.f_E)
						{
							Local_103.f_E = unk_0x524ABB0435146845(unk_0x19D7F09C2FABDDA0(Local_103.f_2));
						}
					}
				}
			}
		}
	}
	if (!unk_0x7FFE36DB9042AF23(Local_103.f_2))
	{
		return 0;
	}
	return 1;
}

int func_22(var uParam0, int iParam1, vector3 vParam2, float fParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)//Position - 0xF9C
{
	float fVar0;
	int iVar1;
	
	if (!unk_0x4A09C6BA3AFA4242(iParam1))
	{
		return 0;
	}
	if (!unk_0x424470694C82EFFA(1))
	{
		return 0;
	}
	fVar0 = 1.5f;
	if (iParam1 == -32878452)
	{
		fVar0 = 20f;
	}
	if (bParam9)
	{
		unk_0xEDAD35A0D81ED3FB(vParam2, fVar0, 0, 0, 0, 0, false, 0);
	}
	iVar1 = unk_0x61C05BF08A1E0EFE(iParam1, vParam2, fParam3, iParam5, iParam4, iParam12);
	if (unk_0x724D816EA203A79E(iVar1))
	{
		*uParam0 = unk_0xD3495809C4827891(iVar1);
		Global_267214.f_17E0 = iVar1;
		if (unk_0x7FFE36DB9042AF23(*uParam0))
		{
			if (bParam13)
			{
				unk_0x03C1DBD85D4F7482(iVar1, 1);
			}
			unk_0x656194E145691D3E(iVar1, iParam8);
			if (unk_0x270072584099CC42(iVar1))
			{
				if (bParam6)
				{
					unk_0xF2A50F5F6E7737D8(*uParam0, 1);
				}
				else
				{
					unk_0xF2A50F5F6E7737D8(*uParam0, 0);
				}
				if (bParam11)
				{
					unk_0xE106CB3E79DC85D6(*uParam0, unk_0xB5CEFD608600A09F(), 1);
				}
			}
			unk_0x8D8F52BBEE186D6D(iVar1, bParam7);
			unk_0x9E9094D4A850A6F4(iVar1, 1);
			if (bParam10)
			{
				unk_0x64B0385195B407FC(iVar1);
				unk_0x1E6686599BFBEC90(iVar1, 5, 5, 1f);
			}
			return 1;
		}
	}
	return 0;
}

bool func_23(var uParam0, float fParam1)//Position - 0x1096
{
	bool bVar0;
	int iVar1;
	var uVar2;
	vector3 vVar3;
	
	vVar3 = { func_39(unk_0xB5CEFD608600A09F()) };
	if (Local_103.f_C == 1)
	{
		return 1;
	}
	if (!bVar0)
	{
		if (unk_0x4995F628FD61C796(&vVar3, uParam0, &uVar2, 0f, 180f, 150f, 0, 1, 1))
		{
			unk_0xF1893A29A79EED3B(*uParam0, 1, uParam0, fParam1, &iVar1, 4, 3f, 0f);
			if (iVar1 >= 1)
			{
				if (unk_0xF0F2FC9DE291567F(-1367.557f, -3220.598f, 12.9448f, vVar3, true) >= 600f && unk_0xF0F2FC9DE291567F(750f, -3200f, 6f, vVar3, true) >= 700f)
				{
					if (iLocal_112 <= 5)
					{
						if (func_24(*uParam0, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
						{
							bVar0 = true;
						}
					}
					else
					{
						Local_103 = 4;
					}
				}
			}
		}
	}
	if (!bVar0)
	{
		iLocal_111 += 4;
		if (iLocal_111 >= 80)
		{
			iLocal_111 = 20;
			iLocal_112++;
		}
	}
	return bVar0;
}

int func_24(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)//Position - 0x1197
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
		if (func_33(vParam0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13))
		{
			return 0;
		}
	}
	Global_24B2CE.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_25(vParam0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_24B2CE.f_2++;
	return 1;
}

int func_25(vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)//Position - 0x12A8
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_225(unk_0xB5CEFD608600A09F(), 1, 1))
		{
			if (!unk_0x17FAADF9916EF741())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0xF0F2FC9DE291567F(func_30(unk_0xB5CEFD608600A09F()), vParam0, true) <= (fVar2 + fParam1))
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
		if (func_225(iVar1, 1, 1))
		{
			if (!func_27(iVar1, 0) && unk_0x75206900382D1E30(unk_0xB5CEFD608600A09F(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0xB5CEFD608600A09F()))
				{
					if ((func_26(iVar1) || !bParam8) && !Global_24FB5C[iVar1 /*406*/].f_FF)
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
								if (unk_0xF0F2FC9DE291567F(func_30(iVar1), vParam0, true) <= (fVar2 + fParam1))
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
							if (unk_0xF0F2FC9DE291567F(func_30(iVar1), vParam0, true) <= (fVar2 + fParam1))
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

int func_26(int iParam0)//Position - 0x145F
{
	if (unk_0xE904009319A7A43E(unk_0xA95CF30C72EB526E(iParam0)) || Global_24FB5C[iParam0 /*406*/].f_F1)
	{
		return 1;
	}
	return 0;
}

bool func_27(int iParam0, int iParam1)//Position - 0x148A
{
	bool bVar0;
	
	if (iParam0 == unk_0xB5CEFD608600A09F())
	{
		bVar0 = func_28(-1, 0) == 8;
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

int func_28(int iParam0, bool bParam1)//Position - 0x14D5
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_29();
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

int func_29()//Position - 0x1516
{
	return Global_1407E0;
}

Vector3 func_30(int iParam0)//Position - 0x1522
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_32() && Global_18402B[iVar0 /*770*/].f_2EA) && !func_31(Global_18402B[iVar0 /*770*/].f_2EB))
	{
		return Global_18402B[iVar0 /*770*/].f_2EB;
	}
	return func_39(iParam0);
}

int func_31(vector3 vParam0)//Position - 0x1575
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

var func_32()//Position - 0x159F
{
	return Global_255A46.f_10;
}

int func_33(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7)//Position - 0x15AD
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && unk_0xB5CEFD608600A09F() != iVar1) || iParam6 == 0)
		{
			if (func_225(iVar1, bParam2, bParam3))
			{
				if (unk_0x75206900382D1E30(unk_0xB5CEFD608600A09F(), iVar1))
				{
					if (!bParam5 || (!unk_0x36CEFBE9B745A58D(unk_0xA95CF30C72EB526E(iVar1)) && func_26(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()) != unk_0x343CB262BF0CDF5A(iVar1))) || unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()) == -1)
						{
							if (((unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()) == -1 && uParam7) && bParam4) && func_34(iVar1))
							{
							}
							else if (unk_0x724D816EA203A79E(unk_0xA95CF30C72EB526E(iVar1)))
							{
								if (unk_0xF0F2FC9DE291567F(func_39(iVar1), vParam0, true) < fParam1)
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

int func_34(int iParam0)//Position - 0x16A9
{
	if (func_38(unk_0xB5CEFD608600A09F(), iParam0))
	{
		return 1;
	}
	Global_26210D = { func_37(iParam0) };
	if (unk_0xE140B7178EA00705(&Global_26210D))
	{
		return 1;
	}
	if (func_35(unk_0xB5CEFD608600A09F(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_35(int iParam0, int iParam1)//Position - 0x16F0
{
	int iVar0;
	
	iVar0 = func_36(iParam0);
	if (!iVar0 == func_5())
	{
		if (iVar0 == func_36(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_36(int iParam0)//Position - 0x171B
{
	if (iParam0 != func_5())
	{
		return Global_18C80F[iParam0 /*558*/].f_B;
	}
	return func_5();
}

struct<13> func_37(int iParam0)//Position - 0x173E
{
	struct<13> Var0;
	
	unk_0xB7DBA2C6D2C3C41A(iParam0, &Var0, 13);
	return Var0;
}

int func_38(int iParam0, int iParam1)//Position - 0x1755
{
	if (unk_0xB9ACC1154C623363())
	{
		Global_26210D = { func_37(iParam0) };
		Global_26211A = { func_37(iParam1) };
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

Vector3 func_39(int iParam0)//Position - 0x17C2
{
	return unk_0x541C2AEF053615BC(unk_0xA95CF30C72EB526E(iParam0), 0);
}

bool func_40(int iParam0)//Position - 0x17D5
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0xF243B7A14FCFD0F4(iParam0);
	return unk_0xD6513D668481290A(iParam0);
}

int func_41(var uParam0)//Position - 0x17F3
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

void func_42(var uParam0)//Position - 0x181C
{
	if (!uParam0->f_1)
	{
		if (unk_0x0DE6397A2CB3EF75())
		{
			func_9(uParam0, 0, 0);
		}
	}
}

void func_43()//Position - 0x183B
{
	switch (vLocal_105[unk_0x6BAA0516CC970D99() /*3*/].f_2)
	{
		case 0:
			func_192();
			func_49();
			func_44();
			if (Local_103.f_2A > 0)
			{
				vLocal_105[unk_0x6BAA0516CC970D99() /*3*/].f_2 = 1;
			}
			break;
		
		case 1:
			func_212();
			break;
	}
}

void func_44()//Position - 0x1887
{
	int iVar0;
	
	func_45(Local_103.f_3, &iLocal_113, -1082130432, 0, 0, 0, 0, -1, -1, 1);
	iVar0 = 0;
	while (iVar0 < Local_103.f_E)
	{
		func_45(Local_103.f_4[iVar0], &(Local_121[iVar0 /*8*/]), -1082130432, 0, 0, 0, 0, -1, -1, 1);
		iVar0++;
	}
	if (unk_0xFA30DFD0084E92FE(Local_103.f_1, 0))
	{
		if (!unk_0xFA30DFD0084E92FE(Local_103.f_1, 1) && !unk_0xFA30DFD0084E92FE(vLocal_105[unk_0x6BAA0516CC970D99() /*3*/].f_1, 3))
		{
			if (unk_0x7FFE36DB9042AF23(Local_103.f_3))
			{
				if (unk_0x89B5CBCE9D131B32(Local_103.f_3) || (!unk_0xDD5EE7D9FC37FA16(Local_103.f_3) && unk_0x0DE6397A2CB3EF75()))
				{
					unk_0x4106FAF8AA1D69D5(unk_0xE48AD7BF7762E114(Local_103.f_3), Global_180794);
					unk_0xF0059F27F7BB6680(&(vLocal_105[unk_0x6BAA0516CC970D99() /*3*/].f_1), 3);
				}
			}
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (!unk_0xFA30DFD0084E92FE(Local_103.f_1, (2 + iVar0)) && !unk_0xFA30DFD0084E92FE(vLocal_105[unk_0x6BAA0516CC970D99() /*3*/].f_1, (4 + iVar0)))
			{
				if (unk_0x7FFE36DB9042AF23(Local_103.f_4[iVar0]))
				{
					if (unk_0x89B5CBCE9D131B32(Local_103.f_4[iVar0]) || (!unk_0xDD5EE7D9FC37FA16(Local_103.f_4[iVar0]) && unk_0x0DE6397A2CB3EF75()))
					{
						unk_0x4106FAF8AA1D69D5(unk_0xE48AD7BF7762E114(Local_103.f_4[iVar0]), Global_180794);
						if (!unk_0x36CEFBE9B745A58D(unk_0xE48AD7BF7762E114(Local_103.f_4[iVar0])))
						{
							unk_0xB90F3BE2A1EF63DB(unk_0xE48AD7BF7762E114(Local_103.f_4[iVar0]), 100f, 0);
						}
						unk_0xF0059F27F7BB6680(&(vLocal_105[unk_0x6BAA0516CC970D99() /*3*/].f_1), (4 + iVar0));
					}
				}
			}
			iVar0++;
		}
	}
}

void func_45(int iParam0, int iParam1, float fParam2, bool bParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, bool bParam9)//Position - 0x1A19
{
	if (unk_0x7FFE36DB9042AF23(iParam0))
	{
		if (func_48())
		{
			Global_252E21 = unk_0xB5CEFD608600A09F();
		}
		if (bParam3)
		{
			func_47(unk_0xE48AD7BF7762E114(iParam0), iParam1, 1, Global_252E21, iParam4, iParam5, fParam2, sParam6, iParam7, iParam8, bParam9);
		}
		else
		{
			func_47(unk_0xE48AD7BF7762E114(iParam0), iParam1, -1, Global_252E21, iParam4, iParam5, fParam2, sParam6, iParam7, iParam8, bParam9);
		}
	}
	else if (unk_0x2DA8CA50A72528FB(*iParam1))
	{
		func_46(iParam1);
	}
}

void func_46(int iParam0)//Position - 0x1A94
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0x2DA8CA50A72528FB(*iParam0))
	{
		unk_0x07B8ECB35A4ED3AC(iParam0);
		bVar0 = true;
	}
	if (unk_0x2DA8CA50A72528FB(iParam0->f_1))
	{
		unk_0x07B8ECB35A4ED3AC(&(iParam0->f_1));
		bVar0 = true;
	}
	if (unk_0x724D816EA203A79E(iParam0->f_7))
	{
		if (!unk_0x1D403DFADBC2DE3C(iParam0->f_7, 0))
		{
			if (unk_0x313CE760FC65D99D(iParam0->f_7))
			{
				unk_0xEA5D20C7C39B0EC6(iParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*iParam0 = { Var1 };
	}
}

int func_47(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x1B06
{
	if (iParam3 == 0)
	{
		iParam3 = unk_0xFC1CAE18F3ECBF2D();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		if (!unk_0x313CE760FC65D99D(iParam0))
		{
			if (iParam8 == -1)
			{
				unk_0xEA5D20C7C39B0EC6(iParam0, 1);
			}
			else
			{
				unk_0x12CB6C9EAE68146D(iParam0, 1, iParam8);
			}
			uParam1->f_7 = iParam0;
			unk_0x170F151F41735501(iParam0, iParam2);
			unk_0xBC50F5569FE1782F(iParam0, fParam6);
			if (unk_0x2DA8CA50A72528FB(*uParam1))
			{
				unk_0x12DB69036F6569F7(*uParam1, 7);
			}
		}
		if (!iParam9 == -1)
		{
			unk_0x92AAB9588E601C23(iParam0, iParam9);
		}
		unk_0xD09C169D88640D1B(iParam0, iParam4);
		unk_0x1A3FEAE5BF447BC7(iParam0, iParam5);
		*uParam1 = unk_0x7B2A47C84FD0CB9D(iParam0);
		if (!iParam9 == -1)
		{
			if (unk_0x2DA8CA50A72528FB(*uParam1))
			{
				if (!iParam8 == -1)
				{
					unk_0x0D5352939CC40C16(*uParam1, iParam8);
				}
				if (!unk_0xF1734B55490E9045(sParam7))
				{
					unk_0xB53F9D0C08974999("STRING");
					if (bParam10)
					{
						unk_0x607C19B90D297FE2(sParam7);
					}
					else
					{
						unk_0xC9C304D0AABE1335(sParam7);
					}
					unk_0x2E02627BEA5751E0(*uParam1);
				}
				unk_0x12DB69036F6569F7(*uParam1, 7);
			}
		}
		if (!unk_0xFA30DFD0084E92FE(uParam1->f_6, 2))
		{
			if (unk_0x2DA8CA50A72528FB(*uParam1))
			{
				unk_0xF0059F27F7BB6680(&(uParam1->f_6), 2);
			}
		}
		if (unk_0x5237AF95232D78C5(iParam0, 0))
		{
			uParam1->f_1 = unk_0x5556F7BFA35E0D94(iParam0);
			if (!unk_0xFA30DFD0084E92FE(uParam1->f_6, 3))
			{
				if (unk_0x2DA8CA50A72528FB(uParam1->f_1))
				{
					if (!iParam8 == -1)
					{
						unk_0x0D5352939CC40C16(uParam1->f_1, iParam8);
					}
					if (!unk_0xF1734B55490E9045(sParam7))
					{
						unk_0xB53F9D0C08974999("STRING");
						if (bParam10)
						{
							unk_0x607C19B90D297FE2(sParam7);
						}
						else
						{
							unk_0xC9C304D0AABE1335(sParam7);
						}
						unk_0x2E02627BEA5751E0(uParam1->f_1);
					}
					unk_0x12DB69036F6569F7(uParam1->f_1, 7);
					unk_0xF0059F27F7BB6680(&(uParam1->f_6), 3);
				}
			}
			else if (!unk_0x2DA8CA50A72528FB(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				unk_0x7CB6FD92BE491AD9(&(uParam1->f_6), 3);
			}
		}
		else if (unk_0x2DA8CA50A72528FB(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0x7CB6FD92BE491AD9(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_48()//Position - 0x1CDB
{
	return Global_14083F;
}

void func_49()//Position - 0x1CE7
{
	var uVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	if (unk_0x7FFE36DB9042AF23(Local_103.f_2))
	{
		if (!unk_0xFA30DFD0084E92FE(vLocal_105[unk_0x6BAA0516CC970D99() /*3*/].f_1, 0))
		{
			if (!unk_0xE59B7F5A03335350(unk_0x19D7F09C2FABDDA0(Local_103.f_2), 0))
			{
			}
			if (unk_0x1D403DFADBC2DE3C(unk_0x19D7F09C2FABDDA0(Local_103.f_2), 0))
			{
			}
			if (unk_0x1D403DFADBC2DE3C(unk_0x19D7F09C2FABDDA0(Local_103.f_2), 0))
			{
				if (unk_0xB5CEFD608600A09F() == unk_0xDF6ED6F322C4F404(Local_103.f_2, &uVar0))
				{
					func_185(2104, 1, -1);
					func_182(68, 1, -1);
					func_133(0, unk_0xBC25C936A095B5BA(), "XPT_KAIE", -875716015, 1504756458, Global_40001.f_1D44, 1, -1, 0, 0, 0);
					if (func_14())
					{
						func_120(86, "DSV_PASS0", 0, 0, -99);
					}
					else
					{
						func_120(86, "DSV_PASS1", 0, 0, -99);
					}
					iVar1 = Global_40001.f_1D45;
					Global_2588F5 = iVar1;
					func_71(&iVar1, 1);
					if (iVar1 > 0)
					{
						func_67(iVar1, 1, 1, 1092616192);
						if (func_66())
						{
							func_57(-1922554349, iVar1, &uVar2, 0, 0, 0);
						}
						else
						{
							unk_0x98D5F29DCDF681F8(iVar1, "AM_DESTROY_VEH", &uVar3);
						}
					}
					unk_0xF0059F27F7BB6680(&(vLocal_105[unk_0x6BAA0516CC970D99() /*3*/].f_1), 0);
				}
			}
			else
			{
				if (!unk_0xFA30DFD0084E92FE(Local_103.f_1, 0))
				{
					if (!unk_0xFA30DFD0084E92FE(vLocal_105[unk_0x6BAA0516CC970D99() /*3*/].f_1, 1))
					{
						if (func_56(unk_0xBC25C936A095B5BA(), unk_0x19D7F09C2FABDDA0(Local_103.f_2), 1))
						{
							unk_0xF0059F27F7BB6680(&(vLocal_105[unk_0x6BAA0516CC970D99() /*3*/].f_1), 1);
						}
					}
					if (!unk_0xFA30DFD0084E92FE(vLocal_105[unk_0x6BAA0516CC970D99() /*3*/].f_1, 2))
					{
						if (unk_0xD9C1758D86688CEA(unk_0x19D7F09C2FABDDA0(Local_103.f_2), unk_0xBC25C936A095B5BA(), 1))
						{
							unk_0xF0059F27F7BB6680(&(vLocal_105[unk_0x6BAA0516CC970D99() /*3*/].f_1), 2);
						}
					}
				}
				if (func_225(unk_0xB5CEFD608600A09F(), 1, 1) && func_56(unk_0xBC25C936A095B5BA(), unk_0x19D7F09C2FABDDA0(Local_103.f_2), 0))
				{
					if (!unk_0xFA30DFD0084E92FE(Global_267214.f_11E1, 1))
					{
						unk_0xF0059F27F7BB6680(&(Global_267214.f_11E1), 1);
					}
				}
				else if (unk_0xFA30DFD0084E92FE(Global_267214.f_11E1, 1))
				{
					unk_0x7CB6FD92BE491AD9(&(Global_267214.f_11E1), 1);
				}
				func_50();
			}
		}
	}
}

void func_50()//Position - 0x1EE1
{
	if (!unk_0xFA30DFD0084E92FE(iLocal_106, 0))
	{
		if (func_55(27, -1) == 0)
		{
			if (func_225(unk_0xB5CEFD608600A09F(), 1, 1))
			{
				if (func_56(unk_0xBC25C936A095B5BA(), unk_0x19D7F09C2FABDDA0(Local_103.f_2), 0))
				{
					if (func_6(&uLocal_122, 300000, 0))
					{
						func_53(27, 1, -1);
						unk_0xF0059F27F7BB6680(&iLocal_106, 0);
					}
				}
				else if (func_52(&uLocal_122))
				{
					func_51(&uLocal_122);
				}
			}
			else if (func_52(&uLocal_122))
			{
				func_51(&uLocal_122);
			}
		}
		else
		{
			unk_0xF0059F27F7BB6680(&iLocal_106, 0);
		}
	}
}

void func_51(var uParam0)//Position - 0x1F70
{
	uParam0->f_1 = 0;
}

bool func_52(var uParam0)//Position - 0x1F7D
{
	return uParam0->f_1;
}

void func_53(int iParam0, int iParam1, int iParam2)//Position - 0x1F89
{
	int iVar0;
	
	iVar0 = Global_270C55[iParam0 /*3*/][func_54(iParam2)];
	unk_0x7DB90DFB4AE71E86(iVar0, iParam1, 1);
}

int func_54(int iParam0)//Position - 0x1FAD
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_29();
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

int func_55(int iParam0, int iParam1)//Position - 0x1FE1
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_270C55[iParam0 /*3*/][func_54(iParam1)];
	if (unk_0x9CADE88F210A0BAE(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_56(int iParam0, int iParam1, int iParam2)//Position - 0x200D
{
	if (unk_0x724D816EA203A79E(iParam0) && !unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		if (unk_0x724D816EA203A79E(iParam1) && !unk_0x1D403DFADBC2DE3C(iParam1, 0))
		{
			if (unk_0x62F3A07C43FFB568(iParam0, iParam1, iParam2))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_57(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x2053
{
	int iVar0;
	
	if (!func_66())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1850983186:
		case 763367758:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
		case 402505853:
		case -1143510182:
		case 1678112166:
			if (iParam1 > 0)
			{
				func_58(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
		case -293060240:
		case 463142405:
		case 1550217370:
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case -2130199671:
		case -1227654538:
		case 1864522104:
		case 215608230:
		case -876012764:
		case -722894325:
		case 1407278493:
		case -1579394494:
		case -27443911:
		case 1179783540:
		case 923419301:
		case -308826175:
		case 603298940:
		case -12619854:
		case -311112675:
		case 870439158:
		case -974288740:
		case -4138654:
		case -1180954122:
		case -1918051016:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case -1172900789:
		case -2015399333:
		case -1574795641:
		case -961034881:
		case 1135468152:
		case 1265272476:
		case -634726636:
		case 696556762:
			func_58(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_58(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x2519
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_66())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x060D652F887827B8(func_29()) || unk_0xEBA8BD5AE6FF01CA())
		{
			Global_410B52 = 1;
			return 0;
		}
		if (Global_2584E7)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_410B53 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_41092C[iVar2 /*80*/].f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 5;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || unk_0x4EB807D82D2F9433(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0xCEA9F48EB9CF0CC7(iVar4))
		{
			*uParam0 = func_65(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_41092C[*uParam0 /*80*/].f_45 = 1;
					Global_41092C[*uParam0 /*80*/].f_49 = 1;
				}
			}
			Global_410B45 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_410B51 = 1;
			Global_410B54 = iParam4;
			Global_410B56 = iParam3;
			Global_410B57 = 1;
			Global_410B55 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_410B54 = iParam4;
			Global_410B56 = iParam3;
			Global_410B57 = 1;
			Global_410B55 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_64(1, iParam4);
			Global_410B51 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_59(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_59(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x26BD
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xF0059F27F7BB6680(&(Global_24FB5C[unk_0xB5CEFD608600A09F() /*406*/].f_76.f_47), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_60(iParam0);
	}
}

void func_60(int iParam0)//Position - 0x26F5
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_66())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_63(iParam0))
		{
			if (!bVar0)
			{
				unk_0xC7150D5EF5AFC7C1();
			}
		}
		else if (!bVar0)
		{
			unk_0xA48F55B05F42FD2C(Global_41092C[iParam0 /*80*/]);
		}
		func_61(&(Global_41092C[iParam0 /*80*/]));
	}
}

void func_61(var uParam0)//Position - 0x2747
{
	*uParam0 = 0;
	*uParam0 = 2147483647;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = -1593119440;
	uParam0->f_4 = -2085313189;
	uParam0->f_5 = 0;
	uParam0->f_6 = 1227573907;
	uParam0->f_7 = -1161833819;
	uParam0->f_8 = 0;
	uParam0->f_8.f_1 = 0;
	uParam0->f_8.f_2 = 0;
	func_62(&(uParam0->f_8.f_3));
	func_62(&(uParam0->f_8.f_10));
	StringCopy(&(uParam0->f_8.f_1D), "", 32);
	StringCopy(&(uParam0->f_8.f_25), "", 24);
	StringCopy(&(uParam0->f_8.f_2B), "", 16);
	StringCopy(&(uParam0->f_8.f_2F), "", 16);
	uParam0->f_8.f_33 = 0;
	uParam0->f_8.f_34 = 0;
	uParam0->f_8.f_35 = 0;
	uParam0->f_8.f_36 = 0;
	uParam0->f_8.f_37 = 0;
	uParam0->f_8.f_38 = 0;
	uParam0->f_45 = 0;
	uParam0->f_46 = 0;
	uParam0->f_47 = 0;
	uParam0->f_48 = 0;
	uParam0->f_4A = 0;
	uParam0->f_49 = 0;
	uParam0->f_4B = 0;
	uParam0->f_4C = 0;
	uParam0->f_4D = 0;
	uParam0->f_4F = 0;
}

void func_62(var uParam0)//Position - 0x283D
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

int func_63(int iParam0)//Position - 0x2885
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_41092C[iParam0 /*80*/].f_5 == 1;
	}
	return 0;
}

void func_64(int iParam0, int iParam1)//Position - 0x28AD
{
	Global_25897B = iParam1;
	Global_25897A = iParam0;
}

int func_65(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9)//Position - 0x28C1
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_41092C[iVar0 /*80*/].f_2 == 0)
		{
			if (!func_66())
			{
				iParam0 = iVar0 + 900;
			}
			Global_41092C[iVar0 /*80*/].f_2 = 1;
			Global_41092C[iVar0 /*80*/].f_1 = iParam5;
			Global_41092C[iVar0 /*80*/].f_3 = uParam1;
			Global_41092C[iVar0 /*80*/].f_4 = iParam2;
			Global_41092C[iVar0 /*80*/].f_7 = iParam3;
			Global_41092C[iVar0 /*80*/].f_5 = 0;
			Global_41092C[iVar0 /*80*/] = iParam0;
			Global_41092C[iVar0 /*80*/].f_6 = iParam4;
			Global_41092C[iVar0 /*80*/].f_48 = uParam8;
			Global_41092C[iVar0 /*80*/].f_47 = iParam7;
			Global_41092C[iVar0 /*80*/].f_4A = iParam9;
			Global_41092C[iVar0 /*80*/].f_49 = 0;
			Global_41092C[iVar0 /*80*/].f_4B = unk_0xC87A57742F7D3C06();
			Global_41092C[iVar0 /*80*/].f_4F = 0;
			Global_410B45 = 0;
			if (bParam6)
			{
				Global_41092C[iVar0 /*80*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_66()//Position - 0x29BA
{
	if (unk_0x8ACB0C3FACC09467())
	{
		return unk_0xC9D803F7D7E10861();
	}
	return 0;
}

void func_67(int iParam0, int iParam1, int iParam2, float fParam3)//Position - 0x29D1
{
	func_68(iParam0, iParam1, iParam2, fParam3);
}

void func_68(int iParam0, int iParam1, int iParam2, float fParam3)//Position - 0x29E5
{
	func_69(iParam0, iParam1, iParam2, fParam3);
}

void func_69(int iParam0, int iParam1, int iParam2, float fParam3)//Position - 0x29F9
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam1 < 1)
	{
		iParam1 = 1;
	}
	iVar0 = (iParam0 * iParam1);
	fParam3 = 0f;
	if (iVar0 > 0)
	{
		fVar2 = (100f - fParam3);
		iVar1 = SYSTEM::FLOOR((IntToFloat(iVar0) * (fVar2 / 100f)));
	}
	else
	{
		iVar1 = iVar0;
	}
	Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_D3.f_4 = iVar1;
	Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_D3.f_3 = (Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_D3.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_70(iVar1, 0);
	}
}

void func_70(int iParam0, bool bParam1)//Position - 0x2A7C
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

void func_71(var uParam0, int iParam1)//Position - 0x2A8D
{
	int iVar0;
	
	if (*uParam0 > 0)
	{
		if (!func_119())
		{
			if (func_118(0))
			{
				if (!func_114(0))
				{
					if (unk_0x96B1061E8F3CBC9A(func_113()))
					{
						if (func_112() == 100)
						{
							iVar0 = *uParam0;
							*uParam0 = 0;
						}
						else
						{
							iVar0 = ((*uParam0 / 100) * func_112());
							*uParam0 = (*uParam0 - iVar0);
						}
						func_110(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_77("GB_BCUT_TICK1", func_113(), iVar0, 0, 0, 1, 1);
						}
						func_76(20);
						func_72(func_113(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_72(int iParam0, int iParam1, int iParam2)//Position - 0x2B2D
{
	struct<8> Var0;
	
	if (func_225(iParam0, 0, 1))
	{
		Var0 = 1838378015;
		Var0.f_1 = unk_0xB5CEFD608600A09F();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_75(iParam0);
		func_74(&(Var0.f_6), &(Var0.f_7));
		unk_0x38E776D9FA75679B(1, &Var0, 8, func_73(iParam0));
	}
}

var func_73(int iParam0)//Position - 0x2B83
{
	var uVar0;
	
	unk_0xF0059F27F7BB6680(&uVar0, iParam0);
	return uVar0;
}

void func_74(var uParam0, var uParam1)//Position - 0x2B95
{
	*uParam0 = Global_190DD1.f_9;
	*uParam1 = Global_190DD1.f_A;
}

var func_75(int iParam0)//Position - 0x2BAF
{
	return Global_18C80F[iParam0 /*558*/].f_1EB;
}

void func_76(int iParam0)//Position - 0x2BC3
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xF0059F27F7BB6680(&(Global_267214.f_1312.f_7[iVar0]), iVar1);
}

int func_77(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)//Position - 0x2BEC
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0x75206900382D1E30(unk_0xB5CEFD608600A09F(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0xD885B2234FC72D62(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0xD885B2234FC72D62(iParam1), 64);
		}
		if (unk_0xF1734B55490E9045(&Var1))
		{
		}
		unk_0x2E94302CFF011F2E(sParam0);
		unk_0x449F0674640D94C0(func_84(iParam1, -2, 1, 0));
		unk_0x607C19B90D297FE2(func_82(&Var1));
		if (!iParam3 == 0)
		{
			unk_0x449F0674640D94C0(iParam3);
		}
		unk_0xAA5C5BF0489E5553(iParam2);
		iVar0 = unk_0x5E48BB10C6423FD5(0, 1);
		func_78(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_78(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x2C83
{
	int iVar0;
	
	if ((!func_81() || !unk_0x517823CA390A19F6()) || !func_27(unk_0xB5CEFD608600A09F(), 0))
	{
		return;
	}
	iVar0 = func_79(iParam2);
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

int func_79(int iParam0)//Position - 0x2D8B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_195C05 - 1))
	{
		if (iParam0 > Global_195C05.f_5[iVar0 /*53*/].f_1)
		{
			func_80(iVar0);
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

void func_80(int iParam0)//Position - 0x2DED
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_195C05.f_5[iVar0 /*53*/] = { Global_195C05.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_81()//Position - 0x2E26
{
	return unk_0x7B2F21BFE86AEB61(-1762644250);
}

var func_82(char* sParam0)//Position - 0x2E37
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_83(&cVar0);
}

var func_83(char[4] cParam0)//Position - 0x2E59
{
	return cParam0;
}

int func_84(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x2E63
{
	int iVar0;
	int iVar1;
	
	if (func_108(iParam0))
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = unk_0x343CB262BF0CDF5A(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_440000.f_1DBFD[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if ((func_108(unk_0xB5CEFD608600A09F()) || (func_107() && func_106())) && !unk_0xFA30DFD0084E92FE(Global_267214.f_11E0, 31))
	{
		iVar1 = func_105();
		if (unk_0x724D816EA203A79E(iVar1))
		{
			if (unk_0x15DBD981998D4FE1(iVar1))
			{
				if (unk_0x5363B43856FA7779(iVar1) != -1)
				{
					if (func_225(unk_0x5363B43856FA7779(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x517823CA390A19F6()) && iParam1 < 4)
						{
							if (Global_440000.f_1DBFD[iParam1] != -1)
							{
								return func_103(iParam1, iParam0, 0);
							}
							else
							{
								return func_92(iParam0, unk_0x5363B43856FA7779(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_92(iParam0, unk_0x5363B43856FA7779(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x517823CA390A19F6()) && iParam1 < 4)
			{
				if (Global_440000.f_1DBFD[iParam1] != -1)
				{
					return func_103(iParam1, iParam0, 0);
				}
				else
				{
					return func_85(0, -1, 0);
				}
			}
			else
			{
				return func_85(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x517823CA390A19F6()) && iParam1 < 4)
	{
		if (Global_440000.f_1DBFD[iParam1] != -1)
		{
			return func_103(iParam1, iParam0, 0);
		}
		else
		{
			return func_92(iParam0, unk_0xB5CEFD608600A09F(), iParam1, bParam2, bParam3);
		}
	}
	return func_92(iParam0, unk_0xB5CEFD608600A09F(), iParam1, bParam2, bParam3);
}

int func_85(bool bParam0, int iParam1, bool bParam2)//Position - 0x3033
{
	return func_86(unk_0xB5CEFD608600A09F(), bParam0, iParam1, bParam2);
}

int func_86(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x3049
{
	int iVar0;
	
	if (!unk_0x96B1061E8F3CBC9A(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x343CB262BF0CDF5A(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_91(iVar0, iParam2, 0) && !unk_0xFA30DFD0084E92FE(Global_440000.f_F, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_90(1);
				}
				else
				{
					return func_90(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0xFA30DFD0084E92FE(Global_440000.f_4, 20))
			{
				return func_87(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_87(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_90(1);
	}
	return func_90(0);
}

int func_87(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x310D
{
	int iVar0;
	
	iVar0 = func_89(iParam0, iParam1, iParam3);
	if (func_88(Global_440000.f_1EF38, 1))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			case 8:
				return 36;
			
			case 9:
				return 37;
			
			case 10:
				return 38;
			
			case 11:
				return 39;
			
			case 12:
				return 40;
			
			case 13:
				return 41;
			
			case 14:
				return 42;
			
			case 15:
				return 43;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_88(int iParam0, bool bParam1)//Position - 0x3225
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_440000.f_243FE == 65)
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_40001.f_20D8[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_89(int iParam0, int iParam1, int iParam2)//Position - 0x3276
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_91(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_90(bool bParam0)//Position - 0x32BD
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_91(int iParam0, int iParam1, int iParam2)//Position - 0x32D4
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

int func_92(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x349F
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0x343CB262BF0CDF5A(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_18402B[unk_0xB5CEFD608600A09F() /*770*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_18402B[iVar2 /*770*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_100(1))
			{
				iVar3 = func_97(iParam0);
				if (!iVar3 == -1)
				{
					return func_95(iVar3);
				}
			}
			if ((func_94(iParam1, iParam0, iVar0, 0) && !unk_0xFA30DFD0084E92FE(Global_440000.f_F, 18)) || ((func_91(unk_0x343CB262BF0CDF5A(iParam1), unk_0x343CB262BF0CDF5A(iParam0), 0) && unk_0xFA30DFD0084E92FE(Global_440000.f_F, 23)) && !unk_0xFA30DFD0084E92FE(Global_440000.f_F, 18)))
			{
				return func_90(1);
			}
			else if (unk_0xFA30DFD0084E92FE(Global_440000.f_F, 26))
			{
				return func_93(1);
			}
			else
			{
				return func_86(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1805D3 || Global_1805CA) || Global_18402B[iParam0 /*770*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1805D3 == 1 && Global_1805DD == 0))
			{
				return func_90(1);
			}
			else
			{
				return func_86(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1805CE && Global_1803FC.f_E == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_97(iParam0);
	if (!iVar4 == -1)
	{
		return func_95(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_93(bool bParam0)//Position - 0x3643
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_94(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x365A
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

int func_95(int iParam0)//Position - 0x36D2
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_96(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_96(int iParam0)//Position - 0x3795
{
	return Global_24E35D.f_817.f_2C[iParam0 /*2*/].f_1;
}

int func_97(int iParam0)//Position - 0x37AC
{
	if (!iParam0 == func_5())
	{
		if (func_98(iParam0, 1))
		{
			return Global_24E35D.f_817.f_B[func_36(iParam0)];
		}
	}
	return -1;
}

bool func_98(int iParam0, bool bParam1)//Position - 0x37DE
{
	if (!bParam1)
	{
		if (func_99(iParam0))
		{
			return 0;
		}
	}
	return Global_18C80F[iParam0 /*558*/].f_B != func_5();
}

int func_99(int iParam0)//Position - 0x3809
{
	if (iParam0 != func_5())
	{
		if (Global_18C80F[iParam0 /*558*/].f_B != func_5())
		{
			return Global_18C80F[iParam0 /*558*/].f_B == iParam0;
		}
	}
	return 0;
}

int func_100(int iParam0)//Position - 0x383E
{
	if ((func_102() || func_101()) || (func_32() && iParam0))
	{
		return 1;
	}
	return 0;
}

var func_101()//Position - 0x386D
{
	return Global_255A46.f_F;
}

var func_102()//Position - 0x387B
{
	return Global_255A46.f_E;
}

int func_103(int iParam0, int iParam1, bool bParam2)//Position - 0x3889
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_EF621.f_C[iParam0];
	if (func_100(1))
	{
		iVar2 = func_97(iParam1);
		if (!iVar2 == -1)
		{
			return func_95(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (unk_0xFA30DFD0084E92FE(Global_440000.f_62[iParam0 /*10231*/].f_14F1[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_5())
	{
		if (Global_440000.f_1DBFD[iParam0] != -1 && Global_440000.f_1DBFD[iParam0] <= 4)
		{
			if (Global_440000.f_1DBFD[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_440000.f_1DBFD[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_440000.f_1DBFD[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_440000.f_1DBFD[iParam0] == 4)
			{
				if (unk_0xFA30DFD0084E92FE(Global_440000.f_F, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_440000.f_1DBFD[iParam0];
			}
		}
		else
		{
			iVar0 = func_86(iParam1, !bParam2, iParam0, 0);
		}
		if (unk_0xFA30DFD0084E92FE(Global_440000.f_15, 13))
		{
			iVar0 = func_104(iParam0);
		}
		if (unk_0xFA30DFD0084E92FE(Global_440000.f_18, 29))
		{
			iVar0 = 0;
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_104(int iParam0)//Position - 0x39EE
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_440000.f_24429;
			break;
		
		case 1:
			iVar0 = Global_440000.f_2442A;
			break;
		
		case 2:
			iVar0 = Global_440000.f_2442B;
			break;
		
		case 3:
			iVar0 = Global_440000.f_2442C;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

var func_105()//Position - 0x3AC3
{
	return Global_240006.f_2;
}

bool func_106()//Position - 0x3AD1
{
	return unk_0xFA30DFD0084E92FE(Global_240006, 4);
}

bool func_107()//Position - 0x3AE2
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_27.f_12, 14);
}

int func_108(int iParam0)//Position - 0x3AFF
{
	if (func_27(iParam0, 0))
	{
		return 1;
	}
	if (func_109())
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

bool func_109()//Position - 0x3B41
{
	return unk_0xFA30DFD0084E92FE(Global_240006, 3);
}

void func_110(int iParam0, bool bParam1)//Position - 0x3B52
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_111(1);
	}
	else
	{
		iVar1 = func_111(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_111(bool bParam0)//Position - 0x3B84
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_40001.f_2E03;
}

int func_112()//Position - 0x3BAA
{
	return Global_40001.f_2E02;
}

int func_113()//Position - 0x3BB9
{
	return Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B;
}

bool func_114(bool bParam0)//Position - 0x3BCE
{
	return func_115(unk_0xB5CEFD608600A09F(), bParam0);
}

int func_115(int iParam0, bool bParam1)//Position - 0x3BE0
{
	return func_116(iParam0, bParam1, 1);
}

int func_116(int iParam0, bool bParam1, int iParam2)//Position - 0x3BF1
{
	int iVar0;
	
	if (iParam0 == func_5())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_117(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_18C80F[iParam0 /*558*/].f_B;
	if (iVar0 != func_5() && Global_18C80F[iVar0 /*558*/].f_B.f_199 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_117(int iParam0, int iParam1)//Position - 0x3C4D
{
	if (iParam0 != func_5())
	{
		if (Global_18C80F[iParam0 /*558*/].f_B != func_5())
		{
			if (Global_18C80F[iParam0 /*558*/].f_B == iParam0 && Global_18C80F[iParam0 /*558*/].f_B.f_199 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_118(bool bParam0)//Position - 0x3C9C
{
	return func_98(unk_0xB5CEFD608600A09F(), bParam0);
}

bool func_119()//Position - 0x3CAE
{
	return func_99(unk_0xB5CEFD608600A09F());
}

void func_120(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4)//Position - 0x3CBE
{
	func_121(1, iParam0, sParam1, sParam2, bParam3, iParam4);
}

void func_121(int iParam0, var uParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5)//Position - 0x3CD5
{
	var uVar0;
	bool bVar1;
	
	uVar0 = uParam1;
	bVar1 = false;
	func_122(iParam0, sParam2, uVar0, bVar1, sParam3, bParam4, iParam5);
}

void func_122(var uParam0, char* sParam1, var uParam2, bool bParam3, char* sParam4, bool bParam5, int iParam6)//Position - 0x3CF6
{
	int iVar0;
	
	if (unk_0xF1734B55490E9045(sParam1))
	{
		return;
	}
	if (unk_0xF5429F058A48A07C(sParam1) > 15)
	{
		return;
	}
	if (!unk_0xF1734B55490E9045(sParam4))
	{
		if (unk_0xF5429F058A48A07C(sParam4) > 31)
		{
			return;
		}
	}
	iVar0 = func_131();
	if (iVar0 == -1)
	{
		return;
	}
	func_130(iVar0);
	func_129(iVar0, uParam0);
	func_128(iVar0, uParam2, bParam3);
	func_127(iVar0, sParam1);
	if (unk_0xF1734B55490E9045(sParam4) && iParam6 == -99)
	{
		return;
	}
	func_126(iVar0);
	if (!unk_0xF1734B55490E9045(sParam4))
	{
		func_124(iVar0, sParam4, bParam5);
	}
	if (!iParam6 == -99)
	{
		func_123(iVar0, iParam6);
	}
}

void func_123(int iParam0, int iParam1)//Position - 0x3DA2
{
	Global_14B309.f_3B[iParam0 /*16*/].f_F = iParam1;
}

void func_124(int iParam0, char* sParam1, bool bParam2)//Position - 0x3DB8
{
	StringCopy(&(Global_14B309.f_3B[iParam0 /*16*/].f_7), sParam1, 32);
	if (!bParam2)
	{
		return;
	}
	func_125(iParam0);
}

void func_125(int iParam0)//Position - 0x3DDF
{
	unk_0xF0059F27F7BB6680(&(Global_14B309.f_3B[iParam0 /*16*/]), 5);
}

void func_126(int iParam0)//Position - 0x3DF6
{
	unk_0xF0059F27F7BB6680(&(Global_14B309.f_3B[iParam0 /*16*/]), 4);
}

void func_127(int iParam0, char* sParam1)//Position - 0x3E0D
{
	struct<4> Var0;
	
	StringCopy(&Var0, sParam1, 16);
	Global_14B309.f_3B[iParam0 /*16*/].f_3 = { Var0 };
}

void func_128(int iParam0, var uParam1, bool bParam2)//Position - 0x3E2D
{
	Global_14B309.f_3B[iParam0 /*16*/].f_2 = uParam1;
	if (bParam2)
	{
		unk_0xF0059F27F7BB6680(&(Global_14B309.f_3B[iParam0 /*16*/]), 2);
		unk_0x7CB6FD92BE491AD9(&(Global_14B309.f_3B[iParam0 /*16*/]), 3);
	}
	else
	{
		unk_0xF0059F27F7BB6680(&(Global_14B309.f_3B[iParam0 /*16*/]), 3);
		unk_0x7CB6FD92BE491AD9(&(Global_14B309.f_3B[iParam0 /*16*/]), 2);
	}
}

void func_129(int iParam0, var uParam1)//Position - 0x3E87
{
	Global_14B309.f_3B[iParam0 /*16*/].f_1 = uParam1;
}

void func_130(int iParam0)//Position - 0x3E9D
{
	unk_0xF0059F27F7BB6680(&(Global_14B309.f_3B[iParam0 /*16*/]), 0);
}

int func_131()//Position - 0x3EB4
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!func_132(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_132(int iParam0)//Position - 0x3EE2
{
	return unk_0xFA30DFD0084E92FE(Global_14B309.f_3B[iParam0 /*16*/], 0);
}

int func_133(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0x3EF9
{
	return func_134(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_134(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0x3F1B
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_144(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0x724D816EA203A79E(iParam1))
		{
			if (unk_0x386592AF38881675(iParam1))
			{
				iVar1 = unk_0x399F7937FFE4DEBF(iParam1);
				func_140(unk_0x823166D9421223CA(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_135(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_135(int iParam0, int iParam1, char* sParam2, int iParam3)//Position - 0x3F94
{
	vector3 vVar0;
	
	vVar0 = { func_138(iParam0, 1) };
	if (iParam0 == func_137(unk_0xBC25C936A095B5BA()))
	{
		func_136(1);
	}
	func_140(vVar0, iParam1, 0, sParam2, iParam3);
}

void func_136(int iParam0)//Position - 0x3FC8
{
	Global_252E21.f_75D = iParam0;
}

int func_137(int iParam0)//Position - 0x3FD9
{
	return iParam0;
}

Vector3 func_138(int iParam0, bool bParam1)//Position - 0x3FE3
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	
	if (unk_0xAE9335ADE2B33DFC())
	{
		vVar1 = { unk_0x14C8316F37CF95AA(2) };
	}
	if (iParam0 == func_139(unk_0xBC25C936A095B5BA()) && unk_0x3D875C2512206692(unk_0xEBC6179F395EFBEB()) == 4)
	{
		vVar0 = { unk_0xA4455714F3DCE207(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		vVar0 = { unk_0x541C2AEF053615BC(iParam0, 0) };
	}
	fVar2 = 0f;
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		fVar2 = unk_0x349C94FFF43E2979(iParam0);
		if (unk_0x3D875C2512206692(unk_0xEBC6179F395EFBEB()) == 4)
		{
			fVar2 = vVar1.z;
		}
	}
	unk_0x2B3953EE61953843(unk_0x6F79ECA8C83E4357(iParam0), &vVar3, &vVar4);
	if (bParam1)
	{
		fVar5 = (vVar4.z + 0.18f);
	}
	else
	{
		fVar5 = (vVar3.z + 0.18f);
	}
	vVar0 = { unk_0x89D97EB4FAE4A574(vVar0, fVar2, 0f, 0f, fVar5) };
	return vVar0;
}

int func_139(int iParam0)//Position - 0x40A9
{
	return iParam0;
}

void func_140(vector3 vParam0, int iParam1, int iParam2, char* sParam3, int iParam4)//Position - 0x40B3
{
	int iVar0;
	int iVar1;
	
	if (iParam1 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_252E21.f_504[iVar0 /*30*/].f_6 == 0 || Global_252E21.f_504[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_252E21.f_504[iVar1 /*30*/] = { vParam0 };
			Global_252E21.f_504[iVar1 /*30*/].f_6 = 1;
			Global_252E21.f_504[iVar1 /*30*/].f_4 = func_143(Global_252E21.f_504[iVar1 /*30*/], &Global_14063D, &Global_14063E);
			Global_252E21.f_504[iVar1 /*30*/].f_7 = unk_0xED678C85A82F0AB9();
			Global_252E21.f_504[iVar1 /*30*/].f_3 = iParam1;
			Global_252E21.f_504[iVar1 /*30*/].f_8 = iParam2;
			Global_252E21.f_504[iVar1 /*30*/].f_9 = func_142();
			Global_252E21.f_504[iVar1 /*30*/].f_A = func_141();
			StringCopy(&(Global_252E21.f_504[iVar1 /*30*/].f_16), sParam3, 16);
			Global_252E21.f_504[iVar1 /*30*/].f_1A = unk_0x863D0D1A37055D36(unk_0xED678C85A82F0AB9(), iParam4);
		}
	}
}

int func_141()//Position - 0x41CA
{
	if (Global_252E21.f_75D)
	{
		Global_252E21.f_75D = 0;
		return 1;
	}
	Global_252E21.f_75D = 0;
	return 0;
}

var func_142()//Position - 0x41F4
{
	var uVar0;
	
	uVar0 = Global_252E21.f_75F;
	Global_252E21.f_75F = 1;
	return uVar0;
}

float func_143(vector3 vParam0, var uParam1, var uParam2)//Position - 0x420F
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0xF0F2FC9DE291567F(unk_0x4E95580B2DDCC7A9(), vParam0, true);
	if (fVar0 < 5f)
	{
		*uParam1 = 0.402f;
		*uParam2 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam1 = 0.212f;
		*uParam2 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam1 = (fVar2 + 0.212f);
	*uParam2 = (fVar3 + 0.286f);
	return fVar1;
}

var func_144(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x42A8
{
	var uVar0;
	
	uVar0 = func_145(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_145(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x42CB
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_181(unk_0xB5CEFD608600A09F()) || func_180(unk_0xB5CEFD608600A09F()))
	{
		if (Global_40001.f_2340 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_40001.f_2340;
		}
	}
	else if (func_178() || func_174(unk_0xB5CEFD608600A09F()))
	{
		if (Global_40001.f_567F > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_40001.f_567F;
		}
	}
	else if (Global_40001.f_178A > 10000)
	{
		iVar2 = 10000;
	}
	else
	{
		iVar2 = Global_40001.f_178A;
	}
	if (func_173(sParam2))
	{
	}
	if (func_172())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_170(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_40001.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_169(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_167(0, &iVar1);
					break;
				
				case 3:
					func_167(1, &iVar1);
					break;
				
				case 1:
					func_165(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1992E3)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_185(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_155((func_164(unk_0xB5CEFD608600A09F()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x5FF267E54EB49897(iVar1, iParam8, iParam9);
				if (Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_27.f_2 != -1)
				{
					func_185(1165, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_150(iVar1);
				}
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_146((func_148(unk_0xB5CEFD608600A09F()) + iVar1));
			}
			else
			{
				func_146((func_148(unk_0xB5CEFD608600A09F()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_146(int iParam0)//Position - 0x44C9
{
	if (func_172())
	{
		Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_D3.f_5 = iParam0;
		func_147(joaat("mpply_globalxp"), iParam0);
	}
}

void func_147(int iParam0, int iParam1)//Position - 0x44F4
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x3A57956BCE003880(iVar0, iParam1, 1);
	}
}

int func_148(int iParam0)//Position - 0x4510
{
	if (iParam0 > -1)
	{
		if (func_225(iParam0, 0, 1))
		{
			if (iParam0 == unk_0xB5CEFD608600A09F())
			{
				return func_149(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_18402B[iParam0 /*770*/].f_D3.f_5;
			}
		}
		else
		{
			return func_149(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_149(int iParam0)//Position - 0x4561
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (unk_0x6CB99B97664C3727(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_150(int iParam0)//Position - 0x457F
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_37(unk_0xB5CEFD608600A09F()) };
	if (unk_0xB9ACC1154C623363())
	{
		if (unk_0xD7F4457CECF10121(&Var0))
		{
			iVar1 = func_153(func_154(&Var0));
			if (iVar1 == 0)
			{
				func_152(&Global_14F5C9, iParam0);
				func_151(joaat("mpply_crew_local_xp_0"), Global_14F5C9);
			}
			else if (iVar1 == 1)
			{
				func_152(&Global_14F5CA, iParam0);
				func_151(joaat("mpply_crew_local_xp_1"), Global_14F5CA);
			}
			else if (iVar1 == 2)
			{
				func_152(&Global_14F5CB, iParam0);
				func_151(joaat("mpply_crew_local_xp_2"), Global_14F5CB);
			}
			else if (iVar1 == 3)
			{
				func_152(&Global_14F5CC, iParam0);
				func_151(joaat("mpply_crew_local_xp_3"), Global_14F5CC);
			}
			else if (iVar1 == 4)
			{
				func_152(&Global_14F5CD, iParam0);
				func_151(joaat("mpply_crew_local_xp_4"), Global_14F5CD);
			}
		}
	}
}

void func_151(int iParam0, int iParam1)//Position - 0x4653
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x3A57956BCE003880(iVar0, iParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_14F5C4 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_14F5C6 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_14F5C6 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_14F5C7 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_14F5C8 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_14F5C9 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_14F5CA = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_14F5CB = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_14F5CC = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_14F5CD = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_14F5CE = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_14F5CF = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_14F5D0 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_14F5D1 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_14F5D2 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_14F5D3 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_14F5D4 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_152(var uParam0, int iParam1)//Position - 0x4778
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_153(int iParam0)//Position - 0x4789
{
	if (iParam0 == Global_14F5C4)
	{
		return 0;
	}
	else if (iParam0 == Global_14F5C5)
	{
		return 1;
	}
	else if (iParam0 == Global_14F5C6)
	{
		return 2;
	}
	else if (iParam0 == Global_14F5C7)
	{
		return 3;
	}
	else if (iParam0 == Global_14F5C8)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_154(var uParam0)//Position - 0x47E6
{
	if (unk_0xB9ACC1154C623363())
	{
		if (unk_0xD7F4457CECF10121(uParam0))
		{
			return Global_25801B;
		}
	}
	return Global_25801B;
}

void func_155(int iParam0, int iParam1, int iParam2)//Position - 0x4809
{
	if (func_172())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_40001.f_2320 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_14F642[func_54(-1)])
				{
					unk_0x5FF267E54EB49897(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_14F642[func_54(-1)])
				{
					return;
				}
			}
		}
		if (Global_40001.f_231F == 0)
		{
			if (iParam0 == 0)
			{
				unk_0x5FF267E54EB49897(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_40001.f_231F == 0)
		{
			if (iParam0 < 0)
			{
				unk_0x5FF267E54EB49897(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_163(unk_0xB5CEFD608600A09F()))
		{
			Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_D3.f_1 = iParam0;
			Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_D3.f_6 = func_161(iParam0, 1);
		}
		func_160(639, iParam0, -1, 1);
		func_159(640, func_161(iParam0, 1), -1, 1, 0);
		Global_14F642[func_54(-1)] = iParam0;
		func_156(7, 0);
	}
}

void func_156(int iParam0, int iParam1)//Position - 0x492A
{
	int iVar0;
	
	if (func_158(iParam0, iParam1))
	{
		iVar0 = func_157();
		Global_258004[iVar0] = iParam0;
	}
}

int func_157()//Position - 0x494D
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

int func_158(int iParam0, var uParam1)//Position - 0x4982
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

void func_159(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x4A08
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_269BC5[iParam0 /*3*/][func_54(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x3A57956BCE003880(iVar0, iParam1, iParam3);
	}
}

void func_160(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x4A38
{
	int iVar0;
	
	iVar0 = Global_269BC5[iParam0 /*3*/][func_54(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x3A57956BCE003880(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_14F606[func_54(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_14F60C[func_54(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_14F612[func_54(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_14F618[func_54(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_14F5EE[func_54(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_14F5F4[func_54(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_14F5FA[func_54(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_14F600[func_54(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_14F5D6[func_54(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_14F5DC[func_54(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_14F5E2[func_54(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_14F5E8[func_54(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_14F61E[func_54(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_14F624[func_54(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_14F62A[func_54(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_14F630[func_54(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_14F636[func_54(iParam2)] = iParam1;
			break;
		
		case 7229:
			Global_14F63C[func_54(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_14F642[func_54(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_14F648[func_54(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_270CF3[0 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_270CF3[1 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 2925:
			Global_270CF3[2 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_270CF3[3 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 7818:
			Global_270D5E[func_54(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_14F64E[func_54(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_14F654[func_54(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_14F65A[func_54(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_14F660[func_54(iParam2)] = iParam1;
			break;
		
		case 3049:
			Global_270D27[0 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 3050:
			Global_270D27[1 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 3051:
			Global_270D27[2 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 3052:
			Global_270D27[3 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_270D27[4 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 3632:
			Global_270D61[0 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 3633:
			Global_270D61[1 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 3634:
			Global_270D61[2 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 3635:
			Global_270D61[3 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_270D61[4 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_270D71[0 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_270D71[1 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_270D71[2 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_270D71[3 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_270D71[4 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 3217:
			Global_270D27[5 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_270CF3[4 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 3659:
			Global_270D81[func_54(iParam2)] = iParam1;
			break;
		
		case 3660:
			Global_270D8A[func_54(iParam2)] = iParam1;
			break;
		
		case 3661:
			Global_270D84[func_54(iParam2)] = iParam1;
			break;
		
		case 3662:
			Global_270D8D[func_54(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_270D87[func_54(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_270D90[func_54(iParam2)] = iParam1;
			break;
		
		case 3685:
			Global_270D93[func_54(iParam2)] = iParam1;
			break;
		
		case 3225:
			Global_270D27[6 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 3226:
			Global_270CF3[5 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_270D27[7 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 3228:
			Global_270CF3[6 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 4015:
			Global_270D27[8 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 4016:
			Global_270CF3[7 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 4018:
			Global_270D27[9 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_270CF3[8 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 4021:
			Global_270D27[10 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_270CF3[9 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 4024:
			Global_270D27[11 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_270CF3[10 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 6105:
			Global_270D27[12 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 6106:
			Global_270CF3[11 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 6163:
			Global_270D27[13 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 6164:
			Global_270CF3[12 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 6541:
			Global_270D27[14 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 6542:
			Global_270CF3[13 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 6554:
			Global_270D27[15 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 6555:
			Global_270CF3[14 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 6557:
			Global_270D27[16 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_270CF3[15 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 6560:
			Global_270D27[17 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_270CF3[16 /*3*/][func_54(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_161(int iParam0, bool bParam1)//Position - 0x51F2
{
	if (bParam1)
	{
	}
	return func_162(iParam0, 0);
}

int func_162(int iParam0, int iParam1)//Position - 0x5206
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

int func_163(int iParam0)//Position - 0x52C5
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0xFA30DFD0084E92FE(Global_252E21.f_1, iParam0);
	}
	return 1;
}

int func_164(int iParam0)//Position - 0x52EA
{
	if (Global_1406D2.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0xB5CEFD608600A09F())
			{
				return Global_14F642[func_54(-1)];
			}
			else if (func_163(iParam0))
			{
				return Global_18402B[iParam0 /*770*/].f_D3.f_1;
			}
		}
	}
	else
	{
		return Global_14F642[func_54(-1)];
	}
	return 0;
}

void func_165(int iParam0)//Position - 0x5347
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F());
	iVar0 = 0;
	while (iVar0 < unk_0x81C86888AEA2F49B())
	{
		iVar4 = unk_0xCFA8A401AAD7BB5A(iVar0);
		if (unk_0x05086B70D2CFEA6F(iVar4))
		{
			iVar5 = unk_0x4ED43B67B3F05E0F(iVar4);
			if (unk_0x343CB262BF0CDF5A(iVar5) != -1)
			{
				if (unk_0x343CB262BF0CDF5A(iVar5) == iVar1 || func_91(unk_0x343CB262BF0CDF5A(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0xB5CEFD608600A09F())
					{
						if (func_38(unk_0xB5CEFD608600A09F(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = SYSTEM::ROUND((func_166(*iParam0, 100) * (10f * Global_40001.f_1079)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_166(*iParam0, 100) * (20f * Global_40001.f_1072)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_166(int iParam0, int iParam1)//Position - 0x5432
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_167(bool bParam0, int iParam1)//Position - 0x5453
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < unk_0x81C86888AEA2F49B())
		{
			iVar3 = iVar0;
			if (unk_0x05086B70D2CFEA6F(iVar3))
			{
				iVar4 = unk_0x4ED43B67B3F05E0F(iVar3);
				if (func_225(iVar4, 0, 1))
				{
					if (iVar4 != unk_0xB5CEFD608600A09F())
					{
						iVar1++;
						if (func_38(unk_0xB5CEFD608600A09F(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_225(iVar4, 1, 1))
			{
				if (iVar4 != unk_0xB5CEFD608600A09F())
				{
					if (func_168(unk_0xB5CEFD608600A09F(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_38(unk_0xB5CEFD608600A09F(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = SYSTEM::ROUND((func_166(*iParam1, 100) * (10f * Global_40001.f_1079)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_166(*iParam1, 100) * (20f * Global_40001.f_1072)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_168(int iParam0, int iParam1)//Position - 0x556B
{
	return SYSTEM::VDIST(func_39(iParam0), func_39(iParam1));
	return 0f;
}

int func_169(int iParam0)//Position - 0x5587
{
	int iVar0;
	
	if (unk_0x8820DB58BCD4A148() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_166(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_170(int iParam0)//Position - 0x55BE
{
	if (iParam0 < 0)
	{
		if (unk_0xC40EDFF7541407A8(iParam0) > func_164(unk_0xB5CEFD608600A09F()))
		{
			iParam0 = -func_164(unk_0xB5CEFD608600A09F());
		}
	}
	if (func_171(8000, 0, 0) > 0)
	{
		if (func_171(8000, 0, 0) < (iParam0 + func_164(unk_0xB5CEFD608600A09F())))
		{
			iParam0 = (func_171(8000, 0, 0) - func_164(unk_0xB5CEFD608600A09F()));
		}
	}
	return iParam0;
}

int func_171(int iParam0, bool bParam1, int iParam2)//Position - 0x5622
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_45E53[iParam0];
}

int func_172()//Position - 0x564A
{
	return 1;
}

int func_173(char* sParam0)//Position - 0x5653
{
	if (unk_0xEAEFBBEC1AEA464B(sParam0))
	{
		return 1;
	}
	else if (unk_0x3362CDE8460ED38B(sParam0, "") || unk_0x3362CDE8460ED38B(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_174(int iParam0)//Position - 0x568B
{
	return func_175(func_176(iParam0));
}

int func_175(int iParam0)//Position - 0x569D
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_176(int iParam0)//Position - 0x56B7
{
	if (func_177(iParam0, 0))
	{
		return Global_18C80F[iParam0 /*558*/].f_B.f_21;
	}
	return -1;
}

int func_177(int iParam0, int iParam1)//Position - 0x56DA
{
	if (Global_18C80F[iParam0 /*558*/].f_B.f_21 != -1 || (iParam1 && Global_18C80F[iParam0 /*558*/].f_B.f_20 != -1))
	{
		return 1;
	}
	return 0;
}

int func_178()//Position - 0x5715
{
	if (unk_0x517823CA390A19F6())
	{
		return func_32();
	}
	return func_179(Global_440000.f_1EF38);
}

int func_179(int iParam0)//Position - 0x5739
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_40001.f_1385[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_180(int iParam0)//Position - 0x5773
{
	return Global_24FB5C[iParam0 /*406*/].f_6F == 2;
}

bool func_181(int iParam0)//Position - 0x5788
{
	return Global_24FB5C[iParam0 /*406*/].f_6F == 7;
}

void func_182(int iParam0, int iParam1, int iParam2)//Position - 0x579D
{
	int iVar0;
	
	iVar0 = func_184(iParam0, func_54(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_183(iParam0, iVar0, iParam2);
}

void func_183(int iParam0, int iParam1, var uParam2)//Position - 0x57C4
{
	int iVar0;
	
	iVar0 = Global_270B3A[iParam0 /*3*/][func_54(uParam2)];
	unk_0x3A57956BCE003880(iVar0, iParam1, 1);
}

int func_184(int iParam0, int iParam1)//Position - 0x57E8
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_270B3A[iParam0 /*3*/][func_54(iParam1)];
	if (unk_0x6CB99B97664C3727(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_185(int iParam0, int iParam1, int iParam2)//Position - 0x5814
{
	int iVar0;
	
	iVar0 = func_187(iParam0, func_54(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_186(iParam0))
	{
		func_159(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_160(iParam0, iVar0, iParam2, 1);
	}
}

int func_186(int iParam0)//Position - 0x5856
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

int func_187(int iParam0, int iParam1, int iParam2)//Position - 0x5A4E
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_269BC5[iParam0 /*3*/][func_54(iParam1)];
	if (unk_0x6CB99B97664C3727(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_188(char* sParam0, int iParam1)//Position - 0x5A80
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 0, 1, iParam1);
}

int func_189()//Position - 0x5A97
{
	if (func_190(20))
	{
		return 1;
	}
	if (func_190(0))
	{
		return 1;
	}
	return 0;
}

bool func_190(int iParam0)//Position - 0x5AB9
{
	int iVar0;
	
	iVar0 = func_187(2476, -1, 0);
	return unk_0xFA30DFD0084E92FE(iVar0, iParam0);
}

bool func_191(int iParam0)//Position - 0x5AD4
{
	return unk_0xC40EDFF7541407A8(unk_0xCCA9497DA4595710(Global_24D438, unk_0xED678C85A82F0AB9())) > iParam0;
}

void func_192()//Position - 0x5AEF
{
	if (unk_0x2DA8CA50A72528FB(iLocal_109))
	{
		if (func_189() || func_193())
		{
			unk_0x2E9308F22ABD4DF5(iLocal_109, 0);
		}
		else
		{
			unk_0x2E9308F22ABD4DF5(iLocal_109, 4);
		}
	}
	else if (unk_0x8EA6CABD14F1B89A(Local_103.f_2))
	{
		if (!unk_0x1D403DFADBC2DE3C(unk_0x19D7F09C2FABDDA0(Local_103.f_2), 0))
		{
			iLocal_109 = unk_0x511FE22BCF5353CD(unk_0x19D7F09C2FABDDA0(Local_103.f_2));
			if (!unk_0x7512ED01F3F46714(Local_103.f_A))
			{
				unk_0xBF0E22F3E083C33D(iLocal_109, 225);
			}
			else
			{
				unk_0xBF0E22F3E083C33D(iLocal_109, 348);
			}
			unk_0x0D5352939CC40C16(iLocal_109, 1);
			unk_0x6F02E6814C1AD504(iLocal_109, 7000);
			unk_0x12DB69036F6569F7(iLocal_109, 6);
			unk_0x436D0272182E484D(iLocal_109, "DSV_BLIP");
			if (func_189())
			{
				unk_0x2E9308F22ABD4DF5(iLocal_109, 0);
			}
		}
	}
}

var func_193()//Position - 0x5B9D
{
	return Global_24DCC0.f_699;
}

void func_194()//Position - 0x5BAC
{
	if (Local_103.f_C == 2)
	{
		if (unk_0x8EA6CABD14F1B89A(Local_103.f_2))
		{
			if (unk_0xE59B7F5A03335350(unk_0x19D7F09C2FABDDA0(Local_103.f_2), 0))
			{
				unk_0xC5A6DFE2B8987B17(&uLocal_107);
				unk_0x6EEB346884FE5AF6(0, unk_0x19D7F09C2FABDDA0(Local_103.f_2), Local_103.f_14, 7f, iLocal_110, 3f);
				unk_0xA3981DED4FC2E56E(0, 0, 0);
				unk_0x346129B364057FF6(0, Local_103.f_18, 1f, -1, 1048576000, 0, Local_103.f_1B);
				unk_0x535008C596714F9E(uLocal_107);
			}
		}
	}
}

int func_195()//Position - 0x5C18
{
	return Local_103;
}

int func_196(int iParam0)//Position - 0x5C22
{
	return vLocal_105[iParam0 /*3*/];
}

bool func_197(int iParam0)//Position - 0x5C30
{
	return !func_198(iParam0);
}

int func_198(int iParam0)//Position - 0x5C3F
{
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			if (Global_40001.f_17A3)
			{
				return 0;
			}
			if (func_200(unk_0xB5CEFD608600A09F(), 7))
			{
				return 0;
			}
			if (unk_0xFA30DFD0084E92FE(Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_111.f_13, 0) || unk_0xFA30DFD0084E92FE(Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_111.f_13, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_40001.f_17A4)
			{
				return 0;
			}
			if (func_200(unk_0xB5CEFD608600A09F(), 7))
			{
				return 0;
			}
			if (unk_0xFA30DFD0084E92FE(Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_111.f_13, 0) || unk_0xFA30DFD0084E92FE(Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_111.f_13, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_40001.f_17A5)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_40001.f_17A6)
			{
				return 0;
			}
			if (func_200(unk_0xB5CEFD608600A09F(), 7))
			{
				return 0;
			}
			if (unk_0xFA30DFD0084E92FE(Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_111.f_13, 0) || unk_0xFA30DFD0084E92FE(Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_111.f_13, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_199(4))
			{
				return 0;
			}
			if (func_200(unk_0xB5CEFD608600A09F(), 7))
			{
				return 0;
			}
			if (unk_0xFA30DFD0084E92FE(Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_111.f_13, 0) || unk_0xFA30DFD0084E92FE(Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_111.f_13, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_199(4))
			{
				return 0;
			}
			if (func_200(unk_0xB5CEFD608600A09F(), 7))
			{
				return 0;
			}
			if (unk_0xFA30DFD0084E92FE(Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_111.f_13, 0) || unk_0xFA30DFD0084E92FE(Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_111.f_13, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_199(4))
			{
				return 0;
			}
			if (func_200(unk_0xB5CEFD608600A09F(), 7))
			{
				return 0;
			}
			if (unk_0xFA30DFD0084E92FE(Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_111.f_13, 0) || unk_0xFA30DFD0084E92FE(Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_111.f_13, 1))
			{
				return 0;
			}
			break;
		
		case 18:
		case 21:
		case 22:
		case 23:
			if (func_199(4))
			{
				return 0;
			}
			if (func_200(unk_0xB5CEFD608600A09F(), 7))
			{
				return 0;
			}
			if (unk_0xFA30DFD0084E92FE(Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_111.f_13, 0) || unk_0xFA30DFD0084E92FE(Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_111.f_13, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_199(4))
			{
				return 0;
			}
			if (func_200(unk_0xB5CEFD608600A09F(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_199(4))
			{
				return 0;
			}
			if (func_200(unk_0xB5CEFD608600A09F(), 7))
			{
				return 0;
			}
			break;
		
		case 10:
			break;
		
		case 11:
			break;
		
		case 12:
			break;
	}
	return 1;
}

int func_199(int iParam0)//Position - 0x5F9D
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_225(unk_0x3171C34AB3FE6F2E(iVar0), 0, 1))
		{
			if (unk_0xFA30DFD0084E92FE(Global_24FB5C[iVar0 /*406*/].f_CC, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_200(int iParam0, int iParam1)//Position - 0x5FE3
{
	return unk_0xFA30DFD0084E92FE(Global_24FB5C[iParam0 /*406*/].f_CC, iParam1);
}

int func_201()//Position - 0x5FFC
{
	var uVar0;
	
	func_208(&uVar0);
	if (Global_14083F == 0)
	{
		if (!unk_0x7AF0088ABFA713B6())
		{
			return 1;
		}
	}
	if (func_207())
	{
		return 1;
	}
	if (Global_25891C)
	{
		return 1;
	}
	if (func_206())
	{
		return 1;
	}
	if (func_205(157))
	{
		if (!func_204())
		{
			return 1;
		}
	}
	if (func_205(155))
	{
		return 1;
	}
	if (!unk_0x57D316754A262B34())
	{
		return 1;
	}
	if (func_202() != 0)
	{
		if (unk_0xB731B8C5BCE89836(func_202()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_202()//Position - 0x6086
{
	switch (func_203())
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

int func_203()//Position - 0x60BA
{
	return Global_62BD;
}

bool func_204()//Position - 0x60C5
{
	return Global_255A46.f_24A;
}

int func_205(int iParam0)//Position - 0x60D4
{
	if (unk_0xA1AC399BCBEE5B2D(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_206()//Position - 0x60EB
{
	return Global_258063;
}

bool func_207()//Position - 0x60F7
{
	return Global_255A46.f_245;
}

void func_208(var uParam0)//Position - 0x6106
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
					func_209(iVar0);
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

void func_209(int iParam0)//Position - 0x6179
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x414AA1932D1C88E2(1, iParam0, &vVar0, 3))
	{
		if (func_225(vVar0.y, 1, 1))
		{
			iVar1 = unk_0xA95CF30C72EB526E(vVar0.y);
			if (unk_0x724D816EA203A79E(iVar1))
			{
				if (unk_0x5237AF95232D78C5(iVar1, 0))
				{
					iVar2 = unk_0x9FE9D386222EEE47(iVar1, 0);
					if (unk_0x403C891106DCABAF(iVar2, vVar0.z) && unk_0x32405B7614E36453())
					{
						if (func_210(iVar2, &bVar3))
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

int func_210(int iParam0, var uParam1)//Position - 0x61FA
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

void func_211()//Position - 0x6259
{
	SYSTEM::WAIT(0);
}

void func_212()//Position - 0x6266
{
	if (unk_0x2DA8CA50A72528FB(iLocal_109))
	{
		unk_0x07B8ECB35A4ED3AC(&iLocal_109);
	}
	func_215();
	if (func_195() == 4 && Local_103.f_A != 0)
	{
		unk_0x8510BC031C24B862(Local_103.f_A, 0);
	}
	unk_0x7CB6FD92BE491AD9(&(Global_267214.f_11E1), 1);
	func_214(17, 0);
	func_213();
}

void func_213()//Position - 0x62B5
{
	unk_0x95E4B6F3ED223F5A();
}

void func_214(int iParam0, bool bParam1)//Position - 0x62C1
{
	if (bParam1)
	{
		if (!unk_0xFA30DFD0084E92FE(Global_24FB5C[unk_0xB5CEFD608600A09F() /*406*/].f_CC, iParam0))
		{
			unk_0xF0059F27F7BB6680(&(Global_24FB5C[unk_0xB5CEFD608600A09F() /*406*/].f_CC), iParam0);
		}
	}
	else if (unk_0xFA30DFD0084E92FE(Global_24FB5C[unk_0xB5CEFD608600A09F() /*406*/].f_CC, iParam0))
	{
		unk_0x7CB6FD92BE491AD9(&(Global_24FB5C[unk_0xB5CEFD608600A09F() /*406*/].f_CC), iParam0);
	}
}

void func_215()//Position - 0x6324
{
	if (Local_103.f_C == 2)
	{
		unk_0x02DAF06EA4F08219(&uLocal_107);
	}
}

void func_216(struct<21> Param0)//Position - 0x633A
{
	func_223(func_224(Param0), Param0);
	unk_0xD1CF2F876BAD2600(4);
	unk_0xA6E7E0EC9E48D44C(1);
	func_222(0, -1, 0);
	unk_0x76AE988734CA7760(&Local_103, 49);
	unk_0xE45D6A3FD6454198(&vLocal_105, 97);
	if (!func_221())
	{
		func_212();
	}
	if (unk_0x7AF0088ABFA713B6())
	{
		unk_0x6C87EFD58B261C6F(0);
		if (unk_0x0DE6397A2CB3EF75())
		{
			func_217();
			Local_103.f_8 = func_5();
		}
		func_214(17, 1);
		vLocal_105[unk_0x6BAA0516CC970D99() /*3*/] = 0;
	}
	else
	{
		func_212();
	}
}

void func_217()//Position - 0x63B5
{
	func_220();
	Local_103.f_C = unk_0x491B2241281A03B7(0, 3);
	if (Local_103.f_C == 1 || Local_103.f_C == 2)
	{
		Local_103.f_F = unk_0x491B2241281A03B7(0, 5);
		if (Local_103.f_C == 1)
		{
			func_219(&(Local_103.f_10), &(Local_103.f_13));
		}
		else
		{
			func_219(&(Local_103.f_14), &(Local_103.f_17));
		}
		func_218();
	}
	Local_103.f_E = unk_0x491B2241281A03B7(0, 3);
	if (Global_40001.f_1D48 >= 0 && Global_40001.f_1D48 < 5)
	{
		Local_103.f_D = Global_40001.f_1D48;
	}
	else
	{
		Local_103.f_D = unk_0x491B2241281A03B7(0, 5);
	}
}

void func_218()//Position - 0x644D
{
	switch (Local_103.f_F)
	{
		case 0:
			Local_103.f_18 = { -2195.782f, -420.2502f, 12.0819f };
			Local_103.f_1B = 117.3927f;
			Local_103.f_1C[0 /*3*/] = { -2189.975f, -422.8502f, 12.0709f };
			Local_103.f_26[0] = 152.6699f;
			Local_103.f_1C[1 /*3*/] = { -2184.031f, -400.948f, 12.2027f };
			Local_103.f_26[1] = 337.9892f;
			Local_103.f_1C[2 /*3*/] = { -2175.282f, -426.3756f, 12.128f };
			Local_103.f_26[2] = 12.2947f;
			break;
		
		case 1:
			Local_103.f_18 = { -981.5774f, -1487.319f, 4.5867f };
			Local_103.f_1B = 300.0815f;
			Local_103.f_1C[0 /*3*/] = { -977.8269f, -1494.568f, 4.5867f };
			Local_103.f_26[0] = 0.731f;
			Local_103.f_1C[1 /*3*/] = { -977.7324f, -1491.717f, 4.5867f };
			Local_103.f_26[1] = 173.7717f;
			Local_103.f_1C[2 /*3*/] = { -954.6693f, -1486.713f, 4.16f };
			Local_103.f_26[2] = 304.8721f;
			break;
		
		case 2:
			Local_103.f_18 = { 697.3923f, -1375.27f, 25.196f };
			Local_103.f_1B = 111.1953f;
			Local_103.f_1C[0 /*3*/] = { 717.8624f, -1360.491f, 25.0461f };
			Local_103.f_26[0] = 55.1674f;
			Local_103.f_1C[1 /*3*/] = { 703.9843f, -1361.094f, 24.6728f };
			Local_103.f_26[1] = 306.7133f;
			Local_103.f_1C[2 /*3*/] = { 707.1707f, -1388.706f, 25.2759f };
			Local_103.f_26[2] = 204.5666f;
			break;
		
		case 3:
			Local_103.f_18 = { -258.5791f, 302.4799f, 91.0086f };
			Local_103.f_1B = 180.4109f;
			Local_103.f_1C[0 /*3*/] = { -244.9193f, 299.3712f, 91.0424f };
			Local_103.f_26[0] = 43.0354f;
			Local_103.f_1C[1 /*3*/] = { -248.7361f, 305.6155f, 91.1444f };
			Local_103.f_26[1] = 191.8736f;
			Local_103.f_1C[2 /*3*/] = { -232.4524f, 299.4706f, 91.2088f };
			Local_103.f_26[2] = 199.8353f;
			break;
		
		case 4:
			Local_103.f_18 = { 862.7026f, 2875.148f, 56.9868f };
			Local_103.f_1B = 206.7217f;
			Local_103.f_1C[0 /*3*/] = { 880.2893f, 2862.074f, 55.6697f };
			Local_103.f_26[0] = 191.0122f;
			Local_103.f_1C[1 /*3*/] = { 865.2399f, 2853.536f, 56.2583f };
			Local_103.f_26[1] = 305.8056f;
			Local_103.f_1C[2 /*3*/] = { 867.6559f, 2841.155f, 56.944f };
			Local_103.f_26[2] = 235.4465f;
			break;
	}
}

void func_219(var uParam0, var uParam1)//Position - 0x673D
{
	switch (Local_103.f_F)
	{
		case 0:
			*uParam0 = { -2192.39f, -419.3334f, 12.0959f };
			*uParam1 = 71.2404f;
			break;
		
		case 1:
			*uParam0 = { -977.0366f, -1482.866f, 4.0099f };
			*uParam1 = 124.7807f;
			break;
		
		case 2:
			*uParam0 = { 702.5064f, -1370.477f, 25.0573f };
			*uParam1 = 279.9129f;
			break;
		
		case 3:
			*uParam0 = { -253.3582f, 299.4982f, 90.9592f };
			*uParam1 = 184.8169f;
			break;
		
		case 4:
			*uParam0 = { 868.8133f, 2868.439f, 55.9186f };
			*uParam1 = 200.5778f;
			break;
	}
}

void func_220()//Position - 0x6802
{
	int iVar0;
	
	iVar0 = unk_0x491B2241281A03B7(0, 8);
	if (Global_40001.f_1D47 >= 0 && Global_40001.f_1D47 < 8)
	{
		iVar0 = Global_40001.f_1D47;
	}
	switch (iVar0)
	{
		case 0:
			if (func_14())
			{
				Local_103.f_A = joaat("baller");
			}
			else
			{
				Local_103.f_A = joaat("zion");
			}
			if (func_14())
			{
				Local_103.f_B = joaat("g_m_y_ballaorig_01");
			}
			else
			{
				Local_103.f_B = joaat("g_m_y_ballaeast_01");
			}
			break;
		
		case 1:
			if (func_14())
			{
				Local_103.f_A = joaat("emperor");
			}
			else
			{
				Local_103.f_A = joaat("cavalcade2");
			}
			if (func_14())
			{
				Local_103.f_B = joaat("g_m_y_mexgoon_02");
			}
			else
			{
				Local_103.f_B = joaat("g_f_y_vagos_01");
			}
			break;
		
		case 2:
			if (func_14())
			{
				Local_103.f_A = joaat("daemon");
			}
			else
			{
				Local_103.f_A = joaat("gburrito");
			}
			if (func_14())
			{
				Local_103.f_B = joaat("g_m_y_lost_01");
			}
			else
			{
				Local_103.f_B = joaat("g_f_y_lost_01");
			}
			break;
		
		case 3:
			if (func_14())
			{
				Local_103.f_A = joaat("pcj");
			}
			else
			{
				Local_103.f_A = joaat("bjxl");
			}
			if (func_14())
			{
				Local_103.f_B = joaat("g_m_m_chigoon_02");
			}
			else
			{
				Local_103.f_B = joaat("g_m_m_chigoon_01");
			}
			break;
		
		case 4:
			if (func_14())
			{
				Local_103.f_A = joaat("rocoto");
			}
			else
			{
				Local_103.f_A = joaat("emperor");
			}
			if (func_14())
			{
				Local_103.f_B = joaat("g_m_m_armgoon_01");
			}
			else
			{
				Local_103.f_B = joaat("g_m_y_armgoon_02");
			}
			break;
		
		case 5:
			if (func_14())
			{
				Local_103.f_A = joaat("journey");
			}
			else
			{
				Local_103.f_A = joaat("sandking");
			}
			if (func_14())
			{
				Local_103.f_B = joaat("a_m_m_hillbilly_02");
			}
			else
			{
				Local_103.f_B = joaat("a_m_m_hillbilly_01");
			}
			break;
		
		case 6:
			if (func_14())
			{
				Local_103.f_A = joaat("habanero");
			}
			else
			{
				Local_103.f_A = joaat("sanchez2");
			}
			if (func_14())
			{
				Local_103.f_B = joaat("g_m_y_salvagoon_01");
			}
			else
			{
				Local_103.f_B = joaat("g_m_y_salvagoon_02");
			}
			break;
		
		case 7:
			if (func_14())
			{
				Local_103.f_A = joaat("buffalo2");
			}
			else
			{
				Local_103.f_A = joaat("dubsta");
			}
			if (func_14())
			{
				Local_103.f_B = joaat("g_m_y_strpunk_01");
			}
			else
			{
				Local_103.f_B = joaat("g_m_y_strpunk_02");
			}
			break;
	}
}

int func_221()//Position - 0x6A46
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
		if (func_207())
		{
			return 0;
		}
		if (func_205(155))
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

int func_222(int iParam0, int iParam1, bool bParam2)//Position - 0x6A9F
{
	int iVar0;
	
	iVar0 = unk_0x4796DAD7A8894E2F();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_213();
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
						func_213();
					}
					else
					{
						return 0;
					}
				}
				if (func_207())
				{
					if (!bParam2)
					{
						func_213();
					}
					else
					{
						return 0;
					}
				}
				if (func_205(155))
				{
					if (!bParam2)
					{
						func_213();
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
					func_213();
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
				func_213();
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
			func_213();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_223(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x6BB4
{
	if (!unk_0x7AF0088ABFA713B6())
	{
		func_213();
	}
	unk_0xBF463BC3D6FFDE31(iParam0, 0, Param1.f_10);
}

int func_224(int iParam0)//Position - 0x6BD3
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

int func_225(int iParam0, bool bParam1, bool bParam2)//Position - 0x7269
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

