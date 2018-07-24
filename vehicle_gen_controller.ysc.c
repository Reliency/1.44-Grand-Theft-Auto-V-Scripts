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
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	int iLocal_47 = 0;
	var uLocal_48[68] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_49[68] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	vector3 vLocal_50[68] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	struct<114> Local_56 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<5> Local_57 = { 0, 0, 0, 0, 0 } ;
	int iLocal_58 = 0;
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
	struct<74> Local_83 = { 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3 } ;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
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
	var uLocal_96 = 2;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110[4] = { 0, 0, 0, 0 };
	int iLocal_111 = 0;
	int iLocal_112[1] = { 0 };
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123[2] = { 0, 0 };
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	bool bLocal_130 = 0;
	struct<13> Local_131 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	struct<81> Local_140 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0 } ;
	struct<78> Local_141 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	int iLocal_146[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149[68] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_150[3] = { 0, 0, 0 };
	int iLocal_151 = 0;
	float fLocal_152[68] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	bool bLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	bool bLocal_161 = 0;
	char cLocal_162[16] = "";
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	char cLocal_165[16] = "";
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	int iLocal_173 = 0;
	int iLocal_174 = 0;
	int iLocal_175 = 0;
	char* sLocal_176 = NULL;
	int iLocal_177 = 0;
	int iLocal_178 = 0;
	float fLocal_179 = 0f;
	int iLocal_180 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	
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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_114 = -1;
	iLocal_115 = -1;
	iLocal_120 = -1;
	iLocal_125 = -1;
	iLocal_151 = -1;
	unk_0x6C87EFD58B261C6F(0);
	Local_56.f_5 = -1;
	Local_56 = -1;
	Local_56.f_1 = 99999.99f;
	func_468(&iLocal_58);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_1616F[iVar0 /*3*/][0] = -1;
		Global_1616F[iVar0 /*3*/][1] = -1;
		iVar0++;
	}
	if (!Global_19B04.f_7F22.f_12C2)
	{
		iVar0 = 0;
		while (iVar0 < 312)
		{
			Global_19B04.f_7F22.f_7BE[0 /*939*/].f_272[iVar0] = -15;
			Global_19B04.f_7F22.f_7BE[1 /*939*/].f_272[iVar0] = -15;
			Global_19B04.f_7F22.f_7BE[2 /*939*/].f_272[iVar0] = -15;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 23)
		{
			Global_19B04.f_7F22.f_78E[iVar0] = -1f;
			iVar0++;
		}
		Global_19B04.f_7F22.f_12C1 = -15;
		Global_19B04.f_7F22.f_12C2 = 1;
	}
	if (((!func_467() && !func_466()) && !func_465()) && !func_464())
	{
		func_463(60, 0);
		func_463(61, 0);
	}
	func_462();
	iVar0 = 0;
	while (iVar0 < 68)
	{
		func_461(iVar0);
		iVar0++;
	}
	while (true)
	{
		if (!iLocal_55)
		{
			iLocal_55 = 1;
			if (unk_0xE8A79675302ED812(98))
			{
				if (unk_0x663171D6F90FBA5A() == 64)
				{
					if (!Global_11485)
					{
						iLocal_55 = 0;
					}
					else
					{
						func_460();
						func_459();
					}
					Global_11485 = 0;
				}
				else
				{
					func_460();
					func_459();
				}
			}
		}
		SYSTEM::WAIT(0);
		if (unk_0xB6469267B091EAAA() != 5)
		{
			iLocal_129 = func_457();
			func_421();
			func_419();
			func_387(&iLocal_58);
			func_358();
			func_28();
			func_20();
			func_17(&uLocal_153);
		}
		func_1(&iLocal_58);
	}
}

void func_1(int iParam0)//Position - 0x24C
{
	bool bVar0;
	float fVar1;
	
	if (!unk_0xFA30DFD0084E92FE(Global_19B04.f_2703.f_19, 7))
	{
		if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0) && func_14(func_16()))
		{
			bVar0 = false;
			if (unk_0xFA30DFD0084E92FE(*iParam0, 6) && unk_0xFA30DFD0084E92FE(*iParam0, 12))
			{
				fVar1 = SYSTEM::VDIST(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), iParam0->f_6);
				if (fVar1 > 25f && fVar1 < 1600f)
				{
					bVar0 = true;
					if (iParam0->f_2 == -1)
					{
						iParam0->f_2 = (unk_0x105601648511CC64() + unk_0x491B2241281A03B7(10000, 15000));
					}
					else
					{
						if (func_13())
						{
							iParam0->f_2 = func_12(iParam0->f_2, (unk_0x105601648511CC64() + unk_0x491B2241281A03B7(2000, 4000)));
						}
						if (!unk_0xFA30DFD0084E92FE(*iParam0, 23))
						{
							func_11(iParam0, &(iParam0->f_9));
						}
						else if (!unk_0xFA30DFD0084E92FE(*iParam0, 30))
						{
							if (unk_0x284F2ACE6839D3C0(&(iParam0->f_9), false, -1))
							{
								if (unk_0x105601648511CC64() > iParam0->f_2)
								{
									if (func_9() != 7 && func_8(0, 0))
									{
										func_4(iParam0, func_6(iParam0));
										func_3(0);
										unk_0xF0059F27F7BB6680(iParam0, 30);
									}
								}
							}
						}
						else if (unk_0x1BD5EE88F32433CD(iParam0->f_1))
						{
							unk_0x7CB6FD92BE491AD9(iParam0, 30);
							unk_0x26D344275839A25E(iParam0->f_1);
							iParam0->f_1 = -1;
							iParam0->f_2 = -1;
						}
					}
				}
			}
			if (!bVar0)
			{
				if (unk_0xFA30DFD0084E92FE(*iParam0, 23))
				{
					func_2(iParam0);
				}
				unk_0x7CB6FD92BE491AD9(iParam0, 30);
				iParam0->f_2 = -1;
			}
		}
	}
}

void func_2(int iParam0)//Position - 0x3C5
{
	unk_0xC32C243942383443();
	unk_0x7CB6FD92BE491AD9(iParam0, 23);
}

void func_3(bool bParam0)//Position - 0x3D9
{
	if (bParam0)
	{
		unk_0xF0059F27F7BB6680(&(Global_19B04.f_2703.f_19), 22);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_2703.f_19), 22);
	}
}

void func_4(int iParam0, vector3 vParam1)//Position - 0x407
{
	struct<16> Var0;
	struct<16> Var1;
	
	Var0 = { func_5("EAS", "B", "ALLS", "T_C") };
	Var1 = { func_5("ENTS_SA", "FM_EV", "CH_SOUNDS", "SQUAT") };
	iParam0->f_1 = unk_0x2F079D1FC5F6CB99();
	unk_0x10B5C0C7337B8420(iParam0->f_1, &Var0, vParam1, &Var1, 0, 0, 0);
}

struct<16> func_5(char* sParam0, char* sParam1, char* sParam2, char* sParam3)//Position - 0x453
{
	struct<16> Var0;
	
	StringCopy(&Var0, sParam1, 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, sParam3, 64);
	StringConCat(&Var0, sParam2, 64);
	return Var0;
}

Vector3 func_6(int iParam0)//Position - 0x478
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		vVar1 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true) };
		vVar2 = { func_7(iParam0->f_6 - vVar1) * Vector(52.5f, 52.5f, 52.5f) };
		vVar0 = { vVar1 + vVar2 };
	}
	return vVar0;
}

Vector3 func_7(vector3 vParam0)//Position - 0x4C5
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.y = 0f;
		vParam0.z = 0f;
	}
	return vParam0;
}

bool func_8(int iParam0, int iParam1)//Position - 0x504
{
	bool bVar0;
	
	if (unk_0xF7DDAAF0EFDAFA22(0, 36))
	{
		unk_0xF0059F27F7BB6680(&(Global_19B04.f_2703.f_19), 22);
	}
	bVar0 = unk_0xFA30DFD0084E92FE(Global_19B04.f_2703.f_19, 22);
	if (iParam0 && bVar0)
	{
		unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_2703.f_19), 22);
	}
	iParam1 = iParam1;
	return bVar0;
}

int func_9()//Position - 0x557
{
	var uVar0;
	
	uVar0 = func_10(Global_19B04.f_2703.f_19, 14336, 11);
	return uVar0;
}

int func_10(var uParam0, int iParam1, int iParam2)//Position - 0x575
{
	return SYSTEM::SHIFT_RIGHT((uParam0 && iParam1), iParam2);
}

void func_11(int iParam0, char* sParam1)//Position - 0x588
{
	unk_0x284F2ACE6839D3C0(sParam1, false, -1);
	unk_0xF0059F27F7BB6680(iParam0, 23);
}

int func_12(int iParam0, int iParam1)//Position - 0x5A1
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

bool func_13()//Position - 0x5B7
{
	bool bVar0;
	
	bVar0 = unk_0xFA30DFD0084E92FE(Global_19B04.f_2703.f_19, 22);
	return (func_8(0, 0) && !bVar0);
}

bool func_14(int iParam0)//Position - 0x5DE
{
	return iParam0 == func_15();
}

int func_15()//Position - 0x5ED
{
	return joaat("ig_orleans");
}

int func_16()//Position - 0x5FA
{
	return unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA());
}

void func_17(var uParam0)//Position - 0x60A
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (!Global_1423BA.f_15)
	{
		iVar1 = func_19(*uParam0, uParam0->f_1);
		if (iVar1 == -1)
		{
			*uParam0++;
			uParam0->f_1 = 0;
			if (*uParam0 >= 4)
			{
				Global_1423BA.f_15 = 1;
			}
			return;
		}
		else
		{
			iVar0 = iVar1;
			fVar2 = func_18(iVar0);
			if (Global_1423BA[*uParam0 /*5*/][0] < fVar2)
			{
				Global_1423BA[*uParam0 /*5*/][0] = fVar2;
			}
			fVar2 = unk_0x73C2EB7ECF914A26(iVar0);
			if (Global_1423BA[*uParam0 /*5*/][1] < fVar2)
			{
				Global_1423BA[*uParam0 /*5*/][1] = fVar2;
			}
			if ((iVar0 == 15 || iVar0 == 16) || iVar0 == 14)
			{
				fVar2 = unk_0x01236477A4C3D5CA(iVar0);
			}
			else
			{
				fVar2 = unk_0x24A6F9237A2F3687(iVar0);
			}
			if (Global_1423BA[*uParam0 /*5*/][3] < fVar2)
			{
				Global_1423BA[*uParam0 /*5*/][3] = fVar2;
			}
			fVar2 = unk_0x248C04B40CA8EF97(iVar0);
			if (Global_1423BA[*uParam0 /*5*/][2] < fVar2)
			{
				Global_1423BA[*uParam0 /*5*/][2] = fVar2;
			}
			uParam0->f_1++;
		}
	}
}

float func_18(int iParam0)//Position - 0x727
{
	if (iParam0 == 7)
	{
		return 51.77096f;
	}
	return unk_0x7E2BBA85D425B9F8(iParam0);
}

int func_19(int iParam0, int iParam1)//Position - 0x743
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 3;
				
				case 4:
					return 4;
				
				case 5:
					return 5;
				
				case 6:
					return 6;
				
				case 7:
					return 7;
				
				case 8:
					return 8;
				
				case 9:
					return 9;
				
				case 10:
					return 10;
				
				case 11:
					return 11;
				
				case 12:
					return 12;
				
				case 13:
					return 13;
				
				case 14:
					return 17;
				
				case 15:
					return 18;
				
				case 16:
					return 19;
				
				case 17:
					return 20;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 14;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 15;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 16;
				
				default:
			}
			break;
	}
	return -1;
}

void func_20()//Position - 0x872
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if (unk_0x2DA8CA50A72528FB(Global_110A8.f_247))
	{
		bVar0 = false;
		if (iLocal_129 != Global_110A8.f_246)
		{
			bVar0 = true;
		}
		else if (((((func_27(0) || func_27(3)) || func_27(2)) || func_27(4)) || func_27(13)) || func_27(14))
		{
			bVar0 = true;
		}
		else if (Global_110A8.f_24E)
		{
			if (!func_26(Global_110A8.f_248, unk_0x5DC00ADB7E2FD7C2(Global_110A8.f_247), 1056964608, 0) || func_22(Global_110A8.f_246, func_23(Global_110A8.f_246, 1)) > 0)
			{
				bVar0 = true;
			}
		}
		else if (Global_110A8.f_24F)
		{
			if (!func_26(Global_110A8.f_24B, unk_0x5DC00ADB7E2FD7C2(Global_110A8.f_247), 1056964608, 0) || func_22(Global_110A8.f_246, func_23(Global_110A8.f_246, 1)) > 0)
			{
				bVar0 = true;
			}
		}
		else if ((!unk_0x724D816EA203A79E(Global_110A8.f_245) || !unk_0xE59B7F5A03335350(Global_110A8.f_245, 0)) || (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), Global_110A8.f_245, 0)))
		{
			if (unk_0x724D816EA203A79E(Global_110A8.f_245) && !unk_0xE59B7F5A03335350(Global_110A8.f_245, 0))
			{
				Global_110A8.f_24B = { 0f, 0f, 0f };
			}
			bVar0 = true;
		}
		else if (unk_0x724D816EA203A79E(Global_110A8.f_245))
		{
			if (unk_0xE59B7F5A03335350(Global_110A8.f_245, 0))
			{
				Global_110A8.f_24B = { unk_0x541C2AEF053615BC(Global_110A8.f_245, true) };
			}
			else
			{
				Global_110A8.f_24B = { 0f, 0f, 0f };
			}
		}
		if (bVar0)
		{
			unk_0x07B8ECB35A4ED3AC(&(Global_110A8.f_247));
			Global_110A8.f_24E = 0;
			Global_110A8.f_24F = 0;
			Global_110A8.f_245 = 0;
		}
	}
	else
	{
		Global_110A8.f_24E = 0;
		Global_110A8.f_24F = 0;
		Global_110A8.f_245 = 0;
	}
	if ((((((!unk_0x2DA8CA50A72528FB(Global_110A8.f_247) && !func_27(0)) && !func_27(3)) && !func_27(2)) && !func_27(4)) && !func_27(13)) && !func_27(14))
	{
		bVar1 = false;
		iVar2 = 0;
		while (iVar2 < 9)
		{
			if ((((((Global_16149[iVar2] != 145 && Global_16153[iVar2] != 0) && unk_0x724D816EA203A79E(Global_1613F[iVar2])) && unk_0xE59B7F5A03335350(Global_1613F[iVar2], 0)) && !unk_0x2DA8CA50A72528FB(unk_0x6D01571F8E6286B4(Global_1613F[iVar2]))) && Global_16149[iVar2] == iLocal_129) && unk_0x7C28D15641461C68(unk_0x6F79ECA8C83E4357(Global_1613F[iVar2])))
			{
				if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && !unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), Global_1613F[iVar2], 0))
				{
					Global_110A8.f_245 = Global_1613F[iVar2];
					Global_110A8.f_246 = iLocal_129;
					Global_110A8.f_24E = 0;
					Global_110A8.f_247 = unk_0x511FE22BCF5353CD(Global_110A8.f_245);
				}
				iVar2 = 10;
				bVar1 = true;
			}
			iVar2++;
		}
		if (!bVar1)
		{
			if (!unk_0x2DA8CA50A72528FB(Global_110A8.f_247) && !func_21(Global_110A8.f_248, 0f, 0f, 0f, 0))
			{
				Global_110A8.f_245 = 0;
				Global_110A8.f_246 = iLocal_129;
				Global_110A8.f_24E = 1;
				Global_110A8.f_247 = unk_0x390CF6C8AD6903B7(Global_110A8.f_248);
			}
			if (!unk_0x2DA8CA50A72528FB(Global_110A8.f_247) && !func_21(Global_110A8.f_24B, 0f, 0f, 0f, 0))
			{
				Global_110A8.f_245 = 0;
				Global_110A8.f_246 = iLocal_129;
				Global_110A8.f_24F = 1;
				Global_110A8.f_247 = unk_0x390CF6C8AD6903B7(Global_110A8.f_24B);
			}
		}
		else
		{
			Global_110A8.f_24E = 0;
			Global_110A8.f_24F = 0;
		}
		if (unk_0x2DA8CA50A72528FB(Global_110A8.f_247))
		{
			unk_0xBF0E22F3E083C33D(Global_110A8.f_247, 225);
			unk_0x436D0272182E484D(Global_110A8.f_247, "PVEHICLE");
			unk_0x4909873A6873A6C3(Global_110A8.f_247, false);
			unk_0x12DB69036F6569F7(Global_110A8.f_247, 3);
			if (iLocal_129 == 0)
			{
				iVar3 = 42;
			}
			else if (iLocal_129 == 1)
			{
				iVar3 = 43;
			}
			else if (iLocal_129 == 2)
			{
				iVar3 = 44;
			}
			unk_0x0D5352939CC40C16(Global_110A8.f_247, iVar3);
		}
	}
}

bool func_21(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0xCFB
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_22(int iParam0, int iParam1)//Position - 0xD42
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 9)
	{
		if (unk_0x724D816EA203A79E(Global_1613F[iVar1]) && unk_0xE59B7F5A03335350(Global_1613F[iVar1], 0))
		{
			if (Global_16149[iVar1] == iParam0)
			{
				if (iParam1 == 0 || iParam1 == unk_0x6F79ECA8C83E4357(Global_1613F[iVar1]))
				{
					iVar0++;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_23(int iParam0, int iParam1)//Position - 0xDB2
{
	struct<82> Var0;
	
	if (func_25(iParam0))
	{
		Var0.f_B = 12;
		Var0.f_1F = 49;
		Var0.f_51 = 2;
		func_24(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_24(int iParam0, var uParam1, int iParam2)//Position - 0xDF4
{
	int iVar0;
	
	uParam1->f_58 = 1;
	uParam1->f_54 = 255;
	uParam1->f_55 = 255;
	uParam1->f_56 = 255;
	uParam1->f_61 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_19B04.f_2360.f_63.f_3A[128] && !Global_19B04.f_2360.f_63.f_3A[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_B[0] = 1;
					StringCopy(&(uParam1->f_1B), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_1B), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_1B), "BETTY 32", 16);
					if (Global_19B04.f_2360.f_63.f_3A[119])
					{
						uParam1->f_B[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_19B04.f_2360.f_63.f_3A[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_1B), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_A = 1;
					StringCopy(&(uParam1->f_1B), "FC1988", 16);
					uParam1->f_B[0] = 1;
					uParam1->f_B[1] = 1;
					uParam1->f_B[2] = 1;
					uParam1->f_B[3] = 1;
					uParam1->f_B[4] = 1;
					uParam1->f_B[5] = 1;
					uParam1->f_B[6] = 1;
					uParam1->f_B[7] = 1;
					uParam1->f_B[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

bool func_25(int iParam0)//Position - 0x104B
{
	return iParam0 < 3;
}

int func_26(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)//Position - 0x1057
{
	if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	if (!bParam3)
	{
		if (unk_0x357058E632979E65((vParam0.x - vParam1.x)) <= fParam2)
		{
			if (unk_0x357058E632979E65((vParam0.y - vParam1.y)) <= fParam2)
			{
				if (unk_0x357058E632979E65((vParam0.z - vParam1.z)) <= fParam2)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x357058E632979E65((vParam0.x - vParam1.x)) <= fParam2)
	{
		if (unk_0x357058E632979E65((vParam0.y - vParam1.y)) <= fParam2)
		{
			return 1;
		}
	}
	return 0;
}

bool func_27(int iParam0)//Position - 0x10D2
{
	return Global_8C41 == iParam0;
}

void func_28()//Position - 0x10E0
{
	func_300();
	func_219();
	func_68();
	func_29();
}

void func_29()//Position - 0x10F8
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (((((Local_56.f_1D.f_50 && !Local_56.f_1D.f_45) && Local_56 != -1) && func_67(Local_56, 0)) && func_67(Local_56, 5)) && unk_0xB731B8C5BCE89836(joaat("michael1")) == 0)
		{
			if (!unk_0x724D816EA203A79E(Local_56.f_71))
			{
				if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
				{
					iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
					if (unk_0x724D816EA203A79E(iVar0) && unk_0xE59B7F5A03335350(iVar0, 0))
					{
						iVar1 = unk_0x6F79ECA8C83E4357(iVar0);
						if (func_64(iVar1))
						{
							Local_56.f_71 = iVar0;
						}
					}
				}
			}
			else if (unk_0xE59B7F5A03335350(Local_56.f_71, 0) && func_64(unk_0x6F79ECA8C83E4357(Local_56.f_71)))
			{
				if (!unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), Local_56.f_71, 0))
				{
					if (unk_0x0C265B3C448E6954(Local_56.f_71, Local_56.f_1D.f_30, Local_56.f_1D.f_33, Local_56.f_1D.f_36, 0, true, 0))
					{
						if ((!func_63(Local_56.f_71) && !func_62(Local_56.f_71)) && Local_56.f_71 != Global_110A8.f_1E4[Local_56])
						{
							func_30(Local_56, Local_56.f_71, 1);
						}
						Local_56.f_71 = 0;
					}
				}
			}
			else
			{
				Local_56.f_71 = 0;
			}
		}
		else
		{
			Local_56.f_71 = 0;
		}
	}
}

void func_30(int iParam0, int iParam1, int iParam2)//Position - 0x125C
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_61(&(Global_110A8.f_22B[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!unk_0xFA30DFD0084E92FE(Global_110A8.f_22B[0 /*21*/].f_9, 12) && !unk_0xFA30DFD0084E92FE(Global_110A8.f_22B[0 /*21*/].f_9, 10))
	{
		if (Global_110A8.f_22B[0 /*21*/].f_4 != unk_0x6F79ECA8C83E4357(iParam1))
		{
			return;
		}
	}
	if (Global_11433 != -1 && Global_11433 != iParam0)
	{
		return;
	}
	if (unk_0x724D816EA203A79E(iParam1))
	{
		if (unk_0xE59B7F5A03335350(iParam1, 0))
		{
			if (!unk_0x5CAE759AE8219D20(iParam1))
			{
				unk_0x77815D3407C6700D(iParam1, true, 1);
			}
			if (iParam0 == 24)
			{
				Global_19B04.f_7F22.f_12C1 = func_50();
			}
			if (iParam1 != Global_110A8.f_8B[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_49(iParam0);
					if ((unk_0x724D816EA203A79E(iVar0) && unk_0xE59B7F5A03335350(iVar0, 0)) && iParam1 != iVar0)
					{
						func_31(iVar0, 145);
					}
				}
				Global_11432 = iParam1;
				Global_11433 = iParam0;
				Global_11434 = iParam2;
			}
		}
	}
}

void func_31(int iParam0, int iParam1)//Position - 0x1379
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_37(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0x3187EF5798B5D209(iParam0, -1, 0);
		if (!unk_0x724D816EA203A79E(iVar0))
		{
			iVar0 = unk_0xE293D7F16E1815E8(iParam0, -1);
		}
		if (unk_0x724D816EA203A79E(iVar0) && !unk_0x36CEFBE9B745A58D(iVar0))
		{
			if (unk_0x6F79ECA8C83E4357(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x6F79ECA8C83E4357(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x6F79ECA8C83E4357(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_19B04.f_932.f_21B.f_10CD;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x6F79ECA8C83E4357(iParam0) == Global_19B04.f_7F22.f_13AE[iVar1 /*157*/][iVar2 /*78*/].f_42)
			{
				if (!unk_0xF1734B55490E9045(&(Global_19B04.f_7F22.f_13AE[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0x3362CDE8460ED38B(unk_0x2232934AD664DD49(iParam0), &(Global_19B04.f_7F22.f_13AE[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_19B04.f_7F22.f_13AE[iVar1 /*157*/][iVar2 /*78*/].f_42 = 0;
						Global_19B04.f_7F22.f_15D8[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (unk_0x6F79ECA8C83E4357(iParam0) == Global_19B04.f_7F22.f_15E0[iVar1 /*78*/].f_42)
		{
			if (!unk_0xF1734B55490E9045(&(Global_19B04.f_7F22.f_15E0[iVar1 /*78*/].f_1)))
			{
				if (unk_0x3362CDE8460ED38B(unk_0x2232934AD664DD49(iParam0), &(Global_19B04.f_7F22.f_15E0[iVar1 /*78*/].f_1)))
				{
					Global_19B04.f_7F22.f_15E0[iVar1 /*78*/].f_42 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_19B04.f_7F22.f_15D6 = iParam1;
	Global_11431 = iParam0;
	Global_19B04.f_7F22.f_15D4 = 1;
	func_32(iParam0, &(Global_19B04.f_7F22.f_1586));
}

void func_32(int iParam0, var uParam1)//Position - 0x157B
{
	int iVar0;
	
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		func_36(uParam1);
		uParam1->f_42 = unk_0x6F79ECA8C83E4357(iParam0);
		StringCopy(&(uParam1->f_1), unk_0x2232934AD664DD49(iParam0), 16);
		*uParam1 = unk_0x89FC8F09D6647DEC(iParam0);
		unk_0x87F182D2DA225F0D(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x375E42DA279E7FED(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x5F73107BDF663316(iParam0, &(uParam1->f_3E), &(uParam1->f_3F), &(uParam1->f_40));
		uParam1->f_41 = unk_0x2629793241883F74(iParam0);
		uParam1->f_43 = unk_0x0FF608FD384AF8FA(iParam0);
		uParam1->f_45 = unk_0xC2587DF549B15BB6(iParam0);
		uParam1->f_46 = unk_0xA3E58143095D5828(iParam0);
		unk_0x715BE0BE8D01B21C(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		unk_0x2774857472EBCE0F(iParam0, &(uParam1->f_4A), &(uParam1->f_4B), &(uParam1->f_4C));
		if (unk_0xFF7612EE8C5F1E19(iParam0, 2))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_4D), 28);
		}
		if (unk_0xFF7612EE8C5F1E19(iParam0, 3))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_4D), 29);
		}
		if (unk_0xFF7612EE8C5F1E19(iParam0, 0))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_4D), 30);
		}
		if (unk_0xFF7612EE8C5F1E19(iParam0, 1))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_4D), 31);
		}
		if (uParam1->f_41 == -1 && !func_35(uParam1->f_42))
		{
			uParam1->f_41 = 0;
		}
		if (unk_0x6DB86B1ADD81CED4(iParam0, 0))
		{
			uParam1->f_44 = unk_0xAA1A0B747CDFC807(iParam0);
		}
		if (unk_0xA19D269B4B5A1532(uParam1->f_42))
		{
			if (unk_0x9741AF87EDFF311C(iParam0))
			{
				switch (unk_0xBCD69B76B3E60BF5(iParam0))
				{
					case 3:
					case 0:
						unk_0x7CB6FD92BE491AD9(&(uParam1->f_4D), 23);
						unk_0xF0059F27F7BB6680(&(uParam1->f_4D), 22);
						break;
					
					case 4:
					case 1:
						unk_0x7CB6FD92BE491AD9(&(uParam1->f_4D), 23);
						unk_0x7CB6FD92BE491AD9(&(uParam1->f_4D), 22);
						break;
					
					case 5:
						unk_0xF0059F27F7BB6680(&(uParam1->f_4D), 23);
						break;
				}
			}
			else
			{
				unk_0xF0059F27F7BB6680(&(uParam1->f_4D), 23);
			}
		}
		if (!unk_0xB830044A99FABAAF(iParam0))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_4D), 9);
		}
		if (unk_0xA37E9F4E2795A88A(iParam0))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_4D), 10);
		}
		if (unk_0xFD22243DAFAFE349(iParam0))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_4D), 13);
			unk_0x103992E73728DA90(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		}
		if (unk_0x1EE004ED283345A0(iParam0))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_4D), 12);
		}
		func_34(&iParam0, &(uParam1->f_9), &(uParam1->f_3B));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xFC8A228C62614C5C(iParam0, iVar0 + 1))
			{
				unk_0xF0059F27F7BB6680(&(uParam1->f_4D), func_33(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x97413DC2A72A11B3(iParam0, 0))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_4D), 11);
		}
		else
		{
			unk_0x7CB6FD92BE491AD9(&(uParam1->f_4D), 11);
		}
		if (unk_0x3C03CFD5DD1E2D97(iParam0, "IgnoredByQuickSave") && unk_0x75236BEC3BDDE069(iParam0, "IgnoredByQuickSave"))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_4D), 27);
		}
		else
		{
			unk_0x7CB6FD92BE491AD9(&(uParam1->f_4D), 27);
		}
	}
}

int func_33(int iParam0)//Position - 0x1824
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_34(int iParam0, var uParam1, var uParam2)//Position - 0x18D4
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xE59B7F5A03335350(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0xA6BE0954FC6BAA16(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			(*uParam1)[iVar0] = 0;
			if (unk_0x0ABA73B9B2E2F838(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x3EB14CBD49DA0017(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0xC8B123E980199685(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0xC8B123E980199685(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_35(int iParam0)//Position - 0x19AE
{
	switch (iParam0)
	{
		case joaat("granger"):
		case -998177792:
			return 1;
		
		default:
	}
	return 0;
}

void func_36(var uParam0)//Position - 0x19CE
{
	int iVar0;
	
	uParam0->f_42 = 0;
	uParam0->f_4D = 0;
	uParam0->f_41 = 0;
	uParam0->f_3E = 0;
	uParam0->f_3F = 0;
	uParam0->f_40 = 0;
	uParam0->f_4A = 0;
	uParam0->f_4B = 0;
	uParam0->f_4C = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_3B[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_43 = 0;
	uParam0->f_44 = 0;
	uParam0->f_45 = 0;
	uParam0->f_46 = 1;
	uParam0->f_47 = 0;
	uParam0->f_48 = 0;
	uParam0->f_49 = 0;
}

int func_37(int iParam0)//Position - 0x1A7E
{
	if ((((((((((!unk_0x724D816EA203A79E(iParam0) || !unk_0xE59B7F5A03335350(iParam0, 0)) || func_47(iParam0, 0, 0)) || func_47(iParam0, 1, 0)) || func_47(iParam0, 2, 0)) || func_46(iParam0) != 145) || func_45(iParam0)) || func_63(iParam0)) || func_62(iParam0)) || func_44(iParam0)) || !func_38(unk_0x6F79ECA8C83E4357(iParam0)))
	{
		if (func_63(iParam0))
		{
		}
		if (func_63(iParam0))
		{
		}
		if (func_47(iParam0, 0, 0))
		{
		}
		if (func_47(iParam0, 1, 0))
		{
		}
		if (func_47(iParam0, 2, 0))
		{
		}
		if (func_46(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_38(int iParam0)//Position - 0x1B5B
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_39(iParam0, 0))
	{
		return 0;
	}
	if (((unk_0xE7B3A320107C1379(iParam0) || unk_0xA19D269B4B5A1532(iParam0)) || unk_0x8C1A6E7D5F410F4A(iParam0)) || unk_0xFF2234981505F7F4(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case 1938952078:
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_39(int iParam0, bool bParam1)//Position - 0x1D0C
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
		if (!func_43())
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
		if ((((!func_467() && !func_466()) && !func_465()) && !func_464()) && !func_43())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xF49912B78E2591B6() || unk_0x8ACB0C3FACC09467()) || unk_0xF7E138CFA19B55E7())
		{
		}
		else if (!func_465())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_42(iParam0))
		{
			return 0;
		}
	}
	if (!func_40(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_40(int iParam0)//Position - 0x1E9A
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_41())
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

int func_41()//Position - 0x1F5E
{
	if (unk_0x8ACB0C3FACC09467())
	{
		return unk_0xC9D803F7D7E10861();
	}
	return 0;
}

int func_42(int iParam0)//Position - 0x1F75
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

int func_43()//Position - 0x3A1C
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

int func_44(int iParam0)//Position - 0x3AD7
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x6F79ECA8C83E4357(iParam0);
	sVar1 = unk_0x2232934AD664DD49(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x3362CDE8460ED38B(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_39(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_45(int iParam0)//Position - 0x3B1D
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(Global_110A8.f_1E4[24]))
	{
		if (iParam0 == Global_110A8.f_1E4[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x724D816EA203A79E(Global_110A8.f_1E4[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_110A8.f_1E4[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_46(int iParam0)//Position - 0x3C05
{
	int iVar0;
	
	if (!unk_0x724D816EA203A79E(iParam0))
	{
		return 145;
	}
	if (!unk_0xE59B7F5A03335350(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x724D816EA203A79E(Global_1613F[iVar0]))
		{
			if (Global_1613F[iVar0] == iParam0)
			{
				return Global_16149[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_47(int iParam0, int iParam1, bool bParam2)//Position - 0x3C68
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0x724D816EA203A79E(iParam0) || !unk_0xE59B7F5A03335350(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_48(iParam1, iVar0, &sVar1, &iVar2))
	{
		if (!bParam2 || unk_0xFA30DFD0084E92FE(Global_19B04.f_1C20[iVar2], 0))
		{
			if (unk_0x9945EE67AEC122F7(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_48(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0x3CD9
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

int func_49(int iParam0)//Position - 0x3DB1
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_110A8.f_8B[iParam0];
}

int func_50()//Position - 0x3DCD
{
	var uVar0;
	
	func_60(&uVar0, unk_0xF40D00CD7B81C0A8());
	func_59(&uVar0, unk_0x7E09057438B9D216());
	func_58(&uVar0, unk_0x6E06C0DB9B43570D());
	func_53(&uVar0, unk_0xBE14F159908E4EE5());
	func_52(&uVar0, unk_0xDD6A91E47ED4D0CF());
	func_51(&uVar0, unk_0x4EEB3860BFC44B78());
	return uVar0;
}

void func_51(var uParam0, int iParam1)//Position - 0x3E13
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_52(var uParam0, int iParam1)//Position - 0x3E99
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_53(var uParam0, int iParam1)//Position - 0x3ECC
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_57(*uParam0);
	iVar1 = func_55(*uParam0);
	if (iParam1 < 1 || iParam1 > func_54(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_54(int iParam0, int iParam1)//Position - 0x3F1D
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

var func_55(int iParam0)//Position - 0x3FBF
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_56(unk_0xFA30DFD0084E92FE(iParam0, 31), -1, 1)) + 2011;
}

int func_56(bool bParam0, int iParam1, int iParam2)//Position - 0x3FE4
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_57(int iParam0)//Position - 0x3FFB
{
	return iParam0 & 15;
}

void func_58(var uParam0, int iParam1)//Position - 0x400D
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_59(var uParam0, int iParam1)//Position - 0x4047
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_60(var uParam0, int iParam1)//Position - 0x4082
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_61(var uParam0, int iParam1)//Position - 0x40BE
{
	int iVar0;
	int iVar1;
	
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_A = 0;
	uParam0->f_B = 0;
	uParam0->f_C = 145;
	uParam0->f_D = -1;
	uParam0->f_E = 0;
	uParam0->f_F = { 0f, 0f, 0f };
	uParam0->f_12 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_23(0, 1);
			uParam0->f_C = 0;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_23(0, 1);
			uParam0->f_C = 0;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_23(1, 1);
			uParam0->f_C = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_23(1, 2);
			uParam0->f_C = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 19);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_23(1, 1);
			uParam0->f_C = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_23(1, 2);
			uParam0->f_C = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 19);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_23(2, 1);
			uParam0->f_C = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_23(2, 1);
			uParam0->f_C = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_23(2, 1);
			uParam0->f_C = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_E = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_C = 0;
			uParam0->f_D = 359;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_E = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_C = 1;
			uParam0->f_D = 359;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_E = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_C = 2;
			uParam0->f_D = 359;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_E = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_C = 0;
			uParam0->f_D = 356;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 22);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_E = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_C = 1;
			uParam0->f_D = 356;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 22);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_E = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_C = 2;
			uParam0->f_D = 356;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 22);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_E = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_C = 0;
			uParam0->f_D = 360;
			uParam0->f_F = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_12 = { -738.0606f, -1423.068f, 8.2835f };
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_E = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_C = 1;
			uParam0->f_D = 360;
			uParam0->f_F = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_12 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_E = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_C = 2;
			uParam0->f_D = 360;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_E = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_C = 0;
			uParam0->f_D = 357;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 24);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_E = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_C = 1;
			uParam0->f_D = 357;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 24);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_E = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_C = 2;
			uParam0->f_D = 357;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 24);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_E = (12 + iVar1);
			*uParam0 = { 196.2794f, -1020.479f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_C = (0 + iVar1);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 27);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 24);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_E = (15 + iVar1);
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_C = (0 + iVar1);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 27);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 24);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_E = (18 + iVar1);
			*uParam0 = { 203.6006f, -1019.776f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_C = (0 + iVar1);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 27);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 24);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_E = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 11);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 13);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_E = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 11);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 13);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_A = 126;
			uParam0->f_B = 126;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 9);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_A = 157;
			uParam0->f_B = 157;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 9);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = 1938952078;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("vacca");
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("surano");
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("tornado2");
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("superd");
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = { -1321.519f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = { -1267.999f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = { -1062.076f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = { 68.16914f, -1558.958f, 29.46904f };
			uParam0->f_3 = 49.90575f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_C = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_C = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_C = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_C = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_C = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_C = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_D = 308;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 2);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 30);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_D = 404;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 2);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 22);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = { 2116.571f, 4763.279f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("bfinjection");
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (func_43())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_D = 401;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 13);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 2);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 1);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_43())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_D = 401;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 13);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 2);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 1);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_D = 308;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 30);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 30);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (unk_0xFA30DFD0084E92FE(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_19B04.f_7F22.f_45[uParam0->f_E /*78*/].f_42;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_21(Global_19B04.f_7F22.f_748[uParam0->f_E /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_19B04.f_7F22.f_748[uParam0->f_E /*3*/] };
		}
		if (Global_19B04.f_7F22.f_78E[uParam0->f_E] != -1f)
		{
			uParam0->f_3 = Global_19B04.f_7F22.f_78E[uParam0->f_E];
		}
	}
	if (unk_0xFA30DFD0084E92FE(uParam0->f_9, 19))
	{
		if (!func_21(Global_19B04.f_932.f_21B.f_DF0[1 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_19B04.f_932.f_21B.f_DF0[1 /*10*/][uParam0->f_C /*3*/] };
			uParam0->f_3 = Global_19B04.f_932.f_21B.f_E05[1 /*4*/][uParam0->f_C];
		}
	}
	else if (unk_0xFA30DFD0084E92FE(uParam0->f_9, 20))
	{
		if (!func_21(Global_19B04.f_932.f_21B.f_DF0[0 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_19B04.f_932.f_21B.f_DF0[0 /*10*/][uParam0->f_C /*3*/] };
			uParam0->f_3 = Global_19B04.f_932.f_21B.f_E05[0 /*4*/][uParam0->f_C];
		}
	}
	return iVar0;
}

int func_62(int iParam0)//Position - 0x57B5
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x724D816EA203A79E(Global_1615D[iVar0]))
		{
			if (Global_1615D[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_63(int iParam0)//Position - 0x57F0
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(iParam0) && unk_0xE59B7F5A03335350(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x724D816EA203A79E(Global_1613F[iVar0]) && unk_0xE59B7F5A03335350(Global_1613F[iVar0], 0))
			{
				if (Global_1613F[iVar0] == iParam0 && unk_0x6F79ECA8C83E4357(Global_1613F[iVar0]) == unk_0x6F79ECA8C83E4357(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_64(int iParam0)//Position - 0x586C
{
	switch (Local_56.f_6)
	{
		case 0:
			return func_66(iParam0);
			break;
		
		case 1:
			if (((unk_0xE7B3A320107C1379(iParam0) || unk_0x7974165A9BC75283(iParam0)) || iParam0 == joaat("submersible2")) || iParam0 == joaat("dodo"))
			{
				return 1;
			}
			break;
		
		case 3:
			return func_65(iParam0);
			break;
		
		case 2:
			return (unk_0x8C1A6E7D5F410F4A(iParam0) && iParam0 != joaat("skylift"));
			break;
	}
	return 0;
}

int func_65(int iParam0)//Position - 0x5900
{
	if ((iParam0 == joaat("marshall") || iParam0 == joaat("barracks")) || iParam0 == joaat("crusader"))
	{
		return 0;
	}
	if (iParam0 == joaat("rhino"))
	{
		return 0;
	}
	if (((!unk_0x7C28D15641461C68(iParam0) && !unk_0x7512ED01F3F46714(iParam0)) && !unk_0x2B4DE5C0D509B0F9(iParam0)) && !unk_0x89B9572166100905(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_66(int iParam0)//Position - 0x5974
{
	if (iParam0 == joaat("jet"))
	{
		return 0;
	}
	if ((((!unk_0xA19D269B4B5A1532(iParam0) && iParam0 != joaat("marshall")) && iParam0 != joaat("rhino")) && iParam0 != joaat("barracks")) && iParam0 != joaat("crusader"))
	{
		return 0;
	}
	return 1;
}

bool func_67(int iParam0, int iParam1)//Position - 0x59CD
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_19B04.f_7F22[iParam0], iParam1);
}

void func_68()//Position - 0x59F0
{
	struct<101> Var0;
	struct<78> Var1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	struct<4> Var8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	int iVar17;
	bool bVar18;
	bool bVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	struct<2> Var24;
	int iVar25;
	bool bVar26;
	int iVar27;
	bool bVar28;
	var uVar29;
	
	Var0.f_9 = 49;
	Var0.f_3B = 2;
	Var0.f_4E = -1;
	Var0.f_4F = -1;
	Var0.f_60 = -1;
	Var0.f_61 = 1;
	Var0.f_63 = 132;
	Var0.f_64 = -1;
	Var1.f_9 = 49;
	Var1.f_3B = 2;
	bVar2 = false;
	iVar3 = 0;
	if (iLocal_113 > 0 && iLocal_113 != 99)
	{
		if (((((((((((((((Local_56 == -1 || unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || !unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), Local_56.f_1D.f_7, Local_56.f_1D.f_A, Local_56.f_1D.f_D, 0, true, 0)) || ((unk_0x724D816EA203A79E(Global_110A8.f_1E4[Local_56]) && unk_0xE59B7F5A03335350(Global_110A8.f_1E4[Local_56], 0)) && (unk_0x702B2D223F333084(unk_0xBC25C936A095B5BA(), Global_110A8.f_1E4[Local_56]) || unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), Global_110A8.f_1E4[Local_56], 1)))) || ((unk_0x724D816EA203A79E(Global_110A8.f_1E4[Local_56]) && unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA())) && ((unk_0xDB5C848CD9F1133E(unk_0xBC25C936A095B5BA()) - 1f) > 0.15f && unk_0xE921F8171F0733B3(unk_0xBC25C936A095B5BA(), Global_110A8.f_1E4[Local_56])))) || ((unk_0x724D816EA203A79E(Global_110A8.f_1E4[Local_56]) && unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA())) && unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), Global_110A8.f_1E4[Local_56], 1))) || (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()) && unk_0x8F1FDD0A40DC834A(unk_0xBC25C936A095B5BA()))) || func_27(0)) || func_27(3)) || func_27(2)) || func_27(4)) || func_27(14)) || func_218(0) != bLocal_161) || bLocal_142) || func_217(-1082130432))
		{
			iLocal_113 = 99;
		}
	}
	switch (iLocal_113)
	{
		case 0:
			if ((((!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F())) && !Global_10AB8) && !bLocal_142) && !unk_0x17FAADF9916EF741())
			{
				if ((((((((((Local_56.f_1D.f_50 && Local_56.f_2 == 0) && (Global_110A8.f_250[0] != -1 || func_216() != 0)) && Local_56 != -1) && !iLocal_159) && !func_27(0)) && !func_27(3)) && !func_27(2)) && !func_27(4)) && !func_27(14)) && !func_217(-1082130432))
				{
					if (iLocal_115 != -1)
					{
					}
					else if (func_67(Local_56, 0) && func_67(Local_56, 5))
					{
						if ((unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), Local_56.f_1D.f_7, Local_56.f_1D.f_A, Local_56.f_1D.f_D, 0, true, 0) && !unk_0x3BFD283B5133A140(unk_0xBC25C936A095B5BA())) && !unk_0xE7E55F7532DEE345(unk_0xBC25C936A095B5BA()))
						{
							if ((!unk_0x724D816EA203A79E(Global_110A8.f_1E4[Local_56]) || !unk_0xE59B7F5A03335350(Global_110A8.f_1E4[Local_56], 0)) || (!unk_0x702B2D223F333084(unk_0xBC25C936A095B5BA(), Global_110A8.f_1E4[Local_56]) && !unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), Global_110A8.f_1E4[Local_56], 1)))
							{
								iVar6 = func_216();
								iVar7 = 0;
								while (iVar7 < iVar6)
								{
									if (func_64(func_212(iVar7)))
									{
										iVar5++;
									}
									iVar7++;
								}
								iVar4 = 0;
								while (iVar4 < Global_110A8.f_250)
								{
									if (Global_110A8.f_250[iVar4] != -1)
									{
										if ((func_211(Global_110A8.f_250[iVar4], iLocal_129) && Global_19B04.f_7F22.f_7BE[iLocal_129 /*939*/].f_272[Global_110A8.f_250[iVar4]] == -15) && (Global_110A8.f_250[iVar4] != 200 || !Global_19B04.f_61D4.f_7))
										{
											iVar5++;
										}
									}
									iVar4++;
								}
								if (iVar5 > 0)
								{
									if (!unk_0xF16DAFF595E80F7C())
									{
										iLocal_144 = 1;
										if (Local_56.f_6 == 3)
										{
											func_210(&iLocal_114, 3, "WEB_VEH_TRIG2", 0, 0, 0, 0);
										}
										else
										{
											func_210(&iLocal_114, 3, "WEB_VEH_TRIG", 0, 0, 0, 0);
										}
										bLocal_161 = func_218(0);
										iLocal_113++;
									}
								}
								else if (!iLocal_144)
								{
									if (Local_56.f_6 == 0)
									{
										if (!unk_0xF16DAFF595E80F7C() || func_209("HANGAR_NO"))
										{
											func_208("HANGAR_NO", -1);
											StringCopy(&cLocal_162, "HANGAR_NO", 16);
										}
										bVar2 = true;
									}
									else if (Local_56.f_6 == 1)
									{
										if (!unk_0xF16DAFF595E80F7C() || func_209("MARINA_NO"))
										{
											func_208("MARINA_NO", -1);
											StringCopy(&cLocal_162, "MARINA_NO", 16);
										}
										bVar2 = true;
									}
									else if (Local_56.f_6 == 2)
									{
										if (!unk_0xF16DAFF595E80F7C() || func_209("HELIPAD_NO"))
										{
											func_208("HELIPAD_NO", -1);
											StringCopy(&cLocal_162, "HELIPAD_NO", 16);
										}
										bVar2 = true;
									}
									else if (Local_56.f_6 == 3)
									{
										StringCopy(&Var8, "CAR_GAR_NO", 16);
										if (unk_0x3E9993F328985CCB() || unk_0xF7E138CFA19B55E7())
										{
											StringConCat(&Var8, "_1", 16);
										}
										else if (unk_0xA76D65C63ED50F67() || unk_0xF49912B78E2591B6())
										{
											StringConCat(&Var8, "_2", 16);
										}
										if (!unk_0xF16DAFF595E80F7C() || func_209(&Var8))
										{
											func_208(&Var8, -1);
											cLocal_162 = { Var8 };
										}
										bVar2 = true;
									}
								}
							}
						}
						else
						{
							iLocal_144 = 0;
						}
					}
				}
			}
			break;
		
		case 1:
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && func_206(0, -1, 0))
			{
				if (iLocal_115 != -1)
				{
					iLocal_113 = 0;
					return;
				}
				if (func_205(iLocal_114, 1))
				{
					unk_0xA4E856A8CD53B8DF(unk_0xBC25C936A095B5BA());
					if (unk_0x3D875C2512206692(unk_0xEBC6179F395EFBEB()) == 4)
					{
						unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 0);
					}
					else
					{
						unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 256);
					}
					if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
					{
						if (unk_0xE59B7F5A03335350(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 0))
						{
							unk_0x4E87F356DA56EB3F(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), false);
						}
					}
					func_204();
					iLocal_116 = 0;
					iLocal_117 = 0;
					iLocal_118 = 0;
					iLocal_109 = -1;
					iLocal_113++;
					return;
				}
			}
			break;
		
		case 2:
			if (!iLocal_116 || iLocal_117)
			{
				func_203(0, 0);
				func_202(1, 4, 0, 0, 0);
				func_201(1, 2, 1, 1, 1);
				func_200("WEB_VEH_TITLE");
				iVar9 = 0;
				while (iVar9 < iLocal_110)
				{
					iLocal_110[iVar9] = 0;
					iVar9++;
				}
				iVar10 = -1;
				iVar11 = 0;
				func_61(&(Local_56.f_8), Local_56);
				iVar13 = 0;
				iVar14 = func_216();
				iVar12 = 0;
				while (iVar12 < iVar14)
				{
					if (func_64(func_212(iVar12)))
					{
						if (iVar10 == -1)
						{
							iVar10 = iVar13;
						}
						if (Local_56.f_8.f_4 == func_212(iVar12))
						{
							iLocal_109 = iVar13;
							iVar11 = 1;
						}
						iVar13++;
					}
					iVar12++;
				}
				iVar12 = 0;
				while (iVar12 < Global_110A8.f_250)
				{
					if (Global_110A8.f_250[iVar12] != -1)
					{
						if ((func_211(Global_110A8.f_250[iVar12], iLocal_129) && Global_19B04.f_7F22.f_7BE[iLocal_129 /*939*/].f_272[Global_110A8.f_250[iVar12]] == -15) && (Global_110A8.f_250[iVar12] != 200 || !Global_19B04.f_61D4.f_7))
						{
							func_136(Global_110A8.f_250[iVar12], &Var0, 0, iLocal_129, -1);
							if (iVar10 == -1)
							{
								iVar10 = iVar13;
							}
							if (Local_56.f_8.f_4 == Var0.f_42)
							{
								iLocal_109 = iVar13;
								iVar11 = 1;
							}
							iVar13++;
						}
					}
					iVar12++;
				}
				if (iLocal_109 == -1)
				{
					iLocal_109 = iVar10;
				}
				iVar13 = 0;
				iVar14 = func_216();
				iVar12 = 0;
				while (iVar12 < iVar14)
				{
					if (func_64(func_212(iVar12)))
					{
						unk_0xF0059F27F7BB6680(&(iLocal_110[(iVar13 / 32)]), (iVar13 % 32));
						func_132(iVar13, unk_0xD8D56586882095EE(func_212(iVar12)), 0, 1, 0, 0);
						if ((iLocal_109 == iVar13 && iVar11) && Local_56.f_6 != 3)
						{
							func_131(iVar13, 4, 0);
						}
						else
						{
							func_131(iVar13, 0, 0);
						}
						iVar13++;
					}
					iVar12++;
				}
				iVar12 = 0;
				while (iVar12 < Global_110A8.f_250)
				{
					if (Global_110A8.f_250[iVar12] != -1)
					{
						if ((func_211(Global_110A8.f_250[iVar12], iLocal_129) && Global_19B04.f_7F22.f_7BE[iLocal_129 /*939*/].f_272[Global_110A8.f_250[iVar12]] == -15) && (Global_110A8.f_250[iVar12] != 200 || !Global_19B04.f_61D4.f_7))
						{
							unk_0xF0059F27F7BB6680(&(iLocal_110[(iVar13 / 32)]), (iVar13 % 32));
							func_136(Global_110A8.f_250[iVar12], &Var0, 0, iLocal_129, -1);
							if (Global_110A8.f_250[iVar12] != 164)
							{
								func_132(iVar13, func_129(Global_110A8.f_250[iVar12]), 0, 1, 0, 0);
							}
							else if (Var0.f_43 == 0)
							{
								func_132(iVar13, "TWOSTRINGS", 2, 1, 0, 0);
								func_126(func_129(Global_110A8.f_250[iVar12]), 0);
								func_126("VNX_SWFTC", 0);
							}
							else if (Var0.f_43 == 1)
							{
								func_132(iVar13, "TWOSTRINGS", 2, 1, 0, 0);
								func_126(func_129(Global_110A8.f_250[iVar12]), 0);
								func_126("VNX_SWFTB", 0);
							}
							else
							{
								func_132(iVar13, func_129(Global_110A8.f_250[iVar12]), 0, 1, 0, 0);
							}
							if (iLocal_109 == iVar13 && iVar11)
							{
								func_131(iVar13, 4, 0);
							}
							else
							{
								func_131(iVar13, 0, 0);
							}
							iVar13++;
						}
					}
					iVar12++;
				}
				func_125(iLocal_109, 1, 1);
				iLocal_119 = 1;
				iLocal_117 = 0;
				iLocal_116 = 1;
			}
			else
			{
				iVar3 = 0;
				if (unk_0x8ACB0C3FACC09467())
				{
					if (unk_0x0738078C96634C59(2))
					{
						unk_0xBBC4195AD74D153D(0, 1, 1);
						unk_0xBBC4195AD74D153D(0, 2, 1);
						unk_0xBBC4195AD74D153D(2, 200, 1);
						unk_0x5EFA245B45A49778(0, 237, 1);
						unk_0x5EFA245B45A49778(0, 238, 1);
						unk_0x5EFA245B45A49778(0, 241, 1);
						unk_0x5EFA245B45A49778(0, 242, 1);
						func_122(0, 0, 0, 1);
						func_121(0, -1, 1);
						if (func_120())
						{
							if (Global_4118D6 != iLocal_109)
							{
								unk_0xC4BA30B532FE260F(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
								iLocal_109 = Global_4118D6;
								func_125(iLocal_109, 1, 1);
								iLocal_119 = 1;
							}
							else
							{
								iVar3 = 1;
							}
						}
					}
				}
				if (unk_0x694514BD37EC4E94(2, 188) || unk_0x694514BD37EC4E94(2, 241))
				{
					iLocal_119 = 1;
					unk_0xC4BA30B532FE260F(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					iVar15 = (iLocal_109 - 1);
					while (iVar15 >= 0)
					{
						if (unk_0xFA30DFD0084E92FE(iLocal_110[(iVar15 / 32)], (iVar15 % 32)))
						{
							iLocal_109 = iVar15;
							bVar16 = true;
							iVar15 = 0;
						}
						iVar15 = (iVar15 + -1);
					}
					if (!bVar16)
					{
						iVar15 = (iLocal_110 * 32 - 1);
						while (iVar15 >= iLocal_109 + 1)
						{
							if (unk_0xFA30DFD0084E92FE(iLocal_110[(iVar15 / 32)], (iVar15 % 32)))
							{
								iLocal_109 = iVar15;
								bVar16 = true;
								iVar15 = 0;
							}
							iVar15 = (iVar15 + -1);
						}
					}
					if (bVar16)
					{
						func_125(iLocal_109, 1, 1);
					}
				}
				else if (unk_0x694514BD37EC4E94(2, 187) || unk_0x694514BD37EC4E94(2, 242))
				{
					iLocal_119 = 1;
					unk_0xC4BA30B532FE260F(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					iVar17 = iLocal_109 + 1;
					while (iVar17 <= (iLocal_110 * 32 - 1))
					{
						if (unk_0xFA30DFD0084E92FE(iLocal_110[(iVar17 / 32)], (iVar17 % 32)))
						{
							iLocal_109 = iVar17;
							bVar18 = true;
							iVar17 = iLocal_110 * 32 + 1;
						}
						iVar17++;
					}
					if (!bVar18)
					{
						iVar17 = 0;
						while (iVar17 <= (iLocal_109 - 1))
						{
							if (unk_0xFA30DFD0084E92FE(iLocal_110[(iVar17 / 32)], (iVar17 % 32)))
							{
								iLocal_109 = iVar17;
								bVar18 = true;
								iVar17 = iLocal_110 * 32 + 1;
							}
							iVar17++;
						}
					}
					if (bVar18)
					{
						func_125(iLocal_109, 1, 1);
					}
				}
				else if (unk_0x093484B35A948BFC(2, 201) || iVar3 == 1)
				{
					bVar19 = false;
					iVar3 = 0;
					unk_0xC4BA30B532FE260F(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					iVar21 = 0;
					iVar22 = func_216();
					iVar20 = 0;
					while (iVar20 < iVar22)
					{
						if (func_64(func_212(iVar20)))
						{
							if (iLocal_109 == iVar21 && (((((Local_56.f_8.f_4 != func_212(iVar20) || !unk_0x724D816EA203A79E(Global_110A8.f_1E4[Local_56])) || !unk_0xE59B7F5A03335350(Global_110A8.f_1E4[Local_56], 0)) || Local_56 == 21) || Local_56 == 22) || Local_56 == 23))
							{
								bVar19 = true;
								if ((((!iLocal_118 && Local_56.f_8.f_4 != func_212(iVar20)) || (!iLocal_118 && Local_56 == 21)) || (!iLocal_118 && Local_56 == 22)) || (!iLocal_118 && Local_56 == 23))
								{
									func_119("VEH_SELECT_CNFA", 0, 0);
									func_118(-1);
									func_117(201, "ITEM_YES", -1);
									func_117(202, "ITEM_NO", -1);
									iLocal_118 = 1;
									iVar20 = func_216() + 1;
								}
								else if (Local_56.f_6 == 3)
								{
									if (func_116(func_212(iVar20)))
									{
										iLocal_160 = func_212(iVar20);
										iLocal_116 = 0;
										iLocal_117 = 0;
										iLocal_111 = 0;
										iLocal_113++;
									}
									else
									{
										iLocal_159 = 1;
										iLocal_160 = func_212(iVar20);
										iLocal_113 = 99;
									}
								}
								else if (Local_56.f_6 == 0 && func_116(func_212(iVar20)))
								{
									iLocal_160 = func_212(iVar20);
									iLocal_116 = 0;
									iLocal_117 = 0;
									iLocal_111 = 0;
									iLocal_113++;
								}
								else
								{
									if (unk_0x724D816EA203A79E(Global_110A8.f_1E4[Local_56]))
									{
										unk_0x77815D3407C6700D(Global_110A8.f_1E4[Local_56], false, 1);
										unk_0xCF6040807CC0E4A5(&(Global_110A8.f_1E4[Local_56]));
									}
									Var1.f_42 = func_212(iVar20);
									unk_0xF0059F27F7BB6680(&(Var1.f_4D), 14);
									func_113(Local_56, &Var1, 0f, 0f, 0f, -1f, 145);
									func_112(Local_56);
									func_61(&(Local_56.f_8), Local_56);
									iVar20 = func_216() + 1;
									iLocal_117 = 1;
								}
							}
							iVar21++;
						}
						iVar20++;
					}
					if (!bVar19)
					{
						iVar20 = 0;
						while (iVar20 < Global_110A8.f_250)
						{
							if (Global_110A8.f_250[iVar20] != -1)
							{
								if ((func_211(Global_110A8.f_250[iVar20], iLocal_129) && Global_19B04.f_7F22.f_7BE[iLocal_129 /*939*/].f_272[Global_110A8.f_250[iVar20]] == -15) && (Global_110A8.f_250[iVar20] != 200 || !Global_19B04.f_61D4.f_7))
								{
									func_136(Global_110A8.f_250[iVar20], &Var0, 0, iLocal_129, -1);
									if (iLocal_109 == iVar21 && ((Local_56.f_8.f_4 != Var0.f_42 || !unk_0x724D816EA203A79E(Global_110A8.f_1E4[Local_56])) || !unk_0xE59B7F5A03335350(Global_110A8.f_1E4[Local_56], 0)))
									{
										bVar19 = true;
										if (!iLocal_118)
										{
											if (Local_56.f_6 == 3)
											{
												func_119("VEH_SELECT_CNF", 0, 0);
											}
											else
											{
												func_119("VEH_SELECT_CNFA", 0, 0);
											}
											func_118(-1);
											func_117(201, "ITEM_YES", -1);
											func_117(202, "ITEM_NO", -1);
											iLocal_118 = 1;
											iVar20 = Global_110A8.f_250 + 1;
										}
										else if (Var0.f_42 == joaat("marshall"))
										{
											iLocal_113 = 3;
											iLocal_117 = 1;
											iVar20 = Global_110A8.f_250 + 1;
										}
										else
										{
											if (unk_0x724D816EA203A79E(Global_110A8.f_1E4[Local_56]))
											{
												unk_0x77815D3407C6700D(Global_110A8.f_1E4[Local_56], false, 1);
												unk_0xCF6040807CC0E4A5(&(Global_110A8.f_1E4[Local_56]));
											}
											func_136(Global_110A8.f_250[iVar20], &Var0, 0, iLocal_129, -1);
											unk_0xF0059F27F7BB6680(&(Var0.f_4D), 14);
											if (unk_0xA19D269B4B5A1532(Var0.f_42))
											{
												unk_0xF0059F27F7BB6680(&(Var0.f_4D), 22);
											}
											func_113(Local_56, &Var0, 0f, 0f, 0f, -1f, 145);
											func_112(Local_56);
											func_61(&(Local_56.f_8), Local_56);
											iVar20 = Global_110A8.f_250 + 1;
											iLocal_117 = 1;
										}
									}
									iVar21++;
								}
							}
							iVar20++;
						}
					}
				}
				else if (unk_0x093484B35A948BFC(2, 202) || unk_0x093484B35A948BFC(2, 238))
				{
					unk_0xC4BA30B532FE260F(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					if (iLocal_118)
					{
						iLocal_119 = 1;
						iLocal_118 = 0;
					}
					else
					{
						iLocal_113 = 99;
					}
				}
			}
			unk_0xDE7B9CB38D019BF0();
			if (iLocal_119)
			{
				func_119("", 0, 0);
				func_118(-1);
				func_117(201, "ITEM_SELECT", -1);
				func_117(202, "ITEM_EXIT", -1);
				iLocal_118 = 0;
				iLocal_119 = 0;
			}
			func_74(1, -1, 1, 0, 1, -1082130432, 0, 0);
			break;
		
		case 3:
			if (!iLocal_116 || iLocal_117)
			{
				func_203(0, 0);
				func_202(1, 0, 0, 0, 0);
				func_201(1, 1, 1, 1, 1);
				iVar23 = 0;
				while (iVar23 < iLocal_112)
				{
					iLocal_112[iVar23] = 0;
					iVar23++;
				}
				func_200("WEB_VEH_TITLE2");
				iVar23 = 0;
				while (iVar23 < 25)
				{
					StringCopy(&Var24, "WEB_VEH_FLAG_", 16);
					StringIntConCat(&Var24, iVar23, 16);
					func_132(iVar23, &Var24, 0, 1, 0, 0);
					unk_0xF0059F27F7BB6680(&(iLocal_112[(iVar23 / 32)]), (iVar23 % 32));
					iVar23++;
				}
				if (Local_131.f_C == 0)
				{
					iLocal_111 = Global_19B04.f_6241.f_139[200];
				}
				else if (Local_131.f_C == 1)
				{
					iLocal_111 = Global_19B04.f_6241.f_272[200];
				}
				else
				{
					iLocal_111 = Global_19B04.f_6241.f_3AB[200];
				}
				func_125(iLocal_111, 1, 1);
				iLocal_119 = 1;
				iLocal_117 = 0;
				iLocal_116 = 1;
			}
			else
			{
				iVar3 = 0;
				if (unk_0x8ACB0C3FACC09467())
				{
					if (unk_0x0738078C96634C59(2))
					{
						unk_0xBBC4195AD74D153D(0, 1, 1);
						unk_0xBBC4195AD74D153D(0, 2, 1);
						unk_0x5EFA245B45A49778(0, 237, 1);
						unk_0x5EFA245B45A49778(0, 238, 1);
						unk_0x5EFA245B45A49778(0, 241, 1);
						unk_0x5EFA245B45A49778(0, 242, 1);
						func_122(0, 0, 0, 1);
						func_121(0, -1, 1);
						if (func_120())
						{
							if (Global_4118D6 != iLocal_111)
							{
								unk_0xC4BA30B532FE260F(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
								iLocal_111 = Global_4118D6;
								func_125(iLocal_111, 1, 1);
								iLocal_119 = 1;
							}
							else
							{
								iVar3 = 1;
							}
						}
					}
				}
				if (unk_0x694514BD37EC4E94(2, 188) || unk_0x694514BD37EC4E94(2, 241))
				{
					iLocal_119 = 1;
					unk_0xC4BA30B532FE260F(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					iVar25 = (iLocal_111 - 1);
					while (iVar25 >= 0)
					{
						if (unk_0xFA30DFD0084E92FE(iLocal_112[(iVar25 / 32)], (iVar25 % 32)))
						{
							iLocal_111 = iVar25;
							bVar26 = true;
							iVar25 = 0;
						}
						iVar25 = (iVar25 + -1);
					}
					if (!bVar26)
					{
						iVar25 = 31;
						while (iVar25 >= iLocal_111 + 1)
						{
							if (unk_0xFA30DFD0084E92FE(iLocal_112[(iVar25 / 32)], (iVar25 % 32)))
							{
								iLocal_111 = iVar25;
								bVar26 = true;
								iVar25 = iLocal_111;
							}
							iVar25 = (iVar25 + -1);
						}
					}
					if (bVar26)
					{
						func_125(iLocal_111, 1, 1);
					}
				}
				else if (unk_0x694514BD37EC4E94(2, 187) || unk_0x694514BD37EC4E94(2, 242))
				{
					iLocal_119 = 1;
					unk_0xC4BA30B532FE260F(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					iVar27 = iLocal_111 + 1;
					while (iVar27 <= 31)
					{
						if (unk_0xFA30DFD0084E92FE(iLocal_112[(iVar27 / 32)], (iVar27 % 32)))
						{
							iLocal_111 = iVar27;
							bVar28 = true;
							iVar27 = 31;
						}
						iVar27++;
					}
					if (!bVar28)
					{
						iVar27 = 0;
						while (iVar27 <= (iLocal_111 - 1))
						{
							if (unk_0xFA30DFD0084E92FE(iLocal_112[(iVar27 / 32)], (iVar27 % 32)))
							{
								iLocal_111 = iVar27;
								bVar28 = true;
								iVar27 = iLocal_111;
							}
							iVar27++;
						}
					}
					if (bVar28)
					{
						func_125(iLocal_111, 1, 1);
					}
				}
				else if (unk_0x093484B35A948BFC(2, 201) || iVar3 == 1)
				{
					iVar3 = 0;
					unk_0xC4BA30B532FE260F(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					if (unk_0x724D816EA203A79E(Global_110A8.f_1E4[Local_56]))
					{
						unk_0x77815D3407C6700D(Global_110A8.f_1E4[Local_56], false, 1);
						unk_0xCF6040807CC0E4A5(&(Global_110A8.f_1E4[Local_56]));
					}
					uVar29 = iLocal_111 + 1;
					if (iLocal_129 == 0)
					{
						Global_19B04.f_6241.f_139[200] = uVar29;
					}
					else if (iLocal_129 == 1)
					{
						Global_19B04.f_6241.f_272[200] = uVar29;
					}
					else if (iLocal_129 == 2)
					{
						Global_19B04.f_6241.f_3AB[200] = uVar29;
					}
					func_136(200, &Var0, 0, iLocal_129, -1);
					unk_0xF0059F27F7BB6680(&(Var0.f_4D), 14);
					if (unk_0xA19D269B4B5A1532(Var0.f_42))
					{
						unk_0xF0059F27F7BB6680(&(Var0.f_4D), 22);
					}
					func_113(Local_56, &Var0, 0f, 0f, 0f, -1f, 145);
					func_112(Local_56);
					func_61(&(Local_56.f_8), Local_56);
					iLocal_117 = 1;
					iLocal_113 = 2;
				}
				else if (unk_0x093484B35A948BFC(2, 202) || unk_0x093484B35A948BFC(2, 238))
				{
					unk_0xC4BA30B532FE260F(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					iLocal_116 = 0;
					iLocal_117 = 0;
					iLocal_113 = (iLocal_113 - 1);
				}
			}
			unk_0xDE7B9CB38D019BF0();
			if (iLocal_119)
			{
				func_119("", 0, 0);
				func_118(-1);
				func_117(201, "ITEM_SELECT", -1);
				func_117(202, "ITEM_EXIT", -1);
				iLocal_118 = 0;
				iLocal_119 = 0;
			}
			func_74(1, -1, 1, 0, 1, -1082130432, 0, 0);
			break;
		
		case 70:
			break;
		
		case 99:
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
			}
			if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
			{
				if (unk_0xE59B7F5A03335350(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 0))
				{
					if (!unk_0x000432662FEA65B1())
					{
						unk_0x4E87F356DA56EB3F(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), true);
					}
				}
			}
			func_71(1, -1);
			iLocal_113 = 0;
			func_69(&iLocal_114);
			iLocal_114 = -1;
			break;
	}
	if (!bVar2 && unk_0xF16DAFF595E80F7C())
	{
		if (!unk_0xF1734B55490E9045(&cLocal_162))
		{
			if ((((func_209("HANGAR_NO") || func_209("MARINA_NO")) || func_209("HELIPAD_NO")) || func_209("CAR_GAR_NO_1")) || func_209("CAR_GAR_NO_2"))
			{
				unk_0x7456702622C62EA0(1);
			}
			StringCopy(&cLocal_162, "", 16);
		}
	}
}

void func_69(int iParam0)//Position - 0x7062
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_70(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_8F05[iVar0 /*32*/])
		{
			Global_8F05[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_70(int iParam0)//Position - 0x70B9
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_8F05[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_71(bool bParam0, int iParam1)//Position - 0x70F4
{
	int iVar0;
	
	if (!func_73(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_43C1.f_1EFB)
	{
		unk_0xC0404835F30391BB(15);
		Global_43C1.f_1EFB = 0;
	}
	unk_0xE7918A3D05166D98(0f);
	if (Global_43C1.f_157A[iVar0])
	{
		unk_0x841D233D3CE81152(9, false);
		Global_43C1.f_157A[iVar0] = 0;
	}
	if (Global_43C1.f_156C[iVar0])
	{
		unk_0x786556581D95BCB2("CommonMenu");
		Global_43C1.f_156C[iVar0] = 0;
	}
	if (Global_43C1.f_1573[iVar0])
	{
		unk_0x786556581D95BCB2("MPShopSale");
		Global_43C1.f_1573[iVar0] = 0;
	}
	if (bParam0)
	{
		func_72(&(Global_43C1.f_159A[iVar0 /*10*/]));
		Global_43C1.f_15D7[iVar0] = 0;
	}
	else
	{
		Global_43C1.f_15D7[iVar0] = 0;
	}
}

void func_72(int iParam0)//Position - 0x71B2
{
	if (iParam0->f_9 != 0)
	{
		if (unk_0xA7F138B5B1AB2CF6(*iParam0))
		{
			unk_0xB0B0FE33F4F22679(iParam0);
		}
		*iParam0 = 0;
		iParam0->f_9 = 0;
	}
}

int func_73(var uParam0, bool bParam1, int iParam2)//Position - 0x71DB
{
	char cVar0[64];
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == -1)
	{
		if (unk_0x7AF0088ABFA713B6() && unk_0x32405B7614E36453())
		{
			iParam2 = unk_0x115A5CB728B7997D();
		}
	}
	StringCopy(&cVar0, unk_0x1377080E9B0BD993(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar1 = unk_0x56BEECB328B6D29D(&cVar0);
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (Global_43C1.f_15D7[iVar2] == iVar1)
		{
			*uParam0 = iVar2;
			return 1;
		}
		else if (Global_43C1.f_15D7[iVar2] == 0)
		{
			iVar3 = iVar2;
		}
		iVar2++;
	}
	if (bParam1)
	{
		if (iVar3 != -1)
		{
			Global_43C1.f_15D7[iVar3] = iVar1;
			*uParam0 = iVar3;
			return 1;
		}
	}
	return 0;
}

void func_74(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)//Position - 0x7278
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
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	bool bVar32;
	bool bVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	float fVar37;
	vector3 vVar38;
	bool bVar39;
	float fVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	float fVar49;
	bool bVar50;
	bool bVar51;
	bool bVar52;
	int iVar53;
	bool bVar54;
	float fVar55;
	float fVar56;
	float fVar57;
	float fVar58;
	int iVar59;
	int iVar60;
	float fVar61;
	float fVar62;
	float fVar63;
	char cVar64[64];
	char cVar65[64];
	float fVar66;
	int iVar67;
	float fVar68;
	float fVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	char cVar75[16];
	float fVar76;
	float fVar77;
	float fVar78;
	float fVar79;
	float fVar80;
	
	if (!func_73(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_109(0, bParam6))
	{
		return;
	}
	unk_0xC2EAD30963BDAA47(76, 84);
	unk_0xF6A6FFB73848BF82(-0.05f, -0.05f, 0f, 0f);
	fVar56 = 0f;
	fVar57 = 0f;
	if (Global_43C1)
	{
		if (func_107(29, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar56 = fVar37;
			fVar57 = fVar36;
			fVar56 = (fVar56 + 0f);
		}
		else
		{
			Global_43C1 = 0;
		}
	}
	if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_1)) == unk_0x56BEECB328B6D29D("HIDE"))
	{
		fVar58 = Global_43BF;
	}
	else
	{
		fVar58 = (((Global_43BF + fVar56) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_43C0;
	}
	fVar61 = 1f;
	if (bParam7)
	{
		unk_0x1BBB0A5225346008(&iVar59, &iVar60);
		fVar62 = unk_0x3771EE4CB542D71E(0);
		if (func_106())
		{
			iVar59 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar60) * fVar62));
		}
		fVar63 = (SYSTEM::TO_FLOAT(iVar59) / SYSTEM::TO_FLOAT(iVar60));
		fVar61 = (fVar63 / fVar62);
		if (func_106())
		{
			fVar61 = 1f;
		}
		iVar59 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar59) / fVar61));
		iVar60 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar60) / fVar61));
	}
	else
	{
		unk_0x7A569F3885B2E08A(&iVar59, &iVar60);
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_43C1.f_15DE)
		{
			if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_1)) == unk_0x56BEECB328B6D29D("HIDE"))
			{
				fVar49 = Global_43BF;
			}
			else
			{
				if (Global_43C1)
				{
					StringCopy(&cVar64, func_105(29), 64);
					StringCopy(&cVar65, func_102(29, 1), 64);
					if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_1A3F[29 /*16*/])) == -1487683087)
					{
						func_101(Global_43BE, Global_43BF, fParam5, (fVar56 - 0f), 0, 0, 0, 255);
						unk_0x51DA985AC0B70E2E(&cVar64, &cVar65, (Global_43BE + (fParam5 * 0.5f)), (Global_43BF + ((fVar56 - 0f) * 0.5f)), fVar57, (fVar56 - 0f), 0f, 255, 255, 255, 255, 0);
					}
					else
					{
						unk_0x51DA985AC0B70E2E(&cVar64, &cVar65, (Global_43BE + (fParam5 * 0.5f)), (Global_43BF + ((fVar56 - 0f) * 0.5f)), fParam5, (fVar56 - 0f), 0f, 255, 255, 255, 255, 0);
					}
				}
				if (Global_43C1.f_1EDD)
				{
					iVar1 = Global_43C1.f_1ED9;
					iVar2 = Global_43C1.f_1EDA;
					iVar3 = Global_43C1.f_1EDB;
					iVar4 = Global_43C1.f_1EDC;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_101(Global_43BE, (Global_43BF + fVar56), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_43BF + fVar56) + 0.034722f) + 0f);
				if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_1)) != 0)
				{
					func_100();
					unk_0x8B371195127AACF2(&(Global_43C1.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_43C1.f_44)
					{
						if (Global_43C1.f_5[iVar14] == 2)
						{
							unk_0xAA5C5BF0489E5553(Global_43C1.f_A[iVar15]);
							iVar15++;
						}
						else if (Global_43C1.f_5[iVar14] == 3)
						{
							unk_0x3AE7CB4034BE212F(Global_43C1.f_E[iVar16], Global_43C1.f_12[iVar16]);
							iVar16++;
						}
						else if (Global_43C1.f_5[iVar14] == 1)
						{
							unk_0xC9C304D0AABE1335(&(Global_43C1.f_16[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_43C1.f_5[iVar14] == 8)
						{
							unk_0xC9C304D0AABE1335(&(Global_43C1.f_16[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_43C1.f_5[iVar14] == 5)
						{
							unk_0x607C19B90D297FE2(&(Global_43C1.f_23[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_43C1.f_5[iVar14] == 6)
						{
							unk_0xC9C304D0AABE1335(&(Global_43C1.f_23[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_43C1.f_5[iVar14] == 7)
						{
							unk_0x607C19B90D297FE2(&(Global_43C1.f_23[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_43C1.f_5[iVar14] == 9)
						{
							unk_0x607C19B90D297FE2(&(Global_43C1.f_23[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					unk_0x3A8B9C7B1C825123((Global_43BE + 0.00390625f), ((Global_43BF + fVar56) + 0.00416664f), 0);
				}
				if (Global_43C1.f_15E1 > Global_43C1.f_13E7)
				{
					if (Global_43C1.f_15E4 != 0)
					{
						func_100();
						func_98((((Global_43BE + fParam5) - 0.00390625f) - func_99("CM_ITEM_COUNT", Global_43C1.f_15E4, Global_43C1.f_15E3)), ((Global_43BF + fVar56) + 0.00416664f), "CM_ITEM_COUNT", Global_43C1.f_15E4, Global_43C1.f_15E3);
					}
				}
			}
			iVar6 = Global_43C1.f_15E5;
			iVar9 = 0;
			fVar66 = fVar49;
			if (Global_43C1.f_1EE7)
			{
				iVar1 = Global_43C1.f_1EE3;
				iVar2 = Global_43C1.f_1EE4;
				iVar3 = Global_43C1.f_1EE5;
				iVar4 = Global_43C1.f_1EE6;
			}
			else
			{
				unk_0xE45648BDBF3441F5(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_43C1.f_13E7 && iVar6 <= Global_43C1.f_13E0)
			{
				if (iVar6 >= 0)
				{
					if (Global_43C1.f_14EB[iVar6])
					{
						if (Global_43C1.f_146A[iVar6] && iVar6 != Global_43C1.f_15E5)
						{
							fVar49 = (fVar49 + 0.00277776f);
						}
						fVar55 = 0.034722f;
						if (Global_43C1.f_15EC[iVar6] != 0f)
						{
							fVar55 = Global_43C1.f_15EC[iVar6];
						}
						fVar49 = (fVar49 + fVar55);
						iVar9++;
					}
				}
				iVar6++;
			}
			if (bParam3)
			{
				if (iVar9 <= 1)
				{
					fVar55 = 0.034722f;
					fVar49 = (fVar49 + fVar55);
					iVar9++;
					if (Global_43C1.f_13E0 <= 1)
					{
						Global_43C1.f_13E0++;
					}
					iVar53 = 1;
				}
			}
			unk_0x51DA985AC0B70E2E("CommonMenu", "Gradient_Bgd", (Global_43BE + (fParam5 * 0.5f)), ((fVar66 + ((fVar49 - fVar66) * 0.5f)) - 0.00138888f), fParam5, (fVar49 - fVar66), 0f, 255, 255, 255, 255, 0);
			if (Global_43C1.f_15E1 > Global_43C1.f_13E7)
			{
				if (Global_43C1.f_1EEC)
				{
					iVar1 = Global_43C1.f_1EE8;
					iVar2 = Global_43C1.f_1EE9;
					iVar3 = Global_43C1.f_1EEA;
					iVar4 = Global_43C1.f_1EEB;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_101(Global_43BE, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				vVar38 = { unk_0x9893E000F1F078E7("CommonMenu", "shop_arrows_upANDdown") };
				vVar38.x = (vVar38.x * (0.5f / fVar61));
				vVar38.y = (vVar38.y * (0.5f / fVar61));
				if (Global_43C1.f_1EF9)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					unk_0xE45648BDBF3441F5(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x51DA985AC0B70E2E("CommonMenu", "shop_arrows_upANDdown", (Global_43BE + (fParam5 * 0.5f)), ((fVar49 + 0f) + (0.034722f * 0.5f)), ((vVar38.x / 1280f) * fVar61), ((vVar38.y / 720f) * fVar61), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar49 = (fVar49 + (0f + 0.034722f));
			}
			if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_11D2)) != 0 && Global_43C1.f_121C != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar40 = (Global_43BE + 0.0046875f);
				if (Global_43C1.f_121E != 0)
				{
					func_107(Global_43C1.f_121E, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_43BE + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_97(fVar40);
				unk_0xD8C1258D4AB3DD08(&(Global_43C1.f_11D2));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_43C1.f_1218)
				{
					if (Global_43C1.f_11D6[iVar14] == 2)
					{
						unk_0xAA5C5BF0489E5553(Global_43C1.f_11DB[iVar15]);
						iVar15++;
					}
					else if (Global_43C1.f_11D6[iVar14] == 3)
					{
						unk_0x3AE7CB4034BE212F(Global_43C1.f_11DF[iVar16], Global_43C1.f_11E3[iVar16]);
						iVar16++;
					}
					else if (Global_43C1.f_11D6[iVar14] == 1)
					{
						unk_0xC9C304D0AABE1335(&(Global_43C1.f_11E7[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_43C1.f_11D6[iVar14] == 5)
					{
						unk_0x607C19B90D297FE2(&(Global_43C1.f_11E7[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_43C1.f_11D6[iVar14] == 6)
					{
						unk_0xC9C304D0AABE1335(&(Global_43C1.f_11E7[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_43C1.f_11D6[iVar14] == 7)
					{
						unk_0x607C19B90D297FE2(&(Global_43C1.f_11E7[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_43C1.f_11D6[iVar14] == 9)
					{
						unk_0x607C19B90D297FE2(&(Global_43C1.f_11E7[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0xD7347ECB614BEFFC(fVar40, (fVar49 + 0.00277776f));
				unk_0xE45648BDBF3441F5(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_101(Global_43BE, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_43C1.f_1EF1)
				{
					iVar1 = Global_43C1.f_1EED;
					iVar2 = Global_43C1.f_1EEE;
					iVar3 = Global_43C1.f_1EEF;
					iVar4 = Global_43C1.f_1EF0;
				}
				else
				{
					unk_0xE45648BDBF3441F5(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x51DA985AC0B70E2E("CommonMenu", "Gradient_Bgd", (Global_43BE + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0x60F548525BE58E47(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x60F548525BE58E47(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_97(fVar40);
				unk_0x8B371195127AACF2(&(Global_43C1.f_11D2));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_43C1.f_1218)
				{
					if (Global_43C1.f_11D6[iVar14] == 2)
					{
						unk_0xAA5C5BF0489E5553(Global_43C1.f_11DB[iVar15]);
						iVar15++;
					}
					else if (Global_43C1.f_11D6[iVar14] == 3)
					{
						unk_0x3AE7CB4034BE212F(Global_43C1.f_11DF[iVar16], Global_43C1.f_11E3[iVar16]);
						iVar16++;
					}
					else if (Global_43C1.f_11D6[iVar14] == 1)
					{
						unk_0xC9C304D0AABE1335(&(Global_43C1.f_11E7[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_43C1.f_11D6[iVar14] == 5)
					{
						unk_0x607C19B90D297FE2(&(Global_43C1.f_11E7[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_43C1.f_11D6[iVar14] == 6)
					{
						unk_0xC9C304D0AABE1335(&(Global_43C1.f_11E7[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_43C1.f_11D6[iVar14] == 7)
					{
						unk_0x607C19B90D297FE2(&(Global_43C1.f_11E7[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_43C1.f_11D6[iVar14] == 9)
					{
						unk_0x607C19B90D297FE2(&(Global_43C1.f_11E7[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_43C1.f_11D6[iVar14] == 8)
					{
						unk_0xC9C304D0AABE1335(&(Global_43C1.f_11E7[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x3A8B9C7B1C825123(fVar40, (fVar49 + 0.00277776f), 0);
				if (Global_43C1.f_121E != 0)
				{
					func_107(Global_43C1.f_121E, 1, 1, &fVar36, &fVar37, bParam7);
					func_96(Global_43C1.f_121E, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0x51DA985AC0B70E2E(func_105(Global_43C1.f_121E), func_102(Global_43C1.f_121E, 1), ((Global_43BE + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
				}
				fVar49 = (fVar49 + (((unk_0x60F548525BE58E47(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_43C1.f_121C > 0)
				{
					if ((unk_0x105601648511CC64() - Global_43C1.f_121D) > Global_43C1.f_121C)
					{
						StringCopy(&(Global_43C1.f_11D2), "", 16);
						Global_43C1.f_121C = -1;
					}
				}
			}
			if (unk_0x56BEECB328B6D29D(&(Global_41188A.f_15)) != 0 && Global_41188A.f_41 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar40 = (Global_43BE + 0.0046875f);
				if (Global_41188A.f_43 != 0)
				{
					func_107(Global_41188A.f_43, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_43BE + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_97(fVar40);
				unk_0xD8C1258D4AB3DD08(&(Global_41188A.f_15));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_41188A.f_3D)
				{
					if (Global_41188A.f_19[iVar14] == 2)
					{
						unk_0xAA5C5BF0489E5553(Global_41188A.f_1E[iVar15]);
						iVar15++;
					}
					else if (Global_41188A.f_19[iVar14] == 3)
					{
						unk_0x3AE7CB4034BE212F(Global_41188A.f_22[iVar16], Global_41188A.f_26[iVar16]);
						iVar16++;
					}
					else if (Global_41188A.f_19[iVar14] == 1)
					{
						unk_0xC9C304D0AABE1335(&(Global_41188A.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_41188A.f_19[iVar14] == 5)
					{
						unk_0x607C19B90D297FE2(&(Global_41188A.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_41188A.f_19[iVar14] == 6)
					{
						unk_0xC9C304D0AABE1335(&(Global_41188A.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_41188A.f_19[iVar14] == 7)
					{
						unk_0x607C19B90D297FE2(&(Global_41188A.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_41188A.f_19[iVar14] == 9)
					{
						unk_0x607C19B90D297FE2(&(Global_41188A.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_41188A.f_19[iVar14] == 8)
					{
						unk_0xC9C304D0AABE1335(&(Global_41188A.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0xD7347ECB614BEFFC(fVar40, (fVar49 + 0.00277776f));
				unk_0xE45648BDBF3441F5(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_101(Global_43BE, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_43C1.f_1EF1)
				{
					iVar1 = Global_43C1.f_1EED;
					iVar2 = Global_43C1.f_1EEE;
					iVar3 = Global_43C1.f_1EEF;
					iVar4 = Global_43C1.f_1EF0;
				}
				else
				{
					unk_0xE45648BDBF3441F5(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x51DA985AC0B70E2E("CommonMenu", "Gradient_Bgd", (Global_43BE + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0x60F548525BE58E47(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x60F548525BE58E47(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_97(fVar40);
				unk_0x8B371195127AACF2(&(Global_41188A.f_15));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_41188A.f_3D)
				{
					if (Global_41188A.f_19[iVar14] == 2)
					{
						unk_0xAA5C5BF0489E5553(Global_41188A.f_1E[iVar15]);
						iVar15++;
					}
					else if (Global_41188A.f_19[iVar14] == 3)
					{
						unk_0x3AE7CB4034BE212F(Global_41188A.f_22[iVar16], Global_41188A.f_26[iVar16]);
						iVar16++;
					}
					else if (Global_41188A.f_19[iVar14] == 1)
					{
						unk_0xC9C304D0AABE1335(&(Global_41188A.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_41188A.f_19[iVar14] == 8)
					{
						unk_0xC9C304D0AABE1335(&(Global_41188A.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_41188A.f_19[iVar14] == 5)
					{
						unk_0x607C19B90D297FE2(&(Global_41188A.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_41188A.f_19[iVar14] == 6)
					{
						unk_0xC9C304D0AABE1335(&(Global_41188A.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_41188A.f_19[iVar14] == 7)
					{
						unk_0x607C19B90D297FE2(&(Global_41188A.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_41188A.f_19[iVar14] == 9)
					{
						unk_0x607C19B90D297FE2(&(Global_41188A.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x3A8B9C7B1C825123(fVar40, (fVar49 + 0.00277776f), 0);
				if (Global_41188A.f_43 != 0)
				{
					func_107(Global_41188A.f_43, 1, 1, &fVar36, &fVar37, bParam7);
					func_96(Global_41188A.f_43, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0x51DA985AC0B70E2E(func_105(Global_41188A.f_43), func_102(Global_41188A.f_43, 1), ((Global_43BE + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
				}
				fVar49 = (fVar49 + (((unk_0x60F548525BE58E47(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_41188A.f_41 > 0)
				{
					if ((unk_0x105601648511CC64() - Global_41188A.f_42) > Global_41188A.f_41)
					{
						StringCopy(&(Global_41188A.f_15), "", 16);
						Global_41188A.f_41 = -1;
					}
				}
			}
			func_88(iVar59, iParam1, 0, 0, 0, 0, bParam4, 1, 0);
			unk_0xC2EAD30963BDAA47(76, 84);
			unk_0xF6A6FFB73848BF82(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_43C1.f_15DE)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar67 = Global_43C1.f_13E0;
			if (Global_43C1.f_15DF)
			{
				iVar67 = (Global_43C1.f_15E2 - 1);
			}
			fVar68 = 0f;
			fVar69 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar67)
			{
				fVar55 = 0.034722f;
				if (Global_43C1.f_15EC[iVar6] != 0f)
				{
					fVar55 = Global_43C1.f_15EC[iVar6];
				}
				if (Global_43C1.f_15DF)
				{
					iVar6 = Global_43C1.f_1D80[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_43C1.f_15E5 && iVar9 < Global_43C1.f_13E7)
				{
					bVar33 = true;
					if (Global_43C1.f_15E6 == iVar6)
					{
						fVar69 = fVar68;
					}
					if (Global_43C1.f_146A[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar58 + fVar68) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_43C1.f_1672[iVar6] = fVar35;
				fVar34 = (Global_43BE + 0.0046875f);
				bVar39 = false;
				bVar32 = Global_43C1.f_15E6 == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					iVar70 = 255;
					iVar71 = 255;
					iVar72 = 255;
					iVar73 = 255;
					if (Global_43C1.f_1EF3)
					{
						unk_0xE45648BDBF3441F5(Global_43C1.f_1EF2, &iVar70, &iVar71, &iVar72, &iVar73);
					}
					else
					{
						unk_0xE45648BDBF3441F5(1, &iVar70, &iVar71, &iVar72, &iVar73);
					}
					unk_0x51DA985AC0B70E2E("CommonMenu", "Gradient_Nav", (Global_43BE + (fParam5 * 0.5f)), (((fVar58 + fVar69) + (0.00277776f * IntToFloat(iVar12))) + (fVar55 * 0.5f)), fParam5, fVar55, 0f, iVar70, iVar71, iVar72, iVar73, 0);
					Global_43C1.f_1670 = fVar35;
				}
				if (iVar53 && iVar7 == iVar67)
				{
					func_86(bVar32, 1, 0, 0, 0, 0, 0);
					unk_0x8B371195127AACF2("DFLT_MNU_OPT");
					unk_0x3A8B9C7B1C825123(fVar34, fVar35, 0);
					bVar39 = true;
				}
				else
				{
					iVar8 = 0;
					while (iVar8 < Global_43C1.f_13E8)
					{
						if (unk_0xFA30DFD0084E92FE(Global_43C1.f_135F[iVar6], iVar8) || Global_43C1.f_133E[iVar8] == 5)
						{
							if (Global_43C1.f_15DF)
							{
								iVar19 = Global_43C1.f_1D90[((iVar9 * Global_43C1.f_13E8) + iVar8)];
								iVar20 = Global_43C1.f_1DB9[((iVar9 * Global_43C1.f_13E8) + iVar8)];
								iVar21 = Global_43C1.f_1DE2[((iVar9 * Global_43C1.f_13E8) + iVar8)];
								iVar22 = Global_43C1.f_1E0B[((iVar9 * Global_43C1.f_13E8) + iVar8)];
								iVar23 = Global_43C1.f_1E34[((iVar9 * Global_43C1.f_13E8) + iVar8)];
							}
							else
							{
								Global_43C1.f_1D90[((iVar9 * Global_43C1.f_13E8) + iVar8)] = iVar19;
								Global_43C1.f_1DB9[((iVar9 * Global_43C1.f_13E8) + iVar8)] = iVar20;
								Global_43C1.f_1DE2[((iVar9 * Global_43C1.f_13E8) + iVar8)] = iVar21;
								Global_43C1.f_1E0B[((iVar9 * Global_43C1.f_13E8) + iVar8)] = iVar22;
								Global_43C1.f_1E34[((iVar9 * Global_43C1.f_13E8) + iVar8)] = iVar23;
							}
							iVar74 = 0;
							bVar54 = false;
							if (Global_43C1.f_16F6[0] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_43C1.f_16F3[0])
								{
									bVar54 = true;
									iVar74 = 0;
								}
							}
							if (Global_43C1.f_16F6[1] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_43C1.f_16F3[1])
								{
									bVar54 = true;
									iVar74 = 1;
								}
							}
							if (Global_43C1.f_1344[iVar8] != -1f)
							{
								fVar34 = ((Global_43BE + 0.0046875f) + Global_43C1.f_1344[iVar8]);
							}
							if ((iVar8 < 4 && Global_43C1.f_1344[iVar8 + 1] != -1f) && fVar34 < Global_43C1.f_1344[iVar8 + 1])
							{
								fVar44 = (Global_43C1.f_1344[iVar8 + 1] - fVar34);
							}
							else
							{
								fVar44 = (((Global_43BE + Global_43C0) - 0.0046875f) - fVar34);
							}
							if ((Global_43C1.f_1351[iVar8] && Global_43C1.f_166D) && bVar32)
							{
								bVar52 = true;
							}
							else
							{
								bVar52 = false;
							}
							switch (Global_43C1.f_133E[iVar8])
							{
								case 0:
									break;
								
								case 1:
									iVar24 = iVar19;
									if (iVar5 == 1 && bVar33)
									{
										if (!Global_43C1.f_15DF)
										{
											fVar41 = 0f;
											fVar42 = 0f;
											iVar25 = 0;
											iVar26 = 0;
											iVar27 = 0;
											iVar28 = 0;
											iVar29 = 0;
											if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[iVar24 /*6*/])) != 0)
											{
												bVar50 = false;
												bVar51 = false;
												iVar14 = 0;
												while (iVar14 < 4)
												{
													if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 5 || Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 8)
													{
														bVar51 = true;
													}
													else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 9)
													{
														bVar50 = true;
													}
													iVar14++;
												}
												func_86(bVar32, Global_43C1.f_64A[iVar24], Global_43C1.f_74B[iVar24], bVar54, iVar74, bVar51, bVar50);
												unk_0xE746379C2AF24EF6(&(Global_43C1.f_49[iVar24 /*6*/]));
											}
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 1)
												{
													iVar25++;
													if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[iVar24 /*6*/])) != 0)
													{
														unk_0xC9C304D0AABE1335(&(Global_43C1.f_49[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 8)
												{
													iVar25++;
													if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[iVar24 /*6*/])) != 0)
													{
														unk_0xC9C304D0AABE1335(&(Global_43C1.f_49[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 5)
												{
													if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[iVar24 /*6*/])) != 0)
													{
														unk_0x607C19B90D297FE2(&(Global_25827C[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 6)
												{
													if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[iVar24 /*6*/])) != 0)
													{
														unk_0xC9C304D0AABE1335(&(Global_25827C[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 7)
												{
													if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[iVar24 /*6*/])) != 0)
													{
														unk_0x607C19B90D297FE2(&(Global_25827C[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 9)
												{
													if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[iVar24 /*6*/])) != 0)
													{
														unk_0x607C19B90D297FE2(&(Global_25827C[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 2)
												{
													if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[iVar24 /*6*/])) != 0)
													{
														unk_0xAA5C5BF0489E5553(Global_43C1.f_F4E[(iVar20 + iVar26)]);
													}
													iVar26++;
												}
												else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 3)
												{
													if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[iVar24 /*6*/])) != 0)
													{
														unk_0x3AE7CB4034BE212F(Global_43C1.f_104F[(iVar21 + iVar27)], Global_43C1.f_10D0[(iVar21 + iVar27)]);
													}
													iVar27++;
												}
												else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 4)
												{
													iVar28++;
												}
												iVar14++;
											}
											if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[iVar24 /*6*/])) != 0)
											{
												fVar41 = unk_0x2207C0EA517B975D(1);
											}
											if (iVar28 > 0)
											{
												iVar14 = 0;
												while (iVar14 < iVar28)
												{
													if (func_107(Global_43C1.f_1151[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
													{
														fVar42 = (fVar42 + fVar36);
														if (iVar14 > 0)
														{
															fVar42 = (fVar42 - (0.00078125f * 4f));
														}
														if (Global_43C1.f_1151[(iVar22 + iVar14)] == 2 || Global_43C1.f_1151[(iVar22 + iVar14)] == 48)
														{
															fVar42 = (fVar42 - (0.00078125f * 5f));
														}
													}
													iVar14++;
												}
											}
											fVar40 = 0f;
											if (Global_43C1.f_1359[iVar8] == 2)
											{
												fVar40 = (fVar40 + ((fVar44 - (fVar41 + fVar42)) + (0.00078125f * 1f)));
											}
											else if (Global_43C1.f_1359[iVar8] == 0)
											{
												fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - ((fVar41 + fVar42) * 0.5f)));
											}
											Global_43C1.f_1E5D[((iVar9 * Global_43C1.f_13E8) + iVar8)] = fVar40;
											Global_43C1.f_1E86[((iVar9 * Global_43C1.f_13E8) + iVar8)] = fVar41;
											Global_43C1.f_1EAF[((iVar9 * Global_43C1.f_13E8) + iVar8)] = fVar42;
										}
										else
										{
											fVar40 = Global_43C1.f_1E5D[((iVar9 * Global_43C1.f_13E8) + iVar8)];
											fVar41 = Global_43C1.f_1E86[((iVar9 * Global_43C1.f_13E8) + iVar8)];
											fVar42 = Global_43C1.f_1EAF[((iVar9 * Global_43C1.f_13E8) + iVar8)];
										}
										if (bVar52)
										{
											if (func_107(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_43C1.f_1359[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_107(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_96(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0x51DA985AC0B70E2E(func_105(26), func_102(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
											if (func_107(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_107(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_96(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0x51DA985AC0B70E2E(func_105(27), func_102(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										iVar31 = 0;
										if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[iVar24 /*6*/])) != 0)
										{
											bVar50 = false;
											bVar51 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 5 || Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 8)
												{
													bVar51 = true;
												}
												else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 9)
												{
													bVar50 = true;
												}
												iVar14++;
											}
											func_86(bVar32, Global_43C1.f_64A[iVar24], Global_43C1.f_74B[iVar24], bVar54, 0, bVar51, bVar50);
											if (Global_43C1.f_1EF7 && Global_43C1.f_1EF8 == iVar6)
											{
												func_85(bVar32);
											}
											unk_0x8B371195127AACF2(&(Global_43C1.f_49[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[iVar24 /*6*/])) != 0)
												{
													unk_0xC9C304D0AABE1335(&(Global_43C1.f_49[(iVar24 + iVar25) /*6*/]));
												}
												iVar31 = 1;
											}
											else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[iVar24 /*6*/])) != 0)
												{
													unk_0xC9C304D0AABE1335(&(Global_43C1.f_49[(iVar24 + iVar25) /*6*/]));
												}
												iVar31 = 8;
											}
											else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 5)
											{
												if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[iVar24 /*6*/])) != 0)
												{
													unk_0x607C19B90D297FE2(&(Global_25827C[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar31 = 5;
											}
											else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 6)
											{
												if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[iVar24 /*6*/])) != 0)
												{
													unk_0xC9C304D0AABE1335(&(Global_25827C[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar31 = 6;
											}
											else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 7)
											{
												if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[iVar24 /*6*/])) != 0)
												{
													unk_0x607C19B90D297FE2(&(Global_25827C[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar31 = 7;
											}
											else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 9)
											{
												if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[iVar24 /*6*/])) != 0)
												{
													unk_0x607C19B90D297FE2(&(Global_25827C[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar31 = 9;
											}
											else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 2)
											{
												if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[iVar24 /*6*/])) != 0)
												{
													unk_0xAA5C5BF0489E5553(Global_43C1.f_F4E[(iVar20 + iVar26)]);
												}
												iVar26++;
												iVar31 = 2;
											}
											else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 3)
											{
												if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[iVar24 /*6*/])) != 0)
												{
													unk_0x3AE7CB4034BE212F(Global_43C1.f_104F[(iVar21 + iVar27)], Global_43C1.f_10D0[(iVar21 + iVar27)]);
												}
												iVar27++;
												iVar31 = 3;
											}
											else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 4)
											{
												if (Global_43C1.f_1151[(iVar22 + iVar28)] == 2 || Global_43C1.f_1151[(iVar22 + iVar28)] == 48)
												{
													if (func_107(Global_43C1.f_1151[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
													{
														fVar40 = (fVar40 + (fVar36 * 0.5f));
														if (func_107(Global_43C1.f_1151[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_96(Global_43C1.f_1151[(iVar22 + iVar28)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
															if (Global_43C1.f_1359[iVar8] == 2)
															{
																unk_0x51DA985AC0B70E2E(func_105(Global_43C1.f_1151[(iVar22 + iVar28)]), func_102(Global_43C1.f_1151[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar40) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else
															{
																unk_0x51DA985AC0B70E2E(func_105(Global_43C1.f_1151[(iVar22 + iVar28)]), func_102(Global_43C1.f_1151[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar40) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															fVar40 = (fVar40 + (0.00078125f * 3f));
														}
													}
												}
												iVar28++;
												iVar31 = 4;
											}
											iVar14++;
										}
										if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[iVar24 /*6*/])) != 0)
										{
											if (iVar31 == 4 && Global_43C1.f_1359[iVar8] == 2)
											{
												unk_0x3A8B9C7B1C825123(((fVar34 + fVar40) + (0.00078125f * 7f)), fVar35, 0);
											}
											else
											{
												unk_0x3A8B9C7B1C825123((fVar34 + fVar40), fVar35, 0);
												if (func_84() && unk_0xB731B8C5BCE89836(joaat("fm_mission_creator")) > 0)
												{
													if (iVar8 == 0)
													{
														func_86(0, Global_43C1.f_64A[iVar24], Global_43C1.f_74B[iVar24], bVar54, 0, bVar51, bVar50);
														StringCopy(&cVar75, "TEST_LABEL", 16);
														fVar76 = 0f;
														fVar77 = 55f;
														fVar78 = 0.0185f;
														fVar79 = 0.004f;
														fVar80 = 0.02f;
														unk_0xB8F3C51875F7BEA3(0f, (0.35f * 0.7f));
														unk_0xCC4FE6A016BA0765(255, 255, 255, 150);
														unk_0xF7EBEC3FF57AEC65((fVar34 - (fVar80 * 0.6f)), (fVar35 + (fVar78 * 0.75f)), 0.0175f, 0.035f, SYSTEM::FLOOR(fVar76), SYSTEM::FLOOR(fVar76), SYSTEM::FLOOR(fVar76), SYSTEM::FLOOR(fVar77), 0);
														unk_0x8B371195127AACF2(&cVar75);
														unk_0xAA5C5BF0489E5553((Global_43C1.f_15E5 + iVar30));
														unk_0x3A8B9C7B1C825123((fVar34 - fVar80), (fVar35 + fVar79), 0);
														iVar30++;
													}
												}
											}
										}
										if (iVar28 > 0)
										{
											fVar40 = (fVar40 + (6f * 0.00078125f));
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (Global_43C1.f_1151[(iVar22 + iVar14)] != 2 && Global_43C1.f_1151[(iVar22 + iVar14)] != 48)
												{
													if (func_107(Global_43C1.f_1151[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
													{
														fVar40 = (fVar40 + (fVar36 * 0.5f));
														if (func_107(Global_43C1.f_1151[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_96(Global_43C1.f_1151[(iVar22 + iVar14)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
															if (Global_43C1.f_1151[(iVar22 + iVar14)] == 30)
															{
																unk_0x51DA985AC0B70E2E(func_105(Global_43C1.f_1151[(iVar22 + iVar14)]), func_102(Global_43C1.f_1151[(iVar22 + iVar14)], bVar32), (Global_43BE + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else if (Global_43C1.f_1359[iVar8] == 2)
															{
																unk_0x51DA985AC0B70E2E(func_105(Global_43C1.f_1151[(iVar22 + iVar14)]), func_102(Global_43C1.f_1151[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar40) + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else
															{
																unk_0x51DA985AC0B70E2E(func_105(Global_43C1.f_1151[(iVar22 + iVar14)]), func_102(Global_43C1.f_1151[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar40) + fVar41) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
														}
														fVar40 = (fVar40 + (12f * 0.00078125f));
													}
												}
												iVar14++;
											}
										}
									}
									bVar39 = true;
									iVar19++;
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 1)
										{
											iVar19++;
										}
										else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 8)
										{
											iVar19++;
										}
										else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 2)
										{
											iVar20++;
										}
										else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 3)
										{
											iVar21++;
										}
										else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 4)
										{
											iVar22++;
										}
										else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 5)
										{
											iVar23++;
										}
										else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 6)
										{
											iVar23++;
										}
										else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 7)
										{
											iVar23++;
										}
										else if (Global_43C1.f_84C[iVar24 /*5*/][iVar14] == 9)
										{
											iVar23++;
										}
										iVar14++;
									}
									break;
								
								case 2:
									if (iVar5 == 1 && bVar33)
									{
										if (!Global_43C1.f_15DF)
										{
											func_86(bVar32, Global_43C1.f_64A[iVar24], Global_43C1.f_74B[iVar24], bVar54, 0, 0, 0);
											if (Global_43C1.f_1EF7 && Global_43C1.f_1EF8 == iVar6)
											{
												func_85(bVar32);
											}
											unk_0xE746379C2AF24EF6("NUMBER");
											unk_0xAA5C5BF0489E5553(Global_43C1.f_F4E[iVar20]);
											fVar41 = unk_0x2207C0EA517B975D(1);
											fVar40 = 0f;
											if (Global_43C1.f_1359[iVar8] == 2)
											{
												fVar40 = (fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
											}
											else if (Global_43C1.f_1359[iVar8] == 0)
											{
												fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
											}
											Global_43C1.f_1E5D[((iVar9 * Global_43C1.f_13E8) + iVar8)] = fVar40;
											Global_43C1.f_1E86[((iVar9 * Global_43C1.f_13E8) + iVar8)] = fVar41;
										}
										else
										{
											fVar40 = Global_43C1.f_1E5D[((iVar9 * Global_43C1.f_13E8) + iVar8)];
											fVar41 = Global_43C1.f_1E86[((iVar9 * Global_43C1.f_13E8) + iVar8)];
										}
										if (bVar52)
										{
											if (func_107(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_43C1.f_1359[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_107(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_96(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0x51DA985AC0B70E2E(func_105(26), func_102(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
											if (func_107(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_107(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_96(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0x51DA985AC0B70E2E(func_105(27), func_102(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										func_86(bVar32, Global_43C1.f_64A[iVar24], Global_43C1.f_74B[iVar24], bVar54, 0, 0, 0);
										func_83((fVar34 + fVar40), fVar35, "NUMBER", Global_43C1.f_F4E[iVar20], 0);
									}
									bVar39 = true;
									iVar20++;
									break;
								
								case 3:
									if (iVar5 == 1 && bVar33)
									{
										if (!Global_43C1.f_15DF)
										{
											func_86(bVar32, Global_43C1.f_64A[iVar24], Global_43C1.f_74B[iVar24], bVar54, 0, 0, 0);
											if (Global_43C1.f_1EF7 && Global_43C1.f_1EF8 == iVar6)
											{
												func_85(bVar32);
											}
											unk_0xE746379C2AF24EF6("NUMBER");
											unk_0x3AE7CB4034BE212F(Global_43C1.f_104F[iVar21], Global_43C1.f_10D0[iVar21]);
											fVar41 = unk_0x2207C0EA517B975D(1);
											fVar40 = 0f;
											if (Global_43C1.f_1359[iVar8] == 2)
											{
												fVar40 = (fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
											}
											else if (Global_43C1.f_1359[iVar8] == 0)
											{
												fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
											}
											Global_43C1.f_1E5D[((iVar9 * Global_43C1.f_13E8) + iVar8)] = fVar40;
											Global_43C1.f_1E86[((iVar9 * Global_43C1.f_13E8) + iVar8)] = fVar41;
										}
										else
										{
											fVar40 = Global_43C1.f_1E5D[((iVar9 * Global_43C1.f_13E8) + iVar8)];
											fVar41 = Global_43C1.f_1E86[((iVar9 * Global_43C1.f_13E8) + iVar8)];
										}
										if (bVar52)
										{
											if (func_107(26, 1, 0, &fVar36, &fVar37, 0))
											{
												if (Global_43C1.f_1359[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_107(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_96(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0x51DA985AC0B70E2E(func_105(26), func_102(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
											if (func_107(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_107(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_96(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0x51DA985AC0B70E2E(func_105(27), func_102(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										func_86(bVar32, Global_43C1.f_64A[iVar24], Global_43C1.f_74B[iVar24], bVar54, 0, 0, 0);
										func_82((fVar34 + fVar40), fVar35, "NUMBER", Global_43C1.f_104F[iVar21], Global_43C1.f_10D0[iVar21]);
									}
									bVar39 = true;
									iVar21++;
									break;
								
								case 4:
									if (iVar5 == 1 && bVar33)
									{
										if (func_107(Global_43C1.f_1151[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
										{
											if (!Global_43C1.f_15DF)
											{
												fVar42 = fVar36;
												fVar40 = 0f;
												if (Global_43C1.f_1359[iVar8] == 2)
												{
													fVar40 = (fVar40 + ((fVar44 - fVar42) + (0.00078125f * 1f)));
												}
												else if (Global_43C1.f_1359[iVar8] == 0)
												{
													fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar42 * 0.5f)));
												}
												Global_43C1.f_1E5D[((iVar9 * Global_43C1.f_13E8) + iVar8)] = fVar40;
												Global_43C1.f_1EAF[((iVar9 * Global_43C1.f_13E8) + iVar8)] = fVar42;
											}
											else
											{
												fVar40 = Global_43C1.f_1E5D[((iVar9 * Global_43C1.f_13E8) + iVar8)];
												fVar42 = Global_43C1.f_1EAF[((iVar9 * Global_43C1.f_13E8) + iVar8)];
											}
											if (bVar52)
											{
												if (func_107(26, 1, 0, &fVar36, &fVar37, bParam7))
												{
													if (Global_43C1.f_1359[iVar8] == 2)
													{
														fVar40 = (fVar40 - (fVar36 * 2f));
													}
													fVar43 = (fVar36 * 0.5f);
													if (func_107(26, 1, 1, &fVar36, &fVar37, bParam7))
													{
														func_96(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
														unk_0x51DA985AC0B70E2E(func_105(26), func_102(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
													}
												}
												if (func_107(27, 1, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + fVar36);
													fVar43 = (fVar36 * 0.5f);
													if (func_107(27, 1, 1, &fVar36, &fVar37, bParam7))
													{
														func_96(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
														unk_0x51DA985AC0B70E2E(func_105(27), func_102(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
													}
												}
											}
											if (func_107(Global_43C1.f_1151[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_96(Global_43C1.f_1151[iVar22], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
												unk_0x51DA985AC0B70E2E(func_105(Global_43C1.f_1151[iVar22]), func_102(Global_43C1.f_1151[iVar22], bVar32), ((fVar34 + fVar40) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), (fVar36 * func_81(Global_43C1.f_1151[iVar22])), (fVar37 * func_81(Global_43C1.f_1151[iVar22])), 0f, iVar45, iVar46, iVar47, iVar48, 0);
											}
										}
									}
									bVar39 = true;
									iVar22++;
									break;
								
								case 5:
									bVar39 = true;
									break;
							}
							if (Global_43C1.f_133E[iVar8] == 5)
							{
								if (Global_43C1.f_134A[iVar8] > 0.05f)
								{
									fVar34 = (fVar34 + Global_43C1.f_134A[iVar8]);
								}
								else
								{
									fVar34 = (fVar34 + 0.05f);
								}
							}
							else
							{
								fVar34 = (fVar34 + Global_43C1.f_134A[iVar8]);
								if (Global_43C1.f_1351[iVar8])
								{
									if (func_107(26, 1, 1, &fVar36, &fVar37, bParam7))
									{
										fVar34 = (fVar34 - fVar36);
									}
								}
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_43C1.f_134A[iVar8]);
						}
						iVar8++;
					}
				}
				if (bVar39)
				{
					if (bVar33)
					{
						Global_43C1.f_1D80[iVar9] = iVar6;
						Global_43C1.f_15E7 = iVar6;
						iVar9++;
						if (Global_43C1.f_146A[iVar6])
						{
							iVar13++;
						}
						if (Global_43C1.f_15EC[iVar6] != 0f)
						{
							fVar68 = (fVar68 + Global_43C1.f_15EC[iVar6]);
						}
						else
						{
							fVar68 = (fVar68 + 0.034722f);
						}
					}
					if (!Global_43C1.f_15DE)
					{
						Global_43C1.f_14EB[iVar6] = 1;
						if (Global_43C1.f_13E9[iVar6])
						{
							if (bVar32)
							{
								Global_43C1.f_15E4 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_43C1.f_15E4 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_43C1.f_15DE)
			{
				Global_43C1.f_15E0 = ((fVar58 + fVar68) + (0.00277776f * IntToFloat(iVar12)));
				Global_43C1.f_15E3 = iVar11;
				Global_43C1.f_15E1 = iVar10;
				Global_43C1.f_15DE = 1;
			}
		}
		iVar5++;
	}
	if (!Global_43C1.f_15DF)
	{
		Global_43C1.f_15E2 = iVar9;
		Global_43C1.f_15DF = 1;
	}
	Global_43C1.f_166F = fVar49;
	Global_43C1.f_1671 = unk_0x105601648511CC64();
	unk_0xE7918A3D05166D98(Global_43C1.f_166F);
	if (!Global_43C1.f_1ED8)
	{
		func_76(0);
	}
	Global_43C1.f_1ED8 = 0;
	if (bParam2)
	{
		unk_0x4E0EC60D119222B1(10);
	}
	unk_0x4E0EC60D119222B1(6);
	unk_0x4E0EC60D119222B1(7);
	unk_0x4E0EC60D119222B1(9);
	unk_0x4E0EC60D119222B1(8);
	if (bParam0)
	{
		func_75(1);
	}
	unk_0x2A025E7CEBB76D14();
}

void func_75(int iParam0)//Position - 0x9EDC
{
	Global_14D262.f_437 = iParam0;
}

void func_76(int iParam0)//Position - 0x9EED
{
	if (!Global_389D.f_1 == 1)
	{
		if (func_80(0))
		{
			func_77(iParam0);
		}
		unk_0xF0059F27F7BB6680(&Global_93C, 2);
	}
}

void func_77(int iParam0)//Position - 0x9F16
{
	if (Global_3943)
	{
		func_79(0, 0);
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
	if (!func_78())
	{
		Global_389D.f_1 = 3;
	}
}

int func_78()//Position - 0x9F86
{
	if (Global_389D.f_1 == 1 || Global_389D.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_79(bool bParam0, bool bParam1)//Position - 0x9FAD
{
	if (bParam0)
	{
		if (func_80(0))
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

int func_80(int iParam0)//Position - 0xA021
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

float func_81(int iParam0)//Position - 0xA07B
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 47:
		case 46:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 50:
		case 43:
		case 44:
		case 45:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_82(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)//Position - 0xA0EA
{
	unk_0x8B371195127AACF2(sParam2);
	unk_0x3AE7CB4034BE212F(fParam3, iParam4);
	unk_0x3A8B9C7B1C825123(fParam0, fParam1, 0);
}

void func_83(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0xA109
{
	unk_0x8B371195127AACF2(sParam2);
	unk_0xAA5C5BF0489E5553(iParam3);
	unk_0x3A8B9C7B1C825123(fParam0, fParam1, iParam4);
}

bool func_84()//Position - 0xA127
{
	return unk_0x7B2F21BFE86AEB61(-1762644250);
}

void func_85(bool bParam0)//Position - 0xA138
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		unk_0xE45648BDBF3441F5(Global_43C1.f_1EF4[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		unk_0xE45648BDBF3441F5(Global_43C1.f_1EF4[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	unk_0xCC4FE6A016BA0765(iVar0, iVar1, iVar2, 255);
}

void func_86(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0xA17E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_87(Global_43C1.f_16F6[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					unk_0xE45648BDBF3441F5(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (bParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			unk_0xCC4FE6A016BA0765(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				unk_0xE45648BDBF3441F5(14, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0xCC4FE6A016BA0765(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				unk_0xE45648BDBF3441F5(12, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0xCC4FE6A016BA0765(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			unk_0xCC4FE6A016BA0765(155, 155, 155, 255);
		}
		else
		{
			unk_0xCC4FE6A016BA0765(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			unk_0xCC4FE6A016BA0765(0, 0, 0, SYSTEM::FLOOR((255f * 0.8f)));
		}
		else
		{
			unk_0xE45648BDBF3441F5(1, &iVar0, &iVar1, &iVar2, &iVar3);
			unk_0xCC4FE6A016BA0765(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		unk_0xCC4FE6A016BA0765(155, 155, 155, 255);
	}
	else
	{
		unk_0xCC4FE6A016BA0765(155, 155, 155, 255);
	}
	unk_0xB8F3C51875F7BEA3(0f, 0.35f);
	unk_0x567A3300A78B3D65(1);
	if (bParam5)
	{
		unk_0xB8F3C51875F7BEA3(0f, 0.425f);
		unk_0xC8793973D4960AC4(4);
	}
	else if (bParam6)
	{
		unk_0xB8F3C51875F7BEA3(0f, 0.425f);
		unk_0xC8793973D4960AC4(6);
	}
	else
	{
		unk_0xC8793973D4960AC4(0);
	}
	unk_0x666751E43D377EAA(0f, 1f);
	unk_0x8F62A12BC2768BE8(0);
	unk_0x08F1F5EC48E158AB(0, 0, 0, 0, 0);
	unk_0x1EC7F2EE7CC55F66(0, 0, 0, 0, 0);
}

void func_87(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0xA32C
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
		
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
		
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
		
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
		
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
		
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
		
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
		
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
		
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
		
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
		
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
		
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
		
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
		
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
		
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
		
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
		
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
		
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
		
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
		
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
		
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
		
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
		
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
		
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
		
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
		
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}
}

void func_88(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0xA5B6
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_73(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_109(bParam4, bParam8))
	{
		return;
	}
	if (func_94())
	{
		return;
	}
	if (unk_0xF32BA80A2DED1FC6())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_91(unk_0xB5CEFD608600A09F(), 0))
		{
			return;
		}
	}
	if (unk_0x8ACB0C3FACC09467())
	{
		if (unk_0x0F8865E539C1FCE8() == 0 || unk_0xF32BA80A2DED1FC6())
		{
			return;
		}
	}
	if (Global_43C1.f_121F != 0)
	{
		if (unk_0x8A0D8839261BAEEF(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_43C1.f_121F)
			{
				if (Global_43C1.f_1320[iVar1] != 358)
				{
					StringCopy(&(Global_43C1.f_1221[iVar1 /*16*/]), unk_0xE57EAD1FEA2A6FAF(2, Global_43C1.f_1320[iVar1], true), 64);
				}
				else if (Global_43C1.f_132D[iVar1] != 32)
				{
					StringCopy(&(Global_43C1.f_1221[iVar1 /*16*/]), unk_0xC7CF72D26EA6A227(2, Global_43C1.f_132D[iVar1], true), 64);
				}
				iVar1++;
			}
			Global_43C1.f_1220 = 0;
		}
		if (!Global_43C1.f_1220)
		{
			unk_0x29CD142125FE177B(Global_43C1.f_159A[iVar0 /*10*/], "CLEAR_ALL");
			unk_0xF9FBC2F3F73D94C9();
			unk_0x29CD142125FE177B(Global_43C1.f_159A[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0xD44E04EBBDC4CE88((1f - (Global_43C1.f_1357 / 100f)));
			unk_0xF9FBC2F3F73D94C9();
			if (unk_0x8ACB0C3FACC09467())
			{
				unk_0x29CD142125FE177B(Global_43C1.f_159A[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0x5E5DBD0A6623969E(true);
				unk_0xF9FBC2F3F73D94C9();
			}
			iVar1 = 0;
			while (iVar1 < Global_43C1.f_121F)
			{
				if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_12E2[iVar1 /*4*/])) != unk_0x56BEECB328B6D29D("PREV"))
				{
					unk_0x29CD142125FE177B(Global_43C1.f_159A[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0x1E1FB49121565EB6(iVar1);
					func_90(&(Global_43C1.f_1221[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0x56BEECB328B6D29D(&(Global_43C1.f_12E2[iVar2 /*4*/])) == unk_0x56BEECB328B6D29D("PREV"))
					{
						func_90(&(Global_43C1.f_1221[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_43C1.f_1313[iVar1] == -1)
					{
						func_89(&(Global_43C1.f_12E2[iVar1 /*4*/]));
					}
					else
					{
						unk_0x57016C44F10111F0(&(Global_43C1.f_12E2[iVar1 /*4*/]));
						if (bParam5)
						{
							unk_0x4C36886AAFD04CF8(iParam2, 70);
						}
						else
						{
							unk_0xAA5C5BF0489E5553(iParam2);
						}
						unk_0x64989E60CF560CA1();
					}
					if (unk_0x8ACB0C3FACC09467())
					{
						if (Global_43C1.f_1320[iVar1] != 358 && unk_0xFA30DFD0084E92FE(Global_43C1.f_133A, iVar1))
						{
							unk_0x5E5DBD0A6623969E(true);
							unk_0x1E1FB49121565EB6(Global_43C1.f_1320[iVar1]);
						}
						else
						{
							unk_0x5E5DBD0A6623969E(false);
							unk_0x1E1FB49121565EB6(358);
						}
					}
					unk_0xF9FBC2F3F73D94C9();
				}
				iVar1++;
			}
			if (unk_0x56BEECB328B6D29D(&(Global_41188A.f_10)) != unk_0x56BEECB328B6D29D(""))
			{
				unk_0x29CD142125FE177B(Global_43C1.f_159A[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0x1E1FB49121565EB6(Global_43C1.f_121F);
				func_90(&Global_41188A);
				if (Global_41188A.f_14 == -1)
				{
					func_89(&(Global_41188A.f_10));
				}
				else
				{
					unk_0x57016C44F10111F0(&(Global_41188A.f_10));
					if (bParam5)
					{
						unk_0x4C36886AAFD04CF8(iParam2, 70);
					}
					else
					{
						unk_0xAA5C5BF0489E5553(iParam2);
					}
					unk_0x64989E60CF560CA1();
				}
				unk_0xF9FBC2F3F73D94C9();
			}
			unk_0x29CD142125FE177B(Global_43C1.f_159A[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0x1E1FB49121565EB6(0);
			unk_0x1E1FB49121565EB6(0);
			unk_0x1E1FB49121565EB6(0);
			unk_0x1E1FB49121565EB6(80);
			unk_0xF9FBC2F3F73D94C9();
			unk_0x29CD142125FE177B(Global_43C1.f_159A[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_43C1.f_1358)
			{
				unk_0x1E1FB49121565EB6(1);
			}
			else
			{
				unk_0x1E1FB49121565EB6(0);
			}
			unk_0xF9FBC2F3F73D94C9();
			Global_43C1.f_1220 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_43C1.f_121F)
		{
			if (Global_43C1.f_1313[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					unk_0x29CD142125FE177B(Global_43C1.f_159A[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0x1E1FB49121565EB6(iVar1);
					unk_0x57016C44F10111F0(&(Global_43C1.f_12E2[iVar1 /*4*/]));
					if (bParam5)
					{
						unk_0x4C36886AAFD04CF8(iParam2, 70);
					}
					else
					{
						unk_0xAA5C5BF0489E5553(iParam2);
					}
					unk_0x64989E60CF560CA1();
					unk_0xF9FBC2F3F73D94C9();
				}
			}
			iVar1++;
		}
		if (Global_41188A.f_14 != -1)
		{
			if (iParam2 > 0)
			{
				unk_0x29CD142125FE177B(Global_43C1.f_159A[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0x1E1FB49121565EB6(iVar1);
				unk_0x57016C44F10111F0(&(Global_41188A.f_10));
				if (bParam5)
				{
					unk_0x4C36886AAFD04CF8(iParam2, 70);
				}
				else
				{
					unk_0xAA5C5BF0489E5553(iParam2);
				}
				unk_0x64989E60CF560CA1();
				unk_0xF9FBC2F3F73D94C9();
			}
		}
		unk_0xC2EAD30963BDAA47(76, 66);
		unk_0xF6A6FFB73848BF82(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_43C1.f_1EFB)
			{
				unk_0x6DB77F071B43C870(15, 0f, -0.0375f);
				Global_43C1.f_1EFB = 1;
			}
		}
		else if (Global_43C1.f_1EFB)
		{
			unk_0xC0404835F30391BB(15);
			Global_43C1.f_1EFB = 0;
		}
		unk_0x2A025E7CEBB76D14();
		if (Global_43C1.f_133D)
		{
			unk_0xC2EAD30963BDAA47(82, 66);
			unk_0xF6A6FFB73848BF82(0f, 0f, 0f, 0f);
			unk_0x65E432C782E7E702(Global_43C1.f_159A[iVar0 /*10*/], Global_43C1.f_133B, Global_43C1.f_133C, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0x2A025E7CEBB76D14();
		}
		else
		{
			unk_0x4B6031094354FED6(Global_43C1.f_159A[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_89(char* sParam0)//Position - 0xAA91
{
	unk_0x57016C44F10111F0(sParam0);
	unk_0x64989E60CF560CA1();
}

void func_90(char* sParam0)//Position - 0xAAA3
{
	unk_0xCB30200B8055CA57(sParam0);
}

bool func_91(int iParam0, int iParam1)//Position - 0xAAB1
{
	bool bVar0;
	
	if (iParam0 == unk_0xB5CEFD608600A09F())
	{
		bVar0 = func_92(-1, 0) == 8;
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

int func_92(int iParam0, bool bParam1)//Position - 0xAAFC
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_93();
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

int func_93()//Position - 0xAB3D
{
	return Global_1407E0;
}

int func_94()//Position - 0xAB49
{
	vector3 vVar0;
	
	if (Global_389D.f_1 > 3)
	{
		return 1;
	}
	if (func_95())
	{
		vVar0 = { 0f, -500f, 0f };
		unk_0x652515566BB40BA9(&vVar0);
		if (Global_3866 == 0)
		{
			if (vVar0.y > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (vVar0.y > -101f)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_95()//Position - 0xABB7
{
	if (unk_0xB731B8C5BCE89836(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_96(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0xABD1
{
	unk_0xE45648BDBF3441F5(1, iParam2, iParam3, iParam4, iParam5);
	*iParam5 = 255;
	switch (iParam0)
	{
		case 28:
			*iParam2 = 194;
			*iParam3 = 80;
			*iParam4 = 80;
			break;
		
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 47:
		case 46:
		case 42:
		case 36:
		case 37:
		case 50:
		case 39:
		case 40:
		case 38:
		case 43:
		case 44:
		case 45:
		case 49:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
		
		case 51:
			*iParam5 = 100;
			break;
	}
}

void func_97(float fParam0)//Position - 0xACA4
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xE45648BDBF3441F5(1, &iVar0, &iVar1, &iVar2, &iVar3);
	unk_0xC8793973D4960AC4(0);
	unk_0xB8F3C51875F7BEA3(0f, 0.35f);
	unk_0xB1B2D2C9D47D1278(2);
	unk_0xCC4FE6A016BA0765(iVar0, iVar1, iVar2, iVar3);
	unk_0x666751E43D377EAA(fParam0, ((Global_43BE + Global_43C0) - 0.0046875f));
	unk_0x8F62A12BC2768BE8(0);
	unk_0x08F1F5EC48E158AB(0, 0, 0, 0, 0);
	unk_0x1EC7F2EE7CC55F66(0, 0, 0, 0, 0);
}

void func_98(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0xAD03
{
	unk_0x8B371195127AACF2(sParam2);
	unk_0xAA5C5BF0489E5553(iParam3);
	unk_0xAA5C5BF0489E5553(iParam4);
	unk_0x3A8B9C7B1C825123(fParam0, fParam1, 0);
}

float func_99(char* sParam0, int iParam1, int iParam2)//Position - 0xAD26
{
	if (!unk_0xEAEFBBEC1AEA464B(sParam0))
	{
		if (unk_0x56BEECB328B6D29D(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_100();
	unk_0xE746379C2AF24EF6(sParam0);
	unk_0xAA5C5BF0489E5553(iParam1);
	unk_0xAA5C5BF0489E5553(iParam2);
	return unk_0x2207C0EA517B975D(1);
}

void func_100()//Position - 0xAD68
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xE45648BDBF3441F5(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_43C1.f_1EE2)
	{
		iVar0 = Global_43C1.f_1EDE;
		iVar1 = Global_43C1.f_1EDF;
		iVar2 = Global_43C1.f_1EE0;
		iVar3 = Global_43C1.f_1EE1;
	}
	unk_0xC8793973D4960AC4(0);
	unk_0xB8F3C51875F7BEA3(0f, 0.35f);
	unk_0xCC4FE6A016BA0765(iVar0, iVar1, iVar2, iVar3);
	unk_0x666751E43D377EAA((Global_43BE + 0.0046875f), ((Global_43BE + Global_43C0) - 0.0046875f));
	unk_0x8F62A12BC2768BE8(0);
	unk_0x08F1F5EC48E158AB(0, 0, 0, 0, 0);
	unk_0x1EC7F2EE7CC55F66(0, 0, 0, 0, 0);
}

void func_101(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0xADF2
{
	unk_0xF7EBEC3FF57AEC65((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

var func_102(int iParam0, bool bParam1)//Position - 0xAE21
{
	char* sVar0[2];
	var uVar1;
	struct<13> Var2;
	
	if (!unk_0xF1734B55490E9045(&(Global_43C1.f_1A3F[iParam0 /*16*/])))
	{
		if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_1A3F[iParam0 /*16*/])) == -1487683087)
		{
			Var2 = { func_104(unk_0xB5CEFD608600A09F()) };
			if (unk_0xB5AD4F878C27B0F4(&Var2, &uVar1))
			{
				return func_103(&uVar1);
			}
		}
		else
		{
			return func_103(&(Global_43C1.f_1A3F[iParam0 /*16*/]));
		}
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 48:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 49:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 51:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_103(var uParam0)//Position - 0xB271
{
	return uParam0;
}

struct<13> func_104(int iParam0)//Position - 0xB27B
{
	struct<13> Var0;
	
	unk_0xB7DBA2C6D2C3C41A(iParam0, &Var0, 13);
	return Var0;
}

char* func_105(int iParam0)//Position - 0xB292
{
	var uVar0;
	struct<13> Var1;
	
	if (!unk_0xF1734B55490E9045(&(Global_43C1.f_16FE[iParam0 /*16*/])))
	{
		if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_16FE[iParam0 /*16*/])) == -1487683087)
		{
			Var1 = { func_104(unk_0xB5CEFD608600A09F()) };
			unk_0xB5AD4F878C27B0F4(&Var1, &uVar0);
			return func_103(&uVar0);
		}
		else
		{
			return func_103(&(Global_43C1.f_16FE[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 48)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

int func_106()//Position - 0xB307
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	unk_0x1BBB0A5225346008(&iVar0, &iVar1);
	fVar2 = (SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(iVar1));
	if (fVar2 > 3.5f)
	{
		return 1;
	}
	return 0;
}

int func_107(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)//Position - 0xB339
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	
	StringCopy(&cVar0, func_105(iParam0), 64);
	StringCopy(&cVar1, func_102(iParam0, bParam1), 64);
	if (unk_0x56BEECB328B6D29D(&cVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			unk_0x1BBB0A5225346008(&iVar2, &iVar3);
			fVar5 = unk_0x3771EE4CB542D71E(0);
			if (func_106())
			{
				iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) * fVar5));
			}
			fVar6 = (SYSTEM::TO_FLOAT(iVar2) / SYSTEM::TO_FLOAT(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_106())
			{
				fVar4 = 1f;
			}
			if (unk_0xB731B8C5BCE89836(joaat("director_mode")) > 0)
			{
				unk_0x7A569F3885B2E08A(&iVar2, &iVar3);
			}
			iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar2) / fVar4));
			iVar3 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) / fVar4));
		}
		else
		{
			unk_0x7A569F3885B2E08A(&iVar2, &iVar3);
		}
		vVar7 = { unk_0x9893E000F1F078E7(&cVar0, &cVar1) };
		vVar7.x = (vVar7.x * (func_108(iParam0) / fVar4));
		vVar7.y = (vVar7.y * (func_108(iParam0) / fVar4));
		if (!bParam2)
		{
			vVar7.x = (vVar7.x - 2f);
			vVar7.y = (vVar7.y - 2f);
		}
		if (iParam0 == 30)
		{
			vVar7.x = 288f;
			vVar7.y = 106f;
		}
		if (iParam0 == 29 && unk_0x56BEECB328B6D29D(&(Global_43C1.f_1A3F[29 /*16*/])) == -1487683087)
		{
			vVar7.x = 106f;
			vVar7.y = 106f;
		}
		*fParam3 = ((vVar7.x / IntToFloat(iVar2)) * IntToFloat((iVar2 / iVar3)));
		*fParam4 = (((vVar7.y / IntToFloat(iVar3)) / (vVar7.x / IntToFloat(iVar2))) * *fParam3);
		if (!bParam5)
		{
			if (!unk_0x877E3741B282A35F() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_43C0)
			{
				*fParam4 = (*fParam4 * (Global_43C0 / *fParam3));
				*fParam3 = Global_43C0;
			}
		}
		return 1;
	}
	return 0;
}

float func_108(int iParam0)//Position - 0xB4EA
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 49:
			return 0.5f;
			break;
	}
	return 1f;
}

int func_109(bool bParam0, bool bParam1)//Position - 0xB589
{
	if (Global_252E21.f_760.f_2B0 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0x726D9204B160D23E() || (func_111(8, -1) && func_110() != 64)) || (unk_0x0352C1B6B66A87AC() != 0 && !bParam1)) || (unk_0x7930B3E9C919E90F() && !bParam0)) || unk_0x4F2BFB7C2A730EC7()) || Global_11646) || Global_43C1.f_1EFA) || unk_0x18158A50125911B6()) || Global_16B4F.f_569)
	{
		return 0;
	}
	return 1;
}

int func_110()//Position - 0xB626
{
	return Global_140815;
}

bool func_111(int iParam0, int iParam1)//Position - 0xB632
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

void func_112(int iParam0)//Position - 0xB66D
{
	if (iParam0 == -1)
	{
		return;
	}
	Global_110A8[iParam0] = 0;
	Global_110A8.f_45[iParam0] = 0;
}

void func_113(int iParam0, var uParam1, vector3 vParam2, float fParam3, int iParam4)//Position - 0xB692
{
	if (func_61(&(Global_110A8.f_22B[0 /*21*/]), iParam0))
	{
		if (unk_0xFA30DFD0084E92FE(Global_110A8.f_22B[0 /*21*/].f_9, 10))
		{
			func_115(iParam0);
			func_114(uParam1, &(Global_19B04.f_7F22.f_45[Global_110A8.f_22B[0 /*21*/].f_E /*78*/]));
			if (unk_0xFA30DFD0084E92FE(Global_110A8.f_22B[0 /*21*/].f_9, 11))
			{
				Global_19B04.f_7F22.f_748[Global_110A8.f_22B[0 /*21*/].f_E /*3*/] = { vParam2 };
				Global_19B04.f_7F22.f_78E[Global_110A8.f_22B[0 /*21*/].f_E] = fParam3;
			}
			else
			{
				Global_19B04.f_7F22.f_748[Global_110A8.f_22B[0 /*21*/].f_E /*3*/] = { 0f, 0f, 0f };
				Global_19B04.f_7F22.f_78E[Global_110A8.f_22B[0 /*21*/].f_E] = -1f;
			}
			Global_19B04.f_7F22.f_7A6[Global_110A8.f_22B[0 /*21*/].f_E] = iParam4 + 1;
			func_463(iParam0, 1);
		}
	}
}

void func_114(var uParam0, var uParam1)//Position - 0xB791
{
	uParam1->f_42 = uParam0->f_42;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_3B = { uParam0->f_3B };
	uParam1->f_3E = uParam0->f_3E;
	uParam1->f_3F = uParam0->f_3F;
	uParam1->f_40 = uParam0->f_40;
	uParam1->f_41 = uParam0->f_41;
	uParam1->f_4D = uParam0->f_4D;
	uParam1->f_43 = uParam0->f_43;
	uParam1->f_45 = uParam0->f_45;
	uParam1->f_44 = uParam0->f_44;
	uParam1->f_47 = uParam0->f_47;
	uParam1->f_48 = uParam0->f_48;
	uParam1->f_49 = uParam0->f_49;
	uParam1->f_4A = uParam0->f_4A;
	uParam1->f_4B = uParam0->f_4B;
	uParam1->f_4C = uParam0->f_4C;
}

void func_115(int iParam0)//Position - 0xB85D
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_61(&(Global_110A8.f_22B[0 /*21*/]), iParam0))
	{
		if (unk_0x724D816EA203A79E(Global_110A8.f_8B[iParam0]))
		{
			unk_0x77815D3407C6700D(Global_110A8.f_8B[iParam0], true, 1);
			unk_0x1E7A09C1710FB071(&(Global_110A8.f_8B[iParam0]));
			Global_110A8.f_8B[iParam0] = 0;
		}
		if (unk_0xFA30DFD0084E92FE(Global_110A8.f_22B[0 /*21*/].f_9, 13))
		{
			func_463(iParam0, 0);
		}
	}
}

int func_116(int iParam0)//Position - 0xB8D7
{
	switch (iParam0)
	{
		case joaat("marshall"):
			return 1;
			break;
	}
	return 0;
}

void func_117(int iParam0, char* sParam1, int iParam2)//Position - 0xB8F4
{
	char* sVar0;
	
	sVar0 = unk_0xE57EAD1FEA2A6FAF(2, iParam0, true);
	if (Global_43C1.f_121F >= 12)
	{
		StringCopy(&Global_41188A, sVar0, 64);
		StringCopy(&(Global_41188A.f_10), sParam1, 16);
		Global_41188A.f_14 = iParam2;
		return;
		return;
	}
	unk_0x7CB6FD92BE491AD9(&(Global_43C1.f_133A), Global_43C1.f_121F);
	StringCopy(&(Global_43C1.f_1221[Global_43C1.f_121F /*16*/]), sVar0, 64);
	StringCopy(&(Global_43C1.f_12E2[Global_43C1.f_121F /*4*/]), sParam1, 16);
	Global_43C1.f_1313[Global_43C1.f_121F] = iParam2;
	Global_43C1.f_1320[Global_43C1.f_121F] = iParam0;
	Global_43C1.f_132D[Global_43C1.f_121F] = 32;
	Global_43C1.f_121F++;
}

void func_118(int iParam0)//Position - 0xB9A3
{
	int iVar0;
	int iVar1;
	
	Global_43C1.f_121F = 0;
	Global_43C1.f_1220 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_43C1.f_12E2[iVar0 /*4*/]), "", 16);
		Global_43C1.f_1313[iVar0] = -1;
		Global_43C1.f_1320[iVar0] = 358;
		Global_43C1.f_132D[iVar0] = 32;
		iVar0++;
	}
	Global_43C1.f_133A = 0;
	StringCopy(&(Global_41188A.f_10), "", 16);
	Global_41188A.f_14 = -1;
	if (unk_0x8ACB0C3FACC09467())
	{
		if (!func_73(&iVar1, 0, iParam0))
		{
			return;
		}
		unk_0x29CD142125FE177B(Global_43C1.f_159A[iVar1 /*10*/], "TOGGLE_MOUSE_BUTTONS");
		unk_0x5E5DBD0A6623969E(false);
		unk_0xF9FBC2F3F73D94C9();
	}
}

void func_119(char* sParam0, int iParam1, int iParam2)//Position - 0xBA4B
{
	int iVar0;
	
	StringCopy(&(Global_43C1.f_11D2), sParam0, 16);
	Global_43C1.f_1218 = 0;
	Global_43C1.f_1219 = 0;
	Global_43C1.f_121A = 0;
	Global_43C1.f_121B = 0;
	Global_43C1.f_121C = iParam1;
	Global_43C1.f_121D = unk_0x105601648511CC64();
	Global_43C1.f_121E = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_43C1.f_11D6[iVar0] = 0;
		iVar0++;
	}
}

int func_120()//Position - 0xBAB0
{
	if (unk_0x50465D2C022B9E04(2))
	{
		if (Global_4118D6 > -1)
		{
			if (unk_0x093484B35A948BFC(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_121(int iParam0, int iParam1, bool bParam2)//Position - 0xBAD7
{
	if (!unk_0x50465D2C022B9E04(2))
	{
		return 0;
	}
	if (unk_0xE186ACC7BE9B244E() || unk_0x18158A50125911B6())
	{
		return 0;
	}
	if (bParam2)
	{
		unk_0x08009E53F6E7E15C();
	}
	if (Global_4118D6 == -6)
	{
		unk_0x5C26A2F0EACA52AB(4);
		if (iParam0 && unk_0x8FCEEB789599BD9B(2, 237))
		{
			return 1;
		}
		else
		{
			Global_4118D6 = -1;
			return 0;
		}
	}
	if (((Global_4118D6 > -1 || Global_4118D6 == -3) || Global_4118D6 == -2) || unk_0x1753B0F1C41FE93F())
	{
		unk_0x5C26A2F0EACA52AB(1);
		return 0;
	}
	if (Global_4118D6 == -1 && iParam0)
	{
		if (unk_0x8FCEEB789599BD9B(2, 237))
		{
			unk_0x5C26A2F0EACA52AB(4);
			Global_4118D6 = -6;
			return 1;
		}
		else
		{
			unk_0x5C26A2F0EACA52AB(3);
			return 0;
		}
	}
	unk_0x5C26A2F0EACA52AB(1);
	return 0;
}

void func_122(bool bParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0xBBB7
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	fVar6 = (0.034722f / 2f);
	iVar13 = -1;
	if (!unk_0x50465D2C022B9E04(2))
	{
		Global_4118D6 = -1;
		return;
	}
	unk_0xA561536D61421F90(1);
	fVar0 = Global_43BE;
	fVar2 = (fVar0 + Global_43C0);
	fVar3 = Global_43C1.f_15E0;
	fVar1 = (Global_43C1.f_15E0 - (IntToFloat(Global_43C1.f_15E2) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_43C1.f_15E2 < 1)
	{
		fVar1 = (Global_43C1.f_15E0 - 0.034722f);
	}
	unk_0xC2EAD30963BDAA47(76, 84);
	unk_0xF6A6FFB73848BF82(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	unk_0xC498840061F88232(fVar0, fVar1, &fVar0, &fVar1);
	unk_0xC498840061F88232(fVar2, fVar3, &fVar2, &fVar3);
	unk_0x2A025E7CEBB76D14();
	func_124();
	if (Global_4118D6 == -6)
	{
		return;
	}
	Global_4118D6 = -1;
	fVar7 = Global_4118D0;
	fVar8 = Global_4118D1;
	if (Global_43C1.f_15E3 > Global_43C1.f_15E2)
	{
		if (((Global_4118D0 >= fVar0 && Global_4118D0 <= fVar2) && Global_4118D1 >= fVar3) && Global_4118D1 < (fVar3 + fVar6))
		{
			Global_4118D6 = -2;
			if (bParam3)
			{
				func_123(0);
			}
			return;
		}
		if (((Global_4118D0 >= fVar0 && Global_4118D0 <= fVar2) && Global_4118D1 >= (fVar3 + fVar6)) && Global_4118D1 < (fVar3 + 0.034722f))
		{
			Global_4118D6 = -3;
			if (bParam3)
			{
				func_123(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		iVar13 = SYSTEM::FLOOR((fVar9 / 0.034722f));
		if (Global_43C1.f_15E3 == -1)
		{
			Global_4118D6 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_43C1.f_15E2);
		iVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				unk_0xC2EAD30963BDAA47(76, 84);
				unk_0xF6A6FFB73848BF82(-0.05f, -0.05f, 0f, 0f);
				func_101(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_43C0, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
				unk_0x2A025E7CEBB76D14();
			}
		}
		Global_4118D6 = Global_43C1.f_1D80[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_4118D6 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_4118D6 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_4118D6 = -4;
		return;
	}
	Global_4118D6 = -1;
}

void func_123(bool bParam0)//Position - 0xBE63
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = (0.034722f / 2f);
	if (bParam0)
	{
		iVar3 = 48;
	}
	else
	{
		iVar3 = 210;
	}
	fVar0 = Global_43BE;
	fVar1 = Global_43C1.f_15E0;
	unk_0xC2EAD30963BDAA47(76, 84);
	unk_0xF6A6FFB73848BF82(-0.05f, -0.05f, 0f, 0f);
	if (Global_4118D6 == -2)
	{
		func_101(fVar0, fVar1, Global_43C0, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_4118D6 == -3)
	{
		func_101(fVar0, (fVar1 + fVar2), Global_43C0, fVar2, 255, 255, 255, iVar3);
	}
	unk_0x2A025E7CEBB76D14();
}

void func_124()//Position - 0xBEEC
{
	Global_4118D2 = Global_4118D0;
	Global_4118D3 = Global_4118D1;
	Global_4118D0 = unk_0xBCEB785249D7E5BE(2, 239);
	Global_4118D1 = unk_0xBCEB785249D7E5BE(2, 240);
	Global_4118D4 = (Global_4118D0 - Global_4118D2);
	Global_4118D5 = (Global_4118D1 - Global_4118D3);
}

void func_125(int iParam0, bool bParam1, int iParam2)//Position - 0xBF34
{
	int iVar0;
	int iVar1;
	
	Global_43C1.f_15E6 = iParam0;
	Global_43C1.f_166D = iParam2;
	if (Global_43C1.f_15E6 < Global_43C1.f_15E5)
	{
		Global_43C1.f_15E5 = Global_43C1.f_15E6;
	}
	else if ((Global_43C1.f_15DF && Global_43C1.f_15E6 > Global_43C1.f_15E7) || (!Global_43C1.f_15DF && Global_43C1.f_15E6 >= (Global_43C1.f_15E5 + Global_43C1.f_13E7)))
	{
		iVar0 = Global_43C1.f_15E5;
		while (iVar0 <= Global_43C1.f_15E6)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_43C1.f_135F[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_43C1.f_13E7 && Global_43C1.f_15E5 < 128)
		{
			Global_43C1.f_15E5++;
			iVar1 = 0;
			iVar0 = Global_43C1.f_15E5;
			while (iVar0 <= Global_43C1.f_15E6)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_43C1.f_135F[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_43C1.f_15DE = 0;
	Global_43C1.f_15DF = 0;
	if (bParam1)
	{
		StringCopy(&(Global_43C1.f_11D2), "", 16);
		StringCopy(&(Global_41188A.f_15), "", 16);
	}
}

void func_126(char* sParam0, bool bParam1)//Position - 0xC085
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (Global_43C1.f_13E2 >= 256)
	{
		return;
	}
	if (Global_43C1.f_15EA >= 4)
	{
		return;
	}
	if (Global_43C1.f_15EB != 1)
	{
		return;
	}
	if (Global_43C1.f_15EA >= Global_43C1.f_15E8)
	{
		return;
	}
	StringCopy(&(Global_43C1.f_49[Global_43C1.f_13E2 /*6*/]), sParam0, 24);
	Global_43C1.f_13E2++;
	Global_43C1.f_84C[Global_43C1.f_15E9 /*5*/][Global_43C1.f_15EA] = 1;
	Global_43C1.f_15EA++;
	if (Global_43C1.f_15EA >= Global_43C1.f_15E8)
	{
		fVar0 = func_128();
		if (Global_43C1.f_1351[Global_43C1.f_13E1] && Global_43C1.f_15EA == Global_43C1.f_15E8)
		{
			func_107(26, 1, 0, &fVar1, &fVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_43C1.f_134A[(Global_43C1.f_13E1 - 1)])
		{
			Global_43C1.f_134A[(Global_43C1.f_13E1 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_43C1.f_15EA >= Global_43C1.f_15E8)
		{
			fVar3 = func_127();
			if (fVar3 > Global_43C1.f_15EC[Global_43C1.f_13E0])
			{
				Global_43C1.f_15EC[Global_43C1.f_13E0] = fVar3;
			}
		}
	}
}

float func_127()//Position - 0xC1C1
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	iVar0 = 0;
	while (iVar0 < Global_43C1.f_15EA)
	{
		if (Global_43C1.f_84C[Global_43C1.f_15E9 /*5*/][iVar0] == 4)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_43C1.f_1151[((Global_43C1.f_13E6 - iVar1) + iVar0)] != 0)
		{
			if (func_107(Global_43C1.f_1151[((Global_43C1.f_13E6 - iVar1) + iVar0)], 1, 0, &uVar3, &fVar4, 0))
			{
				if (fVar4 > fVar2)
				{
					fVar2 = fVar4;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > unk_0x60F548525BE58E47(0.35f, 0))
	{
		return fVar2;
	}
	return unk_0x60F548525BE58E47(0.35f, 0);
}

float func_128()//Position - 0xC274
{
	float fVar0;
	float fVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar7 = 0;
	while (iVar7 < Global_43C1.f_15EA)
	{
		if (Global_43C1.f_84C[Global_43C1.f_15E9 /*5*/][iVar7] == 1)
		{
		}
		else if (Global_43C1.f_84C[Global_43C1.f_15E9 /*5*/][iVar7] == 8)
		{
		}
		else if (Global_43C1.f_84C[Global_43C1.f_15E9 /*5*/][iVar7] == 2)
		{
			iVar3++;
		}
		else if (Global_43C1.f_84C[Global_43C1.f_15E9 /*5*/][iVar7] == 3)
		{
			iVar4++;
		}
		else if (Global_43C1.f_84C[Global_43C1.f_15E9 /*5*/][iVar7] == 4)
		{
			iVar5++;
		}
		else if (Global_43C1.f_84C[Global_43C1.f_15E9 /*5*/][iVar7] == 5)
		{
			iVar6++;
		}
		else if (Global_43C1.f_84C[Global_43C1.f_15E9 /*5*/][iVar7] == 6)
		{
			iVar6++;
		}
		else if (Global_43C1.f_84C[Global_43C1.f_15E9 /*5*/][iVar7] == 7)
		{
			iVar6++;
		}
		else if (Global_43C1.f_84C[Global_43C1.f_15E9 /*5*/][iVar7] == 9)
		{
			iVar6++;
		}
		iVar7++;
	}
	func_86(0, 1, 0, 0, 0, iVar6 > 0, 0);
	if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[Global_43C1.f_15E9 /*6*/])) != 0)
	{
		unk_0xE746379C2AF24EF6(&(Global_43C1.f_49[Global_43C1.f_15E9 /*6*/]));
	}
	iVar7 = 0;
	while (iVar7 < Global_43C1.f_15EA)
	{
		if (Global_43C1.f_84C[Global_43C1.f_15E9 /*5*/][iVar7] == 1)
		{
			iVar8++;
			if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[Global_43C1.f_15E9 /*6*/])) != 0)
			{
				unk_0xC9C304D0AABE1335(&(Global_43C1.f_49[(Global_43C1.f_15E9 + iVar8) /*6*/]));
			}
		}
		else if (Global_43C1.f_84C[Global_43C1.f_15E9 /*5*/][iVar7] == 8)
		{
			iVar8++;
			if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[Global_43C1.f_15E9 /*6*/])) != 0)
			{
				unk_0xC9C304D0AABE1335(&(Global_43C1.f_49[(Global_43C1.f_15E9 + iVar8) /*6*/]));
			}
		}
		else if (Global_43C1.f_84C[Global_43C1.f_15E9 /*5*/][iVar7] == 2)
		{
			if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[Global_43C1.f_15E9 /*6*/])) != 0)
			{
				unk_0xAA5C5BF0489E5553(Global_43C1.f_F4E[((Global_43C1.f_13E4 - iVar3) + iVar9)]);
			}
			iVar9++;
		}
		else if (Global_43C1.f_84C[Global_43C1.f_15E9 /*5*/][iVar7] == 3)
		{
			if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[Global_43C1.f_15E9 /*6*/])) != 0)
			{
				unk_0x3AE7CB4034BE212F(Global_43C1.f_104F[((Global_43C1.f_13E5 - iVar4) + iVar10)], Global_43C1.f_10D0[((Global_43C1.f_13E5 - iVar4) + iVar10)]);
			}
			iVar10++;
		}
		else if (Global_43C1.f_84C[Global_43C1.f_15E9 /*5*/][iVar7] == 5)
		{
			if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[Global_43C1.f_15E9 /*6*/])) != 0)
			{
				unk_0x607C19B90D297FE2(&(Global_25827C[((Global_43C1.f_13E3 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_43C1.f_84C[Global_43C1.f_15E9 /*5*/][iVar7] == 6)
		{
			if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[Global_43C1.f_15E9 /*6*/])) != 0)
			{
				unk_0xC9C304D0AABE1335(&(Global_25827C[((Global_43C1.f_13E3 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_43C1.f_84C[Global_43C1.f_15E9 /*5*/][iVar7] == 7)
		{
			if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[Global_43C1.f_15E9 /*6*/])) != 0)
			{
				unk_0x607C19B90D297FE2(&(Global_25827C[((Global_43C1.f_13E3 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_43C1.f_84C[Global_43C1.f_15E9 /*5*/][iVar7] == 9)
		{
			if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[Global_43C1.f_15E9 /*6*/])) != 0)
			{
				unk_0x607C19B90D297FE2(&(Global_25827C[((Global_43C1.f_13E3 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		iVar7++;
	}
	if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_49[Global_43C1.f_15E9 /*6*/])) != 0)
	{
		fVar0 = unk_0x2207C0EA517B975D(1);
	}
	iVar7 = 0;
	while (iVar7 < iVar5)
	{
		if (Global_43C1.f_1151[((Global_43C1.f_13E6 - iVar5) + iVar7)] != 0)
		{
			func_107(Global_43C1.f_1151[((Global_43C1.f_13E6 - iVar5) + iVar7)], 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + fVar1);
		}
		iVar7++;
	}
	return fVar0;
}

char* func_129(int iParam0)//Position - 0xC6BB
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return "";
	}
	if (iParam0 == 8)
	{
		return "";
	}
	iVar0 = func_130(iParam0, -1);
	if (iVar0 == 0)
	{
		return "";
	}
	switch (iParam0)
	{
		case 31:
			return "SUBMERSIBLE";
		
		case 68:
			return "SANCHEZ";
		
		case 105:
			return "REBEL";
		
		case 107:
			return "SANCHEZ2";
		
		case 117:
			return "COQUETTE_TLESS";
		
		case 118:
			return "BANSHEE_TLESS";
		
		case 119:
			return "STINGER_TLESS";
		
		case 120:
			return "VOLTIC_HTOP";
		
		case 154:
			return "BLAZER3";
		
		case 155:
			return "REBEL2";
		
		case 158:
			return "BUFFALO2";
		
		case 159:
			return "TAILGATER";
		
		case 166:
			return "COQUETTE2_TLESS";
		
		case 170:
			return "KALAHARI_TLESS";
		
		case 171:
			return "BOXVILLE4";
		
		case 173:
			return "DINGHY3";
		
		case 183:
			return "MULE3";
		
		case 191:
			return "LANDSTALKER";
		
		case 192:
			return "MESA3";
		
		case 194:
			return "ORACLE1";
		
		case 196:
			return "SCHAFTER2";
		
		case 207:
			return "DOMINATOR2";
		
		case 245:
			return "BIG_YACHT";
		
		case 254:
			return "CARGOBOB2";
		
		case 323:
			return "BIG_TRUCK";
		
		case 324:
			return "BALLISTIC";
		
		case 357:
			return "BIG_PLANE";
		
		case 402:
			return "HACKER_TRUCK";
		
		default:
	}
	return unk_0xD8D56586882095EE(iVar0);
}

int func_130(int iParam0, int iParam1)//Position - 0xC86A
{
	switch (iParam0)
	{
		case 0:
			return joaat("ztype");
		
		case 1:
			return joaat("stinger");
		
		case 2:
			return joaat("jb700");
		
		case 3:
			return joaat("cheetah");
		
		case 4:
			return joaat("entityxf");
		
		case 5:
			return joaat("adder");
		
		case 6:
			return joaat("monroe");
		
		case 7:
			return joaat("cogcabrio");
		
		case 10:
			return joaat("shamal");
		
		case 11:
			return joaat("stunt");
		
		case 12:
			return joaat("cuban800");
		
		case 13:
			return joaat("duster");
		
		case 14:
			return joaat("luxor");
		
		case 15:
			return joaat("frogger");
		
		case 16:
			return joaat("maverick");
		
		case 17:
			return joaat("rhino");
		
		case 18:
			return joaat("titan");
		
		case 19:
			return joaat("cargobob");
		
		case 20:
			return joaat("buzzard");
		
		case 21:
			return joaat("crusader");
		
		case 22:
			return joaat("barracks");
		
		case 24:
			return joaat("marquis");
		
		case 25:
			return joaat("jetmax");
		
		case 27:
			return joaat("squalo");
		
		case 29:
			return joaat("tropic");
		
		case 30:
			return joaat("seashark");
		
		case 31:
			return joaat("submersible");
		
		case 32:
			return joaat("suntrap");
		
		case 258:
			return joaat("tug");
		
		case 33:
			return joaat("bmx");
		
		case 34:
			return joaat("scorcher");
		
		case 35:
			return joaat("tribike");
		
		case 36:
			return joaat("tribike2");
		
		case 37:
			return joaat("tribike3");
		
		case 38:
			return joaat("cruiser");
		
		case 39:
			return joaat("schwarzer");
		
		case 40:
			return joaat("zion");
		
		case 41:
			return joaat("gauntlet");
		
		case 42:
			return joaat("vigero");
		
		case 43:
			return joaat("issi2");
		
		case 44:
			return joaat("infernus");
		
		case 45:
			return joaat("surano");
		
		case 46:
			return joaat("vacca");
		
		case 47:
			return joaat("ninef");
		
		case 48:
			return joaat("comet2");
		
		case 49:
			return joaat("banshee");
		
		case 50:
			return joaat("feltzer2");
		
		case 51:
			return joaat("bfinjection");
		
		case 52:
			return joaat("sandking");
		
		case 53:
			return joaat("fugitive");
		
		case 54:
			return joaat("dilettante");
		
		case 55:
			return joaat("superd");
		
		case 56:
			return joaat("exemplar");
		
		case 57:
			return joaat("baller2");
		
		case 58:
			return joaat("cavalcade");
		
		case 59:
			return joaat("rocoto");
		
		case 60:
			return joaat("felon");
		
		case 61:
			return joaat("oracle2");
		
		case 62:
			return joaat("bati");
		
		case 63:
			return joaat("akuma");
		
		case 64:
			return joaat("ruffian");
		
		case 65:
			return joaat("vader");
		
		case 66:
			return joaat("blazer");
		
		case 67:
			return joaat("pcj");
		
		case 68:
			return joaat("sanchez");
		
		case 69:
			return joaat("faggio2");
		
		case 70:
			return joaat("bullet");
		
		case 71:
			return joaat("carbonizzare");
		
		case 72:
			return joaat("coquette");
		
		case 73:
			return joaat("ninef2");
		
		case 74:
			return joaat("rapidgt");
		
		case 75:
			return joaat("rapidgt2");
		
		case 76:
			return joaat("stingergt");
		
		case 77:
			return joaat("voltic");
		
		case 78:
			return joaat("annihilator");
		
		case 79:
			return joaat("mammatus");
		
		case 80:
			return joaat("velum");
		
		case 81:
			return joaat("dump");
		
		case 82:
			return joaat("airbus");
		
		case 83:
			return joaat("bus");
		
		case 84:
			return joaat("coach");
		
		case 85:
			return joaat("journey");
		
		case 86:
			return joaat("mule");
		
		case 87:
			return joaat("rentalbus");
		
		case 88:
			return joaat("stretch");
		
		case 89:
			return joaat("bison");
		
		case 90:
			return joaat("double");
		
		case 91:
			return joaat("felon2");
		
		case 92:
			return joaat("hexer");
		
		case 93:
			return joaat("zion2");
		
		case 94:
			return joaat("bati2");
		
		case 95:
			return joaat("elegy2");
		
		case 96:
			return joaat("khamelion");
		
		case 97:
			return joaat("hotknife");
		
		case 98:
			return joaat("carbonrs");
		
		default:
	}
	switch (iParam0)
	{
		case 99:
			return joaat("bifta");
		
		case 100:
			return joaat("kalahari");
		
		case 101:
			return joaat("paradise");
		
		case 102:
			return joaat("speeder");
		
		case 103:
			return joaat("bodhi2");
		
		case 104:
			return joaat("dune");
		
		case 105:
			return joaat("rebel");
		
		case 106:
			return joaat("sadler");
		
		case 107:
			return joaat("sanchez2");
		
		case 108:
			return joaat("sandking2");
		
		case 109:
			return joaat("btype");
		
		case 111:
			return joaat("jester");
		
		case 114:
			return joaat("massacro");
		
		case 112:
			return joaat("turismor");
		
		case 115:
			return joaat("zentorno");
		
		case 116:
			return joaat("huntley");
		
		case 110:
			return joaat("alpha");
		
		case 113:
			return joaat("vestra");
		
		case 117:
			return joaat("coquette");
		
		case 118:
			return joaat("banshee");
		
		case 119:
			return joaat("stinger");
		
		case 120:
			return joaat("voltic");
		
		case 121:
			return joaat("thrust");
		
		case 128:
			return joaat("asea");
		
		case 129:
			return joaat("asterope");
		
		case 130:
			return joaat("bobcatxl");
		
		case 131:
			return joaat("cavalcade2");
		
		case 132:
			return joaat("granger");
		
		case 133:
			return joaat("ingot");
		
		case 134:
			return joaat("intruder");
		
		case 135:
			return joaat("minivan");
		
		case 136:
			return joaat("premier");
		
		case 137:
			return joaat("radi");
		
		case 138:
			return joaat("rancherxl");
		
		case 139:
			return joaat("ratloader");
		
		case 140:
			return joaat("stanier");
		
		case 141:
			return joaat("stratum");
		
		case 142:
			return joaat("washington");
		
		case 122:
			return joaat("dominator");
		
		case 123:
			return joaat("f620");
		
		case 124:
			return joaat("fusilade");
		
		case 125:
			return joaat("penumbra");
		
		case 126:
			return joaat("sentinel");
		
		case 127:
			return joaat("sentinel2");
		
		default:
	}
	switch (iParam0)
	{
		case 143:
			return joaat("blade");
		
		case 144:
			return joaat("warrener");
		
		case 145:
			return joaat("glendale");
		
		case 146:
			return joaat("rhapsody");
		
		case 147:
			return joaat("panto");
		
		case 148:
			return joaat("dubsta3");
		
		case 149:
			return joaat("pigalle");
		
		case 150:
			return joaat("picador");
		
		case 151:
			return joaat("regina");
		
		case 152:
			return joaat("surfer");
		
		case 153:
			return joaat("youga");
		
		case 154:
			return joaat("blazer3");
		
		case 155:
			return joaat("rebel2");
		
		case 156:
			return joaat("primo");
		
		case 157:
			return joaat("buffalo");
		
		case 158:
			return joaat("buffalo2");
		
		case 159:
			return joaat("tailgater");
		
		case 160:
			return joaat("monster");
		
		case 161:
			return joaat("sovereign");
		
		case 162:
			return joaat("miljet");
		
		case 163:
			return joaat("besra");
		
		case 164:
			return joaat("swift");
		
		case 165:
			return joaat("coquette2");
		
		case 166:
			return joaat("coquette2");
		
		case 167:
			return joaat("innovation");
		
		case 168:
			return joaat("hakuchou");
		
		case 169:
			return joaat("furoregt");
		
		case 170:
			return joaat("kalahari");
		
		case 187:
			return joaat("valkyrie");
		
		case 177:
			return joaat("hydra");
		
		case 185:
			return joaat("savage");
		
		case 174:
			return joaat("enduro");
		
		case 171:
			return joaat("boxville4");
		
		case 172:
			return joaat("casco");
		
		case 173:
			return joaat("dinghy3");
		
		case 175:
			return joaat("gburrito2");
		
		case 176:
			return joaat("guardian");
		
		case 178:
			return joaat("insurgent");
		
		case 179:
			return joaat("insurgent2");
		
		case 183:
			return joaat("mule3");
		
		case 180:
			return joaat("kuruma");
		
		case 181:
			return joaat("kuruma2");
		
		case 182:
			return joaat("lectro");
		
		case 184:
			return joaat("pbus");
		
		case 186:
			return joaat("technical");
		
		case 188:
			return joaat("velum2");
		
		case 189:
			return joaat("gresley");
		
		case 190:
			return joaat("jackal");
		
		case 191:
			return joaat("landstalker");
		
		case 192:
			return joaat("mesa3");
		
		case 193:
			return joaat("nemesis");
		
		case 194:
			return joaat("oracle");
		
		case 195:
			return joaat("rumpo");
		
		case 196:
			return joaat("schafter2");
		
		case 197:
			return joaat("seminole");
		
		case 198:
			return joaat("surge");
		
		case 199:
			return joaat("dodo");
		
		case 200:
			return joaat("marshall");
		
		case 201:
			return joaat("submersible2");
		
		case 202:
			return joaat("blista2");
		
		case 203:
			return joaat("stalion");
		
		case 204:
			return joaat("dukes");
		
		case 205:
			return joaat("dukes2");
		
		case 206:
			return joaat("stalion2");
		
		case 207:
			return joaat("dominator2");
		
		case 208:
			return joaat("gauntlet2");
		
		case 209:
			return joaat("buffalo3");
		
		case 210:
			return joaat("slamvan");
		
		case 211:
			return joaat("ratloader2");
		
		case 212:
			return joaat("jester2");
		
		case 213:
			return joaat("massacro2");
		
		case 214:
			return joaat("feltzer3");
		
		case 215:
			return joaat("luxor2");
		
		case 216:
			return joaat("osiris");
		
		case 217:
			return joaat("swift2");
		
		case 218:
			return joaat("virgo");
		
		case 219:
			return joaat("windsor");
		
		case 220:
			return joaat("brawler");
		
		case 221:
			return joaat("chino");
		
		case 222:
			return joaat("coquette3");
		
		case 223:
			return joaat("t20");
		
		case 224:
			return joaat("toro");
		
		case 225:
			return joaat("vindicator");
		
		case 229:
			return joaat("primo");
		
		case 228:
			return joaat("moonbeam");
		
		case 227:
			return joaat("faction");
		
		case 226:
			return joaat("buccaneer");
		
		case 230:
			return joaat("voodoo2");
		
		case 263:
			if (iParam1 == 0)
			{
				return joaat("xls");
			}
			else if (iParam1 == 1)
			{
				return joaat("xls2");
			}
			else
			{
				return joaat("xls");
			}
			break;
		
		case 264:
			return joaat("seven70");
		
		case 259:
			return joaat("windsor2");
		
		case 260:
			return joaat("prototipo");
		
		case 261:
			return joaat("fmj");
		
		case 262:
			return joaat("bestiagts");
		
		case 265:
			return joaat("pfister811");
		
		case 266:
			return joaat("reaper");
		
		case 231:
			return joaat("btype2");
		
		case 232:
			return joaat("lurcher");
		
		case 233:
			if (iParam1 == 0)
			{
				return joaat("baller3");
			}
			else if (iParam1 == 1)
			{
				return joaat("baller5");
			}
			else
			{
				return joaat("baller3");
			}
			break;
		
		case 234:
			if (iParam1 == 0)
			{
				return joaat("baller4");
			}
			else if (iParam1 == 1)
			{
				return joaat("baller6");
			}
			else
			{
				return joaat("baller4");
			}
			break;
		
		case 235:
			if (iParam1 == 0)
			{
				return joaat("cog55");
			}
			else if (iParam1 == 1)
			{
				return joaat("cog552");
			}
			else
			{
				return joaat("cog55");
			}
			break;
		
		case 236:
			if (iParam1 == 0)
			{
				return joaat("cognoscenti");
			}
			else if (iParam1 == 1)
			{
				return joaat("cognoscenti2");
			}
			else
			{
				return joaat("cognoscenti");
			}
			break;
		
		case 237:
			return joaat("limo2");
		
		case 238:
			return joaat("mamba");
		
		case 239:
			return joaat("nightshade");
		
		case 240:
			if (iParam1 == 0)
			{
				return joaat("schafter3");
			}
			else if (iParam1 == 1)
			{
				return joaat("schafter5");
			}
			else
			{
				return joaat("schafter3");
			}
			break;
		
		case 241:
			if (iParam1 == 0)
			{
				return joaat("schafter4");
			}
			else if (iParam1 == 1)
			{
				return joaat("schafter6");
			}
			else
			{
				return joaat("schafter4");
			}
			break;
		
		case 242:
			return joaat("verlierer2");
		
		case 243:
			return joaat("supervolito");
		
		case 244:
			return joaat("supervolito2");
		
		case 245:
			return Global_10AA3;
		
		case 251:
			return joaat("virgo3");
		
		case 250:
			return joaat("tornado");
		
		case 249:
			return joaat("sabregt");
		
		case 252:
			return joaat("faction");
		
		case 246:
			return joaat("tampa");
		
		case 247:
			return joaat("sultan");
		
		case 49:
			return joaat("banshee");
		
		case 248:
			return joaat("btype3");
		
		case 253:
			return joaat("volatus");
		
		case 254:
			return joaat("cargobob2");
		
		case 255:
			return joaat("rumpo3");
		
		case 256:
			return joaat("brickade");
		
		case 257:
			return joaat("nimbus");
		
		case 267:
			return joaat("le7b");
		
		case 268:
			return joaat("omnis");
		
		case 269:
			return joaat("tropos");
		
		case 270:
			return joaat("brioso");
		
		case 271:
			return joaat("trophytruck");
		
		case 272:
			return joaat("trophytruck2");
		
		case 273:
			return joaat("contender");
		
		case 274:
			return joaat("cliffhanger");
		
		case 275:
			return joaat("bf400");
		
		case 279:
			return joaat("tyrus");
		
		case 280:
			return joaat("lynx");
		
		case 281:
			return joaat("sheava");
		
		case 276:
			return joaat("rallytruck");
		
		case 277:
			return joaat("tampa2");
		
		case 278:
			return joaat("gargoyle");
		
		case 282:
			return joaat("bagger");
		
		case 283:
			return joaat("esskey");
		
		case 284:
			return joaat("nightblade");
		
		case 285:
			return joaat("defiler");
		
		case 286:
			return joaat("avarus");
		
		case 287:
			return joaat("zombiea");
		
		case 288:
			return joaat("zombieb");
		
		case 289:
			return joaat("chimera");
		
		case 290:
			return joaat("daemon2");
		
		case 291:
			return joaat("ratbike");
		
		case 292:
			return joaat("shotaro");
		
		case 293:
			return joaat("raptor");
		
		case 294:
			return joaat("hakuchou2");
		
		case 296:
			return joaat("blazer4");
		
		case 297:
			return joaat("sanctus");
		
		case 295:
			return joaat("vortex");
		
		case 298:
			return joaat("manchez");
		
		case 299:
			return joaat("tornado6");
		
		case 300:
			return joaat("youga2");
		
		case 301:
			return joaat("wolfsbane");
		
		case 302:
			return joaat("faggio3");
		
		case 303:
			return joaat("faggio");
		
		case 304:
			return joaat("dune5");
		
		case 305:
			return joaat("phantom2");
		
		case 306:
			return joaat("technical2");
		
		case 307:
			return joaat("blazer5");
		
		case 308:
			return joaat("boxville5");
		
		case 309:
			return joaat("wastelander");
		
		case 310:
			return joaat("ruiner2");
		
		case 311:
			return joaat("voltic2");
		
		case 312:
			return joaat("penetrator");
		
		case 313:
			return joaat("tempesta");
		
		case 314:
			return joaat("italigtb");
		
		case 315:
			return joaat("nero");
		
		case 316:
			return joaat("diablous");
		
		case 317:
			return joaat("fcr");
		
		case 318:
			return joaat("specter");
		
		case 319:
			return 1234311532;
		
		case 320:
			return -1405937764;
		
		case 321:
			return 719660200;
		
		case 322:
			return -982130927;
	}
	switch (iParam0)
	{
		case 323:
			return Global_10AA4;
		
		case 324:
			return Global_10AA5;
		
		case 325:
			return 223240013;
		
		case 326:
			return 1504306544;
		
		case 327:
			return 1939284556;
		
		case 328:
			return 917809321;
		
		case 329:
			return 562680400;
		
		case 330:
			return 1897744184;
		
		case 331:
			return -32236122;
		
		case 332:
			return 884483972;
		
		case 333:
			return -1210451983;
		
		case 334:
			return -1881846085;
		
		case 335:
			return 159274291;
		
		case 336:
			return 433954513;
		
		case 337:
			return joaat("lazer");
		
		case 338:
			return -1763555241;
		
		case 339:
			return -749299473;
		
		case 340:
			return -975345305;
		
		case 341:
			return -1700874274;
		
		case 342:
			return -392675425;
		
		case 343:
			return 1043222410;
		
		case 344:
			return -1386191424;
		
		case 345:
			return 1565978651;
		
		case 346:
			return 1036591958;
		
		case 347:
			return -32878452;
		
		case 348:
			return -42959138;
		
		case 349:
			return -1984275979;
		
		case 350:
			return -1007528109;
		
		case 351:
			return -1523619738;
		
		case 352:
			return 1392481335;
		
		case 353:
			return -998177792;
		
		case 354:
			return 1841130506;
		
		case 355:
			return 2049897956;
		
		case 356:
			return -1242608589;
		
		case 357:
			return Global_10AA6;
		
		case 358:
			return 1483171323;
		
		case 359:
			return 886810209;
		
		case 360:
			return -1693015116;
		
		case 361:
			return -692292317;
		
		case 362:
			return -1435527158;
		
		case 363:
			return 1181327175;
		
		case 364:
			return 1489874736;
		
		case 365:
			return -212993243;
		
		case 366:
			return 447548909;
		
		case 367:
			return 1561920505;
		
		case 368:
			return -1848994066;
		
		case 369:
			return 1741861769;
		
		case 370:
			return 1104234922;
		
		case 371:
			return 1871995513;
		
		case 372:
			return 1352136073;
		
		case 373:
			return -313185164;
		
		case 374:
			return -2079788230;
		
		case 375:
			return 600450546;
		
		case 376:
			return -410205223;
		
		case 377:
			return 867799010;
		
		case 378:
			return -1529242755;
		
		case 379:
			return 903794909;
		
		case 380:
			return -1532697517;
		
		case 381:
			return 15219735;
		
		case 382:
			return 661493923;
		
		case 383:
			return 838982985;
		
		case 384:
			return -391595372;
		
		case 385:
			return -121446169;
		
		case 386:
			return 1909189272;
		
		case 387:
			return 1617472902;
		
		case 388:
			return -1267543371;
		
		case 389:
			return 931280609;
		
		case 390:
			return 1046206681;
		
		case 391:
			return -1259134696;
		
		case 392:
			return 1115909093;
		
		case 393:
			return 1031562256;
		
		case 394:
			return -376434238;
		
		case 395:
			return -986944621;
		
		case 396:
			return -1134706562;
		
		case 397:
			return -2120700196;
		
		case 398:
			return -214906006;
		
		case 399:
			return -988501280;
		
		case 400:
			return 1254014755;
		
		case 401:
			return -726768679;
		
		case 402:
			return Global_10AA7;
		
		case 403:
			return 1945374990;
		
		case 404:
			return 1653666139;
		
		case 405:
			return 500482303;
		
		case 406:
			return 2044532910;
		
		case 407:
			return -638562243;
		
		case 408:
			return 1692272545;
		
		case 409:
			return 2069146067;
		
		case 410:
			return -420911112;
		
		case 411:
			return 321186144;
		
		case 412:
			return -54332285;
		
		case 415:
			return joaat("futo");
		
		case 416:
			return joaat("ruiner");
		
		case 417:
			return joaat("romero");
		
		case 418:
			return joaat("prairie");
		
		case 419:
			return joaat("baller");
		
		case 420:
			return joaat("serrano");
		
		case 421:
			return joaat("bjxl");
		
		case 422:
			return joaat("habanero");
		
		case 423:
			return joaat("fq2");
		
		case 424:
			return joaat("patriot");
		
		case 413:
			return -307958377;
		
		case 414:
			return 345756458;
		
		default:
	}
	return 0;
}

void func_131(int iParam0, int iParam1, bool bParam2)//Position - 0xE08F
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	if (Global_43C1.f_13E0 > iParam0)
	{
		return;
	}
	if (Global_43C1.f_13E0 >= 128)
	{
		return;
	}
	if (Global_43C1.f_13E6 >= 128)
	{
		return;
	}
	if (Global_43C1.f_15EA < Global_43C1.f_15E8)
	{
		return;
	}
	if (Global_43C1.f_13E0 != iParam0)
	{
		Global_43C1.f_13E0 = iParam0;
		Global_43C1.f_13E1 = 0;
	}
	iVar0 = Global_43C1.f_133E[Global_43C1.f_13E1];
	if (iVar0 != 4)
	{
		while (Global_43C1.f_13E1 < 4 && iVar0 != 4)
		{
			Global_43C1.f_13E1++;
			iVar0 = Global_43C1.f_133E[Global_43C1.f_13E1];
		}
		if (iVar0 != 4)
		{
			return;
		}
	}
	Global_43C1.f_1151[Global_43C1.f_13E6] = iParam1;
	Global_43C1.f_13E6++;
	if (iParam1 != 0)
	{
		func_107(iParam1, 1, 0, &fVar1, &fVar2, 0);
		if (Global_43C1.f_1351[Global_43C1.f_13E1])
		{
			func_107(26, 1, 0, &fVar3, &fVar4, 0);
			fVar1 = (fVar1 + (fVar3 * 2f));
		}
		if (fVar1 > Global_43C1.f_134A[Global_43C1.f_13E1])
		{
			Global_43C1.f_134A[Global_43C1.f_13E1] = fVar1;
		}
		if (bParam2)
		{
			if (fVar2 > Global_43C1.f_15EC[iParam0])
			{
				Global_43C1.f_15EC[iParam0] = fVar2;
			}
		}
	}
	unk_0xF0059F27F7BB6680(&(Global_43C1.f_135F[iParam0]), Global_43C1.f_13E1);
	Global_43C1.f_13E1++;
	Global_43C1.f_15EB = 4;
}

void func_132(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)//Position - 0xE209
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_43C1.f_13E0 > iParam0)
	{
		return;
	}
	if (Global_43C1.f_13E0 >= 128)
	{
		return;
	}
	if (Global_43C1.f_13E2 >= 256)
	{
		return;
	}
	if (Global_43C1.f_15EA < Global_43C1.f_15E8)
	{
		return;
	}
	if (Global_43C1.f_13E0 != iParam0)
	{
		Global_43C1.f_13E0 = iParam0;
		Global_43C1.f_13E1 = 0;
	}
	iVar0 = Global_43C1.f_133E[Global_43C1.f_13E1];
	if (iVar0 != 1)
	{
		while (Global_43C1.f_13E1 < 4 && iVar0 != 1)
		{
			Global_43C1.f_13E1++;
			iVar0 = Global_43C1.f_133E[Global_43C1.f_13E1];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_43C1.f_49[Global_43C1.f_13E2 /*6*/]), sParam1, 24);
	if (!unk_0xF1734B55490E9045(sParam1) && !unk_0x0F6F4C227FB5DD52(sParam1))
	{
	}
	Global_43C1.f_64A[Global_43C1.f_13E2] = bParam3;
	Global_43C1.f_74B[Global_43C1.f_13E2] = iParam4;
	Global_43C1.f_13E2++;
	if (!bParam3)
	{
		func_135(Global_43C1.f_13E0, 1);
	}
	else
	{
		func_135(Global_43C1.f_13E0, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_134(&(Global_43C1.f_49[Global_43C1.f_13E2 /*6*/]));
		if (Global_43C1.f_1351[Global_43C1.f_13E1])
		{
			func_107(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_43C1.f_134A[Global_43C1.f_13E1])
		{
			Global_43C1.f_134A[Global_43C1.f_13E1] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_133(&(Global_43C1.f_49[Global_43C1.f_13E2 /*6*/]));
			if (fVar4 > Global_43C1.f_15EC[iParam0])
			{
				Global_43C1.f_15EC[iParam0] = fVar4;
			}
		}
	}
	unk_0xF0059F27F7BB6680(&(Global_43C1.f_135F[iParam0]), Global_43C1.f_13E1);
	Global_43C1.f_13E1++;
	Global_43C1.f_15EB = 1;
	Global_43C1.f_15E9 = (Global_43C1.f_13E2 - 1);
	Global_43C1.f_15EA = 0;
	Global_43C1.f_15E8 = iParam2;
}

float func_133(char* sParam0)//Position - 0xE415
{
	if (!unk_0x0F6F4C227FB5DD52(sParam0))
	{
	}
	return unk_0x60F548525BE58E47(0.35f, 0);
}

float func_134(char* sParam0)//Position - 0xE431
{
	if (!unk_0xEAEFBBEC1AEA464B(sParam0))
	{
		if (unk_0x56BEECB328B6D29D(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_86(0, 1, 0, 0, 0, 0, 0);
	unk_0xE746379C2AF24EF6(sParam0);
	return unk_0x2207C0EA517B975D(1);
}

void func_135(int iParam0, bool bParam1)//Position - 0xE46E
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 32f));
	if (bParam1)
	{
		unk_0xF0059F27F7BB6680(&(Global_43C1.f_16F9[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&(Global_43C1.f_16F9[iVar0]), (iParam0 - iVar0 * 32));
	}
}

void func_136(int iParam0, var uParam1, bool bParam2, int iParam3, int iParam4)//Position - 0xE4BA
{
	float fVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	int iVar14;
	char* sVar15;
	int iVar16;
	var uVar17;
	var uVar18;
	int iVar19;
	char* sVar20;
	int iVar21;
	var uVar22;
	var uVar23;
	
	uParam1->f_42 = func_130(iParam0, iParam4);
	if (uParam1->f_42 == 0)
	{
		if (bParam2)
		{
		}
		return;
	}
	if (iParam3 == 2 && uParam1->f_42 == joaat("frogger"))
	{
		uParam1->f_42 = joaat("frogger2");
		uParam1->f_5 = 0;
		uParam1->f_6 = 0;
		uParam1->f_7 = 0;
		uParam1->f_8 = 0;
		uParam1->f_43 = 1;
		return;
	}
	uParam1->f_4D = 0;
	func_199(iParam0, &(uParam1->f_4D));
	uParam1->f_9[16] = 0;
	if ((iParam0 == 181 || iParam0 == 178) || iParam0 == 179)
	{
		uParam1->f_9[16] = 4;
	}
	else if (func_198(iParam0))
	{
		if (Global_1108D)
		{
			uParam1->f_9[16] = 4;
		}
	}
	uParam1->f_9[23] = 0;
	if (iParam0 == 218)
	{
		uParam1->f_9[23] = 7;
	}
	*uParam1 = 0;
	if (iParam0 == 360)
	{
		*uParam1 = 4;
	}
	uParam1->f_9[48] = 0;
	uParam1->f_63 = 0;
	if (iParam0 == 251)
	{
		uParam1->f_63 = 4;
	}
	uParam1->f_41 = 0;
	if (iParam0 == 263)
	{
		if (Global_1108D)
		{
			uParam1->f_41 = 1;
		}
	}
	uParam1->f_9[0] = 0;
	if (((((iParam0 == 320 || iParam0 == 321) || iParam0 == 322) || iParam0 == 327) || iParam0 == 382) || iParam0 == 391)
	{
		uParam1->f_9[0] = 1;
	}
	if (((((iParam0 == 329 || iParam0 == 330) || iParam0 == 331) || iParam0 == 334) || iParam0 == 332) || iParam0 == 333)
	{
		uParam1->f_9[10] = 0;
	}
	if (func_197(uParam1->f_42, &fVar0) && uParam1->f_50 != fVar0)
	{
		uParam1->f_50 = fVar0;
	}
	if (bParam2)
	{
		iVar1 = Global_1108C;
	}
	else if (iParam3 == 0)
	{
		iVar1 = Global_19B04.f_6241.f_139[iParam0];
	}
	else if (iParam3 == 1)
	{
		iVar1 = Global_19B04.f_6241.f_272[iParam0];
	}
	else if (iParam3 == 2)
	{
		iVar1 = Global_19B04.f_6241.f_3AB[iParam0];
	}
	uParam1->f_5 = 0;
	uParam1->f_6 = 0;
	uParam1->f_7 = 0;
	uParam1->f_8 = 156;
	uParam1->f_43 = -1;
	if (iParam0 == 200)
	{
		switch (iVar1)
		{
			case 1:
				func_159(func_160(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_146(func_160(iParam0, iVar1));
				break;
			
			case 2:
				func_159(func_160(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_146(func_160(iParam0, iVar1));
				break;
			
			case 3:
				func_159(func_160(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_146(func_160(iParam0, iVar1));
				break;
			
			case 4:
				func_159(func_160(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_146(func_160(iParam0, iVar1));
				break;
			
			case 5:
				func_159(func_160(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_146(func_160(iParam0, iVar1));
				break;
			
			case 6:
				func_159(func_160(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_146(func_160(iParam0, iVar1));
				break;
			
			case 7:
				func_159(func_160(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_146(func_160(iParam0, iVar1));
				break;
			
			case 8:
				func_159(func_160(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_146(func_160(iParam0, iVar1));
				break;
			
			case 9:
				func_159(func_160(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_146(func_160(iParam0, iVar1));
				break;
			
			case 10:
				func_159(func_160(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_146(func_160(iParam0, iVar1));
				break;
			
			case 11:
				func_159(func_160(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_146(func_160(iParam0, iVar1));
				break;
			
			case 12:
				func_159(func_160(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_146(func_160(iParam0, iVar1));
				break;
			
			case 13:
				func_159(func_160(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_146(func_160(iParam0, iVar1));
				break;
			
			case 14:
				func_159(func_160(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_146(func_160(iParam0, iVar1));
				break;
			
			case 15:
				func_159(func_160(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_146(func_160(iParam0, iVar1));
				break;
			
			case 16:
				func_159(func_160(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_146(func_160(iParam0, iVar1));
				break;
			
			case 17:
				func_159(func_160(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_146(func_160(iParam0, iVar1));
				break;
			
			case 18:
				func_159(func_160(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_146(func_160(iParam0, iVar1));
				break;
			
			case 19:
				func_159(func_160(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_146(func_160(iParam0, iVar1));
				break;
			
			case 20:
				func_159(func_160(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_146(func_160(iParam0, iVar1));
				break;
			
			case 21:
				func_159(func_160(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_146(func_160(iParam0, iVar1));
				break;
			
			case 22:
				func_159(func_160(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_146(func_160(iParam0, iVar1));
				break;
			
			case 23:
				func_159(func_160(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_146(func_160(iParam0, iVar1));
				break;
			
			case 24:
				func_159(func_160(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_146(func_160(iParam0, iVar1));
				break;
			
			case 25:
				func_159(func_160(iParam0, iVar1), &(uParam1->f_5), &(uParam1->f_6));
				uParam1->f_7 = 4;
				uParam1->f_8 = 156;
				uParam1->f_43 = func_146(func_160(iParam0, iVar1));
				break;
			
			default:
				break;
		}
	}
	else if (iParam0 == 219)
	{
		switch (iVar1)
		{
			case 1:
				uParam1->f_5 = 98;
				uParam1->f_6 = 98;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_43 = 1;
				break;
			
			case 2:
				uParam1->f_5 = 111;
				uParam1->f_6 = 111;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_43 = 2;
				break;
			
			case 3:
				uParam1->f_5 = 135;
				uParam1->f_6 = 135;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_43 = 3;
				break;
			
			case 4:
				uParam1->f_5 = 59;
				uParam1->f_6 = 59;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_43 = 8;
				break;
			
			case 5:
				uParam1->f_5 = 98;
				uParam1->f_6 = 98;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_43 = 4;
				break;
			
			case 6:
				uParam1->f_5 = 98;
				uParam1->f_6 = 98;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_43 = 5;
				break;
			
			case 7:
				uParam1->f_5 = 42;
				uParam1->f_6 = 42;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_43 = 7;
				break;
			
			case 8:
				uParam1->f_5 = 111;
				uParam1->f_6 = 111;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_43 = 6;
				break;
			
			default:
				break;
		}
	}
	else
	{
		switch (iVar1)
		{
			case 1:
				if (func_145(iParam0))
				{
					if (iParam0 != 164)
					{
						if (func_144(iParam0, iVar1, &uVar2))
						{
							uParam1->f_9[48] = uVar2;
						}
						else if (func_143(iParam0, iVar1, &uVar3, &uVar4, &uVar2))
						{
							uParam1->f_5 = uVar3;
							uParam1->f_6 = uVar4;
							uParam1->f_7 = 0;
							uParam1->f_8 = 156;
							uParam1->f_61 = 1;
							if ((iParam0 == 268 || iParam0 == 267) || iParam0 == 279)
							{
								uParam1->f_63 = 134;
							}
							else
							{
								uParam1->f_63 = 0;
							}
							uParam1->f_9[48] = uVar2;
						}
						else
						{
							uParam1->f_43 = 0;
						}
					}
					else
					{
						uParam1->f_43 = func_146(func_160(iParam0, iVar1));
					}
				}
				else if (func_198(iParam0))
				{
					if (!Global_1108D)
					{
						uParam1->f_5 = 143;
						uParam1->f_6 = 34;
						uParam1->f_7 = 31;
						uParam1->f_61 = 99;
						uParam1->f_43 = -1;
					}
					else
					{
						uParam1->f_5 = 40;
						uParam1->f_6 = 40;
						uParam1->f_61 = 93;
						uParam1->f_43 = -1;
					}
				}
				else if (func_142(iParam0))
				{
					uParam1->f_5 = 27;
					uParam1->f_6 = 118;
					uParam1->f_43 = -1;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 27;
					uParam1->f_6 = 36;
					uParam1->f_43 = -1;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 27;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_61 = 8;
					uParam1->f_63 = 89;
					uParam1->f_43 = -1;
				}
				else if (iParam0 == 355)
				{
					uParam1->f_5 = 27;
					uParam1->f_6 = 27;
					uParam1->f_43 = -1;
				}
				else if (func_141(iParam0))
				{
					uParam1->f_5 = 27;
					uParam1->f_6 = 27;
					uParam1->f_43 = -1;
				}
				else
				{
					uParam1->f_5 = 27;
					uParam1->f_6 = 36;
					uParam1->f_43 = -1;
				}
				break;
			
			case 2:
				if (func_145(iParam0))
				{
					if (iParam0 != 164)
					{
						if (func_144(iParam0, iVar1, &uVar5))
						{
							uParam1->f_9[48] = uVar5;
						}
						else if (func_143(iParam0, iVar1, &uVar6, &uVar7, &uVar5))
						{
							uParam1->f_5 = uVar6;
							uParam1->f_6 = uVar7;
							uParam1->f_7 = 0;
							uParam1->f_8 = 156;
							uParam1->f_61 = 1;
							if ((iParam0 == 268 || iParam0 == 267) || iParam0 == 279)
							{
								uParam1->f_63 = 134;
							}
							else
							{
								uParam1->f_63 = 0;
							}
							uParam1->f_9[48] = uVar5;
						}
						else
						{
							uParam1->f_43 = 1;
						}
					}
					else
					{
						uParam1->f_5 = 0;
						uParam1->f_6 = 10;
						uParam1->f_7 = 4;
						uParam1->f_8 = 156;
						uParam1->f_43 = func_146(func_160(iParam0, iVar1));
					}
				}
				else if (func_198(iParam0))
				{
					if (!Global_1108D)
					{
						uParam1->f_5 = 8;
						uParam1->f_6 = 8;
						uParam1->f_7 = 5;
						uParam1->f_61 = 106;
						uParam1->f_43 = -1;
					}
					else
					{
						uParam1->f_5 = 14;
						uParam1->f_6 = 14;
						uParam1->f_61 = 108;
						uParam1->f_43 = -1;
					}
				}
				else if (func_142(iParam0))
				{
					uParam1->f_5 = 135;
					uParam1->f_6 = 118;
					uParam1->f_43 = -1;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 135;
					uParam1->f_6 = 135;
					uParam1->f_43 = -1;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 135;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_61 = 8;
					uParam1->f_63 = 67;
					uParam1->f_43 = -1;
				}
				else if (func_141(iParam0))
				{
					uParam1->f_5 = 135;
					uParam1->f_6 = 135;
					uParam1->f_43 = -1;
				}
				else
				{
					uParam1->f_5 = 135;
					uParam1->f_6 = 135;
					uParam1->f_43 = -1;
				}
				break;
			
			case 3:
				if (func_145(iParam0))
				{
					if (func_144(iParam0, iVar1, &uVar8))
					{
						uParam1->f_9[48] = uVar8;
					}
					else if (func_143(iParam0, iVar1, &uVar9, &uVar10, &uVar8))
					{
						uParam1->f_5 = uVar9;
						uParam1->f_6 = uVar10;
						uParam1->f_7 = 0;
						uParam1->f_8 = 156;
						uParam1->f_61 = 1;
						if ((iParam0 == 268 || iParam0 == 267) || iParam0 == 279)
						{
							uParam1->f_63 = 134;
						}
						else
						{
							uParam1->f_63 = 0;
						}
						uParam1->f_9[48] = uVar8;
					}
					else
					{
						uParam1->f_43 = 2;
					}
				}
				else if (func_198(iParam0))
				{
					if (!Global_1108D)
					{
						uParam1->f_5 = 100;
						uParam1->f_6 = 100;
						uParam1->f_7 = 100;
						uParam1->f_61 = 22;
						uParam1->f_43 = -1;
					}
					else
					{
						uParam1->f_5 = 152;
						uParam1->f_6 = 152;
						uParam1->f_61 = 22;
						uParam1->f_43 = -1;
					}
				}
				else if (func_142(iParam0))
				{
					uParam1->f_5 = 88;
					uParam1->f_6 = 118;
					uParam1->f_43 = -1;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 88;
					uParam1->f_6 = 88;
					uParam1->f_43 = -1;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 88;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_61 = 8;
					uParam1->f_63 = 28;
					uParam1->f_43 = -1;
				}
				else if (func_141(iParam0))
				{
					uParam1->f_5 = 88;
					uParam1->f_6 = 88;
					uParam1->f_43 = -1;
				}
				else
				{
					uParam1->f_5 = 88;
					uParam1->f_6 = 88;
					uParam1->f_43 = -1;
				}
				break;
			
			case 4:
				if (func_145(iParam0))
				{
					if (func_144(iParam0, iVar1, &uVar11))
					{
						uParam1->f_9[48] = uVar11;
					}
					else if (func_143(iParam0, iVar1, &uVar12, &uVar13, &uVar11))
					{
						uParam1->f_5 = uVar12;
						uParam1->f_6 = uVar13;
						uParam1->f_7 = 0;
						uParam1->f_8 = 156;
						uParam1->f_61 = 1;
						if ((iParam0 == 268 || iParam0 == 267) || iParam0 == 279)
						{
							uParam1->f_63 = 134;
						}
						else
						{
							uParam1->f_63 = 0;
						}
						uParam1->f_9[48] = uVar11;
					}
					else
					{
						uParam1->f_43 = 3;
					}
				}
				else if (func_198(iParam0))
				{
					if (!Global_1108D)
					{
						uParam1->f_5 = 99;
						uParam1->f_6 = 99;
						uParam1->f_7 = 106;
						uParam1->f_61 = 101;
						uParam1->f_43 = -1;
					}
					else
					{
						uParam1->f_5 = 99;
						uParam1->f_6 = 99;
						uParam1->f_61 = 48;
						uParam1->f_43 = -1;
					}
				}
				else if (func_142(iParam0))
				{
					uParam1->f_5 = 38;
					uParam1->f_6 = 118;
					uParam1->f_43 = -1;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 38;
					uParam1->f_6 = 38;
					uParam1->f_43 = -1;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 38;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_61 = 8;
					uParam1->f_63 = 81;
					uParam1->f_43 = -1;
				}
				else if (iParam0 == 355)
				{
					uParam1->f_5 = 38;
					uParam1->f_6 = 38;
					uParam1->f_43 = -1;
				}
				else if (func_141(iParam0))
				{
					uParam1->f_5 = 38;
					uParam1->f_6 = 38;
					uParam1->f_43 = -1;
				}
				else
				{
					uParam1->f_5 = 38;
					uParam1->f_6 = 27;
					while (func_140(iVar14, &sVar15, &iVar16, &uVar17, &uVar18))
					{
						if (unk_0x3362CDE8460ED38B(&sVar15, "ORANGE") && iVar16 == 1)
						{
							uParam1->f_5 = uVar17;
							uParam1->f_6 = uVar18;
							iVar14 = -99;
						}
						iVar14++;
					}
					uParam1->f_43 = -1;
				}
				break;
			
			case 5:
				if (func_198(iParam0))
				{
					if (!Global_1108D)
					{
						uParam1->f_5 = 49;
						uParam1->f_6 = 49;
						uParam1->f_7 = 52;
						uParam1->f_61 = 98;
						uParam1->f_43 = -1;
					}
					else
					{
						uParam1->f_5 = 128;
						uParam1->f_6 = 128;
						uParam1->f_61 = 99;
						uParam1->f_43 = -1;
					}
				}
				else if ((iParam0 == 178 || iParam0 == 179) || iParam0 == 192)
				{
					uParam1->f_5 = 152;
					uParam1->f_6 = 152;
					uParam1->f_7 = 18;
					uParam1->f_8 = 152;
				}
				else if (func_142(iParam0))
				{
					uParam1->f_5 = 128;
					uParam1->f_6 = 118;
					uParam1->f_43 = -1;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 128;
					uParam1->f_6 = 55;
					uParam1->f_43 = -1;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 92;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_61 = 8;
					uParam1->f_63 = 41;
					uParam1->f_43 = -1;
				}
				else if (iParam0 == 355)
				{
					uParam1->f_5 = 55;
					uParam1->f_6 = 55;
					uParam1->f_43 = -1;
				}
				else if (func_141(iParam0))
				{
					uParam1->f_5 = 128;
					uParam1->f_6 = 128;
					uParam1->f_43 = -1;
				}
				else
				{
					uParam1->f_5 = 128;
					uParam1->f_6 = 0;
					while (func_140(iVar19, &sVar20, &iVar21, &uVar22, &uVar23))
					{
						if (unk_0x3362CDE8460ED38B(&sVar20, "LIME_GREEN") && iVar21 == 1)
						{
							uParam1->f_5 = uVar22;
							uParam1->f_6 = uVar23;
							iVar19 = -99;
						}
						iVar19++;
					}
					uParam1->f_43 = -1;
				}
				break;
			
			case 6:
				if (func_198(iParam0))
				{
					if (!Global_1108D)
					{
						uParam1->f_5 = 141;
						uParam1->f_6 = 141;
						uParam1->f_7 = 73;
						uParam1->f_61 = 5;
						uParam1->f_43 = -1;
					}
					else
					{
						uParam1->f_5 = 84;
						uParam1->f_6 = 84;
						uParam1->f_61 = 24;
						uParam1->f_43 = -1;
					}
				}
				else if (func_142(iParam0))
				{
					uParam1->f_5 = 64;
					uParam1->f_6 = 118;
					uParam1->f_43 = -1;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 64;
					uParam1->f_6 = 63;
					uParam1->f_43 = -1;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 64;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_61 = 8;
					uParam1->f_63 = 111;
					uParam1->f_43 = -1;
				}
				else if (iParam0 == 355)
				{
					uParam1->f_5 = 64;
					uParam1->f_6 = 64;
					uParam1->f_43 = -1;
				}
				else if (func_141(iParam0))
				{
					uParam1->f_5 = 64;
					uParam1->f_6 = 64;
					uParam1->f_43 = -1;
				}
				else
				{
					uParam1->f_5 = 64;
					uParam1->f_6 = 68;
					uParam1->f_43 = -1;
				}
				break;
			
			case 7:
				if (uParam1->f_42 == joaat("kuruma2"))
				{
					uParam1->f_5 = 12;
					uParam1->f_6 = 12;
					uParam1->f_7 = 13;
					uParam1->f_8 = 156;
					uParam1->f_43 = -1;
				}
				else if (func_198(iParam0))
				{
					if (!Global_1108D)
					{
						uParam1->f_5 = 0;
						uParam1->f_6 = 0;
						uParam1->f_7 = 10;
						uParam1->f_61 = 1;
						uParam1->f_43 = -1;
					}
					else
					{
						uParam1->f_5 = 12;
						uParam1->f_6 = 12;
						uParam1->f_61 = 0;
						uParam1->f_43 = -1;
					}
				}
				else if (func_142(iParam0))
				{
					uParam1->f_5 = 0;
					uParam1->f_6 = 118;
					uParam1->f_43 = -1;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 0;
					uParam1->f_6 = 5;
					uParam1->f_43 = -1;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 0;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_61 = 8;
					uParam1->f_63 = 81;
					uParam1->f_43 = -1;
				}
				else if (iParam0 == 333)
				{
					uParam1->f_5 = 154;
					uParam1->f_6 = 3;
					uParam1->f_61 = 0;
					uParam1->f_43 = -1;
				}
				else if (func_141(iParam0))
				{
					uParam1->f_5 = 0;
					uParam1->f_6 = 0;
					uParam1->f_43 = -1;
				}
				else
				{
					uParam1->f_5 = 0;
					uParam1->f_6 = 10;
					uParam1->f_43 = -1;
				}
				break;
			
			case 8:
				if (func_198(iParam0))
				{
					if (!Global_1108D)
					{
						uParam1->f_5 = 112;
						uParam1->f_6 = 112;
						uParam1->f_7 = 0;
						uParam1->f_61 = 7;
						uParam1->f_43 = -1;
					}
					else
					{
						uParam1->f_5 = 131;
						uParam1->f_6 = 131;
						uParam1->f_61 = 78;
						uParam1->f_43 = -1;
					}
				}
				else if (func_142(iParam0))
				{
					uParam1->f_5 = 111;
					uParam1->f_6 = 118;
					uParam1->f_43 = -1;
				}
				else if (iParam0 == 292)
				{
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_43 = -1;
				}
				else if (iParam0 == 327)
				{
					uParam1->f_5 = 111;
					uParam1->f_6 = 8;
					uParam1->f_7 = 0;
					uParam1->f_8 = 0;
					uParam1->f_61 = 8;
					uParam1->f_63 = 27;
					uParam1->f_43 = -1;
				}
				else if (iParam0 == 355)
				{
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_43 = -1;
				}
				else if (func_141(iParam0))
				{
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_43 = -1;
				}
				else
				{
					uParam1->f_5 = 111;
					uParam1->f_6 = 0;
					uParam1->f_43 = -1;
				}
				break;
			
			default:
				break;
			}
	}
	if (iVar1 == 0)
	{
		switch (iParam0)
		{
			case 32:
				uParam1->f_5 = 111;
				uParam1->f_6 = 65;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_43 = -1;
				break;
			
			case 13:
				uParam1->f_5 = 46;
				uParam1->f_6 = 24;
				uParam1->f_7 = 46;
				uParam1->f_8 = 24;
				uParam1->f_43 = -1;
				break;
			
			case 33:
				uParam1->f_5 = 7;
				uParam1->f_6 = 0;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_43 = -1;
				break;
			
			case 34:
				uParam1->f_5 = 7;
				uParam1->f_6 = 0;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_43 = -1;
				break;
			
			case 35:
				uParam1->f_5 = 7;
				uParam1->f_6 = 0;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_43 = -1;
				break;
			
			case 36:
				uParam1->f_5 = 7;
				uParam1->f_6 = 0;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_43 = -1;
				break;
			
			case 37:
				uParam1->f_5 = 7;
				uParam1->f_6 = 0;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_43 = -1;
				break;
			
			case 38:
				uParam1->f_5 = 7;
				uParam1->f_6 = 0;
				uParam1->f_7 = 111;
				uParam1->f_8 = 156;
				uParam1->f_43 = -1;
				break;
			
			case 206:
				uParam1->f_5 = 2;
				uParam1->f_6 = 134;
				uParam1->f_7 = 134;
				uParam1->f_8 = 29;
				uParam1->f_43 = -1;
				break;
			
			case 207:
				uParam1->f_5 = 134;
				uParam1->f_6 = 134;
				uParam1->f_7 = 134;
				uParam1->f_8 = 126;
				uParam1->f_43 = -1;
				break;
			
			case 208:
				uParam1->f_5 = 134;
				uParam1->f_6 = 134;
				uParam1->f_7 = 134;
				uParam1->f_8 = 29;
				uParam1->f_43 = -1;
				break;
			
			case 209:
				uParam1->f_5 = 134;
				uParam1->f_6 = 134;
				uParam1->f_7 = 134;
				uParam1->f_8 = 139;
				uParam1->f_43 = -1;
				break;
			
			case 210:
				uParam1->f_5 = 28;
				uParam1->f_6 = 0;
				uParam1->f_7 = 14;
				uParam1->f_8 = 156;
				uParam1->f_43 = -1;
				break;
			
			case 213:
				uParam1->f_5 = 38;
				uParam1->f_6 = 38;
				uParam1->f_7 = 42;
				uParam1->f_8 = 156;
				uParam1->f_43 = -1;
				break;
			
			case 212:
				uParam1->f_5 = 134;
				uParam1->f_6 = 134;
				uParam1->f_7 = 134;
				uParam1->f_8 = 27;
				uParam1->f_43 = -1;
				break;
			
			case 17:
				uParam1->f_5 = 30;
				uParam1->f_6 = 0;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_43 = -1;
				break;
			
			case 215:
				uParam1->f_5 = 159;
				uParam1->f_6 = 0;
				uParam1->f_7 = 160;
				uParam1->f_8 = 156;
				uParam1->f_43 = -1;
				break;
			
			case 217:
				uParam1->f_5 = 159;
				uParam1->f_6 = 0;
				uParam1->f_7 = 160;
				uParam1->f_8 = 156;
				uParam1->f_43 = -1;
				break;
			
			case 205:
				uParam1->f_5 = 12;
				uParam1->f_6 = 12;
				uParam1->f_7 = 0;
				uParam1->f_8 = 12;
				uParam1->f_43 = -1;
				break;
			
			case 227:
				uParam1->f_5 = 0;
				uParam1->f_6 = 0;
				uParam1->f_7 = 0;
				uParam1->f_8 = 0;
				uParam1->f_43 = -1;
				break;
			
			case 226:
				uParam1->f_5 = 36;
				uParam1->f_6 = 36;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_43 = -1;
				break;
			
			case 230:
				uParam1->f_5 = 41;
				uParam1->f_6 = 41;
				uParam1->f_7 = 156;
				uParam1->f_8 = 0;
				uParam1->f_43 = -1;
				break;
			
			case 338:
				uParam1->f_5 = 64;
				uParam1->f_6 = 5;
				uParam1->f_7 = 111;
				uParam1->f_8 = 5;
				uParam1->f_61 = 0;
				uParam1->f_63 = 0;
				uParam1->f_43 = -1;
				break;
			
			case 339:
				uParam1->f_5 = 14;
				uParam1->f_6 = 14;
				uParam1->f_7 = 14;
				uParam1->f_8 = 156;
				uParam1->f_61 = 111;
				uParam1->f_63 = 0;
				uParam1->f_43 = -1;
				break;
			
			case 340:
				uParam1->f_5 = 24;
				uParam1->f_6 = 29;
				uParam1->f_7 = 65;
				uParam1->f_8 = 156;
				uParam1->f_61 = 111;
				uParam1->f_63 = 0;
				uParam1->f_43 = -1;
				break;
			
			case 341:
				uParam1->f_5 = 3;
				uParam1->f_6 = 4;
				uParam1->f_7 = 7;
				uParam1->f_8 = 111;
				uParam1->f_61 = 111;
				uParam1->f_63 = 0;
				uParam1->f_43 = -1;
				break;
			
			case 342:
				uParam1->f_5 = 111;
				uParam1->f_6 = 89;
				uParam1->f_7 = 111;
				uParam1->f_8 = 111;
				uParam1->f_61 = 111;
				uParam1->f_63 = 0;
				uParam1->f_43 = -1;
				break;
			
			case 343:
				uParam1->f_5 = 14;
				uParam1->f_6 = 121;
				uParam1->f_7 = 121;
				uParam1->f_8 = 111;
				uParam1->f_61 = 111;
				uParam1->f_63 = 0;
				uParam1->f_43 = -1;
				break;
			
			case 344:
				uParam1->f_5 = 50;
				uParam1->f_6 = 91;
				uParam1->f_7 = 0;
				uParam1->f_8 = 111;
				uParam1->f_61 = 111;
				uParam1->f_63 = 0;
				uParam1->f_43 = -1;
				break;
			
			case 345:
				uParam1->f_5 = 117;
				uParam1->f_6 = 35;
				uParam1->f_7 = 134;
				uParam1->f_8 = 119;
				uParam1->f_61 = 111;
				uParam1->f_63 = 0;
				uParam1->f_43 = -1;
				break;
			
			case 346:
				uParam1->f_5 = 117;
				uParam1->f_6 = 35;
				uParam1->f_7 = 134;
				uParam1->f_8 = 119;
				uParam1->f_61 = 111;
				uParam1->f_63 = 0;
				uParam1->f_43 = -1;
				break;
			
			case 347:
				uParam1->f_5 = 14;
				uParam1->f_6 = 5;
				uParam1->f_43 = -1;
				break;
			
			case 348:
				uParam1->f_5 = 14;
				uParam1->f_6 = 14;
				uParam1->f_7 = 14;
				uParam1->f_8 = 156;
				uParam1->f_61 = 111;
				uParam1->f_63 = 0;
				uParam1->f_43 = -1;
				break;
			
			case 349:
				uParam1->f_5 = 27;
				uParam1->f_6 = 111;
				uParam1->f_7 = 7;
				uParam1->f_8 = 111;
				uParam1->f_61 = 111;
				uParam1->f_63 = 0;
				uParam1->f_43 = -1;
				break;
			
			case 350:
				uParam1->f_5 = 119;
				uParam1->f_6 = 73;
				uParam1->f_7 = 65;
				uParam1->f_8 = 156;
				uParam1->f_61 = 111;
				uParam1->f_63 = 0;
				uParam1->f_43 = -1;
				break;
			
			case 351:
				uParam1->f_5 = 67;
				uParam1->f_6 = 1;
				uParam1->f_7 = 5;
				uParam1->f_8 = 111;
				uParam1->f_61 = 111;
				uParam1->f_63 = 0;
				uParam1->f_43 = -1;
				break;
			
			case 356:
				uParam1->f_5 = 12;
				uParam1->f_6 = 12;
				uParam1->f_7 = 0;
				uParam1->f_8 = 0;
				uParam1->f_43 = -1;
				break;
			
			case 363:
				uParam1->f_5 = 12;
				uParam1->f_6 = 12;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_61 = 1;
				uParam1->f_63 = 132;
				uParam1->f_43 = -1;
				break;
			
			case 361:
				uParam1->f_5 = 154;
				uParam1->f_6 = 13;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_61 = 1;
				uParam1->f_63 = 132;
				uParam1->f_43 = -1;
				break;
			
			case 358:
				uParam1->f_5 = 117;
				uParam1->f_6 = 118;
				uParam1->f_7 = 18;
				uParam1->f_8 = 0;
				uParam1->f_61 = 1;
				uParam1->f_63 = 132;
				uParam1->f_43 = -1;
				break;
			
			case 362:
				uParam1->f_5 = 13;
				uParam1->f_6 = 8;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_61 = 1;
				uParam1->f_63 = 132;
				uParam1->f_43 = -1;
				break;
			
			case 360:
				uParam1->f_5 = 9;
				uParam1->f_6 = 9;
				uParam1->f_7 = 7;
				uParam1->f_8 = 156;
				uParam1->f_61 = 1;
				uParam1->f_63 = 132;
				uParam1->f_43 = -1;
				break;
			
			case 359:
				uParam1->f_5 = 111;
				uParam1->f_6 = 111;
				uParam1->f_7 = 0;
				uParam1->f_8 = 156;
				uParam1->f_61 = 1;
				uParam1->f_63 = 132;
				uParam1->f_43 = -1;
				break;
			
			case 364:
				uParam1->f_5 = 8;
				uParam1->f_6 = 14;
				uParam1->f_7 = 5;
				uParam1->f_8 = 156;
				uParam1->f_61 = 1;
				uParam1->f_63 = 132;
				uParam1->f_43 = -1;
				break;
			
			default:
				break;
			}
	}
	if (iParam0 == 161)
	{
		uParam1->f_5 = 111;
		uParam1->f_6 = 111;
		uParam1->f_7 = 111;
		uParam1->f_8 = 156;
		uParam1->f_43 = -1;
	}
	if (iParam0 == 231)
	{
		uParam1->f_5 = 142;
		uParam1->f_6 = 0;
		uParam1->f_7 = 145;
		uParam1->f_8 = 90;
	}
	if (iParam0 == 290)
	{
		uParam1->f_6 = 0;
	}
	if (iParam0 == 291)
	{
		uParam1->f_5 = 131;
		uParam1->f_6 = 131;
		uParam1->f_43 = -1;
	}
	if (iParam0 == 304)
	{
		uParam1->f_5 = 22;
		uParam1->f_6 = 12;
		uParam1->f_7 = 134;
		uParam1->f_8 = 156;
		uParam1->f_61 = 0;
		uParam1->f_63 = 0;
		uParam1->f_43 = -1;
	}
	if (iParam0 == 305)
	{
		uParam1->f_5 = 0;
		uParam1->f_6 = 0;
		uParam1->f_7 = 18;
		uParam1->f_8 = 156;
		uParam1->f_61 = 0;
		uParam1->f_63 = 0;
		uParam1->f_43 = -1;
	}
	if (iParam0 == 306)
	{
		uParam1->f_5 = 0;
		uParam1->f_6 = 0;
		uParam1->f_7 = 18;
		uParam1->f_8 = 156;
		uParam1->f_61 = 0;
		uParam1->f_63 = 0;
		uParam1->f_43 = -1;
	}
	if (iParam0 == 307)
	{
		uParam1->f_5 = 0;
		uParam1->f_6 = 0;
		uParam1->f_7 = 18;
		uParam1->f_8 = 156;
		uParam1->f_61 = 0;
		uParam1->f_63 = 0;
		uParam1->f_43 = -1;
	}
	if (iParam0 == 308)
	{
		uParam1->f_5 = 12;
		uParam1->f_6 = 0;
		uParam1->f_7 = 18;
		uParam1->f_8 = 156;
		uParam1->f_61 = 0;
		uParam1->f_63 = 0;
		uParam1->f_43 = -1;
	}
	if (iParam0 == 309)
	{
		uParam1->f_5 = 151;
		uParam1->f_6 = 129;
		uParam1->f_7 = 18;
		uParam1->f_8 = 156;
		uParam1->f_61 = 0;
		uParam1->f_63 = 0;
		uParam1->f_43 = -1;
	}
	if (iParam0 == 310)
	{
		uParam1->f_5 = 0;
		uParam1->f_6 = 0;
		uParam1->f_7 = 18;
		uParam1->f_8 = 0;
		uParam1->f_61 = 0;
		uParam1->f_63 = 0;
		uParam1->f_43 = -1;
	}
	if (iParam0 == 311)
	{
		uParam1->f_5 = 0;
		uParam1->f_6 = 6;
		uParam1->f_7 = 18;
		uParam1->f_8 = 156;
		uParam1->f_61 = 0;
		uParam1->f_63 = 0;
		uParam1->f_43 = -1;
	}
	if (iParam0 == 329)
	{
		uParam1->f_5 = 154;
		uParam1->f_6 = 154;
		uParam1->f_7 = 154;
		uParam1->f_8 = 0;
		uParam1->f_61 = 0;
		uParam1->f_63 = 0;
		uParam1->f_43 = -1;
	}
	if (iParam0 == 330)
	{
		uParam1->f_5 = 154;
		uParam1->f_6 = 154;
		uParam1->f_7 = 154;
		uParam1->f_8 = 0;
		uParam1->f_61 = 0;
		uParam1->f_63 = 0;
		uParam1->f_43 = -1;
	}
	if (iParam0 == 331)
	{
		uParam1->f_5 = 154;
		uParam1->f_6 = 154;
		uParam1->f_7 = 0;
		uParam1->f_8 = 154;
		uParam1->f_61 = 0;
		uParam1->f_63 = 0;
		uParam1->f_43 = -1;
	}
	if (iParam0 == 332)
	{
		uParam1->f_5 = 0;
		uParam1->f_6 = 120;
		uParam1->f_7 = 35;
		uParam1->f_8 = 156;
		uParam1->f_61 = 0;
		uParam1->f_63 = 0;
		uParam1->f_43 = -1;
	}
	if (iParam0 == 334)
	{
		uParam1->f_5 = 154;
		uParam1->f_6 = 154;
		uParam1->f_7 = 154;
		uParam1->f_8 = 0;
		uParam1->f_61 = 0;
		uParam1->f_63 = 0;
		uParam1->f_43 = -1;
	}
	if (iParam0 == 323)
	{
		if (iParam4 == 0)
		{
			uParam1->f_42 = 177270108;
			uParam1->f_5 = 0;
			uParam1->f_6 = 0;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_61 = 0;
			uParam1->f_63 = 0;
			uParam1->f_43 = -1;
		}
		else if (iParam4 == 1)
		{
			uParam1->f_42 = 387748548;
			uParam1->f_5 = 0;
			uParam1->f_6 = 0;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_61 = 0;
			uParam1->f_63 = 0;
			uParam1->f_43 = -1;
		}
	}
	if (func_139(uParam1->f_42))
	{
		uParam1->f_3E = 1;
		uParam1->f_3F = 1;
		uParam1->f_40 = 1;
	}
	if (iParam0 == 357)
	{
		uParam1->f_42 = func_138();
		uParam1->f_5 = 14;
		uParam1->f_6 = 131;
		uParam1->f_8 = 111;
		uParam1->f_61 = 1;
		uParam1->f_63 = 132;
		uParam1->f_43 = -1;
	}
	if (iParam0 == 365)
	{
		uParam1->f_5 = 128;
		uParam1->f_8 = 156;
		uParam1->f_61 = 1;
		uParam1->f_63 = 132;
		uParam1->f_62 = 0;
		uParam1->f_3E = 255;
		uParam1->f_3F = 255;
		uParam1->f_40 = 255;
	}
	if (iParam0 == 364)
	{
		uParam1->f_5 = 32;
		uParam1->f_6 = 112;
		uParam1->f_7 = 25;
		uParam1->f_8 = 156;
		uParam1->f_61 = 1;
		uParam1->f_63 = 132;
		uParam1->f_62 = 0;
		uParam1->f_3E = 255;
		uParam1->f_3F = 255;
		uParam1->f_40 = 255;
	}
	if (iParam0 == 366)
	{
		uParam1->f_5 = 65;
		uParam1->f_6 = 65;
		uParam1->f_8 = 156;
		uParam1->f_61 = 1;
		uParam1->f_63 = 132;
		uParam1->f_62 = 0;
		uParam1->f_3E = 1;
		uParam1->f_3F = 1;
		uParam1->f_40 = 1;
	}
	if (iParam0 == 387)
	{
		uParam1->f_6 = 120;
	}
	if (iParam0 == 400)
	{
		uParam1->f_5 = 64;
		uParam1->f_6 = 2;
		uParam1->f_7 = 68;
		uParam1->f_8 = 111;
		uParam1->f_61 = 1;
		uParam1->f_63 = 132;
		uParam1->f_62 = 0;
		uParam1->f_3E = 255;
		uParam1->f_3F = 255;
		uParam1->f_40 = 255;
		uParam1->f_4A = 255;
		uParam1->f_4C = 255;
	}
	if (iParam0 == 401)
	{
		uParam1->f_5 = 5;
		uParam1->f_6 = 106;
		uParam1->f_7 = 5;
		uParam1->f_8 = 111;
		uParam1->f_61 = 1;
		uParam1->f_63 = 132;
		uParam1->f_62 = 0;
		uParam1->f_3E = 1;
		uParam1->f_3F = 1;
		uParam1->f_40 = 1;
	}
	if (iParam0 == 402)
	{
		uParam1->f_42 = func_137();
		uParam1->f_5 = 9;
		uParam1->f_7 = 7;
		uParam1->f_61 = 1;
		uParam1->f_63 = 132;
		uParam1->f_62 = 0;
		uParam1->f_3E = 255;
		uParam1->f_3F = 255;
		uParam1->f_40 = 255;
	}
	if (iParam0 == 409)
	{
		uParam1->f_5 = 141;
		uParam1->f_7 = 73;
		uParam1->f_8 = 112;
		uParam1->f_61 = 1;
		uParam1->f_63 = 132;
		uParam1->f_62 = 0;
		uParam1->f_45 = 6;
		uParam1->f_3E = 255;
		uParam1->f_3F = 255;
		uParam1->f_40 = 255;
		uParam1->f_4A = 255;
		uParam1->f_4C = 255;
	}
	if (iParam0 == 408)
	{
		uParam1->f_5 = 119;
		uParam1->f_6 = 119;
		uParam1->f_7 = 1;
		uParam1->f_8 = 156;
		uParam1->f_61 = 1;
		uParam1->f_63 = 132;
		uParam1->f_62 = 0;
		uParam1->f_3E = 1;
		uParam1->f_3F = 1;
		uParam1->f_40 = 1;
	}
	if (iParam0 == 407)
	{
		uParam1->f_5 = 111;
		uParam1->f_8 = 156;
		uParam1->f_61 = 1;
		uParam1->f_63 = 132;
		uParam1->f_62 = 0;
		uParam1->f_3E = 255;
		uParam1->f_3F = 255;
		uParam1->f_40 = 255;
	}
	if (iParam0 == 406)
	{
		uParam1->f_5 = 154;
		uParam1->f_6 = 12;
		uParam1->f_8 = 156;
		uParam1->f_61 = 1;
		uParam1->f_63 = 132;
		uParam1->f_62 = 0;
		uParam1->f_3E = 255;
		uParam1->f_3F = 255;
		uParam1->f_40 = 255;
	}
	if (iParam0 == 404)
	{
		uParam1->f_5 = 112;
		uParam1->f_8 = 156;
		uParam1->f_61 = 1;
		uParam1->f_63 = 132;
		uParam1->f_62 = 0;
		uParam1->f_3E = 255;
		uParam1->f_3F = 255;
		uParam1->f_40 = 255;
	}
	if (iParam0 == 403)
	{
		uParam1->f_5 = 8;
		uParam1->f_8 = 156;
		uParam1->f_61 = 1;
		uParam1->f_63 = 132;
		uParam1->f_62 = 0;
		uParam1->f_3E = 255;
		uParam1->f_3F = 255;
		uParam1->f_40 = 255;
	}
	if (uParam1->f_43 >= 0)
	{
	}
	else if (iParam0 == 195)
	{
		uParam1->f_43 = 1;
	}
}

int func_137()//Position - 0x10730
{
	return -1988428699;
}

int func_138()//Position - 0x1073D
{
	return -2118308144;
}

int func_139(int iParam0)//Position - 0x1074A
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

bool func_140(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4)//Position - 0x10886
{
	*uParam2 = -1;
	*uParam3 = -1;
	*uParam4 = -1;
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "BR BLACK_STEEL", 16);
			*uParam2 = 3;
			*uParam3 = 118;
			*uParam4 = 3;
			break;
		
		case 1:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*uParam2 = 0;
			*uParam3 = 147;
			*uParam4 = 4;
			break;
		
		case 2:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 96;
			*uParam4 = 0;
			break;
		
		case 3:
			StringCopy(sParam1, "PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 71;
			*uParam4 = 145;
			break;
		
		case 4:
			StringCopy(sParam1, "HOT PINK", 16);
			*uParam2 = 0;
			*uParam3 = 135;
			*uParam4 = 135;
			break;
		
		case 5:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*uParam2 = 0;
			*uParam3 = 29;
			*uParam4 = 28;
			break;
		
		case 6:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 64;
			*uParam4 = 68;
			break;
		
		case 7:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 70;
			*uParam4 = 0;
			break;
		
		case 8:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 50;
			*uParam4 = 0;
			break;
		
		case 9:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 2;
			*uParam3 = 55;
			*uParam4 = 0;
			break;
		
		case 10:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 89;
			*uParam4 = 0;
			break;
		
		case 11:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 38;
			*uParam4 = 0;
			break;
		
		case 12:
			StringCopy(sParam1, "GOLD", 16);
			*uParam2 = 0;
			*uParam3 = 37;
			*uParam4 = 106;
			break;
		
		case 13:
			StringCopy(sParam1, "SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 4;
			*uParam4 = 111;
			break;
		
		case 14:
			StringCopy(sParam1, "CHROME", 16);
			*uParam2 = 4;
			*uParam3 = 120;
			*uParam4 = 0;
			break;
		
		case 15:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 1;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
		
		case 16:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 0;
			*uParam3 = 0;
			*uParam4 = 10;
			break;
		
		case 17:
			StringCopy(sParam1, "GRAPHITE", 16);
			*uParam2 = 0;
			*uParam3 = 1;
			*uParam4 = 5;
			break;
		
		case 18:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*uParam2 = 0;
			*uParam3 = 11;
			*uParam4 = 2;
			break;
		
		case 19:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*uParam2 = 0;
			*uParam3 = 2;
			*uParam4 = 5;
			break;
		
		case 20:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 3;
			*uParam4 = 6;
			break;
		
		case 21:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 5;
			*uParam4 = 111;
			break;
		
		case 22:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*uParam2 = 0;
			*uParam3 = 6;
			*uParam4 = 4;
			break;
		
		case 23:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 7;
			*uParam4 = 5;
			break;
		
		case 24:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 8;
			*uParam4 = 5;
			break;
		
		case 25:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 9;
			*uParam4 = 7;
			break;
		
		case 26:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*uParam2 = 0;
			*uParam3 = 10;
			*uParam4 = 7;
			break;
		
		case 27:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 0;
			*uParam3 = 27;
			*uParam4 = 36;
			break;
		
		case 28:
			StringCopy(sParam1, "TORINO_RED", 16);
			*uParam2 = 0;
			*uParam3 = 28;
			*uParam4 = 28;
			break;
		
		case 29:
			StringCopy(sParam1, "LAVA_RED", 16);
			*uParam2 = 0;
			*uParam3 = 150;
			*uParam4 = 42;
			break;
		
		case 30:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 30;
			*uParam4 = 36;
			break;
		
		case 31:
			StringCopy(sParam1, "GRACE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 31;
			*uParam4 = 27;
			break;
		
		case 32:
			StringCopy(sParam1, "GARNET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 32;
			*uParam4 = 25;
			break;
		
		case 33:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 33;
			*uParam4 = 47;
			break;
		
		case 34:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 34;
			*uParam4 = 47;
			break;
		
		case 35:
			StringCopy(sParam1, "WINE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 143;
			*uParam4 = 31;
			break;
		
		case 36:
			StringCopy(sParam1, "CANDY_RED", 16);
			*uParam2 = 0;
			*uParam3 = 35;
			*uParam4 = 25;
			break;
		
		case 37:
			StringCopy(sParam1, "PINK", 16);
			*uParam2 = 0;
			*uParam3 = 137;
			*uParam4 = 3;
			break;
		
		case 38:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*uParam2 = 0;
			*uParam3 = 136;
			*uParam4 = 5;
			break;
		
		case 39:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 36;
			*uParam4 = 26;
			break;
		
		case 40:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 38;
			*uParam4 = 37;
			break;
		
		case 41:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 138;
			*uParam4 = 89;
			break;
		
		case 42:
			StringCopy(sParam1, "BRONZE", 16);
			*uParam2 = 0;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
		
		case 43:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 88;
			*uParam4 = 88;
			break;
		
		case 44:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 89;
			*uParam4 = 88;
			break;
		
		case 45:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 91;
			*uParam4 = 91;
			break;
		
		case 46:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 49;
			*uParam4 = 52;
			break;
		
		case 47:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 50;
			*uParam4 = 53;
			break;
		
		case 48:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 51;
			*uParam4 = 66;
			break;
		
		case 49:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 52;
			*uParam4 = 59;
			break;
		
		case 50:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 53;
			*uParam4 = 59;
			break;
		
		case 51:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 54;
			*uParam4 = 60;
			break;
		
		case 52:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 92;
			*uParam4 = 92;
			break;
		
		case 53:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 141;
			*uParam4 = 73;
			break;
		
		case 54:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 61;
			*uParam4 = 63;
			break;
		
		case 55:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 62;
			*uParam4 = 68;
			break;
		
		case 56:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 63;
			*uParam4 = 87;
			break;
		
		case 57:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 65;
			*uParam4 = 87;
			break;
		
		case 58:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 66;
			*uParam4 = 60;
			break;
		
		case 59:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 67;
			*uParam4 = 67;
			break;
		
		case 60:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 68;
			*uParam4 = 68;
			break;
		
		case 61:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 69;
			*uParam4 = 74;
			break;
		
		case 62:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 73;
			*uParam4 = 73;
			break;
		
		case 63:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 70;
			*uParam4 = 70;
			break;
		
		case 64:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 74;
			*uParam4 = 74;
			break;
		
		case 65:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 96;
			*uParam4 = 95;
			break;
		
		case 66:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 101;
			*uParam4 = 95;
			break;
		
		case 67:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 95;
			*uParam4 = 97;
			break;
		
		case 68:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 94;
			*uParam4 = 104;
			break;
		
		case 69:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 97;
			*uParam4 = 98;
			break;
		
		case 70:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 103;
			*uParam4 = 104;
			break;
		
		case 71:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 104;
			*uParam4 = 104;
			break;
		
		case 72:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 98;
			*uParam4 = 95;
			break;
		
		case 73:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 100;
			*uParam4 = 100;
			break;
		
		case 74:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 102;
			*uParam4 = 105;
			break;
		
		case 75:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 99;
			*uParam4 = 106;
			break;
		
		case 76:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 105;
			*uParam4 = 105;
			break;
		
		case 77:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 106;
			*uParam4 = 106;
			break;
		
		case 78:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 72;
			*uParam4 = 64;
			break;
		
		case 79:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 146;
			*uParam4 = 145;
			break;
		
		case 80:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 145;
			*uParam4 = 74;
			break;
		
		case 81:
			StringCopy(sParam1, "CREAM", 16);
			*uParam2 = 0;
			*uParam3 = 107;
			*uParam4 = 107;
			break;
		
		case 82:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 0;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
		
		case 83:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*uParam2 = 0;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
		
		case 84:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 1;
			*uParam3 = 0;
			*uParam4 = 0;
			break;
		
		case 85:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*uParam2 = 1;
			*uParam3 = 147;
			*uParam4 = 0;
			break;
		
		case 86:
			StringCopy(sParam1, "GRAPHITE", 16);
			*uParam2 = 1;
			*uParam3 = 1;
			*uParam4 = 0;
			break;
		
		case 87:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*uParam2 = 1;
			*uParam3 = 11;
			*uParam4 = 0;
			break;
		
		case 88:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*uParam2 = 1;
			*uParam3 = 2;
			*uParam4 = 0;
			break;
		
		case 89:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 3;
			*uParam4 = 2;
			break;
		
		case 90:
			StringCopy(sParam1, "SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 4;
			*uParam4 = 4;
			break;
		
		case 91:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 5;
			*uParam4 = 5;
			break;
		
		case 92:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*uParam2 = 1;
			*uParam3 = 6;
			*uParam4 = 0;
			break;
		
		case 93:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 7;
			*uParam4 = 0;
			break;
		
		case 94:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 8;
			*uParam4 = 0;
			break;
		
		case 95:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 9;
			*uParam4 = 0;
			break;
		
		case 96:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*uParam2 = 1;
			*uParam3 = 10;
			*uParam4 = 0;
			break;
		
		case 97:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 1;
			*uParam3 = 27;
			*uParam4 = 0;
			break;
		
		case 98:
			StringCopy(sParam1, "TORINO_RED", 16);
			*uParam2 = 1;
			*uParam3 = 28;
			*uParam4 = 0;
			break;
		
		case 99:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*uParam2 = 1;
			*uParam3 = 29;
			*uParam4 = 0;
			break;
		
		case 100:
			StringCopy(sParam1, "LAVA_RED", 16);
			*uParam2 = 1;
			*uParam3 = 150;
			*uParam4 = 0;
			break;
		
		case 101:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 30;
			*uParam4 = 0;
			break;
		
		case 102:
			StringCopy(sParam1, "GRACE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 31;
			*uParam4 = 0;
			break;
		
		case 103:
			StringCopy(sParam1, "GARNET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 32;
			*uParam4 = 0;
			break;
		
		case 104:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 33;
			*uParam4 = 0;
			break;
		
		case 105:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 34;
			*uParam4 = 0;
			break;
		
		case 106:
			StringCopy(sParam1, "WINE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 143;
			*uParam4 = 0;
			break;
		
		case 107:
			StringCopy(sParam1, "CANDY_RED", 16);
			*uParam2 = 1;
			*uParam3 = 35;
			*uParam4 = 0;
			break;
		
		case 108:
			StringCopy(sParam1, "HOT PINK", 16);
			*uParam2 = 1;
			*uParam3 = 135;
			*uParam4 = 0;
			break;
		
		case 109:
			StringCopy(sParam1, "PINK", 16);
			*uParam2 = 1;
			*uParam3 = 137;
			*uParam4 = 0;
			break;
		
		case 110:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*uParam2 = 1;
			*uParam3 = 136;
			*uParam4 = 0;
			break;
		
		case 111:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 36;
			*uParam4 = 0;
			break;
		
		case 112:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 138;
			*uParam4 = 0;
			break;
		
		case 113:
			StringCopy(sParam1, "GOLD", 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 99;
			break;
		
		case 114:
			StringCopy(sParam1, "BRONZE", 16);
			*uParam2 = 1;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
		
		case 115:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 88;
			*uParam4 = 0;
			break;
		
		case 116:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 91;
			*uParam4 = 0;
			break;
		
		case 117:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 49;
			*uParam4 = 0;
			break;
		
		case 118:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 51;
			*uParam4 = 0;
			break;
		
		case 119:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 52;
			*uParam4 = 0;
			break;
		
		case 120:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 53;
			*uParam4 = 0;
			break;
		
		case 121:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 54;
			*uParam4 = 0;
			break;
		
		case 122:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 92;
			*uParam4 = 0;
			break;
		
		case 123:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 141;
			*uParam4 = 0;
			break;
		
		case 124:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 61;
			*uParam4 = 0;
			break;
		
		case 125:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 62;
			*uParam4 = 0;
			break;
		
		case 126:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 63;
			*uParam4 = 0;
			break;
		
		case 127:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 64;
			*uParam4 = 0;
			break;
		
		case 128:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 65;
			*uParam4 = 0;
			break;
		
		case 129:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 66;
			*uParam4 = 0;
			break;
		
		case 130:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 67;
			*uParam4 = 0;
			break;
		
		case 131:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 68;
			*uParam4 = 0;
			break;
		
		case 132:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 69;
			*uParam4 = 0;
			break;
		
		case 133:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 73;
			*uParam4 = 0;
			break;
		
		case 134:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 74;
			*uParam4 = 0;
			break;
		
		case 135:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 101;
			*uParam4 = 0;
			break;
		
		case 136:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 95;
			*uParam4 = 0;
			break;
		
		case 137:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 94;
			*uParam4 = 0;
			break;
		
		case 138:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 97;
			*uParam4 = 0;
			break;
		
		case 139:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 103;
			*uParam4 = 0;
			break;
		
		case 140:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 104;
			*uParam4 = 0;
			break;
		
		case 141:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 98;
			*uParam4 = 0;
			break;
		
		case 142:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 100;
			*uParam4 = 0;
			break;
		
		case 143:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 102;
			*uParam4 = 0;
			break;
		
		case 144:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 0;
			break;
		
		case 145:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 105;
			*uParam4 = 0;
			break;
		
		case 146:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 106;
			*uParam4 = 0;
			break;
		
		case 147:
			StringCopy(sParam1, "PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 71;
			*uParam4 = 0;
			break;
		
		case 148:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 72;
			*uParam4 = 0;
			break;
		
		case 149:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 142;
			*uParam4 = 0;
			break;
		
		case 150:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 145;
			*uParam4 = 0;
			break;
		
		case 151:
			StringCopy(sParam1, "CREAM", 16);
			*uParam2 = 1;
			*uParam3 = 107;
			*uParam4 = 0;
			break;
		
		case 152:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*uParam2 = 1;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
		
		case 153:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 2;
			*uParam3 = 12;
			*uParam4 = 0;
			break;
		
		case 154:
			StringCopy(sParam1, "GREY", 16);
			*uParam2 = 2;
			*uParam3 = 13;
			*uParam4 = 0;
			break;
		
		case 155:
			StringCopy(sParam1, "LIGHT_GREY", 16);
			*uParam2 = 2;
			*uParam3 = 14;
			*uParam4 = 0;
			break;
		
		case 156:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 2;
			*uParam3 = 131;
			*uParam4 = 0;
			break;
		
		case 157:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 83;
			*uParam4 = 0;
			break;
		
		case 158:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 82;
			*uParam4 = 0;
			break;
		
		case 159:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 84;
			*uParam4 = 0;
			break;
		
		case 160:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 2;
			*uParam3 = 149;
			*uParam4 = 0;
			break;
		
		case 161:
			StringCopy(sParam1, "Purple", 16);
			*uParam2 = 2;
			*uParam3 = 148;
			*uParam4 = 0;
			break;
		
		case 162:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 2;
			*uParam3 = 39;
			*uParam4 = 0;
			break;
		
		case 163:
			StringCopy(sParam1, "DARK_RED", 16);
			*uParam2 = 2;
			*uParam3 = 40;
			*uParam4 = 0;
			break;
		
		case 164:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 2;
			*uParam3 = 41;
			*uParam4 = 0;
			break;
		
		case 165:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 2;
			*uParam3 = 42;
			*uParam4 = 0;
			break;
		
		case 166:
			StringCopy(sParam1, "GREEN", 16);
			*uParam2 = 2;
			*uParam3 = 128;
			*uParam4 = 0;
			break;
		
		case 167:
			StringCopy(sParam1, "MATTE_FOR", 16);
			*uParam2 = 2;
			*uParam3 = 151;
			*uParam4 = 0;
			break;
		
		case 168:
			StringCopy(sParam1, "MATTE_FOIL", 16);
			*uParam2 = 2;
			*uParam3 = 155;
			*uParam4 = 0;
			break;
		
		case 169:
			StringCopy(sParam1, "MATTE_OD", 16);
			*uParam2 = 2;
			*uParam3 = 152;
			*uParam4 = 0;
			break;
		
		case 170:
			StringCopy(sParam1, "MATTE_DIRT", 16);
			*uParam2 = 2;
			*uParam3 = 153;
			*uParam4 = 0;
			break;
		
		case 171:
			StringCopy(sParam1, "MATTE_DESERT", 16);
			*uParam2 = 2;
			*uParam3 = 154;
			*uParam4 = 0;
			break;
		
		case 172:
			StringCopy(sParam1, "BR_STEEL", 16);
			*uParam2 = 3;
			*uParam3 = 117;
			*uParam4 = 18;
			break;
		
		case 173:
			StringCopy(sParam1, "BR_ALUMINIUM", 16);
			*uParam2 = 3;
			*uParam3 = 119;
			*uParam4 = 5;
			break;
		
		case 174:
			StringCopy(sParam1, "GOLD_P", 16);
			*uParam2 = 3;
			*uParam3 = 158;
			*uParam4 = 160;
			break;
		
		case 175:
			StringCopy(sParam1, "GOLD_S", 16);
			*uParam2 = 3;
			*uParam3 = 159;
			*uParam4 = 160;
			break;
	}
	return *uParam2 != -1;
}

int func_141(int iParam0)//Position - 0x11D78
{
	if ((((((((((((((((((((((((iParam0 == 398 || iParam0 == 386) || iParam0 == 391) || iParam0 == 394) || iParam0 == 393) || iParam0 == 397) || iParam0 == 396) || iParam0 == 390) || iParam0 == 395) || iParam0 == 389) || iParam0 == 388) || iParam0 == 392) || iParam0 == 399) || iParam0 == 410) || iParam0 == 411) || iParam0 == 412) || iParam0 == 405) || iParam0 == 415) || iParam0 == 417) || iParam0 == 418) || iParam0 == 424) || iParam0 == 420) || iParam0 == 421) || iParam0 == 423) || iParam0 == 422)
	{
		return 1;
	}
	return 0;
}

int func_142(int iParam0)//Position - 0x11EAE
{
	if (((((iParam0 == 286 || iParam0 == 289) || iParam0 == 290) || iParam0 == 301) || iParam0 == 287) || iParam0 == 288)
	{
		return 1;
	}
	return 0;
}

int func_143(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)//Position - 0x11F00
{
	if (iParam0 == 275)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 0;
				*uParam3 = 10;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 111;
				*uParam3 = 0;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 270)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 111;
				*uParam3 = 0;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 111;
				*uParam3 = 0;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 274)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 111;
				*uParam3 = 0;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 64;
				*uParam3 = 68;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 278)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 0;
				*uParam3 = 10;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 0;
				*uParam3 = 10;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 267)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 27;
				*uParam3 = 36;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 111;
				*uParam3 = 0;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 280)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 111;
				*uParam3 = 111;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 111;
				*uParam3 = 111;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 268)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 27;
				*uParam3 = 36;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 111;
				*uParam3 = 0;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 276)
	{
		switch (iParam1)
		{
			case 1:
				func_159(func_160(iParam0, iParam1), uParam2, uParam3);
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				func_159(func_160(iParam0, iParam1), uParam2, uParam3);
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 281)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 111;
				*uParam3 = 111;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 111;
				*uParam3 = 111;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 277)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 0;
				*uParam3 = 10;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 111;
				*uParam3 = 0;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 271)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 27;
				*uParam3 = 36;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 0;
				*uParam3 = 10;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 272)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 38;
				*uParam3 = 0;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 88;
				*uParam3 = 88;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 269)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 111;
				*uParam3 = 111;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 111;
				*uParam3 = 111;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 279)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 0;
				*uParam3 = 10;
				*uParam4 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 64;
				*uParam3 = 68;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	return 0;
}

int func_144(int iParam0, int iParam1, var uParam2)//Position - 0x1232E
{
	if (iParam0 == 231)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 4;
				return 1;
				break;
			
			case 2:
				*uParam2 = 1;
				return 1;
				break;
			
			case 3:
				*uParam2 = 2;
				return 1;
				break;
			
			case 4:
				*uParam2 = 3;
				return 1;
				break;
		}
		*uParam2 = -1;
		return 0;
	}
	else if (iParam0 == 232)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 2;
				return 1;
				break;
			
			case 2:
				*uParam2 = 1;
				return 1;
				break;
		}
		*uParam2 = -1;
		return 0;
	}
	else if (iParam0 == 276)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 1;
				return 1;
				break;
			
			case 2:
				*uParam2 = 2;
				return 1;
				break;
		}
		*uParam2 = -1;
		return 0;
	}
	*uParam2 = -1;
	return 0;
}

int func_145(int iParam0)//Position - 0x1240C
{
	if (((((((((((((((((((((((iParam0 == 94 || iParam0 == 68) || iParam0 == 101) || iParam0 == 164) || iParam0 == 200) || iParam0 == 219) || iParam0 == 231) || iParam0 == 232) || iParam0 == 275) || iParam0 == 270) || iParam0 == 274) || iParam0 == 278) || iParam0 == 267) || iParam0 == 280) || iParam0 == 268) || iParam0 == 276) || iParam0 == 281) || iParam0 == 277) || iParam0 == 271) || iParam0 == 272) || iParam0 == 269) || iParam0 == 279) || iParam0 == 413) || iParam0 == 414)
	{
		return 1;
	}
	return 0;
}

int func_146(int iParam0)//Position - 0x1252E
{
	switch (iParam0)
	{
		case 39:
			return 0;
		
		case 40:
			return 1;
		
		case 43:
			return 0;
		
		case 44:
			return 1;
		
		case 45:
			return 2;
		
		case 46:
			return 3;
		
		case 47:
			return 4;
		
		case 48:
			return 5;
		
		case 49:
			return 6;
		
		case 50:
			return 7;
		
		case 51:
			return 8;
		
		case 52:
			return 9;
		
		case 53:
			return 10;
		
		case 54:
			return 11;
		
		case 55:
			return 12;
		
		case 56:
			return 13;
		
		case 57:
			return 14;
		
		case 58:
			return 15;
		
		case 59:
			return 16;
		
		case 60:
			return 17;
		
		case 61:
			return 18;
		
		case 62:
			return 19;
		
		case 63:
			return 20;
		
		case 64:
			return 21;
		
		case 65:
			return 22;
		
		case 66:
			return 23;
		
		case 67:
			return 24;
		
		case 82:
			return 0;
		
		case 83:
			return 1;
		
		case 90:
			return 0;
		
		case 97:
			return 0;
		
		case 98:
			return 1;
		
		case 99:
			return 2;
		
		case 100:
			return 3;
		
		case 101:
			return 4;
		
		case 102:
			return 5;
		
		case 103:
			return 6;
		
		case 104:
			if (func_158(unk_0xB5CEFD608600A09F(), 0))
			{
				return 14;
			}
			else if (func_158(unk_0xB5CEFD608600A09F(), 1))
			{
				return 13;
			}
			else if (func_158(unk_0xB5CEFD608600A09F(), 2))
			{
				return 8;
			}
			else if (func_158(unk_0xB5CEFD608600A09F(), 3))
			{
				return 12;
			}
			else if (func_158(unk_0xB5CEFD608600A09F(), 4))
			{
				return 11;
			}
			else if (func_158(unk_0xB5CEFD608600A09F(), 5))
			{
				return 10;
			}
			else if (func_158(unk_0xB5CEFD608600A09F(), 6))
			{
				return 9;
			}
			else if (func_158(unk_0xB5CEFD608600A09F(), 7))
			{
				return 7;
			}
			else if (func_158(unk_0xB5CEFD608600A09F(), 8))
			{
				return 15;
			}
			if (func_147(unk_0xB5CEFD608600A09F()))
			{
			}
			return -1;
			break;
		
		case 105:
			return 0;
		
		case 106:
			return 1;
		
		case 107:
			return 2;
		
		case 108:
			return 3;
		
		case 109:
			return 4;
		
		case 110:
			return 5;
		
		case 111:
			return 6;
		
		case 112:
			return 7;
		
		case 113:
			return 8;
		
		case 114:
			return 9;
	}
	return -1;
}

int func_147(int iParam0)//Position - 0x127F3
{
	if ((((((((func_157(iParam0) || func_156(iParam0)) || func_155(iParam0)) || func_154(iParam0)) || func_153(iParam0)) || func_152(iParam0)) || func_151(iParam0)) || func_150(iParam0)) || func_148(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_148(int iParam0)//Position - 0x12869
{
	if (iParam0 == func_149())
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_133.f_2, 0);
}

int func_149()//Position - 0x12894
{
	return -1;
}

bool func_150(int iParam0)//Position - 0x1289D
{
	if (iParam0 == func_149())
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_133.f_1, 31);
}

bool func_151(int iParam0)//Position - 0x128C9
{
	if (iParam0 == func_149())
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_133.f_1, 30);
}

bool func_152(int iParam0)//Position - 0x128F5
{
	if (iParam0 == func_149())
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_133.f_1, 29);
}

bool func_153(int iParam0)//Position - 0x12921
{
	if (iParam0 == func_149())
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_133.f_1, 28);
}

bool func_154(int iParam0)//Position - 0x1294D
{
	if (iParam0 == func_149())
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_133.f_1, 27);
}

bool func_155(int iParam0)//Position - 0x12979
{
	if (iParam0 == func_149())
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_133.f_1, 26);
}

bool func_156(int iParam0)//Position - 0x129A5
{
	if (iParam0 == func_149())
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_133.f_1, 25);
}

bool func_157(int iParam0)//Position - 0x129D1
{
	if (iParam0 == func_149())
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_111.f_133.f_1, 24);
}

int func_158(int iParam0, int iParam1)//Position - 0x129FD
{
	switch (iParam1)
	{
		case 4:
			return func_157(iParam0);
		
		case 3:
			return func_156(iParam0);
		
		case 6:
			return func_155(iParam0);
		
		case 1:
			return func_154(iParam0);
		
		case 0:
			return func_153(iParam0);
		
		case 7:
			return func_152(iParam0);
		
		case 2:
			return func_151(iParam0);
		
		case 5:
			return func_150(iParam0);
		
		case 8:
			return func_148(iParam0);
		
		default:
	}
	return 0;
}

int func_159(int iParam0, var uParam1, var uParam2)//Position - 0x12A94
{
	*uParam1 = -1;
	*uParam2 = -1;
	switch (iParam0)
	{
		case 39:
			*uParam1 = 0;
			*uParam2 = 11;
			return 1;
		
		case 43:
			*uParam1 = 28;
			*uParam2 = 64;
			return 1;
		
		case 44:
			*uParam1 = 64;
			*uParam2 = 111;
			return 1;
		
		case 45:
			*uParam1 = 53;
			*uParam2 = 89;
			return 1;
		
		case 46:
			*uParam1 = 28;
			*uParam2 = 89;
			return 1;
		
		case 47:
			*uParam1 = 28;
			*uParam2 = 111;
			return 1;
		
		case 48:
			*uParam1 = 64;
			*uParam2 = 28;
			return 1;
		
		case 49:
			*uParam1 = 1;
			*uParam2 = 89;
			return 1;
		
		case 50:
			*uParam1 = 111;
			*uParam2 = 28;
			return 1;
		
		case 51:
			*uParam1 = 70;
			*uParam2 = 111;
			return 1;
		
		case 52:
			*uParam1 = 64;
			*uParam2 = 111;
			return 1;
		
		case 53:
			*uParam1 = 53;
			*uParam2 = 111;
			return 1;
		
		case 54:
			*uParam1 = 28;
			*uParam2 = 111;
			return 1;
		
		case 55:
			*uParam1 = 1;
			*uParam2 = 53;
			return 1;
		
		case 56:
			*uParam1 = 88;
			*uParam2 = 64;
			return 1;
		
		case 57:
			*uParam1 = 28;
			*uParam2 = 64;
			return 1;
		
		case 58:
			*uParam1 = 70;
			*uParam2 = 88;
			return 1;
		
		case 59:
			*uParam1 = 1;
			*uParam2 = 88;
			return 1;
		
		case 60:
			*uParam1 = 53;
			*uParam2 = 28;
			return 1;
		
		case 61:
			*uParam1 = 28;
			*uParam2 = 111;
			return 1;
		
		case 62:
			*uParam1 = 64;
			*uParam2 = 28;
			return 1;
		
		case 63:
			*uParam1 = 70;
			*uParam2 = 111;
			return 1;
		
		case 64:
			*uParam1 = 28;
			*uParam2 = 111;
			return 1;
		
		case 65:
			*uParam1 = 53;
			*uParam2 = 38;
			return 1;
		
		case 66:
			*uParam1 = 53;
			*uParam2 = 28;
			return 1;
		
		case 67:
			*uParam1 = 111;
			*uParam2 = 28;
			return 1;
		
		case 90:
			*uParam1 = 27;
			*uParam2 = 27;
			return 1;
		
		case 91:
			*uParam1 = 111;
			*uParam2 = 0;
			return 1;
		
		default:
	}
	return 0;
}

int func_160(int iParam0, int iParam1)//Position - 0x12CD7
{
	if (iParam0 == -1)
	{
		return -1;
	}
	switch (iParam0)
	{
		case 17:
			return 0;
		
		case 9:
			return 1;
		
		case 10:
			return 2;
		
		case 11:
			return 3;
		
		case 12:
			return 4;
		
		case 13:
			return 5;
		
		case 14:
			return 6;
		
		case 15:
			return 7;
		
		case 16:
			return 8;
		
		case 19:
			return 9;
		
		case 22:
			return 10;
		
		case 23:
			return 11;
		
		case 24:
			return 12;
		
		case 25:
			return 13;
		
		case 27:
			return 14;
		
		case 28:
			return 15;
		
		case 29:
			return 16;
		
		case 30:
			return 17;
		
		case 31:
			return 18;
		
		case 20:
			return 19;
		
		case 32:
			return 20;
		
		case 21:
			return 21;
		
		case 78:
			return 22;
		
		case 79:
			return 23;
		
		case 80:
			return 24;
		
		case 18:
			return 25;
		
		case 81:
			return 26;
		
		case 82:
			return 27;
		
		case 83:
			return 28;
		
		case 84:
			return 29;
		
		case 85:
			return 30;
		
		case 86:
			return 31;
		
		case 87:
			return 32;
		
		case 88:
			return 33;
		
		case 102:
			return 34;
		
		case 113:
			return 35;
		
		case 160:
			return 36;
		
		case 163:
			return 37;
		
		case 162:
			return 38;
		
		case 164:
			if (func_161(iParam0, 11, iParam1))
			{
				return 40;
			}
			return 39;
		
		case 199:
			return 41;
		
		case 201:
			return 42;
		
		case 200:
			switch (iParam1)
			{
				case 1:
					return 43;
				
				case 2:
					return 44;
				
				case 3:
					return 45;
				
				case 4:
					return 46;
				
				case 5:
					return 47;
				
				case 6:
					return 48;
				
				case 7:
					return 49;
				
				case 8:
					return 50;
				
				case 9:
					return 51;
				
				case 10:
					return 52;
				
				case 11:
					return 53;
				
				case 12:
					return 54;
				
				case 13:
					return 55;
				
				case 14:
					return 56;
				
				case 15:
					return 57;
				
				case 16:
					return 58;
				
				case 17:
					return 59;
				
				case 18:
					return 60;
				
				case 19:
					return 61;
				
				case 20:
					return 62;
				
				case 21:
					return 63;
				
				case 22:
					return 64;
				
				case 23:
					return 65;
				
				case 24:
					return 66;
				
				case 25:
					return 67;
				
				default:
			}
			return 43;
		
		case 171:
			return 68;
		
		case 187:
			return 69;
		
		case 177:
			return 70;
		
		case 183:
			return 71;
		
		case 185:
			return 72;
		
		case 184:
			return 73;
		
		case 188:
			return 74;
		
		case 173:
			return 75;
		
		case 178:
			return 76;
		
		case 186:
			return 77;
		
		case 215:
			return 78;
		
		case 217:
			return 79;
		
		case 224:
			return 80;
		
		case 237:
			return 81;
		
		case 243:
			return 82;
		
		case 244:
			return 83;
		
		case 245:
			return 84;
		
		case 253:
			return 85;
		
		case 254:
			return 86;
		
		case 256:
			return 87;
		
		case 257:
			return 88;
		
		case 258:
			return 89;
		
		case 276:
			if (func_161(iParam0, 16, iParam1))
			{
				return 91;
			}
			return 90;
		
		case 323:
			return 92;
		
		case 324:
			return 93;
		
		case 337:
			return 94;
		
		case 357:
			return 95;
		
		case 402:
			return 96;
		
		case 413:
			switch (iParam1)
			{
				case 1:
					return 97;
				
				case 2:
					return 98;
				
				case 3:
					return 99;
				
				case 4:
					return 100;
				
				case 5:
					return 101;
				
				case 6:
					return 102;
				
				case 7:
					return 103;
				
				case 8:
					return 104;
				
				default:
			}
			return 97;
		
		case 414:
			switch (iParam1)
			{
				case 1:
					return 105;
				
				case 2:
					return 106;
				
				case 3:
					return 107;
				
				case 4:
					return 108;
				
				case 5:
					return 109;
				
				case 6:
					return 110;
				
				case 7:
					return 111;
				
				case 8:
					return 112;
				
				case 9:
					return 113;
				
				case 10:
					return 114;
				
				default:
			}
			return 105;
		
		default:
	}
	return -1;
}

int func_161(int iParam0, int iParam1, int iParam2)//Position - 0x1321E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_130(iParam0, -1);
	if (iParam0 == 164)
	{
		if (iParam2 == 2)
		{
			return 1;
		}
		return 0;
	}
	if (iParam0 == 276)
	{
		if (iParam2 == 2)
		{
			return 1;
		}
		return 0;
	}
	if (iParam0 == 95)
	{
		if (unk_0xBAF5BEF76386574D())
		{
			return 1;
		}
		return 0;
	}
	else if ((iParam0 == 96 || iParam0 == 97) || iParam0 == 98)
	{
		if (func_43() && func_196())
		{
			return 1;
		}
		return 0;
	}
	if ((((iParam0 == 206 && unk_0x7AF0088ABFA713B6()) || (iParam0 == 207 && unk_0x7AF0088ABFA713B6())) || (iParam0 == 208 && unk_0x7AF0088ABFA713B6())) || (iParam0 == 209 && unk_0x7AF0088ABFA713B6()))
	{
		if (func_43())
		{
			return 1;
		}
		return 0;
	}
	if ((((iParam0 == 170 || iParam0 == 120) || iParam0 == 119) || iParam0 == 117) || iParam0 == 166)
	{
		return 1;
	}
	if ((iParam0 == 221 || iParam0 == 135) || iParam0 == 210)
	{
		if (iParam1 == 26)
		{
			return 1;
		}
		return 0;
	}
	if (func_198(iParam0))
	{
		if (Global_1108D)
		{
			return 1;
		}
		return 0;
	}
	iVar1 = func_195(iVar0);
	if (iVar1 != -1)
	{
		if (func_193(func_194(iVar0)))
		{
			return 1;
		}
		return 0;
	}
	if (func_192(iParam0))
	{
		if (func_43())
		{
			if ((iParam0 == 205 && Global_40001.f_4AB1) || (iParam0 != 205 && Global_40001.f_4AB0))
			{
				return 1;
			}
			return 0;
		}
		return 0;
	}
	if (func_191(iParam0))
	{
		if (func_182(iParam0))
		{
			return 0;
		}
		return 1;
	}
	iVar2 = func_181(iVar0);
	if (iVar2 != -1)
	{
		if (func_179(func_180(iVar0)))
		{
			return 1;
		}
		return 0;
	}
	iVar3 = func_178(iVar0);
	if (iVar3 > 0)
	{
		if (func_176(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar4 = func_175(iVar0);
	if (iVar4 != -1)
	{
		if (func_173(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar5 = func_172(iVar0);
	if (iVar5 != -1)
	{
		if (func_162(iVar0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_162(int iParam0)//Position - 0x13487
{
	switch (iParam0)
	{
		case 1945374990:
			if (func_170(7226, -1, 0) >= func_169(iParam0) || Global_40001.f_5BC7)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 1653666139:
			if (func_170(7226, -1, 0) >= func_169(iParam0) || Global_40001.f_5BC8)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 2069146067:
			if (func_166(22050, -1, -1) >= func_169(iParam0) || Global_40001.f_5BC9)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 345756458:
			if (unk_0xFA30DFD0084E92FE(Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_111.f_10A.f_7, 1) || Global_40001.f_5BCB)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case -420911112:
			if (func_170(7224, -1, 0) >= func_169(iParam0) || Global_40001.f_5BCC)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case -307958377:
			if (func_170(7224, -1, 0) >= func_169(iParam0) || Global_40001.f_5BCD)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case -638562243:
			if (func_163(22123, -1, -1) || Global_40001.f_5BCA)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
	}
	return 0;
}

int func_163(int iParam0, int iParam1, int iParam2)//Position - 0x13604
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_93();
	}
	iVar1 = func_165(iParam0, iParam1);
	uVar2 = func_164(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xDAB376DC6F83D68C(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_164(int iParam0)//Position - 0x13641
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

int func_165(int iParam0, int iParam1)//Position - 0x1392D
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_93();
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

int func_166(int iParam0, int iParam1, int iParam2)//Position - 0x13BFA
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_93();
	}
	iVar0 = 0;
	iVar1 = func_168(iParam0, iParam1);
	iVar2 = func_167(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0x6AEE934BCCBCAA0E(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_167(int iParam0)//Position - 0x13C40
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

int func_168(int iParam0, int iParam1)//Position - 0x13FB4
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_93();
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

int func_169(int iParam0)//Position - 0x142DF
{
	switch (iParam0)
	{
		case 1945374990:
			return Global_40001.f_5BCE;
			break;
		
		case 1653666139:
			return Global_40001.f_5BCF;
			break;
		
		case 2069146067:
			return Global_40001.f_5BD0;
			break;
		
		case -420911112:
			return Global_40001.f_5BD1;
			break;
		
		case -307958377:
			return Global_40001.f_5BD2;
			break;
	}
	return 0;
}

int func_170(int iParam0, int iParam1, int iParam2)//Position - 0x1434E
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_269BC5[iParam0 /*3*/][func_171(iParam1)];
	if (unk_0x6CB99B97664C3727(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_171(var uParam0)//Position - 0x14380
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_93();
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

int func_172(int iParam0)//Position - 0x143B4
{
	switch (iParam0)
	{
		case 1945374990:
			return 0;
			break;
		
		case 1653666139:
			return 1;
			break;
		
		case 2069146067:
			return 2;
			break;
		
		case -638562243:
			return 3;
			break;
		
		case 345756458:
			return 4;
			break;
		
		case -420911112:
			return 5;
			break;
		
		case -307958377:
			return 6;
			break;
	}
	return -1;
}

int func_173(int iParam0)//Position - 0x1441F
{
	int iVar0;
	
	if (!Global_11542)
	{
		return 0;
	}
	iVar0 = func_170(5657, -1, 0);
	switch (iParam0)
	{
		case 1483171323:
			return unk_0xFA30DFD0084E92FE(iVar0, func_174(1));
		
		case 1181327175:
			return unk_0xFA30DFD0084E92FE(iVar0, func_174(2));
		
		case -1693015116:
			return unk_0xFA30DFD0084E92FE(iVar0, func_174(6));
		
		case 886810209:
			return unk_0xFA30DFD0084E92FE(iVar0, func_174(7));
		
		case -692292317:
			return unk_0xFA30DFD0084E92FE(iVar0, func_174(10));
		
		case -212993243:
			return unk_0xFA30DFD0084E92FE(iVar0, func_174(11));
		
		case -1435527158:
			return unk_0xFA30DFD0084E92FE(iVar0, func_174(12));
		
		case 447548909:
			return unk_0xFA30DFD0084E92FE(iVar0, func_174(13));
		
		case 1489874736:
			return unk_0xFA30DFD0084E92FE(iVar0, func_174(15));
		
		default:
	}
	return 0;
}

int func_174(int iParam0)//Position - 0x144FF
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 1;
		
		case 2:
			return 2;
		
		case 3:
			return 3;
		
		case 4:
			return 4;
		
		case 5:
			return 5;
		
		case 6:
			return 6;
		
		case 7:
			return 7;
		
		case 8:
			return 8;
		
		case 9:
			return 9;
		
		case 10:
			return 10;
		
		case 11:
			return 11;
		
		case 12:
			return 12;
		
		case 13:
			return 13;
		
		case 14:
			return 14;
		
		case 15:
			return 15;
		
		default:
	}
	return -1;
}

int func_175(int iParam0)//Position - 0x145B7
{
	switch (iParam0)
	{
		case 1483171323:
			return 0;
			break;
		
		case 1181327175:
			return 1;
			break;
		
		case -1693015116:
			return 2;
			break;
		
		case 886810209:
			return 3;
			break;
		
		case -692292317:
			return 4;
			break;
		
		case -212993243:
			return 5;
			break;
		
		case -1435527158:
			return 6;
			break;
		
		case 447548909:
			return 7;
			break;
		
		case 1489874736:
			return 8;
			break;
	}
	return -1;
}

int func_176(int iParam0)//Position - 0x1463D
{
	int iVar0;
	int iVar1;
	
	if (!Global_11542)
	{
		return 0;
	}
	iVar0 = func_178(iParam0);
	iVar1 = func_177();
	if (iVar1 >= iVar0)
	{
		return 1;
	}
	return 0;
}

int func_177()//Position - 0x1466B
{
	return func_170(6109, -1, 0);
}

int func_178(int iParam0)//Position - 0x1467C
{
	switch (iParam0)
	{
		case -1763555241:
			return Global_40001.f_544C;
		
		case -975345305:
			return Global_40001.f_544D;
		
		case -1523619738:
			return Global_40001.f_544E;
		
		case -1984275979:
			return Global_40001.f_544F;
		
		case -1700874274:
			return Global_40001.f_5450;
		
		case 1565978651:
			return Global_40001.f_5451;
		
		case 1043222410:
			return Global_40001.f_5452;
		
		case -32878452:
			return Global_40001.f_5453;
		
		case -1007528109:
			return Global_40001.f_5454;
		
		case -749299473:
			return Global_40001.f_5455;
		
		case -1386191424:
			return Global_40001.f_5456;
		
		case -392675425:
			return Global_40001.f_5457;
		
		case 1036591958:
			return Global_40001.f_5458;
		
		case -42959138:
			return Global_40001.f_5459;
		
		default:
	}
	return 0;
}

bool func_179(int iParam0)//Position - 0x1476C
{
	if (!Global_11542)
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(func_170(5459, -1, 0), iParam0);
}

int func_180(int iParam0)//Position - 0x1478F
{
	switch (iParam0)
	{
		case 1897744184:
			return 0;
		
		case -32236122:
			return 1;
		
		case -1881846085:
			return 2;
		
		case 562680400:
			return 3;
		
		case -1210451983:
			return 5;
		
		case 884483972:
			return 7;
		
		default:
	}
	return 3;
}

int func_181(int iParam0)//Position - 0x147DB
{
	switch (iParam0)
	{
		case 1897744184:
			return 0;
			break;
		
		case -32236122:
			return 1;
			break;
		
		case -1881846085:
			return 2;
			break;
		
		case 562680400:
			return 3;
			break;
		
		case -1210451983:
			return 4;
			break;
		
		case 884483972:
			return 5;
			break;
	}
	return -1;
}

int func_182(int iParam0)//Position - 0x14839
{
	int iVar0;
	
	if (!Global_11542)
	{
		return 0;
	}
	iVar0 = 0;
	switch (iParam0)
	{
		case 187:
			iVar0 = 16;
			break;
		
		case 177:
			iVar0 = 12;
			break;
		
		case 185:
			iVar0 = 14;
			break;
		
		case 174:
			iVar0 = 9;
			break;
		
		case 171:
			iVar0 = 20;
			break;
		
		case 172:
			iVar0 = 7;
			break;
		
		case 173:
			iVar0 = 8;
			break;
		
		case 175:
			iVar0 = 10;
			break;
		
		case 176:
			iVar0 = 11;
			break;
		
		case 178:
			iVar0 = 5;
			break;
		
		case 179:
			iVar0 = 6;
			break;
		
		case 183:
			iVar0 = 21;
			break;
		
		case 180:
			iVar0 = 18;
			break;
		
		case 181:
			iVar0 = 22;
			break;
		
		case 182:
			iVar0 = 19;
			break;
		
		case 184:
			iVar0 = 13;
			break;
		
		case 186:
			iVar0 = 15;
			break;
		
		case 188:
			iVar0 = 17;
			break;
	}
	return func_183(iVar0);
}

bool func_183(int iParam0)//Position - 0x14944
{
	int iVar0;
	int iVar1;
	
	if (func_190())
	{
		return 0;
	}
	iVar0 = func_185(iParam0);
	iVar1 = iParam0;
	return unk_0xFA30DFD0084E92FE(iVar0, func_184(iVar1));
}

int func_184(int iParam0)//Position - 0x1496F
{
	return (iParam0 % 32);
}

var func_185(var uParam0)//Position - 0x1497C
{
	var uVar0;
	
	uVar0 = func_170(func_186(uParam0), -1, 0);
	return uVar0;
}

int func_186(var uParam0)//Position - 0x14994
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_189(iVar0);
	if ((func_188() == 0 || func_187() == 0) || (func_188() == 999 && func_187() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 738;
				break;
			
			case 1:
				return 739;
				break;
			}
	}
	return 8804;
}

int func_187()//Position - 0x14A00
{
	return Global_62BE;
}

int func_188()//Position - 0x14A0B
{
	return Global_62BD;
}

int func_189(int iParam0)//Position - 0x14A16
{
	return (iParam0 / 32);
}

bool func_190()//Position - 0x14A23
{
	return Global_140841;
}

int func_191(int iParam0)//Position - 0x14A2F
{
	if (((((((((((((((iParam0 == 171 || iParam0 == 172) || iParam0 == 173) || iParam0 == 175) || iParam0 == 177) || iParam0 == 178) || iParam0 == 179) || iParam0 == 180) || iParam0 == 181) || iParam0 == 182) || iParam0 == 183) || iParam0 == 184) || iParam0 == 185) || iParam0 == 186) || iParam0 == 187) || iParam0 == 188)
	{
		return 1;
	}
	return 0;
}

int func_192(int iParam0)//Position - 0x14AE9
{
	if ((((((iParam0 == 199 || iParam0 == 200) || iParam0 == 201) || iParam0 == 202) || iParam0 == 203) || iParam0 == 204) || iParam0 == 205)
	{
		return 1;
	}
	return 0;
}

bool func_193(int iParam0)//Position - 0x14B40
{
	if (!Global_11542)
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(func_170(5322, -1, 0), iParam0);
}

int func_194(int iParam0)//Position - 0x14B63
{
	switch (iParam0)
	{
		case joaat("dune4"):
			return 0;
		
		case joaat("dune5"):
			return 0;
		
		case joaat("wastelander"):
			return 1;
		
		case joaat("blazer5"):
			return 2;
		
		case joaat("phantom2"):
			return 3;
		
		case joaat("voltic2"):
			return 4;
		
		case joaat("technical2"):
			return 5;
		
		case joaat("boxville5"):
			return 6;
		
		case joaat("ruiner2"):
			return 7;
		
		default:
	}
	return 0;
}

int func_195(var uParam0)//Position - 0x14BCD
{
	int iVar0;
	
	iVar0 = uParam0;
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

int func_196()//Position - 0x14C56
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0xFA30DFD0084E92FE(Global_19, 5))
	{
		if (unk_0xFA30DFD0084E92FE(Global_19, 1) || unk_0xFA30DFD0084E92FE(Global_19, 3))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x6CB99B97664C3727(joaat("sp_unlock_exclus_content"), &iVar0, -1))
	{
		if (unk_0xFA30DFD0084E92FE(iVar0, 5))
		{
			if (unk_0xFA30DFD0084E92FE(iVar0, 1) || unk_0xFA30DFD0084E92FE(iVar0, 3))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (unk_0x3C47C07E0231858C(0))
	{
		if (Global_231F1.f_3)
		{
			iVar2 = joaat("mpply_plat_up_lb_check");
			if (unk_0x6CB99B97664C3727(iVar2, &iVar1, -1))
			{
				if (unk_0xFA30DFD0084E92FE(iVar1, 5))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0x7A4B76D06AAF8132())
	{
		iVar3 = unk_0x2DC92D46FC48E795(866);
		if (unk_0xFA30DFD0084E92FE(iVar3, 1) || unk_0xFA30DFD0084E92FE(iVar3, 3))
		{
			return 1;
		}
	}
	if (unk_0x7E3A4CFA5545546C())
	{
		if (unk_0x6EFCE916927099A8())
		{
			if (unk_0xBD27C05334738D84())
			{
				unk_0x6CB99B97664C3727(joaat("sp_unlock_exclus_content"), &iVar4, -1);
				unk_0xF0059F27F7BB6680(&iVar4, 1);
				unk_0xF0059F27F7BB6680(&iVar4, 3);
				unk_0xF0059F27F7BB6680(&iVar4, 5);
				unk_0xF0059F27F7BB6680(&Global_19, 1);
				unk_0xF0059F27F7BB6680(&Global_19, 3);
				unk_0xF0059F27F7BB6680(&Global_19, 5);
				unk_0x3A57956BCE003880(joaat("sp_unlock_exclus_content"), iVar4, 1);
				if (unk_0x7A4B76D06AAF8132())
				{
					iVar4 = unk_0x2DC92D46FC48E795(866);
					unk_0xF0059F27F7BB6680(&iVar4, 1);
					unk_0xF0059F27F7BB6680(&iVar4, 3);
					unk_0x973C4C95367920C1(iVar4);
				}
				return 1;
			}
		}
	}
	return 0;
}

bool func_197(int iParam0, var uParam1)//Position - 0x14DAA
{
	*uParam1 = -1f;
	switch (iParam0)
	{
		case joaat("dune5"):
			*uParam1 = 1f;
			break;
		
		case joaat("boxville5"):
			*uParam1 = 1f;
			break;
		
		case joaat("wastelander"):
			*uParam1 = 1f;
			break;
		
		case -1523619738:
			*uParam1 = 0.2f;
			break;
		
		case -32878452:
			*uParam1 = 0.15f;
			break;
		
		case -1007528109:
			*uParam1 = 0.3f;
			break;
		
		case -42959138:
			*uParam1 = 0.5f;
			break;
		
		case -1763555241:
			*uParam1 = 0.3f;
			break;
		
		case -749299473:
			*uParam1 = 0.4f;
			break;
		
		case 1565978651:
			*uParam1 = 0.3f;
			break;
		
		case 1036591958:
			*uParam1 = 0.4f;
			break;
		
		case -1386191424:
			*uParam1 = 0.4f;
			break;
		
		case -975345305:
			*uParam1 = 0.4f;
			break;
		
		case -392675425:
			*uParam1 = 0.3f;
			break;
		
		case -1700874274:
			*uParam1 = 0.5f;
			break;
		
		case 1043222410:
			*uParam1 = 0.15f;
			break;
		
		case -1435527158:
			*uParam1 = 0.6f;
			break;
	}
	return *uParam1 != -1f;
}

int func_198(int iParam0)//Position - 0x14ED7
{
	if ((((((iParam0 == 233 || iParam0 == 234) || iParam0 == 235) || iParam0 == 236) || iParam0 == 240) || iParam0 == 241) || iParam0 == 263)
	{
		return 1;
	}
	return 0;
}

void func_199(int iParam0, int iParam1)//Position - 0x14F2F
{
	switch (iParam0)
	{
		case 64:
			unk_0xF0059F27F7BB6680(iParam1, 4);
			break;
		
		case 67:
			unk_0xF0059F27F7BB6680(iParam1, 4);
			break;
		
		case 72:
			unk_0xF0059F27F7BB6680(iParam1, 1);
			break;
		
		case 117:
			unk_0x7CB6FD92BE491AD9(iParam1, 1);
			break;
		
		case 49:
			unk_0x7CB6FD92BE491AD9(iParam1, 0);
			unk_0xF0059F27F7BB6680(iParam1, 1);
			break;
		
		case 118:
			unk_0xF0059F27F7BB6680(iParam1, 0);
			unk_0x7CB6FD92BE491AD9(iParam1, 1);
			break;
		
		case 1:
			unk_0xF0059F27F7BB6680(iParam1, 1);
			break;
		
		case 119:
			unk_0x7CB6FD92BE491AD9(iParam1, 1);
			break;
		
		case 77:
			unk_0xF0059F27F7BB6680(iParam1, 0);
			unk_0x7CB6FD92BE491AD9(iParam1, 1);
			unk_0x7CB6FD92BE491AD9(iParam1, 2);
			break;
		
		case 120:
			unk_0x7CB6FD92BE491AD9(iParam1, 0);
			unk_0xF0059F27F7BB6680(iParam1, 1);
			unk_0x7CB6FD92BE491AD9(iParam1, 2);
			break;
		
		case 130:
			unk_0xF0059F27F7BB6680(iParam1, 0);
			break;
		
		case 132:
			unk_0xF0059F27F7BB6680(iParam1, 0);
			break;
		
		case 135:
			unk_0x7CB6FD92BE491AD9(iParam1, 0);
			unk_0xF0059F27F7BB6680(iParam1, 1);
			break;
		
		case 137:
			unk_0xF0059F27F7BB6680(iParam1, 0);
			break;
		
		case 141:
			unk_0xF0059F27F7BB6680(iParam1, 1);
			unk_0x7CB6FD92BE491AD9(iParam1, 6);
			break;
		
		case 147:
			unk_0xF0059F27F7BB6680(iParam1, 0);
			unk_0xF0059F27F7BB6680(iParam1, 1);
			unk_0xF0059F27F7BB6680(iParam1, 2);
			unk_0xF0059F27F7BB6680(iParam1, 3);
			unk_0xF0059F27F7BB6680(iParam1, 4);
			unk_0xF0059F27F7BB6680(iParam1, 5);
			unk_0xF0059F27F7BB6680(iParam1, 6);
			unk_0xF0059F27F7BB6680(iParam1, 7);
			unk_0xF0059F27F7BB6680(iParam1, 8);
			break;
		
		case 203:
			unk_0xF0059F27F7BB6680(iParam1, 0);
			unk_0x7CB6FD92BE491AD9(iParam1, 1);
			unk_0x7CB6FD92BE491AD9(iParam1, 2);
			break;
		
		case 100:
			unk_0xF0059F27F7BB6680(iParam1, 0);
			unk_0xF0059F27F7BB6680(iParam1, 1);
			unk_0xF0059F27F7BB6680(iParam1, 2);
			break;
		
		case 170:
			unk_0x7CB6FD92BE491AD9(iParam1, 0);
			unk_0x7CB6FD92BE491AD9(iParam1, 1);
			unk_0x7CB6FD92BE491AD9(iParam1, 2);
			break;
		
		case 160:
			unk_0xF0059F27F7BB6680(iParam1, 15);
			break;
		
		case 161:
			unk_0xF0059F27F7BB6680(iParam1, 15);
			break;
		
		case 192:
			unk_0xF0059F27F7BB6680(iParam1, 0);
			unk_0xF0059F27F7BB6680(iParam1, 1);
			unk_0x7CB6FD92BE491AD9(iParam1, 2);
			break;
		
		case 221:
			unk_0x7CB6FD92BE491AD9(iParam1, 0);
			unk_0xF0059F27F7BB6680(iParam1, 1);
			unk_0x7CB6FD92BE491AD9(iParam1, 2);
			break;
		
		case 222:
			unk_0xF0059F27F7BB6680(iParam1, 1);
			break;
		
		case 172:
			unk_0xF0059F27F7BB6680(iParam1, 1);
			break;
		
		case 165:
			unk_0x7CB6FD92BE491AD9(iParam1, 0);
			unk_0xF0059F27F7BB6680(iParam1, 1);
			break;
		
		case 166:
			unk_0xF0059F27F7BB6680(iParam1, 0);
			unk_0x7CB6FD92BE491AD9(iParam1, 1);
			break;
		
		case 139:
			unk_0xF0059F27F7BB6680(iParam1, 0);
			break;
		
		case 104:
			unk_0xF0059F27F7BB6680(iParam1, 1);
			break;
		
		case 109:
			unk_0xF0059F27F7BB6680(iParam1, 0);
			unk_0xF0059F27F7BB6680(iParam1, 1);
			unk_0xF0059F27F7BB6680(iParam1, 2);
			break;
		
		case 227:
		case 252:
			unk_0xF0059F27F7BB6680(iParam1, 1);
			unk_0x7CB6FD92BE491AD9(iParam1, 2);
			unk_0x7CB6FD92BE491AD9(iParam1, 4);
			break;
		
		case 97:
			unk_0xF0059F27F7BB6680(iParam1, 0);
			unk_0xF0059F27F7BB6680(iParam1, 1);
			break;
		
		case 52:
			unk_0xF0059F27F7BB6680(iParam1, 1);
			break;
		
		case 108:
			unk_0xF0059F27F7BB6680(iParam1, 1);
			break;
		
		case 237:
			unk_0xF0059F27F7BB6680(iParam1, 9);
			break;
		
		case 238:
			unk_0x7CB6FD92BE491AD9(iParam1, 0);
			unk_0xF0059F27F7BB6680(iParam1, 1);
			unk_0xF0059F27F7BB6680(iParam1, 2);
			break;
		
		case 233:
		case 234:
		case 235:
		case 236:
		case 240:
		case 241:
		case 263:
			if (Global_1108D)
			{
				unk_0xF0059F27F7BB6680(iParam1, 9);
			}
			break;
		
		case 271:
			unk_0xF0059F27F7BB6680(iParam1, 0);
			unk_0xF0059F27F7BB6680(iParam1, 1);
			unk_0xF0059F27F7BB6680(iParam1, 2);
			unk_0xF0059F27F7BB6680(iParam1, 3);
			unk_0xF0059F27F7BB6680(iParam1, 4);
			break;
		
		case 272:
			unk_0xF0059F27F7BB6680(iParam1, 3);
			unk_0xF0059F27F7BB6680(iParam1, 4);
			break;
		
		case 273:
			unk_0xF0059F27F7BB6680(iParam1, 0);
			break;
		
		case 281:
			unk_0xF0059F27F7BB6680(iParam1, 0);
			break;
		
		case 267:
			unk_0xF0059F27F7BB6680(iParam1, 0);
			break;
		
		case 268:
			unk_0xF0059F27F7BB6680(iParam1, 0);
			break;
		
		case 292:
			unk_0xF0059F27F7BB6680(iParam1, 9);
			break;
		
		case 309:
			unk_0xF0059F27F7BB6680(iParam1, 9);
			break;
		
		case 329:
			unk_0xF0059F27F7BB6680(iParam1, 9);
			break;
		
		case 364:
			unk_0xF0059F27F7BB6680(iParam1, 0);
			unk_0xF0059F27F7BB6680(iParam1, 1);
			unk_0xF0059F27F7BB6680(iParam1, 9);
			break;
		
		case 360:
			unk_0xF0059F27F7BB6680(iParam1, 9);
			break;
		
		case 401:
			unk_0xF0059F27F7BB6680(iParam1, 0);
			unk_0xF0059F27F7BB6680(iParam1, 1);
			unk_0xF0059F27F7BB6680(iParam1, 6);
			unk_0xF0059F27F7BB6680(iParam1, 9);
			break;
		
		case 406:
			unk_0xF0059F27F7BB6680(iParam1, 9);
			break;
		
		case 404:
			unk_0xF0059F27F7BB6680(iParam1, 9);
			break;
		
		default:
			return;
			break;
	}
}

void func_200(char* sParam0)//Position - 0x153ED
{
	int iVar0;
	
	StringCopy(&(Global_43C1.f_1), sParam0, 16);
	Global_43C1.f_44 = 0;
	Global_43C1.f_45 = 0;
	Global_43C1.f_46 = 0;
	Global_43C1.f_47 = 0;
	Global_43C1.f_48 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_43C1.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_201(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x15438
{
	Global_43C1.f_1359[0] = iParam0;
	Global_43C1.f_1359[1] = iParam1;
	Global_43C1.f_1359[2] = iParam2;
	Global_43C1.f_1359[3] = iParam3;
	Global_43C1.f_1359[4] = iParam4;
}

void func_202(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x15477
{
	Global_43C1.f_133E[0] = iParam0;
	Global_43C1.f_133E[1] = iParam1;
	Global_43C1.f_133E[2] = iParam2;
	Global_43C1.f_133E[3] = iParam3;
	Global_43C1.f_133E[4] = iParam4;
	Global_43C1.f_13E8 = 0;
	if (iParam0 != 0)
	{
		Global_43C1.f_13E8++;
	}
	if (iParam1 != 0)
	{
		Global_43C1.f_13E8++;
	}
	if (iParam2 != 0)
	{
		Global_43C1.f_13E8++;
	}
	if (iParam3 != 0)
	{
		Global_43C1.f_13E8++;
	}
	if (iParam4 != 0)
	{
		Global_43C1.f_13E8++;
	}
}

void func_203(bool bParam0, bool bParam1)//Position - 0x15521
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_43C1.f_49[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_43C1.f_84C[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_25827C[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_43C1.f_F4E[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_43C1.f_104F[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_43C1.f_1151[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_43C1.f_135F[iVar0] = 0;
		Global_43C1.f_13E9[iVar0] = 0;
		Global_43C1.f_146A[iVar0] = 0;
		Global_43C1.f_1672[iVar0] = 0f;
		Global_43C1.f_14EB[iVar0] = 0;
		Global_43C1.f_15EC[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_43C1.f_133E[iVar0] = 0;
		Global_43C1.f_134A[iVar0] = 0f;
		Global_43C1.f_1344[iVar0] = -1f;
		Global_43C1.f_1351[iVar0] = 0;
		Global_43C1.f_1359[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_43C1.f_12E2[iVar0 /*4*/]), "", 16);
		Global_43C1.f_1313[iVar0] = -1;
		Global_43C1.f_1320[iVar0] = 358;
		Global_43C1.f_132D[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 52)
	{
		StringCopy(&(Global_43C1.f_16FE[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_43C1.f_1A3F[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 256)
		{
			Global_43C1.f_64A[iVar0] = 0;
			iVar0++;
		}
	}
	StringCopy(&(Global_41188A.f_10), "", 16);
	Global_41188A.f_14 = -1;
	Global_43C1 = 0;
	Global_43C1.f_13E0 = 0;
	Global_43C1.f_13E1 = 0;
	Global_43C1.f_13E2 = 0;
	Global_43C1.f_13E4 = 0;
	Global_43C1.f_13E5 = 0;
	Global_43C1.f_13E6 = 0;
	Global_43C1.f_13E3 = 0;
	Global_43C1.f_166D = 0;
	Global_43C1.f_15E6 = 0;
	Global_43C1.f_15E5 = 0;
	Global_43C1.f_15E7 = 0;
	StringCopy(&(Global_43C1.f_11D2), "", 16);
	Global_43C1.f_1218 = 0;
	Global_43C1.f_1219 = 0;
	Global_43C1.f_121A = 0;
	Global_43C1.f_121B = 0;
	Global_43C1.f_121C = 0;
	Global_43C1.f_121D = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_43C1.f_11D6[iVar0] = 0;
		iVar0++;
	}
	Global_43C1.f_121E = 0;
	StringCopy(&(Global_41188A.f_15), "", 16);
	Global_41188A.f_3D = 0;
	Global_41188A.f_3E = 0;
	Global_41188A.f_3F = 0;
	Global_41188A.f_40 = 0;
	Global_41188A.f_41 = 0;
	Global_41188A.f_42 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_41188A.f_19[iVar0] = 0;
		iVar0++;
	}
	Global_41188A.f_43 = 0;
	StringCopy(&(Global_43C1.f_1), "", 16);
	Global_43C1.f_1350 = 0f;
	Global_43C1.f_44 = 0;
	Global_43C1.f_45 = 0;
	Global_43C1.f_46 = 0;
	Global_43C1.f_47 = 0;
	Global_43C1.f_48 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_43C1.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_43C1.f_15EB = 0;
	Global_43C1.f_15EA = 0;
	Global_43C1.f_15E8 = 0;
	Global_43C1.f_15E9 = 0;
	Global_43C1.f_121F = 0;
	Global_43C1.f_1220 = 0;
	Global_43C1.f_13E7 = 10;
	Global_43C1.f_13E8 = 0;
	Global_43C1.f_166F = 0f;
	Global_43C1.f_1670 = 0f;
	Global_43C1.f_15DE = 0;
	Global_43C1.f_15DF = 0;
	Global_43C1.f_15E0 = 0f;
	Global_43C1.f_15E1 = 0;
	Global_43C1.f_15E3 = 0;
	Global_43C1.f_15E2 = 0;
	Global_43C1.f_15E4 = 0;
	Global_43C1.f_1EF7 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_43C1.f_16F3[iVar0] = -1;
		Global_43C1.f_16F6[iVar0] = -1;
		iVar0++;
	}
	Global_43C1.f_1357 = 0f;
	Global_43C1.f_133A = 0;
	Global_43C1.f_1358 = 0;
	iVar0 = 0;
	while (iVar0 < Global_43C1.f_16F9)
	{
		Global_43C1.f_16F9[iVar0] = 0;
		iVar0++;
	}
	Global_43C1.f_1EE2 = 0;
	Global_43C1.f_1EDD = 0;
	Global_43C1.f_1EE7 = 0;
	Global_43C1.f_1EEC = 0;
	Global_43C1.f_1EF1 = 0;
	Global_43C1.f_1EF3 = 0;
	Global_43C1.f_1EF9 = 0;
	Global_43BE = 0.05f;
	Global_43BF = 0.05f;
	Global_43C0 = 0.225f;
	fVar2 = unk_0x3771EE4CB542D71E(0);
	if (bParam0)
	{
		Global_43C0 = (0.225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_43C0 = (0.225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_43C0 = 0.225f;
	}
}

void func_204()//Position - 0x159FA
{
	if (unk_0x8ACB0C3FACC09467())
	{
		unk_0xFCEBCC3D5D7DB96E(0.325f, 0.3f);
	}
}

int func_205(int iParam0, bool bParam1)//Position - 0x15A18
{
	int iVar0;
	
	iVar0 = func_70(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x6A9CDB766DF7216F(unk_0xFC1CAE18F3ECBF2D()))
	{
		return 0;
	}
	if (func_80(0))
	{
		return 0;
	}
	if (unk_0x866EAD7E27D8D0F8())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_8F05[iVar0 /*32*/] == 1 && Global_8F05[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_8F05[iVar0 /*32*/].f_1D)
				{
					return 0;
				}
			}
			Global_8F05[iVar0 /*32*/].f_5 = 1;
			Global_8F05[iVar0 /*32*/].f_1D = 1;
			return 1;
		}
		else
		{
			if (Global_8F05[iVar0 /*32*/] == 0)
			{
			}
			if (Global_8F05[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

bool func_206(char* sParam0, int iParam1, bool bParam2)//Position - 0x15AD0
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_73(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_43C1.f_1581[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0xF1734B55490E9045(&(Global_43C1.f_1581[iVar0 /*4*/])))
	{
		unk_0x900CF084251DED26(&(Global_43C1.f_1581[iVar0 /*4*/]), 9);
		Global_43C1.f_157A[iVar0] = 1;
		if (!unk_0x4C7022A83B41D888(&(Global_43C1.f_1581[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0x8AA3F48A15444B98("CommonMenu", false);
	Global_43C1.f_156C[iVar0] = 1;
	if (!unk_0x499783D01578C2D2("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		unk_0x8AA3F48A15444B98("MPShopSale", false);
		Global_43C1.f_1573[iVar0] = 1;
		if (!unk_0x499783D01578C2D2("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_43C1.f_159A[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_207(&(Global_43C1.f_159A[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_207(var uParam0)//Position - 0x15BC6
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!unk_0xA7F138B5B1AB2CF6(*uParam0))
			{
				*uParam0 = unk_0x9934FEFB3B8C6DB8(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0xA7F138B5B1AB2CF6(*uParam0))
					{
						uParam0->f_8 = unk_0x105601648511CC64();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0x105601648511CC64();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0xA7F138B5B1AB2CF6(*uParam0))
			{
				uParam0->f_8 = unk_0x105601648511CC64();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0xA7F138B5B1AB2CF6(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_208(char* sParam0, int iParam1)//Position - 0x15C68
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 0, true, iParam1);
}

int func_209(char* sParam0)//Position - 0x15C7F
{
	unk_0xF07D20149ECBC61E(sParam0);
	return unk_0xA66DBDA0A072514A(0);
}

void func_210(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)//Position - 0x15C92
{
	int iVar0;
	
	if (unk_0xB731B8C5BCE89836(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x7930B3E9C919E90F())
	{
		if (!*iParam0 == -1)
		{
			func_69(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_8F05[iVar0 /*32*/])
		{
			Global_8F05[iVar0 /*32*/] = 1;
			Global_8F05[iVar0 /*32*/].f_1 = Global_8FCE;
			Global_8FCE++;
			Global_8F05[iVar0 /*32*/].f_4 = 0;
			Global_8F05[iVar0 /*32*/].f_1D = 0;
			Global_8F05[iVar0 /*32*/].f_5 = 0;
			Global_8F05[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_8F05[iVar0 /*32*/].f_8), sParam2, 16);
			Global_8F05[iVar0 /*32*/].f_6 = iParam3;
			Global_8F05[iVar0 /*32*/].f_1F = unk_0x8A55B15F4133C912();
			Global_8F05[iVar0 /*32*/].f_7 = 0;
			Global_8F05[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0xF1734B55490E9045(sParam4))
			{
				Global_8F05[iVar0 /*32*/].f_C = 1;
				StringCopy(&(Global_8F05[iVar0 /*32*/].f_D), sParam4, 64);
				Global_8F05[iVar0 /*32*/].f_1E = iParam6;
			}
			else
			{
				Global_8F05[iVar0 /*32*/].f_C = 0;
				Global_8F05[iVar0 /*32*/].f_1E = 0;
			}
			*iParam0 = Global_8F05[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

bool func_211(int iParam0, int iParam1)//Position - 0x15DBD
{
	int iVar0;
	
	if (iParam0 >= 312)
	{
		return 0;
	}
	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 > 2)
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_19B04.f_6241[iParam0], iVar0);
}

int func_212(int iParam0)//Position - 0x15DFB
{
	int iVar0;
	int iVar1[128];
	
	if (func_215(1, 1))
	{
		if (iVar0 < (iVar1 - 1))
		{
			iVar1[iVar0] = joaat("elegy2");
			iVar0++;
		}
	}
	if (unk_0xFA30DFD0084E92FE(Global_19B04.f_4871[45 /*6*/], 3))
	{
		if (iVar0 < (iVar1 - 1))
		{
			iVar1[iVar0] = joaat("dune2");
			iVar0++;
		}
	}
	if (func_43() && !unk_0x7AF0088ABFA713B6())
	{
		if (func_214(33, 0) && !func_213(1751306471))
		{
			iVar1[iVar0] = joaat("blista3");
			iVar0++;
		}
		if (Global_19B04.f_61D4.f_3)
		{
			iVar1[iVar0] = joaat("stalion2");
			iVar0++;
		}
		if (Global_19B04.f_61D4.f_4)
		{
			iVar1[iVar0] = joaat("gauntlet2");
			iVar0++;
		}
		if (Global_19B04.f_61D4.f_5)
		{
			iVar1[iVar0] = joaat("dominator2");
			iVar0++;
		}
		if (Global_19B04.f_61D4.f_6)
		{
			iVar1[iVar0] = joaat("buffalo3");
			iVar0++;
		}
		if (Global_19B04.f_61D4.f_7)
		{
			iVar1[iVar0] = joaat("marshall");
			iVar0++;
		}
	}
	if (iParam0 >= 0 && iParam0 < iVar0)
	{
		return iVar1[iParam0];
	}
	return 0;
}

int func_213(int iParam0)//Position - 0x15F40
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_19B04.f_1DEB.f_2FC)
	{
		if (Global_19B04.f_1DEB.f_28B[iVar0 /*14*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_214(int iParam0, int iParam1)//Position - 0x15F7B
{
	if (unk_0xFA30DFD0084E92FE(Global_19B04.f_6186.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_215(bool bParam0, bool bParam1)//Position - 0x15F9E
{
	if (bParam0)
	{
		if (unk_0xFA30DFD0084E92FE(Global_19B04.f_29C.f_51C, 2))
		{
			return 1;
		}
	}
	if (unk_0xBAF5BEF76386574D())
	{
		if (!bParam1 || unk_0x57D316754A262B34())
		{
			if (!unk_0x3E9993F328985CCB() && !unk_0xF7E138CFA19B55E7())
			{
				return 1;
			}
		}
	}
	if (bParam1)
	{
		if (unk_0x11F704A1BA7AC122())
		{
			return 0;
		}
	}
	if (unk_0xBAF5BEF76386574D())
	{
		return 1;
	}
	return 0;
}

int func_216()//Position - 0x1600A
{
	int iVar0;
	
	iVar0 = 0;
	if (func_215(1, 1))
	{
		if (!unk_0x7AF0088ABFA713B6())
		{
			iVar0++;
		}
	}
	if (unk_0xFA30DFD0084E92FE(Global_19B04.f_4871[45 /*6*/], 3))
	{
		if (!unk_0x7AF0088ABFA713B6())
		{
			iVar0++;
		}
	}
	if (func_43() && !unk_0x7AF0088ABFA713B6())
	{
		if (func_214(33, 0) && !func_213(1751306471))
		{
			iVar0++;
		}
		if (Global_19B04.f_61D4.f_3)
		{
			iVar0++;
		}
		if (Global_19B04.f_61D4.f_4)
		{
			iVar0++;
		}
		if (Global_19B04.f_61D4.f_5)
		{
			iVar0++;
		}
		if (Global_19B04.f_61D4.f_6)
		{
			iVar0++;
		}
		if (Global_19B04.f_61D4.f_7)
		{
			iVar0++;
		}
	}
	return iVar0;
}

int func_217(float fParam0)//Position - 0x160D9
{
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()) && !unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		if (fParam0 <= 0f)
		{
			return unk_0x31E5D759D5CB9546(unk_0xBC25C936A095B5BA()) > 0;
		}
		else
		{
			return unk_0xEA85590434A67895(unk_0xBC25C936A095B5BA(), unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), fParam0) > 0;
		}
	}
	return 0;
}

bool func_218(bool bParam0)//Position - 0x1612B
{
	if (!bParam0 && unk_0xB731B8C5BCE89836(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_1163A, 0);
}

void func_219()//Position - 0x16156
{
	var uVar0[10];
	bool bVar1;
	int iVar2;
	float fVar3;
	char* sVar4;
	vector3 vVar5;
	vector3 vVar6;
	vector3 vVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	vector3 vVar14;
	bool bVar15;
	float fVar16;
	int iVar17;
	vector3 vVar18;
	vector3 vVar19;
	int iVar20;
	vector3 vVar21;
	bool bVar22;
	float fVar23;
	int iVar24;
	bool bVar25;
	struct<4> Var26;
	bool bVar27;
	int iVar28;
	struct<4> Var29;
	struct<60> Var30;
	int iVar31;
	int iVar32;
	int iVar33;
	bool bVar34;
	float fVar35;
	int iVar36;
	struct<60> Var37;
	int iVar38;
	bool bVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	bool bVar44;
	bool bVar45;
	
	bVar1 = false;
	if ((((((((((((((((Local_56.f_1D.f_50 && Local_56.f_1D.f_45) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA())) && Local_56.f_2 == 0) && Local_56 != -1) && func_67(Local_56, 0)) && func_67(Local_56, 5)) && !func_27(0)) && !func_27(3)) && !func_27(2)) && !func_27(4)) && !func_27(5)) && !func_27(14)) && !Global_10AB8) && !func_218(1)) && !func_299()) || (((Local_56.f_3 > 1 && !func_218(0)) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA())) && !func_299()))
	{
		func_298(Local_56, &Local_83);
		fVar3 = 0f;
		sVar4 = "ANIM@APT_TRANS@GARAGE";
		vVar5 = { 198.3659f, -1020.273f, -100f };
		vVar6 = { vVar5 };
		vVar7 = { 198.9538f, -1026.13f, -100f };
		iVar8 = func_297(Local_56);
		switch (Local_56.f_3)
		{
			case 0:
				if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, true, 0) && !unk_0x7930B3E9C919E90F())
				{
					Local_56.f_3 = 10;
					return;
				}
				if ((((((unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), Local_56.f_1D, Local_56.f_1D.f_3, Local_56.f_1D.f_6, 0, true, 0) && (func_296(unk_0x349C94FFF43E2979(unk_0xBC25C936A095B5BA()), Local_56.f_1D.f_44, 90f) || unk_0xCBBE5AFE2CD2E9B6(unk_0xBC25C936A095B5BA()))) && unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F())) && !unk_0xA4813477CC5DD00F(unk_0xBC25C936A095B5BA())) && !unk_0x8F1FDD0A40DC834A(unk_0xBC25C936A095B5BA())) && !unk_0x74BCB6EDB1FFBFBA(unk_0xBC25C936A095B5BA(), 2)) && (iVar8 == iLocal_129 || iVar8 == 145))
				{
					if (func_295())
					{
						bVar9 = true;
						if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
						{
							iVar2 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 1);
							if (unk_0x724D816EA203A79E(iVar2))
							{
								if (unk_0xE59B7F5A03335350(iVar2, 0))
								{
									iVar10 = unk_0x6F79ECA8C83E4357(iVar2);
									if (((((((((!func_64(iVar10) || func_63(iVar2)) || func_62(iVar2)) || !func_39(iVar10, 0)) || unk_0x10A01B0B02B273EF(iVar2)) || ((!unk_0x7C28D15641461C68(iVar10) && !unk_0x7512ED01F3F46714(iVar10)) && !unk_0x89B9572166100905(iVar10))) || iVar10 == joaat("monster")) || unk_0x7544D2465B934445(iVar2)) || unk_0x6E80E5225F67328D(iVar2)) || (unk_0xEBE910FA7CB6EAF0(unk_0xBC25C936A095B5BA()) && unk_0xB731B8C5BCE89836(joaat("taxi_procedural")) > 0))
									{
										bVar9 = false;
									}
								}
								else
								{
									bVar9 = false;
								}
							}
						}
						else if (unk_0x5E5457547BDEF354(sVar4))
						{
							unk_0x522053D86D6E1C7A(sVar4);
							if (!unk_0xF9E082857622D91E(sVar4))
							{
								bVar9 = false;
							}
						}
						if (bVar9)
						{
							func_210(&iLocal_115, 3, "WEB_VEH_ENTER", 0, 0, 0, 0);
							iLocal_175 = 0;
							Local_56.f_3 = 1;
						}
						else if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
						{
							if (!unk_0xF16DAFF595E80F7C() || func_209("WEB_VEH_INV"))
							{
								func_208("WEB_VEH_INV", -1);
								StringCopy(&cLocal_165, "WEB_VEH_INV", 16);
								bVar1 = true;
							}
						}
					}
					else if (!unk_0xF16DAFF595E80F7C() || func_209("WEB_VEH_FULL"))
					{
						func_208("WEB_VEH_FULL", -1);
						StringCopy(&cLocal_165, "WEB_VEH_FULL", 16);
						bVar1 = true;
					}
				}
				break;
			
			case 1:
				if (!iLocal_173)
				{
					if (!unk_0xCBBE5AFE2CD2E9B6(unk_0xBC25C936A095B5BA()))
					{
						iLocal_173 = 0;
						unk_0x522053D86D6E1C7A(sVar4);
						if (unk_0xF9E082857622D91E(sVar4))
						{
							iLocal_173 = 1;
						}
					}
					else
					{
						unk_0x4EA570997E107F35(sVar4);
						iLocal_173 = 1;
					}
				}
				iVar11 = 1;
				if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
				{
					iVar2 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 1);
					if (unk_0x724D816EA203A79E(iVar2))
					{
						if (unk_0xE59B7F5A03335350(iVar2, 0))
						{
							iVar12 = unk_0x6F79ECA8C83E4357(iVar2);
							if ((((((((!func_64(iVar12) || func_63(iVar2)) || func_62(iVar2)) || unk_0x10A01B0B02B273EF(iVar2)) || ((!unk_0x7C28D15641461C68(iVar12) && !unk_0x7512ED01F3F46714(iVar12)) && !unk_0x89B9572166100905(iVar12))) || iVar12 == joaat("monster")) || unk_0x7544D2465B934445(iVar2)) || unk_0x6E80E5225F67328D(iVar2)) || (unk_0xEBE910FA7CB6EAF0(unk_0xBC25C936A095B5BA()) && unk_0xB731B8C5BCE89836(joaat("taxi_procedural")) > 0))
							{
								iVar11 = 0;
							}
						}
						else
						{
							iVar11 = 0;
						}
					}
				}
				if (((((((((unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), Local_56.f_1D, Local_56.f_1D.f_3, Local_56.f_1D.f_6, 0, true, 0) && (func_296(unk_0x349C94FFF43E2979(unk_0xBC25C936A095B5BA()), Local_56.f_1D.f_44, 90f) || unk_0xCBBE5AFE2CD2E9B6(unk_0xBC25C936A095B5BA()))) && unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F())) && func_295()) && !unk_0xA4813477CC5DD00F(unk_0xBC25C936A095B5BA())) && !unk_0x8F1FDD0A40DC834A(unk_0xBC25C936A095B5BA())) && !unk_0x74BCB6EDB1FFBFBA(unk_0xBC25C936A095B5BA(), 2)) && !func_299()) && (iVar8 == iLocal_129 || iVar8 == 145)) && iVar11)
				{
					if (unk_0xCBBE5AFE2CD2E9B6(unk_0xBC25C936A095B5BA()) || (unk_0xF9E082857622D91E(sVar4) || !unk_0x5E5457547BDEF354(sVar4)))
					{
						if (func_205(iLocal_115, 1))
						{
							func_69(&iLocal_115);
							iLocal_173 = 0;
							Local_56.f_3 = 2;
						}
						func_293(47, 0);
						func_288(47, 0);
						Local_56.f_70 = unk_0x5E29F9399E0829A3(vVar5, "v_garagem_sp");
						if (unk_0xBF697FA7422C0621(Local_56.f_70))
						{
							if (!unk_0x18487DB48DC3A046(Local_56.f_70))
							{
								if ((unk_0xC87A57742F7D3C06() % 10) == 0)
								{
									unk_0x184188AF06D2A771(Local_56.f_70);
								}
							}
							StringCopy(&Global_7F73, "v_garagem_sp", 32);
						}
						if (!iLocal_172 && !unk_0x719413B40BB63D86())
						{
							if (unk_0xCBBE5AFE2CD2E9B6(unk_0xBC25C936A095B5BA()))
							{
								iVar13 = func_286(Local_56);
								func_61(&vVar14, iVar13);
								vVar6 = { vVar14 };
								unk_0x1732A8A5D2D39430(vVar6, 20f, 0);
							}
							else
							{
								unk_0x1732A8A5D2D39430(vVar7 + Vector(1f, 0f, 0f), 20f, 0);
							}
							iLocal_172 = 1;
						}
					}
				}
				else
				{
					if (iLocal_172 && unk_0x719413B40BB63D86())
					{
						unk_0x13D5880CBA449AA9();
						iLocal_172 = 0;
					}
					iLocal_173 = 0;
					func_69(&iLocal_115);
					unk_0x4EA570997E107F35(sVar4);
					Local_56.f_3 = 0;
				}
				break;
			
			case 2:
				func_293(47, 0);
				func_288(47, 0);
				unk_0x27CBA62D1F6DF074(8);
				Global_110A8.f_241 = 1;
				Global_110A8.f_242 = { Local_56.f_1D.f_37 };
				iLocal_155 = unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F());
				unk_0xA4E856A8CD53B8DF(unk_0xBC25C936A095B5BA());
				unk_0x4060A19D5551068A(unk_0xBC25C936A095B5BA(), 0, 0);
				unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 0);
				unk_0x59B038076F830627(false);
				unk_0x43F06392C4EF25E0(false);
				unk_0x6A095EC1C9AF12A4(unk_0xB5CEFD608600A09F());
				if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
				{
					iVar2 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
					if (unk_0x724D816EA203A79E(iVar2) && unk_0xE59B7F5A03335350(iVar2, 0))
					{
						if (func_296(unk_0x349C94FFF43E2979(iVar2), Local_56.f_1D.f_44, 90f))
						{
							iLocal_175 = 0;
						}
						else
						{
							iLocal_175 = 1;
						}
						unk_0x06D93FD5E4D394CF(iVar2, true, true, true, true, true, true, 0, false);
						unk_0x4516EDD0A096FB5B(Local_83.f_56[0 /*6*/], 20f, 0);
						unk_0xADC7E88690E324EB(Local_83.f_56[0 /*6*/], 20f, 0);
						unk_0x5DEC86EE2E34A59D(Local_83.f_56[0 /*6*/], 7f);
						unk_0x641B19E156645A92(iVar2, Local_83.f_56[0 /*6*/], 1, false, 0, 1);
						if (iLocal_175 && !unk_0x5CFC8E6CC224744A(unk_0xBC25C936A095B5BA()))
						{
							unk_0x019CE76D5286C95C(iVar2, (Local_83.f_56[0 /*6*/].f_3.f_2 + 180f));
						}
						else
						{
							unk_0x019CE76D5286C95C(iVar2, Local_83.f_56[0 /*6*/].f_3.f_2);
						}
						if (unk_0x5CFC8E6CC224744A(unk_0xBC25C936A095B5BA()))
						{
							unk_0x92C13E9A4A1DA028(unk_0xBC25C936A095B5BA(), 0, 0, -1);
							unk_0xC3D5C68D28907D90(unk_0xBC25C936A095B5BA(), 1);
						}
						unk_0xF0A40F19AAB79E88(iVar2, 1084227584);
					}
					unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 0);
					func_280(1, 1, 1, 0, 0);
					func_279(&(Local_83[1 /*15*/]), &(Local_56.f_6E), &(Local_56.f_6F));
					Local_56.f_3 = 3;
				}
				else
				{
					if (unk_0x724D816EA203A79E(iLocal_168) && !unk_0x1D403DFADBC2DE3C(iLocal_168, 0))
					{
						if (unk_0x5CAE759AE8219D20(iLocal_168) && unk_0xB248FAA35ED47DB9(iLocal_168, 1))
						{
							unk_0x1E7A09C1710FB071(&iLocal_168);
						}
					}
					iLocal_168 = unk_0x3E12B546F3F2597A();
					if ((((unk_0x724D816EA203A79E(iLocal_168) && unk_0xE59B7F5A03335350(iLocal_168, 0)) && !unk_0x8C1A6E7D5F410F4A(unk_0x6F79ECA8C83E4357(iLocal_168))) && !unk_0xA19D269B4B5A1532(unk_0x6F79ECA8C83E4357(iLocal_168))) && !unk_0xE7B3A320107C1379(unk_0x6F79ECA8C83E4357(iLocal_168)))
					{
						if (!unk_0x5CAE759AE8219D20(iLocal_168))
						{
							unk_0x77815D3407C6700D(iLocal_168, false, 0);
						}
						if (unk_0x724D816EA203A79E(iLocal_168) && unk_0xE59B7F5A03335350(iLocal_168, 0))
						{
							if (!bVar15)
							{
								if (unk_0x0C265B3C448E6954(iLocal_168, Local_56.f_1D, Local_56.f_1D.f_3, Local_56.f_1D.f_6, 0, true, 0))
								{
									bVar15 = true;
								}
							}
							if (!bVar15)
							{
								fVar16 = SYSTEM::VDIST2(unk_0x541C2AEF053615BC(iLocal_168, true), Local_83[0 /*15*/]);
								if (fVar16 < (5f * 5f))
								{
									bVar15 = true;
								}
							}
							if (bVar15)
							{
								iVar17 = func_49(24);
								if (func_278(&Local_141, 24))
								{
									func_273(&Local_141, func_457());
									if (unk_0x724D816EA203A79E(iVar17))
									{
										unk_0xCF6040807CC0E4A5(&iVar17);
									}
								}
								if (Local_56 == 21)
								{
									unk_0x6C5F5B5F6894CCE3(-89.377f, 92.6583f, 71.2349f, 5f, 1, 0, 0, false);
									func_271(iLocal_168, -89.377f, 92.6583f, 71.2349f, 154.4846f, 24, 0);
								}
								else if (Local_56 == 22)
								{
									unk_0x6C5F5B5F6894CCE3(-62.0307f, -1839.859f, 25.6787f, 5f, 1, 0, 0, false);
									func_271(iLocal_168, -62.0307f, -1839.859f, 25.6787f, 319.6985f, 24, 0);
								}
								else if (Local_56 == 23)
								{
									unk_0x6C5F5B5F6894CCE3(-234.7648f, -1150.311f, 21.9224f, 5f, 1, 0, 0, false);
									func_271(iLocal_168, -234.7648f, -1150.311f, 21.9224f, 270.8741f, 24, 0);
								}
								unk_0xF0A40F19AAB79E88(iLocal_168, 1084227584);
							}
						}
					}
					else
					{
						iLocal_168 = 0;
					}
					vVar18 = { Local_56.f_1D * Vector(2f, 2f, 2f) + Local_56.f_1D.f_3 * Vector(1f, 1f, 1f) / Vector(3f, 3f, 3f) };
					vVar19 = { Local_56.f_1D * Vector(1f, 1f, 1f) + Local_56.f_1D.f_3 * Vector(2f, 2f, 2f) / Vector(3f, 3f, 3f) };
					if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), Local_56.f_1D, vVar18.x, vVar18.y, Local_56.f_1D.f_3.f_2, Local_56.f_1D.f_6, 0, true, 0))
					{
						sLocal_176 = "";
						switch (unk_0x491B2241281A03B7(0, 2))
						{
							case 0:
								sLocal_176 = "gar_open_1_left";
								break;
							
							case 1:
								sLocal_176 = "gar_open_2_left";
								break;
						}
					}
					else if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), vVar18.x, vVar18.y, Local_56.f_1D.f_2, vVar19.x, vVar19.y, Local_56.f_1D.f_3.f_2, Local_56.f_1D.f_6, 0, true, 0))
					{
						sLocal_176 = "";
						switch (unk_0x491B2241281A03B7(0, 2))
						{
							case 0:
								sLocal_176 = "gar_open_1_left";
								break;
							
							case 1:
								sLocal_176 = "gar_open_1_right";
								break;
						}
					}
					else if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), vVar19.x, vVar19.y, Local_56.f_1D.f_2, Local_56.f_1D.f_3, Local_56.f_1D.f_6, 0, true, 0))
					{
						sLocal_176 = "";
						switch (unk_0x491B2241281A03B7(0, 2))
						{
							case 0:
								sLocal_176 = "gar_open_1_right";
								break;
							
							case 1:
								sLocal_176 = "gar_open_2_right";
								break;
						}
					}
					else
					{
						sLocal_176 = "";
						switch (unk_0x491B2241281A03B7(0, 6))
						{
							case 0:
								sLocal_176 = "gar_open_1_left";
								break;
							
							case 1:
								sLocal_176 = "gar_open_1_right";
								break;
							
							case 2:
								sLocal_176 = "gar_open_2_left";
								break;
							
							case 3:
								sLocal_176 = "gar_open_2_right";
								break;
							
							case 4:
								sLocal_176 = "gar_open_3_left";
								break;
							
							case 5:
								sLocal_176 = "gar_open_3_right";
								break;
							}
					}
					unk_0x4516EDD0A096FB5B(Local_83.f_49[0 /*4*/], 20f, 0);
					unk_0xADC7E88690E324EB(Local_83.f_56[0 /*6*/], 20f, 0);
					unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), Local_83.f_49[0 /*4*/], 1, false, 0, 1);
					unk_0x019CE76D5286C95C(unk_0xBC25C936A095B5BA(), Local_83.f_49[0 /*4*/].f_3);
					iLocal_120 = unk_0xD0D858E538FD01C3(Local_83.f_49[0 /*4*/], 0f, 0f, Local_83.f_49[0 /*4*/].f_3, 2);
					unk_0xB62398E536F695FC(unk_0xBC25C936A095B5BA(), iLocal_120, sVar4, sLocal_176, 8f, -8f, 0, 0, 1148846080, 0);
					func_280(1, 1, 1, 0, 0);
					func_279(&(Local_83[0 /*15*/]), &(Local_56.f_6E), &(Local_56.f_6F));
					Local_56.f_3 = 4;
				}
				Local_56.f_70 = unk_0x5E29F9399E0829A3(vVar5, "v_garagem_sp");
				if (unk_0xBF697FA7422C0621(Local_56.f_70))
				{
					if (!unk_0x18487DB48DC3A046(Local_56.f_70))
					{
						unk_0x184188AF06D2A771(Local_56.f_70);
					}
					StringCopy(&Global_7F73, "v_garagem_sp", 32);
				}
				if (!iLocal_172)
				{
					if (unk_0xCBBE5AFE2CD2E9B6(unk_0xBC25C936A095B5BA()))
					{
						iVar20 = func_286(Local_56);
						func_61(&vVar21, iVar20);
						vVar6 = { vVar21 };
						unk_0x1732A8A5D2D39430(vVar6, 20f, 0);
					}
					else
					{
						unk_0x1732A8A5D2D39430(vVar7, 20f, 0);
					}
				}
				unk_0xF0059F27F7BB6680(&(Local_131.f_9), 25);
				func_267(198.0043f, -999.7775f, -100f, 50f, 0);
				func_112(Local_56);
				func_112(26);
				func_112(29);
				func_112(32);
				func_112(28);
				func_112(31);
				func_112(34);
				func_112(27);
				func_112(30);
				func_112(33);
				SYSTEM::SETTIMERA(0);
				iLocal_174 = 0;
				break;
			
			case 4:
				bVar22 = true;
				if (!unk_0x719413B40BB63D86())
				{
				}
				else if (unk_0xF220370B0C08EC20())
				{
				}
				else
				{
					bVar22 = false;
				}
				if (unk_0xBF697FA7422C0621(Local_56.f_70))
				{
					if (!unk_0x18487DB48DC3A046(Local_56.f_70))
					{
						unk_0x184188AF06D2A771(Local_56.f_70);
					}
					StringCopy(&Global_7F73, "v_garagem_sp", 32);
				}
				else
				{
					Local_56.f_70 = unk_0x5E29F9399E0829A3(vVar5, "v_garagem_sp");
				}
				if (func_266())
				{
				}
				else
				{
					bVar22 = false;
				}
				if (unk_0xEF0E25DA0CB6E8FF(Local_56.f_6E) && unk_0xF448AA2D7E08A675(Local_56.f_6E))
				{
					if (unk_0x16BE1286447174A9(Local_56.f_6E))
					{
						bVar22 = false;
					}
					if (IntToFloat(SYSTEM::TIMERA()) <= (Local_83[0 /*15*/].f_E * 1000f))
					{
						bVar22 = false;
					}
				}
				else if (unk_0xEF0E25DA0CB6E8FF(Local_56.f_6F) && unk_0xF448AA2D7E08A675(Local_56.f_6F))
				{
					if (unk_0x16BE1286447174A9(Local_56.f_6F))
					{
						bVar22 = false;
					}
					if (IntToFloat(SYSTEM::TIMERA()) <= (Local_83[0 /*15*/].f_E * 1000f))
					{
						bVar22 = false;
					}
				}
				else
				{
					bVar22 = false;
				}
				if (unk_0x77FC50899603581D(iLocal_120))
				{
					fVar23 = unk_0x8FD30584EB38411B(iLocal_120);
					if (fVar23 < 0.4f)
					{
						bVar22 = false;
					}
				}
				if (bVar22)
				{
					unk_0x7A41D32A383895D8(800);
					Local_56.f_3 = 5;
				}
				break;
			
			case 5:
				if (unk_0x17FAADF9916EF741())
				{
					iVar24 = unk_0x2F079D1FC5F6CB99();
					unk_0xC4BA30B532FE260F(iVar24, "GARAGE_DOOR_SCRIPTED_CLOSE", 0, true);
					unk_0x8B34879B92B3B225(iVar24, "hold", (2250f / 1000f));
					func_280(0, 1, 1, 0, 0);
					unk_0x062C9995BFD27B2A(false, false, 3000, 1, 0, 0);
					if (unk_0xEF0E25DA0CB6E8FF(Local_56.f_6E))
					{
						unk_0x348665177DBFB93B(Local_56.f_6E, false);
						unk_0x4EC087603E1DEF9C(Local_56.f_6E, 0);
					}
					if (unk_0xEF0E25DA0CB6E8FF(Local_56.f_6F))
					{
						unk_0x348665177DBFB93B(Local_56.f_6F, false);
						unk_0x4EC087603E1DEF9C(Local_56.f_6F, 0);
					}
					if (unk_0x724D816EA203A79E(iLocal_178))
					{
						unk_0xD434A01DEA38A939(iLocal_178, true, 0);
						unk_0x346478B12F69D4E3(iLocal_178, false);
						iLocal_178 = 0;
					}
					unk_0xA98B19EC1C93FC3C(unk_0xB5CEFD608600A09F());
					unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
					unk_0x27CBA62D1F6DF074(8);
					if (unk_0x77FC50899603581D(iLocal_120))
					{
						unk_0x2A7E436A4653E829(iLocal_120);
					}
					iLocal_120 = -1;
					unk_0x49D46EE47C9CCB66(unk_0xBC25C936A095B5BA());
					unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), 194.5394f, -1026.32f, -100f, 1, false, 0, 1);
					unk_0x019CE76D5286C95C(unk_0xBC25C936A095B5BA(), 334.1665f);
					unk_0x346478B12F69D4E3(unk_0xBC25C936A095B5BA(), true);
					unk_0xF3F01A78937DC905(0f);
					unk_0x2B9AEC08E469E384(0f, 1065353216);
					SYSTEM::SETTIMERA(0);
					Local_56.f_3 = 6;
				}
				break;
			
			case 6:
				func_265(Local_56);
				if (unk_0x17FAADF9916EF741() && SYSTEM::TIMERA() > 2250)
				{
					unk_0x4EA570997E107F35(sVar4);
					func_264();
					if (unk_0x719413B40BB63D86())
					{
						unk_0x13D5880CBA449AA9();
					}
					unk_0x829FA4611BD56B44(800);
					unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
					unk_0x346478B12F69D4E3(unk_0xBC25C936A095B5BA(), false);
					SYSTEM::SETTIMERA(0);
					iLocal_156 = 0;
					iLocal_172 = 0;
					Local_56.f_3 = 10;
				}
				break;
			
			case 3:
				func_265(Local_56);
				bVar25 = true;
				if (!unk_0x719413B40BB63D86())
				{
				}
				else if (unk_0xF220370B0C08EC20())
				{
				}
				else
				{
					bVar25 = false;
				}
				if (unk_0xBF697FA7422C0621(Local_56.f_70))
				{
					if (!unk_0x18487DB48DC3A046(Local_56.f_70))
					{
						unk_0x184188AF06D2A771(Local_56.f_70);
					}
					StringCopy(&Global_7F73, "v_garagem_sp", 32);
				}
				else
				{
					Local_56.f_70 = unk_0x5E29F9399E0829A3(vVar5, "v_garagem_sp");
				}
				if (func_266())
				{
				}
				else
				{
					bVar25 = false;
				}
				if (unk_0xEF0E25DA0CB6E8FF(Local_56.f_6E) && unk_0xF448AA2D7E08A675(Local_56.f_6E))
				{
					if (unk_0x16BE1286447174A9(Local_56.f_6E))
					{
						bVar25 = false;
					}
					if (IntToFloat(SYSTEM::TIMERA()) <= (Local_83[1 /*15*/].f_E * 1000f))
					{
						bVar25 = false;
					}
				}
				else if (unk_0xEF0E25DA0CB6E8FF(Local_56.f_6F) && unk_0xF448AA2D7E08A675(Local_56.f_6F))
				{
					if (unk_0x16BE1286447174A9(Local_56.f_6F))
					{
						bVar25 = false;
					}
					if (IntToFloat(SYSTEM::TIMERA()) <= (Local_83[1 /*15*/].f_E * 1000f))
					{
						bVar25 = false;
					}
				}
				else
				{
					bVar25 = false;
				}
				if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
				{
					Var26 = { 0f, 0f, 0f };
					Var26.f_3 = 0f;
					func_256(unk_0xBC25C936A095B5BA(), Local_83.f_56[0 /*6*/], Local_83.f_42[0 /*3*/], ((Local_83[1 /*15*/].f_E * 1000f) - 500f), Var26, 2, &fVar3);
				}
				if (bVar25)
				{
					func_264();
					SYSTEM::SETTIMERA(0);
					unk_0x7A41D32A383895D8(800);
					Local_56.f_3 = 35;
				}
				break;
			
			case 35:
				bVar27 = true;
				func_265(Local_56);
				if (IntToFloat(SYSTEM::TIMERA()) <= (Local_83.f_3D[1] * 1000f))
				{
					bVar27 = false;
				}
				if (bVar27)
				{
					func_264();
					func_280(0, 1, 1, 0, 0);
					unk_0x062C9995BFD27B2A(false, false, 3000, 1, 0, 0);
					if (unk_0xEF0E25DA0CB6E8FF(Local_56.f_6E))
					{
						unk_0x348665177DBFB93B(Local_56.f_6E, false);
						unk_0x4EC087603E1DEF9C(Local_56.f_6E, 0);
					}
					if (unk_0xEF0E25DA0CB6E8FF(Local_56.f_6F))
					{
						unk_0x348665177DBFB93B(Local_56.f_6F, false);
						unk_0x4EC087603E1DEF9C(Local_56.f_6F, 0);
					}
					if (unk_0x724D816EA203A79E(iLocal_178))
					{
						unk_0xD434A01DEA38A939(iLocal_178, true, 0);
						unk_0x346478B12F69D4E3(iLocal_178, false);
						iLocal_178 = 0;
					}
					unk_0xA98B19EC1C93FC3C(unk_0xB5CEFD608600A09F());
					unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
					unk_0x27CBA62D1F6DF074(8);
					if (unk_0x719413B40BB63D86())
					{
						unk_0x13D5880CBA449AA9();
					}
					if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
					{
						iVar2 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
						if (unk_0x724D816EA203A79E(iVar2) && unk_0xE59B7F5A03335350(iVar2, 0))
						{
							iVar28 = func_286(Local_56);
							func_61(&Var29, iVar28);
							unk_0x641B19E156645A92(iVar2, Var29, 1, false, 0, 1);
							unk_0x019CE76D5286C95C(iVar2, Var29.f_3);
							unk_0x127F627F30266DD9(iVar2, 1);
							unk_0x2D655AA68FA1736B(iVar2, false, true, 0);
							unk_0x93D3868AE0D83B7C(iVar2, 4);
							unk_0x89BE70A336BD3497(iVar2, 1, 0);
							unk_0x89BE70A336BD3497(iVar2, 0, 0);
							unk_0x4E87F356DA56EB3F(iVar2, false);
							unk_0x06D93FD5E4D394CF(iVar2, false, false, false, false, false, false, 0, false);
							unk_0x932E201A82D2EDB8(unk_0xBC25C936A095B5BA(), iVar2, 0);
							unk_0x346478B12F69D4E3(iVar2, false);
							Var30.f_9 = 49;
							Var30.f_3B = 2;
							func_32(iVar2, &Var30);
							func_113(iVar28, &Var30, 0f, 0f, 0f, -1f, 145);
							func_30(iVar28, iVar2, 1);
							func_255(iVar2);
						}
						unk_0xF3F01A78937DC905(0f);
						unk_0x2B9AEC08E469E384(0f, 1065353216);
					}
					iVar31 = unk_0x252B0CBDBF5803ED(unk_0xBC25C936A095B5BA(), &uVar0, -1);
					iVar32 = 0;
					while (iVar32 < iVar31)
					{
						if ((unk_0x724D816EA203A79E(uVar0[iVar32]) && !unk_0x36CEFBE9B745A58D(uVar0[iVar32])) && unk_0x9488E18994C5C83D(uVar0[iVar32], unk_0x705BBFE5A8ADE4A9(unk_0xB5CEFD608600A09F())))
						{
							unk_0xD5874E4A4BF782FC(uVar0[iVar32], 206.802f, -1018.011f, -100f, 0, 0, 1);
						}
						iVar32++;
					}
					SYSTEM::SETTIMERA(0);
					iLocal_156 = 0;
					iLocal_172 = 0;
					unk_0x829FA4611BD56B44(800);
					Local_56.f_3 = 10;
				}
				break;
			
			case 10:
				if (SYSTEM::TIMERA() < 7000 || !Global_19B04.f_7F22.f_12C0)
				{
					if (!Global_19B04.f_7F22.f_12C0)
					{
						if (iLocal_156 == 0)
						{
							func_208("CAR_GAR_05", -1);
							StringCopy(&cLocal_165, "CAR_GAR_05", 16);
							bVar1 = true;
							if (SYSTEM::TIMERA() >= 7000)
							{
								SYSTEM::SETTIMERA(0);
								iLocal_156++;
							}
						}
						else if (iLocal_156 == 1)
						{
							func_208("CAR_GAR_06", -1);
							StringCopy(&cLocal_165, "CAR_GAR_06", 16);
							bVar1 = true;
							if (SYSTEM::TIMERA() >= 7000)
							{
								SYSTEM::SETTIMERA(0);
								Global_19B04.f_7F22.f_12C0 = 1;
							}
						}
					}
					else
					{
						func_208("CAR_GAR_EXIT", -1);
						StringCopy(&cLocal_165, "CAR_GAR_EXIT", 16);
						bVar1 = true;
					}
				}
				else
				{
					Global_19B04.f_7F22.f_12C0 = 1;
				}
				iVar33 = 0;
				if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
				{
					if (iLocal_115 != -1)
					{
						func_69(&iLocal_115);
					}
					iVar2 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
					if (unk_0x724D816EA203A79E(iVar2) && unk_0xE59B7F5A03335350(iVar2, 0))
					{
						if (unk_0x8ADE344330B6F916(iVar2) || unk_0x5CFC8E6CC224744A(unk_0xBC25C936A095B5BA()))
						{
							if (!(unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0) && !unk_0xCBBE5AFE2CD2E9B6(unk_0xBC25C936A095B5BA())))
							{
								if ((((unk_0xE56557A1B607909F(0, 71) != 0f || unk_0x694514BD37EC4E94(0, 71)) || unk_0x8FCEEB789599BD9B(0, 71)) || unk_0xF7DDAAF0EFDAFA22(0, 71)) || unk_0xD3C4A010282C31F2(0, 71))
								{
									iVar33 = 1;
								}
								if ((((unk_0xE56557A1B607909F(0, 72) != 0f || unk_0x694514BD37EC4E94(0, 72)) || unk_0x8FCEEB789599BD9B(0, 72)) || unk_0xF7DDAAF0EFDAFA22(0, 72)) || unk_0xD3C4A010282C31F2(0, 72))
								{
									iVar33 = 1;
								}
							}
						}
					}
				}
				else
				{
					unk_0x522053D86D6E1C7A(sVar4);
					if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 191.0491f, -1026.318f, -105f, 198.0297f, -1026.322f, -96.81246f, 2.0625f, 0, true, 0) && func_296(unk_0x349C94FFF43E2979(unk_0xBC25C936A095B5BA()), 180f, 90f))
					{
						if (iLocal_114 != -1)
						{
							func_69(&iLocal_114);
						}
						if (iLocal_115 == -1)
						{
							func_210(&iLocal_115, 3, "WEB_VEH_EXIT", 0, 0, 0, 0);
						}
						if (!iLocal_114 != -1 && !iLocal_115 == -1)
						{
							if (func_205(iLocal_115, 1))
							{
								func_69(&iLocal_115);
								iVar33 = 1;
							}
						}
					}
					else if (iLocal_115 != -1)
					{
						func_69(&iLocal_115);
					}
				}
				if (iLocal_159)
				{
					iVar33 = 1;
				}
				if (iVar33 && !func_254())
				{
					if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0) || iLocal_159)
					{
						SYSTEM::SETTIMERA(0);
						unk_0x1732A8A5D2D39430(Local_83.f_49[2 /*4*/], 20f, 0);
						if (iLocal_115 != -1)
						{
							func_69(&iLocal_115);
						}
						Local_56.f_3 = 12;
					}
					else if (unk_0xF9E082857622D91E(sVar4))
					{
						sLocal_176 = "";
						switch (unk_0x491B2241281A03B7(0, 6))
						{
							case 0:
								sLocal_176 = "gar_open_1_left";
								break;
							
							case 1:
								sLocal_176 = "gar_open_1_right";
								break;
							
							case 2:
								sLocal_176 = "gar_open_2_left";
								break;
							
							case 3:
								sLocal_176 = "gar_open_2_right";
								break;
							
							case 4:
								sLocal_176 = "gar_open_3_left";
								break;
							
							case 5:
								sLocal_176 = "gar_open_3_right";
								break;
						}
						iLocal_120 = unk_0xD0D858E538FD01C3(Local_83.f_49[1 /*4*/], 0f, 0f, Local_83.f_49[1 /*4*/].f_3, 2);
						unk_0xB62398E536F695FC(unk_0xBC25C936A095B5BA(), iLocal_120, sVar4, sLocal_176, 8f, -8f, 0, 0, 1148846080, 0);
						func_280(1, 1, 1, 0, 0);
						func_279(&(Local_83[2 /*15*/]), &(Local_56.f_6E), &(Local_56.f_6F));
						unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 0);
						unk_0x1732A8A5D2D39430(Local_83.f_49[2 /*4*/], 20f, 0);
						SYSTEM::SETTIMERA(0);
						if (iLocal_115 != -1)
						{
							func_69(&iLocal_115);
						}
						Local_56.f_3 = 11;
					}
					else if (!unk_0x5E5457547BDEF354(sVar4))
					{
						unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), Local_83.f_49[1 /*4*/], 1, false, 0, 1);
						unk_0x019CE76D5286C95C(unk_0xBC25C936A095B5BA(), Local_83.f_49[1 /*4*/].f_3);
						func_280(1, 1, 1, 0, 0);
						func_279(&(Local_83[2 /*15*/]), &(Local_56.f_6E), &(Local_56.f_6F));
						unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 0);
						unk_0x1732A8A5D2D39430(Local_83.f_49[2 /*4*/], 20f, 0);
						SYSTEM::SETTIMERA(0);
						if (iLocal_115 != -1)
						{
							func_69(&iLocal_115);
						}
						Local_56.f_3 = 11;
					}
				}
				break;
			
			case 11:
				bVar34 = true;
				if (!unk_0x719413B40BB63D86())
				{
				}
				else if (unk_0xF220370B0C08EC20())
				{
				}
				else
				{
					bVar34 = false;
				}
				if (func_266())
				{
				}
				else
				{
					bVar34 = false;
				}
				if (unk_0xEF0E25DA0CB6E8FF(Local_56.f_6E) && unk_0xF448AA2D7E08A675(Local_56.f_6E))
				{
					if (unk_0x16BE1286447174A9(Local_56.f_6E))
					{
						bVar34 = false;
					}
					if (IntToFloat(SYSTEM::TIMERA()) <= (Local_83[2 /*15*/].f_E * 1000f))
					{
						bVar34 = false;
					}
				}
				else if (unk_0xEF0E25DA0CB6E8FF(Local_56.f_6F) && unk_0xF448AA2D7E08A675(Local_56.f_6F))
				{
					if (unk_0x16BE1286447174A9(Local_56.f_6F))
					{
						bVar34 = false;
					}
					if (IntToFloat(SYSTEM::TIMERA()) <= (Local_83[2 /*15*/].f_E * 1000f))
					{
						bVar34 = false;
					}
				}
				else
				{
					bVar34 = false;
				}
				if (unk_0x77FC50899603581D(iLocal_120))
				{
					fVar35 = unk_0x8FD30584EB38411B(iLocal_120);
					if (fVar35 < 0.4f)
					{
						bVar34 = false;
					}
				}
				if (bVar34)
				{
					iLocal_156 = 0;
					iLocal_172 = 0;
					unk_0x7A41D32A383895D8(800);
					SYSTEM::SETTIMERA(0);
					Local_56.f_3 = 13;
				}
				break;
			
			case 12:
				unk_0xBBC4195AD74D153D(0, 75, 1);
				if (SYSTEM::TIMERA() > 500)
				{
					iVar36 = func_253();
					if ((iVar36 == 21 || iVar36 == 22) || iVar36 == 23)
					{
						Var37.f_9 = 49;
						Var37.f_3B = 2;
						func_113(iVar36, &Var37, 0f, 0f, 0f, -1f, 145);
						func_115(iVar36);
					}
					else if (iVar36 != -1)
					{
						if (!iLocal_159)
						{
							func_463(iVar36, 0);
							func_115(iVar36);
						}
					}
					unk_0xA4E856A8CD53B8DF(unk_0xBC25C936A095B5BA());
					unk_0x4060A19D5551068A(unk_0xBC25C936A095B5BA(), 0, 0);
					unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 0);
					unk_0x4EA570997E107F35(sVar4);
					unk_0x7A41D32A383895D8(800);
					Local_56.f_3 = 13;
				}
				break;
			
			case 13:
				if (unk_0x17FAADF9916EF741())
				{
					iVar38 = unk_0x2F079D1FC5F6CB99();
					unk_0xC4BA30B532FE260F(iVar38, "GARAGE_DOOR_SCRIPTED_CLOSE", 0, true);
					unk_0x8B34879B92B3B225(iVar38, "hold", (2250f / 1000f));
					unk_0x062C9995BFD27B2A(false, false, 3000, 1, 0, 0);
					if (unk_0xEF0E25DA0CB6E8FF(Local_56.f_6E))
					{
						unk_0x348665177DBFB93B(Local_56.f_6E, false);
						unk_0x4EC087603E1DEF9C(Local_56.f_6E, 0);
					}
					if (unk_0xEF0E25DA0CB6E8FF(Local_56.f_6F))
					{
						unk_0x348665177DBFB93B(Local_56.f_6F, false);
						unk_0x4EC087603E1DEF9C(Local_56.f_6F, 0);
					}
					if (unk_0x724D816EA203A79E(iLocal_178))
					{
						unk_0xD434A01DEA38A939(iLocal_178, true, 0);
						unk_0x346478B12F69D4E3(iLocal_178, false);
						iLocal_178 = 0;
					}
					unk_0xA98B19EC1C93FC3C(unk_0xB5CEFD608600A09F());
					unk_0x27CBA62D1F6DF074(8);
					if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
					{
						if (!iLocal_159)
						{
							iVar2 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
							if (unk_0x724D816EA203A79E(iVar2) && unk_0xE59B7F5A03335350(iVar2, 0))
							{
								unk_0xA4E856A8CD53B8DF(unk_0xBC25C936A095B5BA());
								unk_0x641B19E156645A92(iVar2, Local_56.f_1D.f_46[1 /*3*/], 1, false, 0, 1);
								unk_0x019CE76D5286C95C(iVar2, Local_56.f_1D.f_4D[1]);
								unk_0xF0A40F19AAB79E88(iVar2, 1084227584);
							}
						}
					}
					else
					{
						if (unk_0x77FC50899603581D(iLocal_120))
						{
							unk_0x2A7E436A4653E829(iLocal_120);
						}
						iLocal_120 = -1;
						unk_0x49D46EE47C9CCB66(unk_0xBC25C936A095B5BA());
						unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), Local_56.f_1D.f_46[1 /*3*/], 1, false, 0, 1);
						unk_0x019CE76D5286C95C(unk_0xBC25C936A095B5BA(), Local_56.f_1D.f_4D[1]);
					}
					unk_0xF3F01A78937DC905(0f);
					unk_0x2B9AEC08E469E384(0f, 1065353216);
					SYSTEM::SETTIMERA(0);
					Local_56.f_3 = 14;
				}
				break;
			
			case 14:
				if (unk_0x17FAADF9916EF741() && SYSTEM::TIMERA() > 2250)
				{
					bVar39 = true;
					if (iLocal_159)
					{
						unk_0xF243B7A14FCFD0F4(iLocal_160);
						if (unk_0xD6513D668481290A(iLocal_160))
						{
							iVar40 = unk_0x61C05BF08A1E0EFE(iLocal_160, Local_56.f_1D.f_46[0 /*3*/], Local_56.f_1D.f_4D[0], true, true, false);
							if (iLocal_160 == joaat("windsor"))
							{
								unk_0x7170EF3CEB4D0224(iVar40, 0);
							}
							if (unk_0x724D816EA203A79E(iVar40) && unk_0xE59B7F5A03335350(iVar40, 0))
							{
								unk_0xBD53A029D0155A42(unk_0xBC25C936A095B5BA(), iVar40, -1);
								unk_0x55AFEE10B3CE5C2C(iVar40, 0f);
								unk_0x2CA123B0622F495C(iLocal_160);
								if (func_116(iLocal_160))
								{
									switch (iLocal_160)
									{
										case joaat("marshall"):
											unk_0x7170EF3CEB4D0224(iVar40, iLocal_111);
											break;
										}
								}
								unk_0x1E7A09C1710FB071(&iVar40);
							}
							iLocal_159 = 0;
						}
						else
						{
							bVar39 = false;
						}
					}
					if (!unk_0x719413B40BB63D86())
					{
					}
					else if (unk_0xF220370B0C08EC20())
					{
					}
					else
					{
						bVar39 = false;
					}
					if (bVar39)
					{
						if (unk_0x724D816EA203A79E(iLocal_168) && unk_0xE59B7F5A03335350(iLocal_168, 0))
						{
							iVar41 = func_49(24);
							if (func_278(&Local_141, 24))
							{
								func_273(&Local_141, func_457());
								if (unk_0x724D816EA203A79E(iVar41))
								{
									unk_0xCF6040807CC0E4A5(&iVar41);
								}
							}
							if (Local_56 == 21)
							{
								unk_0x6C5F5B5F6894CCE3(-89.377f, 92.6583f, 71.2349f, 5f, 1, 0, 0, false);
								unk_0x641B19E156645A92(iLocal_168, -89.377f, 92.6583f, 71.2349f, 1, false, 0, 1);
								unk_0x019CE76D5286C95C(iLocal_168, 154.4846f);
								func_271(iLocal_168, -89.377f, 92.6583f, 71.2349f, 154.4846f, 24, 0);
							}
							else if (Local_56 == 22)
							{
								unk_0x6C5F5B5F6894CCE3(-62.0307f, -1839.859f, 25.6787f, 5f, 1, 0, 0, false);
								unk_0x641B19E156645A92(iLocal_168, -62.0307f, -1839.859f, 25.6787f, 1, false, 0, 1);
								unk_0x019CE76D5286C95C(iLocal_168, 319.6985f);
								func_271(iLocal_168, -62.0307f, -1839.859f, 25.6787f, 319.6985f, 24, 0);
							}
							else if (Local_56 == 23)
							{
								unk_0x6C5F5B5F6894CCE3(-234.7648f, -1150.311f, 21.9224f, 5f, 1, 0, 0, false);
								unk_0x641B19E156645A92(iLocal_168, -234.7648f, -1150.311f, 21.9224f, 1, false, 0, 1);
								unk_0x019CE76D5286C95C(iLocal_168, 270.8741f);
								func_271(iLocal_168, -234.7648f, -1150.311f, 21.9224f, 270.8741f, 24, 0);
							}
							unk_0xF0A40F19AAB79E88(iLocal_168, 1084227584);
						}
						if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
						{
							iVar2 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
							if (unk_0x724D816EA203A79E(iVar2) && unk_0xE59B7F5A03335350(iVar2, 0))
							{
								unk_0x641B19E156645A92(iVar2, Local_83.f_42[1 /*3*/], 1, false, 0, 1);
								unk_0x019CE76D5286C95C(iVar2, Local_56.f_1D.f_4D[0]);
								unk_0xF0A40F19AAB79E88(iVar2, 1084227584);
								if ((iLocal_160 == joaat("monster") || iLocal_160 == joaat("marshall")) || iLocal_160 == joaat("rhino"))
								{
									unk_0x2487C8A04B65E2BD(iVar2, false);
								}
								else
								{
									unk_0x2487C8A04B65E2BD(iVar2, true);
								}
								if (unk_0x5CFC8E6CC224744A(unk_0xBC25C936A095B5BA()))
								{
									unk_0x92C13E9A4A1DA028(unk_0xBC25C936A095B5BA(), 0, 0, -1);
									unk_0xC3D5C68D28907D90(unk_0xBC25C936A095B5BA(), 1);
								}
								unk_0x4E87F356DA56EB3F(iVar2, true);
								func_225(func_457(), &iVar2, 3, 1);
							}
							unk_0x829FA4611BD56B44(800);
							func_280(1, 1, 1, 0, 0);
							func_279(&(Local_83[3 /*15*/]), &(Local_56.f_6E), &(Local_56.f_6F));
							iLocal_175 = 0;
							iLocal_177 = -1;
							Local_56.f_3 = 15;
						}
						else
						{
							unk_0x4EA570997E107F35(sVar4);
							func_264();
							unk_0x062C9995BFD27B2A(false, false, 3000, 1, 0, 0);
							if (unk_0xEF0E25DA0CB6E8FF(Local_56.f_6E))
							{
								unk_0x348665177DBFB93B(Local_56.f_6E, false);
								unk_0x4EC087603E1DEF9C(Local_56.f_6E, 0);
							}
							if (unk_0xEF0E25DA0CB6E8FF(Local_56.f_6F))
							{
								unk_0x348665177DBFB93B(Local_56.f_6F, false);
								unk_0x4EC087603E1DEF9C(Local_56.f_6F, 0);
							}
							if (unk_0x724D816EA203A79E(iLocal_178))
							{
								unk_0xD434A01DEA38A939(iLocal_178, true, 0);
								unk_0x346478B12F69D4E3(iLocal_178, false);
								iLocal_178 = 0;
							}
							unk_0xA98B19EC1C93FC3C(unk_0xB5CEFD608600A09F());
							unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
							unk_0x27CBA62D1F6DF074(8);
							unk_0x49D46EE47C9CCB66(unk_0xBC25C936A095B5BA());
							unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), Local_56.f_1D.f_46[1 /*3*/], 1, false, 0, 1);
							unk_0x019CE76D5286C95C(unk_0xBC25C936A095B5BA(), Local_56.f_1D.f_4D[1]);
							unk_0x829FA4611BD56B44(800);
							SYSTEM::SETTIMERA(0);
							func_267(198.0043f, -999.7775f, -100f, 50f, 0);
							unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
							Local_56.f_3 = 16;
						}
						if (Local_56.f_3 != 16)
						{
							unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 0);
						}
						unk_0x59B038076F830627(false);
						unk_0x43F06392C4EF25E0(false);
						SYSTEM::SETTIMERA(0);
						unk_0xF3F01A78937DC905(0f);
						unk_0x2B9AEC08E469E384(0f, 1065353216);
						iVar42 = unk_0x252B0CBDBF5803ED(unk_0xBC25C936A095B5BA(), &uVar0, -1);
						iVar43 = 0;
						while (iVar43 < iVar42)
						{
							if ((unk_0x724D816EA203A79E(uVar0[iVar43]) && !unk_0x36CEFBE9B745A58D(uVar0[iVar43])) && unk_0x9488E18994C5C83D(uVar0[iVar43], unk_0x705BBFE5A8ADE4A9(unk_0xB5CEFD608600A09F())))
							{
								if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
								{
									iVar2 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
									if ((unk_0x724D816EA203A79E(iVar2) && unk_0xE59B7F5A03335350(iVar2, 0)) && unk_0x524ABB0435146845(iVar2) > iVar43)
									{
										unk_0xBD53A029D0155A42(uVar0[iVar43], iVar2, iVar43);
									}
								}
								else
								{
									unk_0xD5874E4A4BF782FC(uVar0[iVar43], Local_56.f_1D.f_46[1 /*3*/], 0, 0, 1);
								}
							}
							iVar43++;
						}
						unk_0x27CBA62D1F6DF074(8);
						iLocal_174 = 0;
					}
				}
				break;
			
			case 15:
				bVar44 = true;
				if (!unk_0x719413B40BB63D86())
				{
				}
				else if (unk_0xF220370B0C08EC20())
				{
				}
				else
				{
					bVar44 = false;
				}
				if (func_266())
				{
				}
				else
				{
					bVar44 = false;
				}
				if (unk_0xEF0E25DA0CB6E8FF(Local_56.f_6E) && unk_0xF448AA2D7E08A675(Local_56.f_6E))
				{
					if (unk_0x16BE1286447174A9(Local_56.f_6E))
					{
						bVar44 = false;
					}
					if (IntToFloat(SYSTEM::TIMERA()) <= (Local_83[3 /*15*/].f_E * 1000f))
					{
						bVar44 = false;
					}
				}
				else if (unk_0xEF0E25DA0CB6E8FF(Local_56.f_6F) && unk_0xF448AA2D7E08A675(Local_56.f_6F))
				{
					if (unk_0x16BE1286447174A9(Local_56.f_6F))
					{
						bVar44 = false;
					}
					if (IntToFloat(SYSTEM::TIMERA()) <= (Local_83[3 /*15*/].f_E * 1000f))
					{
						bVar44 = false;
					}
				}
				else
				{
					bVar44 = false;
				}
				if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
				{
					func_256(unk_0xBC25C936A095B5BA(), Local_83.f_56[1 /*6*/], Local_83.f_42[1 /*3*/], ((Local_83[3 /*15*/].f_E * 1000f) - 500f), Local_83.f_49[2 /*4*/], 3, &fVar3);
				}
				if (iLocal_177 < 1 && func_224(unk_0xBC25C936A095B5BA(), 198.0043f, -999.7775f, -100f, 1) > 55f)
				{
					if (iLocal_177 == 0)
					{
						func_267(198.0043f, -999.7775f, -100f, 50f, 0);
					}
					iLocal_177++;
				}
				if (bVar44)
				{
					SYSTEM::SETTIMERA(0);
					Local_56.f_3 = 16;
				}
				else
				{
					unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 0);
				}
				break;
			
			case 16:
				bVar45 = true;
				if (IntToFloat(SYSTEM::TIMERA()) <= (Local_83.f_3D[3] * 1000f))
				{
					bVar45 = false;
				}
				if (bVar45)
				{
					Local_56.f_3 = 17;
				}
				break;
			
			case 17:
				if (unk_0xBF697FA7422C0621(Local_56.f_70))
				{
					unk_0xB165D6ED2E977354(Local_56.f_70);
				}
				StringCopy(&Global_7F73, "", 32);
				if (unk_0x719413B40BB63D86())
				{
					unk_0x13D5880CBA449AA9();
				}
				func_223(47, 1);
				func_221(47, 1);
				Global_110A8.f_241 = 0;
				if (unk_0x17FAADF9916EF741() || unk_0x422F9EDE839E6ABB())
				{
					unk_0x829FA4611BD56B44(250);
				}
				SYSTEM::SETTIMERA(0);
				unk_0x062C9995BFD27B2A(false, false, 3000, 1, 0, 0);
				if (unk_0xEF0E25DA0CB6E8FF(Local_56.f_6E))
				{
					unk_0x348665177DBFB93B(Local_56.f_6E, false);
					unk_0x4EC087603E1DEF9C(Local_56.f_6E, 0);
				}
				if (unk_0xEF0E25DA0CB6E8FF(Local_56.f_6F))
				{
					unk_0x348665177DBFB93B(Local_56.f_6F, false);
					unk_0x4EC087603E1DEF9C(Local_56.f_6F, 0);
				}
				if (unk_0x724D816EA203A79E(iLocal_178))
				{
					unk_0xD434A01DEA38A939(iLocal_178, true, 0);
					unk_0x346478B12F69D4E3(iLocal_178, false);
					iLocal_178 = 0;
				}
				if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
				{
					iVar2 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
					if (unk_0x724D816EA203A79E(iVar2) && unk_0xE59B7F5A03335350(iVar2, 0))
					{
						unk_0x641B19E156645A92(iVar2, Local_83.f_49[2 /*4*/], 1, false, 0, 1);
						unk_0x019CE76D5286C95C(iVar2, Local_83.f_49[2 /*4*/].f_3);
						unk_0xF0A40F19AAB79E88(iVar2, 1084227584);
						unk_0xF3F01A78937DC905(0f);
						unk_0x2B9AEC08E469E384(0f, 1065353216);
					}
				}
				unk_0x59B038076F830627(true);
				unk_0x43F06392C4EF25E0(true);
				func_280(0, 1, 1, 0, 0);
				unk_0xA4E856A8CD53B8DF(unk_0xBC25C936A095B5BA());
				unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
				if (iLocal_155 > 0)
				{
					unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), iLocal_155, 0);
					unk_0xCE6A8FE7DACF8BD4(unk_0xB5CEFD608600A09F(), 0);
				}
				if (((unk_0x724D816EA203A79E(iLocal_168) && unk_0x5CAE759AE8219D20(iLocal_168)) && unk_0xB248FAA35ED47DB9(iLocal_168, 0)) && iLocal_168 != func_49(24))
				{
					unk_0x1E7A09C1710FB071(&iLocal_168);
				}
				unk_0x7CB6FD92BE491AD9(&(Local_131.f_9), 25);
				iLocal_172 = 0;
				Local_56.f_3 = 18;
				break;
			
			case 18:
				if (unk_0x726D9204B160D23E())
				{
					Local_56.f_3 = 0;
				}
				break;
		}
	}
	else
	{
		if (Global_110A8.f_241)
		{
			func_223(47, 1);
			func_221(47, 1);
			Global_110A8.f_241 = 0;
		}
		Local_56.f_3 = 0;
		if (iLocal_115 != -1)
		{
			func_69(&iLocal_115);
		}
	}
	if (Global_110A8.f_241)
	{
		unk_0xD74FE6777694F41E();
		func_220();
		func_76(0);
		unk_0x8E25082A46F87892(unk_0xBC25C936A095B5BA(), joaat("weapon_unarmed"), true);
		unk_0xD55638CE45B2B948(2, 202);
		unk_0xBBC4195AD74D153D(0, 37, 1);
		unk_0xBBC4195AD74D153D(0, 157, 1);
		unk_0xBBC4195AD74D153D(0, 158, 1);
		unk_0xBBC4195AD74D153D(0, 159, 1);
		unk_0xBBC4195AD74D153D(0, 160, 1);
		unk_0xBBC4195AD74D153D(0, 161, 1);
		unk_0xBBC4195AD74D153D(0, 162, 1);
		unk_0xBBC4195AD74D153D(0, 163, 1);
		unk_0xBBC4195AD74D153D(0, 164, 1);
		unk_0xBBC4195AD74D153D(0, 165, 1);
		unk_0xBBC4195AD74D153D(0, 14, 1);
		unk_0xBBC4195AD74D153D(0, 15, 1);
		unk_0xBBC4195AD74D153D(0, 53, 1);
		unk_0xBBC4195AD74D153D(0, 54, 1);
		unk_0xBBC4195AD74D153D(0, 140, 1);
		unk_0xBBC4195AD74D153D(0, 141, 1);
		unk_0xBBC4195AD74D153D(0, 142, 1);
		unk_0xBBC4195AD74D153D(0, 143, 1);
		unk_0xBBC4195AD74D153D(0, 143, 1);
		unk_0xBBC4195AD74D153D(0, 47, 1);
		unk_0xBBC4195AD74D153D(0, 38, 1);
		unk_0xBBC4195AD74D153D(0, 22, 1);
		unk_0xBBC4195AD74D153D(0, 102, 1);
		unk_0xBBC4195AD74D153D(0, 69, 1);
		unk_0xBBC4195AD74D153D(0, 70, 1);
		unk_0xBBC4195AD74D153D(0, 68, 1);
		unk_0xBBC4195AD74D153D(0, 92, 1);
		unk_0xBBC4195AD74D153D(0, 99, 1);
		unk_0xBBC4195AD74D153D(0, 115, 1);
		unk_0xBBC4195AD74D153D(0, 46, 1);
		unk_0xBBC4195AD74D153D(0, 25, 1);
	}
	if (!bVar1 && Local_56.f_2 == 0)
	{
		if (unk_0xF16DAFF595E80F7C())
		{
			if (!unk_0xF1734B55490E9045(&cLocal_165))
			{
				if ((((func_209("WEB_VEH_INV") || func_209("WEB_VEH_FULL")) || func_209("CAR_GAR_05")) || func_209("CAR_GAR_06")) || func_209("CAR_GAR_EXIT"))
				{
					unk_0x7456702622C62EA0(1);
				}
				StringCopy(&cLocal_165, "", 16);
			}
		}
	}
}

void func_220()//Position - 0x18842
{
	Global_4336.f_6 = 1;
}

void func_221(int iParam0, bool bParam1)//Position - 0x18850
{
	struct<2> Var0;
	
	Var0 = { func_222(iParam0) };
	if (Var0.f_1 == -1)
	{
		return;
	}
	if (bParam1)
	{
		unk_0xF0059F27F7BB6680(&(Global_7BC3[Var0.f_1]), Var0);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&(Global_7BC3[Var0.f_1]), Var0);
	}
}

struct<2> func_222(var uParam0)//Position - 0x18893
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<2> Var3;
	
	iVar0 = uParam0;
	iVar1 = 0;
	iVar2 = 0;
	Var3 = -1;
	Var3.f_1 = -1;
	while (iVar1 < 6)
	{
		iVar2 += 32;
		if (iVar0 < iVar2)
		{
			Var3.f_1 = iVar1;
			Var3 = (iVar0 - Var3.f_1 * 32);
			return Var3;
		}
		iVar1++;
	}
	return Var3;
}

void func_223(int iParam0, bool bParam1)//Position - 0x188E5
{
	struct<2> Var0;
	
	Var0 = { func_222(iParam0) };
	if (Var0.f_1 == -1)
	{
		return;
	}
	if (bParam1)
	{
		unk_0xF0059F27F7BB6680(&(Global_7BBC[Var0.f_1]), Var0);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&(Global_7BBC[Var0.f_1]), Var0);
	}
}

float func_224(int iParam0, vector3 vParam1, bool bParam2)//Position - 0x18928
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

void func_225(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x18962
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	
	if ((func_25(iParam0) && unk_0x724D816EA203A79E(*iParam1)) && unk_0xE59B7F5A03335350(*iParam1, 0))
	{
		if (iParam2 > Global_19B04.f_932.f_21B.f_953)
		{
			return;
		}
		if (iParam2 == 0)
		{
		}
		else if (iParam2 == 1)
		{
		}
		else if (iParam2 == 2)
		{
		}
		else if (iParam2 == 3)
		{
			func_31(*iParam1, iParam0);
		}
		if (unk_0xA6BE0954FC6BAA16(*iParam1) != 0)
		{
			unk_0x1345B3BF11EDB0CF(*iParam1, 0);
		}
		Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/] = unk_0x6F79ECA8C83E4357(*iParam1);
		if (unk_0xA6705B5DA0B723DE(*iParam1, &iVar1))
		{
			Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_1 = unk_0x6F79ECA8C83E4357(iVar1);
		}
		Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_2 = unk_0x49C9CB91F370BC53(*iParam1);
		Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_3 = unk_0x8D66276473ABD7CC(*iParam1);
		Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_B[0] = unk_0xFC8A228C62614C5C(*iParam1, 1);
		Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_B[1] = unk_0xFC8A228C62614C5C(*iParam1, 2);
		Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_B[2] = unk_0xFC8A228C62614C5C(*iParam1, 3);
		Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_B[3] = unk_0xFC8A228C62614C5C(*iParam1, 4);
		Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_B[4] = unk_0xFC8A228C62614C5C(*iParam1, 5);
		Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_B[5] = unk_0xFC8A228C62614C5C(*iParam1, 6);
		Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_B[6] = unk_0xFC8A228C62614C5C(*iParam1, 7);
		Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_B[7] = unk_0xFC8A228C62614C5C(*iParam1, 8);
		Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_B[8] = unk_0xFC8A228C62614C5C(*iParam1, 9);
		Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_B[9] = unk_0xFC8A228C62614C5C(*iParam1, 10);
		Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_B[10] = unk_0xFC8A228C62614C5C(*iParam1, 11);
		Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_B[11] = unk_0xFC8A228C62614C5C(*iParam1, 12);
		if (unk_0x6DB86B1ADD81CED4(*iParam1, 0))
		{
			iVar2 = unk_0xAA1A0B747CDFC807(*iParam1);
			if (iVar2 == 0 || iVar2 == 5)
			{
				Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_18 = 1;
			}
			else
			{
				Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_18 = 0;
			}
		}
		else
		{
			Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_18 = 0;
		}
		Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_19 = unk_0x93DD0CE3F3963C56();
		StringCopy(&(Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_1B), unk_0x2232934AD664DD49(*iParam1), 16);
		Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_1A = unk_0x89FC8F09D6647DEC(*iParam1);
		unk_0x87F182D2DA225F0D(*iParam1, &(Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_5), &(Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_6));
		unk_0x375E42DA279E7FED(*iParam1, &(Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_7), &(Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_8));
		unk_0x5F73107BDF663316(*iParam1, &(Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_54), &(Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_55), &(Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_56));
		Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_58 = unk_0xB830044A99FABAAF(*iParam1);
		Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_57 = unk_0x2629793241883F74(*iParam1);
		Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_59 = unk_0x0FF608FD384AF8FA(*iParam1);
		Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_5A = unk_0xC2587DF549B15BB6(*iParam1);
		unk_0x2774857472EBCE0F(*iParam1, &(Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_5D), &(Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_5E), &(Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_5F));
		if (unk_0xFF7612EE8C5F1E19(*iParam1, 2))
		{
			unk_0xF0059F27F7BB6680(&(Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_5C), 28);
		}
		else
		{
			unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_5C), 28);
		}
		if (unk_0xFF7612EE8C5F1E19(*iParam1, 3))
		{
			unk_0xF0059F27F7BB6680(&(Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_5C), 29);
		}
		else
		{
			unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_5C), 29);
		}
		if (unk_0xFF7612EE8C5F1E19(*iParam1, 0))
		{
			unk_0xF0059F27F7BB6680(&(Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_5C), 30);
		}
		else
		{
			unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_5C), 30);
		}
		if (unk_0xFF7612EE8C5F1E19(*iParam1, 1))
		{
			unk_0xF0059F27F7BB6680(&(Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_5C), 31);
		}
		else
		{
			unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_5C), 31);
		}
		Global_19B04.f_932.f_21B.f_10C9[iParam0] = 10;
		if (unk_0x1092AA16A9506AA1(*iParam1) >= 0 && func_228(*iParam1, 0, &uVar0))
		{
			func_34(iParam1, &(Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_1F), &(Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_51));
			if (bParam3)
			{
				Global_19B04.f_4E79[iParam0 /*43*/].f_28 = 1;
				Global_19B04.f_4E79[iParam0 /*43*/] = Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/];
				Global_19B04.f_4E79[iParam0 /*43*/].f_3 = Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_57;
				Global_19B04.f_4E79[iParam0 /*43*/].f_4 = Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_54;
				Global_19B04.f_4E79[iParam0 /*43*/].f_5 = Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_55;
				Global_19B04.f_4E79[iParam0 /*43*/].f_6 = Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_56;
				Global_19B04.f_4E79[iParam0 /*43*/].f_A = Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_5A;
				Global_19B04.f_4E79[iParam0 /*43*/].f_10 = !Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_58;
				Global_19B04.f_4E79[iParam0 /*43*/].f_13 = { Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_1B };
				Global_19B04.f_4E79[iParam0 /*43*/].f_17 = Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_1A;
				Global_19B04.f_4E79[iParam0 /*43*/].f_7 = Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_1F[11];
				Global_19B04.f_4E79[iParam0 /*43*/].f_8 = Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_1F[12];
				Global_19B04.f_4E79[iParam0 /*43*/].f_9 = Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_1F[23];
				Global_19B04.f_4E79[iParam0 /*43*/].f_B = Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_1F[4];
				Global_19B04.f_4E79[iParam0 /*43*/].f_C = Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_1F[15];
				Global_19B04.f_4E79[iParam0 /*43*/].f_D = Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_1F[16];
				Global_19B04.f_4E79[iParam0 /*43*/].f_E = Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_1F[14];
				Global_19B04.f_4E79[iParam0 /*43*/].f_F = Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_1F[22];
				Global_19B04.f_4E79[iParam0 /*43*/].f_12 = Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_1F[20];
				Global_19B04.f_4E79[iParam0 /*43*/].f_11 = Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_1F[18];
				Global_19B04.f_4E79[iParam0 /*43*/].f_18 = unk_0x34374BDFA570F489(*iParam1, 11) + 1;
				Global_19B04.f_4E79[iParam0 /*43*/].f_19 = unk_0x34374BDFA570F489(*iParam1, 12) + 1;
				Global_19B04.f_4E79[iParam0 /*43*/].f_1A = unk_0x34374BDFA570F489(*iParam1, 4) + 1;
				Global_19B04.f_4E79[iParam0 /*43*/].f_1B = unk_0x34374BDFA570F489(*iParam1, 23) + 1;
				Global_19B04.f_4E79[iParam0 /*43*/].f_1C = unk_0x34374BDFA570F489(*iParam1, 14) + 1;
				Global_19B04.f_4E79[iParam0 /*43*/].f_1D = unk_0x34374BDFA570F489(*iParam1, 16) + 1;
				Global_19B04.f_4E79[iParam0 /*43*/].f_1E = unk_0x34374BDFA570F489(*iParam1, 15) + 1;
				Global_19B04.f_4E79[iParam0 /*43*/].f_20 = unk_0xE0ED9CF8FA3974E1(*iParam1);
				Global_19B04.f_4E79[iParam0 /*43*/].f_21[0] = unk_0xC28362974F1C5F02(*iParam1);
				Global_19B04.f_4E79[iParam0 /*43*/].f_21[1] = unk_0x9CC28989969C6738(*iParam1, 14, 0);
				Global_19B04.f_4E79[iParam0 /*43*/].f_21[2] = unk_0x9CC28989969C6738(*iParam1, 14, 1);
				Global_19B04.f_4E79[iParam0 /*43*/].f_21[3] = unk_0x9CC28989969C6738(*iParam1, 14, 2);
				Global_19B04.f_4E79[iParam0 /*43*/].f_21[4] = unk_0x9CC28989969C6738(*iParam1, 14, 3);
				Global_19B04.f_4E79[iParam0 /*43*/].f_27 = unk_0x9F1E01FDF55720DC(*iParam1);
				Global_19B04.f_4E79[iParam0 /*43*/].f_1F = func_227(*iParam1);
				Global_19B04.f_4E79[iParam0 /*43*/].f_21[0] = unk_0x46223EA23DD520FE(*iParam1);
				unk_0x2FE0800842DB5EF4(*iParam1, &iVar4, &uVar5, &uVar6);
				if (iVar4 == 0)
				{
					iVar3 = 0;
				}
				else if (iVar4 == 1)
				{
					iVar3 = 1;
				}
				else if (iVar4 == 3)
				{
					iVar3 = 2;
				}
				else if (iVar4 == 4)
				{
					iVar3 = 3;
				}
				else if (iVar4 == 5)
				{
					iVar3 = 4;
				}
				else
				{
					iVar3 = -1;
				}
				func_226(Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_5, Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_7, iVar3, 1, &(Global_19B04.f_4E79[iParam0 /*43*/].f_1));
				unk_0x033614E4CFF449DB(*iParam1, &iVar4, &uVar5);
				if (iVar4 == 0)
				{
					iVar3 = 0;
				}
				else if (iVar4 == 1)
				{
					iVar3 = 1;
				}
				else if (iVar4 == 3)
				{
					iVar3 = 2;
				}
				else if (iVar4 == 4)
				{
					iVar3 = 3;
				}
				else if (iVar4 == 5)
				{
					iVar3 = 4;
				}
				else
				{
					iVar3 = -1;
				}
				func_226(Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_6, -1, iVar3, 0, &(Global_19B04.f_4E79[iParam0 /*43*/].f_2));
			}
		}
	}
}

int func_226(int iParam0, int iParam1, int iParam2, bool bParam3, var uParam4)//Position - 0x19576
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (func_140(iVar0, &sVar2, &iVar1, &iVar3, &iVar4))
	{
		if ((iParam0 == iVar3 && (!bParam3 || iParam1 == iVar4)) && ((iParam2 == iVar1 || iParam2 == -1) || iParam2 == 255))
		{
			*uParam4 = iVar0;
			return 1;
		}
		iVar0++;
	}
	iParam0 = -1;
	iParam1 = -1;
	*uParam4 = -1;
	return 0;
}

float func_227(int iParam0)//Position - 0x195E9
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	iVar0 = 100000;
	iVar1 = 65000;
	iVar2 = 50000;
	iVar3 = 20000;
	iVar4 = 20000;
	iVar5 = iVar4;
	if ((unk_0x724D816EA203A79E(iParam0) && unk_0xE59B7F5A03335350(iParam0, 0)) && unk_0x1092AA16A9506AA1(iParam0) >= 0)
	{
		if (unk_0x9F1E01FDF55720DC(iParam0) == 3)
		{
			iVar5 = iVar0;
		}
		else if (unk_0x9F1E01FDF55720DC(iParam0) == 1)
		{
			iVar5 = iVar1;
		}
		else if (unk_0x9F1E01FDF55720DC(iParam0) == 2)
		{
			iVar5 = iVar2;
		}
		else if (unk_0x9F1E01FDF55720DC(iParam0) == 0)
		{
			if (unk_0x7512ED01F3F46714(unk_0x6F79ECA8C83E4357(iParam0)))
			{
				iVar5 = iVar3;
			}
			else
			{
				iVar5 = iVar4;
			}
		}
	}
	fVar6 = (SYSTEM::TO_FLOAT(iVar5) / SYSTEM::TO_FLOAT(iVar4));
	return fVar6;
}

int func_228(int iParam0, bool bParam1, var uParam2)//Position - 0x19699
{
	int iVar0;
	bool bVar1;
	
	*uParam2 = 0;
	if (!unk_0x724D816EA203A79E(iParam0))
	{
		return 0;
	}
	if (!unk_0xE59B7F5A03335350(iParam0, 0))
	{
		return 0;
	}
	if (!unk_0x6067F058A4B0729F(unk_0x6F79ECA8C83E4357(iParam0)))
	{
		return 0;
	}
	iVar0 = unk_0x6F79ECA8C83E4357(iParam0);
	if ((!func_251(iVar0, bParam1, uParam2) && !func_250(unk_0xB5CEFD608600A09F())) && !func_235(iParam0))
	{
		return 0;
	}
	if (func_250(unk_0xB5CEFD608600A09F()))
	{
		if (func_234(iVar0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	bVar1 = false;
	if (func_233(unk_0xB5CEFD608600A09F()) && (unk_0x8C1A6E7D5F410F4A(iVar0) || unk_0xA19D269B4B5A1532(iVar0)))
	{
		bVar1 = true;
	}
	if (((((((unk_0x10A01B0B02B273EF(iParam0) && unk_0x6F79ECA8C83E4357(iParam0) != -32236122) && unk_0x6F79ECA8C83E4357(iParam0) != 177270108) && unk_0x6F79ECA8C83E4357(iParam0) != 387748548) && unk_0x6F79ECA8C83E4357(iParam0) != 1502869817) && unk_0x6F79ECA8C83E4357(iParam0) != -1881846085) && !bVar1) && !(func_232(unk_0x6F79ECA8C83E4357(iParam0)) && func_229(unk_0xB5CEFD608600A09F())))
	{
		*uParam2 = 2;
		return 0;
	}
	if (!unk_0x7AF0088ABFA713B6())
	{
		if ((func_62(iParam0) && unk_0x6F79ECA8C83E4357(iParam0) != joaat("sentinel2")) && unk_0x6F79ECA8C83E4357(iParam0) != joaat("issi2"))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	return 1;
}

int func_229(int iParam0)//Position - 0x19816
{
	if (iParam0 != func_149())
	{
		if (func_231(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1)
			{
				return func_230(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 11;
			}
		}
	}
	return 0;
}

int func_230(int iParam0)//Position - 0x1985D
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

int func_231(int iParam0, bool bParam1, bool bParam2)//Position - 0x19BA9
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

int func_232(int iParam0)//Position - 0x19BF3
{
	if (((iParam0 == 1945374990 || iParam0 == 1653666139) || iParam0 == 219613597) || iParam0 == -1988428699)
	{
		return 1;
	}
	return 0;
}

int func_233(int iParam0)//Position - 0x19C35
{
	if (iParam0 != func_149())
	{
		if (func_231(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1)
			{
				return func_230(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 7;
			}
		}
	}
	return 0;
}

int func_234(int iParam0)//Position - 0x19C7B
{
	switch (iParam0)
	{
		case -2118308144:
		case 1489874736:
		case -1693015116:
		case -692292317:
		case -1435527158:
			return 1;
			break;
	}
	return 0;
}

int func_235(int iParam0)//Position - 0x19CB0
{
	if (func_249(unk_0xB5CEFD608600A09F()) || func_248(unk_0xB5CEFD608600A09F()))
	{
		if (func_236(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_236(int iParam0)//Position - 0x19CDF
{
	if ((!unk_0x724D816EA203A79E(iParam0) || !unk_0xE59B7F5A03335350(iParam0, 0)) || unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		return 0;
	}
	if (func_239(iParam0, 0))
	{
		return 1;
	}
	if (unk_0x3C03CFD5DD1E2D97(iParam0, "Player_Vehicle"))
	{
		if (unk_0x67CFC62D543B19EF(iParam0, "Player_Vehicle") == unk_0x6985F05381EF147F(unk_0xB5CEFD608600A09F()))
		{
			if (func_237(iParam0))
			{
				return 1;
			}
			switch (unk_0x6F79ECA8C83E4357(iParam0))
			{
				case 159274291:
				case 433954513:
				case 1483171323:
				case 886810209:
				case 1561920505:
				case -410205223:
				case 903794909:
				case -391595372:
				case 1254014755:
					return 1;
					break;
				}
			}
	}
	return 0;
}

int func_237(int iParam0)//Position - 0x19D96
{
	if (!unk_0x724D816EA203A79E(iParam0) || !unk_0xE59B7F5A03335350(iParam0, 0))
	{
		return 0;
	}
	if (func_238(unk_0x6F79ECA8C83E4357(iParam0)))
	{
		return 1;
	}
	return 0;
}

int func_238(int iParam0)//Position - 0x19DCC
{
	switch (iParam0)
	{
		case 562680400:
		case 1897744184:
		case -32236122:
		case 884483972:
		case -1210451983:
		case 1356124575:
		case -1924433270:
		case -1242608589:
		case -212993243:
		case 2044532910:
		case -638562243:
			return 1;
			break;
	}
	return 0;
}

int func_239(int iParam0, bool bParam1)//Position - 0x19E25
{
	switch (unk_0x6F79ECA8C83E4357(iParam0))
	{
		case joaat("technical"):
		case joaat("insurgent"):
			if (func_241(unk_0x6F79ECA8C83E4357(iParam0), 0))
			{
				if (Global_267214.f_122 == iParam0)
				{
					return 1;
				}
				else if (func_240(iParam0) != -1 && !bParam1)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_240(int iParam0)//Position - 0x19E80
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (Global_252E21.f_26F[iVar0] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_241(int iParam0, int iParam1)//Position - 0x19EBA
{
	if (iParam1 == 0)
	{
		if (func_247(iParam0, 0))
		{
			return 1;
		}
	}
	switch (iParam0)
	{
		case joaat("faction"):
		case joaat("buccaneer"):
		case joaat("chino"):
		case joaat("moonbeam"):
		case joaat("primo"):
		case joaat("voodoo2"):
			return func_246();
			break;
		
		case joaat("sabregt"):
			if (Global_40001.f_351A)
			{
				return func_245();
			}
			break;
		
		case joaat("tornado"):
		case joaat("tornado2"):
		case joaat("tornado3"):
			if (Global_40001.f_351B)
			{
				return func_245();
			}
			break;
		
		case joaat("virgo3"):
			if (Global_40001.f_3519)
			{
				return func_245();
			}
			break;
		
		case joaat("minivan"):
			if (Global_40001.f_351C)
			{
				return func_245();
			}
			break;
		
		case joaat("slamvan"):
			if (Global_40001.f_351E)
			{
				return func_245();
			}
			break;
		
		case joaat("sultan"):
		case joaat("banshee"):
			return func_244();
			break;
		
		case joaat("comet2"):
			if (Global_40001.f_4677)
			{
				return func_243();
			}
			break;
		
		case joaat("diablous"):
			if (Global_40001.f_4679)
			{
				return func_243();
			}
			break;
		
		case joaat("fcr"):
			if (Global_40001.f_467D)
			{
				return func_243();
			}
			break;
		
		case joaat("elegy2"):
			if (Global_40001.f_467A)
			{
				return func_243();
			}
			break;
		
		case joaat("nero"):
			if (Global_40001.f_4681)
			{
				return func_243();
			}
			break;
		
		case joaat("italigtb"):
			if (Global_40001.f_467F)
			{
				return func_243();
			}
			break;
		
		case joaat("specter"):
			if (Global_40001.f_4684)
			{
				return func_243();
			}
			break;
		
		case joaat("technical"):
			if (Global_40001.f_4E1B)
			{
				return func_242();
			}
			break;
		
		case joaat("insurgent"):
			if (Global_40001.f_4E1C)
			{
				return func_242();
			}
			break;
	}
	return 0;
}

bool func_242()//Position - 0x1A09A
{
	return unk_0x7B2F21BFE86AEB61(2067165443);
}

bool func_243()//Position - 0x1A0AB
{
	return unk_0x7B2F21BFE86AEB61(-957277403);
}

bool func_244()//Position - 0x1A0BC
{
	return unk_0x7B2F21BFE86AEB61(210122941);
}

bool func_245()//Position - 0x1A0CD
{
	return unk_0x7B2F21BFE86AEB61(-1894522408);
}

bool func_246()//Position - 0x1A0DE
{
	return unk_0x7B2F21BFE86AEB61(1630677557);
}

int func_247(int iParam0, int iParam1)//Position - 0x1A0EF
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 1;
			break;
		
		case joaat("sabregt2"):
			if (!Global_40001.f_351A)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_40001.f_351B)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_40001.f_3519)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_40001.f_351C)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_40001.f_351E)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_40001.f_351D)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("comet3"):
			if (Global_40001.f_4677)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("diablous2"):
			if (Global_40001.f_4679)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("fcr2"):
			if (Global_40001.f_467D)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("elegy"):
			if (Global_40001.f_467A)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("nero2"):
			if (Global_40001.f_4681)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("italigtb2"):
			if (Global_40001.f_467F)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("specter2"):
			if (Global_40001.f_4684)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case 1356124575:
			if (Global_40001.f_4E1B)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case -1924433270:
			if (Global_40001.f_4E1C)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
	}
	return 0;
}

int func_248(int iParam0)//Position - 0x1A362
{
	if (iParam0 != func_149())
	{
		if (func_231(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1 && Global_24FB5C[iParam0 /*406*/].f_131.f_4 != func_149())
			{
				return func_230(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 5;
			}
		}
	}
	return 0;
}

int func_249(int iParam0)//Position - 0x1A3C1
{
	if (iParam0 != func_149())
	{
		if (func_231(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1 && Global_24FB5C[iParam0 /*406*/].f_131.f_4 != func_149())
			{
				return func_230(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 8;
			}
		}
	}
	return 0;
}

int func_250(int iParam0)//Position - 0x1A421
{
	if (iParam0 != func_149())
	{
		if (func_231(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1)
			{
				return func_230(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 9;
			}
		}
	}
	return 0;
}

int func_251(int iParam0, bool bParam1, var uParam2)//Position - 0x1A468
{
	bool bVar0;
	
	if (!bParam1)
	{
		if ((((((((((((((iParam0 == joaat("police") || iParam0 == joaat("policeold1")) || iParam0 == joaat("policeold2")) || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("police4")) || iParam0 == joaat("fbi")) || iParam0 == joaat("fbi2")) || iParam0 == joaat("polmav")) || iParam0 == joaat("policeb")) || iParam0 == joaat("policet")) || iParam0 == joaat("riot")) || iParam0 == joaat("sheriff")) || iParam0 == joaat("pranger")) || iParam0 == joaat("sheriff2"))
		{
			*uParam2 = 1;
			return 0;
		}
	}
	if (((((((iParam0 == joaat("ambulance") || iParam0 == 1938952078) || iParam0 == joaat("taxi")) || iParam0 == joaat("lguard")) || iParam0 == joaat("ripley")) || iParam0 == joaat("dilettante2")) || iParam0 == joaat("airbus")) || iParam0 == joaat("airtug"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((iParam0 == joaat("burrito") || iParam0 == joaat("rumpo2")) || iParam0 == joaat("speedo")) || iParam0 == joaat("speedo2"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((iParam0 == joaat("scorcher") || iParam0 == joaat("bmx")) || iParam0 == joaat("cruiser")) || iParam0 == joaat("fixter"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((((((((((((((((((iParam0 == joaat("caddy") || iParam0 == joaat("forklift")) || iParam0 == joaat("caddy2")) || iParam0 == joaat("crusader")) || iParam0 == joaat("tribike")) || iParam0 == joaat("tribike2")) || iParam0 == joaat("tribike3")) || iParam0 == joaat("tractor")) || iParam0 == joaat("tractor2")) || iParam0 == joaat("mower")) || iParam0 == joaat("tornado4")) || iParam0 == joaat("docktug")) || iParam0 == joaat("stretch")) || iParam0 == joaat("bison2")) || iParam0 == joaat("bison3")) || iParam0 == joaat("benson")) || iParam0 == joaat("pounder")) || iParam0 == joaat("submersible")) || iParam0 == joaat("emperor3")) || iParam0 == joaat("dune2"))
	{
		*uParam2 = 2;
		return 0;
	}
	bVar0 = false;
	if (func_233(unk_0xB5CEFD608600A09F()) && (unk_0x8C1A6E7D5F410F4A(iParam0) || unk_0xA19D269B4B5A1532(iParam0)))
	{
		bVar0 = true;
	}
	if (((((((((!unk_0x7C28D15641461C68(iParam0) && !unk_0x7512ED01F3F46714(iParam0)) && iParam0 != joaat("blazer")) && iParam0 != joaat("blazer3")) && iParam0 != joaat("blazer4")) && iParam0 != joaat("blazer5")) && iParam0 != joaat("chimera")) && iParam0 != 1502869817) && iParam0 != -1881846085) && !bVar0)
	{
		*uParam2 = 2;
		return 0;
	}
	if (iParam0 == joaat("monster"))
	{
		*uParam2 = 2;
		return 0;
	}
	if ((iParam0 == joaat("insurgent") || iParam0 == joaat("technical")) || iParam0 == joaat("limo2"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (unk_0x7AF0088ABFA713B6())
	{
		if (func_252(iParam0))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	if (!unk_0x7AF0088ABFA713B6())
	{
		if (iParam0 == joaat("insurgent") || iParam0 == joaat("insurgent2"))
		{
			*uParam2 = 2;
		}
	}
	return 1;
}

int func_252(int iParam0)//Position - 0x1A880
{
	switch (iParam0)
	{
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("forklift"):
			return 1;
			break;
	}
	return 0;
}

int func_253()//Position - 0x1A8A9
{
	int iVar0;
	
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
		if (unk_0x724D816EA203A79E(iVar0) && unk_0xE59B7F5A03335350(iVar0, 0))
		{
			if (iVar0 == Global_110A8.f_1E4[21])
			{
				return 21;
			}
			if (iVar0 == Global_110A8.f_1E4[26])
			{
				return 26;
			}
			if (iVar0 == Global_110A8.f_1E4[29])
			{
				return 29;
			}
			if (iVar0 == Global_110A8.f_1E4[32])
			{
				return 32;
			}
			if (iVar0 == Global_110A8.f_1E4[22])
			{
				return 22;
			}
			if (iVar0 == Global_110A8.f_1E4[27])
			{
				return 27;
			}
			if (iVar0 == Global_110A8.f_1E4[30])
			{
				return 30;
			}
			if (iVar0 == Global_110A8.f_1E4[33])
			{
				return 33;
			}
			if (iVar0 == Global_110A8.f_1E4[23])
			{
				return 23;
			}
			if (iVar0 == Global_110A8.f_1E4[28])
			{
				return 28;
			}
			if (iVar0 == Global_110A8.f_1E4[31])
			{
				return 31;
			}
			if (iVar0 == Global_110A8.f_1E4[34])
			{
				return 34;
			}
		}
	}
	return -1;
}

bool func_254()//Position - 0x1A9DA
{
	return unk_0x105601648511CC64() <= Global_43C1.f_1671 + 100;
}

void func_255(int iParam0)//Position - 0x1A9EF
{
	if ((unk_0x724D816EA203A79E(iParam0) && unk_0xE59B7F5A03335350(iParam0, 0)) && iParam0 == Global_11431)
	{
		Global_19B04.f_7F22.f_15D4 = 0;
		Global_11431 = 0;
	}
}

int func_256(int iParam0, struct<4> Param1, var uParam2, var uParam3, vector3 vParam4, float fParam5, struct<4> Param6, int iParam7, float fParam8)//Position - 0x1AA28
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	int iVar4;
	vector3 vVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	
	vVar0 = { Param1 };
	vVar1 = { Param1.f_3 };
	vVar2 = { vParam4 };
	vVar3 = { Param1.f_3 };
	if (iLocal_174 == 0)
	{
		iVar4 = unk_0x9FE9D386222EEE47(iParam0, 0);
		iLocal_178 = iVar4;
		unk_0x127F627F30266DD9(iLocal_178, 1);
		unk_0xD421BC740C5340C3(iLocal_178, 1);
		unk_0xF0A40F19AAB79E88(iLocal_178, 1084227584);
		unk_0x2D655AA68FA1736B(iLocal_178, true, true, 0);
		if (unk_0x5CFC8E6CC224744A(iParam0))
		{
			unk_0x92C13E9A4A1DA028(iParam0, 0, 0, -1);
			unk_0xC3D5C68D28907D90(iParam0, 1);
		}
		vVar5 = { unk_0x541C2AEF053615BC(iLocal_178, true) };
		fLocal_179 = (vVar5.z - vVar0.z);
		unk_0x641B19E156645A92(iLocal_178, vVar0 + Vector(-10f, 0f, 0f), 1, false, 0, 1);
		if (unk_0xE59B7F5A03335350(iLocal_178, 0))
		{
			unk_0x93D3868AE0D83B7C(iLocal_178, 3);
		}
		iLocal_180 = unk_0x105601648511CC64();
		iLocal_174 = 1;
	}
	if (iLocal_174 == 1)
	{
		if (unk_0x724D816EA203A79E(iLocal_178) && unk_0xE59B7F5A03335350(iLocal_178, 0))
		{
			fVar6 = SYSTEM::TO_FLOAT(iLocal_180);
			fVar7 = (fVar6 + fParam5);
			fVar8 = func_263(SYSTEM::TO_FLOAT(unk_0x105601648511CC64()), fVar6, fVar7);
			fVar8 = (fVar8 - fVar6);
			fVar8 = (fVar8 / fParam5);
			if (iParam7 == 1)
			{
				fVar8 = func_262(fVar8);
			}
			else if (iParam7 == 2)
			{
				fVar8 = func_261(fVar8);
			}
			else if (iParam7 == 3)
			{
				fVar8 = func_259(fVar8);
			}
			fVar8 = (fVar8 * fParam5);
			fVar8 = (fVar8 + fVar6);
			unk_0xBBC4195AD74D153D(0, 72, 1);
			unk_0xD5874E4A4BF782FC(iLocal_178, func_257(vVar0 + Vector(fLocal_179, 0f, 0f), vVar2 + Vector(fLocal_179, 0f, 0f), fVar6, fVar7, fVar8), 0, 0, 1);
			if (iLocal_175 && !unk_0x5CFC8E6CC224744A(iParam0))
			{
				unk_0x784C605D172817C8(iLocal_178, func_257((0f - vVar1.x), (0f - vVar1.y), (vVar1.z + 180f), (0f - vVar3.x), (0f - vVar3.y), (vVar3.z + 180f), fVar6, fVar7, fVar8), 2, 1);
			}
			else
			{
				if (!unk_0x36CEFBE9B745A58D(iParam0))
				{
					if (unk_0x5CFC8E6CC224744A(iParam0))
					{
						unk_0x2E9860A2B72187F5(iParam0, 236, true);
						unk_0x2E9860A2B72187F5(iParam0, 309, true);
					}
				}
				unk_0x784C605D172817C8(iLocal_178, func_257(vVar1, vVar3, fVar6, fVar7, fVar8), 2, 1);
			}
			unk_0xD434A01DEA38A939(iLocal_178, false, 0);
			unk_0x346478B12F69D4E3(iLocal_178, true);
		}
		else
		{
			iLocal_174 = 2;
			return 0;
		}
		if (SYSTEM::TO_FLOAT(unk_0x105601648511CC64()) > (SYSTEM::TO_FLOAT(iLocal_180) + fParam5) && SYSTEM::TO_FLOAT(unk_0x105601648511CC64()) > ((SYSTEM::TO_FLOAT(iLocal_180) + fParam5) + 2600f))
		{
			iLocal_174 = 2;
			return 0;
		}
	}
	if (iLocal_174 == 2)
	{
		unk_0x2E9860A2B72187F5(iParam0, 236, false);
		unk_0x2E9860A2B72187F5(iParam0, 309, false);
		if (unk_0x724D816EA203A79E(iLocal_178))
		{
			if (!func_21(Param6, 0f, 0f, 0f, 0))
			{
				unk_0x641B19E156645A92(iLocal_178, Param6, 1, false, 0, 1);
				unk_0x019CE76D5286C95C(iLocal_178, Param6.f_3);
				unk_0xF0A40F19AAB79E88(iLocal_178, 1084227584);
			}
			unk_0xD434A01DEA38A939(iLocal_178, true, 0);
			unk_0x346478B12F69D4E3(iLocal_178, false);
			iLocal_178 = 0;
		}
		if (unk_0x5CFC8E6CC224744A(iParam0))
		{
			unk_0x9965F1612928953B(iParam0, 0);
		}
		return 1;
	}
	return 0;
}

Vector3 func_257(vector3 vParam0, vector3 vParam1, float fParam2, float fParam3, float fParam4)//Position - 0x1AD20
{
	return func_258(vParam0.x, vParam1.x, fParam2, fParam3, fParam4), func_258(vParam0.y, vParam1.y, fParam2, fParam3, fParam4), func_258(vParam0.z, vParam1.z, fParam2, fParam3, fParam4);
}

float func_258(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4)//Position - 0x1AD5A
{
	return ((((fParam1 - fParam0) / (fParam3 - fParam2)) * (fParam4 - fParam2)) + fParam0);
}

float func_259(float fParam0)//Position - 0x1AD76
{
	float fVar0;
	
	if (fParam0 > 0f)
	{
		if (fParam0 < 1f)
		{
			fVar0 = SYSTEM::SIN(func_260(((fParam0 * 3.141593f) * 0.5f)));
		}
		else
		{
			fVar0 = 1f;
		}
	}
	else
	{
		fVar0 = 0f;
	}
	return fVar0;
}

float func_260(float fParam0)//Position - 0x1ADB2
{
	return (fParam0 * 57.29578f);
}

float func_261(float fParam0)//Position - 0x1ADC2
{
	float fVar0;
	
	if (fParam0 > 0f)
	{
		if (fParam0 < 1f)
		{
			fVar0 = (1f - SYSTEM::COS(func_260(((fParam0 * 3.141593f) * 0.5f))));
		}
		else
		{
			fVar0 = 1f;
		}
	}
	else
	{
		fVar0 = 0f;
	}
	return fVar0;
}

float func_262(float fParam0)//Position - 0x1AE00
{
	float fVar0;
	
	if (fParam0 > 0f)
	{
		if (fParam0 < 1f)
		{
			fVar0 = (0.5f * (1f - SYSTEM::COS(func_260((fParam0 * 3.141593f)))));
		}
		else
		{
			fVar0 = 1f;
		}
	}
	else
	{
		fVar0 = 0f;
	}
	return fVar0;
}

float func_263(float fParam0, float fParam1, float fParam2)//Position - 0x1AE3E
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

void func_264()//Position - 0x1AE65
{
	Global_110A8.f_229 = 1;
	Global_110A8.f_22A = 0;
}

void func_265(var uParam0)//Position - 0x1AE7D
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar2 = uParam0;
		iVar1 = (9 + (iVar2 - 21));
		if (iVar0 > 0)
		{
			iVar2 = (iVar2 + 2 + iVar0 * 3);
			iVar1 = ((9 + (iVar2 - 21)) - 2);
		}
		iLocal_49[iVar2] = Global_19B04.f_7F22.f_45[iVar1 /*78*/].f_42;
		if (iLocal_49[iVar2] != 0)
		{
			if (!unk_0xFA30DFD0084E92FE(uLocal_48[iVar2], 2))
			{
				unk_0xF243B7A14FCFD0F4(iLocal_49[iVar2]);
				unk_0xF0059F27F7BB6680(&(uLocal_48[iVar2]), 2);
				func_461(iVar2);
			}
		}
		iVar0++;
	}
}

bool func_266()//Position - 0x1AF0B
{
	return !Global_110A8.f_229;
}

void func_267(vector3 vParam0, float fParam1, bool bParam2)//Position - 0x1AF1B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_61(&(Global_110A8.f_22B[0 /*21*/]), iVar0))
		{
			if (unk_0xF0F2FC9DE291567F(vParam0, Global_110A8.f_22B[0 /*21*/], bParam2) <= fParam1)
			{
				func_268(iVar0);
			}
		}
		iVar0++;
	}
}

void func_268(int iParam0)//Position - 0x1AF6B
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_61(&(Global_110A8.f_22B[0 /*21*/]), iParam0))
	{
		if (unk_0x724D816EA203A79E(Global_110A8.f_8B[iParam0]))
		{
			bVar0 = true;
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0xE59B7F5A03335350(Global_110A8.f_8B[iParam0], 0))
				{
					if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), Global_110A8.f_8B[iParam0], 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				unk_0x77815D3407C6700D(Global_110A8.f_8B[iParam0], true, 1);
				unk_0xCF6040807CC0E4A5(&(Global_110A8.f_8B[iParam0]));
			}
		}
		Global_110A8[iParam0] = 1;
		if (unk_0xFA30DFD0084E92FE(Global_110A8.f_22B[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_67(iParam0, 0)) && Global_11435.f_42 == 0) && Global_19B04.f_7F22.f_7A6[Global_110A8.f_22B[0 /*21*/].f_E] != 0) && Global_19B04.f_7F22.f_7A6[Global_110A8.f_22B[0 /*21*/].f_E] > 3) && (!func_269(0, Global_110A8.f_22B[0 /*21*/].f_C) || !func_269(1, Global_110A8.f_22B[0 /*21*/].f_C)))
			{
				func_114(&(Global_19B04.f_7F22.f_45[Global_110A8.f_22B[0 /*21*/].f_E /*78*/]), &Global_11435);
				Global_11483 = Global_19B04.f_7F22.f_15D7;
			}
			func_463(iParam0, 0);
		}
	}
}

int func_269(int iParam0, int iParam1)//Position - 0x1B0DD
{
	int iVar0;
	
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iParam0 < 0 || iParam0 >= func_270(&(Global_19B04.f_7F22.f_13AE[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_39(Global_19B04.f_7F22.f_13AE[iVar0 /*157*/][iParam0 /*78*/].f_42, 0);
}

int func_270(var uParam0)//Position - 0x1B14F
{
	return *uParam0;
}

void func_271(int iParam0, vector3 vParam1, float fParam2, int iParam3, bool bParam4)//Position - 0x1B15A
{
	struct<60> Var0;
	
	if (unk_0x724D816EA203A79E(iParam0) && unk_0xE59B7F5A03335350(iParam0, 0))
	{
		if (iParam3 != 24 && iParam3 != 25)
		{
			return;
		}
		if (iParam3 == 24)
		{
			if (unk_0x724D816EA203A79E(Global_110A8.f_1E4[25]) && unk_0xE59B7F5A03335350(Global_110A8.f_1E4[25], 0))
			{
				if (Global_110A8.f_1E4[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam4)
		{
			if ((unk_0x10A01B0B02B273EF(iParam0) || unk_0x6F79ECA8C83E4357(iParam0) == joaat("bus")) || unk_0x6F79ECA8C83E4357(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_272(iParam3);
		Var0.f_9 = 49;
		Var0.f_3B = 2;
		func_32(iParam0, &Var0);
		if (func_21(vParam1, 0f, 0f, 0f, 0))
		{
			vParam1 = { unk_0x541C2AEF053615BC(iParam0, true) };
			fParam2 = unk_0x349C94FFF43E2979(iParam0);
		}
		if (iParam3 == 24)
		{
			if (unk_0x56BEECB328B6D29D(unk_0x1377080E9B0BD993()) != joaat("vehicle_gen_controller"))
			{
				Global_11484 = unk_0x56BEECB328B6D29D(unk_0x1377080E9B0BD993());
			}
		}
		func_113(iParam3, &Var0, vParam1, fParam2, func_46(iParam0));
		func_30(iParam3, iParam0, 0);
	}
}

void func_272(int iParam0)//Position - 0x1B283
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_115(iParam0);
	func_463(iParam0, 0);
}

int func_273(var uParam0, int iParam1)//Position - 0x1B2AA
{
	int iVar0;
	
	if (!func_38(uParam0->f_42))
	{
		return 0;
	}
	if (unk_0x724D816EA203A79E(Global_11432))
	{
		return 0;
	}
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
		
		default:
			return 0;
			break;
	}
	if (!func_269(0, iParam1))
	{
		Global_19B04.f_7F22.f_15D8[iVar0] = 0;
	}
	else if (!func_269(1, iParam1))
	{
		Global_19B04.f_7F22.f_15D8[iVar0] = 1;
	}
	func_274(iParam1, unk_0xD8D56586882095EE(uParam0->f_42));
	func_114(uParam0, &(Global_19B04.f_7F22.f_13AE[iVar0 /*157*/][Global_19B04.f_7F22.f_15D8[iVar0] /*78*/]));
	Global_19B04.f_7F22.f_15D8[iVar0]++;
	if (Global_19B04.f_7F22.f_15D8[iVar0] >= func_270(&(Global_19B04.f_7F22.f_13AE[iVar0 /*157*/])))
	{
		Global_19B04.f_7F22.f_15D8[iVar0] = 0;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_16908[iVar0 /*98*/] == uParam0->f_42 && unk_0x3362CDE8460ED38B(&(Global_16908[iVar0 /*98*/].f_1B), &(uParam0->f_1)))
		{
			Global_16908[iVar0 /*98*/] = 0;
		}
		iVar0++;
	}
	return 1;
}

void func_274(int iParam0, char* sParam1)//Position - 0x1B402
{
	if (!func_25(iParam0))
	{
		return;
	}
	if (!Global_19B04.f_7F22.f_15DC[iParam0])
	{
		switch (iParam0)
		{
			case 0:
				func_275("IMPOUND_HELPM", sParam1, 2, unk_0x491B2241281A03B7(1000, 6000), -1, 10000, 1, 0, 0, 0);
				break;
			
			case 1:
				func_275("IMPOUND_HELPF", sParam1, 2, unk_0x491B2241281A03B7(1000, 6000), -1, 10000, 2, 0, 0, 0);
				break;
			
			case 2:
				func_275("IMPOUND_HELPT", sParam1, 2, unk_0x491B2241281A03B7(1000, 6000), -1, 10000, 4, 0, 0, 0);
				break;
		}
		Global_19B04.f_7F22.f_15DC[iParam0] = 1;
	}
}

void func_275(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x1B4B1
{
	func_276(sParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9);
}

void func_276(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x1B4D1
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
		func_277();
	}
}

void func_277()//Position - 0x1B6A4
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

int func_278(var uParam0, int iParam1)//Position - 0x1B7C4
{
	if (iParam1 == -1)
	{
		return 0;
	}
	if (!func_61(&(Global_110A8.f_22B[0 /*21*/]), iParam1))
	{
		return 0;
	}
	else
	{
		func_114(&(Global_19B04.f_7F22.f_45[Global_110A8.f_22B[0 /*21*/].f_E /*78*/]), uParam0);
	}
	return 1;
}

int func_279(var uParam0, var uParam1, var uParam2)//Position - 0x1B80F
{
	if (unk_0xEF0E25DA0CB6E8FF(*uParam1))
	{
		unk_0x4EC087603E1DEF9C(*uParam1, 0);
	}
	if (unk_0xEF0E25DA0CB6E8FF(*uParam2))
	{
		unk_0x4EC087603E1DEF9C(*uParam2, 0);
	}
	*uParam1 = unk_0x578D5D08EC980893("DEFAULT_SCRIPTED_CAMERA", false);
	*uParam2 = unk_0x578D5D08EC980893("DEFAULT_SCRIPTED_CAMERA", false);
	if (unk_0xEF0E25DA0CB6E8FF(*uParam1) && unk_0xEF0E25DA0CB6E8FF(*uParam2))
	{
		unk_0x6125108F6208C1F6(*uParam1, *uParam0);
		unk_0x3553F2A72957724E(*uParam1, uParam0->f_3, 2);
		unk_0x9DF315A9EFFF87AC(*uParam1, uParam0->f_C);
		unk_0x6125108F6208C1F6(*uParam2, uParam0->f_6);
		unk_0x3553F2A72957724E(*uParam2, uParam0->f_6.f_3, 2);
		unk_0x9DF315A9EFFF87AC(*uParam2, uParam0->f_C);
		unk_0x2FB83B8BD6C05FD2(*uParam1, "HAND_SHAKE", uParam0->f_D);
		unk_0x2FB83B8BD6C05FD2(*uParam2, "HAND_SHAKE", uParam0->f_D);
		if (uParam0->f_E > 0.1f)
		{
			unk_0xAE099C1ADC89C331(*uParam2, *uParam1, SYSTEM::ROUND((uParam0->f_E * 1000f)), 1, 1);
		}
		else
		{
			unk_0x348665177DBFB93B(*uParam1, true);
		}
		unk_0x062C9995BFD27B2A(true, false, 3000, 1, 0, 0);
		return 1;
	}
	return 0;
}

void func_280(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x1B916
{
	if (bParam0)
	{
		unk_0x0D2E9062E966BE4F(unk_0xB5CEFD608600A09F());
		unk_0x8D554ED10E00EEE3(unk_0xB5CEFD608600A09F(), 1);
		unk_0xDE255B32C6B37E90(unk_0xB5CEFD608600A09F(), 1);
		func_285(1);
		unk_0x32FF237D69EB5489();
		unk_0x3169E2C5E6A096BC();
		if (Global_389D.f_1 > 3)
		{
			if (unk_0x58E7DDFF8D17A82A())
			{
				unk_0x1E08809A5041F85B(false);
			}
			if (!func_78())
			{
				Global_389D.f_1 = 3;
			}
			Global_3DB8 = 5;
		}
		func_284(1, iParam3, iParam2, 0);
		Global_DAA5 = 1;
		Global_10ABB = 1;
		Global_11540 = 1;
	}
	else
	{
		func_285(0);
		unk_0xCB50D125C355ED9C();
		Global_DAA5 = 0;
		if (bParam1)
		{
			unk_0x7FF4F08CAB3344B1();
		}
		unk_0x8D554ED10E00EEE3(unk_0xB5CEFD608600A09F(), 0);
		unk_0xDE255B32C6B37E90(unk_0xB5CEFD608600A09F(), 0);
		func_284(0, iParam3, iParam2, 0);
		if (unk_0x7AF0088ABFA713B6())
		{
			if ((((!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && !func_282(unk_0xB5CEFD608600A09F())) && !func_91(unk_0xB5CEFD608600A09F(), 0)) && !func_281()) && !bParam4)
			{
				unk_0x1E5C2A1EAB944289(unk_0xBC25C936A095B5BA(), false);
			}
		}
		else if ((!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && !func_282(unk_0xB5CEFD608600A09F())) && !bParam4)
		{
			unk_0x1E5C2A1EAB944289(unk_0xBC25C936A095B5BA(), false);
		}
		Global_11540 = 0;
	}
}

bool func_281()//Position - 0x1BA3F
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_27.f_12, 14);
}

int func_282(int iParam0)//Position - 0x1BA5C
{
	if (func_91(iParam0, 0))
	{
		return 1;
	}
	if (func_283())
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

bool func_283()//Position - 0x1BA9E
{
	return unk_0xFA30DFD0084E92FE(Global_240006, 3);
}

int func_284(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x1BAAF
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x8ACB0C3FACC09467())
	{
		if (unk_0xB34A6828EBD4A1D8() != iParam0 && uParam2)
		{
			unk_0x22506029183A78EC(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_285(int iParam0)//Position - 0x1BAE2
{
	if (iParam0 == 1)
	{
		unk_0xF0059F27F7BB6680(&Global_93B, 13);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&Global_93B, 13);
	}
}

int func_286(int iParam0)//Position - 0x1BB05
{
	func_61(&(Global_110A8.f_22B[0 /*21*/]), iParam0);
	switch (iParam0)
	{
		case 21:
			if (Global_110A8.f_22B[0 /*21*/].f_4 == 0)
			{
				return iParam0;
			}
			if (!func_287(26))
			{
				return 26;
			}
			if (!func_287(29))
			{
				return 29;
			}
			if (!func_287(32))
			{
				return 32;
			}
			break;
		
		case 22:
			if (Global_110A8.f_22B[0 /*21*/].f_4 == 0)
			{
				return iParam0;
			}
			if (!func_287(27))
			{
				return 27;
			}
			if (!func_287(30))
			{
				return 30;
			}
			if (!func_287(33))
			{
				return 33;
			}
			break;
		
		case 23:
			if (Global_110A8.f_22B[0 /*21*/].f_4 == 0)
			{
				return iParam0;
			}
			if (!func_287(28))
			{
				return 28;
			}
			if (!func_287(31))
			{
				return 31;
			}
			if (!func_287(34))
			{
				return 34;
			}
			break;
	}
	return -1;
}

bool func_287(int iParam0)//Position - 0x1BC07
{
	return func_67(iParam0, 0);
}

void func_288(int iParam0, bool bParam1)//Position - 0x1BC16
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "NULL";
	iVar1 = 0;
	sVar0 = func_290(iParam0, &iVar1);
	if (!unk_0x3362CDE8460ED38B("NONE", sVar0) && iVar1 != 0)
	{
		if (bParam1)
		{
			if (unk_0x00BCFC51EF781989(iVar1))
			{
				return;
			}
			if (unk_0x645938DA8ED5E0BA(unk_0xBC25C936A095B5BA()) == iVar1)
			{
				func_221(iParam0, 1);
				return;
			}
		}
		else
		{
			if (!unk_0x00BCFC51EF781989(iVar1))
			{
				return;
			}
			if (func_289(iParam0))
			{
				func_221(iParam0, 0);
			}
		}
		unk_0xAA5EF3021E488A5D(iVar1, bParam1);
		if (bParam1)
		{
		}
	}
}

int func_289(int iParam0)//Position - 0x1BCA1
{
	struct<2> Var0;
	
	Var0 = { func_222(iParam0) };
	if (Var0.f_1 != -1 && unk_0xFA30DFD0084E92FE(Global_7BC3[Var0.f_1], Var0))
	{
		return 1;
	}
	return 0;
}

var func_290(int iParam0, int iParam1)//Position - 0x1BCD5
{
	struct<5> Var0;
	
	Var0 = { func_291(iParam0) };
	*iParam1 = unk_0x5E29F9399E0829A3(Var0, Var0.f_3);
	return Var0.f_4;
}

struct<5> func_291(int iParam0)//Position - 0x1BCFA
{
	struct<5> Var0;
	vector3 vVar1;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { -447.4833f, 280.3197f, 77.5215f };
			Var0.f_3 = "v_comedy";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 1:
			Var0 = { -1906.786f, -573.7576f, 19.0773f };
			Var0.f_3 = "v_psycheoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 2:
			Var0 = { 1399.973f, 1148.756f, 113.3336f };
			Var0.f_3 = "v_ranch";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 3:
			Var0 = { -598.6379f, -1608.399f, 26.0108f };
			Var0.f_3 = "v_recycle";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 4:
			Var0 = { -556.5089f, 286.3181f, 81.1763f };
			Var0.f_3 = "v_rockclub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 5:
			Var0 = { -111.7116f, -11.912f, 69.5196f };
			Var0.f_3 = "v_janitor";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 6:
			Var0 = { 1274.934f, -1714.726f, 53.7715f };
			Var0.f_3 = "v_lesters";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 7:
			Var0 = { 147.433f, -2201.37f, 3.688f };
			Var0.f_3 = "v_torture";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 8:
			Var0 = { 320.9934f, 265.2515f, 82.1221f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Vinewood)";
			break;
		
		case 9:
			Var0 = { -1425.564f, -244.3f, 15.8053f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Morningwood)";
			break;
		
		case 10:
			Var0 = { 377.153f, -717.567f, 10.0536f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Downtown)";
			break;
		
		case 11:
			Var0 = { 245.1564f, 370.211f, 104.7382f };
			Var0.f_3 = "v_epsilonism";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 12:
			Var0 = { 173.1176f, -1003.279f, -99.9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 13:
			Var0 = { 199.9715f, -999.6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 14:
			Var0 = { 228.6058f, -992.0537f, -99.9999f };
			Var0.f_3 = "v_garagel";
			Var0.f_3 = "hei_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 15:
			Var0 = { 1854.254f, 3686.739f, 33.2671f };
			Var0.f_3 = "v_sheriff";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 16:
			Var0 = { -444.8907f, 6013.587f, 30.7164f };
			Var0.f_3 = "v_sheriff2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 17:
			Var0 = { 3522.845f, 3707.965f, 19.9918f };
			Var0.f_3 = "v_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 18:
			Var0 = { 717.2994f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 19:
			Var0 = { 717.299f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweatempty";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 20:
			Var0 = { 2449.785f, 4983.825f, 45.8106f };
			Var0.f_3 = "v_farmhouse";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = { 1087.195f, -1988.445f, 28.649f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 23:
			Var0 = { 982.233f, -2160.382f, 28.4761f };
			Var0.f_3 = "v_abattoir";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 21:
			Var0 = { 479.0568f, -1316.825f, 28.2038f };
			Var0.f_3 = "v_chopshop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 24:
			Var0 = { -1005.663f, -478.3461f, 49.0265f };
			Var0.f_3 = "v_58_sol_office";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 25:
			vVar1 = { func_292(1, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (1)";
			break;
		
		case 26:
			vVar1 = { func_292(2, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (2)";
			break;
		
		case 27:
			vVar1 = { func_292(3, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (3)";
			break;
		
		case 28:
			vVar1 = { func_292(4, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (4)";
			break;
		
		case 29:
			vVar1 = { func_292(5, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (5)";
			break;
		
		case 30:
			vVar1 = { func_292(6, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (6)";
			break;
		
		case 31:
			vVar1 = { func_292(7, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (7)";
			break;
		
		case 32:
			Var0 = { Global_100449[34 /*1951*/].f_92.f_5ED + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (8)";
			break;
		
		case 33:
			vVar1 = { func_292(35, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (9)";
			break;
		
		case 34:
			vVar1 = { func_292(36, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (10)";
			break;
		
		case 35:
			vVar1 = { func_292(37, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (11)";
			break;
		
		case 36:
			vVar1 = { func_292(38, 0) };
			Var0 = { -20.1f, -580.8f, 91.3f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (12)";
			break;
		
		case 37:
			vVar1 = { func_292(39, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (13)";
			break;
		
		case 38:
			vVar1 = { func_292(40, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (14)";
			break;
		
		case 39:
			vVar1 = { func_292(41, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (15)";
			break;
		
		case 40:
			vVar1 = { func_292(42, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (16)";
			break;
		
		case 41:
			vVar1 = { func_292(43, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (17)";
			break;
		
		case 42:
			Var0 = { -470.3754f, -698.5207f, 51.5276f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (18)";
			break;
		
		case 43:
			Var0 = { -460.6133f, -691.5562f, 69.9067f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (19)";
			break;
		
		case 44:
			Var0 = { 300.633f, -997.4288f, -99.9727f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (20)";
			break;
		
		case 49:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (1)";
			break;
		
		case 50:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (2)";
			break;
		
		case 51:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (3)";
			break;
		
		case 52:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (4)";
			break;
		
		case 53:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (5)";
			break;
		
		case 54:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (7)";
			break;
		
		case 55:
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (8)";
			break;
		
		case 56:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (10)";
			break;
		
		case 57:
			Var0 = { -1287.65f, 443.2707f, 94.6919f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (12)";
			break;
		
		case 58:
			Var0 = { 374.2012f, 416.9688f, 142.5991f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (13)";
			break;
		
		case 45:
			Var0 = { -16.29585f, -684.0385f, 33.50832f };
			Var0.f_3 = "dt1_03_carpark";
			Var0.f_4 = "dt1_03_carpark";
			break;
		
		case 46:
			Var0 = { 341.1f, -1000f, -99.2f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = "v_apart_midspaz";
			break;
		
		case 47:
			Var0 = { 199.9716f, -1018.954f, -100f };
			Var0.f_3 = "v_garagem_sp";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 48:
			Var0 = { -1388.001f, -618.4197f, 30.8196f };
			Var0.f_3 = "v_bahama";
			Var0.f_4 = Var0.f_3;
			break;
	}
	switch (iParam0)
	{
		case 59:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 60:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 61:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 62:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 63:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 64:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 65:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 66:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 67:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 68:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 69:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 70:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 71:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 72:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 73:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 74:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 75:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 76:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 77:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 78:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 79:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 80:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 81:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 82:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 83:
			vVar1 = { func_292(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 84:
			vVar1 = { func_292(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 85:
			vVar1 = { func_292(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 86:
			vVar1 = { func_292(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 87:
			vVar1 = { func_292(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 88:
			vVar1 = { func_292(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 89:
			vVar1 = { func_292(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 90:
			vVar1 = { func_292(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 91:
			vVar1 = { func_292(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 92:
			vVar1 = { func_292(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 93:
			vVar1 = { func_292(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 94:
			vVar1 = { func_292(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 95:
			vVar1 = { func_292(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 96:
			vVar1 = { func_292(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 97:
			vVar1 = { func_292(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 98:
			vVar1 = { func_292(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 99:
			vVar1 = { func_292(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 100:
			vVar1 = { func_292(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 101:
			vVar1 = { func_292(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 102:
			vVar1 = { func_292(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 103:
			vVar1 = { func_292(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 104:
			vVar1 = { func_292(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 105:
			vVar1 = { func_292(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 106:
			vVar1 = { func_292(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 107:
			vVar1 = { func_292(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 108:
			vVar1 = { func_292(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 109:
			vVar1 = { func_292(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 110:
			vVar1 = { func_292(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 111:
			vVar1 = { func_292(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 112:
			vVar1 = { func_292(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 113:
			vVar1 = { func_292(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 114:
			vVar1 = { func_292(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 115:
			vVar1 = { func_292(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 116:
			vVar1 = { func_292(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 117:
			vVar1 = { func_292(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 118:
			vVar1 = { func_292(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 119:
			vVar1 = { func_292(91, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 120:
			vVar1 = { func_292(97, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 121:
			vVar1 = { func_292(103, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 122:
			vVar1 = { func_292(104, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 123:
			vVar1 = { func_292(105, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 124:
			vVar1 = { func_292(106, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 125:
			vVar1 = { func_292(107, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 126:
			vVar1 = { func_292(108, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 127:
			vVar1 = { func_292(109, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 128:
			vVar1 = { func_292(110, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 129:
			vVar1 = { func_292(111, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 130:
			vVar1 = { func_292(112, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 131:
			vVar1 = { func_292(113, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 132:
			vVar1 = { func_292(114, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 133:
			vVar1 = { func_292(103, 1) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 134:
			vVar1 = { func_292(106, 1) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 135:
			vVar1 = { func_292(109, 1) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 136:
			vVar1 = { func_292(112, 1) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 137:
			Var0 = { 938.3077f, -3196.112f, -100f };
			Var0.f_3 = "gr_grdlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 138:
			Var0 = { 512.5f, 4852f, -62.6f };
			Var0.f_3 = "xm_x17dlc_int_sub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 139:
			Var0 = { 2047f, 2942f, -61.9f };
			Var0.f_3 = "xm_x17dlc_int_facility";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 140:
			Var0 = { -1047.6f, -232.3503f, 38.0135f };
			Var0.f_3 = "v_faceoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = { 1100f, -2004f, 37f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 141:
			Var0 = { 361f, 6306f, -159f };
			Var0.f_3 = "xm_x17dlc_int_silo_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 142:
			Var0 = { 305f, 6298f, -160f };
			Var0.f_3 = "xm_x17dlc_int_silo_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 143:
			Var0 = { 244f, 6163f, -159f };
			Var0.f_3 = "xm_x17dlc_int_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 144:
			Var0 = { 2168f, 2920f, -84f };
			Var0.f_3 = "xm_x17dlc_int_facility2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 145:
			Var0 = { 446f, 5922f, -158f };
			Var0.f_3 = "xm_x17dlc_int_bse_tun";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 146:
			Var0 = { 252f, 5972f, -156f };
			Var0.f_3 = "xm_x17dlc_int_base_loop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 147:
			Var0 = { 682f, 5959f, -152f };
			Var0.f_3 = "xm_x17dlc_int_base_ent";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 148:
			Var0 = { 551f, 5939f, -158f };
			Var0.f_3 = "xm_x17dlc_int_base";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 149:
			Var0 = { 520.0001f, 4750f, -70f };
			Var0.f_3 = "xm_x17dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 150:
			Var0 = { -1266.802f, -3014.849f, -49.4903f };
			Var0.f_3 = "sm_smugdlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 151:
			Var0 = { 974.9203f, -3000.065f, -40.647f };
			Var0.f_3 = "imp_impexp_intwaremed";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 152:
			Var0 = { 969.5376f, -3000.411f, -48.647f };
			Var0.f_3 = "imp_impexp_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 153:
			Var0 = { 1094.997f, -3100.012f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_s_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 154:
			Var0 = { 1059.995f, -3100f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_m_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 155:
			Var0 = { 1010.008f, -3100f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_l_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 156:
			Var0 = { 372.6707f, 405.5235f, 144.5326f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 157:
			Var0 = { -282.0588f, -955.17f, 85.3036f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 158:
			Var0 = { 342.7946f, -997.4225f, -99.7444f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 159:
			Var0 = { 260.3268f, -997.4298f, -100.0086f };
			Var0.f_3 = "v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 160:
			Var0 = { 108.2369f, -753.5364f, 233.1523f };
			Var0.f_3 = "v_fib01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 161:
			Var0 = { 135.3226f, -746.3677f, 253.1523f };
			Var0.f_3 = "v_fib03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 162:
			Var0 = { 108.2572f, -753.5342f, 44.7548f };
			Var0.f_3 = "v_office_lobby";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 163:
			Var0 = { 228.6161f, -992.053f, -99.9999f };
			Var0.f_3 = "heist_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 164:
			Var0 = { 199.9716f, -999.6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 165:
			Var0 = { 173.1165f, -1003.28f, -99.9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 166:
			Var0 = { 575f, 4750f, -60f };
			Var0.f_3 = "xm_v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 167:
			Var0 = { 600f, 4750f, -60f };
			Var0.f_3 = "xm_v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 168:
			Var0 = { 630f, 4750f, -60f };
			Var0.f_3 = "xm_v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 169:
			Var0 = { 1257f, 4796.7f, -39.1f };
			Var0.f_3 = "xm_x17dlc_int_tun_entry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 170:
			Var0 = { 694.4f, 5898.9f, -152.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 171:
			Var0 = { 1121.8f, 5516.3f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 172:
			Var0 = { 1279.6f, 5233.2f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 173:
			Var0 = { 1158.6f, 5467.1f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 174:
			Var0 = { 705.9f, 5838.5f, -152.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 175:
			Var0 = { 1316.5f, 5184f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 176:
			Var0 = { 1248f, 5276.1f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 177:
			Var0 = { 1090.2f, 5559.2f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 178:
			Var0 = { 1261f, 4808.6f, -39.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 179:
			Var0 = { 721.8f, 5781.4f, -146.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 180:
			Var0 = { 780.8f, 5703.4f, -136.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 181:
			Var0 = { 868.1f, 5659.2f, -126.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 182:
			Var0 = { 1218.2f, 5321.2f, -85.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 183:
			Var0 = { 1278.5f, 4859.7f, -44.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 184:
			Var0 = { 1187.2f, 5419.8f, -96.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 185:
			Var0 = { 1344.7f, 5136.4f, -75.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 186:
			Var0 = { 1363.4f, 5039.5f, -65.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 187:
			Var0 = { 1049.3f, 5602.1f, -107.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 188:
			Var0 = { 1337.8f, 4944.3f, -55.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 189:
			Var0 = { 961.5f, 5646.9f, -117.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 190:
			Var0 = { 345.0041f, 4842.001f, -59.9997f };
			Var0.f_3 = "xm_x17dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 191:
			Var0 = { 279.9322f, -1337.49f, 23.7419f };
			Var0.f_3 = "v_coroner";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 192:
			Var0 = { -1604.664f, -3012.583f, -79.9999f };
			Var0.f_3 = "ba_dlc_int_01_ba";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 193:
			Var0 = { -1505.783f, -3012.587f, -79.9999f };
			Var0.f_3 = "ba_dlc_int_02_ba";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 194:
			Var0 = { -630.4205f, -236.7843f, 37.057f };
			Var0.f_3 = "V_JEWEL2";
			Var0.f_4 = Var0.f_3;
			break;
		
		default:
			break;
	}
	return Var0;
}

struct<6> func_292(int iParam0, bool bParam1)//Position - 0x1DFEE
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case -1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 2:
			Var0 = { -761.0982f, 317.6259f, 169.5963f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { -761.1888f, 317.6295f, 216.0503f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { -795.3856f, 340.0188f, 152.7941f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 61:
			Var0 = { -778.5056f, 332.3779f, 212.1968f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 5:
			Var0 = { -258.1807f, -950.6853f, 70.0239f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 6:
			Var0 = { -285.0051f, -957.6552f, 85.3035f };
			Var0.f_3 = { 0f, 0f, -110f };
			break;
		
		case 7:
			Var0 = { -1471.882f, -530.7484f, 62.34918f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 34:
			Var0 = { -1471.882f, -530.7484f, 49.72156f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 62:
			Var0 = { -1463.15f, -540.2369f, 74.2439f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 35:
			Var0 = { -885.3702f, -451.4775f, 119.327f };
			Var0.f_3 = { 0f, 0f, 27.55617f };
			break;
		
		case 36:
			Var0 = { -913.0385f, -438.4284f, 114.3997f };
			Var0.f_3 = { 0f, 0f, -153.3093f };
			break;
		
		case 37:
			Var0 = { -892.5499f, -430.4789f, 88.25368f };
			Var0.f_3 = { 0f, 0f, 116.9193f };
			break;
		
		case 38:
			Var0 = { -35.0462f, -576.317f, 82.90739f };
			Var0.f_3 = { 0f, 0f, 160f };
			break;
		
		case 39:
			Var0 = { -10.3788f, -590.7431f, 93.02542f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 65:
			Var0 = { -22.2487f, -589.1461f, 80.2305f };
			Var0.f_3 = { 0f, 0f, 69.88f };
			break;
		
		case 40:
			Var0 = { -900.6311f, -376.7462f, 78.27306f };
			Var0.f_3 = { 0f, 0f, 26.92611f };
			break;
		
		case 41:
			Var0 = { -929.483f, -374.5104f, 102.2329f };
			Var0.f_3 = { 0f, 0f, -152.5531f };
			break;
		
		case 63:
			Var0 = { -914.4202f, -375.8189f, 114.4743f };
			Var0.f_3 = { 0f, 0f, -63f };
			break;
		
		case 42:
			Var0 = { -617.1647f, 64.6042f, 100.8196f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 43:
			Var0 = { -584.2015f, 42.7133f, 86.4187f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { -609.5665f, 50.2203f, 98.3998f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 73:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = { 0f, 0f, 11f };
			break;
		
		case 74:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = { 0f, 0f, -63.5f };
			break;
		
		case 75:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = { 0f, 0f, -71.5f };
			break;
		
		case 76:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = { 0f, 0f, 40.5f };
			break;
		
		case 77:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = { 0f, 0f, 6f };
			break;
		
		case 78:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = { 0f, 0f, -14.5f };
			break;
		
		case 79:
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = { 0f, 0f, -29f };
			break;
		
		case 80:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = { 0f, 0f, 4.5f };
			break;
		
		case 81:
			Var0 = { -1287.65f, 443.2707f, 94.6919f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 82:
			Var0 = { 374.2012f, 416.9688f, 142.6977f };
			Var0.f_3 = { 0f, 0f, -14f };
			break;
		
		case 83:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 84:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 85:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 86:
			Var0 = { -1573.098f, -4085.806f, 9.7851f };
			Var0.f_3 = { 0f, 0f, 162f };
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			Var0 = { 342.8157f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			Var0 = { 260.3297f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 87:
			Var0 = { -1572.187f, -570.8315f, 109.9879f };
			Var0.f_3 = { 0f, 0f, -54f };
			break;
		
		case 88:
			Var0 = { -1383.954f, -476.7112f, 73.507f };
			Var0.f_3 = { 0f, 0f, 8f };
			break;
		
		case 89:
			Var0 = { -138.0029f, -629.739f, 170.2854f };
			Var0.f_3 = { 0f, 0f, -84f };
			break;
		
		case 90:
			Var0 = { -74.8895f, -817.6883f, 244.8508f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			Var0 = { 1100.764f, -3159.384f, -34.9342f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			Var0 = { 1005.806f, -3157.67f, -36.0897f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 103:
			if (!bParam1)
			{
				Var0 = { -1576.571f, -569.7595f, 85.5f };
				Var0.f_3 = { 0f, 0f, 36.1f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 104:
			if (!bParam1)
			{
				Var0 = { -1571.254f, -566.5865f, 85.5f };
				Var0.f_3 = { 0f, 0f, -53.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 105:
			if (!bParam1)
			{
				Var0 = { -1568.098f, -571.9171f, 85.5f };
				Var0.f_3 = { 0f, 0f, -143.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 106:
			if (!bParam1)
			{
				Var0 = { -1384.518f, -475.8657f, 56.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 107:
			if (!bParam1)
			{
				Var0 = { -1384.538f, -475.8829f, 48.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 108:
			if (!bParam1)
			{
				Var0 = { -1378.994f, -477.2481f, 56.1f };
				Var0.f_3 = { 0f, 0f, -81.1f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 109:
			if (!bParam1)
			{
				Var0 = { -186.5683f, -576.4624f, 135f };
				Var0.f_3 = { 0f, 0f, 96.16f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 110:
			if (!bParam1)
			{
				Var0 = { -113.886f, -564.3862f, 135f };
				Var0.f_3 = { 0f, 0f, 110.96f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 111:
			if (!bParam1)
			{
				Var0 = { -134.6568f, -635.1774f, 135f };
				Var0.f_3 = { 0f, 0f, -9.04f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 112:
			if (!bParam1)
			{
				Var0 = { -79.0479f, -822.6393f, 221f };
				Var0.f_3 = { 0f, 0f, 70f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 113:
			if (!bParam1)
			{
				Var0 = { -70.3086f, -819.5784f, 221f };
				Var0.f_3 = { 0f, 0f, 160f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 114:
			if (!bParam1)
			{
				Var0 = { -79.9861f, -818.425f, 221f };
				Var0.f_3 = { 0f, 0f, -20f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
	}
	return Var0;
}

void func_293(int iParam0, bool bParam1)//Position - 0x1EBA4
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "NULL";
	iVar1 = 0;
	sVar0 = func_290(iParam0, &iVar1);
	if (!unk_0x3362CDE8460ED38B("NONE", sVar0) && iVar1 != 0)
	{
		if (bParam1 && !unk_0xA30B063D74E02747(iVar1))
		{
			if (unk_0x645938DA8ED5E0BA(unk_0xBC25C936A095B5BA()) == iVar1)
			{
				func_223(iParam0, 1);
				return;
			}
			unk_0xE9B3EA654865E5A7(iVar1, 1);
		}
		else if (!bParam1 && unk_0xA30B063D74E02747(iVar1))
		{
			if (func_294(iParam0))
			{
				func_223(iParam0, 0);
			}
			unk_0xE9B3EA654865E5A7(iVar1, 0);
		}
		else if (!bParam1)
		{
			if (func_294(iParam0))
			{
				func_223(iParam0, 0);
			}
		}
	}
}

int func_294(int iParam0)//Position - 0x1EC4A
{
	struct<2> Var0;
	
	Var0 = { func_222(iParam0) };
	if (Var0.f_1 != -1 && unk_0xFA30DFD0084E92FE(Global_7BBC[Var0.f_1], Var0))
	{
		return 1;
	}
	return 0;
}

int func_295()//Position - 0x1EC7E
{
	if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0) || func_286(Local_56) != -1)
	{
		return 1;
	}
	return 0;
}

int func_296(float fParam0, float fParam1, float fParam2)//Position - 0x1ECA7
{
	float fVar0;
	float fVar1;
	
	fVar1 = (fParam1 - fParam2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	fVar0 = (fParam1 + fParam2);
	if (fVar0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	if (fVar0 > fVar1)
	{
		if (fParam0 < fVar0 && fParam0 > fVar1)
		{
			return 1;
		}
	}
	else if (fParam0 < fVar0 || fParam0 > fVar1)
	{
		return 1;
	}
	return 0;
}

int func_297(int iParam0)//Position - 0x1ED1C
{
	switch (iParam0)
	{
		case 21:
		case 26:
		case 29:
		case 32:
			return 0;
			break;
		
		case 23:
		case 28:
		case 31:
		case 34:
			return 2;
			break;
		
		case 22:
		case 27:
		case 30:
		case 33:
			return 1;
			break;
	}
	return 145;
}

int func_298(int iParam0, var uParam1)//Position - 0x1ED8A
{
	uParam1->f_49[1 /*4*/] = { 194.674f, -1026.984f, -100f };
	uParam1->f_49[1 /*4*/].f_3 = 285f;
	*(uParam1[2 /*15*/]) = { 198.9908f, -1025.956f, -98.8981f };
	(uParam1[2 /*15*/])->f_3 = { -4.5679f, -0.0266f, 110.7275f };
	(uParam1[2 /*15*/])->f_6 = { 198.6016f, -1026.103f, -98.9313f };
	(uParam1[2 /*15*/])->f_6.f_3 = { -5.3499f, -0.0266f, 110.7275f };
	(uParam1[2 /*15*/])->f_C = 25.2218f;
	(uParam1[2 /*15*/])->f_D = 0.2f;
	(uParam1[2 /*15*/])->f_E = 3.5f;
	uParam1->f_3D[2] = 0f;
	switch (iParam0)
	{
		case 21:
			*(uParam1[0 /*15*/]) = { -84.4891f, 95.2463f, 72.7397f };
			(uParam1[0 /*15*/])->f_3 = { -1.0236f, 0.0007f, -126.7439f };
			(uParam1[0 /*15*/])->f_6 = { -84.1568f, 94.9229f, 72.7318f };
			(uParam1[0 /*15*/])->f_6.f_3 = { -1.0236f, 0.0007f, -127.1499f };
			(uParam1[0 /*15*/])->f_C = 25.1687f;
			(uParam1[0 /*15*/])->f_D = 0.2f;
			(uParam1[0 /*15*/])->f_E = 3.5f;
			uParam1->f_3D[0] = 0f;
			uParam1->f_49[0 /*4*/] = { -62.5434f, 80.2917f, 70.5644f };
			uParam1->f_49[0 /*4*/].f_3 = 345f;
			*(uParam1[1 /*15*/]) = { -61.075f, 81.2555f, 84.5867f };
			(uParam1[1 /*15*/])->f_3 = { -69.9271f, 0f, 103.892f };
			(uParam1[1 /*15*/])->f_6 = { -60.6284f, 81.2036f, 84.5867f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -73.4239f, 0f, 108.7693f };
			(uParam1[1 /*15*/])->f_C = 29.9579f;
			(uParam1[1 /*15*/])->f_D = 0.2f;
			(uParam1[1 /*15*/])->f_E = 3f;
			uParam1->f_3D[1] = 1f;
			uParam1->f_42[0 /*3*/] = { -60.3859f, 78.4352f, 70.5249f };
			uParam1->f_56[0 /*6*/] = { -67.0129f, 81.9471f, 70.5249f };
			uParam1->f_56[0 /*6*/].f_3 = { 0f, 0f, -117.9206f };
			*(uParam1[3 /*15*/]) = { -61.8119f, 77.3506f, 80.3259f };
			(uParam1[3 /*15*/])->f_3 = { -57.747f, 0f, 34.1968f };
			(uParam1[3 /*15*/])->f_6 = { -61.8119f, 77.3506f, 80.3259f };
			(uParam1[3 /*15*/])->f_6.f_3 = { -48.0008f, 0f, 49.6137f };
			(uParam1[3 /*15*/])->f_C = 30.0324f;
			(uParam1[3 /*15*/])->f_D = 0.2f;
			(uParam1[3 /*15*/])->f_E = 3f;
			uParam1->f_3D[3] = 1f;
			uParam1->f_56[1 /*6*/] = { -62.6272f, 79.7534f, 70.6161f };
			uParam1->f_56[1 /*6*/].f_3 = { 0f, 0f, 65f };
			uParam1->f_42[1 /*3*/] = { -79.1059f, 87.1091f, 70.5157f };
			uParam1->f_49[2 /*4*/] = { -88.4f, 70.8f, 72f };
			uParam1->f_49[2 /*4*/].f_3 = 150f;
			return 1;
			break;
		
		case 22:
			*(uParam1[0 /*15*/]) = { -66.6121f, -1842.122f, 26.6941f };
			(uParam1[0 /*15*/])->f_3 = { 3.4131f, -0.0009f, 17.9566f };
			(uParam1[0 /*15*/])->f_6 = { -66.5137f, -1841.616f, 26.7211f };
			(uParam1[0 /*15*/])->f_6.f_3 = { 3.1669f, -0.0009f, 18.0384f };
			(uParam1[0 /*15*/])->f_C = 25.1856f;
			(uParam1[0 /*15*/])->f_D = 0.2f;
			(uParam1[0 /*15*/])->f_E = 3.5f;
			uParam1->f_3D[0] = 0f;
			uParam1->f_49[0 /*4*/] = { -72.5431f, -1820.447f, 25.9424f };
			uParam1->f_49[0 /*4*/].f_3 = 140f;
			*(uParam1[1 /*15*/]) = { -72.7256f, -1823.283f, 41.0951f };
			(uParam1[1 /*15*/])->f_3 = { -81.9335f, 0f, -58.1415f };
			(uParam1[1 /*15*/])->f_6 = { -72.9027f, -1822.998f, 41.0951f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -80.6657f, 0f, -29.6554f };
			(uParam1[1 /*15*/])->f_C = 29.9864f;
			(uParam1[1 /*15*/])->f_D = 0.2f;
			(uParam1[1 /*15*/])->f_E = 3f;
			uParam1->f_3D[1] = 1f;
			uParam1->f_42[0 /*3*/] = { -76.7939f, -1816.77f, 26.6473f };
			uParam1->f_56[0 /*6*/] = { -69.2183f, -1823.258f, 25.9421f };
			uParam1->f_56[0 /*6*/].f_3 = { 0f, 0f, 49.4214f };
			*(uParam1[3 /*15*/]) = { -70.9492f, -1820.936f, 45.3628f };
			(uParam1[3 /*15*/])->f_3 = { -85.5171f, 0f, 68.3257f };
			(uParam1[3 /*15*/])->f_6 = { -70.9836f, -1821.023f, 45.3628f };
			(uParam1[3 /*15*/])->f_6.f_3 = { -89.4995f, 0f, 68.3257f };
			(uParam1[3 /*15*/])->f_C = 28.4803f;
			(uParam1[3 /*15*/])->f_D = 0.2f;
			(uParam1[3 /*15*/])->f_E = 4f;
			uParam1->f_3D[3] = 1f;
			uParam1->f_56[1 /*6*/] = { -75.3386f, -1818.249f, 26.0241f };
			uParam1->f_56[1 /*6*/].f_3 = { 0f, 0f, -132.7699f };
			uParam1->f_42[1 /*3*/] = { -63.988f, -1829.39f, 26.423f };
			uParam1->f_49[2 /*4*/] = { -49.738f, -1830.147f, 25.5591f };
			uParam1->f_49[2 /*4*/].f_3 = 317.3589f;
			return 1;
			break;
		
		case 23:
			*(uParam1[0 /*15*/]) = { -237.074f, -1170.391f, 23.479f };
			(uParam1[0 /*15*/])->f_3 = { 7.619f, 0f, -69.7398f };
			(uParam1[0 /*15*/])->f_6 = { -237.2166f, -1169.672f, 23.4931f };
			(uParam1[0 /*15*/])->f_6.f_3 = { 7.619f, 0f, -71.3391f };
			(uParam1[0 /*15*/])->f_C = 40.0015f;
			(uParam1[0 /*15*/])->f_D = 0.2f;
			(uParam1[0 /*15*/])->f_E = 3.5f;
			uParam1->f_3D[0] = 0f;
			uParam1->f_49[0 /*4*/] = { -218.0289f, -1162.392f, 22.0242f };
			uParam1->f_49[0 /*4*/].f_3 = 15f;
			*(uParam1[1 /*15*/]) = { -219.5507f, -1159.951f, 36.8399f };
			(uParam1[1 /*15*/])->f_3 = { -81.7188f, 0f, 170.4291f };
			(uParam1[1 /*15*/])->f_6 = { -219.1442f, -1160.019f, 36.8399f };
			(uParam1[1 /*15*/])->f_6.f_3 = { -80.5726f, 0f, -168.992f };
			(uParam1[1 /*15*/])->f_C = 30.0319f;
			(uParam1[1 /*15*/])->f_D = 0.2f;
			(uParam1[1 /*15*/])->f_E = 4f;
			uParam1->f_3D[1] = 1f;
			uParam1->f_42[0 /*3*/] = { -211.6438f, -1162.407f, 22.0234f };
			uParam1->f_56[0 /*6*/] = { -221.6438f, -1162.407f, 22.0234f };
			uParam1->f_56[0 /*6*/].f_3 = { 0f, 0f, -90f };
			*(uParam1[3 /*15*/]) = { -218.5983f, -1159.061f, 31.4452f };
			(uParam1[3 /*15*/])->f_3 = { -62.4689f, 0f, -142.2907f };
			(uParam1[3 /*15*/])->f_6 = { -218.6533f, -1159.067f, 31.4471f };
			(uParam1[3 /*15*/])->f_6.f_3 = { -62.4689f, 0f, -172.3491f };
			(uParam1[3 /*15*/])->f_C = 30f;
			(uParam1[3 /*15*/])->f_D = 0.2f;
			(uParam1[3 /*15*/])->f_E = 3f;
			uParam1->f_3D[3] = 1f;
			uParam1->f_56[1 /*6*/] = { -214.5676f, -1162.658f, 21.9591f };
			uParam1->f_56[1 /*6*/].f_3 = { 0f, 0f, 90f };
			uParam1->f_42[1 /*3*/] = { -227.7619f, -1162.848f, 22.0085f };
			uParam1->f_49[2 /*4*/] = { -221.6f, -1156.3f, 22.6f };
			uParam1->f_49[2 /*4*/].f_3 = 0f;
			return 1;
			break;
	}
	return 0;
}

int func_299()//Position - 0x1F57B
{
	if (!unk_0x7AF0088ABFA713B6())
	{
		return Global_161D2.f_2C == 1;
	}
	return 0;
}

void func_300()//Position - 0x1F597
{
	int iVar0;
	struct<5> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	struct<2> Var6;
	float fVar7;
	int iVar8;
	vector3 vVar9;
	bool bVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	if ((((((unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) || func_27(0)) || func_27(3)) || func_27(2)) || func_27(4)) || func_27(14)) || !func_25(iLocal_129))
	{
		return;
	}
	if (!Global_10AB8)
	{
		if (Global_19B04.f_7F22.f_7BE[iLocal_129 /*939*/].f_272[iLocal_143] != -15)
		{
			if (!Global_110A8[Global_19B04.f_7F22.f_7BE[iLocal_129 /*939*/].f_139[iLocal_143]])
			{
				if (func_352(func_50(), Global_19B04.f_7F22.f_7BE[iLocal_129 /*939*/].f_272[iLocal_143]))
				{
					iVar0 = Global_19B04.f_7F22.f_7BE[iLocal_129 /*939*/][iLocal_143];
					func_350(iVar0, iLocal_143, iLocal_129);
					func_61(&Var1, Global_19B04.f_7F22.f_7BE[iLocal_129 /*939*/].f_139[iLocal_143]);
					if (Var1.f_4 == 0)
					{
					}
					else
					{
						func_463(Global_19B04.f_7F22.f_7BE[iLocal_129 /*939*/].f_139[iLocal_143], 1);
					}
					Global_19B04.f_7F22.f_7BE[iLocal_129 /*939*/].f_272[iLocal_143] = -15;
				}
			}
		}
		iLocal_143++;
		if (iLocal_143 >= 312)
		{
			iLocal_143 = 0;
		}
	}
	if (unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()) != Local_56.f_7 || Local_56.f_2 == 99)
	{
		if (Local_56.f_5 != -1)
		{
			func_69(&(Local_56.f_5));
		}
		if (Local_56.f_2 > 0)
		{
			unk_0x7456702622C62EA0(1);
		}
		Local_56.f_7 = unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA());
		Local_56.f_5 = -1;
		Local_56.f_2 = 0;
		Local_56.f_4 = 0;
		if (bLocal_142)
		{
			if (unk_0xF16DAFF595E80F7C())
			{
				unk_0x7456702622C62EA0(1);
			}
			unk_0x062C9995BFD27B2A(false, false, 3000, 1, 0, 0);
			if (unk_0xEF0E25DA0CB6E8FF(Local_56.f_6E))
			{
				unk_0x348665177DBFB93B(Local_56.f_6E, false);
				unk_0x4EC087603E1DEF9C(Local_56.f_6E, 0);
			}
			if (unk_0xEF0E25DA0CB6E8FF(Local_56.f_6F))
			{
				unk_0x348665177DBFB93B(Local_56.f_6F, false);
				unk_0x4EC087603E1DEF9C(Local_56.f_6F, 0);
			}
			unk_0xDC078F87049ECECE(unk_0xBC25C936A095B5BA(), true, 0);
			unk_0x346478B12F69D4E3(unk_0xBC25C936A095B5BA(), false);
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
				unk_0x0B55204F721A7EA1(unk_0xB5CEFD608600A09F(), 0);
			}
			iVar2 = unk_0x3E12B546F3F2597A();
			if (unk_0x724D816EA203A79E(iVar2) && unk_0xE59B7F5A03335350(iVar2, 0))
			{
				unk_0xDC078F87049ECECE(iVar2, true, 0);
				unk_0x346478B12F69D4E3(iVar2, false);
				if (unk_0xB248FAA35ED47DB9(iVar2, 1))
				{
					unk_0x1E7A09C1710FB071(&iVar2);
				}
			}
			iVar3 = 5000;
			iVar4 = unk_0x105601648511CC64();
			while (!unk_0xAE9335ADE2B33DFC() && (unk_0x105601648511CC64() - iVar4) < iVar3)
			{
				SYSTEM::WAIT(0);
			}
			if (unk_0xBF697FA7422C0621(Local_56.f_70))
			{
				unk_0xB165D6ED2E977354(Local_56.f_70);
			}
			StringCopy(&Global_7F73, "", 32);
			if ((Local_56 == 21 || Local_56 == 22) || Local_56 == 23)
			{
				func_293(47, 1);
				func_288(47, 1);
			}
			unk_0x13D5880CBA449AA9();
			unk_0x7A89E6B582BCD8C2();
			unk_0x59B038076F830627(true);
			unk_0x43F06392C4EF25E0(true);
			func_280(0, 1, 1, 0, 0);
			bLocal_142 = false;
			Global_63BB = 0;
		}
	}
	bVar5 = false;
	if ((((((((((((!bLocal_142 && !unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), Local_56.f_1D, Local_56.f_1D.f_3, Local_56.f_1D.f_6, 0, true, 0)) || (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1) && !Local_56.f_1D.f_45)) || (!unk_0x7214F4879DF8A314(unk_0xBC25C936A095B5BA()) && !unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))) || (!bLocal_142 && func_67(Local_56, 5))) || (!bLocal_142 && unk_0x694514BD37EC4E94(2, 199))) || (!bLocal_142 && unk_0xE186ACC7BE9B244E())) || !func_348(0)) || unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0) || unk_0x3BFD283B5133A140(unk_0xBC25C936A095B5BA())) || unk_0x6C02DCF0A777D97F(unk_0xBC25C936A095B5BA())) || Global_6353) || (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0) && unk_0xA4813477CC5DD00F(unk_0xBC25C936A095B5BA())))
	{
		if (Local_56.f_2 > 0 && Local_56.f_2 != 90)
		{
			iLocal_157 = 1;
			Local_56.f_2 = 99;
		}
		bVar5 = true;
	}
	fVar7 = 20f;
	iVar8 = 3;
	switch (Local_56.f_2)
	{
		case 0:
			if ((((Local_56 != -1 && func_67(Local_56, 0)) && !func_67(Local_56, 5)) && !bLocal_158) && !bVar5)
			{
				if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), Local_56.f_1D, Local_56.f_1D.f_3, Local_56.f_1D.f_6, 0, true, 0) && !unk_0xF16DAFF595E80F7C())
				{
					Var6 = { Local_56.f_1D.f_3F };
					StringConCat(&Var6, "_01", 16);
					func_210(&(Local_56.f_5), 3, &Var6, 0, 0, 0, 0);
					Local_56.f_2 = 1;
				}
			}
			break;
		
		case 1:
			if (func_205(Local_56.f_5, 1))
			{
				if (func_347(iLocal_129) < Local_56.f_1D.f_43)
				{
					Local_56.f_4 = unk_0x105601648511CC64();
					func_69(&(Local_56.f_5));
					iLocal_126 = 0;
					Local_56.f_2 = 90;
				}
				else
				{
					iLocal_126 = 0;
					Local_56.f_4 = unk_0x105601648511CC64();
					func_69(&(Local_56.f_5));
					Local_56.f_2 = 2;
				}
			}
			break;
		
		case 2:
			iLocal_126++;
			if (iLocal_126 >= 3)
			{
				Var6 = { Local_56.f_1D.f_3F };
				StringConCat(&Var6, "_02", 16);
				func_210(&(Local_56.f_5), 3, &Var6, 0, 0, 0, 0);
				Local_56.f_2 = 3;
			}
			break;
		
		case 3:
			if (func_205(Local_56.f_5, 1))
			{
				if (func_347(iLocal_129) < Local_56.f_1D.f_43)
				{
					Local_56.f_4 = unk_0x105601648511CC64();
					Local_56.f_2 = 90;
				}
				else
				{
					unk_0xC4BA30B532FE260F(-1, "PROPERTY_PURCHASE_MEDIUM", "HUD_PROPERTY_SOUNDSET", true);
					bLocal_142 = false;
					if ((Local_56 == 15 || Local_56 == 17) || Local_56 == 16)
					{
						Local_57.f_4 = 113;
						bLocal_142 = true;
					}
					else if (Local_56 == 18 || Local_56 == 19)
					{
						Local_57.f_4 = 115;
						bLocal_142 = true;
					}
					else if (Local_56 == 12 || Local_56 == 13)
					{
						Local_57.f_4 = 114;
						bLocal_142 = true;
					}
					else if ((Local_56 == 21 || Local_56 == 22) || Local_56 == 23)
					{
						Local_57.f_4 = 116;
						bLocal_142 = true;
					}
					Local_57 = unk_0x9934FEFB3B8C6DB8("MIDSIZED_MESSAGE");
					Local_57.f_1 = 0;
					Local_57.f_3 = 0;
					Local_57.f_2 = 0;
					iLocal_144 = 1;
					Global_63BB = 1;
					if (bLocal_142)
					{
						if ((Local_56 == 21 || Local_56 == 22) || Local_56 == 23)
						{
							func_293(47, 0);
							func_288(47, 0);
							Local_56.f_70 = unk_0x5E29F9399E0829A3(198.3659f, -1020.273f, -100f, "v_garagem_sp");
							if (unk_0xBF697FA7422C0621(Local_56.f_70))
							{
								if (!unk_0x18487DB48DC3A046(Local_56.f_70))
								{
									unk_0x184188AF06D2A771(Local_56.f_70);
								}
								StringCopy(&Global_7F73, "v_garagem_sp", 32);
							}
						}
						unk_0x3D7FF8418367D451(unk_0xB5CEFD608600A09F(), 1);
						unk_0x13D5880CBA449AA9();
						Local_56.f_4 = unk_0x105601648511CC64();
						Local_56.f_2 = 4;
					}
					else
					{
						Local_56.f_2 = 8;
					}
					func_69(&(Local_56.f_5));
				}
			}
			break;
		
		case 4:
			bVar10 = true;
			if ((Local_56 == 21 || Local_56 == 22) || Local_56 == 23)
			{
				Local_56.f_70 = unk_0x5E29F9399E0829A3(198.3659f, -1020.273f, -100f, "v_garagem_sp");
				if ((!unk_0xBF697FA7422C0621(Local_56.f_70) || unk_0xA30B063D74E02747(Local_56.f_70)) || unk_0x00BCFC51EF781989(Local_56.f_70))
				{
					func_293(47, 0);
					func_288(47, 0);
					bVar10 = false;
				}
			}
			if (bVar10)
			{
				if (Local_56 == 12)
				{
					fVar7 = 95f;
					iVar8 = 2;
				}
				else if (Local_56 == 13)
				{
					fVar7 = 150f;
					iVar8 = 2;
				}
				else if ((Local_56 == 21 || Local_56 == 22) || Local_56 == 23)
				{
					fVar7 = 150f;
					iVar8 = 2;
				}
				vVar9 = { SYSTEM::COS((Local_56.f_1D.f_E.f_3.f_2 + 90f)), SYSTEM::SIN((Local_56.f_1D.f_E.f_3.f_2 + 90f)), 0f };
				if ((Local_56 == 21 || Local_56 == 22) || Local_56 == 23)
				{
					if (unk_0x1732A8A5D2D39430(200.4651f, -1020.631f, -100f, 50f, 0) || (unk_0x105601648511CC64() - Local_56.f_4) > 3500)
					{
						Local_56.f_4 = unk_0x105601648511CC64();
						Local_56.f_2 = 5;
					}
				}
				else if (unk_0x5C4048C4641BDB16(Local_56.f_1D.f_E, vVar9, fVar7, iVar8) || (unk_0x105601648511CC64() - Local_56.f_4) > 3500)
				{
					Local_56.f_4 = unk_0x105601648511CC64();
					Local_56.f_2 = 5;
				}
			}
			break;
		
		case 5:
			if (((unk_0x719413B40BB63D86() && unk_0xF220370B0C08EC20()) && (!unk_0xBF697FA7422C0621(Local_56.f_70) || unk_0x18487DB48DC3A046(Local_56.f_70))) || (unk_0x105601648511CC64() - Local_56.f_4) > 10000)
			{
				Local_56.f_4 = unk_0x105601648511CC64();
				Local_56.f_2 = 6;
			}
			break;
		
		case 6:
			if ((unk_0x105601648511CC64() - Local_56.f_4) > 1000)
			{
				if ((unk_0x724D816EA203A79E(iLocal_168) && unk_0x5CAE759AE8219D20(iLocal_168)) && unk_0xB248FAA35ED47DB9(iLocal_168, 1))
				{
					unk_0x1E7A09C1710FB071(&iLocal_168);
				}
				iLocal_168 = unk_0x3E12B546F3F2597A();
				if ((((unk_0x724D816EA203A79E(iLocal_168) && unk_0xE59B7F5A03335350(iLocal_168, 0)) && !unk_0x8C1A6E7D5F410F4A(unk_0x6F79ECA8C83E4357(iLocal_168))) && !unk_0xA19D269B4B5A1532(unk_0x6F79ECA8C83E4357(iLocal_168))) && !unk_0xE7B3A320107C1379(unk_0x6F79ECA8C83E4357(iLocal_168)))
				{
					if (!unk_0x5CAE759AE8219D20(iLocal_168))
					{
						unk_0x77815D3407C6700D(iLocal_168, false, 0);
					}
				}
				else
				{
					iLocal_168 = 0;
				}
				unk_0xDC078F87049ECECE(unk_0xBC25C936A095B5BA(), false, 0);
				if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
				{
					unk_0x346478B12F69D4E3(unk_0xBC25C936A095B5BA(), true);
				}
				if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
				{
					unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 16);
					unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 32);
					unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 128);
					unk_0x0B55204F721A7EA1(unk_0xB5CEFD608600A09F(), 1);
				}
				func_280(1, 1, 1, 0, 0);
				unk_0xEB233A3B7635D2AC();
				unk_0x7456702622C62EA0(1);
				vVar9 = { SYSTEM::COS((Local_56.f_1D.f_E.f_3.f_2 + 90f)), SYSTEM::SIN((Local_56.f_1D.f_E.f_3.f_2 + 90f)), 0f };
				if (!Local_56.f_1D.f_45)
				{
					unk_0x220E291081F3885D(Local_56.f_1D.f_E, vVar9);
				}
				if (!unk_0xEF0E25DA0CB6E8FF(Local_56.f_6E))
				{
					Local_56.f_6E = unk_0x578D5D08EC980893("DEFAULT_SCRIPTED_CAMERA", true);
				}
				if (unk_0xEF0E25DA0CB6E8FF(Local_56.f_6E))
				{
					if (Local_56.f_1D.f_45)
					{
						unk_0x394EE83EEDDF9A95("GtaMloRoom001");
					}
					func_280(1, 1, 1, 0, 0);
					func_279(&(Local_56.f_1D.f_E), &(Local_56.f_6E), &(Local_56.f_6F));
				}
				unk_0x062C9995BFD27B2A(true, false, 3000, 1, 0, 0);
				unk_0x59B038076F830627(false);
				unk_0x43F06392C4EF25E0(false);
				unk_0x13D5880CBA449AA9();
				Local_56.f_2 = 7;
				Local_56.f_4 = unk_0x105601648511CC64();
				func_69(&(Local_56.f_5));
			}
			break;
		
		case 7:
			if ((unk_0x105601648511CC64() - Local_56.f_4) < 7000 && !func_345(1000))
			{
				Var6 = { Local_56.f_1D.f_3F };
				StringConCat(&Var6, "_05", 16);
				func_208(&Var6, -1);
				if (!unk_0x719413B40BB63D86())
				{
					if (Local_56 == 12 || Local_56 == 13)
					{
						fVar7 = 85f;
						iVar8 = 2;
					}
					vVar9 = { SYSTEM::COS((Local_56.f_1D.f_1D.f_2 + 90f)), SYSTEM::SIN((Local_56.f_1D.f_1D.f_2 + 90f)), 0f };
					unk_0x5C4048C4641BDB16(Local_56.f_1D.f_1D, vVar9, fVar7, iVar8);
				}
			}
			else
			{
				if (unk_0xEF0E25DA0CB6E8FF(Local_56.f_6E))
				{
					if (Local_56.f_1D.f_45)
					{
						unk_0x394EE83EEDDF9A95("GtaMloRoom001");
					}
					func_280(1, 1, 1, 0, 0);
					func_279(&(Local_56.f_1D.f_1D), &(Local_56.f_6E), &(Local_56.f_6F));
				}
				unk_0x7A89E6B582BCD8C2();
				unk_0x7456702622C62EA0(1);
				Local_56.f_4 = unk_0x105601648511CC64();
				Local_56.f_2 = 8;
			}
			break;
		
		case 8:
			if ((unk_0x105601648511CC64() - Local_56.f_4) < 7000 && !func_345(1000))
			{
				Var6 = { Local_56.f_1D.f_3F };
				StringConCat(&Var6, "_06", 16);
				if (!unk_0xF16DAFF595E80F7C())
				{
					func_208(&Var6, 7000);
				}
			}
			else
			{
				unk_0x7456702622C62EA0(1);
				Local_56.f_4 = unk_0x105601648511CC64();
				Local_56.f_2 = 9;
			}
			break;
		
		case 9:
			if ((unk_0x105601648511CC64() - Local_56.f_4) < 3500 && !func_345(1000))
			{
				Var6 = { Local_56.f_1D.f_3F };
				StringConCat(&Var6, "_03", 16);
				if (unk_0xA7F138B5B1AB2CF6(Local_57))
				{
					if (Local_57.f_1)
					{
						if (!Local_57.f_3)
						{
							unk_0xC4BA30B532FE260F(-1, "UNDER_THE_BRIDGE", "HUD_AWARDS", true);
							Local_57.f_3 = 1;
						}
						unk_0x4B6031094354FED6(Local_57, 255, 255, 255, 255, 0);
					}
					else
					{
						unk_0x29CD142125FE177B(Local_57, "SHOW_SHARD_MIDSIZED_MESSAGE");
						func_89(&Var6);
						unk_0xC27A95D32A8160C0();
						Local_57.f_1 = 1;
					}
				}
			}
			else if ((unk_0x105601648511CC64() - Local_56.f_4) < 4000 && !func_345(1000))
			{
				if (unk_0xA7F138B5B1AB2CF6(Local_57))
				{
					if (Local_57.f_2)
					{
						unk_0x4B6031094354FED6(Local_57, 255, 255, 255, 255, 0);
					}
					else
					{
						unk_0x29CD142125FE177B(Local_57, "SHARD_ANIM_OUT");
						unk_0x1E1FB49121565EB6(1);
						unk_0xD44E04EBBDC4CE88(0.33f);
						unk_0xF9FBC2F3F73D94C9();
						Local_57.f_2 = 1;
					}
				}
			}
			else
			{
				if (bLocal_142)
				{
					unk_0x062C9995BFD27B2A(false, false, 3000, 1, 0, 0);
					if (unk_0xEF0E25DA0CB6E8FF(Local_56.f_6E))
					{
						unk_0x348665177DBFB93B(Local_56.f_6E, false);
						unk_0x4EC087603E1DEF9C(Local_56.f_6E, 0);
					}
					if (unk_0xEF0E25DA0CB6E8FF(Local_56.f_6F))
					{
						unk_0x348665177DBFB93B(Local_56.f_6F, false);
						unk_0x4EC087603E1DEF9C(Local_56.f_6F, 0);
					}
					unk_0xF3F01A78937DC905(0f);
					unk_0x2B9AEC08E469E384(0f, 1065353216);
					unk_0xDC078F87049ECECE(unk_0xBC25C936A095B5BA(), true, 0);
					unk_0x346478B12F69D4E3(unk_0xBC25C936A095B5BA(), false);
					iVar11 = unk_0x3E12B546F3F2597A();
					if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
					{
						unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
						unk_0x0B55204F721A7EA1(unk_0xB5CEFD608600A09F(), 0);
						if ((unk_0x724D816EA203A79E(iVar11) && unk_0xE59B7F5A03335350(iVar11, 0)) && unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iVar11, 0))
						{
							unk_0x641B19E156645A92(iVar11, Local_56.f_1D.f_2C, 1, true, 0, 1);
							unk_0x019CE76D5286C95C(iVar11, Local_56.f_1D.f_2F);
							unk_0xF0A40F19AAB79E88(iVar11, 1084227584);
						}
						else
						{
							unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), Local_56.f_1D.f_2C, 1, true, 0, 1);
							unk_0x019CE76D5286C95C(unk_0xBC25C936A095B5BA(), Local_56.f_1D.f_2F);
						}
					}
					if (unk_0x724D816EA203A79E(iLocal_168) && unk_0xE59B7F5A03335350(iLocal_168, 0))
					{
						iVar12 = func_49(24);
						if (func_278(&Local_141, 24))
						{
							func_273(&Local_141, func_457());
							if (unk_0x724D816EA203A79E(iVar12))
							{
								unk_0xCF6040807CC0E4A5(&iVar12);
							}
						}
						if (Local_56 == 21)
						{
							unk_0x6C5F5B5F6894CCE3(-89.377f, 92.6583f, 71.2349f, 5f, 1, 0, 0, false);
							unk_0x641B19E156645A92(iLocal_168, -89.377f, 92.6583f, 71.2349f, 1, false, 0, 1);
							unk_0x019CE76D5286C95C(iLocal_168, 154.4846f);
							func_271(iLocal_168, -89.377f, 92.6583f, 71.2349f, 154.4846f, 24, 0);
						}
						else if (Local_56 == 22)
						{
							unk_0x6C5F5B5F6894CCE3(-62.0307f, -1839.859f, 25.6787f, 5f, 1, 0, 0, false);
							unk_0x641B19E156645A92(iLocal_168, -62.0307f, -1839.859f, 25.6787f, 1, false, 0, 1);
							unk_0x019CE76D5286C95C(iLocal_168, 319.6985f);
							func_271(iLocal_168, -62.0307f, -1839.859f, 25.6787f, 319.6985f, 24, 0);
						}
						else if (Local_56 == 23)
						{
							unk_0x6C5F5B5F6894CCE3(-234.7648f, -1150.311f, 21.9224f, 5f, 1, 0, 0, false);
							unk_0x641B19E156645A92(iLocal_168, -234.7648f, -1150.311f, 21.9224f, 1, false, 0, 1);
							unk_0x019CE76D5286C95C(iLocal_168, 270.8741f);
							func_271(iLocal_168, -234.7648f, -1150.311f, 21.9224f, 270.8741f, 24, 0);
						}
						unk_0xF0A40F19AAB79E88(iLocal_168, 1084227584);
					}
					if (unk_0x724D816EA203A79E(iVar11) && unk_0xE59B7F5A03335350(iVar11, 0))
					{
						unk_0xDC078F87049ECECE(iVar11, true, 0);
						unk_0x346478B12F69D4E3(iVar11, false);
						if (unk_0xB248FAA35ED47DB9(iVar11, 1))
						{
							unk_0x1E7A09C1710FB071(&iVar11);
						}
					}
					iVar13 = 5000;
					iVar14 = unk_0x105601648511CC64();
					while (!unk_0xAE9335ADE2B33DFC() && (unk_0x105601648511CC64() - iVar14) < iVar13)
					{
						SYSTEM::WAIT(0);
					}
					if (unk_0xBF697FA7422C0621(Local_56.f_70))
					{
						unk_0xB165D6ED2E977354(Local_56.f_70);
					}
					StringCopy(&Global_7F73, "", 32);
					if ((Local_56 == 21 || Local_56 == 22) || Local_56 == 23)
					{
						func_293(47, 1);
						func_288(47, 1);
						Global_19B04.f_7F22.f_12C0 = 1;
					}
					unk_0x13D5880CBA449AA9();
					unk_0x7A89E6B582BCD8C2();
					unk_0x59B038076F830627(true);
					unk_0x43F06392C4EF25E0(true);
					func_280(0, 1, 1, 0, 0);
					bLocal_142 = false;
					Global_63BB = 0;
				}
				if (unk_0xA7F138B5B1AB2CF6(Local_57))
				{
					unk_0xB0B0FE33F4F22679(&Local_57);
				}
				func_317(iLocal_129, Local_57.f_4, Local_56.f_1D.f_43);
				func_316(Local_56, 5, 1);
				func_303(Local_56);
				if (unk_0x2DA8CA50A72528FB(Global_110A8.f_D0[Local_56]))
				{
					unk_0x07B8ECB35A4ED3AC(&(Global_110A8.f_D0[Local_56]));
				}
				iLocal_151 = Local_56;
				func_302();
				Local_56.f_2 = 99;
			}
			break;
		
		case 90:
			iLocal_126++;
			if (iLocal_126 >= 3)
			{
				if ((unk_0x105601648511CC64() - Local_56.f_4) < 4000)
				{
					Var6 = { Local_56.f_1D.f_3F };
					StringConCat(&Var6, "_04", 16);
					func_301(&Var6);
				}
				else
				{
					Local_56.f_2 = 99;
				}
			}
			break;
	}
}

void func_301(char* sParam0)//Position - 0x2077D
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 1, true, -1);
}

int func_302()//Position - 0x20793
{
	if (func_218(0))
	{
		return 0;
	}
	if (Global_16B42.f_8)
	{
		if (Global_16B42.f_A > 0)
		{
			return 0;
		}
	}
	else if (Global_16B42.f_A > 1)
	{
		return 0;
	}
	Global_16B42.f_A++;
	return 1;
}

void func_303(int iParam0)//Position - 0x207DE
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	switch (iParam0)
	{
		case 21:
			iVar0 = 20;
			iVar1 = 155;
			break;
		
		case 22:
			iVar0 = 21;
			iVar1 = 156;
			break;
		
		case 23:
			iVar0 = 22;
			iVar1 = 157;
			break;
		
		case 12:
			iVar0 = 13;
			iVar1 = 57;
			break;
		
		case 13:
			iVar0 = 16;
			iVar1 = 62;
			break;
		
		case 14:
			iVar0 = 19;
			iVar1 = 63;
			break;
		
		case 15:
			iVar0 = 12;
			iVar1 = 56;
			break;
		
		case 16:
			iVar0 = 15;
			iVar1 = 60;
			break;
		
		case 17:
			iVar0 = 18;
			iVar1 = 61;
			break;
		
		case 18:
			iVar0 = 11;
			iVar1 = 55;
			break;
		
		case 19:
			iVar0 = 14;
			iVar1 = 58;
			break;
	}
	func_315(iVar0, 0);
	iVar2 = func_314(iVar0, iVar1, 1);
	if (iVar2 != 0)
	{
	}
	else
	{
		func_313(iVar0);
		if (func_311(iVar0, iVar1, 1))
		{
			func_304(iVar0);
			func_313(iVar0);
		}
	}
}

void func_304(int iParam0)//Position - 0x208E5
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	int iVar4;
	char* sVar5;
	
	iVar0 = func_310(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_B522[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	iVar1 = Global_B522[iVar0 /*203*/].f_A[(Global_B522[iVar0 /*203*/].f_9 - 1) /*48*/];
	iVar2 = (Global_B522[iVar0 /*203*/].f_9 - 1);
	if (!Global_B522[iVar0 /*203*/].f_A[iVar2 /*48*/].f_1)
	{
		iVar4 = Global_B522[iVar0 /*203*/].f_A[iVar2 /*48*/];
		MemCopy(&Var3, {func_309(Global_90CE[iVar4 /*12*/].f_1)}, 4);
	}
	else
	{
		Var3 = { Global_B522[iVar0 /*203*/].f_A[iVar2 /*48*/].f_2 };
	}
	if (iParam0 == 28)
	{
		switch (iVar1)
		{
			case 249:
				sVar5 = "PW_FEED_EM_1";
				break;
			
			case 269:
				sVar5 = "PW_FEED_EM_3";
				break;
			
			default:
				sVar5 = "PW_FEED_EM_2";
				break;
		}
		func_305(1, Global_90CE[iVar1 /*12*/].f_2, iVar1, sVar5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		switch (Global_90CE[iVar1 /*12*/].f_3)
		{
			case 0:
				func_305(0, Global_90CE[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_B522[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_B522[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_B522[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_B522[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_B522[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_B522[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_B522[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_B522[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_B522[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_B522[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			
			case 1:
				func_305(1, Global_90CE[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_B522[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_B522[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_B522[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_B522[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_B522[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_B522[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_B522[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_B522[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_B522[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_B522[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			
			case 2:
				func_305(2, Global_90CE[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_B522[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_B522[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_B522[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_B522[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_B522[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_B522[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_B522[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_B522[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_B522[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_B522[iVar0 /*203*/].f_A[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			}
	}
}

void func_305(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11, char* sParam12, char* sParam13)//Position - 0x20C55
{
	int iVar0;
	bool bVar1;
	char cVar2[64];
	
	if (unk_0x866EAD7E27D8D0F8())
	{
		return;
	}
	iVar0 = func_457();
	bVar1 = false;
	StringCopy(&cVar2, func_308(iParam1, &bVar1), 64);
	if (iVar0 == iParam0)
	{
		switch (iParam2)
		{
			case 72:
				unk_0x2E94302CFF011F2E("PROPR_INCEMAIL1");
				break;
			
			case 73:
				unk_0x2E94302CFF011F2E("PROPR_INCEMAIL3");
				break;
			
			case 74:
				unk_0x2E94302CFF011F2E("PROPR_INCEMAIL2");
				break;
			
			default:
				unk_0x2E94302CFF011F2E(sParam3);
				if (!unk_0xF1734B55490E9045(sParam4))
				{
					unk_0xC9C304D0AABE1335(sParam4);
				}
				if (!unk_0xF1734B55490E9045(sParam5))
				{
					unk_0xC9C304D0AABE1335(sParam5);
				}
				if (!unk_0xF1734B55490E9045(sParam6))
				{
					unk_0xC9C304D0AABE1335(sParam6);
				}
				if (!unk_0xF1734B55490E9045(sParam7))
				{
					unk_0xC9C304D0AABE1335(sParam7);
				}
				if (!unk_0xF1734B55490E9045(sParam8))
				{
					unk_0xC9C304D0AABE1335(sParam8);
				}
				if (!unk_0xF1734B55490E9045(sParam9))
				{
					unk_0xC9C304D0AABE1335(sParam9);
				}
				if (!unk_0xF1734B55490E9045(sParam10))
				{
					unk_0xC9C304D0AABE1335(sParam10);
				}
				if (!unk_0xF1734B55490E9045(sParam11))
				{
					unk_0xC9C304D0AABE1335(sParam11);
				}
				if (!unk_0xF1734B55490E9045(sParam12))
				{
					unk_0xC9C304D0AABE1335(sParam12);
				}
				if (!unk_0xF1734B55490E9045(sParam13))
				{
					unk_0xC9C304D0AABE1335(sParam13);
				}
				break;
		}
		if (bVar1)
		{
			func_306(unk_0x7BB0762D8C75A3C7(&cVar2, &cVar2, 0, 2, unk_0xFCB4C1AC11347344(func_307(iParam1)), 0));
		}
		else
		{
			func_306(unk_0x7BB0762D8C75A3C7("CHAR_DEFAULT", "CHAR_DEFAULT", 0, 2, unk_0xFCB4C1AC11347344(func_307(iParam1)), 0));
		}
		switch (Global_389D)
		{
			case 0:
				StringCopy(&Global_3892, "Phone_SoundSet_Michael", 24);
				Global_90C6++;
				if (Global_90C6 > 16)
				{
					Global_90C6 = 16;
				}
				break;
			
			case 2:
				StringCopy(&Global_3892, "Phone_SoundSet_Trevor", 24);
				Global_90C8++;
				if (Global_90C8 > 16)
				{
					Global_90C8 = 16;
				}
				break;
			
			case 1:
				StringCopy(&Global_3892, "Phone_SoundSet_Franklin", 24);
				Global_90C7++;
				if (Global_90C7 > 16)
				{
					Global_90C7 = 16;
				}
				break;
			
			default:
				StringCopy(&Global_3892, "Phone_SoundSet_Default", 24);
				break;
		}
		unk_0xC4BA30B532FE260F(-1, "Notification", &Global_3892, true);
	}
}

void func_306(int iParam0)//Position - 0x20E3D
{
	Global_90C9[Global_90CD] = iParam0;
	Global_41DA = 1;
	Global_41D9 = iParam0;
	Global_90CD++;
	if (Global_90CD == 3)
	{
		Global_90CD = 0;
	}
}

char* func_307(int iParam0)//Position - 0x20E6B
{
	switch (iParam0)
	{
		case 0:
			return "EMSTR_0";
		
		case 3:
			return "EMSTR_3";
		
		case 1:
			return "EMSTR_6";
		
		case 2:
			return "EMSTR_9";
		
		case 4:
			return "EMSTR_12";
		
		case 5:
			return "EMSTR_29";
		
		case 6:
			return "EMSTR_36";
		
		case 7:
			return "EMSTR_39";
		
		case 8:
			return "EMSTR_52";
		
		case 9:
			return "EMSTR_55";
		
		case 10:
			return "EMSTR_58";
		
		case 11:
			return "EMSTR_78";
		
		case 12:
			return "EMSTR_81";
		
		case 13:
			return "EMSTR_84";
		
		case 14:
			return "EMSTR_87";
		
		case 15:
			return "EMSTR_106";
		
		case 16:
			return "EMSTR_114";
		
		case 17:
			return "EMSTR_142";
		
		case 18:
			return "EMSTR_145";
		
		case 19:
			return "EMSTR_152";
		
		case 20:
			return "EMSTR_157";
		
		case 21:
			return "EMSTR_163";
		
		case 22:
			return "EMSTR_182";
		
		case 23:
			return "EMSTR_187";
		
		case 24:
			return "EMSTR_190";
		
		case 25:
			return "EMSTR_206";
		
		case 26:
			return "EMSTR_219";
		
		case 27:
			return "EMSTR_226";
		
		case 28:
			return "EMSTR_233";
		
		case 29:
			return "EMSTR_242";
		
		case 30:
			return "EMSTR_249";
		
		case 31:
			return "EMSTR_262";
		
		case 32:
			return "EMSTR_269";
		
		case 33:
			return "EMSTR_319";
		
		case 34:
			return "EMSTR_340";
		
		case 35:
			return "EMSTR_348";
		
		case 36:
			return "EMSTR_182";
		
		case 37:
			return "EMSTR_357";
		
		case 38:
			return "EMSTR_360";
		
		case 39:
			return "EMSTR_369";
		
		case 40:
			return "EMSTR_376";
		
		case 41:
			return "EMSTR_379";
		
		case 42:
			return "EMSTR_382";
		
		case 43:
			return "EMSTR_384";
		
		case 44:
			return "EMSTR_387";
		
		case 45:
			return "EMSTR_390";
		
		case 46:
			return "EMSTR_393";
		
		case 47:
			return "EMSTR_396";
		
		case 48:
			return "EMSTR_399";
		
		case 49:
			return "EMSTR_402";
		
		case 50:
			return "EMSTR_405";
		
		case 51:
			return "EMSTR_408";
		
		case 52:
			return "EMSTR_411";
		
		case 53:
			return "EMSTR_414";
		
		case 54:
			return "EMSTR_465";
		
		case 55:
			return "EMSTR_468";
		
		case 56:
			return "EMSTR_489";
		
		case 57:
			return "EMSTR_492";
		
		case 58:
			return "EMSTR_495";
		
		case 59:
			return "EMSTR_498";
		
		case 60:
			return "EMSTR_501";
		
		case 61:
			return "EMSTR_504";
		
		case 62:
			return "EMSTR_507";
		
		case 63:
			return "EMSTR_640";
		
		case 64:
			return "EMSTR_643";
		
		case 65:
			return "EMSTR_652";
		
		default:
	}
	return "NULL";
}

char* func_308(int iParam0, int iParam1)//Position - 0x211D6
{
	*iParam1 = 1;
	switch (iParam0)
	{
		case 0:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[0 /*29*/].f_7));
		
		case 1:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[1 /*29*/].f_7));
		
		case 2:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[2 /*29*/].f_7));
		
		case 7:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[12 /*29*/].f_7));
		
		case 4:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[60 /*29*/].f_7));
		
		case 6:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[62 /*29*/].f_7));
		
		case 3:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[14 /*29*/].f_7));
		
		case 16:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[97 /*29*/].f_7));
		
		case 19:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[99 /*29*/].f_7));
		
		case 15:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[96 /*29*/].f_7));
		
		case 63:
			return "CHAR_CARSITE2";
		
		case 64:
			return "CHAR_BOATSITE";
		
		case 8:
			return "CHAR_BANK_MAZE";
		
		case 9:
			return "CHAR_BANK_FLEECA";
		
		case 10:
			return "CHAR_BANK_BOL";
		
		case 21:
			return "CHAR_MINOTAUR";
		
		case 25:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[15 /*29*/].f_7));
		
		case 26:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[30 /*29*/].f_7));
		
		case 27:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[17 /*29*/].f_7));
		
		case 29:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[20 /*29*/].f_7));
		
		case 30:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[43 /*29*/].f_7));
		
		case 31:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[44 /*29*/].f_7));
		
		case 32:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[19 /*29*/].f_7));
		
		case 34:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[40 /*29*/].f_7));
		
		case 36:
			return unk_0xFCB4C1AC11347344("CELL_E_381");
		
		case 38:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[64 /*29*/].f_7));
		
		case 5:
			return "CHAR_EPSILON";
		
		case 13:
			return "CHAR_MILSITE";
		
		case 11:
			return "CHAR_CARSITE";
		
		case 14:
			return "CHAR_BOATSITE";
		
		case 12:
			return "CHAR_PLANESITE";
		
		case 24:
			return "CHAR_DR_FRIEDLANDER";
		
		case 55:
			return "CHAR_CARSITE2";
		
		case 54:
			return "CHAR_BIKESITE";
		
		case 39:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[122 /*29*/].f_7));
		
		case 40:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[125 /*29*/].f_7));
		
		case 41:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[113 /*29*/].f_7));
		
		case 42:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[126 /*29*/].f_7));
		
		case 43:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[127 /*29*/].f_7));
		
		case 44:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[124 /*29*/].f_7));
		
		case 45:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[114 /*29*/].f_7));
		
		case 46:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[115 /*29*/].f_7));
		
		case 47:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[116 /*29*/].f_7));
		
		case 48:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[123 /*29*/].f_7));
		
		case 49:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[117 /*29*/].f_7));
		
		case 50:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[118 /*29*/].f_7));
		
		case 51:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[119 /*29*/].f_7));
		
		case 52:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[120 /*29*/].f_7));
		
		case 53:
			return unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[121 /*29*/].f_7));
		
		default:
	}
	*iParam1 = 0;
	return "ERROR!";
}

struct<16> func_309(int iParam0)//Position - 0x21629
{
	struct<16> Var0;
	struct<16> Var1;
	
	if (iParam0 > -1)
	{
		StringCopy(&Var0, "EMSTR_", 64);
		StringIntConCat(&Var0, iParam0, 64);
		return Var0;
	}
	StringCopy(&Var1, "FAIL", 64);
	return Var1;
}

int func_310(int iParam0)//Position - 0x2165A
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = -1;
	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (Global_B522[iVar0 /*203*/].f_2 == iParam0)
		{
			if (Global_B522[iVar0 /*203*/].f_1 > iVar2)
			{
				iVar2 = Global_B522[iVar0 /*203*/].f_1;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 != -1 && iVar2 != -1)
	{
		return iVar1;
	}
	return -1;
}

int func_311(int iParam0, int iParam1, bool bParam2)//Position - 0x216BE
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_315(iParam0, 1);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (Global_B522[iVar0 /*203*/].f_9 == 4)
	{
		return 0;
	}
	Global_B522[iVar0 /*203*/].f_2 = iParam0;
	Global_B522[iVar0 /*203*/].f_A[Global_B522[iVar0 /*203*/].f_9 /*48*/] = iParam1;
	Global_B522[iVar0 /*203*/].f_A[Global_B522[iVar0 /*203*/].f_9 /*48*/].f_1 = 0;
	Global_B522[iVar0 /*203*/].f_A[Global_B522[iVar0 /*203*/].f_9 /*48*/].f_6 = 0;
	Global_B522[iVar0 /*203*/].f_9++;
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_B522[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_B522[iVar0 /*203*/].f_4[iVar1] == Global_90CE[iParam1 /*12*/].f_3)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_B522[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_B522[iVar0 /*203*/].f_4[Global_B522[iVar0 /*203*/].f_3] = Global_90CE[iParam1 /*12*/].f_3;
			Global_B522[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_B522[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_B522[iVar0 /*203*/].f_4[iVar1] == Global_90CE[iParam1 /*12*/].f_2)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_B522[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_B522[iVar0 /*203*/].f_4[Global_B522[iVar0 /*203*/].f_3] = Global_90CE[iParam1 /*12*/].f_2;
			Global_B522[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_B522[iVar0 /*203*/].f_3)
	{
		iVar3 = Global_B522[iVar0 /*203*/].f_4[iVar1];
		if (iVar3 < 3)
		{
			func_312(Global_B522[iVar0 /*203*/].f_4[iVar1], Global_B522[iVar0 /*203*/].f_1, 1, bParam2, 0);
		}
		iVar1++;
	}
	return 1;
}

void func_312(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x218BA
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<16> Var3;
	int iVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	if (!iParam0 < 3)
	{
		return;
	}
	iVar0 = -1;
	StringCopy(&Var3, "UNSET", 64);
	if (!bParam2)
	{
		iVar4 = (Global_9DCB[iParam1 /*46*/].f_2A - 1);
		if (iVar4 < 0)
		{
			return;
		}
		iVar5 = Global_9DCB[iParam1 /*46*/].f_20[iVar4];
		iVar2 = iVar5;
		Var3 = { func_309(Global_90CE[iVar5 /*12*/].f_1) };
		if (Global_90CE[iVar5 /*12*/].f_2 == iParam0 && !Global_90CE[iVar5 /*12*/].f_3 == iParam0)
		{
			return;
		}
		iVar1 = Global_90CE[iVar5 /*12*/].f_2;
		iVar0 = Global_B3B8[iParam0 /*120*/];
		bVar6 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar6 = true;
		}
		if (bVar6)
		{
			if (!Global_B3B8[iParam0 /*120*/].f_45[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_90C6 = (Global_90C6 - 1);
						if (Global_90C6 < 0)
						{
							Global_90C6 = 0;
						}
						break;
					
					case 1:
						Global_90C7 = (Global_90C7 - 1);
						if (Global_90C7 < 0)
						{
							Global_90C7 = 0;
						}
						break;
					
					case 2:
						Global_90C8 = (Global_90C8 - 1);
						if (Global_90C8 < 0)
						{
							Global_90C8 = 0;
						}
						break;
					}
				}
		}
		Global_B3B8[iParam0 /*120*/].f_12[iVar0] = iParam1;
		Global_B3B8[iParam0 /*120*/].f_1[iVar0] = iVar4;
		Global_B3B8[iParam0 /*120*/].f_23[iVar0] = 0;
		Global_B3B8[iParam0 /*120*/].f_56[iVar0] = 0;
		Global_B3B8[iParam0 /*120*/].f_45[iVar0] = 0;
		Global_B3B8[iParam0 /*120*/]++;
	}
	else
	{
		iVar0 = Global_B3B8[iParam0 /*120*/];
		bVar7 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar7 = true;
		}
		if (bVar7)
		{
			if (!Global_B3B8[iParam0 /*120*/].f_45[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_90C6 = (Global_90C6 - 1);
						if (Global_90C6 < 0)
						{
							Global_90C6 = 0;
						}
						break;
					
					case 1:
						Global_90C7 = (Global_90C7 - 1);
						if (Global_90C7 < 0)
						{
							Global_90C7 = 0;
						}
						break;
					
					case 2:
						Global_90C8 = (Global_90C8 - 1);
						if (Global_90C8 < 0)
						{
							Global_90C8 = 0;
						}
						break;
					}
				}
		}
		iVar8 = -1;
		iVar9 = 0;
		iVar9 = 0;
		while (iVar9 < 7)
		{
			if (Global_B522[iVar9 /*203*/].f_1 == iParam1 && Global_B522[iVar9 /*203*/].f_9 > 0)
			{
				iVar8 = iVar9;
			}
			iVar9++;
		}
		if (iVar8 == -1)
		{
			return;
		}
		Global_B3B8[iParam0 /*120*/].f_12[iVar0] = Global_B522[iVar8 /*203*/].f_1;
		Global_B3B8[iParam0 /*120*/].f_1[iVar0] = (Global_B522[iVar8 /*203*/].f_9 - 1);
		Global_B3B8[iParam0 /*120*/].f_23[iVar0] = 0;
		Global_B3B8[iParam0 /*120*/].f_56[iVar0] = 1;
		Global_B3B8[iParam0 /*120*/].f_45[iVar0] = 0;
		Global_B3B8[iParam0 /*120*/]++;
		iVar10 = Global_B3B8[iParam0 /*120*/].f_1[iVar0];
		iVar11 = Global_B522[iVar8 /*203*/].f_A[iVar10 /*48*/];
		iVar2 = iVar11;
		iVar1 = Global_90CE[iVar11 /*12*/].f_2;
		if (Global_B522[iVar8 /*203*/].f_A[(Global_B522[iVar8 /*203*/].f_9 - 1) /*48*/].f_1)
		{
			MemCopy(&Var3, {Global_B522[iVar8 /*203*/].f_A[(Global_B522[iVar8 /*203*/].f_9 - 1) /*48*/].f_2}, 16);
		}
		else
		{
			Var3 = { func_309(Global_90CE[iVar11 /*12*/].f_1) };
		}
	}
	if (!bParam4)
	{
		if (!Global_B3B8[iParam0 /*120*/].f_45[iVar0] && !bParam3)
		{
			switch (iParam0)
			{
				case 0:
					func_305(0, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				
				case 1:
					if (iVar2 == 249)
					{
						func_305(1, iVar1, iVar2, "PW_FEED_EM_1", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						func_305(1, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					break;
				
				case 2:
					func_305(2, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				}
			}
	}
}

void func_313(int iParam0)//Position - 0x21C8F
{
	int iVar0;
	
	if (iParam0 == 26)
	{
		if (!unk_0xFA30DFD0084E92FE(Global_19B04.f_617D, (4 - 1)))
		{
			return;
		}
	}
	iVar0 = func_310(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	Global_B522[iVar0 /*203*/] = 0;
}

int func_314(int iParam0, int iParam1, int iParam2)//Position - 0x21CCC
{
	int iVar0;
	int iVar1;
	
	if (iParam2 < 1)
	{
		return 0;
	}
	if (Global_BAB0 == 8)
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_B522[iVar1 /*203*/].f_2 == iParam0)
		{
			if (Global_B522[iVar1 /*203*/].f_1 > 0)
			{
				iVar0 = Global_B522[iVar1 /*203*/].f_1;
			}
		}
		iVar1++;
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (Global_BAB1[iVar1 /*53*/].f_34 == 0)
		{
			Global_BAB1[iVar1 /*53*/].f_34 = iVar0;
			Global_BAB1[iVar1 /*53*/] = iParam0;
			Global_BAB1[iVar1 /*53*/].f_1 = iParam1;
			Global_BAB1[iVar1 /*53*/].f_2 = iParam2;
			Global_19B04.f_5210.f_136++;
			if (Global_19B04.f_5210.f_136 == 0)
			{
				Global_19B04.f_5210.f_136 = 1;
			}
			Global_BAB1[iVar1 /*53*/].f_A = 0;
			Global_BAB1[iVar1 /*53*/].f_3 = Global_19B04.f_5210.f_136;
			Global_BAB1[iVar1 /*53*/].f_4 = 1;
			Global_BAB0++;
			return Global_BAB1[iVar1 /*53*/].f_3;
		}
		iVar1++;
	}
	return 0;
}

int func_315(int iParam0, bool bParam1)//Position - 0x21DE7
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = func_310(iParam0);
	if (iVar0 > -1)
	{
		if (Global_B522[iVar0 /*203*/].f_9 < 4)
		{
			return iVar0;
		}
	}
	iVar1 = 0;
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_B522[iVar1 /*203*/] == 0)
		{
			bVar2 = true;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return -1;
	}
	bVar3 = true;
	iVar1 = 0;
	iVar4 = -1;
	iVar5 = -1;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_B522[iVar1 /*203*/] == 0)
		{
			if (bVar3)
			{
				iVar4 = iVar1;
				iVar5 = Global_B522[iVar1 /*203*/].f_1;
				bVar3 = false;
			}
			else if (iVar5 > Global_B522[iVar1 /*203*/].f_1)
			{
				iVar4 = iVar1;
				iVar5 = Global_B522[iVar1 /*203*/].f_1;
			}
		}
		iVar1++;
	}
	if (Global_B522[iVar4 /*203*/].f_9 > 0)
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < Global_B522[iVar4 /*203*/].f_9)
		{
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 3)
			{
				iVar7 = Global_B3B8[iVar6 /*120*/];
				if (iVar7 > 16)
				{
					iVar7 = 16;
				}
				iVar8 = 0;
				iVar8 = 0;
				while (iVar8 < iVar7)
				{
					if (Global_B3B8[iVar6 /*120*/].f_56[iVar8])
					{
						if (!Global_B3B8[iVar6 /*120*/].f_45[iVar8])
						{
							if (Global_B3B8[iVar6 /*120*/].f_12[iVar8] == Global_B522[iVar4 /*203*/].f_1)
							{
								if (Global_B3B8[iVar6 /*120*/].f_1[iVar8] == iVar1)
								{
									switch (iVar6)
									{
										case 0:
											Global_90C6 = (Global_90C6 - 1);
											break;
										
										case 1:
											Global_90C7 = (Global_90C7 - 1);
											break;
										
										case 2:
											Global_90C8 = (Global_90C8 - 1);
											break;
										}
									}
								}
							}
					}
					iVar8++;
				}
				iVar6++;
			}
			iVar1++;
		}
	}
	Global_B522[iVar4 /*203*/].f_2 = iParam0;
	Global_B522[iVar4 /*203*/].f_3 = 0;
	if (!bParam1)
	{
		Global_B522[iVar4 /*203*/] = 1;
	}
	Global_19B04.f_5210.f_136++;
	if (Global_19B04.f_5210.f_136 == 0)
	{
		Global_19B04.f_5210.f_136 = 1;
	}
	Global_B522[iVar4 /*203*/].f_1 = Global_19B04.f_5210.f_136;
	Global_B522[iVar4 /*203*/].f_9 = 0;
	return iVar4;
}

void func_316(int iParam0, int iParam1, bool bParam2)//Position - 0x21FFF
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xF0059F27F7BB6680(&(Global_19B04.f_7F22[iParam0]), iParam1);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_7F22[iParam0]), iParam1);
	}
}

int func_317(int iParam0, int iParam1, int iParam2)//Position - 0x2203A
{
	if (Global_19B04.f_6D75[iParam0 /*29*/].f_11 == 3)
	{
		return 0;
	}
	if (Global_19B04.f_6D75[iParam0 /*29*/].f_11 == 4)
	{
		return 0;
	}
	return func_318(Global_19B04.f_6D75[iParam0 /*29*/].f_11, 0, iParam1, iParam2, 0);
}

int func_318(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x22083
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_344();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_343(99, 1);
					func_342(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_342(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_342(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_327(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_326(5))
					{
						fVar0 = 0.9f;
						iVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_342(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_342(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_342(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_326(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_342(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_342(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_342(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_342(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_342(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_342(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 98:
				case 99:
				case 100:
				case 101:
				case 103:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
					switch (iParam0)
					{
						case 0:
							func_342(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_342(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_342(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x2C087518F90303D5())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_342(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_342(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_342(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_342(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_342(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_342(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_326(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_342(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_342(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_342(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_342(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_342(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_342(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_325(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_343(95, iParam3);
					break;
				
				case 1:
					func_343(97, iParam3);
					break;
				
				case 2:
					func_343(96, iParam3);
					break;
			}
			func_343(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_321(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_321(iVar1);
	}
	iVar5 = (Global_CF95[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_CF95[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_CF95[iVar2] = 2147483647;
				}
				else
				{
					Global_CF95[iVar2] = (Global_CF95[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_342(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_342(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_342(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_CF95[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_CF95[iVar2];
			Global_CF95[iVar2] = (Global_CF95[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_19B04.f_5037.f_E9[iVar2 /*69*/].f_2[Global_19B04.f_5037.f_E9[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_19B04.f_5037.f_E9[iVar2 /*69*/].f_2[Global_19B04.f_5037.f_E9[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_19B04.f_5037.f_E9[iVar2 /*69*/].f_2[Global_19B04.f_5037.f_E9[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_19B04.f_5037.f_E9[iVar2 /*69*/]++;
		Global_19B04.f_5037.f_E9[iVar2 /*69*/].f_1++;
		if (Global_19B04.f_5037.f_E9[iVar2 /*69*/].f_1 > 10)
		{
			Global_19B04.f_5037.f_E9[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_320(iParam0);
	if (Global_8C41 == 15)
	{
		func_319(0);
	}
	return 1;
}

void func_319(bool bParam0)//Position - 0x22682
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_19B04.f_5037.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_19B04.f_5037.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_19B04.f_5037.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_19B04.f_5037.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_19B04.f_5037.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_19B04.f_5037.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_CF9D[iVar0 /*3*/][0] = Global_19B04.f_5037[iVar0];
		Global_CF9D.f_1F[iVar0 /*3*/][0] = Global_19B04.f_5037.f_B[iVar0];
		Global_CF9D.f_3E[iVar0 /*3*/][0] = Global_19B04.f_5037.f_16[iVar0];
		Global_CF9D.f_5D[iVar0 /*3*/][0] = Global_19B04.f_5037.f_21[iVar0];
		Global_CF9D.f_7C[iVar0 /*3*/][0] = Global_19B04.f_5037.f_2C[iVar0];
		Global_CF9D.f_9B[iVar0 /*3*/][0] = Global_19B04.f_5037.f_37[iVar0];
		Global_CF9D.f_BA[iVar0 /*3*/][0] = Global_19B04.f_5037.f_42[iVar0];
		Global_CF9D.f_D9[iVar0 /*3*/][0] = Global_19B04.f_5037.f_4D[iVar0];
		Global_CF9D.f_F8[iVar0 /*3*/][0] = Global_19B04.f_5037.f_58[iVar0];
		if (!bParam0)
		{
			Global_CF9D[iVar0 /*3*/][1] = Global_19B04.f_5037[iVar0];
			Global_CF9D.f_1F[iVar0 /*3*/][1] = Global_19B04.f_5037.f_B[iVar0];
			Global_CF9D.f_3E[iVar0 /*3*/][1] = Global_19B04.f_5037.f_16[iVar0];
			Global_CF9D.f_5D[iVar0 /*3*/][1] = Global_19B04.f_5037.f_21[iVar0];
			Global_CF9D.f_7C[iVar0 /*3*/][1] = Global_19B04.f_5037.f_2C[iVar0];
			Global_CF9D.f_9B[iVar0 /*3*/][1] = Global_19B04.f_5037.f_37[iVar0];
			Global_CF9D.f_BA[iVar0 /*3*/][1] = Global_19B04.f_5037.f_42[iVar0];
			Global_CF9D.f_D9[iVar0 /*3*/][1] = Global_19B04.f_5037.f_4D[iVar0];
			Global_CF9D.f_F8[iVar0 /*3*/][1] = Global_19B04.f_5037.f_58[iVar0];
		}
		iVar0++;
	}
}

void func_320(int iParam0)//Position - 0x22904
{
	int iVar0;
	
	iVar0 = Global_CF95[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x3A57956BCE003880(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x3A57956BCE003880(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x3A57956BCE003880(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_321(int iParam0)//Position - 0x2295E
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_324(129, 0, -1, 1);
		return;
	}
	bVar0 = false;
	if (!unk_0x7AF0088ABFA713B6())
	{
		if (unk_0xFA30DFD0084E92FE(Global_19B04.f_5037.f_1D7, iParam0))
		{
			bVar0 = true;
			unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_5037.f_1D7), iParam0);
		}
	}
	else if (unk_0xFA30DFD0084E92FE(Global_19B04.f_5037.f_1D7, iParam0) || unk_0xFA30DFD0084E92FE(Global_200000[func_323() /*12171*/].f_1E08.f_A, iParam0))
	{
		bVar0 = true;
		unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_5037.f_1D7), iParam0);
		unk_0x7CB6FD92BE491AD9(&(Global_200000[func_323() /*12171*/].f_1E08.f_A), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x2E94302CFF011F2E("COUP_RED");
		unk_0xC9C304D0AABE1335(func_322(iParam0));
		unk_0x7BB0762D8C75A3C7(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_322(int iParam0)//Position - 0x22A34
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		case 8:
			return "COUP_XMAS2017";
		
		default:
	}
	return "";
}

int func_323()//Position - 0x22ABB
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_324(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x22AC8
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
		iParam2 = func_93();
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

void func_325(int iParam0)//Position - 0x22FE2
{
	func_343(93, iParam0);
	func_343(29, iParam0);
	func_343(30, iParam0);
}

bool func_326(int iParam0)//Position - 0x23002
{
	if (iParam0 == 8)
	{
		return func_163(129, -1, -1);
	}
	if (!unk_0x7AF0088ABFA713B6())
	{
		return unk_0xFA30DFD0084E92FE(Global_19B04.f_5037.f_1D7, iParam0);
	}
	return unk_0xFA30DFD0084E92FE(Global_200000[func_323() /*12171*/].f_1E08.f_A, iParam0);
}

int func_327(bool bParam0)//Position - 0x23050
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x6D5CBCB6411EDE89(27))
	{
		return 0;
	}
	if (unk_0x6CB99B97664C3727(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x6CB99B97664C3727(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x6CB99B97664C3727(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x6CB99B97664C3727(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x3A57956BCE003880(joaat("num_cash_spent"), iVar1, 1);
		func_341(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_328(27, 1);
	return 1;
}

int func_328(int iParam0, int iParam1)//Position - 0x23107
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_329(iParam0, iParam1);
}

int func_329(int iParam0, int iParam1)//Position - 0x23122
{
	if (func_27(14) && !func_340(iParam0))
	{
		return 0;
	}
	if (unk_0x6D5CBCB6411EDE89(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_63B4 != 0 && !Global_11542)
	{
		return 0;
	}
	if (func_339(&Global_411EB6))
	{
		if (func_337(&Global_411EB6, iParam0))
		{
			return 0;
		}
		if (func_330(&Global_411EB6, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0xE07F36ACFF1AA002(iParam0))
		{
			return 0;
		}
		if (unk_0x6D5CBCB6411EDE89(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_330(var uParam0, int iParam1)//Position - 0x231BF
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x6D5CBCB6411EDE89(iParam1))
	{
		return 0;
	}
	if (func_27(14) && !func_340(iParam1))
	{
		return 0;
	}
	if (func_337(uParam0, iParam1))
	{
		return 0;
	}
	if (func_336(uParam0) < 0f)
	{
		func_335(uParam0, 0);
	}
	func_333(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_331(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_331(var uParam0, int iParam1)//Position - 0x23270
{
	int iVar0;
	
	if (unk_0x6D5CBCB6411EDE89(iParam1))
	{
		return 0;
	}
	if (func_27(14) && !func_340(iParam1))
	{
		return 0;
	}
	if (func_337(uParam0, iParam1))
	{
		return 0;
	}
	if (func_336(uParam0) < 0f)
	{
		func_335(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_332(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_332(var uParam0, int iParam1)//Position - 0x232EB
{
	return (*uParam0)[iParam1] == 78;
}

void func_333(var uParam0)//Position - 0x232FC
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_334(uParam0, iVar0);
		iVar0++;
	}
	func_335(uParam0, (Global_411EB5 - 0.5f));
}

void func_334(var uParam0, int iParam1)//Position - 0x23330
{
	(*uParam0)[iParam1] = 78;
}

void func_335(var uParam0, float fParam1)//Position - 0x23340
{
	if (fParam1 == 0f)
	{
		uParam0->f_50 = 0f;
	}
	else
	{
		uParam0->f_50 = fParam1;
	}
}

float func_336(var uParam0)//Position - 0x2335D
{
	return uParam0->f_50;
}

bool func_337(var uParam0, int iParam1)//Position - 0x23369
{
	return func_338(uParam0, iParam1) != -1;
}

int func_338(var uParam0, int iParam1)//Position - 0x2337B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_339(var uParam0)//Position - 0x233A8
{
	return uParam0->f_4F == 1;
}

int func_340(int iParam0)//Position - 0x233B6
{
	switch (iParam0)
	{
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
		
		default:
	}
	return 0;
}

int func_341(int iParam0, int iParam1)//Position - 0x23406
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0x5FB6117CEABC82E7(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x1DE7859F3CC60466(iParam0, iParam1);
	}
	return 0;
}

void func_342(int iParam0, int iParam1)//Position - 0x23457
{
	int iVar0;
	
	unk_0x6CB99B97664C3727(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x3A57956BCE003880(iParam0, iVar0, 1);
}

void func_343(int iParam0, int iParam1)//Position - 0x2347A
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

void func_344()//Position - 0x234D7
{
	int iVar0;
	
	if (unk_0x7E3A4CFA5545546C())
	{
		unk_0x6CB99B97664C3727(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_CF95[0] == iVar0)
		{
			Global_CF95[0] = iVar0;
		}
		unk_0x6CB99B97664C3727(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_CF95[1] == iVar0)
		{
			Global_CF95[1] = iVar0;
		}
		unk_0x6CB99B97664C3727(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_CF95[2] == iVar0)
		{
			Global_CF95[2] = iVar0;
		}
	}
}

int func_345(int iParam0)//Position - 0x2354C
{
	if (unk_0x726D9204B160D23E())
	{
		if ((unk_0x105601648511CC64() - Global_1C) > iParam0)
		{
			Global_1B = unk_0x105601648511CC64();
		}
		Global_1C = unk_0x105601648511CC64();
		if ((unk_0x105601648511CC64() - Global_1B) > iParam0)
		{
			if (func_346())
			{
				Global_1B = unk_0x105601648511CC64();
				return 1;
			}
		}
	}
	return 0;
}

int func_346()//Position - 0x23596
{
	if (unk_0xE186ACC7BE9B244E())
	{
		return 0;
	}
	if (unk_0x694514BD37EC4E94(0, 18) || unk_0x694514BD37EC4E94(2, 18))
	{
		return 1;
	}
	return 0;
}

int func_347(int iParam0)//Position - 0x235C8
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			unk_0x6CB99B97664C3727(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			unk_0x6CB99B97664C3727(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			unk_0x6CB99B97664C3727(joaat("sp2_total_cash"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

bool func_348(int iParam0)//Position - 0x23620
{
	return func_349(iParam0, Global_8C41);
}

int func_349(int iParam0, int iParam1)//Position - 0x23631
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

void func_350(int iParam0, int iParam1, int iParam2)//Position - 0x23812
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	
	iVar2 = func_457();
	if (iParam2 != 145)
	{
		iVar2 = iParam2;
	}
	sVar3 = func_129(iParam1);
	switch (iParam0)
	{
		case 10:
			iVar0 = 5;
			switch (iVar2)
			{
				case 0:
					iVar1 = 32;
					break;
				
				case 2:
					iVar1 = 33;
					break;
				
				case 1:
					iVar1 = 31;
					break;
			}
			break;
		
		case 11:
			iVar0 = 7;
			if (((iParam1 == 15 || iParam1 == 16) || iParam1 == 164) || iParam1 == 217)
			{
				switch (iVar2)
				{
					case 0:
						iVar1 = 191;
						break;
					
					case 2:
						iVar1 = 193;
						break;
					
					case 1:
						iVar1 = 192;
						break;
				}
			}
			else
			{
				switch (iVar2)
				{
					case 0:
						iVar1 = 40;
						break;
					
					case 2:
						iVar1 = 42;
						break;
					
					case 1:
						iVar1 = 41;
						break;
					}
			}
			break;
		
		case 12:
			iVar0 = 6;
			switch (iVar2)
			{
				case 0:
					iVar1 = 34;
					break;
				
				case 2:
					iVar1 = 36;
					break;
				
				case 1:
					iVar1 = 35;
					break;
			}
			break;
		
		case 13:
			iVar0 = 8;
			switch (iVar2)
			{
				case 0:
					iVar1 = 37;
					break;
				
				case 2:
					iVar1 = 39;
					break;
				
				case 1:
					iVar1 = 38;
					break;
			}
			break;
		
		case 15:
			iVar0 = 9;
			switch (iVar2)
			{
				case 0:
					iVar1 = 186;
					break;
				
				case 2:
					iVar1 = 188;
					break;
				
				case 1:
					iVar1 = 185;
					break;
			}
			break;
		
		case 16:
			iVar0 = 10;
			switch (iVar2)
			{
				case 0:
					iVar1 = 189;
					break;
				
				case 2:
					iVar1 = 190;
					break;
				
				case 1:
					iVar1 = 187;
					break;
			}
			break;
		
		default:
			return;
			break;
	}
	if (func_311(iVar0, iVar1, 1))
	{
		func_351(iVar0, sVar3);
		func_304(iVar0);
		func_313(iVar0);
	}
}

void func_351(int iParam0, char* sParam1)//Position - 0x23A1C
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_310(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_B522[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	if (Global_B522[iVar0 /*203*/].f_A[(Global_B522[iVar0 /*203*/].f_9 - 1) /*48*/].f_6 == 10)
	{
		return;
	}
	iVar1 = Global_B522[iVar0 /*203*/].f_A[(Global_B522[iVar0 /*203*/].f_9 - 1) /*48*/].f_6;
	Global_B522[iVar0 /*203*/].f_A[(Global_B522[iVar0 /*203*/].f_9 - 1) /*48*/].f_6++;
	StringCopy(&(Global_B522[iVar0 /*203*/].f_A[(Global_B522[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[iVar1 /*4*/]), sParam1, 16);
}

int func_352(int iParam0, int iParam1)//Position - 0x23AD1
{
	int iVar0;
	int iVar1;
	
	if (!func_357(iParam1) || !func_357(iParam0))
	{
		return 1;
	}
	iVar0 = func_55(iParam0);
	iVar1 = func_55(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_57(iParam0);
	iVar1 = func_57(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_356(iParam0);
	iVar1 = func_356(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_355(iParam0);
	iVar1 = func_355(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_354(iParam0);
	iVar1 = func_354(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_353(iParam0);
	iVar1 = func_353(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_353(int iParam0)//Position - 0x23BDD
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_354(int iParam0)//Position - 0x23BF0
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_355(int iParam0)//Position - 0x23C03
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_356(int iParam0)//Position - 0x23C16
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_357(int iParam0)//Position - 0x23C28
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_353(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_354(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_355(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_55(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_57(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_356(iParam0);
	if (iVar5 < 1 || iVar5 > func_54(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_358()//Position - 0x23D04
{
	int iVar0;
	var uVar1;
	char* sVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	vector3 vVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	int iVar18;
	bool bVar19;
	vector3 vVar20;
	int iVar21;
	
	iVar0 = 0;
	if (unk_0xB731B8C5BCE89836(joaat("startup_positioning")) == 0)
	{
		if (Global_19B04.f_7F22.f_15D4)
		{
			if (!unk_0x724D816EA203A79E(Global_11431))
			{
				func_273(&(Global_19B04.f_7F22.f_1586), Global_19B04.f_7F22.f_15D6);
				Global_19B04.f_7F22.f_15D4 = 0;
			}
			else if (!unk_0xE59B7F5A03335350(Global_11431, 0) || func_47(Global_11431, Global_19B04.f_7F22.f_15D6, 1))
			{
				Global_19B04.f_7F22.f_15D4 = 0;
			}
			else
			{
				if ((unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0) && unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0) == Global_11431) && func_385(unk_0xBC25C936A095B5BA()) != Global_19B04.f_7F22.f_15D6)
				{
					Global_19B04.f_7F22.f_15D6 = func_385(unk_0xBC25C936A095B5BA());
				}
				if (Global_11431 != iLocal_128)
				{
					sVar2 = unk_0x0B00D4CDDAB33814(Global_11431, &uVar1);
					if (!unk_0xF1734B55490E9045(sVar2))
					{
						if (unk_0x56BEECB328B6D29D(sVar2) == unk_0x56BEECB328B6D29D("vehicle_gen_controller"))
						{
							Global_19B04.f_7F22.f_15D4 = 0;
							iLocal_169 = Global_11431;
							if (Global_110A8.f_8B[24] == Global_11431 || (Global_11432 == Global_11431 && Global_11433 == 24))
							{
								func_384(458, 24, -1, 1);
							}
							else
							{
								func_384(458, 0, -1, 1);
							}
							Global_11431 = 0;
						}
					}
				}
				if (((Global_19B04.f_7F22.f_15D6 != func_457() && Global_16908[Global_19B04.f_7F22.f_15D6 /*98*/] == Global_19B04.f_7F22.f_1586.f_42) && unk_0x3362CDE8460ED38B(&(Global_16908[Global_19B04.f_7F22.f_15D6 /*98*/].f_1B), &(Global_19B04.f_7F22.f_1586.f_1))) && !unk_0x7930B3E9C919E90F())
				{
					func_114(&(Global_19B04.f_7F22.f_1586), &(Global_19B04.f_7F22.f_15E0[Global_19B04.f_7F22.f_15D6 /*78*/]));
					Global_19B04.f_7F22.f_15D4 = 0;
					iLocal_169 = 0;
					func_384(458, 0, -1, 1);
					Global_11431 = 0;
				}
			}
		}
		else if ((unk_0x724D816EA203A79E(Global_11431) && unk_0xE59B7F5A03335350(Global_11431, 0)) && !func_47(Global_11431, Global_19B04.f_7F22.f_15D6, 1))
		{
			Global_19B04.f_7F22.f_15D4 = 1;
		}
		if (unk_0x724D816EA203A79E(iLocal_169) && unk_0xE59B7F5A03335350(iLocal_169, 0))
		{
			if (((!Global_19B04.f_7F22.f_15D4 && iLocal_169 != Global_11431) && iLocal_169 != iLocal_170) && !unk_0xB248FAA35ED47DB9(iLocal_169, 1))
			{
				func_31(iLocal_169, 145);
				iLocal_169 = 0;
				func_384(458, 0, -1, 1);
			}
		}
		else if (iLocal_169 != 0)
		{
			iLocal_169 = 0;
			func_384(458, 0, -1, 1);
		}
		if (unk_0x724D816EA203A79E(iLocal_170) && unk_0xE59B7F5A03335350(iLocal_170, 0))
		{
		}
		else if (iLocal_170 != 0)
		{
			iLocal_170 = 0;
		}
	}
	if (Global_11435.f_42 != 0 && Global_11432 == 0)
	{
		func_273(&Global_11435, Global_11483);
		Global_11435.f_42 = 0;
	}
	vVar3 = { 433.6721f, -1006.538f, 25.96351f };
	vVar4 = { 433.6578f, -1017.5f, 32.09895f };
	fVar5 = 11.25f;
	if (iLocal_124 > 0 && iLocal_124 < 99)
	{
		if (iLocal_124 != 3)
		{
			if (((((unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) || !unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), vVar3, vVar4, fVar5, 0, true, 0)) || func_27(0)) || func_27(3)) || func_27(2)) || func_27(14))
			{
				iLocal_124 = 99;
			}
		}
	}
	if (func_383(iLocal_129))
	{
		if (!unk_0x2DA8CA50A72528FB(iLocal_145))
		{
			if (((func_27(15) || func_27(12)) && iLocal_124 != 3) && !unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0))
			{
				iLocal_145 = func_381(428.37f, -1013.5f, 27.93f, 0);
				unk_0xBF0E22F3E083C33D(iLocal_145, 225);
				unk_0x436D0272182E484D(iLocal_145, "IMPOUND_BLIPNAME");
				unk_0x4909873A6873A6C3(iLocal_145, true);
			}
		}
		else if ((!(func_27(15) || func_27(12)) || iLocal_124 == 3) || unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0))
		{
			unk_0x07B8ECB35A4ED3AC(&iLocal_145);
		}
	}
	else if (unk_0x2DA8CA50A72528FB(iLocal_145))
	{
		unk_0x07B8ECB35A4ED3AC(&iLocal_145);
	}
	switch (iLocal_124)
	{
		case 0:
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				if ((Local_56.f_2 == 0 && (func_27(15) || func_27(12))) && !unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0))
				{
					if (func_383(iLocal_129))
					{
						if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), vVar3, vVar4, fVar5, 0, true, 0))
						{
							if (func_347(iLocal_129) >= 250)
							{
								iVar6 = 0;
								iVar7 = 0;
								while (iVar7 < 2)
								{
									if (func_269(iVar7, iLocal_129))
									{
										iVar6++;
									}
									iVar7++;
								}
								if (iVar6 > 1)
								{
									func_210(&iLocal_125, 3, "IMPOUND_TRIG2", 0, 0, 0, 0);
								}
								else
								{
									func_210(&iLocal_125, 3, "IMPOUND_TRIG1", 0, 0, 0, 0);
								}
								iLocal_124 = 1;
							}
							else
							{
								func_208("SCLUB_NO_MONEY", -1);
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && func_206(0, -1, 0))
			{
				if (func_205(iLocal_125, 1))
				{
					func_69(&iLocal_125);
					unk_0xA4E856A8CD53B8DF(unk_0xBC25C936A095B5BA());
					func_380();
					iVar8 = 0;
					iVar9 = 0;
					while (iVar9 < 2)
					{
						if (func_269(iVar9, iLocal_129))
						{
							iVar8++;
						}
						iVar9++;
					}
					if (iVar8 > 1)
					{
						iLocal_116 = 0;
						iLocal_117 = 0;
						iLocal_118 = 0;
						iLocal_121 = -1;
						iLocal_124++;
					}
					else
					{
						iVar10 = 0;
						while (iVar10 < 2)
						{
							if (func_269(iVar10, iLocal_129))
							{
								if (iVar10 == 0)
								{
									vVar11 = { 431.4f, -997.33f, 24.76f };
								}
								else
								{
									vVar11 = { 436.39f, -997.25f, 24.76f };
								}
								while (!func_364(&iLocal_128, iVar10, vVar11, 179.24f, 1))
								{
									SYSTEM::WAIT(0);
								}
								if (unk_0x724D816EA203A79E(iLocal_128))
								{
									if (iVar10 == 0)
									{
										func_363(18, 1, 0);
									}
									else
									{
										func_363(19, 1, 0);
									}
									if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
									{
										unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
									}
									func_317(iLocal_129, 118, 250);
									func_362(iVar10);
									func_31(iLocal_128, func_457());
									func_71(1, -1);
									iLocal_124 = 3;
									func_69(&iLocal_125);
									iLocal_125 = -1;
									iLocal_118 = 0;
								}
							}
							iVar10++;
						}
					}
				}
			}
			break;
		
		case 2:
			switch (func_457())
			{
				case 0:
					iVar12 = 0;
					break;
				
				case 1:
					iVar12 = 1;
					break;
				
				case 2:
					iVar12 = 2;
					break;
			}
			func_380();
			if (!iLocal_116 || iLocal_117)
			{
				func_203(0, 0);
				func_202(1, 1, 0, 0, 0);
				func_201(1, 2, 1, 1, 1);
				func_200("IMPOUND_TITLE");
				iLocal_122 = 0;
				iVar13 = -1;
				iVar15 = 0;
				iVar14 = 0;
				while (iVar14 < 2)
				{
					if (func_269(iVar14, iLocal_129))
					{
						func_132(iVar15, unk_0xD8D56586882095EE(Global_19B04.f_7F22.f_13AE[iVar12 /*157*/][iVar14 /*78*/].f_42), 0, 1, 0, 0);
						if (iVar13 == -1)
						{
							iVar13 = iVar15;
							iLocal_121 = iVar15;
						}
						unk_0xF0059F27F7BB6680(&iLocal_122, iVar15);
						iLocal_123[iVar15] = iVar14;
						func_132(iVar15, "IMPOUND_COST", 1, 1, 0, 0);
						func_361(250, 0);
						iVar15++;
					}
					iVar14++;
				}
				iVar15 = 0;
				func_125(iLocal_121, 1, 1);
				iLocal_119 = 1;
				iLocal_117 = 0;
				iLocal_116 = 1;
			}
			else
			{
				iVar0 = 0;
				if (unk_0x8ACB0C3FACC09467())
				{
					if (unk_0x0738078C96634C59(2))
					{
						unk_0xBBC4195AD74D153D(0, 1, 1);
						unk_0xBBC4195AD74D153D(0, 2, 1);
						unk_0x5EFA245B45A49778(0, 237, 1);
						unk_0x5EFA245B45A49778(0, 238, 1);
						unk_0x5EFA245B45A49778(0, 241, 1);
						unk_0x5EFA245B45A49778(0, 242, 1);
						func_122(0, 0, 0, 1);
						func_121(0, -1, 1);
						if (func_120())
						{
							if (Global_4118D6 != iLocal_121)
							{
								unk_0xC4BA30B532FE260F(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
								iLocal_121 = Global_4118D6;
								func_125(iLocal_121, 1, 1);
								iLocal_119 = 1;
							}
							else
							{
								iVar0 = 1;
							}
						}
					}
				}
				if (unk_0x694514BD37EC4E94(2, 188) || unk_0x694514BD37EC4E94(2, 241))
				{
					if (!iLocal_118)
					{
						iLocal_119 = 1;
						unk_0xC4BA30B532FE260F(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
						iVar16 = (iLocal_121 - 1);
						while (iVar16 >= 0)
						{
							if (unk_0xFA30DFD0084E92FE(iLocal_122, iVar16))
							{
								iLocal_121 = iVar16;
								bVar17 = true;
								iVar16 = 0;
							}
							iVar16 = (iVar16 + -1);
						}
						if (!bVar17)
						{
							iVar16 = 31;
							while (iVar16 >= iLocal_121 + 1)
							{
								if (unk_0xFA30DFD0084E92FE(iLocal_122, iVar16))
								{
									iLocal_121 = iVar16;
									bVar17 = true;
									iVar16 = iLocal_121;
								}
								iVar16 = (iVar16 + -1);
							}
						}
						if (bVar17)
						{
							func_125(iLocal_121, 1, 1);
						}
					}
				}
				else if (unk_0x694514BD37EC4E94(2, 187) || unk_0x694514BD37EC4E94(2, 242))
				{
					if (!iLocal_118)
					{
						iLocal_119 = 1;
						unk_0xC4BA30B532FE260F(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
						iVar18 = iLocal_121 + 1;
						while (iVar18 <= 31)
						{
							if (unk_0xFA30DFD0084E92FE(iLocal_122, iVar18))
							{
								iLocal_121 = iVar18;
								bVar19 = true;
								iVar18 = 31;
							}
							iVar18++;
						}
						if (!bVar19)
						{
							iVar18 = 0;
							while (iVar18 <= (iLocal_121 - 1))
							{
								if (unk_0xFA30DFD0084E92FE(iLocal_122, iVar18))
								{
									iLocal_121 = iVar18;
									bVar19 = true;
									iVar18 = iLocal_121;
								}
								iVar18++;
							}
						}
						if (bVar19)
						{
							func_125(iLocal_121, 1, 1);
						}
					}
				}
				else if (unk_0x093484B35A948BFC(2, 201) || iVar0 == 1)
				{
					iVar0 = 0;
					unk_0xC4BA30B532FE260F(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					if (!iLocal_118)
					{
						func_119("IMPOUND_CNF", 0, 0);
						func_118(-1);
						func_117(201, "ITEM_YES", -1);
						func_117(202, "ITEM_NO", -1);
						iLocal_118 = 1;
					}
					else
					{
						if (iLocal_121 == 0)
						{
							vVar20 = { 431.4f, -997.33f, 24.76f };
						}
						else
						{
							vVar20 = { 436.39f, -997.25f, 24.76f };
						}
						if (func_269(iLocal_123[iLocal_121], iLocal_129))
						{
							while (!func_364(&iLocal_128, iLocal_123[iLocal_121], vVar20, 179.24f, 1))
							{
								SYSTEM::WAIT(0);
							}
							if (unk_0x724D816EA203A79E(iLocal_128))
							{
								if (iLocal_121 == 0)
								{
									func_363(18, 1, 0);
								}
								else
								{
									func_363(19, 1, 0);
								}
								if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
								{
									unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
								}
								func_317(iLocal_129, 118, 250);
								func_362(iLocal_123[iLocal_121]);
								func_31(iLocal_128, func_457());
								func_71(1, -1);
								iLocal_124++;
								func_69(&iLocal_125);
								iLocal_125 = -1;
								iLocal_118 = 0;
							}
						}
						iLocal_117 = 1;
					}
				}
				else if (unk_0x093484B35A948BFC(2, 202) || unk_0x093484B35A948BFC(2, 238))
				{
					unk_0xC4BA30B532FE260F(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					if (iLocal_118)
					{
						iLocal_119 = 1;
						iLocal_118 = 0;
					}
					else
					{
						iLocal_124 = 99;
					}
				}
			}
			unk_0xDE7B9CB38D019BF0();
			if (iLocal_119)
			{
				func_119("", 0, 0);
				func_118(-1);
				func_117(201, "ITEM_SELECT", -1);
				func_117(202, "ITEM_EXIT", -1);
				iLocal_118 = 0;
				iLocal_119 = 0;
			}
			if (func_206(0, -1, 0))
			{
				func_74(1, -1, 1, 0, 1, -1082130432, 0, 0);
			}
			break;
		
		case 3:
			if (unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), false), 431.4f, -997.33f, 24.76f, true) > 20f && !func_360())
			{
				func_31(iLocal_128, func_457());
				iLocal_124 = 99;
			}
			else if (unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), false), 431.4f, -997.33f, 24.76f, true) > 100f)
			{
				if (unk_0x724D816EA203A79E(iLocal_128))
				{
					if (!unk_0x1D403DFADBC2DE3C(iLocal_128, 0))
					{
						if (!unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_128, 0) && unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(iLocal_128, true), unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), false), true) > 100f)
						{
							if (!unk_0xD1DC4B08247A4317(iLocal_128))
							{
								func_359(iLocal_128, 1, 145);
								unk_0xCF6040807CC0E4A5(&iLocal_128);
								unk_0xEDAD35A0D81ED3FB(431.4f, -997.33f, 24.76f, 10f, 0, 0, 1, 1, false, 0);
								iLocal_124 = 99;
							}
						}
						else if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_128, 0))
						{
							unk_0xEDAD35A0D81ED3FB(431.4f, -997.33f, 24.76f, 10f, 0, 0, 1, 1, false, 0);
							func_31(iLocal_128, func_457());
							iLocal_124 = 99;
						}
					}
					else
					{
						unk_0xEDAD35A0D81ED3FB(431.4f, -997.33f, 24.76f, 10f, 0, 0, 1, 1, false, 0);
						iLocal_124 = 99;
					}
				}
				else
				{
					unk_0xEDAD35A0D81ED3FB(431.4f, -997.33f, 24.76f, 10f, 0, 0, 1, 1, false, 0);
					iLocal_124 = 99;
				}
			}
			break;
		
		case 99:
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
			}
			func_69(&iLocal_125);
			iVar21 = 0;
			while (iVar21 < 2)
			{
				iLocal_123[iVar21] = -1;
				iVar21++;
			}
			func_363(18, 0, 0);
			func_363(19, 0, 0);
			if (unk_0x724D816EA203A79E(iLocal_128))
			{
				unk_0x1E7A09C1710FB071(&iLocal_128);
			}
			iLocal_124 = 0;
			break;
	}
	if (iLocal_124 == 0)
	{
		if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 428.2928f, -996.6834f, 24.48864f, 439.5438f, -996.7114f, 28.10333f, 8.6875f, 0, true, 0))
		{
			if (!iLocal_127)
			{
				func_363(18, 1, 0);
				iLocal_127 = 1;
			}
		}
		else if (iLocal_127 && !unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 431.2715f, -1004.059f, 23.98198f, 431.0394f, -993.621f, 27.61868f, 6.8125f, 0, true, 0))
		{
			func_363(18, 0, 0);
			iLocal_127 = 0;
		}
	}
}

int func_359(int iParam0, int iParam1, int iParam2)//Position - 0x24AF6
{
	var uVar0;
	char* sVar1;
	
	if (iParam1 == 0)
	{
		sVar1 = unk_0x0B00D4CDDAB33814(iParam0, &uVar0);
		if (!unk_0xF1734B55490E9045(sVar1))
		{
			if (unk_0x56BEECB328B6D29D(sVar1) == unk_0x56BEECB328B6D29D("vehicle_gen_controller"))
			{
				return 0;
			}
		}
	}
	func_31(iParam0, iParam2);
	return 1;
}

int func_360()//Position - 0x24B36
{
	if (unk_0x6606151474838BB7(431.4424f, -997.7308f, 24.76161f, 4.75f, 0, 1, 1, 0, 0, 0, 0))
	{
		return 1;
	}
	else if (unk_0x6606151474838BB7(436.6913f, -997.5869f, 24.75582f, 4.75f, 0, 1, 1, 0, 0, 0, 0))
	{
		return 1;
	}
	else if (unk_0x6606151474838BB7(431.07f, -1005.57f, 26.2f, 4.75f, 0, 1, 1, 0, 0, 0, 0))
	{
		return 1;
	}
	else if (unk_0x6606151474838BB7(436.52f, -1005.47f, 26.17f, 4.75f, 0, 1, 1, 0, 0, 0, 0))
	{
		return 1;
	}
	return 0;
}

void func_361(int iParam0, bool bParam1)//Position - 0x24BE0
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_43C1.f_13E4 >= 256)
	{
		return;
	}
	if (Global_43C1.f_15EA >= 4)
	{
		return;
	}
	if (Global_43C1.f_15EB != 1)
	{
		return;
	}
	if (Global_43C1.f_15EA >= Global_43C1.f_15E8)
	{
		return;
	}
	Global_43C1.f_F4E[Global_43C1.f_13E4] = iParam0;
	Global_43C1.f_13E4++;
	Global_43C1.f_84C[Global_43C1.f_15E9 /*5*/][Global_43C1.f_15EA] = 2;
	Global_43C1.f_15EA++;
	if (Global_43C1.f_15EA >= Global_43C1.f_15E8)
	{
		fVar0 = func_128();
		if (Global_43C1.f_1351[Global_43C1.f_13E1] && Global_43C1.f_15EA == Global_43C1.f_15E8)
		{
			func_107(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_43C1.f_134A[(Global_43C1.f_13E1 - 1)])
		{
			Global_43C1.f_134A[(Global_43C1.f_13E1 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_43C1.f_15EA >= Global_43C1.f_15E8)
		{
			fVar3 = func_127();
			if (fVar3 > Global_43C1.f_15EC[Global_43C1.f_13E0])
			{
				Global_43C1.f_15EC[Global_43C1.f_13E0] = fVar3;
			}
		}
	}
}

void func_362(int iParam0)//Position - 0x24D1B
{
	int iVar0;
	
	switch (func_457())
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iParam0 < 0 || iParam0 >= func_270(&(Global_19B04.f_7F22.f_13AE[iVar0 /*157*/])))
	{
		return;
	}
	Global_19B04.f_7F22.f_13AE[iVar0 /*157*/][iParam0 /*78*/].f_42 = 0;
}

void func_363(int iParam0, bool bParam1, bool bParam2)//Position - 0x24D8A
{
	if (bParam1)
	{
		unk_0xF0059F27F7BB6680(&(Global_88D4[iParam0 /*31*/].f_1), 5);
		if (bParam2)
		{
			if (unk_0xFA30DFD0084E92FE(Global_88D4[iParam0 /*31*/].f_1, 1))
			{
				Global_88D4[iParam0 /*31*/].f_16 = -1f;
			}
			else
			{
				Global_88D4[iParam0 /*31*/].f_16 = 1f;
			}
			unk_0xC0D8311F0A9723A0(Global_88D4[iParam0 /*31*/], Global_88D4[iParam0 /*31*/].f_16, 0, 0);
			unk_0xF72F6BB050622804(Global_88D4[iParam0 /*31*/], 1, 0, 1);
		}
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&(Global_88D4[iParam0 /*31*/].f_1), 5);
		if (bParam2)
		{
			Global_88D4[iParam0 /*31*/].f_16 = 0f;
			unk_0xC0D8311F0A9723A0(Global_88D4[iParam0 /*31*/], Global_88D4[iParam0 /*31*/].f_16, 0, 0);
			unk_0xF72F6BB050622804(Global_88D4[iParam0 /*31*/], 1, 0, 1);
		}
	}
}

int func_364(int iParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4)//Position - 0x24E3A
{
	int iVar0;
	
	if (!func_269(iParam1, func_457()) || unk_0x724D816EA203A79E(*iParam0))
	{
		return 0;
	}
	switch (func_457())
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	unk_0xF243B7A14FCFD0F4(Global_19B04.f_7F22.f_13AE[iVar0 /*157*/][iParam1 /*78*/].f_42);
	if (unk_0xD6513D668481290A(Global_19B04.f_7F22.f_13AE[iVar0 /*157*/][iParam1 /*78*/].f_42))
	{
		*iParam0 = unk_0x61C05BF08A1E0EFE(Global_19B04.f_7F22.f_13AE[iVar0 /*157*/][iParam1 /*78*/].f_42, vParam2, fParam3, false, false, false);
		func_365(*iParam0, &(Global_19B04.f_7F22.f_13AE[iVar0 /*157*/][iParam1 /*78*/]), 0, 1);
		unk_0xF0A40F19AAB79E88(*iParam0, 1084227584);
		unk_0x551DF575AE9A2969(*iParam0, 0);
		unk_0xA73D1278857991A2(*iParam0, true);
		if (bParam4)
		{
			unk_0x2CA123B0622F495C(Global_19B04.f_7F22.f_13AE[iVar0 /*157*/][iParam1 /*78*/].f_42);
		}
		return 1;
	}
	return 0;
}

void func_365(int iParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0x24F3F
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		if (!func_373(iParam0))
		{
			if (unk_0x56BEECB328B6D29D(&(uParam1->f_1)) != 0)
			{
				unk_0xEA0AB6C644C58C1D(iParam0, &(uParam1->f_1));
			}
			if (*uParam1 >= 0 && *uParam1 < unk_0xECE72A06BBAC88B0())
			{
				unk_0x5EDEB04A454C1C0C(iParam0, *uParam1);
			}
		}
		if (uParam1->f_42 == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
		}
		else if (uParam1->f_42 == joaat("casco"))
		{
			iVar0 = 1;
			if (unk_0xFA30DFD0084E92FE(uParam1->f_4D, func_33(iVar0 + 1)))
			{
			}
			else
			{
				unk_0xF0059F27F7BB6680(&(uParam1->f_4D), func_33(iVar0 + 1));
			}
		}
		else if (uParam1->f_42 == joaat("sandking") || uParam1->f_42 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (unk_0xFA30DFD0084E92FE(uParam1->f_4D, func_33(iVar1 + 1)))
			{
			}
			else
			{
				unk_0xF0059F27F7BB6680(&(uParam1->f_4D), func_33(iVar1 + 1));
			}
		}
		if (uParam1->f_42 == 433954513)
		{
			unk_0x3621427A534C7FA0(iParam0, 0);
			if (unk_0x3EB14CBD49DA0017(iParam0, 5) != -1)
			{
				unk_0x3621427A534C7FA0(iParam0, 1);
			}
		}
		if (unk_0xFA30DFD0084E92FE(uParam1->f_4D, 13))
		{
			unk_0x1A45B6F1C5FA21FC(iParam0, uParam1->f_47, uParam1->f_48, uParam1->f_49);
		}
		else
		{
			unk_0xF07FAC3A3C7FE9ED(iParam0);
		}
		if (unk_0xFA30DFD0084E92FE(uParam1->f_4D, 12))
		{
			unk_0x28CD156B832945DC(iParam0, uParam1->f_47, uParam1->f_48, uParam1->f_49);
		}
		else
		{
			unk_0xC90D824D356A7AF3(iParam0);
		}
		unk_0x914C5DE0B15B8B59(iParam0, uParam1->f_5, uParam1->f_6);
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		unk_0x4C59702AC1076A88(iParam0, uParam1->f_7, uParam1->f_8);
		if (((unk_0xFA30DFD0084E92FE(uParam1->f_4D, 15) || func_372(iParam0)) || (((uParam1->f_3E == 0 && uParam1->f_3F == 0) && uParam1->f_40 == 0) && uParam1->f_9[20] > 0)) && func_371())
		{
			uParam1->f_3E = 0;
			uParam1->f_3F = 0;
			uParam1->f_40 = 0;
		}
		else if ((uParam1->f_3E == 0 && uParam1->f_3F == 0) && uParam1->f_40 == 0)
		{
			uParam1->f_3E = 255;
			uParam1->f_3F = 255;
			uParam1->f_40 = 255;
		}
		unk_0x05D05A0BAA6CA8B1(iParam0, uParam1->f_3E, uParam1->f_3F, uParam1->f_40);
		if (uParam1->f_41 == -1 && !func_35(uParam1->f_42))
		{
			unk_0x84A3F4F29630A320(iParam0, 0);
		}
		else
		{
			unk_0x84A3F4F29630A320(iParam0, 0);
			unk_0x84A3F4F29630A320(iParam0, uParam1->f_41);
		}
		unk_0xE82050D41B744FF3(iParam0, !unk_0xFA30DFD0084E92FE(uParam1->f_4D, 9));
		if (bParam2)
		{
			unk_0xD421BC740C5340C3(iParam0, uParam1->f_46);
		}
		unk_0x13CA55A989DEB72C(iParam0, uParam1->f_4A, uParam1->f_4B, uParam1->f_4C);
		unk_0x200ACC5C718FF287(iParam0, 2, unk_0xFA30DFD0084E92FE(uParam1->f_4D, 28));
		unk_0x200ACC5C718FF287(iParam0, 3, unk_0xFA30DFD0084E92FE(uParam1->f_4D, 29));
		unk_0x200ACC5C718FF287(iParam0, 0, unk_0xFA30DFD0084E92FE(uParam1->f_4D, 30));
		unk_0x200ACC5C718FF287(iParam0, 1, unk_0xFA30DFD0084E92FE(uParam1->f_4D, 31));
		unk_0x8D8F52BBEE186D6D(iParam0, unk_0xFA30DFD0084E92FE(uParam1->f_4D, 10));
		if (unk_0x294CD98C461C2594(iParam0) > 1 && uParam1->f_43 >= 0)
		{
			unk_0x7170EF3CEB4D0224(iParam0, uParam1->f_43);
		}
		if (uParam1->f_45 > -1 && uParam1->f_45 < 255)
		{
			if (!unk_0x2B4DE5C0D509B0F9(unk_0x6F79ECA8C83E4357(iParam0)))
			{
				if (unk_0x7512ED01F3F46714(unk_0x6F79ECA8C83E4357(iParam0)))
				{
					if (uParam1->f_45 == 6)
					{
						func_370(iParam0, uParam1->f_45);
					}
				}
				else
				{
					func_370(iParam0, uParam1->f_45);
				}
			}
		}
		if (unk_0x6DB86B1ADD81CED4(iParam0, 0))
		{
			if ((uParam1->f_44 == 0 || uParam1->f_44 == 3) || uParam1->f_44 == 5)
			{
				unk_0x53A9885CA864BB82(iParam0, 1);
			}
			else
			{
				unk_0x7868CAB0703DB40F(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_366(&iParam0, &(uParam1->f_9), &(uParam1->f_3B));
		}
		if (!unk_0x8C1A6E7D5F410F4A(uParam1->f_42) && !unk_0xE7B3A320107C1379(uParam1->f_42))
		{
			iVar2 = 0;
			while (iVar2 <= 11)
			{
				if (unk_0xFA30DFD0084E92FE(uParam1->f_4D, func_33(iVar2 + 1)))
				{
					if (!unk_0xFC8A228C62614C5C(iParam0, iVar2 + 1))
					{
						unk_0xE54F7105CEA81918(iParam0, iVar2 + 1, false);
					}
				}
				else if (unk_0xFC8A228C62614C5C(iParam0, iVar2 + 1))
				{
					unk_0xE54F7105CEA81918(iParam0, iVar2 + 1, true);
				}
				iVar2++;
			}
		}
		if ((unk_0x6F79ECA8C83E4357(iParam0) == joaat("sheava") || unk_0x6F79ECA8C83E4357(iParam0) == joaat("omnis")) || unk_0x6F79ECA8C83E4357(iParam0) == joaat("le7b"))
		{
			if (unk_0x3EB14CBD49DA0017(iParam0, 0) == -1)
			{
				unk_0xE54F7105CEA81918(iParam0, 1, false);
			}
		}
		if (((unk_0xA19D269B4B5A1532(uParam1->f_42) && unk_0x86AFA41F8E0E6D36(iParam0)) && !unk_0x5E87CB0495C97732(iParam0, -2118308144)) && !((((Global_440000.f_C7AE == 6 || Global_440000.f_C7AE == 7) || Global_440000.f_C7AE == 18) || Global_440000.f_C7AE == 19) && Global_440000.f_2 == 20))
		{
			if (!unk_0xFA30DFD0084E92FE(uParam1->f_4D, 23))
			{
				if (unk_0xFA30DFD0084E92FE(uParam1->f_4D, 22))
				{
					unk_0xA1EE8501940C1D3E(iParam0, 2);
				}
				else
				{
					unk_0xA1EE8501940C1D3E(iParam0, 3);
				}
			}
			else
			{
				unk_0xA1EE8501940C1D3E(iParam0, 4);
			}
		}
		if (unk_0xFA30DFD0084E92FE(uParam1->f_4D, 27))
		{
			unk_0xE9A905ADFD5BC8A0(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			unk_0xE9A905ADFD5BC8A0(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

int func_366(int iParam0, var uParam1, var uParam2)//Position - 0x2548D
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xE59B7F5A03335350(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0xA6BE0954FC6BAA16(*iParam0) == 0)
	{
		return 0;
	}
	unk_0x1345B3BF11EDB0CF(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			unk_0xB25E25030D61B529(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (unk_0x3EB14CBD49DA0017(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0xD2AB1F868ED95E27(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					unk_0x5C9F67BE33A5A3EE(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					unk_0x5C9F67BE33A5A3EE(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					unk_0x5C9F67BE33A5A3EE(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_247(unk_0x6F79ECA8C83E4357(*iParam0), 1) && unk_0x3EB14CBD49DA0017(*iParam0, 24) != func_369(*iParam0, ((*uParam1)[38] - 1)))
	{
		unk_0x5C9F67BE33A5A3EE(*iParam0, 24, func_369(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	func_368(iParam0);
	if (func_367(*iParam0))
	{
		unk_0xDB35A2F9333ABEC5(*iParam0, true);
		unk_0xA73D1278857991A2(*iParam0, true);
	}
	return 1;
}

int func_367(int iParam0)//Position - 0x2560B
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if ((unk_0x724D816EA203A79E(iParam0) && unk_0xE59B7F5A03335350(iParam0, 0)) && unk_0xA6BE0954FC6BAA16(iParam0) > 0)
	{
		unk_0x1345B3BF11EDB0CF(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (unk_0x3EB14CBD49DA0017(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, unk_0x0E4EDFA1D564AF9D(iParam0, iVar1, unk_0x3EB14CBD49DA0017(iParam0, iVar1)), 16);
				iVar2 = unk_0x56BEECB328B6D29D(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == unk_0x56BEECB328B6D29D("MNU_CAGE") || iVar2 == unk_0x56BEECB328B6D29D("SABRE_CAG"))
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_368(var uParam0)//Position - 0x256E7
{
	switch (unk_0x6F79ECA8C83E4357(*uParam0))
	{
		case -1700874274:
			if (unk_0x3EB14CBD49DA0017(*uParam0, 4) == 0)
			{
				unk_0x5C9F67BE33A5A3EE(*uParam0, 13, 0, false);
			}
			else
			{
				unk_0xD2AB1F868ED95E27(*uParam0, 13);
			}
			break;
	}
}

int func_369(int iParam0, int iParam1)//Position - 0x25727
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (unk_0x724D816EA203A79E(iParam0) && unk_0xE59B7F5A03335350(iParam0, 0))
	{
		switch (unk_0x6F79ECA8C83E4357(iParam0))
		{
			case joaat("tornado5"):
				switch (iParam1)
				{
					case 0:
						return 0;
						break;
					
					case 1:
						return 1;
						break;
					
					case 2:
						return 2;
						break;
					
					case 3:
						return 3;
						break;
					
					case 4:
						return 4;
						break;
					
					case 5:
						return 4;
						break;
				}
				break;
			
			case joaat("faction3"):
				return 3;
				break;
		}
		iVar0 = unk_0x34374BDFA570F489(iParam0, 38);
		iVar1 = unk_0x34374BDFA570F489(iParam0, 24);
		fVar2 = (SYSTEM::TO_FLOAT(iParam1 + 1) / SYSTEM::TO_FLOAT(iVar0));
		iVar3 = (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar1) * fVar2)) - 1);
		if (iVar3 < 0)
		{
			iVar3 = 0;
		}
		if (iVar3 >= iVar0)
		{
			iVar3 = (iVar0 - 1);
		}
		return iVar3;
	}
	return 0;
}

void func_370(int iParam0, int iParam1)//Position - 0x2580C
{
	int iVar0;
	int iVar1;
	
	if (unk_0xA6BE0954FC6BAA16(iParam0) > 0)
	{
		unk_0x1345B3BF11EDB0CF(iParam0, 0);
		iVar0 = unk_0x3EB14CBD49DA0017(iParam0, 24);
		iVar1 = unk_0xC8B123E980199685(iParam0, 24);
		unk_0xD2F70373DBF15801(iParam0, iParam1);
		if (unk_0x6F79ECA8C83E4357(iParam0) == joaat("tornado6"))
		{
			return;
		}
		if (iVar0 == -1)
		{
			unk_0xD2AB1F868ED95E27(iParam0, 24);
		}
		else
		{
			unk_0x5C9F67BE33A5A3EE(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

bool func_371()//Position - 0x25871
{
	return unk_0x7B2F21BFE86AEB61(-1691188696);
}

int func_372(int iParam0)//Position - 0x25882
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		if (unk_0xE59B7F5A03335350(iParam0, 0))
		{
			if (unk_0x46032D09AA009EC4("MPBitset", 3))
			{
				if (unk_0x3C03CFD5DD1E2D97(iParam0, "MPBitset"))
				{
					iVar0 = unk_0x67CFC62D543B19EF(iParam0, "MPBitset");
				}
				return unk_0xFA30DFD0084E92FE(iVar0, 4);
			}
		}
	}
	return 0;
}

int func_373(int iParam0)//Position - 0x258CD
{
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		if (!func_379(unk_0xB5CEFD608600A09F(), -1))
		{
			iParam0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
		}
	}
	if (!unk_0x724D816EA203A79E(iParam0))
	{
		return 0;
	}
	if (unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		return 0;
	}
	if (!unk_0xE59B7F5A03335350(iParam0, 0))
	{
		return 0;
	}
	if (func_375(unk_0xB5CEFD608600A09F()) == 3)
	{
		if (unk_0x724D816EA203A79E(iParam0) && unk_0xE59B7F5A03335350(iParam0, 0))
		{
			if (func_374(iParam0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_374(int iParam0)//Position - 0x25954
{
	if (unk_0x46032D09AA009EC4("FMDeliverableID", 3))
	{
		if (unk_0x3C03CFD5DD1E2D97(iParam0, "FMDeliverableID"))
		{
			return unk_0x67CFC62D543B19EF(iParam0, "FMDeliverableID");
		}
	}
	return -1;
}

int func_375(int iParam0)//Position - 0x25983
{
	if (func_378(iParam0) == 233)
	{
		return func_376(iParam0);
	}
	return -1;
}

int func_376(int iParam0)//Position - 0x259A0
{
	if (func_377(iParam0, 0))
	{
		return Global_18C80F[iParam0 /*558*/].f_B.f_B0;
	}
	return -1;
}

int func_377(int iParam0, int iParam1)//Position - 0x259C3
{
	if (Global_18C80F[iParam0 /*558*/].f_B.f_21 != -1 || (iParam1 && Global_18C80F[iParam0 /*558*/].f_B.f_20 != -1))
	{
		return 1;
	}
	return 0;
}

int func_378(int iParam0)//Position - 0x259FE
{
	if (func_377(iParam0, 0))
	{
		return Global_18C80F[iParam0 /*558*/].f_B.f_21;
	}
	return -1;
}

int func_379(int iParam0, int iParam1)//Position - 0x25A21
{
	int iVar0;
	
	if (func_231(iParam0, 1, 1))
	{
		if (unk_0x5237AF95232D78C5(unk_0xA95CF30C72EB526E(iParam0), 0))
		{
			iVar0 = unk_0x9FE9D386222EEE47(unk_0xA95CF30C72EB526E(iParam0), 0);
			if (unk_0xE59B7F5A03335350(iVar0, 0))
			{
				if (unk_0xBC25C936A095B5BA() == unk_0x3187EF5798B5D209(iVar0, iParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_380()//Position - 0x25A6E
{
	unk_0xE93D261B305E994A(0);
	unk_0x5EFA245B45A49778(0, 188, 1);
	unk_0x5EFA245B45A49778(0, 187, 1);
	unk_0x5EFA245B45A49778(0, 201, 1);
	unk_0x5EFA245B45A49778(0, 202, 1);
	unk_0x5EFA245B45A49778(0, 1, 1);
	unk_0x5EFA245B45A49778(0, 2, 1);
	unk_0x5EFA245B45A49778(0, 239, 1);
	unk_0x5EFA245B45A49778(0, 240, 1);
}

int func_381(vector3 vParam0, bool bParam1)//Position - 0x25AB9
{
	int iVar0;
	
	iVar0 = unk_0x390CF6C8AD6903B7(vParam0);
	unk_0x3F5F1772D71D5EC4(iVar0, func_382(unk_0x7AF0088ABFA713B6(), 1f, 1f));
	unk_0x0BBAABB52887CF8C(iVar0, bParam1);
	return iVar0;
}

float func_382(bool bParam0, float fParam1, float fParam2)//Position - 0x25AE5
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_383(int iParam0)//Position - 0x25AFC
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (func_269(iVar0, iParam0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_384(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x25B26
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_93();
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

int func_385(int iParam0)//Position - 0x26022
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_386(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_386(int iParam0)//Position - 0x2605F
{
	if (func_25(iParam0))
	{
		return Global_19B04.f_6D75[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_387(int iParam0)//Position - 0x26089
{
	int iVar0;
	struct<8> Var1;
	
	if (!unk_0xFA30DFD0084E92FE(Global_19B04.f_2703.f_19, 7))
	{
		if (!unk_0xFA30DFD0084E92FE(*iParam0, 6))
		{
			if (func_27(13) && func_14(func_16()))
			{
				unk_0xF0059F27F7BB6680(iParam0, 6);
				iVar0 = func_9();
				iParam0->f_6 = { func_418(iVar0) };
				if (Global_63CE == iVar0 || Global_63CE == 0)
				{
					func_3(1);
					Var1 = { func_417("til_P_", "Exec_U", "xer_Scene", "B_Mi") };
					unk_0xD6423910AAD8A379(&Var1);
					iVar0 = (Global_63CE + 1 % 8);
					func_415(iParam0, iVar0);
					iParam0->f_2 = (unk_0x105601648511CC64() + unk_0x491B2241281A03B7(8000, 12000));
					unk_0xF0059F27F7BB6680(iParam0, 12);
					if (iVar0 == 7)
					{
						unk_0xF0059F27F7BB6680(&(Global_19B04.f_2703.f_19), 7);
						func_414(255, 0);
					}
				}
				else
				{
					func_415(iParam0, 0);
					unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_2703.f_19), 12);
				}
			}
		}
		else
		{
			func_413();
			if (!unk_0xFA30DFD0084E92FE(*iParam0, 31))
			{
				if (!unk_0xFA30DFD0084E92FE(*iParam0, 25))
				{
					func_412(iParam0);
				}
				else if (func_411())
				{
					func_395(iParam0);
					iParam0->f_3 = unk_0x105601648511CC64() + 2000;
				}
				if (!func_394(0))
				{
					func_414(255, 0);
				}
			}
			else if (func_394(0))
			{
				if (unk_0x105601648511CC64() > iParam0->f_3)
				{
					func_414(0, 800);
				}
			}
			if (!func_27(13) || !func_14(func_16()))
			{
				func_388(iParam0);
			}
		}
	}
}

void func_388(int iParam0)//Position - 0x26207
{
	struct<8> Var0;
	
	if (unk_0xFA30DFD0084E92FE(*iParam0, 31))
	{
		func_393(iParam0);
	}
	if (unk_0xFA30DFD0084E92FE(*iParam0, 25))
	{
		func_389(iParam0);
	}
	Var0 = { func_417("til_P_", "Exec_U", "xer_Scene", "B_Mi") };
	if (unk_0x144E80F5C46A6B75(&Var0))
	{
		unk_0xC1300D0F3A74E20B(&Var0);
	}
	unk_0x7CB6FD92BE491AD9(iParam0, 6);
	unk_0x7CB6FD92BE491AD9(iParam0, 30);
	unk_0x7CB6FD92BE491AD9(iParam0, 8);
}

void func_389(int iParam0)//Position - 0x26272
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_9();
	iVar1 = func_392(iVar0);
	iVar2 = func_391(iVar1);
	iVar3 = func_390(iVar1);
	if (iVar2 != 0)
	{
		unk_0x2CA123B0622F495C(iVar2);
	}
	if (iVar3 != 0)
	{
		unk_0x2CA123B0622F495C(iVar3);
	}
	unk_0x7CB6FD92BE491AD9(iParam0, 25);
}

int func_390(int iParam0)//Position - 0x262B8
{
	switch (iParam0)
	{
		case 17:
			return joaat("u_m_y_cyclist_01");
		
		case 49:
			return joaat("dune");
		
		default:
	}
	return 0;
}

int func_391(int iParam0)//Position - 0x262E4
{
	switch (iParam0)
	{
		case 12:
			return -541762431;
		
		case 109:
			return joaat("a_c_boar");
		
		case 43:
			return joaat("a_c_deer");
		
		case 35:
			return joaat("emperor2");
		
		case 17:
			return joaat("scorcher");
		
		case 28:
			return joaat("a_c_mtlion");
		
		case 49:
			return joaat("cs_hunter");
		
		case 25:
			return joaat("a_m_y_hiker_01");
		
		case 14:
			return joaat("a_f_y_hippie_01");
		
		case 86:
			return joaat("a_m_m_hillbilly_01");
		
		default:
	}
	return 0;
}

int func_392(int iParam0)//Position - 0x26380
{
	switch (iParam0)
	{
		case 1:
			return 12;
		
		case 2:
			return 43;
		
		case 3:
			return 35;
		
		case 4:
			return 109;
		
		case 5:
			return 28;
		
		case 6:
			return 17;
		
		default:
	}
	return -1;
}

void func_393(int iParam0)//Position - 0x263D2
{
	if (unk_0x724D816EA203A79E(iParam0->f_4))
	{
		unk_0x6A54FD861D871600(unk_0x541C2AEF053615BC(iParam0->f_4, false), 10f);
		unk_0xCF6040807CC0E4A5(&(iParam0->f_4));
	}
	if (unk_0x724D816EA203A79E(iParam0->f_5))
	{
		unk_0x6A54FD861D871600(unk_0x541C2AEF053615BC(iParam0->f_5, false), 10f);
		unk_0xF845620A03C7425B(&(iParam0->f_5));
	}
	unk_0x7CB6FD92BE491AD9(iParam0, 31);
}

bool func_394(bool bParam0)//Position - 0x2642C
{
	if (bParam0)
	{
		return Global_18E50.f_2 > 0.5f;
	}
	return Global_18E50.f_2 >= 255f;
}

void func_395(int iParam0)//Position - 0x26457
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_9();
	iVar1 = func_392(iVar0);
	func_396(iVar1, &(iParam0->f_5), &(iParam0->f_4), func_410(iVar0), func_409(iVar0), 1);
	unk_0xF0059F27F7BB6680(iParam0, 31);
}

void func_396(int iParam0, var uParam1, var uParam2, vector3 vParam3, float fParam4, bool bParam5)//Position - 0x26490
{
	switch (iParam0)
	{
		case 12:
			func_408(uParam1, vParam3, fParam4, bParam5);
			break;
		
		case 109:
			func_407(uParam1, vParam3, fParam4, bParam5);
			break;
		
		case 43:
			func_406(uParam1, vParam3, fParam4, bParam5);
			break;
		
		case 35:
			func_405(uParam2, vParam3, fParam4, bParam5);
			break;
		
		case 28:
			func_404(uParam1, vParam3, fParam4, bParam5);
			break;
		
		case 17:
			func_403(uParam1, uParam2, vParam3, fParam4, bParam5);
			break;
		
		case 49:
			func_401(uParam1, uParam2, vParam3, fParam4);
			break;
		
		case 25:
			func_400(uParam1, vParam3, fParam4);
			break;
		
		case 14:
			func_399(uParam1, vParam3, fParam4);
			break;
		
		case 86:
			func_397(uParam1, vParam3, fParam4);
			break;
	}
}

void func_397(var uParam0, vector3 vParam1, float fParam2)//Position - 0x26581
{
	int iVar0;
	
	iVar0 = func_391(86);
	if (unk_0xD6513D668481290A(iVar0))
	{
		*uParam0 = unk_0x01B3635C3E8EDD81(5, iVar0, vParam1, fParam2, 1, true);
		unk_0x3207596BE256C917(*uParam0, 1);
		unk_0xC8FD3EBBB90E8D7F(*uParam0, 227, true);
		unk_0x2CA123B0622F495C(iVar0);
		unk_0x65E471E4A2D56226(*uParam0, 0, 0);
		unk_0x46913653D1C7E82E(*uParam0);
		unk_0x86901CB45E45CCB8(1110, (vParam1.x + 0.1f), (vParam1.y - 0.01f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.5f, 0.4f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x86901CB45E45CCB8(1110, (vParam1.x - 0.03f), (vParam1.y + 0.3f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x86901CB45E45CCB8(1110, (vParam1.x - 0.2f), (vParam1.y - 0.01f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1.1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x86901CB45E45CCB8(1110, (vParam1.x - 0.5f), (vParam1.y - 0.01f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x86901CB45E45CCB8(1110, (vParam1.x + 0.01f), (vParam1.y - 0.4f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.4f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x86901CB45E45CCB8(1110, (vParam1.x + 0.01f), (vParam1.y - 0.01f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x86901CB45E45CCB8(1110, (vParam1.x - 0.6f), (vParam1.y - 0.35f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.5f, 1.2f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		func_398(*uParam0);
		return;
	}
}

void func_398(int iParam0)//Position - 0x26788
{
	unk_0x17F107392C2BF056(iParam0, 1, 0.431f, 0.667f, 179.593f, 0.889f, 2, 0f, "BasicSlash");
	unk_0x17F107392C2BF056(iParam0, 1, 0.556f, 0.292f, 161.805f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x17F107392C2BF056(iParam0, 1, 0.708f, 0.688f, 167.897f, 0f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x17F107392C2BF056(iParam0, 2, 0.472f, 0.347f, 146.133f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x17F107392C2BF056(iParam0, 2, 0.799f, 0.451f, 158.294f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x17F107392C2BF056(iParam0, 0, 0.681f, 0.507f, 158.707f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x17F107392C2BF056(iParam0, 0, 0.819f, 0.813f, 174.811f, 0.056f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x17F107392C2BF056(iParam0, 0, 0.174f, 0.438f, 211.521f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x17F107392C2BF056(iParam0, 0, 0.174f, 0.486f, 213.237f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x17F107392C2BF056(iParam0, 0, 0.174f, 0.542f, 215.168f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	unk_0x17F107392C2BF056(iParam0, 0, 0.236f, 0.542f, 213.752f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	unk_0x17F107392C2BF056(iParam0, 0, 0.278f, 0.542f, 212.851f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	unk_0x17F107392C2BF056(iParam0, 0, 0.313f, 0.542f, 212.127f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	unk_0x17F107392C2BF056(iParam0, 5, 0.639f, 0.313f, 149.248f, 1f, 1, 0f, "stab");
	unk_0x17F107392C2BF056(iParam0, 5, 0.792f, 0.424f, 182.625f, 1f, 1, 0f, "stab");
	unk_0x17F107392C2BF056(iParam0, 5, 0.792f, 0.424f, 182.625f, 1f, 1, 0f, "BasicSlash");
	unk_0x17F107392C2BF056(iParam0, 3, 0.618f, 0.451f, 204.207f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x17F107392C2BF056(iParam0, 3, 0.785f, 0.597f, 206.103f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x17F107392C2BF056(iParam0, 4, 0.688f, 0.438f, 202.91f, 1f, 1, 0f, "BasicSlash");
	unk_0x17F107392C2BF056(iParam0, 4, 0.688f, 0.424f, 202.492f, 1f, 1, 0f, "BasicSlash");
	unk_0x17F107392C2BF056(iParam0, 4, 0.688f, 0.347f, 200.181f, 1f, 1, 0f, "BasicSlash");
	unk_0x17F107392C2BF056(iParam0, 4, 0.688f, 0.278f, 198.043f, 1f, 1, 0f, "BasicSlash");
	unk_0x17F107392C2BF056(iParam0, 4, 0.688f, 0.222f, 196.275f, 1f, 1, 0f, "BasicSlash");
	unk_0x17F107392C2BF056(iParam0, 4, 0.653f, 0.222f, 196.609f, 1f, 3, 0f, "BasicSlash");
	unk_0x17F107392C2BF056(iParam0, 4, 0.75f, 0.222f, 195.716f, 1f, 2, 0f, "BasicSlash");
	unk_0x17F107392C2BF056(iParam0, 4, 1f, 0.326f, 196.621f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	unk_0x17F107392C2BF056(iParam0, 4, 0.93f, 0.451f, 200.584f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	unk_0x17F107392C2BF056(iParam0, 4, 0.618f, 0.451f, 204.207f, 1f, 0, 0f, "ShotgunLargeMonolithic");
}

void func_399(var uParam0, vector3 vParam1, float fParam2)//Position - 0x26AC0
{
	int iVar0;
	
	iVar0 = func_391(14);
	if (unk_0xD6513D668481290A(iVar0))
	{
		*uParam0 = unk_0x01B3635C3E8EDD81(5, iVar0, vParam1, fParam2, 1, true);
		unk_0x3207596BE256C917(*uParam0, 1);
		unk_0xC8FD3EBBB90E8D7F(*uParam0, 227, true);
		unk_0x2CA123B0622F495C(iVar0);
		unk_0x65E471E4A2D56226(*uParam0, 0, 0);
		unk_0x46913653D1C7E82E(*uParam0);
		unk_0x86901CB45E45CCB8(1110, (vParam1.x + 0.1f), (vParam1.y - 0.01f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.5f, 0.4f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x86901CB45E45CCB8(1110, (vParam1.x - 0.03f), (vParam1.y + 0.3f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x86901CB45E45CCB8(1110, (vParam1.x - 0.2f), (vParam1.y - 0.01f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1.1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x86901CB45E45CCB8(1110, (vParam1.x - 0.5f), (vParam1.y - 0.01f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x86901CB45E45CCB8(1110, (vParam1.x + 0.01f), (vParam1.y - 0.4f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.4f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x86901CB45E45CCB8(1110, (vParam1.x + 0.01f), (vParam1.y - 0.01f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x86901CB45E45CCB8(1110, (vParam1.x - 0.6f), (vParam1.y - 0.35f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.5f, 1.2f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		func_398(*uParam0);
		return;
	}
}

void func_400(var uParam0, vector3 vParam1, float fParam2)//Position - 0x26CC7
{
	int iVar0;
	
	iVar0 = func_391(25);
	if (unk_0xD6513D668481290A(iVar0))
	{
		*uParam0 = unk_0x01B3635C3E8EDD81(4, iVar0, vParam1, fParam2, 1, true);
		unk_0x3207596BE256C917(*uParam0, 1);
		unk_0xC8FD3EBBB90E8D7F(*uParam0, 227, true);
		unk_0x2CA123B0622F495C(iVar0);
		unk_0x65E471E4A2D56226(*uParam0, 0, 0);
		unk_0x46913653D1C7E82E(*uParam0);
		unk_0x86901CB45E45CCB8(1110, (vParam1.x + 0.02f), (vParam1.y - 0.01f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.5f, 0.4f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x86901CB45E45CCB8(1110, (vParam1.x - 0.23f), (vParam1.y + 0.04f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x86901CB45E45CCB8(1110, (vParam1.x - 0.05f), (vParam1.y - 0.01f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1.1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x86901CB45E45CCB8(1110, (vParam1.x - 0.05f), (vParam1.y - 0.11f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x86901CB45E45CCB8(1110, (vParam1.x + 0.09f), (vParam1.y - 0.06f), vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		func_398(*uParam0);
		return;
	}
}

void func_401(var uParam0, var uParam1, vector3 vParam2, float fParam3)//Position - 0x26E56
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
	iVar0 = func_391(49);
	iVar1 = func_390(49);
	if (unk_0xD6513D668481290A(iVar0) && unk_0xD6513D668481290A(iVar1))
	{
		*uParam0 = unk_0x01B3635C3E8EDD81(4, iVar0, vParam2, fParam3, 1, true);
		unk_0x3207596BE256C917(*uParam0, 1);
		unk_0xC8FD3EBBB90E8D7F(*uParam0, 227, true);
		unk_0x2CA123B0622F495C(iVar0);
		unk_0x65E471E4A2D56226(*uParam0, 0, 0);
		unk_0x46913653D1C7E82E(*uParam0);
		unk_0x86901CB45E45CCB8(1110, ((vParam2.x + 0.12f) - 0.3f), ((vParam2.y - 0.01f) - 0.07f), vParam2.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x86901CB45E45CCB8(1110, ((vParam2.x - 0.03f) - 0.3f), ((vParam2.y + 0.04f) - 0.07f), vParam2.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x86901CB45E45CCB8(1110, ((vParam2.x - 0.2f) - 0.3f), ((vParam2.y - 0.01f) - 0.07f), vParam2.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x86901CB45E45CCB8(1110, ((vParam2.x - 0.05f) - 0.3f), ((vParam2.y - 0.15f) - 0.07f), vParam2.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.7f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		unk_0x86901CB45E45CCB8(1110, ((vParam2.x + 0.01f) - 0.3f), ((vParam2.y - 0.06f) - 0.07f), vParam2.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		func_398(*uParam0);
		vVar2 = { 9.9929f, 4.6946f, -7.1469f };
		*uParam1 = unk_0x61C05BF08A1E0EFE(iVar1, vParam2 + vVar2, fParam3, true, true, false);
		unk_0x2CA123B0622F495C(iVar1);
		unk_0xE6E403909F4BF47F(*uParam1, 2f);
		unk_0xF0A40F19AAB79E88(*uParam1, 1084227584);
		unk_0xE9186F12AE391AD2(*uParam1, 2f);
		unk_0xC0078C1F63760E5D(*uParam1, 1f);
		unk_0xF162EEE556542AB7(*uParam1, 0, func_402());
		unk_0xF162EEE556542AB7(*uParam1, 1, func_402());
		unk_0xF162EEE556542AB7(*uParam1, 2, func_402());
		unk_0xF162EEE556542AB7(*uParam1, 3, func_402());
		unk_0xF162EEE556542AB7(*uParam1, 4, func_402());
		unk_0xF162EEE556542AB7(*uParam1, 5, func_402());
		unk_0x55AFEE10B3CE5C2C(*uParam1, 15f);
		unk_0xF45E798D22D5EB3A(*uParam1, 3);
		unk_0x93D3868AE0D83B7C(*uParam1, 2);
		unk_0x0BD7089C3E314AEA(*uParam1, true);
		unk_0x46913653D1C7E82E(*uParam1);
		return;
	}
}

int func_402()//Position - 0x270F8
{
	if (unk_0xFA30DFD0084E92FE(unk_0x491B2241281A03B7(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_403(var uParam0, var uParam1, vector3 vParam2, float fParam3, bool bParam4)//Position - 0x27119
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
	iVar0 = func_391(17);
	iVar1 = func_390(17);
	if (unk_0xD6513D668481290A(iVar0) && unk_0xD6513D668481290A(iVar1))
	{
		*uParam0 = unk_0x01B3635C3E8EDD81(4, iVar1, vParam2, fParam3, 1, true);
		unk_0x3207596BE256C917(*uParam0, 1);
		unk_0xC8FD3EBBB90E8D7F(*uParam0, 227, true);
		unk_0x2CA123B0622F495C(iVar1);
		unk_0x65E471E4A2D56226(*uParam0, 0, 0);
		unk_0x46913653D1C7E82E(*uParam0);
		vVar2 = { 0.02f, -0.01f, 0f };
		unk_0x86901CB45E45CCB8(1110, vParam2 + vVar2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.5f, 0.4f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar2 = { 0.23f, 0.04f, 0f };
		unk_0x86901CB45E45CCB8(1110, vParam2 + vVar2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar2 = { -0.05f, -0.01f, 0f };
		unk_0x86901CB45E45CCB8(1110, vParam2 + vVar2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1.1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar2 = { -0.05f, -0.11f, 0f };
		unk_0x86901CB45E45CCB8(1110, vParam2 + vVar2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar2 = { 0.09f, -0.06f, 0f };
		unk_0x86901CB45E45CCB8(1110, vParam2 + vVar2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		if (bParam4)
		{
			vVar2 = { 0.5783f, 0.1357f, -0.0683f };
			unk_0x86901CB45E45CCB8(2020, vParam2 + vVar2, 0f, 0f, -1f, 0.4484f, -0.8938f, 0f, 0.19f, 0.33f, 0.09f, 0f, 0f, 1f, -1f, 1, 0, 0);
			vVar2 = { 1.0477f, 0.1103f, -0.1388f };
			unk_0x86901CB45E45CCB8(2020, vParam2 + vVar2, 0f, 0f, -1f, 0.4484f, -0.8938f, 0f, 0.19f, 0.33f, 0.09f, 0f, 0f, 1f, -1f, 1, 0, 0);
			vVar2 = { 1.5048f, 0.4595f, -0.1953f };
			unk_0x86901CB45E45CCB8(2020, vParam2 + vVar2, 0f, 0f, -1f, 0.4484f, -0.8938f, 0f, 0.19f, 0.33f, 0.09f, 0f, 0f, 1f, -1f, 1, 0, 0);
		}
		func_398(*uParam0);
		*uParam1 = unk_0x61C05BF08A1E0EFE(iVar0, (vParam2.x - 0.4f), (vParam2.y - 0.5f), vParam2.z, fParam3, true, true, false);
		unk_0x2CA123B0622F495C(iVar0);
		unk_0x784C605D172817C8(*uParam1, 0f, 85f, 0f, 2, 1);
		unk_0xE9186F12AE391AD2(*uParam1, 20.5f);
		unk_0x55AFEE10B3CE5C2C(*uParam1, 15f);
		unk_0x46913653D1C7E82E(*uParam1);
		return;
	}
}

void func_404(var uParam0, vector3 vParam1, float fParam2, bool bParam3)//Position - 0x273FB
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = func_391(28);
	if (unk_0xD6513D668481290A(iVar0))
	{
		*uParam0 = unk_0x01B3635C3E8EDD81(28, iVar0, vParam1, fParam2, 1, true);
		unk_0x3207596BE256C917(*uParam0, 1);
		unk_0xC8FD3EBBB90E8D7F(*uParam0, 227, true);
		unk_0x2CA123B0622F495C(iVar0);
		unk_0x65E471E4A2D56226(*uParam0, 0, 0);
		unk_0x46913653D1C7E82E(*uParam0);
		vVar1 = { 0.02f, -0.01f, 0f };
		unk_0x86901CB45E45CCB8(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.6f, 0.4f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar1 = { -0.03f, 0.04f, 0f };
		unk_0x86901CB45E45CCB8(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar1 = { -0.05f, -0.01f, 0f };
		unk_0x86901CB45E45CCB8(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1.1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar1 = { 0.01f, -0.06f, 0f };
		unk_0x86901CB45E45CCB8(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		if (bParam3)
		{
			vVar1 = { 0.5206f, 0f, 0.003f };
			unk_0x86901CB45E45CCB8(2020, vParam1 + vVar1, 0f, 0f, -1f, 0.309f, -0.9511f, 0f, 0.19f, 0.33f, 0.113f, 0f, 0f, 1f, -1f, 1, 0, 0);
			vVar1 = { 1.1258f, 0.0362f, -0.0837f };
			unk_0x86901CB45E45CCB8(2020, vParam1 + vVar1, 0f, 0f, -1f, 0.5036f, -0.8639f, 0f, 0.19f, 0.33f, 0.119f, 0f, 0f, 1f, -1f, 1, 0, 0);
			vVar1 = { 1.6107f, 0.4678f, -0.0815f };
			unk_0x86901CB45E45CCB8(2020, vParam1 + vVar1, 0f, 0f, -1f, 0.5036f, -0.8639f, 0f, 0.19f, 0.33f, 0.119f, 0f, 0f, 0.8f, -1f, 1, 0, 0);
		}
		return;
	}
}

void func_405(var uParam0, vector3 vParam1, float fParam2, bool bParam3)//Position - 0x2762F
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = func_391(35);
	if (unk_0xD6513D668481290A(iVar0))
	{
		*uParam0 = unk_0x61C05BF08A1E0EFE(iVar0, vParam1, fParam2, true, true, false);
		unk_0x2CA123B0622F495C(iVar0);
		unk_0x784C605D172817C8(*uParam0, 0f, 170f, 0f, 2, 1);
		unk_0xE6E403909F4BF47F(*uParam0, 1f);
		unk_0xE9186F12AE391AD2(*uParam0, 1f);
		unk_0x55AFEE10B3CE5C2C(*uParam0, 15f);
		unk_0xF162EEE556542AB7(*uParam0, 0, func_402());
		unk_0xF162EEE556542AB7(*uParam0, 1, func_402());
		unk_0xF162EEE556542AB7(*uParam0, 2, func_402());
		unk_0xF162EEE556542AB7(*uParam0, 3, func_402());
		unk_0xF162EEE556542AB7(*uParam0, 4, func_402());
		unk_0xF162EEE556542AB7(*uParam0, 5, func_402());
		unk_0xF45E798D22D5EB3A(*uParam0, 3);
		unk_0x93D3868AE0D83B7C(*uParam0, 2);
		unk_0x0BD7089C3E314AEA(*uParam0, true);
		unk_0x46913653D1C7E82E(*uParam0);
		if (bParam3)
		{
			vVar1 = { 0.4947f, 2.3632f, 0.1294f };
			unk_0x86901CB45E45CCB8(2020, vParam1 + vVar1, 0f, 0f, -1f, 0.3798f, -0.9251f, 0f, 0.19f, 0.33f, 0f, 0f, 0f, 0.7f, -1f, 1, 0, 0);
			vVar1 = { 0.9243f, 2.6606f, 0.1951f };
			unk_0x86901CB45E45CCB8(2020, vParam1 + vVar1, 0f, 0f, -1f, 0.3798f, -0.9251f, 0f, 0.19f, 0.33f, 0f, 0f, 0f, 0.66f, -1f, 1, 0, 0);
			vVar1 = { 1.5467f, 2.5044f, 0.2418f };
			unk_0x86901CB45E45CCB8(2020, vParam1 + vVar1, 0f, 0f, -1f, 0.3798f, -0.9251f, 0f, 0.19f, 0.33f, 0f, 0f, 0f, 0.58f, -1f, 1, 0, 0);
			vVar1 = { 1.357f, 3.8779f, 0.3259f };
			unk_0x86901CB45E45CCB8(2020, vParam1 + vVar1, 0f, 0f, -1f, 0.3798f, -0.9251f, 0f, 0.19f, 0.33f, 0f, 0f, 0f, 0.48f, -1f, 1, 0, 0);
		}
		return;
	}
}

void func_406(var uParam0, vector3 vParam1, float fParam2, bool bParam3)//Position - 0x2781B
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = func_391(43);
	if (unk_0xD6513D668481290A(iVar0))
	{
		*uParam0 = unk_0x01B3635C3E8EDD81(28, iVar0, vParam1, fParam2, 1, true);
		unk_0x3207596BE256C917(*uParam0, 1);
		unk_0xC8FD3EBBB90E8D7F(*uParam0, 227, true);
		unk_0x2CA123B0622F495C(iVar0);
		unk_0x65E471E4A2D56226(*uParam0, 0, 0);
		unk_0x46913653D1C7E82E(*uParam0);
		vVar1 = { 0.12f, -0.01f, 0f };
		unk_0x86901CB45E45CCB8(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar1 = { -0.03f, 0.04f, 0f };
		unk_0x86901CB45E45CCB8(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar1 = { -0.2f, -0.01f, 0f };
		unk_0x86901CB45E45CCB8(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar1 = { -0.05f, -0.15f, 0f };
		unk_0x86901CB45E45CCB8(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.7f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		if (bParam3)
		{
			vVar1 = { 0.4125f, -0.5815f, -0.2056f };
			unk_0x86901CB45E45CCB8(2020, vParam1 + vVar1, 0f, 0f, -1f, -0.5358f, -0.8443f, 0f, 0.19f, 0.33f, 0.234f, 0f, 0f, 0.9f, -1f, 1, 0, 0);
			vVar1 = { 0.6332f, -1.1758f, -0.7106f };
			unk_0x86901CB45E45CCB8(2020, vParam1 + vVar1, 0f, 0f, -1f, -0.7026f, -0.7115f, 0f, 0.19f, 0.33f, 0.26f, 0f, 0f, 0.75f, -1f, 1, 0, 0);
		}
		return;
	}
}

void func_407(var uParam0, vector3 vParam1, float fParam2, bool bParam3)//Position - 0x27A0B
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = func_391(109);
	if (unk_0xD6513D668481290A(iVar0))
	{
		*uParam0 = unk_0x01B3635C3E8EDD81(28, iVar0, vParam1, fParam2, 1, true);
		unk_0x3207596BE256C917(*uParam0, 1);
		unk_0x2CA123B0622F495C(iVar0);
		unk_0x65E471E4A2D56226(*uParam0, 0, 0);
		unk_0x46913653D1C7E82E(*uParam0);
		vVar1 = { 0.12f, -0.01f, 0f };
		unk_0x86901CB45E45CCB8(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar1 = { -0.03f, 0.04f, 0f };
		unk_0x86901CB45E45CCB8(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar1 = { -0.2f, -0.01f, 0f };
		unk_0x86901CB45E45CCB8(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar1 = { -0.05f, -0.15f, 0f };
		unk_0x86901CB45E45CCB8(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.7f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar1 = { 0.01f, -0.06f, 0f };
		unk_0x86901CB45E45CCB8(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		if (bParam3)
		{
			vVar1 = { 0.4936f, -0.1763f, -0.0522f };
			unk_0x86901CB45E45CCB8(2020, vParam1 + vVar1, 0f, 0f, -1f, 0f, -1f, 0f, 0.19f, 0.33f, 0.144f, 0f, 0f, 1f, -1f, 1, 0, 0);
			vVar1 = { 1.0645f, 0.0483f, -0.0698f };
			unk_0x86901CB45E45CCB8(2020, vParam1 + vVar1, 0f, 0f, -1f, 0f, -1f, 0f, 0.19f, 0.33f, 0.144f, 0f, 0f, 1f, -1f, 1, 0, 0);
			vVar1 = { 1.6011f, -0.1704f, -0.1473f };
			unk_0x86901CB45E45CCB8(2020, vParam1 + vVar1, 0f, 0f, -1f, 0f, -1f, 0f, 0.19f, 0.33f, 0.144f, 0f, 0f, 0.808f, -1f, 1, 0, 0);
		}
		func_398(*uParam0);
		return;
	}
}

void func_408(var uParam0, vector3 vParam1, float fParam2, bool bParam3)//Position - 0x27C60
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = func_391(12);
	if (unk_0xD6513D668481290A(iVar0))
	{
		*uParam0 = unk_0x01B3635C3E8EDD81(28, iVar0, vParam1, fParam2, 1, true);
		unk_0x3207596BE256C917(*uParam0, 1);
		unk_0x2CA123B0622F495C(iVar0);
		unk_0x65E471E4A2D56226(*uParam0, 0, 0);
		unk_0x46913653D1C7E82E(*uParam0);
		vVar1 = { 0.04f, 0.02f, 0f };
		unk_0x86901CB45E45CCB8(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar1 = { -0.01f, 0.05f, 0f };
		unk_0x86901CB45E45CCB8(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		vVar1 = { -0.03f, -0.01f, 0f };
		unk_0x86901CB45E45CCB8(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		if (bParam3)
		{
			vVar1 = { 0.2417f, -0.3975f, -0.2282f };
			unk_0x86901CB45E45CCB8(2020, vParam1 + vVar1, 0f, 0f, -1f, -0.9471f, -0.3209f, 0f, 0.19f, 0.33f, 0.106f, 0f, 0f, 1f, -1f, 1, 0, 0);
			vVar1 = { 0.0747f, -0.8188f, -0.2576f };
			unk_0x86901CB45E45CCB8(2020, vParam1 + vVar1, 0f, 0f, -1f, -0.9471f, -0.3209f, 0f, 0.19f, 0.33f, 0.106f, 0f, 0f, 1f, -1f, 1, 0, 0);
			vVar1 = { 0.4322f, -1.1548f, -0.4902f };
			unk_0x86901CB45E45CCB8(2020, vParam1 + vVar1, 0f, 0f, -1f, -0.9471f, -0.3209f, 0f, 0.19f, 0.33f, 0.106f, 0f, 0f, 0.802f, -1f, 1, 0, 0);
		}
		func_398(*uParam0);
		return;
	}
}

float func_409(int iParam0)//Position - 0x27E55
{
	switch (iParam0)
	{
		case 1:
			return 190.1056f;
		
		case 2:
			return 132.9326f;
		
		case 3:
			return 355.7119f;
		
		case 4:
			return 209.0264f;
		
		case 5:
			return 122.6722f;
		
		case 6:
			return 174.841f;
		
		default:
	}
	return 0f;
}

Vector3 func_410(int iParam0)//Position - 0x27EB9
{
	switch (iParam0)
	{
		case 1:
			return Global_18E39[0 /*3*/];
		
		case 2:
			return Global_18E39[1 /*3*/];
		
		case 3:
			return Global_18E39[2 /*3*/];
		
		case 4:
			return Global_18E39[3 /*3*/];
		
		case 5:
			return Global_18E39[4 /*3*/];
		
		case 6:
			return Global_18E39[5 /*3*/];
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_411()//Position - 0x27F37
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_9();
	iVar1 = func_392(iVar0);
	iVar2 = func_391(iVar1);
	iVar3 = func_390(iVar1);
	if (iVar2 != 0)
	{
		if (!unk_0xD6513D668481290A(iVar2))
		{
			return 0;
		}
	}
	if (iVar3 != 0)
	{
		if (!unk_0xD6513D668481290A(iVar3))
		{
			return 0;
		}
	}
	return 1;
}

void func_412(int iParam0)//Position - 0x27F86
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_9();
	iVar1 = func_392(iVar0);
	iVar2 = func_391(iVar1);
	iVar3 = func_390(iVar1);
	if (iVar2 != 0)
	{
		unk_0xF243B7A14FCFD0F4(iVar2);
	}
	if (iVar3 != 0)
	{
		unk_0xF243B7A14FCFD0F4(iVar3);
	}
	unk_0xF0059F27F7BB6680(iParam0, 25);
}

void func_413()//Position - 0x27FCC
{
	if (Global_18E50.f_3 == unk_0xC87A57742F7D3C06())
	{
		return;
	}
	Global_18E50.f_3 = unk_0xC87A57742F7D3C06();
	if (Global_18E50.f_2 == 0f && Global_18E50.f_1 == 0f)
	{
		return;
	}
	if (Global_18E50.f_2 != Global_18E50.f_1)
	{
		Global_18E50.f_2 = (Global_18E50.f_2 + Global_18E50);
		if (Global_18E50 <= 0f)
		{
			if (Global_18E50.f_2 < Global_18E50.f_1)
			{
				Global_18E50.f_2 = Global_18E50.f_1;
			}
		}
		else if (Global_18E50.f_2 > Global_18E50.f_1)
		{
			Global_18E50.f_2 = Global_18E50.f_1;
		}
	}
	unk_0xF7EBEC3FF57AEC65(0.5f, 0.5f, 1f, 1f, 255, 255, 255, SYSTEM::ROUND(Global_18E50.f_2), 0);
}

void func_414(int iParam0, int iParam1)//Position - 0x2808E
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	if (iParam1 <= 0)
	{
		Global_18E50 = 0f;
		Global_18E50.f_1 = fVar0;
		Global_18E50.f_2 = fVar0;
	}
	else
	{
		fVar1 = (fVar0 - Global_18E50.f_2);
		fVar2 = (SYSTEM::TO_FLOAT(iParam1) / (unk_0x11F9F9006143871A() * 1000f));
		Global_18E50 = (fVar1 / fVar2);
		Global_18E50.f_1 = fVar0;
	}
}

void func_415(int iParam0, int iParam1)//Position - 0x280EB
{
	func_416(&(Global_19B04.f_2703.f_19), iParam1, 14336, 11);
}

void func_416(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x28107
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam2));
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, iParam3));
}

struct<8> func_417(char* sParam0, char* sParam1, char* sParam2, char* sParam3)//Position - 0x2812B
{
	struct<8> Var0;
	
	StringCopy(&Var0, sParam1, 32);
	StringConCat(&Var0, sParam0, 32);
	StringConCat(&Var0, sParam3, 32);
	StringConCat(&Var0, sParam2, 32);
	return Var0;
}

Vector3 func_418(int iParam0)//Position - 0x28150
{
	if (iParam0 >= 0 && iParam0 < 7)
	{
		return Global_18E23[iParam0 /*3*/];
	}
	return 0f, 0f, 0f;
}

void func_419()//Position - 0x28178
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = -1308.545f;
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		if (SYSTEM::VDIST2(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), 475.192f, -1313.48f, 28.2074f) < 1000f)
		{
			if (!iLocal_52)
			{
				unk_0xF243B7A14FCFD0F4(joaat("v_ilev_uvline"));
				iLocal_51 = 1;
				if (unk_0xD6513D668481290A(joaat("v_ilev_uvline")))
				{
					if (func_420(8))
					{
						iLocal_53[4] = unk_0xB6896943DA475493(joaat("v_ilev_uvline"), 471.48f, fVar0, 30.33f, true, true, false);
						unk_0x641B19E156645A92(iLocal_53[4], 471.48f, fVar0, 30.33f, 1, false, 0, 1);
						unk_0x784C605D172817C8(iLocal_53[4], 0f, 0f, 116.9f, 2, 1);
						iLocal_53[1] = unk_0xB6896943DA475493(joaat("v_ilev_uvline"), 471.48f, fVar0, 30.15f, true, true, false);
						unk_0x641B19E156645A92(iLocal_53[1], 471.48f, fVar0, 30.15f, 1, false, 0, 1);
						unk_0x784C605D172817C8(iLocal_53[1], 0f, 0f, 116.9f, 2, 1);
					}
					if (func_420(9))
					{
						iLocal_53[5] = unk_0xB6896943DA475493(joaat("v_ilev_uvline"), 471.48f, fVar0, 29.98f, true, true, false);
						unk_0x641B19E156645A92(iLocal_53[5], 471.48f, fVar0, 29.98f, 1, false, 0, 1);
						unk_0x784C605D172817C8(iLocal_53[5], 0f, 0f, 116.9f, 2, 1);
					}
					if (func_420(10))
					{
						iLocal_53[3] = unk_0xB6896943DA475493(joaat("v_ilev_uvline"), 471.48f, fVar0, 29.82f, true, true, false);
						unk_0x641B19E156645A92(iLocal_53[3], 471.48f, fVar0, 29.82f, 1, false, 0, 1);
						unk_0x784C605D172817C8(iLocal_53[3], 0f, 0f, 116.9f, 2, 1);
					}
					iVar1 = unk_0x5E29F9399E0829A3(475.192f, -1313.48f, 28.2074f, "v_chopshop");
					iVar2 = 0;
					while (iVar2 < 6)
					{
						if (unk_0x724D816EA203A79E(iLocal_53[iVar2]))
						{
							unk_0xDC078F87049ECECE(iLocal_53[iVar2], true, 0);
							unk_0x2C2ABC380DB95938(iLocal_53[iVar2], 1);
							unk_0x7FDC51451428DF70(iLocal_53[iVar2], iVar1);
						}
						iVar2++;
					}
					unk_0x2CA123B0622F495C(joaat("v_ilev_uvline"));
					iLocal_52 = 1;
				}
			}
		}
		else
		{
			if (iLocal_51)
			{
				unk_0x2CA123B0622F495C(joaat("v_ilev_uvline"));
				iLocal_51 = 0;
			}
			if (iLocal_52)
			{
				func_460();
				iLocal_52 = 0;
			}
		}
	}
}

int func_420(int iParam0)//Position - 0x283B0
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_19B04.f_2360.f_14A[iParam0 /*6*/];
}

void func_421()//Position - 0x283DC
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_110A8.f_229)
	{
		if (!iLocal_54)
		{
			Global_110A8.f_22A = 0;
			iLocal_54 = 1;
		}
		else if (Global_110A8.f_22A >= 68)
		{
			Global_110A8.f_229 = 0;
			iLocal_54 = 0;
		}
	}
	else
	{
		iLocal_54 = 0;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_148)
	{
		iVar1 = iLocal_149[iVar0];
		if (func_61(&Local_131, iVar1))
		{
			func_456(&Local_140, iVar1);
			if ((Local_140.f_45 && Local_56.f_3 == 0) || iVar1 == 14)
			{
				fLocal_152[iVar1] = unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), false), Local_140.f_37, false);
			}
			else
			{
				fLocal_152[iVar1] = unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), false), Local_131, false);
			}
			if (func_455())
			{
				func_454(iVar1);
				func_452(iVar1);
				func_451(iVar1);
				func_450(iVar1);
				func_448(iVar1);
				func_447(iVar1);
				func_446(iVar1);
				func_423(iVar1);
				if (unk_0xFA30DFD0084E92FE(uLocal_48[iVar1], 2))
				{
					if (Global_110A8.f_229)
					{
						iLocal_54 = 0;
					}
					func_461(iVar1);
				}
			}
			else
			{
				func_422(iVar1);
			}
		}
		iVar0++;
	}
	iVar2 = iLocal_148;
	iLocal_148 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_150)
	{
		iLocal_150[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		if (unk_0xFA30DFD0084E92FE(uLocal_48[iLocal_149[iVar0]], 2))
		{
			func_461(iLocal_149[iVar0]);
		}
		iVar0++;
	}
	if (iLocal_151 != -1)
	{
		func_461(iLocal_151);
		iLocal_151 = -1;
	}
	iLocal_47++;
	if (iLocal_47 >= 68)
	{
		iLocal_47 = 0;
	}
	func_461(iLocal_47);
	if (iLocal_157)
	{
		func_461(21);
		func_461(22);
		func_461(23);
		iLocal_157 = 0;
		bLocal_158 = true;
	}
	else if (bLocal_158)
	{
		bLocal_158 = false;
	}
	if (Global_110A8.f_229)
	{
		Global_110A8.f_22A++;
	}
}

void func_422(int iParam0)//Position - 0x285D5
{
	if (iLocal_49[iParam0] != 0)
	{
		unk_0x2CA123B0622F495C(iLocal_49[iParam0]);
		iLocal_49[iParam0] = 0;
	}
}

void func_423(int iParam0)//Position - 0x285F8
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	vector3 vVar8;
	struct<60> Var9;
	int iVar10;
	bool bVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	vector3 vVar15;
	vector3 vVar16;
	int iVar17;
	
	fVar0 = 210f;
	fVar1 = 200f;
	if (!unk_0xFA30DFD0084E92FE(uLocal_48[iParam0], 2))
	{
		func_422(iParam0);
	}
	unk_0x7CB6FD92BE491AD9(&(uLocal_48[iParam0]), 2);
	if (unk_0xFA30DFD0084E92FE(uLocal_48[iParam0], 1))
	{
		fVar2 = unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), false), vLocal_50[iParam0 /*3*/], true);
	}
	else
	{
		fVar2 = 99999.99f;
	}
	if (unk_0xFA30DFD0084E92FE(Local_131.f_9, 23))
	{
		if (Local_131.f_4 == joaat("blimp"))
		{
			fVar0 = 1010f;
			fVar1 = 1000f;
		}
		else
		{
			fVar0 = 410f;
			fVar1 = 400f;
		}
	}
	else if (unk_0xFA30DFD0084E92FE(Local_131.f_9, 24))
	{
		fVar0 = 50f;
		fVar1 = 50f;
	}
	else if (((unk_0xFA30DFD0084E92FE(Local_131.f_9, 19) || unk_0xFA30DFD0084E92FE(Local_131.f_9, 20)) || iParam0 == 24) || iParam0 == 25)
	{
		fVar0 = 310f;
		fVar1 = 300f;
	}
	else if (unk_0xFA30DFD0084E92FE(Local_131.f_9, 25) && (((iLocal_129 == 0 && Local_56 == 21) || (iLocal_129 == 0 && Local_56 == 22)) || (iLocal_129 == 0 && Local_56 == 23)))
	{
		fVar0 = 5010f;
		fVar1 = 5000f;
	}
	if (unk_0x724D816EA203A79E(Global_110A8.f_8B[iParam0]))
	{
		if (unk_0xE59B7F5A03335350(Global_110A8.f_8B[iParam0], 0))
		{
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				if (iParam0 == 24)
				{
					iVar3 = unk_0x3187EF5798B5D209(Global_110A8.f_8B[iParam0], -1, 0);
					if (!unk_0x724D816EA203A79E(iVar3))
					{
						iVar3 = unk_0xE293D7F16E1815E8(Global_110A8.f_8B[iParam0], -1);
					}
					iVar4 = func_385(iVar3);
					if (iVar4 != Global_19B04.f_7F22.f_15D7)
					{
						if (func_25(iVar4))
						{
							func_445("Updating last character to use vehicle gen", iVar4);
							Global_19B04.f_7F22.f_15D7 = iVar4;
						}
					}
				}
				if (!unk_0xB248FAA35ED47DB9(Global_110A8.f_8B[iParam0], 1))
				{
					func_444("No longer needed: Vehicle owned by other script");
					if (((iParam0 == 24 && !func_63(Global_110A8.f_8B[iParam0])) && !func_62(Global_110A8.f_8B[iParam0])) && unk_0x6F79ECA8C83E4357(Global_110A8.f_8B[iParam0]) != joaat("monster"))
					{
						unk_0x2487C8A04B65E2BD(Global_110A8.f_8B[iParam0], true);
					}
					Global_110A8.f_8B[iParam0] = 0;
					Global_110A8[iParam0] = 1;
					func_443(iParam0);
					return;
				}
				if (((unk_0xFA30DFD0084E92FE(uLocal_48[iParam0], 0) && !unk_0xFA30DFD0084E92FE(Local_131.f_9, 27)) && iParam0 != 24) && iParam0 != 25)
				{
					func_444("No longer needed: Player used vehicle");
					if (((iParam0 == 24 && !func_63(Global_110A8.f_8B[iParam0])) && !func_62(Global_110A8.f_8B[iParam0])) && unk_0x6F79ECA8C83E4357(Global_110A8.f_8B[iParam0]) != joaat("monster"))
					{
						unk_0x2487C8A04B65E2BD(Global_110A8.f_8B[iParam0], true);
					}
					unk_0x1E7A09C1710FB071(&(Global_110A8.f_8B[iParam0]));
					Global_110A8.f_8B[iParam0] = 0;
					Global_110A8[iParam0] = 1;
					func_443(iParam0);
					return;
				}
				if ((!unk_0xFA30DFD0084E92FE(uLocal_48[iParam0], 1) && iParam0 != 24) && iParam0 != 25)
				{
					if (unk_0xD9C1758D86688CEA(Global_110A8.f_8B[iParam0], unk_0xBC25C936A095B5BA(), 1))
					{
						func_444("No longer needed: Player damaged vehicle");
						if (((iParam0 == 24 && !func_63(Global_110A8.f_8B[iParam0])) && !func_62(Global_110A8.f_8B[iParam0])) && unk_0x6F79ECA8C83E4357(Global_110A8.f_8B[iParam0]) != joaat("monster"))
						{
							unk_0x2487C8A04B65E2BD(Global_110A8.f_8B[iParam0], true);
						}
						unk_0x1E7A09C1710FB071(&(Global_110A8.f_8B[iParam0]));
						Global_110A8.f_8B[iParam0] = 0;
						Global_110A8[iParam0] = 1;
						func_443(iParam0);
						return;
					}
				}
				fVar5 = 8f;
				if (((((((((((((iParam0 == 24 || iParam0 == 25) || iParam0 == 21) || iParam0 == 22) || iParam0 == 23) || iParam0 == 26) || iParam0 == 29) || iParam0 == 32) || iParam0 == 27) || iParam0 == 30) || iParam0 == 33) || iParam0 == 28) || iParam0 == 31) || iParam0 == 34)
				{
					fVar5 = 20f;
				}
				if ((unk_0xFA30DFD0084E92FE(uLocal_48[iParam0], 1) && unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(Global_110A8.f_8B[iParam0], true), vLocal_50[iParam0 /*3*/], true) > fVar5) || (!unk_0xFA30DFD0084E92FE(uLocal_48[iParam0], 1) && unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(Global_110A8.f_8B[iParam0], true), Local_131, true) > fVar5))
				{
					func_444("No longer needed: Vehicle has been moved");
					if (((iParam0 == 24 && !func_63(Global_110A8.f_8B[iParam0])) && !func_62(Global_110A8.f_8B[iParam0])) && unk_0x6F79ECA8C83E4357(Global_110A8.f_8B[iParam0]) != joaat("monster"))
					{
						unk_0x2487C8A04B65E2BD(Global_110A8.f_8B[iParam0], true);
					}
					unk_0x1E7A09C1710FB071(&(Global_110A8.f_8B[iParam0]));
					Global_110A8.f_8B[iParam0] = 0;
					Global_110A8[iParam0] = 1;
					func_443(iParam0);
					return;
				}
				if (!func_67(iParam0, 0))
				{
					func_444("No longer needed: Vehicle gen no longer available");
					if (((iParam0 == 24 && !func_63(Global_110A8.f_8B[iParam0])) && !func_62(Global_110A8.f_8B[iParam0])) && unk_0x6F79ECA8C83E4357(Global_110A8.f_8B[iParam0]) != joaat("monster"))
					{
						unk_0x2487C8A04B65E2BD(Global_110A8.f_8B[iParam0], true);
					}
					unk_0x1E7A09C1710FB071(&(Global_110A8.f_8B[iParam0]));
					Global_110A8.f_8B[iParam0] = 0;
					Global_110A8[iParam0] = 1;
					func_443(iParam0);
					return;
				}
				if (iParam0 == 24)
				{
					if ((func_47(Global_110A8.f_8B[iParam0], iLocal_129, 1) && !func_63(Global_110A8.f_8B[iParam0])) && !func_62(Global_110A8.f_8B[iParam0]))
					{
						func_444("No longer needed: Mission vehicle gen moved to players garage");
						if (unk_0x6F79ECA8C83E4357(Global_110A8.f_8B[iParam0]) != joaat("monster"))
						{
							unk_0x2487C8A04B65E2BD(Global_110A8.f_8B[iParam0], true);
						}
						Global_110A8.f_8B[iParam0] = 0;
						Global_110A8[iParam0] = 1;
						func_443(iParam0);
						return;
					}
				}
				if (fLocal_152[iParam0] > fVar0 && (!unk_0xFA30DFD0084E92FE(uLocal_48[iParam0], 1) || fVar2 > fVar0))
				{
					if (iParam0 == 24)
					{
						iVar6 = func_50();
						iVar7 = Global_19B04.f_7F22.f_12C1;
						func_441(&iVar7, 0, 0, 17, 0, 0, 0);
						if (func_352(iVar6, iVar7))
						{
							if ((!func_63(Global_110A8.f_8B[iParam0]) && !func_62(Global_110A8.f_8B[iParam0])) && unk_0x6F79ECA8C83E4357(Global_110A8.f_8B[iParam0]) != joaat("monster"))
							{
								unk_0x2487C8A04B65E2BD(Global_110A8.f_8B[iParam0], true);
							}
							func_31(Global_110A8.f_8B[iParam0], Global_19B04.f_7F22.f_15D7);
							Global_110A8[iParam0] = 1;
							func_443(iParam0);
						}
						else if (func_37(Global_110A8.f_8B[iParam0]))
						{
							func_32(Global_110A8.f_8B[iParam0], &Global_2585FD);
							Global_2585FC = Global_19B04.f_7F22.f_15D7;
							iLocal_170 = Global_110A8.f_8B[iParam0];
						}
					}
					func_444("No longer needed: Player out for range");
					unk_0x1E7A09C1710FB071(&(Global_110A8.f_8B[iParam0]));
					unk_0x6C5F5B5F6894CCE3(Local_131, 3f, 0, 0, 0, false);
					unk_0xEDAD35A0D81ED3FB(Local_131, 3f, 0, 0, 0, 0, false, 0);
					Global_110A8.f_8B[iParam0] = 0;
					if (((iParam0 == 0 && iLocal_129 == 0) || (iParam0 == 6 && iLocal_129 == 2)) || (iParam0 == 2 && iLocal_129 == 1))
					{
						Global_110A8.f_248 = { Local_131 };
						Global_110A8.f_24B = { 0f, 0f, 0f };
					}
					return;
				}
				if (unk_0xFA30DFD0084E92FE(Local_131.f_9, 30))
				{
					if (!unk_0xFA30DFD0084E92FE(Local_131.f_9, 31))
					{
						if (!unk_0x8B2EFFDCF3FE7E80(Global_110A8.f_8B[iParam0]) && !unk_0xE7E55F7532DEE345(Global_110A8.f_8B[iParam0]))
						{
							vVar8 = { unk_0x541C2AEF053615BC(Global_110A8.f_8B[iParam0], true) };
							if (vVar8.z >= func_440(iParam0))
							{
								unk_0x625842570605740F(Global_110A8.f_8B[iParam0], true);
								unk_0xF0059F27F7BB6680(&(Local_131.f_9), 31);
							}
						}
					}
				}
			}
			return;
		}
	}
	else
	{
		Global_110A8.f_8B[iParam0] = 0;
	}
	if (unk_0x724D816EA203A79E(Global_110A8.f_8B[iParam0]))
	{
		func_444("No longer needed: Vehicle not driveable");
		unk_0x1E7A09C1710FB071(&(Global_110A8.f_8B[iParam0]));
		Global_110A8.f_8B[iParam0] = 0;
		Global_110A8[iParam0] = 1;
		func_443(iParam0);
		return;
	}
	if (unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		return;
	}
	if (Global_11433 == iParam0)
	{
		func_444("Processing a vehgen vehicle handover request.");
		if (unk_0x724D816EA203A79E(Global_11432) && unk_0xE59B7F5A03335350(Global_11432, 0))
		{
			if (unk_0x724D816EA203A79E(Global_110A8.f_8B[iParam0]) && unk_0xE59B7F5A03335350(Global_110A8.f_8B[iParam0], 0))
			{
				if (Global_110A8.f_8B[iParam0] == Global_11432)
				{
					func_444("Vehicle to be handed over is the same vehicle.");
					Global_11433 = -1;
					Global_11432 = 0;
					return;
				}
				else
				{
					func_444("No longer needed: Ready to accept handover vehicle.");
					if (((iParam0 == 24 && !func_63(Global_110A8.f_8B[iParam0])) && !func_62(Global_110A8.f_8B[iParam0])) && unk_0x6F79ECA8C83E4357(Global_110A8.f_8B[iParam0]) != joaat("monster"))
					{
						unk_0x2487C8A04B65E2BD(Global_110A8.f_8B[iParam0], true);
					}
					unk_0x1E7A09C1710FB071(&(Global_110A8.f_8B[iParam0]));
					Global_110A8.f_8B[iParam0] = 0;
				}
			}
			Global_110A8.f_8B[iParam0] = Global_11432;
			Global_110A8[iParam0] = 1;
			unk_0x7CB6FD92BE491AD9(&(uLocal_48[iParam0]), 0);
			unk_0xF0059F27F7BB6680(&(uLocal_48[iParam0]), 1);
			unk_0x7CB6FD92BE491AD9(&(uLocal_48[iParam0]), 3);
			vLocal_50[iParam0 /*3*/] = { unk_0x541C2AEF053615BC(Global_11432, true) };
			Global_11433 = -1;
			if (unk_0xFA30DFD0084E92FE(Local_131.f_9, 10))
			{
				Var9.f_9 = 49;
				Var9.f_3B = 2;
				func_32(Global_11432, &Var9);
				if (Global_11434)
				{
					func_113(iParam0, &Var9, unk_0x541C2AEF053615BC(Global_11432, true), unk_0x349C94FFF43E2979(Global_11432), func_46(Global_11432));
				}
				else
				{
					func_113(iParam0, &Var9, Global_19B04.f_7F22.f_748[Local_131.f_E /*3*/], Global_19B04.f_7F22.f_78E[Local_131.f_E], func_46(Global_11432));
				}
				Global_110A8.f_8B[iParam0] = Global_11432;
				Global_110A8.f_1E4[iParam0] = Global_110A8.f_8B[iParam0];
			}
			if (iParam0 == 25)
			{
				iVar10 = func_457();
				if (func_25(iVar10))
				{
					func_444("Players stored switch vehicle cleared for prep getaway.");
					Global_16A33[iVar10] = 0;
				}
			}
			unk_0x77815D3407C6700D(Global_110A8.f_8B[iParam0], true, 1);
			if (iParam0 == 24)
			{
				unk_0x2487C8A04B65E2BD(Global_110A8.f_8B[iParam0], false);
			}
			Global_11432 = 0;
			if (Global_2585FD.f_42 != 0)
			{
				func_273(&Global_2585FD, Global_2585FC);
				Global_2585FD.f_42 = 0;
			}
			return;
		}
		if (Global_2585FD.f_42 != 0)
		{
			func_273(&Global_2585FD, Global_2585FC);
			Global_2585FD.f_42 = 0;
		}
		func_444("Vehicle to be handed over doesn't exist.");
		Global_11433 = -1;
		Global_11432 = 0;
	}
	if (Global_110A8[iParam0])
	{
		if (fLocal_152[iParam0] >= fVar0)
		{
			Global_110A8[iParam0] = 0;
			func_444("Leave area flag cleared");
		}
		if (((iParam0 == 0 && iLocal_129 == 0) || (iParam0 == 6 && iLocal_129 == 2)) || (iParam0 == 2 && iLocal_129 == 1))
		{
			Global_110A8.f_248 = { 0f, 0f, 0f };
			Global_110A8.f_24B = { 0f, 0f, 0f };
		}
		return;
	}
	bVar11 = false;
	if (fLocal_152[iParam0] > fVar1)
	{
		if (((((iParam0 == 24 && Global_19B04.f_7F22.f_7A6[Local_131.f_E] != 0) && Global_19B04.f_7F22.f_7A6[Local_131.f_E] > 3) && Local_131.f_4 != 0) && func_67(iParam0, 0)) && func_39(Local_131.f_4, 0))
		{
			iVar12 = func_50();
			iVar13 = Global_19B04.f_7F22.f_12C1;
			func_441(&iVar13, 0, 0, 17, 0, 0, 0);
			if (func_352(iVar12, iVar13))
			{
				func_273(&(Global_19B04.f_7F22.f_45[Local_131.f_E /*78*/]), Global_19B04.f_7F22.f_15D7);
				func_443(iParam0);
				Global_110A8[iParam0] = 1;
				func_444("Cannot be created: Vehicle ready for impound");
				Global_2585FD.f_42 = 0;
				return;
			}
		}
		if (((iParam0 == 0 && iLocal_129 == 0) || (iParam0 == 6 && iLocal_129 == 2)) || (iParam0 == 2 && iLocal_129 == 1))
		{
			bVar11 = true;
		}
		else
		{
			return;
		}
	}
	if (((iParam0 == 0 && iLocal_129 == 0) || (iParam0 == 6 && iLocal_129 == 2)) || (iParam0 == 2 && iLocal_129 == 1))
	{
		Global_110A8.f_248 = { 0f, 0f, 0f };
		Global_110A8.f_24B = { 0f, 0f, 0f };
	}
	if (Local_131.f_4 == 0)
	{
		Global_110A8[iParam0] = 1;
		func_444("Cannot be created: Dummy model");
		return;
	}
	if (!func_39(Local_131.f_4, 0))
	{
		Global_110A8[iParam0] = 1;
		func_444("Cannot be created: Vehicle gen model is no longer installed");
		return;
	}
	if (!func_67(iParam0, 0))
	{
		Global_110A8[iParam0] = 1;
		func_444("Cannot be created: Vehicle gen not available");
		return;
	}
	if (unk_0xFA30DFD0084E92FE(Local_131.f_9, 14) && !func_67(iParam0, 5))
	{
		Global_110A8[iParam0] = 1;
		func_444("Cannot be created: Vehicle gen not purchased");
		return;
	}
	if ((((func_439() && func_438(0)) && iParam0 != 24) && iParam0 != 25) && iParam0 != 35)
	{
		Global_110A8[iParam0] = 1;
		func_444("Cannot be created: Vehicle gens blocked on mission");
		return;
	}
	if (!bLocal_130)
	{
		Global_110A8[iParam0] = 1;
		func_444("Cannot be created: Player character not valid");
		return;
	}
	if (unk_0xFA30DFD0084E92FE(Local_131.f_9, 10))
	{
		if (unk_0x724D816EA203A79E(Global_110A8.f_1E4[iParam0]))
		{
			Global_110A8[iParam0] = 1;
			func_444("Cannot be created: Previous dyanmic vehicle still exists");
			return;
		}
		else
		{
			Global_110A8.f_1E4[iParam0] = 0;
		}
	}
	if (unk_0xFA30DFD0084E92FE(Local_131.f_9, 6))
	{
		if (func_437(Local_131.f_4, -1))
		{
			Global_110A8[iParam0] = 1;
			func_444("Cannot be created: Same vehicle model found nearby player");
			return;
		}
		if (func_436(Local_131.f_4, -1))
		{
			Global_110A8[iParam0] = 1;
			func_444("Cannot be created: Same vehicle model found nearby gen location");
			return;
		}
	}
	if (unk_0xFA30DFD0084E92FE(Local_131.f_9, 29))
	{
		if (Local_56.f_3 == 0)
		{
			return;
		}
	}
	if (func_435(iParam0))
	{
		Global_110A8[iParam0] = 1;
		func_444("Cannot be created: Vehgen+model specific checks failed");
		return;
	}
	if (unk_0x7930B3E9C919E90F() && unk_0xFAB96FF5BAB29092() == 3)
	{
		if ((iParam0 == 12 || iParam0 == 13) || iParam0 == 14)
		{
			Global_110A8[iParam0] = 1;
			func_444("Cannot be created: Short range switch in progress");
			return;
		}
	}
	iVar14 = 0;
	if (unk_0xFA30DFD0084E92FE(Local_131.f_9, 19))
	{
		iVar14 = 2;
	}
	else if (unk_0xFA30DFD0084E92FE(Local_131.f_9, 20))
	{
		iVar14 = 1;
	}
	if ((iParam0 == 24 && Global_19B04.f_7F22.f_7A6[Local_131.f_E] > 0) && Global_19B04.f_7F22.f_7A6[Local_131.f_E] <= 3)
	{
		if (unk_0x7512ED01F3F46714(Local_131.f_4))
		{
			iVar14 = 2;
			Local_131.f_C = (Global_19B04.f_7F22.f_7A6[Local_131.f_E] - 1);
		}
		else if (unk_0x7C28D15641461C68(Local_131.f_4))
		{
			iVar14 = 1;
			Local_131.f_C = (Global_19B04.f_7F22.f_7A6[Local_131.f_E] - 1);
		}
	}
	if (iVar14 != 0)
	{
		if (func_434(Local_131.f_C, iVar14, Local_131, -1f))
		{
			Global_110A8[iParam0] = 1;
			func_444("Cannot be created: Same player vehicle found nearby gen location");
			if (iParam0 == 24)
			{
				func_463(iParam0, 0);
			}
			return;
		}
		if (unk_0xFA30DFD0084E92FE(Local_131.f_9, 19) || unk_0xFA30DFD0084E92FE(Local_131.f_9, 20))
		{
			if (iVar14 == 2)
			{
				if (Global_1616F[Local_131.f_C /*3*/][1] != -1 && (unk_0x105601648511CC64() - Global_1616F[Local_131.f_C /*3*/][1]) < unk_0x5BEE008DE1E4AA67() * 180)
				{
					Global_110A8[iParam0] = 1;
					func_444("Cannot be created: Same player vehicle cleaned up within the last 3 hours");
					StringCopy(&vVar15, "...", 24);
					StringIntConCat(&vVar15, ((unk_0x5BEE008DE1E4AA67() * 180 - (unk_0x105601648511CC64() - Global_1616F[Local_131.f_C /*3*/][1])) / 1000), 24);
					StringConCat(&vVar15, " seconds", 24);
					func_444(&vVar15);
					return;
				}
			}
			else if (iVar14 == 1)
			{
				if (Global_1616F[Local_131.f_C /*3*/][0] != -1 && (unk_0x105601648511CC64() - Global_1616F[Local_131.f_C /*3*/][0]) < unk_0x5BEE008DE1E4AA67() * 180)
				{
					Global_110A8[iParam0] = 1;
					func_444("Cannot be created: Same player vehicle cleaned up within the last 3 hours");
					StringCopy(&vVar16, "...", 24);
					StringIntConCat(&vVar16, ((unk_0x5BEE008DE1E4AA67() * 180 - (unk_0x105601648511CC64() - Global_1616F[Local_131.f_C /*3*/][1])) / 1000), 24);
					StringConCat(&vVar16, " seconds", 24);
					func_444(&vVar16);
					return;
				}
			}
		}
	}
	if (((iParam0 == 0 && iLocal_129 == 0) || (iParam0 == 6 && iLocal_129 == 2)) || (iParam0 == 2 && iLocal_129 == 1))
	{
		Global_110A8.f_248 = { Local_131 };
	}
	if (bVar11)
	{
		return;
	}
	if (iVar14 != 0)
	{
		iLocal_49[iParam0] = func_23(Local_131.f_C, iVar14);
		unk_0xF243B7A14FCFD0F4(iLocal_49[iParam0]);
		unk_0xF0059F27F7BB6680(&(uLocal_48[iParam0]), 2);
		if (!unk_0xD6513D668481290A(iLocal_49[iParam0]))
		{
			func_444("Cannot be created: Waiting for player vehicle model to load");
			return;
		}
		if (func_433(iLocal_49[iParam0], Local_131, 1))
		{
			func_444("Cannot be created: Player is too close to spawn position (default vehicle type)");
			return;
		}
		unk_0x6C5F5B5F6894CCE3(Local_131, 3f, 0, 0, 0, false);
		unk_0xEDAD35A0D81ED3FB(Local_131, 3f, 0, 0, 0, 0, false, 0);
		if (iVar14 == 2)
		{
			func_428(&(Global_110A8.f_8B[iParam0]), Local_131.f_C, Local_131, Local_131.f_3, 0, 2);
		}
		else if (iVar14 == 1)
		{
			func_428(&(Global_110A8.f_8B[iParam0]), Local_131.f_C, Local_131, Local_131.f_3, 0, 1);
		}
		else
		{
			Global_110A8[iParam0] = 1;
			func_444("Cannot be created: Invalid player vehicle type specified");
			return;
		}
	}
	else
	{
		unk_0xF243B7A14FCFD0F4(Local_131.f_4);
		iLocal_49[iParam0] = Local_131.f_4;
		unk_0xF0059F27F7BB6680(&(uLocal_48[iParam0]), 2);
		if (!unk_0xD6513D668481290A(Local_131.f_4))
		{
			func_444("Cannot be created: Waiting for model to load");
			return;
		}
		if (func_433(Local_131.f_4, Local_131, 1))
		{
			func_444("Cannot be created: Player is too close to spawn position (specific vehicle type)");
			return;
		}
		unk_0x6C5F5B5F6894CCE3(Local_131, 3f, 0, 0, 0, false);
		unk_0xEDAD35A0D81ED3FB(Local_131, 3f, 0, 0, 0, 0, false, 0);
		if (unk_0xFA30DFD0084E92FE(Local_131.f_9, 23))
		{
			unk_0xAEF1F12C42859E39(Local_131);
		}
		if ((iParam0 == 15 || iParam0 == 16) || iParam0 == 17)
		{
			if (Local_131.f_4 == joaat("submersible2"))
			{
				Local_131.f_2 = -3f;
			}
		}
		Global_110A8.f_8B[iParam0] = unk_0x61C05BF08A1E0EFE(Local_131.f_4, Local_131, Local_131.f_3, true, true, false);
		if (unk_0xFA30DFD0084E92FE(Local_131.f_9, 10))
		{
			if (unk_0xA19D269B4B5A1532(Local_131.f_4))
			{
				unk_0xF0059F27F7BB6680(&(Global_19B04.f_7F22.f_45[Local_131.f_E /*78*/].f_4D), 22);
			}
			if (unk_0xFA30DFD0084E92FE(Global_19B04.f_7F22.f_45[Local_131.f_E /*78*/].f_4D, 14))
			{
				func_32(Global_110A8.f_8B[iParam0], &Local_141);
				func_427(Local_141.f_4D, &(Global_19B04.f_7F22.f_45[Local_131.f_E /*78*/].f_4D), Local_131.f_4);
				unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_7F22.f_45[Local_131.f_E /*78*/].f_4D), 14);
			}
			func_365(Global_110A8.f_8B[iParam0], &(Global_19B04.f_7F22.f_45[Local_131.f_E /*78*/]), 0, 1);
			Global_110A8.f_1E4[iParam0] = Global_110A8.f_8B[iParam0];
		}
		else
		{
			if (unk_0xFA30DFD0084E92FE(Local_131.f_9, 9))
			{
				unk_0x914C5DE0B15B8B59(Global_110A8.f_8B[iParam0], Local_131.f_A, Local_131.f_B);
			}
			if (unk_0xFA30DFD0084E92FE(Local_131.f_9, 8))
			{
				unk_0xD421BC740C5340C3(Global_110A8.f_8B[iParam0], 2);
				unk_0xA9B952D290D440DC(Global_110A8.f_8B[iParam0], false);
				unk_0xE4F4552195F606F3(Global_110A8.f_8B[iParam0], 0);
				unk_0x156B8835BE8B6B6C(Global_110A8.f_8B[iParam0], false);
				unk_0xE365C09E06B55C51(Global_110A8.f_8B[iParam0], false);
				unk_0x7387EA04915F201E(Global_110A8.f_8B[iParam0], false);
				unk_0xE82050D41B744FF3(Global_110A8.f_8B[iParam0], false);
				unk_0x1E5C2A1EAB944289(Global_110A8.f_8B[iParam0], true);
				unk_0x346478B12F69D4E3(Global_110A8.f_8B[iParam0], true);
			}
		}
	}
	if (unk_0x724D816EA203A79E(Global_110A8.f_8B[iParam0]))
	{
		func_426("Created - Coords: ", Local_131);
		func_425("Created - Dist From Player:", fLocal_152[iParam0]);
		if (((iParam0 == 0 && iLocal_129 == 0) || (iParam0 == 6 && iLocal_129 == 2)) || (iParam0 == 2 && iLocal_129 == 1))
		{
			Global_110A8.f_248 = { 0f, 0f, 0f };
		}
		switch (Local_131.f_4)
		{
			case joaat("miljet"):
				unk_0x914C5DE0B15B8B59(Global_110A8.f_8B[iParam0], 121, 21);
				unk_0x4C59702AC1076A88(Global_110A8.f_8B[iParam0], 8, 156);
				break;
			
			case joaat("besra"):
				unk_0x914C5DE0B15B8B59(Global_110A8.f_8B[iParam0], 122, 89);
				unk_0x4C59702AC1076A88(Global_110A8.f_8B[iParam0], 25, 121);
				break;
			
			case joaat("buzzard"):
			case joaat("buzzard2"):
				unk_0x914C5DE0B15B8B59(Global_110A8.f_8B[iParam0], 0, 0);
				unk_0x4C59702AC1076A88(Global_110A8.f_8B[iParam0], 5, 156);
				break;
			
			case joaat("dukes2"):
				break;
			
			case joaat("rhino"):
				unk_0x914C5DE0B15B8B59(Global_110A8.f_8B[iParam0], 131, 132);
				unk_0x4C59702AC1076A88(Global_110A8.f_8B[iParam0], 132, 156);
				break;
			
			case joaat("luxor2"):
			case joaat("swift2"):
				unk_0x914C5DE0B15B8B59(Global_110A8.f_8B[iParam0], 159, 0);
				unk_0x4C59702AC1076A88(Global_110A8.f_8B[iParam0], 160, 156);
				break;
		}
		if (unk_0xFA30DFD0084E92FE(Local_131.f_9, 22))
		{
			unk_0x625842570605740F(Global_110A8.f_8B[iParam0], true);
		}
		if (unk_0xFA30DFD0084E92FE(Local_131.f_9, 30))
		{
			unk_0x7CB6FD92BE491AD9(&(Local_131.f_9), 31);
		}
		if (unk_0xFA30DFD0084E92FE(Local_131.f_9, 26))
		{
			unk_0xD421BC740C5340C3(Global_110A8.f_8B[iParam0], 7);
			unk_0xEC6E535291C98050(Global_110A8.f_8B[iParam0], 1);
		}
		func_424(Global_110A8.f_8B[iParam0], iParam0);
		if (!unk_0xFA30DFD0084E92FE(Local_131.f_9, 29) && !unk_0xFA30DFD0084E92FE(Local_131.f_9, 30))
		{
			unk_0xF0A40F19AAB79E88(Global_110A8.f_8B[iParam0], 1084227584);
		}
		unk_0x55AFEE10B3CE5C2C(Global_110A8.f_8B[iParam0], 0f);
		unk_0x656194E145691D3E(Global_110A8.f_8B[iParam0], true);
		unk_0x2487C8A04B65E2BD(Global_110A8.f_8B[iParam0], unk_0xFA30DFD0084E92FE(Local_131.f_9, 5));
	}
	unk_0x7CB6FD92BE491AD9(&(uLocal_48[iParam0]), 0);
	unk_0x7CB6FD92BE491AD9(&(uLocal_48[iParam0]), 1);
	Global_110A8[iParam0] = 1;
	if (iVar14 != 0)
	{
		Global_110A8.f_45[iParam0] = 1;
	}
	iVar17 = func_166(458, -1, -1);
	if (iVar17 != 0 && iVar17 == iParam0)
	{
		iLocal_169 = Global_110A8.f_8B[iParam0];
	}
	if (iParam0 == 24)
	{
		Global_2585FD.f_42 = 0;
	}
}

void func_424(int iParam0, int iParam1)//Position - 0x29E15
{
	if (unk_0x724D816EA203A79E(iParam0) && unk_0xE59B7F5A03335350(iParam0, 0))
	{
		switch (iParam1)
		{
			case 36:
				unk_0xD75C62D3076EC399(iParam0, -0.84f, 2.21f, 0.22f, 100f, 400f, 1);
				unk_0xD75C62D3076EC399(iParam0, 0.67f, 2.12f, -0.06f, 100f, 400f, 1);
				unk_0xD75C62D3076EC399(iParam0, 0.05f, 1.97f, 0.2f, 100f, 400f, 1);
				break;
			
			case 35:
				unk_0xE54F7105CEA81918(iParam0, 6, false);
				unk_0xE54F7105CEA81918(iParam0, 1, true);
				break;
			}
	}
}

void func_425(char* sParam0, float fParam1)//Position - 0x29EBB
{
	if (!unk_0xF1734B55490E9045(sParam0))
	{
		if (fParam1 != 0f)
		{
		}
	}
}

void func_426(char* sParam0, float fParam1, var uParam2, var uParam3)//Position - 0x29ED4
{
	if (!unk_0xF1734B55490E9045(sParam0))
	{
		if (fParam1 != 0f)
		{
		}
	}
}

void func_427(var uParam0, var uParam1, int iParam2)//Position - 0x29EED
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2147483647;
	switch (iParam2)
	{
		case joaat("coquette2"):
			unk_0x7CB6FD92BE491AD9(&iVar0, 0);
			unk_0x7CB6FD92BE491AD9(&iVar0, 1);
			break;
		
		case joaat("kalahari"):
			unk_0x7CB6FD92BE491AD9(&iVar0, 0);
			unk_0x7CB6FD92BE491AD9(&iVar0, 1);
			unk_0x7CB6FD92BE491AD9(&iVar0, 2);
			break;
		
		case joaat("voltic"):
			unk_0x7CB6FD92BE491AD9(&iVar0, 0);
			unk_0x7CB6FD92BE491AD9(&iVar0, 1);
			unk_0x7CB6FD92BE491AD9(&iVar0, 2);
			break;
		
		case joaat("banshee"):
			unk_0x7CB6FD92BE491AD9(&iVar0, 0);
			break;
		
		case joaat("stalion"):
			unk_0x7CB6FD92BE491AD9(&iVar0, 0);
			unk_0x7CB6FD92BE491AD9(&iVar0, 1);
			unk_0x7CB6FD92BE491AD9(&iVar0, 2);
			break;
		
		case joaat("chino"):
			unk_0x7CB6FD92BE491AD9(&iVar0, 0);
			unk_0x7CB6FD92BE491AD9(&iVar0, 1);
			unk_0x7CB6FD92BE491AD9(&iVar0, 2);
			break;
	}
	iVar1 = (2147483647 - iVar0);
	iVar0 = (iVar0 && uParam0);
	iVar1 = (*uParam1 && iVar1);
	*uParam1 = (iVar0 || iVar1);
}

int func_428(int iParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4, int iParam5)//Position - 0x29FC3
{
	int iVar0;
	var uVar1;
	struct<97> Var2;
	int iVar3;
	int iVar4;
	bool bVar5;
	char cVar6[16];
	int iVar7;
	
	if (func_25(iParam1))
	{
		Var2.f_B = 12;
		Var2.f_1F = 49;
		Var2.f_51 = 2;
		func_24(iParam1, &Var2, iParam5);
		if (Var2 == 0)
		{
			return 1;
		}
		if (unk_0x724D816EA203A79E(*iParam0))
		{
			if (unk_0x6F79ECA8C83E4357(*iParam0) != Var2)
			{
			}
			return 1;
		}
		if ((iParam1 == 0 && !Global_19B04.f_932.f_21B.f_10C8) && Global_19B04.f_2360.f_63.f_3A[131])
		{
			Global_19B04.f_932.f_21B.f_953[0 /*295*/][iParam1 /*98*/] = 0;
		}
		if (Global_19B04.f_932.f_21B.f_953[0 /*295*/][iParam1 /*98*/] == Var2)
		{
			unk_0xF243B7A14FCFD0F4(Global_19B04.f_932.f_21B.f_953[0 /*295*/][iParam1 /*98*/]);
			if (unk_0xD6513D668481290A(Global_19B04.f_932.f_21B.f_953[0 /*295*/][iParam1 /*98*/]))
			{
				*iParam0 = unk_0x61C05BF08A1E0EFE(Global_19B04.f_932.f_21B.f_953[0 /*295*/][iParam1 /*98*/], vParam2, fParam3, false, false, false);
				unk_0xF0A40F19AAB79E88(*iParam0, 1084227584);
				unk_0x551DF575AE9A2969(*iParam0, 0);
				unk_0x2487C8A04B65E2BD(*iParam0, false);
				unk_0xA73D1278857991A2(*iParam0, true);
				unk_0x65E471E4A2D56226(*iParam0, 1250, 0);
				unk_0xE6E403909F4BF47F(*iParam0, 1250f);
				unk_0xD3F329A16C0E5B2B(*iParam0, 1250f);
				Var2.f_3 = 1250;
				unk_0x914C5DE0B15B8B59(*iParam0, Global_19B04.f_932.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_5, Global_19B04.f_932.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_6);
				unk_0x4C59702AC1076A88(*iParam0, Global_19B04.f_932.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_7, Global_19B04.f_932.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_8);
				unk_0x55AFEE10B3CE5C2C(*iParam0, Var2.f_2);
				iVar3 = 0;
				while (iVar3 < 12)
				{
					unk_0xE54F7105CEA81918(*iParam0, iVar3 + 1, !Global_19B04.f_932.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_B[iVar3]);
					iVar3++;
				}
				if (Global_19B04.f_932.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_18)
				{
					unk_0x761268F52DF5D5D9(*iParam0, Global_19B04.f_932.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_18);
				}
				if (func_432(&uVar1, &iVar0))
				{
					unk_0xEA0AB6C644C58C1D(*iParam0, &uVar1);
					unk_0x5EDEB04A454C1C0C(*iParam0, iVar0);
				}
				else
				{
					unk_0xEA0AB6C644C58C1D(*iParam0, &(Global_19B04.f_932.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_1B));
					if (Global_19B04.f_932.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_1A >= 0 && Global_19B04.f_932.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_1A < unk_0xECE72A06BBAC88B0())
					{
						unk_0x5EDEB04A454C1C0C(*iParam0, Global_19B04.f_932.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_1A);
					}
				}
				unk_0x05D05A0BAA6CA8B1(*iParam0, Global_19B04.f_932.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_54, Global_19B04.f_932.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_55, Global_19B04.f_932.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_56);
				unk_0xE82050D41B744FF3(*iParam0, Global_19B04.f_932.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_58);
				unk_0x84A3F4F29630A320(*iParam0, Global_19B04.f_932.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_57);
				unk_0x13CA55A989DEB72C(*iParam0, Global_19B04.f_932.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_5D, Global_19B04.f_932.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_5E, Global_19B04.f_932.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_5F);
				unk_0x200ACC5C718FF287(*iParam0, 2, unk_0xFA30DFD0084E92FE(Global_19B04.f_932.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_5C, 28));
				unk_0x200ACC5C718FF287(*iParam0, 3, unk_0xFA30DFD0084E92FE(Global_19B04.f_932.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_5C, 29));
				unk_0x200ACC5C718FF287(*iParam0, 0, unk_0xFA30DFD0084E92FE(Global_19B04.f_932.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_5C, 30));
				unk_0x200ACC5C718FF287(*iParam0, 1, unk_0xFA30DFD0084E92FE(Global_19B04.f_932.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_5C, 31));
				if (unk_0x294CD98C461C2594(*iParam0) > 1 && Global_19B04.f_932.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_59 >= 0)
				{
					unk_0x7170EF3CEB4D0224(*iParam0, Global_19B04.f_932.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_59);
				}
				if (Global_19B04.f_932.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_5A > -1)
				{
					if (!unk_0x2B4DE5C0D509B0F9(unk_0x6F79ECA8C83E4357(*iParam0)))
					{
						if (unk_0x7512ED01F3F46714(unk_0x6F79ECA8C83E4357(*iParam0)))
						{
							if (Global_19B04.f_932.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_5A == 6)
							{
								unk_0xD2F70373DBF15801(*iParam0, Global_19B04.f_932.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_5A);
							}
						}
						else
						{
							unk_0xD2F70373DBF15801(*iParam0, Global_19B04.f_932.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_5A);
						}
					}
				}
				func_366(iParam0, &(Global_19B04.f_932.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_1F), &(Global_19B04.f_932.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_51));
				unk_0x0C95DC9BB0F56943(*iParam0, Var2.f_60);
				if (iParam1 == 2)
				{
					if (unk_0x6F79ECA8C83E4357(*iParam0) == joaat("bodhi2"))
					{
						func_430(iParam0);
					}
				}
				if (bParam4)
				{
					unk_0x2CA123B0622F495C(Global_19B04.f_932.f_21B.f_953[0 /*295*/][iParam1 /*98*/]);
				}
				func_429(*iParam0, iParam1);
				return 1;
			}
		}
		else if (Global_19B04.f_932.f_21B.f_953[1 /*295*/][iParam1 /*98*/] == Var2)
		{
			unk_0xF243B7A14FCFD0F4(Global_19B04.f_932.f_21B.f_953[1 /*295*/][iParam1 /*98*/]);
			if (unk_0xD6513D668481290A(Global_19B04.f_932.f_21B.f_953[1 /*295*/][iParam1 /*98*/]))
			{
				*iParam0 = unk_0x61C05BF08A1E0EFE(Global_19B04.f_932.f_21B.f_953[1 /*295*/][iParam1 /*98*/], vParam2, fParam3, false, false, false);
				unk_0xF0A40F19AAB79E88(*iParam0, 1084227584);
				unk_0x551DF575AE9A2969(*iParam0, 0);
				unk_0x2487C8A04B65E2BD(*iParam0, false);
				unk_0xA73D1278857991A2(*iParam0, true);
				unk_0x65E471E4A2D56226(*iParam0, 1250, 0);
				unk_0xE6E403909F4BF47F(*iParam0, 1250f);
				unk_0xD3F329A16C0E5B2B(*iParam0, 1250f);
				Var2.f_3 = 1250;
				unk_0x914C5DE0B15B8B59(*iParam0, Global_19B04.f_932.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_5, Global_19B04.f_932.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_6);
				unk_0x4C59702AC1076A88(*iParam0, Global_19B04.f_932.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_7, Global_19B04.f_932.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_8);
				unk_0x55AFEE10B3CE5C2C(*iParam0, Var2.f_2);
				iVar4 = 0;
				while (iVar4 < 12)
				{
					unk_0xE54F7105CEA81918(*iParam0, iVar4 + 1, !Global_19B04.f_932.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_B[iVar4]);
					iVar4++;
				}
				if (Global_19B04.f_932.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_18)
				{
					unk_0x761268F52DF5D5D9(*iParam0, Global_19B04.f_932.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_18);
				}
				if (func_432(&uVar1, &iVar0))
				{
					unk_0xEA0AB6C644C58C1D(*iParam0, &uVar1);
					unk_0x5EDEB04A454C1C0C(*iParam0, iVar0);
				}
				else
				{
					unk_0xEA0AB6C644C58C1D(*iParam0, &(Global_19B04.f_932.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_1B));
					if (Global_19B04.f_932.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_1A >= 0 && Global_19B04.f_932.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_1A < unk_0xECE72A06BBAC88B0())
					{
						unk_0x5EDEB04A454C1C0C(*iParam0, Global_19B04.f_932.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_1A);
					}
				}
				unk_0x05D05A0BAA6CA8B1(*iParam0, Global_19B04.f_932.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_54, Global_19B04.f_932.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_55, Global_19B04.f_932.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_56);
				unk_0xE82050D41B744FF3(*iParam0, Global_19B04.f_932.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_58);
				unk_0x84A3F4F29630A320(*iParam0, Global_19B04.f_932.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_57);
				unk_0x13CA55A989DEB72C(*iParam0, Global_19B04.f_932.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_5D, Global_19B04.f_932.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_5E, Global_19B04.f_932.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_5F);
				unk_0x200ACC5C718FF287(*iParam0, 2, unk_0xFA30DFD0084E92FE(Global_19B04.f_932.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_5C, 28));
				unk_0x200ACC5C718FF287(*iParam0, 3, unk_0xFA30DFD0084E92FE(Global_19B04.f_932.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_5C, 29));
				unk_0x200ACC5C718FF287(*iParam0, 0, unk_0xFA30DFD0084E92FE(Global_19B04.f_932.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_5C, 30));
				unk_0x200ACC5C718FF287(*iParam0, 1, unk_0xFA30DFD0084E92FE(Global_19B04.f_932.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_5C, 31));
				if (unk_0x294CD98C461C2594(*iParam0) > 1 && Global_19B04.f_932.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_59 >= 0)
				{
					unk_0x7170EF3CEB4D0224(*iParam0, Global_19B04.f_932.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_59);
				}
				if (Global_19B04.f_932.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_5A > -1)
				{
					if (!unk_0x2B4DE5C0D509B0F9(unk_0x6F79ECA8C83E4357(*iParam0)))
					{
						if (unk_0x7512ED01F3F46714(unk_0x6F79ECA8C83E4357(*iParam0)))
						{
							if (Global_19B04.f_932.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_5A == 6)
							{
								unk_0xD2F70373DBF15801(*iParam0, Global_19B04.f_932.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_5A);
							}
						}
						else
						{
							unk_0xD2F70373DBF15801(*iParam0, Global_19B04.f_932.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_5A);
						}
					}
				}
				func_366(iParam0, &(Global_19B04.f_932.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_1F), &(Global_19B04.f_932.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_51));
				unk_0x0C95DC9BB0F56943(*iParam0, Var2.f_60);
				if (iParam1 == 2)
				{
					if (unk_0x6F79ECA8C83E4357(*iParam0) == joaat("bodhi2"))
					{
						func_430(iParam0);
					}
				}
				if (bParam4)
				{
					unk_0x2CA123B0622F495C(Global_19B04.f_932.f_21B.f_953[1 /*295*/][iParam1 /*98*/]);
				}
				func_429(*iParam0, iParam1);
				return 1;
			}
		}
		else
		{
			unk_0xF243B7A14FCFD0F4(Var2);
			if (unk_0xD6513D668481290A(Var2))
			{
				bVar5 = true;
				*iParam0 = unk_0x61C05BF08A1E0EFE(Var2, vParam2, fParam3, true, true, false);
				unk_0xF0A40F19AAB79E88(*iParam0, 1084227584);
				unk_0x551DF575AE9A2969(*iParam0, 0);
				unk_0x2487C8A04B65E2BD(*iParam0, false);
				unk_0xA73D1278857991A2(*iParam0, true);
				StringCopy(&cVar6, unk_0x2232934AD664DD49(*iParam0), 16);
				unk_0x65E471E4A2D56226(*iParam0, 1250, 0);
				unk_0xE6E403909F4BF47F(*iParam0, 1250f);
				unk_0xD3F329A16C0E5B2B(*iParam0, 1250f);
				Var2.f_3 = 1250;
				unk_0x914C5DE0B15B8B59(*iParam0, Var2.f_5, Var2.f_6);
				unk_0x4C59702AC1076A88(*iParam0, Var2.f_7, Var2.f_8);
				unk_0x55AFEE10B3CE5C2C(*iParam0, Var2.f_2);
				iVar7 = 0;
				while (iVar7 < 12)
				{
					unk_0xE54F7105CEA81918(*iParam0, iVar7 + 1, !Var2.f_B[iVar7]);
					iVar7++;
				}
				if (Var2.f_18)
				{
					unk_0x761268F52DF5D5D9(*iParam0, Var2.f_18);
				}
				if (func_432(&uVar1, &iVar0))
				{
					unk_0xEA0AB6C644C58C1D(*iParam0, &uVar1);
					unk_0x5EDEB04A454C1C0C(*iParam0, iVar0);
				}
				else
				{
					unk_0xEA0AB6C644C58C1D(*iParam0, &(Var2.f_1B));
					if (Var2.f_1A >= 0 && Var2.f_1A < unk_0xECE72A06BBAC88B0())
					{
						unk_0x5EDEB04A454C1C0C(*iParam0, Var2.f_1A);
					}
				}
				unk_0x05D05A0BAA6CA8B1(*iParam0, Var2.f_54, Var2.f_55, Var2.f_56);
				unk_0xE82050D41B744FF3(*iParam0, Var2.f_58);
				unk_0x84A3F4F29630A320(*iParam0, Var2.f_57);
				unk_0x13CA55A989DEB72C(*iParam0, Var2.f_5D, Var2.f_5E, Var2.f_5F);
				unk_0x200ACC5C718FF287(*iParam0, 2, unk_0xFA30DFD0084E92FE(Var2.f_5C, 28));
				unk_0x200ACC5C718FF287(*iParam0, 3, unk_0xFA30DFD0084E92FE(Var2.f_5C, 29));
				unk_0x200ACC5C718FF287(*iParam0, 0, unk_0xFA30DFD0084E92FE(Var2.f_5C, 30));
				unk_0x200ACC5C718FF287(*iParam0, 1, unk_0xFA30DFD0084E92FE(Var2.f_5C, 31));
				if (unk_0x294CD98C461C2594(*iParam0) > 1 && Var2.f_59 >= 0)
				{
					unk_0x7170EF3CEB4D0224(*iParam0, Var2.f_59);
				}
				if (Var2.f_5A > -1)
				{
					if (!unk_0x2B4DE5C0D509B0F9(unk_0x6F79ECA8C83E4357(*iParam0)))
					{
						if (unk_0x7512ED01F3F46714(unk_0x6F79ECA8C83E4357(*iParam0)))
						{
							if (Var2.f_5A == 6)
							{
								unk_0xD2F70373DBF15801(*iParam0, Var2.f_5A);
							}
						}
						else
						{
							unk_0xD2F70373DBF15801(*iParam0, Var2.f_5A);
						}
					}
				}
				func_366(iParam0, &(Var2.f_1F), &(Var2.f_51));
				unk_0x0C95DC9BB0F56943(*iParam0, Var2.f_60);
				if (iParam1 == 1)
				{
					if (unk_0x6F79ECA8C83E4357(*iParam0) == joaat("bagger") && !Global_19B04.f_2360.f_63.f_3A[118])
					{
						unk_0xEA0AB6C644C58C1D(*iParam0, &cVar6);
						bVar5 = false;
					}
				}
				else if (iParam1 == 2)
				{
					if (unk_0x6F79ECA8C83E4357(*iParam0) == joaat("bodhi2"))
					{
						func_430(iParam0);
					}
				}
				else if (((iParam1 == 0 && !Global_19B04.f_932.f_21B.f_10C8) && Global_19B04.f_2360.f_63.f_3A[131]) && unk_0x6F79ECA8C83E4357(*iParam0) == joaat("tailgater"))
				{
					unk_0x5C9F67BE33A5A3EE(*iParam0, 6, 1, false);
					unk_0x5C9F67BE33A5A3EE(*iParam0, 14, 7, false);
					unk_0x5C9F67BE33A5A3EE(*iParam0, 11, 2, false);
					unk_0x5C9F67BE33A5A3EE(*iParam0, 2, 3, false);
					unk_0x5C9F67BE33A5A3EE(*iParam0, 7, 5, false);
					unk_0x5C9F67BE33A5A3EE(*iParam0, 0, 0, false);
					unk_0x5C9F67BE33A5A3EE(*iParam0, 3, 3, false);
					unk_0x5C9F67BE33A5A3EE(*iParam0, 13, 1, false);
					unk_0x5C9F67BE33A5A3EE(*iParam0, 4, 3, false);
					unk_0x5C9F67BE33A5A3EE(*iParam0, 12, 2, false);
					unk_0xB25E25030D61B529(*iParam0, 22, true);
					unk_0xD2F70373DBF15801(*iParam0, 2);
					unk_0x5C9F67BE33A5A3EE(*iParam0, 23, 11, false);
					unk_0x84A3F4F29630A320(*iParam0, 2);
					Global_19B04.f_932.f_21B.f_10C8 = 1;
					func_225(iParam1, iParam0, 0, 1);
				}
				if (bParam4)
				{
					unk_0x2CA123B0622F495C(Var2);
				}
				if (bVar5)
				{
					func_429(*iParam0, iParam1);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_429(int iParam0, int iParam1)//Position - 0x2AE07
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!unk_0x724D816EA203A79E(Global_1613F[iVar0]))
		{
			Global_1613F[iVar0] = iParam0;
			Global_16149[iVar0] = iParam1;
			Global_16153[iVar0] = unk_0x6F79ECA8C83E4357(iParam0);
			if (unk_0x7C28D15641461C68(Global_16153[iVar0]))
			{
				Global_1616F[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_1616F[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_430(var uParam0)//Position - 0x2AE89
{
	if (!func_431(*uParam0))
	{
		unk_0xE54F7105CEA81918(*uParam0, 5, !Global_19B04.f_2360.f_63.f_3A[119]);
	}
}

bool func_431(int iParam0)//Position - 0x2AEB4
{
	return unk_0xFC8A228C62614C5C(iParam0, 5);
}

int func_432(var uParam0, int iParam1)//Position - 0x2AEC3
{
	if (unk_0x7AF0088ABFA713B6())
	{
	}
	else if (Global_19B04.f_4E79.f_105)
	{
		*uParam0 = { Global_19B04.f_4E79.f_10B };
		*iParam1 = Global_19B04.f_4E79.f_10F;
		return 1;
	}
	return 0;
}

int func_433(int iParam0, vector3 vParam1, int iParam2)//Position - 0x2AF04
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	if ((iParam2 && unk_0x17FAADF9916EF741()) && unk_0xB731B8C5BCE89836(joaat("startup_positioning")) > 0)
	{
		func_444("player is in vehicle bounds - \"startup_positioning\" is running.");
		return 0;
	}
	unk_0x2B3953EE61953843(iParam0, &vVar0, &vVar1);
	fVar2 = unk_0xF0F2FC9DE291567F(vVar1, vVar0, true);
	if (unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), vParam1, true) < (fVar2 * 0.5f))
	{
		func_425("player is in vehicle bounds - fLength: ", fVar2);
		func_425("player is in vehicle bounds - fDistance: ", unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), vParam1, true));
		return 1;
	}
	return 0;
}

int func_434(int iParam0, int iParam1, vector3 vParam2, float fParam3)//Position - 0x2AF96
{
	int iVar0;
	struct<82> Var1;
	int iVar2;
	
	if (!func_25(iParam0))
	{
		return 0;
	}
	Var1.f_B = 12;
	Var1.f_1F = 49;
	Var1.f_51 = 2;
	iVar2 = 0;
	func_24(iParam0, &Var1, iParam1);
	iVar2 = Var1;
	if (iVar2 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x724D816EA203A79E(Global_1613F[iVar0]) && unk_0xE59B7F5A03335350(Global_1613F[iVar0], 0))
			{
				if (unk_0x6F79ECA8C83E4357(Global_1613F[iVar0]) == iVar2 && Global_16149[iVar0] == iParam0)
				{
					if (fParam3 == -1f || unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(Global_1613F[iVar0], false), vParam2, true) <= fParam3)
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_435(int iParam0)//Position - 0x2B05B
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 20)
	{
		if (Local_131.f_4 == joaat("frogger2"))
		{
			if (((func_437(Local_131.f_4, -1) || func_436(Local_131.f_4, -1)) || unk_0xB731B8C5BCE89836(joaat("exile2")) > 0) || !func_420(30))
			{
				return 1;
			}
		}
	}
	if (iParam0 == 24)
	{
		if ((unk_0x724D816EA203A79E(Global_110A8.f_1E4[20]) && !unk_0x1D403DFADBC2DE3C(Global_110A8.f_1E4[20], 0)) && unk_0xE59B7F5A03335350(Global_110A8.f_1E4[20], 0))
		{
			if (Local_131.f_4 == unk_0x6F79ECA8C83E4357(Global_110A8.f_1E4[20]))
			{
				unk_0x87F182D2DA225F0D(Global_110A8.f_1E4[20], &iVar0, &iVar1);
				if (iVar0 == Local_131.f_A && iVar1 == Local_131.f_B)
				{
					func_268(20);
				}
			}
		}
	}
	return 0;
}

int func_436(int iParam0, int iParam1)//Position - 0x2B143
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2174;
	iVar1 = unk_0x39827CF9BEAB804C(Local_131, 200f, iParam0, iVar0);
	if ((unk_0x724D816EA203A79E(iVar1) && unk_0xE59B7F5A03335350(iVar1, 0)) && unk_0x6F79ECA8C83E4357(iVar1) == iParam0)
	{
		if (iParam1 == -1 || unk_0x0FF608FD384AF8FA(iVar1) == iParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_437(int iParam0, int iParam1)//Position - 0x2B1A2
{
	var uVar0[50];
	int iVar1;
	int iVar2;
	
	iVar2 = unk_0xD7F48BFEBC0E3FB2(unk_0xBC25C936A095B5BA(), &uVar0);
	iVar1 = 0;
	while (iVar1 < iVar2)
	{
		if ((unk_0x724D816EA203A79E(uVar0[iVar1]) && unk_0xE59B7F5A03335350(uVar0[iVar1], 0)) && unk_0x6F79ECA8C83E4357(uVar0[iVar1]) == iParam0)
		{
			if (iParam1 == -1 || unk_0x0FF608FD384AF8FA(uVar0[iVar1]) == iParam1)
			{
				return 1;
			}
		}
		iVar1++;
	}
	return 0;
}

int func_438(int iParam0)//Position - 0x2B21D
{
	if (Global_8C41 == 15)
	{
		return 0;
	}
	if (func_348(iParam0))
	{
		return 0;
	}
	return 1;
}

var func_439()//Position - 0x2B23F
{
	return Global_110A8.f_8A;
}

float func_440(int iParam0)//Position - 0x2B24D
{
	switch (iParam0)
	{
		case 57:
			return -0.7f;
			break;
		
		case 63:
			return -0.8f;
			break;
	}
	return 0f;
}

void func_441(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x2B27F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_55(*uParam0);
	iVar1 = func_57(*uParam0);
	iVar2 = func_356(*uParam0);
	iVar3 = func_355(*uParam0);
	iVar4 = func_354(*uParam0);
	iVar5 = func_353(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_54(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_54(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_442(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_442(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x2B401
{
	func_60(uParam0, iParam1);
	func_59(uParam0, iParam2);
	func_58(uParam0, iParam3);
	func_52(uParam0, iParam5);
	func_53(uParam0, iParam4);
	func_51(uParam0, iParam6);
}

void func_443(int iParam0)//Position - 0x2B439
{
	if (unk_0xFA30DFD0084E92FE(Local_131.f_9, 13))
	{
		func_463(iParam0, 0);
	}
}

void func_444(char* sParam0)//Position - 0x2B456
{
	if (!unk_0xF1734B55490E9045(sParam0))
	{
	}
}

void func_445(char* sParam0, int iParam1)//Position - 0x2B468
{
	if (!unk_0xF1734B55490E9045(sParam0))
	{
		if (iParam1 != 0)
		{
		}
	}
}

void func_446(int iParam0)//Position - 0x2B480
{
	bool bVar0;
	vector3 vVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		return;
	}
	bVar0 = false;
	iVar3 = -1;
	iVar4 = 1193854962;
	switch (iParam0)
	{
		case 12:
		case 13:
			bVar0 = !func_67(iParam0, 5);
			vVar1 = { -961.42f, -2794.47f, 12.96f };
			fVar2 = -209.22f;
			iVar3 = 0;
			iVar4 = 160628940;
			break;
		
		case 15:
		case 16:
		case 17:
			bVar0 = !func_67(iParam0, 5);
			vVar1 = { -827.93f, -1368.14f, 3.9982f };
			fVar2 = -68.75f;
			iVar3 = 1;
			break;
		
		case 18:
		case 19:
			bVar0 = !func_67(iParam0, 5);
			bVar0 = true;
			vVar1 = { -710.07f, -1414.31f, 4f };
			fVar2 = -41.25f;
			iVar3 = 2;
			break;
		
		case 21:
			bVar0 = !func_67(iParam0, 5);
			vVar1 = { -66.21f, 77.76f, 70.51f };
			fVar2 = -27f;
			iVar3 = 3;
			break;
		
		case 22:
			bVar0 = !func_67(iParam0, 5);
			vVar1 = { -76.02f, -1825.61f, 25.88f };
			fVar2 = -129.67f;
			iVar3 = 4;
			break;
		
		case 23:
			bVar0 = !func_67(iParam0, 5);
			vVar1 = { -218.68f, -1165.76f, 21.99f };
			fVar2 = 89.95f;
			iVar3 = 5;
			break;
	}
	if (bVar0 && unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), vVar1, true) < 250f)
	{
		if (!unk_0x724D816EA203A79E(iLocal_146[iVar3]))
		{
			unk_0xF243B7A14FCFD0F4(iVar4);
			iLocal_147 = 1;
			if (unk_0xD6513D668481290A(iVar4))
			{
				if (iLocal_147)
				{
					iLocal_146[iVar3] = unk_0x1E0CB5BD6231AB3D(iVar4, vVar1, false, true, false);
					unk_0x784C605D172817C8(iLocal_146[iVar3], 0f, 0f, fVar2, 2, 1);
					unk_0x30034548191398D0(iLocal_146[iVar3], false);
					unk_0x346478B12F69D4E3(iLocal_146[iVar3], true);
					unk_0x2CA123B0622F495C(iVar4);
					iLocal_147 = 0;
				}
			}
		}
	}
	else if (iVar3 != -1)
	{
		if ((unk_0x724D816EA203A79E(iLocal_146[iVar3]) && !unk_0xD1DC4B08247A4317(iLocal_146[iVar3])) && unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), vVar1, true) > 255f)
		{
			unk_0xA35241BCE4C1A24B(&(iLocal_146[iVar3]));
			if (iLocal_147)
			{
				unk_0x2CA123B0622F495C(iVar4);
				iLocal_147 = 0;
			}
		}
	}
}

void func_447(int iParam0)//Position - 0x2B6D9
{
	bool bVar0;
	
	bVar0 = false;
	if (func_67(iParam0, 0) && (!unk_0xFA30DFD0084E92FE(Local_131.f_9, 14) || func_67(iParam0, 5)))
	{
		bVar0 = true;
	}
	if (Global_110A8.f_15A[iParam0] != bVar0)
	{
		if (!func_21(Local_131.f_F, 0f, 0f, 0f, 0))
		{
			if (!bVar0)
			{
				if (Global_110A8.f_15A[iParam0])
				{
					unk_0x483687B0FCA5415A(Global_110A8.f_19F[iParam0], 0);
				}
			}
			else if (!Global_110A8.f_15A[iParam0])
			{
				Global_110A8.f_19F[iParam0] = unk_0x1DAA351326EA3537(Local_131.f_F, Local_131.f_12, 0, 1, 1, 1);
			}
		}
		Global_110A8.f_15A[iParam0] = bVar0;
	}
}

void func_448(int iParam0)//Position - 0x2B796
{
	int iVar0;
	
	if (unk_0xFA30DFD0084E92FE(Local_131.f_9, 15))
	{
		if (func_67(iParam0, 0) && !func_67(iParam0, 5))
		{
			iVar0 = 145;
			if (unk_0xFA30DFD0084E92FE(Local_131.f_9, 16))
			{
				iVar0 = func_449(9);
			}
			else if (unk_0xFA30DFD0084E92FE(Local_131.f_9, 18))
			{
				iVar0 = func_449(4);
			}
			if (iVar0 == Local_131.f_C)
			{
				func_316(iParam0, 5, 1);
			}
		}
	}
}

int func_449(int iParam0)//Position - 0x2B807
{
	return Global_19B04.f_612B[iParam0 /*4*/];
}

void func_450(int iParam0)//Position - 0x2B81A
{
	if (func_67(iParam0, 0) && !func_67(iParam0, 3))
	{
		if (unk_0xFA30DFD0084E92FE(Local_131.f_9, 4))
		{
			func_316(iParam0, 3, 1);
		}
		else
		{
			func_316(iParam0, 3, 1);
		}
	}
}

void func_451(int iParam0)//Position - 0x2B859
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = true;
	if (func_67(iParam0, 0) && bLocal_130)
	{
		if (unk_0xFA30DFD0084E92FE(Local_131.f_9, 0) || (unk_0xFA30DFD0084E92FE(Local_131.f_9, 2) && !func_67(iParam0, 2)))
		{
			if ((!unk_0xFA30DFD0084E92FE(Local_131.f_9, 21) || (((((((!func_27(0) && !func_27(3)) && !func_27(2)) && !func_27(4)) && !func_27(9)) && !func_27(10)) && !func_27(13)) && !func_27(14))) && ((unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) == 0 || func_67(iParam0, 5)) || !unk_0xFA30DFD0084E92FE(Local_131.f_9, 28)))
			{
				bVar0 = false;
				if (!unk_0x2DA8CA50A72528FB(Global_110A8.f_D0[iParam0]))
				{
					if (func_420(0))
					{
						if (unk_0xFA30DFD0084E92FE(Local_131.f_9, 14) && !func_67(iParam0, 5))
						{
							Global_110A8.f_D0[iParam0] = unk_0x390CF6C8AD6903B7(Local_140.f_37);
							if (Local_140.f_3A != -1)
							{
								unk_0xBF0E22F3E083C33D(Global_110A8.f_D0[iParam0], Local_140.f_3A);
								if (!unk_0xF1734B55490E9045(&(Local_140.f_3B)))
								{
									unk_0x436D0272182E484D(Global_110A8.f_D0[iParam0], &(Local_140.f_3B));
								}
							}
						}
						else if (func_67(iParam0, 5) && (((iParam0 == 21 || iParam0 == 22) || iParam0 == 23) || iParam0 == 14))
						{
							Global_110A8.f_D0[iParam0] = unk_0x390CF6C8AD6903B7(Local_140.f_37);
							if (Local_131.f_D != -1)
							{
								unk_0xBF0E22F3E083C33D(Global_110A8.f_D0[iParam0], Local_131.f_D);
								if (!unk_0xF1734B55490E9045(&(Local_140.f_3B)))
								{
									unk_0x436D0272182E484D(Global_110A8.f_D0[iParam0], &(Local_140.f_3B));
								}
								if (Local_131.f_C == 0)
								{
									iVar1 = 42;
								}
								else if (Local_131.f_C == 1)
								{
									iVar1 = 43;
								}
								else if (Local_131.f_C == 2)
								{
									iVar1 = 44;
								}
								unk_0x0D5352939CC40C16(Global_110A8.f_D0[iParam0], iVar1);
							}
						}
						else
						{
							Global_110A8.f_D0[iParam0] = unk_0x390CF6C8AD6903B7(Local_131);
							if (Local_131.f_D != -1)
							{
								unk_0xBF0E22F3E083C33D(Global_110A8.f_D0[iParam0], Local_131.f_D);
								if (!unk_0xF1734B55490E9045(&(Local_140.f_3B)))
								{
									unk_0x436D0272182E484D(Global_110A8.f_D0[iParam0], &(Local_140.f_3B));
								}
								if ((((((((iParam0 == 12 || iParam0 == 13) || iParam0 == 14) || iParam0 == 15) || iParam0 == 16) || iParam0 == 17) || iParam0 == 18) || iParam0 == 19) || iParam0 == 20)
								{
									if (Local_131.f_C == 0)
									{
										iVar2 = 42;
									}
									else if (Local_131.f_C == 1)
									{
										iVar2 = 43;
									}
									else if (Local_131.f_C == 2)
									{
										iVar2 = 44;
									}
									unk_0x0D5352939CC40C16(Global_110A8.f_D0[iParam0], iVar2);
								}
							}
						}
						unk_0x4909873A6873A6C3(Global_110A8.f_D0[iParam0], !unk_0xFA30DFD0084E92FE(Local_131.f_9, 1));
						unk_0x7A6BBF86FCBBCF7E(Global_110A8.f_D0[iParam0], false);
						unk_0x12DB69036F6569F7(Global_110A8.f_D0[iParam0], 3);
					}
				}
			}
		}
	}
	if (bVar0)
	{
		if (unk_0x2DA8CA50A72528FB(Global_110A8.f_D0[iParam0]))
		{
			unk_0x07B8ECB35A4ED3AC(&(Global_110A8.f_D0[iParam0]));
		}
	}
}

void func_452(int iParam0)//Position - 0x2BBD3
{
	if (func_67(iParam0, 0) && !func_67(iParam0, 1))
	{
		if (func_67(iParam0, 4))
		{
			if (unk_0xFA30DFD0084E92FE(Local_131.f_9, 3))
			{
				func_453(&(Local_131.f_5), 0, 0, -1, 10000, 7, 0, 0, 0);
				func_316(iParam0, 1, 1);
			}
			else
			{
				func_316(iParam0, 1, 1);
			}
		}
	}
}

void func_453(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x2BC2F
{
	func_276(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_454(int iParam0)//Position - 0x2BC50
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0xFA30DFD0084E92FE(Local_131.f_9, 7) || Local_131.f_C == iLocal_129)
	{
		bLocal_130 = true;
	}
	else
	{
		bLocal_130 = false;
	}
	if (func_27(14))
	{
		bLocal_130 = false;
	}
	if ((bLocal_130 && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA())) && unk_0xFA30DFD0084E92FE(Local_131.f_9, 14))
	{
		if (Local_56.f_2 == 0 && Local_56.f_3 == 0)
		{
			if (fLocal_152[iParam0] < Local_56.f_1 || Local_56 == iParam0)
			{
				if (Local_56 != iParam0)
				{
					Local_56.f_8 = { Local_131 };
					Local_56.f_1D = { Local_140 };
					Local_56 = iParam0;
					iVar0 = 0;
					while (iVar0 < Global_110A8.f_250)
					{
						Global_110A8.f_250[iVar0] = -1;
						iVar0++;
					}
					Local_56.f_6 = -1;
					if ((Local_56 == 12 || Local_56 == 13) || Local_56 == 14)
					{
						Local_56.f_6 = 0;
					}
					else if ((Local_56 == 15 || Local_56 == 16) || Local_56 == 17)
					{
						Local_56.f_6 = 1;
					}
					else if ((Local_56 == 18 || Local_56 == 19) || Local_56 == 20)
					{
						Local_56.f_6 = 2;
					}
					else if ((Local_56 == 21 || Local_56 == 22) || Local_56 == 23)
					{
						Local_56.f_6 = 3;
					}
					iVar0 = 0;
					while (iVar0 < 312)
					{
						iVar2 = func_130(iVar0, -1);
						if (iVar2 != 0)
						{
							if (iVar1 < Global_110A8.f_250)
							{
								switch (Local_56.f_6)
								{
									case 3:
										if (func_65(iVar2))
										{
											Global_110A8.f_250[iVar1] = iVar0;
											iVar1++;
										}
										break;
									
									case 2:
										if (unk_0x8C1A6E7D5F410F4A(iVar2))
										{
											Global_110A8.f_250[iVar1] = iVar0;
											iVar1++;
										}
										break;
									
									case 1:
										if ((unk_0xE7B3A320107C1379(iVar2) || unk_0x7974165A9BC75283(iVar2)) || iVar2 == joaat("submersible2"))
										{
											Global_110A8.f_250[iVar1] = iVar0;
											iVar1++;
										}
										break;
									
									case 0:
										if (func_66(iVar2))
										{
											Global_110A8.f_250[iVar1] = iVar0;
											iVar1++;
										}
										break;
									}
								}
						}
						iVar0++;
					}
				}
				Local_56.f_1 = fLocal_152[iParam0];
			}
		}
	}
	else if (Local_56 == iParam0)
	{
		Local_56 = -1;
		Local_56.f_1 = 99999.99f;
	}
	if (!unk_0xFA30DFD0084E92FE(uLocal_48[iParam0], 0))
	{
		if (unk_0x724D816EA203A79E(Global_110A8.f_8B[iParam0]))
		{
			if (unk_0xE59B7F5A03335350(Global_110A8.f_8B[iParam0], 0))
			{
				if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
				{
					if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), Global_110A8.f_8B[iParam0], 0))
					{
						if (!unk_0xFA30DFD0084E92FE(uLocal_48[iParam0], 1) || unk_0xFA30DFD0084E92FE(uLocal_48[iParam0], 3))
						{
							unk_0xF0059F27F7BB6680(&(uLocal_48[iParam0]), 0);
							func_316(iParam0, 4, 1);
							func_316(iParam0, 2, 1);
						}
					}
					else
					{
						unk_0xF0059F27F7BB6680(&(uLocal_48[iParam0]), 3);
					}
				}
			}
		}
	}
	if (iParam0 == 14)
	{
		if ((unk_0x724D816EA203A79E(Global_110A8.f_1E4[iParam0]) && unk_0xE59B7F5A03335350(Global_110A8.f_1E4[iParam0], 0)) && unk_0x6F79ECA8C83E4357(Global_110A8.f_1E4[iParam0]) == joaat("hydra"))
		{
			if (!iLocal_171)
			{
				if (unk_0x0C265B3C448E6954(Global_110A8.f_1E4[iParam0], 1738.686f, 3283.423f, 45.24283f, 1724.511f, 3328.808f, 39.59781f, 21f, 0, true, 0))
				{
					unk_0x4E47CBCAA9BEC572(Global_110A8.f_1E4[iParam0], 0f);
					iLocal_171 = 1;
				}
			}
			else if (!unk_0x0C265B3C448E6954(Global_110A8.f_1E4[iParam0], 1738.686f, 3283.423f, 45.24283f, 1724.511f, 3328.808f, 39.59781f, 21f, 0, true, 0))
			{
				unk_0x4E47CBCAA9BEC572(Global_110A8.f_1E4[iParam0], 1f);
				iLocal_171 = 0;
			}
		}
		else
		{
			iLocal_171 = 0;
		}
	}
}

int func_455()//Position - 0x2C077
{
	return 1;
}

var func_456(var uParam0, int iParam1)//Position - 0x2C080
{
	uParam0->f_50 = 0;
	uParam0->f_45 = 0;
	StringCopy(&(uParam0->f_3B), "", 16);
	switch (iParam1)
	{
		case 12:
			*uParam0 = { -952.8823f, -2795.896f, 12.13233f };
			uParam0->f_3 = { -966.7308f, -2787.975f, 16.13232f };
			uParam0->f_6 = 17.5625f;
			uParam0->f_2C = { -966.1285f, -2794.789f, 12.9648f };
			uParam0->f_2F = 146.6324f;
			uParam0->f_E = { -1652.454f, -3059.149f, 24.932f };
			uParam0->f_E.f_3 = { -2.5815f, 0f, -176.2374f };
			uParam0->f_E.f_C = 38.2303f;
			uParam0->f_E.f_6 = { -1651.547f, -3060.478f, 23.8077f };
			uParam0->f_E.f_6.f_3 = { -2.5815f, 0f, -176.2374f };
			uParam0->f_E.f_D = 0.2f;
			uParam0->f_E.f_E = 7f;
			uParam0->f_1D = { -1650.431f, -3177.229f, 16.9898f };
			uParam0->f_1D.f_3 = { -4.9147f, 0f, -11.6415f };
			uParam0->f_1D.f_C = 38.2303f;
			uParam0->f_1D.f_6 = { -1647.495f, -3173.728f, 16.6439f };
			uParam0->f_1D.f_6.f_3 = { -4.9147f, 0f, -11.6415f };
			uParam0->f_1D.f_D = 0.2f;
			uParam0->f_E.f_E = 11f;
			uParam0->f_7 = { -1625.911f, -3167.556f, 11.11455f };
			uParam0->f_A = { -1688.58f, -3130.741f, 20.13538f };
			uParam0->f_D = 60.1875f;
			uParam0->f_30 = { -1625.911f, -3167.556f, 11.11455f };
			uParam0->f_33 = { -1688.58f, -3130.741f, 20.13538f };
			uParam0->f_36 = 60.1875f;
			uParam0->f_37 = { -966.084f, -2793.613f, 12.9648f };
			uParam0->f_3A = 372;
			StringCopy(&(uParam0->f_3B), "HANGAR_NAME", 16);
			uParam0->f_43 = 1378600;
			StringCopy(&(uParam0->f_3F), "HANGAR", 16);
			uParam0->f_50 = 1;
			break;
		
		case 13:
			*uParam0 = { -952.8823f, -2795.896f, 12.13233f };
			uParam0->f_3 = { -966.7308f, -2787.975f, 16.13232f };
			uParam0->f_6 = 17.5625f;
			uParam0->f_2C = { -966.1285f, -2794.789f, 12.9648f };
			uParam0->f_2F = 146.6324f;
			uParam0->f_E = { -1184.2f, -3345f, 17.5f };
			uParam0->f_E.f_3 = { 3.5f, 0f, 109f };
			uParam0->f_E.f_C = 30.3f;
			uParam0->f_E.f_6 = { -1184.3f, -3345f, 16.6f };
			uParam0->f_E.f_6.f_3 = { 3.5f, 0f, 109f };
			uParam0->f_E.f_D = 0.2f;
			uParam0->f_E.f_E = 7f;
			uParam0->f_1D = { -1272.6f, -3414.7f, 15.6f };
			uParam0->f_1D.f_3 = { -2.1f, 0f, -9.9f };
			uParam0->f_1D.f_C = 37.8f;
			uParam0->f_1D.f_6 = { -1274f, -3414.4f, 15.6f };
			uParam0->f_1D.f_6.f_3 = { -2.1f, 0f, -9.9f };
			uParam0->f_1D.f_D = 0.2f;
			uParam0->f_E.f_E = 11f;
			uParam0->f_7 = { -1247.688f, -3408.546f, 20.50418f };
			uParam0->f_A = { -1309.774f, -3372.294f, 11.36878f };
			uParam0->f_D = 66.1875f;
			uParam0->f_30 = { -1247.688f, -3408.546f, 20.50418f };
			uParam0->f_33 = { -1309.774f, -3372.294f, 11.36878f };
			uParam0->f_36 = 66.1875f;
			uParam0->f_37 = { -966.084f, -2793.613f, 12.9648f };
			uParam0->f_3A = 372;
			StringCopy(&(uParam0->f_3B), "HANGAR_NAME", 16);
			uParam0->f_43 = 1378600;
			StringCopy(&(uParam0->f_3F), "HANGAR", 16);
			uParam0->f_50 = 1;
			break;
		
		case 14:
			*uParam0 = { 1727.302f, 3291.453f, 39.61911f };
			uParam0->f_3 = { 1744.108f, 3296.215f, 44.17199f };
			uParam0->f_6 = 4.6875f;
			uParam0->f_2C = { 1737.53f, 3289.239f, 40.1448f };
			uParam0->f_2F = 14.8763f;
			uParam0->f_E = { 1739.749f, 3280.445f, 45.8124f };
			uParam0->f_E.f_3 = { -12.3854f, 0f, 14.8379f };
			uParam0->f_E.f_C = 50f;
			uParam0->f_E.f_6 = { 1739.749f, 3280.445f, 45.8124f };
			uParam0->f_E.f_6.f_3 = { -12.3854f, 0f, 14.8379f };
			uParam0->f_E.f_D = 0.2f;
			uParam0->f_E.f_E = 7f;
			uParam0->f_1D = { 1739.749f, 3280.445f, 45.8124f };
			uParam0->f_1D.f_3 = { -12.3854f, 0f, 14.8379f };
			uParam0->f_1D.f_C = 50f;
			uParam0->f_1D.f_6 = { 1739.749f, 3280.445f, 45.8124f };
			uParam0->f_1D.f_6.f_3 = { -12.3854f, 0f, 14.8379f };
			uParam0->f_1D.f_D = 0.2f;
			uParam0->f_E.f_E = 11f;
			uParam0->f_7 = { 1718.056f, 3305.019f, 45.70922f };
			uParam0->f_A = { 1745.706f, 3313.101f, 39.758f };
			uParam0->f_D = 28.125f;
			uParam0->f_30 = { 1718.056f, 3305.019f, 45.70922f };
			uParam0->f_33 = { 1745.706f, 3313.101f, 39.758f };
			uParam0->f_36 = 28.125f;
			uParam0->f_37 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3A = 372;
			StringCopy(&(uParam0->f_3B), "HANGAR_NAME2", 16);
			uParam0->f_43 = 1378600;
			StringCopy(&(uParam0->f_3F), "HANGAR", 16);
			uParam0->f_50 = 1;
			break;
		
		case 18:
			*uParam0 = { -709.095f, -1414.229f, 3.188014f };
			uParam0->f_3 = { -712.123f, -1411.655f, 6.938014f };
			uParam0->f_6 = 3.25f;
			uParam0->f_7 = { -739.1531f, -1439.509f, 3.188024f };
			uParam0->f_A = { -753.7792f, -1426.756f, 7.188024f };
			uParam0->f_D = 17.5625f;
			uParam0->f_2C = { -700.9434f, -1418.169f, 4.0005f };
			uParam0->f_2F = 142.6382f;
			uParam0->f_E = { -738f, -1440f, 6.3f };
			uParam0->f_E.f_3 = { -2.5f, 0f, 48.3f };
			uParam0->f_E.f_C = 45f;
			uParam0->f_E.f_6 = { -738f, -1440f, 6f };
			uParam0->f_E.f_6.f_3 = { -2.5f, 0f, 48.3f };
			uParam0->f_E.f_D = 0.2f;
			uParam0->f_E.f_E = 7f;
			uParam0->f_1D = { -749.3f, -1425.7f, 5.9f };
			uParam0->f_1D.f_3 = { -9.9f, 0.2f, -152.8f };
			uParam0->f_1D.f_C = 40f;
			uParam0->f_1D.f_6 = { -749.9f, -1426f, 5.9f };
			uParam0->f_1D.f_6.f_3 = { -9.9f, 0.2f, -152.8f };
			uParam0->f_1D.f_D = 0.2f;
			uParam0->f_E.f_E = 11f;
			uParam0->f_30 = { -738.7791f, -1439.377f, 9.125515f };
			uParam0->f_33 = { -755.9111f, -1425.006f, 1.688014f };
			uParam0->f_36 = 18.0625f;
			uParam0->f_37 = { -708.48f, -1414.66f, 4f };
			uParam0->f_3A = 370;
			StringCopy(&(uParam0->f_3B), "HELIPAD_NAME", 16);
			uParam0->f_43 = 419850;
			StringCopy(&(uParam0->f_3F), "HELIPAD", 16);
			uParam0->f_50 = 1;
			break;
		
		case 19:
			*uParam0 = { -709.095f, -1414.229f, 3.188014f };
			uParam0->f_3 = { -712.123f, -1411.655f, 6.938014f };
			uParam0->f_6 = 3.25f;
			uParam0->f_7 = { -755.6812f, -1459.234f, 3.188023f };
			uParam0->f_A = { -770.7671f, -1446.867f, 7.188024f };
			uParam0->f_D = 17.5625f;
			uParam0->f_2C = { -700.9434f, -1418.169f, 4.0005f };
			uParam0->f_2F = 142.6382f;
			uParam0->f_E = { -754.6f, -1460.5f, 6.4f };
			uParam0->f_E.f_3 = { -4.8f, 0f, 48.5f };
			uParam0->f_E.f_C = 45f;
			uParam0->f_E.f_6 = { -754.6f, -1460.6f, 6.1f };
			uParam0->f_E.f_6.f_3 = { -2.2f, 0f, 48.5f };
			uParam0->f_E.f_D = 0.2f;
			uParam0->f_E.f_E = 7f;
			uParam0->f_1D = { -771.8f, -1452.6f, 5.7f };
			uParam0->f_1D.f_3 = { -4.1f, 0f, -98.6f };
			uParam0->f_1D.f_C = 40f;
			uParam0->f_1D.f_6 = { -771.8f, -1452.1f, 5.7f };
			uParam0->f_1D.f_6.f_3 = { -4.1f, 0f, -98.6f };
			uParam0->f_1D.f_D = 0.2f;
			uParam0->f_E.f_E = 11f;
			uParam0->f_30 = { -755.5715f, -1459.453f, 9.125514f };
			uParam0->f_33 = { -771.4204f, -1446.235f, 1.688017f };
			uParam0->f_36 = 18.0625f;
			uParam0->f_37 = { -708.48f, -1414.66f, 4f };
			uParam0->f_3A = 370;
			StringCopy(&(uParam0->f_3B), "HELIPAD_NAME", 16);
			uParam0->f_43 = 419850;
			StringCopy(&(uParam0->f_3F), "HELIPAD", 16);
			uParam0->f_50 = 1;
			break;
		
		case 20:
			*uParam0 = { 1763.424f, 3238.282f, 40.32022f };
			uParam0->f_3 = { 1786.589f, 3239.016f, 47.18534f };
			uParam0->f_6 = 17.75f;
			uParam0->f_7 = { 1763.424f, 3238.282f, 40.32022f };
			uParam0->f_A = { 1786.589f, 3239.016f, 47.18534f };
			uParam0->f_D = 17.75f;
			uParam0->f_2C = { 1761.122f, 3250.125f, 40.733f };
			uParam0->f_2F = 236.5858f;
			uParam0->f_E = { 1779.245f, 3222.477f, 48.5795f };
			uParam0->f_E.f_3 = { -31.2473f, 0f, 7.2108f };
			uParam0->f_E.f_C = 40f;
			uParam0->f_E.f_6 = { 1779.245f, 3222.477f, 48.5795f };
			uParam0->f_E.f_6.f_3 = { -31.2473f, 0f, 7.2108f };
			uParam0->f_E.f_D = 0.2f;
			uParam0->f_E.f_E = 7f;
			uParam0->f_1D = { 1779.245f, 3222.477f, 48.5795f };
			uParam0->f_1D.f_3 = { -31.2473f, 0f, 7.2108f };
			uParam0->f_1D.f_C = 40f;
			uParam0->f_1D.f_6 = { 1779.245f, 3222.477f, 48.5795f };
			uParam0->f_1D.f_6.f_3 = { -31.2473f, 0f, 7.2108f };
			uParam0->f_1D.f_D = 0.2f;
			uParam0->f_E.f_E = 11f;
			uParam0->f_30 = { 1802.327f, 3245.165f, 46.95544f };
			uParam0->f_33 = { 1755.04f, 3237.17f, 38.6937f };
			uParam0->f_36 = 28.125f;
			uParam0->f_37 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_3A = 370;
			StringCopy(&(uParam0->f_3B), "HELIPAD_NAME2", 16);
			uParam0->f_43 = 0;
			StringCopy(&(uParam0->f_3F), "HELIPAD", 16);
			uParam0->f_50 = 1;
			break;
		
		case 15:
			*uParam0 = { -826.5759f, -1368.475f, 3.750513f };
			uParam0->f_3 = { -827.868f, -1364.867f, 6.750514f };
			uParam0->f_6 = 3.3125f;
			uParam0->f_7 = { -845.2216f, -1356.04f, -0.212093f };
			uParam0->f_A = { -841.6451f, -1365.777f, 3.787907f };
			uParam0->f_D = 17.5625f;
			uParam0->f_2C = { -835.86f, -1358.347f, 0.6102f };
			uParam0->f_2F = 112.3787f;
			uParam0->f_E = { -859.6f, -1374f, 4.3f };
			uParam0->f_E.f_3 = { -3f, 0f, -48.3f };
			uParam0->f_E.f_C = 32.9f;
			uParam0->f_E.f_6 = { -859.7f, -1374f, 3f };
			uParam0->f_E.f_6.f_3 = { -3f, 0f, -48.3f };
			uParam0->f_E.f_D = 0.2f;
			uParam0->f_E.f_E = 7f;
			uParam0->f_1D = { -837.2f, -1350.3f, 2.4f };
			uParam0->f_1D.f_3 = { -7f, 0f, 156.1f };
			uParam0->f_1D.f_C = 47.5f;
			uParam0->f_1D.f_6 = { -837.4f, -1350.8f, 2.3f };
			uParam0->f_1D.f_6.f_3 = { -7f, 0f, 156.1f };
			uParam0->f_1D.f_D = 0.2f;
			uParam0->f_E.f_E = 11f;
			uParam0->f_30 = { -860.0693f, -1314.887f, -3.331177f };
			uParam0->f_33 = { -826.6461f, -1410.447f, 4.787533f };
			uParam0->f_36 = 19.625f;
			uParam0->f_37 = { -827.912f, -1366.736f, 4.0005f };
			uParam0->f_3A = 371;
			StringCopy(&(uParam0->f_3B), "MARINA_NAME", 16);
			uParam0->f_43 = 75000;
			StringCopy(&(uParam0->f_3F), "MARINA", 16);
			uParam0->f_50 = 1;
			break;
		
		case 16:
			*uParam0 = { -826.5759f, -1368.475f, 3.750513f };
			uParam0->f_3 = { -827.868f, -1364.867f, 6.750514f };
			uParam0->f_6 = 3.3125f;
			uParam0->f_7 = { -848.8177f, -1347.786f, -0.212093f };
			uParam0->f_A = { -845.2482f, -1357.936f, 3.787908f };
			uParam0->f_D = 17.5625f;
			uParam0->f_2C = { -839.2461f, -1349.525f, 0.6102f };
			uParam0->f_2F = 110.6762f;
			uParam0->f_E = { -866.1f, -1365.6f, 4.3f };
			uParam0->f_E.f_3 = { -3.6f, 0f, -54.6f };
			uParam0->f_E.f_C = 30f;
			uParam0->f_E.f_6 = { -866.1f, -1365.6f, 3f };
			uParam0->f_E.f_6.f_3 = { -3.6f, 0f, -54.6f };
			uParam0->f_E.f_D = 0.2f;
			uParam0->f_E.f_E = 7f;
			uParam0->f_1D = { -838.7f, -1343.3f, 2.9f };
			uParam0->f_1D.f_3 = { -7.5f, 0f, 142.6f };
			uParam0->f_1D.f_C = 47.5f;
			uParam0->f_1D.f_6 = { -838.8f, -1343.2f, 2.9f };
			uParam0->f_1D.f_6.f_3 = { -7.5f, 0f, 142.6f };
			uParam0->f_1D.f_D = 0.2f;
			uParam0->f_E.f_E = 11f;
			uParam0->f_30 = { -860.0693f, -1314.887f, -3.331177f };
			uParam0->f_33 = { -826.6461f, -1410.447f, 4.787533f };
			uParam0->f_36 = 19.625f;
			uParam0->f_37 = { -827.912f, -1366.736f, 4.0005f };
			uParam0->f_3A = 371;
			StringCopy(&(uParam0->f_3B), "MARINA_NAME", 16);
			uParam0->f_43 = 75000;
			StringCopy(&(uParam0->f_3F), "MARINA", 16);
			uParam0->f_50 = 1;
			break;
		
		case 17:
			*uParam0 = { -826.5759f, -1368.475f, 3.750513f };
			uParam0->f_3 = { -827.868f, -1364.867f, 6.750514f };
			uParam0->f_6 = 3.3125f;
			uParam0->f_7 = { -851.6987f, -1339.128f, -0.212129f };
			uParam0->f_A = { -848.128f, -1349.168f, 3.787905f };
			uParam0->f_D = 17.5625f;
			uParam0->f_2C = { -842.0763f, -1341.401f, 0.6102f };
			uParam0->f_2F = 109.8916f;
			uParam0->f_E = { -866.3f, -1357.9f, 4.3f };
			uParam0->f_E.f_3 = { -4.4f, 0f, -46.6f };
			uParam0->f_E.f_C = 31.2f;
			uParam0->f_E.f_6 = { -866.3f, -1357.9f, 3f };
			uParam0->f_E.f_6.f_3 = { -4.4f, 0f, -46.6f };
			uParam0->f_E.f_D = 0.2f;
			uParam0->f_E.f_E = 7f;
			uParam0->f_1D = { -841.6f, -1336.3f, 2.5f };
			uParam0->f_1D.f_3 = { -3.6f, 0f, 137.7f };
			uParam0->f_1D.f_C = 47.5f;
			uParam0->f_1D.f_6 = { -841.8f, -1336.1f, 2.5f };
			uParam0->f_1D.f_6.f_3 = { -3.6f, 0f, 137.7f };
			uParam0->f_1D.f_D = 0.2f;
			uParam0->f_E.f_E = 11f;
			uParam0->f_30 = { -860.0693f, -1314.887f, -3.331177f };
			uParam0->f_33 = { -826.6461f, -1410.447f, 4.787533f };
			uParam0->f_36 = 19.625f;
			uParam0->f_37 = { -827.912f, -1366.736f, 4.0005f };
			uParam0->f_3A = 371;
			StringCopy(&(uParam0->f_3B), "MARINA_NAME", 16);
			uParam0->f_43 = 75000;
			StringCopy(&(uParam0->f_3F), "MARINA", 16);
			uParam0->f_50 = 1;
			break;
		
		case 21:
			*uParam0 = { -63.38147f, 84.0594f, 70.52139f };
			uParam0->f_3 = { -66.17774f, 77.95913f, 74.05372f };
			uParam0->f_6 = 5.9375f;
			uParam0->f_2C = { -65.2041f, 81.0524f, 70.5666f };
			uParam0->f_2F = 243.8699f;
			uParam0->f_7 = { 189.7074f, -1017.569f, -105f };
			uParam0->f_A = { 207.8325f, -1017.774f, -96.63576f };
			uParam0->f_D = 23f;
			uParam0->f_E = { 191f, -1026.9f, -98.3f };
			uParam0->f_E.f_3 = { -2.4f, 0f, -77f };
			uParam0->f_E.f_6 = { 190f, -1026.9f, -98.3f };
			uParam0->f_E.f_6.f_3 = { -4.3f, 0f, -57.6f };
			uParam0->f_E.f_C = 37f;
			uParam0->f_E.f_D = 0.2f;
			uParam0->f_E.f_E = 7.5f;
			uParam0->f_1D = { 207.3f, -1013f, -98.2f };
			uParam0->f_1D.f_3 = { -2.4f, 0f, 112.3f };
			uParam0->f_1D.f_6 = { 207.3f, -1013f, -98.2f };
			uParam0->f_1D.f_6.f_3 = { -2.4f, 0f, 141f };
			uParam0->f_1D.f_C = 37f;
			uParam0->f_1D.f_D = 0.2f;
			uParam0->f_1D.f_E = 11.5f;
			uParam0->f_30 = { 221.9979f, -981.6635f, -100.1874f };
			uParam0->f_33 = { 234.201f, -981.7582f, -97.62492f };
			uParam0->f_36 = 6.25f;
			uParam0->f_37 = { -62.62f, 80.03f, 70.62f };
			uParam0->f_3A = 369;
			StringCopy(&(uParam0->f_3B), "GARAGE_NAME1", 16);
			uParam0->f_43 = 30000;
			StringCopy(&(uParam0->f_3F), "CAR_GAR", 16);
			uParam0->f_44 = 243.8699f;
			uParam0->f_45 = 1;
			uParam0->f_46[0 /*3*/] = { -67.9068f, 82.2664f, 70.5153f };
			uParam0->f_4D[0] = 66.202f;
			uParam0->f_46[1 /*3*/] = { -65.1234f, 81.2517f, 70.5644f };
			uParam0->f_4D[1] = 71.6237f;
			uParam0->f_50 = 1;
			break;
		
		case 22:
			*uParam0 = { -72.41166f, -1824.142f, 25.81704f };
			uParam0->f_3 = { -68.70254f, -1819.642f, 29.37954f };
			uParam0->f_6 = 5.9375f;
			uParam0->f_2C = { -70.1992f, -1823.225f, 25.942f };
			uParam0->f_2F = 46.1535f;
			uParam0->f_7 = { 189.7074f, -1017.569f, -105f };
			uParam0->f_A = { 207.8325f, -1017.774f, -96.63576f };
			uParam0->f_D = 23f;
			uParam0->f_E = { 191f, -1026.9f, -98.3f };
			uParam0->f_E.f_3 = { -2.4f, 0f, -77f };
			uParam0->f_E.f_6 = { 190f, -1026.9f, -98.3f };
			uParam0->f_E.f_6.f_3 = { -4.3f, 0f, -57.6f };
			uParam0->f_E.f_C = 37f;
			uParam0->f_E.f_D = 0.2f;
			uParam0->f_E.f_E = 7.5f;
			uParam0->f_1D = { 207.3f, -1013f, -98.2f };
			uParam0->f_1D.f_3 = { -2.4f, 0f, 112.3f };
			uParam0->f_1D.f_6 = { 207.3f, -1013f, -98.2f };
			uParam0->f_1D.f_6.f_3 = { -2.4f, 0f, 141f };
			uParam0->f_1D.f_C = 37f;
			uParam0->f_1D.f_D = 0.2f;
			uParam0->f_1D.f_E = 11.5f;
			uParam0->f_30 = { 221.9979f, -981.6635f, -100.1874f };
			uParam0->f_33 = { 234.201f, -981.7582f, -97.62492f };
			uParam0->f_36 = 6.25f;
			uParam0->f_37 = { -71.29f, -1821.68f, 25.94f };
			uParam0->f_3A = 369;
			StringCopy(&(uParam0->f_3B), "GARAGE_NAME2", 16);
			uParam0->f_43 = 30000;
			StringCopy(&(uParam0->f_3F), "CAR_GAR", 16);
			uParam0->f_44 = 53.0985f;
			uParam0->f_45 = 1;
			uParam0->f_46[0 /*3*/] = { -64.2268f, -1832.598f, 25.8666f };
			uParam0->f_4D[0] = 274.6339f;
			uParam0->f_46[1 /*3*/] = { -68.5531f, -1824.377f, 25.9424f };
			uParam0->f_4D[1] = 215.8295f;
			uParam0->f_50 = 1;
			break;
		
		case 23:
			*uParam0 = { -220.7794f, -1159.28f, 21.90302f };
			uParam0->f_3 = { -220.7273f, -1165.265f, 25.45053f };
			uParam0->f_6 = 5.9375f;
			uParam0->f_2C = { -220.7592f, -1162.277f, 22.0242f };
			uParam0->f_2F = 271.2097f;
			uParam0->f_7 = { 189.7074f, -1017.569f, -105f };
			uParam0->f_A = { 207.8325f, -1017.774f, -96.63576f };
			uParam0->f_D = 23f;
			uParam0->f_E = { 191f, -1026.9f, -98.3f };
			uParam0->f_E.f_3 = { -2.4f, 0f, -77f };
			uParam0->f_E.f_6 = { 190f, -1026.9f, -98.3f };
			uParam0->f_E.f_6.f_3 = { -4.3f, 0f, -57.6f };
			uParam0->f_E.f_C = 37f;
			uParam0->f_E.f_D = 0.2f;
			uParam0->f_E.f_E = 7.5f;
			uParam0->f_1D = { 207.3f, -1013f, -98.2f };
			uParam0->f_1D.f_3 = { -2.4f, 0f, 112.3f };
			uParam0->f_1D.f_6 = { 207.3f, -1013f, -98.2f };
			uParam0->f_1D.f_6.f_3 = { -2.4f, 0f, 141f };
			uParam0->f_1D.f_C = 37f;
			uParam0->f_1D.f_D = 0.2f;
			uParam0->f_1D.f_E = 11.5f;
			uParam0->f_30 = { 221.9979f, -981.6635f, -100.1874f };
			uParam0->f_33 = { 234.201f, -981.7582f, -97.62492f };
			uParam0->f_36 = 6.25f;
			uParam0->f_37 = { -218.35f, -1162.18f, 22.02f };
			uParam0->f_3A = 369;
			StringCopy(&(uParam0->f_3B), "GARAGE_NAME3", 16);
			uParam0->f_43 = 30000;
			StringCopy(&(uParam0->f_3F), "CAR_GAR", 16);
			uParam0->f_44 = 271.2097f;
			uParam0->f_45 = 1;
			uParam0->f_46[0 /*3*/] = { -222.1935f, -1162.113f, 22.0204f };
			uParam0->f_4D[0] = 358.5703f;
			uParam0->f_46[1 /*3*/] = { -220.8189f, -1162.302f, 22.0242f };
			uParam0->f_4D[1] = 70.2711f;
			uParam0->f_50 = 1;
			break;
	}
	return uParam0->f_50;
}

int func_457()//Position - 0x2D82A
{
	func_458();
	return Global_19B04.f_932.f_21B.f_10CD;
}

void func_458()//Position - 0x2D843
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_386(Global_19B04.f_932.f_21B.f_10CD) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_385(unk_0xBC25C936A095B5BA());
			if (func_25(iVar0) && (!func_27(14) || Global_196EB))
			{
				if (Global_19B04.f_932.f_21B.f_10CD != iVar0 && func_25(Global_19B04.f_932.f_21B.f_10CD))
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

void func_459()//Position - 0x2D940
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x2DA8CA50A72528FB(Global_110A8.f_D0[iVar0]))
		{
			unk_0x07B8ECB35A4ED3AC(&(Global_110A8.f_D0[iVar0]));
		}
		if (unk_0x724D816EA203A79E(Global_110A8.f_8B[iVar0]))
		{
			if (unk_0xE59B7F5A03335350(Global_110A8.f_8B[iVar0], 0))
			{
				unk_0x1E7A09C1710FB071(&(Global_110A8.f_8B[iVar0]));
				Global_110A8.f_8B[iVar0] = 0;
			}
		}
		iVar0++;
	}
	if (unk_0xEF0E25DA0CB6E8FF(Local_56.f_6E))
	{
		unk_0x348665177DBFB93B(Local_56.f_6E, false);
		unk_0x4EC087603E1DEF9C(Local_56.f_6E, 0);
	}
	if (unk_0xEF0E25DA0CB6E8FF(Local_56.f_6F))
	{
		unk_0x348665177DBFB93B(Local_56.f_6F, false);
		unk_0x4EC087603E1DEF9C(Local_56.f_6F, 0);
	}
	if (Local_56.f_3 != 0)
	{
		func_264();
		unk_0x346478B12F69D4E3(unk_0xBC25C936A095B5BA(), false);
	}
	if (unk_0x2DA8CA50A72528FB(Global_110A8.f_247))
	{
		unk_0x07B8ECB35A4ED3AC(&(Global_110A8.f_247));
	}
	if (iLocal_115 != -1)
	{
		func_69(&iLocal_115);
	}
	if (iLocal_114 != -1)
	{
		func_69(&iLocal_114);
	}
	if (Local_56.f_5 != -1)
	{
		func_69(&(Local_56.f_5));
	}
	if (iLocal_125 != -1)
	{
		func_69(&iLocal_125);
	}
	if (Local_56.f_3 > 0)
	{
		if (Global_110A8.f_241)
		{
			func_223(47, 1);
			func_221(47, 1);
			Global_110A8.f_241 = 0;
			Local_56.f_3 = 0;
		}
	}
	Global_110A8.f_229 = 0;
	unk_0x95E4B6F3ED223F5A();
}

void func_460()//Position - 0x2DA9C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (unk_0x724D816EA203A79E(iLocal_53[iVar0]))
		{
			unk_0xA35241BCE4C1A24B(&(iLocal_53[iVar0]));
		}
		iVar0++;
	}
}

void func_461(int iParam0)//Position - 0x2DACF
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	if (!unk_0xFA30DFD0084E92FE(iLocal_150[iVar0], iVar1))
	{
		unk_0xF0059F27F7BB6680(&(iLocal_150[iVar0]), iVar1);
		iLocal_149[iLocal_148] = iParam0;
		iLocal_148++;
	}
}

void func_462()//Position - 0x2DB15
{
	int iVar0;
	
	if (func_287(25))
	{
		if (Global_19B04.f_7F22.f_45[22 /*78*/].f_42 != 0 && !func_39(Global_19B04.f_7F22.f_45[22 /*78*/].f_42, 0))
		{
			Global_19B04.f_7F22.f_45[22 /*78*/].f_42 = joaat("fugitive");
			Global_19B04.f_7F22.f_45[22 /*78*/].f_4D = 0;
			Global_19B04.f_7F22.f_45[22 /*78*/].f_41 = 0;
			Global_19B04.f_7F22.f_45[22 /*78*/].f_3E = 255;
			Global_19B04.f_7F22.f_45[22 /*78*/].f_3F = 255;
			Global_19B04.f_7F22.f_45[22 /*78*/].f_40 = 255;
			Global_19B04.f_7F22.f_45[22 /*78*/].f_5 = 0;
			Global_19B04.f_7F22.f_45[22 /*78*/].f_6 = 0;
			Global_19B04.f_7F22.f_45[22 /*78*/].f_7 = 0;
			Global_19B04.f_7F22.f_45[22 /*78*/].f_8 = 156;
			iVar0 = 0;
			while (iVar0 < 49)
			{
				Global_19B04.f_7F22.f_45[22 /*78*/].f_9[iVar0] = 0;
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 2)
			{
				Global_19B04.f_7F22.f_45[22 /*78*/].f_3B[iVar0] = 0;
				iVar0++;
			}
		}
	}
	if ((func_287(21) && Global_19B04.f_7F22.f_45[9 /*78*/].f_42 != 0) && !func_39(Global_19B04.f_7F22.f_45[9 /*78*/].f_42, 0))
	{
		Global_19B04.f_7F22.f_45[9 /*78*/].f_42 = 0;
	}
	if ((func_287(22) && Global_19B04.f_7F22.f_45[10 /*78*/].f_42 != 0) && !func_39(Global_19B04.f_7F22.f_45[10 /*78*/].f_42, 0))
	{
		Global_19B04.f_7F22.f_45[10 /*78*/].f_42 = 0;
	}
	if ((func_287(23) && Global_19B04.f_7F22.f_45[11 /*78*/].f_42 != 0) && !func_39(Global_19B04.f_7F22.f_45[11 /*78*/].f_42, 0))
	{
		Global_19B04.f_7F22.f_45[11 /*78*/].f_42 = 0;
	}
	if (func_287(26) && !func_39(Global_19B04.f_7F22.f_45[12 /*78*/].f_42, 0))
	{
		func_463(26, 0);
	}
	if (func_287(27) && !func_39(Global_19B04.f_7F22.f_45[13 /*78*/].f_42, 0))
	{
		func_463(27, 0);
	}
	if (func_287(28) && !func_39(Global_19B04.f_7F22.f_45[14 /*78*/].f_42, 0))
	{
		func_463(28, 0);
	}
	if (func_287(29) && !func_39(Global_19B04.f_7F22.f_45[15 /*78*/].f_42, 0))
	{
		func_463(29, 0);
	}
	if (func_287(30) && !func_39(Global_19B04.f_7F22.f_45[16 /*78*/].f_42, 0))
	{
		func_463(30, 0);
	}
	if (func_287(31) && !func_39(Global_19B04.f_7F22.f_45[17 /*78*/].f_42, 0))
	{
		func_463(31, 0);
	}
	if (func_287(32) && !func_39(Global_19B04.f_7F22.f_45[18 /*78*/].f_42, 0))
	{
		func_463(32, 0);
	}
	if (func_287(33) && !func_39(Global_19B04.f_7F22.f_45[19 /*78*/].f_42, 0))
	{
		func_463(33, 0);
	}
	if (func_287(34) && !func_39(Global_19B04.f_7F22.f_45[20 /*78*/].f_42, 0))
	{
		func_463(34, 0);
	}
}

void func_463(int iParam0, bool bParam1)//Position - 0x2DE9A
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_67(iParam0, 0))
		{
			func_316(iParam0, 1, 0);
			func_316(iParam0, 2, 0);
			func_316(iParam0, 3, 0);
			func_316(iParam0, 4, 0);
			func_316(iParam0, 0, 1);
			Global_110A8[iParam0] = 1;
		}
	}
	else
	{
		func_316(iParam0, 0, 0);
	}
}

int func_464()//Position - 0x2DEF7
{
	return 0;
}

int func_465()//Position - 0x2DF00
{
	return 1;
}

int func_466()//Position - 0x2DF09
{
	return 1;
}

int func_467()//Position - 0x2DF12
{
	if (unk_0x7B2F21BFE86AEB61(-1226939934))
	{
		return 1;
	}
	return 0;
}

void func_468(var uParam0)//Position - 0x2DF2B
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	uParam0->f_9 = { func_5("C_SF", "DL", "AST", "X1/BE") };
	func_472();
	func_471();
	func_469();
}

void func_469()//Position - 0x2DF68
{
	Global_194AE = 2405.849f;
	Global_194B1 = 2408.22f;
	Global_194B4 = 2386.096f;
	Global_194B7 = 69.1875f;
	Global_194BA[0 /*3*/] = 2417.105f;
	Global_194BA[1 /*3*/] = 2407.058f;
	Global_194BA[2 /*3*/] = 2371.92f;
	Global_194BA[3 /*3*/] = 2399.583f;
	Global_194BA[4 /*3*/] = 2416.519f;
	Global_194BA[5 /*3*/] = 2430.345f;
	Global_194BA[6 /*3*/] = 2385.819f;
	Global_194D0[0] = 157.8636f;
	Global_194D0[1] = 174.7226f;
	Global_194D0[2] = 270.7562f;
	Global_194D0[3] = 190.7495f;
	Global_194D0[4] = 27.6506f;
	Global_194D0[5] = 358.1218f;
	Global_194D0[6] = 339.4363f;
	Global_194D8 = 2399.82f;
	Global_194DB = 2414.7f;
	func_470(&Global_18E4F, 64);
}

void func_470(var uParam0, int iParam1)//Position - 0x2E058
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_471()//Position - 0x2E069
{
	Global_18E54[0 /*3*/].f_1 = 5141.01f;
	Global_18E54[1 /*3*/].f_1 = 6048.71f;
	Global_18E54[2 /*3*/].f_1 = 6185.32f;
	Global_18E54[3 /*3*/].f_1 = 5180.99f;
	Global_18E54[4 /*3*/].f_1 = 4582.72f;
	Global_18E54[5 /*3*/].f_1 = 4831.82f;
	Global_18E54[6 /*3*/].f_1 = 4322.66f;
	Global_18E54[7 /*3*/].f_1 = 3503.92f;
	Global_18E54[8 /*3*/].f_1 = 3777.54f;
	Global_18E54[9 /*3*/].f_1 = 3810.8f;
	Global_18E54[10 /*3*/].f_1 = 3095.88f;
	Global_18E76[0 /*13*/][0 /*3*/].f_1 = 5222.39f;
	Global_18E76[0 /*13*/][1 /*3*/].f_1 = 5333.68f;
	Global_18E76[0 /*13*/][2 /*3*/].f_1 = 5534.22f;
	Global_18E76[0 /*13*/][3 /*3*/].f_1 = 5843.98f;
	Global_18E76[1 /*13*/][0 /*3*/].f_1 = 5178.94f;
	Global_18E76[1 /*13*/][1 /*3*/].f_1 = 4956.4f;
	Global_18E76[1 /*13*/][2 /*3*/].f_1 = 5063.24f;
	Global_18E76[2 /*13*/][0 /*3*/].f_1 = 5027.97f;
	Global_18E76[2 /*13*/][1 /*3*/].f_1 = 4854.23f;
	Global_18E76[2 /*13*/][2 /*3*/].f_1 = 4770.31f;
	Global_18E76[3 /*13*/][0 /*3*/].f_1 = 6052.6f;
	Global_18E76[3 /*13*/][1 /*3*/].f_1 = 6086.12f;
	Global_18E76[3 /*13*/][2 /*3*/].f_1 = 6165.88f;
	Global_18E76[4 /*13*/][0 /*3*/].f_1 = 5880.13f;
	Global_18E76[4 /*13*/][1 /*3*/].f_1 = 5515.67f;
	Global_18E76[4 /*13*/][2 /*3*/].f_1 = 5195.4f;
	Global_18E76[5 /*13*/][0 /*3*/].f_1 = 6380.15f;
	Global_18E76[5 /*13*/][1 /*3*/].f_1 = 6193.92f;
	Global_18E76[5 /*13*/][2 /*3*/].f_1 = 5909.13f;
	Global_18E76[6 /*13*/][0 /*3*/].f_1 = 5072.56f;
	Global_18E76[6 /*13*/][1 /*3*/].f_1 = 5062.55f;
	Global_18E76[6 /*13*/][2 /*3*/].f_1 = 4964.13f;
	Global_18E76[7 /*13*/][0 /*3*/].f_1 = 4956.69f;
	Global_18E76[7 /*13*/][1 /*3*/].f_1 = 4767.8f;
	Global_18E76[7 /*13*/][2 /*3*/].f_1 = 4588.79f;
	Global_18E76[8 /*13*/][0 /*3*/].f_1 = 4783.28f;
	Global_18E76[8 /*13*/][1 /*3*/].f_1 = 4613.93f;
	Global_18E76[8 /*13*/][2 /*3*/].f_1 = 4737.46f;
	Global_18E76[9 /*13*/][0 /*3*/].f_1 = 4624.7f;
	Global_18E76[9 /*13*/][1 /*3*/].f_1 = 4286.39f;
	Global_18E76[9 /*13*/][2 /*3*/].f_1 = 4500.57f;
	Global_18E76[10 /*13*/][0 /*3*/].f_1 = 4618.13f;
	Global_18E76[10 /*13*/][1 /*3*/].f_1 = 4534.44f;
	Global_18E76[10 /*13*/][2 /*3*/].f_1 = 4493.64f;
	Global_18E76[11 /*13*/][0 /*3*/].f_1 = 4282.7f;
	Global_18E76[11 /*13*/][1 /*3*/].f_1 = 4111.71f;
	Global_18E76[11 /*13*/][2 /*3*/].f_1 = 3914.81f;
	Global_18E76[11 /*13*/][3 /*3*/].f_1 = 3894.7f;
	Global_18E76[12 /*13*/][0 /*3*/].f_1 = 4038.96f;
	Global_18E76[12 /*13*/][1 /*3*/].f_1 = 3849.33f;
	Global_18E76[12 /*13*/][2 /*3*/].f_1 = 3699.37f;
	Global_18E76[13 /*13*/][0 /*3*/].f_1 = 3970.96f;
	Global_18E76[13 /*13*/][1 /*3*/].f_1 = 3926.75f;
	Global_18E76[13 /*13*/][2 /*3*/].f_1 = 3874.89f;
	Global_18E76[14 /*13*/][0 /*3*/].f_1 = 3291.26f;
	Global_18E76[14 /*13*/][1 /*3*/].f_1 = 3436.6f;
	Global_18E76[14 /*13*/][2 /*3*/].f_1 = 3592.12f;
	Global_18E76[15 /*13*/][0 /*3*/].f_1 = 3710.49f;
	Global_18E76[15 /*13*/][1 /*3*/].f_1 = 3945.38f;
	Global_18E76[15 /*13*/][2 /*3*/].f_1 = 3854.2f;
	Global_18E76[15 /*13*/][3 /*3*/].f_1 = 3757.3f;
	Global_18E76[16 /*13*/][0 /*3*/].f_1 = 3528.6f;
	Global_18E76[16 /*13*/][1 /*3*/].f_1 = 3328.93f;
	Global_18E76[16 /*13*/][2 /*3*/].f_1 = 3157.76f;
	Global_18E76[17 /*13*/][0 /*3*/].f_1 = 3809.12f;
	Global_18E76[17 /*13*/][1 /*3*/].f_1 = 3826.24f;
	Global_18E76[17 /*13*/][2 /*3*/].f_1 = 3727.81f;
	Global_18E76[18 /*13*/][0 /*3*/].f_1 = 3610.22f;
	Global_18E76[18 /*13*/][1 /*3*/].f_1 = 3314.26f;
	Global_18E76[18 /*13*/][2 /*3*/].f_1 = 3034.58f;
	Global_18E76[19 /*13*/][0 /*3*/].f_1 = 3572.72f;
	Global_18E76[19 /*13*/][1 /*3*/].f_1 = 3261.69f;
	Global_18E76[19 /*13*/][2 /*3*/].f_1 = 3184.28f;
	func_470(&Global_18E4F, 16);
}

void func_472()//Position - 0x2E56D
{
	Global_18E23[0 /*3*/] = -1567.382f;
	Global_18E23[1 /*3*/] = -1436.305f;
	Global_18E23[2 /*3*/] = 31.2408f;
	Global_18E23[3 /*3*/] = 278.1924f;
	Global_18E23[4 /*3*/] = 1116.002f;
	Global_18E23[5 /*3*/] = 1676.193f;
	Global_18E39[0 /*3*/] = -1592.642f;
	Global_18E39[1 /*3*/] = -1573.501f;
	Global_18E39[2 /*3*/] = -1459.359f;
	Global_18E39[3 /*3*/] = 21.1005f;
	Global_18E39[4 /*3*/] = 262.9409f;
	Global_18E39[5 /*3*/] = 1091.07f;
	func_470(&Global_18E4F, 1);
}

