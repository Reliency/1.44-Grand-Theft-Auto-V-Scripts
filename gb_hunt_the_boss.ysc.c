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
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	var uLocal_119[4] = { 0, 0, 0, 0 };
	var uLocal_120 = 0;
	bool bLocal_121 = 0;
	bool bLocal_122 = 0;
	vector3 vLocal_123 = { 0f, 0f, 0f };
	int iLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	struct<22> Local_132 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	vector3 vLocal_133[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	struct<21> Local_134 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_94 = ((0.05f + 0.275f) - 0.01f);
	if (unk_0x7AF0088ABFA713B6())
	{
		if (!func_872(ScriptParam_134))
		{
			func_824();
		}
	}
	while (true)
	{
		func_823();
		if (func_816())
		{
			func_824();
		}
		if (func_810(1))
		{
			func_824();
		}
		switch (func_809(unk_0x6BAA0516CC970D99()))
		{
			case 0:
				if (func_808() == 1)
				{
					func_807(1);
					func_791();
				}
				break;
			
			case 1:
				if (func_808() == 1)
				{
					func_32();
				}
				else if (func_808() == 3)
				{
					func_807(3);
				}
				break;
			
			case 3:
				func_824();
				break;
		}
		if (unk_0x0DE6397A2CB3EF75())
		{
			if (func_808() != 3 && func_31())
			{
				func_30(3);
			}
			switch (func_808())
			{
				case 0:
					if (func_23())
					{
						func_30(1);
					}
					break;
				
				case 1:
					if (func_1())
					{
						func_30(3);
					}
					break;
				
				case 3:
					func_824();
					break;
				}
		}
	}
}

int func_1()//Position - 0x176
{
	var uVar0;
	bool bVar1;
	
	func_22();
	switch (Local_132.f_1)
	{
		case 0:
			if (!func_21(&(Local_132.f_A)))
			{
				func_20(&(Local_132.f_A), 0, 0);
			}
			else if (func_19(&(Local_132.f_A), Global_40001.f_2E66, 0))
			{
				unk_0xF0059F27F7BB6680(&(Local_132.f_2), 4);
				func_18(2);
			}
			if (!func_17(Local_132.f_7))
			{
				if (func_13((Global_40001.f_2E6B - 1), &uVar0, 1123024896, 0))
				{
					func_18(1);
				}
			}
			if (unk_0xFA30DFD0084E92FE(Local_132.f_2, 1))
			{
				func_18(2);
			}
			if (func_12(Local_132.f_5) || func_10(Local_132.f_5, 1, 0))
			{
				unk_0xF0059F27F7BB6680(&(Local_132.f_2), 2);
				func_18(2);
			}
			break;
		
		case 1:
			if (!func_21(&(Local_132.f_C)))
			{
				func_20(&(Local_132.f_C), 0, 0);
			}
			else
			{
				if (!func_21(&(Local_132.f_10)))
				{
					if (!func_13(Global_40001.f_2E6B, &uVar0, 1123024896, 0))
					{
						func_9(&(Local_132.f_10), 0, 0);
						unk_0xF0059F27F7BB6680(&(Local_132.f_2), 6);
					}
				}
				else if (!func_13(Global_40001.f_2E6B, &uVar0, 1123024896, 0))
				{
					if (func_19(&(Local_132.f_10), 20000, 0))
					{
						unk_0xF0059F27F7BB6680(&(Local_132.f_2), 2);
					}
				}
				else
				{
					func_8(&(Local_132.f_10));
					func_9(&(Local_132.f_12), 0, 0);
					unk_0x7CB6FD92BE491AD9(&(Local_132.f_2), 6);
				}
				if (func_21(&(Local_132.f_12)))
				{
					if (func_19(&(Local_132.f_12), 5000, 0))
					{
						func_8(&(Local_132.f_12));
					}
				}
				bVar1 = func_7();
				if (func_19(&(Local_132.f_C), Global_40001.f_2E67, 0) || bVar1)
				{
					func_18(2);
					if (!bVar1)
					{
						unk_0xF0059F27F7BB6680(&(Local_132.f_2), 0);
					}
					else
					{
						func_2();
					}
				}
			}
			if (func_12(Local_132.f_5) || func_10(Local_132.f_5, 1, 0))
			{
				unk_0xF0059F27F7BB6680(&(Local_132.f_2), 2);
				func_18(2);
			}
			break;
		
		case 2:
			if (!func_21(&(Local_132.f_E)))
			{
				func_20(&(Local_132.f_E), 0, 0);
			}
			else if (func_19(&(Local_132.f_E), 15000, 0))
			{
				func_18(3);
			}
			break;
		
		case 3:
			return 1;
	}
	return 0;
}

void func_2()//Position - 0x3A3
{
	struct<14> Var0;
	struct<14> Var1;
	struct<14> Var2;
	
	if (!unk_0xFA30DFD0084E92FE(Local_132.f_2, 5))
	{
		if (unk_0xFA30DFD0084E92FE(Local_132.f_2, 3))
		{
			Var0 = -471892217;
			Var0.f_1 = unk_0xB5CEFD608600A09F();
			Var0.f_2 = -1839425999;
			Var0.f_A = func_6();
			func_3(Var0, func_4());
			unk_0xF0059F27F7BB6680(&(Local_132.f_2), 5);
		}
		else if (unk_0xFA30DFD0084E92FE(Local_132.f_2, 0))
		{
			Var1 = -471892217;
			Var1.f_1 = unk_0xB5CEFD608600A09F();
			Var1.f_2 = -1172540035;
			func_3(Var1, func_4());
			unk_0xF0059F27F7BB6680(&(Local_132.f_2), 5);
		}
		else if (unk_0xFA30DFD0084E92FE(Local_132.f_2, 2) || unk_0xFA30DFD0084E92FE(Local_132.f_2, 1))
		{
			Var2 = -471892217;
			Var2.f_1 = unk_0xB5CEFD608600A09F();
			Var2.f_2 = 715367169;
			func_3(Var2, func_4());
			unk_0xF0059F27F7BB6680(&(Local_132.f_2), 5);
		}
	}
}

void func_3(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)//Position - 0x483
{
	Param0 = -471892217;
	Param0.f_1 = unk_0xB5CEFD608600A09F();
	if (!iParam13 == 0)
	{
		unk_0x38E776D9FA75679B(1, &Param0, 14, iParam13);
	}
}

int func_4()//Position - 0x4B0
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x3171C34AB3FE6F2E(iVar1);
		if (func_5(iVar2, 0, 0))
		{
			if (!unk_0xFA30DFD0084E92FE(vLocal_133[iVar1 /*3*/].f_2, 0))
			{
				unk_0xF0059F27F7BB6680(&uVar0, iVar2);
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_5(int iParam0, bool bParam1, bool bParam2)//Position - 0x4F9
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

int func_6()//Position - 0x543
{
	return Local_132.f_6;
}

int func_7()//Position - 0x54F
{
	if ((((unk_0xFA30DFD0084E92FE(Local_132.f_2, 0) || unk_0xFA30DFD0084E92FE(Local_132.f_2, 1)) || unk_0xFA30DFD0084E92FE(Local_132.f_2, 2)) || unk_0xFA30DFD0084E92FE(Local_132.f_2, 3)) || unk_0xFA30DFD0084E92FE(Local_132.f_2, 4))
	{
		return 1;
	}
	return 0;
}

void func_8(var uParam0)//Position - 0x5A4
{
	uParam0->f_1 = 0;
}

void func_9(var uParam0, bool bParam1, bool bParam2)//Position - 0x5B1
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

int func_10(int iParam0, bool bParam1, bool bParam2)//Position - 0x5EE
{
	if (iParam0 == func_11())
	{
		return 0;
	}
	if (unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_13, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_13, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_11()//Position - 0x658
{
	return -1;
}

bool func_12(int iParam0)//Position - 0x661
{
	return Global_18402B[iParam0 /*770*/].f_C4 != 0;
}

int func_13(int iParam0, var uParam1, float fParam2, bool bParam3)//Position - 0x676
{
	int iVar0;
	float fVar1;
	
	iVar0 = unk_0xA95CF30C72EB526E(func_16());
	if (!unk_0x724D816EA203A79E(iVar0))
	{
		return 0;
	}
	*uParam1 = func_15(iVar0, Local_132.f_7, 0);
	if (*uParam1 > IntToFloat(iParam0))
	{
		return 0;
	}
	fVar1 = unk_0xDB5C848CD9F1133E(iVar0);
	*uParam1 = func_14(*uParam1, fVar1);
	if (fVar1 > fParam2 && !bParam3)
	{
		return 0;
	}
	return 1;
}

float func_14(float fParam0, float fParam1)//Position - 0x6DD
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

float func_15(int iParam0, vector3 vParam1, bool bParam2)//Position - 0x6F4
{
	vector3 vVar0;
	
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		vVar0 = { unk_0x541C2AEF053615BC(iParam0, true) };
	}
	else
	{
		vVar0 = { unk_0x541C2AEF053615BC(iParam0, false) };
	}
	return unk_0xF0F2FC9DE291567F(vVar0, vParam1, bParam2);
}

int func_16()//Position - 0x72E
{
	return Local_132.f_5;
}

int func_17(vector3 vParam0)//Position - 0x73A
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_18(int iParam0)//Position - 0x764
{
	Local_132.f_1 = iParam0;
}

int func_19(var uParam0, int iParam1, bool bParam2)//Position - 0x772
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_20(uParam0, bParam2, 0);
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

void func_20(var uParam0, bool bParam1, bool bParam2)//Position - 0x7D0
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

bool func_21(var uParam0)//Position - 0x815
{
	return uParam0->f_1;
}

void func_22()//Position - 0x821
{
	int iVar0;
	
	if (!unk_0xFA30DFD0084E92FE(Local_132.f_2, 1))
	{
		if (!unk_0x96B1061E8F3CBC9A(func_16()))
		{
			unk_0xF0059F27F7BB6680(&(Local_132.f_2), 1);
		}
	}
	if (!unk_0xFA30DFD0084E92FE(Local_132.f_2, 1) && !unk_0xFA30DFD0084E92FE(Local_132.f_2, 2))
	{
		iVar0 = unk_0xDE780EBA36114734(func_16());
		if (iVar0 >= 0 && iVar0 < 32)
		{
			if (unk_0xFA30DFD0084E92FE(vLocal_133[iVar0 /*3*/].f_2, 11))
			{
				unk_0xF0059F27F7BB6680(&(Local_132.f_2), 2);
				if (Local_132.f_1 == 0)
				{
					func_18(3);
				}
			}
		}
	}
}

int func_23()//Position - 0x8A9
{
	vector3 vVar0[4];
	var uVar1[4];
	float fVar2;
	int iVar3;
	int iVar4;
	
	Local_132.f_5 = func_29();
	Local_132.f_6 = func_11();
	unk_0x498B26CF846D31E2(&(Local_132.f_14), &(Local_132.f_15));
	vVar0[0 /*3*/] = { -1976.481f, -638.13f, 4.6219f };
	vVar0[1 /*3*/] = { 2306.744f, -400.686f, 86.3213f };
	vVar0[2 /*3*/] = { 3505.623f, 3787.041f, 28.9708f };
	vVar0[3 /*3*/] = { -1976.225f, 4546.3f, 56.0401f };
	iVar3 = 0;
	while (iVar3 <= 3)
	{
		uVar1[iVar3] = func_15(unk_0xBC25C936A095B5BA(), vVar0[iVar3 /*3*/], 1);
		iVar3++;
	}
	fVar2 = uVar1[0];
	iVar4 = 1;
	iVar3 = 0;
	while (iVar3 <= 3)
	{
		if (uVar1[iVar3] < fVar2)
		{
			fVar2 = uVar1[iVar3];
			iVar4 = iVar3 + 1;
		}
		iVar3++;
	}
	Local_132.f_3 = iVar4;
	Local_132.f_7 = { func_24(Local_132.f_3) };
	return 1;
}

Vector3 func_24(int iParam0)//Position - 0x9A4
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = unk_0xB99C193A32DE341D();
	switch (iParam0)
	{
		case 1:
			iVar1 = 6;
			iVar4 = 0;
			iVar5 = 7;
			break;
		
		case 2:
			iVar1 = 6;
			iVar4 = 8;
			iVar5 = 7;
			break;
		
		case 3:
			iVar1 = 5;
			iVar4 = 16;
			iVar5 = 6;
			break;
		
		case 4:
			iVar1 = 4;
			iVar4 = 24;
			iVar5 = 5;
			break;
	}
	unk_0x72044F236C7340DD(iVar0);
	iVar2 = unk_0xD051190CC62C60DF(0, iVar1);
	iVar3 = func_28(2947, -1, 0);
	if (iVar5 > 1)
	{
		if (unk_0xFA30DFD0084E92FE(iVar3, iVar4))
		{
			iVar6 = iVar4 + 1;
			while (iVar6 <= (iVar4 + 1 + (iVar5 - 1)))
			{
				if (unk_0xFA30DFD0084E92FE(iVar3, iVar6))
				{
					if (iVar6 - iVar4 + 1) >= (iVar5 - 1)
					{
						iVar2 = 0;
					}
					else
					{
						iVar2 = (iVar6 - iVar4 + 1) + 1;
					}
					iVar6 = (iVar4 + 1 + (iVar5 - 1));
				}
				iVar6++;
			}
		}
	}
	iVar3 = 0;
	unk_0xF0059F27F7BB6680(&iVar3, (iVar4 + 1 + iVar2));
	unk_0xF0059F27F7BB6680(&iVar3, iVar4);
	func_25(2947, iVar3, -1, 1, 0);
	Local_132.f_4 = iVar3;
	switch (iParam0)
	{
		case 1:
			switch (iVar2)
			{
				case 0:
					return -472.415f, -1689.474f, 17.9477f;
				
				case 1:
					return -1654.092f, 213.143f, 59.6413f;
				
				case 2:
					return -1008.389f, -1020.496f, 1.1503f;
				
				case 3:
					return -604.266f, -142.684f, 38.0086f;
				
				case 4:
					return -1700.562f, -322.726f, 49.0851f;
				
				case 5:
					return -1158.28f, -383.876f, 50.7161f;
				
				case 6:
					return -1191.066f, -1491.259f, 3.3797f;
				
				default:
			}
			break;
		
		case 2:
			switch (iVar2)
			{
				case 0:
					return 160.142f, -1761.704f, 28.0984f;
				
				case 1:
					return 1097.841f, -554.319f, 54.7365f;
				
				case 2:
					return 191.932f, 124.653f, 96.9401f;
				
				case 3:
					return 323.693f, -867.527f, 28.1726f;
				
				case 4:
					return 1386.79f, -1689.002f, 61.0964f;
				
				case 5:
					return 968.623f, -3067.462f, 4.9008f;
				
				case 6:
					return 928.85f, -2270.156f, 29.5096f;
				
				default:
			}
			break;
		
		case 3:
			switch (iVar2)
			{
				case 0:
					return 1667.876f, 3710.527f, 33.0008f;
				
				case 1:
					return 2459.918f, 4827.391f, 34.4214f;
				
				case 2:
					return 1506.714f, 6513.564f, 19.8804f;
				
				case 3:
					return 2501.049f, 2639.483f, 42.5508f;
				
				case 4:
					return 2658.239f, 1542.729f, 23.4847f;
				
				case 5:
					return 1415.427f, 1819.726f, 102.3258f;
				
				default:
			}
			break;
		
		case 4:
			switch (iVar2)
			{
				case 0:
					return -194.476f, 6316.824f, 30.5625f;
				
				case 1:
					return -660.505f, 5677.562f, 30.7898f;
				
				case 2:
					return -1557.125f, 4561.964f, 18.5454f;
				
				case 3:
					return -159.803f, 2713.044f, 54.3232f;
				
				case 4:
					return -3240.385f, 1106.345f, 1.5823f;
				
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_25(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0xD50
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_269BC5[iParam0 /*3*/][func_26(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x3A57956BCE003880(iVar0, iParam1, iParam3);
	}
}

int func_26(int iParam0)//Position - 0xD80
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_27();
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

int func_27()//Position - 0xDB4
{
	return Global_1407E0;
}

int func_28(int iParam0, int iParam1, int iParam2)//Position - 0xDC0
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_269BC5[iParam0 /*3*/][func_26(iParam1)];
	if (unk_0x6CB99B97664C3727(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_29()//Position - 0xDF2
{
	return Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_23;
}

void func_30(int iParam0)//Position - 0xE09
{
	Local_132 = iParam0;
}

int func_31()//Position - 0xE15
{
	if (Global_267214.f_1312.f_20)
	{
		Global_267214.f_1312.f_20 = 0;
		return 1;
	}
	return 0;
}

void func_32()//Position - 0xE38
{
	bLocal_121 = func_5(func_16(), 0, 1);
	func_787();
	func_724();
	func_723();
	func_720();
	func_701();
	func_696();
	func_675();
	func_657();
	func_647();
	switch (vLocal_133[unk_0x6BAA0516CC970D99() /*3*/].f_1)
	{
		case 0:
			if (func_646())
			{
				func_639(0);
			}
			else if (func_637(unk_0xB5CEFD608600A09F(), func_16(), 0))
			{
				func_639(6);
			}
			break;
		
		case 1:
			if (func_646())
			{
				func_639(5);
				func_607(2);
				if (bLocal_121)
				{
					if (!unk_0xFA30DFD0084E92FE(vLocal_133[unk_0x6BAA0516CC970D99() /*3*/].f_2, 8))
					{
						func_605();
						unk_0xF0059F27F7BB6680(&(vLocal_133[unk_0x6BAA0516CC970D99() /*3*/].f_2), 8);
					}
				}
				if (!func_604(unk_0xB5CEFD608600A09F(), 0))
				{
					func_603(unk_0xB5CEFD608600A09F(), 0);
				}
				if (unk_0xFA30DFD0084E92FE(Local_132.f_2, 6))
				{
					func_639(4);
				}
			}
			else if (bLocal_121)
			{
				if (func_637(unk_0xB5CEFD608600A09F(), func_16(), 0))
				{
					func_639(3);
					func_607(1);
				}
				else
				{
					func_607(0);
					if (unk_0xFA30DFD0084E92FE(vLocal_133[unk_0x6BAA0516CC970D99() /*3*/].f_2, 0))
					{
						func_639(8);
					}
					else
					{
						func_639(1);
					}
					if (func_602(unk_0x6BAA0516CC970D99()))
					{
						func_599();
						func_568();
					}
				}
			}
			if (!unk_0xFA30DFD0084E92FE(vLocal_133[unk_0x6BAA0516CC970D99() /*3*/].f_2, 7))
			{
				func_544(-1, 0, 0, -1, 0, 0);
				unk_0xF0059F27F7BB6680(&(vLocal_133[unk_0x6BAA0516CC970D99() /*3*/].f_2), 7);
			}
			func_423(&(Global_14A4EA.f_215), &Global_14A4EA, 27, &(Global_14A4EA.f_1), &(Global_14A4EA.f_74), -1, 0, 0);
			break;
		
		case 2:
			if (!func_637(unk_0xB5CEFD608600A09F(), func_16(), 1))
			{
				if (!func_422(unk_0xB5CEFD608600A09F(), 19))
				{
					func_312();
					return;
				}
			}
			if (func_646())
			{
				if (func_604(unk_0xB5CEFD608600A09F(), 0))
				{
					func_311(unk_0xB5CEFD608600A09F(), 0);
				}
				if (unk_0xFA30DFD0084E92FE(vLocal_133[unk_0x6BAA0516CC970D99() /*3*/].f_2, 11))
				{
					func_824();
					return;
				}
			}
			func_86();
			func_312();
			if (unk_0xFA30DFD0084E92FE(Local_132.f_2, 0))
			{
				if (func_646())
				{
					func_607(10);
				}
				else if (func_637(unk_0xB5CEFD608600A09F(), func_16(), 0))
				{
					func_607(11);
				}
				else
				{
					func_607(6);
				}
				func_82(Local_132.f_5);
			}
			else if (unk_0xFA30DFD0084E92FE(Local_132.f_2, 1))
			{
				if (func_602(unk_0x6BAA0516CC970D99()))
				{
					if (!func_637(unk_0xB5CEFD608600A09F(), Local_132.f_5, 1))
					{
						func_607(7);
					}
				}
				func_82(0);
			}
			else if (unk_0xFA30DFD0084E92FE(Local_132.f_2, 2))
			{
				if (func_646())
				{
					func_607(12);
				}
				else if (func_637(unk_0xB5CEFD608600A09F(), func_16(), 0))
				{
					func_607(13);
				}
				else if (func_602(unk_0x6BAA0516CC970D99()))
				{
					func_607(14);
				}
				func_82(0);
			}
			else if (unk_0xFA30DFD0084E92FE(Local_132.f_2, 3))
			{
				if (func_646())
				{
					if (func_81())
					{
						func_607(9);
					}
					else
					{
						func_607(8);
					}
				}
				else if (Local_132.f_6 == unk_0xB5CEFD608600A09F())
				{
					if (func_637(unk_0xB5CEFD608600A09F(), func_16(), 0))
					{
						func_607(15);
					}
					else
					{
						func_607(3);
					}
				}
				else if (func_602(unk_0x6BAA0516CC970D99()))
				{
					if (func_81())
					{
						func_607(17);
					}
					else
					{
						func_607(4);
					}
				}
				func_82(Local_132.f_6);
			}
			else if (unk_0xFA30DFD0084E92FE(Local_132.f_2, 4))
			{
				if (func_646())
				{
					func_607(16);
				}
				func_82(0);
			}
			if (func_33(&uLocal_107, 1, 0))
			{
				func_807(3);
			}
			break;
		
		case 3:
			break;
	}
}

int func_33(var uParam0, bool bParam1, int iParam2)//Position - 0x11B8
{
	bool bVar0;
	
	func_80(29);
	if ((*uParam0 > 0 && !func_79()) && func_63(unk_0xB5CEFD608600A09F()) != 0)
	{
		if (!func_60())
		{
			func_59();
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_21(&(uParam0->f_3)))
			{
				func_20(&(uParam0->f_3), 0, 0);
			}
			else if (func_19(&(uParam0->f_3), 1000, 0))
			{
				unk_0xF0059F27F7BB6680(&(Global_19693F.f_3), 2);
				if (bParam1)
				{
					unk_0xF0059F27F7BB6680(&(Global_267214.f_11DD), 0);
					func_20(&(uParam0->f_5), 0, 0);
				}
				func_20(&(uParam0->f_1), 0, 0);
				func_58(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_21(&(uParam0->f_5)))
			{
				if (func_19(&(uParam0->f_5), 3000, 0))
				{
					bVar0 = true;
				}
			}
			else
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_48(iParam2);
				func_58(uParam0, 2);
			}
			break;
		
		case 2:
			func_48(0);
			if (func_19(&(uParam0->f_1), 15000, 0))
			{
				if (func_34(func_35(0)))
				{
					unk_0x7456702622C62EA0(1);
				}
				func_58(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_19(&(uParam0->f_1), 23500, 0))
			{
				unk_0x7CB6FD92BE491AD9(&(Global_267214.f_11DD), 1);
				unk_0x7CB6FD92BE491AD9(&(Global_19693F.f_3), 2);
				func_58(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			unk_0x7CB6FD92BE491AD9(&(Global_267214.f_11DD), 1);
			unk_0x7CB6FD92BE491AD9(&(Global_19693F.f_3), 2);
			return 1;
	}
	return 0;
}

int func_34(char* sParam0)//Position - 0x1332
{
	unk_0xF07D20149ECBC61E(sParam0);
	return unk_0xA66DBDA0A072514A(0);
}

char* func_35(int iParam0)//Position - 0x1345
{
	if (((func_46(unk_0xB5CEFD608600A09F()) || func_43(unk_0xB5CEFD608600A09F())) || func_39()) || iParam0)
	{
		if (func_43(unk_0xB5CEFD608600A09F()))
		{
			return "BG_LBD_HELP";
		}
		return "BG_LBD_HELPW";
	}
	if (func_36(func_38()))
	{
		return "GB_LBD_HELP";
	}
	return "GB_LBD_HELPW";
}

int func_36(int iParam0)//Position - 0x13A2
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return func_37(iParam0, 0);
	return 0;
}

int func_37(int iParam0, int iParam1)//Position - 0x13FC
{
	switch (iParam0)
	{
		case 199:
		case 205:
		case 210:
		case 211:
			return 1;
		
		default:
	}
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 194:
			case 193:
			case 189:
			case 153:
				return 1;
			}
		
		default:
	}
	return 0;
}

int func_38()//Position - 0x1451
{
	return Global_190DD1;
}

bool func_39()//Position - 0x145D
{
	return (func_42() && func_40(func_29()));
}

bool func_40(int iParam0)//Position - 0x1476
{
	return func_41(iParam0, 1);
}

int func_41(int iParam0, int iParam1)//Position - 0x1485
{
	if (iParam0 != func_11())
	{
		if (Global_18C80F[iParam0 /*558*/].f_B != func_11())
		{
			if (Global_18C80F[iParam0 /*558*/].f_B == iParam0 && Global_18C80F[iParam0 /*558*/].f_B.f_199 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_42()//Position - 0x14D4
{
	return Global_18402B[unk_0xB5CEFD608600A09F() /*770*/] == 148;
}

bool func_43(int iParam0)//Position - 0x14EA
{
	return func_37(func_44(iParam0), 0);
}

int func_44(int iParam0)//Position - 0x14FD
{
	if (func_45(iParam0, 0))
	{
		return Global_18C80F[iParam0 /*558*/].f_B.f_21;
	}
	return -1;
}

int func_45(int iParam0, int iParam1)//Position - 0x1520
{
	if (Global_18C80F[iParam0 /*558*/].f_B.f_21 != -1 || (iParam1 && Global_18C80F[iParam0 /*558*/].f_B.f_20 != -1))
	{
		return 1;
	}
	return 0;
}

bool func_46(int iParam0)//Position - 0x155B
{
	return func_47(func_44(iParam0));
}

int func_47(int iParam0)//Position - 0x156D
{
	switch (iParam0)
	{
		case 179:
		case 180:
		case 148:
			if (Global_18402B[unk_0xB5CEFD608600A09F() /*770*/] == 148 && func_41(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_23, 1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 182:
		case 183:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 195:
		case 197:
		case 198:
		case 199:
		case 200:
		case 201:
		case 205:
		case 207:
		case 208:
		case 209:
		case 210:
		case 211:
			return 1;
	}
	return 0;
}

void func_48(int iParam0)//Position - 0x164F
{
	if (unk_0xFA30DFD0084E92FE(Global_267214.f_11DD, 0))
	{
		if (((((((((((!unk_0x7382A6B79BD5F585() && !unk_0xFA30DFD0084E92FE(Global_267214.f_310, 2)) && func_5(unk_0xB5CEFD608600A09F(), 1, 1)) && !Global_10AB8) && !Global_CF9C) && !unk_0x17FAADF9916EF741()) && !func_422(unk_0xB5CEFD608600A09F(), 22)) && func_63(unk_0xB5CEFD608600A09F()) != 0) && !func_56(func_57())) && !func_46(unk_0xB5CEFD608600A09F())) && !func_55(func_44(unk_0xB5CEFD608600A09F()))) && !func_54(func_44(unk_0xB5CEFD608600A09F())))
		{
			unk_0xF0059F27F7BB6680(&(Global_267214.f_11DD), 1);
			func_53(func_35(iParam0), -1);
			func_49(1);
			unk_0x7CB6FD92BE491AD9(&(Global_267214.f_11DD), 0);
		}
	}
}

void func_49(int iParam0)//Position - 0x1733
{
	char* sVar0;
	
	sVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_50(1))
	{
		sVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (iParam0 && !func_79())
	{
		unk_0xC4BA30B532FE260F(-1, "Boss_Message_Orange", sVar0, false);
	}
}

bool func_50(bool bParam0)//Position - 0x1767
{
	return func_51(unk_0xB5CEFD608600A09F(), bParam0);
}

bool func_51(int iParam0, bool bParam1)//Position - 0x1779
{
	return func_52(iParam0, bParam1, 1);
}

int func_52(int iParam0, bool bParam1, int iParam2)//Position - 0x178A
{
	int iVar0;
	
	if (iParam0 == func_11())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_41(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_18C80F[iParam0 /*558*/].f_B;
	if (iVar0 != func_11() && Global_18C80F[iVar0 /*558*/].f_B.f_199 == iParam2)
	{
		return 1;
	}
	return 0;
}

void func_53(char* sParam0, int iParam1)//Position - 0x17E6
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 0, false, iParam1);
}

int func_54(int iParam0)//Position - 0x17FD
{
	switch (iParam0)
	{
		case 236:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

int func_55(int iParam0)//Position - 0x1853
{
	switch (iParam0)
	{
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 188:
		case 178:
			return 1;
		
		default:
	}
	return 0;
}

int func_56(int iParam0)//Position - 0x18A3
{
	switch (iParam0)
	{
		case 167:
		case 169:
		case 168:
			return 1;
		
		default:
	}
	return 0;
}

int func_57()//Position - 0x18C9
{
	char* sVar0;
	
	sVar0 = unk_0x1377080E9B0BD993();
	if (unk_0x3362CDE8460ED38B(sVar0, "GB_ASSAULT"))
	{
		return 159;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_BELLYBEAST"))
	{
		return 157;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_DEATHMATCH"))
	{
		return 148;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_HUNT_THE_BOSS"))
	{
		return 164;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_SIGHTSEER"))
	{
		return 142;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_YACHT_ROB"))
	{
		return 152;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_CARJACKING"))
	{
		return 163;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_COLLECT_MONEY"))
	{
		return 155;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_FINDERSKEEPERS"))
	{
		return 160;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_FIVESTAR"))
	{
		return 153;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_POINT_TO_POINT"))
	{
		return 162;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_ROB_SHOP"))
	{
		return 154;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_HEADHUNTER"))
	{
		return 166;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_CONTRABAND_BUY"))
	{
		return 167;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_CONTRABAND_SELL"))
	{
		return 168;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_CONTRABAND_DEFEND"))
	{
		return 169;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_AIRFREIGHT"))
	{
		return 170;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_CASHING_OUT"))
	{
		return 171;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_SALVAGE"))
	{
		return 172;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_FRAGILE_GOODS"))
	{
		return 173;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_VEHICLE_EXPORT"))
	{
		return 178;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_BIKER_JOUST"))
	{
		return 179;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_BIKER_UNLOAD_WEAPONS"))
	{
		return 180;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_BIKER_BAD_DEAL"))
	{
		return 182;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_BIKER_RESCUE_CONTACT"))
	{
		return 183;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_BIKER_LAST_RESPECTS"))
	{
		return 185;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_BIKER_CONTRACT_KILLING"))
	{
		return 186;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_BIKER_RACE_P2P"))
	{
		return 189;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_BIKER_CONTRABAND_SELL"))
	{
		return 190;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_BIKER_CONTRABAND_DEFEND"))
	{
		return 191;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_BIKER_DRIVEBY_ASSASSIN"))
	{
		return 193;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_BIKER_RIPPIN_IT_UP"))
	{
		return 194;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_BIKER_FREE_PRISONER"))
	{
		return 197;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_BIKER_SAFECRACKER"))
	{
		return 198;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_BIKER_STEAL_BIKES"))
	{
		return 195;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_BIKER_SEARCH_AND_DESTROY"))
	{
		return 199;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "AM_PENNED_IN"))
	{
		return 200;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_BIKER_STAND_YOUR_GROUND"))
	{
		return 201;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_BIKER_CRIMINAL_MISCHIEF"))
	{
		return 205;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_BIKER_DESTROY_VANS"))
	{
		return 207;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_BIKER_BURN_ASSETS"))
	{
		return 208;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_BIKER_SHUTTLE"))
	{
		return 209;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_BIKER_WHEELIE_RIDER"))
	{
		return 210;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_PLOUGHED"))
	{
		return 214;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_FULLY_LOADED"))
	{
		return 215;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_AMPHIBIOUS_ASSAULT"))
	{
		return 216;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_TRANSPORTER"))
	{
		return 217;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_FORTIFIED"))
	{
		return 218;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_VELOCITY"))
	{
		return 219;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_STOCKPILING"))
	{
		return 221;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_RAMPED_UP"))
	{
		return 220;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_GUNRUNNING"))
	{
		return 225;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_GUNRUNNING_DEFEND"))
	{
		return 227;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_SMUGGLER"))
	{
		return 229;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "GB_FM_GANGOPS"))
	{
		return 233;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "FMMC_TYPE_FMBB_SELL"))
	{
		return 237;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "FMMC_TYPE_FMBB_DEFEND"))
	{
		return 238;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "FMMC_TYPE_FMBB_SECURITY_VAN"))
	{
		return 239;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "FMMC_TYPE_FMBB_TARGET_PURSUIT"))
	{
		return 240;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "FMMC_TYPE_FMBB_JEWEL_STORE_GRAB"))
	{
		return 241;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "FMMC_TYPE_FMBB_BANK_JOB"))
	{
		return 242;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "FMMC_TYPE_FMBB_DATA_HACK"))
	{
		return 244;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "FMMC_TYPE_FMBB_INFILTRATION"))
	{
		return 248;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "FMMC_TYPE_FMBB_PHONECALL"))
	{
		return 249;
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "FMMC_TYPE_FMBB_CLUB_MANAGEMENT"))
	{
		return 250;
	}
	return 0;
}

void func_58(var uParam0, int iParam1)//Position - 0x1E4B
{
	*uParam0 = iParam1;
}

void func_59()//Position - 0x1E58
{
	Global_258664 = 1;
}

int func_60()//Position - 0x1E65
{
	if (((((((func_44(unk_0xB5CEFD608600A09F()) == 170 || func_44(unk_0xB5CEFD608600A09F()) == 219) || func_44(unk_0xB5CEFD608600A09F()) == 221) || func_44(unk_0xB5CEFD608600A09F()) == 220) || func_44(unk_0xB5CEFD608600A09F()) == 216) || func_44(unk_0xB5CEFD608600A09F()) == 215) || func_44(unk_0xB5CEFD608600A09F()) == 214) || func_44(unk_0xB5CEFD608600A09F()) == 218)
	{
		return 1;
	}
	if (func_61(unk_0xB5CEFD608600A09F()))
	{
		return 1;
	}
	return 0;
}

int func_61(int iParam0)//Position - 0x1F06
{
	if (iParam0 != func_11())
	{
		if (func_5(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1)
			{
				return func_62(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 2;
			}
		}
	}
	return 0;
}

int func_62(int iParam0)//Position - 0x1F4C
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

int func_63(int iParam0)//Position - 0x2298
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_78(iParam0) && !func_77(iParam0)) && !unk_0xFA30DFD0084E92FE(Global_18C80F[iParam0 /*558*/].f_1, 8));
	bVar2 = func_76(iParam0);
	uVar3 = func_75();
	uVar4 = func_68();
	if ((bVar1 && (func_67(iParam0) || func_66(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_65(iParam0)) && !func_64(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_267214.f_1312.f_D0 != iVar0)
	{
		Global_267214.f_1312.f_D0 = iVar0;
	}
	return iVar0;
}

bool func_64(int iParam0)//Position - 0x2356
{
	return func_422(iParam0, 19);
}

int func_65(int iParam0)//Position - 0x2366
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_422(iParam0, 9);
	}
	return 0;
}

int func_66(int iParam0)//Position - 0x2384
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xFA30DFD0084E92FE(Global_18C80F[iVar0 /*558*/].f_1, 0);
	}
	return 0;
}

int func_67(int iParam0)//Position - 0x23AA
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xFA30DFD0084E92FE(Global_18C80F[iVar0 /*558*/].f_1, 7);
	}
	return 0;
}

int func_68()//Position - 0x23D0
{
	if ((func_422(unk_0xB5CEFD608600A09F(), 21) || func_422(unk_0xB5CEFD608600A09F(), 22)) || func_73())
	{
		return 1;
	}
	if (func_69())
	{
		func_80(22);
		return 1;
	}
	return 0;
}

int func_69()//Position - 0x2415
{
	if (func_45(unk_0xB5CEFD608600A09F(), 0))
	{
		if ((func_75() && !func_72()) || func_71(unk_0xB5CEFD608600A09F(), 21))
		{
			return 1;
		}
		else
		{
			func_70(27);
		}
	}
	return 0;
}

void func_70(int iParam0)//Position - 0x2458
{
	unk_0x7CB6FD92BE491AD9(&(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_4), iParam0);
}

bool func_71(int iParam0, int iParam1)//Position - 0x2475
{
	return unk_0xFA30DFD0084E92FE(Global_24FB5C[iParam0 /*406*/].f_CC, iParam1);
}

bool func_72()//Position - 0x248E
{
	return Global_1406A0.f_1;
}

bool func_73()//Position - 0x249C
{
	return func_74(306, -1);
}

int func_74(int iParam0, int iParam1)//Position - 0x24AC
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2705A2[iParam0 /*3*/][func_26(iParam1)];
	if (unk_0x9CADE88F210A0BAE(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_75()//Position - 0x24D8
{
	return Global_1406A0;
}

bool func_76(int iParam0)//Position - 0x24E4
{
	return func_422(iParam0, 20);
}

bool func_77(int iParam0)//Position - 0x24F4
{
	return unk_0xFA30DFD0084E92FE(Global_18C80F[iParam0 /*558*/].f_1, 2);
}

int func_78(int iParam0)//Position - 0x250C
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_18C80F[iVar0 /*558*/] != -1;
	}
	return 0;
}

bool func_79()//Position - 0x252D
{
	return Global_252E21.f_A8F[0 /*80*/].f_1 != 0;
}

void func_80(int iParam0)//Position - 0x2543
{
	unk_0xF0059F27F7BB6680(&(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_4), iParam0);
}

int func_81()//Position - 0x2560
{
	if (Local_132.f_6 == func_11() || Local_132.f_5 == func_11())
	{
		return 0;
	}
	if (!func_637(Local_132.f_6, Local_132.f_5, 0))
	{
		return 0;
	}
	return 1;
}

void func_82(int iParam0)//Position - 0x259D
{
	if (!unk_0xFA30DFD0084E92FE(vLocal_133[unk_0x6BAA0516CC970D99() /*3*/].f_2, 6))
	{
		if (iParam0 != func_11())
		{
			func_83(0, iParam0);
		}
		else
		{
			func_83(0, func_11());
		}
		unk_0xF0059F27F7BB6680(&(vLocal_133[unk_0x6BAA0516CC970D99() /*3*/].f_2), 6);
	}
}

void func_83(int iParam0, int iParam1)//Position - 0x25E3
{
	int iVar0;
	
	if (iParam1 != func_11())
	{
		if (unk_0x96B1061E8F3CBC9A(iParam1))
		{
			if (iParam1 == unk_0xB5CEFD608600A09F())
			{
				iVar0 = 1;
			}
			else if (func_84(iParam1, unk_0xB5CEFD608600A09F()))
			{
				iVar0 = 1;
			}
		}
	}
	if (iParam0 || iVar0)
	{
		if (func_5(unk_0xB5CEFD608600A09F(), 1, 1))
		{
			unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), 0, 0);
			unk_0xCE6A8FE7DACF8BD4(unk_0xB5CEFD608600A09F(), 0);
			Global_267214.f_1312.f_174 = unk_0xB99C193A32DE341D();
		}
	}
}

int func_84(int iParam0, int iParam1)//Position - 0x265A
{
	int iVar0;
	
	if (iParam0 != func_11() && iParam1 != func_11())
	{
		iVar0 = func_85(iParam0);
		if (iVar0 != func_11())
		{
			return iVar0 == func_85(iParam1);
		}
	}
	return 0;
}

int func_85(int iParam0)//Position - 0x2696
{
	if (iParam0 != func_11())
	{
		return Global_18C80F[iParam0 /*558*/].f_B;
	}
	return func_11();
}

void func_86()//Position - 0x26B9
{
	struct<20> Var0;
	
	Var0.f_2 = 1065353216;
	Var0.f_3 = 1065353216;
	Var0.f_4 = 1;
	Var0.f_9 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	if (!unk_0xFA30DFD0084E92FE(vLocal_133[unk_0x6BAA0516CC970D99() /*3*/].f_2, 5))
	{
		if (unk_0xFA30DFD0084E92FE(Local_132.f_2, 3))
		{
			if (unk_0xB5CEFD608600A09F() == func_6())
			{
				if (func_637(unk_0xB5CEFD608600A09F(), func_16(), 0))
				{
					func_87(164, 0, &Var0, 0);
				}
				else
				{
					func_87(164, 1, &Var0, 0);
				}
			}
			else
			{
				func_87(164, 0, &Var0, 0);
			}
			unk_0xF0059F27F7BB6680(&(vLocal_133[unk_0x6BAA0516CC970D99() /*3*/].f_2), 5);
		}
		else if (unk_0xFA30DFD0084E92FE(Local_132.f_2, 0))
		{
			if (func_637(unk_0xB5CEFD608600A09F(), func_16(), 1))
			{
				func_87(164, 1, &Var0, 0);
			}
			else
			{
				func_87(164, 0, &Var0, 0);
			}
			unk_0xF0059F27F7BB6680(&(vLocal_133[unk_0x6BAA0516CC970D99() /*3*/].f_2), 5);
		}
		else if (unk_0xFA30DFD0084E92FE(Local_132.f_2, 2) || unk_0xFA30DFD0084E92FE(Local_132.f_2, 1))
		{
			func_87(164, 0, &Var0, 0);
			unk_0xF0059F27F7BB6680(&(vLocal_133[unk_0x6BAA0516CC970D99() /*3*/].f_2), 5);
		}
	}
}

void func_87(int iParam0, bool bParam1, var uParam2, bool bParam3)//Position - 0x27D9
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	var uVar12;
	int iVar13;
	bool bVar14;
	struct<2> Var15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	
	func_309(iParam0, &fVar2, &fVar3);
	if (uParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + uParam2->f_1);
		iVar0 = (iVar0 + *uParam2);
	}
	if (bParam1)
	{
		if (bParam3)
		{
			iVar1 = (iVar1 + Global_40001.f_44F4);
		}
		else
		{
			iVar1 = (iVar1 + func_308(iParam0, uParam2->f_D));
		}
		if (iParam0 == 233)
		{
			iVar6 = (uParam2->f_A / uParam2->f_B) * 100;
			iVar1 = ((iVar1 / 100) * iVar6);
		}
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * fVar3));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * uParam2->f_3));
		if (bParam3 == 0)
		{
			iVar0 = (iVar0 + func_307(iParam0));
		}
		else
		{
			iVar0 = (iVar0 + Global_40001.f_44F3);
		}
		iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * fVar2));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * uParam2->f_2));
	}
	else if ((iParam0 == 185 || iParam0 == 220) || iParam0 == 221)
	{
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * fVar3));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * fVar2));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * uParam2->f_2));
	}
	if (uParam2->f_12 > -1)
	{
		iVar0 = (iVar0 + uParam2->f_12);
	}
	if (uParam2->f_13 > -1)
	{
		iVar1 = (iVar1 + uParam2->f_13);
	}
	if (func_305(iParam0))
	{
		if (bParam1)
		{
			if (func_304(unk_0xB5CEFD608600A09F()) > 0)
			{
				func_303();
			}
			else
			{
				func_302();
			}
		}
		else
		{
			func_301();
		}
	}
	func_285(iParam0, bParam1, uParam2, &iVar0, &iVar4);
	func_283(iParam0, uParam2, &iVar0, &iVar5);
	func_261(iParam0, uParam2, &iVar0, &iVar5);
	func_247(iParam0, uParam2, &iVar0, &iVar5, &iVar7);
	func_230(iParam0, uParam2, &iVar0, &iVar5);
	if (iParam0 == 168)
	{
		Global_267214.f_1312.f_173 = iVar4;
	}
	else
	{
		Global_267214.f_1312.f_173 = iVar5;
	}
	iVar8 = func_29();
	if (iVar8 != func_11() && iParam0 != 148)
	{
		if (func_229(unk_0xB5CEFD608600A09F(), 0))
		{
			if (!func_637(unk_0xB5CEFD608600A09F(), iVar8, 1))
			{
				func_188(&iVar0, 1);
			}
		}
	}
	func_183(iParam0, &iVar9, &iVar10);
	iVar1 = (iVar1 + iVar9);
	iVar0 = (iVar0 + iVar10);
	if (iVar1 > 0)
	{
		Global_196948.f_A = iVar1;
		func_182();
		func_132(0, unk_0xBC25C936A095B5BA(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_196948.f_9 = iVar0;
		iVar13 = func_131();
		if (iVar13 != func_11())
		{
			func_130(iVar13, &uVar11, &uVar12);
		}
		bVar14 = !func_129(1);
		if (iParam0 == 168)
		{
			if (!func_128())
			{
				unk_0xF8ED2CAA140D95A9(iVar0, iVar4);
			}
		}
		else if (iParam0 == 190)
		{
			if (func_127())
			{
				if (!func_128())
				{
					Var15 = { func_126() };
					unk_0x7C78EDD3BFB2E833(iVar0, unk_0x56BEECB328B6D29D(func_125(Var15)), func_124(Var15), iVar5);
				}
			}
			else if (func_128())
			{
				func_115(-856006867, iVar0, &iVar16, 0, 1, 0);
				Global_41092C[iVar16 /*80*/].f_8.f_36 = uVar11;
				Global_41092C[iVar16 /*80*/].f_8.f_37 = uVar12;
				Global_41092C[iVar16 /*80*/].f_8.f_38 = bVar14;
			}
			else
			{
				unk_0xF8ED2CAA140D95A9(iVar0, iVar5);
			}
		}
		else if (iParam0 == 226)
		{
			if (func_113())
			{
				if (!func_128())
				{
					unk_0x7C78EDD3BFB2E833(iVar0, unk_0x56BEECB328B6D29D(func_125(func_112(unk_0xB5CEFD608600A09F()))), 5, iVar5);
				}
			}
			else if (func_128())
			{
				func_115(-856006867, iVar0, &iVar17, 0, 1, 0);
				Global_41092C[iVar17 /*80*/].f_8.f_36 = uVar11;
				Global_41092C[iVar17 /*80*/].f_8.f_37 = uVar12;
				Global_41092C[iVar17 /*80*/].f_8.f_38 = bVar14;
			}
			else
			{
				unk_0xF8ED2CAA140D95A9(iVar0, iVar5);
			}
		}
		else if (iParam0 == 230)
		{
			if (func_113())
			{
				if (!func_128())
				{
					iVar18 = func_108(uParam2->f_10, iVar5);
					iVar19 = iVar0;
					if (iVar18 > 0)
					{
						iVar19 = (iVar19 - iVar18);
					}
					if (iVar7 > 0)
					{
						iVar19 = (iVar19 - iVar7);
					}
					unk_0xB6DC534CAEB0D937(iVar19, iVar5, iVar7, iVar18, uParam2->f_10);
				}
			}
			else if (func_128())
			{
				func_115(463142405, iVar0, &iVar20, 0, 1, 0);
				Global_41092C[iVar20 /*80*/].f_8.f_36 = uVar11;
				Global_41092C[iVar20 /*80*/].f_8.f_37 = uVar12;
				Global_41092C[iVar20 /*80*/].f_8.f_38 = bVar14;
			}
			else
			{
				unk_0xACD5CE18E734968D(uVar11, uVar12, iVar0, bVar14);
			}
		}
		else if (iParam0 == 233)
		{
			if (func_128())
			{
				func_115(1407278493, iVar0, &iVar21, 0, 1, 0);
				Global_41092C[iVar21 /*80*/].f_8.f_36 = uVar11;
				Global_41092C[iVar21 /*80*/].f_8.f_37 = uVar12;
				Global_41092C[iVar21 /*80*/].f_8.f_38 = bVar14;
			}
			else
			{
				unk_0x02A33E5F88B092E3(iVar0);
			}
		}
		else if (iParam0 == 237)
		{
			if (func_113())
			{
				if (!func_128())
				{
					unk_0x0B39CF0D53F1C883(iVar0, uParam2->f_14, iVar5);
				}
			}
			else if (func_128())
			{
				func_115(-856006867, iVar0, &iVar22, 0, 1, 0);
				Global_41092C[iVar22 /*80*/].f_8.f_36 = uVar11;
				Global_41092C[iVar22 /*80*/].f_8.f_37 = uVar12;
				Global_41092C[iVar22 /*80*/].f_8.f_38 = bVar14;
			}
			else
			{
				unk_0xF8ED2CAA140D95A9(iVar0, iVar5);
			}
		}
		else if (iParam0 == 250)
		{
			if (func_128())
			{
				func_115(-961034881, iVar0, &iVar23, 0, 1, 0);
				Global_41092C[iVar23 /*80*/].f_8.f_36 = uVar11;
				Global_41092C[iVar23 /*80*/].f_8.f_37 = uVar12;
				Global_41092C[iVar23 /*80*/].f_8.f_38 = bVar14;
			}
			else
			{
				unk_0xA75EAC69F59E96E7(iVar0);
			}
		}
		else if (iParam0 == 249)
		{
			if (func_128())
			{
				func_115(1135468152, iVar0, &iVar24, 0, 1, 0);
				Global_41092C[iVar24 /*80*/].f_8.f_36 = uVar11;
				Global_41092C[iVar24 /*80*/].f_8.f_37 = uVar12;
				Global_41092C[iVar24 /*80*/].f_8.f_38 = bVar14;
			}
			else
			{
				unk_0xC5156361F26E2212(iVar0);
			}
		}
		else if (((((iParam0 == 242 || iParam0 == 244) || iParam0 == 248) || iParam0 == 241) || iParam0 == 239) || iParam0 == 240)
		{
			if (func_128())
			{
				func_115(-634726636, iVar0, &iVar25, 0, 1, 0);
				Global_41092C[iVar25 /*80*/].f_8.f_36 = uVar11;
				Global_41092C[iVar25 /*80*/].f_8.f_37 = uVar12;
				Global_41092C[iVar25 /*80*/].f_8.f_38 = bVar14;
			}
			else
			{
				unk_0x1FDA0AA679C9919B(iVar0);
			}
		}
		else if (func_128())
		{
			func_115(-856006867, iVar0, &iVar26, 0, 1, 0);
			Global_41092C[iVar26 /*80*/].f_8.f_36 = uVar11;
			Global_41092C[iVar26 /*80*/].f_8.f_37 = uVar12;
			Global_41092C[iVar26 /*80*/].f_8.f_38 = bVar14;
		}
		else
		{
			unk_0xECDF3A47BBA3F980(uVar11, uVar12, iVar0, bVar14);
		}
		func_107(iParam0, iVar0);
		if (func_106(iParam0))
		{
			if (func_105(iParam0) > -1)
			{
				func_104(func_105(iParam0), iVar0);
			}
		}
		Global_2588F5 = iVar0;
		func_9(&Global_258230, 0, 0);
	}
	if (func_65(unk_0xB5CEFD608600A09F()) || func_76(unk_0xB5CEFD608600A09F()))
	{
		func_96(iParam0);
	}
	if (func_47(iParam0))
	{
		Global_19695A.f_D = iVar0;
		Global_19695A.f_E = iVar1;
	}
	if (func_55(iParam0))
	{
		Global_196990.f_D = iVar0;
		Global_196990.f_E = iVar1;
	}
	if (func_95(iParam0))
	{
		Global_1969CF.f_C = iVar0;
		Global_1969CF.f_D = iVar1;
	}
	if (func_94(iParam0))
	{
		Global_1969FB.f_C = iVar0;
		Global_1969FB.f_D = iVar1;
	}
	if (func_93(iParam0))
	{
		Global_196A31.f_C = iVar0;
		Global_196A31.f_D = iVar1;
	}
	if (func_54(iParam0))
	{
		if (func_92(iParam0))
		{
			Global_196A81.f_C = iVar0;
			Global_196A81.f_D = iVar1;
		}
		else if (func_88(iParam0))
		{
			Global_196AB6.f_C = iVar0;
			Global_196AB6.f_D = iVar1;
		}
	}
}

int func_88(int iParam0)//Position - 0x2FD1
{
	if (((((((((iParam0 == 250 || iParam0 == 238) || iParam0 == 242) || iParam0 == 244) || iParam0 == 248) || iParam0 == 241) || iParam0 == 239) || iParam0 == 240) || iParam0 == 249) || (iParam0 == 237 && func_89(func_90(unk_0xB5CEFD608600A09F()))))
	{
		return 1;
	}
	return 0;
}

int func_89(int iParam0)//Position - 0x305A
{
	switch (iParam0)
	{
		case 0:
		case 4:
		case 3:
		case 2:
		case 5:
		case 1:
			return 1;
		
		default:
	}
	return 0;
}

int func_90(int iParam0)//Position - 0x3092
{
	if (func_44(iParam0) == 237 || func_44(iParam0) == 250)
	{
		return func_91(iParam0);
	}
	return -1;
}

int func_91(int iParam0)//Position - 0x30BF
{
	if (func_45(iParam0, 0))
	{
		return Global_18C80F[iParam0 /*558*/].f_B.f_B0;
	}
	return -1;
}

int func_92(int iParam0)//Position - 0x30E2
{
	if (iParam0 == 237)
	{
		return 1;
	}
	return 0;
}

int func_93(int iParam0)//Position - 0x30F6
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_94(int iParam0)//Position - 0x3110
{
	switch (iParam0)
	{
		case 229:
		case 230:
			return 1;
		
		default:
	}
	return 0;
}

int func_95(int iParam0)//Position - 0x3130
{
	switch (iParam0)
	{
		case 225:
		case 226:
		case 227:
			return 1;
		
		default:
	}
	return 0;
}

void func_96(int iParam0)//Position - 0x3156
{
	if (func_103(unk_0xB5CEFD608600A09F()) && func_127())
	{
		if (func_102(iParam0))
		{
			func_99(7948, -1);
		}
		else if (func_98(iParam0))
		{
			func_99(7950, -1);
		}
		else if (func_37(iParam0, 1))
		{
			func_99(7951, -1);
		}
		else if (func_97(iParam0))
		{
			func_99(7952, -1);
		}
	}
}

int func_97(int iParam0)//Position - 0x31C0
{
	switch (iParam0)
	{
		case 194:
		case 193:
		case 189:
		case 153:
			return 1;
		
		default:
	}
	return 0;
}

int func_98(int iParam0)//Position - 0x31EC
{
	switch (iParam0)
	{
		case 179:
		case 201:
		case 200:
		case 148:
			return 1;
		
		default:
	}
	return 0;
}

void func_99(int iParam0, int iParam1)//Position - 0x3218
{
	int iVar0;
	
	iVar0 = func_28(iParam0, func_26(iParam1), 0);
	iVar0++;
	if (!func_101(iParam0))
	{
		func_25(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_100(iParam0, iVar0, iParam1, 1);
	}
}

void func_100(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3259
{
	int iVar0;
	
	iVar0 = Global_269BC5[iParam0 /*3*/][func_26(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x3A57956BCE003880(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_14F606[func_26(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_14F60C[func_26(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_14F612[func_26(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_14F618[func_26(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_14F5EE[func_26(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_14F5F4[func_26(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_14F5FA[func_26(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_14F600[func_26(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_14F5D6[func_26(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_14F5DC[func_26(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_14F5E2[func_26(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_14F5E8[func_26(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_14F61E[func_26(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_14F624[func_26(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_14F62A[func_26(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_14F630[func_26(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_14F636[func_26(iParam2)] = iParam1;
			break;
		
		case 7229:
			Global_14F63C[func_26(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_14F642[func_26(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_14F648[func_26(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_270CF3[0 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_270CF3[1 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 2925:
			Global_270CF3[2 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_270CF3[3 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 7818:
			Global_270D5E[func_26(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_14F64E[func_26(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_14F654[func_26(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_14F65A[func_26(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_14F660[func_26(iParam2)] = iParam1;
			break;
		
		case 3049:
			Global_270D27[0 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3050:
			Global_270D27[1 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3051:
			Global_270D27[2 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3052:
			Global_270D27[3 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_270D27[4 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3632:
			Global_270D61[0 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3633:
			Global_270D61[1 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3634:
			Global_270D61[2 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3635:
			Global_270D61[3 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_270D61[4 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_270D71[0 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_270D71[1 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_270D71[2 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_270D71[3 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_270D71[4 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3217:
			Global_270D27[5 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_270CF3[4 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3659:
			Global_270D81[func_26(iParam2)] = iParam1;
			break;
		
		case 3660:
			Global_270D8A[func_26(iParam2)] = iParam1;
			break;
		
		case 3661:
			Global_270D84[func_26(iParam2)] = iParam1;
			break;
		
		case 3662:
			Global_270D8D[func_26(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_270D87[func_26(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_270D90[func_26(iParam2)] = iParam1;
			break;
		
		case 3685:
			Global_270D93[func_26(iParam2)] = iParam1;
			break;
		
		case 3225:
			Global_270D27[6 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3226:
			Global_270CF3[5 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_270D27[7 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3228:
			Global_270CF3[6 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 4015:
			Global_270D27[8 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 4016:
			Global_270CF3[7 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 4018:
			Global_270D27[9 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_270CF3[8 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 4021:
			Global_270D27[10 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_270CF3[9 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 4024:
			Global_270D27[11 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_270CF3[10 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 6105:
			Global_270D27[12 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 6106:
			Global_270CF3[11 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 6163:
			Global_270D27[13 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 6164:
			Global_270CF3[12 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 6541:
			Global_270D27[14 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 6542:
			Global_270CF3[13 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 6554:
			Global_270D27[15 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 6555:
			Global_270CF3[14 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 6557:
			Global_270D27[16 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_270CF3[15 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 6560:
			Global_270D27[17 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_270CF3[16 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_101(int iParam0)//Position - 0x3A13
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

int func_102(int iParam0)//Position - 0x3C0B
{
	switch (iParam0)
	{
		case 180:
		case 183:
		case 185:
		case 186:
		case 182:
		case 195:
		case 197:
		case 198:
		case 207:
		case 208:
		case 209:
			return 1;
		
		default:
	}
	return 0;
}

bool func_103(int iParam0)//Position - 0x3C61
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_6D, 14);
}

void func_104(int iParam0, int iParam1)//Position - 0x3C87
{
	if (iParam1 > 0)
	{
		if (Global_40001.f_5943 == 0 || Global_40001.f_5943 == 1)
		{
			if (!unk_0x8ACB0C3FACC09467() || Global_40001.f_5943 == 1)
			{
				Global_267214.f_110 = iParam0;
				if (iParam1 > Global_40001.f_1757)
				{
					iParam1 = Global_40001.f_1757;
				}
				Global_267214.f_111 = iParam1;
				Global_267214.f_112 = 0;
			}
		}
	}
}

int func_105(int iParam0)//Position - 0x3CF9
{
	switch (iParam0)
	{
		case 142:
			return 25;
		
		case 157:
			return 22;
		
		case 159:
			return 21;
		
		case 151:
			return 33;
		
		case 148:
			return 23;
		
		case 164:
			return 24;
		
		case 152:
			return 26;
		
		case 153:
			return 30;
		
		case 154:
			return 32;
		
		case 155:
			return 28;
		
		case 160:
			return 29;
		
		case 162:
			return 31;
		
		case 163:
			return 27;
		
		case 166:
			return 38;
		
		case 170:
			return 34;
		
		case 171:
			return 35;
		
		case 172:
			return 36;
		
		case 173:
			return 37;
		
		case 179:
			return 23;
		
		default:
	}
	return 0;
}

int func_106(int iParam0)//Position - 0x3DDA
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 167:
			iVar0 = 0;
			break;
		
		case 169:
			iVar0 = 0;
			break;
		
		case 168:
			iVar0 = 0;
			break;
		
		case 166:
			iVar0 = 0;
			break;
		
		case 190:
			iVar0 = 0;
			break;
		
		case 191:
			iVar0 = 0;
			break;
		
		case 192:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

void func_107(int iParam0, int iParam1)//Position - 0x3E42
{
	if (func_103(unk_0xB5CEFD608600A09F()) && func_127())
	{
		if (func_102(iParam0) && iParam1 > 0)
		{
			func_25(7949, (func_28(7949, -1, 0) + iParam1), -1, 1, 0);
		}
	}
}

int func_108(int iParam0, int iParam1)//Position - 0x3E86
{
	float fVar0;
	float fVar1;
	
	fVar0 = func_111(iParam0, iParam1);
	fVar1 = (SYSTEM::TO_FLOAT(func_109(iParam0, iParam1)) * fVar0);
	return SYSTEM::ROUND(fVar1);
}

int func_109(int iParam0, int iParam1)//Position - 0x3EAF
{
	return (func_110(iParam0) * iParam1);
}

int func_110(int iParam0)//Position - 0x3EC0
{
	switch (iParam0)
	{
		case 8:
			return Global_40001.f_54AC;
		
		case 0:
			return Global_40001.f_54AD;
		
		case 1:
			return Global_40001.f_54AE;
		
		case 2:
			return Global_40001.f_54AF;
		
		case 3:
			return Global_40001.f_54B0;
		
		case 4:
			return Global_40001.f_54B1;
		
		case 5:
			return Global_40001.f_54B2;
		
		case 6:
			return Global_40001.f_54B3;
		
		case 7:
			return Global_40001.f_54B4;
		
		default:
	}
	return 0;
}

float func_111(int iParam0, int iParam1)//Position - 0x3F60
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 0f;
	fVar1 = SYSTEM::TO_FLOAT(Global_40001.f_54B6);
	switch (iParam0)
	{
		case -1:
		case 8:
			return 0f;
		
		case 7:
			fVar0 = Global_40001.f_54B8;
			fVar1 = SYSTEM::TO_FLOAT(Global_40001.f_54B5);
			break;
		
		case 3:
			fVar0 = Global_40001.f_54B8;
			fVar1 = SYSTEM::TO_FLOAT(Global_40001.f_54B5);
			break;
		
		case 0:
			fVar0 = Global_40001.f_54B9;
			break;
		
		case 1:
			fVar0 = Global_40001.f_54B9;
			break;
		
		case 4:
			fVar0 = Global_40001.f_54B9;
			break;
		
		case 6:
			fVar0 = Global_40001.f_54BA;
			fVar1 = SYSTEM::TO_FLOAT(Global_40001.f_54B7);
			break;
		
		case 2:
			fVar0 = Global_40001.f_54BA;
			fVar1 = SYSTEM::TO_FLOAT(Global_40001.f_54B7);
			break;
		
		case 5:
			fVar0 = Global_40001.f_54BA;
			fVar1 = SYSTEM::TO_FLOAT(Global_40001.f_54B7);
			break;
	}
	iVar2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / fVar1));
	return (SYSTEM::TO_FLOAT(iVar2) * fVar0);
}

int func_112(int iParam0)//Position - 0x407A
{
	if (iParam0 == func_11())
	{
		return 0;
	}
	return Global_18402B[iParam0 /*770*/].f_111.f_A8[5 /*12*/];
}

bool func_113()//Position - 0x40A0
{
	return func_114(unk_0xB5CEFD608600A09F());
}

int func_114(int iParam0)//Position - 0x40B0
{
	if (iParam0 != func_11())
	{
		if (Global_18C80F[iParam0 /*558*/].f_B != func_11())
		{
			return Global_18C80F[iParam0 /*558*/].f_B == iParam0;
		}
	}
	return 0;
}

void func_115(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x40E5
{
	int iVar0;
	
	if (!func_128())
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
				func_116(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_116(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_116(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x45AB
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_128())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x060D652F887827B8(func_27()) || unk_0xEBA8BD5AE6FF01CA())
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
			*uParam0 = func_123(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1);
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
			func_122(1, iParam4);
			Global_410B51 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_117(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_117(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x474F
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xF0059F27F7BB6680(&(Global_24FB5C[unk_0xB5CEFD608600A09F() /*406*/].f_76.f_47), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_118(iParam0);
	}
}

void func_118(int iParam0)//Position - 0x4787
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_128())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_121(iParam0))
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
		func_119(&(Global_41092C[iParam0 /*80*/]));
	}
}

void func_119(var uParam0)//Position - 0x47D9
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
	func_120(&(uParam0->f_8.f_3));
	func_120(&(uParam0->f_8.f_10));
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

void func_120(var uParam0)//Position - 0x48D3
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

int func_121(int iParam0)//Position - 0x491B
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_41092C[iParam0 /*80*/].f_5 == 1;
	}
	return 0;
}

void func_122(int iParam0, int iParam1)//Position - 0x4943
{
	Global_25897B = iParam1;
	Global_25897A = iParam0;
}

int func_123(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9)//Position - 0x4957
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_41092C[iVar0 /*80*/].f_2 == 0)
		{
			if (!func_128())
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

int func_124(int iParam0)//Position - 0x4A50
{
	switch (iParam0)
	{
		case 1:
			return 3;
		
		case 2:
			return 1;
		
		case 3:
			return 4;
		
		case 4:
			return 2;
		
		case 5:
			return 0;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 4;
		
		case 9:
			return 2;
		
		case 10:
			return 0;
		
		case 11:
			return 3;
		
		case 12:
			return 1;
		
		case 13:
			return 4;
		
		case 14:
			return 2;
		
		case 15:
			return 0;
		
		case 16:
			return 3;
		
		case 17:
			return 1;
		
		case 18:
			return 4;
		
		case 19:
			return 2;
		
		case 20:
			return 0;
		
		case 21:
			return 5;
		
		case 22:
			return 5;
		
		case 23:
			return 5;
		
		case 24:
			return 5;
		
		case 25:
			return 5;
		
		case 26:
			return 5;
		
		case 27:
			return 5;
		
		case 28:
			return 5;
		
		case 29:
			return 5;
		
		case 30:
			return 5;
		
		case 31:
			return 5;
		
		default:
	}
	return -1;
}

char* func_125(int iParam0)//Position - 0x4B96
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 2:
			sVar0 = "MP_BWH_WEED_1";
			break;
		
		case 1:
			sVar0 = "MP_BWH_METH_1";
			break;
		
		case 3:
			sVar0 = "MP_BWH_CRACK_1";
			break;
		
		case 5:
			sVar0 = "MP_BWH_FAKEID_1";
			break;
		
		case 4:
			sVar0 = "MP_BWH_CASH_1";
			break;
		
		case 7:
			sVar0 = "MP_BWH_WEED_2";
			break;
		
		case 6:
			sVar0 = "MP_BWH_METH_2";
			break;
		
		case 8:
			sVar0 = "MP_BWH_CRACK_2";
			break;
		
		case 10:
			sVar0 = "MP_BWH_FAKEID_2";
			break;
		
		case 9:
			sVar0 = "MP_BWH_CASH_2";
			break;
		
		case 12:
			sVar0 = "MP_BWH_WEED_3";
			break;
		
		case 11:
			sVar0 = "MP_BWH_METH_3";
			break;
		
		case 13:
			sVar0 = "MP_BWH_CRACK_3";
			break;
		
		case 15:
			sVar0 = "MP_BWH_FAKEID_3";
			break;
		
		case 14:
			sVar0 = "MP_BWH_CASH_3";
			break;
		
		case 17:
			sVar0 = "MP_BWH_WEED_4";
			break;
		
		case 16:
			sVar0 = "MP_BWH_METH_4";
			break;
		
		case 18:
			sVar0 = "MP_BWH_CRACK_4";
			break;
		
		case 20:
			sVar0 = "MP_BWH_FAKEID_4";
			break;
		
		case 19:
			sVar0 = "MP_BWH_CASH_4";
			break;
		
		case 21:
			sVar0 = "MP_BUNKER_1";
			break;
		
		case 22:
			sVar0 = "MP_BUNKER_2";
			break;
		
		case 23:
			sVar0 = "MP_BUNKER_3";
			break;
		
		case 24:
			sVar0 = "MP_BUNKER_4";
			break;
		
		case 25:
			sVar0 = "MP_BUNKER_5";
			break;
		
		case 26:
			sVar0 = "MP_BUNKER_6";
			break;
		
		case 27:
			sVar0 = "MP_BUNKER_7";
			break;
		
		case 28:
			sVar0 = "MP_BUNKER_9";
			break;
		
		case 29:
			sVar0 = "MP_BUNKER_10";
			break;
		
		case 30:
			sVar0 = "MP_BUNKER_11";
			break;
		
		case 31:
			sVar0 = "MP_BUNKER_12";
			break;
	}
	return sVar0;
}

struct<2> func_126()//Position - 0x4D78
{
	return Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_BC;
}

bool func_127()//Position - 0x4D91
{
	return func_40(unk_0xB5CEFD608600A09F());
}

int func_128()//Position - 0x4DA1
{
	if (unk_0x8ACB0C3FACC09467())
	{
		return unk_0xC9D803F7D7E10861();
	}
	return 0;
}

bool func_129(bool bParam0)//Position - 0x4DB8
{
	return func_229(unk_0xB5CEFD608600A09F(), bParam0);
}

void func_130(int iParam0, var uParam1, var uParam2)//Position - 0x4DCA
{
	*uParam1 = Global_18C80F[iParam0 /*558*/].f_B.f_8[0];
	*uParam2 = Global_18C80F[iParam0 /*558*/].f_B.f_8[1];
}

int func_131()//Position - 0x4DF8
{
	return Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B;
}

int func_132(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0x4E0D
{
	return func_133(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_133(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0x4E2F
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_143(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0x724D816EA203A79E(iParam1))
		{
			if (unk_0x386592AF38881675(iParam1))
			{
				iVar1 = unk_0x399F7937FFE4DEBF(iParam1);
				func_139(unk_0x823166D9421223CA(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_134(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_134(int iParam0, int iParam1, char* sParam2, int iParam3)//Position - 0x4EA8
{
	vector3 vVar0;
	
	vVar0 = { func_137(iParam0, 1) };
	if (iParam0 == func_136(unk_0xBC25C936A095B5BA()))
	{
		func_135(1);
	}
	func_139(vVar0, iParam1, 0, sParam2, iParam3);
}

void func_135(int iParam0)//Position - 0x4EDC
{
	Global_252E21.f_75D = iParam0;
}

int func_136(int iParam0)//Position - 0x4EED
{
	return iParam0;
}

Vector3 func_137(int iParam0, bool bParam1)//Position - 0x4EF7
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
	if (iParam0 == func_138(unk_0xBC25C936A095B5BA()) && unk_0x3D875C2512206692(unk_0xEBC6179F395EFBEB()) == 4)
	{
		vVar0 = { unk_0xA4455714F3DCE207(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		vVar0 = { unk_0x541C2AEF053615BC(iParam0, false) };
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

int func_138(int iParam0)//Position - 0x4FBB
{
	return iParam0;
}

void func_139(vector3 vParam0, int iParam1, int iParam2, char* sParam3, int iParam4)//Position - 0x4FC5
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
			Global_252E21.f_504[iVar1 /*30*/].f_4 = func_142(Global_252E21.f_504[iVar1 /*30*/], &Global_14063D, &Global_14063E);
			Global_252E21.f_504[iVar1 /*30*/].f_7 = unk_0xED678C85A82F0AB9();
			Global_252E21.f_504[iVar1 /*30*/].f_3 = iParam1;
			Global_252E21.f_504[iVar1 /*30*/].f_8 = iParam2;
			Global_252E21.f_504[iVar1 /*30*/].f_9 = func_141();
			Global_252E21.f_504[iVar1 /*30*/].f_A = func_140();
			StringCopy(&(Global_252E21.f_504[iVar1 /*30*/].f_16), sParam3, 16);
			Global_252E21.f_504[iVar1 /*30*/].f_1A = unk_0x863D0D1A37055D36(unk_0xED678C85A82F0AB9(), iParam4);
		}
	}
}

int func_140()//Position - 0x50DC
{
	if (Global_252E21.f_75D)
	{
		Global_252E21.f_75D = 0;
		return 1;
	}
	Global_252E21.f_75D = 0;
	return 0;
}

var func_141()//Position - 0x5106
{
	var uVar0;
	
	uVar0 = Global_252E21.f_75F;
	Global_252E21.f_75F = 1;
	return uVar0;
}

float func_142(vector3 vParam0, var uParam1, var uParam2)//Position - 0x5121
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

var func_143(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x51BA
{
	var uVar0;
	
	uVar0 = func_144(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_144(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x51DD
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
	else if (func_177() || func_176(unk_0xB5CEFD608600A09F()))
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
	if (func_175(sParam2))
	{
	}
	if (func_174())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_172(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_40001.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_171(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_168(0, &iVar1);
					break;
				
				case 3:
					func_168(1, &iVar1);
					break;
				
				case 1:
					func_164(&iVar1);
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
			func_163(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_155((func_162(unk_0xB5CEFD608600A09F()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x5FF267E54EB49897(iVar1, iParam8, iParam9);
				if (Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_27.f_2 != -1)
				{
					func_163(1165, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_149(iVar1);
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
				func_145((func_147(unk_0xB5CEFD608600A09F()) + iVar1));
			}
			else
			{
				func_145((func_147(unk_0xB5CEFD608600A09F()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_145(int iParam0)//Position - 0x53DB
{
	if (func_174())
	{
		Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_D3.f_5 = iParam0;
		func_146(joaat("mpply_globalxp"), iParam0);
	}
}

void func_146(int iParam0, int iParam1)//Position - 0x5406
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x3A57956BCE003880(iVar0, iParam1, 1);
	}
}

int func_147(int iParam0)//Position - 0x5422
{
	if (iParam0 > -1)
	{
		if (func_5(iParam0, 0, 1))
		{
			if (iParam0 == unk_0xB5CEFD608600A09F())
			{
				return func_148(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_18402B[iParam0 /*770*/].f_D3.f_5;
			}
		}
		else
		{
			return func_148(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_148(int iParam0)//Position - 0x5473
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

void func_149(int iParam0)//Position - 0x5491
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_154(unk_0xB5CEFD608600A09F()) };
	if (unk_0xB9ACC1154C623363())
	{
		if (unk_0xD7F4457CECF10121(&Var0))
		{
			iVar1 = func_152(func_153(&Var0));
			if (iVar1 == 0)
			{
				func_151(&Global_14F5C9, iParam0);
				func_150(joaat("mpply_crew_local_xp_0"), Global_14F5C9);
			}
			else if (iVar1 == 1)
			{
				func_151(&Global_14F5CA, iParam0);
				func_150(joaat("mpply_crew_local_xp_1"), Global_14F5CA);
			}
			else if (iVar1 == 2)
			{
				func_151(&Global_14F5CB, iParam0);
				func_150(joaat("mpply_crew_local_xp_2"), Global_14F5CB);
			}
			else if (iVar1 == 3)
			{
				func_151(&Global_14F5CC, iParam0);
				func_150(joaat("mpply_crew_local_xp_3"), Global_14F5CC);
			}
			else if (iVar1 == 4)
			{
				func_151(&Global_14F5CD, iParam0);
				func_150(joaat("mpply_crew_local_xp_4"), Global_14F5CD);
			}
		}
	}
}

void func_150(int iParam0, int iParam1)//Position - 0x5565
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

void func_151(var uParam0, int iParam1)//Position - 0x568A
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_152(int iParam0)//Position - 0x569B
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

int func_153(var uParam0)//Position - 0x56F8
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

struct<13> func_154(int iParam0)//Position - 0x571B
{
	struct<13> Var0;
	
	unk_0xB7DBA2C6D2C3C41A(iParam0, &Var0, 13);
	return Var0;
}

void func_155(int iParam0, int iParam1, int iParam2)//Position - 0x5732
{
	if (func_174())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_40001.f_2320 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_14F642[func_26(-1)])
				{
					unk_0x5FF267E54EB49897(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_14F642[func_26(-1)])
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
		if (func_161(unk_0xB5CEFD608600A09F()))
		{
			Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_D3.f_1 = iParam0;
			Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_D3.f_6 = func_159(iParam0, 1);
		}
		func_100(639, iParam0, -1, 1);
		func_25(640, func_159(iParam0, 1), -1, 1, 0);
		Global_14F642[func_26(-1)] = iParam0;
		func_156(7, 0);
	}
}

void func_156(int iParam0, int iParam1)//Position - 0x5853
{
	int iVar0;
	
	if (func_158(iParam0, iParam1))
	{
		iVar0 = func_157();
		Global_258004[iVar0] = iParam0;
	}
}

int func_157()//Position - 0x5876
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

int func_158(int iParam0, var uParam1)//Position - 0x58AB
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

int func_159(int iParam0, bool bParam1)//Position - 0x5931
{
	if (bParam1)
	{
	}
	return func_160(iParam0, 0);
}

int func_160(int iParam0, int iParam1)//Position - 0x5945
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

int func_161(int iParam0)//Position - 0x5A04
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

int func_162(int iParam0)//Position - 0x5A29
{
	if (Global_1406D2.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0xB5CEFD608600A09F())
			{
				return Global_14F642[func_26(-1)];
			}
			else if (func_161(iParam0))
			{
				return Global_18402B[iParam0 /*770*/].f_D3.f_1;
			}
		}
	}
	else
	{
		return Global_14F642[func_26(-1)];
	}
	return 0;
}

void func_163(int iParam0, int iParam1, int iParam2)//Position - 0x5A86
{
	int iVar0;
	
	iVar0 = func_28(iParam0, func_26(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_101(iParam0))
	{
		func_25(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_100(iParam0, iVar0, iParam2, 1);
	}
}

void func_164(int iParam0)//Position - 0x5AC8
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
				if (unk_0x343CB262BF0CDF5A(iVar5) == iVar1 || func_167(unk_0x343CB262BF0CDF5A(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0xB5CEFD608600A09F())
					{
						if (func_166(unk_0xB5CEFD608600A09F(), iVar5))
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
		iVar6 = SYSTEM::ROUND((func_165(*iParam0, 100) * (10f * Global_40001.f_1079)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_165(*iParam0, 100) * (20f * Global_40001.f_1072)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_165(int iParam0, int iParam1)//Position - 0x5BB3
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_166(int iParam0, int iParam1)//Position - 0x5BD4
{
	if (unk_0xB9ACC1154C623363())
	{
		Global_26210D = { func_154(iParam0) };
		Global_26211A = { func_154(iParam1) };
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

int func_167(int iParam0, int iParam1, int iParam2)//Position - 0x5C41
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

void func_168(bool bParam0, int iParam1)//Position - 0x5E0C
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
				if (func_5(iVar4, 0, 1))
				{
					if (iVar4 != unk_0xB5CEFD608600A09F())
					{
						iVar1++;
						if (func_166(unk_0xB5CEFD608600A09F(), iVar4))
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
			if (func_5(iVar4, 1, 1))
			{
				if (iVar4 != unk_0xB5CEFD608600A09F())
				{
					if (func_169(unk_0xB5CEFD608600A09F(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_166(unk_0xB5CEFD608600A09F(), iVar4))
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
		iVar5 = SYSTEM::ROUND((func_165(*iParam1, 100) * (10f * Global_40001.f_1079)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_165(*iParam1, 100) * (20f * Global_40001.f_1072)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_169(int iParam0, int iParam1)//Position - 0x5F24
{
	return SYSTEM::VDIST(func_170(iParam0), func_170(iParam1));
	return 0f;
}

Vector3 func_170(int iParam0)//Position - 0x5F40
{
	return unk_0x541C2AEF053615BC(unk_0xA95CF30C72EB526E(iParam0), false);
}

int func_171(int iParam0)//Position - 0x5F53
{
	int iVar0;
	
	if (unk_0x8820DB58BCD4A148() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_165(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_172(int iParam0)//Position - 0x5F8A
{
	if (iParam0 < 0)
	{
		if (unk_0xC40EDFF7541407A8(iParam0) > func_162(unk_0xB5CEFD608600A09F()))
		{
			iParam0 = -func_162(unk_0xB5CEFD608600A09F());
		}
	}
	if (func_173(8000, 0, 0) > 0)
	{
		if (func_173(8000, 0, 0) < (iParam0 + func_162(unk_0xB5CEFD608600A09F())))
		{
			iParam0 = (func_173(8000, 0, 0) - func_162(unk_0xB5CEFD608600A09F()));
		}
	}
	return iParam0;
}

int func_173(int iParam0, bool bParam1, int iParam2)//Position - 0x5FEE
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

int func_174()//Position - 0x6016
{
	return 1;
}

int func_175(char* sParam0)//Position - 0x601F
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

int func_176(int iParam0)//Position - 0x6059
{
	return func_93(func_44(iParam0));
}

bool func_177()//Position - 0x606B
{
	if (unk_0x517823CA390A19F6())
	{
		return func_179();
	}
	return func_178(Global_440000.f_1EF38);
}

int func_178(int iParam0)//Position - 0x608F
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

bool func_179()//Position - 0x60C9
{
	return Global_255A46.f_10;
}

bool func_180(int iParam0)//Position - 0x60D7
{
	return Global_24FB5C[iParam0 /*406*/].f_6F == 2;
}

bool func_181(int iParam0)//Position - 0x60EC
{
	return Global_24FB5C[iParam0 /*406*/].f_6F == 7;
}

void func_182()//Position - 0x6101
{
	Global_258663 = 1;
}

void func_183(int iParam0, var uParam1, var uParam2)//Position - 0x610E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 0;
	*uParam2 = 0;
	if (!func_187(7))
	{
		return;
	}
	iVar0 = func_186(iParam0);
	iVar1 = func_185(iParam0);
	iVar2 = unk_0xC40EDFF7541407A8(unk_0xCCA9497DA4595710(Global_267214.f_1312.f_101, unk_0xED678C85A82F0AB9()));
	if (func_184(iParam0) != -1)
	{
		if (iVar2 > func_184(iParam0))
		{
			iVar2 = func_184(iParam0);
		}
	}
	else if (iVar2 > Global_40001.f_2E08)
	{
		iVar2 = Global_40001.f_2E08;
	}
	iVar3 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar2) / (1000f * 60f)));
	if (iVar3 < 1)
	{
		iVar3 = 1;
	}
	*uParam1 = (iVar3 * iVar1);
	*uParam2 = (iVar3 * iVar0);
}

int func_184(int iParam0)//Position - 0x61B8
{
	if (func_37(iParam0, 0) || func_98(iParam0))
	{
		return Global_40001.f_45C1;
	}
	if (func_102(iParam0))
	{
		return Global_40001.f_45C0;
	}
	switch (iParam0)
	{
		case 192:
			return Global_40001.f_45BD;
		
		case 191:
			return Global_40001.f_45BF;
		
		case 190:
			return Global_40001.f_45BE;
		
		case 227:
			return Global_40001.f_4FBD;
		
		case 226:
			return Global_40001.f_4FB1;
		
		case 225:
			return Global_40001.f_4FC5;
		
		case 230:
			return Global_40001.f_54A9;
		
		case 229:
			return Global_40001.f_5449;
		
		case 233:
			return Global_40001.f_5684;
		
		case 237:
			return Global_40001.f_5AEC;
		
		case 238:
			return Global_40001.f_5B5B;
		
		case 249:
			return Global_40001.f_5B6B;
		
		default:
	}
	return -1;
}

int func_185(int iParam0)//Position - 0x62BB
{
	switch (iParam0)
	{
		case 148:
			return Global_40001.f_2E63;
		
		case 152:
			return Global_40001.f_2E86;
		
		case 151:
			return 0;
		
		case 142:
			return Global_40001.f_2E7A;
		
		case 157:
			return Global_40001.f_2E59;
		
		case 159:
			return Global_40001.f_2E48;
		
		case 164:
			return Global_40001.f_2E70;
		
		case 160:
			return Global_40001.f_2EA2;
		
		case 162:
			return Global_40001.f_2EB6;
		
		case 163:
			return Global_40001.f_2E93;
		
		case 154:
			return Global_40001.f_2ED9;
		
		case 155:
			return Global_40001.f_2ECF;
		
		case 153:
			return Global_40001.f_2EAB;
		
		case 170:
			return Global_40001.f_3822;
		
		case 171:
			return Global_40001.f_385D;
		
		case 172:
			return Global_40001.f_386F;
		
		case 173:
			return Global_40001.f_3834;
		
		case 166:
			return Global_40001.f_3843;
		
		case 167:
			return Global_40001.f_389E;
		
		case 169:
			return Global_40001.f_3882;
		
		case 168:
			return Global_40001.f_387B;
		
		case 179:
			return Global_40001.f_4548;
		
		case 180:
			return Global_40001.f_446B;
		
		case 182:
			return Global_40001.f_446B;
		
		case 183:
			return Global_40001.f_446B;
		
		case 185:
			return Global_40001.f_446B;
		
		case 186:
			return Global_40001.f_446B;
		
		case 189:
			return Global_40001.f_4548;
		
		case 190:
			return Global_40001.f_43EF;
		
		case 191:
			return Global_40001.f_444A;
		
		case 192:
			return Global_40001.f_437C;
		
		case 193:
			return Global_40001.f_4548;
		
		case 194:
			return Global_40001.f_4548;
		
		case 195:
			return Global_40001.f_446B;
		
		case 197:
			return Global_40001.f_446B;
		
		case 198:
			return Global_40001.f_446B;
		
		case 199:
			return Global_40001.f_4548;
		
		case 200:
			return Global_40001.f_4548;
		
		case 201:
			return Global_40001.f_4548;
		
		case 205:
			return Global_40001.f_4548;
		
		case 207:
			return Global_40001.f_446B;
		
		case 208:
			return Global_40001.f_446B;
		
		case 209:
			return Global_40001.f_446B;
		
		case 210:
			return Global_40001.f_4548;
		
		case 211:
			return Global_40001.f_4548;
		
		case 214:
			return Global_40001.f_489A;
		
		case 215:
			return Global_40001.f_489C;
		
		case 216:
			return Global_40001.f_489E;
		
		case 217:
			return Global_40001.f_48A0;
		
		case 218:
			return Global_40001.f_48A2;
		
		case 219:
			return Global_40001.f_48A4;
		
		case 220:
			return Global_40001.f_48A6;
		
		case 221:
			return Global_40001.f_48A8;
		
		case 225:
			if (func_129(0) || func_50(0))
			{
				return Global_40001.f_4FC7;
			}
			break;
		
		case 226:
			if (func_129(0) || func_50(0))
			{
				return Global_40001.f_4FB3;
			}
			break;
		
		case 227:
			if (func_129(0) || func_50(0))
			{
				return Global_40001.f_4FBF;
			}
			break;
		
		case 229:
			if (func_129(0) || func_50(0))
			{
				return Global_40001.f_544B;
			}
			break;
		
		case 230:
			if (func_129(0) || func_50(0))
			{
				return Global_40001.f_54AB;
			}
			break;
		
		case 233:
			if (func_129(0) || func_50(0))
			{
				return Global_40001.f_5683;
			}
			break;
		
		case 241:
			return 100;
		
		case 242:
			return 100;
		
		case 244:
			return 100;
		
		case 248:
			return 100;
		
		case 239:
			return 100;
		
		case 240:
			return 100;
		
		case 250:
			return 100;
		
		case 237:
			if (func_129(0) || func_50(0))
			{
				return Global_40001.f_5AEE;
			}
			break;
		
		case 238:
			if (func_129(0) || func_50(0))
			{
				return Global_40001.f_5B5D;
			}
			break;
		
		case 249:
			if (func_129(0) || func_50(0))
			{
				return Global_40001.f_5B6D;
			}
			break;
	}
	return 0;
}

int func_186(int iParam0)//Position - 0x67B8
{
	switch (iParam0)
	{
		case 148:
			return Global_40001.f_2E62;
		
		case 152:
			return Global_40001.f_2E85;
		
		case 151:
			return 0;
		
		case 142:
			return Global_40001.f_2E79;
		
		case 157:
			return Global_40001.f_2E58;
		
		case 159:
			return Global_40001.f_2E47;
		
		case 164:
			return Global_40001.f_2E6F;
		
		case 160:
			return Global_40001.f_2EA1;
		
		case 162:
			return Global_40001.f_2EB5;
		
		case 163:
			return Global_40001.f_2E92;
		
		case 154:
			return Global_40001.f_2ED8;
		
		case 155:
			return Global_40001.f_2ECE;
		
		case 153:
			return Global_40001.f_2EAA;
		
		case 170:
			return Global_40001.f_3821;
		
		case 171:
			return Global_40001.f_385C;
		
		case 172:
			return Global_40001.f_386E;
		
		case 173:
			return Global_40001.f_3833;
		
		case 166:
			return Global_40001.f_3842;
		
		case 179:
			return Global_40001.f_4547;
		
		case 180:
			return Global_40001.f_446A;
		
		case 182:
			return Global_40001.f_446A;
		
		case 183:
			return Global_40001.f_446A;
		
		case 185:
			return Global_40001.f_446A;
		
		case 186:
			return Global_40001.f_446A;
		
		case 189:
			return Global_40001.f_4547;
		
		case 193:
			return Global_40001.f_4547;
		
		case 194:
			return Global_40001.f_4547;
		
		case 195:
			return Global_40001.f_446A;
		
		case 197:
			return Global_40001.f_446A;
		
		case 198:
			return Global_40001.f_446A;
		
		case 199:
			return Global_40001.f_4547;
		
		case 200:
			return Global_40001.f_4547;
		
		case 201:
			return Global_40001.f_4547;
		
		case 205:
			return Global_40001.f_4547;
		
		case 207:
			return Global_40001.f_446A;
		
		case 208:
			return Global_40001.f_446A;
		
		case 209:
			return Global_40001.f_446A;
		
		case 210:
			return Global_40001.f_4547;
		
		case 211:
			return Global_40001.f_4547;
		
		case 190:
			if (!func_113())
			{
				return Global_40001.f_43EE;
			}
			else
			{
				return 0;
			}
			break;
		
		case 191:
			if (!func_113())
			{
				return Global_40001.f_4449;
			}
			else
			{
				return 0;
			}
			break;
		
		case 192:
			if (!func_113())
			{
				return Global_40001.f_437B;
			}
			else
			{
				return 0;
			}
			break;
		
		case 214:
			return Global_40001.f_4899;
		
		case 215:
			return Global_40001.f_489B;
		
		case 216:
			return Global_40001.f_489D;
		
		case 217:
			return Global_40001.f_489F;
		
		case 218:
			return Global_40001.f_48A1;
		
		case 219:
			return Global_40001.f_48A3;
		
		case 220:
			return Global_40001.f_48A5;
		
		case 221:
			return Global_40001.f_48A7;
		
		case 225:
			if (func_50(0))
			{
				return Global_40001.f_4FC6;
			}
			break;
		
		case 226:
			if (func_50(0))
			{
				return Global_40001.f_4FB2;
			}
			break;
		
		case 227:
			if (func_50(0))
			{
				return Global_40001.f_4FBE;
			}
			break;
		
		case 229:
			if (func_50(0))
			{
				return Global_40001.f_544A;
			}
			break;
		
		case 230:
			if (func_50(0))
			{
				return Global_40001.f_54AA;
			}
			break;
		
		case 233:
			if (func_50(0))
			{
				return Global_40001.f_5685;
			}
			break;
		
		case 241:
			return 500;
		
		case 242:
			return 500;
		
		case 244:
			return 500;
		
		case 248:
			return 500;
		
		case 239:
			return 500;
		
		case 240:
			return 500;
		
		case 250:
			return 500;
		
		case 237:
			if (func_50(0))
			{
				return Global_40001.f_5AED;
			}
			break;
		
		case 238:
			if (func_50(0))
			{
				return Global_40001.f_5B5C;
			}
			break;
		
		case 249:
			if (func_50(0))
			{
				return Global_40001.f_5B6C;
			}
			break;
	}
	return 0;
}

bool func_187(int iParam0)//Position - 0x6C5F
{
	return unk_0xFA30DFD0084E92FE(Global_267214.f_1312.f_25, iParam0);
}

void func_188(int iParam0, int iParam1)//Position - 0x6C76
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_113())
		{
			if (func_129(0))
			{
				if (!func_50(0))
				{
					if (unk_0x96B1061E8F3CBC9A(func_131()))
					{
						if (func_228() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_228());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_226(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_194("GB_BCUT_TICK1", func_131(), iVar0, 0, 0, 1, 1);
						}
						func_193(20);
						func_189(func_131(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_189(int iParam0, int iParam1, int iParam2)//Position - 0x6D17
{
	struct<8> Var0;
	
	if (func_5(iParam0, 0, 1))
	{
		Var0 = 1838378015;
		Var0.f_1 = unk_0xB5CEFD608600A09F();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_192(iParam0);
		func_191(&(Var0.f_6), &(Var0.f_7));
		unk_0x38E776D9FA75679B(1, &Var0, 8, func_190(iParam0));
	}
}

var func_190(int iParam0)//Position - 0x6D6D
{
	var uVar0;
	
	unk_0xF0059F27F7BB6680(&uVar0, iParam0);
	return uVar0;
}

void func_191(var uParam0, var uParam1)//Position - 0x6D7F
{
	*uParam0 = Global_190DD1.f_9;
	*uParam1 = Global_190DD1.f_A;
}

var func_192(int iParam0)//Position - 0x6D99
{
	return Global_18C80F[iParam0 /*558*/].f_1EB;
}

void func_193(int iParam0)//Position - 0x6DAD
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xF0059F27F7BB6680(&(Global_267214.f_1312.f_7[iVar0]), iVar1);
}

int func_194(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)//Position - 0x6DD6
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
		unk_0x449F0674640D94C0(func_203(iParam1, -2, 1, 0));
		unk_0x607C19B90D297FE2(func_201(&Var1));
		if (!iParam3 == 0)
		{
			unk_0x449F0674640D94C0(iParam3);
		}
		unk_0xAA5C5BF0489E5553(iParam2);
		iVar0 = unk_0x5E48BB10C6423FD5(0, 1);
		func_195(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_195(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x6E6D
{
	int iVar0;
	
	if ((!func_200() || !unk_0x517823CA390A19F6()) || !func_198(unk_0xB5CEFD608600A09F(), 0))
	{
		return;
	}
	iVar0 = func_196(iParam2);
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

int func_196(int iParam0)//Position - 0x6F75
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_195C05 - 1))
	{
		if (iParam0 > Global_195C05.f_5[iVar0 /*53*/].f_1)
		{
			func_197(iVar0);
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

void func_197(int iParam0)//Position - 0x6FD7
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_195C05.f_5[iVar0 /*53*/] = { Global_195C05.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_198(int iParam0, int iParam1)//Position - 0x7010
{
	bool bVar0;
	
	if (iParam0 == unk_0xB5CEFD608600A09F())
	{
		bVar0 = func_199(-1, 0) == 8;
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

int func_199(int iParam0, bool bParam1)//Position - 0x705B
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_27();
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

bool func_200()//Position - 0x709C
{
	return unk_0x7B2F21BFE86AEB61(-1762644250);
}

var func_201(char* sParam0)//Position - 0x70AD
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_202(&cVar0);
}

var func_202(char[4] cParam0)//Position - 0x70D1
{
	return cParam0;
}

int func_203(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x70DB
{
	int iVar0;
	int iVar1;
	
	if (func_224(iParam0))
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
	if ((func_224(unk_0xB5CEFD608600A09F()) || (func_223() && func_222())) && !unk_0xFA30DFD0084E92FE(Global_267214.f_11E0, 31))
	{
		iVar1 = func_221();
		if (unk_0x724D816EA203A79E(iVar1))
		{
			if (unk_0x15DBD981998D4FE1(iVar1))
			{
				if (unk_0x5363B43856FA7779(iVar1) != -1)
				{
					if (func_5(unk_0x5363B43856FA7779(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x517823CA390A19F6()) && iParam1 < 4)
						{
							if (Global_440000.f_1DBFD[iParam1] != -1)
							{
								return func_219(iParam1, iParam0, 0);
							}
							else
							{
								return func_210(iParam0, unk_0x5363B43856FA7779(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_210(iParam0, unk_0x5363B43856FA7779(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x517823CA390A19F6()) && iParam1 < 4)
			{
				if (Global_440000.f_1DBFD[iParam1] != -1)
				{
					return func_219(iParam1, iParam0, 0);
				}
				else
				{
					return func_204(0, -1, 0);
				}
			}
			else
			{
				return func_204(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x517823CA390A19F6()) && iParam1 < 4)
	{
		if (Global_440000.f_1DBFD[iParam1] != -1)
		{
			return func_219(iParam1, iParam0, 0);
		}
		else
		{
			return func_210(iParam0, unk_0xB5CEFD608600A09F(), iParam1, bParam2, bParam3);
		}
	}
	return func_210(iParam0, unk_0xB5CEFD608600A09F(), iParam1, bParam2, bParam3);
}

int func_204(bool bParam0, int iParam1, bool bParam2)//Position - 0x72AB
{
	return func_205(unk_0xB5CEFD608600A09F(), bParam0, iParam1, bParam2);
}

int func_205(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x72C1
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
			if (func_167(iVar0, iParam2, 0) && !unk_0xFA30DFD0084E92FE(Global_440000.f_F, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_209(1);
				}
				else
				{
					return func_209(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0xFA30DFD0084E92FE(Global_440000.f_4, 20))
			{
				return func_206(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_206(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_209(1);
	}
	return func_209(0);
}

int func_206(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x7385
{
	int iVar0;
	
	iVar0 = func_208(iParam0, iParam1, iParam3);
	if (func_207(Global_440000.f_1EF38, 1))
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

int func_207(int iParam0, bool bParam1)//Position - 0x749D
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

int func_208(int iParam0, int iParam1, int iParam2)//Position - 0x74EE
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
			if (!func_167(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_209(bool bParam0)//Position - 0x7535
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_210(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x754C
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
			if (func_216(1))
			{
				iVar3 = func_215(iParam0);
				if (!iVar3 == -1)
				{
					return func_213(iVar3);
				}
			}
			if ((func_212(iParam1, iParam0, iVar0, 0) && !unk_0xFA30DFD0084E92FE(Global_440000.f_F, 18)) || ((func_167(unk_0x343CB262BF0CDF5A(iParam1), unk_0x343CB262BF0CDF5A(iParam0), 0) && unk_0xFA30DFD0084E92FE(Global_440000.f_F, 23)) && !unk_0xFA30DFD0084E92FE(Global_440000.f_F, 18)))
			{
				return func_209(1);
			}
			else if (unk_0xFA30DFD0084E92FE(Global_440000.f_F, 26))
			{
				return func_211(1);
			}
			else
			{
				return func_205(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1805D3 || Global_1805CA) || Global_18402B[iParam0 /*770*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1805D3 == 1 && Global_1805DD == 0))
			{
				return func_209(1);
			}
			else
			{
				return func_205(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1805CE && Global_1803FC.f_E == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_215(iParam0);
	if (!iVar4 == -1)
	{
		return func_213(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_211(bool bParam0)//Position - 0x76F0
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_212(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x7707
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

int func_213(int iParam0)//Position - 0x777F
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_214(iParam0);
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

var func_214(int iParam0)//Position - 0x7842
{
	return Global_24E35D.f_817.f_2C[iParam0 /*2*/].f_1;
}

int func_215(int iParam0)//Position - 0x7859
{
	if (!iParam0 == func_11())
	{
		if (func_229(iParam0, 1))
		{
			return Global_24E35D.f_817.f_B[func_85(iParam0)];
		}
	}
	return -1;
}

int func_216(int iParam0)//Position - 0x788B
{
	if ((func_218() || func_217()) || (func_179() && iParam0))
	{
		return 1;
	}
	return 0;
}

var func_217()//Position - 0x78BA
{
	return Global_255A46.f_F;
}

var func_218()//Position - 0x78C8
{
	return Global_255A46.f_E;
}

int func_219(int iParam0, int iParam1, bool bParam2)//Position - 0x78D6
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_EF621.f_C[iParam0];
	if (func_216(1))
	{
		iVar2 = func_215(iParam1);
		if (!iVar2 == -1)
		{
			return func_213(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (unk_0xFA30DFD0084E92FE(Global_440000.f_62[iParam0 /*10231*/].f_14F1[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_11())
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
			iVar0 = func_205(iParam1, !bParam2, iParam0, 0);
		}
		if (unk_0xFA30DFD0084E92FE(Global_440000.f_15, 13))
		{
			iVar0 = func_220(iParam0);
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

int func_220(int iParam0)//Position - 0x7A3B
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

var func_221()//Position - 0x7B10
{
	return Global_240006.f_2;
}

bool func_222()//Position - 0x7B1E
{
	return unk_0xFA30DFD0084E92FE(Global_240006, 4);
}

bool func_223()//Position - 0x7B2F
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_27.f_12, 14);
}

int func_224(int iParam0)//Position - 0x7B4C
{
	if (func_198(iParam0, 0))
	{
		return 1;
	}
	if (func_225())
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

bool func_225()//Position - 0x7B8E
{
	return unk_0xFA30DFD0084E92FE(Global_240006, 3);
}

void func_226(int iParam0, bool bParam1)//Position - 0x7B9F
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_227(1);
	}
	else
	{
		iVar1 = func_227(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_227(bool bParam0)//Position - 0x7BD1
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_40001.f_2E03;
}

int func_228()//Position - 0x7BF7
{
	return Global_40001.f_2E02;
}

bool func_229(int iParam0, bool bParam1)//Position - 0x7C06
{
	if (!bParam1)
	{
		if (func_114(iParam0))
		{
			return 0;
		}
	}
	return Global_18C80F[iParam0 /*558*/].f_B != func_11();
}

void func_230(int iParam0, var uParam1, int iParam2, var uParam3)//Position - 0x7C31
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	int iVar17;
	bool bVar18;
	bool bVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	
	bVar18 = func_50(1);
	bVar19 = false;
	if (iParam0 == 237)
	{
		if (func_113())
		{
			iVar17 = unk_0xB5CEFD608600A09F();
		}
		else
		{
			iVar17 = func_131();
		}
		iVar11 = iVar17;
		if (iVar11 != -1)
		{
			iVar0 = Global_18402B[iVar11 /*770*/].f_2F1.f_1;
			if (uParam1->f_A == uParam1->f_B)
			{
				iVar1 = iVar0;
				bVar19 = true;
			}
			else
			{
				fVar12 = SYSTEM::TO_FLOAT(uParam1->f_A);
				fVar13 = SYSTEM::TO_FLOAT(uParam1->f_B);
				fVar14 = ((fVar12 / fVar13) * 100f);
				fVar15 = ((IntToFloat(iVar0) / 100f) * fVar14);
				iVar1 = SYSTEM::CEIL(fVar15);
			}
			*uParam3 = iVar1;
			if (bVar19)
			{
				iVar2 = Global_18402B[iVar11 /*770*/].f_2F1.f_2;
			}
			else
			{
				iVar2 = func_246(Global_18402B[iVar11 /*770*/].f_2F1, *uParam3);
			}
			if (uParam1->f_11)
			{
				iVar20 = (iVar2 - SYSTEM::CEIL((IntToFloat(iVar2) * 0.9f)));
				if (iVar20 > 100000)
				{
					iVar20 = 100000;
				}
				iVar2 = (iVar2 - iVar20);
			}
			*iParam2 = (*iParam2 + iVar2);
			iVar10 = func_245(*iParam2);
			if (iVar10 > 0)
			{
				if (iVar17 == unk_0xB5CEFD608600A09F())
				{
					func_244("TICK_TCUT", iVar10, 1);
				}
				*iParam2 = (*iParam2 - iVar10);
			}
			Global_196A81.f_31 = *uParam3;
			if (iVar17 == unk_0xB5CEFD608600A09F())
			{
				if (iVar2 > 0)
				{
					func_243(iVar2);
				}
				if (*uParam3 > 0)
				{
					func_241(*uParam3);
				}
				iVar6 = func_240(&uVar5);
				iVar7 = Global_40001.f_5B0B;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar9 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_40001.f_5B0A));
				iVar8 = ((*iParam2 / 100) * iVar9);
				*iParam2 = (*iParam2 + iVar8);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_193(140);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar18)
					{
						iVar21 = 0;
						while (iVar21 < unk_0x81C86888AEA2F49B())
						{
							iVar22 = iVar21;
							if (unk_0x05086B70D2CFEA6F(iVar22))
							{
								iVar23 = unk_0x4ED43B67B3F05E0F(iVar22);
								if (func_239(iVar23))
								{
									func_231(iVar23, 1, 198210293);
								}
							}
							iVar21++;
						}
					}
				}
				Global_267214.f_1312.f_172 = *iParam2;
			}
			else if (bVar18)
			{
				fVar16 = Global_40001.f_5AEF;
				iVar3 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar16));
				*iParam2 = iVar3;
				iVar4 = Global_40001.f_5AF0;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1992EB = *iParam2;
					func_193(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_231(int iParam0, int iParam1, int iParam2)//Position - 0x7E98
{
	var uVar0;
	
	uVar0 = func_233(iParam0);
	func_232(iParam0, uVar0, iParam1, iParam2);
}

void func_232(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x7EB4
{
	struct<8> Var0;
	
	Var0 = 151656521;
	Var0.f_1 = unk_0xB5CEFD608600A09F();
	Var0.f_2 = uParam1;
	Var0.f_4 = uParam2;
	Var0.f_3 = uParam3;
	Var0.f_5 = func_192(iParam0);
	func_191(&(Var0.f_6), &(Var0.f_7));
	if (iParam0 != func_11())
	{
		if (unk_0x96B1061E8F3CBC9A(iParam0))
		{
			unk_0x38E776D9FA75679B(1, &Var0, 8, func_190(iParam0));
		}
	}
}

int func_233(int iParam0)//Position - 0x7F1A
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_238();
	iVar0 = func_236(iParam0, iVar0);
	iVar1 = Global_18C80F[func_131() /*558*/].f_B.f_198;
	iVar0 = (iVar0 + (iVar1 * Global_40001.f_37FA));
	if (iVar0 < func_235())
	{
		iVar0 = func_235();
	}
	if (iVar0 > func_234())
	{
		iVar0 = func_234();
	}
	return iVar0;
}

int func_234()//Position - 0x7F73
{
	return Global_40001.f_37FB;
}

int func_235()//Position - 0x7F82
{
	return Global_40001.f_3C92;
}

int func_236(int iParam0, int iParam1)//Position - 0x7F91
{
	int iVar0;
	
	iVar0 = (func_304(iParam0) * func_237());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_237()//Position - 0x7FAF
{
	return Global_40001.f_3C91;
}

var func_238()//Position - 0x7FBE
{
	return Global_40001.f_2DFA;
}

int func_239(int iParam0)//Position - 0x7FCD
{
	if (unk_0x96B1061E8F3CBC9A(iParam0))
	{
		if (iParam0 != unk_0xB5CEFD608600A09F())
		{
			if (func_637(iParam0, unk_0xB5CEFD608600A09F(), 0))
			{
				if (!func_422(iParam0, 26))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_240(var uParam0)//Position - 0x8007
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0x96B1061E8F3CBC9A(unk_0x3171C34AB3FE6F2E(iVar0)))
		{
			iVar2 = unk_0x3171C34AB3FE6F2E(iVar0);
			if (!func_198(iVar2, 0) && !func_637(iVar2, unk_0xB5CEFD608600A09F(), 1))
			{
				iVar1++;
			}
			else if (func_198(iVar2, 0))
			{
				*uParam0++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_241(int iParam0)//Position - 0x8073
{
	func_242(iParam0, 7232);
}

void func_242(int iParam0, int iParam1)//Position - 0x8084
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = func_28(iParam1, -1, 0);
	func_25(iParam1, (iVar0 + iParam0), -1, 1, 0);
}

void func_243(int iParam0)//Position - 0x80AD
{
	func_242(iParam0, 7227);
}

int func_244(char* sParam0, int iParam1, int iParam2)//Position - 0x80BE
{
	int iVar0;
	
	iVar0 = -1;
	unk_0x2E94302CFF011F2E(sParam0);
	unk_0xAA5C5BF0489E5553(iParam1);
	iVar0 = unk_0x5E48BB10C6423FD5(0, 1);
	func_195(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_245(int iParam0)//Position - 0x80F4
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = (fVar0 * Global_40001.f_5B0C);
	if (fVar1 > 100000f)
	{
		fVar1 = 100000f;
	}
	return SYSTEM::ROUND(fVar1);
}

int func_246(struct<5> Param0, int iParam1)//Position - 0x8128
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	if (iParam1 == Param0.f_1)
	{
		return Param0.f_2;
	}
	iVar0 = Param0.f_2;
	if ((Param0.f_4 == 1 || Param0.f_4 == 2) || Param0.f_4 == 3)
	{
		iVar0 = (iVar0 - Param0.f_3);
	}
	fVar1 = (SYSTEM::TO_FLOAT(iParam1) / SYSTEM::TO_FLOAT(Param0.f_1));
	fVar2 = SYSTEM::TO_FLOAT(iVar0);
	return SYSTEM::FLOOR((fVar2 * fVar1));
}

void func_247(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4)//Position - 0x8192
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	bool bVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	*uParam4 = 0;
	bVar16 = func_50(1);
	bVar17 = false;
	if (iParam0 == 229)
	{
	}
	else if (iParam0 == 230)
	{
		if (func_113())
		{
			iVar15 = unk_0xB5CEFD608600A09F();
		}
		else
		{
			iVar15 = func_131();
		}
		if (iVar15 != -1)
		{
			if (uParam1->f_10 == 8)
			{
				iVar0 = (func_259(iVar15) + uParam1->f_8);
			}
			else
			{
				iVar0 = (func_250(uParam1->f_10) + uParam1->f_8);
			}
			if (uParam1->f_A == uParam1->f_B)
			{
				iVar1 = iVar0;
				bVar17 = true;
			}
			else
			{
				fVar10 = SYSTEM::TO_FLOAT(uParam1->f_A);
				fVar11 = SYSTEM::TO_FLOAT(uParam1->f_B);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = SYSTEM::CEIL(fVar13);
			}
			*uParam3 = iVar1;
			iVar2 = func_109(uParam1->f_10, *uParam3);
			*iParam2 = (*iParam2 + iVar2);
			if (bVar17)
			{
				iVar9 = func_108(uParam1->f_10, *uParam3);
				if (iVar9 > 0)
				{
					*iParam2 = (*iParam2 + iVar9);
				}
			}
			if (func_249(*iParam2) > 0)
			{
				if (iVar15 == unk_0xB5CEFD608600A09F())
				{
					func_244("SMTICK_RONCUT", func_249(*iParam2), 1);
				}
				*iParam2 = (*iParam2 - func_249(*iParam2));
			}
			if (iVar15 == unk_0xB5CEFD608600A09F())
			{
				func_248(iVar2, iVar9);
				iVar6 = func_240(&uVar5);
				iVar7 = Global_40001.f_54BC;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_40001.f_54BB));
				*uParam4 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + *uParam4);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_193(44);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar16)
					{
						iVar18 = 0;
						while (iVar18 < unk_0x81C86888AEA2F49B())
						{
							iVar19 = iVar18;
							if (unk_0x05086B70D2CFEA6F(iVar19))
							{
								iVar20 = unk_0x4ED43B67B3F05E0F(iVar19);
								if (func_239(iVar20))
								{
									func_231(iVar20, 1, 1160415507);
								}
							}
							iVar18++;
						}
					}
				}
				Global_267214.f_1312.f_172 = *iParam2;
			}
			else if (bVar16)
			{
				fVar14 = Global_40001.f_5479;
				iVar3 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_40001.f_547A;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1992EB = *iParam2;
					func_193(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_248(int iParam0, int iParam1)//Position - 0x83D8
{
	if (iParam0 > 0)
	{
		func_242(iParam0, 6112);
	}
	if (iParam1 > 0)
	{
		func_242(iParam1, 6113);
	}
}

int func_249(int iParam0)//Position - 0x83FE
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = (fVar0 * Global_40001.f_549B);
	if (fVar1 > SYSTEM::TO_FLOAT(Global_40001.f_549C))
	{
		fVar1 = SYSTEM::TO_FLOAT(Global_40001.f_549C);
	}
	return SYSTEM::ROUND(fVar1);
}

int func_250(int iParam0)//Position - 0x843E
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_257())
	{
		return 0;
	}
	if (iParam0 == 8)
	{
		return func_259(unk_0xB5CEFD608600A09F());
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		iVar2 = func_252(func_253(func_256(iVar0), -1, -1));
		if (func_251(iVar2) == iParam0)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_251(int iParam0)//Position - 0x849C
{
	switch (iParam0)
	{
		case -508960047:
			return 5;
		
		case -1996578712:
			return 5;
		
		case -324063008:
			return 7;
		
		case -1537242760:
			return 7;
		
		case 167523060:
			return 1;
		
		case 440723308:
			return 1;
		
		case -1821684485:
			return 6;
		
		case 1075487129:
			return 6;
		
		case 1339867730:
			return 4;
		
		case 1158536477:
			return 4;
		
		case -1222709082:
			return 0;
		
		case -260422691:
			return 0;
		
		case -1117639471:
			return 3;
		
		case -1434473216:
			return 3;
		
		case 690570889:
			return 2;
		
		case 320416020:
			return 2;
		
		default:
	}
	return -1;
}

int func_252(int iParam0)//Position - 0x854C
{
	switch (iParam0)
	{
		case 1:
			return -508960047;
		
		case 2:
			return -1996578712;
		
		case 3:
			return -324063008;
		
		case 4:
			return -1537242760;
		
		case 5:
			return 167523060;
		
		case 6:
			return 440723308;
		
		case 7:
			return -1821684485;
		
		case 8:
			return 1075487129;
		
		case 9:
			return 1339867730;
		
		case 10:
			return 1158536477;
		
		case 11:
			return -1222709082;
		
		case 12:
			return -260422691;
		
		case 13:
			return -1117639471;
		
		case 14:
			return -1434473216;
		
		case 15:
			return 690570889;
		
		case 16:
			return 320416020;
		
		default:
	}
	return 0;
}

int func_253(int iParam0, int iParam1, int iParam2)//Position - 0x863C
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_27();
	}
	iVar0 = 0;
	iVar1 = func_255(iParam0, iParam1);
	iVar2 = func_254(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0x6AEE934BCCBCAA0E(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_254(int iParam0)//Position - 0x8682
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - unk_0x86C669CF285C5AAD((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - unk_0x86C669CF285C5AAD((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - unk_0x86C669CF285C5AAD((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - unk_0x86C669CF285C5AAD((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - unk_0x86C669CF285C5AAD((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - unk_0x86C669CF285C5AAD((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - unk_0x86C669CF285C5AAD((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - unk_0x86C669CF285C5AAD((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - unk_0x86C669CF285C5AAD((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - unk_0x86C669CF285C5AAD((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - unk_0x86C669CF285C5AAD((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - unk_0x86C669CF285C5AAD((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - unk_0x86C669CF285C5AAD((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - unk_0x86C669CF285C5AAD((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - unk_0x86C669CF285C5AAD((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - unk_0x86C669CF285C5AAD((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - unk_0x86C669CF285C5AAD((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = ((iParam0 - 18162) - unk_0x86C669CF285C5AAD((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = ((iParam0 - 19018) - unk_0x86C669CF285C5AAD((iParam0 - 19018)) * 8) * 8;
	}
	return iVar0;
}

int func_255(int iParam0, int iParam1)//Position - 0x89F6
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_27();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xEDDF9BD8E04FC4AA((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xEDDF9BD8E04FC4AA((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xEDDF9BD8E04FC4AA((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xEDDF9BD8E04FC4AA((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x8EDD391D94A2AA73((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x8EDD391D94A2AA73((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 19018), 0, 1, iParam1, "_BUSINESSBATPSTAT_INT");
	}
	return iVar0;
}

int func_256(int iParam0)//Position - 0x8D20
{
	switch (iParam0)
	{
		case 0:
			return 16011;
		
		case 1:
			return 16012;
		
		case 2:
			return 16013;
		
		case 3:
			return 16014;
		
		case 4:
			return 16015;
		
		case 5:
			return 16016;
		
		case 6:
			return 16017;
		
		case 7:
			return 16018;
		
		case 8:
			return 16019;
		
		case 9:
			return 16020;
		
		case 10:
			return 16021;
		
		case 11:
			return 16022;
		
		case 12:
			return 16023;
		
		case 13:
			return 16024;
		
		case 14:
			return 16025;
		
		case 15:
			return 16026;
		
		case 16:
			return 16027;
		
		case 17:
			return 16028;
		
		case 18:
			return 16029;
		
		case 19:
			return 16030;
		
		case 20:
			return 16031;
		
		case 21:
			return 16032;
		
		case 22:
			return 16033;
		
		case 23:
			return 16034;
		
		case 24:
			return 16035;
		
		case 25:
			return 16036;
		
		case 26:
			return 16037;
		
		case 27:
			return 16038;
		
		case 28:
			return 16039;
		
		case 29:
			return 16040;
		
		case 30:
			return 16041;
		
		case 31:
			return 16042;
		
		case 32:
			return 16043;
		
		case 33:
			return 16044;
		
		case 34:
			return 16045;
		
		case 35:
			return 16046;
		
		case 36:
			return 16047;
		
		case 37:
			return 16048;
		
		case 38:
			return 16049;
		
		case 39:
			return 16050;
		
		case 40:
			return 16051;
		
		case 41:
			return 16052;
		
		case 42:
			return 16053;
		
		case 43:
			return 16054;
		
		case 44:
			return 16055;
		
		case 45:
			return 16056;
		
		case 46:
			return 16057;
		
		case 47:
			return 16058;
		
		case 48:
			return 16059;
		
		case 49:
			return 16060;
		
		default:
	}
	return 16011;
}

bool func_257()//Position - 0x8F8A
{
	return func_258() != 0;
}

int func_258()//Position - 0x8F98
{
	return Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_111.f_F9;
}

int func_259(int iParam0)//Position - 0x8FB0
{
	if (iParam0 != func_11() && func_260(iParam0))
	{
		return Global_18402B[iParam0 /*770*/].f_111.f_F9.f_3;
	}
	return 0;
}

int func_260(int iParam0)//Position - 0x8FE1
{
	if (iParam0 != func_11())
	{
		return Global_18402B[iParam0 /*770*/].f_111.f_F9 != 0;
	}
	return 0;
}

void func_261(int iParam0, var uParam1, int iParam2, var uParam3)//Position - 0x9006
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	bVar17 = func_50(1);
	if (iParam0 == 225)
	{
	}
	else if (iParam0 == 226)
	{
		if (func_113())
		{
			iVar15 = unk_0xB5CEFD608600A09F();
		}
		else
		{
			iVar15 = func_131();
		}
		if (iVar15 != -1)
		{
			iVar16 = func_112(iVar15);
			iVar0 = (func_282(iVar15, iVar16) + uParam1->f_8);
			if (uParam1->f_A == uParam1->f_B)
			{
				iVar1 = iVar0;
			}
			else
			{
				fVar10 = SYSTEM::TO_FLOAT(uParam1->f_A);
				fVar11 = SYSTEM::TO_FLOAT(uParam1->f_B);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = SYSTEM::CEIL(fVar13);
			}
			*uParam3 = iVar1;
			iVar2 = func_278(iVar15, iVar16, iVar1);
			if (uParam1->f_E == 0)
			{
				iVar2 = SYSTEM::CEIL((IntToFloat(iVar2) * Global_40001.f_4FB5));
			}
			else
			{
				iVar2 = SYSTEM::CEIL((IntToFloat(iVar2) * Global_40001.f_4FB4));
			}
			*iParam2 = (*iParam2 + iVar2);
			if (iVar15 == unk_0xB5CEFD608600A09F())
			{
				func_275(iVar16, iVar2);
				if (func_271(iVar16) >= Global_40001.f_4DF1 || iVar2 >= Global_40001.f_4DF1)
				{
					func_262(5);
				}
				iVar6 = func_240(&uVar5);
				iVar7 = SYSTEM::ROUND(Global_40001.f_4FB7);
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_40001.f_4FB6));
				iVar9 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + iVar9);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_193(108);
					}
					else
					{
						func_193(110);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar17)
					{
						iVar18 = 0;
						while (iVar18 < unk_0x81C86888AEA2F49B())
						{
							iVar19 = iVar18;
							if (unk_0x05086B70D2CFEA6F(iVar19))
							{
								iVar20 = unk_0x4ED43B67B3F05E0F(iVar19);
								if (func_239(iVar20))
								{
									func_231(iVar20, 1, -1905128202);
								}
							}
							iVar18++;
						}
					}
				}
				Global_267214.f_1312.f_172 = *iParam2;
			}
			else if (bVar17)
			{
				fVar14 = Global_40001.f_4FB8;
				iVar3 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_40001.f_4FB9;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1992EB = *iParam2;
					func_193(112);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
	else if (iParam0 == 227)
	{
	}
}

void func_262(int iParam0)//Position - 0x9241
{
	switch (iParam0)
	{
		case 0:
			if (Global_40001.f_4DE5)
			{
				if (func_264(Global_40001.f_4DE6))
				{
					func_263("CLOTHAWDSTRAP2", "CLOTHAWDDESC1", 0, 0, 0, 1);
				}
			}
			break;
		
		case 1:
			if (Global_40001.f_4DE7)
			{
				if (func_264(Global_40001.f_4DE8))
				{
					func_263("CLOTHAWDSTRAP2", "CLOTHAWDDESC2", 0, 0, 0, 1);
				}
			}
			break;
		
		case 2:
			if (Global_40001.f_4DE9)
			{
				if (func_264(Global_40001.f_4DEA))
				{
					func_263("CLOTHAWDSTRAP2", "CLOTHAWDDESC3", 0, 0, 0, 1);
				}
			}
			break;
		
		case 3:
			if (Global_40001.f_4DEB)
			{
				if (func_264(Global_40001.f_4DEC))
				{
					func_263("CLOTHAWDSTRAP2", "CLOTHAWDDESC5", 0, 0, 0, 1);
				}
			}
			break;
		
		case 4:
			if (Global_40001.f_4DED)
			{
				if (func_264(Global_40001.f_4DEE))
				{
					func_263("CLOTHAWDSTRAP2", "CLOTHAWDDESC6", 0, 0, 0, 1);
				}
			}
			break;
		
		case 5:
			if (Global_40001.f_4DEF)
			{
				if (func_264(Global_40001.f_4DF0))
				{
					func_244("CLOTHAWDSTRAP3", Global_40001.f_4DF1, 1);
				}
			}
			break;
		
		case 6:
			if (Global_40001.f_4DF2)
			{
				if (func_264(Global_40001.f_4DF3))
				{
					func_244("CLOTHAWDSTRAP5", Global_40001.f_4E77, 1);
				}
			}
			break;
		
		case 7:
			if (Global_40001.f_4DF5)
			{
				if (func_264(Global_40001.f_4DF6))
				{
					func_263("CLOTHAWDSTRAP2", "CLOTHAWDDESC8", 0, 0, 0, 1);
				}
			}
			break;
		
		case 8:
			if (Global_40001.f_4DF7)
			{
				if (func_264(Global_40001.f_4DF8))
				{
					func_263("CLOTHAWDSTRAP2", "CLOTHAWDDESC9", 0, 0, 0, 1);
				}
			}
			break;
		
		case 9:
			if (Global_40001.f_4DF9)
			{
				if (func_264(Global_40001.f_4DFA))
				{
					func_263("CLOTHAWDSTRAP2", "CLOTHAWDDESC10", 0, 0, 0, 1);
				}
			}
			break;
		
		case 10:
			if (Global_40001.f_4DFB)
			{
				if (func_264(Global_40001.f_4DFC))
				{
					func_263("CLOTHAWDSTRAP2", "CLOTHAWDDESC11", 0, 0, 0, 1);
				}
			}
			break;
		
		case 11:
			if (Global_40001.f_4DFD)
			{
				if (func_264(Global_40001.f_4DFE))
				{
					func_263("CLOTHAWDSTRAP2", "CLOTHAWDDESC12", 0, 0, 0, 1);
				}
			}
			break;
		
		case 12:
			if (Global_40001.f_4DFF)
			{
				if (func_264(Global_40001.f_4E00))
				{
					func_263("CLOTHAWDSTRAP2", "CLOTHAWDDESC13", 0, 0, 0, 1);
				}
			}
			break;
		
		case 13:
			if (Global_40001.f_4E01)
			{
				if (func_264(Global_40001.f_4E02))
				{
					func_263("CLOTHAWDSTRAP2", "CLOTHAWDDESC14", 0, 0, 0, 1);
				}
			}
			break;
		
		case 14:
			if (Global_40001.f_4E03)
			{
				if (func_264(Global_40001.f_4E04))
				{
					func_263("CLOTHAWDSTRAP2", "CLOTHAWDDESC15", 0, 0, 0, 1);
				}
			}
			break;
	}
}

int func_263(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5)//Position - 0x953E
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	unk_0x2E94302CFF011F2E(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x449F0674640D94C0(iParam2);
	}
	if (!iParam3 == 0)
	{
		unk_0x449F0674640D94C0(iParam3);
	}
	unk_0xC9C304D0AABE1335(sParam1);
	if (!bParam4)
	{
		iVar0 = unk_0x5E48BB10C6423FD5(0, 1);
	}
	else
	{
		Global_26210D = { func_154(unk_0xB5CEFD608600A09F()) };
		if (unk_0x24723877416AAAFC(&Global_2620C7, 35, &Global_26210D))
		{
			iVar1 = 0;
			if (unk_0x3362CDE8460ED38B(&(Global_2620C7.f_16), "Leader") && Global_2620C7.f_1E == 0)
			{
				iVar1 = 1;
			}
			if (Global_2620C7.f_15 > 0)
			{
				iVar2 = 0;
			}
			else
			{
				iVar2 = 1;
			}
			iVar0 = unk_0x0F92E4F5455F4880(iVar2, unk_0x5E69F635CCDEE0CF(&Global_2620C7, 35), &(Global_2620C7.f_11), Global_2620C7.f_1E, iVar1, 0, Global_2620C7, unk_0xD885B2234FC72D62(unk_0xB5CEFD608600A09F()), Global_140CDB, Global_140CDC, Global_140CDD);
		}
		else
		{
			iVar0 = unk_0x5E48BB10C6423FD5(0, 1);
		}
	}
	func_195(8, sParam0, 1, sParam1, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_264(int iParam0)//Position - 0x9632
{
	switch (iParam0)
	{
		case 558790811:
		case 1740171158:
		case -1191485992:
		case -1735342207:
			if (!func_268(15417, -1, -1))
			{
				func_267(15417, 1, -1, 1);
				return 1;
			}
			break;
		
		case 2108830041:
		case -120911428:
		case -1407302654:
		case -2039798986:
			if (!func_268(15418, -1, -1))
			{
				func_267(15418, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1898746692:
		case -1359197372:
		case -140996548:
		case -1850642937:
			if (!func_268(15425, -1, -1))
			{
				func_267(15425, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case -695364761:
		case 1263491585:
		case -1307315235:
		case 258618816:
			if (!func_268(15405, -1, -1))
			{
				func_267(15405, 1, -1, 1);
				return 1;
			}
			break;
		
		case 2024167318:
		case 1915398071:
		case -571324979:
		case 1374601256:
			if (!func_268(15393, -1, -1))
			{
				func_267(15393, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1720955761:
		case 1608057620:
		case 867332432:
		case -660288110:
			if (!func_268(15409, -1, -1))
			{
				func_267(15409, 1, -1, 1);
				return 1;
			}
			break;
		
		case 221872318:
		case -1802539904:
		case -1005186539:
		case -426022529:
			if (!func_268(15396, -1, -1))
			{
				func_267(15396, 1, -1, 1);
				return 1;
			}
			break;
		
		case -2098369500:
		case -1196968784:
		case -1314656979:
		case -1132522169:
			if (!func_268(15412, -1, -1))
			{
				func_267(15412, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1172743557:
		case -1502212019:
		case 1110085176:
		case -889671110:
			if (!func_74(209, -1))
			{
				func_265(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1883175477:
		case -584614481:
		case -1736983851:
		case -182614393:
			if (!func_268(15403, -1, -1))
			{
				func_267(15403, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1449333520:
		case -890709710:
		case -1496983695:
		case 48701978:
			if (!func_74(209, -1))
			{
				func_265(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -869990766:
		case -581140963:
		case 1827333048:
		case -646852824:
			if (!func_268(15389, -1, -1))
			{
				func_267(15389, 1, -1, 1);
				return 1;
			}
			break;
		
		case -542628448:
		case -870458464:
		case 420690954:
		case -408392811:
			if (!func_74(209, -1))
			{
				func_265(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case 787769067:
		case 1132791298:
		case 1330653315:
		case 1717168382:
			if (!func_268(15398, -1, -1))
			{
				func_267(15398, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case -1361097493:
		case -73647644:
		case -1036580403:
		case -1765816422:
		case -1991379993:
		case -1731611121:
			if (!func_268(15400, -1, -1))
			{
				func_267(15400, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1167465472:
		case -313418417:
		case -203035350:
		case -1533320367:
		case 2065127290:
		case -390081030:
			if (!func_74(209, -1))
			{
				func_265(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -2105609173:
		case -698486936:
		case 917598912:
		case 939297301:
		case -56403312:
		case -1368923829:
			if (!func_268(15408, -1, -1))
			{
				func_267(15408, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1864920868:
		case -1072905530:
		case 682284723:
		case 1186965403:
		case -292700571:
		case -2068738593:
			if (!func_74(209, -1))
			{
				func_265(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1729183056:
		case 2114404000:
		case 481083063:
		case 1575507436:
		case -648899601:
		case -612123774:
			if (!func_268(15411, -1, -1))
			{
				func_267(15411, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1967315379:
		case 1750602562:
		case 114660105:
		case 1783131820:
		case -889194678:
		case 801334272:
			if (!func_268(15397, -1, -1))
			{
				func_267(15397, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1192623422:
		case 1330733365:
		case 1897981854:
		case 2059866009:
		case 867092646:
		case -146705667:
			if (!func_268(15413, -1, -1))
			{
				func_267(15413, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1444780905:
		case 1272666697:
		case 1601455173:
		case -1997689882:
		case 627387411:
		case -847831191:
			if (!func_268(15391, -1, -1))
			{
				func_267(15391, 1, -1, 1);
				return 1;
			}
			break;
		
		case 444212231:
		case -1563654102:
		case 1932815241:
		case -1617209023:
		case 308545041:
		case 1682427144:
			if (!func_268(15388, -1, -1))
			{
				func_267(15388, 1, -1, 1);
				return 1;
			}
			break;
		
		case 704955164:
		case -720081735:
		case 1626031863:
		case -1391954917:
		case 35480964:
		case 2029975158:
			if (!func_74(209, -1))
			{
				func_265(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1124704392:
		case -850093035:
		case 926585800:
		case -1832969872:
		case 1539395388:
		case 1377465778:
			if (!func_268(15401, -1, -1))
			{
				func_267(15401, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case 1029334921:
		case -322091380:
		case -1604737223:
		case -836382797:
			if (!func_268(15394, -1, -1))
			{
				func_267(15394, 1, -1, 1);
				return 1;
			}
			break;
		
		case -534855486:
		case -1168575065:
		case -1367129204:
		case -1006027910:
			if (!func_74(209, -1))
			{
				func_265(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -516333262:
		case 756873456:
		case 87453937:
		case -1438775324:
			if (!func_268(15406, -1, -1))
			{
				func_267(15406, 1, -1, 1);
				return 1;
			}
			break;
		
		case 485135095:
		case -730037708:
		case -1686659723:
		case -1094274807:
			if (!func_268(15395, -1, -1))
			{
				func_267(15395, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1713551997:
		case -970458486:
		case 1992217604:
		case -1348726092:
			if (!func_74(209, -1))
			{
				func_265(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1490658501:
		case 975601953:
		case -1934557208:
		case 1786218600:
			if (!func_268(15410, -1, -1))
			{
				func_267(15410, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1735635238:
		case 1614208560:
		case -1034032319:
		case -1858021894:
			if (!func_268(15407, -1, -1))
			{
				func_267(15407, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1931303956:
		case -726032561:
		case 1747334867:
		case 1237632771:
			if (!func_74(209, -1))
			{
				func_265(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1931617488:
		case -1824987162:
		case 236389050:
		case 1987485798:
			if (!func_74(209, -1))
			{
				func_265(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1726332301:
		case 417579524:
		case 591736086:
		case 908992470:
			if (!func_268(15414, -1, -1))
			{
				func_267(15414, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1382922530:
		case 734151492:
		case -357636850:
		case -1021993708:
			if (!func_268(15415, -1, -1))
			{
				func_267(15415, 1, -1, 1);
				return 1;
			}
			break;
		
		case 452778672:
		case -1766862320:
		case 479676642:
		case -1654828636:
			if (!func_268(15399, -1, -1))
			{
				func_267(15399, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1776790350:
		case 579562906:
		case 242920617:
		case -1365707749:
			if (!func_268(15404, -1, -1))
			{
				func_267(15404, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1988057295:
		case -619754931:
		case -1219723702:
		case -388208479:
			if (!func_74(209, -1))
			{
				func_265(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case 816707921:
		case 1424441799:
		case -1576971340:
		case 2087194554:
			if (!func_268(15392, -1, -1))
			{
				func_267(15392, 1, -1, 1);
				return 1;
			}
			break;
		
		case 744446190:
		case -1405036369:
		case -622901905:
		case 981732339:
			if (!func_268(15390, -1, -1))
			{
				func_267(15390, 1, -1, 1);
				return 1;
			}
			break;
		
		case 917772807:
		case 1929056908:
		case -981132613:
		case 1271443068:
			if (!func_268(15402, -1, -1))
			{
				func_267(15402, 1, -1, 1);
				return 1;
			}
			break;
		
		case -292922355:
		case -34538790:
		case -1908986844:
		case -1785118184:
			if (!func_268(15416, -1, -1))
			{
				func_267(15416, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1495432685:
		case 1898518287:
		case 2029126042:
		case -1521032813:
			if (!func_74(209, -1))
			{
				func_265(209, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case -2123485438:
		case 1457900554:
		case -14316613:
		case 619771057:
			if (!func_268(15426, -1, -1))
			{
				func_267(15426, 1, -1, 1);
				return 1;
			}
			break;
		
		case -815706791:
		case -1066127505:
		case 1281631799:
		case -1519028808:
			if (!func_268(15422, -1, -1))
			{
				func_267(15422, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1318802347:
		case -1366750043:
		case 447234752:
		case 1996626130:
			if (!func_268(15423, -1, -1))
			{
				func_267(15423, 1, -1, 1);
				return 1;
			}
			break;
		
		case 306110040:
		case 1944822196:
		case 278933172:
		case -1981759857:
			if (!func_268(15421, -1, -1))
			{
				func_267(15421, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1828101251:
		case -1639289459:
		case -562607521:
		case -879279621:
			if (!func_268(15427, -1, -1))
			{
				func_267(15427, 1, -1, 1);
				return 1;
			}
			break;
		
		case -919314748:
		case 1282565442:
		case 755492739:
		case 1276101346:
			if (!func_268(15419, -1, -1))
			{
				func_267(15419, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1971111649:
		case -884280700:
		case -85982412:
		case 1573086793:
			if (!func_268(15420, -1, -1))
			{
				func_267(15420, 1, -1, 1);
				return 1;
			}
			break;
	}
	return 0;
}

void func_265(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xA1A7
{
	int iVar0;
	
	if (func_266())
	{
		iVar0 = Global_2705A2[iParam0 /*3*/][func_26(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x7DB90DFB4AE71E86(iVar0, iParam1, iParam3);
		}
	}
}

int func_266()//Position - 0xA1D9
{
	return 1;
	return 0;
}

int func_267(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0xA1E6
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		iParam2 = func_27();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0x761270FB5119E371((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x87C0AFE55188B978((iParam0 - 0)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar2, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0x761270FB5119E371((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x87C0AFE55188B978((iParam0 - 192)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar3, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0x761270FB5119E371((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x87C0AFE55188B978((iParam0 - 513)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar4, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0x761270FB5119E371((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x87C0AFE55188B978((iParam0 - 705)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar5, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0xC4006144B74F1FE6((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x87C0AFE55188B978((iParam0 - 3111)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar6, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0xC4006144B74F1FE6((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x87C0AFE55188B978((iParam0 - 2919)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar7, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0x64CE28C63005F094((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x87C0AFE55188B978((iParam0 - 4207)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar8, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0x64CE28C63005F094((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x87C0AFE55188B978((iParam0 - 4335)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar9, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = unk_0x64CE28C63005F094((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x87C0AFE55188B978((iParam0 - 6029)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar10, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = unk_0x64CE28C63005F094((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x87C0AFE55188B978((iParam0 - 7385)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar11, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = unk_0x64CE28C63005F094((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x87C0AFE55188B978((iParam0 - 7321)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar12, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = unk_0x64CE28C63005F094((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x87C0AFE55188B978((iParam0 - 9361)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar13, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = unk_0x64CE28C63005F094((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x87C0AFE55188B978((iParam0 - 15369)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar14, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = unk_0x64CE28C63005F094((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x87C0AFE55188B978((iParam0 - 15562)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar15, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = unk_0x64CE28C63005F094((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0x87C0AFE55188B978((iParam0 - 15946)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar16, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = unk_0x64CE28C63005F094((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0x87C0AFE55188B978((iParam0 - 18098)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar17, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = unk_0x64CE28C63005F094((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - unk_0x87C0AFE55188B978((iParam0 - 22066)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar18, bParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_268(int iParam0, int iParam1, int iParam2)//Position - 0xA700
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_27();
	}
	iVar1 = func_270(iParam0, iParam1);
	uVar2 = func_269(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xDAB376DC6F83D68C(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_269(int iParam0)//Position - 0xA73D
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x87C0AFE55188B978((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x87C0AFE55188B978((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x87C0AFE55188B978((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x87C0AFE55188B978((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x87C0AFE55188B978((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x87C0AFE55188B978((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x87C0AFE55188B978((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x87C0AFE55188B978((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x87C0AFE55188B978((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x87C0AFE55188B978((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x87C0AFE55188B978((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0x87C0AFE55188B978((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0x87C0AFE55188B978((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0x87C0AFE55188B978((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0x87C0AFE55188B978((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0x87C0AFE55188B978((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - unk_0x87C0AFE55188B978((iParam0 - 22066)) * 64);
	}
	return iVar0;
}

int func_270(int iParam0, int iParam1)//Position - 0xAA29
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_27();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0x761270FB5119E371((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0x761270FB5119E371((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0x761270FB5119E371((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0x761270FB5119E371((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0xC4006144B74F1FE6((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0xC4006144B74F1FE6((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = unk_0x64CE28C63005F094((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	return iVar0;
}

int func_271(int iParam0)//Position - 0xACF6
{
	int iVar0;
	
	iVar0 = func_273(iParam0);
	return func_28(func_272(iVar0), -1, 0);
}

int func_272(int iParam0)//Position - 0xAD12
{
	switch (iParam0)
	{
		case 0:
			return 3947;
		
		case 1:
			return 3948;
		
		case 2:
			return 3949;
		
		case 3:
			return 3950;
		
		case 4:
			return 3951;
		
		case 5:
			return 5452;
		
		default:
	}
	return 3947;
}

int func_273(int iParam0)//Position - 0xAD6C
{
	int iVar0;
	
	if (func_274(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_111.f_A8[iVar0 /*12*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_274(int iParam0)//Position - 0xADAE
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

void func_275(int iParam0, int iParam1)//Position - 0xADCD
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_273(iParam0);
	iVar1 = func_272(iVar0);
	iVar2 = (func_28(iVar1, -1, 0) + iParam1);
	func_25(iVar1, iVar2, -1, 1, 0);
	if (iVar0 == 5)
	{
		return;
	}
	if (func_253(9357, -1, -1) < 3)
	{
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_111.f_A8[iVar0 /*12*/] != 0)
			{
				iVar1 = func_272(iVar0);
				iVar3 = (iVar3 + func_28(iVar1, -1, 0));
			}
			iVar0++;
		}
		iVar4 = 1;
		while (iVar4 <= 3)
		{
			if (iVar3 >= func_277(iVar4))
			{
				iVar5 = iVar4;
			}
			iVar4++;
		}
		func_276(9357, iVar5, -1, 1);
	}
}

var func_276(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xAE82
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_27();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xEDDF9BD8E04FC4AA((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - unk_0x86C669CF285C5AAD((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xEDDF9BD8E04FC4AA((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - unk_0x86C669CF285C5AAD((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xEDDF9BD8E04FC4AA((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - unk_0x86C669CF285C5AAD((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xEDDF9BD8E04FC4AA((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - unk_0x86C669CF285C5AAD((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x8EDD391D94A2AA73((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - unk_0x86C669CF285C5AAD((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x8EDD391D94A2AA73((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - unk_0x86C669CF285C5AAD((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - unk_0x86C669CF285C5AAD((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - unk_0x86C669CF285C5AAD((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - unk_0x86C669CF285C5AAD((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - unk_0x86C669CF285C5AAD((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - unk_0x86C669CF285C5AAD((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - unk_0x86C669CF285C5AAD((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 9553), 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - unk_0x86C669CF285C5AAD((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 15265), 0, 1, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - unk_0x86C669CF285C5AAD((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 16010), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 16010) - unk_0x86C669CF285C5AAD((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 18162), 0, 1, iParam2, "_GANGOPSPSTAT_INT");
		iVar1 = ((iParam0 - 18162) - unk_0x86C669CF285C5AAD((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 19018), 0, 1, iParam2, "_BUSINESSBATPSTAT_INT");
		iVar1 = ((iParam0 - 19018) - unk_0x86C669CF285C5AAD((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - unk_0x86C669CF285C5AAD((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x56B992D4CEB4B904((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - unk_0x86C669CF285C5AAD((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = unk_0x787266E3704350D7(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_277(int iParam0)//Position - 0xB37E
{
	switch (iParam0)
	{
		case 1:
			return 100000;
			break;
		
		case 2:
			return 300000;
			break;
		
		case 3:
			return 500000;
			break;
	}
	return 0;
}

int func_278(int iParam0, int iParam1, int iParam2)//Position - 0xB3BE
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_124(iParam1);
	if (func_274(iParam1))
	{
		switch (iVar1)
		{
			case 1:
				iVar0 = Global_40001.f_3FCF;
				if (func_279(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_40001.f_3FD4);
				}
				if (func_279(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_40001.f_3FD9);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 3:
				iVar0 = Global_40001.f_3FCE;
				if (func_279(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_40001.f_3FD3);
				}
				if (func_279(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_40001.f_3FD8);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 4:
				iVar0 = Global_40001.f_3FCD;
				if (func_279(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_40001.f_3FD2);
				}
				if (func_279(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_40001.f_3FD7);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0:
				iVar0 = Global_40001.f_3FCB;
				if (func_279(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_40001.f_3FD0);
				}
				if (func_279(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_40001.f_3FD5);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 2:
				iVar0 = Global_40001.f_3FCC;
				if (func_279(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_40001.f_3FD1);
				}
				if (func_279(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_40001.f_3FD6);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 5:
				iVar0 = Global_40001.f_4FCE;
				if (func_279(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_40001.f_4FD0);
				}
				if (func_279(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_40001.f_4FCF);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			}
	}
	return iVar0;
}

int func_279(int iParam0, int iParam1, int iParam2)//Position - 0xB596
{
	int iVar0;
	
	if (func_281(iParam0, iParam1))
	{
		iVar0 = func_280(iParam0, iParam1);
		return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_A8[iVar0 /*12*/].f_5, iParam2);
	}
	return 0;
}

int func_280(int iParam0, int iParam1)//Position - 0xB5D1
{
	int iVar0;
	
	if (func_274(iParam1) && iParam0 != func_11())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_18402B[iParam0 /*770*/].f_111.f_A8[iVar0 /*12*/] == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_281(int iParam0, int iParam1)//Position - 0xB61D
{
	int iVar0;
	
	if (func_274(iParam1) && iParam0 != func_11())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_18402B[iParam0 /*770*/].f_111.f_A8[iVar0 /*12*/] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_282(int iParam0, int iParam1)//Position - 0xB668
{
	int iVar0;
	
	if (iParam0 == func_11())
	{
		return 0;
	}
	if (func_274(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_18402B[iParam0 /*770*/].f_111.f_A8[iVar0 /*12*/] == iParam1)
			{
				return Global_18402B[iParam0 /*770*/].f_111.f_A8[iVar0 /*12*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_283(int iParam0, var uParam1, int iParam2, var uParam3)//Position - 0xB6C7
{
	struct<2> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	var uVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	struct<2> Var14;
	float fVar15;
	float fVar16;
	float fVar17;
	int iVar18;
	float fVar19;
	int iVar20;
	float fVar21;
	int iVar22;
	int iVar23;
	
	if (iParam0 == 192)
	{
	}
	else if (iParam0 == 190)
	{
		if (uParam1->f_A > 0)
		{
			if (func_127())
			{
				Var0 = { func_126() };
				if (uParam1->f_A == uParam1->f_B)
				{
					*uParam3 = (uParam1->f_F + uParam1->f_8);
				}
				else
				{
					fVar1 = SYSTEM::TO_FLOAT(uParam1->f_A);
					fVar2 = SYSTEM::TO_FLOAT(uParam1->f_B);
					fVar3 = ((fVar1 / fVar2) * 100f);
					iVar4 = (uParam1->f_F + uParam1->f_8);
					fVar5 = ((IntToFloat(iVar4) / 100f) * fVar3);
					*uParam3 = SYSTEM::CEIL(fVar5);
				}
				iVar6 = func_278(unk_0xB5CEFD608600A09F(), Var0, *uParam3);
				if (Var0.f_1 == 1)
				{
					fVar7 = (SYSTEM::TO_FLOAT(iVar6) * Global_40001.f_462D);
					iVar6 = SYSTEM::ROUND(fVar7);
				}
				else
				{
					fVar8 = (SYSTEM::TO_FLOAT(iVar6) * Global_40001.f_462C);
					iVar6 = SYSTEM::ROUND(fVar8);
				}
				*iParam2 = (*iParam2 + iVar6);
				iVar10 = func_240(&uVar9);
				iVar11 = SYSTEM::ROUND(Global_40001.f_4623);
				if (iVar10 > iVar11)
				{
					iVar10 = iVar11;
				}
				iVar12 = SYSTEM::CEIL((IntToFloat(iVar10) * Global_40001.f_4622));
				iVar13 = ((*iParam2 / 100) * iVar12);
				*iParam2 = (*iParam2 + iVar13);
				if (uParam1->f_6)
				{
					*iParam2 = (*iParam2 + *uParam1);
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_C == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
					else if (uParam1->f_C == 9)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
				if (iVar10 > 0)
				{
					func_193(86);
				}
				Global_267214.f_1312.f_172 = *iParam2;
			}
			else if (func_50(0))
			{
				Var14 = { func_284(func_131()) };
				if (uParam1->f_A == uParam1->f_B)
				{
					*uParam3 = (uParam1->f_F + uParam1->f_8);
				}
				else
				{
					fVar15 = SYSTEM::TO_FLOAT(uParam1->f_A);
					fVar16 = SYSTEM::TO_FLOAT(uParam1->f_B);
					fVar17 = ((fVar15 / fVar16) * 100f);
					iVar18 = (uParam1->f_F + uParam1->f_8);
					fVar19 = ((IntToFloat(iVar18) / 100f) * fVar17);
					*uParam3 = SYSTEM::CEIL(fVar19);
				}
				iVar20 = func_278(func_131(), Var14, *uParam3);
				if (Var14.f_1 == 1)
				{
					iVar20 = SYSTEM::CEIL((IntToFloat(iVar20) * Global_40001.f_462D));
				}
				else if (Var14.f_1 == 0)
				{
					iVar20 = SYSTEM::CEIL((IntToFloat(iVar20) * Global_40001.f_462C));
				}
				*iParam2 = (*iParam2 + iVar20);
				fVar21 = Global_40001.f_4654;
				iVar22 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar21));
				*iParam2 = iVar22;
				iVar23 = Global_40001.f_4655;
				if (*iParam2 > iVar23)
				{
					*iParam2 = iVar23;
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_C == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
			}
		}
	}
}

struct<2> func_284(int iParam0)//Position - 0xB96A
{
	return Global_18C80F[iParam0 /*558*/].f_B.f_BC;
}

void func_285(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4)//Position - 0xB981
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (iParam0 == 167)
	{
		if (func_114(unk_0xB5CEFD608600A09F()))
		{
			if (bParam1)
			{
				func_300();
			}
			func_299();
		}
	}
	else if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (func_114(unk_0xB5CEFD608600A09F()))
			{
				if (uParam2->f_5)
				{
					*iParam3 = (*iParam3 + func_291(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_B1));
				}
				else
				{
					*uParam4 = uParam2->f_7;
					if (uParam2->f_8 > 0)
					{
						*uParam4 = (*uParam4 + uParam2->f_8);
					}
					iVar0 = func_290(*uParam4);
					iVar1 = (iVar0 * *uParam4);
					*iParam3 = (*iParam3 + iVar1);
					iVar3 = func_240(&uVar2);
					iVar4 = Global_40001.f_3C9C;
					if (iVar3 > iVar4)
					{
						iVar3 = iVar4;
					}
					iVar5 = SYSTEM::CEIL((IntToFloat(iVar3) * Global_40001.f_3985));
					iVar6 = ((*iParam3 / 100) * iVar5);
					*iParam3 = (*iParam3 + iVar6);
					if (uParam2->f_6)
					{
						*iParam3 = (*iParam3 + *uParam2);
					}
					if (iVar3 > 0 && uParam2->f_9 != 4)
					{
						func_193(44);
					}
				}
				func_288(*iParam3);
				func_287();
				Global_267214.f_1312.f_172 = *iParam3;
				iVar7 = 0;
				while (iVar7 < unk_0x81C86888AEA2F49B())
				{
					iVar8 = iVar7;
					if (unk_0x05086B70D2CFEA6F(iVar8))
					{
						iVar9 = unk_0x4ED43B67B3F05E0F(iVar8);
						if (func_239(iVar9))
						{
							func_231(iVar9, 1, -1292453789);
						}
					}
					iVar7++;
				}
			}
		}
		if (func_114(unk_0xB5CEFD608600A09F()))
		{
			func_286();
		}
	}
}

void func_286()//Position - 0xBAED
{
	int iVar0;
	
	iVar0 = Global_270D87[func_27()];
	iVar0++;
	func_100(3663, iVar0, -1, 1);
}

void func_287()//Position - 0xBB12
{
	int iVar0;
	
	iVar0 = Global_270D8D[func_27()];
	iVar0++;
	func_100(3662, iVar0, -1, 1);
}

void func_288(int iParam0)//Position - 0xBB37
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_270D90[func_27()];
	iVar0 = (iVar0 + iParam0);
	func_100(3664, iVar0, -1, 1);
	if (func_253(7666, -1, -1) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (iVar0 >= func_289(iVar1))
			{
				iVar2 = iVar1;
			}
			iVar1++;
		}
		func_276(7666, iVar2, -1, 1);
	}
}

int func_289(int iParam0)//Position - 0xBB99
{
	switch (iParam0)
	{
		case 1:
			return Global_40001.f_3D21;
			break;
		
		case 2:
			return Global_40001.f_3D22;
			break;
		
		case 3:
			return Global_40001.f_3D23;
			break;
		
		case 4:
			return Global_40001.f_3D24;
			break;
		
		case 5:
			return Global_40001.f_3D25;
			break;
		
		case 6:
			return Global_40001.f_3D26;
			break;
		
		case 7:
			return Global_40001.f_3D27;
			break;
		
		case 8:
			return Global_40001.f_3D28;
			break;
		
		case 9:
			return Global_40001.f_3D29;
			break;
		
		case 10:
			return Global_40001.f_3D2A;
			break;
		
		case 11:
			return Global_40001.f_3D2B;
			break;
		
		case 12:
			return Global_40001.f_3D2C;
			break;
		
		case 13:
			return Global_40001.f_3D2D;
			break;
		
		case 14:
			return Global_40001.f_3D2E;
			break;
		
		case 15:
			return Global_40001.f_3D2F;
			break;
		
		case 16:
			return Global_40001.f_3D30;
			break;
		
		case 17:
			return Global_40001.f_3D31;
			break;
		
		case 18:
			return Global_40001.f_3D32;
			break;
		
		case 19:
			return Global_40001.f_3D33;
			break;
		
		case 20:
			return Global_40001.f_3D34;
			break;
		
		case 21:
			return Global_40001.f_3D35;
			break;
		
		case 22:
			return Global_40001.f_3D36;
			break;
		
		case 23:
			return Global_40001.f_3D37;
			break;
		
		case 24:
			return Global_40001.f_3D38;
			break;
	}
	return 0;
}

var func_290(int iParam0)//Position - 0xBD71
{
	if (iParam0 >= Global_40001.f_396F)
	{
		return Global_40001.f_3984;
	}
	else if (iParam0 >= Global_40001.f_396E)
	{
		return Global_40001.f_3983;
	}
	else if (iParam0 >= Global_40001.f_396D)
	{
		return Global_40001.f_3982;
	}
	else if (iParam0 >= Global_40001.f_396C)
	{
		return Global_40001.f_3981;
	}
	else if (iParam0 >= Global_40001.f_396B)
	{
		return Global_40001.f_3980;
	}
	else if (iParam0 >= Global_40001.f_396A)
	{
		return Global_40001.f_397F;
	}
	else if (iParam0 >= Global_40001.f_3969)
	{
		return Global_40001.f_397E;
	}
	else if (iParam0 >= Global_40001.f_3968)
	{
		return Global_40001.f_397D;
	}
	else if (iParam0 >= Global_40001.f_3967)
	{
		return Global_40001.f_397C;
	}
	else if (iParam0 >= Global_40001.f_3966)
	{
		return Global_40001.f_397B;
	}
	else if (iParam0 >= Global_40001.f_3965)
	{
		return Global_40001.f_397A;
	}
	else if (iParam0 >= Global_40001.f_3964)
	{
		return Global_40001.f_3979;
	}
	else if (iParam0 >= Global_40001.f_3963)
	{
		return Global_40001.f_3978;
	}
	else if (iParam0 >= Global_40001.f_3962)
	{
		return Global_40001.f_3977;
	}
	else if (iParam0 >= Global_40001.f_3961)
	{
		return Global_40001.f_3976;
	}
	else if (iParam0 >= Global_40001.f_3960)
	{
		return Global_40001.f_3975;
	}
	else if (iParam0 >= Global_40001.f_395F)
	{
		return Global_40001.f_3974;
	}
	else if (iParam0 >= Global_40001.f_395E)
	{
		return Global_40001.f_3973;
	}
	else if (iParam0 >= Global_40001.f_395D)
	{
		return Global_40001.f_3972;
	}
	else if (iParam0 >= Global_40001.f_395C)
	{
		return Global_40001.f_3971;
	}
	return Global_40001.f_3970;
}

int func_291(int iParam0)//Position - 0xBF71
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_298(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_297(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_296(iVar3));
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_292(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= (func_292(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_296(unk_0x491B2241281A03B7(1, 6)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_292(int iParam0)//Position - 0xBFED
{
	int iVar0;
	
	if (func_295(iParam0))
	{
		iVar0 = func_293(func_294(iParam0));
		return func_28(iVar0, -1, 0);
	}
	return 0;
}

int func_293(int iParam0)//Position - 0xC019
{
	if (iParam0 == 0)
	{
		return 3642;
	}
	else if (iParam0 == 1)
	{
		return 3643;
	}
	else if (iParam0 == 2)
	{
		return 3644;
	}
	else if (iParam0 == 3)
	{
		return 3645;
	}
	else if (iParam0 == 4)
	{
		return 3646;
	}
	return 3642;
}

int func_294(int iParam0)//Position - 0xC06C
{
	int iVar0;
	
	if (func_295(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_111.f_5C[iVar0 /*3*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_295(int iParam0)//Position - 0xC0AE
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_296(int iParam0)//Position - 0xC0CD
{
	if (iParam0 == 1)
	{
		return Global_40001.f_3A37;
	}
	else if (iParam0 == 2)
	{
		return Global_40001.f_3A35;
	}
	else if (iParam0 == 3)
	{
		return Global_40001.f_3A39;
	}
	else if (iParam0 == 4)
	{
		return Global_40001.f_3A33;
	}
	else if (iParam0 == 5)
	{
		return Global_40001.f_3A31;
	}
	else if (iParam0 == 6)
	{
		return Global_40001.f_3A3B;
	}
	return 0;
}

int func_297(int iParam0, int iParam1)//Position - 0xC145
{
	int iVar0;
	
	if (func_295(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (Global_196F35[iVar0] == iParam1 && Global_196F3C[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_298(int iParam0)//Position - 0xC18B
{
	int iVar0;
	
	if (func_295(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_111.f_5C[iVar0 /*3*/] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_299()//Position - 0xC1CC
{
	int iVar0;
	
	iVar0 = Global_270D84[func_27()];
	iVar0++;
	Global_270D84[func_27()] = iVar0;
	func_100(3661, iVar0, -1, 1);
}

void func_300()//Position - 0xC1FD
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_270D81[func_27()];
	iVar1 = Global_270D8A[func_27()];
	iVar0++;
	iVar1++;
	Global_270D81[func_27()] = iVar0;
	Global_270D8A[func_27()] = iVar1;
	Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_111.f_72 = iVar1;
	func_100(3659, iVar0, -1, 1);
	func_100(3660, iVar1, -1, 1);
}

void func_301()//Position - 0xC269
{
	if (func_113())
	{
		Global_255D53.f_BFA.f_86 = 0;
		Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_198 = Global_255D53.f_BFA.f_86;
	}
}

void func_302()//Position - 0xC29B
{
	if (func_113())
	{
		if (Global_255D53.f_BFA.f_86 < 10)
		{
			Global_255D53.f_BFA.f_86++;
			Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_198 = Global_255D53.f_BFA.f_86;
		}
	}
}

void func_303()//Position - 0xC2E5
{
	if (func_113())
	{
		if (Global_255D53.f_BFA.f_86 > 0)
		{
			Global_255D53.f_BFA.f_86 = (Global_255D53.f_BFA.f_86 - 1);
			Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_198 = Global_255D53.f_BFA.f_86;
		}
	}
}

int func_304(int iParam0)//Position - 0xC32E
{
	return Global_18C80F[iParam0 /*558*/].f_B.f_1C;
}

int func_305(int iParam0)//Position - 0xC343
{
	switch (iParam0)
	{
		case 167:
		case 168:
		case 178:
		case 188:
			return 1;
		
		case 225:
		case 226:
		case 229:
		case 230:
		case 233:
		case 237:
			if (func_129(1) && !func_50(1))
			{
				if (func_306(func_131()))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_306(int iParam0)//Position - 0xC3B8
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_13, 26);
}

int func_307(int iParam0)//Position - 0xC3DE
{
	switch (iParam0)
	{
		case 142:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_2E77) * Global_40001.f_2E7C));
		
		case 157:
			return 0;
		
		case 159:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_2E45) * Global_40001.f_2E4A));
		
		case 151:
			return 0;
		
		case 148:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_2E60) * Global_40001.f_2E64));
		
		case 164:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_2E6D) * Global_40001.f_2E71));
		
		case 152:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_2E83) * Global_40001.f_2E88));
		
		case 153:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_2F25) * Global_40001.f_2F26));
		
		case 154:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_2F2B) * Global_40001.f_2F2C));
		
		case 155:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_2F29) * Global_40001.f_2F2A));
		
		case 160:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_2F23) * Global_40001.f_2F24));
		
		case 162:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_2F27) * Global_40001.f_2F28));
		
		case 163:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_2F21) * Global_40001.f_2F22));
		
		case 170:
			return 0;
		
		case 171:
			return Global_40001.f_385A;
		
		case 172:
			return Global_40001.f_386A;
		
		case 173:
			return Global_40001.f_3831;
		
		case 166:
			return 0;
		
		case 179:
			return Global_40001.f_44FB;
		
		case 180:
			return Global_40001.f_447F;
		
		case 182:
			return 0;
		
		case 183:
			return Global_40001.f_4487;
		
		case 185:
			return Global_40001.f_4490;
		
		case 186:
			return 0;
		
		case 189:
			return Global_40001.f_4553;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_40001.f_4564;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_40001.f_44CC;
		
		case 198:
			return 0;
		
		case 199:
			return Global_40001.f_4583;
		
		case 200:
			return 0;
		
		case 201:
			return Global_40001.f_4509;
		
		case 205:
			return Global_40001.f_4576;
		
		case 207:
			return 0;
		
		case 208:
			return Global_40001.f_44E8;
		
		case 209:
			return 0;
		
		case 210:
			return Global_40001.f_4571;
		
		case 211:
			return Global_40001.f_454D;
		
		case 214:
			return Global_40001.f_479F;
		
		case 215:
			return Global_40001.f_47A9;
		
		case 216:
			return Global_40001.f_47B3;
		
		case 217:
			return Global_40001.f_47BC;
		
		case 218:
			return Global_40001.f_47C5;
		
		case 219:
			return Global_40001.f_47D5;
		
		case 241:
			return Global_40001.f_5B80;
		
		case 242:
			return Global_40001.f_5B7C;
		
		case 248:
			return Global_40001.f_5B7F;
		
		case 244:
			return Global_40001.f_5B7D;
		
		case 239:
			return Global_40001.f_5B81;
		
		case 240:
			return Global_40001.f_5B82;
		
		default:
	}
	return 0;
}

int func_308(int iParam0, bool bParam1)//Position - 0xC783
{
	switch (iParam0)
	{
		case 142:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_2E78) * Global_40001.f_2E7D));
		
		case 157:
			return 0;
		
		case 159:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_2E46) * Global_40001.f_2E4B));
		
		case 151:
			return 0;
		
		case 148:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_2E61) * Global_40001.f_2E65));
		
		case 164:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_2E6E) * Global_40001.f_2E72));
		
		case 152:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_2E84) * Global_40001.f_2E89));
		
		case 153:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_2EA9) * Global_40001.f_2EAC));
		
		case 154:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_2ED7) * Global_40001.f_2EDA));
		
		case 155:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_2ECD) * Global_40001.f_2ED0));
		
		case 160:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_2EA0) * Global_40001.f_2EA3));
		
		case 162:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_2EB4) * Global_40001.f_2EB9));
		
		case 163:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_2E91) * Global_40001.f_2E94));
		
		case 170:
			return Global_40001.f_3820;
		
		case 171:
			return Global_40001.f_385B;
		
		case 172:
			return Global_40001.f_386B;
		
		case 173:
			return Global_40001.f_3832;
		
		case 166:
			return 0;
		
		case 167:
			return Global_40001.f_404F;
		
		case 168:
			return Global_40001.f_404E;
		
		case 179:
			return Global_40001.f_44FC;
		
		case 180:
			return Global_40001.f_4480;
		
		case 182:
			return 0;
		
		case 183:
			return Global_40001.f_4488;
		
		case 185:
			return Global_40001.f_4491;
		
		case 186:
			return 0;
		
		case 189:
			return Global_40001.f_4554;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_40001.f_4565;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_40001.f_44CD;
		
		case 198:
			return 0;
		
		case 199:
			return Global_40001.f_4584;
		
		case 200:
			return 0;
		
		case 201:
			return Global_40001.f_450A;
		
		case 205:
			return Global_40001.f_4577;
		
		case 207:
			return 0;
		
		case 208:
			return Global_40001.f_44E9;
		
		case 209:
			return 0;
		
		case 210:
			return Global_40001.f_4572;
		
		case 211:
			return Global_40001.f_454E;
		
		case 214:
			return Global_40001.f_47A0;
		
		case 215:
			return Global_40001.f_47AA;
		
		case 216:
			return Global_40001.f_47B4;
		
		case 217:
			return Global_40001.f_47BD;
		
		case 218:
			return Global_40001.f_47C6;
		
		case 219:
			return Global_40001.f_47D6;
		
		case 178:
			if (func_113())
			{
				return Global_40001.f_4725;
			}
			else if (bParam1)
			{
				return Global_40001.f_4726;
			}
			break;
		
		case 188:
			if (func_113())
			{
				return Global_40001.f_4779;
			}
			else if (bParam1)
			{
				return Global_40001.f_477A;
			}
			break;
		
		case 225:
			if (func_113() && !func_127())
			{
				if (func_306(unk_0xB5CEFD608600A09F()))
				{
					return Global_40001.f_4FC2;
				}
				else
				{
					return Global_40001.f_4FC3;
				}
			}
			else if (func_127())
			{
				return Global_40001.f_4FC4;
			}
			break;
		
		case 226:
			if (func_113() && !func_127())
			{
				if (func_306(unk_0xB5CEFD608600A09F()))
				{
					return Global_40001.f_4FAE;
				}
				else
				{
					return Global_40001.f_4FAF;
				}
			}
			else if (func_127())
			{
				return Global_40001.f_4FB0;
			}
			break;
		
		case 227:
			if (func_113() && !func_127())
			{
				if (func_306(unk_0xB5CEFD608600A09F()))
				{
					return Global_40001.f_4FBA;
				}
				else
				{
					return Global_40001.f_4FBB;
				}
			}
			else if (func_127())
			{
				return Global_40001.f_4FBC;
			}
			break;
		
		case 229:
			if (func_113() && !func_127())
			{
				if (func_306(unk_0xB5CEFD608600A09F()))
				{
					return Global_40001.f_5446;
				}
				else
				{
					return Global_40001.f_5447;
				}
			}
			else if (func_127())
			{
				return Global_40001.f_5448;
			}
			break;
		
		case 230:
			if (func_113() && !func_127())
			{
				if (func_306(unk_0xB5CEFD608600A09F()))
				{
					return Global_40001.f_54A6;
				}
				else
				{
					return Global_40001.f_54A7;
				}
			}
			else if (func_127())
			{
				return Global_40001.f_54A8;
			}
			break;
		
		case 233:
			if (func_113() && !func_127())
			{
				if (func_306(unk_0xB5CEFD608600A09F()))
				{
					return Global_40001.f_5681;
				}
				else
				{
					return Global_40001.f_5682;
				}
			}
			else if (func_127())
			{
				return Global_40001.f_5680;
			}
			break;
		
		case 241:
			return Global_40001.f_5B87;
		
		case 242:
			return Global_40001.f_5B83;
		
		case 244:
			return Global_40001.f_5B84;
		
		case 248:
			return Global_40001.f_5B86;
		
		case 239:
			return Global_40001.f_5B88;
		
		case 240:
			return Global_40001.f_5B89;
		
		case 237:
			if (func_113() && !func_127())
			{
				if (func_306(unk_0xB5CEFD608600A09F()))
				{
					return Global_40001.f_5AE9;
				}
				else
				{
					return Global_40001.f_5AEA;
				}
			}
			else if (func_127())
			{
				return Global_40001.f_5AEB;
			}
			break;
		
		case 238:
			if (func_113() && !func_127())
			{
				if (func_306(unk_0xB5CEFD608600A09F()))
				{
					return Global_40001.f_5B58;
				}
				else
				{
					return Global_40001.f_5B59;
				}
			}
			else if (func_127())
			{
				return Global_40001.f_5B5A;
			}
			break;
		
		case 249:
			if (func_113() && !func_127())
			{
				if (func_306(unk_0xB5CEFD608600A09F()))
				{
					return Global_40001.f_5B68;
				}
				else
				{
					return Global_40001.f_5B69;
				}
			}
			else if (func_127())
			{
				return Global_40001.f_5B6A;
			}
			break;
	}
	return 0;
}

void func_309(int iParam0, var uParam1, var uParam2)//Position - 0xCE76
{
	int iVar0;
	
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_310(iParam0))
	{
		if (!func_113())
		{
			*uParam1 = 1f;
			*uParam2 = Global_40001.f_2E0D;
		}
		else
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
		return;
	}
	if (func_229(unk_0xB5CEFD608600A09F(), 1))
	{
		if (func_47(iParam0))
		{
			*uParam1 = (Global_40001.f_4468 / 100f);
			*uParam2 = (Global_40001.f_4468 / 100f);
		}
		else if (iParam0 == 242)
		{
			*uParam1 = Global_40001.f_5B8A;
			*uParam2 = Global_40001.f_5B8A;
		}
		else if (iParam0 == 244)
		{
			*uParam1 = Global_40001.f_5B8B;
			*uParam2 = Global_40001.f_5B8B;
		}
		else if (iParam0 == 248)
		{
			*uParam1 = Global_40001.f_5B8D;
			*uParam2 = Global_40001.f_5B8D;
		}
		else if (iParam0 == 241)
		{
			*uParam1 = Global_40001.f_5B8E;
			*uParam2 = Global_40001.f_5B8E;
		}
		else if (iParam0 == 239)
		{
			*uParam1 = Global_40001.f_5B8F;
			*uParam2 = Global_40001.f_5B8F;
		}
		else if (iParam0 == 240)
		{
			*uParam1 = Global_40001.f_5B90;
			*uParam2 = Global_40001.f_5B90;
		}
		else
		{
			*uParam1 = Global_40001.f_2E0A;
			*uParam2 = Global_40001.f_2E09;
		}
	}
	else if (func_47(iParam0))
	{
		*uParam1 = (Global_40001.f_4469 / 100f);
		*uParam2 = (Global_40001.f_4469 / 100f);
	}
	else if (iParam0 == 242)
	{
		*uParam1 = Global_40001.f_5B91;
		*uParam2 = Global_40001.f_5B91;
	}
	else if (iParam0 == 244)
	{
		*uParam1 = Global_40001.f_5B92;
		*uParam2 = Global_40001.f_5B92;
	}
	else if (iParam0 == 248)
	{
		*uParam1 = Global_40001.f_5B94;
		*uParam2 = Global_40001.f_5B94;
	}
	else if (iParam0 == 241)
	{
		*uParam1 = Global_40001.f_5B95;
		*uParam2 = Global_40001.f_5B95;
	}
	else if (iParam0 == 239)
	{
		*uParam1 = Global_40001.f_5B96;
		*uParam2 = Global_40001.f_5B96;
	}
	else if (iParam0 == 240)
	{
		*uParam1 = Global_40001.f_5B97;
		*uParam2 = Global_40001.f_5B97;
	}
	else
	{
		*uParam1 = Global_40001.f_2E0C;
		*uParam2 = Global_40001.f_2E0B;
	}
	iVar0 = func_29();
	if (iVar0 != func_11())
	{
		if (func_637(unk_0xB5CEFD608600A09F(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

int func_310(int iParam0)//Position - 0xD0D9
{
	switch (iParam0)
	{
		case 160:
		case 162:
		case 153:
		case 154:
		case 155:
		case 163:
		case 171:
		case 172:
			return 1;
		
		default:
	}
	return 0;
}

void func_311(int iParam0, int iParam1)//Position - 0xD11D
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x3C03CFD5DD1E2D97(unk_0xD29A8DBEF709F9D5(iParam0), "MPBitset"))
	{
		iVar0 = unk_0x67CFC62D543B19EF(unk_0xD29A8DBEF709F9D5(iParam0), "MPBitset");
	}
	unk_0x7CB6FD92BE491AD9(&iVar0, iParam1);
	unk_0x3F9FE9BB735B1604(unk_0xD29A8DBEF709F9D5(iParam0), "MPBitset", iVar0);
}

void func_312()//Position - 0xD162
{
	if (unk_0xFA30DFD0084E92FE(vLocal_133[unk_0x6BAA0516CC970D99() /*3*/].f_2, 7))
	{
		if (unk_0xFA30DFD0084E92FE(Local_132.f_2, 0))
		{
			if (func_637(unk_0xB5CEFD608600A09F(), func_16(), 1))
			{
				func_313(1, 7, 0, 0, -1, -1, -1, -1, -1, 0);
			}
			else
			{
				func_313(0, 7, 0, 0, -1, -1, -1, -1, -1, 0);
			}
		}
		else if (unk_0xFA30DFD0084E92FE(Local_132.f_2, 1))
		{
			func_313(0, 8, 0, 0, -1, -1, -1, -1, -1, 0);
		}
		else if (unk_0xFA30DFD0084E92FE(Local_132.f_2, 2))
		{
			func_313(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
		}
		else if (unk_0xFA30DFD0084E92FE(Local_132.f_2, 3))
		{
			if (!func_646())
			{
				if (unk_0xB5CEFD608600A09F() == func_6())
				{
					if (func_637(unk_0xB5CEFD608600A09F(), func_16(), 0))
					{
						func_313(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
					}
					else
					{
						func_313(1, 1, 0, 0, -1, -1, -1, -1, -1, 0);
					}
				}
				else
				{
					func_313(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
				}
			}
			else
			{
				func_313(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
			}
		}
		else if (unk_0xFA30DFD0084E92FE(Local_132.f_2, 4))
		{
			func_313(0, 7, 0, 0, -1, -1, -1, -1, -1, 0);
		}
		else
		{
			func_313(0, 0, 0, 0, -1, -1, -1, -1, -1, 0);
		}
		unk_0x7CB6FD92BE491AD9(&(vLocal_133[unk_0x6BAA0516CC970D99() /*3*/].f_2), 7);
	}
}

void func_313(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)//Position - 0xD2A2
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0x7AF0088ABFA713B6())
	{
		return;
	}
	if (bParam9)
	{
		iVar0 = func_421(unk_0xB5CEFD608600A09F());
		Global_196A5F.f_4 = func_420();
		Global_196A5F.f_5 = func_419();
		if (func_66(unk_0xB5CEFD608600A09F()) || func_67(unk_0xB5CEFD608600A09F()))
		{
			Global_196A5F.f_6 = 1;
		}
		else
		{
			Global_196A5F.f_6 = 0;
		}
		Global_196A5F.f_1 = func_415(bParam9);
		Global_196A5F.f_8 = unk_0xB99C193A32DE341D();
		Global_196A5F.f_9 = func_414(bParam0);
		Global_196A5F.f_A = iParam1;
		Global_196A5F.f_11 = Global_196A5F.f_2;
		Global_196A5F.f_12 = Global_196A5F.f_2;
		Global_196A5F.f_13 = func_413();
		Global_196A5F.f_15 = (Global_196A5F.f_8 - Global_196A5F.f_7);
		if (func_229(unk_0xB5CEFD608600A09F(), 1))
		{
			Global_196A5F.f_17 = func_414(func_50(1));
		}
		Global_196A5F.f_18 = func_412(unk_0xB5CEFD608600A09F());
		Global_196A5F.f_1C = func_411(unk_0xB5CEFD608600A09F());
		if (Global_196A5F.f_18 > 2)
		{
			Global_196A5F.f_18 = 2;
		}
		func_409(iVar0);
	}
	else
	{
		iVar0 = func_44(unk_0xB5CEFD608600A09F());
	}
	if (func_47(iVar0))
	{
		Global_19695A.f_2 = func_420();
		Global_19695A.f_3 = func_419();
		Global_19695A.f_32 = iParam4;
		Global_19695A.f_33 = iParam5;
		Global_19695A.f_A = unk_0xB99C193A32DE341D();
		Global_19695A.f_14 = (Global_19695A.f_A - Global_19695A.f_9);
		Global_19695A.f_C = iParam1;
		Global_19695A.f_13 = func_402(iVar0, bParam0, func_408(bParam3));
		if (bParam0)
		{
			Global_19695A.f_B = 1;
		}
		else
		{
			Global_19695A.f_B = 0;
		}
		if ((func_65(unk_0xB5CEFD608600A09F()) || func_64(unk_0xB5CEFD608600A09F())) || func_76(unk_0xB5CEFD608600A09F()))
		{
			Global_19695A.f_8 = 1;
		}
		else
		{
			Global_19695A.f_8 = 0;
		}
		if (iParam2 != 0)
		{
			Global_19695A.f_2B = 0;
			Global_19695A.f_2D = func_401(func_131(), iParam2);
			Global_19695A.f_2F = iParam7;
			Global_19695A.f_2E = iParam6;
			Global_19695A.f_34 = func_400(func_131(), iParam2);
		}
		func_398(iVar0);
	}
	else if (func_55(iVar0))
	{
		Global_196990.f_2 = func_420();
		Global_196990.f_3 = func_419();
		Global_196990.f_A = unk_0xB99C193A32DE341D();
		Global_196990.f_13 = (Global_196990.f_A - Global_196990.f_9);
		Global_196990.f_C = iParam1;
		if (bParam0)
		{
			Global_196990.f_B = 1;
		}
		else
		{
			Global_196990.f_B = 0;
		}
		if ((func_65(unk_0xB5CEFD608600A09F()) || func_64(unk_0xB5CEFD608600A09F())) || func_76(unk_0xB5CEFD608600A09F()))
		{
			Global_196990.f_8 = 1;
		}
		else
		{
			Global_196990.f_8 = 0;
		}
		func_396(iVar0);
	}
	else if (func_95(iVar0))
	{
		Global_1969CF.f_2 = func_420();
		Global_1969CF.f_3 = func_419();
		Global_1969CF.f_9 = unk_0xB99C193A32DE341D();
		Global_1969CF.f_12 = (Global_1969CF.f_9 - Global_1969CF.f_8);
		Global_1969CF.f_B = iParam1;
		Global_1969CF.f_7 = func_413();
		Global_1969CF.f_2A = func_394(func_27(), 5);
		iVar1 = unk_0xB5CEFD608600A09F();
		iVar2 = func_112(iVar1);
		Global_1969CF.f_1C = iVar2;
		Global_1969CF.f_1D = func_414((func_393(iVar1) || func_392(iVar1)));
		Global_1969CF.f_1E = func_414(func_391(iVar1));
		Global_1969CF.f_20 = func_414(func_390(iVar1));
		Global_1969CF.f_21 = func_414(func_389(iVar1));
		Global_1969CF.f_22 = func_414(func_388(iVar1));
		Global_1969CF.f_23 = func_414(func_387(0, iVar1) == 1);
		Global_1969CF.f_24 = func_414(func_386(iVar1));
		Global_1969CF.f_25 = func_414(func_385(iVar1));
		Global_1969CF.f_26 = func_414(func_384(iVar1));
		Global_1969CF.f_27 = func_414(func_279(iVar1, iVar2, 0));
		Global_1969CF.f_28 = func_414(func_279(iVar1, iVar2, 2));
		Global_1969CF.f_29 = func_414(func_279(iVar1, iVar2, 1));
		if (func_383(iVar1))
		{
			Global_1969CF.f_1F = 2;
		}
		else if (func_382(iVar1))
		{
			Global_1969CF.f_1F = 1;
		}
		if (bParam0)
		{
			Global_1969CF.f_A = 1;
		}
		else
		{
			Global_1969CF.f_A = 0;
		}
		if ((func_65(unk_0xB5CEFD608600A09F()) || func_64(unk_0xB5CEFD608600A09F())) || func_76(unk_0xB5CEFD608600A09F()))
		{
			Global_1969CF.f_6 = 1;
		}
		else
		{
			Global_1969CF.f_6 = 0;
		}
		Global_1969CF.f_15 = -2;
		Global_1969CF.f_16 = -2;
		func_380(iVar0);
	}
	else if (func_94(iVar0))
	{
		Global_1969FB.f_2 = func_420();
		Global_1969FB.f_3 = func_419();
		if ((func_65(unk_0xB5CEFD608600A09F()) || func_64(unk_0xB5CEFD608600A09F())) || func_76(unk_0xB5CEFD608600A09F()))
		{
			Global_1969FB.f_6 = 1;
		}
		else
		{
			Global_1969FB.f_6 = 0;
		}
		Global_1969FB.f_9 = unk_0xB99C193A32DE341D();
		Global_1969FB.f_A = func_414(bParam0);
		Global_1969FB.f_B = iParam1;
		Global_1969FB.f_11 = func_379(func_29());
		Global_1969FB.f_12 = (Global_1969FB.f_9 - Global_1969FB.f_8);
		Global_1969FB.f_14 = iParam8;
		Global_1969FB.f_15 = -2;
		Global_1969FB.f_16 = -2;
		Global_1969FB.f_1B = func_378();
		Global_1969FB.f_1D = func_28(6103, -1, 0);
		Global_1969FB.f_1E = func_28(6099, -1, 0);
		Global_1969FB.f_1F = func_28(6100, -1, 0);
		Global_1969FB.f_20 = func_28(6102, -1, 0);
		Global_1969FB.f_21 = func_28(6101, -1, 0);
		Global_1969FB.f_22 = func_28(6104, -1, 0);
		Global_1969FB.f_24 = func_414(func_50(1));
		Global_1969FB.f_25 = func_376();
		func_355();
		func_353(iVar0);
	}
	else if (func_93(iVar0))
	{
		Global_196A31.f_2 = func_420();
		Global_196A31.f_3 = func_419();
		if ((func_65(unk_0xB5CEFD608600A09F()) || func_64(unk_0xB5CEFD608600A09F())) || func_76(unk_0xB5CEFD608600A09F()))
		{
			Global_196A31.f_6 = 1;
		}
		else
		{
			Global_196A31.f_6 = 0;
		}
		Global_196A31.f_9 = unk_0xB99C193A32DE341D();
		Global_196A31.f_A = func_414(bParam0);
		Global_196A31.f_B = iParam1;
		Global_196A31.f_12 = (Global_196A31.f_9 - Global_196A31.f_8);
		Global_196A31.f_14 = iParam8;
		Global_196A31.f_17 = Global_C0073;
		Global_196A31.f_24 = Global_C0073.f_1;
		Global_196A31.f_18 = func_28(6153, -1, 0);
		Global_196A31.f_19 = func_28(6158, -1, 0);
		Global_196A31.f_1A = func_28(6159, -1, 0);
		Global_196A31.f_1B = func_414((((func_352() || func_351()) || func_350()) || func_349(unk_0xB5CEFD608600A09F())));
		Global_196A31.f_1C = func_28(6160, -1, 0);
		Global_196A31.f_1D = func_414(func_348());
		Global_196A31.f_23 = -1;
		Global_196A31.f_26 = -1;
		Global_196A31.f_27 = Global_196A31.f_4;
		Global_196A31.f_28 = Global_196A31.f_5;
		Global_196A31.f_29 = func_420();
		Global_196A31.f_2A = func_414(func_50(1));
		Global_196A31.f_2C = Global_196A31.f_12;
		func_346(iVar0);
	}
	else if (func_88(iVar0))
	{
		if (Global_196AB6.f_2 == -1)
		{
			Global_196AB6.f_2 = func_420();
		}
		if (Global_196AB6.f_3 == -1)
		{
			Global_196AB6.f_3 = func_419();
		}
		if ((func_65(unk_0xB5CEFD608600A09F()) || func_64(unk_0xB5CEFD608600A09F())) || func_76(unk_0xB5CEFD608600A09F()))
		{
			Global_196AB6.f_6 = 1;
		}
		else
		{
			Global_196AB6.f_6 = 0;
		}
		Global_196AB6.f_1 = func_415(0);
		Global_196AB6.f_7 = func_413();
		Global_196AB6.f_9 = unk_0xB99C193A32DE341D();
		Global_196AB6.f_A = func_414(bParam0);
		Global_196AB6.f_B = iParam1;
		if (func_131() != -1)
		{
			Global_196AB6.f_11 = func_345(func_131());
		}
		Global_196AB6.f_12 = (Global_196AB6.f_9 - Global_196AB6.f_8);
		Global_196AB6.f_13 = Global_267214.f_181A;
		Global_196AB6.f_1C = func_411(unk_0xB5CEFD608600A09F());
		Global_196AB6.f_1D = func_414(func_344(unk_0xB5CEFD608600A09F()));
		Global_196AB6.f_1E = func_414(func_343(unk_0xB5CEFD608600A09F()));
		Global_196AB6.f_1F = func_342(unk_0xB5CEFD608600A09F());
		if (func_229(unk_0xB5CEFD608600A09F(), 1))
		{
			Global_196AB6.f_21 = func_414(func_50(1));
		}
		if (Global_196AB6.f_22 > 2)
		{
			Global_196AB6.f_22 = 2;
		}
		func_340(iVar0);
	}
	else if (func_92(iVar0))
	{
		Global_196A81.f_2 = func_420();
		Global_196A81.f_3 = func_419();
		if ((func_65(unk_0xB5CEFD608600A09F()) || func_64(unk_0xB5CEFD608600A09F())) || func_76(unk_0xB5CEFD608600A09F()))
		{
			Global_196A81.f_6 = 1;
		}
		else
		{
			Global_196A81.f_6 = 0;
		}
		Global_196A81.f_1 = func_415(0);
		Global_196A81.f_9 = unk_0xB99C193A32DE341D();
		Global_196A81.f_A = func_414(bParam0);
		Global_196A81.f_B = iParam1;
		Global_196A81.f_12 = (Global_196A81.f_9 - Global_196A81.f_8);
		Global_196A81.f_1C = func_411(unk_0xB5CEFD608600A09F());
		if (Global_196A81.f_1C)
		{
			Global_196A81.f_1D = func_339(unk_0xB5CEFD608600A09F());
		}
		else
		{
			Global_196A81.f_1D = 0;
		}
		Global_196A81.f_1E = func_323(unk_0xB5CEFD608600A09F(), 4, -1);
		Global_196A81.f_1F = func_342(unk_0xB5CEFD608600A09F());
		Global_196A81.f_20 = func_414(func_322(unk_0xB5CEFD608600A09F()));
		Global_196A81.f_21 = func_414(func_321(unk_0xB5CEFD608600A09F()));
		Global_196A81.f_22 = func_414(func_320(unk_0xB5CEFD608600A09F()));
		Global_196A81.f_23 = func_414(func_319(unk_0xB5CEFD608600A09F()));
		Global_196A81.f_24 = func_318(unk_0xB5CEFD608600A09F());
		Global_196A81.f_25 = func_317(unk_0xB5CEFD608600A09F());
		Global_196A81.f_27 = func_316(unk_0xB5CEFD608600A09F());
		if (func_229(unk_0xB5CEFD608600A09F(), 1))
		{
			Global_196A81.f_29 = func_414(func_50(1));
		}
		if (Global_196A81.f_2A > 2)
		{
			Global_196A81.f_2A = 2;
		}
		func_314(iVar0);
	}
	else
	{
		Global_196948.f_6 = unk_0xB99C193A32DE341D();
		if (bParam0)
		{
			Global_196948.f_7 = 1;
		}
		else
		{
			Global_196948.f_7 = 0;
		}
		Global_196948.f_8 = iParam1;
		if (Global_196948.f_4 == 0)
		{
			if ((func_65(unk_0xB5CEFD608600A09F()) || func_64(unk_0xB5CEFD608600A09F())) || func_76(unk_0xB5CEFD608600A09F()))
			{
				Global_196948.f_4 = 1;
			}
		}
	}
}

void func_314(int iParam0)//Position - 0xDCFA
{
	unk_0x2D7A9B577E72385E(&Global_196A81);
	func_315();
}

void func_315()//Position - 0xDD0E
{
	struct<53> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_A = -1;
	Var0.f_B = -1;
	Var0.f_C = -1;
	Var0.f_D = -1;
	Var0.f_E = -1;
	Var0.f_F = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_1A = -1;
	Var0.f_1B = -1;
	Var0.f_1D = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_2A = -1;
	Var0.f_2B = -1;
	Var0.f_2C = -1;
	Var0.f_2D = -1;
	Var0.f_2E = -1;
	Var0.f_2F = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Global_196A81 = { Var0 };
}

int func_316(int iParam0)//Position - 0xDE37
{
	if (iParam0 != func_11())
	{
		return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_13F, 12);
	}
	return 0;
}

int func_317(int iParam0)//Position - 0xDE61
{
	if (iParam0 != func_11())
	{
		return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_13F, 10);
	}
	return 0;
}

int func_318(int iParam0)//Position - 0xDE8B
{
	if (iParam0 != func_11())
	{
		return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_13F, 11);
	}
	return 0;
}

bool func_319(int iParam0)//Position - 0xDEB5
{
	if (iParam0 == func_11())
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_10A.f_4, 4);
}

bool func_320(int iParam0)//Position - 0xDEE0
{
	if (iParam0 == func_11())
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_10A.f_4, 3);
}

bool func_321(int iParam0)//Position - 0xDF0B
{
	if (iParam0 == func_11())
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_10A.f_4, 2);
}

bool func_322(int iParam0)//Position - 0xDF36
{
	if (iParam0 == func_11())
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_10A.f_4, 1);
}

int func_323(int iParam0, int iParam1, int iParam2)//Position - 0xDF61
{
	if (iParam0 == func_11() || !func_338(iParam1))
	{
		return 0;
	}
	switch (iParam1)
	{
		case 0:
			return func_333(iParam0, iParam2);
		
		case 1:
			return func_331(iParam0, iParam2);
		
		case 3:
			return func_330(iParam0);
		
		case 2:
			return func_325(iParam0, iParam2);
		
		case 4:
			return func_324(iParam0);
		
		default:
	}
	return 0;
}

bool func_324(int iParam0)//Position - 0xDFDD
{
	if (iParam0 == func_11())
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_10A.f_4, 6);
}

int func_325(int iParam0, int iParam1)//Position - 0xE008
{
	switch (iParam1)
	{
		case 10:
			return func_329(iParam0);
		
		case 11:
			return func_328(iParam0);
		
		case 12:
			return func_327(iParam0);
		
		case 13:
			return func_326(iParam0);
		
		default:
	}
	return 0;
}

bool func_326(int iParam0)//Position - 0xE054
{
	if (iParam0 == func_11())
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_10A.f_4, 15);
}

bool func_327(int iParam0)//Position - 0xE080
{
	if (iParam0 == func_11())
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_10A.f_4, 14);
}

bool func_328(int iParam0)//Position - 0xE0AC
{
	if (iParam0 == func_11())
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_10A.f_4, 13);
}

bool func_329(int iParam0)//Position - 0xE0D8
{
	if (iParam0 == func_11())
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_10A.f_4, 12);
}

bool func_330(int iParam0)//Position - 0xE104
{
	if (iParam0 == func_11())
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_10A.f_4, 5);
}

int func_331(int iParam0, int iParam1)//Position - 0xE12F
{
	switch (iParam1)
	{
		case 5:
			return func_332(iParam0);
		
		case 6:
			return func_322(iParam0);
		
		case 7:
			return func_321(iParam0);
		
		case 8:
			return func_320(iParam0);
		
		case 9:
			return func_319(iParam0);
		
		default:
	}
	return 0;
}

bool func_332(int iParam0)//Position - 0xE18A
{
	if (iParam0 == func_11())
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_10A.f_4, 0);
}

int func_333(int iParam0, int iParam1)//Position - 0xE1B5
{
	switch (iParam1)
	{
		case 0:
			return func_337(iParam0);
		
		case 1:
			return func_336(iParam0);
		
		case 2:
			return func_335(iParam0);
		
		case 3:
			return func_334(iParam0);
		
		case 4:
			return func_342(iParam0);
		
		default:
	}
	return 0;
}

bool func_334(int iParam0)//Position - 0xE210
{
	if (iParam0 == func_11())
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_10A.f_4, 10);
}

bool func_335(int iParam0)//Position - 0xE23C
{
	if (iParam0 == func_11())
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_10A.f_4, 9);
}

bool func_336(int iParam0)//Position - 0xE268
{
	if (iParam0 == func_11())
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_10A.f_4, 8);
}

bool func_337(int iParam0)//Position - 0xE294
{
	if (iParam0 == func_11())
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_10A.f_4, 7);
}

bool func_338(int iParam0)//Position - 0xE2BF
{
	return (iParam0 != -1 && iParam0 != 6);
}

int func_339(int iParam0)//Position - 0xE2D4
{
	int iVar0;
	
	if (iParam0 == func_11())
	{
		return 0;
	}
	iVar0 = 1;
	if (func_323(iParam0, 2, 13))
	{
		iVar0 = 5;
	}
	else if (func_323(iParam0, 2, 12))
	{
		iVar0 = 4;
	}
	else if (func_323(iParam0, 2, 11))
	{
		iVar0 = 3;
	}
	else if (func_323(iParam0, 2, 10))
	{
		iVar0 = 2;
	}
	return iVar0;
}

void func_340(int iParam0)//Position - 0xE333
{
	unk_0x830C3A44EB3F2CF9(&Global_196AB6);
	func_341();
}

void func_341()//Position - 0xE347
{
	struct<39> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_A = -1;
	Var0.f_B = -1;
	Var0.f_C = -1;
	Var0.f_D = -1;
	Var0.f_E = -1;
	Var0.f_F = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_1A = -1;
	Var0.f_1B = -1;
	Var0.f_1D = -1;
	Var0.f_1E = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Global_196AB6 = { Var0 };
}

bool func_342(int iParam0)//Position - 0xE43A
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_146, 31);
}

bool func_343(int iParam0)//Position - 0xE457
{
	if (iParam0 == func_11())
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_133.f_1, 0);
}

bool func_344(int iParam0)//Position - 0xE482
{
	if (iParam0 == func_11())
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_133.f_1, 19);
}

var func_345(int iParam0)//Position - 0xE4AE
{
	return Global_18402B[iParam0 /*770*/].f_D3.f_6;
}

void func_346(int iParam0)//Position - 0xE4C3
{
	unk_0x38096CFACAFA5597(&Global_196A31);
	func_347();
}

void func_347()//Position - 0xE4D7
{
	struct<46> Var0;
	
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_A = -1;
	Var0.f_B = -1;
	Var0.f_C = -1;
	Var0.f_D = -1;
	Var0.f_E = -1;
	Var0.f_F = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_1A = -1;
	Var0.f_1B = -1;
	Var0.f_1C = -1;
	Var0.f_1D = -1;
	Var0.f_1E = -1;
	Var0.f_1F = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_2A = -1;
	Var0.f_2B = -1;
	Var0.f_2C = -1;
	Var0.f_2D = -1;
	Global_196A31 = { Var0 };
	Global_196A31.f_10 = 0;
}

bool func_348()//Position - 0xE5E5
{
	return func_28(6152, -1, 0) != 0;
}

int func_349(int iParam0)//Position - 0xE5F8
{
	if (iParam0 != func_11())
	{
		return Global_18402B[iParam0 /*770*/].f_111.f_100 != 0;
	}
	return 0;
}

bool func_350()//Position - 0xE61E
{
	return func_28(6160, -1, 0) == 3;
}

bool func_351()//Position - 0xE631
{
	return func_28(6160, -1, 0) == 2;
}

bool func_352()//Position - 0xE644
{
	return func_28(6160, -1, 0) == 1;
}

void func_353(int iParam0)//Position - 0xE657
{
	unk_0xF0764752B63D769A(&Global_1969FB);
	func_354();
}

void func_354()//Position - 0xE66B
{
	struct<54> Var0;
	
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_A = -1;
	Var0.f_B = -1;
	Var0.f_C = -1;
	Var0.f_D = -1;
	Var0.f_E = -1;
	Var0.f_F = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_1A = -1;
	Var0.f_1B = -1;
	Var0.f_1C = -1;
	Var0.f_1D = -1;
	Var0.f_1E = -1;
	Var0.f_1F = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_2A = -1;
	Var0.f_2B = -1;
	Var0.f_2C = -1;
	Var0.f_2D = -1;
	Var0.f_2E = -1;
	Var0.f_2F = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Global_1969FB = { Var0 };
	Global_1969FB.f_17 = 0;
	Global_1969FB.f_18 = 0;
	Global_1969FB.f_10 = 0;
}

void func_355()//Position - 0xE7B7
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar2 = (iVar0 + func_366(12));
		func_365(iVar2, &iVar1, 1);
		if (iVar1 >= 0)
		{
			if (Global_1425AC[iVar1 /*141*/].f_42 != 0 && func_357(Global_1425AC[iVar1 /*141*/].f_42, 1))
			{
				if (Global_267214.f_375 != iVar1)
				{
					if (func_356(Global_1425AC[iVar1 /*141*/].f_42))
					{
						if (Global_1425AC[iVar1 /*141*/].f_42 != 0)
						{
							iVar3 = Global_1425AC[iVar1 /*141*/].f_42;
						}
						switch (iVar0)
						{
							case 0:
								Global_1969FB.f_26 = iVar3;
								break;
							
							case 1:
								Global_1969FB.f_27 = iVar3;
								break;
							
							case 2:
								Global_1969FB.f_28 = iVar3;
								break;
							
							case 3:
								Global_1969FB.f_29 = iVar3;
								break;
							
							case 4:
								Global_1969FB.f_2A = iVar3;
								break;
							
							case 5:
								Global_1969FB.f_2B = iVar3;
								break;
							
							case 6:
								Global_1969FB.f_2C = iVar3;
								break;
							
							case 7:
								Global_1969FB.f_2D = iVar3;
								break;
							
							case 8:
								Global_1969FB.f_2E = iVar3;
								break;
							
							case 9:
								Global_1969FB.f_2F = iVar3;
								break;
							}
						}
					}
				}
		}
		iVar0++;
	}
}

int func_356(int iParam0)//Position - 0xE8FD
{
	switch (iParam0)
	{
		case joaat("buzzard"):
		case joaat("savage"):
		case joaat("valkyrie"):
		case joaat("hydra"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case -1984275979:
		case -42959138:
		case joaat("volatus"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("frogger"):
		case joaat("maverick"):
		case joaat("annihilator"):
		case -749299473:
		case -975345305:
		case -1700874274:
		case -392675425:
		case -1763555241:
		case 1043222410:
		case joaat("lazer"):
		case -1386191424:
		case 1565978651:
		case 1036591958:
		case -1007528109:
		case -32878452:
		case -1523619738:
		case joaat("nimbus"):
		case joaat("luxor2"):
		case joaat("velum2"):
		case joaat("dodo"):
		case joaat("miljet"):
		case joaat("besra"):
		case joaat("vestra"):
		case joaat("duster"):
		case joaat("shamal"):
		case joaat("cuban800"):
		case joaat("luxor"):
		case joaat("stunt"):
		case joaat("mammatus"):
		case joaat("titan"):
		case joaat("velum"):
		case 1181327175:
		case 447548909:
		case -726768679:
			return 1;
		
		default:
	}
	if (iParam0 == 1692272545)
	{
		return 1;
	}
	return 0;
}

int func_357(int iParam0, bool bParam1)//Position - 0xEA39
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x6067F058A4B0729F(iParam0))
	{
		return 0;
	}
	if ((((((iParam0 == joaat("dominator2") && !unk_0x7AF0088ABFA713B6()) || (iParam0 == joaat("buffalo3") && !unk_0x7AF0088ABFA713B6())) || (iParam0 == joaat("gauntlet2") && !unk_0x7AF0088ABFA713B6())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0x7AF0088ABFA713B6())) || iParam0 == joaat("blista3"))
	{
		if (!func_364())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0xDF84CF7530FA6525())
		{
			if (unk_0x62A638D88F7B7D88(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0xD90F58A58682ED2F(Var1))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_363() && !func_362()) && !func_361()) && !func_360()) && !func_364())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xF49912B78E2591B6() || unk_0x8ACB0C3FACC09467()) || unk_0xF7E138CFA19B55E7())
		{
		}
		else if (!func_361())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_359(iParam0))
		{
			return 0;
		}
	}
	if (!func_358(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_358(int iParam0)//Position - 0xEBC7
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_128())
	{
		return 1;
	}
	unk_0xC4F4FCDFF2D3ABE9(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!unk_0xD541643C038E7321(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_359(int iParam0)//Position - 0xEC93
{
	int iVar0;
	int iVar1;
	
	if (Global_262135)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0xB99C193A32DE341D();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_40001.f_1766 && !Global_40001.f_300B) && iVar1 < Global_40001.f_300C)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_40001.f_351D && iVar1 < Global_40001.f_3529)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_40001.f_3519 && iVar1 < Global_40001.f_3525)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_40001.f_351A && iVar1 < Global_40001.f_3526)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_40001.f_351B && iVar1 < Global_40001.f_3527)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_40001.f_351C && iVar1 < Global_40001.f_3528)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_40001.f_351E && iVar1 < Global_40001.f_352A)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_40001.f_351F && iVar1 < Global_40001.f_3522)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_40001.f_3520 && iVar1 < Global_40001.f_3523)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_40001.f_3521 && iVar1 < Global_40001.f_3524)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_40001.f_3F64 && iVar1 < Global_40001.f_3F41)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_40001.f_3F5F && iVar1 < Global_40001.f_3F3C)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_40001.f_3F63 && iVar1 < Global_40001.f_3F40)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_40001.f_3F62 && iVar1 < Global_40001.f_3F3F)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_40001.f_3F5C && iVar1 < Global_40001.f_3F39)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_40001.f_3F5D && iVar1 < Global_40001.f_3F3A)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_40001.f_3F60 && iVar1 < Global_40001.f_3F3D)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_40001.f_3F61 && iVar1 < Global_40001.f_3F3E)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_40001.f_3F5E && iVar1 < Global_40001.f_3F3B)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_40001.f_3F66 && iVar1 < Global_40001.f_3F43)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_40001.f_3F67 && iVar1 < Global_40001.f_3F44)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_40001.f_3F5B && iVar1 < Global_40001.f_3F38)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_40001.f_3F5A && iVar1 < Global_40001.f_3F37)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_40001.f_3F59 && iVar1 < Global_40001.f_3F36)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_40001.f_3F65 && iVar1 < Global_40001.f_3F42)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_40001.f_3F68 && iVar1 < Global_40001.f_3F45)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_40001.f_3F69 && iVar1 < Global_40001.f_3F46)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_40001.f_3F6A && iVar1 < Global_40001.f_3F47)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_40001.f_3F6B && iVar1 < Global_40001.f_3F48)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_40001.f_3FFC && iVar1 < Global_40001.f_4012)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_40001.f_3FFD && iVar1 < Global_40001.f_4013)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_40001.f_3FFE && iVar1 < Global_40001.f_4014)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_40001.f_3FFF && iVar1 < Global_40001.f_4015)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_40001.f_4000 && iVar1 < Global_40001.f_4016)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_40001.f_4001 && iVar1 < Global_40001.f_4017)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_40001.f_4003 && iVar1 < Global_40001.f_4018)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_40001.f_4004 && iVar1 < Global_40001.f_4019)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_40001.f_4005 && iVar1 < Global_40001.f_401A)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_40001.f_4006 && iVar1 < Global_40001.f_401B)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_40001.f_4007 && iVar1 < Global_40001.f_401C)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_40001.f_4008 && iVar1 < Global_40001.f_401D)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_40001.f_4009 && iVar1 < Global_40001.f_401E)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_40001.f_400F && iVar1 < Global_40001.f_4025)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_40001.f_400C && iVar1 < Global_40001.f_4021)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_40001.f_400D && iVar1 < Global_40001.f_4022)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_40001.f_400E && iVar1 < Global_40001.f_4023)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_40001.f_4002 && iVar1 < Global_40001.f_4024)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_40001.f_4010 && iVar1 < Global_40001.f_4026)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_40001.f_400A && iVar1 < Global_40001.f_401F)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_40001.f_400B && iVar1 < Global_40001.f_4020)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_40001.f_4011 && iVar1 < Global_40001.f_4027)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_40001.f_466D && iVar1 < Global_40001.f_46CF)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_40001.f_466E && iVar1 < Global_40001.f_46D0)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_40001.f_466F && iVar1 < Global_40001.f_46D1)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_40001.f_4670 && iVar1 < Global_40001.f_46D2)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_40001.f_4671 && iVar1 < Global_40001.f_46D3)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_40001.f_4672 && iVar1 < Global_40001.f_46D4)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_40001.f_4673 && iVar1 < Global_40001.f_46D5)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_40001.f_4674 && iVar1 < Global_40001.f_46D6)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_40001.f_4675 && iVar1 < Global_40001.f_46D7)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_40001.f_4676 && iVar1 < Global_40001.f_46D8)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_40001.f_4677 && iVar1 < Global_40001.f_46D9)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_40001.f_4678 && iVar1 < Global_40001.f_46DA)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_40001.f_4679 && iVar1 < Global_40001.f_46DB)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_40001.f_467A && iVar1 < Global_40001.f_46DC)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_40001.f_467B && iVar1 < Global_40001.f_46DD)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_40001.f_467C && iVar1 < Global_40001.f_46DE)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_40001.f_467D && iVar1 < Global_40001.f_46DF)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_40001.f_467E && iVar1 < Global_40001.f_46E0)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_40001.f_467F && iVar1 < Global_40001.f_46E1)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_40001.f_4680 && iVar1 < Global_40001.f_46E2)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_40001.f_4681 && iVar1 < Global_40001.f_46E3)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_40001.f_4682 && iVar1 < Global_40001.f_46E4)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_40001.f_4683 && iVar1 < Global_40001.f_46E5)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_40001.f_4684 && iVar1 < Global_40001.f_46E6)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_40001.f_4685 && iVar1 < Global_40001.f_46E7)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1234311532)
	{
		if (!Global_40001.f_4AA6 && iVar1 < Global_40001.f_4AA2)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1405937764)
	{
		if (!Global_40001.f_4AA7 && iVar1 < Global_40001.f_4AA3)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 719660200)
	{
		if (!Global_40001.f_4AA8 && iVar1 < Global_40001.f_4AA4)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -982130927)
	{
		if (!Global_40001.f_4AA9 && iVar1 < Global_40001.f_4AA5)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 917809321)
	{
		if (!Global_40001.f_4E15 && iVar1 < Global_40001.f_4E1D)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 223240013)
	{
		if (!Global_40001.f_4E16 && iVar1 < Global_40001.f_4E1E)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1504306544)
	{
		if (!Global_40001.f_4E17 && iVar1 < Global_40001.f_4E1F)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1939284556)
	{
		if (!Global_40001.f_4E18 && iVar1 < Global_40001.f_4E20)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 159274291)
	{
		if (!Global_40001.f_4E19 && iVar1 < Global_40001.f_4E21)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 433954513)
	{
		if (!Global_40001.f_4E1A && iVar1 < Global_40001.f_4E22)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == -1763555241)
	{
		if (!Global_40001.f_511E && iVar1 < Global_40001.f_5132)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -749299473)
	{
		if (!Global_40001.f_512A && iVar1 < Global_40001.f_513E)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -975345305)
	{
		if (!Global_40001.f_5121 && iVar1 < Global_40001.f_5135)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1700874274)
	{
		if (!Global_40001.f_512B && iVar1 < Global_40001.f_513F)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -392675425)
	{
		if (!Global_40001.f_511F && iVar1 < Global_40001.f_5133)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1043222410)
	{
		if (!Global_40001.f_512F && iVar1 < Global_40001.f_5143)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1386191424)
	{
		if (!Global_40001.f_512D && iVar1 < Global_40001.f_5141)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1565978651)
	{
		if (!Global_40001.f_512E && iVar1 < Global_40001.f_5142)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1036591958)
	{
		if (!Global_40001.f_5129 && iVar1 < Global_40001.f_513D)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -32878452)
	{
		if (!Global_40001.f_5130 && iVar1 < Global_40001.f_5144)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -42959138)
	{
		if (!Global_40001.f_512C && iVar1 < Global_40001.f_5140)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1984275979)
	{
		if (!Global_40001.f_5128 && iVar1 < Global_40001.f_513C)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1007528109)
	{
		if (!Global_40001.f_5120 && iVar1 < Global_40001.f_5134)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1523619738)
	{
		if (!Global_40001.f_5122 && iVar1 < Global_40001.f_5136)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1392481335)
	{
		if (!Global_40001.f_5123 && iVar1 < Global_40001.f_5137)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -998177792)
	{
		if (!Global_40001.f_5124 && iVar1 < Global_40001.f_5138)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1242608589)
	{
		if (!Global_40001.f_5125 && iVar1 < Global_40001.f_5139)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1841130506)
	{
		if (!Global_40001.f_5126 && iVar1 < Global_40001.f_513A)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2049897956)
	{
		if (!Global_40001.f_5127 && iVar1 < Global_40001.f_513B)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1483171323)
	{
		if (!Global_40001.f_54DF && iVar1 < Global_40001.f_54FB)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 886810209)
	{
		if (!Global_40001.f_54E0 && iVar1 < Global_40001.f_54FC)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1693015116)
	{
		if (!Global_40001.f_54E1 && iVar1 < Global_40001.f_54FD)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -692292317)
	{
		if (!Global_40001.f_54E2 && iVar1 < Global_40001.f_54FE)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1435527158)
	{
		if (!Global_40001.f_54E3 && iVar1 < Global_40001.f_54FF)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1181327175)
	{
		if (!Global_40001.f_54E4 && iVar1 < Global_40001.f_5500)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1489874736)
	{
		if (!Global_40001.f_54E5 && iVar1 < Global_40001.f_5501)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -212993243)
	{
		if (!Global_40001.f_54E6 && iVar1 < Global_40001.f_5502)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 447548909)
	{
		if (!Global_40001.f_54E7 && iVar1 < Global_40001.f_5503)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1561920505)
	{
		if (!Global_40001.f_54E8 && iVar1 < Global_40001.f_5504)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1848994066)
	{
		if (!Global_40001.f_54E9 && iVar1 < Global_40001.f_5505)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1741861769)
	{
		if (!Global_40001.f_54EA && iVar1 < Global_40001.f_5506)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1104234922)
	{
		if (!Global_40001.f_54EB && iVar1 < Global_40001.f_5507)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1871995513)
	{
		if (!Global_40001.f_54EC && iVar1 < Global_40001.f_5508)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1352136073)
	{
		if (!Global_40001.f_54ED && iVar1 < Global_40001.f_5509)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -313185164)
	{
		if (!Global_40001.f_54EE && iVar1 < Global_40001.f_550A)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2079788230)
	{
		if (!Global_40001.f_54EF && iVar1 < Global_40001.f_550B)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 600450546)
	{
		if (!Global_40001.f_54F0 && iVar1 < Global_40001.f_550C)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -410205223)
	{
		if (!Global_40001.f_54F1 && iVar1 < Global_40001.f_550D)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 867799010)
	{
		if (!Global_40001.f_54F2 && iVar1 < Global_40001.f_550E)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1529242755)
	{
		if (!Global_40001.f_54F3 && iVar1 < Global_40001.f_550F)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 903794909)
	{
		if (!Global_40001.f_54F4 && iVar1 < Global_40001.f_5510)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1532697517)
	{
		if (!Global_40001.f_54F5 && iVar1 < Global_40001.f_5511)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 15219735)
	{
		if (!Global_40001.f_54F6 && iVar1 < Global_40001.f_5512)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 661493923)
	{
		if (!Global_40001.f_54F7 && iVar1 < Global_40001.f_5513)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 838982985)
	{
		if (!Global_40001.f_54F8 && iVar1 < Global_40001.f_5514)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -391595372)
	{
		if (!Global_40001.f_54F9 && iVar1 < Global_40001.f_5515)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -121446169)
	{
		if (!Global_40001.f_54FA && iVar1 < Global_40001.f_5516)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1909189272)
	{
		if (!Global_40001.f_597B && iVar1 < Global_40001.f_598B)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1617472902)
	{
		if (!Global_40001.f_597C && iVar1 < Global_40001.f_598C)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1267543371)
	{
		if (!Global_40001.f_5980 && iVar1 < Global_40001.f_5990)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 931280609)
	{
		if (!Global_40001.f_5983 && iVar1 < Global_40001.f_5993)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1046206681)
	{
		if (!Global_40001.f_5988 && iVar1 < Global_40001.f_5998)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1259134696)
	{
		if (!Global_40001.f_5982 && iVar1 < Global_40001.f_5992)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1115909093)
	{
		if (!Global_40001.f_597A && iVar1 < Global_40001.f_598A)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1031562256)
	{
		if (!Global_40001.f_5981 && iVar1 < Global_40001.f_5991)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -376434238)
	{
		if (!Global_40001.f_5987 && iVar1 < Global_40001.f_5997)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -986944621)
	{
		if (!Global_40001.f_5986 && iVar1 < Global_40001.f_5996)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1134706562)
	{
		if (!Global_40001.f_597D && iVar1 < Global_40001.f_598D)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2120700196)
	{
		if (!Global_40001.f_597F && iVar1 < Global_40001.f_598F)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -214906006)
	{
		if (!Global_40001.f_5989 && iVar1 < Global_40001.f_5999)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -988501280)
	{
		if (!Global_40001.f_5985 && iVar1 < Global_40001.f_5995)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1254014755)
	{
		if (!Global_40001.f_597E && iVar1 < Global_40001.f_598E)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -726768679)
	{
		if (!Global_40001.f_5984 && iVar1 < Global_40001.f_5994)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == -1988428699)
	{
		if (!Global_40001.f_59D5 && iVar1 < Global_40001.f_59C8)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 345756458)
	{
		if (!Global_40001.f_59D6 && iVar1 < Global_40001.f_59C9)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1945374990)
	{
		if (!Global_40001.f_59DB && iVar1 < Global_40001.f_59CE)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1653666139)
	{
		if (!Global_40001.f_59DA && iVar1 < Global_40001.f_59CD)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 500482303)
	{
		if (!Global_40001.f_59D8 && iVar1 < Global_40001.f_59CB)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2044532910)
	{
		if (!Global_40001.f_59DE && iVar1 < Global_40001.f_59D1)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -638562243)
	{
		if (!Global_40001.f_59E0 && iVar1 < Global_40001.f_59D3)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1692272545)
	{
		if (!Global_40001.f_59E1 && iVar1 < Global_40001.f_59D4)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2069146067)
	{
		if (!Global_40001.f_59DF && iVar1 < Global_40001.f_59D2)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -420911112)
	{
		if (!Global_40001.f_59D7 && iVar1 < Global_40001.f_59CA)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 321186144)
	{
		if (!Global_40001.f_59D9 && iVar1 < Global_40001.f_59CC)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -54332285)
	{
		if (!Global_40001.f_59DD && iVar1 < Global_40001.f_59D0)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -307958377)
	{
		if (!Global_40001.f_59DC && iVar1 < Global_40001.f_59CF)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_360()//Position - 0x1073C
{
	return 0;
}

int func_361()//Position - 0x10745
{
	return 1;
}

int func_362()//Position - 0x1074E
{
	return 1;
}

int func_363()//Position - 0x10757
{
	if (unk_0x7B2F21BFE86AEB61(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_364()//Position - 0x10770
{
	int iVar0;
	
	if (unk_0x7E3A4CFA5545546C())
	{
		if (unk_0x6EFCE916927099A8())
		{
			if (unk_0x0D618527B2B8660A())
			{
				unk_0x6CB99B97664C3727(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				unk_0xF0059F27F7BB6680(&iVar0, 2);
				unk_0xF0059F27F7BB6680(&iVar0, 4);
				unk_0xF0059F27F7BB6680(&iVar0, 6);
				unk_0xF0059F27F7BB6680(&Global_19, 2);
				unk_0xF0059F27F7BB6680(&Global_19, 4);
				unk_0xF0059F27F7BB6680(&Global_19, 6);
				unk_0x3A57956BCE003880(joaat("sp_unlock_exclus_content"), iVar0, 1);
				if (unk_0x7A4B76D06AAF8132())
				{
					iVar0 = unk_0x2DC92D46FC48E795(866);
					unk_0xF0059F27F7BB6680(&iVar0, 0);
					unk_0x973C4C95367920C1(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_231F0 == 2)
	{
		return 1;
	}
	else if (Global_231F0 == 3)
	{
		return 0;
	}
	if (unk_0x7A4B76D06AAF8132())
	{
		if (unk_0xFA30DFD0084E92FE(unk_0x2DC92D46FC48E795(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_365(int iParam0, int iParam1, bool bParam2)//Position - 0x1082B
{
	if (Global_40001.f_2550)
	{
		*iParam1 = iParam0;
	}
	if (iParam0 >= 0)
	{
		*iParam1 = (Global_195D66[iParam0] - 1);
		if (bParam2)
		{
			if ((unk_0xC87A57742F7D3C06() % 5) == 0)
			{
			}
		}
	}
	else
	{
		*iParam1 = -1;
	}
}

int func_366(int iParam0)//Position - 0x1086B
{
	int iVar0;
	
	switch (iParam0)
	{
		case 8:
			return 88;
			break;
		
		case 9:
			return 108;
			break;
		
		case 10:
			return 128;
			break;
		
		case 11:
			return 148;
			break;
		
		case 6:
			return 65;
			break;
		
		case 7:
			return 75;
			break;
		
		case 5:
			return -1;
			break;
		
		case 12:
			return 159;
			break;
		
		case 13:
			return 179;
			break;
		
		case 14:
			return 191;
			break;
		
		case 15:
			return 192;
			break;
		
		case 16:
			return 202;
			break;
		
		case 17:
			return 212;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_375(iParam0);
		return func_374(iVar0);
	}
	return (func_367(iParam0, -1) * iParam0);
}

int func_367(int iParam0, int iParam1)//Position - 0x10952
{
	if (iParam0 == -1)
	{
		if (iParam1 >= 1)
		{
			if (func_370(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_369(iParam1))
			{
				return 0;
			}
			else if (func_368(iParam1, -1))
			{
				return 10;
			}
			else if (iParam1 == 115)
			{
				return 8;
			}
			else if (iParam1 == 116)
			{
				return 20;
			}
			else if (iParam1 == 117)
			{
				return 7;
			}
			else if (iParam1 == 118)
			{
				return 1;
			}
			else if ((iParam1 == 119 || iParam1 == 120) || iParam1 == 121)
			{
				return 10;
			}
			else if (iParam1 <= 121 && iParam1 > 0)
			{
				if (Global_100449[iParam1 /*1951*/].f_21 == 2)
				{
					return 3;
				}
				else if (Global_100449[iParam1 /*1951*/].f_21 == 6)
				{
					return 8;
				}
				else if (Global_100449[iParam1 /*1951*/].f_21 == 10)
				{
					return 13;
				}
			}
		}
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 7:
			return 13;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 10;
			break;
		
		case 8:
		case 9:
		case 10:
			return 20;
			break;
		
		case 11:
			return 8;
			break;
		
		case 12:
			return 20;
			break;
		
		case 13:
			return 7;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
		case 16:
		case 17:
			return 10;
			break;
	}
	return 0;
}

int func_368(int iParam0, int iParam1)//Position - 0x10B07
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return 1;
				break;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
			}
	}
	return 0;
}

int func_369(int iParam0)//Position - 0x10BE4
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return 1;
			break;
	}
	return 0;
}

int func_370(int iParam0, bool bParam1, bool bParam2)//Position - 0x10C13
{
	if (bParam2)
	{
		return func_371(unk_0xB5CEFD608600A09F(), 0);
	}
	if (bParam1)
	{
		if (func_371(unk_0xB5CEFD608600A09F(), 0))
		{
			return 0;
		}
		switch (iParam0)
		{
			case 103:
			case 106:
			case 109:
			case 112:
			case 104:
			case 107:
			case 110:
			case 113:
			case 105:
			case 108:
			case 111:
			case 114:
				return 1;
				break;
			}
	}
	switch (iParam0)
	{
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return 1;
			break;
	}
	return 0;
}

bool func_371(int iParam0, bool bParam1)//Position - 0x10CEE
{
	if (Global_183F8E != func_11())
	{
		if (!func_373(Global_183F8E))
		{
			return 0;
		}
		if (bParam1)
		{
			if (unk_0xB5CEFD608600A09F() != Global_183F8E)
			{
				if (unk_0xFA30DFD0084E92FE(Global_24FB5C[Global_183F8E /*406*/].f_BF, 24) || func_372(Global_183F8E))
				{
					return 1;
				}
			}
		}
	}
	return unk_0xFA30DFD0084E92FE(Global_24FB5C[iParam0 /*406*/].f_BF, 24);
}

int func_372(int iParam0)//Position - 0x10D5A
{
	if (iParam0 != func_11())
	{
		return unk_0xFA30DFD0084E92FE(Global_24FB5C[iParam0 /*406*/].f_BF, 9);
	}
	return 0;
}

int func_373(int iParam0)//Position - 0x10D80
{
	if (iParam0 != func_11())
	{
		return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_146, 2);
	}
	return 0;
}

int func_374(int iParam0)//Position - 0x10DAC
{
	switch (iParam0)
	{
		case 0:
			return 156;
		
		case 2:
			return 223;
		
		case 1:
			return 224;
		
		default:
	}
	return -1;
}

int func_375(int iParam0)//Position - 0x10DDD
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 3)
	{
		return iParam0;
	}
	return -1;
}

var func_376()//Position - 0x10E03
{
	var uVar0;
	
	uVar0 = func_377();
	if (!func_113())
	{
		if (func_131() != func_11())
		{
			uVar0 = func_412(func_131()) + 1;
		}
	}
	return uVar0;
}

int func_377()//Position - 0x10E32
{
	return func_412(unk_0xB5CEFD608600A09F()) + 1;
}

int func_378()//Position - 0x10E44
{
	return func_28(6109, -1, 0);
}

int func_379(int iParam0)//Position - 0x10E55
{
	if (func_229(iParam0, 1))
	{
		return Global_18C80F[iParam0 /*558*/].f_B.f_19A;
	}
	return -1;
}

void func_380(int iParam0)//Position - 0x10E79
{
	if (iParam0 == 0)
	{
	}
	unk_0x5F080E7F4F761E28(&Global_1969CF);
	func_381();
}

void func_381()//Position - 0x10E93
{
	struct<44> Var0;
	
	Global_1969CF = { Var0 };
	Global_1969CF.f_17 = 0;
	Global_1969CF.f_18 = 0;
	Global_1969CF.f_10 = 0;
}

bool func_382(int iParam0)//Position - 0x10EBC
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_146, 12);
}

bool func_383(int iParam0)//Position - 0x10ED9
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_146, 13);
}

int func_384(int iParam0)//Position - 0x10EF6
{
	if (iParam0 != func_11())
	{
		if ((unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_F4, 12) || unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_F4, 13)) || unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_F4, 14))
		{
			return 1;
		}
	}
	return 0;
}

int func_385(int iParam0)//Position - 0x10F57
{
	if (iParam0 != func_11())
	{
		if ((unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_F4, 0) || unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_F4, 1)) || unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_F4, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_386(int iParam0)//Position - 0x10FB5
{
	if (iParam0 != func_11())
	{
		if (((((unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_F4, 3) || unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_F4, 4)) || unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_F4, 5)) || unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_F4, 0)) || unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_F4, 1)) || unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_F4, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_387(int iParam0, int iParam1)//Position - 0x1105E
{
	if (iParam1 == func_11())
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if (unk_0xFA30DFD0084E92FE(Global_18402B[iParam1 /*770*/].f_111.f_F4, 0))
			{
				return 3;
			}
			else if (unk_0xFA30DFD0084E92FE(Global_18402B[iParam1 /*770*/].f_111.f_F4, 3))
			{
				return 2;
			}
			else if (unk_0xFA30DFD0084E92FE(Global_18402B[iParam1 /*770*/].f_111.f_F4, 6))
			{
				return 4;
			}
			else if (unk_0xFA30DFD0084E92FE(Global_18402B[iParam1 /*770*/].f_111.f_F4, 9))
			{
				return 1;
			}
			else if (unk_0xFA30DFD0084E92FE(Global_18402B[iParam1 /*770*/].f_111.f_F4, 12))
			{
				return 7;
			}
			else if (unk_0xFA30DFD0084E92FE(Global_18402B[iParam1 /*770*/].f_111.f_F4, 15))
			{
				return 5;
			}
			else if (unk_0xFA30DFD0084E92FE(Global_18402B[iParam1 /*770*/].f_111.f_F4, 18))
			{
				return 6;
			}
			else if (unk_0xFA30DFD0084E92FE(Global_18402B[iParam1 /*770*/].f_111.f_F4, 21))
			{
				return 0;
			}
			else if (unk_0xFA30DFD0084E92FE(Global_18402B[iParam1 /*770*/].f_111.f_F4, 24))
			{
				return 8;
			}
			break;
		
		case 1:
			if (unk_0xFA30DFD0084E92FE(Global_18402B[iParam1 /*770*/].f_111.f_F4, 1))
			{
				return 3;
			}
			else if (unk_0xFA30DFD0084E92FE(Global_18402B[iParam1 /*770*/].f_111.f_F4, 4))
			{
				return 2;
			}
			else if (unk_0xFA30DFD0084E92FE(Global_18402B[iParam1 /*770*/].f_111.f_F4, 7))
			{
				return 4;
			}
			else if (unk_0xFA30DFD0084E92FE(Global_18402B[iParam1 /*770*/].f_111.f_F4, 10))
			{
				return 1;
			}
			else if (unk_0xFA30DFD0084E92FE(Global_18402B[iParam1 /*770*/].f_111.f_F4, 13))
			{
				return 7;
			}
			else if (unk_0xFA30DFD0084E92FE(Global_18402B[iParam1 /*770*/].f_111.f_F4, 16))
			{
				return 5;
			}
			else if (unk_0xFA30DFD0084E92FE(Global_18402B[iParam1 /*770*/].f_111.f_F4, 19))
			{
				return 6;
			}
			else if (unk_0xFA30DFD0084E92FE(Global_18402B[iParam1 /*770*/].f_111.f_F4, 22))
			{
				return 0;
			}
			else if (unk_0xFA30DFD0084E92FE(Global_18402B[iParam1 /*770*/].f_111.f_F4, 25))
			{
				return 8;
			}
			break;
		
		case 2:
			if (unk_0xFA30DFD0084E92FE(Global_18402B[iParam1 /*770*/].f_111.f_F4, 2))
			{
				return 3;
			}
			else if (unk_0xFA30DFD0084E92FE(Global_18402B[iParam1 /*770*/].f_111.f_F4, 5))
			{
				return 2;
			}
			else if (unk_0xFA30DFD0084E92FE(Global_18402B[iParam1 /*770*/].f_111.f_F4, 8))
			{
				return 4;
			}
			else if (unk_0xFA30DFD0084E92FE(Global_18402B[iParam1 /*770*/].f_111.f_F4, 11))
			{
				return 1;
			}
			else if (unk_0xFA30DFD0084E92FE(Global_18402B[iParam1 /*770*/].f_111.f_F4, 14))
			{
				return 7;
			}
			else if (unk_0xFA30DFD0084E92FE(Global_18402B[iParam1 /*770*/].f_111.f_F4, 17))
			{
				return 5;
			}
			else if (unk_0xFA30DFD0084E92FE(Global_18402B[iParam1 /*770*/].f_111.f_F4, 20))
			{
				return 6;
			}
			else if (unk_0xFA30DFD0084E92FE(Global_18402B[iParam1 /*770*/].f_111.f_F4, 23))
			{
				return 0;
			}
			else if (unk_0xFA30DFD0084E92FE(Global_18402B[iParam1 /*770*/].f_111.f_F4, 26))
			{
				return 8;
			}
			break;
	}
	return 0;
}

int func_388(int iParam0)//Position - 0x113B2
{
	if (iParam0 != func_11())
	{
		if ((unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_F4, 6) || unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_F4, 7)) || unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_F4, 8))
		{
			return 1;
		}
	}
	return 0;
}

bool func_389(int iParam0)//Position - 0x11411
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_146, 8);
}

bool func_390(int iParam0)//Position - 0x1142E
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_146, 7);
}

bool func_391(int iParam0)//Position - 0x1144A
{
	if (iParam0 == func_11())
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_146, 9);
}

bool func_392(int iParam0)//Position - 0x11474
{
	if (iParam0 == func_11())
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_146, 11);
}

bool func_393(int iParam0)//Position - 0x1149E
{
	if (iParam0 == func_11())
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_146, 10);
}

int func_394(int iParam0, int iParam1)//Position - 0x114C8
{
	return func_28(func_395(iParam1), iParam0, 0);
}

int func_395(int iParam0)//Position - 0x114DD
{
	switch (iParam0)
	{
		case 0:
			return 3894;
		
		case 1:
			return 3923;
		
		case 2:
			return 3927;
		
		case 3:
			return 3931;
		
		case 4:
			return 3935;
		
		case 5:
			return 5446;
		
		default:
	}
	return 3894;
}

void func_396(int iParam0)//Position - 0x11537
{
	if (iParam0 == 0)
	{
	}
	unk_0x446AB56E5D45010D(&Global_196990);
	func_397();
}

void func_397()//Position - 0x11551
{
	struct<63> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_A = -1;
	Var0.f_B = -1;
	Var0.f_C = -1;
	Var0.f_F = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_1A = -1;
	Var0.f_1B = -1;
	Var0.f_1C = -1;
	Var0.f_1D = -1;
	Var0.f_1E = -1;
	Var0.f_1F = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_2A = -1;
	Var0.f_2B = -1;
	Var0.f_2C = -1;
	Var0.f_2D = -1;
	Var0.f_2E = -1;
	Var0.f_2F = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_3A = -1;
	Var0.f_3B = -1;
	Var0.f_3C = -1;
	Var0.f_3D = -1;
	Var0.f_3E = -1;
	Global_196990 = { Var0 };
	Global_196990.f_18 = 0;
	Global_196990.f_19 = 0;
	Global_196990.f_11 = 0;
}

void func_398(int iParam0)//Position - 0x116BB
{
	if (iParam0 == 0)
	{
	}
	unk_0xF1381B4DBB31FA25(&Global_19695A);
	func_399();
}

void func_399()//Position - 0x116D5
{
	struct<54> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_A = -1;
	Var0.f_B = -1;
	Var0.f_C = -1;
	Var0.f_F = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_1A = -1;
	Var0.f_1B = -1;
	Var0.f_1C = -1;
	Var0.f_1D = -1;
	Var0.f_1E = -1;
	Var0.f_1F = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_2A = -1;
	Var0.f_2B = -1;
	Var0.f_2C = -1;
	Var0.f_2D = -1;
	Var0.f_2E = -1;
	Var0.f_2F = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Global_19695A = { Var0 };
	Global_19695A.f_1D = 0;
	Global_19695A.f_1E = 0;
	Global_19695A.f_11 = 0;
}

int func_400(int iParam0, int iParam1)//Position - 0x11809
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = func_279(iParam0, iParam1, 2);
	bVar1 = func_279(iParam0, iParam1, 1);
	bVar2 = func_279(iParam0, iParam1, 0);
	if ((bVar0 && bVar1) && bVar2)
	{
		return 7;
	}
	else if ((bVar1 && bVar0) && !bVar2)
	{
		return 6;
	}
	else if ((bVar2 && bVar0) && !bVar1)
	{
		return 5;
	}
	else if ((bVar2 && bVar1) && !bVar0)
	{
		return 4;
	}
	else if (bVar0)
	{
		return 3;
	}
	else if (bVar1)
	{
		return 2;
	}
	else if (bVar2)
	{
		return 1;
	}
	return 0;
}

int func_401(int iParam0, int iParam1)//Position - 0x118BF
{
	int iVar0;
	
	if (iParam0 == func_11())
	{
		return 0;
	}
	if (func_274(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_18402B[iParam0 /*770*/].f_111.f_A8[iVar0 /*12*/] == iParam1)
			{
				return Global_18402B[iParam0 /*770*/].f_111.f_A8[iVar0 /*12*/].f_2;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_402(int iParam0, bool bParam1, bool bParam2)//Position - 0x1191E
{
	int iVar0;
	int iVar1;
	
	if (func_102(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_40001.f_42AE;
		}
		else if (!bParam2)
		{
			iVar0 = Global_40001.f_42AD;
		}
		else
		{
			iVar0 = Global_40001.f_429B;
		}
		iVar1 = 19;
	}
	else if (func_407(iParam0))
	{
		iVar0 = 6;
		iVar1 = 24;
	}
	else if (func_37(iParam0, 0))
	{
		if (bParam1)
		{
			iVar0 = Global_40001.f_429A;
			iVar1 = 20;
		}
	}
	else if (func_47(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_40001.f_42AE;
		}
		else if (!bParam2)
		{
			iVar0 = Global_40001.f_42AD;
		}
		else
		{
			iVar0 = Global_40001.f_429B;
		}
		iVar1 = 18;
	}
	if (iVar0 != 0)
	{
		unk_0x0022CBDAA2EA4C4F(func_406(func_131()), func_405(func_131()), func_420(), func_419(), iVar1, iVar0);
	}
	func_404(iVar0);
	func_403(iVar0);
	return iVar0;
}

void func_403(int iParam0)//Position - 0x11A11
{
	int iVar0;
	
	iVar0 = func_28(3964, -1, 0);
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
	func_25(3964, iVar0, -1, 1, 0);
}

void func_404(int iParam0)//Position - 0x11A5F
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

int func_405(int iParam0)//Position - 0x11AD9
{
	if (iParam0 == func_11())
	{
		return -1;
	}
	return Global_18C80F[iParam0 /*558*/].f_B.f_8[1];
}

int func_406(int iParam0)//Position - 0x11AFE
{
	if (iParam0 == func_11())
	{
		return -1;
	}
	return Global_18C80F[iParam0 /*558*/].f_B.f_8[0];
}

int func_407(int iParam0)//Position - 0x11B23
{
	switch (iParam0)
	{
		case 190:
		case 191:
		case 192:
			return 1;
		
		default:
	}
	return 0;
}

int func_408(bool bParam0)//Position - 0x11B49
{
	if (bParam0)
	{
		return 0;
	}
	if (func_65(unk_0xB5CEFD608600A09F()) || func_76(unk_0xB5CEFD608600A09F()))
	{
		return 1;
	}
	return 0;
}

void func_409(var uParam0)//Position - 0x11B78
{
	unk_0x316DB59CD14C1774(&Global_196A5F);
	func_410();
}

void func_410()//Position - 0x11B8C
{
	struct<34> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_A = -1;
	Var0.f_B = -1;
	Var0.f_C = -1;
	Var0.f_D = -1;
	Var0.f_E = -1;
	Var0.f_F = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_1A = -1;
	Var0.f_1B = -1;
	Var0.f_1D = -1;
	Var0.f_1E = -1;
	Var0.f_1F = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Global_196A5F = { Var0 };
}

int func_411(int iParam0)//Position - 0x11C67
{
	if (iParam0 != func_11())
	{
		return Global_18402B[iParam0 /*770*/].f_111.f_133 != 0;
	}
	return 0;
}

int func_412(int iParam0)//Position - 0x11C8D
{
	return Global_18C80F[iParam0 /*558*/].f_B.f_13;
}

int func_413()//Position - 0x11CA2
{
	int iVar0;
	
	if (func_127())
	{
		return 4;
	}
	else if (func_113())
	{
		if (func_306(unk_0xB5CEFD608600A09F()))
		{
			return 8;
		}
		return 6;
	}
	if (func_50(1))
	{
		iVar0 = func_379(unk_0xB5CEFD608600A09F());
		if (iVar0 == -1)
		{
			iVar0 = 5;
		}
		return iVar0;
	}
	else if (func_129(1))
	{
		if (func_306(func_131()))
		{
			return 9;
		}
		return 7;
	}
	return -2;
}

int func_414(bool bParam0)//Position - 0x11D15
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_415(bool bParam0)//Position - 0x11D27
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = -1;
	if (bParam0)
	{
		iVar0 = func_421(unk_0xB5CEFD608600A09F());
	}
	else
	{
		iVar0 = func_44(unk_0xB5CEFD608600A09F());
	}
	if (iVar0 != -1)
	{
	}
	switch (iVar0)
	{
		case 236:
			iVar2 = func_418(unk_0xB5CEFD608600A09F());
			iVar1 = iVar2;
			break;
		
		case 237:
			iVar2 = func_417(unk_0xB5CEFD608600A09F());
			if (func_89(func_90(unk_0xB5CEFD608600A09F())))
			{
				iVar1 = 100;
			}
			else
			{
				iVar1 = 200;
			}
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 250:
			iVar2 = func_417(unk_0xB5CEFD608600A09F());
			iVar1 = 300;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 238:
			iVar2 = func_416(unk_0xB5CEFD608600A09F());
			iVar1 = 400;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 249:
			iVar2 = func_416(unk_0xB5CEFD608600A09F());
			iVar1 = 500;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 239:
			iVar1 = 600;
			break;
		
		case 240:
			iVar1 = 700;
			break;
		
		case 241:
			iVar1 = 800;
			break;
		
		case 242:
			iVar1 = 900;
			break;
		
		case 244:
			iVar1 = 1100;
			break;
		
		case 248:
			iVar1 = 1200;
			break;
	}
	return iVar1;
}

int func_416(int iParam0)//Position - 0x11E5F
{
	if (func_44(unk_0xB5CEFD608600A09F()) == 238 || func_44(unk_0xB5CEFD608600A09F()) == 249)
	{
		return Global_18C80F[iParam0 /*558*/].f_B.f_1C9;
	}
	return -1;
}

int func_417(int iParam0)//Position - 0x11E98
{
	if (func_44(unk_0xB5CEFD608600A09F()) == 237 || func_44(unk_0xB5CEFD608600A09F()) == 250)
	{
		return Global_18C80F[iParam0 /*558*/].f_B.f_1C8;
	}
	return -1;
}

int func_418(int iParam0)//Position - 0x11ED1
{
	if (func_421(iParam0) == 236)
	{
		return Global_18C80F[iParam0 /*558*/].f_B.f_1C7;
	}
	return -1;
}

int func_419()//Position - 0x11EF6
{
	if (Global_196948.f_3 != 0)
	{
		return Global_196948.f_3;
	}
	return -1;
}

int func_420()//Position - 0x11F12
{
	if (Global_196948.f_2 != 0)
	{
		return Global_196948.f_2;
	}
	return -1;
}

int func_421(int iParam0)//Position - 0x11F2E
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_18C80F[iVar0 /*558*/];
	}
	return -1;
}

bool func_422(int iParam0, int iParam1)//Position - 0x11F4D
{
	return unk_0xFA30DFD0084E92FE(Global_18C80F[iParam0 /*558*/].f_B.f_4, iParam1);
}

void func_423(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, char* sParam7)//Position - 0x11F68
{
	int iVar0;
	int iVar1[32];
	bool bVar2;
	int iVar3;
	char* sVar4;
	int iVar5;
	struct<4> Var6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	struct<2> Var22;
	
	if (func_543(iParam2))
	{
		return;
	}
	fVar10 = -1f;
	iVar11 = -1;
	iVar12 = -1;
	iVar14 = 0;
	iVar15 = 0;
	uParam3->f_24 = 0;
	if (func_541() || iParam2 == 27)
	{
		if (func_493(iParam1, iParam2, uParam3, Global_180515, 0, func_539(), sParam7))
		{
			func_492(1);
			if ((!func_490() && !func_488()) || unk_0xFA30DFD0084E92FE(Global_267214.f_11DD, 1))
			{
				if (func_487())
				{
					func_485();
				}
				else
				{
					unk_0xC2EAD30963BDAA47(76, 84);
					if (uParam3->f_1B == 0)
					{
						func_484(1);
						Global_180515 = 0;
						iVar19 = -1;
						if (Global_1805CF != 1)
						{
							func_483(iParam1, 0, 0);
							if (unk_0xFA30DFD0084E92FE(uParam3->f_21, 7))
							{
								unk_0x7CB6FD92BE491AD9(&(uParam3->f_21), 7);
							}
						}
						if (iParam2 == 27)
						{
							iVar17 = 0;
							while (iVar17 < 32)
							{
								iVar1[iVar17] = -1;
								iVar17++;
							}
							iVar17 = 0;
							while (iVar17 < 32)
							{
								if (func_5(unk_0x3171C34AB3FE6F2E(iVar17), 0, 1))
								{
									iVar3 = unk_0x3171C34AB3FE6F2E(iVar17);
									if (!func_198(iVar3, 0))
									{
										if ((func_482(iVar3) || Global_24FB5C[iVar3 /*406*/].f_E8 != -1) || func_12(iVar3))
										{
											iVar9 = iVar3;
											if (func_114(iVar3))
											{
												iVar1[iVar9] = iVar20;
												iVar20++;
												iVar0++;
												func_481(&iVar1, iVar3, &iVar20, &iVar0);
											}
										}
									}
								}
								iVar17++;
							}
						}
						if (!func_480(unk_0xB5CEFD608600A09F(), 0) && func_44(unk_0xB5CEFD608600A09F()) != 188)
						{
							bVar2 = iVar0 > 0;
						}
						iVar17 = 0;
						while (iVar17 < 32)
						{
							if (func_479())
							{
								if (func_5(unk_0x3171C34AB3FE6F2E(iVar17), 0, 1))
								{
									iVar3 = unk_0x3171C34AB3FE6F2E(iVar17);
								}
								else
								{
									iVar3 = func_11();
								}
							}
							else
							{
								iVar3 = (uParam0[iVar17 /*42*/])->f_1;
							}
							if ((func_478(iVar3) && func_474(iVar3, iParam2)) && func_5(iVar3, 0, 1))
							{
								iVar9 = iVar3;
								iVar7 = Global_18402B[iVar9 /*770*/].f_D3.f_6;
								Var6 = { func_469(iVar3) };
								if (iVar3 == unk_0xB5CEFD608600A09F())
								{
									uParam3->f_23 = iVar18;
								}
								StringCopy(&(uParam3->f_1), unk_0xD885B2234FC72D62(iVar3), 64);
								*(uParam4[iVar17 /*13*/]) = { func_154(iVar3) };
								iVar5 = func_463(iVar3);
								sVar4 = "";
								if (iVar5 != 0)
								{
									sVar4 = unk_0xF392EEDDF2FB749A(iVar5);
								}
								Global_180515++;
								if ((uParam0[iVar17 /*42*/])->f_16 != -1f)
								{
									fVar10 = (uParam0[iVar17 /*42*/])->f_16;
								}
								if ((uParam0[iVar17 /*42*/])->f_1F != -1)
								{
									iVar11 = (uParam0[iVar17 /*42*/])->f_1F;
								}
								if ((uParam0[iVar17 /*42*/])->f_29 != -1)
								{
									iVar12 = (uParam0[iVar17 /*42*/])->f_29;
								}
								iVar8 = (uParam0[iVar17 /*42*/])->f_9;
								if (((uParam0[iVar17 /*42*/])->f_9 != -1 || (uParam0[iVar17 /*42*/])->f_16 != -1f) || (uParam0[iVar17 /*42*/])->f_1F != -1)
								{
									if (!func_479())
									{
										iVar15 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_458(&iVar8, &fVar10, (uParam0[iVar17 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_68), func_457(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar13 = (uParam0[iVar17 /*42*/])->f_2 + 1;
									if (iVar19 != iVar13)
									{
										iVar19 = iVar13;
									}
									else
									{
										iVar13 = -2;
									}
								}
								iVar16 = func_455(iVar3, 0);
								if (bVar2)
								{
									if (func_229(iVar3, 1) && iVar1[iVar9] != -1)
									{
										iVar18 = iVar1[iVar9];
									}
									else
									{
										iVar18 = (iVar0 + iVar21);
										iVar21++;
									}
								}
								uParam3->f_26[iVar9 /*2*/].f_1 = iVar18;
								if ((uParam0[iVar17 /*42*/])->f_27 != -1)
								{
									StringCopy(&Var22, "UW_TM", 16);
									StringIntConCat(&Var22, (uParam0[iVar17 /*42*/])->f_27, 16);
								}
								if (func_454(iParam5))
								{
									func_453(iVar3, iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar8, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_28, iVar13, bParam6);
								}
								else
								{
									func_453(iVar3, iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar11, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_28, iVar13, bParam6);
								}
								unk_0xF0059F27F7BB6680(&iVar14, iVar3);
								iVar18++;
							}
							iVar17++;
						}
						iVar17 = 0;
						while (iVar17 < 32)
						{
							iVar3 = unk_0x3171C34AB3FE6F2E(iVar17);
							if (func_5(iVar3, 0, 1) && !unk_0xFA30DFD0084E92FE(iVar14, iVar3))
							{
								iVar3 = unk_0x3171C34AB3FE6F2E(iVar17);
							}
							else
							{
								iVar3 = func_11();
							}
							if (func_478(iVar3))
							{
								if (func_5(unk_0x3171C34AB3FE6F2E(iVar17), 0, 1))
								{
									iVar9 = iVar3;
									iVar7 = Global_18402B[iVar9 /*770*/].f_D3.f_6;
									Var6 = { func_469(iVar3) };
									*(uParam4[iVar17 /*13*/]) = { func_154(iVar3) };
									iVar5 = func_463(iVar3);
									sVar4 = "";
									if (iVar5 != 0)
									{
										sVar4 = unk_0xF392EEDDF2FB749A(iVar5);
									}
									Global_180515++;
									iVar16 = func_455(iVar3, 1);
									if (bVar2)
									{
										if (func_229(iVar3, 1))
										{
											iVar18 = iVar1[iVar17];
										}
										else
										{
											iVar18 = (iVar0 + iVar21);
											iVar21++;
										}
									}
									uParam3->f_26[iVar9 /*2*/].f_1 = iVar18;
									func_436(iVar3, unk_0xD885B2234FC72D62(iVar3), iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar16, iVar15);
									iVar18++;
								}
							}
							iVar17++;
						}
						if (unk_0xFA30DFD0084E92FE(uParam3->f_21, 11))
						{
							func_433(uParam3, iParam1);
						}
						func_8(&(uParam3->f_15));
						func_432();
						uParam3->f_1B = 2;
					}
					if (uParam3->f_1B == 2)
					{
						if (!unk_0xFA30DFD0084E92FE(uParam3->f_21, 7))
						{
							func_431(uParam3, iParam1);
							func_430(iParam1, 0, 1);
							unk_0xF0059F27F7BB6680(&(uParam3->f_21), 7);
						}
						func_431(uParam3, iParam1);
						if (!unk_0xFA30DFD0084E92FE(uParam3->f_21, 11))
						{
							unk_0xF0059F27F7BB6680(&(uParam3->f_21), 11);
						}
						if (func_426(uParam3))
						{
							Global_1805CF = 1;
						}
						func_424(uParam3);
						if (Global_1805CF == 1)
						{
							uParam3->f_1B = 0;
						}
						if (Global_1805CF == 2)
						{
							uParam3->f_1B = 0;
						}
					}
					if (unk_0xA7F138B5B1AB2CF6(*iParam1))
					{
						unk_0x996AC9A66B2A5A3F(7);
						unk_0x65E432C782E7E702(*iParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						unk_0x996AC9A66B2A5A3F(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_1B = 0;
			func_432();
			func_484(0);
			if (unk_0xFA30DFD0084E92FE(uParam3->f_21, 7))
			{
				unk_0x7CB6FD92BE491AD9(&(uParam3->f_21), 7);
			}
			if (unk_0xFA30DFD0084E92FE(uParam3->f_21, 10))
			{
				unk_0x7CB6FD92BE491AD9(&(uParam3->f_21), 10);
			}
		}
	}
	unk_0x2A025E7CEBB76D14();
}

void func_424(var uParam0)//Position - 0x125BB
{
	if (!func_21(&(uParam0->f_15)))
	{
		func_20(&(uParam0->f_15), 0, 0);
	}
	else if (func_19(&(uParam0->f_15), 250, 0))
	{
		func_8(&(uParam0->f_15));
		func_425(0);
	}
}

void func_425(bool bParam0)//Position - 0x125F7
{
	if (bParam0)
	{
		if (Global_1805CF != 2)
		{
			Global_1805CF = 2;
		}
	}
	else
	{
		switch (Global_1805CF)
		{
			case 0:
				Global_1805CF = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_426(var uParam0)//Position - 0x1263D
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar3;
	int iVar4;
	
	iVar4 = 0;
	iVar0 = uParam0->f_25;
	iVar3 = unk_0x3171C34AB3FE6F2E(uParam0->f_25);
	if (iVar3 != func_11() && func_5(iVar3, 0, 1))
	{
		Var2 = { func_154(iVar3) };
		iVar1 = func_429(uParam0, uParam0->f_25);
		if (func_428(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0x926C9CB9879D0731(&Var2))
					{
						if (unk_0xF7C6C9F82039E424(&Var2))
						{
							iVar4 = 1;
							func_427(uParam0, iVar0, 2);
						}
					}
					else if (unk_0xCE838A0680E73021(&Var2))
					{
						iVar4 = 1;
						func_427(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0x926C9CB9879D0731(&Var2))
					{
						if (!unk_0xF7C6C9F82039E424(&Var2))
						{
							iVar4 = 1;
							func_427(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar4 = 1;
						func_427(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0x926C9CB9879D0731(&Var2))
					{
						if (!unk_0xCE838A0680E73021(&Var2))
						{
							iVar4 = 1;
							func_427(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0xCE838A0680E73021(&Var2))
					{
						iVar4 = 1;
						func_427(uParam0, iVar0, 0);
					}
					break;
				}
			}
	}
	uParam0->f_25++;
	if (uParam0->f_25 >= 32)
	{
		uParam0->f_25 = 0;
	}
	return iVar4;
}

void func_427(var uParam0, int iParam1, int iParam2)//Position - 0x1276A
{
	uParam0->f_26[iParam1 /*2*/] = iParam2;
}

bool func_428(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)//Position - 0x1277C
{
	return unk_0x700A9F370C80C9E1(&uParam0, 13);
}

var func_429(var uParam0, int iParam1)//Position - 0x1278C
{
	return uParam0->f_26[iParam1 /*2*/];
}

void func_430(int iParam0, bool bParam1, int iParam2)//Position - 0x1279C
{
	if (unk_0x29CD142125FE177B(*iParam0, "COLLAPSE"))
	{
		unk_0x5E5DBD0A6623969E(bParam1);
		unk_0xF9FBC2F3F73D94C9();
	}
	if (iParam2 == 1)
	{
		if (unk_0x29CD142125FE177B(*iParam0, "DISPLAY_VIEW"))
		{
			unk_0xF9FBC2F3F73D94C9();
		}
	}
}

void func_431(var uParam0, int iParam1)//Position - 0x127D4
{
	if (!unk_0xFA30DFD0084E92FE(uParam0->f_21, 10))
	{
		unk_0x29CD142125FE177B(*iParam1, "SET_HIGHLIGHT");
		unk_0x1E1FB49121565EB6(uParam0->f_23);
		unk_0xF9FBC2F3F73D94C9();
		unk_0xF0059F27F7BB6680(&(uParam0->f_21), 10);
	}
}

void func_432()//Position - 0x1280C
{
	if (Global_1805CF != 0)
	{
		Global_1805CF = 0;
	}
}

void func_433(var uParam0, int iParam1)//Position - 0x12821
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x3171C34AB3FE6F2E(iVar0);
		if (iVar2 != func_11())
		{
			if (func_5(iVar2, 0, 1))
			{
				if (uParam0->f_26[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_435(uParam0->f_26[iVar0 /*2*/], 0);
					func_434(iParam1, uParam0->f_26[iVar0 /*2*/].f_1, iVar1, Global_18402B[iVar0 /*770*/].f_D3.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_434(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x12894
{
	if (unk_0xA7F138B5B1AB2CF6(*uParam0))
	{
		if (unk_0x29CD142125FE177B(*uParam0, "SET_ICON"))
		{
			unk_0x1E1FB49121565EB6(iParam1);
			unk_0x1E1FB49121565EB6(iParam2);
			if (iParam2 == 65)
			{
				unk_0x1E1FB49121565EB6(iParam3);
			}
			unk_0xF9FBC2F3F73D94C9();
		}
	}
}

int func_435(int iParam0, bool bParam1)//Position - 0x128D1
{
	int iVar0;
	
	iVar0 = 65;
	if (bParam1)
	{
		iVar0 = 116;
	}
	switch (iParam0)
	{
		case 2:
			return 47;
		
		case 1:
			return 49;
		
		default:
	}
	return iVar0;
}

void func_436(int iParam0, char* sParam1, int iParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)//Position - 0x12905
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_452() && iParam4 < func_451())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_180517)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1805CF == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x29CD142125FE177B(*iParam2, sVar1))
		{
			unk_0x1E1FB49121565EB6(iParam4);
			if (unk_0xFA30DFD0084E92FE(uParam3->f_21, 8) || uParam3->f_6C == 6)
			{
				func_450("");
			}
			else
			{
				unk_0x1E1FB49121565EB6(iParam10);
			}
			func_450(sParam1);
			unk_0x1E1FB49121565EB6(iParam11);
			if (uParam3->f_6C == 6)
			{
				func_450("");
			}
			else
			{
				unk_0x1E1FB49121565EB6(65);
			}
			unk_0x1E1FB49121565EB6(-1);
			func_450("");
			if (uParam3->f_6C == 6)
			{
				func_450("");
			}
			else
			{
				func_450(&sParam5);
			}
			func_441(uParam3, iParam0);
			unk_0x6A664E53A192232C(sParam9);
			unk_0x6A664E53A192232C(sParam9);
			if (func_440(uParam3))
			{
				func_439("DPAD_FRIEND");
			}
			else if (func_438(uParam3))
			{
				func_439("DPAD_FRIEND");
			}
			else if (func_437(uParam3))
			{
				func_439("DPAD_CREW");
			}
			else
			{
				func_439("");
			}
			unk_0xF9FBC2F3F73D94C9();
		}
	}
}

bool func_437(var uParam0)//Position - 0x12A34
{
	return unk_0xFA30DFD0084E92FE(uParam0->f_21, 6);
}

bool func_438(var uParam0)//Position - 0x12A45
{
	return unk_0xFA30DFD0084E92FE(uParam0->f_21, 5);
}

void func_439(char* sParam0)//Position - 0x12A56
{
	unk_0x57016C44F10111F0(sParam0);
	unk_0x64989E60CF560CA1();
}

int func_440(var uParam0)//Position - 0x12A68
{
	if (func_438(uParam0) && func_437(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_441(var uParam0, int iParam1)//Position - 0x12A89
{
	if (func_449(iParam1))
	{
		unk_0x1E1FB49121565EB6(121);
	}
	else if (func_445(iParam1))
	{
		unk_0x1E1FB49121565EB6(122);
	}
	else if (((unk_0xFA30DFD0084E92FE(Global_440000.f_1B, 15) && iParam1 > -1) && iParam1 < 32) && unk_0xFA30DFD0084E92FE(Global_24FB5C[iParam1 /*406*/].f_195, 0))
	{
		unk_0x1E1FB49121565EB6(123);
	}
	else
	{
		if (func_442())
		{
			uParam0->f_24 = 0;
		}
		unk_0x5E5DBD0A6623969E(uParam0->f_24);
	}
}

int func_442()//Position - 0x12B0A
{
	if (unk_0x517823CA390A19F6())
	{
		if (func_443() || func_218())
		{
			return 1;
		}
	}
	return 0;
}

int func_443()//Position - 0x12B2F
{
	if (unk_0x517823CA390A19F6())
	{
		return func_218();
	}
	return func_444(Global_440000.f_1EF38);
}

int func_444(int iParam0)//Position - 0x12B53
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_40001.f_1373[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_445(int iParam0)//Position - 0x12B8D
{
	if ((func_5(iParam0, 0, 1) && func_446()) && func_51(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_446()//Position - 0x12BBA
{
	if (func_78(unk_0xB5CEFD608600A09F()) || func_448())
	{
		if (!func_447(unk_0xB5CEFD608600A09F(), 236))
		{
			return 0;
		}
	}
	return 1;
}

int func_447(int iParam0, int iParam1)//Position - 0x12BEA
{
	if (func_421(iParam0) == iParam1)
	{
		return func_67(iParam0);
	}
	return 0;
}

int func_448()//Position - 0x12C07
{
	switch (func_44(unk_0xB5CEFD608600A09F()))
	{
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_449(int iParam0)//Position - 0x12C45
{
	if (func_442())
	{
		if (func_5(iParam0, 0, 1))
		{
			return func_114(iParam0);
		}
	}
	if ((func_5(iParam0, 0, 1) && func_446()) && func_41(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_450(char* sParam0)//Position - 0x12C8D
{
	unk_0xCB30200B8055CA57(sParam0);
}

int func_451()//Position - 0x12C9B
{
	int iVar0;
	
	if (Global_180517)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_452()//Position - 0x12CB7
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_180517)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_453(int iParam0, int iParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)//Position - 0x12CCF
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_452() && iParam3 < func_451())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_180517)
		{
			iVar0 += 16;
		}
		if (bParam19)
		{
			iVar0 = iParam18;
			if (iVar0 == -2)
			{
				iParam10 = -1;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1805CF == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0xA7F138B5B1AB2CF6(*iParam1))
		{
			if (unk_0x29CD142125FE177B(*iParam1, sVar1))
			{
				unk_0x1E1FB49121565EB6(iParam3);
				if (unk_0xFA30DFD0084E92FE(uParam2->f_21, 8) || uParam2->f_6C == 6)
				{
					func_450("");
				}
				else
				{
					unk_0x1E1FB49121565EB6(iParam9);
				}
				if (uParam2->f_6C == 6 && !unk_0xF1734B55490E9045(sParam16))
				{
					func_439(sParam16);
				}
				else
				{
					func_450(&(uParam2->f_1));
				}
				unk_0x1E1FB49121565EB6(iParam11);
				if (uParam2->f_6C == 6)
				{
					func_450("");
				}
				else
				{
					unk_0x1E1FB49121565EB6(65);
				}
				if (iParam12 == 1)
				{
					unk_0x1E1FB49121565EB6(iVar0);
				}
				else
				{
					unk_0x1E1FB49121565EB6(-1);
				}
				if (func_479())
				{
					func_450("");
				}
				else if (uParam2->f_6C == 6 && !unk_0xF1734B55490E9045(sParam16))
				{
					unk_0x57016C44F10111F0("FM_AE_ONE_INT");
					unk_0xC9C304D0AABE1335(sParam16);
					unk_0xAA5C5BF0489E5553(iParam17);
					unk_0x64989E60CF560CA1();
				}
				else if (uParam2->f_6C == 5 && !unk_0xF1734B55490E9045(sParam16))
				{
					unk_0x57016C44F10111F0("FM_AE_ONE_INT");
					unk_0xC9C304D0AABE1335(sParam16);
					unk_0xAA5C5BF0489E5553(iParam17);
					unk_0x64989E60CF560CA1();
				}
				else if (uParam2->f_6C == 7 && !unk_0xF1734B55490E9045(sParam16))
				{
					unk_0x57016C44F10111F0("FM_AE_TWO_INT");
					unk_0xC9C304D0AABE1335(sParam16);
					unk_0xAA5C5BF0489E5553(iParam17);
					unk_0x64989E60CF560CA1();
				}
				else if (uParam2->f_6C == 8 && !unk_0xF1734B55490E9045(&(uParam2->f_68)))
				{
					unk_0x57016C44F10111F0("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						unk_0x3AE7CB4034BE212F(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						unk_0xAA5C5BF0489E5553(iParam10);
					}
					unk_0xC9C304D0AABE1335(&(uParam2->f_68));
					unk_0x64989E60CF560CA1();
				}
				else if (uParam2->f_6C == 9)
				{
					unk_0x57016C44F10111F0("FM_AE_CASH");
					unk_0xBCDE00BFDE9A5BD1(iParam10, 1);
					unk_0x64989E60CF560CA1();
				}
				else if (uParam2->f_6C == 10)
				{
					if (iParam10 == 0)
					{
						unk_0x57016C44F10111F0("FM_AE_CASH");
						unk_0xBCDE00BFDE9A5BD1(iParam10, 1);
						unk_0x64989E60CF560CA1();
					}
					else
					{
						unk_0x57016C44F10111F0("FM_NG_CASH");
						unk_0xBCDE00BFDE9A5BD1(iParam10, 1);
						unk_0x64989E60CF560CA1();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !unk_0xF1734B55490E9045(&(uParam2->f_68)))
					{
						func_439(&(uParam2->f_68));
					}
					else
					{
						func_450("");
					}
				}
				else if (iParam14 != -1)
				{
					unk_0x57016C44F10111F0("STRING");
					unk_0x4C36886AAFD04CF8(iParam14, 6);
					unk_0x64989E60CF560CA1();
				}
				else if (fParam13 != -1f)
				{
					unk_0x57016C44F10111F0("NUMBER");
					unk_0x3AE7CB4034BE212F(fParam13, 1);
					unk_0x64989E60CF560CA1();
				}
				else if (iParam10 != -1)
				{
					unk_0x1E1FB49121565EB6(iParam10);
				}
				else
				{
					func_450("");
				}
				if (uParam2->f_6C == 6)
				{
					func_450("");
				}
				else
				{
					func_450(&sParam4);
				}
				func_441(uParam2, iParam0);
				if (iParam12 == 1 || unk_0xF1734B55490E9045(sParam8))
				{
					func_450("");
					func_450("");
				}
				else
				{
					unk_0x6A664E53A192232C(sParam8);
					unk_0x6A664E53A192232C(sParam8);
				}
				if (func_440(uParam2))
				{
					func_439("DPAD_FRIEND");
				}
				else if (func_438(uParam2))
				{
					func_439("DPAD_FRIEND");
				}
				else if (func_437(uParam2))
				{
					func_439("DPAD_CREW");
				}
				else
				{
					func_439("");
				}
				unk_0xF9FBC2F3F73D94C9();
			}
		}
	}
}

int func_454(int iParam0)//Position - 0x13032
{
	return 0;
	switch (iParam0)
	{
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_455(int iParam0, bool bParam1)//Position - 0x13056
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_78(iParam0)) && !func_76(iParam0))
	{
		iVar0 = func_456();
	}
	iVar1 = func_215(iParam0);
	if (!iVar1 == -1)
	{
		return func_213(iVar1);
	}
	return iVar0;
}

int func_456()//Position - 0x130A0
{
	return 21;
}

char* func_457(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x130AA
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (unk_0x8150E47F9B8C07E2())
			{
				if (bParam1)
				{
					return "AMCH_M_LB";
				}
				else if (bParam2)
				{
					return "AMCH_M";
				}
				else
				{
					return "AMCH_METRES";
				}
			}
			else if (bParam1)
			{
				return "AMCH_FT_LB";
			}
			else if (bParam2)
			{
				return "AMCH_FT";
			}
			else
			{
				return "AMCH_FEET";
			}
			break;
		
		case 2:
			if (unk_0x8150E47F9B8C07E2())
			{
				if (bParam1)
				{
					return "AMCH_KMH_LB";
				}
				else if (bParam2)
				{
					return "AMCH_KMHN";
				}
				else
				{
					return "AMCH_KMH";
				}
			}
			else if (bParam1)
			{
				return "AMCH_MPH_LB";
			}
			else if (bParam2)
			{
				return "AMCH_MPHN";
			}
			else
			{
				return "AMCH_MPH";
			}
			break;
		
		case 7:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else
			{
				return "AMCH_VEH";
			}
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else if (iParam3 != 1)
			{
				return "AMCH_KILLS";
			}
			else
			{
				return "AMCH_KILL";
			}
			break;
	}
	if (bParam1 || bParam2)
	{
		return "";
	}
	return "AMCH_EMPTY";
}

int func_458(var uParam0, float fParam1, int iParam2, int iParam3)//Position - 0x1323A
{
	if (func_462(iParam3))
	{
		*fParam1 = (func_459(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_454(iParam3))
	{
		*fParam1 = (func_459(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_459(int iParam0, int iParam1)//Position - 0x1328A
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (unk_0x8150E47F9B8C07E2())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_461(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
		
		case 2:
			if (unk_0x8150E47F9B8C07E2())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_460(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
	}
	return SYSTEM::TO_FLOAT(iParam1);
}

float func_460(float fParam0)//Position - 0x1332D
{
	return (fParam0 / 1.609344f);
}

float func_461(float fParam0)//Position - 0x1333D
{
	return (fParam0 / 0.3048f);
}

int func_462(int iParam0)//Position - 0x1334D
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_463(int iParam0)//Position - 0x133A9
{
	int iVar0;
	
	iVar0 = func_466(iParam0);
	if (iVar0 == -1)
	{
		func_464(iParam0, 1);
		return 0;
	}
	Global_14FA05[iVar0 /*5*/].f_4 = 1;
	return Global_14FA05[iVar0 /*5*/].f_2;
}

void func_464(int iParam0, bool bParam1)//Position - 0x133DF
{
	if (!func_5(iParam0, 0, 1))
	{
		return;
	}
	if (func_466(iParam0) != -1)
	{
		return;
	}
	if (Global_14FAA8)
	{
		if (iParam0 == Global_14FAA8.f_1)
		{
			return;
		}
	}
	if (func_465(iParam0))
	{
		return;
	}
	if (Global_14FACE >= 32)
	{
		return;
	}
	Global_14FAAD[Global_14FACE] = iParam0;
	Global_14FACE++;
	if (bParam1)
	{
	}
}

int func_465(int iParam0)//Position - 0x1344B
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_14FACE)
	{
		if (Global_14FAAD[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_466(int iParam0)//Position - 0x1347D
{
	int iVar0;
	
	if (!func_5(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_14FAA6 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_14FAA6)
	{
		if (Global_14FA05[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0x516A8073F5BF5F0A(Global_14FA05[iVar0 /*5*/].f_2) && unk_0xEB606E770B747B2C(Global_14FA05[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_467(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_467(int iParam0)//Position - 0x134FC
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	
	if (iParam0 >= Global_14FAA6)
	{
		return;
	}
	if (unk_0x516A8073F5BF5F0A(Global_14FA05[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_14FA05[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar1, unk_0xF392EEDDF2FB749A(Global_14FA05[iParam0 /*5*/].f_2), 64);
			unk_0x8F5E9D20607FC4FF(&cVar1, &cVar1, &cVar0, &cVar0);
		}
		unk_0x469C2D90A617CB9A(Global_14FA05[iParam0 /*5*/].f_2);
	}
	iVar2 = iParam0;
	iVar3 = iVar2 + 1;
	while (iVar3 < Global_14FAA6)
	{
		Global_14FA05[iVar2 /*5*/] = { Global_14FA05[iVar3 /*5*/] };
		iVar2++;
		iVar3++;
	}
	func_468(&(Global_14FA05[iVar2 /*5*/]));
	Global_14FAA6 = (Global_14FAA6 - 1);
}

void func_468(var uParam0)//Position - 0x135B2
{
	*uParam0 = 0;
	uParam0->f_1 = func_11();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x7AF0088ABFA713B6())
	{
		uParam0->f_3 = unk_0xED678C85A82F0AB9();
	}
}

struct<4> func_469(int iParam0)//Position - 0x135DF
{
	char cVar0[32];
	
	if (func_5(iParam0, 0, 1))
	{
		Global_26210D = { func_154(iParam0) };
		if (unk_0xF49912B78E2591B6())
		{
			if (func_428(Global_26210D))
			{
				if (!unk_0x43AECC0539840131(&Global_26210D))
				{
					return cVar0;
				}
			}
		}
		else if (!unk_0x5553DFDA03631860(0))
		{
			return cVar0;
		}
		if (func_473(&Global_26210D))
		{
			Global_2620C7 = { func_471(iParam0) };
			func_470(&Global_2620C7, &cVar0);
		}
	}
	return cVar0;
}

void func_470(var uParam0, char* sParam1)//Position - 0x13660
{
	unk_0x6B97B73981ADFBF1(uParam0, 35, sParam1);
}

struct<35> func_471(int iParam0)//Position - 0x13672
{
	struct<13> Var0;
	struct<35> Var1;
	
	if (func_472(iParam0))
	{
		return Global_140876[unk_0xB5CEFD608600A09F() /*35*/];
	}
	Var0 = { func_154(iParam0) };
	unk_0x24723877416AAAFC(&Var1, 35, &Var0);
	return Var1;
}

int func_472(int iParam0)//Position - 0x136AE
{
	if (iParam0 == unk_0xB5CEFD608600A09F())
	{
		return 1;
	}
	return 0;
}

int func_473(var uParam0)//Position - 0x136C4
{
	if (unk_0x97EF4023B86C354F())
	{
		if (unk_0xB9ACC1154C623363() && unk_0xD7F4457CECF10121(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_474(int iParam0, int iParam1)//Position - 0x136EA
{
	if (iParam1 == 26)
	{
		if ((func_77(iParam0) || func_477(iParam0)) || func_476(iParam0))
		{
			return 0;
		}
	}
	if (!func_475(iParam0))
	{
		return 0;
	}
	if ((!func_482(iParam0) && Global_24FB5C[iParam0 /*406*/].f_E8 == -1) && !func_12(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_475(int iParam0)//Position - 0x13759
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_8E, 22);
}

bool func_476(int iParam0)//Position - 0x13772
{
	if (func_77(iParam0))
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_18C80F[iParam0 /*558*/].f_1, 8);
}

int func_477(int iParam0)//Position - 0x13798
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0xFA30DFD0084E92FE(Global_18C80F[iParam0 /*558*/].f_1, 10) || unk_0xFA30DFD0084E92FE(Global_18C80F[iParam0 /*558*/].f_1, 9));
	}
	return 0;
}

int func_478(int iParam0)//Position - 0x137D6
{
	int iVar0;
	
	if (iParam0 == func_11())
	{
		return 0;
	}
	if (func_198(iParam0, 0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0xFA30DFD0084E92FE(Global_18402B[iVar0 /*770*/].f_8E, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_479()//Position - 0x1381B
{
	switch (func_44(unk_0xB5CEFD608600A09F()))
	{
		case 179:
		case 180:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 195:
		case 197:
		case 198:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
		case 206:
		case 207:
		case 208:
		case 209:
		case 211:
			return 1;
		
		default:
	}
	switch (func_421(unk_0xB5CEFD608600A09F()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_76(unk_0xB5CEFD608600A09F()))
	{
		switch (func_44(unk_0xB5CEFD608600A09F()))
		{
			case 148:
			case 151:
			case 152:
			case 153:
			case 157:
			case 159:
			case 162:
			case 164:
			case 142:
				return 1;
				break;
			}
	}
	if (func_447(unk_0xB5CEFD608600A09F(), 236))
	{
		return 1;
	}
	return 0;
}

int func_480(int iParam0, int iParam1)//Position - 0x13957
{
	if (Global_18C80F[iParam0 /*558*/].f_B.f_21 != -1 && func_36(Global_18C80F[iParam0 /*558*/].f_B.f_21))
	{
		return 1;
	}
	if (iParam1 && Global_18C80F[iParam0 /*558*/].f_B.f_20 != -1)
	{
		if (func_36(Global_18C80F[iParam0 /*558*/].f_B.f_20))
		{
			return 1;
		}
	}
	return 0;
}

void func_481(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x139BD
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_5(unk_0x3171C34AB3FE6F2E(iVar0), 0, 1))
		{
			iVar1 = unk_0x3171C34AB3FE6F2E(iVar0);
			if (!func_198(iVar1, 0))
			{
				if ((func_482(iVar1) || Global_24FB5C[iVar1 /*406*/].f_E8 != -1) || func_12(iVar1))
				{
					if (func_637(iVar1, iParam1, 0))
					{
						(*iParam0)[iVar0] = *iParam2;
						*iParam2++;
						*iParam3++;
					}
				}
			}
		}
		iVar0++;
	}
}

int func_482(int iParam0)//Position - 0x13A47
{
	if (func_5(iParam0, 0, 1))
	{
		if (func_5(unk_0xB5CEFD608600A09F(), 0, 1))
		{
			if (unk_0x75206900382D1E30(iParam0, unk_0xB5CEFD608600A09F()) || func_44(iParam0) == 233)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_483(int iParam0, int iParam1, int iParam2)//Position - 0x13A88
{
	if (unk_0xA7F138B5B1AB2CF6(*iParam0))
	{
		unk_0x29CD142125FE177B(*iParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x1E1FB49121565EB6(iParam1);
		unk_0x1E1FB49121565EB6(iParam2);
		unk_0xF9FBC2F3F73D94C9();
	}
}

void func_484(bool bParam0)//Position - 0x13AB6
{
	if (bParam0)
	{
		if (Global_14CC7E.f_2 == 0)
		{
			Global_14CC7E.f_2 = 1;
		}
	}
	else if (Global_14CC7E.f_2 == 1)
	{
		Global_14CC7E.f_2 = 0;
	}
}

void func_485()//Position - 0x13AE8
{
	if (unk_0xFA30DFD0084E92FE(Global_267214.f_11DD, 1))
	{
		if (func_79())
		{
			func_486();
		}
	}
}

void func_486()//Position - 0x13B0A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_252E21.f_A8F[iVar0 /*80*/].f_2 != 0)
		{
			Global_252E21.f_A8F[iVar0 /*80*/].f_2 = 5;
			unk_0xF0059F27F7BB6680(&(Global_252E21.f_A8F[iVar0 /*80*/].f_45), 0);
		}
		iVar0++;
	}
}

int func_487()//Position - 0x13B55
{
	if (unk_0xFA30DFD0084E92FE(Global_267214.f_11DD, 0) && func_79())
	{
		return 1;
	}
	if (unk_0xFA30DFD0084E92FE(Global_267214.f_11DD, 1) && func_79())
	{
		return 1;
	}
	return 0;
}

int func_488()//Position - 0x13B96
{
	if (func_79())
	{
		if (func_489(Global_252E21.f_A8F[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_489(int iParam0)//Position - 0x13BBD
{
	switch (iParam0)
	{
		case 88:
		case 87:
		case 91:
		case 92:
		case 86:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
			return 1;
		
		default:
	}
	return 0;
}

int func_490()//Position - 0x13C3D
{
	if (func_79())
	{
		if (func_491(Global_252E21.f_A8F[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_491(int iParam0)//Position - 0x13C64
{
	switch (iParam0)
	{
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
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
		case 81:
		case 82:
		case 83:
			return 1;
		
		default:
	}
	return 0;
}

void func_492(int iParam0)//Position - 0x13CF6
{
	if (Global_14CC7E.f_1 != Global_14CC7E)
	{
		Global_14CC7E.f_1 = Global_14CC7E;
	}
	if (Global_14CC7E != iParam0)
	{
		Global_14CC7E = iParam0;
	}
}

int func_493(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)//Position - 0x13D24
{
	struct<4> Var0;
	char* sVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	char* sVar5;
	int iVar6;
	
	StringCopy(&Var0, "", 16);
	bVar3 = func_538(iParam1);
	if (iParam1 == 20)
	{
		bVar2 = true;
	}
	fVar4 = func_537();
	if (iParam1 == 26 || iParam1 == 27)
	{
		if (func_536())
		{
			if (func_535() > 0 && Global_180517)
			{
				unk_0xE9DBADA362313538();
				unk_0xE7918A3D05166D98(fVar4);
				unk_0x4E0EC60D119222B1(18);
				if (unk_0xF16DAFF595E80F7C())
				{
					unk_0x39CC55A2108C1AB0();
				}
				unk_0x4E0EC60D119222B1(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_520())
		{
			func_519(iParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0xFA30DFD0084E92FE(Global_267214.f_11E0, 26))
	{
		func_519(iParam0, uParam2, 1);
		return 0;
	}
	if (!func_21(&(uParam2->f_13)))
	{
		if (func_535() == 1)
		{
			func_518(bVar3, iParam0, 0);
			func_20(&(uParam2->f_13), 0, 0);
			func_519(iParam0, uParam2, 0);
			unk_0xF0059F27F7BB6680(&(Global_267214.f_11E1), 5);
		}
	}
	if (func_21(&(uParam2->f_13)) || bParam5)
	{
		if (unk_0xF16DAFF595E80F7C())
		{
			unk_0x39CC55A2108C1AB0();
		}
		unk_0x4E0EC60D119222B1(10);
		if (func_19(&(uParam2->f_13), 10000, 0) || (func_535() == 0 && !bParam5))
		{
			func_519(iParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar2 == 0)
			{
				func_517();
				if (iParam1 == 26 || iParam1 == 27)
				{
					unk_0xE9DBADA362313538();
				}
				unk_0x4E0EC60D119222B1(18);
			}
			if (!unk_0xFA30DFD0084E92FE(uParam2->f_21, 0))
			{
				if (bVar2 == 0)
				{
					func_517();
					if (iParam1 == 26 || iParam1 == 27)
					{
						unk_0xE9DBADA362313538();
					}
					unk_0x4E0EC60D119222B1(18);
				}
				unk_0xE7918A3D05166D98(fVar4);
				if (func_518(bVar3, iParam0, 0))
				{
					func_483(iParam0, 0, 0);
					sVar1 = func_515(iParam1, &(Global_440000.f_1EF3F), bParam4);
					Var0 = { func_513(iParam1) };
					if (bParam4)
					{
						func_510(iParam0, sVar1, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 26)
					{
						func_503(iParam0, func_507(uParam2), func_504(uParam2), -1);
					}
					else if (iParam1 == 27)
					{
						sVar5 = func_501(uParam2);
						if (!unk_0xF1734B55490E9045(sParam6))
						{
							sVar5 = sParam6;
						}
						func_499(iParam0, sVar5, func_500(), -1);
					}
					else if (func_442())
					{
						uParam2->f_22 = Global_180516;
						func_510(iParam0, sVar1, &Var0, 1, -1, Global_180516, 1);
					}
					else if (bVar2)
					{
						uParam2->f_22 = Global_180516;
						func_510(iParam0, sVar1, "", 0, -1, Global_180516, 1);
					}
					else
					{
						iVar6 = func_494(iParam1);
						func_510(iParam0, sVar1, &Var0, 1, iVar6, -1, 1);
					}
					unk_0xF0059F27F7BB6680(&(uParam2->f_21), 0);
				}
			}
			if (unk_0xFA30DFD0084E92FE(uParam2->f_21, 0))
			{
				Global_180515 = uParam3;
				Global_180514 = 1;
				unk_0xE7918A3D05166D98(fVar4);
				if (bVar2)
				{
					if (uParam2->f_22 != Global_180516)
					{
						unk_0x7CB6FD92BE491AD9(&(uParam2->f_21), 0);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_494(int iParam0)//Position - 0x13FFA
{
	int iVar0;
	
	iVar0 = -1;
	if (func_498())
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 3;
			break;
		
		case 2:
			iVar0 = 3;
			break;
		
		case 1:
			iVar0 = 6;
			break;
		
		case 3:
			iVar0 = 5;
			break;
		
		case 25:
			iVar0 = 21;
			break;
		
		case 4:
		case 5:
		case 6:
		case 8:
		case 9:
		case 10:
		case 11:
			iVar0 = 4;
			break;
		
		case 7:
			iVar0 = 10;
			break;
		
		case 12:
		case 13:
		case 14:
		case 17:
			iVar0 = 2;
			break;
		
		case 15:
			iVar0 = 17;
			break;
		
		case 16:
			iVar0 = 18;
			break;
		
		case 18:
			if (func_497(unk_0xB5CEFD608600A09F()))
			{
				iVar0 = 20;
			}
			if (func_496(unk_0xB5CEFD608600A09F()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_495(unk_0xB5CEFD608600A09F()))
	{
		iVar0 = 2;
	}
	if (func_177())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_495(int iParam0)//Position - 0x1410B
{
	return Global_24FB5C[iParam0 /*406*/].f_6F == 4;
}

bool func_496(int iParam0)//Position - 0x14120
{
	return Global_24FB5C[iParam0 /*406*/].f_6F == 7;
}

bool func_497(int iParam0)//Position - 0x14135
{
	return Global_24FB5C[iParam0 /*406*/].f_6F == 2;
}

bool func_498()//Position - 0x1414A
{
	return Global_440000.f_1 == 0;
}

void func_499(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x1415A
{
	if (unk_0xA7F138B5B1AB2CF6(*iParam0))
	{
		unk_0x29CD142125FE177B(*iParam0, "SET_TITLE");
		if (unk_0xF1734B55490E9045(sParam2))
		{
			func_439(sParam1);
		}
		else
		{
			unk_0x57016C44F10111F0("FM_AE_BRACKT");
			unk_0xC9C304D0AABE1335(sParam1);
			unk_0xC9C304D0AABE1335(sParam2);
			unk_0x64989E60CF560CA1();
		}
		func_439("");
		if (iParam3 != -1)
		{
			unk_0x1E1FB49121565EB6(iParam3);
		}
		unk_0xF9FBC2F3F73D94C9();
	}
}

char* func_500()//Position - 0x141BA
{
	switch (func_44(unk_0xB5CEFD608600A09F()))
	{
		case 163:
			return "BD_SORT_1";
			break;
		
		case 160:
			return "BD_SORT_4";
			break;
		
		case 154:
			return "BD_SORT_3";
			break;
		
		case 155:
			return "BD_SORT_3";
			break;
	}
	return "";
}

char* func_501(var uParam0)//Position - 0x14213
{
	switch (uParam0->f_70)
	{
		case 0:
			return "GR_DPD_E";
			break;
		
		case 1:
			return "GR_DPD_F";
			break;
		
		case 2:
			return "GR_DPD_S";
			break;
	}
	switch (uParam0->f_6E)
	{
		case 0:
			return "GR_DPD_A";
			break;
		
		case 1:
			return "GR_DPD_B";
			break;
		
		case 2:
			return "GR_DPD_C";
			break;
		
		case 3:
			return "GR_DPD_D";
			break;
	}
	switch (func_44(unk_0xB5CEFD608600A09F()))
	{
		case 233:
			return "H2_DPAD_SET";
			break;
		
		case 180:
			return "GB_BIGUNLOAD_T";
			break;
		
		case 182:
			return "DEAL_DEALN";
			break;
		
		case 194:
			return "PI_BIK_13_0";
			break;
		
		case 189:
			return "PI_BIK_4_1";
			break;
		
		case 193:
			return "PI_BIK_13_1";
			break;
		
		case 205:
			return "PI_BIK_13_3";
			break;
		
		case 186:
			return "CELL_BIKER_CK";
			break;
		
		case 207:
			return "DV_SH_TITLE";
			break;
		
		case 208:
			return "BA_SH_TITLE";
			break;
		
		case 209:
			return "SHU_SH_TITLE";
			break;
		
		case 210:
			return "PI_BIK_13_4";
			break;
		
		case 183:
			return "CELL_BIKER_RESC";
			break;
		
		case 199:
			return "CELL_BIKER_SEAR";
			break;
		
		case 201:
			return "CELL_BIKER_STAN";
			break;
		
		case 142:
			return "PIM_MAGM210";
			break;
		
		case 163:
			return "PIM_MAGM608";
			break;
		
		case 160:
			return "PIM_MAGM604";
			break;
		
		case 154:
			return "PIM_MAGM602";
			break;
		
		case 155:
			return "PIM_MAGM603";
			break;
		
		case 148:
			if (func_39())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_50(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_50(1))
			{
				return "PI_BIK_3_2";
			}
			return "PIM_MAGM601";
			break;
		
		case 157:
			return "PIM_MAGM207";
			break;
		
		case 159:
			return "PIM_MAGM206";
			break;
		
		case 162:
			return "PIM_MAGM607";
			break;
		
		case 164:
			return "PIM_MAGM212";
			break;
		
		case 166:
			return "GB_DPAD_HEAD";
		
		case 167:
			return "GB_DPAD_BUY";
		
		case 168:
			return "GB_DPAD_SELL";
		
		case 169:
			return "GB_DPAD_DEF";
		
		case 170:
			return "GB_DPAD_AIR";
		
		case 171:
			return "GB_DPAD_CASH";
		
		case 172:
			return "GB_DPAD_SAL";
		
		case 173:
			return "GB_DPAD_FRA";
		
		case 178:
			return "VEX_TITLEa";
		
		case 188:
			return "VEX_TITLEb";
		
		case 218:
			return "FRT_MODE";
		
		case 217:
			return "FRT_TRNS";
		
		case 214:
			return "MODE_PLW";
		
		case 215:
			return "MODE_FUL";
		
		case 216:
			return "MODE_AA";
		
		case 219:
			return "MODE_VEL";
		
		case 220:
			return "MODE_RMP";
		
		case 221:
			return "MODE_STK";
		
		case 225:
			return "GR_TITLEL";
		
		case 226:
			return "GRS_TITLEL";
		
		case 227:
			return "GRD_TITLEL";
		
		case 195:
			return "GB_STEAL_T";
		
		case 198:
			return "SC_MENU_TITLE";
		
		case 190:
			return "GB_DPAD_BSEL";
		
		case 191:
			return "GB_DPAD_BDEF";
		
		case 185:
			return "GB_DPAD_GFH";
		
		case 197:
			return "GB_DPAD_JB";
		
		case 179:
			return "CELL_JOUST";
		
		case 200:
			return "CAG_BLIP";
		
		case 192:
			if (func_502(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_B0))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_502(int iParam0)//Position - 0x14640
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

void func_503(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x14672
{
	if (unk_0xA7F138B5B1AB2CF6(*iParam0))
	{
		unk_0x29CD142125FE177B(*iParam0, "SET_TITLE");
		if (unk_0xF1734B55490E9045(sParam2))
		{
			func_439(sParam1);
		}
		else if (func_421(unk_0xB5CEFD608600A09F()) == 133)
		{
			unk_0x57016C44F10111F0("FM_AE_BRACKT_C");
			unk_0xC9C304D0AABE1335(sParam1);
			unk_0xC9C304D0AABE1335(sParam2);
			unk_0x64989E60CF560CA1();
		}
		else
		{
			unk_0x57016C44F10111F0("FM_AE_BRACKT");
			unk_0xC9C304D0AABE1335(sParam1);
			unk_0xC9C304D0AABE1335(sParam2);
			unk_0x64989E60CF560CA1();
		}
		func_439("");
		if (iParam3 != -1)
		{
			unk_0x1E1FB49121565EB6(iParam3);
		}
		unk_0xF9FBC2F3F73D94C9();
	}
}

char* func_504(var uParam0)//Position - 0x146FA
{
	int iVar0;
	
	iVar0 = func_421(unk_0xB5CEFD608600A09F());
	if (func_506())
	{
		if (uParam0->f_67 != -1)
		{
			iVar0 = uParam0->f_67;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "";
		
		case 132:
			return "FM_AE_SORT_5";
		
		case 133:
			switch (func_505())
			{
				case 0:
					return "FM_AE_SORT_2";
				
				case 1:
					return "FM_AE_SORT_2";
				
				case 2:
					return "FM_AE_SORT_3";
				
				case 3:
					return "FM_AE_SORT_2";
				
				case 4:
					return "FM_AE_SORT_2";
				
				case 5:
					return "FM_AE_SORT_2";
				
				case 6:
					return "FM_AE_SORT_2";
				
				case 7:
					return "FM_AE_SORT_13";
				
				case 8:
					return "FM_AE_SORT_4";
				
				case 9:
					return "FM_AE_SORT_2";
				
				case 10:
					return "FM_AE_SORT_2";
				
				case 11:
					return "FM_AE_SORT_2";
				
				case 12:
					return "FM_AE_SORT_2";
				
				case 13:
					return "FM_AE_SORT_2";
				
				case 14:
					return "FM_AE_SORT_5";
				
				case 15:
					return "FM_AE_SORT_9";
				
				case 16:
					return "FM_AE_SORT_9";
				
				case 17:
					return "FM_AE_SORT_9";
				
				case 18:
					return "FM_AE_SORT_9";
				
				default:
			}
			break;
		
		case 136:
			return "";
		
		case 138:
			return "";
		
		case 139:
			return "FM_AE_SORT_10";
		
		case 140:
			return "";
		
		case 141:
			return "FM_AE_SORT_5";
		
		case 144:
			return "FM_AE_SORT_1";
		
		case 129:
			return "FM_AE_SORT_9";
	}
	return "";
}

int func_505()//Position - 0x148AA
{
	if (func_421(unk_0xB5CEFD608600A09F()) == 133)
	{
		return Global_267214.f_12C3;
	}
	return -1;
}

bool func_506()//Position - 0x148CD
{
	return Global_183FAC;
}

char* func_507(var uParam0)//Position - 0x148D9
{
	int iVar0;
	
	iVar0 = func_421(unk_0xB5CEFD608600A09F());
	if (func_506())
	{
		if (uParam0->f_67 != -1)
		{
			iVar0 = uParam0->f_67;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "PIM_TA9";
		
		case 132:
			if (func_509() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_509() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_505())
			{
				case 0:
					return "AMCH_0SLC";
				
				case 1:
					return "AMCH_1SLC";
				
				case 2:
					return "AMCH_2SLC";
				
				case 3:
					return "AMCH_3SLC";
				
				case 4:
					return "AMCH_4SLC";
				
				case 5:
					return "AMCH_5SLC";
				
				case 6:
					return "AMCH_6SLC";
				
				case 7:
					return "AMCH_7SLC";
				
				case 8:
					return "AMCH_8SLC";
				
				case 9:
					return "AMCH_12SLC";
				
				case 10:
					return "AMCH_13SLC";
				
				case 11:
					return "AMCH_15SLC";
				
				case 12:
					return "AMCH_16SLC";
				
				case 13:
					return "AMCH_23SLC";
				
				case 14:
					return "AMCH_9SLC";
				
				case 15:
					return "AMCH_19SLC";
				
				case 16:
					return "AMCH_20SLC";
				
				case 17:
					return "AMCH_21SLC";
				
				case 18:
					return "AMCH_22SLC";
				
				default:
			}
			break;
		
		case 136:
			return "PIM_TA10";
		
		case 138:
			return "PIM_TA4";
		
		case 139:
			return "PIM_TA5";
		
		case 140:
			return "PIM_TA3";
		
		case 141:
			return "PIM_TA8";
		
		case 144:
			return "PIM_TA2";
		
		case 129:
			if (func_508() == 1)
			{
				return "FM_AE_TITL_12";
			}
			else
			{
				return "PIM_TA7";
			}
			break;
		
		case 146:
			return "PIM_TA6";
	}
	return "";
}

int func_508()//Position - 0x14ACF
{
	return Global_267214.f_12C6;
}

int func_509()//Position - 0x14ADE
{
	if (func_421(unk_0xB5CEFD608600A09F()) == 132)
	{
		return Global_267214.f_12C1;
	}
	return -1;
}

void func_510(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)//Position - 0x14B01
{
	int iVar0;
	int iVar1;
	
	if (unk_0xA7F138B5B1AB2CF6(*iParam0))
	{
		unk_0x29CD142125FE177B(*iParam0, "SET_TITLE");
		if (bParam3)
		{
			func_450(sParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0x57016C44F10111F0(sParam1);
			unk_0xAA5C5BF0489E5553(iParam5);
			unk_0x64989E60CF560CA1();
		}
		else
		{
			func_439(sParam1);
		}
		if (func_536() && iParam6)
		{
			if (func_512())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			unk_0x57016C44F10111F0("LBD_DPD_CNT");
			unk_0xAA5C5BF0489E5553(iVar0);
			unk_0xAA5C5BF0489E5553(iVar1);
			unk_0x64989E60CF560CA1();
		}
		else
		{
			func_439(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0x1E1FB49121565EB6(iParam4);
			if (func_511(unk_0xB5CEFD608600A09F()))
			{
				unk_0x1E1FB49121565EB6(166);
			}
			else if (func_179())
			{
				unk_0x1E1FB49121565EB6(220);
			}
		}
		unk_0xF9FBC2F3F73D94C9();
	}
}

int func_511(int iParam0)//Position - 0x14BC2
{
	if (func_497(iParam0) || func_496(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_512()//Position - 0x14BE4
{
	return Global_180517;
}

struct<4> func_513(int iParam0)//Position - 0x14BF0
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_514(unk_0xB5CEFD608600A09F()) || func_495(unk_0xB5CEFD608600A09F()))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 12:
		case 13:
		case 14:
		case 17:
		case 15:
		case 16:
		case 18:
			StringCopy(&Var0, "LBD_DIF_", 16);
			StringIntConCat(&Var0, Global_440000.f_22, 16);
			break;
	}
	if (func_442() && unk_0x517823CA390A19F6())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_440000.f_22, 16);
	}
	return Var0;
}

bool func_514(int iParam0)//Position - 0x14C8C
{
	return Global_24FB5C[iParam0 /*406*/].f_6F == 5;
}

char* func_515(int iParam0, char* sParam1, bool bParam2)//Position - 0x14CA1
{
	var uVar0;
	
	if (iParam0 == 20 && (!func_442() || unk_0xF1734B55490E9045(sParam1)))
	{
		uVar0 = func_516();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 24)
	{
		if (Global_1805E1 == 0)
		{
			Global_1805E1 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!unk_0xF1734B55490E9045(sParam1))
	{
		if (Global_1805E1 == 1)
		{
			Global_1805E1 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1805E1 == 0)
		{
			Global_1805E1 = 1;
		}
		switch (iParam0)
		{
			case 0:
				return "HUD_LBD_DM";
				break;
			
			case 1:
				return "HUD_LBD_TDM";
				break;
			
			case 5:
				return "HUD_LBD_GRCE";
				break;
			
			case 4:
			case 9:
			case 10:
			case 6:
			case 25:
			case 11:
				return "HUD_LBD_RCE";
				break;
			
			case 7:
				return "HUD_LBD_BRCE";
				break;
			
			case 18:
			case 14:
			case 17:
			case 15:
			case 13:
			case 12:
			case 16:
			case 19:
				return "HUD_TITLEMC";
				break;
			
			case 3:
				return "HUD_LBD_HRD";
				break;
			
			case 21:
				return "HUD_LBD_SHOO";
				break;
			}
	}
	return sParam1;
}

char* func_516()//Position - 0x14DFF
{
	if (unk_0xB3132AD292C8DA36())
	{
		return "HUD_LBD_FMF";
	}
	if (unk_0x2C748E7CAA8D1D06())
	{
		return "HUD_LBD_FMC";
	}
	if (unk_0x9115F2BCE1FD06B6())
	{
		return "HUD_LBD_FMS";
	}
	if (unk_0x5CE1D384CAEEB356())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_517()//Position - 0x14E43
{
	Global_8FCD = 1;
}

bool func_518(bool bParam0, int iParam1, bool bParam2)//Position - 0x14E4F
{
	if (bParam0)
	{
		*iParam1 = unk_0x9934FEFB3B8C6DB8("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*iParam1 = unk_0x9934FEFB3B8C6DB8("MP_SPECTATOR_CARD");
	}
	else
	{
		*iParam1 = unk_0x9934FEFB3B8C6DB8("mp_matchmaking_card");
	}
	return unk_0xA7F138B5B1AB2CF6(*iParam1);
}

void func_519(int iParam0, var uParam1, bool bParam2)//Position - 0x14E8F
{
	unk_0x7CB6FD92BE491AD9(&(uParam1->f_21), 7);
	Global_180515 = 0;
	func_432();
	Global_180514 = 0;
	uParam1->f_1B = 0;
	if (bParam2)
	{
		if (func_21(&(uParam1->f_13)))
		{
			func_8(&(uParam1->f_13));
			unk_0x7CB6FD92BE491AD9(&(Global_267214.f_11E1), 5);
		}
	}
	if (unk_0xA7F138B5B1AB2CF6(*iParam0))
	{
		unk_0xB0B0FE33F4F22679(iParam0);
	}
	if (unk_0xFA30DFD0084E92FE(uParam1->f_21, 0))
	{
		unk_0x7CB6FD92BE491AD9(&(uParam1->f_21), 0);
	}
	unk_0xE7918A3D05166D98(0f);
}

int func_520()//Position - 0x14F01
{
	if (func_534())
	{
		return 0;
	}
	if (func_533())
	{
		return 0;
	}
	if (!func_531())
	{
		return 0;
	}
	if (!func_529())
	{
		return 0;
	}
	if (func_528(8, -1))
	{
		return 0;
	}
	if (func_535() == 2)
	{
		return 0;
	}
	if (Global_267214.f_11B1)
	{
		return 0;
	}
	if (func_527())
	{
		return 0;
	}
	else if (!func_524(unk_0xB5CEFD608600A09F(), 1) && Global_1403E4[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_523(1) || func_521(1)) || Global_4336.f_7C) || Global_4336)
	{
		return 0;
	}
	if (unk_0xE186ACC7BE9B244E())
	{
		return 0;
	}
	if (func_224(unk_0xB5CEFD608600A09F()))
	{
		return 0;
	}
	if (Global_193981)
	{
		return 0;
	}
	if (Global_193985)
	{
		return 0;
	}
	if (func_187(0))
	{
		return 0;
	}
	if (unk_0xFA30DFD0084E92FE(Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_111.f_13, 4))
	{
		return 0;
	}
	if (Global_14B1E6)
	{
		return 0;
	}
	if ((Global_199A7E.f_2C1.f_5 || Global_19A579.f_2C1.f_5) || Global_1996C1.f_2C1.f_5)
	{
		return 0;
	}
	return 1;
}

int func_521(bool bParam0)//Position - 0x15049
{
	if (unk_0x546584EE3E61A6C6())
	{
		if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
		{
			if (func_522(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x8FCEEB789599BD9B(0, 25) || unk_0x8FCEEB789599BD9B(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_4336.f_82)
	{
		return 0;
	}
	if (unk_0x8FCEEB789599BD9B(0, 19) || (!bParam0 && unk_0xD3C4A010282C31F2(0, 19)))
	{
		return 1;
	}
	if (unk_0x8ACB0C3FACC09467())
	{
		if (((unk_0x8FCEEB789599BD9B(0, 166) || unk_0x8FCEEB789599BD9B(0, 167)) || unk_0x8FCEEB789599BD9B(0, 168)) || unk_0x8FCEEB789599BD9B(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0xD3C4A010282C31F2(0, 166) || unk_0xD3C4A010282C31F2(0, 167)) || unk_0xD3C4A010282C31F2(0, 168)) || unk_0xD3C4A010282C31F2(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_522(int iParam0)//Position - 0x15134
{
	int iVar0;
	
	if (unk_0xADF4D6B0407B3CC1())
	{
		if (!unk_0x36CEFBE9B745A58D(iParam0))
		{
			unk_0x9CDD10270A1ACF6F(iParam0, &iVar0, 1);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == 177293209)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_523(bool bParam0)//Position - 0x15191
{
	if (bParam0)
	{
		return (Global_4336.f_4 && Global_4336.f_68 == 4);
	}
	return Global_4336.f_4;
}

int func_524(int iParam0, bool bParam1)//Position - 0x151BA
{
	if (bParam1)
	{
		if (func_525(iParam0))
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

bool func_525(int iParam0)//Position - 0x151E6
{
	return func_526(iParam0);
}

bool func_526(int iParam0)//Position - 0x151F4
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_D.f_1, 0);
}

bool func_527()//Position - 0x1520E
{
	return Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_C4 != 0;
}

bool func_528(int iParam0, int iParam1)//Position - 0x15225
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

int func_529()//Position - 0x15260
{
	if (func_530() == 0)
	{
		return 1;
	}
	return 0;
}

int func_530()//Position - 0x15275
{
	return Global_1406D2.f_12;
}

int func_531()//Position - 0x15283
{
	if (func_532())
	{
		return 1;
	}
	if (unk_0x17FAADF9916EF741())
	{
		return 0;
	}
	if (unk_0x422F9EDE839E6ABB() || unk_0x26641E1BFD792DBC())
	{
		return 0;
	}
	if (unk_0xF6023EB13558345B())
	{
		return 0;
	}
	return 1;
}

bool func_532()//Position - 0x152C2
{
	return Global_1406B6;
}

bool func_533()//Position - 0x152CE
{
	return Global_18402B[unk_0xB5CEFD608600A09F() /*770*/] == 5;
}

bool func_534()//Position - 0x152E3
{
	return unk_0x105601648511CC64() <= Global_43C1.f_1671 + 100;
}

int func_535()//Position - 0x152F8
{
	return Global_14CC81.f_44;
}

int func_536()//Position - 0x15306
{
	if (Global_180516 > 16)
	{
		return 1;
	}
	return 0;
}

float func_537()//Position - 0x1531C
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0xFAD6B644971DD747()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_538(int iParam0)//Position - 0x15340
{
	switch (iParam0)
	{
		case 20:
		case 26:
		case 27:
			return 1;
			break;
	}
	return 0;
}

int func_539()//Position - 0x15369
{
	if (func_540(unk_0xB5CEFD608600A09F()))
	{
		return Global_141780;
	}
	return 0;
}

int func_540(int iParam0)//Position - 0x15384
{
	if (unk_0x7AF0088ABFA713B6())
	{
		if (func_198(iParam0, 0))
		{
			return unk_0xE502970386494D01(iParam0);
		}
	}
	return 0;
}

int func_541()//Position - 0x153A7
{
	if (func_539())
	{
		return 1;
	}
	if (func_476(unk_0xB5CEFD608600A09F()))
	{
		return 0;
	}
	if (func_506())
	{
		return 1;
	}
	if (func_78(unk_0xB5CEFD608600A09F()))
	{
		switch (func_421(unk_0xB5CEFD608600A09F()))
		{
			case 131:
			case 132:
			case 133:
			case 136:
			case 138:
			case 139:
			case 141:
			case 144:
			case 146:
				return 1;
				break;
			
			case 140:
				if (!func_542(unk_0xB5CEFD608600A09F()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_542(unk_0xB5CEFD608600A09F()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_542(unk_0xB5CEFD608600A09F()))
				{
					return 1;
				}
				break;
			
			case 175:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_542(int iParam0)//Position - 0x15482
{
	return unk_0xFA30DFD0084E92FE(Global_18C80F[iParam0 /*558*/].f_1, 4);
}

int func_543(int iParam0)//Position - 0x1549A
{
	if (iParam0 == 27)
	{
		if ((func_78(unk_0xB5CEFD608600A09F()) && !func_76(unk_0xB5CEFD608600A09F())) && !func_447(unk_0xB5CEFD608600A09F(), 236))
		{
			return 1;
		}
	}
	if (iParam0 == 26)
	{
		if (func_45(unk_0xB5CEFD608600A09F(), 0) && func_76(unk_0xB5CEFD608600A09F()))
		{
			return 1;
		}
		if (func_63(unk_0xB5CEFD608600A09F()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

void func_544(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0x1550B
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (bParam5)
	{
		iVar0 = func_421(unk_0xB5CEFD608600A09F());
		Global_196A5F = iVar0;
		Global_196A5F.f_1 = iParam0;
		if (func_131() != func_11())
		{
			Global_196A5F.f_2 = func_406(func_131());
			Global_196A5F.f_3 = func_405(func_131());
		}
		if (func_29() != func_11())
		{
			func_130(func_29(), &(Global_196A5F.f_2), &(Global_196A5F.f_3));
		}
		Global_196A5F.f_7 = unk_0xB99C193A32DE341D();
		Global_196A5F.f_1C = func_411(unk_0xB5CEFD608600A09F());
		Global_196A5F.f_D = 0;
		Global_196A5F.f_E = 0;
		if (func_229(unk_0xB5CEFD608600A09F(), 1))
		{
			Global_196A5F.f_17 = func_414(func_50(1));
		}
	}
	else
	{
		iVar0 = func_44(unk_0xB5CEFD608600A09F());
	}
	if (iParam2 || func_47(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
			iVar0 = iParam3;
		}
		Global_19695A = iVar0;
		if (func_102(iVar0))
		{
			Global_19695A.f_1 = 4;
		}
		else if (func_407(iVar0))
		{
			Global_19695A.f_1 = 5;
		}
		else if (func_37(iVar0, 0))
		{
			Global_19695A.f_1 = 2;
			if (func_97(iVar0))
			{
				Global_19695A.f_1 = 3;
			}
		}
		else
		{
			Global_19695A.f_1 = 1;
		}
		if (func_131() != func_11())
		{
			Global_19695A.f_4 = func_406(func_131());
			Global_19695A.f_5 = func_405(func_131());
		}
		if (func_29() != func_11())
		{
			func_130(func_29(), &(Global_19695A.f_6), &(Global_19695A.f_7));
		}
		Global_19695A.f_9 = unk_0xB99C193A32DE341D();
		if (iVar0 == 148 || iVar0 == 179)
		{
			Global_19695A.f_1B = 1;
			Global_19695A.f_1C = 1;
		}
		if (iParam0 != -1)
		{
			Global_19695A.f_1A = iParam0;
		}
		if (iParam1 != 0)
		{
			Global_19695A.f_28 = func_124(iParam1);
			Global_19695A.f_29 = func_567();
			Global_19695A.f_2A = func_282(unk_0xB5CEFD608600A09F(), iParam1);
			Global_19695A.f_2C = func_401(unk_0xB5CEFD608600A09F(), iParam1);
		}
		if (!func_113() || iVar0 != 192)
		{
			Global_19695A.f_35 = 0;
		}
	}
	else if (func_95(iVar0))
	{
		if (iVar0 == 225 || iVar0 == 226)
		{
			Global_1969CF = iParam0 + 1;
		}
		else if (iVar0 == 227)
		{
			Global_1969CF = iParam0 + 1;
		}
		else
		{
			Global_1969CF = func_566(unk_0xB5CEFD608600A09F());
		}
		switch (iVar0)
		{
			case 225:
				if (func_91(unk_0xB5CEFD608600A09F()) == 0)
				{
					Global_1969CF.f_1 = 0;
				}
				else
				{
					Global_1969CF.f_1 = 1;
				}
				break;
			
			case 226:
				Global_1969CF.f_1 = 2;
				break;
			
			case 227:
				Global_1969CF.f_1 = 3;
				break;
		}
		Global_1969CF.f_15 = 1;
		Global_1969CF.f_16 = 1;
		if (func_131() != func_11())
		{
			Global_1969CF.f_4 = func_406(func_131());
			Global_1969CF.f_5 = func_405(func_131());
		}
		if (func_29() != func_11())
		{
			func_130(func_29(), &(Global_1969CF.f_4), &(Global_1969CF.f_5));
		}
		Global_1969CF.f_8 = unk_0xB99C193A32DE341D();
		if (iParam0 != -1)
		{
			Global_1969CF.f_14 = iParam0;
		}
	}
	else if (func_55(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
		}
		Global_196990 = iVar0;
		Global_19695A.f_1 = 1;
		if (func_131() != func_11())
		{
			Global_196990.f_4 = func_406(func_131());
			Global_196990.f_5 = func_405(func_131());
		}
		if (func_29() != func_11())
		{
			func_130(func_29(), &(Global_196990.f_6), &(Global_196990.f_7));
		}
		Global_196990.f_9 = unk_0xB99C193A32DE341D();
		if (iParam0 != -1)
		{
			Global_196990.f_15 = iParam0;
		}
	}
	else if (func_94(iVar0))
	{
		Global_1969FB = iVar0;
		Global_1969FB.f_1 = iParam0;
		Global_1969FB.f_15 = 1;
		Global_1969FB.f_16 = 1;
		if (func_131() != func_11())
		{
			Global_1969FB.f_4 = func_406(func_131());
			Global_1969FB.f_5 = func_405(func_131());
		}
		if (func_29() != func_11())
		{
			func_130(func_29(), &(Global_1969FB.f_4), &(Global_1969FB.f_5));
		}
		Global_1969FB.f_8 = unk_0xB99C193A32DE341D();
		if (iParam0 != -1)
		{
			Global_1969FB.f_14 = iParam0;
		}
		Global_1969FB.f_1B = func_394(func_27(), 5);
		Global_1969FB.f_1C = func_414(func_260(unk_0xB5CEFD608600A09F()));
		Global_1969FB.f_1D = func_28(6103, -1, 0);
		Global_1969FB.f_1E = func_28(6099, -1, 0);
		Global_1969FB.f_1F = func_28(6100, -1, 0);
		Global_1969FB.f_20 = func_28(6102, -1, 0);
		Global_1969FB.f_21 = func_28(6101, -1, 0);
		Global_1969FB.f_22 = func_28(6104, -1, 0);
		Global_1969FB.f_7 = func_413();
		Global_1969FB.f_33 = func_414(bParam4);
	}
	else if (func_93(iVar0))
	{
		Global_196A31 = iVar0;
		Global_196A31.f_1 = iParam0;
		Global_196A31.f_15 = 1;
		Global_196A31.f_16 = 1;
		if (func_131() != func_11())
		{
			Global_196A31.f_4 = func_406(func_131());
			Global_196A31.f_5 = func_405(func_131());
		}
		if (func_29() != func_11())
		{
			func_130(func_29(), &(Global_196A31.f_4), &(Global_196A31.f_5));
		}
		Global_196A31.f_8 = unk_0xB99C193A32DE341D();
		if (iParam0 != -1)
		{
			Global_196A31.f_14 = iParam0;
		}
		Global_196A31.f_18 = func_28(6153, -1, 0);
		Global_196A31.f_19 = func_28(6158, -1, 0);
		Global_196A31.f_1A = func_28(6159, -1, 0);
		Global_196A31.f_1B = func_414((((func_352() || func_351()) || func_350()) || func_349(unk_0xB5CEFD608600A09F())));
		Global_196A31.f_1C = func_28(6160, -1, 0);
		Global_196A31.f_1D = func_414(func_348());
		Global_196A31.f_1F = 0;
		Global_196A31.f_1E = 0;
		Global_196A31.f_20 = 0;
		Global_196A31.f_21 = 0;
		Global_196A31.f_22 = 0;
		Global_196A31.f_10 = 0;
		Global_196A31.f_7 = func_413();
	}
	else if (((((((((iVar0 == 250 || iVar0 == 238) || iVar0 == 242) || iVar0 == 244) || iVar0 == 248) || iVar0 == 241) || iVar0 == 239) || iVar0 == 240) || iVar0 == 249) || (iVar0 == 237 && func_89(func_90(unk_0xB5CEFD608600A09F()))))
	{
		Global_196AB6 = iVar0;
		Global_196AB6.f_1 = iParam0;
		Global_196AB6.f_15 = 1;
		Global_196AB6.f_16 = 1;
		Global_196AB6.f_7 = func_413();
		if (func_131() != func_11())
		{
			Global_196AB6.f_4 = func_406(func_131());
			Global_196AB6.f_5 = func_405(func_131());
		}
		if (func_29() != func_11())
		{
			func_130(func_29(), &(Global_196AB6.f_4), &(Global_196AB6.f_5));
		}
		if (func_131() != -1)
		{
			Global_196AB6.f_11 = func_345(func_131());
		}
		Global_196AB6.f_8 = unk_0xB99C193A32DE341D();
		Global_196AB6.f_1C = func_411(unk_0xB5CEFD608600A09F());
		Global_196AB6.f_10 = 0;
		Global_196AB6.f_18 = 0;
		Global_196AB6.f_17 = 0;
		if (func_229(unk_0xB5CEFD608600A09F(), 1))
		{
			Global_196AB6.f_21 = func_414(func_50(1));
		}
	}
	else if (iVar0 == 237)
	{
		Global_196A81 = iVar0;
		Global_196A81.f_1 = iParam0;
		Global_196A81.f_15 = 1;
		Global_196A81.f_16 = 1;
		Global_196A81.f_7 = func_413();
		Global_196A81.f_18 = 0;
		Global_196A81.f_17 = 0;
		Global_196A81.f_10 = 0;
		if (func_131() != func_11())
		{
			Global_196A81.f_4 = func_406(func_131());
			Global_196A81.f_5 = func_405(func_131());
		}
		Global_196A81.f_1C = func_411(unk_0xB5CEFD608600A09F());
		if (Global_196A81.f_1C)
		{
			Global_196A81.f_1D = func_339(unk_0xB5CEFD608600A09F());
		}
		else
		{
			Global_196A81.f_1D = 0;
		}
		Global_196A81.f_1E = func_323(unk_0xB5CEFD608600A09F(), 4, -1);
		Global_196A81.f_1F = func_342(unk_0xB5CEFD608600A09F());
		Global_196A81.f_20 = func_414(func_322(unk_0xB5CEFD608600A09F()));
		Global_196A81.f_21 = func_414(func_321(unk_0xB5CEFD608600A09F()));
		Global_196A81.f_22 = func_414(func_320(unk_0xB5CEFD608600A09F()));
		Global_196A81.f_23 = func_414(func_319(unk_0xB5CEFD608600A09F()));
		Global_196A81.f_24 = func_318(unk_0xB5CEFD608600A09F());
		Global_196A81.f_25 = func_317(unk_0xB5CEFD608600A09F());
		Global_196A81.f_27 = func_316(unk_0xB5CEFD608600A09F());
		if (func_229(unk_0xB5CEFD608600A09F(), 1))
		{
			Global_196A81.f_29 = func_414(func_50(1));
		}
		if (func_29() != func_11())
		{
			func_130(func_29(), &(Global_196A81.f_4), &(Global_196A81.f_5));
		}
		Global_196A81.f_8 = unk_0xB99C193A32DE341D();
		Global_196A81.f_1C = func_411(unk_0xB5CEFD608600A09F());
	}
	else
	{
		if (func_131() != func_11())
		{
			Global_196948 = func_406(func_131());
			Global_196948.f_1 = func_405(func_131());
		}
		Global_196948.f_5 = unk_0xB99C193A32DE341D();
		Global_196948.f_D = func_565();
		Global_196948.f_F = 0;
		if (func_129(1))
		{
			if (func_29() == func_131())
			{
				Global_196948.f_F = 1;
			}
		}
		if (func_564())
		{
			Global_1969CF.f_1C = 1;
		}
		if ((((func_563() || func_562()) || func_561()) || func_560()) || func_558())
		{
			Global_1969CF.f_1E = 1;
		}
		if (func_556(func_557(-1881846085)))
		{
			Global_1969CF.f_20 = 1;
		}
		if (func_548(func_555(joaat("caddy"))))
		{
			Global_1969CF.f_1F = 1;
		}
		if (func_393(unk_0xB5CEFD608600A09F()) || func_392(unk_0xB5CEFD608600A09F()))
		{
			Global_1969CF.f_1D = 1;
		}
		if (func_389(unk_0xB5CEFD608600A09F()))
		{
			Global_1969CF.f_21 = 1;
			Global_1969CF.f_22 = 1;
		}
		if (func_390(unk_0xB5CEFD608600A09F()))
		{
			Global_1969CF.f_24 = 1;
		}
		if (func_387(0, unk_0xB5CEFD608600A09F()) == 1)
		{
			Global_1969CF.f_23 = 1;
		}
		if (func_547(unk_0xB5CEFD608600A09F(), 3, &uVar1))
		{
			Global_1969CF.f_25 = 1;
		}
		if (func_547(unk_0xB5CEFD608600A09F(), 7, &uVar1))
		{
			Global_1969CF.f_26 = 1;
		}
		if (func_546(unk_0xB5CEFD608600A09F()))
		{
			iVar2 = 0;
			while (iVar2 < 6)
			{
				iVar3 = func_545(unk_0xB5CEFD608600A09F(), iVar2);
				if (func_279(unk_0xB5CEFD608600A09F(), iVar3, 0))
				{
					Global_1969CF.f_27 = 1;
				}
				if (func_279(unk_0xB5CEFD608600A09F(), iVar3, 2))
				{
					Global_1969CF.f_28 = 1;
				}
				if (func_279(unk_0xB5CEFD608600A09F(), iVar3, 1))
				{
					Global_1969CF.f_29 = 1;
				}
				iVar2++;
			}
		}
	}
}

int func_545(int iParam0, int iParam1)//Position - 0x15F6A
{
	var uVar0;
	
	if (iParam0 == func_11())
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	if (func_274(Global_18402B[iParam0 /*770*/].f_111.f_A8[iParam1 /*12*/]))
	{
		uVar0 = Global_18402B[iParam0 /*770*/].f_111.f_A8[iParam1 /*12*/];
	}
	return uVar0;
}

int func_546(int iParam0)//Position - 0x15FC3
{
	int iVar0;
	
	if (iParam0 == func_11())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Global_18402B[iParam0 /*770*/].f_111.f_A8[iVar0 /*12*/] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_547(int iParam0, int iParam1, var uParam2)//Position - 0x16005
{
	int iVar0;
	
	if (iParam0 != func_11())
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (iParam1 == func_387(iVar0, iParam0))
			{
				*uParam2 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_548(int iParam0)//Position - 0x1603F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_553(11, -1) == 0)
	{
		return 0;
	}
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = (iParam0 + func_366(11));
		func_365(iVar1, &iVar0, 1);
		iVar2 = func_553(func_550(iVar1), -1);
		if (iVar2 > 0)
		{
		}
		else if (iVar0 >= 0)
		{
		}
		if (iVar0 >= 0)
		{
			iVar3 = func_28(func_549(4, iVar0), -1, 0);
			if (iVar2 > 0)
			{
			}
			if (iVar3 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_549(int iParam0, int iParam1)//Position - 0x160BB
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1629;
				
				case 1:
					return 1636;
				
				case 2:
					return 1643;
				
				case 3:
					return 1650;
				
				case 4:
					return 1657;
				
				case 5:
					return 1664;
				
				case 6:
					return 1671;
				
				case 7:
					return 1678;
				
				case 8:
					return 1685;
				
				case 9:
					return 1692;
				
				case 10:
					return 1699;
				
				case 11:
					return 1705;
				
				case 12:
					return 1711;
				
				case 13:
					return 1717;
				
				case 14:
					return 1795;
				
				case 15:
					return 1802;
				
				case 16:
					return 1809;
				
				case 17:
					return 1816;
				
				case 18:
					return 1823;
				
				case 19:
					return 1830;
				
				case 20:
					return 1837;
				
				case 21:
					return 1844;
				
				case 22:
					return 1851;
				
				case 23:
					return 1858;
				
				case 24:
					return 1864;
				
				case 25:
					return 1870;
				
				case 26:
					return 2165;
				
				case 27:
					return 2172;
				
				case 28:
					return 2179;
				
				case 29:
					return 2186;
				
				case 30:
					return 2193;
				
				case 31:
					return 2200;
				
				case 32:
					return 2207;
				
				case 33:
					return 2214;
				
				case 34:
					return 2221;
				
				case 35:
					return 2228;
				
				case 36:
					return 2235;
				
				case 37:
					return 2241;
				
				case 38:
					return 2247;
				
				case 39:
					return 2824;
				
				case 40:
					return 2831;
				
				case 41:
					return 2838;
				
				case 42:
					return 2845;
				
				case 43:
					return 2852;
				
				case 44:
					return 2859;
				
				case 45:
					return 2866;
				
				case 46:
					return 2873;
				
				case 47:
					return 2880;
				
				case 48:
					return 2887;
				
				case 49:
					return 2894;
				
				case 50:
					return 2900;
				
				case 51:
					return 2906;
				
				case 52:
					return 2948;
				
				case 53:
					return 2955;
				
				case 54:
					return 2962;
				
				case 55:
					return 2969;
				
				case 56:
					return 2976;
				
				case 57:
					return 2983;
				
				case 58:
					return 2990;
				
				case 59:
					return 2997;
				
				case 60:
					return 3004;
				
				case 61:
					return 3011;
				
				case 62:
					return 3018;
				
				case 63:
					return 3024;
				
				case 64:
					return 3030;
				
				case 65:
					return 3231;
				
				case 66:
					return 3239;
				
				case 67:
					return 3247;
				
				case 68:
					return 3255;
				
				case 69:
					return 3263;
				
				case 70:
					return 3271;
				
				case 71:
					return 3279;
				
				case 72:
					return 3287;
				
				case 73:
					return 3295;
				
				case 74:
					return 3303;
				
				case 75:
					return 3311;
				
				case 76:
					return 3319;
				
				case 77:
					return 3327;
				
				case 78:
					return 3335;
				
				case 79:
					return 3343;
				
				case 80:
					return 3351;
				
				case 81:
					return 3359;
				
				case 82:
					return 3367;
				
				case 83:
					return 3375;
				
				case 84:
					return 3383;
				
				case 85:
					return 3391;
				
				case 86:
					return 3398;
				
				case 87:
					return 3405;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4027;
				
				case 89:
					return 4035;
				
				case 90:
					return 4043;
				
				case 91:
					return 4051;
				
				case 92:
					return 4059;
				
				case 93:
					return 4067;
				
				case 94:
					return 4075;
				
				case 95:
					return 4083;
				
				case 96:
					return 4091;
				
				case 97:
					return 4099;
				
				case 98:
					return 4107;
				
				case 99:
					return 4115;
				
				case 100:
					return 4123;
				
				case 101:
					return 4131;
				
				case 102:
					return 4139;
				
				case 103:
					return 4147;
				
				case 104:
					return 4155;
				
				case 105:
					return 4163;
				
				case 106:
					return 4171;
				
				case 107:
					return 4179;
				
				case 108:
					return 4187;
				
				case 109:
					return 4195;
				
				case 110:
					return 4203;
				
				case 111:
					return 4211;
				
				case 112:
					return 4219;
				
				case 113:
					return 4227;
				
				case 114:
					return 4235;
				
				case 115:
					return 4243;
				
				case 116:
					return 4251;
				
				case 117:
					return 4259;
				
				case 118:
					return 4267;
				
				case 119:
					return 4275;
				
				case 120:
					return 4283;
				
				case 121:
					return 4291;
				
				case 122:
					return 4299;
				
				case 123:
					return 4307;
				
				case 124:
					return 4315;
				
				case 125:
					return 4323;
				
				case 126:
					return 4331;
				
				case 127:
					return 4339;
				
				case 128:
					return 4347;
				
				case 129:
					return 4355;
				
				case 130:
					return 4363;
				
				case 131:
					return 4371;
				
				case 132:
					return 4379;
				
				case 133:
					return 4387;
				
				case 134:
					return 4395;
				
				case 135:
					return 4403;
				
				case 136:
					return 4411;
				
				case 137:
					return 4419;
				
				case 138:
					return 4427;
				
				case 139:
					return 4435;
				
				case 140:
					return 4443;
				
				case 141:
					return 4451;
				
				case 142:
					return 4459;
				
				case 143:
					return 4467;
				
				case 144:
					return 4475;
				
				case 145:
					return 4483;
				
				case 146:
					return 4491;
				
				case 147:
					return 4499;
				
				case 148:
					return 4507;
				
				case 149:
					return 4515;
				
				case 150:
					return 4523;
				
				case 151:
					return 4531;
				
				case 152:
					return 4539;
				
				case 153:
					return 4547;
				
				case 154:
					return 4555;
				
				case 155:
					return 4563;
				
				case 156:
					return 4571;
				
				case 157:
					return 4579;
				
				case 158:
					return 5472;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5921;
				
				case 160:
					return 5928;
				
				case 161:
					return 5935;
				
				case 162:
					return 5942;
				
				case 163:
					return 5949;
				
				case 164:
					return 5956;
				
				case 165:
					return 5963;
				
				case 166:
					return 5970;
				
				case 167:
					return 5977;
				
				case 168:
					return 5984;
				
				case 169:
					return 5991;
				
				case 170:
					return 5998;
				
				case 171:
					return 6005;
				
				case 172:
					return 6012;
				
				case 173:
					return 6019;
				
				case 174:
					return 6026;
				
				case 175:
					return 6033;
				
				case 176:
					return 6040;
				
				case 177:
					return 6047;
				
				case 178:
					return 6054;
				
				case 179:
					return 6061;
				
				case 180:
					return 6068;
				
				case 181:
					return 6075;
				
				case 182:
					return 6082;
				
				case 183:
					return 6089;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6166;
				
				case 185:
					return 6173;
				
				case 186:
					return 6180;
				
				case 187:
					return 6187;
				
				case 188:
					return 6194;
				
				case 189:
					return 6201;
				
				case 190:
					return 6208;
				
				case 191:
					return 6215;
				
				case 192:
					return 6222;
				
				case 193:
					return 6229;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6563;
				
				case 195:
					return 6570;
				
				case 196:
					return 6577;
				
				case 197:
					return 6584;
				
				case 198:
					return 6591;
				
				case 199:
					return 6598;
				
				case 200:
					return 6605;
				
				case 201:
					return 6612;
				
				case 202:
					return 6619;
				
				case 203:
					return 6626;
				
				case 204:
					return 6633;
				
				case 205:
					return 6640;
				
				case 206:
					return 6647;
				
				case 207:
					return 6654;
				
				case 208:
					return 6661;
				
				case 209:
					return 6668;
				
				case 210:
					return 6675;
				
				case 211:
					return 6682;
				
				case 212:
					return 6689;
				
				case 213:
					return 6696;
				
				case 214:
					return 6703;
				
				case 215:
					return 6710;
				
				case 216:
					return 6717;
				
				case 217:
					return 6724;
				
				case 218:
					return 6731;
				
				case 219:
					return 6738;
				
				case 220:
					return 6745;
				
				case 221:
					return 6752;
				
				case 222:
					return 6759;
				
				case 223:
					return 6766;
				
				case 224:
					return 6773;
				
				case 225:
					return 6780;
				
				case 226:
					return 6787;
				
				case 227:
					return 6794;
				
				case 228:
					return 6801;
				
				case 229:
					return 6808;
				
				case 230:
					return 6815;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 1630;
				
				case 1:
					return 1637;
				
				case 2:
					return 1644;
				
				case 3:
					return 1651;
				
				case 4:
					return 1658;
				
				case 5:
					return 1665;
				
				case 6:
					return 1672;
				
				case 7:
					return 1679;
				
				case 8:
					return 1686;
				
				case 9:
					return 1693;
				
				case 10:
					return 1700;
				
				case 11:
					return 1706;
				
				case 12:
					return 1712;
				
				case 13:
					return 1718;
				
				case 14:
					return 1796;
				
				case 15:
					return 1803;
				
				case 16:
					return 1810;
				
				case 17:
					return 1817;
				
				case 18:
					return 1824;
				
				case 19:
					return 1831;
				
				case 20:
					return 1838;
				
				case 21:
					return 1845;
				
				case 22:
					return 1852;
				
				case 23:
					return 1859;
				
				case 24:
					return 1865;
				
				case 25:
					return 1871;
				
				case 26:
					return 2166;
				
				case 27:
					return 2173;
				
				case 28:
					return 2180;
				
				case 29:
					return 2187;
				
				case 30:
					return 2194;
				
				case 31:
					return 2201;
				
				case 32:
					return 2208;
				
				case 33:
					return 2215;
				
				case 34:
					return 2222;
				
				case 35:
					return 2229;
				
				case 36:
					return 2236;
				
				case 37:
					return 2242;
				
				case 38:
					return 2248;
				
				case 39:
					return 2825;
				
				case 40:
					return 2832;
				
				case 41:
					return 2839;
				
				case 42:
					return 2846;
				
				case 43:
					return 2853;
				
				case 44:
					return 2860;
				
				case 45:
					return 2867;
				
				case 46:
					return 2874;
				
				case 47:
					return 2881;
				
				case 48:
					return 2888;
				
				case 49:
					return 2895;
				
				case 50:
					return 2901;
				
				case 51:
					return 2907;
				
				case 52:
					return 2949;
				
				case 53:
					return 2956;
				
				case 54:
					return 2963;
				
				case 55:
					return 2970;
				
				case 56:
					return 2977;
				
				case 57:
					return 2984;
				
				case 58:
					return 2991;
				
				case 59:
					return 2998;
				
				case 60:
					return 3005;
				
				case 61:
					return 3012;
				
				case 62:
					return 3019;
				
				case 63:
					return 3025;
				
				case 64:
					return 3031;
				
				case 65:
					return 3232;
				
				case 66:
					return 3240;
				
				case 67:
					return 3248;
				
				case 68:
					return 3256;
				
				case 69:
					return 3264;
				
				case 70:
					return 3272;
				
				case 71:
					return 3280;
				
				case 72:
					return 3288;
				
				case 73:
					return 3296;
				
				case 74:
					return 3304;
				
				case 75:
					return 3312;
				
				case 76:
					return 3320;
				
				case 77:
					return 3328;
				
				case 78:
					return 3336;
				
				case 79:
					return 3344;
				
				case 80:
					return 3352;
				
				case 81:
					return 3360;
				
				case 82:
					return 3368;
				
				case 83:
					return 3376;
				
				case 84:
					return 3384;
				
				case 85:
					return 3392;
				
				case 86:
					return 3399;
				
				case 87:
					return 3406;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4028;
				
				case 89:
					return 4036;
				
				case 90:
					return 4044;
				
				case 91:
					return 4052;
				
				case 92:
					return 4060;
				
				case 93:
					return 4068;
				
				case 94:
					return 4076;
				
				case 95:
					return 4084;
				
				case 96:
					return 4092;
				
				case 97:
					return 4100;
				
				case 98:
					return 4108;
				
				case 99:
					return 4116;
				
				case 100:
					return 4124;
				
				case 101:
					return 4132;
				
				case 102:
					return 4140;
				
				case 103:
					return 4148;
				
				case 104:
					return 4156;
				
				case 105:
					return 4164;
				
				case 106:
					return 4172;
				
				case 107:
					return 4180;
				
				case 108:
					return 4188;
				
				case 109:
					return 4196;
				
				case 110:
					return 4204;
				
				case 111:
					return 4212;
				
				case 112:
					return 4220;
				
				case 113:
					return 4228;
				
				case 114:
					return 4236;
				
				case 115:
					return 4244;
				
				case 116:
					return 4252;
				
				case 117:
					return 4260;
				
				case 118:
					return 4268;
				
				case 119:
					return 4276;
				
				case 120:
					return 4284;
				
				case 121:
					return 4292;
				
				case 122:
					return 4300;
				
				case 123:
					return 4308;
				
				case 124:
					return 4316;
				
				case 125:
					return 4324;
				
				case 126:
					return 4332;
				
				case 127:
					return 4340;
				
				case 128:
					return 4348;
				
				case 129:
					return 4356;
				
				case 130:
					return 4364;
				
				case 131:
					return 4372;
				
				case 132:
					return 4380;
				
				case 133:
					return 4388;
				
				case 134:
					return 4396;
				
				case 135:
					return 4404;
				
				case 136:
					return 4412;
				
				case 137:
					return 4420;
				
				case 138:
					return 4428;
				
				case 139:
					return 4436;
				
				case 140:
					return 4444;
				
				case 141:
					return 4452;
				
				case 142:
					return 4460;
				
				case 143:
					return 4468;
				
				case 144:
					return 4476;
				
				case 145:
					return 4484;
				
				case 146:
					return 4492;
				
				case 147:
					return 4500;
				
				case 148:
					return 4508;
				
				case 149:
					return 4516;
				
				case 150:
					return 4524;
				
				case 151:
					return 4532;
				
				case 152:
					return 4540;
				
				case 153:
					return 4548;
				
				case 154:
					return 4556;
				
				case 155:
					return 4564;
				
				case 156:
					return 4572;
				
				case 157:
					return 4580;
				
				case 158:
					return 5473;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5922;
				
				case 160:
					return 5929;
				
				case 161:
					return 5936;
				
				case 162:
					return 5943;
				
				case 163:
					return 5950;
				
				case 164:
					return 5957;
				
				case 165:
					return 5964;
				
				case 166:
					return 5971;
				
				case 167:
					return 5978;
				
				case 168:
					return 5985;
				
				case 169:
					return 5992;
				
				case 170:
					return 5999;
				
				case 171:
					return 6006;
				
				case 172:
					return 6013;
				
				case 173:
					return 6020;
				
				case 174:
					return 6027;
				
				case 175:
					return 6034;
				
				case 176:
					return 6041;
				
				case 177:
					return 6048;
				
				case 178:
					return 6055;
				
				case 179:
					return 6062;
				
				case 180:
					return 6069;
				
				case 181:
					return 6076;
				
				case 182:
					return 6083;
				
				case 183:
					return 6090;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6167;
				
				case 185:
					return 6174;
				
				case 186:
					return 6181;
				
				case 187:
					return 6188;
				
				case 188:
					return 6195;
				
				case 189:
					return 6202;
				
				case 190:
					return 6209;
				
				case 191:
					return 6216;
				
				case 192:
					return 6223;
				
				case 193:
					return 6230;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6564;
				
				case 195:
					return 6571;
				
				case 196:
					return 6578;
				
				case 197:
					return 6585;
				
				case 198:
					return 6592;
				
				case 199:
					return 6599;
				
				case 200:
					return 6606;
				
				case 201:
					return 6613;
				
				case 202:
					return 6620;
				
				case 203:
					return 6627;
				
				case 204:
					return 6634;
				
				case 205:
					return 6641;
				
				case 206:
					return 6648;
				
				case 207:
					return 6655;
				
				case 208:
					return 6662;
				
				case 209:
					return 6669;
				
				case 210:
					return 6676;
				
				case 211:
					return 6683;
				
				case 212:
					return 6690;
				
				case 213:
					return 6697;
				
				case 214:
					return 6704;
				
				case 215:
					return 6711;
				
				case 216:
					return 6718;
				
				case 217:
					return 6725;
				
				case 218:
					return 6732;
				
				case 219:
					return 6739;
				
				case 220:
					return 6746;
				
				case 221:
					return 6753;
				
				case 222:
					return 6760;
				
				case 223:
					return 6767;
				
				case 224:
					return 6774;
				
				case 225:
					return 6781;
				
				case 226:
					return 6788;
				
				case 227:
					return 6795;
				
				case 228:
					return 6802;
				
				case 229:
					return 6809;
				
				case 230:
					return 6816;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1631;
				
				case 1:
					return 1638;
				
				case 2:
					return 1645;
				
				case 3:
					return 1652;
				
				case 4:
					return 1659;
				
				case 5:
					return 1666;
				
				case 6:
					return 1673;
				
				case 7:
					return 1680;
				
				case 8:
					return 1687;
				
				case 9:
					return 1694;
				
				case 10:
					return 1701;
				
				case 11:
					return 1707;
				
				case 12:
					return 1713;
				
				case 13:
					return 1719;
				
				case 14:
					return 1797;
				
				case 15:
					return 1804;
				
				case 16:
					return 1811;
				
				case 17:
					return 1818;
				
				case 18:
					return 1825;
				
				case 19:
					return 1832;
				
				case 20:
					return 1839;
				
				case 21:
					return 1846;
				
				case 22:
					return 1853;
				
				case 23:
					return 1860;
				
				case 24:
					return 1866;
				
				case 25:
					return 1872;
				
				case 26:
					return 2167;
				
				case 27:
					return 2174;
				
				case 28:
					return 2181;
				
				case 29:
					return 2188;
				
				case 30:
					return 2195;
				
				case 31:
					return 2202;
				
				case 32:
					return 2209;
				
				case 33:
					return 2216;
				
				case 34:
					return 2223;
				
				case 35:
					return 2230;
				
				case 36:
					return 2237;
				
				case 37:
					return 2243;
				
				case 38:
					return 2249;
				
				case 39:
					return 2826;
				
				case 40:
					return 2833;
				
				case 41:
					return 2840;
				
				case 42:
					return 2847;
				
				case 43:
					return 2854;
				
				case 44:
					return 2861;
				
				case 45:
					return 2868;
				
				case 46:
					return 2875;
				
				case 47:
					return 2882;
				
				case 48:
					return 2889;
				
				case 49:
					return 2896;
				
				case 50:
					return 2902;
				
				case 51:
					return 2908;
				
				case 52:
					return 2950;
				
				case 53:
					return 2957;
				
				case 54:
					return 2964;
				
				case 55:
					return 2971;
				
				case 56:
					return 2978;
				
				case 57:
					return 2985;
				
				case 58:
					return 2992;
				
				case 59:
					return 2999;
				
				case 60:
					return 3006;
				
				case 61:
					return 3013;
				
				case 62:
					return 3020;
				
				case 63:
					return 3026;
				
				case 64:
					return 3032;
				
				case 65:
					return 3233;
				
				case 66:
					return 3241;
				
				case 67:
					return 3249;
				
				case 68:
					return 3257;
				
				case 69:
					return 3265;
				
				case 70:
					return 3273;
				
				case 71:
					return 3281;
				
				case 72:
					return 3289;
				
				case 73:
					return 3297;
				
				case 74:
					return 3305;
				
				case 75:
					return 3313;
				
				case 76:
					return 3321;
				
				case 77:
					return 3329;
				
				case 78:
					return 3337;
				
				case 79:
					return 3345;
				
				case 80:
					return 3353;
				
				case 81:
					return 3361;
				
				case 82:
					return 3369;
				
				case 83:
					return 3377;
				
				case 84:
					return 3385;
				
				case 85:
					return 3393;
				
				case 86:
					return 3400;
				
				case 87:
					return 3407;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4029;
				
				case 89:
					return 4037;
				
				case 90:
					return 4045;
				
				case 91:
					return 4053;
				
				case 92:
					return 4061;
				
				case 93:
					return 4069;
				
				case 94:
					return 4077;
				
				case 95:
					return 4085;
				
				case 96:
					return 4093;
				
				case 97:
					return 4101;
				
				case 98:
					return 4109;
				
				case 99:
					return 4117;
				
				case 100:
					return 4125;
				
				case 101:
					return 4133;
				
				case 102:
					return 4141;
				
				case 103:
					return 4149;
				
				case 104:
					return 4157;
				
				case 105:
					return 4165;
				
				case 106:
					return 4173;
				
				case 107:
					return 4181;
				
				case 108:
					return 4189;
				
				case 109:
					return 4197;
				
				case 110:
					return 4205;
				
				case 111:
					return 4213;
				
				case 112:
					return 4221;
				
				case 113:
					return 4229;
				
				case 114:
					return 4237;
				
				case 115:
					return 4245;
				
				case 116:
					return 4253;
				
				case 117:
					return 4261;
				
				case 118:
					return 4269;
				
				case 119:
					return 4277;
				
				case 120:
					return 4285;
				
				case 121:
					return 4293;
				
				case 122:
					return 4301;
				
				case 123:
					return 4309;
				
				case 124:
					return 4317;
				
				case 125:
					return 4325;
				
				case 126:
					return 4333;
				
				case 127:
					return 4341;
				
				case 128:
					return 4349;
				
				case 129:
					return 4357;
				
				case 130:
					return 4365;
				
				case 131:
					return 4373;
				
				case 132:
					return 4381;
				
				case 133:
					return 4389;
				
				case 134:
					return 4397;
				
				case 135:
					return 4405;
				
				case 136:
					return 4413;
				
				case 137:
					return 4421;
				
				case 138:
					return 4429;
				
				case 139:
					return 4437;
				
				case 140:
					return 4445;
				
				case 141:
					return 4453;
				
				case 142:
					return 4461;
				
				case 143:
					return 4469;
				
				case 144:
					return 4477;
				
				case 145:
					return 4485;
				
				case 146:
					return 4493;
				
				case 147:
					return 4501;
				
				case 148:
					return 4509;
				
				case 149:
					return 4517;
				
				case 150:
					return 4525;
				
				case 151:
					return 4533;
				
				case 152:
					return 4541;
				
				case 153:
					return 4549;
				
				case 154:
					return 4557;
				
				case 155:
					return 4565;
				
				case 156:
					return 4573;
				
				case 157:
					return 4581;
				
				case 158:
					return 5474;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5923;
				
				case 160:
					return 5930;
				
				case 161:
					return 5937;
				
				case 162:
					return 5944;
				
				case 163:
					return 5951;
				
				case 164:
					return 5958;
				
				case 165:
					return 5965;
				
				case 166:
					return 5972;
				
				case 167:
					return 5979;
				
				case 168:
					return 5986;
				
				case 169:
					return 5993;
				
				case 170:
					return 6000;
				
				case 171:
					return 6007;
				
				case 172:
					return 6014;
				
				case 173:
					return 6021;
				
				case 174:
					return 6028;
				
				case 175:
					return 6035;
				
				case 176:
					return 6042;
				
				case 177:
					return 6049;
				
				case 178:
					return 6056;
				
				case 179:
					return 6063;
				
				case 180:
					return 6070;
				
				case 181:
					return 6077;
				
				case 182:
					return 6084;
				
				case 183:
					return 6091;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6168;
				
				case 185:
					return 6175;
				
				case 186:
					return 6182;
				
				case 187:
					return 6189;
				
				case 188:
					return 6196;
				
				case 189:
					return 6203;
				
				case 190:
					return 6210;
				
				case 191:
					return 6217;
				
				case 192:
					return 6224;
				
				case 193:
					return 6231;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6565;
				
				case 195:
					return 6572;
				
				case 196:
					return 6579;
				
				case 197:
					return 6586;
				
				case 198:
					return 6593;
				
				case 199:
					return 6600;
				
				case 200:
					return 6607;
				
				case 201:
					return 6614;
				
				case 202:
					return 6621;
				
				case 203:
					return 6628;
				
				case 204:
					return 6635;
				
				case 205:
					return 6642;
				
				case 206:
					return 6649;
				
				case 207:
					return 6656;
				
				case 208:
					return 6663;
				
				case 209:
					return 6670;
				
				case 210:
					return 6677;
				
				case 211:
					return 6684;
				
				case 212:
					return 6691;
				
				case 213:
					return 6698;
				
				case 214:
					return 6705;
				
				case 215:
					return 6712;
				
				case 216:
					return 6719;
				
				case 217:
					return 6726;
				
				case 218:
					return 6733;
				
				case 219:
					return 6740;
				
				case 220:
					return 6747;
				
				case 221:
					return 6754;
				
				case 222:
					return 6761;
				
				case 223:
					return 6768;
				
				case 224:
					return 6775;
				
				case 225:
					return 6782;
				
				case 226:
					return 6789;
				
				case 227:
					return 6796;
				
				case 228:
					return 6803;
				
				case 229:
					return 6810;
				
				case 230:
					return 6817;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return 1632;
				
				case 1:
					return 1639;
				
				case 2:
					return 1646;
				
				case 3:
					return 1653;
				
				case 4:
					return 1660;
				
				case 5:
					return 1667;
				
				case 6:
					return 1674;
				
				case 7:
					return 1681;
				
				case 8:
					return 1688;
				
				case 9:
					return 1695;
				
				case 10:
					return 1702;
				
				case 11:
					return 1708;
				
				case 12:
					return 1714;
				
				case 13:
					return 1720;
				
				case 14:
					return 1798;
				
				case 15:
					return 1805;
				
				case 16:
					return 1812;
				
				case 17:
					return 1819;
				
				case 18:
					return 1826;
				
				case 19:
					return 1833;
				
				case 20:
					return 1840;
				
				case 21:
					return 1847;
				
				case 22:
					return 1854;
				
				case 23:
					return 1861;
				
				case 24:
					return 1867;
				
				case 25:
					return 1873;
				
				case 26:
					return 2168;
				
				case 27:
					return 2175;
				
				case 28:
					return 2182;
				
				case 29:
					return 2189;
				
				case 30:
					return 2196;
				
				case 31:
					return 2203;
				
				case 32:
					return 2210;
				
				case 33:
					return 2217;
				
				case 34:
					return 2224;
				
				case 35:
					return 2231;
				
				case 36:
					return 2238;
				
				case 37:
					return 2244;
				
				case 38:
					return 2250;
				
				case 39:
					return 2827;
				
				case 40:
					return 2834;
				
				case 41:
					return 2841;
				
				case 42:
					return 2848;
				
				case 43:
					return 2855;
				
				case 44:
					return 2862;
				
				case 45:
					return 2869;
				
				case 46:
					return 2876;
				
				case 47:
					return 2883;
				
				case 48:
					return 2890;
				
				case 49:
					return 2897;
				
				case 50:
					return 2903;
				
				case 51:
					return 2909;
				
				case 52:
					return 2951;
				
				case 53:
					return 2958;
				
				case 54:
					return 2965;
				
				case 55:
					return 2972;
				
				case 56:
					return 2979;
				
				case 57:
					return 2986;
				
				case 58:
					return 2993;
				
				case 59:
					return 3000;
				
				case 60:
					return 3007;
				
				case 61:
					return 3014;
				
				case 62:
					return 3021;
				
				case 63:
					return 3027;
				
				case 64:
					return 3033;
				
				case 65:
					return 3234;
				
				case 66:
					return 3242;
				
				case 67:
					return 3250;
				
				case 68:
					return 3258;
				
				case 69:
					return 3266;
				
				case 70:
					return 3274;
				
				case 71:
					return 3282;
				
				case 72:
					return 3290;
				
				case 73:
					return 3298;
				
				case 74:
					return 3306;
				
				case 75:
					return 3314;
				
				case 76:
					return 3322;
				
				case 77:
					return 3330;
				
				case 78:
					return 3338;
				
				case 79:
					return 3346;
				
				case 80:
					return 3354;
				
				case 81:
					return 3362;
				
				case 82:
					return 3370;
				
				case 83:
					return 3378;
				
				case 84:
					return 3386;
				
				case 85:
					return 3394;
				
				case 86:
					return 3401;
				
				case 87:
					return 3408;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4030;
				
				case 89:
					return 4038;
				
				case 90:
					return 4046;
				
				case 91:
					return 4054;
				
				case 92:
					return 4062;
				
				case 93:
					return 4070;
				
				case 94:
					return 4078;
				
				case 95:
					return 4086;
				
				case 96:
					return 4094;
				
				case 97:
					return 4102;
				
				case 98:
					return 4110;
				
				case 99:
					return 4118;
				
				case 100:
					return 4126;
				
				case 101:
					return 4134;
				
				case 102:
					return 4142;
				
				case 103:
					return 4150;
				
				case 104:
					return 4158;
				
				case 105:
					return 4166;
				
				case 106:
					return 4174;
				
				case 107:
					return 4182;
				
				case 108:
					return 4190;
				
				case 109:
					return 4198;
				
				case 110:
					return 4206;
				
				case 111:
					return 4214;
				
				case 112:
					return 4222;
				
				case 113:
					return 4230;
				
				case 114:
					return 4238;
				
				case 115:
					return 4246;
				
				case 116:
					return 4254;
				
				case 117:
					return 4262;
				
				case 118:
					return 4270;
				
				case 119:
					return 4278;
				
				case 120:
					return 4286;
				
				case 121:
					return 4294;
				
				case 122:
					return 4302;
				
				case 123:
					return 4310;
				
				case 124:
					return 4318;
				
				case 125:
					return 4326;
				
				case 126:
					return 4334;
				
				case 127:
					return 4342;
				
				case 128:
					return 4350;
				
				case 129:
					return 4358;
				
				case 130:
					return 4366;
				
				case 131:
					return 4374;
				
				case 132:
					return 4382;
				
				case 133:
					return 4390;
				
				case 134:
					return 4398;
				
				case 135:
					return 4406;
				
				case 136:
					return 4414;
				
				case 137:
					return 4422;
				
				case 138:
					return 4430;
				
				case 139:
					return 4438;
				
				case 140:
					return 4446;
				
				case 141:
					return 4454;
				
				case 142:
					return 4462;
				
				case 143:
					return 4470;
				
				case 144:
					return 4478;
				
				case 145:
					return 4486;
				
				case 146:
					return 4494;
				
				case 147:
					return 4502;
				
				case 148:
					return 4510;
				
				case 149:
					return 4518;
				
				case 150:
					return 4526;
				
				case 151:
					return 4534;
				
				case 152:
					return 4542;
				
				case 153:
					return 4550;
				
				case 154:
					return 4558;
				
				case 155:
					return 4566;
				
				case 156:
					return 4574;
				
				case 157:
					return 4582;
				
				case 158:
					return 5475;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5924;
				
				case 160:
					return 5931;
				
				case 161:
					return 5938;
				
				case 162:
					return 5945;
				
				case 163:
					return 5952;
				
				case 164:
					return 5959;
				
				case 165:
					return 5966;
				
				case 166:
					return 5973;
				
				case 167:
					return 5980;
				
				case 168:
					return 5987;
				
				case 169:
					return 5994;
				
				case 170:
					return 6001;
				
				case 171:
					return 6008;
				
				case 172:
					return 6015;
				
				case 173:
					return 6022;
				
				case 174:
					return 6029;
				
				case 175:
					return 6036;
				
				case 176:
					return 6043;
				
				case 177:
					return 6050;
				
				case 178:
					return 6057;
				
				case 179:
					return 6064;
				
				case 180:
					return 6071;
				
				case 181:
					return 6078;
				
				case 182:
					return 6085;
				
				case 183:
					return 6092;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6169;
				
				case 185:
					return 6176;
				
				case 186:
					return 6183;
				
				case 187:
					return 6190;
				
				case 188:
					return 6197;
				
				case 189:
					return 6204;
				
				case 190:
					return 6211;
				
				case 191:
					return 6218;
				
				case 192:
					return 6225;
				
				case 193:
					return 6232;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6566;
				
				case 195:
					return 6573;
				
				case 196:
					return 6580;
				
				case 197:
					return 6587;
				
				case 198:
					return 6594;
				
				case 199:
					return 6601;
				
				case 200:
					return 6608;
				
				case 201:
					return 6615;
				
				case 202:
					return 6622;
				
				case 203:
					return 6629;
				
				case 204:
					return 6636;
				
				case 205:
					return 6643;
				
				case 206:
					return 6650;
				
				case 207:
					return 6657;
				
				case 208:
					return 6664;
				
				case 209:
					return 6671;
				
				case 210:
					return 6678;
				
				case 211:
					return 6685;
				
				case 212:
					return 6692;
				
				case 213:
					return 6699;
				
				case 214:
					return 6706;
				
				case 215:
					return 6713;
				
				case 216:
					return 6720;
				
				case 217:
					return 6727;
				
				case 218:
					return 6734;
				
				case 219:
					return 6741;
				
				case 220:
					return 6748;
				
				case 221:
					return 6755;
				
				case 222:
					return 6762;
				
				case 223:
					return 6769;
				
				case 224:
					return 6776;
				
				case 225:
					return 6783;
				
				case 226:
					return 6790;
				
				case 227:
					return 6797;
				
				case 228:
					return 6804;
				
				case 229:
					return 6811;
				
				case 230:
					return 6818;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return 1633;
				
				case 1:
					return 1640;
				
				case 2:
					return 1647;
				
				case 3:
					return 1654;
				
				case 4:
					return 1661;
				
				case 5:
					return 1668;
				
				case 6:
					return 1675;
				
				case 7:
					return 1682;
				
				case 8:
					return 1689;
				
				case 9:
					return 1696;
				
				case 10:
					return 1703;
				
				case 11:
					return 1709;
				
				case 12:
					return 1715;
				
				case 13:
					return 1721;
				
				case 14:
					return 1799;
				
				case 15:
					return 1806;
				
				case 16:
					return 1813;
				
				case 17:
					return 1820;
				
				case 18:
					return 1827;
				
				case 19:
					return 1834;
				
				case 20:
					return 1841;
				
				case 21:
					return 1848;
				
				case 22:
					return 1855;
				
				case 23:
					return 1862;
				
				case 24:
					return 1868;
				
				case 25:
					return 1874;
				
				case 26:
					return 2169;
				
				case 27:
					return 2176;
				
				case 28:
					return 2183;
				
				case 29:
					return 2190;
				
				case 30:
					return 2197;
				
				case 31:
					return 2204;
				
				case 32:
					return 2211;
				
				case 33:
					return 2218;
				
				case 34:
					return 2225;
				
				case 35:
					return 2232;
				
				case 36:
					return 2239;
				
				case 37:
					return 2245;
				
				case 38:
					return 2251;
				
				case 39:
					return 2828;
				
				case 40:
					return 2835;
				
				case 41:
					return 2842;
				
				case 42:
					return 2849;
				
				case 43:
					return 2856;
				
				case 44:
					return 2863;
				
				case 45:
					return 2870;
				
				case 46:
					return 2877;
				
				case 47:
					return 2884;
				
				case 48:
					return 2891;
				
				case 49:
					return 2898;
				
				case 50:
					return 2904;
				
				case 51:
					return 2910;
				
				case 52:
					return 2952;
				
				case 53:
					return 2959;
				
				case 54:
					return 2966;
				
				case 55:
					return 2973;
				
				case 56:
					return 2980;
				
				case 57:
					return 2987;
				
				case 58:
					return 2994;
				
				case 59:
					return 3001;
				
				case 60:
					return 3008;
				
				case 61:
					return 3015;
				
				case 62:
					return 3022;
				
				case 63:
					return 3028;
				
				case 64:
					return 3034;
				
				case 65:
					return 3235;
				
				case 66:
					return 3243;
				
				case 67:
					return 3251;
				
				case 68:
					return 3259;
				
				case 69:
					return 3267;
				
				case 70:
					return 3275;
				
				case 71:
					return 3283;
				
				case 72:
					return 3291;
				
				case 73:
					return 3299;
				
				case 74:
					return 3307;
				
				case 75:
					return 3315;
				
				case 76:
					return 3323;
				
				case 77:
					return 3331;
				
				case 78:
					return 3339;
				
				case 79:
					return 3347;
				
				case 80:
					return 3355;
				
				case 81:
					return 3363;
				
				case 82:
					return 3371;
				
				case 83:
					return 3379;
				
				case 84:
					return 3387;
				
				case 85:
					return 3395;
				
				case 86:
					return 3402;
				
				case 87:
					return 3409;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4031;
				
				case 89:
					return 4039;
				
				case 90:
					return 4047;
				
				case 91:
					return 4055;
				
				case 92:
					return 4063;
				
				case 93:
					return 4071;
				
				case 94:
					return 4079;
				
				case 95:
					return 4087;
				
				case 96:
					return 4095;
				
				case 97:
					return 4103;
				
				case 98:
					return 4111;
				
				case 99:
					return 4119;
				
				case 100:
					return 4127;
				
				case 101:
					return 4135;
				
				case 102:
					return 4143;
				
				case 103:
					return 4151;
				
				case 104:
					return 4159;
				
				case 105:
					return 4167;
				
				case 106:
					return 4175;
				
				case 107:
					return 4183;
				
				case 108:
					return 4191;
				
				case 109:
					return 4199;
				
				case 110:
					return 4207;
				
				case 111:
					return 4215;
				
				case 112:
					return 4223;
				
				case 113:
					return 4231;
				
				case 114:
					return 4239;
				
				case 115:
					return 4247;
				
				case 116:
					return 4255;
				
				case 117:
					return 4263;
				
				case 118:
					return 4271;
				
				case 119:
					return 4279;
				
				case 120:
					return 4287;
				
				case 121:
					return 4295;
				
				case 122:
					return 4303;
				
				case 123:
					return 4311;
				
				case 124:
					return 4319;
				
				case 125:
					return 4327;
				
				case 126:
					return 4335;
				
				case 127:
					return 4343;
				
				case 128:
					return 4351;
				
				case 129:
					return 4359;
				
				case 130:
					return 4367;
				
				case 131:
					return 4375;
				
				case 132:
					return 4383;
				
				case 133:
					return 4391;
				
				case 134:
					return 4399;
				
				case 135:
					return 4407;
				
				case 136:
					return 4415;
				
				case 137:
					return 4423;
				
				case 138:
					return 4431;
				
				case 139:
					return 4439;
				
				case 140:
					return 4447;
				
				case 141:
					return 4455;
				
				case 142:
					return 4463;
				
				case 143:
					return 4471;
				
				case 144:
					return 4479;
				
				case 145:
					return 4487;
				
				case 146:
					return 4495;
				
				case 147:
					return 4503;
				
				case 148:
					return 4511;
				
				case 149:
					return 4519;
				
				case 150:
					return 4527;
				
				case 151:
					return 4535;
				
				case 152:
					return 4543;
				
				case 153:
					return 4551;
				
				case 154:
					return 4559;
				
				case 155:
					return 4567;
				
				case 156:
					return 4575;
				
				case 157:
					return 4583;
				
				case 158:
					return 5476;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5925;
				
				case 160:
					return 5932;
				
				case 161:
					return 5939;
				
				case 162:
					return 5946;
				
				case 163:
					return 5953;
				
				case 164:
					return 5960;
				
				case 165:
					return 5967;
				
				case 166:
					return 5974;
				
				case 167:
					return 5981;
				
				case 168:
					return 5988;
				
				case 169:
					return 5995;
				
				case 170:
					return 6002;
				
				case 171:
					return 6009;
				
				case 172:
					return 6016;
				
				case 173:
					return 6023;
				
				case 174:
					return 6030;
				
				case 175:
					return 6037;
				
				case 176:
					return 6044;
				
				case 177:
					return 6051;
				
				case 178:
					return 6058;
				
				case 179:
					return 6065;
				
				case 180:
					return 6072;
				
				case 181:
					return 6079;
				
				case 182:
					return 6086;
				
				case 183:
					return 6093;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6170;
				
				case 185:
					return 6177;
				
				case 186:
					return 6184;
				
				case 187:
					return 6191;
				
				case 188:
					return 6198;
				
				case 189:
					return 6205;
				
				case 190:
					return 6212;
				
				case 191:
					return 6219;
				
				case 192:
					return 6226;
				
				case 193:
					return 6233;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6567;
				
				case 195:
					return 6574;
				
				case 196:
					return 6581;
				
				case 197:
					return 6588;
				
				case 198:
					return 6595;
				
				case 199:
					return 6602;
				
				case 200:
					return 6609;
				
				case 201:
					return 6616;
				
				case 202:
					return 6623;
				
				case 203:
					return 6630;
				
				case 204:
					return 6637;
				
				case 205:
					return 6644;
				
				case 206:
					return 6651;
				
				case 207:
					return 6658;
				
				case 208:
					return 6665;
				
				case 209:
					return 6672;
				
				case 210:
					return 6679;
				
				case 211:
					return 6686;
				
				case 212:
					return 6693;
				
				case 213:
					return 6700;
				
				case 214:
					return 6707;
				
				case 215:
					return 6714;
				
				case 216:
					return 6721;
				
				case 217:
					return 6728;
				
				case 218:
					return 6735;
				
				case 219:
					return 6742;
				
				case 220:
					return 6749;
				
				case 221:
					return 6756;
				
				case 222:
					return 6763;
				
				case 223:
					return 6770;
				
				case 224:
					return 6777;
				
				case 225:
					return 6784;
				
				case 226:
					return 6791;
				
				case 227:
					return 6798;
				
				case 228:
					return 6805;
				
				case 229:
					return 6812;
				
				case 230:
					return 6819;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return 1635;
				
				case 1:
					return 1642;
				
				case 2:
					return 1649;
				
				case 3:
					return 1656;
				
				case 4:
					return 1663;
				
				case 5:
					return 1670;
				
				case 6:
					return 1677;
				
				case 7:
					return 1684;
				
				case 8:
					return 1691;
				
				case 9:
					return 1698;
				
				case 13:
					return 1723;
				
				case 14:
					return 1801;
				
				case 15:
					return 1808;
				
				case 16:
					return 1815;
				
				case 17:
					return 1822;
				
				case 18:
					return 1829;
				
				case 19:
					return 1836;
				
				case 20:
					return 1843;
				
				case 21:
					return 1850;
				
				case 22:
					return 1857;
				
				case 26:
					return 2171;
				
				case 27:
					return 2178;
				
				case 28:
					return 2185;
				
				case 29:
					return 2192;
				
				case 30:
					return 2199;
				
				case 31:
					return 2206;
				
				case 32:
					return 2213;
				
				case 33:
					return 2220;
				
				case 34:
					return 2227;
				
				case 35:
					return 2234;
				
				case 39:
					return 2830;
				
				case 40:
					return 2837;
				
				case 41:
					return 2844;
				
				case 42:
					return 2851;
				
				case 43:
					return 2858;
				
				case 44:
					return 2865;
				
				case 45:
					return 2872;
				
				case 46:
					return 2879;
				
				case 47:
					return 2886;
				
				case 48:
					return 2893;
				
				case 52:
					return 2954;
				
				case 53:
					return 2961;
				
				case 54:
					return 2968;
				
				case 55:
					return 2975;
				
				case 56:
					return 2982;
				
				case 57:
					return 2989;
				
				case 58:
					return 2996;
				
				case 59:
					return 3003;
				
				case 60:
					return 3010;
				
				case 61:
					return 3017;
				
				case 65:
					return 3238;
				
				case 66:
					return 3246;
				
				case 67:
					return 3254;
				
				case 68:
					return 3262;
				
				case 69:
					return 3270;
				
				case 70:
					return 3278;
				
				case 71:
					return 3286;
				
				case 72:
					return 3294;
				
				case 73:
					return 3302;
				
				case 74:
					return 3310;
				
				case 75:
					return 3318;
				
				case 76:
					return 3326;
				
				case 77:
					return 3334;
				
				case 78:
					return 3342;
				
				case 79:
					return 3350;
				
				case 80:
					return 3358;
				
				case 81:
					return 3366;
				
				case 82:
					return 3374;
				
				case 83:
					return 3382;
				
				case 84:
					return 3390;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4034;
				
				case 89:
					return 4042;
				
				case 90:
					return 4050;
				
				case 91:
					return 4058;
				
				case 92:
					return 4066;
				
				case 93:
					return 4074;
				
				case 94:
					return 4082;
				
				case 95:
					return 4090;
				
				case 96:
					return 4098;
				
				case 97:
					return 4106;
				
				case 98:
					return 4114;
				
				case 99:
					return 4122;
				
				case 100:
					return 4130;
				
				case 101:
					return 4138;
				
				case 102:
					return 4146;
				
				case 103:
					return 4154;
				
				case 104:
					return 4162;
				
				case 105:
					return 4170;
				
				case 106:
					return 4178;
				
				case 107:
					return 4186;
				
				case 108:
					return 4194;
				
				case 109:
					return 4202;
				
				case 110:
					return 4210;
				
				case 111:
					return 4218;
				
				case 112:
					return 4226;
				
				case 113:
					return 4234;
				
				case 114:
					return 4242;
				
				case 115:
					return 4250;
				
				case 116:
					return 4258;
				
				case 117:
					return 4266;
				
				case 118:
					return 4274;
				
				case 119:
					return 4282;
				
				case 120:
					return 4290;
				
				case 121:
					return 4298;
				
				case 122:
					return 4306;
				
				case 123:
					return 4314;
				
				case 124:
					return 4322;
				
				case 125:
					return 4330;
				
				case 126:
					return 4338;
				
				case 127:
					return 4346;
				
				case 128:
					return 4354;
				
				case 129:
					return 4362;
				
				case 130:
					return 4370;
				
				case 131:
					return 4378;
				
				case 132:
					return 4386;
				
				case 133:
					return 4394;
				
				case 134:
					return 4402;
				
				case 135:
					return 4410;
				
				case 136:
					return 4418;
				
				case 137:
					return 4426;
				
				case 138:
					return 4434;
				
				case 139:
					return 4442;
				
				case 140:
					return 4450;
				
				case 141:
					return 4458;
				
				case 142:
					return 4466;
				
				case 143:
					return 4474;
				
				case 144:
					return 4482;
				
				case 145:
					return 4490;
				
				case 146:
					return 4498;
				
				case 147:
					return 4506;
				
				case 148:
					return 4514;
				
				case 149:
					return 4522;
				
				case 150:
					return 4530;
				
				case 151:
					return 4538;
				
				case 152:
					return 4546;
				
				case 153:
					return 4554;
				
				case 154:
					return 4562;
				
				case 155:
					return 4570;
				
				case 156:
					return 4578;
				
				case 157:
					return 4586;
				
				case 158:
					return 5479;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5927;
				
				case 160:
					return 5934;
				
				case 161:
					return 5941;
				
				case 162:
					return 5948;
				
				case 163:
					return 5955;
				
				case 164:
					return 5962;
				
				case 165:
					return 5969;
				
				case 166:
					return 5976;
				
				case 167:
					return 5983;
				
				case 168:
					return 5990;
				
				case 169:
					return 5997;
				
				case 170:
					return 6004;
				
				case 171:
					return 6011;
				
				case 172:
					return 6018;
				
				case 173:
					return 6025;
				
				case 174:
					return 6032;
				
				case 175:
					return 6039;
				
				case 176:
					return 6046;
				
				case 177:
					return 6053;
				
				case 178:
					return 6060;
				
				case 179:
					return 6067;
				
				case 180:
					return 6074;
				
				case 181:
					return 6081;
				
				case 182:
					return 6088;
				
				case 183:
					return 6095;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6172;
				
				case 185:
					return 6179;
				
				case 186:
					return 6186;
				
				case 187:
					return 6193;
				
				case 188:
					return 6200;
				
				case 189:
					return 6207;
				
				case 190:
					return 6214;
				
				case 191:
					return 6221;
				
				case 192:
					return 6228;
				
				case 193:
					return 6235;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6569;
				
				case 195:
					return 6576;
				
				case 196:
					return 6583;
				
				case 197:
					return 6590;
				
				case 198:
					return 6597;
				
				case 199:
					return 6604;
				
				case 200:
					return 6611;
				
				case 201:
					return 6618;
				
				case 202:
					return 6625;
				
				case 203:
					return 6632;
				
				case 204:
					return 6639;
				
				case 205:
					return 6646;
				
				case 206:
					return 6653;
				
				case 207:
					return 6660;
				
				case 208:
					return 6667;
				
				case 209:
					return 6674;
				
				case 210:
					return 6681;
				
				case 211:
					return 6688;
				
				case 212:
					return 6695;
				
				case 213:
					return 6702;
				
				case 214:
					return 6709;
				
				case 215:
					return 6716;
				
				case 216:
					return 6723;
				
				case 217:
					return 6730;
				
				case 218:
					return 6737;
				
				case 219:
					return 6744;
				
				case 220:
					return 6751;
				
				case 221:
					return 6758;
				
				case 222:
					return 6765;
				
				case 223:
					return 6772;
				
				case 224:
					return 6779;
				
				case 225:
					return 6786;
				
				case 226:
					return 6793;
				
				case 227:
					return 6800;
				
				case 228:
					return 6807;
				
				case 229:
					return 6814;
				
				case 230:
					return 6821;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return 1634;
				
				case 1:
					return 1641;
				
				case 2:
					return 1648;
				
				case 3:
					return 1655;
				
				case 4:
					return 1662;
				
				case 5:
					return 1669;
				
				case 6:
					return 1676;
				
				case 7:
					return 1683;
				
				case 8:
					return 1690;
				
				case 9:
					return 1697;
				
				case 10:
					return 1704;
				
				case 11:
					return 1710;
				
				case 12:
					return 1716;
				
				case 13:
					return 1722;
				
				case 14:
					return 1800;
				
				case 15:
					return 1807;
				
				case 16:
					return 1814;
				
				case 17:
					return 1821;
				
				case 18:
					return 1828;
				
				case 19:
					return 1835;
				
				case 20:
					return 1842;
				
				case 21:
					return 1849;
				
				case 22:
					return 1856;
				
				case 23:
					return 1863;
				
				case 24:
					return 1869;
				
				case 25:
					return 1875;
				
				case 26:
					return 2170;
				
				case 27:
					return 2177;
				
				case 28:
					return 2184;
				
				case 29:
					return 2191;
				
				case 30:
					return 2198;
				
				case 31:
					return 2205;
				
				case 32:
					return 2212;
				
				case 33:
					return 2219;
				
				case 34:
					return 2226;
				
				case 35:
					return 2233;
				
				case 36:
					return 2240;
				
				case 37:
					return 2246;
				
				case 38:
					return 2252;
				
				case 39:
					return 2829;
				
				case 40:
					return 2836;
				
				case 41:
					return 2843;
				
				case 42:
					return 2850;
				
				case 43:
					return 2857;
				
				case 44:
					return 2864;
				
				case 45:
					return 2871;
				
				case 46:
					return 2878;
				
				case 47:
					return 2885;
				
				case 48:
					return 2892;
				
				case 49:
					return 2899;
				
				case 50:
					return 2905;
				
				case 51:
					return 2911;
				
				case 52:
					return 2953;
				
				case 53:
					return 2960;
				
				case 54:
					return 2967;
				
				case 55:
					return 2974;
				
				case 56:
					return 2981;
				
				case 57:
					return 2988;
				
				case 58:
					return 2995;
				
				case 59:
					return 3002;
				
				case 60:
					return 3009;
				
				case 61:
					return 3016;
				
				case 62:
					return 3023;
				
				case 63:
					return 3029;
				
				case 64:
					return 3035;
				
				case 65:
					return 3236;
				
				case 66:
					return 3244;
				
				case 67:
					return 3252;
				
				case 68:
					return 3260;
				
				case 69:
					return 3268;
				
				case 70:
					return 3276;
				
				case 71:
					return 3284;
				
				case 72:
					return 3292;
				
				case 73:
					return 3300;
				
				case 74:
					return 3308;
				
				case 75:
					return 3316;
				
				case 76:
					return 3324;
				
				case 77:
					return 3333;
				
				case 78:
					return 3341;
				
				case 79:
					return 3348;
				
				case 80:
					return 3356;
				
				case 81:
					return 3364;
				
				case 82:
					return 3372;
				
				case 83:
					return 3380;
				
				case 84:
					return 3388;
				
				case 85:
					return 3396;
				
				case 86:
					return 3403;
				
				case 87:
					return 3410;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4032;
				
				case 89:
					return 4040;
				
				case 90:
					return 4048;
				
				case 91:
					return 4056;
				
				case 92:
					return 4064;
				
				case 93:
					return 4072;
				
				case 94:
					return 4080;
				
				case 95:
					return 4088;
				
				case 96:
					return 4096;
				
				case 97:
					return 4104;
				
				case 98:
					return 4112;
				
				case 99:
					return 4120;
				
				case 100:
					return 4129;
				
				case 101:
					return 4137;
				
				case 102:
					return 4144;
				
				case 103:
					return 4152;
				
				case 104:
					return 4160;
				
				case 105:
					return 4168;
				
				case 106:
					return 4176;
				
				case 107:
					return 4184;
				
				case 108:
					return 4192;
				
				case 109:
					return 4200;
				
				case 110:
					return 4208;
				
				case 111:
					return 4216;
				
				case 112:
					return 4224;
				
				case 113:
					return 4232;
				
				case 114:
					return 4240;
				
				case 115:
					return 4248;
				
				case 116:
					return 4256;
				
				case 117:
					return 4264;
				
				case 118:
					return 4272;
				
				case 119:
					return 4280;
				
				case 120:
					return 4289;
				
				case 121:
					return 4297;
				
				case 122:
					return 4304;
				
				case 123:
					return 4312;
				
				case 124:
					return 4320;
				
				case 125:
					return 4328;
				
				case 126:
					return 4336;
				
				case 127:
					return 4344;
				
				case 128:
					return 4352;
				
				case 129:
					return 4360;
				
				case 130:
					return 4368;
				
				case 131:
					return 4376;
				
				case 132:
					return 4384;
				
				case 133:
					return 4392;
				
				case 134:
					return 4400;
				
				case 135:
					return 4408;
				
				case 136:
					return 4416;
				
				case 137:
					return 4424;
				
				case 138:
					return 4432;
				
				case 139:
					return 4440;
				
				case 140:
					return 4449;
				
				case 141:
					return 4457;
				
				case 142:
					return 4464;
				
				case 143:
					return 4472;
				
				case 144:
					return 4480;
				
				case 145:
					return 4488;
				
				case 146:
					return 4496;
				
				case 147:
					return 4504;
				
				case 148:
					return 4512;
				
				case 149:
					return 4520;
				
				case 150:
					return 4528;
				
				case 151:
					return 4536;
				
				case 152:
					return 4544;
				
				case 153:
					return 4552;
				
				case 154:
					return 4560;
				
				case 155:
					return 4568;
				
				case 156:
					return 4576;
				
				case 157:
					return 4584;
				
				case 158:
					return 5477;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5926;
				
				case 160:
					return 5933;
				
				case 161:
					return 5940;
				
				case 162:
					return 5947;
				
				case 163:
					return 5954;
				
				case 164:
					return 5961;
				
				case 165:
					return 5968;
				
				case 166:
					return 5975;
				
				case 167:
					return 5982;
				
				case 168:
					return 5989;
				
				case 169:
					return 5996;
				
				case 170:
					return 6003;
				
				case 171:
					return 6010;
				
				case 172:
					return 6017;
				
				case 173:
					return 6024;
				
				case 174:
					return 6031;
				
				case 175:
					return 6038;
				
				case 176:
					return 6045;
				
				case 177:
					return 6052;
				
				case 178:
					return 6059;
				
				case 179:
					return 6066;
				
				case 180:
					return 6073;
				
				case 181:
					return 6080;
				
				case 182:
					return 6087;
				
				case 183:
					return 6094;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6171;
				
				case 185:
					return 6178;
				
				case 186:
					return 6185;
				
				case 187:
					return 6192;
				
				case 188:
					return 6199;
				
				case 189:
					return 6206;
				
				case 190:
					return 6213;
				
				case 191:
					return 6220;
				
				case 192:
					return 6227;
				
				case 193:
					return 6234;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6568;
				
				case 195:
					return 6575;
				
				case 196:
					return 6582;
				
				case 197:
					return 6589;
				
				case 198:
					return 6596;
				
				case 199:
					return 6603;
				
				case 200:
					return 6610;
				
				case 201:
					return 6617;
				
				case 202:
					return 6624;
				
				case 203:
					return 6631;
				
				case 204:
					return 6638;
				
				case 205:
					return 6645;
				
				case 206:
					return 6652;
				
				case 207:
					return 6659;
				
				case 208:
					return 6666;
				
				case 209:
					return 6673;
				
				case 210:
					return 6680;
				
				case 211:
					return 6687;
				
				case 212:
					return 6694;
				
				case 213:
					return 6701;
				
				case 214:
					return 6708;
				
				case 215:
					return 6715;
				
				case 216:
					return 6722;
				
				case 217:
					return 6729;
				
				case 218:
					return 6736;
				
				case 219:
					return 6743;
				
				case 220:
					return 6750;
				
				case 221:
					return 6757;
				
				case 222:
					return 6764;
				
				case 223:
					return 6771;
				
				case 224:
					return 6778;
				
				case 225:
					return 6785;
				
				case 226:
					return 6792;
				
				case 227:
					return 6799;
				
				case 228:
					return 6806;
				
				case 229:
					return 6813;
				
				case 230:
					return 6820;
				
				default:
			}
			break;
			break;
	}
	return 1629;
}

int func_550(int iParam0)//Position - 0x1ACFA
{
	int iVar0;
	
	if (iParam0 < 231)
	{
		iVar0 = 0;
		while (iVar0 < 18)
		{
			if (iParam0 >= func_366(iVar0) && iParam0 < func_551(iVar0))
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_551(int iParam0)//Position - 0x1AD3C
{
	int iVar0;
	
	switch (iParam0)
	{
		case 8:
			return 108;
			break;
		
		case 9:
			return 128;
			break;
		
		case 10:
			return 148;
			break;
		
		case 11:
			return 156;
			break;
		
		case 6:
			return 75;
			break;
		
		case 7:
			return 88;
			break;
		
		case 5:
			return -1;
			break;
		
		case 12:
			return 179;
			break;
		
		case 13:
			return 186;
			break;
		
		case 14:
			return 192;
			break;
		
		case 15:
			return 202;
			break;
		
		case 16:
			return 212;
			break;
		
		case 17:
			return 222;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_375(iParam0);
		return func_552(iVar0);
	}
	return (func_367(iParam0, -1) * iParam0 + 1);
}

int func_552(int iParam0)//Position - 0x1AE25
{
	switch (iParam0)
	{
		case 0:
			return 157;
		
		case 2:
			return 224;
		
		case 1:
			return 227;
		
		default:
	}
	return -1;
}

int func_553(int iParam0, int iParam1)//Position - 0x1AE56
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam1;
	if (iParam1 == -1)
	{
		iVar0 = func_27();
	}
	if (iParam0 == 7 && !Global_40001.f_3FE5)
	{
		return 0;
	}
	if (iParam0 >= 1000)
	{
		iVar1 = func_375(iParam0);
		if (iVar1 == 0 && func_28(5389, iParam1, 0) != 0)
		{
			return 1234;
		}
		if (func_554(-1) && iVar1 == 2)
		{
			return 1236;
		}
		if (func_411(unk_0xB5CEFD608600A09F()) && iVar1 == 1)
		{
			return 1237;
		}
	}
	if (iParam0 == 0)
	{
		return Global_14F648[iVar0];
	}
	else if (iParam0 == 99)
	{
		return Global_270D5E[iVar0];
	}
	else if (iParam0 >= 1)
	{
		if (iParam0 >= 18)
		{
			return 0;
		}
		return Global_270CF3[(iParam0 - 1) /*3*/][iVar0];
	}
	return 0;
}

bool func_554(int iParam0)//Position - 0x1AF31
{
	if (!Global_40001.f_59D5)
	{
		return 0;
	}
	return func_28(7203, iParam0, 0) != 0;
}

int func_555(int iParam0)//Position - 0x1AF54
{
	int iVar0;
	
	iVar0 = iParam0;
	switch (iVar0)
	{
		case joaat("technical2"):
			return 0;
			break;
		
		case joaat("boxville5"):
			return 1;
			break;
		
		case joaat("wastelander"):
			return 2;
			break;
		
		case joaat("phantom2"):
			return 3;
			break;
		
		case joaat("voltic2"):
			return 4;
			break;
		
		case joaat("dune4"):
			return 5;
			break;
		
		case joaat("dune5"):
			return 5;
			break;
		
		case joaat("ruiner2"):
			return 6;
			break;
		
		case joaat("blazer5"):
			return 7;
			break;
	}
	return -1;
}

int func_556(int iParam0)//Position - 0x1AFDD
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = iParam0 + 157;
		func_365(iVar1, &iVar0, 1);
		if (iVar0 >= 0)
		{
			iVar2 = func_28(func_549(4, iVar0), -1, 0);
			if (iVar2 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_557(int iParam0)//Position - 0x1B023
{
	switch (iParam0)
	{
		case -1881846085:
			return 0;
			break;
	}
	return -1;
}

bool func_558()//Position - 0x1B040
{
	return func_28(func_559(3), -1, 0) != 0;
}

int func_559(int iParam0)//Position - 0x1B055
{
	switch (iParam0)
	{
		case 0:
			return 6534;
			break;
		
		case 1:
			return 6536;
			break;
		
		case 2:
			return 6537;
			break;
		
		case 3:
			return 6538;
			break;
		
		case 4:
			return 6539;
			break;
		
		case 5:
			return 6540;
			break;
	}
	return 8804;
}

bool func_560()//Position - 0x1B0C1
{
	return func_28(6159, -1, 0) != 0;
}

bool func_561()//Position - 0x1B0D4
{
	return func_28(5376, -1, 0) != 0;
}

bool func_562()//Position - 0x1B0E7
{
	return func_28(3824, -1, 0) != 0;
}

bool func_563()//Position - 0x1B0FA
{
	return func_28(3219, -1, 0) != 0;
}

bool func_564()//Position - 0x1B10D
{
	return func_28(5375, -1, 0) != 0;
}

int func_565()//Position - 0x1B120
{
	int iVar0;
	
	iVar0 = func_131();
	if (iVar0 != func_11())
	{
		return Global_18C80F[iVar0 /*558*/].f_B.f_5D;
	}
	return 0;
}

int func_566(int iParam0)//Position - 0x1B148
{
	if (func_44(iParam0) == 225 || func_44(iParam0) == 226)
	{
		return func_91(iParam0);
	}
	return -1;
}

var func_567()//Position - 0x1B175
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_281(unk_0xB5CEFD608600A09F(), iVar0))
		{
			unk_0xF0059F27F7BB6680(&uVar1, iVar0);
		}
		iVar0++;
	}
	return uVar1;
}

void func_568()//Position - 0x1B1A7
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	if (func_569())
	{
		return;
	}
	if (func_637(unk_0xB5CEFD608600A09F(), func_16(), 1))
	{
		return;
	}
	if (!unk_0x724D816EA203A79E(unk_0xA95CF30C72EB526E(func_16())))
	{
		return;
	}
	vVar0 = { unk_0x541C2AEF053615BC(unk_0xA95CF30C72EB526E(func_16()), false) };
	vVar1 = { unk_0x541C2AEF053615BC(unk_0xA95CF30C72EB526E(unk_0xB5CEFD608600A09F()), false) };
	fVar2 = SYSTEM::VDIST(vVar0, vVar1);
	if (fVar2 < 25f)
	{
		unk_0xC6EA3A47240425C4(2, vVar0 + Vector(2f, 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, uLocal_119[0], uLocal_119[1], uLocal_119[2], 100, 1, 1, 2, 0, 0, 0, false);
	}
}

int func_569()//Position - 0x1B258
{
	if (((func_598(164) || func_68()) || !func_570(1, 1, 1)) || iLocal_105 == 0)
	{
		return 1;
	}
	return 0;
}

int func_570(bool bParam0, bool bParam1, bool bParam2)//Position - 0x1B290
{
	if (func_597(unk_0xB5CEFD608600A09F(), 29))
	{
		return 0;
	}
	if (func_71(unk_0xB5CEFD608600A09F(), 21))
	{
		return 0;
	}
	if (bParam2)
	{
		if (unk_0x2F7EEEA6378AC19B())
		{
			return 0;
		}
	}
	if (!func_475(unk_0xB5CEFD608600A09F()))
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0xD92FE7FDA11C7334())
		{
			return 0;
		}
	}
	if (func_596(unk_0xB5CEFD608600A09F()))
	{
		return 0;
	}
	if (func_595())
	{
		return 0;
	}
	if (func_533())
	{
		return 0;
	}
	if (func_594())
	{
		return 0;
	}
	if (func_527())
	{
		return 0;
	}
	if (unk_0x517823CA390A19F6())
	{
		return 0;
	}
	if (func_525(unk_0xB5CEFD608600A09F()))
	{
		return 0;
	}
	if (!func_529())
	{
		return 0;
	}
	if (func_71(unk_0xB5CEFD608600A09F(), 0) || func_71(unk_0xB5CEFD608600A09F(), 3))
	{
		return 0;
	}
	if ((func_71(unk_0xB5CEFD608600A09F(), 12) || func_71(unk_0xB5CEFD608600A09F(), 14)) || func_71(unk_0xB5CEFD608600A09F(), 13))
	{
		return 0;
	}
	if (func_591(unk_0xB5CEFD608600A09F(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
	{
		if (!func_577())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (func_576())
		{
			return 0;
		}
	}
	if (Global_193981)
	{
		return 0;
	}
	if (func_575(unk_0xB5CEFD608600A09F()))
	{
		return 0;
	}
	if (func_574())
	{
		return 0;
	}
	if (func_573(unk_0xB5CEFD608600A09F()))
	{
		return 0;
	}
	if (func_572())
	{
		return 0;
	}
	if (unk_0xFA30DFD0084E92FE(Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_111.f_13, 4))
	{
		return 0;
	}
	if (func_571(unk_0xB5CEFD608600A09F()))
	{
		return 0;
	}
	return 1;
}

int func_571(int iParam0)//Position - 0x1B438
{
	if (Global_24FB5C[iParam0 /*406*/].f_101.f_4 != 0 || Global_24FB5C[iParam0 /*406*/].f_101.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_572()//Position - 0x1B46C
{
	return Global_197055.f_D0E != -1;
}

int func_573(int iParam0)//Position - 0x1B47D
{
	if (unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_13, 14))
	{
		return 1;
	}
	if (unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_13, 11))
	{
		return 1;
	}
	return 0;
}

int func_574()//Position - 0x1B4BC
{
	if (Global_40E7E8.f_31D > -1)
	{
		return 1;
	}
	return 0;
}

int func_575(int iParam0)//Position - 0x1B4D4
{
	if (!func_5(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_18402B[iParam0 /*770*/].f_23;
}

bool func_576()//Position - 0x1B4F7
{
	return Global_16B4F.f_142 > 0;
}

int func_577()//Position - 0x1B508
{
	int iVar0;
	
	iVar0 = func_44(unk_0xB5CEFD608600A09F());
	if (((func_369(Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_111.f_15) || func_590(unk_0xB5CEFD608600A09F())) || func_589(unk_0xB5CEFD608600A09F())) || func_588(unk_0xB5CEFD608600A09F()))
	{
		if (((iVar0 == 167 || iVar0 == 168) || iVar0 == 178) || iVar0 == 188)
		{
			return 1;
		}
	}
	if (func_587(unk_0xB5CEFD608600A09F()))
	{
		if (func_102(iVar0) || func_407(iVar0))
		{
			return 1;
		}
	}
	if (func_61(unk_0xB5CEFD608600A09F()))
	{
		if (func_407(iVar0))
		{
			return 1;
		}
	}
	if (func_586(unk_0xB5CEFD608600A09F()))
	{
		if (func_95(iVar0))
		{
			return 1;
		}
	}
	if (func_585(unk_0xB5CEFD608600A09F()))
	{
		if (func_94(iVar0))
		{
			return 1;
		}
	}
	if (func_584(unk_0xB5CEFD608600A09F()))
	{
		if (func_93(iVar0))
		{
			return 1;
		}
	}
	if (func_583(unk_0xB5CEFD608600A09F()))
	{
		if (func_582(iVar0))
		{
			return 1;
		}
	}
	if (func_581(unk_0xB5CEFD608600A09F(), 0))
	{
		if (func_580(iVar0))
		{
			if (func_578(unk_0xB5CEFD608600A09F()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_578(int iParam0)//Position - 0x1B649
{
	if (func_579(iParam0) != func_11())
	{
		return func_579(iParam0) == func_85(iParam0);
	}
	return 0;
}

int func_579(int iParam0)//Position - 0x1B66F
{
	return Global_18C80F[iParam0 /*558*/].f_B.f_23;
}

int func_580(int iParam0)//Position - 0x1B684
{
	switch (iParam0)
	{
		case 241:
		case 248:
		case 242:
		case 244:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return 0;
}

int func_581(int iParam0, bool bParam1)//Position - 0x1B6BC
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
	if (iParam0 != func_11())
	{
		if (func_5(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1 && Global_24FB5C[iParam0 /*406*/].f_131.f_4 != func_11())
			{
				return func_62(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 12;
			}
		}
	}
	return 0;
}

int func_582(int iParam0)//Position - 0x1B74A
{
	switch (iParam0)
	{
		case 237:
		case 238:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

int func_583(int iParam0)//Position - 0x1B776
{
	if (iParam0 != func_11())
	{
		if (func_5(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1)
			{
				return func_62(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 11;
			}
		}
	}
	return 0;
}

int func_584(int iParam0)//Position - 0x1B7BD
{
	if (iParam0 != func_11())
	{
		if (func_5(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1)
			{
				return func_62(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 9;
			}
		}
	}
	return 0;
}

int func_585(int iParam0)//Position - 0x1B804
{
	if (iParam0 != func_11())
	{
		if (func_5(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1)
			{
				return func_62(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 7;
			}
		}
	}
	return 0;
}

int func_586(int iParam0)//Position - 0x1B84A
{
	if (iParam0 != func_11())
	{
		if (func_5(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1)
			{
				return func_62(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 4;
			}
		}
	}
	return 0;
}

int func_587(int iParam0)//Position - 0x1B890
{
	if (func_368(Global_18402B[iParam0 /*770*/].f_111.f_15, -1))
	{
		return 1;
	}
	return 0;
}

int func_588(int iParam0)//Position - 0x1B8B3
{
	if (func_370(Global_18402B[iParam0 /*770*/].f_111.f_15, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_589(int iParam0)//Position - 0x1B8D7
{
	if (iParam0 != func_11())
	{
		if (func_5(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1)
			{
				return func_62(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 1;
			}
		}
	}
	return 0;
}

int func_590(int iParam0)//Position - 0x1B91D
{
	if (iParam0 != func_11())
	{
		if (func_5(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1)
			{
				return func_62(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 0;
			}
		}
	}
	return 0;
}

int func_591(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)//Position - 0x1B963
{
	if (Global_18402B[iParam0 /*770*/].f_111.f_15 > 0)
	{
		if (bParam1)
		{
			if (unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_13, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (!bParam2)
	{
		if (func_590(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_61(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_589(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_586(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_585(iParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_584(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_593(iParam0))
		{
			return 1;
		}
	}
	if (!bParam9)
	{
		if (func_583(iParam0))
		{
			return 1;
		}
	}
	if (!bParam10)
	{
		if (func_592(iParam0))
		{
			return 1;
		}
	}
	if (!bParam11)
	{
		if (func_581(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_592(int iParam0)//Position - 0x1BA63
{
	if (iParam0 != func_11())
	{
		if (func_5(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1)
			{
				return func_62(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 11;
			}
		}
	}
	return 0;
}

int func_593(int iParam0)//Position - 0x1BAAA
{
	if (iParam0 != func_11())
	{
		if (func_5(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1 && Global_24FB5C[iParam0 /*406*/].f_131.f_4 != func_11())
			{
				return func_62(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 8;
			}
		}
	}
	return 0;
}

bool func_594()//Position - 0x1BB0A
{
	return Global_140856;
}

bool func_595()//Position - 0x1BB16
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_27.f_12, 0);
}

int func_596(int iParam0)//Position - 0x1BB32
{
	if (func_524(iParam0, 1))
	{
		if (Global_18402B[iParam0 /*770*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_597(int iParam0, int iParam1)//Position - 0x1BB56
{
	return unk_0xFA30DFD0084E92FE(Global_18C80F[iParam0 /*558*/].f_B.f_5, iParam1);
}

int func_598(int iParam0)//Position - 0x1BB71
{
	if (!func_113() && !func_229(unk_0xB5CEFD608600A09F(), 1))
	{
		if (!func_65(unk_0xB5CEFD608600A09F()))
		{
			if (func_68())
			{
				return 1;
			}
		}
	}
	switch (iParam0)
	{
		case 148:
			break;
		
		case 151:
			break;
		
		case 152:
			break;
	}
	return 0;
}

void func_599()//Position - 0x1BBCA
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	if (func_637(unk_0xB5CEFD608600A09F(), func_16(), 0))
	{
		return;
	}
	vVar0 = { unk_0x541C2AEF053615BC(unk_0xA95CF30C72EB526E(func_16()), false) };
	vVar1 = { unk_0x541C2AEF053615BC(unk_0xA95CF30C72EB526E(unk_0xB5CEFD608600A09F()), false) };
	fVar2 = SYSTEM::VDIST(vVar0, vVar1);
	if (fVar2 < 25f)
	{
		if (fVar2 < 5f)
		{
			fVar4 = 175f;
		}
		else
		{
			fVar3 = (1f - (func_601(fVar2, 5f, 25f) / 25f));
			fVar4 = func_600(26f, 175f, fVar3);
		}
		unk_0xF715C239F71B95D6(0, 1000, SYSTEM::ROUND(fVar4));
	}
}

float func_600(float fParam0, float fParam1, float fParam2)//Position - 0x1BC67
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

float func_601(float fParam0, float fParam1, float fParam2)//Position - 0x1BC7C
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

int func_602(int iParam0)//Position - 0x1BCA3
{
	if (iParam0 < 0 || iParam0 > 31)
	{
		return 0;
	}
	if (!unk_0xFA30DFD0084E92FE(vLocal_133[iParam0 /*3*/].f_2, 0))
	{
		return 0;
	}
	return 1;
}

void func_603(int iParam0, int iParam1)//Position - 0x1BCD7
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x3C03CFD5DD1E2D97(unk_0xD29A8DBEF709F9D5(iParam0), "MPBitset"))
	{
		iVar0 = unk_0x67CFC62D543B19EF(unk_0xD29A8DBEF709F9D5(iParam0), "MPBitset");
	}
	unk_0xF0059F27F7BB6680(&iVar0, iParam1);
	unk_0x3F9FE9BB735B1604(unk_0xD29A8DBEF709F9D5(iParam0), "MPBitset", iVar0);
}

int func_604(int iParam0, int iParam1)//Position - 0x1BD1C
{
	if (unk_0x46032D09AA009EC4("MPBitset", 3))
	{
		if (unk_0x3C03CFD5DD1E2D97(unk_0xD29A8DBEF709F9D5(iParam0), "MPBitset"))
		{
			if (unk_0xFA30DFD0084E92FE(unk_0x67CFC62D543B19EF(unk_0xD29A8DBEF709F9D5(iParam0), "MPBitset"), iParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_605()//Position - 0x1BD5D
{
	if (!func_606(unk_0xB5CEFD608600A09F()))
	{
		func_80(25);
	}
}

bool func_606(int iParam0)//Position - 0x1BD77
{
	return func_422(iParam0, 25);
}

void func_607(int iParam0)//Position - 0x1BD87
{
	if (iLocal_105 != 2 && iLocal_105 != 3)
	{
		func_486();
		return;
	}
	if (func_569())
	{
		func_486();
		return;
	}
	switch (iParam0)
	{
		case 0:
			if (!unk_0xFA30DFD0084E92FE(iLocal_116, iParam0))
			{
				if (func_636())
				{
					func_631();
					func_629(86, "GB_HTB_BMT0", "GB_HTB_BMS0", func_630(func_16()), iLocal_106, 0, -1, -1, -1, 2, -1);
					unk_0xF0059F27F7BB6680(&iLocal_116, iParam0);
				}
			}
			break;
		
		case 1:
			if (!unk_0xFA30DFD0084E92FE(iLocal_116, iParam0))
			{
				if (func_636())
				{
					func_631();
					func_628(86, "GB_HTB_BMT0", "GB_HTB_BMS1", 1, -1, 2, 1);
					unk_0xF0059F27F7BB6680(&iLocal_116, iParam0);
				}
			}
			break;
		
		case 2:
			if (!unk_0xFA30DFD0084E92FE(iLocal_116, iParam0))
			{
				if (func_636())
				{
					func_631();
					func_628(86, "GB_HTB_BMT0", "GB_HTB_BMS2", 1, -1, 2, 1);
					unk_0xF0059F27F7BB6680(&iLocal_116, iParam0);
				}
			}
			break;
		
		case 3:
			if (!unk_0xFA30DFD0084E92FE(iLocal_116, iParam0))
			{
				if (func_636())
				{
					func_631();
					func_627(87, Local_132.f_5, -1, "GB_HTB_BMS3", "GB_WINNER", 1, -1, 2, -1);
					unk_0xF0059F27F7BB6680(&iLocal_116, iParam0);
				}
			}
			break;
		
		case 4:
			if (!unk_0xFA30DFD0084E92FE(iLocal_116, iParam0))
			{
				if (func_636())
				{
					func_631();
					func_627(88, func_6(), -1, "GB_HTB_BMS4", "GB_WORK_OVER", 1, -1, 2, -1);
					unk_0xF0059F27F7BB6680(&iLocal_116, iParam0);
				}
			}
			break;
		
		case 5:
			if (!unk_0xFA30DFD0084E92FE(iLocal_116, iParam0))
			{
				if (func_636())
				{
					func_631();
					func_628(87, "GB_WINNER", "GB_HTB_BMS5", 1, -1, 2, 1);
					unk_0xF0059F27F7BB6680(&iLocal_116, iParam0);
				}
			}
			break;
		
		case 6:
			if (!unk_0xFA30DFD0084E92FE(iLocal_116, iParam0))
			{
				if (func_636())
				{
					func_631();
					func_628(88, "GB_WORK_OVER", "GB_HTB_BMS5", 1, -1, 2, 1);
					unk_0xF0059F27F7BB6680(&iLocal_116, iParam0);
				}
			}
			break;
		
		case 7:
			if (!unk_0xFA30DFD0084E92FE(iLocal_116, iParam0))
			{
				if (func_636())
				{
					func_631();
					func_628(88, "GB_WORK_OVER", "GB_HTB_BMS6", 1, -1, 2, 1);
					unk_0xF0059F27F7BB6680(&iLocal_116, iParam0);
				}
			}
			break;
		
		case 8:
			if (!unk_0xFA30DFD0084E92FE(iLocal_116, iParam0))
			{
				if (func_636())
				{
					func_631();
					func_627(88, func_6(), -1, "GB_HTB_BMS7", "GB_WORK_OVER", 1, -1, 2, -1);
					unk_0xF0059F27F7BB6680(&iLocal_116, iParam0);
				}
			}
			break;
		
		case 9:
			if (!unk_0xFA30DFD0084E92FE(iLocal_116, iParam0))
			{
				if (func_636())
				{
					func_631();
					func_608(88, "GB_WORK_OVER", "GB_HTB_BMS8", func_621(), iLocal_106, func_6(), 0, 0, 0, -1, -1, -1, 2, -1, 2);
					unk_0xF0059F27F7BB6680(&iLocal_116, iParam0);
				}
			}
			break;
		
		case 10:
			if (!unk_0xFA30DFD0084E92FE(iLocal_116, iParam0))
			{
				if (func_636())
				{
					func_631();
					func_628(87, "GB_WINNER", "GB_HTB_BMS9", 1, -1, 2, 1);
					unk_0xF0059F27F7BB6680(&iLocal_116, iParam0);
				}
			}
			break;
		
		case 11:
			if (!unk_0xFA30DFD0084E92FE(iLocal_116, iParam0))
			{
				if (func_636())
				{
					func_631();
					func_628(87, "GB_WINNER", "GB_HTB_BMS10", 1, -1, 2, 1);
					unk_0xF0059F27F7BB6680(&iLocal_116, iParam0);
				}
			}
			break;
		
		case 12:
			if (!unk_0xFA30DFD0084E92FE(iLocal_116, iParam0))
			{
				if (func_636())
				{
					func_631();
					func_628(88, "GB_WORK_OVER", "GB_HTB_BMS11", 1, -1, 2, 1);
					unk_0xF0059F27F7BB6680(&iLocal_116, iParam0);
				}
			}
			break;
		
		case 13:
			if (!unk_0xFA30DFD0084E92FE(iLocal_116, iParam0))
			{
				if (func_636())
				{
					func_631();
					func_628(88, "GB_WORK_OVER", "GB_HTB_BMS12", 1, -1, 2, 1);
					unk_0xF0059F27F7BB6680(&iLocal_116, iParam0);
				}
			}
			break;
		
		case 14:
			if (!unk_0xFA30DFD0084E92FE(iLocal_116, iParam0))
			{
				if (func_636())
				{
					func_631();
					func_628(88, "GB_WORK_OVER", "GB_HTB_BMS13", 1, -1, 2, 1);
					unk_0xF0059F27F7BB6680(&iLocal_116, iParam0);
				}
			}
			break;
		
		case 15:
			if (!unk_0xFA30DFD0084E92FE(iLocal_116, iParam0))
			{
				if (func_636())
				{
					func_631();
					func_628(88, "GB_WORK_OVER", "GB_HTB_BMS14", 1, -1, 2, 1);
					unk_0xF0059F27F7BB6680(&iLocal_116, iParam0);
				}
			}
			break;
		
		case 16:
			if (!unk_0xFA30DFD0084E92FE(iLocal_116, iParam0))
			{
				if (func_636())
				{
					func_631();
					func_628(88, "GB_WORK_OVER", "GB_HTB_BMS15", 1, -1, 2, 1);
					unk_0xF0059F27F7BB6680(&iLocal_116, iParam0);
				}
			}
			break;
		
		case 17:
			if (!unk_0xFA30DFD0084E92FE(iLocal_116, iParam0))
			{
				if (func_636())
				{
					func_631();
					func_627(88, func_6(), -1, "GB_HTB_BMS16", "GB_WORK_OVER", 1, -1, 2, -1);
					unk_0xF0059F27F7BB6680(&iLocal_116, iParam0);
				}
			}
			break;
	}
}

int func_608(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)//Position - 0x1C211
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_10 = 1;
	Var0.f_47 = 1;
	Var0.f_48 = 2;
	Var0.f_4F = -1;
	func_620(iParam0, &Var0, iParam9, sParam2, sParam1);
	Var0.f_4 = iParam10;
	Var0.f_5 = iParam11;
	Var0.f_11 = iParam5;
	Var0.f_12 = iParam6;
	Var0.f_13 = iParam7;
	StringCopy(&(Var0.f_19), sParam3, 64);
	StringCopy(&(Var0.f_39), sParam8, 16);
	Var0.f_49 = iParam4;
	Var0.f_47 = iParam4;
	Var0.f_6 = iParam13;
	Var0.f_48 = iParam12;
	if (iParam14 != 2)
	{
		Var0.f_47 = iParam14;
	}
	unk_0xF0059F27F7BB6680(&(Var0.f_45), 2);
	return func_609(&Var0);
}

int func_609(var uParam0)//Position - 0x1C2C5
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_252E21.f_BD1)
		{
			return 0;
		}
	}
	func_619(uParam0, uParam0->f_11);
	func_618(uParam0);
	if (func_179())
	{
		func_618(uParam0);
	}
	if (func_617(uParam0->f_1))
	{
		func_610();
		if (Global_252E21.f_A8F[0 /*80*/].f_2 == 0)
		{
			Global_252E21.f_A8F[0 /*80*/] = { *uParam0 };
			return 1;
		}
		if (((Global_252E21.f_A8F[0 /*80*/].f_1 == 13 || Global_252E21.f_A8F[0 /*80*/].f_1 == 53) || Global_252E21.f_A8F[0 /*80*/].f_1 == 54) || Global_252E21.f_A8F[0 /*80*/].f_1 == 58)
		{
			Global_252E21.f_A8F[0 /*80*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_252E21.f_A8F[iVar0 + 1 /*80*/] = { Global_252E21.f_A8F[iVar0 /*80*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_252E21.f_A8F[1 /*80*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_252E21.f_A8F[iVar0 /*80*/].f_2 == 0)
		{
			Global_252E21.f_A8F[iVar0 /*80*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_610();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				unk_0xF0059F27F7BB6680(&(Global_252E21.f_A8F[iVar0 /*80*/].f_45), 1);
				Global_252E21.f_A8F[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !unk_0xFA30DFD0084E92FE(uParam0->f_45, 7))
			{
				if (func_489(Global_252E21.f_A8F[iVar0 /*80*/].f_1))
				{
					Global_252E21.f_A8F[iVar0 /*80*/].f_2 = 5;
					unk_0xF0059F27F7BB6680(&(Global_252E21.f_A8F[iVar0 /*80*/].f_45), 0);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_610()//Position - 0x1C496
{
	bool bVar0;
	
	if (Global_252E21.f_BD2)
	{
		return;
	}
	if (!Global_1164E)
	{
		Global_1164E = 1;
		bVar0 = true;
	}
	func_611();
	if (bVar0)
	{
		Global_1164E = 0;
	}
}

void func_611()//Position - 0x1C4C9
{
	Global_252E21.f_BD3 = 0;
	Global_252E21.f_BD3.f_242 = 0;
	func_615(&(Global_252E21.f_BD3.f_1));
	Global_252E21.f_BD3.f_1.f_1 = 0;
	func_612(&(Global_252E21.f_BD3.f_1));
}

void func_612(var uParam0)//Position - 0x1C50A
{
	if (uParam0->f_1 != 0)
	{
		unk_0xB0B0FE33F4F22679(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if (uParam0->f_232 && uParam0->f_4 != 0)
	{
		if (unk_0x8ACB0C3FACC09467())
		{
			unk_0x29CD142125FE177B(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			unk_0x5E5DBD0A6623969E(false);
			unk_0xF9FBC2F3F73D94C9();
		}
		unk_0xB0B0FE33F4F22679(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_234)
	{
		unk_0xC4248B71D9B26306(false);
		uParam0->f_234 = 0;
	}
	if (!Global_1164E)
	{
		if (!unk_0x0928DEFC3216677B(unk_0xFC1CAE18F3ECBF2D()))
		{
			if (!Global_1164F)
			{
				if (unk_0x17FAADF9916EF741() && !func_614(0))
				{
					unk_0x829FA4611BD56B44(800);
				}
			}
		}
	}
	func_613(0);
}

void func_613(int iParam0)//Position - 0x1C5B1
{
	Global_11646 = iParam0;
	Global_11647 = iParam0;
}

bool func_614(bool bParam0)//Position - 0x1C5C5
{
	if (!bParam0 && unk_0xB731B8C5BCE89836(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_1163A, 0);
}

void func_615(var uParam0)//Position - 0x1C5F0
{
	func_616(uParam0);
	uParam0->f_23A = 0;
	uParam0->f_1F = 0;
	uParam0->f_38 = 0;
	uParam0->f_237 = 0;
	uParam0->f_239 = 0;
}

void func_616(var uParam0)//Position - 0x1C61A
{
	uParam0->f_223 = 1f;
	uParam0->f_222 = 0;
	uParam0->f_238 = 0f;
	uParam0->f_22E = 0;
	uParam0->f_1E = 0f;
	uParam0->f_224 = 0f;
	uParam0->f_22F = 0f;
	uParam0->f_230 = 0f;
	uParam0->f_221 = 0;
	uParam0->f_233 = 0;
	uParam0->f_23C = 0;
	uParam0->f_234 = 0;
	uParam0->f_235 = 0;
	uParam0->f_236 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_23E = 0;
	uParam0->f_23F = 0;
	uParam0->f_23D = 1f;
}

int func_617(int iParam0)//Position - 0x1C699
{
	if ((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105)
	{
		return 1;
	}
	return 0;
}

void func_618(var uParam0)//Position - 0x1C79B
{
	if (func_491(uParam0->f_1))
	{
		uParam0->f_48 = func_456();
	}
}

void func_619(var uParam0, int iParam1)//Position - 0x1C7B6
{
	if (func_491(uParam0->f_1))
	{
		uParam0->f_49 = 1;
	}
	if (iParam1 == func_11() || !func_5(iParam1, 0, 1))
	{
		return;
	}
	if (func_489(uParam0->f_1))
	{
		if (uParam0->f_47 == 1)
		{
			uParam0->f_49 = func_203(iParam1, -2, 0, 0);
		}
	}
}

void func_620(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)//Position - 0x1C80C
{
	uParam1->f_11 = func_11();
	uParam1->f_12 = func_11();
	uParam1->f_13 = func_11();
	uParam1->f_14 = func_11();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_15), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_10 = 1;
	uParam1->f_3 = iParam2;
	uParam1->f_47 = 1;
	uParam1->f_4A = 1;
	uParam1->f_4B = 1;
	uParam1->f_4C = 0;
	uParam1->f_4D = 0;
	uParam1->f_49 = 0;
	StringCopy(&(uParam1->f_19), "", 64);
	StringCopy(&(uParam1->f_29), "", 64);
}

char* func_621()//Position - 0x1C88C
{
	int iVar0;
	char* sVar1;
	
	iVar0 = func_85(unk_0xB5CEFD608600A09F());
	if (iVar0 != func_11())
	{
		if (iVar0 != unk_0xB5CEFD608600A09F())
		{
			if (((func_422(iVar0, 28) || func_422(unk_0xB5CEFD608600A09F(), 28)) || func_626(iVar0)) && !func_625(iVar0))
			{
				return func_623(iVar0, 0);
			}
			if (!unk_0xF49912B78E2591B6() && !unk_0x7A3896EC51DA2E5E(0, -1, 1))
			{
				return func_623(iVar0, 0);
			}
		}
		sVar1 = func_622(&(Global_18C80F[iVar0 /*558*/].f_B.f_63));
		if (unk_0xF1734B55490E9045(sVar1))
		{
			return func_623(iVar0, 0);
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

var func_622(var uParam0)//Position - 0x1C93E
{
	return uParam0;
}

char* func_623(int iParam0, bool bParam1)//Position - 0x1C948
{
	if (!bParam1)
	{
		if (func_51(iParam0, 1))
		{
			return func_624();
		}
	}
	return unk_0xFCB4C1AC11347344("GB_REST_ACC");
}

char* func_624()//Position - 0x1C96F
{
	return unk_0xFCB4C1AC11347344("GB_REST_ACCM");
}

int func_625(int iParam0)//Position - 0x1C97F
{
	struct<13> Var0;
	
	Var0 = { func_154(iParam0) };
	if (unk_0xF49912B78E2591B6())
	{
		if (unk_0x5553DFDA03631860(0))
		{
			if (unk_0x43AECC0539840131(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_626(int iParam0)//Position - 0x1C9AF
{
	struct<13> Var0;
	
	if (iParam0 != func_11())
	{
		Var0 = { func_154(iParam0) };
		if (unk_0xF7E138CFA19B55E7() || unk_0x8ACB0C3FACC09467())
		{
			if (unk_0x5553DFDA03631860(0))
			{
				return 0;
			}
		}
		else if (unk_0xF49912B78E2591B6())
		{
			if (unk_0x5553DFDA03631860(0))
			{
				if (unk_0x43AECC0539840131(&Var0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

int func_627(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x1CA08
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_10 = 1;
	Var0.f_47 = 1;
	Var0.f_48 = 2;
	Var0.f_4F = -1;
	func_620(iParam0, &Var0, iParam2, sParam3, sParam4);
	Var0.f_11 = iParam1;
	Var0.f_47 = iParam5;
	Var0.f_6 = iParam6;
	Var0.f_48 = iParam7;
	if (iParam8 != -1)
	{
		unk_0xF0059F27F7BB6680(&(Var0.f_45), iParam8);
	}
	return func_609(&Var0);
}

int func_628(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1CA89
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_10 = 1;
	Var0.f_47 = 1;
	Var0.f_48 = 2;
	Var0.f_4F = -1;
	func_620(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_47 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_48 = iParam5;
	Var0.f_10 = iParam6;
	return func_609(&Var0);
}

int func_629(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x1CAF9
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_11();
	iVar1 = func_11();
	iVar2 = func_11();
	return func_608(iParam0, sParam1, sParam2, sParam3, iParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, 2);
}

char* func_630(int iParam0)//Position - 0x1CB34
{
	char* sVar0;
	int iVar1;
	
	if (iParam0 == unk_0xB5CEFD608600A09F())
	{
		sVar0 = func_622(&(Global_18C80F[iParam0 /*558*/].f_B.f_63));
		return sVar0;
	}
	if (Global_18C80F[iParam0 /*558*/].f_B.f_73 != Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_73)
	{
		sVar0 = func_623(iParam0, 0);
		return sVar0;
	}
	if (((func_422(iParam0, 28) || func_422(unk_0xB5CEFD608600A09F(), 28)) || func_626(iParam0)) && !func_625(iParam0))
	{
		return func_623(iParam0, 0);
	}
	iVar1 = func_85(iParam0);
	if (iVar1 != func_11())
	{
		if (iVar1 != unk_0xB5CEFD608600A09F())
		{
			if (!unk_0xF49912B78E2591B6() && !unk_0x7A3896EC51DA2E5E(0, -1, 1))
			{
				return func_623(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_11())
	{
		sVar0 = func_622(&(Global_18C80F[iVar1 /*558*/].f_B.f_63));
		if (unk_0xF1734B55490E9045(sVar0))
		{
			return func_623(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

void func_631()//Position - 0x1CC3B
{
	if (((((((func_634("GB_HTB_HR1", func_630(func_16()), func_635(func_16())) || func_633("GB_HTB_HR0", func_630(func_16()), func_635(func_16()), "GB_HTB_BLP", func_635(func_16()))) || func_632("GB_HTB_HG0", "GB_HTB_BLP", func_635(func_16()))) || func_34("GB_HTB_HELP2")) || func_34("GB_HTB_HELP3")) || func_34("GB_HTB_HELP4")) || func_34("GB_HTB_HELP5")) || func_34("GB_HTB_HELP7"))
	{
		unk_0x7456702622C62EA0(1);
	}
}

int func_632(char* sParam0, char* sParam1, int iParam2)//Position - 0x1CCED
{
	unk_0xF07D20149ECBC61E(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x449F0674640D94C0(iParam2);
	}
	unk_0xC9C304D0AABE1335(sParam1);
	return unk_0xA66DBDA0A072514A(0);
}

int func_633(char* sParam0, char* sParam1, int iParam2, char* sParam3, int iParam4)//Position - 0x1CD14
{
	unk_0xF07D20149ECBC61E(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x449F0674640D94C0(iParam2);
	}
	unk_0x607C19B90D297FE2(sParam1);
	if (!iParam4 == 0)
	{
		unk_0x449F0674640D94C0(iParam4);
	}
	unk_0xC9C304D0AABE1335(sParam3);
	return unk_0xA66DBDA0A072514A(0);
}

int func_634(char* sParam0, char* sParam1, int iParam2)//Position - 0x1CD4F
{
	unk_0xF07D20149ECBC61E(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x449F0674640D94C0(iParam2);
	}
	unk_0x607C19B90D297FE2(sParam1);
	return unk_0xA66DBDA0A072514A(0);
}

int func_635(int iParam0)//Position - 0x1CD76
{
	int iVar0;
	
	iVar0 = func_215(iParam0);
	if (iVar0 != -1)
	{
		return func_213(iVar0);
	}
	return 1;
}

int func_636()//Position - 0x1CD96
{
	if ((func_5(unk_0xB5CEFD608600A09F(), 1, 1) && !unk_0xE186ACC7BE9B244E()) && !func_534())
	{
		return 1;
	}
	return 0;
}

int func_637(int iParam0, int iParam1, bool bParam2)//Position - 0x1CDC4
{
	if (iParam1 != func_11())
	{
		if (!bParam2)
		{
			if (func_638(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_18C80F[iParam0 /*558*/].f_B != func_11())
		{
			return iParam1 == Global_18C80F[iParam0 /*558*/].f_B;
		}
	}
	return 0;
}

int func_638(int iParam0, int iParam1)//Position - 0x1CE0E
{
	if (iParam1 != func_11())
	{
		if (iParam0 != func_11())
		{
			if (Global_18C80F[iParam0 /*558*/].f_B != func_11())
			{
				if (Global_18C80F[iParam0 /*558*/].f_B == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

void func_639(int iParam0)//Position - 0x1CE53
{
	if (func_569())
	{
		func_631();
		return;
	}
	switch (iParam0)
	{
		case 0:
			if (!unk_0xFA30DFD0084E92FE(iLocal_117, iParam0))
			{
				if (func_645(0))
				{
					func_644("GB_HTB_HB0", "GB_HTB_BLP", func_635(func_16()), -1);
					func_49(1);
					unk_0xF0059F27F7BB6680(&iLocal_117, iParam0);
				}
			}
			break;
		
		case 1:
			if (!unk_0xFA30DFD0084E92FE(iLocal_117, iParam0))
			{
				if (func_645(0))
				{
					func_643("GB_HTB_HR0", func_630(func_16()), func_635(func_16()), "GB_HTB_BLP", func_635(func_16()), -1);
					func_49(1);
					unk_0xF0059F27F7BB6680(&iLocal_117, iParam0);
				}
			}
			break;
		
		case 2:
			if (!unk_0xFA30DFD0084E92FE(iLocal_117, iParam0))
			{
				if (func_645(0))
				{
					func_53("GB_HTB_HELP2", -1);
					func_49(1);
					unk_0xF0059F27F7BB6680(&iLocal_117, iParam0);
				}
			}
			break;
		
		case 3:
			if (!unk_0xFA30DFD0084E92FE(iLocal_117, iParam0))
			{
				if (func_645(0))
				{
					func_53("GB_HTB_HELP3", -1);
					func_49(1);
					unk_0xF0059F27F7BB6680(&iLocal_117, iParam0);
				}
			}
			break;
		
		case 4:
			if (func_645(0))
			{
				func_53("GB_HTB_HELP4", -1);
				func_49(0);
			}
			break;
		
		case 5:
			if (!unk_0xFA30DFD0084E92FE(iLocal_117, iParam0))
			{
				if (func_645(0))
				{
					func_53("GB_HTB_HELP5", -1);
					func_49(1);
					unk_0xF0059F27F7BB6680(&iLocal_117, iParam0);
				}
			}
			break;
		
		case 6:
			if (!unk_0xFA30DFD0084E92FE(iLocal_117, iParam0))
			{
				if (func_645(0))
				{
					func_644("GB_HTB_HG0", "GB_HTB_BLP", func_635(func_16()), -1);
					func_49(1);
					unk_0xF0059F27F7BB6680(&iLocal_117, iParam0);
				}
			}
			break;
		
		case 7:
			if (!unk_0xFA30DFD0084E92FE(iLocal_117, iParam0))
			{
				if (func_645(0))
				{
					func_53("GB_HTB_HELP7", -1);
					func_49(1);
					unk_0xF0059F27F7BB6680(&iLocal_117, iParam0);
					func_641(1226312168, func_642(0));
				}
			}
			break;
		
		case 8:
			if (!unk_0xFA30DFD0084E92FE(iLocal_117, iParam0))
			{
				if (func_645(0))
				{
					func_640("GB_HTB_HR1", func_630(func_16()), func_635(func_16()), -1);
					func_49(1);
					unk_0xF0059F27F7BB6680(&iLocal_117, iParam0);
					func_641(1226312168, func_642(0));
				}
			}
			break;
	}
}

void func_640(char* sParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x1D087
{
	unk_0x2F618BD43614DD0D(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x449F0674640D94C0(iParam2);
	}
	unk_0x607C19B90D297FE2(sParam1);
	unk_0x72F8FA06CC9EC899(0, 0, false, iParam3);
}

void func_641(int iParam0, int iParam1)//Position - 0x1D0B2
{
	struct<4> Var0;
	
	Var0 = -319074860;
	Var0.f_1 = unk_0xB5CEFD608600A09F();
	Var0.f_2 = iParam0;
	Var0.f_3 = unk_0x491B2241281A03B7(0, 9999);
	if (!iParam1 == 0)
	{
		if (unk_0x7AF0088ABFA713B6())
		{
			unk_0x38E776D9FA75679B(1, &Var0, 4, iParam1);
		}
	}
}

int func_642(bool bParam0)//Position - 0x1D0F7
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x3171C34AB3FE6F2E(iVar1);
		if (func_5(iVar2, 0, 0))
		{
			if (bParam0)
			{
				if (unk_0xFA30DFD0084E92FE(vLocal_133[iVar1 /*3*/].f_2, 0))
				{
					unk_0xF0059F27F7BB6680(&uVar0, iVar2);
				}
			}
			else if (iVar2 != Local_132.f_5)
			{
				if (unk_0xFA30DFD0084E92FE(vLocal_133[iVar1 /*3*/].f_2, 0))
				{
					unk_0xF0059F27F7BB6680(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

void func_643(char* sParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x1D168
{
	unk_0x2F618BD43614DD0D(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x449F0674640D94C0(iParam2);
	}
	unk_0x607C19B90D297FE2(sParam1);
	if (!iParam4 == 0)
	{
		unk_0x449F0674640D94C0(iParam4);
	}
	unk_0xC9C304D0AABE1335(sParam3);
	unk_0x72F8FA06CC9EC899(0, 0, false, iParam5);
}

void func_644(char* sParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x1D1A7
{
	unk_0x2F618BD43614DD0D(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x449F0674640D94C0(iParam2);
	}
	unk_0xC9C304D0AABE1335(sParam1);
	unk_0x72F8FA06CC9EC899(0, 0, false, iParam3);
}

int func_645(bool bParam0)//Position - 0x1D1D2
{
	if ((((!func_534() && !unk_0xE186ACC7BE9B244E()) && !unk_0x7382A6B79BD5F585()) && func_5(unk_0xB5CEFD608600A09F(), 1, 1)) && !func_79())
	{
		if (bParam0)
		{
			if (!unk_0xF16DAFF595E80F7C())
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_646()//Position - 0x1D228
{
	if (unk_0xB5CEFD608600A09F() == func_16())
	{
		return 1;
	}
	return 0;
}

void func_647()//Position - 0x1D240
{
	int iVar0;
	var uVar1;
	char* sVar2;
	
	iVar0 = 1;
	iLocal_131 = iLocal_131;
	if (func_21(&(Local_132.f_C)))
	{
		if (func_656(Local_132.f_C, (Global_40001.f_2E67 - 35000), 0))
		{
			func_655(&iLocal_130, 3, 1);
		}
		if (func_656(Local_132.f_C, (Global_40001.f_2E67 - 30000), 0))
		{
			func_655(&iLocal_130, 4, 1);
		}
		if (func_656(Local_132.f_C, (Global_40001.f_2E67 - 27000), 0))
		{
			func_655(&iLocal_130, 5, 1);
		}
		if (func_656(Local_132.f_C, Global_40001.f_2E67, 0))
		{
			func_655(&iLocal_130, 2, 1);
		}
	}
	if (func_653(unk_0xB5CEFD608600A09F(), Global_40001.f_2E6B, &uVar1, func_655(&iLocal_130, 13, -1), 1123024896, 0))
	{
		func_655(&iLocal_130, 13, 1);
	}
	else
	{
		func_655(&iLocal_130, 13, 0);
	}
	if (bLocal_122 || (!func_651() && !func_655(&iLocal_130, 13, -1)))
	{
		iVar0 = 0;
	}
	switch (func_650(unk_0x6BAA0516CC970D99()))
	{
		case 0:
			break;
		
		case 1:
			if (!func_655(&iLocal_130, 12, 1))
			{
				iLocal_131 = unk_0xED678C85A82F0AB9();
			}
			if (iVar0 && !func_655(&iLocal_130, 3, -1))
			{
				if (!func_655(&iLocal_130, 1, -1))
				{
					sVar2 = func_649(func_651(), "BG_HUNT_BOSS_DEFEND_START", "BG_HUNT_BOSS_ATTACK_START");
					if (unk_0x6FED2D1AA2EBF334(sVar2) && func_655(&iLocal_130, 11, -1))
					{
						unk_0x3857DADBD6EC8A54(sVar2);
						func_655(&iLocal_130, 1, 1);
					}
					if (!func_655(&iLocal_130, 11, -1))
					{
						func_648(1);
					}
				}
			}
			else if (func_655(&iLocal_130, 1, -1) && !func_655(&iLocal_130, 3, -1))
			{
				if (unk_0x6FED2D1AA2EBF334("BG_HUNT_STOP"))
				{
					unk_0x3857DADBD6EC8A54("BG_HUNT_STOP");
					func_648(0);
					func_655(&iLocal_130, 1, 0);
				}
			}
			if (func_655(&iLocal_130, 3, -1))
			{
				if (func_655(&iLocal_130, 1, -1))
				{
					if (unk_0x6FED2D1AA2EBF334("APT_PRE_COUNTDOWN_STOP"))
					{
						unk_0x3857DADBD6EC8A54("APT_PRE_COUNTDOWN_STOP");
						func_655(&iLocal_130, 1, 0);
					}
				}
			}
			if (func_655(&iLocal_130, 4, -1))
			{
				if ((!func_655(&iLocal_130, 7, -1) && !func_655(&iLocal_130, 5, -1)) && !(func_569() || iLocal_105 != 3))
				{
					if (unk_0x6FED2D1AA2EBF334("APT_COUNTDOWN_30S"))
					{
						unk_0x9B90420B04C07704("AllowScoreAndRadio", 1);
						unk_0x3857DADBD6EC8A54("APT_COUNTDOWN_30S");
						func_655(&iLocal_130, 7, 1);
					}
				}
				if ((!func_655(&iLocal_130, 6, -1) && !func_655(&iLocal_130, 5, -1)) && func_655(&iLocal_130, 7, -1))
				{
					unk_0x1549CEF3D921CF97(0);
					func_655(&iLocal_130, 6, 1);
				}
			}
			break;
		
		case 2:
			if (!func_655(&iLocal_130, 8, -1) && func_655(&iLocal_130, 7, -1))
			{
				if (unk_0x6FED2D1AA2EBF334("APT_FADE_IN_RADIO"))
				{
					unk_0x3857DADBD6EC8A54("APT_FADE_IN_RADIO");
					func_655(&iLocal_130, 8, 1);
				}
			}
			if (func_655(&iLocal_130, 1, -1))
			{
				if (unk_0x6FED2D1AA2EBF334("BG_HUNT_STOP"))
				{
					unk_0x748798F6C2AB96B7("APT_COUNTDOWN_30S_KILL");
					unk_0x3857DADBD6EC8A54("BG_HUNT_STOP");
					func_655(&iLocal_130, 1, 0);
				}
			}
			if (func_655(&iLocal_130, 7, -1) && !func_655(&iLocal_130, 2, -1))
			{
				if (unk_0x6FED2D1AA2EBF334("APT_COUNTDOWN_30S_KILL"))
				{
					func_655(&iLocal_130, 7, 0);
					unk_0x3857DADBD6EC8A54("APT_COUNTDOWN_30S_KILL");
				}
			}
			if (func_655(&iLocal_130, 11, -1))
			{
				func_648(0);
			}
			break;
	}
	if (func_655(&iLocal_130, 6, -1) && (func_655(&iLocal_130, 5, -1) || func_650(unk_0x6BAA0516CC970D99()) == 2))
	{
		unk_0x1549CEF3D921CF97(1);
		unk_0x9B90420B04C07704("AllowScoreAndRadio", 0);
		func_655(&iLocal_130, 6, 0);
	}
	if (func_21(&(Local_132.f_10)) && func_656(Local_132.f_10, 10000, 0))
	{
		if (!func_655(&iLocal_130, 10, -1))
		{
			iLocal_129 = unk_0x2F079D1FC5F6CB99();
			unk_0xC4BA30B532FE260F(iLocal_129, "10s", "MP_MISSION_COUNTDOWN_SOUNDSET", false);
			func_655(&iLocal_130, 10, 1);
		}
	}
	else if (func_655(&iLocal_130, 10, -1))
	{
		unk_0x38FF8CB6377D36F6(iLocal_129);
		iLocal_129 = -1;
		func_655(&iLocal_130, 10, 0);
	}
}

void func_648(bool bParam0)//Position - 0x1D640
{
	if (bParam0)
	{
		unk_0x9B90420B04C07704("DisableFlightMusic", 1);
		unk_0x9B90420B04C07704("WantedMusicDisabled", 1);
		func_655(&iLocal_130, 11, 1);
	}
	else
	{
		unk_0x9B90420B04C07704("DisableFlightMusic", 0);
		unk_0x9B90420B04C07704("WantedMusicDisabled", 0);
		func_655(&iLocal_130, 11, 0);
	}
}

char* func_649(bool bParam0, char* sParam1, char* sParam2)//Position - 0x1D688
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_650(int iParam0)//Position - 0x1D69F
{
	return vLocal_133[iParam0 /*3*/].f_1;
}

bool func_651()//Position - 0x1D6AF
{
	return func_652(func_16(), 1);
}

int func_652(int iParam0, bool bParam1)//Position - 0x1D6C0
{
	return func_637(unk_0xB5CEFD608600A09F(), iParam0, bParam1);
}

int func_653(int iParam0, int iParam1, var uParam2, bool bParam3, float fParam4, bool bParam5)//Position - 0x1D6D4
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	iVar0 = unk_0xA95CF30C72EB526E(iParam0);
	fVar1 = func_654(bParam3, 30f, 0f);
	fVar2 = 4f;
	if (!unk_0x724D816EA203A79E(iVar0))
	{
		return 0;
	}
	*uParam2 = func_15(iVar0, Local_132.f_7, 0);
	if (*uParam2 > (IntToFloat(iParam1) + (fVar1 * fVar2)))
	{
		return 0;
	}
	fVar3 = unk_0xDB5C848CD9F1133E(iVar0);
	*uParam2 = func_14(*uParam2, fVar3);
	if (fVar3 > (fParam4 + fVar1) && !bParam5)
	{
		return 0;
	}
	return 1;
}

float func_654(bool bParam0, float fParam1, float fParam2)//Position - 0x1D753
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_655(int iParam0, int iParam1, int iParam2)//Position - 0x1D76A
{
	bool bVar0;
	
	bVar0 = unk_0xFA30DFD0084E92FE(*iParam0, iParam1);
	if (iParam2 == 0)
	{
		unk_0x7CB6FD92BE491AD9(iParam0, iParam1);
	}
	else if (iParam2 == 1)
	{
		unk_0xF0059F27F7BB6680(iParam0, iParam1);
	}
	return bVar0;
}

int func_656(int iParam0, var uParam1, int iParam2, bool bParam3)//Position - 0x1D79E
{
	if (iParam2 == -1)
	{
		return 1;
	}
	if (unk_0x7AF0088ABFA713B6() && !bParam3)
	{
		if (unk_0xC40EDFF7541407A8(unk_0xCCA9497DA4595710(unk_0xED678C85A82F0AB9(), iParam0)) >= iParam2)
		{
			return 1;
		}
	}
	else if (unk_0xC40EDFF7541407A8(unk_0xCCA9497DA4595710(unk_0x105601648511CC64(), iParam0)) >= iParam2)
	{
		return 1;
	}
	return 0;
}

void func_657()//Position - 0x1D7F1
{
	switch (vLocal_133[unk_0x6BAA0516CC970D99() /*3*/].f_1)
	{
		case 1:
			if (func_646())
			{
				if (!unk_0xFA30DFD0084E92FE(vLocal_133[unk_0x6BAA0516CC970D99() /*3*/].f_2, 3))
				{
					if (func_658(82, "GB_INTTXT_HBB", 2, 0, 0, 0, 0, 1, 0, 1))
					{
						unk_0xF0059F27F7BB6680(&(vLocal_133[unk_0x6BAA0516CC970D99() /*3*/].f_2), 3);
					}
				}
			}
			else if (func_637(unk_0xB5CEFD608600A09F(), func_16(), 0))
			{
				if (!unk_0xFA30DFD0084E92FE(vLocal_133[unk_0x6BAA0516CC970D99() /*3*/].f_2, 3))
				{
					if (func_658(82, "GB_INTTXT_HBG", 2, 0, 0, 0, 0, 1, 0, 1))
					{
						unk_0xF0059F27F7BB6680(&(vLocal_133[unk_0x6BAA0516CC970D99() /*3*/].f_2), 3);
					}
				}
			}
			break;
	}
}

int func_658(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)//Position - 0x1D899
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	unk_0x7CB6FD92BE491AD9(&Global_93B, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_659(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_BFE = iParam6;
			Global_B9D[3 /*6*/] = { Global_19B04.f_6D75[iParam0 /*29*/].f_3 };
			Global_BEA = iParam0;
			unk_0xF0059F27F7BB6680(&Global_93B, 1);
			unk_0xF0059F27F7BB6680(&Global_93B, 7);
		}
		return 1;
	}
	return 0;
}

int func_659(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)//Position - 0x1D931
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x3362CDE8460ED38B(sParam14, sParam15))
	{
	}
	func_669();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_389D == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_389D == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_389D == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
		{
			if (unk_0xBCBEDE9A08E4ED89(unk_0xBC25C936A095B5BA()))
			{
				return 0;
			}
		}
		if (Global_19B04.f_36C6[Global_389D /*20*/].f_11 == 1)
		{
			return 0;
		}
		if (unk_0xB731B8C5BCE89836(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0xB731B8C5BCE89836(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_668() == 0)
	{
		func_666();
		return 0;
	}
	func_665(Global_41E3);
	StringCopy(&(Global_19B04.f_3720[Global_41E3 /*104*/]), sParam1, 64);
	Global_19B04.f_3720[Global_41E3 /*104*/].f_11 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_19B04.f_3720[Global_41E3 /*104*/].f_18 = iParam2;
	}
	Global_19B04.f_3720[Global_41E3 /*104*/].f_19 = iParam7;
	Global_19B04.f_3720[Global_41E3 /*104*/].f_1A = uParam8;
	Global_19B04.f_3720[Global_41E3 /*104*/].f_1D = uParam9;
	Global_19B04.f_3720[Global_41E3 /*104*/].f_1E = uParam12;
	Global_19B04.f_3720[Global_41E3 /*104*/].f_1F = uParam11;
	Global_19B04.f_3720[Global_41E3 /*104*/].f_1C = 0;
	Global_19B04.f_3720[Global_41E3 /*104*/].f_20 = iParam3;
	StringCopy(&(Global_19B04.f_3720[Global_41E3 /*104*/].f_21), sParam4, 64);
	Global_19B04.f_3720[Global_41E3 /*104*/].f_31 = iParam6;
	StringCopy(&(Global_19B04.f_3720[Global_41E3 /*104*/].f_32), sParam5, 64);
	Global_19B04.f_3720[Global_41E3 /*104*/].f_42 = iParam13;
	StringCopy(&(Global_19B04.f_3720[Global_41E3 /*104*/].f_43), sParam14, 64);
	StringCopy(&(Global_19B04.f_3720[Global_41E3 /*104*/].f_53), sParam15, 64);
	if (unk_0xFA30DFD0084E92FE(Global_93B, 10))
	{
		Global_19B04.f_3720[Global_41E3 /*104*/].f_63[0] = 1;
		Global_19B04.f_3720[Global_41E3 /*104*/].f_63[1] = 1;
		Global_19B04.f_3720[Global_41E3 /*104*/].f_63[2] = 1;
		Global_BFD = 4;
		func_664(0);
		func_664(2);
		func_664(1);
	}
	else
	{
		func_669();
		switch (iParam16)
		{
			case 3:
				Global_19B04.f_3720[Global_41E3 /*104*/].f_63[Global_389D] = 1;
				break;
			
			case 0:
				Global_19B04.f_3720[Global_41E3 /*104*/].f_63[0] = 1;
				break;
			
			case 2:
				Global_19B04.f_3720[Global_41E3 /*104*/].f_63[2] = 1;
				break;
			
			case 1:
				Global_19B04.f_3720[Global_41E3 /*104*/].f_63[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_389D)
			{
				case 0:
					func_664(0);
					Global_BFD = 0;
					break;
				
				case 1:
					func_664(1);
					Global_BFD = 1;
					break;
				
				case 2:
					func_664(2);
					Global_BFD = 2;
					break;
				
				case 3:
					func_664(3);
					Global_BFD = 3;
					break;
				
				default:
					Global_BFD = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (unk_0xFA30DFD0084E92FE(Global_93B, 10))
		{
			Global_19B04.f_36C6[0 /*20*/].f_11 = 1;
			Global_19B04.f_36C6[1 /*20*/].f_11 = 1;
			Global_19B04.f_36C6[2 /*20*/].f_11 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_19B04.f_36C6[Global_389D /*20*/].f_11 = 1;
					break;
				
				case 0:
					Global_19B04.f_36C6[0 /*20*/].f_11 = 1;
					break;
				
				case 2:
					Global_19B04.f_36C6[2 /*20*/].f_11 = 1;
					break;
				
				case 1:
					Global_19B04.f_36C6[1 /*20*/].f_11 = 1;
					break;
				}
			}
	}
	Global_41E5[Global_41E3] = 0;
	if (bParam10)
	{
		func_669();
		if (Global_3864)
		{
			StringCopy(&Global_3892, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_389D)
			{
				case 0:
					StringCopy(&Global_3892, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_3892, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_3892, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_3892, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_C60[Global_389D /*2811*/][0 /*281*/].f_103 == 1)
		{
			if (!func_594())
			{
				unk_0xC4BA30B532FE260F(-1, "Text_Arrive_Tone", &Global_3892, true);
			}
		}
	}
	if (!Global_3944)
	{
		if (Global_389D.f_1 == 6)
		{
			func_663(Global_388A, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_660(1);
			func_663(Global_388A, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_3889), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_660(int iParam0)//Position - 0x1DDE8
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	Global_41E4 = 0;
	Global_B98 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_B74[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_662(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_942[iVar1 /*15*/].f_B)
				{
					if (iVar0 == Global_942[iVar1 /*15*/].f_4)
					{
						if (Global_B74[iVar0] == 0)
						{
							Global_B50[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0xFA30DFD0084E92FE(Global_93C, 3))
								{
									iVar2 = 42;
									Global_3947 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_3947 = 0;
								}
								unk_0x29CD142125FE177B(Global_388A, "SET_DATA_SLOT");
								unk_0x1E1FB49121565EB6(1);
								unk_0x1E1FB49121565EB6(iVar0);
								unk_0x1E1FB49121565EB6(Global_942[iVar1 /*15*/].f_A);
								unk_0x1E1FB49121565EB6(0);
								func_439(&(Global_942[iVar1 /*15*/]));
								unk_0x1E1FB49121565EB6(iVar2);
								unk_0xF9FBC2F3F73D94C9();
							}
							if (Global_25805E)
							{
								if (iVar1 == 14)
								{
									func_661(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_942[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_41DF), -1f, &(Global_942[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_B74[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_942[iVar1 /*15*/].f_B)
				{
					if (iVar0 == Global_942[iVar1 /*15*/].f_4)
					{
						if (Global_B74[iVar0] == 0)
						{
							Global_B50[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_19B04.f_3720[iVar3 /*104*/].f_18 != 0)
									{
										if (Global_19B04.f_3720[iVar3 /*104*/].f_1C == 0)
										{
											if (Global_19B04.f_3720[iVar3 /*104*/].f_63[Global_389D] == 1)
											{
												Global_41E4++;
											}
										}
									}
									iVar3++;
								}
								func_661(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_942[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_41E4), -1f, &(Global_942[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_11542)
								{
									iVar4 = 0;
									iVar4 = Global_4118D8;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4118D9[iVar5 /*104*/].f_18 != 0)
										{
											if (Global_4118D9[iVar5 /*104*/].f_1C == 0)
											{
												if (Global_4118D9[iVar5 /*104*/].f_63[Global_389D] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_661(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_942[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_942[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_389D)
									{
										case 0:
											iVar6 = Global_90C6;
											break;
										
										case 1:
											iVar6 = Global_90C7;
											break;
										
										case 2:
											iVar6 = Global_90C8;
											break;
										
										default:
											break;
									}
									func_661(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_942[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_942[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_661(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_942[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_41DF), -1f, &(Global_942[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x29CD142125FE177B(Global_388A, "SET_DATA_SLOT");
								unk_0x1E1FB49121565EB6(1);
								unk_0x1E1FB49121565EB6(iVar0);
								unk_0x1E1FB49121565EB6(Global_942[iVar1 /*15*/].f_A);
								unk_0x1E1FB49121565EB6(0);
								func_439(&(Global_942[iVar1 /*15*/]));
								unk_0x1E1FB49121565EB6(Global_941);
								unk_0xF9FBC2F3F73D94C9();
							}
							else if (iVar1 == 2)
							{
								if (unk_0xFA30DFD0084E92FE(Global_93C, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0x29CD142125FE177B(Global_388A, "SET_DATA_SLOT");
								unk_0x1E1FB49121565EB6(1);
								unk_0x1E1FB49121565EB6(iVar0);
								unk_0x1E1FB49121565EB6(Global_942[iVar1 /*15*/].f_A);
								unk_0x1E1FB49121565EB6(0);
								func_439(&(Global_942[iVar1 /*15*/]));
								unk_0x1E1FB49121565EB6(iVar7);
								unk_0xF9FBC2F3F73D94C9();
							}
							else if (iVar1 == 3)
							{
								if (unk_0xFA30DFD0084E92FE(Global_93C, 3))
								{
									iVar8 = 42;
									Global_3947 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_3947 = 0;
								}
								unk_0x29CD142125FE177B(Global_388A, "SET_DATA_SLOT");
								unk_0x1E1FB49121565EB6(1);
								unk_0x1E1FB49121565EB6(iVar0);
								unk_0x1E1FB49121565EB6(Global_942[iVar1 /*15*/].f_A);
								unk_0x1E1FB49121565EB6(0);
								func_439(&(Global_942[iVar1 /*15*/]));
								unk_0x1E1FB49121565EB6(iVar8);
								unk_0xF9FBC2F3F73D94C9();
							}
							else if (iVar1 == 8)
							{
								unk_0x29CD142125FE177B(Global_388A, "SET_DATA_SLOT");
								unk_0x1E1FB49121565EB6(1);
								unk_0x1E1FB49121565EB6(iVar0);
								unk_0x1E1FB49121565EB6(Global_942[iVar1 /*15*/].f_A);
								unk_0x1E1FB49121565EB6(0);
								func_439(&(Global_942[iVar1 /*15*/]));
								unk_0x1E1FB49121565EB6(42);
								unk_0xF9FBC2F3F73D94C9();
							}
							else if ((iVar1 == 23 && unk_0x3362CDE8460ED38B(&(Global_942[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0xFA30DFD0084E92FE(Global_93C, 6))
							{
								unk_0x29CD142125FE177B(Global_388A, "SET_DATA_SLOT");
								unk_0x1E1FB49121565EB6(1);
								unk_0x1E1FB49121565EB6(iVar0);
								unk_0x1E1FB49121565EB6(Global_942[iVar1 /*15*/].f_A);
								unk_0x1E1FB49121565EB6(0);
								func_439(&(Global_942[iVar1 /*15*/]));
								unk_0x1E1FB49121565EB6(42);
								unk_0xF9FBC2F3F73D94C9();
							}
							else if (Global_942[iVar1 /*15*/].f_A == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_18C323.f_1;
								func_661(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_942[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_942[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_661(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_942[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(0), -1f, &(Global_942[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_B74[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_661(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x1E38E
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
		func_439(sParam7);
	}
	if (!unk_0xF1734B55490E9045(sParam8))
	{
		func_439(sParam8);
	}
	if (!unk_0xF1734B55490E9045(sParam9))
	{
		func_439(sParam9);
	}
	if (!unk_0xF1734B55490E9045(sParam10))
	{
		func_439(sParam10);
	}
	if (!unk_0xF1734B55490E9045(sParam11))
	{
		func_439(sParam11);
	}
	unk_0xF9FBC2F3F73D94C9();
}

bool func_662(int iParam0)//Position - 0x1E441
{
	return Global_8C41 == iParam0;
}

void func_663(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x1E44F
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

void func_664(int iParam0)//Position - 0x1E4B2
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_19B04.f_36C6[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_665(int iParam0)//Position - 0x1E4D1
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = unk_0xF40D00CD7B81C0A8();
	iVar1 = unk_0x7E09057438B9D216();
	iVar2 = unk_0x6E06C0DB9B43570D();
	iVar3 = unk_0xBE14F159908E4EE5();
	uVar4 = unk_0xDD6A91E47ED4D0CF() + 1;
	iVar5 = unk_0x4EEB3860BFC44B78();
	Global_19B04.f_3720[iParam0 /*104*/].f_12 = iVar0;
	Global_19B04.f_3720[iParam0 /*104*/].f_12.f_1 = iVar1;
	Global_19B04.f_3720[iParam0 /*104*/].f_12.f_2 = iVar2;
	Global_19B04.f_3720[iParam0 /*104*/].f_12.f_3 = iVar3;
	Global_19B04.f_3720[iParam0 /*104*/].f_12.f_4 = uVar4;
	Global_19B04.f_3720[iParam0 /*104*/].f_12.f_5 = iVar5;
}

void func_666()//Position - 0x1E563
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_11542)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_41E3 = 34;
	Global_19B04.f_3720[Global_41E3 /*104*/].f_12 = -1;
	Global_19B04.f_3720[Global_41E3 /*104*/].f_12.f_1 = 0;
	Global_19B04.f_3720[Global_41E3 /*104*/].f_12.f_2 = 0;
	Global_19B04.f_3720[Global_41E3 /*104*/].f_12.f_3 = 0;
	Global_19B04.f_3720[Global_41E3 /*104*/].f_12.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_667(Global_19B04.f_3720[iVar2 /*104*/].f_12, Global_19B04.f_3720[Global_41E3 /*104*/].f_12))
		{
			Global_41E3 = iVar2;
		}
		iVar2++;
	}
	Global_19B04.f_3720[Global_41E3 /*104*/].f_18 = 1;
}

int func_667(struct<6> Param0, struct<6> Param1)//Position - 0x1E62E
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

int func_668()//Position - 0x1E719
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_11542)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_19B04.f_3720[iVar2 /*104*/].f_18 == 0)
		{
			Global_41E3 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_41E3 = 34;
	Global_19B04.f_3720[Global_41E3 /*104*/].f_12 = -1;
	Global_19B04.f_3720[Global_41E3 /*104*/].f_12.f_1 = 0;
	Global_19B04.f_3720[Global_41E3 /*104*/].f_12.f_2 = 0;
	Global_19B04.f_3720[Global_41E3 /*104*/].f_12.f_3 = 0;
	Global_19B04.f_3720[Global_41E3 /*104*/].f_12.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_19B04.f_3720[iVar2 /*104*/].f_18 == 0 || Global_19B04.f_3720[iVar2 /*104*/].f_18 == 1)
		{
			if (!func_667(Global_19B04.f_3720[iVar2 /*104*/].f_12, Global_19B04.f_3720[Global_41E3 /*104*/].f_12))
			{
				Global_41E3 = iVar2;
			}
		}
		if (Global_19B04.f_3720[iVar2 /*104*/].f_18 == 2)
		{
		}
		iVar2++;
	}
	if (Global_41E3 == 34)
	{
		return 0;
	}
	Global_19B04.f_3720[Global_41E3 /*104*/].f_63[0] = 0;
	Global_19B04.f_3720[Global_41E3 /*104*/].f_63[1] = 0;
	Global_19B04.f_3720[Global_41E3 /*104*/].f_63[2] = 0;
	return 1;
}

void func_669()//Position - 0x1E881
{
	if (func_662(14))
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
		Global_389D = func_670();
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

var func_670()//Position - 0x1E923
{
	func_671();
	return Global_19B04.f_932.f_21B.f_10CD;
}

void func_671()//Position - 0x1E93C
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_674(Global_19B04.f_932.f_21B.f_10CD) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_673(unk_0xBC25C936A095B5BA());
			if (func_672(iVar0) && (!func_662(14) || Global_196EB))
			{
				if (Global_19B04.f_932.f_21B.f_10CD != iVar0 && func_672(Global_19B04.f_932.f_21B.f_10CD))
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

bool func_672(int iParam0)//Position - 0x1EA39
{
	return iParam0 < 3;
}

int func_673(int iParam0)//Position - 0x1EA45
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_674(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_674(int iParam0)//Position - 0x1EA82
{
	if (func_672(iParam0))
	{
		return Global_19B04.f_6D75[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_675()//Position - 0x1EAAC
{
	if (func_569())
	{
		if (func_695())
		{
			func_694();
		}
		return;
	}
	if (iLocal_105 != 3)
	{
		if (func_695())
		{
			func_694();
		}
		return;
	}
	switch (func_650(unk_0x6BAA0516CC970D99()))
	{
		case 0:
			break;
		
		case 1:
			if (func_646())
			{
				if (func_21(&(Local_132.f_10)))
				{
					if (!func_692("GB_HTB_OT4"))
					{
						func_691("GB_HTB_OT4", 0);
					}
				}
				else if (!func_692("GB_HTB_OT1"))
				{
					func_691("GB_HTB_OT1", 0);
				}
			}
			else if (func_637(unk_0xB5CEFD608600A09F(), func_16(), 0))
			{
				if (iLocal_105 == 3)
				{
					if (!func_692("GB_HTB_OT2"))
					{
						func_688("GB_HTB_OT2", "GB_BOSS_LC", iLocal_106, 0);
					}
				}
			}
			else if (func_602(unk_0x6BAA0516CC970D99()))
			{
				if (!func_692("GB_HTB_OT3"))
				{
					if (func_5(Local_132.f_5, 0, 1))
					{
						func_676("GB_HTB_OT3", Local_132.f_5, "GB_BOSS_LC", iLocal_106, 0);
					}
				}
			}
			break;
		
		case 2:
			if (func_695())
			{
				func_694();
			}
			break;
		
		case 3:
			if (func_695())
			{
				func_694();
			}
			break;
	}
}

void func_676(char* sParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)//Position - 0x1EBD1
{
	if (func_677(sParam0, unk_0xD885B2234FC72D62(iParam1), sParam2, bParam4, iParam3))
	{
		Global_140740 = 14;
		Global_140740.f_38 = iParam3;
		Global_140740.f_36 = iParam1;
	}
}

int func_677(char* sParam0, char* sParam1, char* sParam2, bool bParam3, var uParam4)//Position - 0x1EC04
{
	if (unk_0xF1734B55490E9045(sParam0))
	{
		return 0;
	}
	if (unk_0xF5429F058A48A07C(sParam0) > 23)
	{
		return 0;
	}
	if (unk_0xF1734B55490E9045(sParam1))
	{
		return 0;
	}
	if (unk_0xF5429F058A48A07C(sParam1) > 63)
	{
		return 0;
	}
	if (unk_0xF1734B55490E9045(sParam2))
	{
		return 0;
	}
	if (unk_0xF5429F058A48A07C(sParam2) > 63)
	{
		return 0;
	}
	if (func_687(sParam0, sParam1, sParam2) && Global_140740.f_38 == Global_140740.f_3A)
	{
		return 0;
	}
	func_681();
	Global_140740 = 10;
	StringCopy(&(Global_140740.f_1), unk_0x1377080E9B0BD993(), 32);
	Global_140740.f_9 = unk_0x56BEECB328B6D29D(&(Global_140740.f_1));
	StringCopy(&(Global_140740.f_C), sParam0, 16);
	StringCopy(&(Global_140740.f_10), sParam1, 64);
	StringCopy(&(Global_140740.f_20), sParam2, 64);
	Global_140740.f_3A = uParam4;
	Global_140740.f_38 = uParam4;
	func_680();
	func_679(bParam3);
	func_678();
	return 1;
}

void func_678()//Position - 0x1ECE6
{
	unk_0xF0059F27F7BB6680(&(Global_140740.f_3B), 1);
}

void func_679(bool bParam0)//Position - 0x1ECF9
{
	if (bParam0)
	{
		unk_0xF0059F27F7BB6680(&(Global_140740.f_3B), 0);
		return;
	}
	unk_0x7CB6FD92BE491AD9(&(Global_140740.f_3B), 0);
}

void func_680()//Position - 0x1ED1F
{
	Global_140740.f_A = unk_0x863D0D1A37055D36(unk_0xED678C85A82F0AB9(), 86400000);
	Global_140740.f_B = unk_0xED678C85A82F0AB9();
}

void func_681()//Position - 0x1ED44
{
	func_683();
	func_682(0);
}

void func_682(bool bParam0)//Position - 0x1ED55
{
	bool bVar0;
	
	bVar0 = unk_0x7AF0088ABFA713B6();
	Global_140740 = 20;
	StringCopy(&(Global_140740.f_1), "", 32);
	Global_140740.f_9 = 0;
	if (bVar0)
	{
		Global_140740.f_A = unk_0xED678C85A82F0AB9();
		Global_140740.f_B = unk_0xED678C85A82F0AB9();
	}
	StringCopy(&(Global_140740.f_C), "", 16);
	StringCopy(&(Global_140740.f_10), "", 64);
	StringCopy(&(Global_140740.f_20), "", 64);
	Global_140740.f_34 = 0;
	Global_140740.f_35 = 0;
	Global_140740.f_36 = 0;
	Global_140740.f_37 = -1;
	Global_140740.f_38 = 0;
	Global_140740.f_3B = 0;
	if (bParam0)
	{
		return;
	}
}

void func_683()//Position - 0x1EDEB
{
	if (!func_686())
	{
	}
	if (func_685())
	{
		unk_0x0C2CA00C24C64582(&(Global_140740.f_C));
		func_684();
		unk_0xF633952844D6CF3D();
	}
}

void func_684()//Position - 0x1EE14
{
	switch (Global_140740)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0xAA5C5BF0489E5553(Global_140740.f_34);
			return;
		
		case 2:
			unk_0xAA5C5BF0489E5553(Global_140740.f_34);
			unk_0xAA5C5BF0489E5553(Global_140740.f_35);
			return;
		
		case 3:
			unk_0xC9C304D0AABE1335(&(Global_140740.f_10));
			return;
		
		case 4:
			unk_0xC9C304D0AABE1335(&(Global_140740.f_10));
			unk_0xC9C304D0AABE1335(&(Global_140740.f_20));
			return;
		
		case 5:
			unk_0x607C19B90D297FE2(&(Global_140740.f_10));
			return;
		
		case 6:
			unk_0x449F0674640D94C0(Global_140740.f_38);
			unk_0x607C19B90D297FE2(&(Global_140740.f_10));
			return;
		
		case 7:
			unk_0xC9C304D0AABE1335(&(Global_140740.f_10));
			return;
		
		case 8:
			unk_0x449F0674640D94C0(Global_140740.f_38);
			unk_0xC9C304D0AABE1335(&(Global_140740.f_10));
			return;
		
		case 9:
			unk_0xA5CB8AC295293426(&(Global_140740.f_10));
			return;
		
		case 10:
			unk_0x607C19B90D297FE2(&(Global_140740.f_10));
			unk_0x607C19B90D297FE2(&(Global_140740.f_20));
			return;
		
		case 12:
			unk_0x607C19B90D297FE2(&(Global_140740.f_10));
			unk_0xC9C304D0AABE1335(&(Global_140740.f_20));
			return;
		
		case 13:
			unk_0x449F0674640D94C0(Global_140740.f_38);
			unk_0xC9C304D0AABE1335(&(Global_140740.f_10));
			unk_0x449F0674640D94C0(Global_140740.f_39);
			unk_0xC9C304D0AABE1335(&(Global_140740.f_20));
			return;
		
		case 11:
			unk_0xA5CB8AC295293426(&(Global_140740.f_10));
			return;
		
		case 14:
			unk_0x449F0674640D94C0(Global_140740.f_38);
			unk_0x607C19B90D297FE2(&(Global_140740.f_10));
			unk_0x449F0674640D94C0(Global_140740.f_38);
			unk_0xC9C304D0AABE1335(&(Global_140740.f_20));
			return;
		
		case 15:
			unk_0x449F0674640D94C0(Global_140740.f_38);
			unk_0x607C19B90D297FE2(&(Global_140740.f_10));
			unk_0x449F0674640D94C0(Global_140740.f_39);
			unk_0xC9C304D0AABE1335(&(Global_140740.f_20));
			return;
		
		case 17:
			unk_0x607C19B90D297FE2(&(Global_140740.f_10));
			unk_0x607C19B90D297FE2(&(Global_140740.f_20));
			unk_0x449F0674640D94C0(Global_140740.f_38);
			unk_0xC9C304D0AABE1335(&(Global_140740.f_30));
			return;
		
		case 16:
			unk_0x449F0674640D94C0(Global_140740.f_38);
			unk_0x607C19B90D297FE2(&(Global_140740.f_10));
			return;
		
		case 19:
			unk_0x449F0674640D94C0(Global_140740.f_38);
			unk_0xC9C304D0AABE1335(&(Global_140740.f_10));
			return;
		
		case 18:
			unk_0x607C19B90D297FE2(&(Global_140740.f_10));
			unk_0x449F0674640D94C0(Global_140740.f_38);
			unk_0xC9C304D0AABE1335(&(Global_140740.f_30));
			unk_0x607C19B90D297FE2(&(Global_140740.f_20));
			return;
		
		default:
	}
}

int func_685()//Position - 0x1F086
{
	if (Global_140740 == 20)
	{
		return 0;
	}
	return 1;
}

int func_686()//Position - 0x1F09C
{
	if (!func_685())
	{
		return 0;
	}
	unk_0xE2CFC41F8121CE68(&(Global_140740.f_C));
	func_684();
	return unk_0x121EFFA2D57472F2();
}

bool func_687(char* sParam0, char* sParam1, char* sParam2)//Position - 0x1F0C2
{
	if (!func_685())
	{
		return 0;
	}
	if (unk_0xF1734B55490E9045(sParam0))
	{
		return 0;
	}
	if (unk_0xF1734B55490E9045(sParam1))
	{
		return 0;
	}
	if (unk_0xF1734B55490E9045(sParam2))
	{
		return 0;
	}
	if (!unk_0x56BEECB328B6D29D(sParam0) == unk_0x56BEECB328B6D29D(&(Global_140740.f_C)))
	{
		return 0;
	}
	if (!unk_0x56BEECB328B6D29D(sParam1) == unk_0x56BEECB328B6D29D(&(Global_140740.f_10)))
	{
		return 0;
	}
	return unk_0x56BEECB328B6D29D(sParam2) == unk_0x56BEECB328B6D29D(&(Global_140740.f_20));
}

void func_688(char* sParam0, char* sParam1, int iParam2, bool bParam3)//Position - 0x1F140
{
	if (func_689(sParam0, sParam1, bParam3, iParam2))
	{
		Global_140740 = 19;
		Global_140740.f_38 = iParam2;
	}
}

int func_689(char* sParam0, char* sParam1, bool bParam2, var uParam3)//Position - 0x1F165
{
	if (unk_0xF1734B55490E9045(sParam0))
	{
		return 0;
	}
	if (unk_0xF5429F058A48A07C(sParam0) > 23)
	{
		return 0;
	}
	if (unk_0xF1734B55490E9045(sParam1))
	{
		return 0;
	}
	if (func_690(sParam0, sParam1) && Global_140740.f_38 == Global_140740.f_3A)
	{
		return 0;
	}
	func_681();
	Global_140740 = 3;
	StringCopy(&(Global_140740.f_1), unk_0x1377080E9B0BD993(), 32);
	Global_140740.f_9 = unk_0x56BEECB328B6D29D(&(Global_140740.f_1));
	StringCopy(&(Global_140740.f_C), sParam0, 16);
	StringCopy(&(Global_140740.f_10), sParam1, 64);
	Global_140740.f_3A = uParam3;
	Global_140740.f_38 = uParam3;
	func_680();
	func_679(bParam2);
	func_678();
	return 1;
}

bool func_690(char* sParam0, char* sParam1)//Position - 0x1F20F
{
	if (!func_685())
	{
		return 0;
	}
	if (unk_0xF1734B55490E9045(sParam0))
	{
		return 0;
	}
	if (unk_0xF1734B55490E9045(sParam1))
	{
		return 0;
	}
	if (!unk_0x56BEECB328B6D29D(sParam0) == unk_0x56BEECB328B6D29D(&(Global_140740.f_C)))
	{
		return 0;
	}
	return unk_0x56BEECB328B6D29D(sParam1) == unk_0x56BEECB328B6D29D(&(Global_140740.f_10));
}

void func_691(char* sParam0, bool bParam1)//Position - 0x1F267
{
	if (unk_0xF1734B55490E9045(sParam0))
	{
		return;
	}
	if (unk_0xF5429F058A48A07C(sParam0) > 23)
	{
		return;
	}
	if (func_692(sParam0))
	{
		return;
	}
	func_681();
	Global_140740 = 0;
	StringCopy(&(Global_140740.f_1), unk_0x1377080E9B0BD993(), 32);
	Global_140740.f_9 = unk_0x56BEECB328B6D29D(&(Global_140740.f_1));
	StringCopy(&(Global_140740.f_C), sParam0, 16);
	func_680();
	func_679(bParam1);
	func_678();
}

bool func_692(char* sParam0)//Position - 0x1F2D2
{
	if (!func_685())
	{
		return 0;
	}
	if (Global_140740 == 11)
	{
		return func_693(sParam0);
	}
	if (unk_0xF1734B55490E9045(sParam0))
	{
		return 0;
	}
	return unk_0x56BEECB328B6D29D(sParam0) == unk_0x56BEECB328B6D29D(&(Global_140740.f_C));
}

bool func_693(char* sParam0)//Position - 0x1F316
{
	if (!func_685())
	{
		return 0;
	}
	if (unk_0xF1734B55490E9045(sParam0))
	{
		return 0;
	}
	return unk_0x56BEECB328B6D29D(sParam0) == unk_0x56BEECB328B6D29D(&(Global_140740.f_10));
}

void func_694()//Position - 0x1F348
{
	if (!func_685())
	{
		return;
	}
	if (!unk_0x56BEECB328B6D29D(unk_0x1377080E9B0BD993()) == Global_140740.f_9)
	{
		return;
	}
	func_681();
}

int func_695()//Position - 0x1F375
{
	if (!func_685())
	{
		return 0;
	}
	if (!unk_0x56BEECB328B6D29D(unk_0x1377080E9B0BD993()) == Global_140740.f_9)
	{
		return 0;
	}
	return 1;
}

void func_696()//Position - 0x1F3A1
{
	int iVar0;
	
	if (func_569())
	{
		return;
	}
	if (iLocal_105 != 3)
	{
		return;
	}
	switch (func_650(unk_0x6BAA0516CC970D99()))
	{
		case 0:
			break;
		
		case 1:
			if (func_646())
			{
				if (func_21(&(Local_132.f_10)))
				{
					iVar0 = (20000 - func_700(&(Local_132.f_10), 0, 0));
					if (iVar0 > 0)
					{
						func_697(iVar0, "GB_HTB_TM2", 0, 0, 20000, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						func_697(0, "GB_HTB_TM2", 0, 0, 0, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					return;
				}
			}
			if (func_21(&(Local_132.f_C)))
			{
				iVar0 = (Global_40001.f_2E67 - func_700(&(Local_132.f_C), 0, 0));
				if (iVar0 > 0)
				{
					func_697(iVar0, "GB_WORK_END", 0, 0, 0, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
				}
				else
				{
					func_697(0, "GB_WORK_END", 0, 0, 0, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
				}
			}
			break;
		
		case 2:
			if (iLocal_105 == 2 || iLocal_105 == 3)
			{
				if (func_21(&(Local_132.f_E)))
				{
					func_697(0, "GB_WORK_END", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
				}
			}
			break;
	}
}

void func_697(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)//Position - 0x1F4D2
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_699(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_14D262.f_1 = 1;
		func_698(7, iVar0);
		Global_14D262.f_1124[iVar0] = iParam0;
		StringCopy(&(Global_14D262.f_1124.f_B[iVar0 /*16*/]), sParam1, 64);
		Global_14D262.f_1124.f_AC[iVar0] = iParam2;
		Global_14D262.f_1124.f_D8[iVar0] = iParam3;
		Global_14D262.f_1124.f_B7[iVar0] = iParam4;
		Global_14D262.f_1124.f_C2[iVar0] = iParam5;
		Global_14D262.f_1124.f_F9[iVar0] = iParam6;
		Global_14D262.f_1124.f_104[iVar0] = iParam7;
		Global_14D262.f_1124.f_CD[iVar0] = iParam8;
		Global_14D262.f_1124.f_13A[iVar0] = iParam9;
		Global_14D262.f_1124.f_145[iVar0] = iParam10;
		Global_14D262.f_1124.f_165[iVar0] = iParam11;
		Global_14D262.f_1124.f_EE[iVar0] = iParam12;
		Global_14D262.f_1124.f_10F[iVar0] = iParam13;
		Global_14D262.f_1124.f_170[iVar0] = iParam14;
		Global_14D262.f_1124.f_17B[iVar0] = iParam15;
		Global_14D262.f_1124.f_186[iVar0] = iParam16;
	}
}

void func_698(int iParam0, int iParam1)//Position - 0x1F620
{
	unk_0xF0059F27F7BB6680(&(Global_14D262.f_17E7[iParam0]), iParam1);
}

bool func_699(int iParam0, int iParam1)//Position - 0x1F639
{
	return unk_0xFA30DFD0084E92FE(Global_14D262.f_17E7[iParam0], iParam1);
}

int func_700(var uParam0, bool bParam1, bool bParam2)//Position - 0x1F652
{
	if (unk_0x7AF0088ABFA713B6() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0xCCA9497DA4595710(unk_0xED678C85A82F0AB9(), *uParam0);
		}
		else
		{
			return unk_0xCCA9497DA4595710(unk_0x1C44CABA911F93F7(), *uParam0);
		}
	}
	return unk_0xCCA9497DA4595710(unk_0x105601648511CC64(), *uParam0);
}

void func_701()//Position - 0x1F699
{
	var uVar0;
	int iVar1;
	
	if (func_569())
	{
		func_719();
		return;
	}
	switch (vLocal_133[unk_0x6BAA0516CC970D99() /*3*/].f_1)
	{
		case 0:
			if (!func_17(Local_132.f_7))
			{
				if (func_637(unk_0xB5CEFD608600A09F(), func_16(), 1))
				{
					if (func_718(unk_0xB5CEFD608600A09F(), Global_40001.f_2E6B, &uVar0, 1123024896, 0))
					{
						if (unk_0x2DA8CA50A72528FB(iLocal_115))
						{
							unk_0x07B8ECB35A4ED3AC(&iLocal_115);
						}
					}
					else if (!unk_0x2DA8CA50A72528FB(iLocal_115))
					{
						iLocal_115 = unk_0x390CF6C8AD6903B7(Local_132.f_7);
						unk_0x222805B89367761E(iLocal_115, true);
						unk_0x436D0272182E484D(iLocal_115, "GB_HTB_BLIP1");
						unk_0x7A6BBF86FCBBCF7E(iLocal_115, 1);
						unk_0x6F02E6814C1AD504(iLocal_115, 7000);
						unk_0xBF0E22F3E083C33D(iLocal_115, 458);
						unk_0x12DB69036F6569F7(iLocal_115, 12);
						unk_0x3F5F1772D71D5EC4(iLocal_115, Global_40001.f_2DE0);
						func_717(&iLocal_115, iLocal_106);
					}
					if (!unk_0x2DA8CA50A72528FB(iLocal_114))
					{
						iLocal_114 = unk_0x489E7A92D55C10F8(Local_132.f_7, SYSTEM::TO_FLOAT((Global_40001.f_2E6B - 1)));
						func_717(&iLocal_114, iLocal_106);
						unk_0x222805B89367761E(iLocal_114, true);
						unk_0x19CA0A1B612C31E5(iLocal_114, 1);
						unk_0x436D0272182E484D(iLocal_114, "GB_HTB_BLIP0");
					}
					if (func_716(Local_132.f_5) != iLocal_118)
					{
						iLocal_118 = func_716(Local_132.f_5);
						unk_0x7781946F1FC054FA(iLocal_114, iLocal_118);
					}
				}
			}
			break;
		
		case 1:
			if (func_646())
			{
				func_714();
				if (!unk_0xFA30DFD0084E92FE(vLocal_133[unk_0x6BAA0516CC970D99() /*3*/].f_2, 4))
				{
					if (!func_21(&(Local_132.f_10)) && !func_21(&(Local_132.f_12)))
					{
						if (!unk_0xFA30DFD0084E92FE(vLocal_133[unk_0x6BAA0516CC970D99() /*3*/].f_2, 2))
						{
							func_713(1, 0);
							unk_0xF0059F27F7BB6680(&(vLocal_133[unk_0x6BAA0516CC970D99() /*3*/].f_2), 2);
						}
					}
					else if (unk_0xFA30DFD0084E92FE(vLocal_133[unk_0x6BAA0516CC970D99() /*3*/].f_2, 2))
					{
						func_713(0, 0);
						unk_0x7CB6FD92BE491AD9(&(vLocal_133[unk_0x6BAA0516CC970D99() /*3*/].f_2), 2);
					}
				}
			}
			else
			{
				func_712();
				if (!func_637(unk_0xB5CEFD608600A09F(), func_16(), 0))
				{
					if (bLocal_121)
					{
						if (vLocal_133[unk_0xDE780EBA36114734(Local_132.f_5) /*3*/].f_1 == 1 && !unk_0xFA30DFD0084E92FE(vLocal_133[unk_0xDE780EBA36114734(Local_132.f_5) /*3*/].f_2, 2))
						{
							if (!unk_0xFA30DFD0084E92FE(vLocal_133[unk_0x6BAA0516CC970D99() /*3*/].f_2, 10))
							{
								func_710(Local_132.f_5, 432, 1, 0);
								func_708(Local_132.f_5, func_709(iLocal_106), 1, 0);
								if (func_5(func_16(), 1, 1))
								{
									func_702(Local_132.f_5, 1, 0, 0);
								}
								unk_0xF0059F27F7BB6680(&(vLocal_133[unk_0x6BAA0516CC970D99() /*3*/].f_2), 10);
							}
						}
						else if (unk_0xFA30DFD0084E92FE(vLocal_133[unk_0x6BAA0516CC970D99() /*3*/].f_2, 10))
						{
							func_710(Local_132.f_5, 432, 0, 0);
							func_708(Local_132.f_5, func_709(iLocal_106), 0, 0);
							if (func_5(func_16(), 1, 1))
							{
								func_702(Local_132.f_5, 0, 0, 0);
							}
							unk_0x7CB6FD92BE491AD9(&(vLocal_133[unk_0x6BAA0516CC970D99() /*3*/].f_2), 10);
						}
					}
				}
			}
			if (!func_17(Local_132.f_7))
			{
				if (func_718(unk_0xB5CEFD608600A09F(), Global_40001.f_2E6B, &uVar0, 1123024896, 0))
				{
					if (unk_0x2DA8CA50A72528FB(iLocal_115))
					{
						unk_0x07B8ECB35A4ED3AC(&iLocal_115);
					}
				}
				else if (!unk_0x2DA8CA50A72528FB(iLocal_115))
				{
					iLocal_115 = unk_0x390CF6C8AD6903B7(Local_132.f_7);
					unk_0x222805B89367761E(iLocal_115, true);
					unk_0x436D0272182E484D(iLocal_115, "GB_HTB_BLIP1");
					unk_0x7A6BBF86FCBBCF7E(iLocal_115, 1);
					unk_0x6F02E6814C1AD504(iLocal_115, 7000);
					unk_0xBF0E22F3E083C33D(iLocal_115, 458);
					unk_0x12DB69036F6569F7(iLocal_115, 12);
					unk_0x3F5F1772D71D5EC4(iLocal_115, Global_40001.f_2DE0);
					func_717(&iLocal_115, iLocal_106);
				}
				if (!unk_0x2DA8CA50A72528FB(iLocal_114))
				{
					iLocal_114 = unk_0x489E7A92D55C10F8(Local_132.f_7, SYSTEM::TO_FLOAT((Global_40001.f_2E6B - 1)));
					func_717(&iLocal_114, iLocal_106);
					unk_0x222805B89367761E(iLocal_114, true);
					unk_0x19CA0A1B612C31E5(iLocal_114, 1);
					unk_0x436D0272182E484D(iLocal_114, "GB_HTB_BLIP0");
					unk_0x7781946F1FC054FA(iLocal_114, Global_40001.f_2D6C);
				}
				if (func_637(unk_0xB5CEFD608600A09F(), func_16(), 1) || func_229(unk_0xB5CEFD608600A09F(), 1))
				{
					if (func_229(unk_0xB5CEFD608600A09F(), 1))
					{
						iVar1 = func_85(unk_0xB5CEFD608600A09F());
					}
					else
					{
						iVar1 = Local_132.f_5;
					}
					if (func_716(iVar1) != iLocal_118)
					{
						iLocal_118 = func_716(iVar1);
						unk_0x7781946F1FC054FA(iLocal_114, iLocal_118);
					}
				}
			}
			break;
		
		case 2:
		case 3:
			func_719();
			break;
	}
}

void func_702(int iParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x1FAB3
{
	var uVar0;
	
	if (func_705(iParam0))
	{
		return;
	}
	if (func_704(&(Global_24DCC0.f_32C[iParam0]), &(Global_24DCC0.f_497[iParam0]), &(Global_24DCC0.f_16C), bParam1, iParam0, bParam3, &uVar0))
	{
		func_703(iParam0, bParam2);
	}
}

void func_703(int iParam0, bool bParam1)//Position - 0x1FAFB
{
	if (bParam1)
	{
		unk_0xF0059F27F7BB6680(&(Global_24DCC0.f_16D), iParam0);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&(Global_24DCC0.f_16D), iParam0);
	}
	if (unk_0x2DA8CA50A72528FB(Global_24DCC0[iParam0]))
	{
		if (bParam1)
		{
			unk_0x4909873A6873A6C3(Global_24DCC0[iParam0], false);
		}
		else
		{
			unk_0x4909873A6873A6C3(Global_24DCC0[iParam0], true);
		}
	}
}

int func_704(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, var uParam6)//Position - 0x1FB56
{
	if (bParam5)
	{
		if (!unk_0x3C406FC829C1E14A(*uParam1) || *uParam1 == unk_0x8A55B15F4133C912())
		{
			*uParam1 = unk_0x8A55B15F4133C912();
			*uParam0 = unk_0x8A55B15F4133C912();
		}
	}
	if (!unk_0x3C406FC829C1E14A(*uParam0) || *uParam0 == unk_0x8A55B15F4133C912())
	{
		if (bParam3)
		{
			if (!unk_0xFA30DFD0084E92FE(*iParam2, iParam4))
			{
				*uParam6 = 1;
				unk_0xF0059F27F7BB6680(iParam2, iParam4);
			}
			*uParam0 = unk_0x8A55B15F4133C912();
		}
		else
		{
			if (unk_0xFA30DFD0084E92FE(*iParam2, iParam4))
			{
				*uParam6 = 1;
				unk_0x7CB6FD92BE491AD9(iParam2, iParam4);
			}
			if (*uParam1 == unk_0x8A55B15F4133C912())
			{
				*uParam1 = -1;
			}
			*uParam0 = -1;
		}
		return 1;
	}
	else if (unk_0x3C406FC829C1E14A(*uParam1) && !*uParam1 == unk_0x8A55B15F4133C912())
	{
	}
	return 0;
}

int func_705(int iParam0)//Position - 0x1FC1B
{
	if (iParam0 == func_11())
	{
		return 1;
	}
	if (unk_0x56BEECB328B6D29D(unk_0x1377080E9B0BD993()) == func_706())
	{
		return 1;
	}
	return 0;
}

int func_706()//Position - 0x1FC44
{
	switch (func_707())
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

int func_707()//Position - 0x1FC78
{
	return Global_62BD;
}

void func_708(int iParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0x1FC83
{
	var uVar0;
	
	if (func_705(iParam0))
	{
		return;
	}
	if (func_704(&(Global_24DCC0.f_266[iParam0]), &(Global_24DCC0.f_3D1[iParam0]), &(Global_24DCC0.f_182), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_24DCC0.f_1C1[iParam0] = uParam1;
		}
	}
}

int func_709(int iParam0)//Position - 0x1FCD5
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	unk_0xE45648BDBF3441F5(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_710(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x1FF3D
{
	bool bVar0;
	
	if (func_705(iParam0))
	{
		return;
	}
	if (func_704(&(Global_24DCC0.f_245[iParam0]), &(Global_24DCC0.f_3B0[iParam0]), &(Global_24DCC0.f_181), bParam2, iParam0, bParam3, &bVar0))
	{
		if (bParam2)
		{
			Global_24DCC0.f_1A0[iParam0] = iParam1;
		}
		if (bVar0)
		{
			func_711();
		}
	}
}

void func_711()//Position - 0x1FF98
{
	Global_24DCC0.f_5E4 = 1;
}

void func_712()//Position - 0x1FFA8
{
	if (unk_0xFA30DFD0084E92FE(vLocal_133[func_16() /*3*/].f_2, 4))
	{
		if (!unk_0xFA30DFD0084E92FE(vLocal_133[unk_0x6BAA0516CC970D99() /*3*/].f_2, 9))
		{
			if (func_16() != func_131())
			{
				unk_0xC4BA30B532FE260F(-1, "Boss_Blipped", "GTAO_Magnate_Hunt_Boss_SoundSet", false);
				unk_0xF0059F27F7BB6680(&(vLocal_133[unk_0x6BAA0516CC970D99() /*3*/].f_2), 9);
			}
		}
	}
	else if (unk_0xFA30DFD0084E92FE(vLocal_133[unk_0x6BAA0516CC970D99() /*3*/].f_2, 9))
	{
		unk_0x7CB6FD92BE491AD9(&(vLocal_133[unk_0x6BAA0516CC970D99() /*3*/].f_2), 9);
	}
}

void func_713(bool bParam0, bool bParam1)//Position - 0x20026
{
	if ((!unk_0x3C406FC829C1E14A(Global_24DCC0.f_5D2) || Global_24DCC0.f_5D2 == unk_0x8A55B15F4133C912()) || bParam1)
	{
		if (bParam0)
		{
			Global_24DCC0.f_5D2 = unk_0x8A55B15F4133C912();
			unk_0xF0059F27F7BB6680(&(Global_24FB5C[unk_0xB5CEFD608600A09F() /*406*/].f_44.f_2), 23);
		}
		else
		{
			Global_24DCC0.f_5D2 = -1;
			unk_0x7CB6FD92BE491AD9(&(Global_24FB5C[unk_0xB5CEFD608600A09F() /*406*/].f_44.f_2), 23);
		}
	}
	else if (!bParam1)
	{
	}
}

void func_714()//Position - 0x200A5
{
	if (!func_646())
	{
		return;
	}
	if (func_21(&(Local_132.f_10)) && func_21(&(Local_132.f_12)))
	{
		if (func_21(&uLocal_127))
		{
			func_8(&uLocal_127);
		}
		return;
	}
	if (!func_21(&uLocal_125) && !func_21(&uLocal_127))
	{
		vLocal_123 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true) };
		func_20(&uLocal_125, 0, 0);
		iLocal_124 = 0;
	}
	else if (func_21(&uLocal_127))
	{
		if (unk_0xFA30DFD0084E92FE(vLocal_133[unk_0x6BAA0516CC970D99() /*3*/].f_2, 2))
		{
			func_713(0, 0);
			unk_0x7CB6FD92BE491AD9(&(vLocal_133[unk_0x6BAA0516CC970D99() /*3*/].f_2), 2);
		}
		if (func_19(&uLocal_127, SYSTEM::ROUND(Global_40001.f_2E6A), 0))
		{
			func_8(&uLocal_127);
			unk_0x7CB6FD92BE491AD9(&(vLocal_133[unk_0x6BAA0516CC970D99() /*3*/].f_2), 4);
			func_715(0, -1, 500, 500, 0);
			if (!unk_0xFA30DFD0084E92FE(vLocal_133[unk_0x6BAA0516CC970D99() /*3*/].f_2, 2))
			{
				func_713(1, 0);
				unk_0xF0059F27F7BB6680(&(vLocal_133[unk_0x6BAA0516CC970D99() /*3*/].f_2), 2);
			}
		}
	}
	else if (func_700(&uLocal_125, 0, 0) > (500 * iLocal_124))
	{
		if (SYSTEM::VDIST(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), vLocal_123) > IntToFloat(Global_40001.f_2E68))
		{
			func_8(&uLocal_125);
			if (unk_0xFA30DFD0084E92FE(vLocal_133[unk_0x6BAA0516CC970D99() /*3*/].f_2, 4))
			{
				func_20(&uLocal_127, 0, 0);
			}
		}
		else if (IntToFloat(func_700(&uLocal_125, 0, 0)) > Global_40001.f_2E69)
		{
			if (unk_0xFA30DFD0084E92FE(vLocal_133[unk_0x6BAA0516CC970D99() /*3*/].f_2, 2))
			{
				func_713(0, 0);
				unk_0x7CB6FD92BE491AD9(&(vLocal_133[unk_0x6BAA0516CC970D99() /*3*/].f_2), 2);
				func_639(7);
				func_715(1, -1, 2147483647, 0, 0);
			}
			if (!unk_0xFA30DFD0084E92FE(vLocal_133[unk_0x6BAA0516CC970D99() /*3*/].f_2, 4))
			{
				unk_0xF0059F27F7BB6680(&(vLocal_133[unk_0x6BAA0516CC970D99() /*3*/].f_2), 4);
			}
		}
		iLocal_124++;
	}
}

void func_715(bool bParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x2026B
{
	if ((!unk_0x3C406FC829C1E14A(Global_24DCC0.f_5BC) || Global_24DCC0.f_5BC == unk_0x8A55B15F4133C912()) || bParam4)
	{
		if (bParam0)
		{
			Global_24DCC0.f_5BC = unk_0x8A55B15F4133C912();
			unk_0xF0059F27F7BB6680(&(Global_24FB5C[unk_0xB5CEFD608600A09F() /*406*/].f_44.f_2), 19);
			Global_24DCC0.f_5BD = unk_0xED678C85A82F0AB9();
		}
		else
		{
			Global_24DCC0.f_5BC = -1;
			unk_0x7CB6FD92BE491AD9(&(Global_24FB5C[unk_0xB5CEFD608600A09F() /*406*/].f_44.f_2), 19);
		}
		Global_24FB5C[unk_0xB5CEFD608600A09F() /*406*/].f_44.f_4 = iParam2;
		Global_24FB5C[unk_0xB5CEFD608600A09F() /*406*/].f_44.f_5 = iParam3;
		Global_24DCC0.f_5BF = iParam1;
	}
	else if (!bParam4)
	{
	}
}

int func_716(int iParam0)//Position - 0x20320
{
	var uVar0;
	
	if (iParam0 != func_11())
	{
		if (!func_17(Local_132.f_7))
		{
			if (func_718(iParam0, Global_40001.f_2E6B, &uVar0, 1123024896, 0))
			{
				return 70;
			}
		}
	}
	return Global_40001.f_2D6C;
}

void func_717(int iParam0, int iParam1)//Position - 0x20363
{
	int iVar0;
	
	if (unk_0x2DA8CA50A72528FB(*iParam0))
	{
		iVar0 = func_709(iParam1);
		unk_0x0D5352939CC40C16(*iParam0, iVar0);
	}
}

int func_718(int iParam0, int iParam1, var uParam2, float fParam3, bool bParam4)//Position - 0x20389
{
	int iVar0;
	float fVar1;
	
	iVar0 = unk_0xA95CF30C72EB526E(iParam0);
	if (!unk_0x724D816EA203A79E(iVar0))
	{
		return 0;
	}
	*uParam2 = func_15(iVar0, Local_132.f_7, 0);
	if (*uParam2 > IntToFloat(iParam1))
	{
		return 0;
	}
	fVar1 = unk_0xDB5C848CD9F1133E(iVar0);
	*uParam2 = func_14(*uParam2, fVar1);
	if (fVar1 > fParam3 && !bParam4)
	{
		return 0;
	}
	return 1;
}

void func_719()//Position - 0x203EE
{
	if (unk_0x2DA8CA50A72528FB(iLocal_114))
	{
		unk_0x07B8ECB35A4ED3AC(&iLocal_114);
	}
	if (unk_0x2DA8CA50A72528FB(iLocal_115))
	{
		unk_0x07B8ECB35A4ED3AC(&iLocal_115);
	}
	if (unk_0xFA30DFD0084E92FE(vLocal_133[unk_0x6BAA0516CC970D99() /*3*/].f_2, 10))
	{
		func_710(Local_132.f_5, 432, 0, 0);
		func_708(Local_132.f_5, func_709(iLocal_106), 0, 0);
		func_702(Local_132.f_5, 0, 0, 0);
		unk_0x7CB6FD92BE491AD9(&(vLocal_133[unk_0x6BAA0516CC970D99() /*3*/].f_2), 10);
	}
}

void func_720()//Position - 0x2045F
{
	int iVar0;
	int iVar1;
	
	switch (func_650(unk_0x6BAA0516CC970D99()))
	{
		case 1:
			iVar0 = 0;
			while (iVar0 < unk_0x432AA9CCB3EE0174(1))
			{
				iVar1 = unk_0x2BFAC254CC069912(1, iVar0);
				if (iVar1 == 182)
				{
					func_721(iVar0);
				}
				iVar0++;
			}
			break;
	}
}

void func_721(int iParam0)//Position - 0x204A9
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<4> Var4;
	int iVar5;
	
	iVar2 = func_11();
	iVar3 = func_11();
	unk_0x414AA1932D1C88E2(1, iParam0, &Var4, 11);
	if (unk_0x724D816EA203A79E(Var4))
	{
		if (unk_0x386592AF38881675(Var4))
		{
			iVar0 = unk_0x399F7937FFE4DEBF(Var4);
			if (unk_0x15DBD981998D4FE1(iVar0))
			{
				iVar2 = unk_0x5363B43856FA7779(iVar0);
				if (unk_0xF6391659C669C3B1(iVar2))
				{
					if (iVar2 != func_11())
					{
						if (func_5(iVar2, 0, 0))
						{
						}
					}
				}
			}
		}
	}
	if (iVar2 == func_16())
	{
		if (unk_0x724D816EA203A79E(Var4.f_1))
		{
			if (unk_0x386592AF38881675(Var4.f_1))
			{
				iVar1 = unk_0x399F7937FFE4DEBF(Var4.f_1);
				if (unk_0x15DBD981998D4FE1(iVar1))
				{
					iVar3 = unk_0x5363B43856FA7779(iVar1);
					if (unk_0xF6391659C669C3B1(iVar3))
					{
						if (unk_0xFA30DFD0084E92FE(vLocal_133[unk_0xDE780EBA36114734(iVar3) /*3*/].f_2, 0))
						{
							if (iVar3 != func_11())
							{
								if (func_5(iVar3, 0, 0))
								{
								}
							}
						}
						else
						{
							return;
						}
					}
					else
					{
						return;
					}
				}
			}
		}
		if (iVar3 == unk_0xB5CEFD608600A09F())
		{
			if (!func_637(unk_0xB5CEFD608600A09F(), func_16(), 1))
			{
				if (!unk_0xFA30DFD0084E92FE(vLocal_133[unk_0x6BAA0516CC970D99() /*3*/].f_2, 8))
				{
					func_605();
					unk_0xF0059F27F7BB6680(&(vLocal_133[unk_0x6BAA0516CC970D99() /*3*/].f_2), 8);
				}
			}
		}
		if (!Var4.f_3)
		{
			if (unk_0xB5CEFD608600A09F() == iVar3)
			{
				if (!func_422(unk_0xB5CEFD608600A09F(), 20))
				{
					func_722(0);
				}
			}
		}
		else
		{
			if (!unk_0x0DE6397A2CB3EF75())
			{
				return;
			}
			if (iVar3 == iVar2)
			{
				return;
			}
			if (iVar3 != func_11())
			{
				Local_132.f_6 = iVar3;
				unk_0xF0059F27F7BB6680(&(Local_132.f_2), 3);
				func_18(2);
			}
		}
	}
	else if (iVar2 != func_11() && func_229(iVar2, 0))
	{
		iVar5 = func_85(iVar2);
		if (iVar5 == Local_132.f_5)
		{
			if (unk_0x724D816EA203A79E(Var4.f_1))
			{
				if (unk_0x386592AF38881675(Var4.f_1))
				{
					iVar1 = unk_0x399F7937FFE4DEBF(Var4.f_1);
					if (unk_0x15DBD981998D4FE1(iVar1))
					{
						iVar3 = unk_0x5363B43856FA7779(iVar1);
						if (unk_0xF6391659C669C3B1(iVar3))
						{
							if (iVar3 != func_11())
							{
								if (func_5(iVar3, 0, 0))
								{
								}
							}
						}
					}
				}
			}
			if (iVar3 == unk_0xB5CEFD608600A09F())
			{
				if (!func_637(unk_0xB5CEFD608600A09F(), func_16(), 1))
				{
					if (!unk_0xFA30DFD0084E92FE(vLocal_133[unk_0x6BAA0516CC970D99() /*3*/].f_2, 8))
					{
						func_605();
						unk_0xF0059F27F7BB6680(&(vLocal_133[unk_0x6BAA0516CC970D99() /*3*/].f_2), 8);
					}
				}
			}
		}
	}
}

void func_722(int iParam0)//Position - 0x206DD
{
	if (!func_76(unk_0xB5CEFD608600A09F()))
	{
		if (iParam0 || func_63(unk_0xB5CEFD608600A09F()) != 0)
		{
			func_80(20);
			if (func_78(unk_0xB5CEFD608600A09F()))
			{
				if (!unk_0xFA30DFD0084E92FE(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_1, 8))
				{
					unk_0xF0059F27F7BB6680(&(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_1), 8);
				}
			}
		}
	}
}

void func_723()//Position - 0x20744
{
	var uVar0;
	
	switch (vLocal_133[unk_0x6BAA0516CC970D99() /*3*/].f_1)
	{
		case 1:
			if (func_718(unk_0xB5CEFD608600A09F(), (Global_40001.f_2E6B - 1), &uVar0, 1123024896, 0))
			{
				if (!unk_0xFA30DFD0084E92FE(vLocal_133[unk_0x6BAA0516CC970D99() /*3*/].f_2, 8))
				{
					func_605();
					unk_0xF0059F27F7BB6680(&(vLocal_133[unk_0x6BAA0516CC970D99() /*3*/].f_2), 8);
				}
			}
			break;
	}
}

void func_724()//Position - 0x207A8
{
	var uVar0;
	
	if (!func_17(Local_132.f_7))
	{
		if (Local_132.f_1 >= 1 || func_131() == Local_132.f_5)
		{
			func_749(164, Local_132.f_7, &uLocal_120, 1140457472, 1144750080, 0);
		}
		if (iLocal_105 != func_63(unk_0xB5CEFD608600A09F()))
		{
			iLocal_105 = func_63(unk_0xB5CEFD608600A09F());
		}
	}
	if (func_646())
	{
		if (func_739())
		{
			if (!unk_0xFA30DFD0084E92FE(vLocal_133[unk_0x6BAA0516CC970D99() /*3*/].f_2, 11))
			{
				unk_0xF0059F27F7BB6680(&(vLocal_133[unk_0x6BAA0516CC970D99() /*3*/].f_2), 11);
			}
		}
	}
	switch (func_650(unk_0x6BAA0516CC970D99()))
	{
		case 1:
			bLocal_122 = (func_68() || func_734(func_646()));
			if (bLocal_122)
			{
				if (unk_0xFA30DFD0084E92FE(vLocal_133[unk_0x6BAA0516CC970D99() /*3*/].f_2, 0))
				{
					unk_0x7CB6FD92BE491AD9(&(vLocal_133[unk_0x6BAA0516CC970D99() /*3*/].f_2), 0);
					if (func_646())
					{
						func_728(0, 0);
						func_727(2);
					}
				}
			}
			else if (func_718(unk_0xB5CEFD608600A09F(), 500, &uVar0, 1123024896, 0))
			{
				if (!unk_0xFA30DFD0084E92FE(vLocal_133[unk_0x6BAA0516CC970D99() /*3*/].f_2, 0))
				{
					unk_0xF0059F27F7BB6680(&(vLocal_133[unk_0x6BAA0516CC970D99() /*3*/].f_2), 0);
					if (func_646())
					{
						func_728(1, 0);
						func_727(2);
					}
				}
			}
			else if (unk_0xFA30DFD0084E92FE(vLocal_133[unk_0x6BAA0516CC970D99() /*3*/].f_2, 0))
			{
				unk_0x7CB6FD92BE491AD9(&(vLocal_133[unk_0x6BAA0516CC970D99() /*3*/].f_2), 0);
				if (func_646())
				{
					func_728(0, 0);
					func_726(2);
				}
			}
			if (!func_725())
			{
				if (func_718(unk_0xB5CEFD608600A09F(), Global_40001.f_2E6B, &uVar0, 1123024896, 0))
				{
					if (!func_422(unk_0xB5CEFD608600A09F(), 20))
					{
						func_722(0);
					}
				}
			}
			break;
	}
}

int func_725()//Position - 0x20952
{
	if (func_637(unk_0xB5CEFD608600A09F(), func_16(), 1))
	{
		return 1;
	}
	return 0;
}

void func_726(int iParam0)//Position - 0x2096F
{
	unk_0x7CB6FD92BE491AD9(&Global_1801DE, iParam0);
}

void func_727(int iParam0)//Position - 0x20981
{
	unk_0xF0059F27F7BB6680(&Global_1801DE, iParam0);
}

void func_728(bool bParam0, bool bParam1)//Position - 0x20993
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 49)
	{
		func_729(iVar0, bParam0, bParam1);
		iVar0++;
	}
}

void func_729(int iParam0, bool bParam1, bool bParam2)//Position - 0x209B8
{
	if (bParam1)
	{
		if (!func_733(iParam0, 8, 1))
		{
			func_732(iParam0, 8, 1);
		}
		if (bParam2)
		{
			if (!func_733(iParam0, 30, 1))
			{
				func_732(iParam0, 30, 1);
			}
		}
		else if (func_733(iParam0, 30, 1))
		{
			func_730(iParam0, 30, 1);
		}
	}
	else
	{
		if (func_733(iParam0, 8, 1))
		{
			func_730(iParam0, 8, 1);
		}
		if (func_733(iParam0, 30, 1))
		{
			func_730(iParam0, 30, 1);
		}
	}
}

void func_730(int iParam0, int iParam1, bool bParam2)//Position - 0x20A3B
{
	int iVar0;
	
	if (bParam2)
	{
		unk_0x7CB6FD92BE491AD9(&(Global_16B4F.f_531[iParam0]), iParam1);
	}
	else if (unk_0x7AF0088ABFA713B6())
	{
		if (func_707() == 0)
		{
			iVar0 = func_28(func_731(iParam0), -1, 0);
			unk_0x7CB6FD92BE491AD9(&iVar0, iParam1);
			func_25(func_731(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_29C[iParam0]), iParam1);
	}
}

int func_731(int iParam0)//Position - 0x20AA4
{
	switch (iParam0)
	{
		case 0:
			return 827;
			break;
		
		case 1:
			return 828;
			break;
		
		case 2:
			return 829;
			break;
		
		case 3:
			return 830;
			break;
		
		case 4:
			return 831;
			break;
		
		case 5:
			return 832;
			break;
		
		case 6:
			return 833;
			break;
		
		case 7:
			return 834;
			break;
		
		case 8:
			return 835;
			break;
		
		case 9:
			return 836;
			break;
		
		case 10:
			return 837;
			break;
		
		case 11:
			return 838;
			break;
		
		case 12:
			return 839;
			break;
		
		case 13:
			return 840;
			break;
		
		case 14:
			return 841;
			break;
		
		case 15:
			return 843;
			break;
		
		case 16:
			return 844;
			break;
		
		case 17:
			return 845;
			break;
		
		case 18:
			return 846;
			break;
		
		case 19:
			return 847;
			break;
		
		case 20:
			return 848;
			break;
		
		case 21:
			return 849;
			break;
		
		case 22:
			return 850;
			break;
		
		case 23:
			return 851;
			break;
		
		case 24:
			return 852;
			break;
		
		case 25:
			return 853;
			break;
		
		case 26:
			return 854;
			break;
		
		case 27:
			return 855;
			break;
		
		case 28:
			return 856;
			break;
		
		case 29:
			return 857;
			break;
		
		case 30:
			return 858;
			break;
		
		case 31:
			return 859;
			break;
		
		case 32:
			return 860;
			break;
		
		case 33:
			return 861;
			break;
		
		case 34:
			return 862;
			break;
		
		case 35:
			return 863;
			break;
		
		case 36:
			return 864;
			break;
		
		case 37:
			return 865;
			break;
		
		case 38:
			return 866;
			break;
		
		case 39:
			return 867;
			break;
		
		case 40:
			return 871;
			break;
		
		case 41:
			return 872;
			break;
		
		case 42:
			return 873;
			break;
		
		case 43:
			return 874;
			break;
		
		case 44:
			return 7779;
			break;
		
		case 45:
			return 3804;
			break;
		
		case 46:
			return 5379;
			break;
		
		case 47:
			return 6151;
			break;
		
		case 48:
			return 7228;
			break;
		
		default:
			break;
	}
	return 8804;
}

void func_732(int iParam0, int iParam1, bool bParam2)//Position - 0x20D98
{
	int iVar0;
	
	if (bParam2)
	{
		unk_0xF0059F27F7BB6680(&(Global_16B4F.f_531[iParam0]), iParam1);
	}
	else if (unk_0x7AF0088ABFA713B6())
	{
		if (func_707() == 0)
		{
			iVar0 = func_28(func_731(iParam0), -1, 0);
			unk_0xF0059F27F7BB6680(&iVar0, iParam1);
			func_25(func_731(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xF0059F27F7BB6680(&(Global_19B04.f_29C[iParam0]), iParam1);
	}
}

int func_733(int iParam0, int iParam1, bool bParam2)//Position - 0x20E01
{
	if (bParam2)
	{
		return unk_0xFA30DFD0084E92FE(Global_16B4F.f_531[iParam0], iParam1);
	}
	else if (unk_0x7AF0088ABFA713B6())
	{
		if (func_707() == 0)
		{
			return unk_0xFA30DFD0084E92FE(func_28(func_731(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xFA30DFD0084E92FE(Global_19B04.f_29C[iParam0], iParam1);
	}
	return 0;
}

int func_734(bool bParam0)//Position - 0x20E61
{
	if (bParam0)
	{
		return 0;
	}
	if (func_591(unk_0xB5CEFD608600A09F(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
	{
		return 1;
	}
	if (func_735(4))
	{
		return 1;
	}
	if (func_527())
	{
		return 1;
	}
	if (func_71(unk_0xB5CEFD608600A09F(), 0))
	{
		return 1;
	}
	if (func_576())
	{
		return 1;
	}
	if (unk_0xD92FE7FDA11C7334())
	{
		return 1;
	}
	return 0;
}

int func_735(int iParam0)//Position - 0x20ECA
{
	int iVar0;
	
	if (func_738())
	{
		iVar0 = 0;
		while (iVar0 < 49)
		{
			if (func_737(iVar0) == iParam0)
			{
				if (func_736(iVar0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_736(int iParam0)//Position - 0x20F05
{
	return func_733(iParam0, 5, 1);
}

int func_737(int iParam0)//Position - 0x20F15
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
		
		case 48:
			return 3;
			break;
	}
	return 6;
}

bool func_738()//Position - 0x211AF
{
	return Global_16B4F.f_141 > 0;
}

int func_739()//Position - 0x211C0
{
	if (((((((((func_748() || func_747()) || func_746()) || func_527()) || (func_745() && !unk_0x517823CA390A19F6())) || (func_742() && !func_741())) || Global_248A6D) || Global_248A6D.f_1 != 0) || Global_248AB7 != 0) || (func_740() == 2 && !unk_0x517823CA390A19F6()))
	{
		return 1;
	}
	return 0;
}

int func_740()//Position - 0x21254
{
	return Global_EF3AE;
}

bool func_741()//Position - 0x21260
{
	return unk_0xFA30DFD0084E92FE(Global_255A46.f_2, 27);
}

int func_742()//Position - 0x21274
{
	if (func_744() || func_743())
	{
		return Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_62 == 8;
	}
	return 0;
}

var func_743()//Position - 0x212A1
{
	return Global_255A46.f_26E;
}

bool func_744()//Position - 0x212B0
{
	return unk_0xFA30DFD0084E92FE(Global_255A46.f_2, 11);
}

bool func_745()//Position - 0x212C4
{
	return unk_0xFA30DFD0084E92FE(Global_255A46, 5);
}

bool func_746()//Position - 0x212D5
{
	return unk_0xFA30DFD0084E92FE(Global_255A46, 2);
}

bool func_747()//Position - 0x212E6
{
	return unk_0xFA30DFD0084E92FE(Global_255A46, 20);
}

bool func_748()//Position - 0x212F8
{
	return Global_255A46.f_24A;
}

void func_749(int iParam0, vector3 vParam1, var uParam2, float fParam3, float fParam4, int iParam5)//Position - 0x21307
{
	float fVar0;
	float fVar1;
	
	if ((((func_78(unk_0xB5CEFD608600A09F()) && !func_77(unk_0xB5CEFD608600A09F())) && !unk_0xFA30DFD0084E92FE(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_1, 8)) && (func_67(unk_0xB5CEFD608600A09F()) || func_66(unk_0xB5CEFD608600A09F()))) || func_17(vParam1))
	{
		return;
	}
	Global_19693F = { vParam1 };
	fVar0 = SYSTEM::VDIST(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), false), vParam1);
	func_785(iParam0, fVar0);
	if (unk_0xE186ACC7BE9B244E() && unk_0x0352C1B6B66A87AC() == 15)
	{
		if (func_65(unk_0xB5CEFD608600A09F()) || func_784(unk_0xB5CEFD608600A09F()))
		{
			if (!unk_0x7922FBF86CF76430(1344549371))
			{
				unk_0xFD1119221F75C876(1344549371);
			}
		}
		else if (unk_0x7922FBF86CF76430(1344549371))
		{
			unk_0xCB1E3206344A11E1(1344549371);
		}
	}
	if (fVar0 < fParam3)
	{
		if (!func_71(unk_0xB5CEFD608600A09F(), 21))
		{
			func_783(vParam1, 1, 0);
		}
		if (!*uParam2 && func_5(unk_0xB5CEFD608600A09F(), 1, 1))
		{
			*uParam2 = 1;
			if (func_782(iParam0))
			{
				unk_0xDF53A66AEE1401AA(func_781(iParam0));
				if (func_780(iParam0, -1))
				{
					unk_0xAEC867D0DBB7AFEB(0);
					if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0)
					{
						unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), 0, 1);
						unk_0xCE6A8FE7DACF8BD4(unk_0xB5CEFD608600A09F(), 1);
					}
					unk_0xF0059F27F7BB6680(&(Global_19693F.f_3), 0);
				}
			}
			if (func_779(iParam0))
			{
				fVar1 = func_778(iParam0);
				if (fVar1 != 1f)
				{
					func_777(fVar1);
					unk_0xF0059F27F7BB6680(&(Global_19693F.f_3), 1);
				}
			}
			if (!Global_247C05)
			{
				if (func_776(iParam0) && func_65(unk_0xB5CEFD608600A09F()))
				{
					func_774(1);
					func_773(2);
				}
			}
			func_80(19);
		}
	}
	else
	{
		if (fVar0 > fParam4)
		{
			if (func_422(unk_0xB5CEFD608600A09F(), 19))
			{
				func_70(19);
			}
		}
		if (*uParam2 && func_5(unk_0xB5CEFD608600A09F(), 1, 1))
		{
			*uParam2 = 0;
			if (func_782(iParam0))
			{
				if (unk_0xFA30DFD0084E92FE(Global_19693F.f_3, 0))
				{
					unk_0xDF53A66AEE1401AA(1f);
					unk_0xAEC867D0DBB7AFEB(5);
					unk_0x7CB6FD92BE491AD9(&(Global_19693F.f_3), 0);
				}
			}
			if (func_779(iParam0))
			{
				func_772();
				unk_0x7CB6FD92BE491AD9(&(Global_19693F.f_3), 1);
			}
			if (iParam5 && !func_78(unk_0xB5CEFD608600A09F()))
			{
				if (func_44(unk_0xB5CEFD608600A09F()) != 152)
				{
					func_751();
				}
			}
			if (func_187(2))
			{
				func_774(0);
				func_750(2);
			}
		}
	}
}

void func_750(int iParam0)//Position - 0x2157A
{
	unk_0x7CB6FD92BE491AD9(&(Global_267214.f_1312.f_25), iParam0);
}

void func_751()//Position - 0x21591
{
	unk_0x38AAB0A4B0E2C9F3(&(Global_24B2CE.f_18), &Global_24C33D, 2);
	unk_0x38AAB0A4B0E2C9F3(&(Global_24B2CE.f_1A), &Global_24C33F, 18);
	func_770();
	func_754(1, 1, 0);
	func_752();
}

void func_752()//Position - 0x215C7
{
	func_753(0, 0);
}

void func_753(int iParam0, int iParam1)//Position - 0x215D5
{
	Global_24B2CE.f_16 = iParam0;
	Global_24B2CE.f_17 = iParam1;
}

void func_754(bool bParam0, bool bParam1, bool bParam2)//Position - 0x215ED
{
	if (bParam1)
	{
		unk_0x38AAB0A4B0E2C9F3(&(Global_24B2CE.f_2C), &Global_24C351, 317);
	}
	else
	{
		Global_24B2CE.f_2C = { Global_24C351 };
		Global_24B2CE.f_2C.f_31 = { Global_24C351.f_31 };
		Global_24B2CE.f_2C.f_34 = Global_24C351.f_34;
		Global_24B2CE.f_2C.f_35 = Global_24C351.f_35;
	}
	if (bParam0)
	{
		func_769();
	}
	if (!bParam2)
	{
		func_757(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
	}
	func_756(0);
	func_755();
}

void func_755()//Position - 0x2168C
{
	struct<6> Var0;
	
	if (Global_24B2CE.f_1E3.f_1 == unk_0x8A55B15F4133C912())
	{
		Global_24B2CE.f_1E3 = { Var0 };
	}
}

void func_756(bool bParam0)//Position - 0x216B1
{
	if (bParam0)
	{
		Global_24B2CE.f_2BD = 0;
	}
	else
	{
		Global_24B2CE.f_2BD = 1;
	}
}

void func_757(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x216D1
{
	if (bParam0)
	{
		if (func_768())
		{
			func_767();
		}
		Global_24B2CE.f_2BE.f_203 = unk_0x8A55B15F4133C912();
		Global_24B2CE.f_2BE.f_1F8 = iParam1;
		Global_24B2CE.f_2BE.f_1F9 = iParam2;
		Global_24B2CE.f_2BE.f_1FA = iParam10;
		func_765();
		func_761(8, 0, 0, 0, 0);
		Global_24B2CE.f_2BE.f_1FB = iParam11;
		Global_24B2CE.f_2BE.f_1FE = iParam3;
		Global_24B2CE.f_2BE.f_1FF = iParam4;
		Global_24B2CE.f_2BE.f_1FC = iParam5;
		Global_24B2CE.f_2BE.f_1FD = iParam6;
		Global_24B2CE.f_2BE.f_200 = iParam7;
		Global_24B2CE.f_2BE.f_201 = iParam8;
		Global_24B2CE.f_2BE.f_202 = iParam9;
		Global_24B2CE.f_6C7 = 1;
	}
	else
	{
		func_758();
	}
}

void func_758()//Position - 0x21798
{
	if (func_768() && !func_760())
	{
		func_767();
	}
	if (func_760())
	{
		func_759();
	}
	else
	{
		func_765();
		func_761(0, 0, 0, 0, 0);
		Global_24B2CE.f_6C7 = 0;
		Global_24B2CE.f_6C6 = 0;
	}
}

void func_759()//Position - 0x217E0
{
	unk_0x38AAB0A4B0E2C9F3(&(Global_24B2CE.f_2BE), &(Global_24B2CE.f_4C2), 516);
	Global_24B2CE.f_1E3 = { Global_24B2CE.f_1E9 };
	if (unk_0x8A55B15F4133C912() == Global_24B2CE.f_2BE.f_203)
	{
		Global_24B2CE.f_6C6 = 0;
	}
}

int func_760()//Position - 0x21828
{
	if ((Global_24B2CE.f_6C6 && !unk_0x8A55B15F4133C912() == Global_24B2CE.f_4C2.f_203) && unk_0x3C406FC829C1E14A(Global_24B2CE.f_4C2.f_203))
	{
		return 1;
	}
	return 0;
}

void func_761(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x21867
{
	if (Global_252E21.f_760.f_2B2.f_10 != func_11())
	{
		if (unk_0xFA30DFD0084E92FE(Global_24FB5C[Global_252E21.f_760.f_2B2.f_10 /*406*/].f_18C, 0) && func_762())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_24CF63 = 0;
	}
	Global_24B2CE.f_1E3 = iParam0;
	Global_24B2CE.f_1E3.f_1 = unk_0x8A55B15F4133C912();
	Global_24B2CE.f_1E3.f_2 = iParam1;
	Global_24B2CE.f_1E3.f_3 = iParam2;
	Global_24B2CE.f_1E3.f_4 = iParam3;
	Global_24B2CE.f_1E3.f_5 = iParam4;
}

int func_762()//Position - 0x21906
{
	if (((func_44(unk_0xB5CEFD608600A09F()) == 229 || func_44(unk_0xB5CEFD608600A09F()) == 191) || func_764()) || func_763())
	{
		return 0;
	}
	return 1;
}

var func_763()//Position - 0x21946
{
	return Global_1805CE;
}

int func_764()//Position - 0x21952
{
	if (Global_440000 == 6)
	{
		return 1;
	}
	return 0;
}

void func_765()//Position - 0x21967
{
	if (func_768() && !func_760())
	{
		func_767();
	}
	func_766();
	Global_24B2CE.f_2BE = 0;
}

void func_766()//Position - 0x21990
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_24B2CE.f_2BE.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_767()//Position - 0x219CB
{
	if (func_760())
	{
		if (Global_24B2CE.f_2BE.f_203 == Global_24B2CE.f_4C2.f_203)
		{
			return;
		}
	}
	if (!unk_0x8A55B15F4133C912() == Global_24B2CE.f_2BE.f_203)
	{
		unk_0x38AAB0A4B0E2C9F3(&(Global_24B2CE.f_4C2), &(Global_24B2CE.f_2BE), 516);
		Global_24B2CE.f_1E9 = { Global_24B2CE.f_1E3 };
		Global_24B2CE.f_6C6 = 1;
	}
}

int func_768()//Position - 0x21A39
{
	if ((Global_24B2CE.f_6C7 && !unk_0x8A55B15F4133C912() == Global_24B2CE.f_2BE.f_203) && unk_0x3C406FC829C1E14A(Global_24B2CE.f_2BE.f_203))
	{
		return 1;
	}
	return 0;
}

void func_769()//Position - 0x21A78
{
	unk_0x38AAB0A4B0E2C9F3(&(Global_24B2CE.f_169), &Global_24C48E, 121);
}

void func_770()//Position - 0x21A91
{
	func_771();
	Global_24B2CE.f_8C4 = 0;
}

void func_771()//Position - 0x21AA5
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_24B2CE.f_8C5[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
}

void func_772()//Position - 0x21AD1
{
	if (unk_0x3C406FC829C1E14A(Global_267214.f_130E))
	{
		if (!Global_267214.f_130E == unk_0x8A55B15F4133C912() && Global_267214.f_130D < 1f)
		{
			return;
		}
	}
	Global_267214.f_130E = -1;
	Global_267214.f_130D = 1f;
}

void func_773(int iParam0)//Position - 0x21B18
{
	unk_0xF0059F27F7BB6680(&(Global_267214.f_1312.f_25), iParam0);
}

void func_774(int iParam0)//Position - 0x21B2F
{
	if (func_775() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_247C05)
	{
		return;
	}
	Global_247C05 = iParam0;
	Global_247C07 = 0;
	Global_247C08 = 0;
}

int func_775()//Position - 0x21B64
{
	if ((((Global_EF3AE != -1 && Global_EF3AE != 33) && Global_EF3AE != 35) && Global_EF3AE != 37) && Global_EF3AE != 21)
	{
		return 1;
	}
	return 0;
}

int func_776(int iParam0)//Position - 0x21BAA
{
	switch (iParam0)
	{
		case 142:
		case 159:
		case 148:
		case 157:
		case 166:
		case 179:
		case 189:
		case 193:
		case 198:
		case 205:
			return 1;
		
		default:
	}
	return 0;
}

void func_777(float fParam0)//Position - 0x21BFA
{
	float fVar0;
	
	if (unk_0x56BEECB328B6D29D(unk_0x1377080E9B0BD993()) == func_706())
	{
		return;
	}
	fVar0 = (Global_267214.f_130D - fParam0);
	if (unk_0x3C406FC829C1E14A(Global_267214.f_130E))
	{
		if (!Global_267214.f_130E == unk_0x8A55B15F4133C912() && unk_0x357058E632979E65(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_267214.f_130D = fParam0;
	Global_267214.f_130E = unk_0x8A55B15F4133C912();
}

float func_778(int iParam0)//Position - 0x21C66
{
	switch (iParam0)
	{
		case 142:
		case 157:
		case 159:
		case 151:
		case 148:
		case 164:
		case 152:
		case 153:
		case 154:
		case 155:
		case 160:
		case 162:
		case 166:
		case 173:
		case 169:
		case 167:
		case 168:
		case 170:
		case 178:
		case 179:
		case 189:
		case 180:
		case 182:
		case 183:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 199:
		case 201:
		case 185:
		case 197:
		case 186:
		case 198:
		case 195:
		case 205:
		case 207:
		case 208:
		case 209:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_779(int iParam0)//Position - 0x21DFA
{
	switch (iParam0)
	{
		case 152:
		case 164:
		case 151:
		case 170:
		case 169:
		case 201:
		case 191:
		case 198:
		case 180:
		case 200:
		case 208:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 227:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

int func_780(int iParam0, int iParam1)//Position - 0x21EC2
{
	switch (iParam0)
	{
		case 148:
		case 164:
		case 152:
		case 153:
		case 160:
			return 1;
		
		case 168:
			if ((iParam1 != 2 && iParam1 != 10) && iParam1 != 7)
			{
				return 1;
			}
			break;
		
		case 170:
		case 166:
		case 173:
			return 1;
		
		case 179:
		case 183:
		case 189:
		case 191:
		case 192:
		case 193:
		case 194:
		case 186:
		case 199:
		case 185:
		case 201:
		case 198:
		case 195:
		case 180:
		case 207:
		case 208:
		case 209:
		case 210:
		case 214:
		case 217:
		case 218:
		case 215:
		case 216:
		case 219:
		case 220:
		case 221:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
		case 227:
			return 1;
		
		case 190:
			if (((iParam1 != 6 && iParam1 != 9) && iParam1 != 7) && iParam1 != 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

float func_781(int iParam0)//Position - 0x22043
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 140:
		case 139:
		case 141:
		case 146:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 0f;
		
		case 144:
			return 0f;
		
		case 185:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_782(int iParam0)//Position - 0x220FB
{
	switch (iParam0)
	{
		case 152:
		case 142:
		case 164:
		case 151:
		case 160:
		case 166:
		case 173:
		case 183:
		case 185:
		case 197:
		case 186:
		case 201:
		case 191:
		case 198:
		case 207:
		case 208:
		case 209:
		case 200:
		case 195:
		case 180:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 227:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

void func_783(vector3 vParam0, int iParam1, int iParam2)//Position - 0x221F9
{
	Global_24B2CE.f_2C.f_31 = { vParam0 };
	Global_24B2CE.f_2C.f_34 = iParam1;
	Global_24B2CE.f_2C.f_35 = iParam2;
}

int func_784(int iParam0)//Position - 0x22223
{
	if (func_114(iParam0))
	{
		if (func_65(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_785(int iParam0, float fParam1)//Position - 0x22242
{
	int iVar0;
	
	iVar0 = func_786(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (fParam1 < IntToFloat(iVar0))
	{
		func_605();
	}
}

int func_786(int iParam0)//Position - 0x22268
{
	switch (iParam0)
	{
		case 152:
			return Global_40001.f_2E87;
		
		case 142:
			return Global_40001.f_2E7B;
		
		case 157:
			return Global_40001.f_2E5A;
		
		case 159:
			return Global_40001.f_2E49;
		
		case 162:
			return Global_40001.f_2EB8;
		
		case 173:
			return 100;
		
		case 170:
			return 100;
		
		default:
	}
	return -1;
}

void func_787()//Position - 0x222DE
{
	switch (func_790())
	{
		case 1:
			if (func_650(unk_0x6BAA0516CC970D99()) != 1)
			{
				func_789(func_725());
				func_788(1);
			}
			break;
		
		case 2:
			if (func_650(unk_0x6BAA0516CC970D99()) != 2)
			{
				func_789(func_725());
				func_788(2);
			}
			break;
		
		case 3:
			if (func_650(unk_0x6BAA0516CC970D99()) != 3)
			{
				func_789(func_725());
				func_788(3);
			}
			break;
	}
}

void func_788(int iParam0)//Position - 0x22355
{
	vLocal_133[unk_0x6BAA0516CC970D99() /*3*/].f_1 = iParam0;
}

void func_789(bool bParam0)//Position - 0x22369
{
	if (bParam0)
	{
		if (!func_422(unk_0xB5CEFD608600A09F(), 9))
		{
			if (func_63(unk_0xB5CEFD608600A09F()) != 0)
			{
				func_80(9);
			}
		}
	}
	else if (func_422(unk_0xB5CEFD608600A09F(), 9))
	{
		func_70(9);
	}
}

int func_790()//Position - 0x223AF
{
	return Local_132.f_1;
}

void func_791()//Position - 0x223BB
{
	iLocal_105 = func_63(unk_0xB5CEFD608600A09F());
	func_792(164, 1, -1, 0);
	iLocal_106 = func_203(Local_132.f_5, -2, 0, 0);
	unk_0xE45648BDBF3441F5(iLocal_106, &(uLocal_119[0]), &(uLocal_119[1]), &(uLocal_119[2]), &(uLocal_119[3]));
}

void func_792(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x223FF
{
	float fVar0;
	
	if (Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_21 != iParam0)
	{
		func_806(-1);
		Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_21 = iParam0;
		if (func_805() != -1)
		{
			func_804(-1);
		}
		if (func_803() != -1)
		{
			func_802(-1);
		}
		func_801(iParam2);
		func_799(iParam0);
		if (!func_779(iParam0))
		{
			fVar0 = func_778(iParam0);
			if (fVar0 != 1f)
			{
				func_777(fVar0);
				unk_0xF0059F27F7BB6680(&(Global_19693F.f_3), 1);
			}
		}
		if (!func_782(iParam0) || iParam3)
		{
			if (func_780(iParam0, iParam2) && iParam3 == 1)
			{
				unk_0xAEC867D0DBB7AFEB(0);
				if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
				{
					unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), 0, 0);
					unk_0xCE6A8FE7DACF8BD4(unk_0xB5CEFD608600A09F(), 0);
				}
				unk_0xF0059F27F7BB6680(&(Global_19693F.f_3), 0);
			}
			else if (unk_0x8C6B6C3774164BB5() < 5)
			{
				unk_0xDF53A66AEE1401AA(1f);
				unk_0xAEC867D0DBB7AFEB(5);
			}
		}
		if (func_75())
		{
			func_80(27);
		}
		if (bParam1)
		{
			if (!func_68())
			{
				func_774(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((unk_0xFA30DFD0084E92FE(Global_267214.f_11BD, 1) || unk_0xFA30DFD0084E92FE(Global_267214.f_11BD, 4)) || unk_0xFA30DFD0084E92FE(Global_267214.f_11BD, 0))
			{
				func_193(6);
			}
			func_798();
		}
		if (((iParam0 == 164 || iParam0 == 208) || iParam0 == 250) || iParam0 == 237)
		{
			unk_0xE85B33FB221A23CD(3, false);
			unk_0xE85B33FB221A23CD(5, false);
		}
		if (func_78(unk_0xB5CEFD608600A09F()) && func_65(unk_0xB5CEFD608600A09F()))
		{
			unk_0xF0059F27F7BB6680(&(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_1), 8);
		}
		func_794();
		if (func_793(iParam0))
		{
			unk_0xE85B33FB221A23CD(3, false);
			unk_0xE85B33FB221A23CD(5, false);
			unk_0xF0059F27F7BB6680(&(Global_19693F.f_3), 6);
		}
		Global_267214.f_181A = 0;
	}
}

int func_793(int iParam0)//Position - 0x2261C
{
	switch (iParam0)
	{
		case 216:
		case 218:
		case 215:
		case 120:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
			return 1;
		
		default:
	}
	return 0;
}

void func_794()//Position - 0x22666
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	bVar3 = func_797();
	iVar2 = func_85(unk_0xB5CEFD608600A09F());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0x3171C34AB3FE6F2E(iVar0);
		if (unk_0x96B1061E8F3CBC9A(iVar1))
		{
			if (func_637(iVar1, iVar2, 1) || func_795(iVar1, unk_0xB5CEFD608600A09F()))
			{
				unk_0xB7BCAAFF114A94F2(unk_0xB5CEFD608600A09F(), iVar1, bVar3);
				unk_0xB7BCAAFF114A94F2(iVar1, unk_0xB5CEFD608600A09F(), bVar3);
			}
		}
		iVar0++;
	}
}

int func_795(int iParam0, int iParam1)//Position - 0x226D6
{
	if (func_229(iParam0, 1) && func_229(iParam1, 1))
	{
		return (func_796(iParam0) == func_85(iParam1) || func_796(iParam1) == func_85(iParam0));
	}
	return 0;
}

int func_796(int iParam0)//Position - 0x22718
{
	if (func_229(iParam0, 1))
	{
		return Global_18C80F[func_85(iParam0) /*558*/].f_B.f_1BB;
	}
	return func_11();
}

int func_797()//Position - 0x22743
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_131();
	if (iVar0 != func_11())
	{
		if (func_5(iVar0, 0, 1))
		{
			iVar1 = iVar0;
			if (iVar1 != -1)
			{
				return unk_0xFA30DFD0084E92FE(Global_18C80F[iVar1 /*558*/].f_1, 16);
			}
		}
	}
	return 0;
}

void func_798()//Position - 0x22784
{
	if (unk_0xFA30DFD0084E92FE(Global_267214.f_11BD, 1))
	{
		unk_0x7CB6FD92BE491AD9(&(Global_267214.f_11BD), 1);
	}
	if (unk_0xFA30DFD0084E92FE(Global_267214.f_11BD, 4))
	{
		unk_0x7CB6FD92BE491AD9(&(Global_267214.f_11BD), 4);
	}
	if (unk_0xFA30DFD0084E92FE(Global_267214.f_11BD, 6))
	{
		unk_0x7CB6FD92BE491AD9(&(Global_267214.f_11BD), 6);
	}
	unk_0x7CB6FD92BE491AD9(&(Global_267214.f_11BD), 0);
	unk_0x7CB6FD92BE491AD9(&(Global_267214.f_11BD), 2);
	Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_28B = 0;
	if (Global_267214.f_11BF > 0)
	{
		unk_0xAEC867D0DBB7AFEB(Global_267214.f_11BF);
	}
	Global_267214.f_11BE = 0;
}

void func_799(int iParam0)//Position - 0x22822
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_28(3787, -1, 0);
	iVar1 = func_800(iParam0);
	if (iVar1 != -1)
	{
		unk_0xF0059F27F7BB6680(&iVar0, iVar1);
		func_25(3787, iVar0, -1, 1, 0);
	}
}

int func_800(int iParam0)//Position - 0x22857
{
	switch (iParam0)
	{
		case 170:
			return 0;
		
		case 166:
			return 1;
		
		case 171:
			return 2;
		
		case 172:
			return 3;
		
		case 173:
			return 4;
		
		case 214:
			return 5;
		
		case 215:
			return 6;
		
		case 216:
			return 7;
		
		case 217:
			return 8;
		
		case 218:
			return 9;
		
		case 219:
			return 10;
		
		case 220:
			return 11;
		
		case 221:
			return 12;
		
		default:
	}
	return -1;
}

void func_801(int iParam0)//Position - 0x228EE
{
	int iVar0;
	
	iVar0 = unk_0xB5CEFD608600A09F();
	if (Global_18C80F[iVar0 /*558*/].f_B.f_B0 != iParam0)
	{
		Global_18C80F[iVar0 /*558*/].f_B.f_B0 = iParam0;
	}
}

void func_802(int iParam0)//Position - 0x2291D
{
	if (Global_267214.f_1312.f_149 != iParam0)
	{
		Global_267214.f_1312.f_149 = iParam0;
	}
}

int func_803()//Position - 0x22940
{
	return Global_267214.f_1312.f_149;
}

void func_804(int iParam0)//Position - 0x22952
{
	if (Global_267214.f_1312.f_148 != iParam0)
	{
		Global_267214.f_1312.f_148 = iParam0;
	}
}

int func_805()//Position - 0x22975
{
	return Global_267214.f_1312.f_148;
}

void func_806(int iParam0)//Position - 0x22987
{
	Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_20 = iParam0;
}

void func_807(int iParam0)//Position - 0x229A0
{
	vLocal_133[unk_0x6BAA0516CC970D99() /*3*/] = iParam0;
}

int func_808()//Position - 0x229B2
{
	return Local_132;
}

int func_809(int iParam0)//Position - 0x229BC
{
	return vLocal_133[iParam0 /*3*/];
}

int func_810(bool bParam0)//Position - 0x229CA
{
	if (func_814(1))
	{
		return 1;
	}
	if (Global_267214.f_1312.f_21)
	{
		Global_267214.f_1312.f_21 = 0;
		return 1;
	}
	if (bParam0)
	{
		if (func_29() == func_11() || !func_5(func_29(), 0, 1))
		{
			return 1;
		}
	}
	if (!func_578(unk_0xB5CEFD608600A09F()))
	{
		if (func_813(unk_0xB5CEFD608600A09F()) && func_811(func_812(unk_0xB5CEFD608600A09F()), 11))
		{
			return 1;
		}
	}
	return 0;
}

bool func_811(int iParam0, int iParam1)//Position - 0x22A4D
{
	return func_62(iParam0) == iParam1;
}

int func_812(int iParam0)//Position - 0x22A5E
{
	if (iParam0 != func_11() && func_5(iParam0, 1, 1))
	{
		return Global_24FB5C[iParam0 /*406*/].f_131.f_C;
	}
	return -1;
}

int func_813(int iParam0)//Position - 0x22A8F
{
	if (iParam0 != func_11() && func_5(iParam0, 1, 1))
	{
		return unk_0xFA30DFD0084E92FE(Global_24FB5C[iParam0 /*406*/].f_131, 4);
	}
	return 0;
}

int func_814(bool bParam0)//Position - 0x22AC3
{
	bool bVar0;
	
	if (!func_129(1))
	{
		bVar0 = false;
		if (Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_39 != func_11())
		{
			if (func_5(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_39, 0, 1))
			{
				if ((Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_18 == 4 || Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_18 == 8) || Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_18 == 6)
				{
					bVar0 = true;
				}
			}
		}
		else if (func_815(func_44(unk_0xB5CEFD608600A09F())) == 0)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				func_193(31);
				if (func_47(func_44(unk_0xB5CEFD608600A09F())))
				{
					func_193(81);
				}
				if (Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_39 != func_11() && unk_0x96B1061E8F3CBC9A(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_39))
				{
					Global_18C287 = func_203(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_39, -2, 0, 0);
					if (!func_40(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_39))
					{
						func_193(88);
					}
				}
				else
				{
					Global_18C287 = 1;
				}
				Global_18C277 = { Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_63 };
			}
			return 1;
		}
	}
	return 0;
}

int func_815(int iParam0)//Position - 0x22C14
{
	switch (iParam0)
	{
		case 153:
		case 154:
		case 155:
		case 162:
		case 160:
		case 163:
		case 167:
		case 168:
		case 169:
		case 171:
		case 172:
		case 178:
		case 190:
		case 191:
		case 192:
		case 189:
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 249:
		case 250:
			return 0;
		
		case 152:
		case 159:
		case 142:
		case 164:
		case 157:
		case 166:
		case 170:
		case 173:
		case 180:
		case 183:
		case 185:
		case 182:
		case 186:
		case 197:
		case 200:
		case 201:
		case 198:
		case 195:
		case 207:
		case 208:
		case 209:
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 241:
		case 242:
		case 244:
		case 248:
			return 1;
		
		case 148:
		case 179:
			return 2;
		
		default:
	}
	return -1;
}

int func_816()//Position - 0x22DC8
{
	var uVar0;
	
	func_820(&uVar0);
	if (Global_14083F == 0)
	{
		if (!unk_0x7AF0088ABFA713B6())
		{
			return 1;
		}
	}
	if (func_819())
	{
		return 1;
	}
	if (Global_25891C)
	{
		return 1;
	}
	if (func_818())
	{
		return 1;
	}
	if (func_817(157))
	{
		if (!func_748())
		{
			return 1;
		}
	}
	if (func_817(155))
	{
		return 1;
	}
	if (!unk_0x57D316754A262B34())
	{
		return 1;
	}
	if (func_706() != 0)
	{
		if (unk_0xB731B8C5BCE89836(func_706()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_817(int iParam0)//Position - 0x22E52
{
	if (unk_0xA1AC399BCBEE5B2D(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_818()//Position - 0x22E69
{
	return Global_258063;
}

bool func_819()//Position - 0x22E75
{
	return Global_255A46.f_245;
}

void func_820(var uParam0)//Position - 0x22E84
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
					func_821(iVar0);
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

void func_821(int iParam0)//Position - 0x22EF7
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x414AA1932D1C88E2(1, iParam0, &vVar0, 3))
	{
		if (func_5(vVar0.y, 1, 1))
		{
			iVar1 = unk_0xA95CF30C72EB526E(vVar0.y);
			if (unk_0x724D816EA203A79E(iVar1))
			{
				if (unk_0x5237AF95232D78C5(iVar1, 0))
				{
					iVar2 = unk_0x9FE9D386222EEE47(iVar1, 0);
					if (unk_0x403C891106DCABAF(iVar2, vVar0.z) && unk_0x32405B7614E36453())
					{
						if (func_822(iVar2, &bVar3))
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

int func_822(int iParam0, var uParam1)//Position - 0x22F78
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

void func_823()//Position - 0x22FD7
{
	SYSTEM::WAIT(0);
}

void func_824()//Position - 0x22FE4
{
	if (func_646())
	{
		if (func_604(unk_0xB5CEFD608600A09F(), 0))
		{
			func_311(unk_0xB5CEFD608600A09F(), 0);
		}
	}
	if (unk_0x6BAA0516CC970D99() != -1)
	{
		if (unk_0xFA30DFD0084E92FE(vLocal_133[unk_0x6BAA0516CC970D99() /*3*/].f_2, 7))
		{
			func_313(0, 4, 0, 0, -1, -1, -1, -1, -1, 0);
		}
	}
	if (func_871(2))
	{
		func_726(2);
	}
	if (func_655(&iLocal_130, 10, -1))
	{
		unk_0x38FF8CB6377D36F6(iLocal_129);
		iLocal_129 = -1;
		func_655(&iLocal_130, 10, 0);
	}
	if (func_655(&iLocal_130, 11, -1))
	{
		func_648(0);
	}
	Global_196948.f_2 = Local_132.f_14;
	Global_196948.f_3 = Local_132.f_15;
	func_869(Local_132.f_4, -1, -1, -1082130432);
	func_728(0, 0);
	func_825(0, 0);
	unk_0x95E4B6F3ED223F5A();
}

void func_825(bool bParam0, int iParam1)//Position - 0x230A0
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_14A4EA.f_1.f_6C != 0)
	{
		Global_14A4EA.f_1.f_6C = 0;
	}
	Global_14A4EA.f_1.f_6D = -1;
	Global_14A4EA.f_1.f_6E = -1;
	if (Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_21 == 167 || Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_21 == 168)
	{
		func_867();
		unk_0x7CB6FD92BE491AD9(&(Global_19693F.f_3), 4);
	}
	if ((func_127() && iParam1 != 0) && Global_40001.f_3FE2)
	{
		if (Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_21 == 190 || Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_21 == 192)
		{
			func_849(unk_0xB5CEFD608600A09F(), iParam1, 1, 0);
		}
	}
	if (((Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_21 == 164 || Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_21 == 208) || Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_21 == 250) || Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_21 == 237)
	{
		unk_0xE85B33FB221A23CD(3, true);
		unk_0xE85B33FB221A23CD(5, true);
	}
	if (Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_21 != -1)
	{
		Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_21 = -1;
		if (!unk_0xFA30DFD0084E92FE(Global_180634.f_1, 14) && !func_78(unk_0xB5CEFD608600A09F()))
		{
			func_774(0);
		}
	}
	else if (func_847(unk_0xB5CEFD608600A09F()) != -1)
	{
		func_806(-1);
	}
	func_846(func_11());
	if (func_187(16))
	{
		func_750(16);
	}
	func_843(0);
	func_801(-1);
	func_842();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_841(iVar0);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_838(iVar1);
		iVar1++;
	}
	if (unk_0xFA30DFD0084E92FE(Global_19693F.f_3, 0))
	{
		unk_0xDF53A66AEE1401AA(1f);
		unk_0xAEC867D0DBB7AFEB(5);
		unk_0x7CB6FD92BE491AD9(&(Global_19693F.f_3), 0);
	}
	if (unk_0xFA30DFD0084E92FE(Global_19693F.f_3, 5))
	{
		unk_0x7CB6FD92BE491AD9(&(Global_19693F.f_3), 5);
	}
	iVar2 = func_57();
	if ((func_36(iVar2) || iVar2 == 205) || iVar2 == 210)
	{
		func_837(-1);
	}
	else if (((iVar2 == 201 || iVar2 == 200) || iVar2 == 179) || func_102(iVar2))
	{
		func_834(-1, 1);
	}
	else if (((((func_56(iVar2) || func_833(iVar2)) || func_832(iVar2)) || func_95(iVar2)) || func_94(iVar2)) || func_93(iVar2))
	{
	}
	else
	{
		func_834(-1, 1);
	}
	func_70(19);
	func_70(20);
	func_70(21);
	func_70(22);
	func_70(27);
	func_750(3);
	func_750(4);
	func_750(7);
	func_831();
	if (func_65(unk_0xB5CEFD608600A09F()))
	{
		func_789(0);
	}
	func_70(29);
	Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_39 = func_11();
	if (Global_267214.f_1312.f_21 != 0)
	{
		Global_267214.f_1312.f_21 = 0;
	}
	if (bParam0)
	{
		func_751();
	}
	if (!func_78(unk_0xB5CEFD608600A09F()))
	{
		func_772();
		unk_0x7CB6FD92BE491AD9(&(Global_19693F.f_3), 1);
	}
	if (unk_0xFA30DFD0084E92FE(Global_19693F.f_3, 6))
	{
		unk_0xE85B33FB221A23CD(3, true);
		unk_0xE85B33FB221A23CD(5, true);
		unk_0x7CB6FD92BE491AD9(&(Global_19693F.f_3), 6);
	}
	if (unk_0xFA30DFD0084E92FE(Global_19693F.f_3, 7))
	{
		unk_0x7CB6FD92BE491AD9(&(Global_19693F.f_3), 7);
	}
	if (unk_0xFA30DFD0084E92FE(Global_19693F.f_3, 8))
	{
		func_830("IMPEXP_SELFDES", 0);
		func_828("IMPEXP_SELFDES");
		unk_0x7CB6FD92BE491AD9(&(Global_19693F.f_3), 8);
	}
	func_826(iVar2, 0);
}

void func_826(int iParam0, bool bParam1)//Position - 0x23469
{
	if (bParam1)
	{
		if (!unk_0xFA30DFD0084E92FE(Global_19693F.f_3, 9))
		{
			unk_0xD6423910AAD8A379(func_827(iParam0));
			unk_0xF0059F27F7BB6680(&(Global_19693F.f_3), 9);
		}
	}
	else if (unk_0xFA30DFD0084E92FE(Global_19693F.f_3, 9))
	{
		unk_0xC1300D0F3A74E20B(func_827(iParam0));
		unk_0x7CB6FD92BE491AD9(&(Global_19693F.f_3), 9);
	}
}

char* func_827(int iParam0)//Position - 0x234C5
{
	switch (iParam0)
	{
		case 219:
			return "DLC_IE_VIP_Velocity_Vehicle_Scene";
		
		case 221:
			return "DLC_IE_VIP_Stockpiling_Vehicle_Scene";
		
		case 220:
			return "DLC_IE_VIP_Ramped_Up_Vehicle_Scene";
		
		case 214:
			return "DLC_IE_VIP_Plowed_Vehicle_Scene";
		
		case 217:
			return "DLC_IE_VIP_Transporter_Vehicle_Scene";
		
		case 218:
			return "DLC_IE_VIP_Fortified_Vehicle_Scene";
		
		case 215:
			return "DLC_IE_VIP_Fully_Loaded_Vehicle_Scene";
		
		case 216:
			return "DLC_IE_VIP_Amphibious_Assault_Vehicle_Scene";
		
		default:
	}
	return "";
}

void func_828(char* sParam0)//Position - 0x23540
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!unk_0xEAEFBBEC1AEA464B(&(Global_19B04.f_3720[iVar0 /*104*/])))
		{
			if (unk_0x3362CDE8460ED38B(&(Global_19B04.f_3720[iVar0 /*104*/]), sParam0))
			{
				if (Global_19B04.f_3720[iVar0 /*104*/].f_18 == 2)
				{
				}
				else
				{
					func_669();
					Global_19B04.f_3720[iVar0 /*104*/].f_63[Global_389D] = 0;
					if (func_829(iVar0))
					{
					}
					else
					{
						Global_19B04.f_3720[iVar0 /*104*/].f_18 = 0;
						Global_19B04.f_3720[iVar0 /*104*/].f_1C = 0;
						Global_19B04.f_3720[iVar0 /*104*/].f_1D = 0;
					}
					unk_0x8C563C8EA840EA02(Global_19B04.f_3720[iVar0 /*104*/].f_10);
				}
			}
		}
		iVar0++;
	}
}

int func_829(int iParam0)//Position - 0x235F4
{
	if ((Global_19B04.f_3720[iParam0 /*104*/].f_63[0] == 1 || Global_19B04.f_3720[iParam0 /*104*/].f_63[1] == 1) || Global_19B04.f_3720[iParam0 /*104*/].f_63[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_830(char* sParam0, int iParam1)//Position - 0x23649
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!unk_0xEAEFBBEC1AEA464B(&(Global_19B04.f_3720[iVar0 /*104*/])))
		{
			if (unk_0x3362CDE8460ED38B(&(Global_19B04.f_3720[iVar0 /*104*/]), sParam0))
			{
				if (Global_19B04.f_3720[iVar0 /*104*/].f_18 == 0)
				{
				}
				Global_19B04.f_3720[iVar0 /*104*/].f_18 = 1;
				if (Global_19B04.f_3720[iVar0 /*104*/].f_19 == 1)
				{
					if (Global_19B04.f_3720[iVar0 /*104*/].f_63[0] == 1)
					{
						Global_19B04.f_36C6[0 /*20*/].f_11 = 0;
					}
					if (Global_19B04.f_3720[iVar0 /*104*/].f_63[1] == 1)
					{
						Global_19B04.f_36C6[1 /*20*/].f_11 = 0;
					}
					if (Global_19B04.f_3720[iVar0 /*104*/].f_63[2] == 1)
					{
						Global_19B04.f_36C6[2 /*20*/].f_11 = 0;
					}
					if (Global_19B04.f_3720[iVar0 /*104*/].f_63[3] == 1)
					{
						Global_19B04.f_36C6[3 /*20*/].f_11 = 0;
					}
					Global_19B04.f_3720[iVar0 /*104*/].f_19 = 0;
					if (iParam1 == 1)
					{
						Global_19B04.f_3720[iVar0 /*104*/].f_1B = 1;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_831()//Position - 0x23761
{
	if (func_606(unk_0xB5CEFD608600A09F()))
	{
		func_70(25);
	}
}

int func_832(int iParam0)//Position - 0x2377A
{
	switch (iParam0)
	{
		case 178:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_833(int iParam0)//Position - 0x2379A
{
	if ((iParam0 == 191 || iParam0 == 190) || iParam0 == 192)
	{
		return 1;
	}
	return 0;
}

void func_834(int iParam0, bool bParam1)//Position - 0x237C5
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_57();
	}
	if (iParam0 > 0)
	{
		if (func_131() != func_11())
		{
			if (func_579(unk_0xB5CEFD608600A09F()) == unk_0xB5CEFD608600A09F())
			{
				Global_262283.f_5D[func_836(iParam0)] = 1;
			}
		}
		iVar0 = func_836(159);
		if (func_835(iVar0, Global_40001.f_2EDB, bParam1))
		{
			func_8(&(Global_262283[iVar0 /*2*/]));
			func_20(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_836(157);
		if (func_835(iVar0, Global_40001.f_2EDB, bParam1))
		{
			func_8(&(Global_262283[iVar0 /*2*/]));
			func_20(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_836(148);
		if (func_835(iVar0, Global_40001.f_2EDB, bParam1))
		{
			func_8(&(Global_262283[iVar0 /*2*/]));
			func_20(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_836(164);
		if (func_835(iVar0, Global_40001.f_2EDB, bParam1))
		{
			func_8(&(Global_262283[iVar0 /*2*/]));
			func_20(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_836(142);
		if (func_835(iVar0, Global_40001.f_2EDB, bParam1))
		{
			func_8(&(Global_262283[iVar0 /*2*/]));
			func_20(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_836(152);
		if (func_835(iVar0, Global_40001.f_2EDB, bParam1))
		{
			func_8(&(Global_262283[iVar0 /*2*/]));
			func_20(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_836(166);
		if (func_835(iVar0, Global_40001.f_2EDB, bParam1))
		{
			func_8(&(Global_262283[iVar0 /*2*/]));
			func_20(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_836(170);
		if (func_835(iVar0, Global_40001.f_2EDB, bParam1))
		{
			func_8(&(Global_262283[iVar0 /*2*/]));
			func_20(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_836(173);
		if (func_835(iVar0, Global_40001.f_2EDB, bParam1))
		{
			func_8(&(Global_262283[iVar0 /*2*/]));
			func_20(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_836(179);
		if (func_835(iVar0, Global_40001.f_2EDB, bParam1))
		{
			func_8(&(Global_262283[iVar0 /*2*/]));
			func_20(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_836(200);
		if (func_835(iVar0, Global_40001.f_2EDB, bParam1))
		{
			func_8(&(Global_262283[iVar0 /*2*/]));
			func_20(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_836(201);
		if (func_835(iVar0, Global_40001.f_2EDB, bParam1))
		{
			func_8(&(Global_262283[iVar0 /*2*/]));
			func_20(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_836(182);
		if (func_835(iVar0, Global_40001.f_2EDC, 0))
		{
			func_8(&(Global_262283[iVar0 /*2*/]));
			func_20(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_836(183);
		if (func_835(iVar0, Global_40001.f_2EDC, 0))
		{
			func_8(&(Global_262283[iVar0 /*2*/]));
			func_20(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_836(185);
		if (func_835(iVar0, Global_40001.f_2EDC, 0))
		{
			func_8(&(Global_262283[iVar0 /*2*/]));
			func_20(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_836(186);
		if (func_835(iVar0, Global_40001.f_2EDC, 0))
		{
			func_8(&(Global_262283[iVar0 /*2*/]));
			func_20(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_836(180);
		if (func_835(iVar0, Global_40001.f_2EDC, 0))
		{
			func_8(&(Global_262283[iVar0 /*2*/]));
			func_20(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_836(195);
		if (func_835(iVar0, Global_40001.f_2EDC, 0))
		{
			func_8(&(Global_262283[iVar0 /*2*/]));
			func_20(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_836(197);
		if (func_835(iVar0, Global_40001.f_2EDC, 0))
		{
			func_8(&(Global_262283[iVar0 /*2*/]));
			func_20(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_836(198);
		if (func_835(iVar0, Global_40001.f_2EDC, 0))
		{
			func_8(&(Global_262283[iVar0 /*2*/]));
			func_20(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_836(207);
		if (func_835(iVar0, Global_40001.f_2EDC, 0))
		{
			func_8(&(Global_262283[iVar0 /*2*/]));
			func_20(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_836(208);
		if (func_835(iVar0, Global_40001.f_2EDC, 0))
		{
			func_8(&(Global_262283[iVar0 /*2*/]));
			func_20(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_836(209);
		if (func_835(iVar0, Global_40001.f_2EDC, 0))
		{
			func_8(&(Global_262283[iVar0 /*2*/]));
			func_20(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_836(214);
		if (func_835(iVar0, Global_40001.f_2EDC, 0))
		{
			func_8(&(Global_262283[iVar0 /*2*/]));
			func_20(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_836(215);
		if (func_835(iVar0, Global_40001.f_2EDC, 0))
		{
			func_8(&(Global_262283[iVar0 /*2*/]));
			func_20(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_836(216);
		if (func_835(iVar0, Global_40001.f_2EDC, 0))
		{
			func_8(&(Global_262283[iVar0 /*2*/]));
			func_20(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_836(217);
		if (func_835(iVar0, Global_40001.f_2EDC, 0))
		{
			func_8(&(Global_262283[iVar0 /*2*/]));
			func_20(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_836(218);
		if (func_835(iVar0, Global_40001.f_2EDC, 0))
		{
			func_8(&(Global_262283[iVar0 /*2*/]));
			func_20(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_836(219);
		if (func_835(iVar0, Global_40001.f_2EDC, 0))
		{
			func_8(&(Global_262283[iVar0 /*2*/]));
			func_20(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_836(220);
		if (func_835(iVar0, Global_40001.f_2EDC, 0))
		{
			func_8(&(Global_262283[iVar0 /*2*/]));
			func_20(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_836(221);
		if (func_835(iVar0, Global_40001.f_2EDC, 0))
		{
			func_8(&(Global_262283[iVar0 /*2*/]));
			func_20(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_835(int iParam0, int iParam1, bool bParam2)//Position - 0x23E41
{
	if (bParam2)
	{
		if ((!func_422(unk_0xB5CEFD608600A09F(), 19) && !func_422(unk_0xB5CEFD608600A09F(), 20)) && !func_422(unk_0xB5CEFD608600A09F(), 9))
		{
			return 0;
		}
	}
	if (Global_262283.f_5D[iParam0] == 1 && func_21(&(Global_262283[iParam0 /*2*/])))
	{
		if (func_700(&(Global_262283[iParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_262283.f_5D[iParam0] = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_836(int iParam0)//Position - 0x23EC7
{
	switch (iParam0)
	{
		case 159:
			return 11;
		
		case 157:
			return 12;
		
		case 148:
			return 13;
		
		case 164:
			return 14;
		
		case 142:
			return 15;
		
		case 152:
			return 16;
		
		case 163:
			return 17;
		
		case 155:
			return 18;
		
		case 160:
			return 19;
		
		case 153:
			return 20;
		
		case 162:
			return 21;
		
		case 154:
			return 22;
		
		case 166:
			return 8;
		
		case 170:
			return 9;
		
		case 173:
			return 10;
		
		case 171:
			return 23;
		
		case 172:
			return 24;
		
		case 179:
			return 25;
		
		case 189:
			return 26;
		
		case 193:
			return 27;
		
		case 194:
			return 28;
		
		case 199:
			return 29;
		
		case 201:
			return 30;
		
		case 200:
			return 31;
		
		case 205:
			return 32;
		
		case 210:
			return 33;
		
		case 182:
			return 34;
		
		case 183:
			return 35;
		
		case 185:
			return 36;
		
		case 186:
			return 37;
		
		case 180:
			return 38;
		
		case 195:
			return 39;
		
		case 197:
			return 40;
		
		case 198:
			return 41;
		
		case 207:
			return 42;
		
		case 208:
			return 43;
		
		case 209:
			return 44;
		
		case 211:
			return 45;
		
		case 214:
			return 0;
		
		case 215:
			return 1;
		
		case 216:
			return 2;
		
		case 217:
			return 3;
		
		case 218:
			return 4;
		
		case 219:
			return 5;
		
		case 220:
			return 6;
		
		case 221:
			return 7;
		
		default:
	}
	return -1;
}

void func_837(int iParam0)//Position - 0x240C9
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_57();
	}
	if (iParam0 > 0)
	{
		if (func_131() != func_11())
		{
			Global_262283.f_5D[func_836(iParam0)] = 1;
		}
		iVar0 = func_836(155);
		if (func_835(iVar0, Global_40001.f_2EDC, 0))
		{
			func_8(&(Global_262283[iVar0 /*2*/]));
			func_20(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_836(163);
		if (func_835(iVar0, Global_40001.f_2EDC, 0))
		{
			func_8(&(Global_262283[iVar0 /*2*/]));
			func_20(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_836(160);
		if (func_835(iVar0, Global_40001.f_2EDC, 0))
		{
			func_8(&(Global_262283[iVar0 /*2*/]));
			func_20(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_836(153);
		if (func_835(iVar0, Global_40001.f_2EDC, 0))
		{
			func_8(&(Global_262283[iVar0 /*2*/]));
			func_20(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_836(162);
		if (func_835(iVar0, Global_40001.f_2EDC, 0))
		{
			func_8(&(Global_262283[iVar0 /*2*/]));
			func_20(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_836(154);
		if (func_835(iVar0, Global_40001.f_2EDC, 0))
		{
			func_8(&(Global_262283[iVar0 /*2*/]));
			func_20(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_836(171);
		if (func_835(iVar0, Global_40001.f_2EDC, 0))
		{
			func_8(&(Global_262283[iVar0 /*2*/]));
			func_20(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_836(172);
		if (func_835(iVar0, Global_40001.f_2EDC, 0))
		{
			func_8(&(Global_262283[iVar0 /*2*/]));
			func_20(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_836(199);
		if (func_835(iVar0, Global_40001.f_2EDC, 0))
		{
			func_8(&(Global_262283[iVar0 /*2*/]));
			func_20(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_836(194);
		if (func_835(iVar0, Global_40001.f_2EDC, 0))
		{
			func_8(&(Global_262283[iVar0 /*2*/]));
			func_20(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_836(193);
		if (func_835(iVar0, Global_40001.f_2EDC, 0))
		{
			func_8(&(Global_262283[iVar0 /*2*/]));
			func_20(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_836(210);
		if (func_835(iVar0, Global_40001.f_2EDC, 0))
		{
			func_8(&(Global_262283[iVar0 /*2*/]));
			func_20(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_836(205);
		if (func_835(iVar0, Global_40001.f_2EDC, 0))
		{
			func_8(&(Global_262283[iVar0 /*2*/]));
			func_20(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_836(189);
		if (func_835(iVar0, Global_40001.f_2EDC, 0))
		{
			func_8(&(Global_262283[iVar0 /*2*/]));
			func_20(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_836(211);
		if (func_835(iVar0, Global_40001.f_2EDC, 0))
		{
			func_8(&(Global_262283[iVar0 /*2*/]));
			func_20(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
	}
}

void func_838(int iParam0)//Position - 0x243FA
{
	if (!func_839(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_12F[iParam0 /*3*/], func_840(), 0))
	{
		Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_12F[iParam0 /*3*/] = { func_840() };
	}
	if (!func_839(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_122[iParam0 /*3*/], func_840(), 0))
	{
		Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_122[iParam0 /*3*/] = { func_840() };
	}
}

bool func_839(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x2447C
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

Vector3 func_840()//Position - 0x244C3
{
	vector3 vVar0;
	
	return vVar0;
}

void func_841(int iParam0)//Position - 0x244CF
{
	if (!func_839(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_91[iParam0 /*3*/], func_840(), 0))
	{
		Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_91[iParam0 /*3*/] = { func_840() };
	}
	if (!func_839(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_78[iParam0 /*3*/], func_840(), 0))
	{
		Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_78[iParam0 /*3*/] = { func_840() };
	}
}

void func_842()//Position - 0x2454D
{
	struct<20> Var0;
	
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Global_1803FC = { Var0 };
	Global_1803FC.f_D = func_11();
	if (unk_0xFA30DFD0084E92FE(Global_1801DE, 3))
	{
		unk_0x7CB6FD92BE491AD9(&Global_1801DE, 3);
	}
}

void func_843(bool bParam0)//Position - 0x245A7
{
	if (bParam0)
	{
		if (!func_597(unk_0xB5CEFD608600A09F(), 14))
		{
			func_845(14);
		}
	}
	else if (func_597(unk_0xB5CEFD608600A09F(), 14))
	{
		func_844(14);
	}
}

void func_844(int iParam0)//Position - 0x245DE
{
	unk_0x7CB6FD92BE491AD9(&(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_5), iParam0);
}

void func_845(int iParam0)//Position - 0x245FB
{
	unk_0xF0059F27F7BB6680(&(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_5), iParam0);
}

void func_846(int iParam0)//Position - 0x24618
{
	if (func_114(unk_0xB5CEFD608600A09F()))
	{
		if (unk_0xB5CEFD608600A09F() != iParam0)
		{
			if (Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_1BB != iParam0)
			{
				Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_1BB = iParam0;
				if (iParam0 != func_11())
				{
				}
			}
		}
	}
}

int func_847(int iParam0)//Position - 0x24667
{
	if (func_848(iParam0, 0))
	{
		return Global_18C80F[iParam0 /*558*/].f_B.f_20;
	}
	return -1;
}

int func_848(int iParam0, int iParam1)//Position - 0x2468A
{
	if (Global_18C80F[iParam0 /*558*/].f_B.f_20 != -1 || (iParam1 && Global_18C80F[iParam0 /*558*/].f_B.f_21 != -1))
	{
		return 1;
	}
	return 0;
}

void func_849(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x246C5
{
	int iVar0;
	
	if (func_281(iParam0, iParam1) && func_866(iParam0, iParam1))
	{
		iVar0 = func_280(iParam0, iParam1);
		func_853(iVar0, bParam2, bParam3);
		func_850(iVar0, 1);
	}
}

void func_850(int iParam0, bool bParam1)//Position - 0x24700
{
	if (!func_852(iParam0))
	{
		return;
	}
	func_267(func_851(iParam0), bParam1, -1, 1);
	Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_111.f_A8[iParam0 /*12*/].f_6 = bParam1;
}

int func_851(int iParam0)//Position - 0x2473C
{
	switch (iParam0)
	{
		case 0:
			return 7628;
		
		case 1:
			return 7629;
		
		case 2:
			return 7630;
		
		case 3:
			return 7631;
		
		case 4:
			return 7632;
		
		case 5:
			return 15373;
		
		default:
	}
	return 7628;
}

bool func_852(int iParam0)//Position - 0x24796
{
	return (iParam0 >= 0 && iParam0 < 6);
}

void func_853(int iParam0, bool bParam1, bool bParam2)//Position - 0x247AB
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	bVar1 = false;
	iVar2 = func_545(unk_0xB5CEFD608600A09F(), iParam0);
	if (!bParam1)
	{
		func_865(iParam0, 0, bParam2);
	}
	if (bParam1)
	{
		iVar0 = Global_262209[iParam0];
		iVar0 = func_864(iParam0, bParam2);
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		if (!bParam2)
		{
			Global_196FC7 = -1;
		}
		func_863(iParam0, 0, bParam2);
	}
	else if (func_861(iParam0, bParam2))
	{
		iVar0 = func_860(iVar2, 0);
		iVar3 = func_401(unk_0xB5CEFD608600A09F(), iVar2);
		iVar4 = func_859(iVar2, bParam2);
		iVar5 = func_860(iVar2, bParam2);
		fVar6 = (SYSTEM::TO_FLOAT(iVar5) / SYSTEM::TO_FLOAT(iVar4));
		iVar0 = (iVar0 - SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) * fVar6)));
		if (iVar0 <= 0)
		{
			iVar0 = iVar5;
		}
		if (func_858(iVar2) && func_857(unk_0xB5CEFD608600A09F(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
		func_865(iParam0, iVar0, bParam2);
	}
	else
	{
		if (func_856(unk_0xB5CEFD608600A09F(), iVar2) > 0)
		{
			func_855(iParam0, (Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_111.f_A8[iParam0 /*12*/].f_2 - (func_859(iVar2, bParam2) / 2)));
		}
		iVar0 = (func_860(iVar2, bParam2) / func_856(unk_0xB5CEFD608600A09F(), iVar2) + 1);
	}
	if (!bVar1)
	{
		if (func_858(iVar2) && func_857(unk_0xB5CEFD608600A09F(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
	}
	func_854(unk_0xB5CEFD608600A09F(), iVar2, iVar0, bParam2);
}

void func_854(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x2491C
{
	int iVar0;
	
	if (iParam0 == func_11())
	{
		return;
	}
	if (func_274(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_18402B[iParam0 /*770*/].f_111.f_A8[iVar0 /*12*/] == iParam1)
			{
				if (bParam3)
				{
					Global_18402B[iParam0 /*770*/].f_111.f_F2 = iParam2;
				}
				else
				{
					Global_18402B[iParam0 /*770*/].f_111.f_A8[iVar0 /*12*/].f_9 = iParam2;
				}
			}
			iVar0++;
		}
	}
}

void func_855(int iParam0, int iParam1)//Position - 0x24990
{
	if (iParam0 != -1 && iParam1 != Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_111.f_A8[iParam0 /*12*/].f_2)
	{
		Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_111.f_A8[iParam0 /*12*/].f_2 = iParam1;
	}
}

int func_856(int iParam0, int iParam1)//Position - 0x249D5
{
	int iVar0;
	
	if (iParam0 == func_11())
	{
		return 0;
	}
	if (func_274(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_18402B[iParam0 /*770*/].f_111.f_A8[iVar0 /*12*/] == iParam1)
			{
				return Global_18402B[iParam0 /*770*/].f_111.f_A8[iVar0 /*12*/].f_8;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_857(int iParam0, int iParam1)//Position - 0x24A34
{
	int iVar0;
	
	if (iParam0 == func_11())
	{
		return 0;
	}
	if (func_274(iParam1) && func_858(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_18402B[iParam0 /*770*/].f_111.f_A8[iVar0 /*12*/] == iParam1)
			{
				return Global_18402B[iParam0 /*770*/].f_111.f_A8[iVar0 /*12*/].f_B;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_858(int iParam0)//Position - 0x24A9E
{
	return func_124(iParam0) == 5;
}

int func_859(int iParam0, bool bParam1)//Position - 0x24AAE
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_124(iParam0);
	switch (iVar1)
	{
		case 1:
			uVar0 = Global_40001.f_3FC5;
			if (func_279(unk_0xB5CEFD608600A09F(), iParam0, 0))
			{
				uVar0 = Global_40001.f_3FCA;
			}
			break;
		
		case 3:
			uVar0 = Global_40001.f_3FC4;
			if (func_279(unk_0xB5CEFD608600A09F(), iParam0, 0))
			{
				uVar0 = Global_40001.f_3FC9;
			}
			break;
		
		case 4:
			uVar0 = Global_40001.f_3FC3;
			if (func_279(unk_0xB5CEFD608600A09F(), iParam0, 0))
			{
				uVar0 = Global_40001.f_3FC8;
			}
			break;
		
		case 0:
			uVar0 = Global_40001.f_3FC1;
			if (func_279(unk_0xB5CEFD608600A09F(), iParam0, 0))
			{
				uVar0 = Global_40001.f_3FC6;
			}
			break;
		
		case 2:
			uVar0 = Global_40001.f_3FC2;
			if (func_279(unk_0xB5CEFD608600A09F(), iParam0, 0))
			{
				uVar0 = Global_40001.f_3FC7;
			}
			break;
		
		case 5:
			if (bParam1)
			{
				uVar0 = Global_40001.f_4FDC;
				if (func_279(unk_0xB5CEFD608600A09F(), iParam0, 0))
				{
					uVar0 = Global_40001.f_4FDD;
				}
			}
			else
			{
				uVar0 = Global_40001.f_4FCC;
				if (func_279(unk_0xB5CEFD608600A09F(), iParam0, 0))
				{
					uVar0 = Global_40001.f_4FCD;
				}
			}
			break;
	}
	return uVar0;
}

int func_860(int iParam0, bool bParam1)//Position - 0x24BE5
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_124(iParam0);
	switch (iVar1)
	{
		case 1:
			iVar0 = Global_40001.f_3FB2;
			if (func_279(unk_0xB5CEFD608600A09F(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_40001.f_3FBB);
			}
			if (func_279(unk_0xB5CEFD608600A09F(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_40001.f_3FC0);
			}
			break;
		
		case 3:
			iVar0 = Global_40001.f_3FB3;
			if (func_279(unk_0xB5CEFD608600A09F(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_40001.f_3FBA);
			}
			if (func_279(unk_0xB5CEFD608600A09F(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_40001.f_3FBF);
			}
			break;
		
		case 4:
			iVar0 = Global_40001.f_3FB4;
			if (func_279(unk_0xB5CEFD608600A09F(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_40001.f_3FB9);
			}
			if (func_279(unk_0xB5CEFD608600A09F(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_40001.f_3FBE);
			}
			break;
		
		case 0:
			iVar0 = Global_40001.f_3FB5;
			if (func_279(unk_0xB5CEFD608600A09F(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_40001.f_3FB7);
			}
			if (func_279(unk_0xB5CEFD608600A09F(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_40001.f_3FBC);
			}
			break;
		
		case 2:
			iVar0 = Global_40001.f_3FB6;
			if (func_279(unk_0xB5CEFD608600A09F(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_40001.f_3FB8);
			}
			if (func_279(unk_0xB5CEFD608600A09F(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_40001.f_3FBD);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				iVar0 = Global_40001.f_4FD9;
			}
			else
			{
				iVar0 = Global_40001.f_4FC9;
			}
			if (func_279(unk_0xB5CEFD608600A09F(), iParam0, 0))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_40001.f_4FDA);
				}
				else
				{
					iVar0 = (iVar0 - Global_40001.f_4FCA);
				}
			}
			if (func_279(unk_0xB5CEFD608600A09F(), iParam0, 1))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_40001.f_4FDB);
				}
				else
				{
					iVar0 = (iVar0 - Global_40001.f_4FCB);
				}
			}
			if (func_857(unk_0xB5CEFD608600A09F(), iParam0) == 2)
			{
				iVar0 *= 2;
			}
			break;
	}
	return iVar0;
}

bool func_861(int iParam0, bool bParam1)//Position - 0x24DEF
{
	if (bParam1)
	{
		return func_268(15384, -1, -1);
	}
	return func_268(func_862(iParam0), -1, -1);
}

int func_862(int iParam0)//Position - 0x24E14
{
	switch (iParam0)
	{
		case 0:
			return 9416;
		
		case 1:
			return 9417;
		
		case 2:
			return 9418;
		
		case 3:
			return 9419;
		
		case 4:
			return 9420;
		
		case 5:
			return 15372;
		
		default:
	}
	return 9416;
}

void func_863(int iParam0, bool bParam1, bool bParam2)//Position - 0x24E6E
{
	if (bParam2)
	{
		func_267(15384, bParam1, -1, 1);
		return;
	}
	func_267(func_862(iParam0), bParam1, -1, 1);
}

int func_864(int iParam0, bool bParam1)//Position - 0x24E99
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_262209[iParam0];
	iVar1 = func_545(unk_0xB5CEFD608600A09F(), iParam0);
	if (bParam1)
	{
		iVar0 = Global_262210;
	}
	if (func_858(iVar1))
	{
		if (func_857(unk_0xB5CEFD608600A09F(), iVar1) == 2)
		{
			iVar0 *= 2;
		}
	}
	return iVar0;
}

void func_865(int iParam0, int iParam1, bool bParam2)//Position - 0x24EE1
{
	if (bParam2)
	{
		Global_262210 = iParam1;
		return;
	}
	Global_262209[iParam0] = iParam1;
}

int func_866(int iParam0, int iParam1)//Position - 0x24F01
{
	int iVar0;
	
	if (func_281(iParam0, iParam1))
	{
		iVar0 = func_280(iParam0, iParam1);
		if (Global_18402B[iParam0 /*770*/].f_111.f_A8[iVar0 /*12*/].f_4 > 0 && Global_18402B[iParam0 /*770*/].f_111.f_A8[iVar0 /*12*/].f_7)
		{
			return 1;
		}
	}
	return 0;
}

void func_867()//Position - 0x24F55
{
	unk_0x7CB6FD92BE491AD9(&(Global_267214.f_6BD), 28);
	unk_0x7CB6FD92BE491AD9(&(Global_267214.f_6BD), 29);
	func_868(24);
}

void func_868(int iParam0)//Position - 0x24F7D
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x7CB6FD92BE491AD9(&(Global_267214.f_1312.f_7[iVar0]), iVar1);
}

void func_869(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x24FA6
{
	char* sVar0;
	struct<14> Var1;
	struct<17> Var2;
	struct<17> Var3;
	struct<16> Var4;
	struct<17> Var5;
	struct<16> Var6;
	struct<18> Var7;
	struct<18> Var8;
	struct<19> Var9;
	struct<18> Var10;
	
	sVar0 = unk_0x1377080E9B0BD993();
	Var1 = Global_196948;
	Var1.f_1 = Global_196948.f_1;
	Var1.f_2 = Global_196948.f_2;
	Var1.f_3 = Global_196948.f_3;
	Var1.f_4 = Global_196948.f_4;
	Var1.f_5 = Global_196948.f_5;
	Var1.f_6 = Global_196948.f_6;
	Var1.f_7 = Global_196948.f_7;
	Var1.f_8 = Global_196948.f_8;
	Var1.f_9 = Global_196948.f_9;
	Var1.f_A = Global_196948.f_A;
	Var1.f_B = Global_196948.f_B;
	Var1.f_C = Global_196948.f_C;
	Var1.f_D = Global_196948.f_E;
	if (unk_0x7AF0088ABFA713B6())
	{
		if (unk_0x3362CDE8460ED38B(sVar0, "GB_DEATHMATCH"))
		{
			Var2 = { Var1 };
			Var2.f_E = Global_196948.f_F;
			Var2.f_F = Global_196948.f_10;
			Var2.f_10 = Global_196948.f_11;
			unk_0x6899EB66155B3500(&Var2);
		}
		else if (unk_0x3362CDE8460ED38B(sVar0, "GB_YACHT_ROB"))
		{
			Var3 = { Var1 };
			Var3.f_E = Global_196948.f_F;
			Var3.f_F = uParam0;
			Var3.f_10 = iParam1;
			unk_0x536E90877E33B644(&Var3);
		}
		else if (unk_0x3362CDE8460ED38B(sVar0, "GB_HUNT_THE_BOSS"))
		{
			Var4 = { Var1 };
			Var4.f_E = Global_196948.f_F;
			Var4.f_F = uParam0;
			unk_0x3A6ACC2FAB290CDC(&Var4);
		}
		else if (unk_0x3362CDE8460ED38B(sVar0, "GB_SIGHTSEER"))
		{
			Var5 = { Var1 };
			Var5.f_E = Global_196948.f_F;
			Var5.f_F = uParam0;
			Var5.f_10 = iParam1;
			unk_0x4071F63CF95F324E(&Var5);
		}
		else if (unk_0x3362CDE8460ED38B(sVar0, "GB_ASSAULT"))
		{
			Var6 = { Var1 };
			Var6.f_E = Global_196948.f_F;
			Var6.f_F = uParam0;
			unk_0x217787AB4F2FB1E9(&Var6);
		}
		else if (unk_0x3362CDE8460ED38B(sVar0, "GB_BELLYBEAST"))
		{
			Var7 = { Var1 };
			Var7.f_E = Global_196948.f_F;
			Var7.f_F = uParam0;
			Var7.f_10 = iParam1;
			Var7.f_11 = iParam2;
			unk_0x63FAAF4414D8B3D5(&Var7);
		}
		else if (unk_0x3362CDE8460ED38B(sVar0, "GB_HEADHUNTER"))
		{
			Var8 = { Var1 };
			Var8.f_E = uParam0;
			Var8.f_F = iParam1;
			Var8.f_10 = iParam2;
			Var8.f_11 = Global_196948.f_F;
			unk_0xFDDF5012CAC01420(&Var8);
		}
		else if (unk_0x3362CDE8460ED38B(sVar0, "GB_FRAGILE_GOODS"))
		{
			Var9 = { Var1 };
			Var9.f_F = uParam0;
			Var9.f_10 = iParam1;
			Var9.f_11 = iParam2;
			Var9.f_E = iParam3;
			Var9.f_12 = Global_196948.f_F;
			unk_0x26687349CB68A516(&Var9);
		}
		else if (unk_0x3362CDE8460ED38B(sVar0, "GB_AIRFREIGHT"))
		{
			Var10 = { Var1 };
			Var10.f_E = uParam0;
			Var10.f_F = iParam1;
			Var10.f_10 = iParam2;
			Var10.f_11 = Global_196948.f_F;
			unk_0x37D5D670955A5AA7(&Var10);
		}
	}
	func_870();
}

void func_870()//Position - 0x2523E
{
	struct<18> Var0;
	
	Global_196948 = { Var0 };
}

bool func_871(int iParam0)//Position - 0x25252
{
	return unk_0xFA30DFD0084E92FE(Global_1801DE, iParam0);
}

int func_872(struct<21> Param0)//Position - 0x25264
{
	func_906(func_907(Param0), Param0);
	func_876(164, 0);
	unk_0x38A34821FCF0B79E(0);
	func_873(0, -1, 0);
	unk_0x76AE988734CA7760(&Local_132, 22);
	unk_0xE45D6A3FD6454198(&vLocal_133, 97);
	unk_0x6C87EFD58B261C6F(0);
	return 1;
}

int func_873(int iParam0, int iParam1, bool bParam2)//Position - 0x252A5
{
	int iVar0;
	
	iVar0 = unk_0x4796DAD7A8894E2F();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_875();
			}
			else
			{
				return 0;
			}
		}
		if (!func_874())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x7AF0088ABFA713B6())
				{
					if (!bParam2)
					{
						func_875();
					}
					else
					{
						return 0;
					}
				}
				if (func_819())
				{
					if (!bParam2)
					{
						func_875();
					}
					else
					{
						return 0;
					}
				}
				if (func_817(155))
				{
					if (!bParam2)
					{
						func_875();
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
					func_875();
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
				func_875();
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
			func_875();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_874()//Position - 0x253BA
{
	return Global_14083F;
}

void func_875()//Position - 0x253C6
{
	unk_0x95E4B6F3ED223F5A();
}

void func_876(int iParam0, int iParam1)//Position - 0x253D2
{
	func_905();
	if (func_578(unk_0xB5CEFD608600A09F()))
	{
		func_878(1);
	}
	if ((iParam0 != 0 && unk_0x96B1061E8F3CBC9A(iParam1)) && func_652(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				unk_0xF0059F27F7BB6680(&Global_19693A, 0);
				break;
			}
	}
	if (!func_113() && !func_229(unk_0xB5CEFD608600A09F(), 1))
	{
		if (func_73())
		{
			func_773(3);
		}
	}
	func_773(4);
	if (func_129(0))
	{
		Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_39 = func_131();
	}
	if (func_47(iParam0))
	{
		func_399();
		Global_19695A.f_12 = func_379(func_29());
	}
	else if (func_55(func_847(unk_0xB5CEFD608600A09F())))
	{
		func_397();
		Global_196990.f_12 = func_379(func_29());
	}
	func_877();
}

void func_877()//Position - 0x254AE
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_14A4EA.f_215[iVar0 /*42*/].f_1 = func_11();
		Global_14A4EA.f_215[iVar0 /*42*/].f_9 = 0;
		iVar0++;
	}
}

void func_878(bool bParam0)//Position - 0x254E8
{
	int iVar0;
	
	func_868(33);
	func_868(34);
	func_868(35);
	func_868(36);
	func_868(37);
	func_868(38);
	func_868(39);
	func_868(40);
	func_868(43);
	func_868(41);
	func_868(54);
	func_868(42);
	func_868(47);
	func_904(23);
	func_904(24);
	func_868(92);
	unk_0x7CB6FD92BE491AD9(&(Global_267214.f_6BD), 2);
	func_903();
	func_898();
	func_893();
	func_888();
	func_880();
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_267214.f_1312.f_E[iVar0] = 0;
			iVar0++;
		}
	}
	else if (func_879(3))
	{
		func_904(3);
	}
	else if (func_879(4))
	{
		func_904(4);
	}
	else if (func_879(5))
	{
		func_904(5);
	}
	else if (func_879(6))
	{
		func_904(6);
	}
	else if (func_879(7))
	{
		func_904(7);
	}
	else if (((((((((((((((((func_879(0) || func_879(1)) || func_879(2)) || func_879(8)) || func_879(9)) || func_879(10)) || func_879(11)) || func_879(12)) || func_879(13)) || func_879(14)) || func_879(15)) || func_879(16)) || func_879(17)) || func_879(18)) || func_879(19)) || func_879(20)) || func_879(21)) || func_879(22))
	{
		func_904(8);
		func_904(0);
		func_904(1);
		func_904(2);
		func_904(9);
		func_904(10);
		func_904(11);
		func_904(12);
		func_904(13);
		func_904(14);
		func_904(15);
		func_904(16);
		func_904(17);
		func_904(18);
		func_904(19);
		func_904(20);
		func_904(21);
		func_904(22);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_267214.f_1312.f_E[iVar0] = 0;
			iVar0++;
		}
	}
}

bool func_879(int iParam0)//Position - 0x25746
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xFA30DFD0084E92FE(Global_267214.f_1312.f_E[iVar0], iVar1);
}

void func_880()//Position - 0x2576F
{
	int iVar0;
	
	if (func_887())
	{
		func_886(8);
		func_886(9);
		func_886(10);
		func_886(12);
		func_886(13);
		func_886(14);
		func_886(19);
		func_886(20);
		func_886(21);
		func_886(22);
		func_886(23);
		func_886(24);
		func_886(25);
		func_886(26);
		func_886(15);
		func_886(16);
		func_886(17);
		func_886(18);
		func_886(35);
		func_886(45);
		func_886(46);
		if (func_885(11))
		{
			func_886(11);
			iVar0 = func_28(7222, -1, 0);
			unk_0xF0059F27F7BB6680(&iVar0, 2);
			func_25(7222, iVar0, -1, 1, 0);
		}
	}
	if (func_885(48))
	{
		if (func_884(151, 3))
		{
			func_883(151, 3);
		}
		func_886(48);
	}
	if (func_885(49))
	{
		if (func_884(152, 3))
		{
			func_883(152, 3);
		}
		func_886(49);
	}
	if (func_885(50))
	{
		if (func_884(153, 3))
		{
			func_883(153, 3);
		}
		func_886(50);
	}
	if (func_885(51))
	{
		if (func_884(func_881(), 3))
		{
			func_883(func_881(), 3);
		}
		func_886(51);
	}
}

int func_881()//Position - 0x258B9
{
	if (func_882())
	{
		Global_19B04.f_6D75[154 /*29*/].f_18[Global_389D] = 1;
	}
	return 154;
}

int func_882()//Position - 0x258DD
{
	int iVar0;
	
	iVar0 = func_85(unk_0xB5CEFD608600A09F());
	if (((iVar0 != unk_0xB5CEFD608600A09F() && iVar0 != func_11()) && unk_0x96B1061E8F3CBC9A(iVar0)) && iVar0 != -1)
	{
		return 1;
	}
	return 0;
}

void func_883(int iParam0, int iParam1)//Position - 0x2591E
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

int func_884(int iParam0, int iParam1)//Position - 0x25961
{
	if (Global_19B04.f_6D75[iParam0 /*29*/].f_C[iParam1] == 1)
	{
		return 1;
	}
	return 0;
}

bool func_885(int iParam0)//Position - 0x25986
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xFA30DFD0084E92FE(Global_267214.f_1312.f_1A[iVar0], iVar1);
}

void func_886(int iParam0)//Position - 0x259AF
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x7CB6FD92BE491AD9(&(Global_267214.f_1312.f_1A[iVar0]), iVar1);
}

int func_887()//Position - 0x259D8
{
	if (((((((((((((((((((((func_885(8) || func_885(9)) || func_885(10)) || func_885(12)) || func_885(11)) || func_885(13)) || func_885(14)) || func_885(19)) || func_885(20)) || func_885(21)) || func_885(22)) || func_885(23)) || func_885(24)) || func_885(25)) || func_885(26)) || func_885(15)) || func_885(16)) || func_885(17)) || func_885(18)) || func_885(35)) || func_885(45)) || func_885(46))
	{
		return 1;
	}
	return 0;
}

void func_888()//Position - 0x25AEA
{
	if (func_892())
	{
		func_891(0);
		func_891(1);
		func_891(2);
		func_891(3);
		func_891(4);
		func_891(5);
		if (func_890(32))
		{
			if (func_884(func_889(), 3))
			{
				func_883(func_889(), 3);
			}
			func_891(32);
		}
	}
}

int func_889()//Position - 0x25B3E
{
	if (func_882())
	{
		Global_19B04.f_6D75[12 /*29*/].f_18[Global_389D] = 1;
	}
	return 12;
}

bool func_890(int iParam0)//Position - 0x25B62
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xFA30DFD0084E92FE(Global_267214.f_1312.f_17[iVar0], iVar1);
}

void func_891(int iParam0)//Position - 0x25B8B
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x7CB6FD92BE491AD9(&(Global_267214.f_1312.f_17[iVar0]), iVar1);
}

int func_892()//Position - 0x25BB4
{
	if ((((func_890(1) || func_890(0)) || func_890(2)) || func_890(4)) || func_890(5))
	{
		return 1;
	}
	return 0;
}

void func_893()//Position - 0x25BF5
{
	if (func_897())
	{
		func_896(0);
		func_896(1);
		func_896(2);
		func_896(3);
		func_896(4);
		func_896(5);
		func_896(6);
		func_896(7);
		if (func_895(8))
		{
			func_896(8);
		}
		if (func_895(15))
		{
			if (func_884(func_894(), 3))
			{
				func_883(func_894(), 3);
			}
			func_896(15);
		}
	}
}

int func_894()//Position - 0x25C62
{
	if (func_882())
	{
		Global_19B04.f_6D75[20 /*29*/].f_18[Global_389D] = 1;
	}
	return 20;
}

bool func_895(int iParam0)//Position - 0x25C86
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xFA30DFD0084E92FE(Global_267214.f_1312.f_15[iVar0], iVar1);
}

void func_896(int iParam0)//Position - 0x25CAF
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x7CB6FD92BE491AD9(&(Global_267214.f_1312.f_15[iVar0]), iVar1);
}

int func_897()//Position - 0x25CD8
{
	if ((((((((func_895(0) || func_895(1)) || func_895(2)) || func_895(3)) || func_895(4)) || func_895(5)) || func_895(6)) || func_895(7)) || func_895(8))
	{
		return 1;
	}
	return 0;
}

void func_898()//Position - 0x25D46
{
	if (func_902())
	{
		func_901(0);
		func_901(1);
		func_901(2);
		func_901(3);
		func_901(4);
		func_901(5);
		func_901(6);
		func_901(7);
		func_901(8);
		func_901(9);
		func_901(10);
		func_901(11);
		func_901(12);
		if (func_900(13))
		{
			if (func_884(func_899(), 3))
			{
				func_883(func_899(), 3);
			}
			func_901(13);
		}
	}
}

int func_899()//Position - 0x25DC2
{
	if (func_882())
	{
		Global_19B04.f_6D75[76 /*29*/].f_18[Global_389D] = 1;
	}
	return 76;
}

bool func_900(int iParam0)//Position - 0x25DE6
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xFA30DFD0084E92FE(Global_267214.f_1312.f_13[iVar0], iVar1);
}

void func_901(int iParam0)//Position - 0x25E0F
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x7CB6FD92BE491AD9(&(Global_267214.f_1312.f_13[iVar0]), iVar1);
}

int func_902()//Position - 0x25E38
{
	if ((((((((((((func_900(0) || func_900(1)) || func_900(2)) || func_900(3)) || func_900(4)) || func_900(5)) || func_900(6)) || func_900(7)) || func_900(8)) || func_900(9)) || func_900(10)) || func_900(11)) || func_900(12))
	{
		return 1;
	}
	return 0;
}

void func_903()//Position - 0x25ED6
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Global_267214.f_1312.f_11[iVar0] = 0;
		iVar0++;
	}
}

void func_904(int iParam0)//Position - 0x25EFE
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x7CB6FD92BE491AD9(&(Global_267214.f_1312.f_E[iVar0]), iVar1);
}

void func_905()//Position - 0x25F27
{
	struct<14> Var0;
	
	Global_196948 = { Var0 };
	Global_196948.f_E = 0;
	Global_196948.f_F = 0;
}

void func_906(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x25F49
{
	if (!unk_0x7AF0088ABFA713B6())
	{
		func_875();
	}
	unk_0xBF463BC3D6FFDE31(iParam0, 0, Param1.f_10);
}

int func_907(int iParam0)//Position - 0x25F68
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

