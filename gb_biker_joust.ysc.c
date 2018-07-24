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
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	var uLocal_107 = -1;
	int iLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	struct<20> Local_114[32];
	vector3 vLocal_115[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	var uLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142[4] = { 0, 0, 0, 0 };
	var uLocal_143[2] = { 0, 0 };
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	struct<8> Local_147 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	struct<8> Local_156 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167[4] = { 0, 0, 0, 0 };
	struct<35> Local_168 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 4, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, -1, -1, 0, 0, 0 } ;
	struct<6> Local_169[32];
	struct<21> Local_170 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	iLocal_105 = Global_40001.f_4504;
	iLocal_136 = unk_0x2F079D1FC5F6CB99();
	if (unk_0x7AF0088ABFA713B6())
	{
		if (func_955(unk_0xB5CEFD608600A09F(), 0, 1))
		{
			if (!func_915(ScriptParam_170))
			{
				func_862(0, 1);
				func_796();
			}
		}
		else
		{
			func_796();
		}
	}
	else
	{
		func_862(0, 1);
		func_796();
	}
	while (true)
	{
		func_795();
		if (func_789(1))
		{
			func_862(0, 1);
			func_796();
		}
		if (func_781())
		{
			func_862(0, 1);
			func_796();
		}
		func_777();
		func_775();
		func_774();
		func_771();
		func_770();
		func_764();
		switch (func_763(unk_0x6BAA0516CC970D99()))
		{
			case 0:
				if (func_762() == 1)
				{
					if (func_754())
					{
						func_753(unk_0x6BAA0516CC970D99(), 1);
					}
				}
				break;
			
			case 1:
				if (func_762() == 1)
				{
					func_50();
				}
				else if (func_762() == 3)
				{
					func_753(unk_0x6BAA0516CC970D99(), 3);
				}
				break;
			
			case 3:
				func_796();
				break;
		}
		if (unk_0x0DE6397A2CB3EF75())
		{
			func_33();
			if (func_32())
			{
				func_862(0, 1);
				func_31(3);
			}
			switch (func_762())
			{
				case 0:
					if (func_28())
					{
						func_31(1);
					}
					break;
				
				case 1:
					func_1();
					break;
				
				case 3:
					func_796();
					break;
				}
		}
	}
}

void func_1()//Position - 0x1D3
{
	switch (func_27())
	{
		case 0:
			func_26(1);
			unk_0x498B26CF846D31E2(&(Local_168.f_21), &(Local_168.f_22));
			break;
		
		case 1:
			if (func_25() == 0)
			{
				func_18();
				if (func_17(6))
				{
					if (func_16())
					{
						func_15(10);
						func_26(2);
					}
					else
					{
						func_14(5);
						func_26(5);
					}
				}
			}
			else
			{
				func_26(5);
			}
			break;
		
		case 2:
			if (func_17(11))
			{
				func_26(3);
			}
			break;
		
		case 3:
			if (func_25() == 0)
			{
				func_6();
				if (!func_5(&(Local_168.f_5)))
				{
					func_4(&(Local_168.f_5), 0, 0);
				}
				else if (func_2(&(Local_168.f_5), func_3(), 0))
				{
					func_14(1);
				}
			}
			else
			{
				func_26(5);
			}
			break;
		
		case 5:
			if (func_17(0))
			{
				func_26(6);
			}
			break;
		
		case 6:
			func_31(3);
			break;
	}
}

int func_2(var uParam0, int iParam1, bool bParam2)//Position - 0x2CE
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_4(uParam0, bParam2, 0);
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

int func_3()//Position - 0x32C
{
	return (1000 * Global_40001.f_44F9);
}

void func_4(var uParam0, bool bParam1, bool bParam2)//Position - 0x33F
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

bool func_5(var uParam0)//Position - 0x384
{
	return uParam0->f_1;
}

void func_6()//Position - 0x390
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
	iVar0 = func_13();
	if (iVar0 == 0)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (!unk_0xFA30DFD0084E92FE(Local_168.f_20, iVar1))
		{
			vVar2 = { func_12(iVar1) };
			if (!func_11(vVar2, 0f, 0f, 0f, 0))
			{
				if (!unk_0x8EA6CABD14F1B89A(Local_168.f_13[iVar1]))
				{
					if (func_8(&(uLocal_167[iVar1]), &(Local_168.f_13[iVar1]), vVar2, 1))
					{
						unk_0xF0059F27F7BB6680(&(Local_168.f_20), iVar1);
						if (!func_5(&uLocal_137))
						{
							func_4(&uLocal_137, 0, 0);
						}
					}
				}
			}
		}
		iVar1++;
	}
	if (func_2(&uLocal_137, 300000, 0))
	{
		iVar1 = 0;
		while (iVar1 < iVar0)
		{
			if (unk_0xFA30DFD0084E92FE(Local_168.f_20, iVar1))
			{
				unk_0x7CB6FD92BE491AD9(&(Local_168.f_20), iVar1);
			}
			iVar1++;
		}
		func_7(&uLocal_137);
	}
}

void func_7(var uParam0)//Position - 0x471
{
	uParam0->f_1 = 0;
}

int func_8(var uParam0, var uParam1, vector3 vParam2, int iParam3)//Position - 0x47E
{
	int iVar0;
	int iVar1;
	
	if (!func_10(vParam2))
	{
		iVar0 = joaat("prop_gun_case_01");
		if (func_9(iVar0))
		{
			iVar1 = 0;
			unk_0xF0059F27F7BB6680(&iVar1, 0);
			unk_0xF0059F27F7BB6680(&iVar1, 1);
			unk_0xF0059F27F7BB6680(&iVar1, 9);
			unk_0xF0059F27F7BB6680(&iVar1, 4);
			*uParam0 = unk_0x050087F9137D09CA(-301062413, vParam2 + Vector(0f, 0f, 0f), iVar1, -1, iVar0, iParam3, 1);
			*uParam1 = unk_0x2448E4C54354F8D6(*uParam0);
			return 1;
		}
	}
	return 0;
}

bool func_9(int iParam0)//Position - 0x4ED
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0xF243B7A14FCFD0F4(iParam0);
	return unk_0xD6513D668481290A(iParam0);
}

int func_10(vector3 vParam0)//Position - 0x50B
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_11(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x535
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

Vector3 func_12(int iParam0)//Position - 0x57C
{
	switch (Local_168.f_1F)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 1378.065f, 3179.572f, 39.5194f;
				
				case 1:
					return 1386.56f, 3147.986f, 39.52f;
				
				case 2:
					return 1396.397f, 3111.702f, 39.5088f;
				
				case 3:
					return 1402.808f, 3087.676f, 39.5129f;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					return -1375.18f, -3033.337f, 12.9448f;
				
				case 1:
					return -1364.817f, -3015.949f, 12.9676f;
				
				case 2:
					return -1305.581f, -3048.433f, 12.9444f;
				
				case 3:
					return -1317.517f, -3067.379f, 12.9444f;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					return 2039.639f, 4749.277f, 40.013f;
				
				case 1:
					return 2028.618f, 4775.398f, 40.3574f;
				
				case 2:
					return 2134.54f, 4826.913f, 40.4972f;
				
				case 3:
					return 1936.858f, 4695.858f, 40.2577f;
				
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_13()//Position - 0x6E1
{
	switch (Local_168.f_1F)
	{
		case 0:
			return 4;
		
		case 1:
			return 4;
		
		case 2:
			return 4;
		
		default:
	}
	return 0;
}

void func_14(int iParam0)//Position - 0x712
{
	if (!unk_0x0DE6397A2CB3EF75())
	{
		return;
	}
	Local_168.f_E = iParam0;
}

void func_15(int iParam0)//Position - 0x72C
{
	if (!unk_0x0DE6397A2CB3EF75())
	{
		return;
	}
	unk_0xF0059F27F7BB6680(&(Local_168.f_1), iParam0);
}

bool func_16()//Position - 0x74A
{
	return (func_17(8) && func_17(9));
}

bool func_17(int iParam0)//Position - 0x763
{
	return unk_0xFA30DFD0084E92FE(Local_168.f_1, iParam0);
}

void func_18()//Position - 0x776
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = func_24();
	if (func_17(4))
	{
		if (!func_17(5))
		{
			if (func_23() - func_22(&(Local_168.f_7), 0, 0)) >= func_21()
			{
				func_7(&(Local_168.f_7));
				func_15(5);
			}
		}
	}
	iVar1 = func_23();
	if (func_17(5))
	{
		iVar1 = func_21();
	}
	if (!func_17(3))
	{
		if (bVar0)
		{
			if (func_5(&(Local_168.f_9)))
			{
				func_7(&(Local_168.f_9));
			}
			if (!func_5(&(Local_168.f_7)))
			{
				func_4(&(Local_168.f_7), 0, 0);
				if (Local_168.f_4 > 0)
				{
					iVar2 = unk_0x863D0D1A37055D36(unk_0xED678C85A82F0AB9(), (-1 * Local_168.f_4));
					func_20(&(Local_168.f_7), iVar2);
					Local_168.f_4 = 0;
				}
			}
			else if (!func_17(6))
			{
				if ((iVar1 - func_22(&(Local_168.f_7), 0, 0)) <= 0)
				{
					func_15(6);
				}
			}
		}
		else
		{
			if (func_17(7))
			{
				if (func_5(&(Local_168.f_7)))
				{
					Local_168.f_4 = func_22(&(Local_168.f_7), 0, 0);
				}
			}
			else
			{
				Local_168.f_4 = 0;
			}
			if (func_5(&(Local_168.f_7)))
			{
				func_7(&(Local_168.f_7));
			}
			if (!func_5(&(Local_168.f_9)))
			{
				func_4(&(Local_168.f_9), 0, 0);
			}
			else
			{
				if (func_2(&(Local_168.f_9), func_19(), 0))
				{
					func_15(3);
					func_14(6);
				}
				if (func_2(&(Local_168.f_9), (func_19() - 30000), 0))
				{
					func_15(3);
					func_14(6);
				}
			}
		}
	}
}

int func_19()//Position - 0x8F1
{
	return 600000;
}

void func_20(var uParam0, int iParam1)//Position - 0x8FD
{
	*uParam0 = iParam1;
	uParam0->f_1 = 1;
}

int func_21()//Position - 0x90F
{
	return 20000;
}

int func_22(var uParam0, bool bParam1, bool bParam2)//Position - 0x91A
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

int func_23()//Position - 0x961
{
	return 180000;
}

var func_24()//Position - 0x96D
{
	return (func_17(8) || func_17(9));
}

int func_25()//Position - 0x987
{
	return Local_168.f_E;
}

void func_26(int iParam0)//Position - 0x994
{
	if (!unk_0x0DE6397A2CB3EF75())
	{
		return;
	}
	Local_168.f_D = iParam0;
}

int func_27()//Position - 0x9AE
{
	return Local_168.f_D;
}

bool func_28()//Position - 0x9BB
{
	if (!func_17(1))
	{
		if (func_30() > -1)
		{
			if (func_30() == 0)
			{
				Local_168.f_1F = 0;
			}
			else if (func_30() == 1)
			{
				Local_168.f_1F = 1;
			}
			else
			{
				Local_168.f_1F = 2;
			}
		}
		else
		{
			Local_168.f_1F = unk_0x491B2241281A03B7(0, 3);
		}
		if (Global_40001.f_44FE)
		{
			if (Local_168.f_1F == 0)
			{
				if (!Global_40001.f_44FF)
				{
					Local_168.f_1F = 1;
				}
				else
				{
					Local_168.f_1F = 2;
				}
			}
		}
		else if (Global_40001.f_44FF)
		{
			if (Local_168.f_1F == 1)
			{
				if (!Global_40001.f_4500)
				{
					Local_168.f_1F = 2;
				}
				else
				{
					Local_168.f_1F = 0;
				}
			}
		}
		else if (Global_40001.f_4500)
		{
			if (Local_168.f_1F == 2)
			{
				if (!Global_40001.f_44FF)
				{
					Local_168.f_1F = 0;
				}
				else
				{
					Local_168.f_1F = 1;
				}
			}
		}
		Local_168.f_F = unk_0xB5CEFD608600A09F();
		Local_168.f_10[0] = unk_0xB5CEFD608600A09F();
		Local_168.f_18[0] = iLocal_105;
		Local_168.f_10[1] = func_29();
		Local_168.f_18[1] = iLocal_105;
		func_15(1);
	}
	return func_17(1);
}

int func_29()//Position - 0xAD6
{
	return -1;
}

int func_30()//Position - 0xADF
{
	return Global_267214.f_1312.f_148;
}

void func_31(int iParam0)//Position - 0xAF1
{
	Local_168 = iParam0;
}

int func_32()//Position - 0xAFE
{
	if (Global_267214.f_1312.f_20)
	{
		Global_267214.f_1312.f_20 = 0;
		return 1;
	}
	return 0;
}

void func_33()//Position - 0xB21
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7[2];
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	bVar2 = true;
	bVar3 = true;
	if (Local_168 != 3)
	{
		iVar0 = 0;
		while (iVar0 < unk_0x81C86888AEA2F49B())
		{
			if (unk_0x05086B70D2CFEA6F(unk_0xCFA8A401AAD7BB5A(iVar0)))
			{
				iVar1 = unk_0xCFA8A401AAD7BB5A(iVar0);
				iVar11 = unk_0x4ED43B67B3F05E0F(unk_0xCFA8A401AAD7BB5A(iVar0));
				if (!func_47(iVar11, 0))
				{
					iVar6++;
					if (func_17(1))
					{
						if (Local_168.f_10[1] == func_29())
						{
							if (func_45(iVar11))
							{
								if (iVar11 != Local_168.f_F)
								{
									Local_168.f_10[1] = iVar11;
								}
							}
						}
					}
					if (!func_17(8))
					{
						if (iVar11 == Local_168.f_10[0])
						{
							if (func_44(iVar1, 1))
							{
								func_15(8);
							}
						}
					}
					else if (iVar11 == Local_168.f_10[0])
					{
						if (!func_44(iVar1, 1))
						{
							func_43(8);
						}
					}
					if (!func_17(9))
					{
						if (iVar11 == Local_168.f_10[1])
						{
							if (func_44(iVar1, 1))
							{
								func_15(9);
							}
						}
					}
					else if (iVar11 == Local_168.f_10[1])
					{
						if (!func_44(iVar1, 1))
						{
							func_43(9);
						}
					}
					if (func_27() == 1)
					{
						if (func_44(iVar1, 2))
						{
							if (!unk_0xFA30DFD0084E92FE(Local_168.f_2, iVar0))
							{
								iVar5++;
								unk_0xF0059F27F7BB6680(&(Local_168.f_2), iVar0);
							}
							else
							{
								iVar5++;
							}
						}
						else if (unk_0xFA30DFD0084E92FE(Local_168.f_2, iVar0))
						{
							unk_0x7CB6FD92BE491AD9(&(Local_168.f_2), iVar0);
						}
					}
					else if (func_27() == 3)
					{
						if (Local_169[iVar0 /*6*/].f_3 > 0)
						{
							iVar9 = func_34(iVar11);
							iVar7[iVar9] = (iVar7[iVar9] + Local_169[iVar0 /*6*/].f_3);
						}
						if (Local_169[iVar0 /*6*/].f_4 > 0)
						{
							iVar9 = func_34(iVar11);
							iVar10 = (1 - iVar9);
							iVar7[iVar10] = (iVar7[iVar10] + Local_169[iVar0 /*6*/].f_4);
						}
					}
					if (func_27() <= 2)
					{
						if (!bVar4)
						{
							if (func_44(iVar1, 1))
							{
								if (!func_44(iVar1, 7))
								{
									bVar4 = true;
								}
							}
						}
					}
					if (func_45(iVar11))
					{
						bVar3 = false;
						if (func_27() == 1)
						{
							iVar8++;
						}
						else if (func_44(iVar1, 1))
						{
							iVar8++;
						}
					}
					if (!func_44(iVar1, 0))
					{
						bVar2 = false;
					}
				}
			}
			iVar0++;
		}
	}
	if (!func_17(7))
	{
		if (iVar5 > 0)
		{
			func_15(7);
		}
	}
	else if (iVar5 == 0)
	{
		func_43(7);
	}
	if (!func_17(2))
	{
		if (iVar5 > 1)
		{
			func_15(2);
		}
	}
	else if (iVar5 <= 1)
	{
		func_43(2);
	}
	if (!func_17(4))
	{
		if (iVar6 > 1)
		{
			if (iVar6 == iVar5)
			{
				func_15(4);
			}
		}
	}
	if (!func_17(11))
	{
		if (func_27() == 2)
		{
			if (!bVar4)
			{
				func_15(11);
			}
		}
	}
	if (func_27() == 1)
	{
		if (func_25() == 0)
		{
			if (!func_5(&(Local_168.f_B)))
			{
				func_4(&(Local_168.f_B), 0, 0);
			}
			else if (func_2(&(Local_168.f_B), 10000, 0))
			{
				if (iVar8 < 2)
				{
					func_14(5);
				}
			}
		}
	}
	else if (func_27() == 3)
	{
		if (func_25() == 0)
		{
			iVar14 = iVar7[1];
			iVar13 = (iLocal_105 - iVar14);
			Local_168.f_1B[0] = iVar7[0];
			Local_168.f_1B[1] = iVar7[1];
			if (Local_168.f_18[0] != iVar13)
			{
				iVar12 = 0;
				if (Local_168.f_18[0] < iVar13)
				{
					iVar12 = (iVar13 - Local_168.f_18[0]);
				}
				Local_168.f_18[0] = (iVar13 - iVar12);
			}
			iVar14 = iVar7[0];
			iVar13 = (iLocal_105 - iVar14);
			if (Local_168.f_18[1] != iVar13)
			{
				iVar12 = 0;
				if (Local_168.f_18[1] < iVar13)
				{
					iVar12 = (iVar13 - Local_168.f_18[1]);
				}
				Local_168.f_18[1] = (iVar13 - iVar12);
			}
			if (Local_168.f_1B[0] >= iLocal_105)
			{
				Local_168.f_1E = 0;
			}
			else if (Local_168.f_1B[1] >= iLocal_105)
			{
				Local_168.f_1E = 1;
			}
			if (iVar8 < 2)
			{
				func_14(5);
			}
		}
		else if (func_25() == 1)
		{
			if (Local_168.f_1E == -1)
			{
				if (Local_168.f_1B[0] == Local_168.f_1B[1])
				{
					Local_168.f_1E = 99;
				}
				else if (Local_168.f_1B[0] > Local_168.f_1B[1])
				{
					Local_168.f_1E = 0;
				}
				else
				{
					Local_168.f_1E = 1;
				}
			}
		}
	}
	if (bVar2)
	{
		if (!func_17(0))
		{
			func_15(0);
		}
	}
	else if (func_17(0))
	{
		func_43(0);
	}
	if (Local_168.f_3 != iVar5)
	{
		Local_168.f_3 = iVar5;
	}
	if (func_25() == 0)
	{
		if (bVar3)
		{
			func_14(2);
		}
		if (Local_168.f_1E != -1)
		{
			func_14(4);
		}
	}
}

int func_34(int iParam0)//Position - 0xFBA
{
	if (func_37(iParam0) || func_35(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_35(int iParam0)//Position - 0xFDC
{
	return func_36() == iParam0;
}

int func_36()//Position - 0xFEB
{
	return Local_168.f_F;
}

int func_37(int iParam0)//Position - 0xFF8
{
	return func_38(iParam0, func_36(), 0);
}

int func_38(int iParam0, int iParam1, bool bParam2)//Position - 0x100B
{
	return func_39(iParam0, iParam1, bParam2, 1);
}

int func_39(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x101E
{
	if (iParam1 != func_29() && iParam0 != func_29())
	{
		if (!bParam2)
		{
			if (func_42(iParam0, iParam1, iParam3))
			{
				return 0;
			}
		}
		if (Global_18C80F[iParam0 /*558*/].f_B != func_29())
		{
			if (iParam1 == Global_18C80F[iParam0 /*558*/].f_B)
			{
				return func_40(iParam1, iParam3);
			}
		}
	}
	return 0;
}

int func_40(int iParam0, int iParam1)//Position - 0x1081
{
	if (func_41(iParam0))
	{
		return Global_18C80F[iParam0 /*558*/].f_B.f_199 == iParam1;
	}
	return 0;
}

int func_41(int iParam0)//Position - 0x10A7
{
	if (iParam0 != func_29())
	{
		if (Global_18C80F[iParam0 /*558*/].f_B != func_29())
		{
			return Global_18C80F[iParam0 /*558*/].f_B == iParam0;
		}
	}
	return 0;
}

int func_42(int iParam0, int iParam1, int iParam2)//Position - 0x10DC
{
	if (iParam1 != func_29())
	{
		if (iParam0 != func_29())
		{
			if (Global_18C80F[iParam0 /*558*/].f_B != func_29())
			{
				if (Global_18C80F[iParam0 /*558*/].f_B == iParam0)
				{
					if (Global_18C80F[iParam0 /*558*/].f_B.f_199 == iParam2)
					{
						return iParam1 == iParam0;
					}
				}
			}
		}
	}
	return 0;
}

void func_43(int iParam0)//Position - 0x1134
{
	unk_0x7CB6FD92BE491AD9(&(Local_168.f_1), iParam0);
}

bool func_44(int iParam0, int iParam1)//Position - 0x1147
{
	return unk_0xFA30DFD0084E92FE(Local_169[iParam0 /*6*/].f_1, iParam1);
}

bool func_45(int iParam0)//Position - 0x115E
{
	return func_46(iParam0, 1);
}

int func_46(int iParam0, int iParam1)//Position - 0x116D
{
	if (iParam0 != func_29())
	{
		if (Global_18C80F[iParam0 /*558*/].f_B != func_29())
		{
			if (Global_18C80F[iParam0 /*558*/].f_B == iParam0 && Global_18C80F[iParam0 /*558*/].f_B.f_199 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_47(int iParam0, int iParam1)//Position - 0x11BC
{
	bool bVar0;
	
	if (iParam0 == unk_0xB5CEFD608600A09F())
	{
		bVar0 = func_48(-1, 0) == 8;
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

int func_48(int iParam0, bool bParam1)//Position - 0x1207
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_49();
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

int func_49()//Position - 0x1248
{
	return Global_1407E0;
}

void func_50()//Position - 0x1254
{
	if (iLocal_132 > -1)
	{
		if ((!func_748() && !func_747()) && !func_746(179))
		{
			if (func_717(1, 1, 1))
			{
				switch (Local_169[iLocal_132 /*6*/].f_5)
				{
					case 0:
						if (!func_716(2))
						{
							func_695(179, 1, -1, 0);
							iLocal_145 = func_694(unk_0xB5CEFD608600A09F());
							StringCopy(&Local_147, func_693(), 64);
							func_692(2);
						}
						if (!func_716(4))
						{
							func_611(-1, 0, 0, -1, 0, 0);
							func_692(4);
						}
						if (Local_168.f_D > 0)
						{
							if (Local_168.f_D > 1)
							{
								Local_169[iLocal_132 /*6*/].f_5 = 4;
							}
							else
							{
								Local_169[iLocal_132 /*6*/].f_5 = Local_168.f_D;
							}
						}
						break;
					
					case 1:
						func_569();
						func_568();
						func_545();
						func_528();
						if (Local_168.f_D != 1)
						{
							if (func_44(unk_0xF0BF4763784095DA(), 1))
							{
								func_519(1);
								Local_169[iLocal_132 /*6*/].f_5 = Local_168.f_D;
							}
							else
							{
								func_512();
								Local_169[iLocal_132 /*6*/].f_5 = 4;
							}
						}
						break;
					
					case 2:
						func_569();
						func_511();
						unk_0xBBC4195AD74D153D(0, 140, 1);
						unk_0xBBC4195AD74D153D(0, 141, 1);
						unk_0xBBC4195AD74D153D(0, 142, 1);
						unk_0xBBC4195AD74D153D(0, 143, 1);
						unk_0xBBC4195AD74D153D(0, 24, 1);
						unk_0xBBC4195AD74D153D(0, 345, 1);
						unk_0xBBC4195AD74D153D(0, 346, 1);
						unk_0xBBC4195AD74D153D(0, 347, 1);
						if (func_44(unk_0xF0BF4763784095DA(), 1) || func_44(unk_0xF0BF4763784095DA(), 2))
						{
							if (!func_44(unk_0xF0BF4763784095DA(), 6))
							{
								func_510(1);
							}
							func_528();
						}
						func_505();
						if (Local_168.f_D != 2)
						{
							func_504(&iLocal_108);
							Local_169[iLocal_132 /*6*/].f_5 = Local_168.f_D;
						}
						break;
					
					case 3:
						if (func_5(&(Local_168.f_5)))
						{
							func_497((func_3() - func_22(&(Local_168.f_5), 0, 0)), func_25() != 0, &iLocal_106, -1);
						}
						if (!func_716(3))
						{
							if (func_2(&(Local_168.f_5), 10000, 0))
							{
								func_496();
								func_692(3);
							}
						}
						if (func_25() == 0)
						{
							func_569();
							func_495();
							func_494();
							func_493();
							if (func_492())
							{
								if (Local_169[iLocal_132 /*6*/].f_5 == 3)
								{
									func_491();
								}
							}
							if (iLocal_132 > -1)
							{
								if (iLocal_132 == unk_0x6BAA0516CC970D99())
								{
									func_505();
									func_372(&(Global_14A4EA.f_215), &Global_14A4EA, 27, &(Global_14A4EA.f_1), &(Global_14A4EA.f_74), -1, 0, 0);
								}
							}
						}
						if (Local_168.f_D != 3)
						{
							Local_169[iLocal_132 /*6*/].f_5 = Local_168.f_D;
						}
						break;
					
					case 4:
						if (Local_168.f_D > 4)
						{
							Local_169[iLocal_132 /*6*/].f_5 = Local_168.f_D;
						}
						break;
					
					case 5:
						func_512();
						func_81();
						break;
					
					case 6:
						break;
				}
			}
			else
			{
				func_51();
			}
		}
		else
		{
			func_51();
		}
	}
}

void func_51()//Position - 0x152B
{
	int iVar0;
	
	if (!func_716(5))
	{
		func_512();
		if (unk_0x7AF0088ABFA713B6())
		{
			if (func_44(unk_0xF0BF4763784095DA(), 4))
			{
				func_80(4);
				func_78(1);
				unk_0x0130A557FECA322C(unk_0xBC25C936A095B5BA(), 1);
			}
		}
		if (unk_0x2DA8CA50A72528FB(iLocal_140))
		{
			unk_0x07B8ECB35A4ED3AC(&iLocal_140);
		}
		if (unk_0x2DA8CA50A72528FB(iLocal_139))
		{
			unk_0x07B8ECB35A4ED3AC(&iLocal_139);
		}
		if (unk_0x2DA8CA50A72528FB(iLocal_141))
		{
			unk_0x07B8ECB35A4ED3AC(&iLocal_141);
		}
		iVar0 = 0;
		while (iVar0 < func_13())
		{
			if (unk_0x2DA8CA50A72528FB(iLocal_142[iVar0]))
			{
				unk_0x07B8ECB35A4ED3AC(&(iLocal_142[iVar0]));
			}
			iVar0++;
		}
		func_69();
		func_67();
		func_66();
		func_54(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
		func_504(&iLocal_108);
		func_52();
		func_692(5);
	}
}

void func_52()//Position - 0x160A
{
	func_53(0, 0);
}

void func_53(int iParam0, int iParam1)//Position - 0x1618
{
	Global_24B2CE.f_16 = iParam0;
	Global_24B2CE.f_17 = iParam1;
}

void func_54(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x1630
{
	if (bParam0)
	{
		if (func_65())
		{
			func_64();
		}
		Global_24B2CE.f_2BE.f_203 = unk_0x8A55B15F4133C912();
		Global_24B2CE.f_2BE.f_1F8 = iParam1;
		Global_24B2CE.f_2BE.f_1F9 = iParam2;
		Global_24B2CE.f_2BE.f_1FA = iParam10;
		func_67();
		func_58(8, 0, 0, 0, 0);
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
		func_55();
	}
}

void func_55()//Position - 0x16F7
{
	if (func_65() && !func_57())
	{
		func_64();
	}
	if (func_57())
	{
		func_56();
	}
	else
	{
		func_67();
		func_58(0, 0, 0, 0, 0);
		Global_24B2CE.f_6C7 = 0;
		Global_24B2CE.f_6C6 = 0;
	}
}

void func_56()//Position - 0x173F
{
	unk_0x38AAB0A4B0E2C9F3(&(Global_24B2CE.f_2BE), &(Global_24B2CE.f_4C2), 516);
	Global_24B2CE.f_1E3 = { Global_24B2CE.f_1E9 };
	if (unk_0x8A55B15F4133C912() == Global_24B2CE.f_2BE.f_203)
	{
		Global_24B2CE.f_6C6 = 0;
	}
}

int func_57()//Position - 0x1787
{
	if ((Global_24B2CE.f_6C6 && !unk_0x8A55B15F4133C912() == Global_24B2CE.f_4C2.f_203) && unk_0x3C406FC829C1E14A(Global_24B2CE.f_4C2.f_203))
	{
		return 1;
	}
	return 0;
}

void func_58(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x17C6
{
	if (Global_252E21.f_760.f_2B2.f_10 != func_29())
	{
		if (unk_0xFA30DFD0084E92FE(Global_24FB5C[Global_252E21.f_760.f_2B2.f_10 /*406*/].f_18C, 0) && func_59())
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

int func_59()//Position - 0x1865
{
	if (((func_62(unk_0xB5CEFD608600A09F()) == 229 || func_62(unk_0xB5CEFD608600A09F()) == 191) || func_61()) || func_60())
	{
		return 0;
	}
	return 1;
}

var func_60()//Position - 0x18A5
{
	return Global_1805CE;
}

int func_61()//Position - 0x18B1
{
	if (Global_440000 == 6)
	{
		return 1;
	}
	return 0;
}

int func_62(int iParam0)//Position - 0x18C6
{
	if (func_63(iParam0, 0))
	{
		return Global_18C80F[iParam0 /*558*/].f_B.f_21;
	}
	return -1;
}

int func_63(int iParam0, int iParam1)//Position - 0x18E9
{
	if (Global_18C80F[iParam0 /*558*/].f_B.f_21 != -1 || (iParam1 && Global_18C80F[iParam0 /*558*/].f_B.f_20 != -1))
	{
		return 1;
	}
	return 0;
}

void func_64()//Position - 0x1924
{
	if (func_57())
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

int func_65()//Position - 0x1992
{
	if ((Global_24B2CE.f_6C7 && !unk_0x8A55B15F4133C912() == Global_24B2CE.f_2BE.f_203) && unk_0x3C406FC829C1E14A(Global_24B2CE.f_2BE.f_203))
	{
		return 1;
	}
	return 0;
}

void func_66()//Position - 0x19D1
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 101)
	{
		Global_24B2CE.f_6C9[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
	Global_24B2CE.f_6C8 = 0;
}

void func_67()//Position - 0x1A05
{
	if (func_65() && !func_57())
	{
		func_64();
	}
	func_68();
	Global_24B2CE.f_2BE = 0;
}

void func_68()//Position - 0x1A2E
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

void func_69()//Position - 0x1A69
{
	int iVar0;
	int iVar1;
	
	if (!func_716(8))
	{
		func_692(8);
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = unk_0x3171C34AB3FE6F2E(iVar0);
			if (unk_0x96B1061E8F3CBC9A(iVar1))
			{
				if (iVar1 != unk_0xB5CEFD608600A09F())
				{
					if (unk_0xFA30DFD0084E92FE(iLocal_133, iVar0))
					{
						func_76(iVar1, 432, 0, 0);
						func_70(iVar1, func_75(iLocal_146), 0, 0);
					}
				}
			}
			iVar0++;
		}
	}
}

void func_70(int iParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0x1AD4
{
	var uVar0;
	
	if (func_72(iParam0))
	{
		return;
	}
	if (func_71(&(Global_24DCC0.f_266[iParam0]), &(Global_24DCC0.f_3D1[iParam0]), &(Global_24DCC0.f_182), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_24DCC0.f_1C1[iParam0] = uParam1;
		}
	}
}

int func_71(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, var uParam6)//Position - 0x1B26
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

int func_72(int iParam0)//Position - 0x1BEB
{
	if (iParam0 == func_29())
	{
		return 1;
	}
	if (unk_0x56BEECB328B6D29D(unk_0x1377080E9B0BD993()) == func_73())
	{
		return 1;
	}
	return 0;
}

int func_73()//Position - 0x1C14
{
	switch (func_74())
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

int func_74()//Position - 0x1C48
{
	return Global_62BD;
}

int func_75(int iParam0)//Position - 0x1C53
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

void func_76(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x1EBB
{
	bool bVar0;
	
	if (func_72(iParam0))
	{
		return;
	}
	if (func_71(&(Global_24DCC0.f_245[iParam0]), &(Global_24DCC0.f_3B0[iParam0]), &(Global_24DCC0.f_181), bParam2, iParam0, bParam3, &bVar0))
	{
		if (bParam2)
		{
			Global_24DCC0.f_1A0[iParam0] = iParam1;
		}
		if (bVar0)
		{
			func_77();
		}
	}
}

void func_77()//Position - 0x1F16
{
	Global_24DCC0.f_5E4 = 1;
}

void func_78(bool bParam0)//Position - 0x1F26
{
	if (unk_0x7AF0088ABFA713B6())
	{
		if (!func_79())
		{
			if (func_955(unk_0xB5CEFD608600A09F(), 1, 0))
			{
				unk_0x0130A557FECA322C(unk_0xBC25C936A095B5BA(), 1);
				unk_0xC8FD3EBBB90E8D7F(unk_0xBC25C936A095B5BA(), 342, false);
				unk_0xC8FD3EBBB90E8D7F(unk_0xBC25C936A095B5BA(), 122, false);
			}
			unk_0xE8A86792404E8DB8(unk_0xB5CEFD608600A09F(), 1f);
			unk_0x6CF2954DEC49C61F(0);
			unk_0xEF791AEFDDE09A3D(true);
			if (Global_1406A0.f_1 == 0 || Global_1406A0.f_2 == 1)
			{
				Global_1406A0.f_2 = 0;
				if (bParam0)
				{
					unk_0x4D5701941275B494(0, 0);
				}
			}
		}
		else
		{
			if (func_955(unk_0xB5CEFD608600A09F(), 1, 1))
			{
				unk_0x0130A557FECA322C(unk_0xBC25C936A095B5BA(), 0);
				unk_0x8E25082A46F87892(unk_0xBC25C936A095B5BA(), joaat("weapon_unarmed"), true);
				unk_0xC8FD3EBBB90E8D7F(unk_0xBC25C936A095B5BA(), 342, true);
				unk_0xC8FD3EBBB90E8D7F(unk_0xBC25C936A095B5BA(), 122, true);
				unk_0xE8A86792404E8DB8(unk_0xB5CEFD608600A09F(), 0.5f);
				if (Global_1406A0.f_1 == 0 || Global_1406A0.f_2 == 1)
				{
					unk_0x4D5701941275B494(1, 0);
				}
			}
			unk_0x6CF2954DEC49C61F(1);
			unk_0xEF791AEFDDE09A3D(false);
		}
	}
}

bool func_79()//Position - 0x201F
{
	return Global_1406A0;
}

void func_80(int iParam0)//Position - 0x202B
{
	unk_0x7CB6FD92BE491AD9(&(Local_169[unk_0x6BAA0516CC970D99() /*6*/].f_1), iParam0);
}

void func_81()//Position - 0x2044
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<20> Var3;
	int iVar4;
	
	Var3.f_2 = 1065353216;
	Var3.f_3 = 1065353216;
	Var3.f_4 = 1;
	Var3.f_9 = -1;
	Var3.f_12 = -1;
	Var3.f_13 = -1;
	if (!func_716(1))
	{
		if (func_25() != 0)
		{
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				if (func_717(1, 1, 1))
				{
					if (((!func_748() && !func_747()) && !func_746(179)) && func_44(unk_0xF0BF4763784095DA(), 1))
					{
						if (func_370())
						{
							iVar1 = func_34(unk_0xB5CEFD608600A09F());
							iVar2 = Local_168.f_1E;
							switch (func_25())
							{
								case 2:
									unk_0x7456702622C62EA0(1);
									break;
								
								case 3:
									unk_0x7456702622C62EA0(1);
									break;
								
								case 1:
									unk_0x7456702622C62EA0(1);
									if (Local_168.f_1E > -1)
									{
										if (Local_168.f_1E == 99)
										{
											func_368(88, "BK_RUN_OVER", "BIGM_JOUSTDR", &Local_147, iLocal_145, 0, -1, -1, -1, 2, -1);
										}
										else if (iVar1 == iVar2)
										{
											bVar0 = true;
											func_368(87, "GB_WINNER", "BIGM_JOUSTWD", &Local_147, iLocal_145, 0, -1, -1, -1, 2, -1);
										}
										else
										{
											func_368(88, "BK_RUN_OVER", "BIGM_JOUSTLD", &Local_147, iLocal_145, 0, -1, -1, -1, 2, -1);
										}
									}
									else
									{
										func_352(88, "BK_RUN_OVER", "BIGM_JOUSTLT", 1, -1, 2, 1);
									}
									break;
								
								case 5:
									unk_0x7456702622C62EA0(1);
									func_352(88, "BK_RUN_OVER", "BIGM_JOUSTNB", 1, -1, 2, 1);
									break;
								
								case 4:
									unk_0x7456702622C62EA0(1);
									if (iVar1 == iVar2)
									{
										bVar0 = true;
										func_368(87, "GB_WINNER", "BIGM_JOUSTWD", &Local_147, iLocal_145, 0, -1, -1, -1, 2, -1);
									}
									else
									{
										func_368(88, "BK_RUN_OVER", "BIGM_JOUSTLD", &Local_147, iLocal_145, 0, -1, -1, -1, 2, -1);
									}
									break;
								
								case 6:
									func_368(88, "BK_RUN_OVER", "BIGM_JOUSTLD", &Local_147, iLocal_145, 0, -1, -1, -1, 2, -1);
									break;
							}
						}
					}
				}
				iVar4 = unk_0xB5CEFD608600A09F();
				func_350(1, iVar4);
				if (bVar0)
				{
				}
				func_121(179, bVar0, &Var3, 0);
				func_862(bVar0, 0);
				func_51();
				func_692(1);
			}
		}
	}
	if (func_83(&uLocal_116, 1, 0))
	{
		func_82(0);
	}
}

void func_82(int iParam0)//Position - 0x2262
{
	unk_0xF0059F27F7BB6680(&(Local_169[unk_0x6BAA0516CC970D99() /*6*/].f_1), iParam0);
}

int func_83(var uParam0, bool bParam1, int iParam2)//Position - 0x227B
{
	bool bVar0;
	
	func_120(29);
	if ((*uParam0 > 0 && !func_119()) && func_111(unk_0xB5CEFD608600A09F()) != 0)
	{
		if (!func_108())
		{
			func_107();
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_5(&(uParam0->f_3)))
			{
				func_4(&(uParam0->f_3), 0, 0);
			}
			else if (func_2(&(uParam0->f_3), 1000, 0))
			{
				unk_0xF0059F27F7BB6680(&(Global_19693F.f_3), 2);
				if (bParam1)
				{
					unk_0xF0059F27F7BB6680(&(Global_267214.f_11DD), 0);
					func_4(&(uParam0->f_5), 0, 0);
				}
				func_4(&(uParam0->f_1), 0, 0);
				func_106(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_5(&(uParam0->f_5)))
			{
				if (func_2(&(uParam0->f_5), 3000, 0))
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
				func_95(iParam2);
				func_106(uParam0, 2);
			}
			break;
		
		case 2:
			func_95(0);
			if (func_2(&(uParam0->f_1), 15000, 0))
			{
				if (func_84(func_85(0)))
				{
					unk_0x7456702622C62EA0(1);
				}
				func_106(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_2(&(uParam0->f_1), 23500, 0))
			{
				unk_0x7CB6FD92BE491AD9(&(Global_267214.f_11DD), 1);
				unk_0x7CB6FD92BE491AD9(&(Global_19693F.f_3), 2);
				func_106(uParam0, 4);
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

int func_84(char* sParam0)//Position - 0x23F5
{
	unk_0xF07D20149ECBC61E(sParam0);
	return unk_0xA66DBDA0A072514A(0);
}

char* func_85(int iParam0)//Position - 0x2408
{
	if (((func_93(unk_0xB5CEFD608600A09F()) || func_92(unk_0xB5CEFD608600A09F())) || func_89()) || iParam0)
	{
		if (func_92(unk_0xB5CEFD608600A09F()))
		{
			return "BG_LBD_HELP";
		}
		return "BG_LBD_HELPW";
	}
	if (func_86(func_88()))
	{
		return "GB_LBD_HELP";
	}
	return "GB_LBD_HELPW";
}

int func_86(int iParam0)//Position - 0x2466
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
	return func_87(iParam0, 0);
	return 0;
}

int func_87(int iParam0, int iParam1)//Position - 0x24C0
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

int func_88()//Position - 0x2515
{
	return Global_190DD1;
}

bool func_89()//Position - 0x2521
{
	return (func_91() && func_45(func_90()));
}

int func_90()//Position - 0x253A
{
	return Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_23;
}

bool func_91()//Position - 0x2551
{
	return Global_18402B[unk_0xB5CEFD608600A09F() /*770*/] == 148;
}

bool func_92(int iParam0)//Position - 0x2567
{
	return func_87(func_62(iParam0), 0);
}

bool func_93(int iParam0)//Position - 0x257A
{
	return func_94(func_62(iParam0));
}

int func_94(int iParam0)//Position - 0x258C
{
	switch (iParam0)
	{
		case 179:
		case 180:
		case 148:
			if (Global_18402B[unk_0xB5CEFD608600A09F() /*770*/] == 148 && func_46(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_23, 1))
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

void func_95(int iParam0)//Position - 0x266E
{
	if (unk_0xFA30DFD0084E92FE(Global_267214.f_11DD, 0))
	{
		if (((((((((((!unk_0x7382A6B79BD5F585() && !unk_0xFA30DFD0084E92FE(Global_267214.f_310, 2)) && func_955(unk_0xB5CEFD608600A09F(), 1, 1)) && !Global_10AB8) && !Global_CF9C) && !unk_0x17FAADF9916EF741()) && !func_105(unk_0xB5CEFD608600A09F(), 22)) && func_111(unk_0xB5CEFD608600A09F()) != 0) && !func_103(func_104())) && !func_93(unk_0xB5CEFD608600A09F())) && !func_102(func_62(unk_0xB5CEFD608600A09F()))) && !func_101(func_62(unk_0xB5CEFD608600A09F())))
		{
			unk_0xF0059F27F7BB6680(&(Global_267214.f_11DD), 1);
			func_100(func_85(iParam0), -1);
			func_96(1);
			unk_0x7CB6FD92BE491AD9(&(Global_267214.f_11DD), 0);
		}
	}
}

void func_96(int iParam0)//Position - 0x2752
{
	char* sVar0;
	
	sVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_97(1))
	{
		sVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (iParam0 && !func_119())
	{
		unk_0xC4BA30B532FE260F(-1, "Boss_Message_Orange", sVar0, false);
	}
}

bool func_97(bool bParam0)//Position - 0x2786
{
	return func_98(unk_0xB5CEFD608600A09F(), bParam0);
}

bool func_98(int iParam0, bool bParam1)//Position - 0x2798
{
	return func_99(iParam0, bParam1, 1);
}

int func_99(int iParam0, bool bParam1, int iParam2)//Position - 0x27A9
{
	int iVar0;
	
	if (iParam0 == func_29())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_46(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_18C80F[iParam0 /*558*/].f_B;
	if (iVar0 != func_29() && Global_18C80F[iVar0 /*558*/].f_B.f_199 == iParam2)
	{
		return 1;
	}
	return 0;
}

void func_100(char* sParam0, int iParam1)//Position - 0x2805
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 0, false, iParam1);
}

int func_101(int iParam0)//Position - 0x281C
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

int func_102(int iParam0)//Position - 0x2872
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

int func_103(int iParam0)//Position - 0x28C2
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

int func_104()//Position - 0x28E8
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

bool func_105(int iParam0, int iParam1)//Position - 0x2E6F
{
	return unk_0xFA30DFD0084E92FE(Global_18C80F[iParam0 /*558*/].f_B.f_4, iParam1);
}

void func_106(var uParam0, int iParam1)//Position - 0x2E8A
{
	*uParam0 = iParam1;
}

void func_107()//Position - 0x2E97
{
	Global_258664 = 1;
}

int func_108()//Position - 0x2EA4
{
	if (((((((func_62(unk_0xB5CEFD608600A09F()) == 170 || func_62(unk_0xB5CEFD608600A09F()) == 219) || func_62(unk_0xB5CEFD608600A09F()) == 221) || func_62(unk_0xB5CEFD608600A09F()) == 220) || func_62(unk_0xB5CEFD608600A09F()) == 216) || func_62(unk_0xB5CEFD608600A09F()) == 215) || func_62(unk_0xB5CEFD608600A09F()) == 214) || func_62(unk_0xB5CEFD608600A09F()) == 218)
	{
		return 1;
	}
	if (func_109(unk_0xB5CEFD608600A09F()))
	{
		return 1;
	}
	return 0;
}

int func_109(int iParam0)//Position - 0x2F45
{
	if (iParam0 != func_29())
	{
		if (func_955(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1)
			{
				return func_110(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 2;
			}
		}
	}
	return 0;
}

int func_110(int iParam0)//Position - 0x2F8B
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

int func_111(int iParam0)//Position - 0x32D7
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_118(iParam0) && !func_117(iParam0)) && !unk_0xFA30DFD0084E92FE(Global_18C80F[iParam0 /*558*/].f_1, 8));
	bVar2 = func_116(iParam0);
	bVar3 = func_79();
	uVar4 = func_748();
	if ((bVar1 && (func_115(iParam0) || func_114(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (bVar3 || ((!bVar2 && !func_113(iParam0)) && !func_112(iParam0)))
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

bool func_112(int iParam0)//Position - 0x3395
{
	return func_105(iParam0, 19);
}

int func_113(int iParam0)//Position - 0x33A5
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_105(iParam0, 9);
	}
	return 0;
}

int func_114(int iParam0)//Position - 0x33C3
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xFA30DFD0084E92FE(Global_18C80F[iVar0 /*558*/].f_1, 0);
	}
	return 0;
}

int func_115(int iParam0)//Position - 0x33E9
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xFA30DFD0084E92FE(Global_18C80F[iVar0 /*558*/].f_1, 7);
	}
	return 0;
}

bool func_116(int iParam0)//Position - 0x340F
{
	return func_105(iParam0, 20);
}

bool func_117(int iParam0)//Position - 0x341F
{
	return unk_0xFA30DFD0084E92FE(Global_18C80F[iParam0 /*558*/].f_1, 2);
}

int func_118(int iParam0)//Position - 0x3437
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_18C80F[iVar0 /*558*/] != -1;
	}
	return 0;
}

bool func_119()//Position - 0x3458
{
	return Global_252E21.f_A8F[0 /*80*/].f_1 != 0;
}

void func_120(int iParam0)//Position - 0x346E
{
	unk_0xF0059F27F7BB6680(&(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_4), iParam0);
}

void func_121(int iParam0, bool bParam1, var uParam2, bool bParam3)//Position - 0x348B
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
	
	func_348(iParam0, &fVar2, &fVar3);
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
			iVar1 = (iVar1 + func_347(iParam0, uParam2->f_D));
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
			iVar0 = (iVar0 + func_346(iParam0));
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
	if (func_344(iParam0))
	{
		if (bParam1)
		{
			if (func_343(unk_0xB5CEFD608600A09F()) > 0)
			{
				func_342();
			}
			else
			{
				func_341();
			}
		}
		else
		{
			func_340();
		}
	}
	func_324(iParam0, bParam1, uParam2, &iVar0, &iVar4);
	func_322(iParam0, uParam2, &iVar0, &iVar5);
	func_299(iParam0, uParam2, &iVar0, &iVar5);
	func_285(iParam0, uParam2, &iVar0, &iVar5, &iVar7);
	func_268(iParam0, uParam2, &iVar0, &iVar5);
	if (iParam0 == 168)
	{
		Global_267214.f_1312.f_173 = iVar4;
	}
	else
	{
		Global_267214.f_1312.f_173 = iVar5;
	}
	iVar8 = func_90();
	if (iVar8 != func_29() && iParam0 != 148)
	{
		if (func_267(unk_0xB5CEFD608600A09F(), 0))
		{
			if (!func_265(unk_0xB5CEFD608600A09F(), iVar8, 1))
			{
				func_225(&iVar0, 1);
			}
		}
	}
	func_220(iParam0, &iVar9, &iVar10);
	iVar1 = (iVar1 + iVar9);
	iVar0 = (iVar0 + iVar10);
	if (iVar1 > 0)
	{
		Global_196948.f_A = iVar1;
		func_219();
		func_169(0, unk_0xBC25C936A095B5BA(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_196948.f_9 = iVar0;
		iVar13 = func_168();
		if (iVar13 != func_29())
		{
			func_167(iVar13, &uVar11, &uVar12);
		}
		bVar14 = !func_166(1);
		if (iParam0 == 168)
		{
			if (!func_165())
			{
				unk_0xF8ED2CAA140D95A9(iVar0, iVar4);
			}
		}
		else if (iParam0 == 190)
		{
			if (func_164())
			{
				if (!func_165())
				{
					Var15 = { func_163() };
					unk_0x7C78EDD3BFB2E833(iVar0, unk_0x56BEECB328B6D29D(func_162(Var15)), func_161(Var15), iVar5);
				}
			}
			else if (func_165())
			{
				func_152(-856006867, iVar0, &iVar16, 0, 1, 0);
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
			if (func_151())
			{
				if (!func_165())
				{
					unk_0x7C78EDD3BFB2E833(iVar0, unk_0x56BEECB328B6D29D(func_162(func_150(unk_0xB5CEFD608600A09F()))), 5, iVar5);
				}
			}
			else if (func_165())
			{
				func_152(-856006867, iVar0, &iVar17, 0, 1, 0);
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
			if (func_151())
			{
				if (!func_165())
				{
					iVar18 = func_146(uParam2->f_10, iVar5);
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
			else if (func_165())
			{
				func_152(463142405, iVar0, &iVar20, 0, 1, 0);
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
			if (func_165())
			{
				func_152(1407278493, iVar0, &iVar21, 0, 1, 0);
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
			if (func_151())
			{
				if (!func_165())
				{
					unk_0x0B39CF0D53F1C883(iVar0, uParam2->f_14, iVar5);
				}
			}
			else if (func_165())
			{
				func_152(-856006867, iVar0, &iVar22, 0, 1, 0);
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
			if (func_165())
			{
				func_152(-961034881, iVar0, &iVar23, 0, 1, 0);
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
			if (func_165())
			{
				func_152(1135468152, iVar0, &iVar24, 0, 1, 0);
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
			if (func_165())
			{
				func_152(-634726636, iVar0, &iVar25, 0, 1, 0);
				Global_41092C[iVar25 /*80*/].f_8.f_36 = uVar11;
				Global_41092C[iVar25 /*80*/].f_8.f_37 = uVar12;
				Global_41092C[iVar25 /*80*/].f_8.f_38 = bVar14;
			}
			else
			{
				unk_0x1FDA0AA679C9919B(iVar0);
			}
		}
		else if (func_165())
		{
			func_152(-856006867, iVar0, &iVar26, 0, 1, 0);
			Global_41092C[iVar26 /*80*/].f_8.f_36 = uVar11;
			Global_41092C[iVar26 /*80*/].f_8.f_37 = uVar12;
			Global_41092C[iVar26 /*80*/].f_8.f_38 = bVar14;
		}
		else
		{
			unk_0xECDF3A47BBA3F980(uVar11, uVar12, iVar0, bVar14);
		}
		func_145(iParam0, iVar0);
		if (func_144(iParam0))
		{
			if (func_143(iParam0) > -1)
			{
				func_142(func_143(iParam0), iVar0);
			}
		}
		Global_2588F5 = iVar0;
		func_141(&Global_258230, 0, 0);
	}
	if (func_113(unk_0xB5CEFD608600A09F()) || func_116(unk_0xB5CEFD608600A09F()))
	{
		func_130(iParam0);
	}
	if (func_94(iParam0))
	{
		Global_19695A.f_D = iVar0;
		Global_19695A.f_E = iVar1;
	}
	if (func_102(iParam0))
	{
		Global_196990.f_D = iVar0;
		Global_196990.f_E = iVar1;
	}
	if (func_129(iParam0))
	{
		Global_1969CF.f_C = iVar0;
		Global_1969CF.f_D = iVar1;
	}
	if (func_128(iParam0))
	{
		Global_1969FB.f_C = iVar0;
		Global_1969FB.f_D = iVar1;
	}
	if (func_127(iParam0))
	{
		Global_196A31.f_C = iVar0;
		Global_196A31.f_D = iVar1;
	}
	if (func_101(iParam0))
	{
		if (func_126(iParam0))
		{
			Global_196A81.f_C = iVar0;
			Global_196A81.f_D = iVar1;
		}
		else if (func_122(iParam0))
		{
			Global_196AB6.f_C = iVar0;
			Global_196AB6.f_D = iVar1;
		}
	}
}

int func_122(int iParam0)//Position - 0x3C83
{
	if (((((((((iParam0 == 250 || iParam0 == 238) || iParam0 == 242) || iParam0 == 244) || iParam0 == 248) || iParam0 == 241) || iParam0 == 239) || iParam0 == 240) || iParam0 == 249) || (iParam0 == 237 && func_123(func_124(unk_0xB5CEFD608600A09F()))))
	{
		return 1;
	}
	return 0;
}

int func_123(int iParam0)//Position - 0x3D0C
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

int func_124(int iParam0)//Position - 0x3D44
{
	if (func_62(iParam0) == 237 || func_62(iParam0) == 250)
	{
		return func_125(iParam0);
	}
	return -1;
}

int func_125(int iParam0)//Position - 0x3D71
{
	if (func_63(iParam0, 0))
	{
		return Global_18C80F[iParam0 /*558*/].f_B.f_B0;
	}
	return -1;
}

int func_126(int iParam0)//Position - 0x3D94
{
	if (iParam0 == 237)
	{
		return 1;
	}
	return 0;
}

int func_127(int iParam0)//Position - 0x3DA8
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_128(int iParam0)//Position - 0x3DC2
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

int func_129(int iParam0)//Position - 0x3DE2
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

void func_130(int iParam0)//Position - 0x3E08
{
	if (func_140(unk_0xB5CEFD608600A09F()) && func_164())
	{
		if (func_139(iParam0))
		{
			func_133(7948, -1);
		}
		else if (func_132(iParam0))
		{
			func_133(7950, -1);
		}
		else if (func_87(iParam0, 1))
		{
			func_133(7951, -1);
		}
		else if (func_131(iParam0))
		{
			func_133(7952, -1);
		}
	}
}

int func_131(int iParam0)//Position - 0x3E72
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

int func_132(int iParam0)//Position - 0x3E9E
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

void func_133(int iParam0, int iParam1)//Position - 0x3ECA
{
	int iVar0;
	
	iVar0 = func_137(iParam0, func_138(iParam1), 0);
	iVar0++;
	if (!func_136(iParam0))
	{
		func_135(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_134(iParam0, iVar0, iParam1, 1);
	}
}

void func_134(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3F0B
{
	int iVar0;
	
	iVar0 = Global_269BC5[iParam0 /*3*/][func_138(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x3A57956BCE003880(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_14F606[func_138(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_14F60C[func_138(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_14F612[func_138(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_14F618[func_138(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_14F5EE[func_138(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_14F5F4[func_138(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_14F5FA[func_138(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_14F600[func_138(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_14F5D6[func_138(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_14F5DC[func_138(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_14F5E2[func_138(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_14F5E8[func_138(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_14F61E[func_138(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_14F624[func_138(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_14F62A[func_138(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_14F630[func_138(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_14F636[func_138(iParam2)] = iParam1;
			break;
		
		case 7229:
			Global_14F63C[func_138(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_14F642[func_138(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_14F648[func_138(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_270CF3[0 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_270CF3[1 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 2925:
			Global_270CF3[2 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_270CF3[3 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 7818:
			Global_270D5E[func_138(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_14F64E[func_138(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_14F654[func_138(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_14F65A[func_138(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_14F660[func_138(iParam2)] = iParam1;
			break;
		
		case 3049:
			Global_270D27[0 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3050:
			Global_270D27[1 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3051:
			Global_270D27[2 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3052:
			Global_270D27[3 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_270D27[4 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3632:
			Global_270D61[0 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3633:
			Global_270D61[1 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3634:
			Global_270D61[2 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3635:
			Global_270D61[3 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_270D61[4 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_270D71[0 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_270D71[1 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_270D71[2 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_270D71[3 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_270D71[4 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3217:
			Global_270D27[5 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_270CF3[4 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3659:
			Global_270D81[func_138(iParam2)] = iParam1;
			break;
		
		case 3660:
			Global_270D8A[func_138(iParam2)] = iParam1;
			break;
		
		case 3661:
			Global_270D84[func_138(iParam2)] = iParam1;
			break;
		
		case 3662:
			Global_270D8D[func_138(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_270D87[func_138(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_270D90[func_138(iParam2)] = iParam1;
			break;
		
		case 3685:
			Global_270D93[func_138(iParam2)] = iParam1;
			break;
		
		case 3225:
			Global_270D27[6 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3226:
			Global_270CF3[5 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_270D27[7 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3228:
			Global_270CF3[6 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 4015:
			Global_270D27[8 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 4016:
			Global_270CF3[7 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 4018:
			Global_270D27[9 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_270CF3[8 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 4021:
			Global_270D27[10 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_270CF3[9 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 4024:
			Global_270D27[11 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_270CF3[10 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 6105:
			Global_270D27[12 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 6106:
			Global_270CF3[11 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 6163:
			Global_270D27[13 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 6164:
			Global_270CF3[12 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 6541:
			Global_270D27[14 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 6542:
			Global_270CF3[13 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 6554:
			Global_270D27[15 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 6555:
			Global_270CF3[14 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 6557:
			Global_270D27[16 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_270CF3[15 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 6560:
			Global_270D27[17 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_270CF3[16 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_135(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x4790
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_269BC5[iParam0 /*3*/][func_138(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x3A57956BCE003880(iVar0, iParam1, iParam3);
	}
}

int func_136(int iParam0)//Position - 0x47C0
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

int func_137(int iParam0, int iParam1, int iParam2)//Position - 0x49B8
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_269BC5[iParam0 /*3*/][func_138(iParam1)];
	if (unk_0x6CB99B97664C3727(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_138(int iParam0)//Position - 0x49EA
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_49();
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

int func_139(int iParam0)//Position - 0x4A1E
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

bool func_140(int iParam0)//Position - 0x4A74
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_6D, 14);
}

void func_141(var uParam0, bool bParam1, bool bParam2)//Position - 0x4A9A
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

void func_142(int iParam0, int iParam1)//Position - 0x4AD7
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

int func_143(int iParam0)//Position - 0x4B49
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

int func_144(int iParam0)//Position - 0x4C2A
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

void func_145(int iParam0, int iParam1)//Position - 0x4C92
{
	if (func_140(unk_0xB5CEFD608600A09F()) && func_164())
	{
		if (func_139(iParam0) && iParam1 > 0)
		{
			func_135(7949, (func_137(7949, -1, 0) + iParam1), -1, 1, 0);
		}
	}
}

int func_146(int iParam0, int iParam1)//Position - 0x4CD6
{
	float fVar0;
	float fVar1;
	
	fVar0 = func_149(iParam0, iParam1);
	fVar1 = (SYSTEM::TO_FLOAT(func_147(iParam0, iParam1)) * fVar0);
	return SYSTEM::ROUND(fVar1);
}

int func_147(int iParam0, int iParam1)//Position - 0x4CFF
{
	return (func_148(iParam0) * iParam1);
}

int func_148(int iParam0)//Position - 0x4D10
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

float func_149(int iParam0, int iParam1)//Position - 0x4DB0
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

int func_150(int iParam0)//Position - 0x4EC8
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return Global_18402B[iParam0 /*770*/].f_111.f_A8[5 /*12*/];
}

bool func_151()//Position - 0x4EEE
{
	return func_41(unk_0xB5CEFD608600A09F());
}

void func_152(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x4EFE
{
	int iVar0;
	
	if (!func_165())
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
				func_153(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_153(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_153(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x53C4
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_165())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x060D652F887827B8(func_49()) || unk_0xEBA8BD5AE6FF01CA())
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
			*uParam0 = func_160(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1);
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
			func_159(1, iParam4);
			Global_410B51 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_154(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_154(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x5568
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xF0059F27F7BB6680(&(Global_24FB5C[unk_0xB5CEFD608600A09F() /*406*/].f_76.f_47), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_155(iParam0);
	}
}

void func_155(int iParam0)//Position - 0x55A0
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_165())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_158(iParam0))
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
		func_156(&(Global_41092C[iParam0 /*80*/]));
	}
}

void func_156(var uParam0)//Position - 0x55F2
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
	func_157(&(uParam0->f_8.f_3));
	func_157(&(uParam0->f_8.f_10));
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

void func_157(var uParam0)//Position - 0x56EC
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

int func_158(int iParam0)//Position - 0x5734
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_41092C[iParam0 /*80*/].f_5 == 1;
	}
	return 0;
}

void func_159(int iParam0, int iParam1)//Position - 0x575C
{
	Global_25897B = iParam1;
	Global_25897A = iParam0;
}

int func_160(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9)//Position - 0x5770
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_41092C[iVar0 /*80*/].f_2 == 0)
		{
			if (!func_165())
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

int func_161(int iParam0)//Position - 0x5869
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

char* func_162(int iParam0)//Position - 0x59AF
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

struct<2> func_163()//Position - 0x5B91
{
	return Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_BC;
}

bool func_164()//Position - 0x5BAA
{
	return func_45(unk_0xB5CEFD608600A09F());
}

int func_165()//Position - 0x5BBA
{
	if (unk_0x8ACB0C3FACC09467())
	{
		return unk_0xC9D803F7D7E10861();
	}
	return 0;
}

bool func_166(bool bParam0)//Position - 0x5BD1
{
	return func_267(unk_0xB5CEFD608600A09F(), bParam0);
}

void func_167(int iParam0, var uParam1, var uParam2)//Position - 0x5BE3
{
	*uParam1 = Global_18C80F[iParam0 /*558*/].f_B.f_8[0];
	*uParam2 = Global_18C80F[iParam0 /*558*/].f_B.f_8[1];
}

int func_168()//Position - 0x5C11
{
	return Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B;
}

int func_169(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0x5C26
{
	return func_170(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_170(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0x5C48
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_180(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0x724D816EA203A79E(iParam1))
		{
			if (unk_0x386592AF38881675(iParam1))
			{
				iVar1 = unk_0x399F7937FFE4DEBF(iParam1);
				func_176(unk_0x823166D9421223CA(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_171(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_171(int iParam0, int iParam1, char* sParam2, int iParam3)//Position - 0x5CC1
{
	vector3 vVar0;
	
	vVar0 = { func_174(iParam0, 1) };
	if (iParam0 == func_173(unk_0xBC25C936A095B5BA()))
	{
		func_172(1);
	}
	func_176(vVar0, iParam1, 0, sParam2, iParam3);
}

void func_172(int iParam0)//Position - 0x5CF5
{
	Global_252E21.f_75D = iParam0;
}

int func_173(int iParam0)//Position - 0x5D06
{
	return iParam0;
}

Vector3 func_174(int iParam0, bool bParam1)//Position - 0x5D10
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
	if (iParam0 == func_175(unk_0xBC25C936A095B5BA()) && unk_0x3D875C2512206692(unk_0xEBC6179F395EFBEB()) == 4)
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

int func_175(int iParam0)//Position - 0x5DD4
{
	return iParam0;
}

void func_176(vector3 vParam0, int iParam1, int iParam2, char* sParam3, int iParam4)//Position - 0x5DDE
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
			Global_252E21.f_504[iVar1 /*30*/].f_4 = func_179(Global_252E21.f_504[iVar1 /*30*/], &Global_14063D, &Global_14063E);
			Global_252E21.f_504[iVar1 /*30*/].f_7 = unk_0xED678C85A82F0AB9();
			Global_252E21.f_504[iVar1 /*30*/].f_3 = iParam1;
			Global_252E21.f_504[iVar1 /*30*/].f_8 = iParam2;
			Global_252E21.f_504[iVar1 /*30*/].f_9 = func_178();
			Global_252E21.f_504[iVar1 /*30*/].f_A = func_177();
			StringCopy(&(Global_252E21.f_504[iVar1 /*30*/].f_16), sParam3, 16);
			Global_252E21.f_504[iVar1 /*30*/].f_1A = unk_0x863D0D1A37055D36(unk_0xED678C85A82F0AB9(), iParam4);
		}
	}
}

int func_177()//Position - 0x5EF5
{
	if (Global_252E21.f_75D)
	{
		Global_252E21.f_75D = 0;
		return 1;
	}
	Global_252E21.f_75D = 0;
	return 0;
}

var func_178()//Position - 0x5F1F
{
	var uVar0;
	
	uVar0 = Global_252E21.f_75F;
	Global_252E21.f_75F = 1;
	return uVar0;
}

float func_179(vector3 vParam0, var uParam1, var uParam2)//Position - 0x5F3A
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

var func_180(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x5FD3
{
	var uVar0;
	
	uVar0 = func_181(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_181(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x5FF6
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_218(unk_0xB5CEFD608600A09F()) || func_217(unk_0xB5CEFD608600A09F()))
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
	else if (func_214() || func_213(unk_0xB5CEFD608600A09F()))
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
	if (func_212(sParam2))
	{
	}
	if (func_211())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_209(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_40001.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_208(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_205(0, &iVar1);
					break;
				
				case 3:
					func_205(1, &iVar1);
					break;
				
				case 1:
					func_201(&iVar1);
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
			func_200(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_192((func_199(unk_0xB5CEFD608600A09F()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x5FF267E54EB49897(iVar1, iParam8, iParam9);
				if (Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_27.f_2 != -1)
				{
					func_200(1165, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_186(iVar1);
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
				func_182((func_184(unk_0xB5CEFD608600A09F()) + iVar1));
			}
			else
			{
				func_182((func_184(unk_0xB5CEFD608600A09F()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_182(int iParam0)//Position - 0x61F4
{
	if (func_211())
	{
		Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_D3.f_5 = iParam0;
		func_183(joaat("mpply_globalxp"), iParam0);
	}
}

void func_183(int iParam0, int iParam1)//Position - 0x621F
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x3A57956BCE003880(iVar0, iParam1, 1);
	}
}

int func_184(int iParam0)//Position - 0x623B
{
	if (iParam0 > -1)
	{
		if (func_955(iParam0, 0, 1))
		{
			if (iParam0 == unk_0xB5CEFD608600A09F())
			{
				return func_185(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_18402B[iParam0 /*770*/].f_D3.f_5;
			}
		}
		else
		{
			return func_185(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_185(int iParam0)//Position - 0x628C
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

void func_186(int iParam0)//Position - 0x62AA
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_191(unk_0xB5CEFD608600A09F()) };
	if (unk_0xB9ACC1154C623363())
	{
		if (unk_0xD7F4457CECF10121(&Var0))
		{
			iVar1 = func_189(func_190(&Var0));
			if (iVar1 == 0)
			{
				func_188(&Global_14F5C9, iParam0);
				func_187(joaat("mpply_crew_local_xp_0"), Global_14F5C9);
			}
			else if (iVar1 == 1)
			{
				func_188(&Global_14F5CA, iParam0);
				func_187(joaat("mpply_crew_local_xp_1"), Global_14F5CA);
			}
			else if (iVar1 == 2)
			{
				func_188(&Global_14F5CB, iParam0);
				func_187(joaat("mpply_crew_local_xp_2"), Global_14F5CB);
			}
			else if (iVar1 == 3)
			{
				func_188(&Global_14F5CC, iParam0);
				func_187(joaat("mpply_crew_local_xp_3"), Global_14F5CC);
			}
			else if (iVar1 == 4)
			{
				func_188(&Global_14F5CD, iParam0);
				func_187(joaat("mpply_crew_local_xp_4"), Global_14F5CD);
			}
		}
	}
}

void func_187(int iParam0, int iParam1)//Position - 0x637E
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

void func_188(var uParam0, int iParam1)//Position - 0x64A3
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_189(int iParam0)//Position - 0x64B4
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

int func_190(var uParam0)//Position - 0x6511
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

struct<13> func_191(int iParam0)//Position - 0x6534
{
	struct<13> Var0;
	
	unk_0xB7DBA2C6D2C3C41A(iParam0, &Var0, 13);
	return Var0;
}

void func_192(int iParam0, int iParam1, int iParam2)//Position - 0x654B
{
	if (func_211())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_40001.f_2320 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_14F642[func_138(-1)])
				{
					unk_0x5FF267E54EB49897(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_14F642[func_138(-1)])
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
		if (func_198(unk_0xB5CEFD608600A09F()))
		{
			Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_D3.f_1 = iParam0;
			Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_D3.f_6 = func_196(iParam0, 1);
		}
		func_134(639, iParam0, -1, 1);
		func_135(640, func_196(iParam0, 1), -1, 1, 0);
		Global_14F642[func_138(-1)] = iParam0;
		func_193(7, 0);
	}
}

void func_193(int iParam0, int iParam1)//Position - 0x666C
{
	int iVar0;
	
	if (func_195(iParam0, iParam1))
	{
		iVar0 = func_194();
		Global_258004[iVar0] = iParam0;
	}
}

int func_194()//Position - 0x668F
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

int func_195(int iParam0, var uParam1)//Position - 0x66C4
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

int func_196(int iParam0, bool bParam1)//Position - 0x674A
{
	if (bParam1)
	{
	}
	return func_197(iParam0, 0);
}

int func_197(int iParam0, int iParam1)//Position - 0x675E
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

int func_198(int iParam0)//Position - 0x681D
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

int func_199(int iParam0)//Position - 0x6842
{
	if (Global_1406D2.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0xB5CEFD608600A09F())
			{
				return Global_14F642[func_138(-1)];
			}
			else if (func_198(iParam0))
			{
				return Global_18402B[iParam0 /*770*/].f_D3.f_1;
			}
		}
	}
	else
	{
		return Global_14F642[func_138(-1)];
	}
	return 0;
}

void func_200(int iParam0, int iParam1, int iParam2)//Position - 0x689F
{
	int iVar0;
	
	iVar0 = func_137(iParam0, func_138(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_136(iParam0))
	{
		func_135(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_134(iParam0, iVar0, iParam2, 1);
	}
}

void func_201(int iParam0)//Position - 0x68E1
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
				if (unk_0x343CB262BF0CDF5A(iVar5) == iVar1 || func_204(unk_0x343CB262BF0CDF5A(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0xB5CEFD608600A09F())
					{
						if (func_203(unk_0xB5CEFD608600A09F(), iVar5))
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
		iVar6 = SYSTEM::ROUND((func_202(*iParam0, 100) * (10f * Global_40001.f_1079)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_202(*iParam0, 100) * (20f * Global_40001.f_1072)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_202(int iParam0, int iParam1)//Position - 0x69CC
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_203(int iParam0, int iParam1)//Position - 0x69ED
{
	if (unk_0xB9ACC1154C623363())
	{
		Global_26210D = { func_191(iParam0) };
		Global_26211A = { func_191(iParam1) };
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

int func_204(int iParam0, int iParam1, int iParam2)//Position - 0x6A5A
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

void func_205(bool bParam0, int iParam1)//Position - 0x6C25
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
				if (func_955(iVar4, 0, 1))
				{
					if (iVar4 != unk_0xB5CEFD608600A09F())
					{
						iVar1++;
						if (func_203(unk_0xB5CEFD608600A09F(), iVar4))
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
			if (func_955(iVar4, 1, 1))
			{
				if (iVar4 != unk_0xB5CEFD608600A09F())
				{
					if (func_206(unk_0xB5CEFD608600A09F(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_203(unk_0xB5CEFD608600A09F(), iVar4))
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
		iVar5 = SYSTEM::ROUND((func_202(*iParam1, 100) * (10f * Global_40001.f_1079)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_202(*iParam1, 100) * (20f * Global_40001.f_1072)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_206(int iParam0, int iParam1)//Position - 0x6D3D
{
	return SYSTEM::VDIST(func_207(iParam0), func_207(iParam1));
	return 0f;
}

Vector3 func_207(int iParam0)//Position - 0x6D59
{
	return unk_0x541C2AEF053615BC(unk_0xA95CF30C72EB526E(iParam0), false);
}

int func_208(int iParam0)//Position - 0x6D6C
{
	int iVar0;
	
	if (unk_0x8820DB58BCD4A148() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_202(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_209(int iParam0)//Position - 0x6DA3
{
	if (iParam0 < 0)
	{
		if (unk_0xC40EDFF7541407A8(iParam0) > func_199(unk_0xB5CEFD608600A09F()))
		{
			iParam0 = -func_199(unk_0xB5CEFD608600A09F());
		}
	}
	if (func_210(8000, 0, 0) > 0)
	{
		if (func_210(8000, 0, 0) < (iParam0 + func_199(unk_0xB5CEFD608600A09F())))
		{
			iParam0 = (func_210(8000, 0, 0) - func_199(unk_0xB5CEFD608600A09F()));
		}
	}
	return iParam0;
}

int func_210(int iParam0, bool bParam1, int iParam2)//Position - 0x6E07
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

int func_211()//Position - 0x6E2F
{
	return 1;
}

int func_212(char* sParam0)//Position - 0x6E38
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

int func_213(int iParam0)//Position - 0x6E72
{
	return func_127(func_62(iParam0));
}

bool func_214()//Position - 0x6E84
{
	if (unk_0x517823CA390A19F6())
	{
		return func_216();
	}
	return func_215(Global_440000.f_1EF38);
}

int func_215(int iParam0)//Position - 0x6EA8
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

bool func_216()//Position - 0x6EE2
{
	return Global_255A46.f_10;
}

bool func_217(int iParam0)//Position - 0x6EF0
{
	return Global_24FB5C[iParam0 /*406*/].f_6F == 2;
}

bool func_218(int iParam0)//Position - 0x6F05
{
	return Global_24FB5C[iParam0 /*406*/].f_6F == 7;
}

void func_219()//Position - 0x6F1A
{
	Global_258663 = 1;
}

void func_220(int iParam0, var uParam1, var uParam2)//Position - 0x6F27
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 0;
	*uParam2 = 0;
	if (!func_224(7))
	{
		return;
	}
	iVar0 = func_223(iParam0);
	iVar1 = func_222(iParam0);
	iVar2 = unk_0xC40EDFF7541407A8(unk_0xCCA9497DA4595710(Global_267214.f_1312.f_101, unk_0xED678C85A82F0AB9()));
	if (func_221(iParam0) != -1)
	{
		if (iVar2 > func_221(iParam0))
		{
			iVar2 = func_221(iParam0);
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

int func_221(int iParam0)//Position - 0x6FD1
{
	if (func_87(iParam0, 0) || func_132(iParam0))
	{
		return Global_40001.f_45C1;
	}
	if (func_139(iParam0))
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

int func_222(int iParam0)//Position - 0x70D4
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
			if (func_166(0) || func_97(0))
			{
				return Global_40001.f_4FC7;
			}
			break;
		
		case 226:
			if (func_166(0) || func_97(0))
			{
				return Global_40001.f_4FB3;
			}
			break;
		
		case 227:
			if (func_166(0) || func_97(0))
			{
				return Global_40001.f_4FBF;
			}
			break;
		
		case 229:
			if (func_166(0) || func_97(0))
			{
				return Global_40001.f_544B;
			}
			break;
		
		case 230:
			if (func_166(0) || func_97(0))
			{
				return Global_40001.f_54AB;
			}
			break;
		
		case 233:
			if (func_166(0) || func_97(0))
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
			if (func_166(0) || func_97(0))
			{
				return Global_40001.f_5AEE;
			}
			break;
		
		case 238:
			if (func_166(0) || func_97(0))
			{
				return Global_40001.f_5B5D;
			}
			break;
		
		case 249:
			if (func_166(0) || func_97(0))
			{
				return Global_40001.f_5B6D;
			}
			break;
	}
	return 0;
}

int func_223(int iParam0)//Position - 0x75D1
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
			if (!func_151())
			{
				return Global_40001.f_43EE;
			}
			else
			{
				return 0;
			}
			break;
		
		case 191:
			if (!func_151())
			{
				return Global_40001.f_4449;
			}
			else
			{
				return 0;
			}
			break;
		
		case 192:
			if (!func_151())
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
			if (func_97(0))
			{
				return Global_40001.f_4FC6;
			}
			break;
		
		case 226:
			if (func_97(0))
			{
				return Global_40001.f_4FB2;
			}
			break;
		
		case 227:
			if (func_97(0))
			{
				return Global_40001.f_4FBE;
			}
			break;
		
		case 229:
			if (func_97(0))
			{
				return Global_40001.f_544A;
			}
			break;
		
		case 230:
			if (func_97(0))
			{
				return Global_40001.f_54AA;
			}
			break;
		
		case 233:
			if (func_97(0))
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
			if (func_97(0))
			{
				return Global_40001.f_5AED;
			}
			break;
		
		case 238:
			if (func_97(0))
			{
				return Global_40001.f_5B5C;
			}
			break;
		
		case 249:
			if (func_97(0))
			{
				return Global_40001.f_5B6C;
			}
			break;
	}
	return 0;
}

bool func_224(int iParam0)//Position - 0x7A78
{
	return unk_0xFA30DFD0084E92FE(Global_267214.f_1312.f_25, iParam0);
}

void func_225(int iParam0, int iParam1)//Position - 0x7A8F
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_151())
		{
			if (func_166(0))
			{
				if (!func_97(0))
				{
					if (unk_0x96B1061E8F3CBC9A(func_168()))
					{
						if (func_264() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_264());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_262(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_231("GB_BCUT_TICK1", func_168(), iVar0, 0, 0, 1, 1);
						}
						func_230(20);
						func_226(func_168(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_226(int iParam0, int iParam1, int iParam2)//Position - 0x7B30
{
	struct<8> Var0;
	
	if (func_955(iParam0, 0, 1))
	{
		Var0 = 1838378015;
		Var0.f_1 = unk_0xB5CEFD608600A09F();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_229(iParam0);
		func_228(&(Var0.f_6), &(Var0.f_7));
		unk_0x38E776D9FA75679B(1, &Var0, 8, func_227(iParam0));
	}
}

var func_227(int iParam0)//Position - 0x7B86
{
	var uVar0;
	
	unk_0xF0059F27F7BB6680(&uVar0, iParam0);
	return uVar0;
}

void func_228(var uParam0, var uParam1)//Position - 0x7B98
{
	*uParam0 = Global_190DD1.f_9;
	*uParam1 = Global_190DD1.f_A;
}

var func_229(int iParam0)//Position - 0x7BB2
{
	return Global_18C80F[iParam0 /*558*/].f_1EB;
}

void func_230(int iParam0)//Position - 0x7BC6
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xF0059F27F7BB6680(&(Global_267214.f_1312.f_7[iVar0]), iVar1);
}

int func_231(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)//Position - 0x7BEF
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
		unk_0x449F0674640D94C0(func_238(iParam1, -2, 1, 0));
		unk_0x607C19B90D297FE2(func_236(&Var1));
		if (!iParam3 == 0)
		{
			unk_0x449F0674640D94C0(iParam3);
		}
		unk_0xAA5C5BF0489E5553(iParam2);
		iVar0 = unk_0x5E48BB10C6423FD5(0, 1);
		func_232(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_232(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x7C86
{
	int iVar0;
	
	if ((!func_235() || !unk_0x517823CA390A19F6()) || !func_47(unk_0xB5CEFD608600A09F(), 0))
	{
		return;
	}
	iVar0 = func_233(iParam2);
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

int func_233(int iParam0)//Position - 0x7D8E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_195C05 - 1))
	{
		if (iParam0 > Global_195C05.f_5[iVar0 /*53*/].f_1)
		{
			func_234(iVar0);
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

void func_234(int iParam0)//Position - 0x7DF0
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_195C05.f_5[iVar0 /*53*/] = { Global_195C05.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_235()//Position - 0x7E29
{
	return unk_0x7B2F21BFE86AEB61(-1762644250);
}

var func_236(char* sParam0)//Position - 0x7E3A
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_237(&cVar0);
}

var func_237(char[4] cParam0)//Position - 0x7E5E
{
	return cParam0;
}

int func_238(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x7E68
{
	int iVar0;
	int iVar1;
	
	if (func_260(iParam0))
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
	if ((func_260(unk_0xB5CEFD608600A09F()) || (func_259() && func_258())) && !unk_0xFA30DFD0084E92FE(Global_267214.f_11E0, 31))
	{
		iVar1 = func_257();
		if (unk_0x724D816EA203A79E(iVar1))
		{
			if (unk_0x15DBD981998D4FE1(iVar1))
			{
				if (unk_0x5363B43856FA7779(iVar1) != -1)
				{
					if (func_955(unk_0x5363B43856FA7779(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x517823CA390A19F6()) && iParam1 < 4)
						{
							if (Global_440000.f_1DBFD[iParam1] != -1)
							{
								return func_255(iParam1, iParam0, 0);
							}
							else
							{
								return func_245(iParam0, unk_0x5363B43856FA7779(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_245(iParam0, unk_0x5363B43856FA7779(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x517823CA390A19F6()) && iParam1 < 4)
			{
				if (Global_440000.f_1DBFD[iParam1] != -1)
				{
					return func_255(iParam1, iParam0, 0);
				}
				else
				{
					return func_239(0, -1, 0);
				}
			}
			else
			{
				return func_239(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x517823CA390A19F6()) && iParam1 < 4)
	{
		if (Global_440000.f_1DBFD[iParam1] != -1)
		{
			return func_255(iParam1, iParam0, 0);
		}
		else
		{
			return func_245(iParam0, unk_0xB5CEFD608600A09F(), iParam1, bParam2, bParam3);
		}
	}
	return func_245(iParam0, unk_0xB5CEFD608600A09F(), iParam1, bParam2, bParam3);
}

int func_239(bool bParam0, int iParam1, bool bParam2)//Position - 0x803B
{
	return func_240(unk_0xB5CEFD608600A09F(), bParam0, iParam1, bParam2);
}

int func_240(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x8051
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
			if (func_204(iVar0, iParam2, 0) && !unk_0xFA30DFD0084E92FE(Global_440000.f_F, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_244(1);
				}
				else
				{
					return func_244(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0xFA30DFD0084E92FE(Global_440000.f_4, 20))
			{
				return func_241(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_241(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_244(1);
	}
	return func_244(0);
}

int func_241(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x8115
{
	int iVar0;
	
	iVar0 = func_243(iParam0, iParam1, iParam3);
	if (func_242(Global_440000.f_1EF38, 1))
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

int func_242(int iParam0, bool bParam1)//Position - 0x822D
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

int func_243(int iParam0, int iParam1, int iParam2)//Position - 0x827E
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
			if (!func_204(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_244(bool bParam0)//Position - 0x82C5
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_245(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x82DC
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
			if (func_252(1))
			{
				iVar3 = func_250(iParam0);
				if (!iVar3 == -1)
				{
					return func_248(iVar3);
				}
			}
			if ((func_247(iParam1, iParam0, iVar0, 0) && !unk_0xFA30DFD0084E92FE(Global_440000.f_F, 18)) || ((func_204(unk_0x343CB262BF0CDF5A(iParam1), unk_0x343CB262BF0CDF5A(iParam0), 0) && unk_0xFA30DFD0084E92FE(Global_440000.f_F, 23)) && !unk_0xFA30DFD0084E92FE(Global_440000.f_F, 18)))
			{
				return func_244(1);
			}
			else if (unk_0xFA30DFD0084E92FE(Global_440000.f_F, 26))
			{
				return func_246(1);
			}
			else
			{
				return func_240(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1805D3 || Global_1805CA) || Global_18402B[iParam0 /*770*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1805D3 == 1 && Global_1805DD == 0))
			{
				return func_244(1);
			}
			else
			{
				return func_240(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1805CE && Global_1803FC.f_E == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_250(iParam0);
	if (!iVar4 == -1)
	{
		return func_248(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_246(bool bParam0)//Position - 0x8480
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_247(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x8497
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

int func_248(int iParam0)//Position - 0x850F
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_249(iParam0);
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

var func_249(int iParam0)//Position - 0x85D2
{
	return Global_24E35D.f_817.f_2C[iParam0 /*2*/].f_1;
}

int func_250(int iParam0)//Position - 0x85E9
{
	if (!iParam0 == func_29())
	{
		if (func_267(iParam0, 1))
		{
			return Global_24E35D.f_817.f_B[func_251(iParam0)];
		}
	}
	return -1;
}

int func_251(int iParam0)//Position - 0x861B
{
	if (iParam0 != func_29())
	{
		return Global_18C80F[iParam0 /*558*/].f_B;
	}
	return func_29();
}

int func_252(int iParam0)//Position - 0x863E
{
	if ((func_254() || func_253()) || (func_216() && iParam0))
	{
		return 1;
	}
	return 0;
}

var func_253()//Position - 0x866D
{
	return Global_255A46.f_F;
}

var func_254()//Position - 0x867B
{
	return Global_255A46.f_E;
}

int func_255(int iParam0, int iParam1, bool bParam2)//Position - 0x8689
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_EF621.f_C[iParam0];
	if (func_252(1))
	{
		iVar2 = func_250(iParam1);
		if (!iVar2 == -1)
		{
			return func_248(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (unk_0xFA30DFD0084E92FE(Global_440000.f_62[iParam0 /*10231*/].f_14F1[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_29())
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
			iVar0 = func_240(iParam1, !bParam2, iParam0, 0);
		}
		if (unk_0xFA30DFD0084E92FE(Global_440000.f_15, 13))
		{
			iVar0 = func_256(iParam0);
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

int func_256(int iParam0)//Position - 0x87EE
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

var func_257()//Position - 0x88C3
{
	return Global_240006.f_2;
}

bool func_258()//Position - 0x88D1
{
	return unk_0xFA30DFD0084E92FE(Global_240006, 4);
}

bool func_259()//Position - 0x88E2
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_27.f_12, 14);
}

int func_260(int iParam0)//Position - 0x88FF
{
	if (func_47(iParam0, 0))
	{
		return 1;
	}
	if (func_261())
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

bool func_261()//Position - 0x8941
{
	return unk_0xFA30DFD0084E92FE(Global_240006, 3);
}

void func_262(int iParam0, bool bParam1)//Position - 0x8952
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_263(1);
	}
	else
	{
		iVar1 = func_263(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_263(bool bParam0)//Position - 0x8984
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_40001.f_2E03;
}

int func_264()//Position - 0x89AA
{
	return Global_40001.f_2E02;
}

int func_265(int iParam0, int iParam1, bool bParam2)//Position - 0x89B9
{
	if (iParam1 != func_29())
	{
		if (!bParam2)
		{
			if (func_266(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_18C80F[iParam0 /*558*/].f_B != func_29())
		{
			return iParam1 == Global_18C80F[iParam0 /*558*/].f_B;
		}
	}
	return 0;
}

int func_266(int iParam0, int iParam1)//Position - 0x8A03
{
	if (iParam1 != func_29())
	{
		if (iParam0 != func_29())
		{
			if (Global_18C80F[iParam0 /*558*/].f_B != func_29())
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

bool func_267(int iParam0, bool bParam1)//Position - 0x8A48
{
	if (!bParam1)
	{
		if (func_41(iParam0))
		{
			return 0;
		}
	}
	return Global_18C80F[iParam0 /*558*/].f_B != func_29();
}

void func_268(int iParam0, var uParam1, int iParam2, var uParam3)//Position - 0x8A73
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
	
	bVar18 = func_97(1);
	bVar19 = false;
	if (iParam0 == 237)
	{
		if (func_151())
		{
			iVar17 = unk_0xB5CEFD608600A09F();
		}
		else
		{
			iVar17 = func_168();
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
				iVar2 = func_284(Global_18402B[iVar11 /*770*/].f_2F1, *uParam3);
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
			iVar10 = func_283(*iParam2);
			if (iVar10 > 0)
			{
				if (iVar17 == unk_0xB5CEFD608600A09F())
				{
					func_282("TICK_TCUT", iVar10, 1);
				}
				*iParam2 = (*iParam2 - iVar10);
			}
			Global_196A81.f_31 = *uParam3;
			if (iVar17 == unk_0xB5CEFD608600A09F())
			{
				if (iVar2 > 0)
				{
					func_281(iVar2);
				}
				if (*uParam3 > 0)
				{
					func_279(*uParam3);
				}
				iVar6 = func_278(&uVar5);
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
						func_230(140);
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
								if (func_277(iVar23))
								{
									func_269(iVar23, 1, 198210293);
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
					func_230(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_269(int iParam0, int iParam1, int iParam2)//Position - 0x8CDA
{
	var uVar0;
	
	uVar0 = func_271(iParam0);
	func_270(iParam0, uVar0, iParam1, iParam2);
}

void func_270(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x8CF6
{
	struct<8> Var0;
	
	Var0 = 151656521;
	Var0.f_1 = unk_0xB5CEFD608600A09F();
	Var0.f_2 = uParam1;
	Var0.f_4 = uParam2;
	Var0.f_3 = uParam3;
	Var0.f_5 = func_229(iParam0);
	func_228(&(Var0.f_6), &(Var0.f_7));
	if (iParam0 != func_29())
	{
		if (unk_0x96B1061E8F3CBC9A(iParam0))
		{
			unk_0x38E776D9FA75679B(1, &Var0, 8, func_227(iParam0));
		}
	}
}

int func_271(int iParam0)//Position - 0x8D5C
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_276();
	iVar0 = func_274(iParam0, iVar0);
	iVar1 = Global_18C80F[func_168() /*558*/].f_B.f_198;
	iVar0 = (iVar0 + (iVar1 * Global_40001.f_37FA));
	if (iVar0 < func_273())
	{
		iVar0 = func_273();
	}
	if (iVar0 > func_272())
	{
		iVar0 = func_272();
	}
	return iVar0;
}

int func_272()//Position - 0x8DB5
{
	return Global_40001.f_37FB;
}

int func_273()//Position - 0x8DC4
{
	return Global_40001.f_3C92;
}

int func_274(int iParam0, int iParam1)//Position - 0x8DD3
{
	int iVar0;
	
	iVar0 = (func_343(iParam0) * func_275());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_275()//Position - 0x8DF1
{
	return Global_40001.f_3C91;
}

var func_276()//Position - 0x8E00
{
	return Global_40001.f_2DFA;
}

int func_277(int iParam0)//Position - 0x8E0F
{
	if (unk_0x96B1061E8F3CBC9A(iParam0))
	{
		if (iParam0 != unk_0xB5CEFD608600A09F())
		{
			if (func_265(iParam0, unk_0xB5CEFD608600A09F(), 0))
			{
				if (!func_105(iParam0, 26))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_278(var uParam0)//Position - 0x8E48
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
			if (!func_47(iVar2, 0) && !func_265(iVar2, unk_0xB5CEFD608600A09F(), 1))
			{
				iVar1++;
			}
			else if (func_47(iVar2, 0))
			{
				*uParam0++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_279(int iParam0)//Position - 0x8EB4
{
	func_280(iParam0, 7232);
}

void func_280(int iParam0, int iParam1)//Position - 0x8EC5
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = func_137(iParam1, -1, 0);
	func_135(iParam1, (iVar0 + iParam0), -1, 1, 0);
}

void func_281(int iParam0)//Position - 0x8EEE
{
	func_280(iParam0, 7227);
}

int func_282(char* sParam0, int iParam1, int iParam2)//Position - 0x8EFF
{
	int iVar0;
	
	iVar0 = -1;
	unk_0x2E94302CFF011F2E(sParam0);
	unk_0xAA5C5BF0489E5553(iParam1);
	iVar0 = unk_0x5E48BB10C6423FD5(0, 1);
	func_232(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_283(int iParam0)//Position - 0x8F35
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

int func_284(struct<5> Param0, int iParam1)//Position - 0x8F69
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

void func_285(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4)//Position - 0x8FD3
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
	bVar16 = func_97(1);
	bVar17 = false;
	if (iParam0 == 229)
	{
	}
	else if (iParam0 == 230)
	{
		if (func_151())
		{
			iVar15 = unk_0xB5CEFD608600A09F();
		}
		else
		{
			iVar15 = func_168();
		}
		if (iVar15 != -1)
		{
			if (uParam1->f_10 == 8)
			{
				iVar0 = (func_297(iVar15) + uParam1->f_8);
			}
			else
			{
				iVar0 = (func_288(uParam1->f_10) + uParam1->f_8);
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
			iVar2 = func_147(uParam1->f_10, *uParam3);
			*iParam2 = (*iParam2 + iVar2);
			if (bVar17)
			{
				iVar9 = func_146(uParam1->f_10, *uParam3);
				if (iVar9 > 0)
				{
					*iParam2 = (*iParam2 + iVar9);
				}
			}
			if (func_287(*iParam2) > 0)
			{
				if (iVar15 == unk_0xB5CEFD608600A09F())
				{
					func_282("SMTICK_RONCUT", func_287(*iParam2), 1);
				}
				*iParam2 = (*iParam2 - func_287(*iParam2));
			}
			if (iVar15 == unk_0xB5CEFD608600A09F())
			{
				func_286(iVar2, iVar9);
				iVar6 = func_278(&uVar5);
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
						func_230(44);
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
								if (func_277(iVar20))
								{
									func_269(iVar20, 1, 1160415507);
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
					func_230(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_286(int iParam0, int iParam1)//Position - 0x9219
{
	if (iParam0 > 0)
	{
		func_280(iParam0, 6112);
	}
	if (iParam1 > 0)
	{
		func_280(iParam1, 6113);
	}
}

int func_287(int iParam0)//Position - 0x923F
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

int func_288(int iParam0)//Position - 0x927F
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_295())
	{
		return 0;
	}
	if (iParam0 == 8)
	{
		return func_297(unk_0xB5CEFD608600A09F());
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		iVar2 = func_290(func_291(func_294(iVar0), -1, -1));
		if (func_289(iVar2) == iParam0)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_289(int iParam0)//Position - 0x92DD
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

int func_290(int iParam0)//Position - 0x938D
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

int func_291(int iParam0, int iParam1, int iParam2)//Position - 0x947D
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_49();
	}
	iVar0 = 0;
	iVar1 = func_293(iParam0, iParam1);
	iVar2 = func_292(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0x6AEE934BCCBCAA0E(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_292(int iParam0)//Position - 0x94C3
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

int func_293(int iParam0, int iParam1)//Position - 0x9837
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_49();
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

int func_294(int iParam0)//Position - 0x9B61
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

bool func_295()//Position - 0x9DCB
{
	return func_296() != 0;
}

int func_296()//Position - 0x9DD9
{
	return Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_111.f_F9;
}

int func_297(int iParam0)//Position - 0x9DF1
{
	if (iParam0 != func_29() && func_298(iParam0))
	{
		return Global_18402B[iParam0 /*770*/].f_111.f_F9.f_3;
	}
	return 0;
}

int func_298(int iParam0)//Position - 0x9E22
{
	if (iParam0 != func_29())
	{
		return Global_18402B[iParam0 /*770*/].f_111.f_F9 != 0;
	}
	return 0;
}

void func_299(int iParam0, var uParam1, int iParam2, var uParam3)//Position - 0x9E47
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
	
	bVar17 = func_97(1);
	if (iParam0 == 225)
	{
	}
	else if (iParam0 == 226)
	{
		if (func_151())
		{
			iVar15 = unk_0xB5CEFD608600A09F();
		}
		else
		{
			iVar15 = func_168();
		}
		if (iVar15 != -1)
		{
			iVar16 = func_150(iVar15);
			iVar0 = (func_321(iVar15, iVar16) + uParam1->f_8);
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
			iVar2 = func_317(iVar15, iVar16, iVar1);
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
				func_314(iVar16, iVar2);
				if (func_310(iVar16) >= Global_40001.f_4DF1 || iVar2 >= Global_40001.f_4DF1)
				{
					func_300(5);
				}
				iVar6 = func_278(&uVar5);
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
						func_230(108);
					}
					else
					{
						func_230(110);
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
								if (func_277(iVar20))
								{
									func_269(iVar20, 1, -1905128202);
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
					func_230(112);
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

void func_300(int iParam0)//Position - 0xA082
{
	switch (iParam0)
	{
		case 0:
			if (Global_40001.f_4DE5)
			{
				if (func_302(Global_40001.f_4DE6))
				{
					func_301("CLOTHAWDSTRAP2", "CLOTHAWDDESC1", 0, 0, 0, 1);
				}
			}
			break;
		
		case 1:
			if (Global_40001.f_4DE7)
			{
				if (func_302(Global_40001.f_4DE8))
				{
					func_301("CLOTHAWDSTRAP2", "CLOTHAWDDESC2", 0, 0, 0, 1);
				}
			}
			break;
		
		case 2:
			if (Global_40001.f_4DE9)
			{
				if (func_302(Global_40001.f_4DEA))
				{
					func_301("CLOTHAWDSTRAP2", "CLOTHAWDDESC3", 0, 0, 0, 1);
				}
			}
			break;
		
		case 3:
			if (Global_40001.f_4DEB)
			{
				if (func_302(Global_40001.f_4DEC))
				{
					func_301("CLOTHAWDSTRAP2", "CLOTHAWDDESC5", 0, 0, 0, 1);
				}
			}
			break;
		
		case 4:
			if (Global_40001.f_4DED)
			{
				if (func_302(Global_40001.f_4DEE))
				{
					func_301("CLOTHAWDSTRAP2", "CLOTHAWDDESC6", 0, 0, 0, 1);
				}
			}
			break;
		
		case 5:
			if (Global_40001.f_4DEF)
			{
				if (func_302(Global_40001.f_4DF0))
				{
					func_282("CLOTHAWDSTRAP3", Global_40001.f_4DF1, 1);
				}
			}
			break;
		
		case 6:
			if (Global_40001.f_4DF2)
			{
				if (func_302(Global_40001.f_4DF3))
				{
					func_282("CLOTHAWDSTRAP5", Global_40001.f_4E77, 1);
				}
			}
			break;
		
		case 7:
			if (Global_40001.f_4DF5)
			{
				if (func_302(Global_40001.f_4DF6))
				{
					func_301("CLOTHAWDSTRAP2", "CLOTHAWDDESC8", 0, 0, 0, 1);
				}
			}
			break;
		
		case 8:
			if (Global_40001.f_4DF7)
			{
				if (func_302(Global_40001.f_4DF8))
				{
					func_301("CLOTHAWDSTRAP2", "CLOTHAWDDESC9", 0, 0, 0, 1);
				}
			}
			break;
		
		case 9:
			if (Global_40001.f_4DF9)
			{
				if (func_302(Global_40001.f_4DFA))
				{
					func_301("CLOTHAWDSTRAP2", "CLOTHAWDDESC10", 0, 0, 0, 1);
				}
			}
			break;
		
		case 10:
			if (Global_40001.f_4DFB)
			{
				if (func_302(Global_40001.f_4DFC))
				{
					func_301("CLOTHAWDSTRAP2", "CLOTHAWDDESC11", 0, 0, 0, 1);
				}
			}
			break;
		
		case 11:
			if (Global_40001.f_4DFD)
			{
				if (func_302(Global_40001.f_4DFE))
				{
					func_301("CLOTHAWDSTRAP2", "CLOTHAWDDESC12", 0, 0, 0, 1);
				}
			}
			break;
		
		case 12:
			if (Global_40001.f_4DFF)
			{
				if (func_302(Global_40001.f_4E00))
				{
					func_301("CLOTHAWDSTRAP2", "CLOTHAWDDESC13", 0, 0, 0, 1);
				}
			}
			break;
		
		case 13:
			if (Global_40001.f_4E01)
			{
				if (func_302(Global_40001.f_4E02))
				{
					func_301("CLOTHAWDSTRAP2", "CLOTHAWDDESC14", 0, 0, 0, 1);
				}
			}
			break;
		
		case 14:
			if (Global_40001.f_4E03)
			{
				if (func_302(Global_40001.f_4E04))
				{
					func_301("CLOTHAWDSTRAP2", "CLOTHAWDDESC15", 0, 0, 0, 1);
				}
			}
			break;
	}
}

int func_301(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5)//Position - 0xA37F
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
		Global_26210D = { func_191(unk_0xB5CEFD608600A09F()) };
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
	func_232(8, sParam0, 1, sParam1, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_302(int iParam0)//Position - 0xA473
{
	switch (iParam0)
	{
		case 558790811:
		case 1740171158:
		case -1191485992:
		case -1735342207:
			if (!func_307(15417, -1, -1))
			{
				func_306(15417, 1, -1, 1);
				return 1;
			}
			break;
		
		case 2108830041:
		case -120911428:
		case -1407302654:
		case -2039798986:
			if (!func_307(15418, -1, -1))
			{
				func_306(15418, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1898746692:
		case -1359197372:
		case -140996548:
		case -1850642937:
			if (!func_307(15425, -1, -1))
			{
				func_306(15425, 1, -1, 1);
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
			if (!func_307(15405, -1, -1))
			{
				func_306(15405, 1, -1, 1);
				return 1;
			}
			break;
		
		case 2024167318:
		case 1915398071:
		case -571324979:
		case 1374601256:
			if (!func_307(15393, -1, -1))
			{
				func_306(15393, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1720955761:
		case 1608057620:
		case 867332432:
		case -660288110:
			if (!func_307(15409, -1, -1))
			{
				func_306(15409, 1, -1, 1);
				return 1;
			}
			break;
		
		case 221872318:
		case -1802539904:
		case -1005186539:
		case -426022529:
			if (!func_307(15396, -1, -1))
			{
				func_306(15396, 1, -1, 1);
				return 1;
			}
			break;
		
		case -2098369500:
		case -1196968784:
		case -1314656979:
		case -1132522169:
			if (!func_307(15412, -1, -1))
			{
				func_306(15412, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1172743557:
		case -1502212019:
		case 1110085176:
		case -889671110:
			if (!func_305(209, -1))
			{
				func_303(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1883175477:
		case -584614481:
		case -1736983851:
		case -182614393:
			if (!func_307(15403, -1, -1))
			{
				func_306(15403, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1449333520:
		case -890709710:
		case -1496983695:
		case 48701978:
			if (!func_305(209, -1))
			{
				func_303(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -869990766:
		case -581140963:
		case 1827333048:
		case -646852824:
			if (!func_307(15389, -1, -1))
			{
				func_306(15389, 1, -1, 1);
				return 1;
			}
			break;
		
		case -542628448:
		case -870458464:
		case 420690954:
		case -408392811:
			if (!func_305(209, -1))
			{
				func_303(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case 787769067:
		case 1132791298:
		case 1330653315:
		case 1717168382:
			if (!func_307(15398, -1, -1))
			{
				func_306(15398, 1, -1, 1);
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
			if (!func_307(15400, -1, -1))
			{
				func_306(15400, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1167465472:
		case -313418417:
		case -203035350:
		case -1533320367:
		case 2065127290:
		case -390081030:
			if (!func_305(209, -1))
			{
				func_303(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -2105609173:
		case -698486936:
		case 917598912:
		case 939297301:
		case -56403312:
		case -1368923829:
			if (!func_307(15408, -1, -1))
			{
				func_306(15408, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1864920868:
		case -1072905530:
		case 682284723:
		case 1186965403:
		case -292700571:
		case -2068738593:
			if (!func_305(209, -1))
			{
				func_303(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1729183056:
		case 2114404000:
		case 481083063:
		case 1575507436:
		case -648899601:
		case -612123774:
			if (!func_307(15411, -1, -1))
			{
				func_306(15411, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1967315379:
		case 1750602562:
		case 114660105:
		case 1783131820:
		case -889194678:
		case 801334272:
			if (!func_307(15397, -1, -1))
			{
				func_306(15397, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1192623422:
		case 1330733365:
		case 1897981854:
		case 2059866009:
		case 867092646:
		case -146705667:
			if (!func_307(15413, -1, -1))
			{
				func_306(15413, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1444780905:
		case 1272666697:
		case 1601455173:
		case -1997689882:
		case 627387411:
		case -847831191:
			if (!func_307(15391, -1, -1))
			{
				func_306(15391, 1, -1, 1);
				return 1;
			}
			break;
		
		case 444212231:
		case -1563654102:
		case 1932815241:
		case -1617209023:
		case 308545041:
		case 1682427144:
			if (!func_307(15388, -1, -1))
			{
				func_306(15388, 1, -1, 1);
				return 1;
			}
			break;
		
		case 704955164:
		case -720081735:
		case 1626031863:
		case -1391954917:
		case 35480964:
		case 2029975158:
			if (!func_305(209, -1))
			{
				func_303(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1124704392:
		case -850093035:
		case 926585800:
		case -1832969872:
		case 1539395388:
		case 1377465778:
			if (!func_307(15401, -1, -1))
			{
				func_306(15401, 1, -1, 1);
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
			if (!func_307(15394, -1, -1))
			{
				func_306(15394, 1, -1, 1);
				return 1;
			}
			break;
		
		case -534855486:
		case -1168575065:
		case -1367129204:
		case -1006027910:
			if (!func_305(209, -1))
			{
				func_303(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -516333262:
		case 756873456:
		case 87453937:
		case -1438775324:
			if (!func_307(15406, -1, -1))
			{
				func_306(15406, 1, -1, 1);
				return 1;
			}
			break;
		
		case 485135095:
		case -730037708:
		case -1686659723:
		case -1094274807:
			if (!func_307(15395, -1, -1))
			{
				func_306(15395, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1713551997:
		case -970458486:
		case 1992217604:
		case -1348726092:
			if (!func_305(209, -1))
			{
				func_303(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1490658501:
		case 975601953:
		case -1934557208:
		case 1786218600:
			if (!func_307(15410, -1, -1))
			{
				func_306(15410, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1735635238:
		case 1614208560:
		case -1034032319:
		case -1858021894:
			if (!func_307(15407, -1, -1))
			{
				func_306(15407, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1931303956:
		case -726032561:
		case 1747334867:
		case 1237632771:
			if (!func_305(209, -1))
			{
				func_303(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1931617488:
		case -1824987162:
		case 236389050:
		case 1987485798:
			if (!func_305(209, -1))
			{
				func_303(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1726332301:
		case 417579524:
		case 591736086:
		case 908992470:
			if (!func_307(15414, -1, -1))
			{
				func_306(15414, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1382922530:
		case 734151492:
		case -357636850:
		case -1021993708:
			if (!func_307(15415, -1, -1))
			{
				func_306(15415, 1, -1, 1);
				return 1;
			}
			break;
		
		case 452778672:
		case -1766862320:
		case 479676642:
		case -1654828636:
			if (!func_307(15399, -1, -1))
			{
				func_306(15399, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1776790350:
		case 579562906:
		case 242920617:
		case -1365707749:
			if (!func_307(15404, -1, -1))
			{
				func_306(15404, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1988057295:
		case -619754931:
		case -1219723702:
		case -388208479:
			if (!func_305(209, -1))
			{
				func_303(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case 816707921:
		case 1424441799:
		case -1576971340:
		case 2087194554:
			if (!func_307(15392, -1, -1))
			{
				func_306(15392, 1, -1, 1);
				return 1;
			}
			break;
		
		case 744446190:
		case -1405036369:
		case -622901905:
		case 981732339:
			if (!func_307(15390, -1, -1))
			{
				func_306(15390, 1, -1, 1);
				return 1;
			}
			break;
		
		case 917772807:
		case 1929056908:
		case -981132613:
		case 1271443068:
			if (!func_307(15402, -1, -1))
			{
				func_306(15402, 1, -1, 1);
				return 1;
			}
			break;
		
		case -292922355:
		case -34538790:
		case -1908986844:
		case -1785118184:
			if (!func_307(15416, -1, -1))
			{
				func_306(15416, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1495432685:
		case 1898518287:
		case 2029126042:
		case -1521032813:
			if (!func_305(209, -1))
			{
				func_303(209, 1, -1, 1);
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
			if (!func_307(15426, -1, -1))
			{
				func_306(15426, 1, -1, 1);
				return 1;
			}
			break;
		
		case -815706791:
		case -1066127505:
		case 1281631799:
		case -1519028808:
			if (!func_307(15422, -1, -1))
			{
				func_306(15422, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1318802347:
		case -1366750043:
		case 447234752:
		case 1996626130:
			if (!func_307(15423, -1, -1))
			{
				func_306(15423, 1, -1, 1);
				return 1;
			}
			break;
		
		case 306110040:
		case 1944822196:
		case 278933172:
		case -1981759857:
			if (!func_307(15421, -1, -1))
			{
				func_306(15421, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1828101251:
		case -1639289459:
		case -562607521:
		case -879279621:
			if (!func_307(15427, -1, -1))
			{
				func_306(15427, 1, -1, 1);
				return 1;
			}
			break;
		
		case -919314748:
		case 1282565442:
		case 755492739:
		case 1276101346:
			if (!func_307(15419, -1, -1))
			{
				func_306(15419, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1971111649:
		case -884280700:
		case -85982412:
		case 1573086793:
			if (!func_307(15420, -1, -1))
			{
				func_306(15420, 1, -1, 1);
				return 1;
			}
			break;
	}
	return 0;
}

void func_303(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xAFE8
{
	int iVar0;
	
	if (func_304())
	{
		iVar0 = Global_2705A2[iParam0 /*3*/][func_138(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x7DB90DFB4AE71E86(iVar0, iParam1, iParam3);
		}
	}
}

int func_304()//Position - 0xB01A
{
	return 1;
	return 0;
}

int func_305(int iParam0, int iParam1)//Position - 0xB027
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2705A2[iParam0 /*3*/][func_138(iParam1)];
	if (unk_0x9CADE88F210A0BAE(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_306(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0xB053
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
		iParam2 = func_49();
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

int func_307(int iParam0, int iParam1, int iParam2)//Position - 0xB56D
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_49();
	}
	iVar1 = func_309(iParam0, iParam1);
	uVar2 = func_308(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xDAB376DC6F83D68C(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_308(int iParam0)//Position - 0xB5AA
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

int func_309(int iParam0, int iParam1)//Position - 0xB896
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_49();
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

int func_310(int iParam0)//Position - 0xBB63
{
	int iVar0;
	
	iVar0 = func_312(iParam0);
	return func_137(func_311(iVar0), -1, 0);
}

int func_311(int iParam0)//Position - 0xBB7F
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

int func_312(int iParam0)//Position - 0xBBD9
{
	int iVar0;
	
	if (func_313(iParam0))
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

int func_313(int iParam0)//Position - 0xBC1B
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

void func_314(int iParam0, int iParam1)//Position - 0xBC3A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_312(iParam0);
	iVar1 = func_311(iVar0);
	iVar2 = (func_137(iVar1, -1, 0) + iParam1);
	func_135(iVar1, iVar2, -1, 1, 0);
	if (iVar0 == 5)
	{
		return;
	}
	if (func_291(9357, -1, -1) < 3)
	{
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_111.f_A8[iVar0 /*12*/] != 0)
			{
				iVar1 = func_311(iVar0);
				iVar3 = (iVar3 + func_137(iVar1, -1, 0));
			}
			iVar0++;
		}
		iVar4 = 1;
		while (iVar4 <= 3)
		{
			if (iVar3 >= func_316(iVar4))
			{
				iVar5 = iVar4;
			}
			iVar4++;
		}
		func_315(9357, iVar5, -1, 1);
	}
}

var func_315(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xBCEF
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_49();
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

int func_316(int iParam0)//Position - 0xC1ED
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

int func_317(int iParam0, int iParam1, int iParam2)//Position - 0xC22D
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_161(iParam1);
	if (func_313(iParam1))
	{
		switch (iVar1)
		{
			case 1:
				iVar0 = Global_40001.f_3FCF;
				if (func_318(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_40001.f_3FD4);
				}
				if (func_318(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_40001.f_3FD9);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 3:
				iVar0 = Global_40001.f_3FCE;
				if (func_318(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_40001.f_3FD3);
				}
				if (func_318(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_40001.f_3FD8);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 4:
				iVar0 = Global_40001.f_3FCD;
				if (func_318(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_40001.f_3FD2);
				}
				if (func_318(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_40001.f_3FD7);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0:
				iVar0 = Global_40001.f_3FCB;
				if (func_318(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_40001.f_3FD0);
				}
				if (func_318(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_40001.f_3FD5);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 2:
				iVar0 = Global_40001.f_3FCC;
				if (func_318(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_40001.f_3FD1);
				}
				if (func_318(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_40001.f_3FD6);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 5:
				iVar0 = Global_40001.f_4FCE;
				if (func_318(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_40001.f_4FD0);
				}
				if (func_318(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_40001.f_4FCF);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			}
	}
	return iVar0;
}

int func_318(int iParam0, int iParam1, int iParam2)//Position - 0xC405
{
	int iVar0;
	
	if (func_320(iParam0, iParam1))
	{
		iVar0 = func_319(iParam0, iParam1);
		return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_A8[iVar0 /*12*/].f_5, iParam2);
	}
	return 0;
}

int func_319(int iParam0, int iParam1)//Position - 0xC440
{
	int iVar0;
	
	if (func_313(iParam1) && iParam0 != func_29())
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

int func_320(int iParam0, int iParam1)//Position - 0xC48C
{
	int iVar0;
	
	if (func_313(iParam1) && iParam0 != func_29())
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

int func_321(int iParam0, int iParam1)//Position - 0xC4D7
{
	int iVar0;
	
	if (iParam0 == func_29())
	{
		return 0;
	}
	if (func_313(iParam1))
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

void func_322(int iParam0, var uParam1, int iParam2, var uParam3)//Position - 0xC536
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
			if (func_164())
			{
				Var0 = { func_163() };
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
				iVar6 = func_317(unk_0xB5CEFD608600A09F(), Var0, *uParam3);
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
				iVar10 = func_278(&uVar9);
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
					func_230(86);
				}
				Global_267214.f_1312.f_172 = *iParam2;
			}
			else if (func_97(0))
			{
				Var14 = { func_323(func_168()) };
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
				iVar20 = func_317(func_168(), Var14, *uParam3);
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

struct<2> func_323(int iParam0)//Position - 0xC7D9
{
	return Global_18C80F[iParam0 /*558*/].f_B.f_BC;
}

void func_324(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4)//Position - 0xC7F0
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
		if (func_41(unk_0xB5CEFD608600A09F()))
		{
			if (bParam1)
			{
				func_339();
			}
			func_338();
		}
	}
	else if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (func_41(unk_0xB5CEFD608600A09F()))
			{
				if (uParam2->f_5)
				{
					*iParam3 = (*iParam3 + func_330(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_B1));
				}
				else
				{
					*uParam4 = uParam2->f_7;
					if (uParam2->f_8 > 0)
					{
						*uParam4 = (*uParam4 + uParam2->f_8);
					}
					iVar0 = func_329(*uParam4);
					iVar1 = (iVar0 * *uParam4);
					*iParam3 = (*iParam3 + iVar1);
					iVar3 = func_278(&uVar2);
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
						func_230(44);
					}
				}
				func_327(*iParam3);
				func_326();
				Global_267214.f_1312.f_172 = *iParam3;
				iVar7 = 0;
				while (iVar7 < unk_0x81C86888AEA2F49B())
				{
					iVar8 = iVar7;
					if (unk_0x05086B70D2CFEA6F(iVar8))
					{
						iVar9 = unk_0x4ED43B67B3F05E0F(iVar8);
						if (func_277(iVar9))
						{
							func_269(iVar9, 1, -1292453789);
						}
					}
					iVar7++;
				}
			}
		}
		if (func_41(unk_0xB5CEFD608600A09F()))
		{
			func_325();
		}
	}
}

void func_325()//Position - 0xC95C
{
	int iVar0;
	
	iVar0 = Global_270D87[func_49()];
	iVar0++;
	func_134(3663, iVar0, -1, 1);
}

void func_326()//Position - 0xC981
{
	int iVar0;
	
	iVar0 = Global_270D8D[func_49()];
	iVar0++;
	func_134(3662, iVar0, -1, 1);
}

void func_327(int iParam0)//Position - 0xC9A6
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_270D90[func_49()];
	iVar0 = (iVar0 + iParam0);
	func_134(3664, iVar0, -1, 1);
	if (func_291(7666, -1, -1) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (iVar0 >= func_328(iVar1))
			{
				iVar2 = iVar1;
			}
			iVar1++;
		}
		func_315(7666, iVar2, -1, 1);
	}
}

int func_328(int iParam0)//Position - 0xCA08
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

var func_329(int iParam0)//Position - 0xCBE0
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

int func_330(int iParam0)//Position - 0xCDE0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_337(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_336(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_335(iVar3));
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_331(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= (func_331(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_335(unk_0x491B2241281A03B7(1, 6)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_331(int iParam0)//Position - 0xCE5C
{
	int iVar0;
	
	if (func_334(iParam0))
	{
		iVar0 = func_332(func_333(iParam0));
		return func_137(iVar0, -1, 0);
	}
	return 0;
}

int func_332(int iParam0)//Position - 0xCE85
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

int func_333(int iParam0)//Position - 0xCED8
{
	int iVar0;
	
	if (func_334(iParam0))
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

int func_334(int iParam0)//Position - 0xCF1A
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_335(int iParam0)//Position - 0xCF39
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

int func_336(int iParam0, int iParam1)//Position - 0xCFB1
{
	int iVar0;
	
	if (func_334(iParam0))
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

int func_337(int iParam0)//Position - 0xCFF7
{
	int iVar0;
	
	if (func_334(iParam0))
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

void func_338()//Position - 0xD038
{
	int iVar0;
	
	iVar0 = Global_270D84[func_49()];
	iVar0++;
	Global_270D84[func_49()] = iVar0;
	func_134(3661, iVar0, -1, 1);
}

void func_339()//Position - 0xD069
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_270D81[func_49()];
	iVar1 = Global_270D8A[func_49()];
	iVar0++;
	iVar1++;
	Global_270D81[func_49()] = iVar0;
	Global_270D8A[func_49()] = iVar1;
	Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_111.f_72 = iVar1;
	func_134(3659, iVar0, -1, 1);
	func_134(3660, iVar1, -1, 1);
}

void func_340()//Position - 0xD0D5
{
	if (func_151())
	{
		Global_255D53.f_BFA.f_86 = 0;
		Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_198 = Global_255D53.f_BFA.f_86;
	}
}

void func_341()//Position - 0xD107
{
	if (func_151())
	{
		if (Global_255D53.f_BFA.f_86 < 10)
		{
			Global_255D53.f_BFA.f_86++;
			Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_198 = Global_255D53.f_BFA.f_86;
		}
	}
}

void func_342()//Position - 0xD151
{
	if (func_151())
	{
		if (Global_255D53.f_BFA.f_86 > 0)
		{
			Global_255D53.f_BFA.f_86 = (Global_255D53.f_BFA.f_86 - 1);
			Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_198 = Global_255D53.f_BFA.f_86;
		}
	}
}

int func_343(int iParam0)//Position - 0xD19A
{
	return Global_18C80F[iParam0 /*558*/].f_B.f_1C;
}

int func_344(int iParam0)//Position - 0xD1AF
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
			if (func_166(1) && !func_97(1))
			{
				if (func_345(func_168()))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_345(int iParam0)//Position - 0xD224
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_13, 26);
}

int func_346(int iParam0)//Position - 0xD24A
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

int func_347(int iParam0, bool bParam1)//Position - 0xD5EF
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
			if (func_151())
			{
				return Global_40001.f_4725;
			}
			else if (bParam1)
			{
				return Global_40001.f_4726;
			}
			break;
		
		case 188:
			if (func_151())
			{
				return Global_40001.f_4779;
			}
			else if (bParam1)
			{
				return Global_40001.f_477A;
			}
			break;
		
		case 225:
			if (func_151() && !func_164())
			{
				if (func_345(unk_0xB5CEFD608600A09F()))
				{
					return Global_40001.f_4FC2;
				}
				else
				{
					return Global_40001.f_4FC3;
				}
			}
			else if (func_164())
			{
				return Global_40001.f_4FC4;
			}
			break;
		
		case 226:
			if (func_151() && !func_164())
			{
				if (func_345(unk_0xB5CEFD608600A09F()))
				{
					return Global_40001.f_4FAE;
				}
				else
				{
					return Global_40001.f_4FAF;
				}
			}
			else if (func_164())
			{
				return Global_40001.f_4FB0;
			}
			break;
		
		case 227:
			if (func_151() && !func_164())
			{
				if (func_345(unk_0xB5CEFD608600A09F()))
				{
					return Global_40001.f_4FBA;
				}
				else
				{
					return Global_40001.f_4FBB;
				}
			}
			else if (func_164())
			{
				return Global_40001.f_4FBC;
			}
			break;
		
		case 229:
			if (func_151() && !func_164())
			{
				if (func_345(unk_0xB5CEFD608600A09F()))
				{
					return Global_40001.f_5446;
				}
				else
				{
					return Global_40001.f_5447;
				}
			}
			else if (func_164())
			{
				return Global_40001.f_5448;
			}
			break;
		
		case 230:
			if (func_151() && !func_164())
			{
				if (func_345(unk_0xB5CEFD608600A09F()))
				{
					return Global_40001.f_54A6;
				}
				else
				{
					return Global_40001.f_54A7;
				}
			}
			else if (func_164())
			{
				return Global_40001.f_54A8;
			}
			break;
		
		case 233:
			if (func_151() && !func_164())
			{
				if (func_345(unk_0xB5CEFD608600A09F()))
				{
					return Global_40001.f_5681;
				}
				else
				{
					return Global_40001.f_5682;
				}
			}
			else if (func_164())
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
			if (func_151() && !func_164())
			{
				if (func_345(unk_0xB5CEFD608600A09F()))
				{
					return Global_40001.f_5AE9;
				}
				else
				{
					return Global_40001.f_5AEA;
				}
			}
			else if (func_164())
			{
				return Global_40001.f_5AEB;
			}
			break;
		
		case 238:
			if (func_151() && !func_164())
			{
				if (func_345(unk_0xB5CEFD608600A09F()))
				{
					return Global_40001.f_5B58;
				}
				else
				{
					return Global_40001.f_5B59;
				}
			}
			else if (func_164())
			{
				return Global_40001.f_5B5A;
			}
			break;
		
		case 249:
			if (func_151() && !func_164())
			{
				if (func_345(unk_0xB5CEFD608600A09F()))
				{
					return Global_40001.f_5B68;
				}
				else
				{
					return Global_40001.f_5B69;
				}
			}
			else if (func_164())
			{
				return Global_40001.f_5B6A;
			}
			break;
	}
	return 0;
}

void func_348(int iParam0, var uParam1, var uParam2)//Position - 0xDCE2
{
	int iVar0;
	
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_349(iParam0))
	{
		if (!func_151())
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
	if (func_267(unk_0xB5CEFD608600A09F(), 1))
	{
		if (func_94(iParam0))
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
	else if (func_94(iParam0))
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
	iVar0 = func_90();
	if (iVar0 != func_29())
	{
		if (func_265(unk_0xB5CEFD608600A09F(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

int func_349(int iParam0)//Position - 0xDF45
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

void func_350(int iParam0, int iParam1)//Position - 0xDF89
{
	int iVar0;
	
	if (iParam1 != func_29())
	{
		if (unk_0x96B1061E8F3CBC9A(iParam1))
		{
			if (iParam1 == unk_0xB5CEFD608600A09F())
			{
				iVar0 = 1;
			}
			else if (func_351(iParam1, unk_0xB5CEFD608600A09F()))
			{
				iVar0 = 1;
			}
		}
	}
	if (iParam0 || iVar0)
	{
		if (func_955(unk_0xB5CEFD608600A09F(), 1, 1))
		{
			unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), 0, 0);
			unk_0xCE6A8FE7DACF8BD4(unk_0xB5CEFD608600A09F(), 0);
			Global_267214.f_1312.f_174 = unk_0xB99C193A32DE341D();
		}
	}
}

int func_351(int iParam0, int iParam1)//Position - 0xE000
{
	int iVar0;
	
	if (iParam0 != func_29() && iParam1 != func_29())
	{
		iVar0 = func_251(iParam0);
		if (iVar0 != func_29())
		{
			return iVar0 == func_251(iParam1);
		}
	}
	return 0;
}

int func_352(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xE03C
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
	func_367(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_47 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_48 = iParam5;
	Var0.f_10 = iParam6;
	return func_353(&Var0);
}

int func_353(var uParam0)//Position - 0xE0AC
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_252E21.f_BD1)
		{
			return 0;
		}
	}
	func_366(uParam0, uParam0->f_11);
	func_363(uParam0);
	if (func_216())
	{
		func_363(uParam0);
	}
	if (func_362(uParam0->f_1))
	{
		func_355();
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
				func_355();
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
				if (func_354(Global_252E21.f_A8F[iVar0 /*80*/].f_1))
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

int func_354(int iParam0)//Position - 0xE27D
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

void func_355()//Position - 0xE2FD
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
	func_356();
	if (bVar0)
	{
		Global_1164E = 0;
	}
}

void func_356()//Position - 0xE330
{
	Global_252E21.f_BD3 = 0;
	Global_252E21.f_BD3.f_242 = 0;
	func_360(&(Global_252E21.f_BD3.f_1));
	Global_252E21.f_BD3.f_1.f_1 = 0;
	func_357(&(Global_252E21.f_BD3.f_1));
}

void func_357(var uParam0)//Position - 0xE371
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
				if (unk_0x17FAADF9916EF741() && !func_359(0))
				{
					unk_0x829FA4611BD56B44(800);
				}
			}
		}
	}
	func_358(0);
}

void func_358(int iParam0)//Position - 0xE418
{
	Global_11646 = iParam0;
	Global_11647 = iParam0;
}

bool func_359(bool bParam0)//Position - 0xE42C
{
	if (!bParam0 && unk_0xB731B8C5BCE89836(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_1163A, 0);
}

void func_360(var uParam0)//Position - 0xE457
{
	func_361(uParam0);
	uParam0->f_23A = 0;
	uParam0->f_1F = 0;
	uParam0->f_38 = 0;
	uParam0->f_237 = 0;
	uParam0->f_239 = 0;
}

void func_361(var uParam0)//Position - 0xE481
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

int func_362(int iParam0)//Position - 0xE500
{
	if ((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105)
	{
		return 1;
	}
	return 0;
}

void func_363(var uParam0)//Position - 0xE602
{
	if (func_365(uParam0->f_1))
	{
		uParam0->f_48 = func_364();
	}
}

int func_364()//Position - 0xE61D
{
	return 21;
}

int func_365(int iParam0)//Position - 0xE627
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

void func_366(var uParam0, int iParam1)//Position - 0xE6B9
{
	if (func_365(uParam0->f_1))
	{
		uParam0->f_49 = 1;
	}
	if (iParam1 == func_29() || !func_955(iParam1, 0, 1))
	{
		return;
	}
	if (func_354(uParam0->f_1))
	{
		if (uParam0->f_47 == 1)
		{
			uParam0->f_49 = func_238(iParam1, -2, 0, 0);
		}
	}
}

void func_367(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)//Position - 0xE70F
{
	uParam1->f_11 = func_29();
	uParam1->f_12 = func_29();
	uParam1->f_13 = func_29();
	uParam1->f_14 = func_29();
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

int func_368(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0xE78F
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_29();
	iVar1 = func_29();
	iVar2 = func_29();
	return func_369(iParam0, sParam1, sParam2, sParam3, iParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, 2);
}

int func_369(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)//Position - 0xE7CA
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
	func_367(uParam0, &Var0, uParam9, sParam2, sParam1);
	Var0.f_4 = uParam10;
	Var0.f_5 = uParam11;
	Var0.f_11 = iParam5;
	Var0.f_12 = iParam6;
	Var0.f_13 = iParam7;
	StringCopy(&(Var0.f_19), sParam3, 64);
	StringCopy(&(Var0.f_39), sParam8, 16);
	Var0.f_49 = uParam4;
	Var0.f_47 = uParam4;
	Var0.f_6 = uParam13;
	Var0.f_48 = uParam12;
	if (iParam14 != 2)
	{
		Var0.f_47 = iParam14;
	}
	unk_0xF0059F27F7BB6680(&(Var0.f_45), 2);
	return func_353(&Var0);
}

int func_370()//Position - 0xE87E
{
	if ((func_955(unk_0xB5CEFD608600A09F(), 1, 1) && !unk_0xE186ACC7BE9B244E()) && !func_371())
	{
		return 1;
	}
	return 0;
}

bool func_371()//Position - 0xE8AC
{
	return unk_0x105601648511CC64() <= Global_43C1.f_1671 + 100;
}

void func_372(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, char* sParam7)//Position - 0xE8C1
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
	
	if (func_490(iParam2))
	{
		return;
	}
	fVar10 = -1f;
	iVar11 = -1;
	iVar12 = -1;
	iVar14 = 0;
	iVar15 = 0;
	uParam3->f_24 = 0;
	if (func_488() || iParam2 == 27)
	{
		if (func_441(iParam1, iParam2, uParam3, Global_180515, 0, func_486(), sParam7))
		{
			func_440(1);
			if ((!func_439() && !func_438()) || unk_0xFA30DFD0084E92FE(Global_267214.f_11DD, 1))
			{
				if (func_437())
				{
					func_435();
				}
				else
				{
					unk_0xC2EAD30963BDAA47(76, 84);
					if (uParam3->f_1B == 0)
					{
						func_434(1);
						Global_180515 = 0;
						iVar19 = -1;
						if (Global_1805CF != 1)
						{
							func_433(iParam1, 0, 0);
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
								if (func_955(unk_0x3171C34AB3FE6F2E(iVar17), 0, 1))
								{
									iVar3 = unk_0x3171C34AB3FE6F2E(iVar17);
									if (!func_47(iVar3, 0))
									{
										if ((func_432(iVar3) || Global_24FB5C[iVar3 /*406*/].f_E8 != -1) || func_431(iVar3))
										{
											iVar9 = iVar3;
											if (func_41(iVar3))
											{
												iVar1[iVar9] = iVar20;
												iVar20++;
												iVar0++;
												func_430(&iVar1, iVar3, &iVar20, &iVar0);
											}
										}
									}
								}
								iVar17++;
							}
						}
						if (!func_429(unk_0xB5CEFD608600A09F(), 0) && func_62(unk_0xB5CEFD608600A09F()) != 188)
						{
							bVar2 = iVar0 > 0;
						}
						iVar17 = 0;
						while (iVar17 < 32)
						{
							if (func_428())
							{
								if (func_955(unk_0x3171C34AB3FE6F2E(iVar17), 0, 1))
								{
									iVar3 = unk_0x3171C34AB3FE6F2E(iVar17);
								}
								else
								{
									iVar3 = func_29();
								}
							}
							else
							{
								iVar3 = (uParam0[iVar17 /*42*/])->f_1;
							}
							if ((func_427(iVar3) && func_423(iVar3, iParam2)) && func_955(iVar3, 0, 1))
							{
								iVar9 = iVar3;
								iVar7 = Global_18402B[iVar9 /*770*/].f_D3.f_6;
								Var6 = { func_418(iVar3) };
								if (iVar3 == unk_0xB5CEFD608600A09F())
								{
									uParam3->f_23 = iVar18;
								}
								StringCopy(&(uParam3->f_1), unk_0xD885B2234FC72D62(iVar3), 64);
								*(uParam4[iVar17 /*13*/]) = { func_191(iVar3) };
								iVar5 = func_412(iVar3);
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
									if (!func_428())
									{
										iVar15 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_407(&iVar8, &fVar10, (uParam0[iVar17 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_68), func_406(iParam5, 1, 0, 0), 16);
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
								iVar16 = func_405(iVar3, 0);
								if (bVar2)
								{
									if (func_267(iVar3, 1) && iVar1[iVar9] != -1)
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
								if (func_404(iParam5))
								{
									func_403(iVar3, iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar8, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_28, iVar13, bParam6);
								}
								else
								{
									func_403(iVar3, iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar11, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_28, iVar13, bParam6);
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
							if (func_955(iVar3, 0, 1) && !unk_0xFA30DFD0084E92FE(iVar14, iVar3))
							{
								iVar3 = unk_0x3171C34AB3FE6F2E(iVar17);
							}
							else
							{
								iVar3 = func_29();
							}
							if (func_427(iVar3))
							{
								if (func_955(unk_0x3171C34AB3FE6F2E(iVar17), 0, 1))
								{
									iVar9 = iVar3;
									iVar7 = Global_18402B[iVar9 /*770*/].f_D3.f_6;
									Var6 = { func_418(iVar3) };
									*(uParam4[iVar17 /*13*/]) = { func_191(iVar3) };
									iVar5 = func_412(iVar3);
									sVar4 = "";
									if (iVar5 != 0)
									{
										sVar4 = unk_0xF392EEDDF2FB749A(iVar5);
									}
									Global_180515++;
									iVar16 = func_405(iVar3, 1);
									if (bVar2)
									{
										if (func_267(iVar3, 1))
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
									func_385(iVar3, unk_0xD885B2234FC72D62(iVar3), iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar16, iVar15);
									iVar18++;
								}
							}
							iVar17++;
						}
						if (unk_0xFA30DFD0084E92FE(uParam3->f_21, 11))
						{
							func_382(uParam3, iParam1);
						}
						func_7(&(uParam3->f_15));
						func_381();
						uParam3->f_1B = 2;
					}
					if (uParam3->f_1B == 2)
					{
						if (!unk_0xFA30DFD0084E92FE(uParam3->f_21, 7))
						{
							func_380(uParam3, iParam1);
							func_379(iParam1, 0, 1);
							unk_0xF0059F27F7BB6680(&(uParam3->f_21), 7);
						}
						func_380(uParam3, iParam1);
						if (!unk_0xFA30DFD0084E92FE(uParam3->f_21, 11))
						{
							unk_0xF0059F27F7BB6680(&(uParam3->f_21), 11);
						}
						if (func_375(uParam3))
						{
							Global_1805CF = 1;
						}
						func_373(uParam3);
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
			func_381();
			func_434(0);
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

void func_373(var uParam0)//Position - 0xEF14
{
	if (!func_5(&(uParam0->f_15)))
	{
		func_4(&(uParam0->f_15), 0, 0);
	}
	else if (func_2(&(uParam0->f_15), 250, 0))
	{
		func_7(&(uParam0->f_15));
		func_374(0);
	}
}

void func_374(bool bParam0)//Position - 0xEF50
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

int func_375(var uParam0)//Position - 0xEF96
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar3;
	int iVar4;
	
	iVar4 = 0;
	iVar0 = uParam0->f_25;
	iVar3 = unk_0x3171C34AB3FE6F2E(uParam0->f_25);
	if (iVar3 != func_29() && func_955(iVar3, 0, 1))
	{
		Var2 = { func_191(iVar3) };
		iVar1 = func_378(uParam0, uParam0->f_25);
		if (func_377(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0x926C9CB9879D0731(&Var2))
					{
						if (unk_0xF7C6C9F82039E424(&Var2))
						{
							iVar4 = 1;
							func_376(uParam0, iVar0, 2);
						}
					}
					else if (unk_0xCE838A0680E73021(&Var2))
					{
						iVar4 = 1;
						func_376(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0x926C9CB9879D0731(&Var2))
					{
						if (!unk_0xF7C6C9F82039E424(&Var2))
						{
							iVar4 = 1;
							func_376(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar4 = 1;
						func_376(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0x926C9CB9879D0731(&Var2))
					{
						if (!unk_0xCE838A0680E73021(&Var2))
						{
							iVar4 = 1;
							func_376(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0xCE838A0680E73021(&Var2))
					{
						iVar4 = 1;
						func_376(uParam0, iVar0, 0);
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

void func_376(var uParam0, int iParam1, int iParam2)//Position - 0xF0C3
{
	uParam0->f_26[iParam1 /*2*/] = iParam2;
}

bool func_377(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)//Position - 0xF0D5
{
	return unk_0x700A9F370C80C9E1(&uParam0, 13);
}

var func_378(var uParam0, int iParam1)//Position - 0xF0E5
{
	return uParam0->f_26[iParam1 /*2*/];
}

void func_379(int iParam0, bool bParam1, int iParam2)//Position - 0xF0F5
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

void func_380(var uParam0, int iParam1)//Position - 0xF12D
{
	if (!unk_0xFA30DFD0084E92FE(uParam0->f_21, 10))
	{
		unk_0x29CD142125FE177B(*iParam1, "SET_HIGHLIGHT");
		unk_0x1E1FB49121565EB6(uParam0->f_23);
		unk_0xF9FBC2F3F73D94C9();
		unk_0xF0059F27F7BB6680(&(uParam0->f_21), 10);
	}
}

void func_381()//Position - 0xF165
{
	if (Global_1805CF != 0)
	{
		Global_1805CF = 0;
	}
}

void func_382(var uParam0, int iParam1)//Position - 0xF17A
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x3171C34AB3FE6F2E(iVar0);
		if (iVar2 != func_29())
		{
			if (func_955(iVar2, 0, 1))
			{
				if (uParam0->f_26[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_384(uParam0->f_26[iVar0 /*2*/], 0);
					func_383(iParam1, uParam0->f_26[iVar0 /*2*/].f_1, iVar1, Global_18402B[iVar0 /*770*/].f_D3.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_383(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0xF1ED
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

int func_384(int iParam0, bool bParam1)//Position - 0xF22A
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

void func_385(int iParam0, char* sParam1, int iParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)//Position - 0xF25E
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_402() && iParam4 < func_401())
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
				func_400("");
			}
			else
			{
				unk_0x1E1FB49121565EB6(iParam10);
			}
			func_400(sParam1);
			unk_0x1E1FB49121565EB6(iParam11);
			if (uParam3->f_6C == 6)
			{
				func_400("");
			}
			else
			{
				unk_0x1E1FB49121565EB6(65);
			}
			unk_0x1E1FB49121565EB6(-1);
			func_400("");
			if (uParam3->f_6C == 6)
			{
				func_400("");
			}
			else
			{
				func_400(&sParam5);
			}
			func_390(uParam3, iParam0);
			unk_0x6A664E53A192232C(sParam9);
			unk_0x6A664E53A192232C(sParam9);
			if (func_389(uParam3))
			{
				func_388("DPAD_FRIEND");
			}
			else if (func_387(uParam3))
			{
				func_388("DPAD_FRIEND");
			}
			else if (func_386(uParam3))
			{
				func_388("DPAD_CREW");
			}
			else
			{
				func_388("");
			}
			unk_0xF9FBC2F3F73D94C9();
		}
	}
}

bool func_386(var uParam0)//Position - 0xF38D
{
	return unk_0xFA30DFD0084E92FE(uParam0->f_21, 6);
}

bool func_387(var uParam0)//Position - 0xF39E
{
	return unk_0xFA30DFD0084E92FE(uParam0->f_21, 5);
}

void func_388(char* sParam0)//Position - 0xF3AF
{
	unk_0x57016C44F10111F0(sParam0);
	unk_0x64989E60CF560CA1();
}

int func_389(var uParam0)//Position - 0xF3C1
{
	if (func_387(uParam0) && func_386(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_390(var uParam0, int iParam1)//Position - 0xF3E2
{
	if (func_399(iParam1))
	{
		unk_0x1E1FB49121565EB6(121);
	}
	else if (func_394(iParam1))
	{
		unk_0x1E1FB49121565EB6(122);
	}
	else if (((unk_0xFA30DFD0084E92FE(Global_440000.f_1B, 15) && iParam1 > -1) && iParam1 < 32) && unk_0xFA30DFD0084E92FE(Global_24FB5C[iParam1 /*406*/].f_195, 0))
	{
		unk_0x1E1FB49121565EB6(123);
	}
	else
	{
		if (func_391())
		{
			uParam0->f_24 = 0;
		}
		unk_0x5E5DBD0A6623969E(uParam0->f_24);
	}
}

int func_391()//Position - 0xF463
{
	if (unk_0x517823CA390A19F6())
	{
		if (func_392() || func_254())
		{
			return 1;
		}
	}
	return 0;
}

int func_392()//Position - 0xF488
{
	if (unk_0x517823CA390A19F6())
	{
		return func_254();
	}
	return func_393(Global_440000.f_1EF38);
}

int func_393(int iParam0)//Position - 0xF4AC
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

int func_394(int iParam0)//Position - 0xF4E6
{
	if ((func_955(iParam0, 0, 1) && func_395()) && func_98(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_395()//Position - 0xF513
{
	if (func_118(unk_0xB5CEFD608600A09F()) || func_398())
	{
		if (!func_396(unk_0xB5CEFD608600A09F(), 236))
		{
			return 0;
		}
	}
	return 1;
}

int func_396(int iParam0, int iParam1)//Position - 0xF543
{
	if (func_397(iParam0) == iParam1)
	{
		return func_115(iParam0);
	}
	return 0;
}

int func_397(int iParam0)//Position - 0xF560
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_18C80F[iVar0 /*558*/];
	}
	return -1;
}

int func_398()//Position - 0xF57F
{
	switch (func_62(unk_0xB5CEFD608600A09F()))
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

int func_399(int iParam0)//Position - 0xF5BD
{
	if (func_391())
	{
		if (func_955(iParam0, 0, 1))
		{
			return func_41(iParam0);
		}
	}
	if ((func_955(iParam0, 0, 1) && func_395()) && func_46(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_400(char* sParam0)//Position - 0xF605
{
	unk_0xCB30200B8055CA57(sParam0);
}

int func_401()//Position - 0xF613
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

int func_402()//Position - 0xF62F
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_180517)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_403(int iParam0, int iParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)//Position - 0xF647
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_402() && iParam3 < func_401())
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
					func_400("");
				}
				else
				{
					unk_0x1E1FB49121565EB6(iParam9);
				}
				if (uParam2->f_6C == 6 && !unk_0xF1734B55490E9045(sParam16))
				{
					func_388(sParam16);
				}
				else
				{
					func_400(&(uParam2->f_1));
				}
				unk_0x1E1FB49121565EB6(iParam11);
				if (uParam2->f_6C == 6)
				{
					func_400("");
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
				if (func_428())
				{
					func_400("");
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
						func_388(&(uParam2->f_68));
					}
					else
					{
						func_400("");
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
					func_400("");
				}
				if (uParam2->f_6C == 6)
				{
					func_400("");
				}
				else
				{
					func_400(&sParam4);
				}
				func_390(uParam2, iParam0);
				if (iParam12 == 1 || unk_0xF1734B55490E9045(sParam8))
				{
					func_400("");
					func_400("");
				}
				else
				{
					unk_0x6A664E53A192232C(sParam8);
					unk_0x6A664E53A192232C(sParam8);
				}
				if (func_389(uParam2))
				{
					func_388("DPAD_FRIEND");
				}
				else if (func_387(uParam2))
				{
					func_388("DPAD_FRIEND");
				}
				else if (func_386(uParam2))
				{
					func_388("DPAD_CREW");
				}
				else
				{
					func_388("");
				}
				unk_0xF9FBC2F3F73D94C9();
			}
		}
	}
}

int func_404(int iParam0)//Position - 0xF9AA
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

int func_405(int iParam0, bool bParam1)//Position - 0xF9CE
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_118(iParam0)) && !func_116(iParam0))
	{
		iVar0 = func_364();
	}
	iVar1 = func_250(iParam0);
	if (!iVar1 == -1)
	{
		return func_248(iVar1);
	}
	return iVar0;
}

char* func_406(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0xFA18
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

int func_407(var uParam0, float fParam1, int iParam2, int iParam3)//Position - 0xFBA8
{
	if (func_411(iParam3))
	{
		*fParam1 = (func_408(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_404(iParam3))
	{
		*fParam1 = (func_408(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_408(int iParam0, int iParam1)//Position - 0xFBF8
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
				return func_410(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
		
		case 2:
			if (unk_0x8150E47F9B8C07E2())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_409(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
	}
	return SYSTEM::TO_FLOAT(iParam1);
}

float func_409(float fParam0)//Position - 0xFC9B
{
	return (fParam0 / 1.609344f);
}

float func_410(float fParam0)//Position - 0xFCAB
{
	return (fParam0 / 0.3048f);
}

int func_411(int iParam0)//Position - 0xFCBB
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

int func_412(int iParam0)//Position - 0xFD17
{
	int iVar0;
	
	iVar0 = func_415(iParam0);
	if (iVar0 == -1)
	{
		func_413(iParam0, 1);
		return 0;
	}
	Global_14FA05[iVar0 /*5*/].f_4 = 1;
	return Global_14FA05[iVar0 /*5*/].f_2;
}

void func_413(int iParam0, bool bParam1)//Position - 0xFD4D
{
	if (!func_955(iParam0, 0, 1))
	{
		return;
	}
	if (func_415(iParam0) != -1)
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
	if (func_414(iParam0))
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

int func_414(int iParam0)//Position - 0xFDB9
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

int func_415(int iParam0)//Position - 0xFDEB
{
	int iVar0;
	
	if (!func_955(iParam0, 0, 1))
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
			func_416(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_416(int iParam0)//Position - 0xFE6A
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
	func_417(&(Global_14FA05[iVar2 /*5*/]));
	Global_14FAA6 = (Global_14FAA6 - 1);
}

void func_417(var uParam0)//Position - 0xFF20
{
	*uParam0 = 0;
	uParam0->f_1 = func_29();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x7AF0088ABFA713B6())
	{
		uParam0->f_3 = unk_0xED678C85A82F0AB9();
	}
}

struct<4> func_418(int iParam0)//Position - 0xFF4D
{
	char cVar0[32];
	
	if (func_955(iParam0, 0, 1))
	{
		Global_26210D = { func_191(iParam0) };
		if (unk_0xF49912B78E2591B6())
		{
			if (func_377(Global_26210D))
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
		if (func_422(&Global_26210D))
		{
			Global_2620C7 = { func_420(iParam0) };
			func_419(&Global_2620C7, &cVar0);
		}
	}
	return cVar0;
}

void func_419(var uParam0, char* sParam1)//Position - 0xFFCE
{
	unk_0x6B97B73981ADFBF1(uParam0, 35, sParam1);
}

struct<35> func_420(int iParam0)//Position - 0xFFE0
{
	struct<13> Var0;
	struct<35> Var1;
	
	if (func_421(iParam0))
	{
		return Global_140876[unk_0xB5CEFD608600A09F() /*35*/];
	}
	Var0 = { func_191(iParam0) };
	unk_0x24723877416AAAFC(&Var1, 35, &Var0);
	return Var1;
}

int func_421(int iParam0)//Position - 0x1001E
{
	if (iParam0 == unk_0xB5CEFD608600A09F())
	{
		return 1;
	}
	return 0;
}

int func_422(var uParam0)//Position - 0x10034
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

int func_423(int iParam0, int iParam1)//Position - 0x1005A
{
	if (iParam1 == 26)
	{
		if ((func_117(iParam0) || func_426(iParam0)) || func_425(iParam0))
		{
			return 0;
		}
	}
	if (!func_424(iParam0))
	{
		return 0;
	}
	if ((!func_432(iParam0) && Global_24FB5C[iParam0 /*406*/].f_E8 == -1) && !func_431(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_424(int iParam0)//Position - 0x100C9
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_8E, 22);
}

bool func_425(int iParam0)//Position - 0x100E2
{
	if (func_117(iParam0))
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_18C80F[iParam0 /*558*/].f_1, 8);
}

int func_426(int iParam0)//Position - 0x10108
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0xFA30DFD0084E92FE(Global_18C80F[iParam0 /*558*/].f_1, 10) || unk_0xFA30DFD0084E92FE(Global_18C80F[iParam0 /*558*/].f_1, 9));
	}
	return 0;
}

int func_427(int iParam0)//Position - 0x10146
{
	int iVar0;
	
	if (iParam0 == func_29())
	{
		return 0;
	}
	if (func_47(iParam0, 0))
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

int func_428()//Position - 0x1018B
{
	switch (func_62(unk_0xB5CEFD608600A09F()))
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
	switch (func_397(unk_0xB5CEFD608600A09F()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_116(unk_0xB5CEFD608600A09F()))
	{
		switch (func_62(unk_0xB5CEFD608600A09F()))
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
	if (func_396(unk_0xB5CEFD608600A09F(), 236))
	{
		return 1;
	}
	return 0;
}

int func_429(int iParam0, int iParam1)//Position - 0x102C7
{
	if (Global_18C80F[iParam0 /*558*/].f_B.f_21 != -1 && func_86(Global_18C80F[iParam0 /*558*/].f_B.f_21))
	{
		return 1;
	}
	if (iParam1 && Global_18C80F[iParam0 /*558*/].f_B.f_20 != -1)
	{
		if (func_86(Global_18C80F[iParam0 /*558*/].f_B.f_20))
		{
			return 1;
		}
	}
	return 0;
}

void func_430(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1032D
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_955(unk_0x3171C34AB3FE6F2E(iVar0), 0, 1))
		{
			iVar1 = unk_0x3171C34AB3FE6F2E(iVar0);
			if (!func_47(iVar1, 0))
			{
				if ((func_432(iVar1) || Global_24FB5C[iVar1 /*406*/].f_E8 != -1) || func_431(iVar1))
				{
					if (func_265(iVar1, iParam1, 0))
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

bool func_431(int iParam0)//Position - 0x103B7
{
	return Global_18402B[iParam0 /*770*/].f_C4 != 0;
}

int func_432(int iParam0)//Position - 0x103CC
{
	if (func_955(iParam0, 0, 1))
	{
		if (func_955(unk_0xB5CEFD608600A09F(), 0, 1))
		{
			if (unk_0x75206900382D1E30(iParam0, unk_0xB5CEFD608600A09F()) || func_62(iParam0) == 233)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_433(int iParam0, int iParam1, int iParam2)//Position - 0x1040D
{
	if (unk_0xA7F138B5B1AB2CF6(*iParam0))
	{
		unk_0x29CD142125FE177B(*iParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x1E1FB49121565EB6(iParam1);
		unk_0x1E1FB49121565EB6(iParam2);
		unk_0xF9FBC2F3F73D94C9();
	}
}

void func_434(bool bParam0)//Position - 0x1043B
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

void func_435()//Position - 0x1046D
{
	if (unk_0xFA30DFD0084E92FE(Global_267214.f_11DD, 1))
	{
		if (func_119())
		{
			func_436();
		}
	}
}

void func_436()//Position - 0x1048F
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

int func_437()//Position - 0x104DA
{
	if (unk_0xFA30DFD0084E92FE(Global_267214.f_11DD, 0) && func_119())
	{
		return 1;
	}
	if (unk_0xFA30DFD0084E92FE(Global_267214.f_11DD, 1) && func_119())
	{
		return 1;
	}
	return 0;
}

int func_438()//Position - 0x1051B
{
	if (func_119())
	{
		if (func_354(Global_252E21.f_A8F[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_439()//Position - 0x10542
{
	if (func_119())
	{
		if (func_365(Global_252E21.f_A8F[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_440(int iParam0)//Position - 0x10569
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

int func_441(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)//Position - 0x10597
{
	struct<4> Var0;
	char* sVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	char* sVar5;
	int iVar6;
	
	StringCopy(&Var0, "", 16);
	bVar3 = func_485(iParam1);
	if (iParam1 == 20)
	{
		bVar2 = true;
	}
	fVar4 = func_484();
	if (iParam1 == 26 || iParam1 == 27)
	{
		if (func_483())
		{
			if (func_482() > 0 && Global_180517)
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
		if (!func_468())
		{
			func_467(iParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0xFA30DFD0084E92FE(Global_267214.f_11E0, 26))
	{
		func_467(iParam0, uParam2, 1);
		return 0;
	}
	if (!func_5(&(uParam2->f_13)))
	{
		if (func_482() == 1)
		{
			func_466(bVar3, iParam0, 0);
			func_4(&(uParam2->f_13), 0, 0);
			func_467(iParam0, uParam2, 0);
			unk_0xF0059F27F7BB6680(&(Global_267214.f_11E1), 5);
		}
	}
	if (func_5(&(uParam2->f_13)) || bParam5)
	{
		if (unk_0xF16DAFF595E80F7C())
		{
			unk_0x39CC55A2108C1AB0();
		}
		unk_0x4E0EC60D119222B1(10);
		if (func_2(&(uParam2->f_13), 10000, 0) || (func_482() == 0 && !bParam5))
		{
			func_467(iParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar2 == 0)
			{
				func_465();
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
					func_465();
					if (iParam1 == 26 || iParam1 == 27)
					{
						unk_0xE9DBADA362313538();
					}
					unk_0x4E0EC60D119222B1(18);
				}
				unk_0xE7918A3D05166D98(fVar4);
				if (func_466(bVar3, iParam0, 0))
				{
					func_433(iParam0, 0, 0);
					sVar1 = func_463(iParam1, &(Global_440000.f_1EF3F), bParam4);
					Var0 = { func_461(iParam1) };
					if (bParam4)
					{
						func_458(iParam0, sVar1, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 26)
					{
						func_451(iParam0, func_455(uParam2), func_452(uParam2), -1);
					}
					else if (iParam1 == 27)
					{
						sVar5 = func_449(uParam2);
						if (!unk_0xF1734B55490E9045(sParam6))
						{
							sVar5 = sParam6;
						}
						func_447(iParam0, sVar5, func_448(), -1);
					}
					else if (func_391())
					{
						uParam2->f_22 = Global_180516;
						func_458(iParam0, sVar1, &Var0, 1, -1, Global_180516, 1);
					}
					else if (bVar2)
					{
						uParam2->f_22 = Global_180516;
						func_458(iParam0, sVar1, "", 0, -1, Global_180516, 1);
					}
					else
					{
						iVar6 = func_442(iParam1);
						func_458(iParam0, sVar1, &Var0, 1, iVar6, -1, 1);
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

int func_442(int iParam0)//Position - 0x1086D
{
	int iVar0;
	
	iVar0 = -1;
	if (func_446())
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
			if (func_445(unk_0xB5CEFD608600A09F()))
			{
				iVar0 = 20;
			}
			if (func_444(unk_0xB5CEFD608600A09F()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_443(unk_0xB5CEFD608600A09F()))
	{
		iVar0 = 2;
	}
	if (func_214())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_443(int iParam0)//Position - 0x1097D
{
	return Global_24FB5C[iParam0 /*406*/].f_6F == 4;
}

bool func_444(int iParam0)//Position - 0x10992
{
	return Global_24FB5C[iParam0 /*406*/].f_6F == 7;
}

bool func_445(int iParam0)//Position - 0x109A7
{
	return Global_24FB5C[iParam0 /*406*/].f_6F == 2;
}

bool func_446()//Position - 0x109BC
{
	return Global_440000.f_1 == 0;
}

void func_447(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x109CC
{
	if (unk_0xA7F138B5B1AB2CF6(*iParam0))
	{
		unk_0x29CD142125FE177B(*iParam0, "SET_TITLE");
		if (unk_0xF1734B55490E9045(sParam2))
		{
			func_388(sParam1);
		}
		else
		{
			unk_0x57016C44F10111F0("FM_AE_BRACKT");
			unk_0xC9C304D0AABE1335(sParam1);
			unk_0xC9C304D0AABE1335(sParam2);
			unk_0x64989E60CF560CA1();
		}
		func_388("");
		if (iParam3 != -1)
		{
			unk_0x1E1FB49121565EB6(iParam3);
		}
		unk_0xF9FBC2F3F73D94C9();
	}
}

char* func_448()//Position - 0x10A2C
{
	switch (func_62(unk_0xB5CEFD608600A09F()))
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

char* func_449(var uParam0)//Position - 0x10A85
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
	switch (func_62(unk_0xB5CEFD608600A09F()))
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
			if (func_89())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_97(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_97(1))
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
			if (func_450(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_B0))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_450(int iParam0)//Position - 0x10EB2
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

void func_451(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x10EE4
{
	if (unk_0xA7F138B5B1AB2CF6(*iParam0))
	{
		unk_0x29CD142125FE177B(*iParam0, "SET_TITLE");
		if (unk_0xF1734B55490E9045(sParam2))
		{
			func_388(sParam1);
		}
		else if (func_397(unk_0xB5CEFD608600A09F()) == 133)
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
		func_388("");
		if (iParam3 != -1)
		{
			unk_0x1E1FB49121565EB6(iParam3);
		}
		unk_0xF9FBC2F3F73D94C9();
	}
}

char* func_452(var uParam0)//Position - 0x10F6C
{
	int iVar0;
	
	iVar0 = func_397(unk_0xB5CEFD608600A09F());
	if (func_454())
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
			switch (func_453())
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

int func_453()//Position - 0x1111C
{
	if (func_397(unk_0xB5CEFD608600A09F()) == 133)
	{
		return Global_267214.f_12C3;
	}
	return -1;
}

bool func_454()//Position - 0x1113F
{
	return Global_183FAC;
}

char* func_455(var uParam0)//Position - 0x1114B
{
	int iVar0;
	
	iVar0 = func_397(unk_0xB5CEFD608600A09F());
	if (func_454())
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
			if (func_457() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_457() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_453())
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
			if (func_456() == 1)
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

int func_456()//Position - 0x11341
{
	return Global_267214.f_12C6;
}

int func_457()//Position - 0x11350
{
	if (func_397(unk_0xB5CEFD608600A09F()) == 132)
	{
		return Global_267214.f_12C1;
	}
	return -1;
}

void func_458(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)//Position - 0x11373
{
	int iVar0;
	int iVar1;
	
	if (unk_0xA7F138B5B1AB2CF6(*iParam0))
	{
		unk_0x29CD142125FE177B(*iParam0, "SET_TITLE");
		if (bParam3)
		{
			func_400(sParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0x57016C44F10111F0(sParam1);
			unk_0xAA5C5BF0489E5553(iParam5);
			unk_0x64989E60CF560CA1();
		}
		else
		{
			func_388(sParam1);
		}
		if (func_483() && iParam6)
		{
			if (func_460())
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
			func_388(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0x1E1FB49121565EB6(iParam4);
			if (func_459(unk_0xB5CEFD608600A09F()))
			{
				unk_0x1E1FB49121565EB6(166);
			}
			else if (func_216())
			{
				unk_0x1E1FB49121565EB6(220);
			}
		}
		unk_0xF9FBC2F3F73D94C9();
	}
}

int func_459(int iParam0)//Position - 0x11434
{
	if (func_445(iParam0) || func_444(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_460()//Position - 0x11456
{
	return Global_180517;
}

struct<4> func_461(int iParam0)//Position - 0x11462
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_462(unk_0xB5CEFD608600A09F()) || func_443(unk_0xB5CEFD608600A09F()))
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
	if (func_391() && unk_0x517823CA390A19F6())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_440000.f_22, 16);
	}
	return Var0;
}

bool func_462(int iParam0)//Position - 0x114FE
{
	return Global_24FB5C[iParam0 /*406*/].f_6F == 5;
}

char* func_463(int iParam0, char* sParam1, bool bParam2)//Position - 0x11513
{
	var uVar0;
	
	if (iParam0 == 20 && (!func_391() || unk_0xF1734B55490E9045(sParam1)))
	{
		uVar0 = func_464();
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

char* func_464()//Position - 0x11671
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

void func_465()//Position - 0x116B5
{
	Global_8FCD = 1;
}

bool func_466(bool bParam0, int iParam1, bool bParam2)//Position - 0x116C1
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

void func_467(int iParam0, var uParam1, bool bParam2)//Position - 0x11701
{
	unk_0x7CB6FD92BE491AD9(&(uParam1->f_21), 7);
	Global_180515 = 0;
	func_381();
	Global_180514 = 0;
	uParam1->f_1B = 0;
	if (bParam2)
	{
		if (func_5(&(uParam1->f_13)))
		{
			func_7(&(uParam1->f_13));
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

int func_468()//Position - 0x11773
{
	if (func_371())
	{
		return 0;
	}
	if (func_481())
	{
		return 0;
	}
	if (!func_479())
	{
		return 0;
	}
	if (!func_477())
	{
		return 0;
	}
	if (func_476(8, -1))
	{
		return 0;
	}
	if (func_482() == 2)
	{
		return 0;
	}
	if (Global_267214.f_11B1)
	{
		return 0;
	}
	if (func_475())
	{
		return 0;
	}
	else if (!func_472(unk_0xB5CEFD608600A09F(), 1) && Global_1403E4[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_471(1) || func_469(1)) || Global_4336.f_7C) || Global_4336)
	{
		return 0;
	}
	if (unk_0xE186ACC7BE9B244E())
	{
		return 0;
	}
	if (func_260(unk_0xB5CEFD608600A09F()))
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
	if (func_224(0))
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

int func_469(bool bParam0)//Position - 0x118BB
{
	if (unk_0x546584EE3E61A6C6())
	{
		if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
		{
			if (func_470(unk_0xBC25C936A095B5BA()))
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

int func_470(int iParam0)//Position - 0x119A6
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

bool func_471(bool bParam0)//Position - 0x11A03
{
	if (bParam0)
	{
		return (Global_4336.f_4 && Global_4336.f_68 == 4);
	}
	return Global_4336.f_4;
}

int func_472(int iParam0, bool bParam1)//Position - 0x11A2C
{
	if (bParam1)
	{
		if (func_473(iParam0))
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

bool func_473(int iParam0)//Position - 0x11A58
{
	return func_474(iParam0);
}

bool func_474(int iParam0)//Position - 0x11A66
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_D.f_1, 0);
}

bool func_475()//Position - 0x11A80
{
	return Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_C4 != 0;
}

bool func_476(int iParam0, int iParam1)//Position - 0x11A97
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

int func_477()//Position - 0x11AD2
{
	if (func_478() == 0)
	{
		return 1;
	}
	return 0;
}

int func_478()//Position - 0x11AE7
{
	return Global_1406D2.f_12;
}

int func_479()//Position - 0x11AF5
{
	if (func_480())
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

bool func_480()//Position - 0x11B34
{
	return Global_1406B6;
}

bool func_481()//Position - 0x11B40
{
	return Global_18402B[unk_0xB5CEFD608600A09F() /*770*/] == 5;
}

int func_482()//Position - 0x11B55
{
	return Global_14CC81.f_44;
}

int func_483()//Position - 0x11B63
{
	if (Global_180516 > 16)
	{
		return 1;
	}
	return 0;
}

float func_484()//Position - 0x11B79
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0xFAD6B644971DD747()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_485(int iParam0)//Position - 0x11B9D
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

int func_486()//Position - 0x11BC6
{
	if (func_487(unk_0xB5CEFD608600A09F()))
	{
		return Global_141780;
	}
	return 0;
}

int func_487(int iParam0)//Position - 0x11BE1
{
	if (unk_0x7AF0088ABFA713B6())
	{
		if (func_47(iParam0, 0))
		{
			return unk_0xE502970386494D01(iParam0);
		}
	}
	return 0;
}

int func_488()//Position - 0x11C04
{
	if (func_486())
	{
		return 1;
	}
	if (func_425(unk_0xB5CEFD608600A09F()))
	{
		return 0;
	}
	if (func_454())
	{
		return 1;
	}
	if (func_118(unk_0xB5CEFD608600A09F()))
	{
		switch (func_397(unk_0xB5CEFD608600A09F()))
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
				if (!func_489(unk_0xB5CEFD608600A09F()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_489(unk_0xB5CEFD608600A09F()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_489(unk_0xB5CEFD608600A09F()))
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

bool func_489(int iParam0)//Position - 0x11CDF
{
	return unk_0xFA30DFD0084E92FE(Global_18C80F[iParam0 /*558*/].f_1, 4);
}

int func_490(int iParam0)//Position - 0x11CF7
{
	if (iParam0 == 27)
	{
		if ((func_118(unk_0xB5CEFD608600A09F()) && !func_116(unk_0xB5CEFD608600A09F())) && !func_396(unk_0xB5CEFD608600A09F(), 236))
		{
			return 1;
		}
	}
	if (iParam0 == 26)
	{
		if (func_63(unk_0xB5CEFD608600A09F(), 0) && func_116(unk_0xB5CEFD608600A09F()))
		{
			return 1;
		}
		if (func_111(unk_0xB5CEFD608600A09F()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

void func_491()//Position - 0x11D68
{
	if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		func_511();
		unk_0xBBC4195AD74D153D(0, 140, 1);
		unk_0xBBC4195AD74D153D(0, 141, 1);
		unk_0xBBC4195AD74D153D(0, 142, 1);
		unk_0xBBC4195AD74D153D(0, 143, 1);
		unk_0xBBC4195AD74D153D(0, 24, 1);
		unk_0xBBC4195AD74D153D(0, 24, 1);
		unk_0xBBC4195AD74D153D(0, 345, 1);
		unk_0xBBC4195AD74D153D(0, 346, 1);
		unk_0xBBC4195AD74D153D(0, 347, 1);
	}
}

bool func_492()//Position - 0x11DCC
{
	return func_27() >= 2;
}

void func_493()//Position - 0x11DDA
{
	func_53(3000, 3000);
}

void func_494()//Position - 0x11DEC
{
	int iVar0;
	
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
		if (((((unk_0x6083B27DCD8F65CF(iVar0) || unk_0x6F79ECA8C83E4357(iVar0) == joaat("hydra")) || unk_0x6F79ECA8C83E4357(iVar0) == joaat("savage")) || unk_0x6F79ECA8C83E4357(iVar0) == joaat("buzzard")) || unk_0x6F79ECA8C83E4357(iVar0) == joaat("insurgent")) || unk_0x6F79ECA8C83E4357(iVar0) == joaat("valkyrie"))
		{
			unk_0xBBC4195AD74D153D(0, 68, 1);
			unk_0xBBC4195AD74D153D(0, 69, 1);
			unk_0xBBC4195AD74D153D(0, 70, 1);
		}
	}
}

void func_495()//Position - 0x11E86
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_13())
	{
		if (!unk_0x2DA8CA50A72528FB(iLocal_142[iVar0]))
		{
			if (unk_0x8EA6CABD14F1B89A(Local_168.f_13[iVar0]))
			{
				iLocal_142[iVar0] = unk_0x511FE22BCF5353CD(unk_0x370629AFF3A5C45C(Local_168.f_13[iVar0]));
				unk_0xBF0E22F3E083C33D(iLocal_142[iVar0], 351);
				unk_0x0D5352939CC40C16(iLocal_142[iVar0], 2);
				unk_0x436D0272182E484D(iLocal_142[iVar0], "GB_AMMOPICKBLIP");
			}
		}
		iVar0++;
	}
}

void func_496()//Position - 0x11F03
{
	unk_0xF0059F27F7BB6680(&(Global_267214.f_1311), 1);
}

void func_497(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x11F17
{
	int iVar0;
	int iVar1;
	
	if (iParam3 == -1)
	{
		if (!func_116(unk_0xB5CEFD608600A09F()))
		{
			return;
		}
	}
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		func_503(iParam2);
		return;
	}
	iVar1 = func_62(unk_0xB5CEFD608600A09F());
	if (iParam3 != -1)
	{
		iVar1 = iParam3;
	}
	if (unk_0x3362CDE8460ED38B(func_502(iVar1), "IE_PRE_COUNTDOWN_STOP"))
	{
		iVar0 = 35000;
	}
	else
	{
		iVar0 = 40000;
	}
	if (iParam2->f_1 > -1)
	{
		iVar0 = iParam2->f_1;
	}
	if (!unk_0xFA30DFD0084E92FE(*iParam2, 0))
	{
		if (iParam0 <= iVar0)
		{
			if (unk_0x3857DADBD6EC8A54(func_502(iVar1)))
			{
				unk_0xF0059F27F7BB6680(iParam2, 0);
				unk_0xF0059F27F7BB6680(iParam2, 1);
			}
		}
	}
	if (unk_0xFA30DFD0084E92FE(*iParam2, 1))
	{
		if (iParam0 <= 30000)
		{
			if (!unk_0xFA30DFD0084E92FE(*iParam2, 2))
			{
				if (unk_0x6FED2D1AA2EBF334(func_501(iVar1)))
				{
					unk_0x9B90420B04C07704("AllowScoreAndRadio", 1);
					unk_0x1549CEF3D921CF97(0);
					unk_0xF0059F27F7BB6680(iParam2, 2);
				}
			}
			if (!unk_0xFA30DFD0084E92FE(*iParam2, 3))
			{
				if (unk_0x3857DADBD6EC8A54(func_500(iVar1)))
				{
					unk_0xF0059F27F7BB6680(iParam2, 3);
				}
			}
			if (unk_0xFA30DFD0084E92FE(*iParam2, 3))
			{
				if (iParam0 <= 27000)
				{
					if (!unk_0xFA30DFD0084E92FE(*iParam2, 4))
					{
						unk_0x1549CEF3D921CF97(1);
						unk_0x9B90420B04C07704("AllowScoreAndRadio", 0);
						unk_0xF0059F27F7BB6680(iParam2, 4);
					}
					if (iParam0 <= 5000 && func_499(iVar1))
					{
						if (!unk_0xFA30DFD0084E92FE(*iParam2, 8))
						{
							unk_0xC4BA30B532FE260F(-1, "5s", "MP_MISSION_COUNTDOWN_SOUNDSET", false);
							unk_0xF0059F27F7BB6680(iParam2, 8);
						}
					}
					if (iParam0 <= 500)
					{
						if (unk_0x3857DADBD6EC8A54(func_498(iVar1)))
						{
							unk_0x748798F6C2AB96B7(func_501(iVar1));
							unk_0x7CB6FD92BE491AD9(iParam2, 1);
						}
					}
				}
			}
		}
	}
}

char* func_498(int iParam0)//Position - 0x120BA
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
		case 236:
			return "IE_FADE_IN_RADIO";
		
		default:
	}
	return "FM_COUNTDOWN_30S_FIRA";
}

int func_499(int iParam0)//Position - 0x12170
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

char* func_500(int iParam0)//Position - 0x121BA
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
		case 236:
			return "IE_COUNTDOWN_30S";
		
		default:
	}
	return "FM_COUNTDOWN_30S";
}

char* func_501(int iParam0)//Position - 0x12270
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
		case 236:
			return "IE_COUNTDOWN_30S_KILL";
		
		default:
	}
	return "FM_COUNTDOWN_30S_KILL";
}

char* func_502(int iParam0)//Position - 0x12326
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
		case 236:
			return "IE_PRE_COUNTDOWN_STOP";
		
		default:
	}
	return "FM_PRE_COUNTDOWN_30S";
}

void func_503(int iParam0)//Position - 0x123DC
{
	int iVar0;
	
	iVar0 = func_62(unk_0xB5CEFD608600A09F());
	if (unk_0xFA30DFD0084E92FE(*iParam0, 1))
	{
		if (!unk_0xFA30DFD0084E92FE(*iParam0, 5))
		{
			if (unk_0xFA30DFD0084E92FE(*iParam0, 2))
			{
				if (!unk_0xFA30DFD0084E92FE(*iParam0, 4))
				{
					unk_0x1549CEF3D921CF97(1);
					unk_0x9B90420B04C07704("AllowScoreAndRadio", 0);
				}
			}
			if (!unk_0xFA30DFD0084E92FE(*iParam0, 6))
			{
				if (unk_0x3857DADBD6EC8A54(func_501(iVar0)))
				{
					unk_0xF0059F27F7BB6680(iParam0, 6);
				}
			}
			if (unk_0xFA30DFD0084E92FE(*iParam0, 6))
			{
				if (!unk_0xFA30DFD0084E92FE(*iParam0, 7))
				{
					if (unk_0x3857DADBD6EC8A54(func_498(iVar0)))
					{
						unk_0xF0059F27F7BB6680(iParam0, 7);
					}
				}
				if (unk_0xFA30DFD0084E92FE(*iParam0, 7))
				{
					unk_0xF0059F27F7BB6680(iParam0, 5);
				}
			}
		}
	}
}

void func_504(int iParam0)//Position - 0x12487
{
	unk_0xB0B0FE33F4F22679(iParam0);
	unk_0xDA70546257A3ED8B("HUD_MINI_GAME_SOUNDSET");
}

void func_505()//Position - 0x1249D
{
	int iVar0;
	
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (!func_44(unk_0xF0BF4763784095DA(), 8))
		{
			if (func_508())
			{
				func_82(8);
				if (func_5(&uLocal_165))
				{
					func_7(&uLocal_165);
				}
			}
		}
		else if (!func_508())
		{
			func_80(8);
		}
		if (iLocal_136 >= 0)
		{
			if (func_508())
			{
				if (!unk_0x1BD5EE88F32433CD(iLocal_136))
				{
					unk_0x38FF8CB6377D36F6(iLocal_136);
				}
			}
		}
		if (func_44(unk_0xF0BF4763784095DA(), 1))
		{
			if (Local_169[iLocal_132 /*6*/].f_5 == 3)
			{
				if (Global_24FB5C[unk_0xB5CEFD608600A09F() /*406*/].f_DA == 99)
				{
					if (!func_44(unk_0xF0BF4763784095DA(), 8))
					{
						if (!func_5(&uLocal_165))
						{
							if (func_506())
							{
								unk_0xC4BA30B532FE260F(iLocal_136, "Out_of_Bounds_Explode", "MP_MISSION_COUNTDOWN_SOUNDSET", false);
							}
							else
							{
								unk_0xC4BA30B532FE260F(iLocal_136, "Out_of_Bounds", "MP_MISSION_COUNTDOWN_SOUNDSET", false);
							}
							func_4(&uLocal_165, 0, 0);
						}
						if (func_5(&uLocal_165))
						{
							if (!func_2(&uLocal_165, 10000, 0))
							{
							}
							else if (unk_0xCBBE5AFE2CD2E9B6(unk_0xBC25C936A095B5BA()))
							{
								iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
								unk_0x8195A15B79CC81A4(iVar0, 1, 0, -1);
								Local_169[unk_0x6BAA0516CC970D99() /*6*/].f_4++;
							}
							else
							{
								unk_0x65E471E4A2D56226(unk_0xBC25C936A095B5BA(), 0, 0);
								Local_169[unk_0x6BAA0516CC970D99() /*6*/].f_4++;
							}
						}
					}
					if (!func_506())
					{
						func_511();
						unk_0xBBC4195AD74D153D(0, 140, 1);
						unk_0xBBC4195AD74D153D(0, 141, 1);
						unk_0xBBC4195AD74D153D(0, 142, 1);
						unk_0xBBC4195AD74D153D(0, 143, 1);
						unk_0xBBC4195AD74D153D(0, 24, 1);
						unk_0xBBC4195AD74D153D(0, 24, 1);
					}
				}
				else if (func_5(&uLocal_165))
				{
					func_7(&uLocal_165);
				}
			}
		}
	}
}

int func_506()//Position - 0x1264F
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			iVar1 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
			iVar0 = unk_0x6F79ECA8C83E4357(iVar1);
			if (func_507(iVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_507(int iParam0)//Position - 0x12690
{
	if (unk_0x7512ED01F3F46714(iParam0) && !unk_0x2B4DE5C0D509B0F9(iParam0))
	{
		return 1;
	}
	if ((((iParam0 == joaat("chimera") || iParam0 == joaat("blazer")) || iParam0 == joaat("blazer2")) || iParam0 == joaat("blazer3")) || iParam0 == joaat("blazer4"))
	{
		return 1;
	}
	return 0;
}

int func_508()//Position - 0x126F8
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	func_509(&vVar0, &vVar1, &fVar2);
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), vVar0, vVar1, fVar2, 0, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_509(var uParam0, var uParam1, var uParam2)//Position - 0x12733
{
	switch (Local_168.f_1F)
	{
		case 0:
			*uParam0 = { 1056.1f, 3042.89f, 30.78792f };
			*uParam1 = { 1727.083f, 3227.135f, 71.17491f };
			*uParam2 = 100f;
			break;
		
		case 1:
			*uParam0 = { -1689.147f, -2829.733f, 13.9444f };
			*uParam1 = { -989.6f, -3256.4f, 10.9444f };
			*uParam2 = 107f;
			break;
		
		case 2:
			*uParam0 = { 1914.747f, 4705.012f, 35.1674f };
			*uParam1 = { 2166.719f, 4826.836f, 45.523f };
			*uParam2 = 50f;
			break;
	}
}

void func_510(bool bParam0)//Position - 0x127EA
{
	unk_0xBBC4195AD74D153D(0, 71, 1);
	unk_0xBBC4195AD74D153D(0, 72, 1);
	unk_0xBBC4195AD74D153D(0, 76, 1);
	unk_0xBBC4195AD74D153D(0, 59, 1);
	unk_0xBBC4195AD74D153D(0, 60, 1);
	if (bParam0)
	{
		unk_0xBBC4195AD74D153D(0, 75, 1);
	}
	unk_0xBBC4195AD74D153D(0, 80, 1);
	unk_0xBBC4195AD74D153D(0, 69, 1);
	unk_0xBBC4195AD74D153D(0, 70, 1);
	unk_0xBBC4195AD74D153D(0, 68, 1);
	unk_0xBBC4195AD74D153D(0, 74, 1);
	unk_0xBBC4195AD74D153D(0, 86, 1);
	unk_0xBBC4195AD74D153D(0, 81, 1);
	unk_0xBBC4195AD74D153D(0, 82, 1);
	unk_0xBBC4195AD74D153D(0, 114, 1);
	unk_0xBBC4195AD74D153D(0, 107, 1);
	unk_0xBBC4195AD74D153D(0, 110, 1);
	unk_0xBBC4195AD74D153D(0, 89, 1);
	unk_0xBBC4195AD74D153D(0, 89, 1);
	unk_0xBBC4195AD74D153D(0, 87, 1);
	unk_0xBBC4195AD74D153D(0, 88, 1);
	unk_0xBBC4195AD74D153D(0, 113, 1);
	unk_0xBBC4195AD74D153D(0, 115, 1);
	unk_0xBBC4195AD74D153D(0, 116, 1);
	unk_0xBBC4195AD74D153D(0, 117, 1);
	unk_0xBBC4195AD74D153D(0, 118, 1);
	unk_0xBBC4195AD74D153D(0, 119, 1);
}

void func_511()//Position - 0x128CF
{
	unk_0xBBC4195AD74D153D(0, 69, 1);
	unk_0xBBC4195AD74D153D(0, 70, 1);
	unk_0xBBC4195AD74D153D(0, 68, 1);
	unk_0xBBC4195AD74D153D(0, 114, 1);
	unk_0xBBC4195AD74D153D(0, 115, 1);
	unk_0xBBC4195AD74D153D(0, 116, 1);
	unk_0xBBC4195AD74D153D(0, 91, 1);
	unk_0xBBC4195AD74D153D(0, 92, 1);
	unk_0xBBC4195AD74D153D(0, 99, 1);
	unk_0xBBC4195AD74D153D(0, 100, 1);
	unk_0xBBC4195AD74D153D(0, 24, 1);
	unk_0xBBC4195AD74D153D(0, 257, 1);
	unk_0xBBC4195AD74D153D(0, 37, 1);
}

void func_512()//Position - 0x12940
{
	if (!func_518())
	{
		return;
	}
	if (!unk_0x56BEECB328B6D29D(unk_0x1377080E9B0BD993()) == Global_140740.f_9)
	{
		return;
	}
	func_513();
}

void func_513()//Position - 0x1296D
{
	func_515();
	func_514(0);
}

void func_514(bool bParam0)//Position - 0x1297E
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

void func_515()//Position - 0x12A14
{
	if (!func_517())
	{
	}
	if (func_518())
	{
		unk_0x0C2CA00C24C64582(&(Global_140740.f_C));
		func_516();
		unk_0xF633952844D6CF3D();
	}
}

void func_516()//Position - 0x12A3D
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

int func_517()//Position - 0x12CAF
{
	if (!func_518())
	{
		return 0;
	}
	unk_0xE2CFC41F8121CE68(&(Global_140740.f_C));
	func_516();
	return unk_0x121EFFA2D57472F2();
}

int func_518()//Position - 0x12CD5
{
	if (Global_140740 == 20)
	{
		return 0;
	}
	return 1;
}

void func_519(bool bParam0)//Position - 0x12CEB
{
	int iVar0;
	
	iVar0 = func_34(unk_0xB5CEFD608600A09F());
	if (bParam0)
	{
		iLocal_144 = unk_0x84788C4CA5E15BDC(unk_0xBC25C936A095B5BA());
		unk_0x4106FAF8AA1D69D5(unk_0xBC25C936A095B5BA(), uLocal_143[iVar0]);
		func_78(0);
		func_522();
		func_520();
	}
}

void func_520()//Position - 0x12D29
{
	int iVar0;
	
	iVar0 = func_34(unk_0xB5CEFD608600A09F());
	func_66();
	switch (Local_168.f_1F)
	{
		case 0:
			switch (iVar0)
			{
				case 0:
					func_521(1708.082f, 3257.124f, 40.0367f, 103.4795f);
					func_521(1708.174f, 3249.501f, 40.0217f, 105.6852f);
					func_521(1709.982f, 3241.591f, 39.9943f, 111.8098f);
					func_521(1713.491f, 3233.364f, 40.1406f, 102.9456f);
					func_521(1701.75f, 3218.817f, 40.4952f, 101.568f);
					func_521(1699.146f, 3212.31f, 41.0702f, 89.9389f);
					func_521(1684.962f, 3214.27f, 41.6779f, 93.4364f);
					func_521(1677.763f, 3224.455f, 39.5792f, 95.5699f);
					func_521(1674.756f, 3233.18f, 39.6863f, 100.0559f);
					func_521(1672.174f, 3242.395f, 39.6958f, 97.4521f);
					break;
				
				case 1:
					func_521(1056.888f, 3088.653f, 40.3451f, 278.7011f);
					func_521(1060.045f, 3081.229f, 40.2589f, 278.8035f);
					func_521(1062.256f, 3073.965f, 40.2523f, 286.0508f);
					func_521(1064.773f, 3066.959f, 40.2525f, 287.8311f);
					func_521(1066.519f, 3057.584f, 40.2967f, 275.5681f);
					func_521(1069.415f, 3042.697f, 40.3412f, 291.182f);
					func_521(1070.516f, 3033.868f, 40.3801f, 289.8516f);
					func_521(1075.104f, 3023.745f, 40.3225f, 276.9676f);
					func_521(1076.357f, 3015.861f, 40.3525f, 288.1565f);
					func_521(1075.891f, 3067.573f, 39.8683f, 291.6247f);
					break;
			}
			break;
		
		case 1:
			switch (iVar0)
			{
				case 0:
					func_521(-1024.927f, -3260.799f, 12.9444f, 80.47f);
					func_521(-1022.464f, -3257.815f, 12.9444f, 80.47f);
					func_521(-1027.673f, -3254.468f, 12.9444f, 80.47f);
					func_521(-1022.058f, -3255.974f, 12.9444f, 80.47f);
					func_521(-1026.681f, -3253.933f, 12.9444f, 80.47f);
					func_521(-1028.014f, -3248.853f, 12.9444f, 80.47f);
					func_521(-1023.804f, -3248.954f, 12.9444f, 80.47f);
					func_521(-1026.189f, -3244.342f, 12.9444f, 80.47f);
					func_521(-1021.859f, -3244.705f, 12.9444f, 80.47f);
					break;
				
				case 1:
					func_521(-1650.909f, -2860.519f, 12.9444f, 250.7f);
					func_521(-1648.204f, -2866.492f, 12.9444f, 250.7f);
					func_521(-1641.552f, -2865.687f, 12.9452f, 250.7f);
					func_521(-1634.865f, -2869.221f, 12.948f, 250.7f);
					func_521(-1634.6f, -2874.042f, 12.9556f, 250.7f);
					func_521(-1629.217f, -2873.462f, 12.9513f, 250.7f);
					func_521(-1626.581f, -2878.242f, 12.9573f, 250.7f);
					func_521(-1621.161f, -2877.972f, 12.951f, 250.7f);
					break;
			}
			break;
		
		case 2:
			switch (iVar0)
			{
				case 0:
					func_521(2128.587f, 4814.231f, 40.1959f, 103.4795f);
					func_521(2131.345f, 4808.89f, 40.1959f, 103.4795f);
					func_521(2133.655f, 4803.1f, 40.1576f, 103.4795f);
					func_521(2127.704f, 4799.296f, 40.1545f, 103.4795f);
					func_521(2123.396f, 4801.777f, 40.0564f, 103.4795f);
					func_521(2119.169f, 4806.328f, 40.1959f, 103.4795f);
					func_521(2114.736f, 4804.185f, 40.1931f, 103.4795f);
					func_521(2113.656f, 4800.263f, 40.1573f, 103.4795f);
					func_521(2115.452f, 4795.467f, 40.1041f, 103.4795f);
					func_521(2110.035f, 4793.893f, 39.8382f, 103.4795f);
					break;
				
				case 1:
					func_521(1927.808f, 4712.542f, 40.1779f, 278.7011f);
					func_521(1928.894f, 4718.197f, 40.1608f, 278.7011f);
					func_521(1934.309f, 4718.631f, 40.098f, 278.7011f);
					func_521(1941.779f, 4714.215f, 40.0632f, 278.7011f);
					func_521(1945.644f, 4715.785f, 40.0656f, 278.7011f);
					func_521(1947.567f, 4720.629f, 40.0604f, 278.7011f);
					func_521(1947.436f, 4726.579f, 40.0851f, 278.7011f);
					func_521(1951.564f, 4730.475f, 40.1026f, 278.7011f);
					func_521(1955.027f, 4729.683f, 40.0806f, 278.7011f);
					func_521(1958.042f, 4726.624f, 40.0604f, 278.7011f);
					func_521(1963.565f, 4722.866f, 40.0783f, 278.7011f);
					break;
			}
			break;
	}
}

void func_521(vector3 vParam0, float fParam1)//Position - 0x1331F
{
	if (Global_24B2CE.f_6C8 < 101)
	{
		if (SYSTEM::VMAG(vParam0) <= 0.01f)
		{
			return;
		}
		Global_24B2CE.f_6C9[Global_24B2CE.f_6C8 /*4*/] = { vParam0 };
		Global_24B2CE.f_6C9[Global_24B2CE.f_6C8 /*4*/].f_3 = fParam1;
		Global_24B2CE.f_6C8++;
	}
}

void func_522()//Position - 0x13384
{
	int iVar0;
	
	iVar0 = func_34(unk_0xB5CEFD608600A09F());
	func_54(1, 1, 0, 1060320051, 1f, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 1);
	func_524(1, joaat("hexer"), 0, 0, 0, 0, -1, 1, 0, 0, 0);
	switch (Local_168.f_1F)
	{
		case 0:
			switch (iVar0)
			{
				case 0:
					func_523(1708.082f, 3257.124f, 40.0367f, 103.4795f, 1065353216);
					func_523(1708.174f, 3249.501f, 40.0217f, 105.6852f, 1065353216);
					func_523(1709.982f, 3241.591f, 39.9943f, 111.8098f, 1065353216);
					func_523(1713.491f, 3233.364f, 40.1406f, 102.9456f, 1065353216);
					func_523(1701.75f, 3218.817f, 40.4952f, 101.568f, 1065353216);
					func_523(1699.146f, 3212.31f, 41.0702f, 89.9389f, 1065353216);
					func_523(1684.962f, 3214.27f, 41.6779f, 93.4364f, 1065353216);
					func_523(1677.763f, 3224.455f, 39.5792f, 95.5699f, 1065353216);
					func_523(1674.756f, 3233.18f, 39.6863f, 100.0559f, 1065353216);
					func_523(1672.174f, 3242.395f, 39.6958f, 97.4521f, 1065353216);
					break;
				
				case 1:
					func_523(1056.888f, 3088.653f, 40.3451f, 278.7011f, 1065353216);
					func_523(1060.045f, 3081.229f, 40.2589f, 278.8035f, 1065353216);
					func_523(1062.256f, 3073.965f, 40.2523f, 286.0508f, 1065353216);
					func_523(1064.773f, 3066.959f, 40.2525f, 287.8311f, 1065353216);
					func_523(1066.519f, 3057.584f, 40.2967f, 275.5681f, 1065353216);
					func_523(1069.415f, 3042.697f, 40.3412f, 291.182f, 1065353216);
					func_523(1070.516f, 3033.868f, 40.3801f, 289.8516f, 1065353216);
					func_523(1075.104f, 3023.745f, 40.3225f, 276.9676f, 1065353216);
					func_523(1076.357f, 3015.861f, 40.3525f, 288.1565f, 1065353216);
					func_523(1075.891f, 3067.573f, 39.8683f, 291.6247f, 1065353216);
					break;
			}
			break;
		
		case 1:
			switch (iVar0)
			{
				case 0:
					func_523(-1024.927f, -3260.799f, 12.9444f, 80.47f, 1065353216);
					func_523(-1022.464f, -3257.815f, 12.9444f, 80.47f, 1065353216);
					func_523(-1027.673f, -3254.468f, 12.9444f, 80.47f, 1065353216);
					func_523(-1022.058f, -3255.974f, 12.9444f, 80.47f, 1065353216);
					func_523(-1026.681f, -3253.933f, 12.9444f, 80.47f, 1065353216);
					func_523(-1028.014f, -3248.853f, 12.9444f, 80.47f, 1065353216);
					func_523(-1023.804f, -3248.954f, 12.9444f, 80.47f, 1065353216);
					func_523(-1026.189f, -3244.342f, 12.9444f, 80.47f, 1065353216);
					func_523(-1021.859f, -3244.705f, 12.9444f, 80.47f, 1065353216);
					break;
				
				case 1:
					func_523(-1650.909f, -2860.519f, 12.9444f, 250.7f, 1065353216);
					func_523(-1648.204f, -2866.492f, 12.9444f, 250.7f, 1065353216);
					func_523(-1641.552f, -2865.687f, 12.9452f, 250.7f, 1065353216);
					func_523(-1634.865f, -2869.221f, 12.948f, 250.7f, 1065353216);
					func_523(-1634.6f, -2874.042f, 12.9556f, 250.7f, 1065353216);
					func_523(-1629.217f, -2873.462f, 12.9513f, 250.7f, 1065353216);
					func_523(-1626.581f, -2878.242f, 12.9573f, 250.7f, 1065353216);
					func_523(-1621.161f, -2877.972f, 12.951f, 250.7f, 1065353216);
					break;
			}
			break;
		
		case 2:
			switch (iVar0)
			{
				case 0:
					func_523(2128.587f, 4814.231f, 40.1959f, 103.4795f, 1065353216);
					func_523(2131.345f, 4808.89f, 40.1959f, 103.4795f, 1065353216);
					func_523(2133.655f, 4803.1f, 40.1576f, 103.4795f, 1065353216);
					func_523(2127.704f, 4799.296f, 40.1545f, 103.4795f, 1065353216);
					func_523(2123.396f, 4801.777f, 40.0564f, 103.4795f, 1065353216);
					func_523(2119.169f, 4806.328f, 40.1959f, 103.4795f, 1065353216);
					func_523(2114.736f, 4804.185f, 40.1931f, 103.4795f, 1065353216);
					func_523(2113.656f, 4800.263f, 40.1573f, 103.4795f, 1065353216);
					func_523(2115.452f, 4795.467f, 40.1041f, 103.4795f, 1065353216);
					func_523(2110.035f, 4793.893f, 39.8382f, 103.4795f, 1065353216);
					break;
				
				case 1:
					func_523(1927.808f, 4712.542f, 40.1779f, 278.7011f, 1065353216);
					func_523(1928.894f, 4718.197f, 40.1608f, 278.7011f, 1065353216);
					func_523(1934.309f, 4718.631f, 40.098f, 278.7011f, 1065353216);
					func_523(1941.779f, 4714.215f, 40.0632f, 278.7011f, 1065353216);
					func_523(1945.644f, 4715.785f, 40.0656f, 278.7011f, 1065353216);
					func_523(1947.567f, 4720.629f, 40.0604f, 278.7011f, 1065353216);
					func_523(1947.436f, 4726.579f, 40.0851f, 278.7011f, 1065353216);
					func_523(1951.564f, 4730.475f, 40.1026f, 278.7011f, 1065353216);
					func_523(1955.027f, 4729.683f, 40.0806f, 278.7011f, 1065353216);
					func_523(1958.042f, 4726.624f, 40.0604f, 278.7011f, 1065353216);
					func_523(1963.565f, 4722.866f, 40.0783f, 278.7011f, 1065353216);
					break;
			}
			break;
	}
}

void func_523(vector3 vParam0, float fParam1, int iParam2)//Position - 0x13ACF
{
	if (!Global_24B2CE.f_6C7)
	{
	}
	if (Global_24B2CE.f_2BE < 100)
	{
		if (SYSTEM::VMAG(vParam0) <= 0.01f)
		{
			return;
		}
		Global_24B2CE.f_2BE.f_1[Global_24B2CE.f_2BE /*5*/] = { vParam0 };
		Global_24B2CE.f_2BE.f_1[Global_24B2CE.f_2BE /*5*/].f_3 = fParam1;
		Global_24B2CE.f_2BE.f_1[Global_24B2CE.f_2BE /*5*/].f_4 = iParam2;
		Global_24B2CE.f_2BE++;
	}
}

void func_524(bool bParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x13B59
{
	int iVar0;
	bool bVar1;
	
	if (!iParam1 == 0 && !unk_0xA4267BD4AB92007E(iParam1))
	{
		iParam1 = joaat("tailgater");
	}
	Global_24B2CE.f_2C.f_41 = bParam0;
	Global_24B2CE.f_2C.f_43 = iParam1;
	Global_24B2CE.f_2C.f_44 = bParam2;
	Global_24B2CE.f_2C.f_AD = iParam3;
	Global_24B2CE.f_2C.f_42 = iParam4;
	Global_24B2CE.f_2C.f_AF = bParam5;
	Global_24B2CE.f_2C.f_B0 = bParam7;
	Global_24B2CE.f_2C.f_B4 = iParam6;
	Global_24B2CE.f_2C.f_B1 = iParam8;
	Global_24B2CE.f_2C.f_B2 = iParam9;
	Global_24B2CE.f_2C.f_B3 = bParam10;
	if (!bParam0)
	{
		func_527();
	}
	if (bParam2)
	{
		iVar0 = func_526();
		if (unk_0x724D816EA203A79E(iVar0))
		{
			if (!unk_0x5CAE759AE8219D20(iVar0))
			{
				if (unk_0x63B5FF8D34CBC98E(iVar0))
				{
					unk_0x77815D3407C6700D(iVar0, false, 1);
					bVar1 = true;
				}
			}
			if (!unk_0x1D403DFADBC2DE3C(iVar0, 0))
			{
				if (unk_0xB248FAA35ED47DB9(iVar0, 1))
				{
					if (!unk_0x4DF785C4DF542CD0(iVar0))
					{
						unk_0xCDF25F6ADC88CCB4(unk_0xD3495809C4827891(iVar0));
					}
				}
			}
			if (unk_0x4DF785C4DF542CD0(iVar0))
			{
				if (bVar1)
				{
					unk_0x1E7A09C1710FB071(&iVar0);
				}
				if (bParam5)
				{
					if (!unk_0x1D403DFADBC2DE3C(iVar0, 0))
					{
						unk_0xDB35A2F9333ABEC5(iVar0, true);
					}
				}
				if (bParam7)
				{
					if (!unk_0x1D403DFADBC2DE3C(iVar0, 0))
					{
						unk_0xE82050D41B744FF3(iVar0, false);
					}
				}
				if (iParam6 > -1)
				{
					unk_0x914C5DE0B15B8B59(iVar0, iParam6, iParam6);
					unk_0x4C59702AC1076A88(iVar0, iParam6, iParam6);
				}
				if (bParam10)
				{
					func_525(iVar0);
				}
			}
		}
	}
}

void func_525(int iParam0)//Position - 0x13CC3
{
	if (unk_0x724D816EA203A79E(iParam0) && !unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		if (unk_0x4DF785C4DF542CD0(iParam0))
		{
			if (Global_199620 > -1)
			{
				if (unk_0x46032D09AA009EC4("GBMissionFire", 3))
				{
					if (!unk_0x3C03CFD5DD1E2D97(iParam0, "GBMissionFire"))
					{
						unk_0x3F9FE9BB735B1604(iParam0, "GBMissionFire", Global_199620);
					}
				}
			}
		}
	}
}

var func_526()//Position - 0x13D2A
{
	return Global_24B2CE.f_A59;
}

void func_527()//Position - 0x13D39
{
	struct<102> Var0;
	
	Var0.f_9 = 49;
	Var0.f_3B = 2;
	Var0.f_4E = -1;
	Var0.f_4F = -1;
	Var0.f_60 = -1;
	Var0.f_61 = 1;
	Var0.f_63 = 132;
	Var0.f_64 = -1;
	Global_24B2CE.f_2C.f_45 = { Var0 };
	Global_24B2CE.f_2C.f_AB = 0;
}

void func_528()//Position - 0x13D91
{
	if (!func_44(unk_0xF0BF4763784095DA(), 1))
	{
		return;
	}
	if (!func_716(7))
	{
		func_544(&iLocal_108);
		func_692(7);
		unk_0xADC7E88690E324EB(func_543(func_34(unk_0xB5CEFD608600A09F())), 50f, 1);
	}
	if (!func_44(unk_0xF0BF4763784095DA(), 7))
	{
		if (func_542(&iLocal_108))
		{
			if (func_17(10))
			{
				if (func_529(&iLocal_108, 1, 0, 1))
				{
					func_82(7);
				}
			}
		}
	}
}

int func_529(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x13E03
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	if (func_542(iParam0))
	{
		if (!func_541(&(iParam0->f_3)))
		{
			func_539(&(iParam0->f_3));
		}
		unk_0x996AC9A66B2A5A3F(4);
		if (unk_0xA7F138B5B1AB2CF6(*iParam0))
		{
			unk_0x4B6031094354FED6(*iParam0, 255, 255, 255, 100, 0);
		}
		iVar0 = SYSTEM::FLOOR(func_536(&(iParam0->f_3)));
		iVar1 = unk_0xC40EDFF7541407A8((iVar0 - 3));
		bVar2 = false;
		if (func_535(iParam0->f_1, 4))
		{
			if (iParam0->f_2 >= 5)
			{
				if (!func_535(iParam0->f_1, 16))
				{
					unk_0xC4BA30B532FE260F(-1, "GO", "HUD_MINI_GAME_SOUNDSET", false);
					func_533(&(iParam0->f_1), 16);
					unk_0x5125612B0BECDB38();
				}
			}
			else
			{
				iParam0->f_2++;
			}
		}
		if (!func_535(iParam0->f_1, 8))
		{
			if (iVar1 == 3 && !func_535(iParam0->f_1, 1))
			{
				func_533(&(iParam0->f_1), 1);
				unk_0xC4BA30B532FE260F(-1, "3_2_1", "HUD_MINI_GAME_SOUNDSET", false);
				func_532(iParam0, iVar1);
			}
			else if (iVar1 == 2 && !func_535(iParam0->f_1, 2))
			{
				func_533(&(iParam0->f_1), 2);
				unk_0xC4BA30B532FE260F(-1, "3_2_1", "HUD_MINI_GAME_SOUNDSET", false);
				func_532(iParam0, iVar1);
			}
			else if (iVar1 == 1 && !func_535(iParam0->f_1, 4))
			{
				func_533(&(iParam0->f_1), 4);
				unk_0xC4BA30B532FE260F(-1, "3_2_1", "HUD_MINI_GAME_SOUNDSET", false);
				func_532(iParam0, iVar1);
			}
			else if (iVar1 == 0 && !func_535(iParam0->f_1, 8))
			{
				func_533(&(iParam0->f_1), 8);
				unk_0x3857DADBD6EC8A54("BIKER_JOUST_FIGHT");
				unk_0xE45648BDBF3441F5(18, &iVar3, &iVar4, &iVar5, &uVar6);
				unk_0x29CD142125FE177B(*iParam0, "SET_MESSAGE");
				func_388("CNTDWN_GO");
				unk_0x1E1FB49121565EB6(iVar3);
				unk_0x1E1FB49121565EB6(iVar4);
				unk_0x1E1FB49121565EB6(iVar5);
				unk_0x5E5DBD0A6623969E(true);
				unk_0xF9FBC2F3F73D94C9();
				func_82(6);
				if (!bParam1)
				{
					bVar2 = true;
				}
			}
		}
		else if (iVar1 == 1)
		{
			bVar2 = true;
		}
		if ((iParam2 && func_531()) || iVar0 > 5)
		{
			bVar2 = true;
		}
		if (bVar2)
		{
			if (bParam3)
			{
				iParam0->f_1 = 0;
				func_530(&(iParam0->f_3));
			}
			unk_0xC1300D0F3A74E20B("RACES_RADIO_MUTE_scene");
			unk_0xD6423910AAD8A379("MP_RACE_GENERAL_SCENE");
			iVar7 = 0;
			while (iVar7 < unk_0x81C86888AEA2F49B())
			{
				if (unk_0x05086B70D2CFEA6F(unk_0xCFA8A401AAD7BB5A(iVar7)))
				{
					iVar8 = unk_0x4ED43B67B3F05E0F(unk_0xCFA8A401AAD7BB5A(iVar7));
					if (iVar8 != unk_0xB5CEFD608600A09F())
					{
						iVar9 = unk_0xA95CF30C72EB526E(iVar8);
						if (unk_0x5237AF95232D78C5(iVar9, 0))
						{
							iVar10 = unk_0x9FE9D386222EEE47(iVar9, 0);
							unk_0x55662F9F262C2F9B(iVar10, "MP_RACE_NPC_CAR_Group", 0f);
						}
					}
				}
				iVar7++;
			}
			return 1;
		}
	}
	return 0;
}

void func_530(var uParam0)//Position - 0x1408B
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_531()//Position - 0x140A1
{
	if (unk_0xE186ACC7BE9B244E())
	{
		return 0;
	}
	if (unk_0x8FCEEB789599BD9B(0, 18) || unk_0x8FCEEB789599BD9B(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_532(int iParam0, int iParam1)//Position - 0x140D3
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	unk_0xE45648BDBF3441F5(12, &iVar0, &iVar1, &iVar2, &uVar3);
	unk_0x29CD142125FE177B(*iParam0, "SET_MESSAGE");
	unk_0x57016C44F10111F0("NUMBER");
	unk_0xAA5C5BF0489E5553(unk_0xC40EDFF7541407A8(iParam1));
	unk_0x64989E60CF560CA1();
	unk_0x1E1FB49121565EB6(iVar0);
	unk_0x1E1FB49121565EB6(iVar1);
	unk_0x1E1FB49121565EB6(iVar2);
	unk_0x5E5DBD0A6623969E(true);
	unk_0xF9FBC2F3F73D94C9();
}

void func_533(var uParam0, int iParam1)//Position - 0x14126
{
	func_534(uParam0, iParam1);
}

void func_534(var uParam0, var uParam1)//Position - 0x14136
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_535(var uParam0, int iParam1)//Position - 0x14147
{
	return (uParam0 && iParam1) != 0;
}

float func_536(var uParam0)//Position - 0x14156
{
	if (func_541(uParam0))
	{
		if (func_538(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_537(unk_0xFA30DFD0084E92FE(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_537(bool bParam0)//Position - 0x14195
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = SYSTEM::TO_FLOAT(unk_0x105601648511CC64());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x7AF0088ABFA713B6())
	{
		iVar2 = unk_0xED678C85A82F0AB9();
		fVar3 = SYSTEM::TO_FLOAT(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (SYSTEM::TO_FLOAT(unk_0x105601648511CC64()) / 1000f);
}

bool func_538(var uParam0)//Position - 0x141ED
{
	return unk_0xFA30DFD0084E92FE(*uParam0, 2);
}

void func_539(int iParam0)//Position - 0x141FD
{
	func_540(iParam0, 0f);
}

void func_540(int iParam0, float fParam1)//Position - 0x1420C
{
	iParam0->f_1 = (func_537(unk_0xFA30DFD0084E92FE(*iParam0, 4)) - fParam1);
	unk_0xF0059F27F7BB6680(iParam0, 1);
	unk_0x7CB6FD92BE491AD9(iParam0, 2);
	iParam0->f_2 = 0f;
}

bool func_541(var uParam0)//Position - 0x1423A
{
	return unk_0xFA30DFD0084E92FE(*uParam0, 1);
}

int func_542(int iParam0)//Position - 0x1424A
{
	if (!unk_0xA7F138B5B1AB2CF6(*iParam0))
	{
		return 0;
	}
	return 1;
}

Vector3 func_543(int iParam0)//Position - 0x14262
{
	switch (Local_168.f_1F)
	{
		case 0:
			if (iParam0 == 0)
			{
				return 1706.612f, 3251.994f, 40.1522f;
			}
			return 1066.192f, 3078.314f, 40.9174f;
			break;
		
		case 1:
			if (iParam0 == 0)
			{
				return -1004.147f, -3235.733f, 12.9444f;
			}
			return -1675.056f, -2848.475f, 12.9444f;
			break;
		
		case 2:
			if (iParam0 == 0)
			{
				return 2141.719f, 4811.836f, 40.1823f;
			}
			return 1928.747f, 4713.012f, 40.1674f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_544(int iParam0)//Position - 0x14310
{
	*iParam0 = unk_0x9934FEFB3B8C6DB8("COUNTDOWN");
}

void func_545()//Position - 0x14323
{
	int iVar0;
	int iVar1;
	
	if (unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (func_44(unk_0xF0BF4763784095DA(), 1))
		{
			func_80(1);
		}
		if (func_44(unk_0xF0BF4763784095DA(), 2))
		{
			func_80(2);
		}
		return;
	}
	if (func_567() || func_564())
	{
		func_511();
		unk_0xBBC4195AD74D153D(0, 140, 1);
		unk_0xBBC4195AD74D153D(0, 141, 1);
		unk_0xBBC4195AD74D153D(0, 142, 1);
		unk_0xBBC4195AD74D153D(0, 143, 1);
		unk_0xBBC4195AD74D153D(0, 24, 1);
		unk_0xBBC4195AD74D153D(0, 345, 1);
		unk_0xBBC4195AD74D153D(0, 346, 1);
		unk_0xBBC4195AD74D153D(0, 347, 1);
	}
	if (func_567())
	{
		if (!func_44(unk_0xF0BF4763784095DA(), 4))
		{
			func_82(4);
			unk_0x8E25082A46F87892(unk_0xBC25C936A095B5BA(), joaat("weapon_unarmed"), false);
			unk_0xEF791AEFDDE09A3D(false);
			unk_0x0130A557FECA322C(unk_0xBC25C936A095B5BA(), 0);
		}
		if (unk_0xCBBE5AFE2CD2E9B6(unk_0xBC25C936A095B5BA()))
		{
			if (func_563(2))
			{
				func_562(2);
			}
			if (!func_79())
			{
				if (func_563(3))
				{
					func_562(3);
				}
				iVar1 = unk_0xD20EBB97FE8799ED(unk_0xBC25C936A095B5BA());
				iVar0 = unk_0x6F79ECA8C83E4357(iVar1);
				if (func_507(iVar0))
				{
					unk_0x020AA92DA39D4617(iVar1, 1);
					func_561(3);
					if (func_563(4))
					{
						func_562(4);
					}
					if (!func_44(unk_0xF0BF4763784095DA(), 2))
					{
						func_82(2);
					}
					if (unk_0xFA30DFD0084E92FE(Local_168.f_2, unk_0x6BAA0516CC970D99()))
					{
						if (!func_44(unk_0xF0BF4763784095DA(), 1))
						{
							unk_0x3857DADBD6EC8A54("BIKER_JOUST_START");
							func_82(1);
							func_559();
							unk_0x0F789D8A502A4C34(1);
						}
						if (!func_558() || !func_557())
						{
							if (func_45(unk_0xB5CEFD608600A09F()))
							{
								if (!func_558())
								{
									func_546(6);
								}
							}
							else
							{
								func_546(7);
							}
						}
						else
						{
							func_546(8);
						}
					}
				}
				else
				{
					if (func_44(unk_0xF0BF4763784095DA(), 1))
					{
						func_80(1);
					}
					if (func_44(unk_0xF0BF4763784095DA(), 2))
					{
						func_80(2);
					}
					func_546(4);
				}
			}
			else
			{
				if (func_44(unk_0xF0BF4763784095DA(), 1))
				{
					func_80(1);
				}
				if (func_44(unk_0xF0BF4763784095DA(), 2))
				{
					func_80(2);
				}
				if (func_44(unk_0xF0BF4763784095DA(), 4))
				{
					func_80(4);
				}
				func_546(3);
			}
		}
		else
		{
			if (func_44(unk_0xF0BF4763784095DA(), 1))
			{
				func_80(1);
			}
			if (func_44(unk_0xF0BF4763784095DA(), 2))
			{
				func_80(2);
			}
			func_546(2);
		}
	}
	else
	{
		if (func_44(unk_0xF0BF4763784095DA(), 1))
		{
			func_80(1);
		}
		if (func_44(unk_0xF0BF4763784095DA(), 2))
		{
			func_80(2);
		}
		if (func_44(unk_0xF0BF4763784095DA(), 4))
		{
			func_80(4);
			func_78(0);
			unk_0x0130A557FECA322C(unk_0xBC25C936A095B5BA(), 1);
		}
	}
}

void func_546(int iParam0)//Position - 0x1459E
{
	struct<8> Var0;
	int iVar1;
	
	if (func_556())
	{
		if (!func_563(iParam0))
		{
			switch (iParam0)
			{
				case 3:
					func_100("JST_PASSMD", -1);
					break;
				
				case 2:
					func_100("JST_NOBIKE", -1);
					break;
				
				case 5:
					break;
				
				case 6:
					func_100("JST_HRBOSS", -1);
					break;
				
				case 7:
					func_100("JST_HWBOSS", -1);
					break;
				
				case 8:
					func_100("JST_HTBOSS", -1);
					break;
				
				case 9:
					func_100("JST_KBIKE", -1);
					break;
				
				case 11:
					func_100("JST_OAREA", -1);
					break;
				
				case 12:
					func_100("JST_HSTART", -1);
					break;
				
				case 13:
					if (func_164())
					{
						func_555("JST_HTBLAUNCH", "JST_BLIP", iLocal_145, -1);
					}
					else
					{
						func_555("JST_HGNLNCH", "JST_BLIP", iLocal_145, -1);
					}
					break;
				
				case 14:
					func_555("JST_HGNLNCH", "JST_BLIP", iLocal_145, -1);
					break;
				
				case 10:
					func_555("JST_FIGHT", "HUNT_TARBLP", iLocal_146, -1);
					break;
				
				case 15:
					func_555("JST_AMMOH", "JST_AMMOBL", 18, -1);
					break;
				
				case 16:
					StringCopy(&Var0, func_549(func_36()), 64);
					iVar1 = func_694(func_36());
					func_548("JST_RVLLNCH", &Var0, iVar1, "JST_BLIP", iLocal_145, -1);
					break;
				
				case 17:
					if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
					{
						if (unk_0x6F79ECA8C83E4357(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)) != 884483972)
						{
							func_100("JST_DOUB", -1);
						}
					}
					break;
				
				default:
					break;
			}
			func_96(1);
			func_547(iParam0);
		}
	}
}

void func_547(int iParam0)//Position - 0x14748
{
	unk_0xF0059F27F7BB6680(&iLocal_124, iParam0);
}

void func_548(char* sParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x14759
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

char* func_549(int iParam0)//Position - 0x14798
{
	char* sVar0;
	int iVar1;
	
	if (iParam0 == unk_0xB5CEFD608600A09F())
	{
		sVar0 = func_554(&(Global_18C80F[iParam0 /*558*/].f_B.f_63));
		return sVar0;
	}
	if (Global_18C80F[iParam0 /*558*/].f_B.f_73 != Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_73)
	{
		sVar0 = func_552(iParam0, 0);
		return sVar0;
	}
	if (((func_105(iParam0, 28) || func_105(unk_0xB5CEFD608600A09F(), 28)) || func_551(iParam0)) && !func_550(iParam0))
	{
		return func_552(iParam0, 0);
	}
	iVar1 = func_251(iParam0);
	if (iVar1 != func_29())
	{
		if (iVar1 != unk_0xB5CEFD608600A09F())
		{
			if (!unk_0xF49912B78E2591B6() && !unk_0x7A3896EC51DA2E5E(0, -1, 1))
			{
				return func_552(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_29())
	{
		sVar0 = func_554(&(Global_18C80F[iVar1 /*558*/].f_B.f_63));
		if (unk_0xF1734B55490E9045(sVar0))
		{
			return func_552(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

int func_550(int iParam0)//Position - 0x1489F
{
	struct<13> Var0;
	
	Var0 = { func_191(iParam0) };
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

int func_551(int iParam0)//Position - 0x148CF
{
	struct<13> Var0;
	
	if (iParam0 != func_29())
	{
		Var0 = { func_191(iParam0) };
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

char* func_552(int iParam0, bool bParam1)//Position - 0x14928
{
	if (!bParam1)
	{
		if (func_98(iParam0, 1))
		{
			return func_553();
		}
	}
	return unk_0xFCB4C1AC11347344("GB_REST_ACC");
}

char* func_553()//Position - 0x1494F
{
	return unk_0xFCB4C1AC11347344("GB_REST_ACCM");
}

var func_554(var uParam0)//Position - 0x1495F
{
	return uParam0;
}

void func_555(char* sParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x14969
{
	unk_0x2F618BD43614DD0D(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x449F0674640D94C0(iParam2);
	}
	unk_0xC9C304D0AABE1335(sParam1);
	unk_0x72F8FA06CC9EC899(0, 0, false, iParam3);
}

int func_556()//Position - 0x14994
{
	if (((((!func_371() && !unk_0xE186ACC7BE9B244E()) && !unk_0x7382A6B79BD5F585()) && func_955(unk_0xB5CEFD608600A09F(), 1, 1)) && !func_119()) && !unk_0xF16DAFF595E80F7C())
	{
		return 1;
	}
	return 0;
}

bool func_557()//Position - 0x149E0
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_34(unk_0xB5CEFD608600A09F());
	if (iVar1 == 0)
	{
		iVar0 = 8;
	}
	else
	{
		iVar0 = 9;
	}
	return func_17(iVar0);
}

bool func_558()//Position - 0x14A09
{
	int iVar0;
	int iVar1;
	
	iVar0 = (1 - func_34(unk_0xB5CEFD608600A09F()));
	if (iVar0 == 0)
	{
		iVar1 = 8;
	}
	else
	{
		iVar1 = 9;
	}
	return func_17(iVar1);
}

void func_559()//Position - 0x14A34
{
	if (!func_560(unk_0xB5CEFD608600A09F()))
	{
		func_120(25);
	}
}

bool func_560(int iParam0)//Position - 0x14A4E
{
	return func_105(iParam0, 25);
}

void func_561(int iParam0)//Position - 0x14A5E
{
	Global_24B2CE.f_2C.f_12E = iParam0;
	unk_0x8A8475988CA32D80(unk_0xBC25C936A095B5BA(), Global_24B2CE.f_2C.f_12E);
	if (Global_24B2CE.f_2C.f_12E == 1)
	{
		unk_0xC8FD3EBBB90E8D7F(unk_0xBC25C936A095B5BA(), 115, true);
	}
	else
	{
		unk_0xC8FD3EBBB90E8D7F(unk_0xBC25C936A095B5BA(), 115, false);
	}
}

void func_562(int iParam0)//Position - 0x14AA8
{
	unk_0x7CB6FD92BE491AD9(&iLocal_124, iParam0);
}

bool func_563(int iParam0)//Position - 0x14AB9
{
	return unk_0xFA30DFD0084E92FE(iLocal_124, iParam0);
}

int func_564()//Position - 0x14ACA
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	float fVar3;
	
	vVar0 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true) };
	vVar1 = { func_543(func_566(unk_0xB5CEFD608600A09F())) };
	fVar2 = unk_0xF0F2FC9DE291567F(vVar0, vVar1, false);
	fVar3 = (func_565(func_566(unk_0xB5CEFD608600A09F())) / 2f);
	if (fVar2 <= fVar3)
	{
		if (unk_0x357058E632979E65((vVar1.z - vVar0.z)) <= fVar3)
		{
			return 1;
		}
	}
	return 0;
}

float func_565(int iParam0)//Position - 0x14B2E
{
	if (iParam0 == 0)
	{
		return 44.75f;
	}
	return 44.75f;
}

int func_566(int iParam0)//Position - 0x14B49
{
	if (func_37(iParam0) || func_35(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_567()//Position - 0x14B6B
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	float fVar3;
	
	vVar0 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true) };
	vVar1 = { func_543(func_34(unk_0xB5CEFD608600A09F())) };
	fVar2 = unk_0xF0F2FC9DE291567F(vVar0, vVar1, false);
	fVar3 = (func_565(func_34(unk_0xB5CEFD608600A09F())) / 2f);
	if (fVar2 <= fVar3)
	{
		if (unk_0x357058E632979E65((vVar1.z - vVar0.z)) <= fVar3)
		{
			return 1;
		}
	}
	return 0;
}

void func_568()//Position - 0x14BCF
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	
	unk_0xE45648BDBF3441F5(iLocal_145, &iVar0, &iVar1, &iVar2, &iVar3);
	fVar4 = 16.125f;
	fVar5 = 3.75f;
	fVar6 = func_565(func_34(unk_0xB5CEFD608600A09F()));
	vVar7 = { func_543(func_34(unk_0xB5CEFD608600A09F())) };
	vVar7.z = (vVar7.z - fVar5);
	unk_0xC6EA3A47240425C4(1, vVar7, 0f, 0f, 0f, 0f, 0f, 0f, fVar6, fVar6, fVar4, iVar0, iVar1, iVar2, iVar3, 0, 0, 2, 0, 0, 0, false);
}

void func_569()//Position - 0x14C41
{
	if (func_608())
	{
		func_602();
		func_601();
		func_588();
		func_571();
		func_570();
	}
	else
	{
		switch (func_111(unk_0xB5CEFD608600A09F()))
		{
			case 0:
				func_512();
				break;
			
			case 1:
				func_602();
				break;
			
			case 2:
				func_570();
				break;
			
			case 3:
				func_602();
				func_601();
				func_588();
				func_570();
				func_571();
				break;
			}
	}
}

void func_570()//Position - 0x14CB8
{
	if (func_27() >= 2)
	{
		if (func_17(11))
		{
			if (func_44(unk_0xF0BF4763784095DA(), 1))
			{
				if (!func_563(10))
				{
					func_546(10);
				}
				else
				{
					func_546(15);
				}
				if (!func_563(17))
				{
					func_546(17);
				}
			}
		}
		else if (!func_44(unk_0xF0BF4763784095DA(), 1))
		{
			func_546(12);
		}
		else
		{
			func_546(12);
		}
	}
	else if (func_27() >= 1)
	{
		if (func_608())
		{
			if (unk_0xB5CEFD608600A09F() == Local_168.f_10[0])
			{
				func_546(13);
			}
			else
			{
				func_546(14);
			}
		}
		else
		{
			func_546(16);
		}
	}
}

void func_571()//Position - 0x14D5E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_5(&uLocal_165))
	{
		if (func_5(&(Local_168.f_5)))
		{
			iLocal_135 = (func_3() - func_22(&(Local_168.f_5), 0, 0));
			if (iLocal_135 < func_3())
			{
				if (iLocal_135 > 30000)
				{
					iVar1 = 1;
				}
				else
				{
					iVar1 = 6;
				}
				func_587();
				iVar2 = func_34(unk_0xB5CEFD608600A09F());
				iVar3 = (1 - iVar2);
				iVar4 = func_694(unk_0xB5CEFD608600A09F());
				iVar5 = Local_168.f_10[iVar3];
				if (Local_168.f_18[iVar2] > 0)
				{
					func_584(Local_168.f_1B[iVar2], "JST_TEAML", -1, iVar4, 5, 0, 0, 0, 0, 0, 0, iVar4, 0, iLocal_105, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1);
				}
				else
				{
					func_584(Local_168.f_1B[iVar2], "JST_TEAML", 999999999, 6, 5, 0, 0, 0, 0, 2, 0, 6, 0, iLocal_105, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1);
				}
				if (iVar5 != func_29())
				{
					if (unk_0x96B1061E8F3CBC9A(iVar5))
					{
						if (!unk_0xF1734B55490E9045(&Local_156))
						{
							iVar4 = func_694(iVar5);
							func_584(Local_168.f_1B[iVar3], "JST_ETEAML", -1, iVar4, 4, 0, 0, 0, 0, 0, 0, iVar4, 0, iLocal_105, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1);
						}
					}
				}
				if (iLocal_135 > 0)
				{
					func_583(iLocal_135, "CLUB_WORK_END", 0, 0, -1, 0, 3, 0, iVar1, 0, 0, 0, 0, 0, 0, 0, 0);
				}
				else
				{
					func_583(0, "CLUB_WORK_END", 0, 0, -1, 0, 3, 0, iVar1, 0, 0, 0, 0, 0, 0, 0, 0);
				}
			}
		}
		else
		{
			func_572();
		}
	}
	else
	{
		iVar0 = (10000 - func_22(&uLocal_165, 0, 0));
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		if (func_955(unk_0xB5CEFD608600A09F(), 1, 1))
		{
			func_587();
			func_583(iVar0, "PEN_ELM", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
		}
	}
}

void func_572()//Position - 0x14F1A
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_492())
	{
		return;
	}
	bVar0 = func_24();
	iVar1 = func_23();
	if (func_17(5))
	{
		iVar1 = func_21();
	}
	if (bVar0)
	{
		iVar2 = func_582();
		if (iVar2 > iLocal_129)
		{
			iVar2 = iLocal_129;
		}
		if (iVar3 != Local_168.f_3)
		{
			iVar3 = Local_168.f_3;
		}
		if ((iVar1 - func_22(&(Local_168.f_7), 0, 0)) >= 0)
		{
			func_581((iVar1 - func_22(&(Local_168.f_7), 0, 0)));
			func_573(iVar3, iVar2, (iVar1 - func_22(&(Local_168.f_7), 0, 0)), 1, func_580(-1));
		}
		else
		{
			func_573(iVar3, iVar2, 0, 1, func_580(-1));
		}
	}
}

void func_573(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4)//Position - 0x14FC1
{
	char* sVar0;
	
	if (func_578(0) == 0)
	{
		return;
	}
	func_577();
	func_574(iParam0, iParam1, "HUD_PARITIC", -1, 1, 4, 0, 0, 0, 0, 0, 1, 1, 0, 255, 0);
	sVar0 = "HUD_COUNTDOWN";
	if (!func_212(sParam4))
	{
		sVar0 = sParam4;
	}
	func_583(iParam2, sVar0, 0, 0, -1, 0, 3, 0, iParam3, 0, 0, 0, iParam3, 0, 0, 0, 0);
}

void func_574(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)//Position - 0x15020
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_576(4, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_14D262.f_1 = 1;
		func_575(4, iVar0);
		Global_14D262.f_C1A[iVar0] = iParam0;
		Global_14D262.f_C1A.f_AC[iVar0] = iParam1;
		StringCopy(&(Global_14D262.f_C1A.f_B[iVar0 /*16*/]), sParam2, 64);
		Global_14D262.f_C1A.f_B7[iVar0] = iParam3;
		Global_14D262.f_C1A.f_D8[iVar0] = iParam5;
		Global_14D262.f_C1A.f_C2[iVar0] = iParam4;
		Global_14D262.f_C1A.f_E3[iVar0] = iParam6;
		Global_14D262.f_C1A.f_10E[iVar0] = iParam7;
		Global_14D262.f_C1A.f_119[iVar0] = iParam8;
		Global_14D262.f_C1A.f_124[iVar0] = iParam9;
		Global_14D262.f_C1A.f_12F[iVar0] = iParam10;
		Global_14D262.f_C1A.f_13A[iVar0] = iParam11;
		Global_14D262.f_C1A.f_145[iVar0] = iParam13;
		Global_14D262.f_C1A.f_150[iVar0] = iParam14;
		Global_14D262.f_C1A.f_15B[iVar0] = iParam15;
		if (((iParam0 > 9 && iParam1 > 9) && unk_0x8ACB0C3FACC09467()) && iParam12)
		{
			Global_14D262.f_440 = 1;
		}
	}
}

void func_575(int iParam0, int iParam1)//Position - 0x1517A
{
	unk_0xF0059F27F7BB6680(&(Global_14D262.f_17E7[iParam0]), iParam1);
}

bool func_576(int iParam0, int iParam1)//Position - 0x15193
{
	return unk_0xFA30DFD0084E92FE(Global_14D262.f_17E7[iParam0], iParam1);
}

void func_577()//Position - 0x151AC
{
	unk_0x4E0EC60D119222B1(8);
	unk_0x4E0EC60D119222B1(9);
	unk_0x4E0EC60D119222B1(6);
	unk_0x4E0EC60D119222B1(7);
	Global_258667 = 1;
}

int func_578(bool bParam0)//Position - 0x151CF
{
	if (func_579())
	{
		return 0;
	}
	if (func_475())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_955(unk_0xB5CEFD608600A09F(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_579()//Position - 0x15206
{
	return unk_0xFA30DFD0084E92FE(Global_240006, 12);
}

char* func_580(int iParam0)//Position - 0x15218
{
	char* sVar0;
	
	sVar0 = unk_0x1377080E9B0BD993();
	return "HUD_STARTING";
	if (unk_0x3362CDE8460ED38B(sVar0, "am_hot_target"))
	{
		return "AST_HOT_TARG";
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "am_cp_collection"))
	{
		return "AST_CHK_COLL";
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "am_challenges"))
	{
		switch (iParam0)
		{
			case 0:
				return "AST_CHALL_LJ";
			
			case 1:
				return "AST_CHALL_LS";
			
			case 2:
				return "AST_CHALL_HS";
			
			case 3:
				return "AST_CHALL_LST";
			
			case 4:
				return "AST_CHALL_LW";
			
			case 5:
				return "AST_CHALL_NC";
			
			case 6:
				return "AST_CHALL_LP";
			
			case 7:
				return "AST_CHALL_VS";
			
			case 8:
				return "AST_CHALL_NM";
			
			case 9:
				return "AST_CHALL_RD";
			
			case 10:
				return "AST_CHALL_LF";
			
			case 11:
				return "AST_CHALL_LFL";
			
			case 12:
				return "AST_CHALL_LFI";
			
			case 13:
				return "AST_CHALL_LB";
			
			case 14:
				return "AST_CHALL_MB";
			
			case 15:
				return "AST_CHALL_HSH";
			
			case 16:
				return "AST_CHALL_DB";
			
			case 17:
				return "AST_CHALL_ML";
			
			case 18:
				return "AST_CHALL_LSN";
			
			default:
		}
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "am_penned_in"))
	{
		return "AST_PENNED";
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "am_pass_the_parcel"))
	{
		return "AST_PARCEL";
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "am_hot_property"))
	{
		return "AST_PROPERTY";
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "am_dead_drop"))
	{
		return "AST_DDROP";
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "am_king_of_the_castle"))
	{
		return "AST_KCASTLE";
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "AM_CRIMINAL_DAMAGE"))
	{
		return "AST_BLAST";
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "AM_KILL_LIST"))
	{
		return "AST_UWARF";
	}
	else if (unk_0x3362CDE8460ED38B(sVar0, "AM_HUNT_THE_BEAST"))
	{
		return "AST_BEAST";
	}
	return "";
}

void func_581(int iParam0)//Position - 0x15422
{
	if (IntToFloat(iParam0) < unk_0x11F9F9006143871A())
	{
		Global_267214.f_126F = 0;
	}
	else if (iParam0 < 6000)
	{
		if (!unk_0xFA30DFD0084E92FE(Global_267214.f_126F, 1))
		{
			unk_0xC4BA30B532FE260F(-1, "5s_To_Event_Start_Countdown", "GTAO_FM_Events_Soundset", false);
			Global_267214.f_126F = 0;
			unk_0xF0059F27F7BB6680(&(Global_267214.f_126F), 1);
		}
	}
}

int func_582()//Position - 0x1547A
{
	return 16;
}

void func_583(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)//Position - 0x15484
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_576(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_14D262.f_1 = 1;
		func_575(7, iVar0);
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

void func_584(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, var uParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24)//Position - 0x155D2
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_576(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_14D262.f_1 = 1;
		func_575(6, iVar0);
		Global_14D262.f_EBA[iVar0] = iParam0;
		StringCopy(&(Global_14D262.f_EBA.f_B[iVar0 /*16*/]), sParam1, 64);
		Global_14D262.f_EBA.f_B7[iVar0] = iParam3;
		Global_14D262.f_EBA.f_AC[iVar0] = iParam2;
		Global_14D262.f_EBA.f_104[iVar0] = iParam4;
		Global_14D262.f_EBA.f_10F[iVar0] = iParam5;
		StringCopy(&(Global_14D262.f_EBA.f_11A[iVar0 /*16*/]), sParam6, 64);
		Global_14D262.f_EBA.f_1BB[iVar0] = iParam7;
		Global_14D262.f_EBA.f_1C6[iVar0] = iParam8;
		Global_14D262.f_EBA.f_1F1[iVar0] = iParam9;
		Global_14D262.f_EBA.f_1FC[iVar0] = iParam10;
		Global_14D262.f_EBA.f_CD[iVar0] = iParam11;
		Global_14D262.f_EBA.f_D8[iVar0] = iParam12;
		Global_14D262.f_EBA.f_E3[iVar0] = uParam13;
		Global_14D262.f_EBA.f_EE[iVar0] = iParam14;
		Global_14D262.f_EBA.f_F9[iVar0] = iParam15;
		Global_14D262.f_EBA.f_207[iVar0] = iParam16;
		Global_14D262.f_EBA.f_212[iVar0] = iParam17;
		Global_14D262.f_EBA.f_21D[iVar0] = iParam18;
		Global_14D262.f_EBA.f_228[iVar0] = iParam19;
		Global_14D262.f_EBA.f_233[iVar0] = iParam20;
		Global_14D262.f_EBA.f_23E[iVar0] = iParam21;
		Global_14D262.f_EBA.f_249[iVar0] = iParam22;
		Global_14D262.f_EBA.f_254[iVar0] = iParam23;
		Global_14D262.f_EBA.f_25F[iVar0] = iParam24;
		if (iParam15 == 5 && func_586())
		{
			Global_14D262.f_440 = 1;
		}
		if (unk_0x8ACB0C3FACC09467())
		{
			iVar2 = 0;
			unk_0x1BBB0A5225346008(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_14D262.f_444 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_14D262.f_443 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_14D262.f_440 = 1;
			}
			if (func_585())
			{
				Global_14D262.f_444 = 1;
			}
		}
	}
}

int func_585()//Position - 0x15834
{
	int iVar0;
	var uVar1;
	
	if (unk_0x8ACB0C3FACC09467())
	{
		unk_0x1BBB0A5225346008(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_586()//Position - 0x15858
{
	if (((unk_0x83D607D7994DEF3A() == 8 || unk_0x83D607D7994DEF3A() == 9) || unk_0x83D607D7994DEF3A() == 10) || unk_0x83D607D7994DEF3A() == 12)
	{
		return 1;
	}
	return 0;
}

void func_587()//Position - 0x15896
{
	Global_14D262.f_440 = 1;
}

void func_588()//Position - 0x158A6
{
	if (iLocal_132 > -1)
	{
		if (func_44(unk_0xCFA8A401AAD7BB5A(iLocal_132), 1))
		{
			if (func_44(unk_0xCFA8A401AAD7BB5A(iLocal_132), 6))
			{
				if (func_508())
				{
					if (func_506())
					{
						if (!func_600("JST_OBJ_KILL"))
						{
							func_599("JST_OBJ_KILL", &Local_156, iLocal_146, 0);
						}
					}
					else
					{
						if (func_600("JST_OBJ_KILL"))
						{
							func_512();
						}
						if (!func_600("JST_FBIKE"))
						{
							func_596("JST_FBIKE", 0);
						}
						if (!func_44(unk_0xF0BF4763784095DA(), 10))
						{
							func_82(10);
							func_595("JST_FBIKEGUNS", -1);
						}
					}
				}
				else if (func_506())
				{
					if (!func_600("JST_OBKAREA"))
					{
						func_596("JST_OBKAREA", 0);
					}
				}
				else
				{
					if (func_600("JST_OBJ_KILL"))
					{
						func_512();
					}
					if (!func_600("JST_FBIKE"))
					{
						func_596("JST_FBIKE", 0);
					}
				}
			}
			else if (func_716(9))
			{
				if (func_506())
				{
					if (!func_600("JST_OBJ_CHARGE"))
					{
						func_599("JST_OBJ_CHARGE", &Local_156, iLocal_146, 0);
					}
				}
			}
		}
		else if (!func_567())
		{
			if (!func_600("JST_OGOAREA"))
			{
				func_589("JST_OGOAREA", "JST_START", iLocal_145, 0);
			}
		}
		else if (!func_506())
		{
			if (!func_600("JST_OBIKE"))
			{
				func_596("JST_OBIKE", 0);
			}
		}
	}
}

void func_589(char* sParam0, char* sParam1, int iParam2, bool bParam3)//Position - 0x159FB
{
	if (func_590(sParam0, sParam1, bParam3, iParam2))
	{
		Global_140740 = 19;
		Global_140740.f_38 = iParam2;
	}
}

int func_590(char* sParam0, char* sParam1, bool bParam2, var uParam3)//Position - 0x15A20
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
	if (func_594(sParam0, sParam1) && Global_140740.f_38 == Global_140740.f_3A)
	{
		return 0;
	}
	func_513();
	Global_140740 = 3;
	StringCopy(&(Global_140740.f_1), unk_0x1377080E9B0BD993(), 32);
	Global_140740.f_9 = unk_0x56BEECB328B6D29D(&(Global_140740.f_1));
	StringCopy(&(Global_140740.f_C), sParam0, 16);
	StringCopy(&(Global_140740.f_10), sParam1, 64);
	Global_140740.f_3A = uParam3;
	Global_140740.f_38 = uParam3;
	func_593();
	func_592(bParam2);
	func_591();
	return 1;
}

void func_591()//Position - 0x15ACA
{
	unk_0xF0059F27F7BB6680(&(Global_140740.f_3B), 1);
}

void func_592(bool bParam0)//Position - 0x15ADD
{
	if (bParam0)
	{
		unk_0xF0059F27F7BB6680(&(Global_140740.f_3B), 0);
		return;
	}
	unk_0x7CB6FD92BE491AD9(&(Global_140740.f_3B), 0);
}

void func_593()//Position - 0x15B03
{
	Global_140740.f_A = unk_0x863D0D1A37055D36(unk_0xED678C85A82F0AB9(), 86400000);
	Global_140740.f_B = unk_0xED678C85A82F0AB9();
}

bool func_594(char* sParam0, char* sParam1)//Position - 0x15B28
{
	if (!func_518())
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

void func_595(char* sParam0, int iParam1)//Position - 0x15B80
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 0, true, iParam1);
}

void func_596(char* sParam0, bool bParam1)//Position - 0x15B97
{
	if (unk_0xF1734B55490E9045(sParam0))
	{
		return;
	}
	if (unk_0xF5429F058A48A07C(sParam0) > 23)
	{
		return;
	}
	if (func_597(sParam0))
	{
		return;
	}
	func_513();
	Global_140740 = 0;
	StringCopy(&(Global_140740.f_1), unk_0x1377080E9B0BD993(), 32);
	Global_140740.f_9 = unk_0x56BEECB328B6D29D(&(Global_140740.f_1));
	StringCopy(&(Global_140740.f_C), sParam0, 16);
	func_593();
	func_592(bParam1);
	func_591();
}

bool func_597(char* sParam0)//Position - 0x15C02
{
	if (!func_518())
	{
		return 0;
	}
	if (Global_140740 == 11)
	{
		return func_598(sParam0);
	}
	if (unk_0xF1734B55490E9045(sParam0))
	{
		return 0;
	}
	return unk_0x56BEECB328B6D29D(sParam0) == unk_0x56BEECB328B6D29D(&(Global_140740.f_C));
}

bool func_598(char* sParam0)//Position - 0x15C46
{
	if (!func_518())
	{
		return 0;
	}
	if (unk_0xF1734B55490E9045(sParam0))
	{
		return 0;
	}
	return unk_0x56BEECB328B6D29D(sParam0) == unk_0x56BEECB328B6D29D(&(Global_140740.f_10));
}

void func_599(char* sParam0, char* sParam1, int iParam2, bool bParam3)//Position - 0x15C78
{
	if (func_590(sParam0, sParam1, bParam3, iParam2))
	{
		Global_140740 = 16;
		Global_140740.f_38 = iParam2;
	}
}

int func_600(char* sParam0)//Position - 0x15C9D
{
	if (unk_0xF1734B55490E9045(sParam0))
	{
		return 0;
	}
	if (!func_518())
	{
		return 0;
	}
	if (Global_140740 == 11)
	{
		if (unk_0xF5429F058A48A07C(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (unk_0xF5429F058A48A07C(sParam0) > 23)
	{
		return 0;
	}
	return func_597(sParam0);
}

void func_601()//Position - 0x15CEE
{
}

void func_602()//Position - 0x15CF6
{
	if (!func_492())
	{
		func_607();
	}
	else
	{
		if (unk_0x2DA8CA50A72528FB(iLocal_140))
		{
			unk_0x07B8ECB35A4ED3AC(&iLocal_140);
		}
		if (unk_0x2DA8CA50A72528FB(iLocal_139))
		{
			unk_0x07B8ECB35A4ED3AC(&iLocal_139);
		}
		if (iLocal_132 > -1)
		{
			if (func_44(unk_0xCFA8A401AAD7BB5A(iLocal_132), 1))
			{
				func_603();
			}
		}
	}
}

void func_603()//Position - 0x15D49
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	func_606(&vVar0);
	if (!unk_0x2DA8CA50A72528FB(iLocal_141))
	{
		func_605(&fVar1, &fVar2, &iVar3);
		iLocal_141 = unk_0xF9F2FE93ED2D5B55(vVar0, fVar1, fVar2);
		unk_0xCE128634FE291C0D(iLocal_141, iVar3);
		func_604(&iLocal_141, 29);
		unk_0x7781946F1FC054FA(iLocal_141, 180);
		unk_0x222805B89367761E(iLocal_141, false);
	}
}

void func_604(int iParam0, int iParam1)//Position - 0x15D9E
{
	int iVar0;
	
	if (unk_0x2DA8CA50A72528FB(*iParam0))
	{
		iVar0 = func_75(iParam1);
		unk_0x0D5352939CC40C16(*iParam0, iVar0);
	}
}

void func_605(var uParam0, var uParam1, var uParam2)//Position - 0x15DC4
{
	if (Local_168.f_1F == 0)
	{
		*uParam0 = 696f;
		*uParam1 = 101.5f;
		*uParam2 = 16;
	}
	else if (Local_168.f_1F == 1)
	{
		*uParam0 = 817f;
		*uParam1 = 101.5f;
		*uParam2 = 149;
	}
	else if (Local_168.f_1F == 2)
	{
		*uParam0 = 280f;
		*uParam1 = 50.5f;
		*uParam2 = 205;
	}
}

void func_606(var uParam0)//Position - 0x15E2C
{
	switch (Local_168.f_1F)
	{
		case 0:
			*uParam0 = { 1392.895f, 3132.5f, 39.4141f };
			break;
		
		case 1:
			*uParam0 = { -1342.056f, -3041.475f, 10.9444f };
			break;
		
		case 2:
			*uParam0 = { 2039.747f, 4768.012f, 40.1674f };
			break;
	}
}

void func_607()//Position - 0x15E92
{
	if (!unk_0x2DA8CA50A72528FB(iLocal_140))
	{
		iLocal_140 = unk_0x390CF6C8AD6903B7(func_543(func_34(unk_0xB5CEFD608600A09F())));
		unk_0xBF0E22F3E083C33D(iLocal_140, 495);
		unk_0x7A6BBF86FCBBCF7E(iLocal_140, 1);
		unk_0x6F02E6814C1AD504(iLocal_140, 7000);
		unk_0x436D0272182E484D(iLocal_140, "CELL_JOUST");
		unk_0x12DB69036F6569F7(iLocal_140, 9);
		Global_267214.f_106 = 1;
		func_604(&iLocal_140, iLocal_145);
		if (!func_716(6))
		{
			unk_0x621CEDEDDD531386();
			func_692(6);
		}
	}
	if (!unk_0x2DA8CA50A72528FB(iLocal_139))
	{
		iLocal_139 = unk_0x489E7A92D55C10F8(func_543(func_34(unk_0xB5CEFD608600A09F())), (func_565(func_34(unk_0xB5CEFD608600A09F())) / 2f));
		func_604(&iLocal_139, iLocal_145);
		unk_0x7781946F1FC054FA(iLocal_139, 100);
		unk_0x3F5F1772D71D5EC4(iLocal_139, 1.4f);
		unk_0x222805B89367761E(iLocal_139, false);
	}
}

int func_608()//Position - 0x15F5F
{
	if (func_610() || func_609())
	{
		return 1;
	}
	return 0;
}

int func_609()//Position - 0x15F7D
{
	return func_37(unk_0xB5CEFD608600A09F());
}

bool func_610()//Position - 0x15F8D
{
	return func_35(unk_0xB5CEFD608600A09F());
}

void func_611(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0x15F9D
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (bParam5)
	{
		iVar0 = func_397(unk_0xB5CEFD608600A09F());
		Global_196A5F = iVar0;
		Global_196A5F.f_1 = iParam0;
		if (func_168() != func_29())
		{
			Global_196A5F.f_2 = func_691(func_168());
			Global_196A5F.f_3 = func_690(func_168());
		}
		if (func_90() != func_29())
		{
			func_167(func_90(), &(Global_196A5F.f_2), &(Global_196A5F.f_3));
		}
		Global_196A5F.f_7 = unk_0xB99C193A32DE341D();
		Global_196A5F.f_1C = func_689(unk_0xB5CEFD608600A09F());
		Global_196A5F.f_D = 0;
		Global_196A5F.f_E = 0;
		if (func_267(unk_0xB5CEFD608600A09F(), 1))
		{
			Global_196A5F.f_17 = func_688(func_97(1));
		}
	}
	else
	{
		iVar0 = func_62(unk_0xB5CEFD608600A09F());
	}
	if (iParam2 || func_94(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
			iVar0 = iParam3;
		}
		Global_19695A = iVar0;
		if (func_139(iVar0))
		{
			Global_19695A.f_1 = 4;
		}
		else if (func_687(iVar0))
		{
			Global_19695A.f_1 = 5;
		}
		else if (func_87(iVar0, 0))
		{
			Global_19695A.f_1 = 2;
			if (func_131(iVar0))
			{
				Global_19695A.f_1 = 3;
			}
		}
		else
		{
			Global_19695A.f_1 = 1;
		}
		if (func_168() != func_29())
		{
			Global_19695A.f_4 = func_691(func_168());
			Global_19695A.f_5 = func_690(func_168());
		}
		if (func_90() != func_29())
		{
			func_167(func_90(), &(Global_19695A.f_6), &(Global_19695A.f_7));
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
			Global_19695A.f_28 = func_161(iParam1);
			Global_19695A.f_29 = func_686();
			Global_19695A.f_2A = func_321(unk_0xB5CEFD608600A09F(), iParam1);
			Global_19695A.f_2C = func_685(unk_0xB5CEFD608600A09F(), iParam1);
		}
		if (!func_151() || iVar0 != 192)
		{
			Global_19695A.f_35 = 0;
		}
	}
	else if (func_129(iVar0))
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
			Global_1969CF = func_684(unk_0xB5CEFD608600A09F());
		}
		switch (iVar0)
		{
			case 225:
				if (func_125(unk_0xB5CEFD608600A09F()) == 0)
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
		if (func_168() != func_29())
		{
			Global_1969CF.f_4 = func_691(func_168());
			Global_1969CF.f_5 = func_690(func_168());
		}
		if (func_90() != func_29())
		{
			func_167(func_90(), &(Global_1969CF.f_4), &(Global_1969CF.f_5));
		}
		Global_1969CF.f_8 = unk_0xB99C193A32DE341D();
		if (iParam0 != -1)
		{
			Global_1969CF.f_14 = iParam0;
		}
	}
	else if (func_102(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
		}
		Global_196990 = iVar0;
		Global_19695A.f_1 = 1;
		if (func_168() != func_29())
		{
			Global_196990.f_4 = func_691(func_168());
			Global_196990.f_5 = func_690(func_168());
		}
		if (func_90() != func_29())
		{
			func_167(func_90(), &(Global_196990.f_6), &(Global_196990.f_7));
		}
		Global_196990.f_9 = unk_0xB99C193A32DE341D();
		if (iParam0 != -1)
		{
			Global_196990.f_15 = iParam0;
		}
	}
	else if (func_128(iVar0))
	{
		Global_1969FB = iVar0;
		Global_1969FB.f_1 = iParam0;
		Global_1969FB.f_15 = 1;
		Global_1969FB.f_16 = 1;
		if (func_168() != func_29())
		{
			Global_1969FB.f_4 = func_691(func_168());
			Global_1969FB.f_5 = func_690(func_168());
		}
		if (func_90() != func_29())
		{
			func_167(func_90(), &(Global_1969FB.f_4), &(Global_1969FB.f_5));
		}
		Global_1969FB.f_8 = unk_0xB99C193A32DE341D();
		if (iParam0 != -1)
		{
			Global_1969FB.f_14 = iParam0;
		}
		Global_1969FB.f_1B = func_682(func_49(), 5);
		Global_1969FB.f_1C = func_688(func_298(unk_0xB5CEFD608600A09F()));
		Global_1969FB.f_1D = func_137(6103, -1, 0);
		Global_1969FB.f_1E = func_137(6099, -1, 0);
		Global_1969FB.f_1F = func_137(6100, -1, 0);
		Global_1969FB.f_20 = func_137(6102, -1, 0);
		Global_1969FB.f_21 = func_137(6101, -1, 0);
		Global_1969FB.f_22 = func_137(6104, -1, 0);
		Global_1969FB.f_7 = func_680();
		Global_1969FB.f_33 = func_688(bParam4);
	}
	else if (func_127(iVar0))
	{
		Global_196A31 = iVar0;
		Global_196A31.f_1 = iParam0;
		Global_196A31.f_15 = 1;
		Global_196A31.f_16 = 1;
		if (func_168() != func_29())
		{
			Global_196A31.f_4 = func_691(func_168());
			Global_196A31.f_5 = func_690(func_168());
		}
		if (func_90() != func_29())
		{
			func_167(func_90(), &(Global_196A31.f_4), &(Global_196A31.f_5));
		}
		Global_196A31.f_8 = unk_0xB99C193A32DE341D();
		if (iParam0 != -1)
		{
			Global_196A31.f_14 = iParam0;
		}
		Global_196A31.f_18 = func_137(6153, -1, 0);
		Global_196A31.f_19 = func_137(6158, -1, 0);
		Global_196A31.f_1A = func_137(6159, -1, 0);
		Global_196A31.f_1B = func_688((((func_679() || func_678()) || func_677()) || func_676(unk_0xB5CEFD608600A09F())));
		Global_196A31.f_1C = func_137(6160, -1, 0);
		Global_196A31.f_1D = func_688(func_675());
		Global_196A31.f_1F = 0;
		Global_196A31.f_1E = 0;
		Global_196A31.f_20 = 0;
		Global_196A31.f_21 = 0;
		Global_196A31.f_22 = 0;
		Global_196A31.f_10 = 0;
		Global_196A31.f_7 = func_680();
	}
	else if (((((((((iVar0 == 250 || iVar0 == 238) || iVar0 == 242) || iVar0 == 244) || iVar0 == 248) || iVar0 == 241) || iVar0 == 239) || iVar0 == 240) || iVar0 == 249) || (iVar0 == 237 && func_123(func_124(unk_0xB5CEFD608600A09F()))))
	{
		Global_196AB6 = iVar0;
		Global_196AB6.f_1 = iParam0;
		Global_196AB6.f_15 = 1;
		Global_196AB6.f_16 = 1;
		Global_196AB6.f_7 = func_680();
		if (func_168() != func_29())
		{
			Global_196AB6.f_4 = func_691(func_168());
			Global_196AB6.f_5 = func_690(func_168());
		}
		if (func_90() != func_29())
		{
			func_167(func_90(), &(Global_196AB6.f_4), &(Global_196AB6.f_5));
		}
		if (func_168() != -1)
		{
			Global_196AB6.f_11 = func_674(func_168());
		}
		Global_196AB6.f_8 = unk_0xB99C193A32DE341D();
		Global_196AB6.f_1C = func_689(unk_0xB5CEFD608600A09F());
		Global_196AB6.f_10 = 0;
		Global_196AB6.f_18 = 0;
		Global_196AB6.f_17 = 0;
		if (func_267(unk_0xB5CEFD608600A09F(), 1))
		{
			Global_196AB6.f_21 = func_688(func_97(1));
		}
	}
	else if (iVar0 == 237)
	{
		Global_196A81 = iVar0;
		Global_196A81.f_1 = iParam0;
		Global_196A81.f_15 = 1;
		Global_196A81.f_16 = 1;
		Global_196A81.f_7 = func_680();
		Global_196A81.f_18 = 0;
		Global_196A81.f_17 = 0;
		Global_196A81.f_10 = 0;
		if (func_168() != func_29())
		{
			Global_196A81.f_4 = func_691(func_168());
			Global_196A81.f_5 = func_690(func_168());
		}
		Global_196A81.f_1C = func_689(unk_0xB5CEFD608600A09F());
		if (Global_196A81.f_1C)
		{
			Global_196A81.f_1D = func_673(unk_0xB5CEFD608600A09F());
		}
		else
		{
			Global_196A81.f_1D = 0;
		}
		Global_196A81.f_1E = func_657(unk_0xB5CEFD608600A09F(), 4, -1);
		Global_196A81.f_1F = func_656(unk_0xB5CEFD608600A09F());
		Global_196A81.f_20 = func_688(func_655(unk_0xB5CEFD608600A09F()));
		Global_196A81.f_21 = func_688(func_654(unk_0xB5CEFD608600A09F()));
		Global_196A81.f_22 = func_688(func_653(unk_0xB5CEFD608600A09F()));
		Global_196A81.f_23 = func_688(func_652(unk_0xB5CEFD608600A09F()));
		Global_196A81.f_24 = func_651(unk_0xB5CEFD608600A09F());
		Global_196A81.f_25 = func_650(unk_0xB5CEFD608600A09F());
		Global_196A81.f_27 = func_649(unk_0xB5CEFD608600A09F());
		if (func_267(unk_0xB5CEFD608600A09F(), 1))
		{
			Global_196A81.f_29 = func_688(func_97(1));
		}
		if (func_90() != func_29())
		{
			func_167(func_90(), &(Global_196A81.f_4), &(Global_196A81.f_5));
		}
		Global_196A81.f_8 = unk_0xB99C193A32DE341D();
		Global_196A81.f_1C = func_689(unk_0xB5CEFD608600A09F());
	}
	else
	{
		if (func_168() != func_29())
		{
			Global_196948 = func_691(func_168());
			Global_196948.f_1 = func_690(func_168());
		}
		Global_196948.f_5 = unk_0xB99C193A32DE341D();
		Global_196948.f_D = func_648();
		Global_196948.f_F = 0;
		if (func_166(1))
		{
			if (func_90() == func_168())
			{
				Global_196948.f_F = 1;
			}
		}
		if (func_647())
		{
			Global_1969CF.f_1C = 1;
		}
		if ((((func_646() || func_645()) || func_644()) || func_643()) || func_641())
		{
			Global_1969CF.f_1E = 1;
		}
		if (func_639(func_640(-1881846085)))
		{
			Global_1969CF.f_20 = 1;
		}
		if (func_620(func_638(joaat("caddy"))))
		{
			Global_1969CF.f_1F = 1;
		}
		if (func_619(unk_0xB5CEFD608600A09F()) || func_618(unk_0xB5CEFD608600A09F()))
		{
			Global_1969CF.f_1D = 1;
		}
		if (func_617(unk_0xB5CEFD608600A09F()))
		{
			Global_1969CF.f_21 = 1;
			Global_1969CF.f_22 = 1;
		}
		if (func_616(unk_0xB5CEFD608600A09F()))
		{
			Global_1969CF.f_24 = 1;
		}
		if (func_615(0, unk_0xB5CEFD608600A09F()) == 1)
		{
			Global_1969CF.f_23 = 1;
		}
		if (func_614(unk_0xB5CEFD608600A09F(), 3, &uVar1))
		{
			Global_1969CF.f_25 = 1;
		}
		if (func_614(unk_0xB5CEFD608600A09F(), 7, &uVar1))
		{
			Global_1969CF.f_26 = 1;
		}
		if (func_613(unk_0xB5CEFD608600A09F()))
		{
			iVar2 = 0;
			while (iVar2 < 6)
			{
				iVar3 = func_612(unk_0xB5CEFD608600A09F(), iVar2);
				if (func_318(unk_0xB5CEFD608600A09F(), iVar3, 0))
				{
					Global_1969CF.f_27 = 1;
				}
				if (func_318(unk_0xB5CEFD608600A09F(), iVar3, 2))
				{
					Global_1969CF.f_28 = 1;
				}
				if (func_318(unk_0xB5CEFD608600A09F(), iVar3, 1))
				{
					Global_1969CF.f_29 = 1;
				}
				iVar2++;
			}
		}
	}
}

int func_612(int iParam0, int iParam1)//Position - 0x169FC
{
	var uVar0;
	
	if (iParam0 == func_29())
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	if (func_313(Global_18402B[iParam0 /*770*/].f_111.f_A8[iParam1 /*12*/]))
	{
		uVar0 = Global_18402B[iParam0 /*770*/].f_111.f_A8[iParam1 /*12*/];
	}
	return uVar0;
}

int func_613(int iParam0)//Position - 0x16A55
{
	int iVar0;
	
	if (iParam0 == func_29())
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

int func_614(int iParam0, int iParam1, var uParam2)//Position - 0x16A97
{
	int iVar0;
	
	if (iParam0 != func_29())
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (iParam1 == func_615(iVar0, iParam0))
			{
				*uParam2 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_615(int iParam0, int iParam1)//Position - 0x16AD1
{
	if (iParam1 == func_29())
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

bool func_616(int iParam0)//Position - 0x16E25
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_146, 7);
}

bool func_617(int iParam0)//Position - 0x16E41
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_146, 8);
}

bool func_618(int iParam0)//Position - 0x16E5E
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_146, 11);
}

bool func_619(int iParam0)//Position - 0x16E88
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_146, 10);
}

int func_620(int iParam0)//Position - 0x16EB2
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_636(11, -1) == 0)
	{
		return 0;
	}
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = (iParam0 + func_634(11));
		func_633(iVar1, &iVar0, 1);
		iVar2 = func_636(func_622(iVar1), -1);
		if (iVar2 > 0)
		{
		}
		else if (iVar0 >= 0)
		{
		}
		if (iVar0 >= 0)
		{
			iVar3 = func_137(func_621(4, iVar0), -1, 0);
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

int func_621(int iParam0, int iParam1)//Position - 0x16F2E
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

int func_622(int iParam0)//Position - 0x1BCE4
{
	int iVar0;
	
	if (iParam0 < 231)
	{
		iVar0 = 0;
		while (iVar0 < 18)
		{
			if (iParam0 >= func_634(iVar0) && iParam0 < func_623(iVar0))
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_623(int iParam0)//Position - 0x1BD26
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
		iVar0 = func_632(iParam0);
		return func_631(iVar0);
	}
	return (func_624(iParam0, -1) * iParam0 + 1);
}

int func_624(int iParam0, int iParam1)//Position - 0x1BE0F
{
	if (iParam0 == -1)
	{
		if (iParam1 >= 1)
		{
			if (func_627(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_626(iParam1))
			{
				return 0;
			}
			else if (func_625(iParam1, -1))
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

int func_625(int iParam0, int iParam1)//Position - 0x1BFC4
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

int func_626(int iParam0)//Position - 0x1C0D0
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

int func_627(int iParam0, bool bParam1, bool bParam2)//Position - 0x1C0FF
{
	if (bParam2)
	{
		return func_628(unk_0xB5CEFD608600A09F(), 0);
	}
	if (bParam1)
	{
		if (func_628(unk_0xB5CEFD608600A09F(), 0))
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

bool func_628(int iParam0, bool bParam1)//Position - 0x1C1DA
{
	if (Global_183F8E != func_29())
	{
		if (!func_630(Global_183F8E))
		{
			return 0;
		}
		if (bParam1)
		{
			if (unk_0xB5CEFD608600A09F() != Global_183F8E)
			{
				if (unk_0xFA30DFD0084E92FE(Global_24FB5C[Global_183F8E /*406*/].f_BF, 24) || func_629(Global_183F8E))
				{
					return 1;
				}
			}
		}
	}
	return unk_0xFA30DFD0084E92FE(Global_24FB5C[iParam0 /*406*/].f_BF, 24);
}

int func_629(int iParam0)//Position - 0x1C246
{
	if (iParam0 != func_29())
	{
		return unk_0xFA30DFD0084E92FE(Global_24FB5C[iParam0 /*406*/].f_BF, 9);
	}
	return 0;
}

int func_630(int iParam0)//Position - 0x1C26C
{
	if (iParam0 != func_29())
	{
		return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_146, 2);
	}
	return 0;
}

int func_631(int iParam0)//Position - 0x1C298
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

int func_632(int iParam0)//Position - 0x1C2C9
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 3)
	{
		return iParam0;
	}
	return -1;
}

void func_633(int iParam0, int iParam1, bool bParam2)//Position - 0x1C2EF
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

int func_634(int iParam0)//Position - 0x1C32F
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
		iVar0 = func_632(iParam0);
		return func_635(iVar0);
	}
	return (func_624(iParam0, -1) * iParam0);
}

int func_635(int iParam0)//Position - 0x1C416
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

int func_636(int iParam0, int iParam1)//Position - 0x1C447
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam1;
	if (iParam1 == -1)
	{
		iVar0 = func_49();
	}
	if (iParam0 == 7 && !Global_40001.f_3FE5)
	{
		return 0;
	}
	if (iParam0 >= 1000)
	{
		iVar1 = func_632(iParam0);
		if (iVar1 == 0 && func_137(5389, iParam1, 0) != 0)
		{
			return 1234;
		}
		if (func_637(-1) && iVar1 == 2)
		{
			return 1236;
		}
		if (func_689(unk_0xB5CEFD608600A09F()) && iVar1 == 1)
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

bool func_637(int iParam0)//Position - 0x1C522
{
	if (!Global_40001.f_59D5)
	{
		return 0;
	}
	return func_137(7203, iParam0, 0) != 0;
}

int func_638(int iParam0)//Position - 0x1C545
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

int func_639(int iParam0)//Position - 0x1C5CE
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = iParam0 + 157;
		func_633(iVar1, &iVar0, 1);
		if (iVar0 >= 0)
		{
			iVar2 = func_137(func_621(4, iVar0), -1, 0);
			if (iVar2 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_640(int iParam0)//Position - 0x1C614
{
	switch (iParam0)
	{
		case -1881846085:
			return 0;
			break;
	}
	return -1;
}

bool func_641()//Position - 0x1C631
{
	return func_137(func_642(3), -1, 0) != 0;
}

int func_642(int iParam0)//Position - 0x1C646
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

bool func_643()//Position - 0x1C6B2
{
	return func_137(6159, -1, 0) != 0;
}

bool func_644()//Position - 0x1C6C5
{
	return func_137(5376, -1, 0) != 0;
}

bool func_645()//Position - 0x1C6D8
{
	return func_137(3824, -1, 0) != 0;
}

bool func_646()//Position - 0x1C6EB
{
	return func_137(3219, -1, 0) != 0;
}

bool func_647()//Position - 0x1C6FE
{
	return func_137(5375, -1, 0) != 0;
}

int func_648()//Position - 0x1C711
{
	int iVar0;
	
	iVar0 = func_168();
	if (iVar0 != func_29())
	{
		return Global_18C80F[iVar0 /*558*/].f_B.f_5D;
	}
	return 0;
}

int func_649(int iParam0)//Position - 0x1C739
{
	if (iParam0 != func_29())
	{
		return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_13F, 12);
	}
	return 0;
}

int func_650(int iParam0)//Position - 0x1C763
{
	if (iParam0 != func_29())
	{
		return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_13F, 10);
	}
	return 0;
}

int func_651(int iParam0)//Position - 0x1C78D
{
	if (iParam0 != func_29())
	{
		return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_13F, 11);
	}
	return 0;
}

bool func_652(int iParam0)//Position - 0x1C7B7
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_10A.f_4, 4);
}

bool func_653(int iParam0)//Position - 0x1C7E2
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_10A.f_4, 3);
}

bool func_654(int iParam0)//Position - 0x1C80D
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_10A.f_4, 2);
}

bool func_655(int iParam0)//Position - 0x1C838
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_10A.f_4, 1);
}

bool func_656(int iParam0)//Position - 0x1C863
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_146, 31);
}

int func_657(int iParam0, int iParam1, int iParam2)//Position - 0x1C880
{
	if (iParam0 == func_29() || !func_672(iParam1))
	{
		return 0;
	}
	switch (iParam1)
	{
		case 0:
			return func_667(iParam0, iParam2);
		
		case 1:
			return func_665(iParam0, iParam2);
		
		case 3:
			return func_664(iParam0);
		
		case 2:
			return func_659(iParam0, iParam2);
		
		case 4:
			return func_658(iParam0);
		
		default:
	}
	return 0;
}

bool func_658(int iParam0)//Position - 0x1C8FC
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_10A.f_4, 6);
}

int func_659(int iParam0, int iParam1)//Position - 0x1C927
{
	switch (iParam1)
	{
		case 10:
			return func_663(iParam0);
		
		case 11:
			return func_662(iParam0);
		
		case 12:
			return func_661(iParam0);
		
		case 13:
			return func_660(iParam0);
		
		default:
	}
	return 0;
}

bool func_660(int iParam0)//Position - 0x1C973
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_10A.f_4, 15);
}

bool func_661(int iParam0)//Position - 0x1C99F
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_10A.f_4, 14);
}

bool func_662(int iParam0)//Position - 0x1C9CB
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_10A.f_4, 13);
}

bool func_663(int iParam0)//Position - 0x1C9F7
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_10A.f_4, 12);
}

bool func_664(int iParam0)//Position - 0x1CA23
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_10A.f_4, 5);
}

int func_665(int iParam0, int iParam1)//Position - 0x1CA4E
{
	switch (iParam1)
	{
		case 5:
			return func_666(iParam0);
		
		case 6:
			return func_655(iParam0);
		
		case 7:
			return func_654(iParam0);
		
		case 8:
			return func_653(iParam0);
		
		case 9:
			return func_652(iParam0);
		
		default:
	}
	return 0;
}

bool func_666(int iParam0)//Position - 0x1CAA9
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_10A.f_4, 0);
}

int func_667(int iParam0, int iParam1)//Position - 0x1CAD4
{
	switch (iParam1)
	{
		case 0:
			return func_671(iParam0);
		
		case 1:
			return func_670(iParam0);
		
		case 2:
			return func_669(iParam0);
		
		case 3:
			return func_668(iParam0);
		
		case 4:
			return func_656(iParam0);
		
		default:
	}
	return 0;
}

bool func_668(int iParam0)//Position - 0x1CB2F
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_10A.f_4, 10);
}

bool func_669(int iParam0)//Position - 0x1CB5B
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_10A.f_4, 9);
}

bool func_670(int iParam0)//Position - 0x1CB87
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_10A.f_4, 8);
}

bool func_671(int iParam0)//Position - 0x1CBB3
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_10A.f_4, 7);
}

bool func_672(int iParam0)//Position - 0x1CBDE
{
	return (iParam0 != -1 && iParam0 != 6);
}

int func_673(int iParam0)//Position - 0x1CBF3
{
	int iVar0;
	
	if (iParam0 == func_29())
	{
		return 0;
	}
	iVar0 = 1;
	if (func_657(iParam0, 2, 13))
	{
		iVar0 = 5;
	}
	else if (func_657(iParam0, 2, 12))
	{
		iVar0 = 4;
	}
	else if (func_657(iParam0, 2, 11))
	{
		iVar0 = 3;
	}
	else if (func_657(iParam0, 2, 10))
	{
		iVar0 = 2;
	}
	return iVar0;
}

var func_674(int iParam0)//Position - 0x1CC52
{
	return Global_18402B[iParam0 /*770*/].f_D3.f_6;
}

bool func_675()//Position - 0x1CC67
{
	return func_137(6152, -1, 0) != 0;
}

int func_676(int iParam0)//Position - 0x1CC7A
{
	if (iParam0 != func_29())
	{
		return Global_18402B[iParam0 /*770*/].f_111.f_100 != 0;
	}
	return 0;
}

bool func_677()//Position - 0x1CCA0
{
	return func_137(6160, -1, 0) == 3;
}

bool func_678()//Position - 0x1CCB3
{
	return func_137(6160, -1, 0) == 2;
}

bool func_679()//Position - 0x1CCC6
{
	return func_137(6160, -1, 0) == 1;
}

int func_680()//Position - 0x1CCD9
{
	int iVar0;
	
	if (func_164())
	{
		return 4;
	}
	else if (func_151())
	{
		if (func_345(unk_0xB5CEFD608600A09F()))
		{
			return 8;
		}
		return 6;
	}
	if (func_97(1))
	{
		iVar0 = func_681(unk_0xB5CEFD608600A09F());
		if (iVar0 == -1)
		{
			iVar0 = 5;
		}
		return iVar0;
	}
	else if (func_166(1))
	{
		if (func_345(func_168()))
		{
			return 9;
		}
		return 7;
	}
	return -2;
}

int func_681(int iParam0)//Position - 0x1CD4C
{
	if (func_267(iParam0, 1))
	{
		return Global_18C80F[iParam0 /*558*/].f_B.f_19A;
	}
	return -1;
}

int func_682(int iParam0, int iParam1)//Position - 0x1CD70
{
	return func_137(func_683(iParam1), iParam0, 0);
}

int func_683(int iParam0)//Position - 0x1CD85
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

int func_684(int iParam0)//Position - 0x1CDDF
{
	if (func_62(iParam0) == 225 || func_62(iParam0) == 226)
	{
		return func_125(iParam0);
	}
	return -1;
}

int func_685(int iParam0, int iParam1)//Position - 0x1CE0C
{
	int iVar0;
	
	if (iParam0 == func_29())
	{
		return 0;
	}
	if (func_313(iParam1))
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

var func_686()//Position - 0x1CE6B
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_320(unk_0xB5CEFD608600A09F(), iVar0))
		{
			unk_0xF0059F27F7BB6680(&uVar1, iVar0);
		}
		iVar0++;
	}
	return uVar1;
}

int func_687(int iParam0)//Position - 0x1CE9D
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

int func_688(bool bParam0)//Position - 0x1CEC3
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_689(int iParam0)//Position - 0x1CED5
{
	if (iParam0 != func_29())
	{
		return Global_18402B[iParam0 /*770*/].f_111.f_133 != 0;
	}
	return 0;
}

int func_690(int iParam0)//Position - 0x1CEFB
{
	if (iParam0 == func_29())
	{
		return -1;
	}
	return Global_18C80F[iParam0 /*558*/].f_B.f_8[1];
}

int func_691(int iParam0)//Position - 0x1CF20
{
	if (iParam0 == func_29())
	{
		return -1;
	}
	return Global_18C80F[iParam0 /*558*/].f_B.f_8[0];
}

void func_692(int iParam0)//Position - 0x1CF45
{
	unk_0xF0059F27F7BB6680(&iLocal_123, iParam0);
}

char* func_693()//Position - 0x1CF56
{
	int iVar0;
	char* sVar1;
	
	iVar0 = func_251(unk_0xB5CEFD608600A09F());
	if (iVar0 != func_29())
	{
		if (iVar0 != unk_0xB5CEFD608600A09F())
		{
			if (((func_105(iVar0, 28) || func_105(unk_0xB5CEFD608600A09F(), 28)) || func_551(iVar0)) && !func_550(iVar0))
			{
				return func_552(iVar0, 0);
			}
			if (!unk_0xF49912B78E2591B6() && !unk_0x7A3896EC51DA2E5E(0, -1, 1))
			{
				return func_552(iVar0, 0);
			}
		}
		sVar1 = func_554(&(Global_18C80F[iVar0 /*558*/].f_B.f_63));
		if (unk_0xF1734B55490E9045(sVar1))
		{
			return func_552(iVar0, 0);
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

int func_694(int iParam0)//Position - 0x1D008
{
	int iVar0;
	
	iVar0 = func_250(iParam0);
	if (iVar0 != -1)
	{
		return func_248(iVar0);
	}
	return 1;
}

void func_695(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x1D028
{
	float fVar0;
	
	if (Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_21 != iParam0)
	{
		func_715(-1);
		Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_21 = iParam0;
		if (func_30() != -1)
		{
			func_714(-1);
		}
		if (func_713() != -1)
		{
			func_712(-1);
		}
		func_711(iParam2);
		func_709(iParam0);
		if (!func_708(iParam0))
		{
			fVar0 = func_707(iParam0);
			if (fVar0 != 1f)
			{
				func_706(fVar0);
				unk_0xF0059F27F7BB6680(&(Global_19693F.f_3), 1);
			}
		}
		if (!func_705(iParam0) || iParam3)
		{
			if (func_704(iParam0, iParam2) && iParam3 == 1)
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
		if (func_79())
		{
			func_120(27);
		}
		if (bParam1)
		{
			if (!func_748())
			{
				func_702(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((unk_0xFA30DFD0084E92FE(Global_267214.f_11BD, 1) || unk_0xFA30DFD0084E92FE(Global_267214.f_11BD, 4)) || unk_0xFA30DFD0084E92FE(Global_267214.f_11BD, 0))
			{
				func_230(6);
			}
			func_701();
		}
		if (((iParam0 == 164 || iParam0 == 208) || iParam0 == 250) || iParam0 == 237)
		{
			unk_0xE85B33FB221A23CD(3, false);
			unk_0xE85B33FB221A23CD(5, false);
		}
		if (func_118(unk_0xB5CEFD608600A09F()) && func_113(unk_0xB5CEFD608600A09F()))
		{
			unk_0xF0059F27F7BB6680(&(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_1), 8);
		}
		func_697();
		if (func_696(iParam0))
		{
			unk_0xE85B33FB221A23CD(3, false);
			unk_0xE85B33FB221A23CD(5, false);
			unk_0xF0059F27F7BB6680(&(Global_19693F.f_3), 6);
		}
		Global_267214.f_181A = 0;
	}
}

int func_696(int iParam0)//Position - 0x1D245
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

void func_697()//Position - 0x1D28F
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	bVar3 = func_700();
	iVar2 = func_251(unk_0xB5CEFD608600A09F());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0x3171C34AB3FE6F2E(iVar0);
		if (unk_0x96B1061E8F3CBC9A(iVar1))
		{
			if (func_265(iVar1, iVar2, 1) || func_698(iVar1, unk_0xB5CEFD608600A09F()))
			{
				unk_0xB7BCAAFF114A94F2(unk_0xB5CEFD608600A09F(), iVar1, bVar3);
				unk_0xB7BCAAFF114A94F2(iVar1, unk_0xB5CEFD608600A09F(), bVar3);
			}
		}
		iVar0++;
	}
}

int func_698(int iParam0, int iParam1)//Position - 0x1D2FF
{
	if (func_267(iParam0, 1) && func_267(iParam1, 1))
	{
		return (func_699(iParam0) == func_251(iParam1) || func_699(iParam1) == func_251(iParam0));
	}
	return 0;
}

int func_699(int iParam0)//Position - 0x1D341
{
	if (func_267(iParam0, 1))
	{
		return Global_18C80F[func_251(iParam0) /*558*/].f_B.f_1BB;
	}
	return func_29();
}

int func_700()//Position - 0x1D36C
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_168();
	if (iVar0 != func_29())
	{
		if (func_955(iVar0, 0, 1))
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

void func_701()//Position - 0x1D3AD
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

void func_702(int iParam0)//Position - 0x1D44B
{
	if (func_703() && iParam0)
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

int func_703()//Position - 0x1D480
{
	if ((((Global_EF3AE != -1 && Global_EF3AE != 33) && Global_EF3AE != 35) && Global_EF3AE != 37) && Global_EF3AE != 21)
	{
		return 1;
	}
	return 0;
}

int func_704(int iParam0, int iParam1)//Position - 0x1D4C6
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

int func_705(int iParam0)//Position - 0x1D647
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

void func_706(float fParam0)//Position - 0x1D745
{
	float fVar0;
	
	if (unk_0x56BEECB328B6D29D(unk_0x1377080E9B0BD993()) == func_73())
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

float func_707(int iParam0)//Position - 0x1D7B1
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

int func_708(int iParam0)//Position - 0x1D945
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

void func_709(int iParam0)//Position - 0x1DA0D
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_137(3787, -1, 0);
	iVar1 = func_710(iParam0);
	if (iVar1 != -1)
	{
		unk_0xF0059F27F7BB6680(&iVar0, iVar1);
		func_135(3787, iVar0, -1, 1, 0);
	}
}

int func_710(int iParam0)//Position - 0x1DA42
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

void func_711(int iParam0)//Position - 0x1DAD9
{
	int iVar0;
	
	iVar0 = unk_0xB5CEFD608600A09F();
	if (Global_18C80F[iVar0 /*558*/].f_B.f_B0 != iParam0)
	{
		Global_18C80F[iVar0 /*558*/].f_B.f_B0 = iParam0;
	}
}

void func_712(int iParam0)//Position - 0x1DB08
{
	if (Global_267214.f_1312.f_149 != iParam0)
	{
		Global_267214.f_1312.f_149 = iParam0;
	}
}

int func_713()//Position - 0x1DB2B
{
	return Global_267214.f_1312.f_149;
}

void func_714(int iParam0)//Position - 0x1DB3D
{
	if (Global_267214.f_1312.f_148 != iParam0)
	{
		Global_267214.f_1312.f_148 = iParam0;
	}
}

void func_715(int iParam0)//Position - 0x1DB60
{
	Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_20 = iParam0;
}

bool func_716(int iParam0)//Position - 0x1DB79
{
	return unk_0xFA30DFD0084E92FE(iLocal_123, iParam0);
}

int func_717(bool bParam0, bool bParam1, bool bParam2)//Position - 0x1DB8A
{
	if (func_745(unk_0xB5CEFD608600A09F(), 29))
	{
		return 0;
	}
	if (func_744(unk_0xB5CEFD608600A09F(), 21))
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
	if (!func_424(unk_0xB5CEFD608600A09F()))
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
	if (func_743(unk_0xB5CEFD608600A09F()))
	{
		return 0;
	}
	if (func_742())
	{
		return 0;
	}
	if (func_481())
	{
		return 0;
	}
	if (func_741())
	{
		return 0;
	}
	if (func_475())
	{
		return 0;
	}
	if (unk_0x517823CA390A19F6())
	{
		return 0;
	}
	if (func_473(unk_0xB5CEFD608600A09F()))
	{
		return 0;
	}
	if (!func_477())
	{
		return 0;
	}
	if (func_744(unk_0xB5CEFD608600A09F(), 0) || func_744(unk_0xB5CEFD608600A09F(), 3))
	{
		return 0;
	}
	if ((func_744(unk_0xB5CEFD608600A09F(), 12) || func_744(unk_0xB5CEFD608600A09F(), 14)) || func_744(unk_0xB5CEFD608600A09F(), 13))
	{
		return 0;
	}
	if (func_738(unk_0xB5CEFD608600A09F(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
	{
		if (!func_724())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (func_723())
		{
			return 0;
		}
	}
	if (Global_193981)
	{
		return 0;
	}
	if (func_722(unk_0xB5CEFD608600A09F()))
	{
		return 0;
	}
	if (func_721())
	{
		return 0;
	}
	if (func_720(unk_0xB5CEFD608600A09F()))
	{
		return 0;
	}
	if (func_719())
	{
		return 0;
	}
	if (unk_0xFA30DFD0084E92FE(Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_111.f_13, 4))
	{
		return 0;
	}
	if (func_718(unk_0xB5CEFD608600A09F()))
	{
		return 0;
	}
	return 1;
}

int func_718(int iParam0)//Position - 0x1DD32
{
	if (Global_24FB5C[iParam0 /*406*/].f_101.f_4 != 0 || Global_24FB5C[iParam0 /*406*/].f_101.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_719()//Position - 0x1DD66
{
	return Global_197055.f_D0E != -1;
}

int func_720(int iParam0)//Position - 0x1DD77
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

int func_721()//Position - 0x1DDB6
{
	if (Global_40E7E8.f_31D > -1)
	{
		return 1;
	}
	return 0;
}

int func_722(int iParam0)//Position - 0x1DDCE
{
	if (!func_955(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_18402B[iParam0 /*770*/].f_23;
}

bool func_723()//Position - 0x1DDF1
{
	return Global_16B4F.f_142 > 0;
}

int func_724()//Position - 0x1DE02
{
	int iVar0;
	
	iVar0 = func_62(unk_0xB5CEFD608600A09F());
	if (((func_626(Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_111.f_15) || func_737(unk_0xB5CEFD608600A09F())) || func_736(unk_0xB5CEFD608600A09F())) || func_735(unk_0xB5CEFD608600A09F()))
	{
		if (((iVar0 == 167 || iVar0 == 168) || iVar0 == 178) || iVar0 == 188)
		{
			return 1;
		}
	}
	if (func_734(unk_0xB5CEFD608600A09F()))
	{
		if (func_139(iVar0) || func_687(iVar0))
		{
			return 1;
		}
	}
	if (func_109(unk_0xB5CEFD608600A09F()))
	{
		if (func_687(iVar0))
		{
			return 1;
		}
	}
	if (func_733(unk_0xB5CEFD608600A09F()))
	{
		if (func_129(iVar0))
		{
			return 1;
		}
	}
	if (func_732(unk_0xB5CEFD608600A09F()))
	{
		if (func_128(iVar0))
		{
			return 1;
		}
	}
	if (func_731(unk_0xB5CEFD608600A09F()))
	{
		if (func_127(iVar0))
		{
			return 1;
		}
	}
	if (func_730(unk_0xB5CEFD608600A09F()))
	{
		if (func_729(iVar0))
		{
			return 1;
		}
	}
	if (func_728(unk_0xB5CEFD608600A09F(), 0))
	{
		if (func_727(iVar0))
		{
			if (func_725(unk_0xB5CEFD608600A09F()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_725(int iParam0)//Position - 0x1DF43
{
	if (func_726(iParam0) != func_29())
	{
		return func_726(iParam0) == func_251(iParam0);
	}
	return 0;
}

int func_726(int iParam0)//Position - 0x1DF69
{
	return Global_18C80F[iParam0 /*558*/].f_B.f_23;
}

int func_727(int iParam0)//Position - 0x1DF7E
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

int func_728(int iParam0, bool bParam1)//Position - 0x1DFB6
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
	if (iParam0 != func_29())
	{
		if (func_955(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1 && Global_24FB5C[iParam0 /*406*/].f_131.f_4 != func_29())
			{
				return func_110(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 12;
			}
		}
	}
	return 0;
}

int func_729(int iParam0)//Position - 0x1E044
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

int func_730(int iParam0)//Position - 0x1E070
{
	if (iParam0 != func_29())
	{
		if (func_955(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1)
			{
				return func_110(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 11;
			}
		}
	}
	return 0;
}

int func_731(int iParam0)//Position - 0x1E0B7
{
	if (iParam0 != func_29())
	{
		if (func_955(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1)
			{
				return func_110(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 9;
			}
		}
	}
	return 0;
}

int func_732(int iParam0)//Position - 0x1E0FE
{
	if (iParam0 != func_29())
	{
		if (func_955(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1)
			{
				return func_110(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 7;
			}
		}
	}
	return 0;
}

int func_733(int iParam0)//Position - 0x1E144
{
	if (iParam0 != func_29())
	{
		if (func_955(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1)
			{
				return func_110(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 4;
			}
		}
	}
	return 0;
}

int func_734(int iParam0)//Position - 0x1E18A
{
	if (func_625(Global_18402B[iParam0 /*770*/].f_111.f_15, -1))
	{
		return 1;
	}
	return 0;
}

int func_735(int iParam0)//Position - 0x1E1AD
{
	if (func_627(Global_18402B[iParam0 /*770*/].f_111.f_15, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_736(int iParam0)//Position - 0x1E1D1
{
	if (iParam0 != func_29())
	{
		if (func_955(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1)
			{
				return func_110(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 1;
			}
		}
	}
	return 0;
}

int func_737(int iParam0)//Position - 0x1E217
{
	if (iParam0 != func_29())
	{
		if (func_955(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1)
			{
				return func_110(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 0;
			}
		}
	}
	return 0;
}

int func_738(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)//Position - 0x1E25D
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
		if (func_737(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_109(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_736(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_733(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_732(iParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_731(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_740(iParam0))
		{
			return 1;
		}
	}
	if (!bParam9)
	{
		if (func_730(iParam0))
		{
			return 1;
		}
	}
	if (!bParam10)
	{
		if (func_739(iParam0))
		{
			return 1;
		}
	}
	if (!bParam11)
	{
		if (func_728(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_739(int iParam0)//Position - 0x1E35D
{
	if (iParam0 != func_29())
	{
		if (func_955(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1)
			{
				return func_110(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 11;
			}
		}
	}
	return 0;
}

int func_740(int iParam0)//Position - 0x1E3A4
{
	if (iParam0 != func_29())
	{
		if (func_955(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1 && Global_24FB5C[iParam0 /*406*/].f_131.f_4 != func_29())
			{
				return func_110(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 8;
			}
		}
	}
	return 0;
}

bool func_741()//Position - 0x1E404
{
	return Global_140856;
}

bool func_742()//Position - 0x1E410
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_27.f_12, 0);
}

int func_743(int iParam0)//Position - 0x1E42C
{
	if (func_472(iParam0, 1))
	{
		if (Global_18402B[iParam0 /*770*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_744(int iParam0, int iParam1)//Position - 0x1E450
{
	return unk_0xFA30DFD0084E92FE(Global_24FB5C[iParam0 /*406*/].f_CC, iParam1);
}

bool func_745(int iParam0, int iParam1)//Position - 0x1E469
{
	return unk_0xFA30DFD0084E92FE(Global_18C80F[iParam0 /*558*/].f_B.f_5, iParam1);
}

int func_746(int iParam0)//Position - 0x1E484
{
	if (!func_151() && !func_267(unk_0xB5CEFD608600A09F(), 1))
	{
		if (!func_113(unk_0xB5CEFD608600A09F()))
		{
			if (func_748())
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

int func_747()//Position - 0x1E4DD
{
	return 0;
}

int func_748()//Position - 0x1E4E6
{
	if ((func_105(unk_0xB5CEFD608600A09F(), 21) || func_105(unk_0xB5CEFD608600A09F(), 22)) || func_752())
	{
		return 1;
	}
	if (func_749())
	{
		func_120(22);
		return 1;
	}
	return 0;
}

int func_749()//Position - 0x1E52B
{
	if (func_63(unk_0xB5CEFD608600A09F(), 0))
	{
		if ((func_79() && !func_751()) || func_744(unk_0xB5CEFD608600A09F(), 21))
		{
			return 1;
		}
		else
		{
			func_750(27);
		}
	}
	return 0;
}

void func_750(int iParam0)//Position - 0x1E56E
{
	unk_0x7CB6FD92BE491AD9(&(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_4), iParam0);
}

bool func_751()//Position - 0x1E58B
{
	return Global_1406A0.f_1;
}

bool func_752()//Position - 0x1E599
{
	return func_305(306, -1);
}

void func_753(int iParam0, int iParam1)//Position - 0x1E5A9
{
	Local_169[iParam0 /*6*/] = iParam1;
}

bool func_754()//Position - 0x1E5BA
{
	if (!func_44(unk_0xF0BF4763784095DA(), 3))
	{
		if (func_17(1))
		{
			func_756("JCMcBpPl9UWmcdOYFza0Tg");
			func_756("jDF4fBBUqG9ZuI9TR7mw");
			func_82(3);
			func_755();
		}
	}
	return func_44(unk_0xF0BF4763784095DA(), 3);
}

void func_755()//Position - 0x1E5F9
{
	Global_195F30 = 1;
	if (!unk_0xFA30DFD0084E92FE(Global_2692A7, 0))
	{
		unk_0xF0059F27F7BB6680(&Global_2692A7, 0);
		unk_0xF0059F27F7BB6680(&Global_195F31, 0);
	}
	if (!unk_0xFA30DFD0084E92FE(Global_2692A7, 1))
	{
		unk_0xF0059F27F7BB6680(&Global_2692A7, 1);
		unk_0xF0059F27F7BB6680(&Global_195F31, 1);
	}
	if (!unk_0xFA30DFD0084E92FE(Global_2692A7, 5))
	{
		unk_0xF0059F27F7BB6680(&Global_2692A7, 5);
		unk_0xF0059F27F7BB6680(&Global_195F31, 5);
	}
	if (unk_0x86BC948CAD7C61EF(-355737150))
	{
		unk_0xF72F6BB050622804(-355737150, 0, 0, 0);
	}
	if (unk_0x86BC948CAD7C61EF(-580979506))
	{
		unk_0xF72F6BB050622804(-580979506, 0, 0, 0);
	}
	if (unk_0x86BC948CAD7C61EF(-1426452475))
	{
		unk_0xF72F6BB050622804(-1426452475, 0, 0, 0);
	}
	if (unk_0x86BC948CAD7C61EF(745417724))
	{
		unk_0xF72F6BB050622804(745417724, 0, 0, 0);
	}
	if (unk_0x86BC948CAD7C61EF(-1305304906))
	{
		unk_0xF72F6BB050622804(-1305304906, 0, 0, 0);
	}
	if (unk_0x86BC948CAD7C61EF(-1543175077))
	{
		unk_0xF72F6BB050622804(-1543175077, 0, 0, 0);
	}
	if (unk_0x86BC948CAD7C61EF(-811770997))
	{
		unk_0xF72F6BB050622804(-811770997, 0, 0, 0);
	}
}

void func_756(char* sParam0)//Position - 0x1E70B
{
	int iVar0;
	int iVar1;
	
	if (unk_0xF1734B55490E9045(sParam0))
	{
		return;
	}
	iVar0 = unk_0x56BEECB328B6D29D(sParam0);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1403FD)
	{
		if (unk_0xFA30DFD0084E92FE(Global_2401A9[iVar1 /*26*/].f_C, 11))
		{
			if (func_757(&(Global_2401A9[iVar1 /*26*/].f_F)) == iVar0)
			{
				if (!unk_0xFA30DFD0084E92FE(Global_2401A9[iVar1 /*26*/].f_D, 26))
				{
					unk_0xF0059F27F7BB6680(&(Global_2401A9[iVar1 /*26*/].f_D), 26);
				}
				return;
			}
		}
		iVar1++;
	}
}

int func_757(var uParam0)//Position - 0x1E78F
{
	struct<13> Var0;
	int iVar1;
	int iVar2;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_C = -1;
	iVar1 = 0;
	iVar2 = func_759(uParam0);
	if (iVar2 == -1)
	{
		return iVar1;
	}
	switch (uParam0->f_2)
	{
		case 63:
			Var0 = { func_758(uParam0) };
			return Var0.f_1;
		
		case 62:
			return iVar1;
		
		default:
	}
	return iVar1;
}

struct<13> func_758(var uParam0)//Position - 0x1E7F6
{
	struct<13> Var0;
	int iVar1;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_C = -1;
	iVar1 = func_759(uParam0);
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

int func_759(var uParam0)//Position - 0x1E86D
{
	int iVar0;
	
	if (unk_0xF1734B55490E9045(&(uParam0->f_3)))
	{
		return -1;
	}
	if (func_761(uParam0->f_1))
	{
		if (func_760(uParam0))
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

int func_760(var uParam0)//Position - 0x1EADD
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

bool func_761(int iParam0)//Position - 0x1EB02
{
	return iParam0 == 9999;
}

int func_762()//Position - 0x1EB10
{
	return Local_168;
}

int func_763(int iParam0)//Position - 0x1EB1B
{
	return Local_169[iParam0 /*6*/];
}

void func_764()//Position - 0x1EB2A
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	while (iVar0 < unk_0x432AA9CCB3EE0174(1))
	{
		iVar1 = unk_0x2BFAC254CC069912(1, iVar0);
		switch (iVar1)
		{
			case 171:
				unk_0x414AA1932D1C88E2(1, iVar0, &uVar2, 2);
				break;
			
			case 182:
				func_765(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_765(int iParam0)//Position - 0x1EB7B
{
	struct<11> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (unk_0x414AA1932D1C88E2(1, iParam0, &Var0, 11))
	{
		if (unk_0x724D816EA203A79E(Var0))
		{
			if (unk_0x386592AF38881675(Var0))
			{
				iVar1 = unk_0x399F7937FFE4DEBF(Var0);
				if (unk_0x15DBD981998D4FE1(iVar1))
				{
					iVar2 = unk_0x5363B43856FA7779(iVar1);
					if (unk_0xF6391659C669C3B1(iVar2))
					{
						if (Var0.f_3)
						{
							if (unk_0x724D816EA203A79E(Var0.f_1))
							{
								if (unk_0x386592AF38881675(Var0.f_1))
								{
									iVar1 = unk_0x399F7937FFE4DEBF(Var0.f_1);
									if (unk_0x15DBD981998D4FE1(iVar1))
									{
										iVar3 = unk_0x5363B43856FA7779(iVar1);
										if (iVar3 == unk_0xB5CEFD608600A09F())
										{
											if (func_506())
											{
												if (func_508())
												{
													if (!func_351(iVar3, iVar2) && func_768(iVar3))
													{
														if (func_766(Var0))
														{
															if (func_45(iVar2))
															{
																Local_169[unk_0x6BAA0516CC970D99() /*6*/].f_3 = (Local_169[unk_0x6BAA0516CC970D99() /*6*/].f_3 + (Global_40001.f_4502 * Global_40001.f_4503));
															}
															else
															{
																Local_169[unk_0x6BAA0516CC970D99() /*6*/].f_3 = (Local_169[unk_0x6BAA0516CC970D99() /*6*/].f_3 + (Global_40001.f_4501 * Global_40001.f_4503));
															}
														}
														else if (func_45(iVar2))
														{
															Local_169[unk_0x6BAA0516CC970D99() /*6*/].f_3 = (Local_169[unk_0x6BAA0516CC970D99() /*6*/].f_3 + Global_40001.f_4502);
														}
														else
														{
															Local_169[unk_0x6BAA0516CC970D99() /*6*/].f_3 = (Local_169[unk_0x6BAA0516CC970D99() /*6*/].f_3 + Global_40001.f_4501);
														}
													}
													else if (iVar3 == iVar2 || !func_351(iVar3, iVar2))
													{
														if (func_766(Var0))
														{
															Local_169[unk_0x6BAA0516CC970D99() /*6*/].f_4++;
														}
													}
												}
												else
												{
													func_546(11);
												}
											}
											else
											{
												func_546(9);
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_766(struct<10> Param0, var uParam1)//Position - 0x1ED36
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x724D816EA203A79E(unk_0x399F7937FFE4DEBF(Param0.f_1)) && !unk_0x1D403DFADBC2DE3C(unk_0x399F7937FFE4DEBF(Param0.f_1), 0))
	{
		if (func_767(unk_0x399F7937FFE4DEBF(Param0.f_1)))
		{
			iVar0 = unk_0xFFEEDE2296E3758E(Param0.f_4);
			iVar1 = Param0.f_4;
			iVar2 = unk_0x1966F403E5C2133D(iVar1);
			if (((Param0.f_9 || iVar1 == joaat("weapon_unarmed")) || iVar2 == -728555052) || iVar0 == 2)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_767(int iParam0)//Position - 0x1EDB9
{
	int iVar0;
	
	if (unk_0x5CFC8E6CC224744A(iParam0))
	{
		return 1;
	}
	if (unk_0x5237AF95232D78C5(iParam0, 1))
	{
		iVar0 = unk_0x9FE9D386222EEE47(iParam0, 1);
		if ((((unk_0x6F79ECA8C83E4357(iVar0) == joaat("chimera") || unk_0x6F79ECA8C83E4357(iVar0) == joaat("blazer")) || unk_0x6F79ECA8C83E4357(iVar0) == joaat("blazer2")) || unk_0x6F79ECA8C83E4357(iVar0) == joaat("blazer3")) || unk_0x6F79ECA8C83E4357(iVar0) == joaat("blazer4"))
		{
			return 1;
		}
	}
	return 0;
}

int func_768(int iParam0)//Position - 0x1EE3C
{
	int iVar0;
	int iVar1;
	
	unk_0xD885B2234FC72D62(iParam0);
	if (unk_0x5237AF95232D78C5(unk_0xA95CF30C72EB526E(iParam0), 0))
	{
		iVar0 = unk_0x9FE9D386222EEE47(unk_0xA95CF30C72EB526E(iParam0), 0);
		iVar1 = func_769(iVar0);
		if (func_351(iVar1, iParam0) || iVar1 == iParam0)
		{
			unk_0xD885B2234FC72D62(iParam0);
			unk_0xD885B2234FC72D62(iVar1);
			return 1;
		}
	}
	return 0;
}

int func_769(int iParam0)//Position - 0x1EE97
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		if (!unk_0x1AAF0C23233C57AF(iParam0, -1, 0))
		{
			iVar0 = unk_0x3187EF5798B5D209(iParam0, -1, 0);
			if (!unk_0x36CEFBE9B745A58D(iVar0))
			{
				iVar1 = unk_0x5363B43856FA7779(iVar0);
				if (!iVar1 == func_29())
				{
					if (func_955(iVar1, 0, 1))
					{
						return iVar1;
					}
				}
			}
		}
	}
	return iVar1;
}

void func_770()//Position - 0x1EEEE
{
	int iVar0;
	
	if (func_17(1))
	{
		if (!func_716(9))
		{
			iVar0 = (1 - func_34(unk_0xB5CEFD608600A09F()));
			if (Local_168.f_10[1] != Local_168.f_10[0])
			{
				if (Local_168.f_10[iVar0] != func_29())
				{
					StringCopy(&Local_156, func_549(Local_168.f_10[iVar0]), 64);
					iLocal_146 = func_694(Local_168.f_10[iVar0]);
					func_692(9);
				}
			}
		}
	}
}

void func_771()//Position - 0x1EF5F
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xDA36F6F618ED8069(unk_0xBC25C936A095B5BA()))
	{
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0x3171C34AB3FE6F2E(iVar0);
		if (iVar1 != unk_0xB5CEFD608600A09F())
		{
			if (unk_0x96B1061E8F3CBC9A(iVar1))
			{
				if (!unk_0xFA30DFD0084E92FE(iLocal_131, iVar0))
				{
					unk_0x656BAEF9186C73AF(iVar1, 0);
					unk_0xF0059F27F7BB6680(&iLocal_131, iVar0);
				}
				else if (!unk_0xF6391659C669C3B1(iVar1))
				{
					if (!unk_0x36CEFBE9B745A58D(unk_0xA95CF30C72EB526E(iVar1)))
					{
						if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
						{
							if (!unk_0xFA30DFD0084E92FE(iLocal_130, iVar0))
							{
								if (((!func_773(unk_0xBC25C936A095B5BA(), unk_0xA95CF30C72EB526E(iVar1)) && !func_772(unk_0xA95CF30C72EB526E(iVar1))) && !func_351(unk_0xB5CEFD608600A09F(), iVar1)) && (func_567() || func_564()))
								{
									unk_0x656BAEF9186C73AF(iVar1, 1);
									unk_0xF0059F27F7BB6680(&iLocal_130, iVar0);
								}
							}
							else if (func_773(unk_0xBC25C936A095B5BA(), unk_0xA95CF30C72EB526E(iVar1)))
							{
								unk_0x656BAEF9186C73AF(iVar1, 0);
								unk_0x7CB6FD92BE491AD9(&iLocal_130, iVar0);
							}
							else if (func_772(unk_0xA95CF30C72EB526E(iVar1)))
							{
								unk_0x656BAEF9186C73AF(iVar1, 0);
								unk_0x7CB6FD92BE491AD9(&iLocal_130, iVar0);
							}
							else if (func_351(unk_0xB5CEFD608600A09F(), iVar1))
							{
								unk_0x656BAEF9186C73AF(iVar1, 0);
								unk_0x7CB6FD92BE491AD9(&iLocal_130, iVar0);
							}
							else if (!func_567() && !func_564())
							{
								unk_0x656BAEF9186C73AF(iVar1, 0);
								unk_0x7CB6FD92BE491AD9(&iLocal_130, iVar0);
							}
						}
					}
				}
				else if (func_27() < 2)
				{
				}
				else if (func_44(unk_0xF0BF4763784095DA(), 1))
				{
					if (Local_169[iLocal_132 /*6*/].f_5 >= 2)
					{
						if (!func_44(unk_0xDE780EBA36114734(iVar1), 1))
						{
							if (!unk_0xFA30DFD0084E92FE(iLocal_130, iVar0))
							{
								if (!(unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && !unk_0x36CEFBE9B745A58D(unk_0xA95CF30C72EB526E(iVar1))))
								{
									if (!func_773(unk_0xBC25C936A095B5BA(), unk_0xA95CF30C72EB526E(iVar1)) && !func_772(unk_0xA95CF30C72EB526E(iVar1)))
									{
										unk_0x656BAEF9186C73AF(iVar1, 1);
										unk_0xF0059F27F7BB6680(&iLocal_130, iVar0);
									}
								}
							}
							else if (!(unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && !unk_0x36CEFBE9B745A58D(unk_0xA95CF30C72EB526E(iVar1))))
							{
								if (func_773(unk_0xBC25C936A095B5BA(), unk_0xA95CF30C72EB526E(iVar1)) || func_772(unk_0xA95CF30C72EB526E(iVar1)))
								{
									unk_0x656BAEF9186C73AF(iVar1, 0);
									unk_0x7CB6FD92BE491AD9(&iLocal_130, iVar0);
								}
							}
						}
						else if (unk_0xFA30DFD0084E92FE(iLocal_130, iVar0))
						{
							if (func_44(unk_0xDE780EBA36114734(iVar1), 1))
							{
								unk_0x656BAEF9186C73AF(iVar1, 0);
								unk_0x7CB6FD92BE491AD9(&iLocal_130, iVar0);
							}
						}
					}
				}
				else
				{
					if (!unk_0xFA30DFD0084E92FE(iLocal_130, iVar0))
					{
						if (func_44(unk_0xDE780EBA36114734(iVar1), 1))
						{
							unk_0x656BAEF9186C73AF(iVar1, 1);
							unk_0xF0059F27F7BB6680(&iLocal_130, iVar0);
						}
					}
					if (!func_44(unk_0xDE780EBA36114734(iVar1), 1))
					{
						if (unk_0xFA30DFD0084E92FE(iLocal_130, iVar0))
						{
							unk_0x656BAEF9186C73AF(iVar1, 0);
							unk_0x7CB6FD92BE491AD9(&iLocal_130, iVar0);
						}
					}
				}
			}
		}
		iVar0++;
	}
}

int func_772(int iParam0)//Position - 0x1F237
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0xCBBE5AFE2CD2E9B6(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0x3171C34AB3FE6F2E(iVar0);
		if (unk_0x96B1061E8F3CBC9A(iVar1))
		{
			if (unk_0xF6391659C669C3B1(iVar1))
			{
				iVar2 = unk_0xA95CF30C72EB526E(iVar1);
				if (iVar2 != iParam0)
				{
					if (func_773(iParam0, iVar2))
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

bool func_773(int iParam0, int iParam1)//Position - 0x1F299
{
	if (iParam0 == iParam1)
	{
		return 1;
	}
	if (!unk_0x5237AF95232D78C5(iParam0, 0) || !unk_0x5237AF95232D78C5(iParam1, 0))
	{
		return 0;
	}
	return unk_0x9FE9D386222EEE47(iParam0, 0) == unk_0x9FE9D386222EEE47(iParam1, 0);
}

void func_774()//Position - 0x1F2D8
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = unk_0x3171C34AB3FE6F2E(iLocal_134);
	iVar2 = func_34(unk_0xB5CEFD608600A09F());
	if (unk_0x96B1061E8F3CBC9A(iVar1))
	{
		if (unk_0xF6391659C669C3B1(iVar1))
		{
			iVar0 = unk_0xDE780EBA36114734(iVar1);
			if (iLocal_132 > -1)
			{
				if (func_44(unk_0xCFA8A401AAD7BB5A(iLocal_132), 1))
				{
					if (func_716(9))
					{
						if (iVar0 != unk_0xF0BF4763784095DA())
						{
							iVar3 = func_34(iVar1);
							if (iVar3 != iVar2)
							{
								if (func_17(11))
								{
									if (func_44(iVar0, 1))
									{
										if (!unk_0xFA30DFD0084E92FE(iLocal_133, iLocal_134))
										{
											func_76(iVar1, 432, 1, 0);
											func_70(iVar1, func_75(iLocal_146), 1, 0);
											unk_0xF0059F27F7BB6680(&iLocal_133, iLocal_134);
										}
									}
								}
							}
						}
					}
				}
			}
		}
		else if (unk_0xFA30DFD0084E92FE(iLocal_133, iLocal_134))
		{
			func_76(iVar1, 432, 0, 0);
			func_70(iVar1, func_75(iLocal_146), 0, 0);
			unk_0x7CB6FD92BE491AD9(&iLocal_133, iLocal_134);
		}
	}
	iLocal_134++;
	if (iLocal_134 >= 32)
	{
		iLocal_134 = 0;
	}
}

void func_775()//Position - 0x1F3D1
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	struct<16> Var4;
	int iVar5;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		vLocal_115[iVar1 /*3*/] = func_29();
		vLocal_115[iVar1 /*3*/].f_1 = -1;
		vLocal_115[iVar1 /*3*/].f_2 = uVar3;
		unk_0x7CB6FD92BE491AD9(&iLocal_126, iVar1);
		unk_0x7CB6FD92BE491AD9(&iLocal_128, iVar1);
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < unk_0x81C86888AEA2F49B())
	{
		Local_114[iVar0 /*20*/] = func_776();
		Local_114[iVar0 /*20*/].f_1 = -1;
		unk_0x7CB6FD92BE491AD9(&iLocal_127, iVar0);
		Local_114[iVar0 /*20*/].f_2 = { Var4 };
		Local_114[iVar0 /*20*/].f_12 = 0;
		Local_114[iVar0 /*20*/].f_13 = 0;
		iVar0++;
	}
	iVar5 = 0;
	iVar0 = 0;
	while (iVar0 < unk_0x81C86888AEA2F49B())
	{
		if (unk_0x05086B70D2CFEA6F(iVar0))
		{
			Local_114[iVar0 /*20*/] = iVar0;
			unk_0xF0059F27F7BB6680(&iLocal_127, iVar0);
			iVar2 = unk_0x4ED43B67B3F05E0F(Local_114[iVar0 /*20*/]);
			iVar1 = iVar2;
			if (func_955(iVar2, 0, 1))
			{
				iVar5++;
				vLocal_115[iVar1 /*3*/] = iVar2;
				Local_114[iVar0 /*20*/].f_1 = iVar1;
				vLocal_115[iVar1 /*3*/].f_1 = iVar0;
				vLocal_115[iVar1 /*3*/].f_2 = unk_0xA95CF30C72EB526E(iVar2);
				StringCopy(&(Local_114[iVar0 /*20*/].f_2), unk_0xD885B2234FC72D62(iVar2), 64);
				unk_0xF0059F27F7BB6680(&iLocal_126, iVar1);
				if (unk_0x1D403DFADBC2DE3C(vLocal_115[iVar1 /*3*/].f_2, 0))
				{
					unk_0xF0059F27F7BB6680(&iLocal_128, iVar1);
				}
				if (func_45(vLocal_115[iVar1 /*3*/]))
				{
					Local_114[iVar0 /*20*/].f_12 = 1;
				}
				else if (func_98(vLocal_115[iVar1 /*3*/], 0))
				{
					Local_114[iVar0 /*20*/].f_13 = 1;
				}
				if (iLocal_132 == iVar0)
				{
					if (unk_0x5237AF95232D78C5(vLocal_115[iVar1 /*3*/].f_2, 0))
					{
					}
				}
				if (Local_114[iVar0 /*20*/].f_12)
				{
					if (!unk_0xFA30DFD0084E92FE(iLocal_128, iVar1) && !unk_0xFA30DFD0084E92FE(iLocal_128, unk_0xB5CEFD608600A09F()))
					{
					}
				}
				else if (Local_114[iVar0 /*20*/].f_13)
				{
				}
			}
		}
		iVar0++;
	}
	if (iLocal_129 != iVar5)
	{
		iLocal_129 = iVar5;
	}
}

int func_776()//Position - 0x1F5B3
{
	return -1;
}

void func_777()//Position - 0x1F5BC
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iLocal_132 = -1;
	if (unk_0xFA30DFD0084E92FE(iLocal_126, unk_0xB5CEFD608600A09F()))
	{
		if (unk_0xFA30DFD0084E92FE(iLocal_127, unk_0x6BAA0516CC970D99()))
		{
			if (!func_260(unk_0xB5CEFD608600A09F()))
			{
				iLocal_132 = unk_0x6BAA0516CC970D99();
			}
			else if (func_258() && !func_780())
			{
				iVar0 = func_778();
				if (unk_0x15DBD981998D4FE1(iVar0))
				{
					iVar1 = unk_0x5363B43856FA7779(iVar0);
					if (unk_0xF6391659C669C3B1(iVar1))
					{
						iVar2 = unk_0xDE780EBA36114734(iVar1);
						iLocal_132 = iVar2;
					}
				}
			}
		}
	}
}

var func_778()//Position - 0x1F638
{
	if (unk_0x724D816EA203A79E(func_779()))
	{
		return func_779();
	}
	return func_257();
}

var func_779()//Position - 0x1F656
{
	return Global_240006.f_3;
}

bool func_780()//Position - 0x1F664
{
	return unk_0xFA30DFD0084E92FE(Global_240006, 11);
}

int func_781()//Position - 0x1F676
{
	var uVar0;
	
	func_786(&uVar0);
	if (Global_14083F == 0)
	{
		if (!unk_0x7AF0088ABFA713B6())
		{
			return 1;
		}
	}
	if (func_785())
	{
		return 1;
	}
	if (Global_25891C)
	{
		return 1;
	}
	if (func_784())
	{
		return 1;
	}
	if (func_783(157))
	{
		if (!func_782())
		{
			return 1;
		}
	}
	if (func_783(155))
	{
		return 1;
	}
	if (!unk_0x57D316754A262B34())
	{
		return 1;
	}
	if (func_73() != 0)
	{
		if (unk_0xB731B8C5BCE89836(func_73()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_782()//Position - 0x1F700
{
	return Global_255A46.f_24A;
}

int func_783(int iParam0)//Position - 0x1F70F
{
	if (unk_0xA1AC399BCBEE5B2D(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_784()//Position - 0x1F726
{
	return Global_258063;
}

bool func_785()//Position - 0x1F732
{
	return Global_255A46.f_245;
}

void func_786(var uParam0)//Position - 0x1F741
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
					func_787(iVar0);
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

void func_787(int iParam0)//Position - 0x1F7B4
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x414AA1932D1C88E2(1, iParam0, &vVar0, 3))
	{
		if (func_955(vVar0.y, 1, 1))
		{
			iVar1 = unk_0xA95CF30C72EB526E(vVar0.y);
			if (unk_0x724D816EA203A79E(iVar1))
			{
				if (unk_0x5237AF95232D78C5(iVar1, 0))
				{
					iVar2 = unk_0x9FE9D386222EEE47(iVar1, 0);
					if (unk_0x403C891106DCABAF(iVar2, vVar0.z) && unk_0x32405B7614E36453())
					{
						if (func_788(iVar2, &bVar3))
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

int func_788(int iParam0, var uParam1)//Position - 0x1F835
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

int func_789(bool bParam0)//Position - 0x1F894
{
	if (func_793(1))
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
		if (func_90() == func_29() || !func_955(func_90(), 0, 1))
		{
			return 1;
		}
	}
	if (!func_725(unk_0xB5CEFD608600A09F()))
	{
		if (func_792(unk_0xB5CEFD608600A09F()) && func_790(func_791(unk_0xB5CEFD608600A09F()), 11))
		{
			return 1;
		}
	}
	return 0;
}

bool func_790(int iParam0, int iParam1)//Position - 0x1F917
{
	return func_110(iParam0) == iParam1;
}

int func_791(int iParam0)//Position - 0x1F928
{
	if (iParam0 != func_29() && func_955(iParam0, 1, 1))
	{
		return Global_24FB5C[iParam0 /*406*/].f_131.f_C;
	}
	return -1;
}

int func_792(int iParam0)//Position - 0x1F959
{
	if (iParam0 != func_29() && func_955(iParam0, 1, 1))
	{
		return unk_0xFA30DFD0084E92FE(Global_24FB5C[iParam0 /*406*/].f_131, 4);
	}
	return 0;
}

int func_793(bool bParam0)//Position - 0x1F98D
{
	bool bVar0;
	
	if (!func_166(1))
	{
		bVar0 = false;
		if (Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_39 != func_29())
		{
			if (func_955(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_39, 0, 1))
			{
				if ((Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_18 == 4 || Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_18 == 8) || Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_18 == 6)
				{
					bVar0 = true;
				}
			}
		}
		else if (func_794(func_62(unk_0xB5CEFD608600A09F())) == 0)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				func_230(31);
				if (func_94(func_62(unk_0xB5CEFD608600A09F())))
				{
					func_230(81);
				}
				if (Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_39 != func_29() && unk_0x96B1061E8F3CBC9A(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_39))
				{
					Global_18C287 = func_238(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_39, -2, 0, 0);
					if (!func_45(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_39))
					{
						func_230(88);
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

int func_794(int iParam0)//Position - 0x1FADE
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

void func_795()//Position - 0x1FC92
{
	SYSTEM::WAIT(0);
}

void func_796()//Position - 0x1FC9F
{
	int iVar0;
	int iVar1;
	
	if (!func_861(&iLocal_106))
	{
		unk_0x3857DADBD6EC8A54("BIKER_MP_MUSIC_STOP");
	}
	unk_0x0F789D8A502A4C34(0);
	func_503(&iLocal_106);
	if (unk_0x7AF0088ABFA713B6())
	{
		if (unk_0x84788C4CA5E15BDC(unk_0xBC25C936A095B5BA()) == uLocal_143[0] || unk_0x84788C4CA5E15BDC(unk_0xBC25C936A095B5BA()) == uLocal_143[1])
		{
			unk_0x4106FAF8AA1D69D5(unk_0xBC25C936A095B5BA(), iLocal_144);
		}
	}
	if (unk_0x7AF0088ABFA713B6())
	{
		if (func_44(unk_0xF0BF4763784095DA(), 9))
		{
			unk_0x1E5C2A1EAB944289(unk_0xBC25C936A095B5BA(), false);
			func_80(9);
		}
	}
	func_51();
	Global_267214.f_106 = 0;
	func_859(Global_196948, -1, -1, -1, -1);
	func_800(1, 0);
	func_799();
	func_512();
	func_66();
	if (unk_0xCBBE5AFE2CD2E9B6(unk_0xBC25C936A095B5BA()))
	{
		iVar0 = unk_0xD20EBB97FE8799ED(unk_0xBC25C936A095B5BA());
		iVar1 = unk_0x6F79ECA8C83E4357(iVar0);
		if (func_507(iVar1))
		{
			unk_0x020AA92DA39D4617(iVar0, 0);
		}
	}
	func_561(0);
	func_798();
	func_797();
	unk_0x95E4B6F3ED223F5A();
}

void func_797()//Position - 0x1FD8C
{
	unk_0x926FDA90094AA5FA(uLocal_143[0]);
	unk_0x926FDA90094AA5FA(uLocal_143[1]);
}

void func_798()//Position - 0x1FDA8
{
	if (Global_195F30)
	{
		if (unk_0xFA30DFD0084E92FE(Global_195F31, 0))
		{
			unk_0x7CB6FD92BE491AD9(&Global_2692A7, 0);
		}
		if (unk_0xFA30DFD0084E92FE(Global_195F31, 1))
		{
			unk_0x7CB6FD92BE491AD9(&Global_2692A7, 1);
		}
		if (unk_0xFA30DFD0084E92FE(Global_195F31, 5))
		{
			unk_0x7CB6FD92BE491AD9(&Global_2692A7, 5);
		}
		if (unk_0x86BC948CAD7C61EF(-355737150))
		{
			unk_0xF72F6BB050622804(-355737150, 1, 0, 0);
		}
		if (unk_0x86BC948CAD7C61EF(-580979506))
		{
			unk_0xF72F6BB050622804(-580979506, 1, 0, 0);
		}
		if (unk_0x86BC948CAD7C61EF(-1426452475))
		{
			unk_0xF72F6BB050622804(-1426452475, 1, 0, 0);
		}
		if (unk_0x86BC948CAD7C61EF(745417724))
		{
			unk_0xF72F6BB050622804(745417724, 1, 0, 0);
		}
		if (unk_0x86BC948CAD7C61EF(-1305304906))
		{
			unk_0xF72F6BB050622804(-1305304906, 1, 0, 0);
		}
		if (unk_0x86BC948CAD7C61EF(-1543175077))
		{
			unk_0xF72F6BB050622804(-1543175077, 1, 0, 0);
		}
		if (unk_0x86BC948CAD7C61EF(-811770997))
		{
			unk_0xF72F6BB050622804(-811770997, 1, 0, 0);
		}
		Global_195F31 = 0;
	}
	Global_195F30 = 0;
}

void func_799()//Position - 0x1FEA8
{
	struct<20> Var0;
	
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Global_1803FC = { Var0 };
	Global_1803FC.f_D = func_29();
	if (unk_0xFA30DFD0084E92FE(Global_1801DE, 3))
	{
		unk_0x7CB6FD92BE491AD9(&Global_1801DE, 3);
	}
}

void func_800(bool bParam0, int iParam1)//Position - 0x1FF02
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
		func_857();
		unk_0x7CB6FD92BE491AD9(&(Global_19693F.f_3), 4);
	}
	if ((func_164() && iParam1 != 0) && Global_40001.f_3FE2)
	{
		if (Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_21 == 190 || Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_21 == 192)
		{
			func_839(unk_0xB5CEFD608600A09F(), iParam1, 1, 0);
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
		if (!unk_0xFA30DFD0084E92FE(Global_180634.f_1, 14) && !func_118(unk_0xB5CEFD608600A09F()))
		{
			func_702(0);
		}
	}
	else if (func_837(unk_0xB5CEFD608600A09F()) != -1)
	{
		func_715(-1);
	}
	func_836(func_29());
	if (func_224(16))
	{
		func_835(16);
	}
	func_832(0);
	func_711(-1);
	func_799();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_831(iVar0);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_829(iVar1);
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
	iVar2 = func_104();
	if ((func_86(iVar2) || iVar2 == 205) || iVar2 == 210)
	{
		func_828(-1);
	}
	else if (((iVar2 == 201 || iVar2 == 200) || iVar2 == 179) || func_139(iVar2))
	{
		func_825(-1, 1);
	}
	else if (((((func_103(iVar2) || func_824(iVar2)) || func_823(iVar2)) || func_129(iVar2)) || func_128(iVar2)) || func_127(iVar2))
	{
	}
	else
	{
		func_825(-1, 1);
	}
	func_750(19);
	func_750(20);
	func_750(21);
	func_750(22);
	func_750(27);
	func_835(3);
	func_835(4);
	func_835(7);
	func_822();
	if (func_113(unk_0xB5CEFD608600A09F()))
	{
		func_821(0);
	}
	func_750(29);
	Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_39 = func_29();
	if (Global_267214.f_1312.f_21 != 0)
	{
		Global_267214.f_1312.f_21 = 0;
	}
	if (bParam0)
	{
		func_814();
	}
	if (!func_118(unk_0xB5CEFD608600A09F()))
	{
		func_813();
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
		func_812("IMPEXP_SELFDES", 0);
		func_803("IMPEXP_SELFDES");
		unk_0x7CB6FD92BE491AD9(&(Global_19693F.f_3), 8);
	}
	func_801(iVar2, 0);
}

void func_801(int iParam0, bool bParam1)//Position - 0x202CC
{
	if (bParam1)
	{
		if (!unk_0xFA30DFD0084E92FE(Global_19693F.f_3, 9))
		{
			unk_0xD6423910AAD8A379(func_802(iParam0));
			unk_0xF0059F27F7BB6680(&(Global_19693F.f_3), 9);
		}
	}
	else if (unk_0xFA30DFD0084E92FE(Global_19693F.f_3, 9))
	{
		unk_0xC1300D0F3A74E20B(func_802(iParam0));
		unk_0x7CB6FD92BE491AD9(&(Global_19693F.f_3), 9);
	}
}

char* func_802(int iParam0)//Position - 0x20328
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

void func_803(char* sParam0)//Position - 0x203A3
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
					func_805();
					Global_19B04.f_3720[iVar0 /*104*/].f_63[Global_389D] = 0;
					if (func_804(iVar0))
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

int func_804(int iParam0)//Position - 0x20457
{
	if ((Global_19B04.f_3720[iParam0 /*104*/].f_63[0] == 1 || Global_19B04.f_3720[iParam0 /*104*/].f_63[1] == 1) || Global_19B04.f_3720[iParam0 /*104*/].f_63[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_805()//Position - 0x204AC
{
	if (func_811(14))
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
		Global_389D = func_806();
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

var func_806()//Position - 0x2054E
{
	func_807();
	return Global_19B04.f_932.f_21B.f_10CD;
}

void func_807()//Position - 0x20567
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_810(Global_19B04.f_932.f_21B.f_10CD) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_809(unk_0xBC25C936A095B5BA());
			if (func_808(iVar0) && (!func_811(14) || Global_196EB))
			{
				if (Global_19B04.f_932.f_21B.f_10CD != iVar0 && func_808(Global_19B04.f_932.f_21B.f_10CD))
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

bool func_808(int iParam0)//Position - 0x20664
{
	return iParam0 < 3;
}

int func_809(int iParam0)//Position - 0x20670
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_810(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_810(int iParam0)//Position - 0x206AD
{
	if (func_808(iParam0))
	{
		return Global_19B04.f_6D75[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_811(int iParam0)//Position - 0x206D7
{
	return Global_8C41 == iParam0;
}

void func_812(char* sParam0, int iParam1)//Position - 0x206E5
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

void func_813()//Position - 0x207FD
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

void func_814()//Position - 0x20844
{
	unk_0x38AAB0A4B0E2C9F3(&(Global_24B2CE.f_18), &Global_24C33D, 2);
	unk_0x38AAB0A4B0E2C9F3(&(Global_24B2CE.f_1A), &Global_24C33F, 18);
	func_819();
	func_815(1, 1, 0);
	func_52();
}

void func_815(bool bParam0, bool bParam1, bool bParam2)//Position - 0x2087A
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
		func_818();
	}
	if (!bParam2)
	{
		func_54(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
	}
	func_817(0);
	func_816();
}

void func_816()//Position - 0x20919
{
	struct<6> Var0;
	
	if (Global_24B2CE.f_1E3.f_1 == unk_0x8A55B15F4133C912())
	{
		Global_24B2CE.f_1E3 = { Var0 };
	}
}

void func_817(bool bParam0)//Position - 0x2093E
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

void func_818()//Position - 0x2095E
{
	unk_0x38AAB0A4B0E2C9F3(&(Global_24B2CE.f_169), &Global_24C48E, 121);
}

void func_819()//Position - 0x20977
{
	func_820();
	Global_24B2CE.f_8C4 = 0;
}

void func_820()//Position - 0x2098B
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

void func_821(bool bParam0)//Position - 0x209B7
{
	if (bParam0)
	{
		if (!func_105(unk_0xB5CEFD608600A09F(), 9))
		{
			if (func_111(unk_0xB5CEFD608600A09F()) != 0)
			{
				func_120(9);
			}
		}
	}
	else if (func_105(unk_0xB5CEFD608600A09F(), 9))
	{
		func_750(9);
	}
}

void func_822()//Position - 0x209FD
{
	if (func_560(unk_0xB5CEFD608600A09F()))
	{
		func_750(25);
	}
}

int func_823(int iParam0)//Position - 0x20A16
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

int func_824(int iParam0)//Position - 0x20A36
{
	if ((iParam0 == 191 || iParam0 == 190) || iParam0 == 192)
	{
		return 1;
	}
	return 0;
}

void func_825(int iParam0, bool bParam1)//Position - 0x20A61
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_104();
	}
	if (iParam0 > 0)
	{
		if (func_168() != func_29())
		{
			if (func_726(unk_0xB5CEFD608600A09F()) == unk_0xB5CEFD608600A09F())
			{
				Global_262283.f_5D[func_827(iParam0)] = 1;
			}
		}
		iVar0 = func_827(159);
		if (func_826(iVar0, Global_40001.f_2EDB, bParam1))
		{
			func_7(&(Global_262283[iVar0 /*2*/]));
			func_4(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_827(157);
		if (func_826(iVar0, Global_40001.f_2EDB, bParam1))
		{
			func_7(&(Global_262283[iVar0 /*2*/]));
			func_4(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_827(148);
		if (func_826(iVar0, Global_40001.f_2EDB, bParam1))
		{
			func_7(&(Global_262283[iVar0 /*2*/]));
			func_4(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_827(164);
		if (func_826(iVar0, Global_40001.f_2EDB, bParam1))
		{
			func_7(&(Global_262283[iVar0 /*2*/]));
			func_4(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_827(142);
		if (func_826(iVar0, Global_40001.f_2EDB, bParam1))
		{
			func_7(&(Global_262283[iVar0 /*2*/]));
			func_4(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_827(152);
		if (func_826(iVar0, Global_40001.f_2EDB, bParam1))
		{
			func_7(&(Global_262283[iVar0 /*2*/]));
			func_4(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_827(166);
		if (func_826(iVar0, Global_40001.f_2EDB, bParam1))
		{
			func_7(&(Global_262283[iVar0 /*2*/]));
			func_4(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_827(170);
		if (func_826(iVar0, Global_40001.f_2EDB, bParam1))
		{
			func_7(&(Global_262283[iVar0 /*2*/]));
			func_4(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_827(173);
		if (func_826(iVar0, Global_40001.f_2EDB, bParam1))
		{
			func_7(&(Global_262283[iVar0 /*2*/]));
			func_4(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_827(179);
		if (func_826(iVar0, Global_40001.f_2EDB, bParam1))
		{
			func_7(&(Global_262283[iVar0 /*2*/]));
			func_4(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_827(200);
		if (func_826(iVar0, Global_40001.f_2EDB, bParam1))
		{
			func_7(&(Global_262283[iVar0 /*2*/]));
			func_4(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_827(201);
		if (func_826(iVar0, Global_40001.f_2EDB, bParam1))
		{
			func_7(&(Global_262283[iVar0 /*2*/]));
			func_4(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_827(182);
		if (func_826(iVar0, Global_40001.f_2EDC, 0))
		{
			func_7(&(Global_262283[iVar0 /*2*/]));
			func_4(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_827(183);
		if (func_826(iVar0, Global_40001.f_2EDC, 0))
		{
			func_7(&(Global_262283[iVar0 /*2*/]));
			func_4(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_827(185);
		if (func_826(iVar0, Global_40001.f_2EDC, 0))
		{
			func_7(&(Global_262283[iVar0 /*2*/]));
			func_4(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_827(186);
		if (func_826(iVar0, Global_40001.f_2EDC, 0))
		{
			func_7(&(Global_262283[iVar0 /*2*/]));
			func_4(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_827(180);
		if (func_826(iVar0, Global_40001.f_2EDC, 0))
		{
			func_7(&(Global_262283[iVar0 /*2*/]));
			func_4(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_827(195);
		if (func_826(iVar0, Global_40001.f_2EDC, 0))
		{
			func_7(&(Global_262283[iVar0 /*2*/]));
			func_4(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_827(197);
		if (func_826(iVar0, Global_40001.f_2EDC, 0))
		{
			func_7(&(Global_262283[iVar0 /*2*/]));
			func_4(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_827(198);
		if (func_826(iVar0, Global_40001.f_2EDC, 0))
		{
			func_7(&(Global_262283[iVar0 /*2*/]));
			func_4(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_827(207);
		if (func_826(iVar0, Global_40001.f_2EDC, 0))
		{
			func_7(&(Global_262283[iVar0 /*2*/]));
			func_4(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_827(208);
		if (func_826(iVar0, Global_40001.f_2EDC, 0))
		{
			func_7(&(Global_262283[iVar0 /*2*/]));
			func_4(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_827(209);
		if (func_826(iVar0, Global_40001.f_2EDC, 0))
		{
			func_7(&(Global_262283[iVar0 /*2*/]));
			func_4(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_827(214);
		if (func_826(iVar0, Global_40001.f_2EDC, 0))
		{
			func_7(&(Global_262283[iVar0 /*2*/]));
			func_4(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_827(215);
		if (func_826(iVar0, Global_40001.f_2EDC, 0))
		{
			func_7(&(Global_262283[iVar0 /*2*/]));
			func_4(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_827(216);
		if (func_826(iVar0, Global_40001.f_2EDC, 0))
		{
			func_7(&(Global_262283[iVar0 /*2*/]));
			func_4(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_827(217);
		if (func_826(iVar0, Global_40001.f_2EDC, 0))
		{
			func_7(&(Global_262283[iVar0 /*2*/]));
			func_4(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_827(218);
		if (func_826(iVar0, Global_40001.f_2EDC, 0))
		{
			func_7(&(Global_262283[iVar0 /*2*/]));
			func_4(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_827(219);
		if (func_826(iVar0, Global_40001.f_2EDC, 0))
		{
			func_7(&(Global_262283[iVar0 /*2*/]));
			func_4(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_827(220);
		if (func_826(iVar0, Global_40001.f_2EDC, 0))
		{
			func_7(&(Global_262283[iVar0 /*2*/]));
			func_4(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_827(221);
		if (func_826(iVar0, Global_40001.f_2EDC, 0))
		{
			func_7(&(Global_262283[iVar0 /*2*/]));
			func_4(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_826(int iParam0, int iParam1, bool bParam2)//Position - 0x210DD
{
	if (bParam2)
	{
		if ((!func_105(unk_0xB5CEFD608600A09F(), 19) && !func_105(unk_0xB5CEFD608600A09F(), 20)) && !func_105(unk_0xB5CEFD608600A09F(), 9))
		{
			return 0;
		}
	}
	if (Global_262283.f_5D[iParam0] == 1 && func_5(&(Global_262283[iParam0 /*2*/])))
	{
		if (func_22(&(Global_262283[iParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_262283.f_5D[iParam0] = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_827(int iParam0)//Position - 0x21163
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

void func_828(int iParam0)//Position - 0x21365
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_104();
	}
	if (iParam0 > 0)
	{
		if (func_168() != func_29())
		{
			Global_262283.f_5D[func_827(iParam0)] = 1;
		}
		iVar0 = func_827(155);
		if (func_826(iVar0, Global_40001.f_2EDC, 0))
		{
			func_7(&(Global_262283[iVar0 /*2*/]));
			func_4(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_827(163);
		if (func_826(iVar0, Global_40001.f_2EDC, 0))
		{
			func_7(&(Global_262283[iVar0 /*2*/]));
			func_4(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_827(160);
		if (func_826(iVar0, Global_40001.f_2EDC, 0))
		{
			func_7(&(Global_262283[iVar0 /*2*/]));
			func_4(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_827(153);
		if (func_826(iVar0, Global_40001.f_2EDC, 0))
		{
			func_7(&(Global_262283[iVar0 /*2*/]));
			func_4(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_827(162);
		if (func_826(iVar0, Global_40001.f_2EDC, 0))
		{
			func_7(&(Global_262283[iVar0 /*2*/]));
			func_4(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_827(154);
		if (func_826(iVar0, Global_40001.f_2EDC, 0))
		{
			func_7(&(Global_262283[iVar0 /*2*/]));
			func_4(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_827(171);
		if (func_826(iVar0, Global_40001.f_2EDC, 0))
		{
			func_7(&(Global_262283[iVar0 /*2*/]));
			func_4(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_827(172);
		if (func_826(iVar0, Global_40001.f_2EDC, 0))
		{
			func_7(&(Global_262283[iVar0 /*2*/]));
			func_4(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_827(199);
		if (func_826(iVar0, Global_40001.f_2EDC, 0))
		{
			func_7(&(Global_262283[iVar0 /*2*/]));
			func_4(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_827(194);
		if (func_826(iVar0, Global_40001.f_2EDC, 0))
		{
			func_7(&(Global_262283[iVar0 /*2*/]));
			func_4(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_827(193);
		if (func_826(iVar0, Global_40001.f_2EDC, 0))
		{
			func_7(&(Global_262283[iVar0 /*2*/]));
			func_4(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_827(210);
		if (func_826(iVar0, Global_40001.f_2EDC, 0))
		{
			func_7(&(Global_262283[iVar0 /*2*/]));
			func_4(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_827(205);
		if (func_826(iVar0, Global_40001.f_2EDC, 0))
		{
			func_7(&(Global_262283[iVar0 /*2*/]));
			func_4(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_827(189);
		if (func_826(iVar0, Global_40001.f_2EDC, 0))
		{
			func_7(&(Global_262283[iVar0 /*2*/]));
			func_4(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_827(211);
		if (func_826(iVar0, Global_40001.f_2EDC, 0))
		{
			func_7(&(Global_262283[iVar0 /*2*/]));
			func_4(&(Global_262283[iVar0 /*2*/]), 1, 0);
		}
	}
}

void func_829(int iParam0)//Position - 0x21696
{
	if (!func_11(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_12F[iParam0 /*3*/], func_830(), 0))
	{
		Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_12F[iParam0 /*3*/] = { func_830() };
	}
	if (!func_11(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_122[iParam0 /*3*/], func_830(), 0))
	{
		Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_122[iParam0 /*3*/] = { func_830() };
	}
}

Vector3 func_830()//Position - 0x21718
{
	vector3 vVar0;
	
	return vVar0;
}

void func_831(int iParam0)//Position - 0x21724
{
	if (!func_11(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_91[iParam0 /*3*/], func_830(), 0))
	{
		Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_91[iParam0 /*3*/] = { func_830() };
	}
	if (!func_11(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_78[iParam0 /*3*/], func_830(), 0))
	{
		Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_78[iParam0 /*3*/] = { func_830() };
	}
}

void func_832(bool bParam0)//Position - 0x217A2
{
	if (bParam0)
	{
		if (!func_745(unk_0xB5CEFD608600A09F(), 14))
		{
			func_834(14);
		}
	}
	else if (func_745(unk_0xB5CEFD608600A09F(), 14))
	{
		func_833(14);
	}
}

void func_833(int iParam0)//Position - 0x217D9
{
	unk_0x7CB6FD92BE491AD9(&(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_5), iParam0);
}

void func_834(int iParam0)//Position - 0x217F6
{
	unk_0xF0059F27F7BB6680(&(Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_5), iParam0);
}

void func_835(int iParam0)//Position - 0x21813
{
	unk_0x7CB6FD92BE491AD9(&(Global_267214.f_1312.f_25), iParam0);
}

void func_836(int iParam0)//Position - 0x2182A
{
	if (func_41(unk_0xB5CEFD608600A09F()))
	{
		if (unk_0xB5CEFD608600A09F() != iParam0)
		{
			if (Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_1BB != iParam0)
			{
				Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_1BB = iParam0;
				if (iParam0 != func_29())
				{
				}
			}
		}
	}
}

int func_837(int iParam0)//Position - 0x21879
{
	if (func_838(iParam0, 0))
	{
		return Global_18C80F[iParam0 /*558*/].f_B.f_20;
	}
	return -1;
}

int func_838(int iParam0, int iParam1)//Position - 0x2189C
{
	if (Global_18C80F[iParam0 /*558*/].f_B.f_20 != -1 || (iParam1 && Global_18C80F[iParam0 /*558*/].f_B.f_21 != -1))
	{
		return 1;
	}
	return 0;
}

void func_839(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x218D7
{
	int iVar0;
	
	if (func_320(iParam0, iParam1) && func_856(iParam0, iParam1))
	{
		iVar0 = func_319(iParam0, iParam1);
		func_843(iVar0, bParam2, bParam3);
		func_840(iVar0, 1);
	}
}

void func_840(int iParam0, bool bParam1)//Position - 0x21912
{
	if (!func_842(iParam0))
	{
		return;
	}
	func_306(func_841(iParam0), bParam1, -1, 1);
	Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_111.f_A8[iParam0 /*12*/].f_6 = bParam1;
}

int func_841(int iParam0)//Position - 0x2194E
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

bool func_842(int iParam0)//Position - 0x219A8
{
	return (iParam0 >= 0 && iParam0 < 6);
}

void func_843(int iParam0, bool bParam1, bool bParam2)//Position - 0x219BD
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	bVar1 = false;
	iVar2 = func_612(unk_0xB5CEFD608600A09F(), iParam0);
	if (!bParam1)
	{
		func_855(iParam0, 0, bParam2);
	}
	if (bParam1)
	{
		iVar0 = Global_262209[iParam0];
		iVar0 = func_854(iParam0, bParam2);
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		if (!bParam2)
		{
			Global_196FC7 = -1;
		}
		func_853(iParam0, 0, bParam2);
	}
	else if (func_851(iParam0, bParam2))
	{
		iVar0 = func_850(iVar2, 0);
		iVar3 = func_685(unk_0xB5CEFD608600A09F(), iVar2);
		iVar4 = func_849(iVar2, bParam2);
		iVar5 = func_850(iVar2, bParam2);
		fVar6 = (SYSTEM::TO_FLOAT(iVar5) / SYSTEM::TO_FLOAT(iVar4));
		iVar0 = (iVar0 - SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) * fVar6)));
		if (iVar0 <= 0)
		{
			iVar0 = iVar5;
		}
		if (func_848(iVar2) && func_847(unk_0xB5CEFD608600A09F(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
		func_855(iParam0, iVar0, bParam2);
	}
	else
	{
		if (func_846(unk_0xB5CEFD608600A09F(), iVar2) > 0)
		{
			func_845(iParam0, (Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_111.f_A8[iParam0 /*12*/].f_2 - (func_849(iVar2, bParam2) / 2)));
		}
		iVar0 = (func_850(iVar2, bParam2) / func_846(unk_0xB5CEFD608600A09F(), iVar2) + 1);
	}
	if (!bVar1)
	{
		if (func_848(iVar2) && func_847(unk_0xB5CEFD608600A09F(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
	}
	func_844(unk_0xB5CEFD608600A09F(), iVar2, iVar0, bParam2);
}

void func_844(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x21B2E
{
	int iVar0;
	
	if (iParam0 == func_29())
	{
		return;
	}
	if (func_313(iParam1))
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

void func_845(int iParam0, int iParam1)//Position - 0x21BA2
{
	if (iParam0 != -1 && iParam1 != Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_111.f_A8[iParam0 /*12*/].f_2)
	{
		Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_111.f_A8[iParam0 /*12*/].f_2 = iParam1;
	}
}

int func_846(int iParam0, int iParam1)//Position - 0x21BE7
{
	int iVar0;
	
	if (iParam0 == func_29())
	{
		return 0;
	}
	if (func_313(iParam1))
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

int func_847(int iParam0, int iParam1)//Position - 0x21C46
{
	int iVar0;
	
	if (iParam0 == func_29())
	{
		return 0;
	}
	if (func_313(iParam1) && func_848(iParam1))
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

bool func_848(int iParam0)//Position - 0x21CB0
{
	return func_161(iParam0) == 5;
}

int func_849(int iParam0, bool bParam1)//Position - 0x21CC0
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_161(iParam0);
	switch (iVar1)
	{
		case 1:
			uVar0 = Global_40001.f_3FC5;
			if (func_318(unk_0xB5CEFD608600A09F(), iParam0, 0))
			{
				uVar0 = Global_40001.f_3FCA;
			}
			break;
		
		case 3:
			uVar0 = Global_40001.f_3FC4;
			if (func_318(unk_0xB5CEFD608600A09F(), iParam0, 0))
			{
				uVar0 = Global_40001.f_3FC9;
			}
			break;
		
		case 4:
			uVar0 = Global_40001.f_3FC3;
			if (func_318(unk_0xB5CEFD608600A09F(), iParam0, 0))
			{
				uVar0 = Global_40001.f_3FC8;
			}
			break;
		
		case 0:
			uVar0 = Global_40001.f_3FC1;
			if (func_318(unk_0xB5CEFD608600A09F(), iParam0, 0))
			{
				uVar0 = Global_40001.f_3FC6;
			}
			break;
		
		case 2:
			uVar0 = Global_40001.f_3FC2;
			if (func_318(unk_0xB5CEFD608600A09F(), iParam0, 0))
			{
				uVar0 = Global_40001.f_3FC7;
			}
			break;
		
		case 5:
			if (bParam1)
			{
				uVar0 = Global_40001.f_4FDC;
				if (func_318(unk_0xB5CEFD608600A09F(), iParam0, 0))
				{
					uVar0 = Global_40001.f_4FDD;
				}
			}
			else
			{
				uVar0 = Global_40001.f_4FCC;
				if (func_318(unk_0xB5CEFD608600A09F(), iParam0, 0))
				{
					uVar0 = Global_40001.f_4FCD;
				}
			}
			break;
	}
	return uVar0;
}

int func_850(int iParam0, bool bParam1)//Position - 0x21DF7
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_161(iParam0);
	switch (iVar1)
	{
		case 1:
			iVar0 = Global_40001.f_3FB2;
			if (func_318(unk_0xB5CEFD608600A09F(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_40001.f_3FBB);
			}
			if (func_318(unk_0xB5CEFD608600A09F(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_40001.f_3FC0);
			}
			break;
		
		case 3:
			iVar0 = Global_40001.f_3FB3;
			if (func_318(unk_0xB5CEFD608600A09F(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_40001.f_3FBA);
			}
			if (func_318(unk_0xB5CEFD608600A09F(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_40001.f_3FBF);
			}
			break;
		
		case 4:
			iVar0 = Global_40001.f_3FB4;
			if (func_318(unk_0xB5CEFD608600A09F(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_40001.f_3FB9);
			}
			if (func_318(unk_0xB5CEFD608600A09F(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_40001.f_3FBE);
			}
			break;
		
		case 0:
			iVar0 = Global_40001.f_3FB5;
			if (func_318(unk_0xB5CEFD608600A09F(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_40001.f_3FB7);
			}
			if (func_318(unk_0xB5CEFD608600A09F(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_40001.f_3FBC);
			}
			break;
		
		case 2:
			iVar0 = Global_40001.f_3FB6;
			if (func_318(unk_0xB5CEFD608600A09F(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_40001.f_3FB8);
			}
			if (func_318(unk_0xB5CEFD608600A09F(), iParam0, 1))
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
			if (func_318(unk_0xB5CEFD608600A09F(), iParam0, 0))
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
			if (func_318(unk_0xB5CEFD608600A09F(), iParam0, 1))
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
			if (func_847(unk_0xB5CEFD608600A09F(), iParam0) == 2)
			{
				iVar0 *= 2;
			}
			break;
	}
	return iVar0;
}

bool func_851(int iParam0, bool bParam1)//Position - 0x22001
{
	if (bParam1)
	{
		return func_307(15384, -1, -1);
	}
	return func_307(func_852(iParam0), -1, -1);
}

int func_852(int iParam0)//Position - 0x22026
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

void func_853(int iParam0, bool bParam1, bool bParam2)//Position - 0x22080
{
	if (bParam2)
	{
		func_306(15384, bParam1, -1, 1);
		return;
	}
	func_306(func_852(iParam0), bParam1, -1, 1);
}

int func_854(int iParam0, bool bParam1)//Position - 0x220AB
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_262209[iParam0];
	iVar1 = func_612(unk_0xB5CEFD608600A09F(), iParam0);
	if (bParam1)
	{
		iVar0 = Global_262210;
	}
	if (func_848(iVar1))
	{
		if (func_847(unk_0xB5CEFD608600A09F(), iVar1) == 2)
		{
			iVar0 *= 2;
		}
	}
	return iVar0;
}

void func_855(int iParam0, int iParam1, bool bParam2)//Position - 0x220F3
{
	if (bParam2)
	{
		Global_262210 = iParam1;
		return;
	}
	Global_262209[iParam0] = iParam1;
}

int func_856(int iParam0, int iParam1)//Position - 0x22113
{
	int iVar0;
	
	if (func_320(iParam0, iParam1))
	{
		iVar0 = func_319(iParam0, iParam1);
		if (Global_18402B[iParam0 /*770*/].f_111.f_A8[iVar0 /*12*/].f_4 > 0 && Global_18402B[iParam0 /*770*/].f_111.f_A8[iVar0 /*12*/].f_7)
		{
			return 1;
		}
	}
	return 0;
}

void func_857()//Position - 0x22167
{
	unk_0x7CB6FD92BE491AD9(&(Global_267214.f_6BD), 28);
	unk_0x7CB6FD92BE491AD9(&(Global_267214.f_6BD), 29);
	func_858(24);
}

void func_858(int iParam0)//Position - 0x2218F
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x7CB6FD92BE491AD9(&(Global_267214.f_1312.f_7[iVar0]), iVar1);
}

void func_859(struct<14> Param0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x221B8
{
	char* sVar0;
	struct<15> Var1;
	struct<19> Var2;
	struct<19> Var3;
	struct<16> Var4;
	struct<17> Var5;
	struct<15> Var6;
	struct<17> Var7;
	struct<17> Var8;
	
	sVar0 = unk_0x1377080E9B0BD993();
	if (unk_0x7AF0088ABFA713B6())
	{
		if (unk_0x3362CDE8460ED38B(sVar0, "GB_CARJACKING"))
		{
			Var1 = { Param0 };
			Var1.f_E = iParam1;
			unk_0x16C648A3B5625AF4(&Var1);
		}
		else if (unk_0x3362CDE8460ED38B(sVar0, "GB_ROB_SHOP"))
		{
			Var2 = { Param0 };
			Var2.f_E = Global_196948.f_E;
			Var2.f_F = iParam1;
			Var2.f_10 = iParam2;
			Var2.f_11 = iParam3;
			Var2.f_12 = iParam4;
			unk_0x63963B041992CFAE(&Var2);
		}
		else if (unk_0x3362CDE8460ED38B(sVar0, "GB_COLLECT_MONEY"))
		{
			Var3 = { Param0 };
			Var3.f_E = Global_196948.f_E;
			Var3.f_F = iParam1;
			Var3.f_10 = iParam2;
			Var3.f_11 = iParam3;
			Var3.f_12 = iParam4;
			unk_0xCCE5D930DDE319E3(&Var3);
		}
		else if (unk_0x3362CDE8460ED38B(sVar0, "GB_FIVESTAR"))
		{
			Var4 = { Param0 };
			Var4.f_E = Global_196948.f_E;
			Var4.f_F = iParam1;
			unk_0x89107EE7520439EE(&Var4);
		}
		else if (unk_0x3362CDE8460ED38B(sVar0, "GB_FINDERSKEEPERS"))
		{
			Var5 = { Param0 };
			Var5.f_E = Global_196948.f_E;
			Var5.f_F = iParam1;
			Var5.f_10 = iParam2;
			unk_0x50D16072B9FF5F0F(&Var5);
		}
		else if (unk_0x3362CDE8460ED38B(sVar0, "GB_POINT_TO_POINT"))
		{
			Var6 = { Param0 };
			Var6.f_E = Global_196948.f_E;
			unk_0xB1DD9509997DDD16(&Var6);
		}
		else if (unk_0x3362CDE8460ED38B(sVar0, "GB_CASHING_OUT"))
		{
			Var7 = { Param0 };
			Var7.f_E = iParam1;
			Var7.f_F = (SYSTEM::TO_FLOAT(iParam1) / SYSTEM::TO_FLOAT(iParam2));
			Var7.f_10 = iParam3;
			unk_0xE9EBF8AF07AD96E5(&Var7);
		}
		else if (unk_0x3362CDE8460ED38B(sVar0, "GB_SALVAGE"))
		{
			Var8 = { Param0 };
			Var8.f_E = iParam1;
			Var8.f_F = iParam2;
			Var8.f_10 = Global_196948.f_E;
			unk_0x24792DBE38039DDB(&Var8);
		}
	}
	func_860();
}

void func_860()//Position - 0x2237B
{
	struct<18> Var0;
	
	Global_196948 = { Var0 };
}

bool func_861(var uParam0)//Position - 0x2238F
{
	return unk_0xFA30DFD0084E92FE(*uParam0, 0);
}

void func_862(bool bParam0, bool bParam1)//Position - 0x2239F
{
	bool bVar0;
	var uVar1;
	
	if (!func_716(0))
	{
		uVar1 = func_914(func_25(), bParam0, bVar0, bParam1);
		Global_196948.f_2 = Local_168.f_21;
		Global_196948.f_3 = Local_168.f_22;
		func_863(bParam0, uVar1, 0, 0, -1, -1, -1, -1, -1, 0);
		func_692(0);
	}
}

void func_863(bool bParam0, var uParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)//Position - 0x223EB
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
		iVar0 = func_397(unk_0xB5CEFD608600A09F());
		Global_196A5F.f_4 = func_913();
		Global_196A5F.f_5 = func_912();
		if (func_114(unk_0xB5CEFD608600A09F()) || func_115(unk_0xB5CEFD608600A09F()))
		{
			Global_196A5F.f_6 = 1;
		}
		else
		{
			Global_196A5F.f_6 = 0;
		}
		Global_196A5F.f_1 = func_908(bParam9);
		Global_196A5F.f_8 = unk_0xB99C193A32DE341D();
		Global_196A5F.f_9 = func_688(bParam0);
		Global_196A5F.f_A = uParam1;
		Global_196A5F.f_11 = Global_196A5F.f_2;
		Global_196A5F.f_12 = Global_196A5F.f_2;
		Global_196A5F.f_13 = func_680();
		Global_196A5F.f_15 = (Global_196A5F.f_8 - Global_196A5F.f_7);
		if (func_267(unk_0xB5CEFD608600A09F(), 1))
		{
			Global_196A5F.f_17 = func_688(func_97(1));
		}
		Global_196A5F.f_18 = func_907(unk_0xB5CEFD608600A09F());
		Global_196A5F.f_1C = func_689(unk_0xB5CEFD608600A09F());
		if (Global_196A5F.f_18 > 2)
		{
			Global_196A5F.f_18 = 2;
		}
		func_905(iVar0);
	}
	else
	{
		iVar0 = func_62(unk_0xB5CEFD608600A09F());
	}
	if (func_94(iVar0))
	{
		Global_19695A.f_2 = func_913();
		Global_19695A.f_3 = func_912();
		Global_19695A.f_32 = iParam4;
		Global_19695A.f_33 = iParam5;
		Global_19695A.f_A = unk_0xB99C193A32DE341D();
		Global_19695A.f_14 = (Global_19695A.f_A - Global_19695A.f_9);
		Global_19695A.f_C = uParam1;
		Global_19695A.f_13 = func_901(iVar0, bParam0, func_904(bParam3));
		if (bParam0)
		{
			Global_19695A.f_B = 1;
		}
		else
		{
			Global_19695A.f_B = 0;
		}
		if ((func_113(unk_0xB5CEFD608600A09F()) || func_112(unk_0xB5CEFD608600A09F())) || func_116(unk_0xB5CEFD608600A09F()))
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
			Global_19695A.f_2D = func_685(func_168(), iParam2);
			Global_19695A.f_2F = iParam7;
			Global_19695A.f_2E = iParam6;
			Global_19695A.f_34 = func_900(func_168(), iParam2);
		}
		func_898(iVar0);
	}
	else if (func_102(iVar0))
	{
		Global_196990.f_2 = func_913();
		Global_196990.f_3 = func_912();
		Global_196990.f_A = unk_0xB99C193A32DE341D();
		Global_196990.f_13 = (Global_196990.f_A - Global_196990.f_9);
		Global_196990.f_C = uParam1;
		if (bParam0)
		{
			Global_196990.f_B = 1;
		}
		else
		{
			Global_196990.f_B = 0;
		}
		if ((func_113(unk_0xB5CEFD608600A09F()) || func_112(unk_0xB5CEFD608600A09F())) || func_116(unk_0xB5CEFD608600A09F()))
		{
			Global_196990.f_8 = 1;
		}
		else
		{
			Global_196990.f_8 = 0;
		}
		func_896(iVar0);
	}
	else if (func_129(iVar0))
	{
		Global_1969CF.f_2 = func_913();
		Global_1969CF.f_3 = func_912();
		Global_1969CF.f_9 = unk_0xB99C193A32DE341D();
		Global_1969CF.f_12 = (Global_1969CF.f_9 - Global_1969CF.f_8);
		Global_1969CF.f_B = uParam1;
		Global_1969CF.f_7 = func_680();
		Global_1969CF.f_2A = func_682(func_49(), 5);
		iVar1 = unk_0xB5CEFD608600A09F();
		iVar2 = func_150(iVar1);
		Global_1969CF.f_1C = iVar2;
		Global_1969CF.f_1D = func_688((func_619(iVar1) || func_618(iVar1)));
		Global_1969CF.f_1E = func_688(func_895(iVar1));
		Global_1969CF.f_20 = func_688(func_616(iVar1));
		Global_1969CF.f_21 = func_688(func_617(iVar1));
		Global_1969CF.f_22 = func_688(func_894(iVar1));
		Global_1969CF.f_23 = func_688(func_615(0, iVar1) == 1);
		Global_1969CF.f_24 = func_688(func_893(iVar1));
		Global_1969CF.f_25 = func_688(func_892(iVar1));
		Global_1969CF.f_26 = func_688(func_891(iVar1));
		Global_1969CF.f_27 = func_688(func_318(iVar1, iVar2, 0));
		Global_1969CF.f_28 = func_688(func_318(iVar1, iVar2, 2));
		Global_1969CF.f_29 = func_688(func_318(iVar1, iVar2, 1));
		if (func_890(iVar1))
		{
			Global_1969CF.f_1F = 2;
		}
		else if (func_889(iVar1))
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
		if ((func_113(unk_0xB5CEFD608600A09F()) || func_112(unk_0xB5CEFD608600A09F())) || func_116(unk_0xB5CEFD608600A09F()))
		{
			Global_1969CF.f_6 = 1;
		}
		else
		{
			Global_1969CF.f_6 = 0;
		}
		Global_1969CF.f_15 = -2;
		Global_1969CF.f_16 = -2;
		func_887(iVar0);
	}
	else if (func_128(iVar0))
	{
		Global_1969FB.f_2 = func_913();
		Global_1969FB.f_3 = func_912();
		if ((func_113(unk_0xB5CEFD608600A09F()) || func_112(unk_0xB5CEFD608600A09F())) || func_116(unk_0xB5CEFD608600A09F()))
		{
			Global_1969FB.f_6 = 1;
		}
		else
		{
			Global_1969FB.f_6 = 0;
		}
		Global_1969FB.f_9 = unk_0xB99C193A32DE341D();
		Global_1969FB.f_A = func_688(bParam0);
		Global_1969FB.f_B = uParam1;
		Global_1969FB.f_11 = func_681(func_90());
		Global_1969FB.f_12 = (Global_1969FB.f_9 - Global_1969FB.f_8);
		Global_1969FB.f_14 = iParam8;
		Global_1969FB.f_15 = -2;
		Global_1969FB.f_16 = -2;
		Global_1969FB.f_1B = func_886();
		Global_1969FB.f_1D = func_137(6103, -1, 0);
		Global_1969FB.f_1E = func_137(6099, -1, 0);
		Global_1969FB.f_1F = func_137(6100, -1, 0);
		Global_1969FB.f_20 = func_137(6102, -1, 0);
		Global_1969FB.f_21 = func_137(6101, -1, 0);
		Global_1969FB.f_22 = func_137(6104, -1, 0);
		Global_1969FB.f_24 = func_688(func_97(1));
		Global_1969FB.f_25 = func_884();
		func_874();
		func_872(iVar0);
	}
	else if (func_127(iVar0))
	{
		Global_196A31.f_2 = func_913();
		Global_196A31.f_3 = func_912();
		if ((func_113(unk_0xB5CEFD608600A09F()) || func_112(unk_0xB5CEFD608600A09F())) || func_116(unk_0xB5CEFD608600A09F()))
		{
			Global_196A31.f_6 = 1;
		}
		else
		{
			Global_196A31.f_6 = 0;
		}
		Global_196A31.f_9 = unk_0xB99C193A32DE341D();
		Global_196A31.f_A = func_688(bParam0);
		Global_196A31.f_B = uParam1;
		Global_196A31.f_12 = (Global_196A31.f_9 - Global_196A31.f_8);
		Global_196A31.f_14 = iParam8;
		Global_196A31.f_17 = Global_C0073;
		Global_196A31.f_24 = Global_C0073.f_1;
		Global_196A31.f_18 = func_137(6153, -1, 0);
		Global_196A31.f_19 = func_137(6158, -1, 0);
		Global_196A31.f_1A = func_137(6159, -1, 0);
		Global_196A31.f_1B = func_688((((func_679() || func_678()) || func_677()) || func_676(unk_0xB5CEFD608600A09F())));
		Global_196A31.f_1C = func_137(6160, -1, 0);
		Global_196A31.f_1D = func_688(func_675());
		Global_196A31.f_23 = -1;
		Global_196A31.f_26 = -1;
		Global_196A31.f_27 = Global_196A31.f_4;
		Global_196A31.f_28 = Global_196A31.f_5;
		Global_196A31.f_29 = func_913();
		Global_196A31.f_2A = func_688(func_97(1));
		Global_196A31.f_2C = Global_196A31.f_12;
		func_870(iVar0);
	}
	else if (func_122(iVar0))
	{
		if (Global_196AB6.f_2 == -1)
		{
			Global_196AB6.f_2 = func_913();
		}
		if (Global_196AB6.f_3 == -1)
		{
			Global_196AB6.f_3 = func_912();
		}
		if ((func_113(unk_0xB5CEFD608600A09F()) || func_112(unk_0xB5CEFD608600A09F())) || func_116(unk_0xB5CEFD608600A09F()))
		{
			Global_196AB6.f_6 = 1;
		}
		else
		{
			Global_196AB6.f_6 = 0;
		}
		Global_196AB6.f_1 = func_908(0);
		Global_196AB6.f_7 = func_680();
		Global_196AB6.f_9 = unk_0xB99C193A32DE341D();
		Global_196AB6.f_A = func_688(bParam0);
		Global_196AB6.f_B = uParam1;
		if (func_168() != -1)
		{
			Global_196AB6.f_11 = func_674(func_168());
		}
		Global_196AB6.f_12 = (Global_196AB6.f_9 - Global_196AB6.f_8);
		Global_196AB6.f_13 = Global_267214.f_181A;
		Global_196AB6.f_1C = func_689(unk_0xB5CEFD608600A09F());
		Global_196AB6.f_1D = func_688(func_869(unk_0xB5CEFD608600A09F()));
		Global_196AB6.f_1E = func_688(func_868(unk_0xB5CEFD608600A09F()));
		Global_196AB6.f_1F = func_656(unk_0xB5CEFD608600A09F());
		if (func_267(unk_0xB5CEFD608600A09F(), 1))
		{
			Global_196AB6.f_21 = func_688(func_97(1));
		}
		if (Global_196AB6.f_22 > 2)
		{
			Global_196AB6.f_22 = 2;
		}
		func_866(iVar0);
	}
	else if (func_126(iVar0))
	{
		Global_196A81.f_2 = func_913();
		Global_196A81.f_3 = func_912();
		if ((func_113(unk_0xB5CEFD608600A09F()) || func_112(unk_0xB5CEFD608600A09F())) || func_116(unk_0xB5CEFD608600A09F()))
		{
			Global_196A81.f_6 = 1;
		}
		else
		{
			Global_196A81.f_6 = 0;
		}
		Global_196A81.f_1 = func_908(0);
		Global_196A81.f_9 = unk_0xB99C193A32DE341D();
		Global_196A81.f_A = func_688(bParam0);
		Global_196A81.f_B = uParam1;
		Global_196A81.f_12 = (Global_196A81.f_9 - Global_196A81.f_8);
		Global_196A81.f_1C = func_689(unk_0xB5CEFD608600A09F());
		if (Global_196A81.f_1C)
		{
			Global_196A81.f_1D = func_673(unk_0xB5CEFD608600A09F());
		}
		else
		{
			Global_196A81.f_1D = 0;
		}
		Global_196A81.f_1E = func_657(unk_0xB5CEFD608600A09F(), 4, -1);
		Global_196A81.f_1F = func_656(unk_0xB5CEFD608600A09F());
		Global_196A81.f_20 = func_688(func_655(unk_0xB5CEFD608600A09F()));
		Global_196A81.f_21 = func_688(func_654(unk_0xB5CEFD608600A09F()));
		Global_196A81.f_22 = func_688(func_653(unk_0xB5CEFD608600A09F()));
		Global_196A81.f_23 = func_688(func_652(unk_0xB5CEFD608600A09F()));
		Global_196A81.f_24 = func_651(unk_0xB5CEFD608600A09F());
		Global_196A81.f_25 = func_650(unk_0xB5CEFD608600A09F());
		Global_196A81.f_27 = func_649(unk_0xB5CEFD608600A09F());
		if (func_267(unk_0xB5CEFD608600A09F(), 1))
		{
			Global_196A81.f_29 = func_688(func_97(1));
		}
		if (Global_196A81.f_2A > 2)
		{
			Global_196A81.f_2A = 2;
		}
		func_864(iVar0);
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
		Global_196948.f_8 = uParam1;
		if (Global_196948.f_4 == 0)
		{
			if ((func_113(unk_0xB5CEFD608600A09F()) || func_112(unk_0xB5CEFD608600A09F())) || func_116(unk_0xB5CEFD608600A09F()))
			{
				Global_196948.f_4 = 1;
			}
		}
	}
}

void func_864(int iParam0)//Position - 0x22E43
{
	unk_0x2D7A9B577E72385E(&Global_196A81);
	func_865();
}

void func_865()//Position - 0x22E57
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

void func_866(int iParam0)//Position - 0x22F80
{
	unk_0x830C3A44EB3F2CF9(&Global_196AB6);
	func_867();
}

void func_867()//Position - 0x22F94
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

bool func_868(int iParam0)//Position - 0x23087
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_133.f_1, 0);
}

bool func_869(int iParam0)//Position - 0x230B2
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_133.f_1, 19);
}

void func_870(int iParam0)//Position - 0x230DE
{
	unk_0x38096CFACAFA5597(&Global_196A31);
	func_871();
}

void func_871()//Position - 0x230F2
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

void func_872(int iParam0)//Position - 0x23200
{
	unk_0xF0764752B63D769A(&Global_1969FB);
	func_873();
}

void func_873()//Position - 0x23214
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

void func_874()//Position - 0x23360
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
		iVar2 = (iVar0 + func_634(12));
		func_633(iVar2, &iVar1, 1);
		if (iVar1 >= 0)
		{
			if (Global_1425AC[iVar1 /*141*/].f_42 != 0 && func_876(Global_1425AC[iVar1 /*141*/].f_42, 1))
			{
				if (Global_267214.f_375 != iVar1)
				{
					if (func_875(Global_1425AC[iVar1 /*141*/].f_42))
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

int func_875(int iParam0)//Position - 0x234A6
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

int func_876(int iParam0, bool bParam1)//Position - 0x235E2
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
		if (!func_883())
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
		if ((((!func_882() && !func_881()) && !func_880()) && !func_879()) && !func_883())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xF49912B78E2591B6() || unk_0x8ACB0C3FACC09467()) || unk_0xF7E138CFA19B55E7())
		{
		}
		else if (!func_880())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_878(iParam0))
		{
			return 0;
		}
	}
	if (!func_877(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_877(int iParam0)//Position - 0x23770
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_165())
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

int func_878(int iParam0)//Position - 0x2383C
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

int func_879()//Position - 0x252E6
{
	return 0;
}

int func_880()//Position - 0x252EF
{
	return 1;
}

int func_881()//Position - 0x252F8
{
	return 1;
}

int func_882()//Position - 0x25301
{
	if (unk_0x7B2F21BFE86AEB61(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_883()//Position - 0x2531A
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

var func_884()//Position - 0x253D5
{
	var uVar0;
	
	uVar0 = func_885();
	if (!func_151())
	{
		if (func_168() != func_29())
		{
			uVar0 = func_907(func_168()) + 1;
		}
	}
	return uVar0;
}

int func_885()//Position - 0x25404
{
	return func_907(unk_0xB5CEFD608600A09F()) + 1;
}

int func_886()//Position - 0x25416
{
	return func_137(6109, -1, 0);
}

void func_887(int iParam0)//Position - 0x25427
{
	if (iParam0 == 0)
	{
	}
	unk_0x5F080E7F4F761E28(&Global_1969CF);
	func_888();
}

void func_888()//Position - 0x25441
{
	struct<44> Var0;
	
	Global_1969CF = { Var0 };
	Global_1969CF.f_17 = 0;
	Global_1969CF.f_18 = 0;
	Global_1969CF.f_10 = 0;
}

bool func_889(int iParam0)//Position - 0x2546A
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_146, 12);
}

bool func_890(int iParam0)//Position - 0x25487
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_146, 13);
}

int func_891(int iParam0)//Position - 0x254A4
{
	if (iParam0 != func_29())
	{
		if ((unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_F4, 12) || unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_F4, 13)) || unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_F4, 14))
		{
			return 1;
		}
	}
	return 0;
}

int func_892(int iParam0)//Position - 0x25505
{
	if (iParam0 != func_29())
	{
		if ((unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_F4, 0) || unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_F4, 1)) || unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_F4, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_893(int iParam0)//Position - 0x25563
{
	if (iParam0 != func_29())
	{
		if (((((unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_F4, 3) || unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_F4, 4)) || unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_F4, 5)) || unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_F4, 0)) || unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_F4, 1)) || unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_F4, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_894(int iParam0)//Position - 0x2560C
{
	if (iParam0 != func_29())
	{
		if ((unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_F4, 6) || unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_F4, 7)) || unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_F4, 8))
		{
			return 1;
		}
	}
	return 0;
}

bool func_895(int iParam0)//Position - 0x2566B
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_146, 9);
}

void func_896(int iParam0)//Position - 0x25695
{
	if (iParam0 == 0)
	{
	}
	unk_0x446AB56E5D45010D(&Global_196990);
	func_897();
}

void func_897()//Position - 0x256AF
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

void func_898(int iParam0)//Position - 0x25819
{
	if (iParam0 == 0)
	{
	}
	unk_0xF1381B4DBB31FA25(&Global_19695A);
	func_899();
}

void func_899()//Position - 0x25833
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

int func_900(int iParam0, int iParam1)//Position - 0x25967
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = func_318(iParam0, iParam1, 2);
	bVar1 = func_318(iParam0, iParam1, 1);
	bVar2 = func_318(iParam0, iParam1, 0);
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

int func_901(int iParam0, bool bParam1, bool bParam2)//Position - 0x25A1D
{
	int iVar0;
	int iVar1;
	
	if (func_139(iParam0))
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
	else if (func_687(iParam0))
	{
		iVar0 = 6;
		iVar1 = 24;
	}
	else if (func_87(iParam0, 0))
	{
		if (bParam1)
		{
			iVar0 = Global_40001.f_429A;
			iVar1 = 20;
		}
	}
	else if (func_94(iParam0))
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
		unk_0x0022CBDAA2EA4C4F(func_691(func_168()), func_690(func_168()), func_913(), func_912(), iVar1, iVar0);
	}
	func_903(iVar0);
	func_902(iVar0);
	return iVar0;
}

void func_902(int iParam0)//Position - 0x25B10
{
	int iVar0;
	
	iVar0 = func_137(3964, -1, 0);
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
	func_135(3964, iVar0, -1, 1, 0);
}

void func_903(int iParam0)//Position - 0x25B5E
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

int func_904(bool bParam0)//Position - 0x25BD8
{
	if (bParam0)
	{
		return 0;
	}
	if (func_113(unk_0xB5CEFD608600A09F()) || func_116(unk_0xB5CEFD608600A09F()))
	{
		return 1;
	}
	return 0;
}

void func_905(var uParam0)//Position - 0x25C07
{
	unk_0x316DB59CD14C1774(&Global_196A5F);
	func_906();
}

void func_906()//Position - 0x25C1B
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

int func_907(int iParam0)//Position - 0x25CF6
{
	return Global_18C80F[iParam0 /*558*/].f_B.f_13;
}

int func_908(bool bParam0)//Position - 0x25D0B
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = -1;
	if (bParam0)
	{
		iVar0 = func_397(unk_0xB5CEFD608600A09F());
	}
	else
	{
		iVar0 = func_62(unk_0xB5CEFD608600A09F());
	}
	if (iVar0 != -1)
	{
	}
	switch (iVar0)
	{
		case 236:
			iVar2 = func_911(unk_0xB5CEFD608600A09F());
			iVar1 = iVar2;
			break;
		
		case 237:
			iVar2 = func_910(unk_0xB5CEFD608600A09F());
			if (func_123(func_124(unk_0xB5CEFD608600A09F())))
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
			iVar2 = func_910(unk_0xB5CEFD608600A09F());
			iVar1 = 300;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 238:
			iVar2 = func_909(unk_0xB5CEFD608600A09F());
			iVar1 = 400;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 249:
			iVar2 = func_909(unk_0xB5CEFD608600A09F());
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

int func_909(int iParam0)//Position - 0x25E43
{
	if (func_62(unk_0xB5CEFD608600A09F()) == 238 || func_62(unk_0xB5CEFD608600A09F()) == 249)
	{
		return Global_18C80F[iParam0 /*558*/].f_B.f_1C9;
	}
	return -1;
}

int func_910(int iParam0)//Position - 0x25E7C
{
	if (func_62(unk_0xB5CEFD608600A09F()) == 237 || func_62(unk_0xB5CEFD608600A09F()) == 250)
	{
		return Global_18C80F[iParam0 /*558*/].f_B.f_1C8;
	}
	return -1;
}

int func_911(int iParam0)//Position - 0x25EB5
{
	if (func_397(iParam0) == 236)
	{
		return Global_18C80F[iParam0 /*558*/].f_B.f_1C7;
	}
	return -1;
}

int func_912()//Position - 0x25EDA
{
	if (Global_196948.f_3 != 0)
	{
		return Global_196948.f_3;
	}
	return -1;
}

int func_913()//Position - 0x25EF6
{
	if (Global_196948.f_2 != 0)
	{
		return Global_196948.f_2;
	}
	return -1;
}

int func_914(int iParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x25F12
{
	if (bParam3)
	{
		return 5;
	}
	switch (iParam0)
	{
		case 2:
			return 8;
		
		case 3:
			return 6;
		
		case 1:
		case 4:
		case 6:
			if (bParam1)
			{
				return 1;
			}
			else if (bParam2)
			{
				return 7;
			}
			else
			{
				return 2;
			}
			break;
	}
	return 4;
}

int func_915(struct<21> Param0)//Position - 0x25F71
{
	func_953(func_954(Param0), Param0);
	func_950(0, -1, 0);
	unk_0x76AE988734CA7760(&Local_168, 35);
	unk_0xE45D6A3FD6454198(&Local_169, 193);
	unk_0x6C87EFD58B261C6F(0);
	func_918(0, 0);
	func_916();
	return 1;
}

void func_916()//Position - 0x25FB2
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	unk_0xB2CB6EAA6B280A84("relJoust0", &(uLocal_143[0]));
	unk_0xB2CB6EAA6B280A84("relJoust1", &(uLocal_143[1]));
	iVar0 = unk_0xF9E3B31053F43360(unk_0x84788C4CA5E15BDC(unk_0xBC25C936A095B5BA()), -1533126372);
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			unk_0xA902E18EDF6FA0C8(1, Global_180770[iVar1], uLocal_143[iVar2]);
			unk_0xA902E18EDF6FA0C8(1, uLocal_143[iVar2], Global_180770[iVar1]);
			unk_0xA902E18EDF6FA0C8(iVar0, uLocal_143[iVar2], -1533126372);
			unk_0xA902E18EDF6FA0C8(iVar0, -1533126372, uLocal_143[iVar2]);
			unk_0xA902E18EDF6FA0C8(1, uLocal_143[iVar2], Global_1807A0[5]);
			unk_0xA902E18EDF6FA0C8(1, Global_1807A0[5], uLocal_143[iVar2]);
			unk_0xA902E18EDF6FA0C8(1, uLocal_143[iVar2], Global_180791);
			unk_0xA902E18EDF6FA0C8(1, Global_180791, uLocal_143[iVar2]);
			iVar2++;
		}
		iVar1++;
	}
	unk_0xA902E18EDF6FA0C8(5, uLocal_143[0], uLocal_143[1]);
	unk_0xA902E18EDF6FA0C8(5, uLocal_143[1], uLocal_143[0]);
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 2)
	{
		unk_0xA902E18EDF6FA0C8(5, 2017343592, uLocal_143[iVar2]);
		func_917(&(uLocal_143[iVar2]));
		iVar2++;
	}
}

void func_917(var uParam0)//Position - 0x260F5
{
	unk_0xA902E18EDF6FA0C8(1, -1865950624, *uParam0);
	unk_0xA902E18EDF6FA0C8(1, *uParam0, -1865950624);
	unk_0xA902E18EDF6FA0C8(1, 296331235, *uParam0);
	unk_0xA902E18EDF6FA0C8(1, *uParam0, 296331235);
	unk_0xA902E18EDF6FA0C8(1, 1166638144, *uParam0);
	unk_0xA902E18EDF6FA0C8(1, *uParam0, 1166638144);
	unk_0xA902E18EDF6FA0C8(1, 2037579709, *uParam0);
	unk_0xA902E18EDF6FA0C8(1, *uParam0, 2037579709);
	unk_0xA902E18EDF6FA0C8(1, 2017343592, *uParam0);
	unk_0xA902E18EDF6FA0C8(1, *uParam0, 2017343592);
	unk_0xA902E18EDF6FA0C8(1, -1821475077, *uParam0);
	unk_0xA902E18EDF6FA0C8(1, *uParam0, -1821475077);
	unk_0xA902E18EDF6FA0C8(1, 1782292358, *uParam0);
	unk_0xA902E18EDF6FA0C8(1, *uParam0, 1782292358);
	unk_0xA902E18EDF6FA0C8(1, -1033021910, *uParam0);
	unk_0xA902E18EDF6FA0C8(1, *uParam0, -1033021910);
	unk_0xA902E18EDF6FA0C8(1, -1285976420, *uParam0);
	unk_0xA902E18EDF6FA0C8(1, *uParam0, -1285976420);
}

void func_918(int iParam0, int iParam1)//Position - 0x261E7
{
	func_949();
	if (func_725(unk_0xB5CEFD608600A09F()))
	{
		func_922(1);
	}
	if ((iParam0 != 0 && unk_0x96B1061E8F3CBC9A(iParam1)) && func_921(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				unk_0xF0059F27F7BB6680(&Global_19693A, 0);
				break;
			}
	}
	if (!func_151() && !func_267(unk_0xB5CEFD608600A09F(), 1))
	{
		if (func_752())
		{
			func_920(3);
		}
	}
	func_920(4);
	if (func_166(0))
	{
		Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B.f_39 = func_168();
	}
	if (func_94(iParam0))
	{
		func_899();
		Global_19695A.f_12 = func_681(func_90());
	}
	else if (func_102(func_837(unk_0xB5CEFD608600A09F())))
	{
		func_897();
		Global_196990.f_12 = func_681(func_90());
	}
	func_919();
}

void func_919()//Position - 0x262C3
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_14A4EA.f_215[iVar0 /*42*/].f_1 = func_29();
		Global_14A4EA.f_215[iVar0 /*42*/].f_9 = 0;
		iVar0++;
	}
}

void func_920(int iParam0)//Position - 0x262FD
{
	unk_0xF0059F27F7BB6680(&(Global_267214.f_1312.f_25), iParam0);
}

int func_921(int iParam0, bool bParam1)//Position - 0x26314
{
	return func_265(unk_0xB5CEFD608600A09F(), iParam0, bParam1);
}

void func_922(bool bParam0)//Position - 0x26328
{
	int iVar0;
	
	func_858(33);
	func_858(34);
	func_858(35);
	func_858(36);
	func_858(37);
	func_858(38);
	func_858(39);
	func_858(40);
	func_858(43);
	func_858(41);
	func_858(54);
	func_858(42);
	func_858(47);
	func_948(23);
	func_948(24);
	func_858(92);
	unk_0x7CB6FD92BE491AD9(&(Global_267214.f_6BD), 2);
	func_947();
	func_942();
	func_937();
	func_932();
	func_924();
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_267214.f_1312.f_E[iVar0] = 0;
			iVar0++;
		}
	}
	else if (func_923(3))
	{
		func_948(3);
	}
	else if (func_923(4))
	{
		func_948(4);
	}
	else if (func_923(5))
	{
		func_948(5);
	}
	else if (func_923(6))
	{
		func_948(6);
	}
	else if (func_923(7))
	{
		func_948(7);
	}
	else if (((((((((((((((((func_923(0) || func_923(1)) || func_923(2)) || func_923(8)) || func_923(9)) || func_923(10)) || func_923(11)) || func_923(12)) || func_923(13)) || func_923(14)) || func_923(15)) || func_923(16)) || func_923(17)) || func_923(18)) || func_923(19)) || func_923(20)) || func_923(21)) || func_923(22))
	{
		func_948(8);
		func_948(0);
		func_948(1);
		func_948(2);
		func_948(9);
		func_948(10);
		func_948(11);
		func_948(12);
		func_948(13);
		func_948(14);
		func_948(15);
		func_948(16);
		func_948(17);
		func_948(18);
		func_948(19);
		func_948(20);
		func_948(21);
		func_948(22);
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

bool func_923(int iParam0)//Position - 0x26586
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xFA30DFD0084E92FE(Global_267214.f_1312.f_E[iVar0], iVar1);
}

void func_924()//Position - 0x265AF
{
	int iVar0;
	
	if (func_931())
	{
		func_930(8);
		func_930(9);
		func_930(10);
		func_930(12);
		func_930(13);
		func_930(14);
		func_930(19);
		func_930(20);
		func_930(21);
		func_930(22);
		func_930(23);
		func_930(24);
		func_930(25);
		func_930(26);
		func_930(15);
		func_930(16);
		func_930(17);
		func_930(18);
		func_930(35);
		func_930(45);
		func_930(46);
		if (func_929(11))
		{
			func_930(11);
			iVar0 = func_137(7222, -1, 0);
			unk_0xF0059F27F7BB6680(&iVar0, 2);
			func_135(7222, iVar0, -1, 1, 0);
		}
	}
	if (func_929(48))
	{
		if (func_928(151, 3))
		{
			func_927(151, 3);
		}
		func_930(48);
	}
	if (func_929(49))
	{
		if (func_928(152, 3))
		{
			func_927(152, 3);
		}
		func_930(49);
	}
	if (func_929(50))
	{
		if (func_928(153, 3))
		{
			func_927(153, 3);
		}
		func_930(50);
	}
	if (func_929(51))
	{
		if (func_928(func_925(), 3))
		{
			func_927(func_925(), 3);
		}
		func_930(51);
	}
}

int func_925()//Position - 0x266F9
{
	if (func_926())
	{
		Global_19B04.f_6D75[154 /*29*/].f_18[Global_389D] = 1;
	}
	return 154;
}

int func_926()//Position - 0x2671D
{
	int iVar0;
	
	iVar0 = func_251(unk_0xB5CEFD608600A09F());
	if (((iVar0 != unk_0xB5CEFD608600A09F() && iVar0 != func_29()) && unk_0x96B1061E8F3CBC9A(iVar0)) && iVar0 != -1)
	{
		return 1;
	}
	return 0;
}

void func_927(int iParam0, int iParam1)//Position - 0x2675E
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

int func_928(int iParam0, int iParam1)//Position - 0x267A1
{
	if (Global_19B04.f_6D75[iParam0 /*29*/].f_C[iParam1] == 1)
	{
		return 1;
	}
	return 0;
}

bool func_929(int iParam0)//Position - 0x267C6
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xFA30DFD0084E92FE(Global_267214.f_1312.f_1A[iVar0], iVar1);
}

void func_930(int iParam0)//Position - 0x267EF
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x7CB6FD92BE491AD9(&(Global_267214.f_1312.f_1A[iVar0]), iVar1);
}

int func_931()//Position - 0x26818
{
	if (((((((((((((((((((((func_929(8) || func_929(9)) || func_929(10)) || func_929(12)) || func_929(11)) || func_929(13)) || func_929(14)) || func_929(19)) || func_929(20)) || func_929(21)) || func_929(22)) || func_929(23)) || func_929(24)) || func_929(25)) || func_929(26)) || func_929(15)) || func_929(16)) || func_929(17)) || func_929(18)) || func_929(35)) || func_929(45)) || func_929(46))
	{
		return 1;
	}
	return 0;
}

void func_932()//Position - 0x2692A
{
	if (func_936())
	{
		func_935(0);
		func_935(1);
		func_935(2);
		func_935(3);
		func_935(4);
		func_935(5);
		if (func_934(32))
		{
			if (func_928(func_933(), 3))
			{
				func_927(func_933(), 3);
			}
			func_935(32);
		}
	}
}

int func_933()//Position - 0x2697E
{
	if (func_926())
	{
		Global_19B04.f_6D75[12 /*29*/].f_18[Global_389D] = 1;
	}
	return 12;
}

bool func_934(int iParam0)//Position - 0x269A2
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xFA30DFD0084E92FE(Global_267214.f_1312.f_17[iVar0], iVar1);
}

void func_935(int iParam0)//Position - 0x269CB
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x7CB6FD92BE491AD9(&(Global_267214.f_1312.f_17[iVar0]), iVar1);
}

int func_936()//Position - 0x269F4
{
	if ((((func_934(1) || func_934(0)) || func_934(2)) || func_934(4)) || func_934(5))
	{
		return 1;
	}
	return 0;
}

void func_937()//Position - 0x26A35
{
	if (func_941())
	{
		func_940(0);
		func_940(1);
		func_940(2);
		func_940(3);
		func_940(4);
		func_940(5);
		func_940(6);
		func_940(7);
		if (func_939(8))
		{
			func_940(8);
		}
		if (func_939(15))
		{
			if (func_928(func_938(), 3))
			{
				func_927(func_938(), 3);
			}
			func_940(15);
		}
	}
}

int func_938()//Position - 0x26AA2
{
	if (func_926())
	{
		Global_19B04.f_6D75[20 /*29*/].f_18[Global_389D] = 1;
	}
	return 20;
}

bool func_939(int iParam0)//Position - 0x26AC6
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xFA30DFD0084E92FE(Global_267214.f_1312.f_15[iVar0], iVar1);
}

void func_940(int iParam0)//Position - 0x26AEF
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x7CB6FD92BE491AD9(&(Global_267214.f_1312.f_15[iVar0]), iVar1);
}

int func_941()//Position - 0x26B18
{
	if ((((((((func_939(0) || func_939(1)) || func_939(2)) || func_939(3)) || func_939(4)) || func_939(5)) || func_939(6)) || func_939(7)) || func_939(8))
	{
		return 1;
	}
	return 0;
}

void func_942()//Position - 0x26B86
{
	if (func_946())
	{
		func_945(0);
		func_945(1);
		func_945(2);
		func_945(3);
		func_945(4);
		func_945(5);
		func_945(6);
		func_945(7);
		func_945(8);
		func_945(9);
		func_945(10);
		func_945(11);
		func_945(12);
		if (func_944(13))
		{
			if (func_928(func_943(), 3))
			{
				func_927(func_943(), 3);
			}
			func_945(13);
		}
	}
}

int func_943()//Position - 0x26C02
{
	if (func_926())
	{
		Global_19B04.f_6D75[76 /*29*/].f_18[Global_389D] = 1;
	}
	return 76;
}

bool func_944(int iParam0)//Position - 0x26C26
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xFA30DFD0084E92FE(Global_267214.f_1312.f_13[iVar0], iVar1);
}

void func_945(int iParam0)//Position - 0x26C4F
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x7CB6FD92BE491AD9(&(Global_267214.f_1312.f_13[iVar0]), iVar1);
}

int func_946()//Position - 0x26C78
{
	if ((((((((((((func_944(0) || func_944(1)) || func_944(2)) || func_944(3)) || func_944(4)) || func_944(5)) || func_944(6)) || func_944(7)) || func_944(8)) || func_944(9)) || func_944(10)) || func_944(11)) || func_944(12))
	{
		return 1;
	}
	return 0;
}

void func_947()//Position - 0x26D16
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Global_267214.f_1312.f_11[iVar0] = 0;
		iVar0++;
	}
}

void func_948(int iParam0)//Position - 0x26D3E
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x7CB6FD92BE491AD9(&(Global_267214.f_1312.f_E[iVar0]), iVar1);
}

void func_949()//Position - 0x26D67
{
	struct<14> Var0;
	
	Global_196948 = { Var0 };
	Global_196948.f_E = 0;
	Global_196948.f_F = 0;
}

int func_950(int iParam0, int iParam1, bool bParam2)//Position - 0x26D89
{
	int iVar0;
	
	iVar0 = unk_0x4796DAD7A8894E2F();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_952();
			}
			else
			{
				return 0;
			}
		}
		if (!func_951())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x7AF0088ABFA713B6())
				{
					if (!bParam2)
					{
						func_952();
					}
					else
					{
						return 0;
					}
				}
				if (func_785())
				{
					if (!bParam2)
					{
						func_952();
					}
					else
					{
						return 0;
					}
				}
				if (func_783(155))
				{
					if (!bParam2)
					{
						func_952();
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
					func_952();
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
				func_952();
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
			func_952();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_951()//Position - 0x26E9E
{
	return Global_14083F;
}

void func_952()//Position - 0x26EAA
{
	unk_0x95E4B6F3ED223F5A();
}

void func_953(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x26EB6
{
	if (!unk_0x7AF0088ABFA713B6())
	{
		func_952();
	}
	unk_0xBF463BC3D6FFDE31(iParam0, 0, Param1.f_10);
}

int func_954(int iParam0)//Position - 0x26ED5
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

int func_955(int iParam0, bool bParam1, bool bParam2)//Position - 0x2756B
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

