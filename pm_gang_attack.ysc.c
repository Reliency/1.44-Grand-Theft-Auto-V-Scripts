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
	int iLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	struct<62> Local_37 = { 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	int iLocal_45 = 0;
	var uLocal_46 = 16;
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
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
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
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
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
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	int iLocal_211 = 0;
	int iLocal_212 = 0;
	char[] cLocal_213[8] = 0;
	var uLocal_214 = 0;
	int iLocal_215 = 0;
	int iLocal_216 = 0;
	int iLocal_217 = 0;
	int iLocal_218 = 0;
	int iLocal_219 = 0;
	var uLocal_220[2] = { 0, 0 };
	var uLocal_221[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_222[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_223[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_224 = 0;
	int iLocal_225 = 0;
	int iLocal_226 = 0;
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
	iLocal_20 = 3;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_211 = -1;
	iLocal_212 = -1;
	StringCopy(&cLocal_213, "PMGAUD", 8);
	iLocal_215 = -1;
	iLocal_216 = -1;
	unk_0x25A523E067E06F54(1);
	if (unk_0xE8A79675302ED812(3))
	{
		func_56(2);
		func_55();
	}
	func_48();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (func_47())
		{
			iLocal_212 = -1;
		}
		else if (iLocal_212 == -1)
		{
			iLocal_212 = unk_0x105601648511CC64();
		}
		func_1();
	}
}

void func_1()//Position - 0xBF
{
	struct<2> Var0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	
	switch (iLocal_36)
	{
		case 0:
			unk_0x900CF084251DED26("PGANG", 0);
			if (unk_0xFA9040D29FE330BD(0))
			{
				iVar1 = 0;
				while (iVar1 <= 5)
				{
					if (unk_0x724D816EA203A79E(Global_195FA.f_E1[iVar1]))
					{
						uLocal_221[iVar1] = Global_195FA.f_E1[iVar1];
						Global_195FA.f_E1[iVar1] = 0;
						unk_0x77815D3407C6700D(uLocal_221[iVar1], true, 1);
						if (iLocal_226 == 0)
						{
							iLocal_226 = unk_0x6F79ECA8C83E4357(uLocal_221[iVar1]);
						}
						if (!unk_0x36CEFBE9B745A58D(uLocal_221[iVar1]))
						{
							unk_0x4106FAF8AA1D69D5(uLocal_221[iVar1], iLocal_224);
							unk_0x54480313BB3E8DD0(uLocal_221[iVar1], 1);
							unk_0x80F51E5792576467(uLocal_221[iVar1], 0);
							unk_0xFC3C88E2313FA926(uLocal_221[iVar1], 5);
							unk_0xEB061E1EBFED4D59(uLocal_221[iVar1], 1);
							func_46(uLocal_221[iVar1], 20f, 5f, 90f, -80f, 80f);
							if (iLocal_45 == 0)
							{
								unk_0x54480313BB3E8DD0(uLocal_221[iVar1], 2);
							}
							uLocal_223[iVar1] = func_43(uLocal_221[iVar1], 1, 145);
						}
					}
					iVar1++;
				}
				iVar1 = 0;
				while (iVar1 <= 1)
				{
					if (unk_0x724D816EA203A79E(Global_195FA.f_DE[iVar1]))
					{
						uLocal_220[iVar1] = Global_195FA.f_DE[iVar1];
						Global_195FA.f_DE[iVar1] = 0;
						unk_0x77815D3407C6700D(uLocal_220[iVar1], true, 1);
						if (iLocal_225 == 0)
						{
							iLocal_225 = unk_0x6F79ECA8C83E4357(uLocal_220[iVar1]);
						}
					}
					iVar1++;
				}
				StringCopy(&Var0, "START_", 16);
				StringConCat(&Var0, &(Local_37.f_3D), 16);
				func_42(&Var0, 7500, 1);
				iLocal_36++;
			}
			break;
		
		case 1:
			bVar3 = true;
			iVar1 = 0;
			while (iVar1 <= 5)
			{
				if (!bVar2)
				{
					if (uLocal_222[iVar1] > 0)
					{
						bVar2 = true;
					}
				}
				if (unk_0x724D816EA203A79E(uLocal_221[iVar1]) && !unk_0x36CEFBE9B745A58D(uLocal_221[iVar1]))
				{
					bVar3 = false;
				}
				iVar1++;
			}
			if (bVar2)
			{
				unk_0x6A095EC1C9AF12A4(unk_0xB5CEFD608600A09F());
			}
			if (bVar3)
			{
				if (unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0))
				{
					if (!iLocal_217)
					{
						func_42("LOSE_WANTED", 7500, 1);
						iLocal_217 = 1;
					}
				}
				else
				{
					func_41();
				}
			}
			break;
	}
	switch (iLocal_45)
	{
		case 1:
			func_39();
			break;
		
		case 0:
			func_9();
			break;
	}
	iVar1 = 0;
	while (iVar1 <= 5)
	{
		if (unk_0x724D816EA203A79E(uLocal_221[iVar1]))
		{
			if (unk_0x36CEFBE9B745A58D(uLocal_221[iVar1]))
			{
				unk_0x02537C8C1BEEB477(&(uLocal_221[iVar1]));
			}
			else if (func_6(uLocal_221[iVar1], func_7(func_8()), 1) > 100f && func_5(unk_0xBC25C936A095B5BA(), uLocal_221[iVar1], 1) > 300f)
			{
				func_4();
			}
			else if (iLocal_219 && func_6(uLocal_221[iVar1], func_7(func_8()), 1) > 50f)
			{
				if (func_2())
				{
					if (!iLocal_218)
					{
						StringCopy(&Var0, "ESC_", 16);
						StringConCat(&Var0, &(Local_37.f_3D), 16);
						func_42(&Var0, 7500, 1);
						iLocal_218 = 1;
					}
				}
			}
		}
		if (unk_0x2DA8CA50A72528FB(uLocal_223[iVar1]))
		{
			if (!unk_0x724D816EA203A79E(uLocal_221[iVar1]) || unk_0x36CEFBE9B745A58D(uLocal_221[iVar1]))
			{
				unk_0x07B8ECB35A4ED3AC(&(uLocal_223[iVar1]));
			}
		}
		iVar1++;
	}
}

int func_2()//Position - 0x410
{
	if (unk_0x4B8E3E5901E59EB8())
	{
		return 0;
	}
	if (unk_0x11D38424F1DD3B8F())
	{
		if (func_47() && !func_3())
		{
			return 0;
		}
	}
	return 1;
}

int func_3()//Position - 0x440
{
	if (Global_41AB == 1)
	{
		return 1;
	}
	return 0;
}

void func_4()//Position - 0x457
{
	func_56(2);
	func_55();
}

float func_5(int iParam0, int iParam1, bool bParam2)//Position - 0x468
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		vVar0 = { unk_0x541C2AEF053615BC(iParam0, true) };
	}
	else
	{
		vVar0 = { unk_0x541C2AEF053615BC(iParam0, false) };
	}
	if (!unk_0x1D403DFADBC2DE3C(iParam1, 0))
	{
		vVar1 = { unk_0x541C2AEF053615BC(iParam1, true) };
	}
	else
	{
		vVar1 = { unk_0x541C2AEF053615BC(iParam1, false) };
	}
	return unk_0xF0F2FC9DE291567F(vVar0, vVar1, bParam2);
}

float func_6(int iParam0, vector3 vParam1, bool bParam2)//Position - 0x4C6
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

Vector3 func_7(int iParam0)//Position - 0x500
{
	switch (iParam0)
	{
		case 2:
			return 2147.317f, 4795.208f, 40.08961f;
			break;
		
		case 9:
			return 1524.329f, -2108.269f, 75.7248f;
			break;
		
		case 10:
			return -1172.195f, -1577.427f, 3.38152f;
			break;
		
		case 1:
			return 898.3718f, -177.0764f, 72.68348f;
			break;
		
		case 4:
			return 1191.302f, 2672.064f, 36.73154f;
			break;
		
		case 3:
			return -1584.333f, 5193.487f, 2.95912f;
			break;
		
		case 0:
			return 408.3429f, -1623.836f, 28.29278f;
			break;
		
		case 8:
			return -1339.489f, -21.19435f, 50.34566f;
			break;
		
		case 5:
			return 336.207f, 172.4251f, 102.2055f;
			break;
		
		case 6:
			return 394.5495f, -703.3795f, 28.27281f;
			break;
		
		case 7:
			return -1413.184f, -206.0555f, 46.29474f;
			break;
		
		case 11:
			return -560.3809f, 274.5476f, 82.02014f;
			break;
		
		case 12:
			return 221.0845f, 340.7849f, 104.5883f;
			break;
		
		case 13:
			return -296.7154f, 6259.732f, 30.49339f;
			break;
		
		case 14:
			return -2201.402f, 4291f, 47.32429f;
			break;
	}
	return 10f, 10f, 10f;
}

int func_8()//Position - 0x6B3
{
	return Global_195FA.f_14;
}

void func_9()//Position - 0x6C1
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char cVar5[16];
	
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (unk_0x724D816EA203A79E(uLocal_221[iVar0]) && !unk_0x36CEFBE9B745A58D(uLocal_221[iVar0]))
		{
			switch (uLocal_222[iVar0])
			{
				case 0:
					if (func_37(iVar0))
					{
						iLocal_211 = 0;
						uLocal_222[iVar0]++;
					}
					break;
				
				case 1:
					iVar2 = 0;
					iVar1 = 0;
					while (iVar1 <= 5)
					{
						if (unk_0x724D816EA203A79E(uLocal_221[iVar1]) && !unk_0x36CEFBE9B745A58D(uLocal_221[iVar1]))
						{
							iVar2++;
						}
						iVar1++;
					}
					if (iVar2 <= 2)
					{
						uLocal_222[iVar0]++;
					}
					break;
				
				case 2:
					break;
			}
			if (uLocal_222[iVar0] > 0)
			{
				iVar3 = 0;
				unk_0x9CDD10270A1ACF6F(uLocal_221[iVar0], &iVar3, 1);
				if (iVar3 == joaat("weapon_molotov"))
				{
					if (unk_0x7B2E29350659BE8E(uLocal_221[iVar0], joaat("weapon_microsmg"), 0))
					{
						unk_0x8E25082A46F87892(uLocal_221[iVar0], joaat("weapon_microsmg"), true);
					}
					else
					{
						unk_0x7A535CE1F001F3FE(uLocal_221[iVar0], joaat("weapon_microsmg"), -1, true, true);
					}
				}
			}
			switch (uLocal_222[iVar0])
			{
				case 0:
					func_33(uLocal_221[iVar0], Local_37[iVar0 /*10*/].f_4);
					break;
				
				case 1:
					if (!func_32(uLocal_221[iVar0], 780511057, 1))
					{
						unk_0xB8CBD998685C0685(uLocal_221[iVar0], unk_0xBC25C936A095B5BA(), 0, 16);
					}
					break;
				
				case 2:
					if (!func_32(uLocal_221[iVar0], 1805844857, 1))
					{
						unk_0x5558ED6D4A2DEC93(uLocal_221[iVar0], unk_0xBC25C936A095B5BA(), 1000f, -1, 1, 0);
					}
					break;
				}
		}
		iVar0++;
	}
	switch (iLocal_211)
	{
		case 0:
			if (func_31())
			{
				iVar4 = func_30();
				if (iVar4 != -1 && !unk_0x9986AD62CA3DE747(uLocal_221[iVar4]))
				{
					func_28(uLocal_221[iVar4], "SUSPECT_SPOTTED", 10);
					StringCopy(&cVar5, "", 16);
					iLocal_211++;
				}
			}
			break;
		
		case 1:
			if (func_31())
			{
				cVar5 = { func_27("START") };
				if (func_10(&uLocal_46, &cLocal_213, &cVar5, 8, 0, 0, 0))
				{
					StringCopy(&cVar5, "", 16);
					iLocal_211++;
				}
			}
			break;
		
		case 2:
			if (func_31())
			{
				iVar4 = func_30();
				if (iVar4 != -1 && !unk_0x9986AD62CA3DE747(uLocal_221[iVar4]))
				{
					func_28(uLocal_221[iVar4], "SHOUT_THREATEN", 10);
					StringCopy(&cVar5, "", 16);
					iLocal_211++;
				}
			}
			break;
		
		case 3:
			if ((func_31() && (unk_0x105601648511CC64() - iLocal_212) > 3000) && !unk_0x9986AD62CA3DE747(unk_0xBC25C936A095B5BA()))
			{
				func_28(unk_0xBC25C936A095B5BA(), "BLIND_RAGE", 10);
				iLocal_211++;
			}
			break;
		
		case 4:
			if (func_31() && (unk_0x105601648511CC64() - iLocal_212) > 1000)
			{
				iVar4 = func_30();
				if (iVar4 != -1 && !unk_0x9986AD62CA3DE747(uLocal_221[iVar4]))
				{
					if (uLocal_222[iVar4] == 2)
					{
						func_28(uLocal_221[iVar4], "GENERIC_INSULT", 10);
						StringCopy(&cVar5, "", 16);
						iLocal_211 = (iLocal_211 - 1);
					}
					else
					{
						func_28(uLocal_221[iVar4], "SHOUT_THREATEN", 10);
						StringCopy(&cVar5, "", 16);
						iLocal_211 = (iLocal_211 - 1);
					}
				}
			}
			break;
	}
}

bool func_10(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xA2D
{
	func_26(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_11(sParam2, iParam3, 0);
}

int func_11(char* sParam0, int iParam1, bool bParam2)//Position - 0xA7B
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
					func_25();
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
		if (func_24(8, -1))
		{
			return 0;
		}
		Global_3E04 = { Global_3DFE };
		func_23();
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
				func_16();
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
				if (func_15())
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
			if (func_14())
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
			func_13();
			Global_3DC2 = bParam2;
		}
		Global_3DBA = iParam1;
		StringCopy(&Global_3C3B, sParam0, 24);
		Global_394A = 0;
		func_12();
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
		func_25();
	}
	return 0;
}

void func_12()//Position - 0xD47
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

void func_13()//Position - 0xD78
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

int func_14()//Position - 0xE0D
{
	if (Global_389D.f_1 == 1 || Global_389D.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_15()//Position - 0xE34
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

void func_16()//Position - 0xECD
{
	if (func_22(14))
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
		Global_389D = func_17();
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

int func_17()//Position - 0xF6F
{
	func_18();
	return Global_19B04.f_932.f_21B.f_10CD;
}

void func_18()//Position - 0xF88
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_21(Global_19B04.f_932.f_21B.f_10CD) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_20(unk_0xBC25C936A095B5BA());
			if (func_19(iVar0) && (!func_22(14) || Global_196EB))
			{
				if (Global_19B04.f_932.f_21B.f_10CD != iVar0 && func_19(Global_19B04.f_932.f_21B.f_10CD))
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

bool func_19(int iParam0)//Position - 0x1085
{
	return iParam0 < 3;
}

int func_20(int iParam0)//Position - 0x1091
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_21(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_21(int iParam0)//Position - 0x10CE
{
	if (func_19(iParam0))
	{
		return Global_19B04.f_6D75[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_22(int iParam0)//Position - 0x10F8
{
	return Global_8C41 == iParam0;
}

void func_23()//Position - 0x1106
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

bool func_24(int iParam0, int iParam1)//Position - 0x115D
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

void func_25()//Position - 0x1198
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

void func_26(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x11EF
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

struct<4> func_27(char* sParam0)//Position - 0x1245
{
	struct<4> Var0;
	
	StringCopy(&Var0, sParam0, 16);
	switch (func_17())
	{
		case 0:
			StringConCat(&Var0, "_M", 16);
			break;
		
		case 1:
			StringConCat(&Var0, "_F", 16);
			break;
		
		case 2:
			StringConCat(&Var0, "_T", 16);
			break;
	}
	return Var0;
}

void func_28(int iParam0, char* sParam1, int iParam2)//Position - 0x1290
{
	unk_0x53D8178763EDCE60(iParam0, sParam1, func_29(iParam2), 1);
}

int func_29(int iParam0)//Position - 0x12A7
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

int func_30()//Position - 0x1496
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	iVar0 = -1;
	fVar2 = 999999f;
	iVar1 = 0;
	while (iVar1 <= 5)
	{
		if (unk_0x724D816EA203A79E(uLocal_221[iVar1]) && !unk_0x36CEFBE9B745A58D(uLocal_221[iVar1]))
		{
			fVar3 = func_5(uLocal_221[iVar1], unk_0xBC25C936A095B5BA(), 1);
			if (fVar3 < 30f && fVar3 < fVar2)
			{
				iVar0 = iVar1;
				fVar2 = fVar3;
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_31()//Position - 0x150A
{
	if (func_47())
	{
		return 0;
	}
	if (unk_0x11D38424F1DD3B8F())
	{
		if (unk_0x4B8E3E5901E59EB8())
		{
			return 0;
		}
	}
	return 1;
}

int func_32(int iParam0, int iParam1, bool bParam2)//Position - 0x1530
{
	int iVar0;
	
	iVar0 = unk_0xF4FCC3C1048FF2AB(iParam0, iParam1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	else if (!bParam2)
	{
		if (iVar0 == 2 || iVar0 == 3)
		{
			return 1;
		}
	}
	return 0;
}

void func_33(int iParam0, vector3 vParam1)//Position - 0x1576
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	unk_0x9CDD10270A1ACF6F(iParam0, &iVar0, 1);
	if (!func_36(vParam1))
	{
		unk_0x9CDD10270A1ACF6F(iParam0, &iVar1, 1);
		if (iVar0 == joaat("weapon_molotov"))
		{
			if (iVar1 != joaat("weapon_molotov"))
			{
				unk_0x8E25082A46F87892(iParam0, joaat("weapon_molotov"), true);
			}
			if (unk_0xF4FCC3C1048FF2AB(iParam0, 242628503) != 1 && unk_0xF4FCC3C1048FF2AB(iParam0, 242628503) != 0)
			{
				unk_0xC5A6DFE2B8987B17(&iVar2);
				unk_0xDE2D2B13F24A979D(0, unk_0x491B2241281A03B7(1000, 6000));
				unk_0x5B6CE0881FC10D93(0, func_34(vParam1, 1f), 0, 0);
				unk_0xDE2D2B13F24A979D(0, unk_0x491B2241281A03B7(1000, 6000));
				unk_0x5B6CE0881FC10D93(0, func_34(vParam1, 1f), 0, 0);
				unk_0xDE2D2B13F24A979D(0, unk_0x491B2241281A03B7(1000, 6000));
				unk_0x5B6CE0881FC10D93(0, func_34(vParam1, 1f), 0, 0);
				unk_0xDE2D2B13F24A979D(0, unk_0x491B2241281A03B7(1000, 6000));
				unk_0x5B6CE0881FC10D93(0, func_34(vParam1, 1f), 0, 0);
				unk_0xDE2D2B13F24A979D(0, unk_0x491B2241281A03B7(1000, 6000));
				unk_0x5B6CE0881FC10D93(0, func_34(vParam1, 1f), 0, 0);
				unk_0xDE2D2B13F24A979D(0, unk_0x491B2241281A03B7(1000, 6000));
				unk_0x5B6CE0881FC10D93(0, func_34(vParam1, 1f), 0, 0);
				unk_0xDE2D2B13F24A979D(0, unk_0x491B2241281A03B7(1000, 6000));
				unk_0x5B6CE0881FC10D93(0, func_34(vParam1, 1f), 0, 0);
				unk_0xDE2D2B13F24A979D(0, unk_0x491B2241281A03B7(1000, 6000));
				unk_0x5B6CE0881FC10D93(0, func_34(vParam1, 1f), 0, 0);
				unk_0xAFD74A5E065F57E0(iVar2, 1);
				unk_0x535008C596714F9E(iVar2);
				unk_0xA8E6405305C0D7DF(iParam0, iVar2);
				unk_0x02DAF06EA4F08219(&iVar2);
			}
		}
		else if (unk_0xF4FCC3C1048FF2AB(iParam0, -653332088) != 1 && unk_0xF4FCC3C1048FF2AB(iParam0, -653332088) != 0)
		{
			unk_0xAD955309D7708805(iParam0, vParam1, -1, -687903391);
		}
	}
	else if (unk_0xF4FCC3C1048FF2AB(iParam0, -982327190) != 1 && unk_0xF4FCC3C1048FF2AB(iParam0, -982327190) != 0)
	{
		unk_0xDE2D2B13F24A979D(iParam0, -1);
	}
}

Vector3 func_34(vector3 vParam0, float fParam1)//Position - 0x175A
{
	vector3 vVar0;
	
	vVar0 = { unk_0x55AEFCD285ECC0F2(-1f, 1f), unk_0x55AEFCD285ECC0F2(-1f, 1f), unk_0x55AEFCD285ECC0F2(-1f, 1f) };
	return vParam0 + func_35(vVar0, unk_0x55AEFCD285ECC0F2(0f, fParam1));
}

Vector3 func_35(vector3 vParam0, float fParam1)//Position - 0x178C
{
	float fVar0;
	
	if (fParam1 == 0f)
	{
		return 0f, 0f, 0f;
	}
	fVar0 = SYSTEM::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		return vParam0 * FtoV((fParam1 / fVar0));
	}
	return 0f, 0f, 0f;
}

int func_36(vector3 vParam0)//Position - 0x17C3
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_37(int iParam0)//Position - 0x17ED
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if ((unk_0x724D816EA203A79E(uLocal_221[iVar0]) && !unk_0x36CEFBE9B745A58D(uLocal_221[iVar0])) && uLocal_222[iVar0] > 0)
		{
			iLocal_219 = 1;
		}
		iVar0++;
	}
	if (((((((((((func_38(Global_195FA.f_23, 134217728) || unk_0x1028B6250119A74B(uLocal_221[iParam0], unk_0xBC25C936A095B5BA())) || unk_0x0921C54CF8DFC6E7(unk_0xB5CEFD608600A09F(), uLocal_221[iParam0])) || unk_0x48EBE45A9A7EB10C(uLocal_221[iParam0])) || unk_0x04880508C862E589(unk_0x541C2AEF053615BC(uLocal_221[iParam0], true), 15f, 1)) || unk_0xB7CB92A84A7518CD(unk_0x541C2AEF053615BC(uLocal_221[iParam0], true), 15f, 1, 1)) || unk_0xC9FA5D38428AB6BE(21, unk_0x541C2AEF053615BC(uLocal_221[iParam0], true), 15f)) || unk_0xC9FA5D38428AB6BE(10, unk_0x541C2AEF053615BC(uLocal_221[iParam0], true), 15f)) || unk_0xC9FA5D38428AB6BE(7, unk_0x541C2AEF053615BC(uLocal_221[iParam0], true), 15f)) || unk_0xC9FA5D38428AB6BE(0, unk_0x541C2AEF053615BC(uLocal_221[iParam0], true), 15f)) || unk_0xC9FA5D38428AB6BE(1, unk_0x541C2AEF053615BC(uLocal_221[iParam0], true), 15f)) || iLocal_219)
	{
		return 1;
	}
	return 0;
}

bool func_38(var uParam0, int iParam1)//Position - 0x195A
{
	return (uParam0 && iParam1) != 0;
}

void func_39()//Position - 0x1969
{
	int iVar0;
	var uVar1[2];
	int iVar2;
	vector3 vVar3[24];
	int iVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	char cVar13[16];
	
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (unk_0x724D816EA203A79E(uLocal_220[iVar0]) && unk_0xE59B7F5A03335350(uLocal_220[iVar0], 0))
		{
			iVar2 = 0;
			while (iVar2 <= 5)
			{
				if (unk_0x724D816EA203A79E(uLocal_221[iVar2]) && !unk_0x36CEFBE9B745A58D(uLocal_221[iVar2]))
				{
					if (Local_37[iVar2 /*10*/].f_8 != -1 && Local_37[iVar2 /*10*/].f_8 == iVar0)
					{
						if (!unk_0x62F3A07C43FFB568(uLocal_221[iVar2], uLocal_220[iVar0], 0))
						{
							uVar1[iVar0]++;
						}
					}
				}
				iVar2++;
			}
		}
		StringCopy(&cVar3, "iPedsGettingToVeh[", 24);
		StringIntConCat(&cVar3, iVar0, 24);
		StringConCat(&cVar3, "]: ", 24);
		StringIntConCat(&cVar3, uVar1[iVar0], 24);
		unk_0xD4E50AEC04C3A55A(&cVar3, 0.05f, (0.25f + (IntToFloat(iVar0) * 0.025f)), 0f, 255, 255, 255, 255);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (unk_0x724D816EA203A79E(uLocal_221[iVar0]) && !unk_0x36CEFBE9B745A58D(uLocal_221[iVar0]))
		{
			switch (uLocal_222[iVar0])
			{
				case 0:
					if (func_37(iVar0))
					{
						iLocal_211 = 0;
						uLocal_222[iVar0]++;
					}
					break;
				
				case 1:
					if (Local_37[iVar0 /*10*/].f_8 == -1)
					{
						if (!unk_0xA0747FCBCF1D1424(uLocal_221[iVar0], 286, 1))
						{
							unk_0xC8FD3EBBB90E8D7F(uLocal_221[iVar0], 286, true);
						}
					}
					else
					{
						bVar5 = false;
						if (unk_0x5237AF95232D78C5(uLocal_221[iVar0], 0))
						{
							iVar6 = unk_0x9FE9D386222EEE47(uLocal_221[iVar0], 0);
							iVar4 = 0;
							while (iVar4 <= 1)
							{
								if (!bVar5)
								{
									if (uLocal_220[iVar4] == iVar6)
									{
										if (uVar1[iVar4] == 0)
										{
											bVar5 = true;
										}
									}
								}
								iVar4++;
							}
							if (bVar5)
							{
								if (iLocal_215 == -1 && func_40(uLocal_221[iVar0], 0) == -1)
								{
									iLocal_215 = iVar0;
								}
								uLocal_222[iVar0]++;
							}
						}
					}
					break;
				
				case 2:
					if (iLocal_215 != -1)
					{
						iLocal_216 = iLocal_215;
						if (unk_0x724D816EA203A79E(uLocal_221[iLocal_215]))
						{
							if (unk_0x5237AF95232D78C5(uLocal_221[iLocal_215], 0))
							{
								iVar7 = unk_0x9FE9D386222EEE47(uLocal_221[iLocal_215], 0);
							}
						}
					}
					if ((((((((iLocal_215 == -1 || !unk_0x724D816EA203A79E(uLocal_221[iLocal_215])) || unk_0x36CEFBE9B745A58D(uLocal_221[iLocal_215])) || !unk_0x724D816EA203A79E(iVar7)) || !unk_0xE59B7F5A03335350(iVar7, 0)) || unk_0xE1A8FD31526DD6C8(iVar7, 0, 1)) || unk_0xE1A8FD31526DD6C8(iVar7, 1, 1)) || unk_0xE1A8FD31526DD6C8(iVar7, 4, 1)) || unk_0xE1A8FD31526DD6C8(iVar7, 5, 1))
					{
						iVar8 = -1;
						bVar9 = false;
						iVar4 = 0;
						while (iVar4 <= 5)
						{
							if (unk_0x724D816EA203A79E(uLocal_221[iVar4]) && !unk_0x36CEFBE9B745A58D(uLocal_221[iVar4]))
							{
								if (func_40(uLocal_221[iVar4], 0) == -1)
								{
									if (iVar8 == -1 || !bVar9)
									{
										bVar9 = true;
										iVar8 = iVar4;
									}
								}
								else if (!bVar9)
								{
									iVar8 = iVar4;
								}
							}
							iVar4++;
						}
						if (iVar8 != -1)
						{
							iLocal_215 = iVar8;
						}
					}
					break;
			}
			if (uLocal_222[iVar0] > 0)
			{
				iVar10 = 0;
				unk_0x9CDD10270A1ACF6F(uLocal_221[iVar0], &iVar10, 1);
				if (iVar10 == joaat("weapon_molotov"))
				{
					if (unk_0x7B2E29350659BE8E(uLocal_221[iVar0], joaat("weapon_microsmg"), 0))
					{
						unk_0x8E25082A46F87892(uLocal_221[iVar0], joaat("weapon_microsmg"), true);
					}
					else
					{
						unk_0x7A535CE1F001F3FE(uLocal_221[iVar0], joaat("weapon_microsmg"), -1, true, true);
					}
				}
			}
			switch (uLocal_222[iVar0])
			{
				case 0:
					func_33(uLocal_221[iVar0], Local_37[iVar0 /*10*/].f_4);
					break;
				
				case 1:
					if (Local_37[iVar0 /*10*/].f_8 == -1)
					{
						if (!func_32(uLocal_221[iVar0], 780511057, 1))
						{
							unk_0xB8CBD998685C0685(uLocal_221[iVar0], unk_0xBC25C936A095B5BA(), 0, 16);
						}
					}
					else if (uLocal_220[Local_37[iVar0 /*10*/].f_8] == 0 || Local_37[iVar0 /*10*/].f_9 == -2)
					{
					}
					else if (!unk_0x62F3A07C43FFB568(uLocal_221[iVar0], uLocal_220[Local_37[iVar0 /*10*/].f_8], 0))
					{
						if (func_5(uLocal_221[iVar0], uLocal_220[Local_37[iVar0 /*10*/].f_8], 1) > 4f)
						{
							if (!func_32(uLocal_221[iVar0], 780511057, 1))
							{
								unk_0xDE6B8773FB16B4DE(uLocal_221[iVar0], uLocal_220[Local_37[iVar0 /*10*/].f_8], 0f, 0f, 0f, 4f, 0);
								unk_0xB8CBD998685C0685(uLocal_221[iVar0], unk_0xBC25C936A095B5BA(), 0, 16);
							}
						}
						else if (!func_32(uLocal_221[iVar0], -1794415470, 1))
						{
							unk_0xD179FA0466FA4FE3(uLocal_221[iVar0], uLocal_220[Local_37[iVar0 /*10*/].f_8], -1, Local_37[iVar0 /*10*/].f_9, 2f, 1, 0);
						}
					}
					else if (!func_32(uLocal_221[iVar0], 538064912, 1))
					{
						unk_0x875A238659691C53(uLocal_221[iVar0], unk_0xBC25C936A095B5BA(), 1101004800);
					}
					break;
				
				case 2:
					if (unk_0x5237AF95232D78C5(uLocal_221[iVar0], 0))
					{
						if (iLocal_215 == iVar0)
						{
							if (func_40(uLocal_221[iVar0], 0) != -1)
							{
								if (!func_32(uLocal_221[iVar0], 355471868, 1))
								{
									unk_0x9BFB4F4439403039(uLocal_221[iVar0], unk_0x9FE9D386222EEE47(uLocal_221[iVar0], 0), 0);
								}
							}
							else if (!func_32(uLocal_221[iVar0], -1273030092, 1) || iLocal_215 != iLocal_216)
							{
								unk_0x1A06AE15BF21D407(uLocal_221[iVar0], unk_0x9FE9D386222EEE47(uLocal_221[iVar0], 0), unk_0xBC25C936A095B5BA(), 8, 40f, 786468, 1000f, 0f, 1);
							}
							else if (unk_0xF4FCC3C1048FF2AB(uLocal_221[iVar0], -1273030092) == 1)
							{
								if (!unk_0x55D2D1156024C86F(uLocal_221[iVar0]))
								{
									unk_0x10790F4A9247B707(uLocal_221[iVar0], unk_0xBC25C936A095B5BA(), 0, 0f, 0f, 0f, 1000f, 100, 1, -753768974);
								}
							}
						}
						else if (func_40(uLocal_221[iVar0], 0) == -1)
						{
							if (!func_32(uLocal_221[iVar0], -1273030092, 1) || iLocal_215 != iLocal_216)
							{
								unk_0x7AB043D579636764(uLocal_221[iVar0], unk_0x9FE9D386222EEE47(uLocal_221[iVar0], 0), unk_0x9FE9D386222EEE47(uLocal_221[iLocal_215], 0), -1, 40f, 786468, -1f, 20, 20f);
							}
							else if (unk_0xF4FCC3C1048FF2AB(uLocal_221[iVar0], -1273030092) == 1)
							{
								if (!unk_0x55D2D1156024C86F(uLocal_221[iVar0]))
								{
									unk_0x10790F4A9247B707(uLocal_221[iVar0], unk_0xBC25C936A095B5BA(), 0, 0f, 0f, 0f, 1000f, 100, 1, -753768974);
								}
							}
						}
						else
						{
							iVar11 = unk_0x3187EF5798B5D209(unk_0x9FE9D386222EEE47(uLocal_221[iVar0], 0), -1, 0);
							if (!unk_0x724D816EA203A79E(iVar11) || unk_0x36CEFBE9B745A58D(iVar11))
							{
								if (!func_32(uLocal_221[iVar0], 355471868, 1))
								{
									unk_0x9BFB4F4439403039(uLocal_221[iVar0], unk_0x9FE9D386222EEE47(uLocal_221[iVar0], 0), 0);
								}
							}
							else if (!func_32(uLocal_221[iVar0], 2104565373, 1) || iLocal_215 != iLocal_216)
							{
								unk_0x10790F4A9247B707(uLocal_221[iVar0], unk_0xBC25C936A095B5BA(), 0, 0f, 0f, 0f, 1000f, 100, 1, -753768974);
							}
						}
					}
					break;
				}
		}
		iVar0++;
	}
	switch (iLocal_211)
	{
		case 0:
			if (func_31())
			{
				iVar12 = func_30();
				if (iVar12 != -1 && !unk_0x9986AD62CA3DE747(uLocal_221[iVar12]))
				{
					func_28(uLocal_221[iVar12], "SUSPECT_SPOTTED", 10);
					StringCopy(&cVar13, "", 16);
					iLocal_211++;
				}
			}
			break;
		
		case 1:
			if (func_31())
			{
				cVar13 = { func_27("START") };
				if (func_10(&uLocal_46, &cLocal_213, &cVar13, 8, 0, 0, 0))
				{
					StringCopy(&cVar13, "", 16);
					iLocal_211++;
				}
			}
			break;
		
		case 2:
			if (func_31())
			{
				iVar12 = func_30();
				if (iVar12 != -1 && !unk_0x9986AD62CA3DE747(uLocal_221[iVar12]))
				{
					func_28(uLocal_221[iVar12], "SHOUT_THREATEN", 10);
					StringCopy(&cVar13, "", 16);
					iLocal_211++;
				}
			}
			break;
		
		case 3:
			if ((func_31() && (unk_0x105601648511CC64() - iLocal_212) > 3000) && !unk_0x9986AD62CA3DE747(unk_0xBC25C936A095B5BA()))
			{
				func_28(unk_0xBC25C936A095B5BA(), "BLIND_RAGE", 10);
				iLocal_211++;
			}
			break;
		
		case 4:
			if (func_31() && (unk_0x105601648511CC64() - iLocal_212) > 1000)
			{
				iVar12 = func_30();
				if (iVar12 != -1 && !unk_0x9986AD62CA3DE747(uLocal_221[iVar12]))
				{
					if (unk_0x5237AF95232D78C5(uLocal_221[iVar12], 0))
					{
						func_28(uLocal_221[iVar12], "GENERIC_INSULT", 10);
						StringCopy(&cVar13, "", 16);
						iLocal_211 = (iLocal_211 - 1);
					}
					else
					{
						func_28(uLocal_221[iVar12], "SHOUT_THREATEN", 10);
						StringCopy(&cVar13, "", 16);
						iLocal_211 = (iLocal_211 - 1);
					}
				}
			}
			break;
	}
}

int func_40(int iParam0, int iParam1)//Position - 0x228C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		if (unk_0x5237AF95232D78C5(iParam0, iParam1))
		{
			iVar0 = unk_0x9FE9D386222EEE47(iParam0, iParam1);
			if (unk_0x724D816EA203A79E(iVar0))
			{
				iVar1 = unk_0x7C02672B11D4F65B(unk_0x6F79ECA8C83E4357(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0x1AAF0C23233C57AF(iVar0, iVar3, 0))
					{
						if (unk_0x3187EF5798B5D209(iVar0, iVar3, 0) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

void func_41()//Position - 0x2311
{
	func_56(1);
	func_55();
}

void func_42(char* sParam0, int iParam1, int iParam2)//Position - 0x2322
{
	iParam2 = iParam2;
	unk_0x3714DE83381EADC2(sParam0);
	unk_0x41D8F63F629E76BE(iParam1, 1);
}

int func_43(int iParam0, bool bParam1, int iParam2)//Position - 0x233B
{
	int iVar0;
	
	iVar0 = func_44(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x2DA8CA50A72528FB(iVar0)) && unk_0x0F6F4C227FB5DD52(&(Global_19B04.f_6D75[iParam2 /*29*/].f_3)))
	{
		unk_0x436D0272182E484D(iVar0, &(Global_19B04.f_6D75[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_44(int iParam0, bool bParam1, bool bParam2)//Position - 0x238D
{
	int iVar0;
	
	if (!unk_0x724D816EA203A79E(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x511FE22BCF5353CD(iParam0);
	if (unk_0xD27AC0E9B78CFDD7(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(iVar0, func_45(unk_0x7AF0088ABFA713B6(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xF9C2945DB5BAB4BF(iVar0, bParam1);
		}
		else
		{
			unk_0x0D5352939CC40C16(iVar0, 2);
		}
	}
	else if (unk_0x386592AF38881675(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(iVar0, func_45(unk_0x7AF0088ABFA713B6(), 0.7f, 0.7f));
		unk_0xF9C2945DB5BAB4BF(iVar0, bParam1);
	}
	else if (unk_0xB12D030810E8447D(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(iVar0, func_45(unk_0x7AF0088ABFA713B6(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_45(bool bParam0, float fParam1, float fParam2)//Position - 0x2431
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_46(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)//Position - 0x2448
{
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		unk_0x6CCBC1B22488DC0C(iParam0, fParam1);
		unk_0xAA40189C27870A99(iParam0, fParam2);
		unk_0x3BA6DE071C07D143(iParam0, (fParam3 / 2f));
		unk_0x1BAA0038DD57C475(iParam0, fParam4);
		unk_0x9C4E6006A4F26EB5(iParam0, fParam5);
	}
}

int func_47()//Position - 0x2484
{
	if (Global_3DB8 != 0 || unk_0xE6711F601F11B66B())
	{
		return 1;
	}
	return 0;
}

void func_48()//Position - 0x24A6
{
	int iVar0;
	
	switch (func_17())
	{
		case 0:
			func_54(&uLocal_46, 0, unk_0xBC25C936A095B5BA(), "MICHAEL", 0, 1);
			break;
		
		case 1:
			func_54(&uLocal_46, 1, unk_0xBC25C936A095B5BA(), "FRANKLIN", 0, 1);
			break;
		
		case 2:
			func_54(&uLocal_46, 2, unk_0xBC25C936A095B5BA(), "TREVOR", 0, 1);
			break;
	}
	unk_0xDF53A66AEE1401AA(0.1f);
	unk_0xE85B33FB221A23CD(3, false);
	unk_0x6E52C7765A0F4382(0);
	iLocal_45 = func_52();
	switch (func_8())
	{
		case 11:
			iVar0 = 0;
			break;
		
		case 12:
			iVar0 = 1;
			break;
		
		case 13:
			iVar0 = 2;
			break;
		
		case 14:
			iVar0 = 0;
			break;
	}
	func_51(&(Local_37[0 /*10*/]), func_8(), 0);
	func_51(&(Local_37[1 /*10*/]), func_8(), 1);
	func_51(&(Local_37[2 /*10*/]), func_8(), 2);
	func_51(&(Local_37[3 /*10*/]), func_8(), 3);
	func_51(&(Local_37[4 /*10*/]), func_8(), 4);
	func_51(&(Local_37[5 /*10*/]), func_8(), 5);
	StringCopy(&(Local_37.f_3D), func_50(iVar0), 16);
	StringCopy(&(Local_37.f_41), func_49(iVar0), 16);
	unk_0xB2CB6EAA6B280A84("relGang", &iLocal_224);
	unk_0xA902E18EDF6FA0C8(5, 1862763509, iLocal_224);
	unk_0xA902E18EDF6FA0C8(5, iLocal_224, 1862763509);
	unk_0xA902E18EDF6FA0C8(5, iLocal_224, -1533126372);
	switch (iVar0)
	{
		case 0:
			unk_0xA902E18EDF6FA0C8(5, 1862763509, 296331235);
			unk_0xA902E18EDF6FA0C8(1, iLocal_224, 296331235);
			unk_0xA902E18EDF6FA0C8(1, 296331235, iLocal_224);
			break;
		
		case 1:
			unk_0xA902E18EDF6FA0C8(5, 1862763509, -1033021910);
			unk_0xA902E18EDF6FA0C8(1, iLocal_224, -1033021910);
			unk_0xA902E18EDF6FA0C8(1, -1033021910, iLocal_224);
			break;
		
		case 2:
			unk_0xA902E18EDF6FA0C8(5, 1862763509, 1782292358);
			unk_0xA902E18EDF6FA0C8(1, iLocal_224, 1782292358);
			unk_0xA902E18EDF6FA0C8(1, 1782292358, iLocal_224);
			break;
	}
}

char* func_49(int iParam0)//Position - 0x2694
{
	switch (iParam0)
	{
		case 1:
			return "BALLA1";
			break;
		
		case 2:
			return "KOREANGUY";
			break;
		
		case 0:
			return "VAGOS";
			break;
		
		default:
			return "";
			break;
	}
	return "";
}

char* func_50(int iParam0)//Position - 0x26DF
{
	switch (iParam0)
	{
		case 1:
			return "BAL";
			break;
		
		case 2:
			return "KOR";
			break;
		
		case 0:
			return "VAG";
			break;
		
		default:
			return "";
			break;
	}
	return "";
}

void func_51(var uParam0, int iParam1, int iParam2)//Position - 0x272A
{
	switch (iParam1)
	{
		case 11:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { -543.6415f, 303.5388f, 82.0202f };
					uParam0->f_3 = 231.5559f;
					uParam0->f_4 = { 0f, 0f, 0f };
					uParam0->f_7 = joaat("weapon_pumpshotgun");
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
				
				case 1:
					*uParam0 = { -563.5045f, 303.3635f, 82.192f };
					uParam0->f_3 = 191.6703f;
					uParam0->f_4 = { -561.9358f, 293.7914f, 84.1827f };
					uParam0->f_7 = joaat("weapon_microsmg");
					uParam0->f_8 = 0;
					uParam0->f_9 = -1;
					break;
				
				case 2:
					*uParam0 = { -547.9926f, 299.531f, 82.0218f };
					uParam0->f_3 = 170.2791f;
					uParam0->f_4 = { -550.0999f, 292.7203f, 87.8903f };
					uParam0->f_7 = joaat("weapon_assaultrifle");
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
				
				case 3:
					*uParam0 = { -551.7525f, 301.2135f, 82.1226f };
					uParam0->f_3 = 132.7229f;
					uParam0->f_4 = { -561.2323f, 294.0457f, 87.6588f };
					uParam0->f_7 = joaat("weapon_microsmg");
					uParam0->f_8 = 1;
					uParam0->f_9 = -1;
					break;
				
				case 4:
					*uParam0 = { -549.7384f, 303.0894f, 82.0981f };
					uParam0->f_3 = 167.5811f;
					uParam0->f_4 = { -552.8337f, 292.7388f, 88.2295f };
					uParam0->f_7 = joaat("weapon_molotov");
					uParam0->f_8 = 0;
					uParam0->f_9 = 0;
					break;
				
				case 5:
					*uParam0 = { -558.4697f, 303.0401f, 82.2333f };
					uParam0->f_3 = 161.0839f;
					uParam0->f_4 = { -561.9985f, 293.9765f, 87.8096f };
					uParam0->f_7 = joaat("weapon_molotov");
					uParam0->f_8 = 1;
					uParam0->f_9 = 0;
					break;
			}
			break;
		
		case 12:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { 231.2834f, 345.2137f, 104.3893f };
					uParam0->f_3 = 324.6404f;
					uParam0->f_4 = { 0f, 0f, 0f };
					uParam0->f_7 = joaat("weapon_sawnoffshotgun");
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
				
				case 1:
					*uParam0 = { 236.5094f, 339.3164f, 104.5298f };
					uParam0->f_3 = 112.7911f;
					uParam0->f_4 = { 230.1282f, 337.069f, 106.8048f };
					uParam0->f_7 = joaat("weapon_microsmg");
					uParam0->f_8 = 0;
					uParam0->f_9 = -1;
					break;
				
				case 2:
					*uParam0 = { 224.3295f, 348.2992f, 104.4469f };
					uParam0->f_3 = 165.7146f;
					uParam0->f_4 = { 221.6486f, 340.3152f, 106.6212f };
					uParam0->f_7 = joaat("weapon_assaultrifle");
					uParam0->f_8 = 1;
					uParam0->f_9 = -1;
					break;
				
				case 3:
					*uParam0 = { 234.1038f, 341.6698f, 104.5309f };
					uParam0->f_3 = 110.0142f;
					uParam0->f_4 = { 223.9347f, 338.3914f, 106.8137f };
					uParam0->f_7 = joaat("weapon_microsmg");
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
				
				case 4:
					*uParam0 = { 228.9968f, 344.3681f, 104.5384f };
					uParam0->f_3 = 153.6073f;
					uParam0->f_4 = { 224.4416f, 336.0886f, 106.1191f };
					uParam0->f_7 = joaat("weapon_molotov");
					uParam0->f_8 = 0;
					uParam0->f_9 = 0;
					break;
				
				case 5:
					*uParam0 = { 221.382f, 346.3744f, 104.5675f };
					uParam0->f_3 = 165.8422f;
					uParam0->f_4 = { 219.6116f, 340.9911f, 106.4532f };
					uParam0->f_7 = joaat("weapon_microsmg");
					uParam0->f_8 = 1;
					uParam0->f_9 = 0;
					break;
			}
			break;
		
		case 13:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { -325.1079f, 6263.833f, 30.4151f };
					uParam0->f_3 = 195.9702f;
					uParam0->f_4 = { 0f, 0f, 0f };
					uParam0->f_7 = joaat("weapon_sawnoffshotgun");
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
				
				case 1:
					*uParam0 = { -312.9843f, 6250.115f, 30.4899f };
					uParam0->f_3 = 319.1074f;
					uParam0->f_4 = { -308.3476f, 6254.857f, 32.6941f };
					uParam0->f_7 = joaat("weapon_assaultrifle");
					uParam0->f_8 = 0;
					uParam0->f_9 = 0;
					break;
				
				case 2:
					*uParam0 = { -326.1756f, 6268.338f, 30.4714f };
					uParam0->f_3 = 261.9836f;
					uParam0->f_4 = { -312.8552f, 6265.857f, 43.5835f };
					uParam0->f_7 = joaat("weapon_molotov");
					uParam0->f_8 = 1;
					uParam0->f_9 = -1;
					break;
				
				case 3:
					*uParam0 = { -323.9344f, 6259.659f, 30.3539f };
					uParam0->f_3 = 292.4941f;
					uParam0->f_4 = { -313.3472f, 6263.395f, 42.7414f };
					uParam0->f_7 = joaat("weapon_molotov");
					uParam0->f_8 = 1;
					uParam0->f_9 = 0;
					break;
				
				case 4:
					*uParam0 = { -318.7812f, 6259.576f, 30.5161f };
					uParam0->f_3 = 295.0701f;
					uParam0->f_4 = { -313.766f, 6261.479f, 32.6516f };
					uParam0->f_7 = joaat("weapon_microsmg");
					uParam0->f_8 = 0;
					uParam0->f_9 = -1;
					break;
				
				case 5:
					*uParam0 = { -314.925f, 6255.542f, 30.5164f };
					uParam0->f_3 = 309.7791f;
					uParam0->f_4 = { -310.572f, 6258.45f, 32.6648f };
					uParam0->f_7 = joaat("weapon_pumpshotgun");
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
			}
			break;
		
		case 14:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { -2215.32f, 4275.046f, 46.475f };
					uParam0->f_3 = 16.955f;
					uParam0->f_4 = { 0f, 0f, 0f };
					uParam0->f_7 = joaat("weapon_pumpshotgun");
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
				
				case 1:
					*uParam0 = { -2195.425f, 4262.31f, 47.2741f };
					uParam0->f_3 = 241.4366f;
					uParam0->f_4 = { -2185.362f, 4256.376f, 48.4082f };
					uParam0->f_7 = joaat("weapon_molotov");
					uParam0->f_8 = 1;
					uParam0->f_9 = 0;
					break;
				
				case 2:
					*uParam0 = { -2200.848f, 4268.19f, 47.3093f };
					uParam0->f_3 = 331.1949f;
					uParam0->f_4 = { -2196.575f, 4275.129f, 49.0669f };
					uParam0->f_7 = joaat("weapon_assaultrifle");
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
				
				case 3:
					*uParam0 = { -2202.818f, 4294.149f, 47.4518f };
					uParam0->f_3 = 263.7257f;
					uParam0->f_4 = { -2192.783f, 4289.572f, 50.3251f };
					uParam0->f_7 = joaat("weapon_molotov");
					uParam0->f_8 = 0;
					uParam0->f_9 = 0;
					break;
				
				case 4:
					*uParam0 = { -2196.271f, 4265.064f, 47.3446f };
					uParam0->f_3 = 325.4524f;
					uParam0->f_4 = { -2191.183f, 4271.747f, 49.867f };
					uParam0->f_7 = joaat("weapon_pumpshotgun");
					uParam0->f_8 = 1;
					uParam0->f_9 = -1;
					break;
				
				case 5:
					*uParam0 = { -2204.492f, 4290.059f, 47.3773f };
					uParam0->f_3 = 269.5739f;
					uParam0->f_4 = { -2193.017f, 4292.669f, 54.873f };
					uParam0->f_7 = joaat("weapon_microsmg");
					uParam0->f_8 = 0;
					uParam0->f_9 = -1;
					break;
			}
			break;
	}
}

int func_52()//Position - 0x2E91
{
	return func_53(Global_195FA.f_14, Global_195FA.f_1D);
}

int func_53(var uParam0, int iParam1)//Position - 0x2EA9
{
	uParam0 = uParam0;
	switch (iParam1)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
	}
	return 0;
}

void func_54(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x2ED7
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

void func_55()//Position - 0x2F72
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (unk_0x724D816EA203A79E(uLocal_221[iVar0]))
		{
			if (!unk_0x36CEFBE9B745A58D(uLocal_221[iVar0]) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				unk_0x5558ED6D4A2DEC93(uLocal_221[iVar0], unk_0xBC25C936A095B5BA(), 1000f, -1, 0, 1);
			}
			unk_0x02537C8C1BEEB477(&(uLocal_221[iVar0]));
		}
		if (unk_0x2DA8CA50A72528FB(uLocal_223[iVar0]))
		{
			unk_0x07B8ECB35A4ED3AC(&(uLocal_223[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (unk_0x724D816EA203A79E(uLocal_220[iVar0]))
		{
			unk_0x1E7A09C1710FB071(&(uLocal_220[iVar0]));
		}
		iVar0++;
	}
	unk_0x23180B0A9E8D2951(iLocal_225, false);
	unk_0x8510BC031C24B862(iLocal_226, false);
	unk_0xDF53A66AEE1401AA(1f);
	unk_0xE85B33FB221A23CD(3, true);
	unk_0x6E52C7765A0F4382(1);
	unk_0x95E4B6F3ED223F5A();
}

void func_56(int iParam0)//Position - 0x3041
{
	Global_195FA.f_16 = iParam0;
}

