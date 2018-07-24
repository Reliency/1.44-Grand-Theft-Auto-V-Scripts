#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
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
	int iLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	bool bLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	bool bLocal_58 = 0;
	int iLocal_59 = 0;
	vector3 vLocal_60 = { 0f, 0f, 0f };
	vector3 vLocal_61 = { 0f, 0f, 0f };
	float fLocal_62 = 0f;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 16;
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
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	int iLocal_234 = 0;
	int iLocal_235 = 0;
	int iLocal_236 = 0;
	int iLocal_237 = 0;
	struct<57> Local_238 = { 0, 0, 0, -1281684762, 0, 0, -163714847, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_239 = 0;
	struct<5> Local_240[2];
	struct<21> Local_241 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
#endregion

void __EntryFunction__()//Position - 0x0
{
	iLocal_0 = 3;
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_15 = 0.001f;
	iLocal_18 = -1;
	sLocal_21 = "NULL";
	fLocal_24 = 80f;
	fLocal_25 = 140f;
	fLocal_26 = 180f;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	if (unk_0x7AF0088ABFA713B6())
	{
		func_102(ScriptParam_241);
	}
	while (true)
	{
		func_101();
		if (func_91())
		{
			func_87();
		}
		if (unk_0x7AF0088ABFA713B6())
		{
			func_86();
			switch (func_85(unk_0x6BAA0516CC970D99()))
			{
				case 0:
					if (func_84() > 0)
					{
						Local_240[unk_0x6BAA0516CC970D99() /*5*/] = 2;
					}
					break;
				
				case 2:
					if (func_84() == 3)
					{
						Local_240[unk_0x6BAA0516CC970D99() /*5*/] = 3;
					}
					break;
				
				case 3:
					func_87();
					break;
			}
			if (unk_0x0DE6397A2CB3EF75())
			{
				switch (func_84())
				{
					case 0:
						Local_238 = 2;
						break;
					
					case 2:
						func_1();
						break;
					
					case 3:
						break;
					}
				}
		}
	}
}

void func_1()//Position - 0x125
{
	switch (Local_238.f_1)
	{
		case 0:
			func_25();
			break;
		
		case 1:
			func_24();
			break;
	}
	if (Local_238.f_2.f_2 == 3 && iLocal_57 == 0)
	{
		Local_238 = 3;
	}
	func_17();
	if (Local_238.f_35 && Local_238.f_32 < 10)
	{
		func_12();
	}
	if (Local_238.f_32 >= 10)
	{
		if (!func_11(&uLocal_65))
		{
			func_10(&uLocal_65, 0, 0);
		}
		else if (func_9(&uLocal_65, 10000, 0))
		{
			Local_238 = 3;
		}
	}
	if (func_8())
	{
		Local_238 = 3;
	}
	if (Local_238.f_37 == 1)
	{
		if (!Local_238.f_38)
		{
			if (((!unk_0xF16DAFF595E80F7C() || func_7("AIRSTRIKE_1")) || func_7("AIRSTRIKE_2")) || func_7("AIRSTRIKE_4"))
			{
				func_6("AIRSTRIKE_3", -1);
				Local_238.f_38 = 1;
			}
		}
	}
	if (bLocal_52)
	{
		if (!func_3(unk_0xB5CEFD608600A09F(), 1))
		{
			Local_238 = 3;
		}
	}
	else if (func_3(unk_0xB5CEFD608600A09F(), 1) || func_2())
	{
		Local_238 = 3;
	}
	if (unk_0x866EAD7E27D8D0F8())
	{
		Local_238 = 3;
	}
}

bool func_2()//Position - 0x240
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_27.f_12, 0);
}

int func_3(int iParam0, bool bParam1)//Position - 0x25C
{
	if (bParam1)
	{
		if (func_4(iParam0))
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

bool func_4(int iParam0)//Position - 0x288
{
	return func_5(iParam0);
}

bool func_5(int iParam0)//Position - 0x296
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_D.f_1, 0);
}

void func_6(char* sParam0, int iParam1)//Position - 0x2B0
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 0, 1, iParam1);
}

int func_7(char* sParam0)//Position - 0x2C7
{
	unk_0xF07D20149ECBC61E(sParam0);
	return unk_0xA66DBDA0A072514A(0);
}

bool func_8()//Position - 0x2DA
{
	return Global_1406A0;
}

int func_9(var uParam0, int iParam1, bool bParam2)//Position - 0x2E6
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_10(uParam0, bParam2, 0);
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

void func_10(var uParam0, bool bParam1, bool bParam2)//Position - 0x344
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

bool func_11(var uParam0)//Position - 0x389
{
	return uParam0->f_1;
}

void func_12()//Position - 0x395
{
	vector3 vVar0;
	vector3 vVar1;
	int iVar2;
	
	iVar2 = 200;
	if (func_16(vLocal_61))
	{
		if (func_14(Local_238.f_2))
		{
			vLocal_61 = { unk_0x541C2AEF053615BC(unk_0x19D7F09C2FABDDA0(Local_238.f_2), 1) };
			vLocal_61.z = (vLocal_61.z - 5f);
		}
	}
	switch (Local_238.f_32)
	{
		case 0:
			if (!func_11(&(Local_238.f_33)))
			{
				if (!unk_0xFA30DFD0084E92FE(iLocal_237, Local_238.f_32))
				{
					vVar0 = { Local_240[unk_0x6BAA0516CC970D99() /*5*/].f_2 };
					vVar0.z = vLocal_61.z;
					vVar1 = { Local_240[unk_0x6BAA0516CC970D99() /*5*/].f_2 };
					vVar1 = { vVar1 + Vector(0f, 0.1f, 0.1f) };
					unk_0x2084D4C6C2DF616F(vVar1 + Vector(10f, 0f, 0f), &(vVar1.f_2), 0, 0);
					vVar1.z = (vVar1.z - 25f);
					unk_0x208404BE3283C536(vVar0, vVar1, iVar2, 1, joaat("weapon_airstrike_rocket"), unk_0xBC25C936A095B5BA(), 1, 0, -1f, unk_0xBC25C936A095B5BA(), 1, 1, 0, 0, 0, 0);
					func_10(&(Local_238.f_33), 0, 0);
					iLocal_57 = 1;
					unk_0xF0059F27F7BB6680(&iLocal_237, Local_238.f_32);
				}
			}
			else if (func_9(&(Local_238.f_33), 750, 0))
			{
				func_13(&(Local_238.f_33));
				Local_238.f_32++;
			}
			break;
		
		case 1:
			if (!func_11(&(Local_238.f_33)))
			{
				if (!unk_0xFA30DFD0084E92FE(iLocal_237, Local_238.f_32))
				{
					vVar0 = { Local_240[unk_0x6BAA0516CC970D99() /*5*/].f_2 + Vector(0f, 5f, 5f) };
					vVar0.z = vLocal_61.z;
					vVar1 = { Local_240[unk_0x6BAA0516CC970D99() /*5*/].f_2 + Vector(0f, 5f, 5f) };
					vVar1 = { vVar1 + Vector(0f, 0.1f, 0.1f) };
					unk_0x2084D4C6C2DF616F(vVar1 + Vector(10f, 0f, 0f), &(vVar1.f_2), 0, 0);
					vVar1.z = (vVar1.z - 25f);
					unk_0x208404BE3283C536(vVar0, vVar1, iVar2, 1, joaat("weapon_airstrike_rocket"), unk_0xE48AD7BF7762E114(Local_238.f_2.f_3), 1, 0, -1f, unk_0xBC25C936A095B5BA(), 1, 0, 0, 0, 0, 0);
					func_10(&(Local_238.f_33), 0, 0);
					unk_0xF0059F27F7BB6680(&iLocal_237, Local_238.f_32);
				}
			}
			else if (func_9(&(Local_238.f_33), 500, 0))
			{
				func_13(&(Local_238.f_33));
				Local_238.f_32++;
			}
			break;
		
		case 2:
			if (!func_11(&(Local_238.f_33)))
			{
				if (!unk_0xFA30DFD0084E92FE(iLocal_237, Local_238.f_32))
				{
					vVar0 = { Local_240[unk_0x6BAA0516CC970D99() /*5*/].f_2 + Vector(0f, -5f, -5f) };
					vVar0.z = vLocal_61.z;
					vVar1 = { Local_240[unk_0x6BAA0516CC970D99() /*5*/].f_2 + Vector(0f, -5f, -5f) };
					vVar1 = { vVar1 + Vector(0f, 0.1f, 0.1f) };
					unk_0x2084D4C6C2DF616F(vVar1 + Vector(10f, 0f, 0f), &(vVar1.f_2), 0, 0);
					vVar1.z = (vVar1.z - 25f);
					unk_0x208404BE3283C536(vVar0, vVar1, iVar2, 1, joaat("weapon_airstrike_rocket"), unk_0xE48AD7BF7762E114(Local_238.f_2.f_3), 1, 0, -1f, unk_0xBC25C936A095B5BA(), 1, 0, 0, 0, 0, 0);
					func_10(&(Local_238.f_33), 0, 0);
					unk_0xF0059F27F7BB6680(&iLocal_237, Local_238.f_32);
				}
			}
			else if (func_9(&(Local_238.f_33), 500, 0))
			{
				func_13(&(Local_238.f_33));
				Local_238.f_32++;
			}
			break;
		
		case 3:
			if (!func_11(&(Local_238.f_33)))
			{
				if (!unk_0xFA30DFD0084E92FE(iLocal_237, Local_238.f_32))
				{
					vVar0 = { Local_240[unk_0x6BAA0516CC970D99() /*5*/].f_2 + Vector(0f, 5f, -5f) };
					vVar0.z = vLocal_61.z;
					vVar1 = { Local_240[unk_0x6BAA0516CC970D99() /*5*/].f_2 + Vector(0f, 5f, -5f) };
					vVar1 = { vVar1 + Vector(0f, 0.1f, 0.1f) };
					unk_0x2084D4C6C2DF616F(vVar1 + Vector(10f, 0f, 0f), &(vVar1.f_2), 0, 0);
					vVar1.z = (vVar1.z - 25f);
					unk_0x208404BE3283C536(vVar0, vVar1, iVar2, 1, joaat("weapon_airstrike_rocket"), unk_0xE48AD7BF7762E114(Local_238.f_2.f_3), 1, 0, -1f, unk_0xBC25C936A095B5BA(), 1, 0, 0, 0, 0, 0);
					func_10(&(Local_238.f_33), 0, 0);
					unk_0xF0059F27F7BB6680(&iLocal_237, Local_238.f_32);
				}
			}
			else if (func_9(&(Local_238.f_33), 750, 0))
			{
				func_13(&(Local_238.f_33));
				Local_238.f_32++;
			}
			break;
		
		case 4:
			if (!func_11(&(Local_238.f_33)))
			{
				if (!unk_0xFA30DFD0084E92FE(iLocal_237, Local_238.f_32))
				{
					vVar0 = { Local_240[unk_0x6BAA0516CC970D99() /*5*/].f_2 + Vector(0f, -5f, 5f) };
					vVar0.z = vLocal_61.z;
					vVar1 = { Local_240[unk_0x6BAA0516CC970D99() /*5*/].f_2 + Vector(0f, -5f, 5f) };
					vVar1 = { vVar1 + Vector(0f, 0.1f, 0.1f) };
					unk_0x2084D4C6C2DF616F(vVar1 + Vector(10f, 0f, 0f), &(vVar1.f_2), 0, 0);
					vVar1.z = (vVar1.z - 25f);
					unk_0x208404BE3283C536(vVar0, vVar1, iVar2, 1, joaat("weapon_airstrike_rocket"), unk_0xE48AD7BF7762E114(Local_238.f_2.f_3), 1, 0, -1f, unk_0xBC25C936A095B5BA(), 1, 0, 0, 0, 0, 0);
					func_10(&(Local_238.f_33), 0, 0);
					unk_0xF0059F27F7BB6680(&iLocal_237, Local_238.f_32);
				}
			}
			else if (func_9(&(Local_238.f_33), 500, 0))
			{
				func_13(&(Local_238.f_33));
				Local_238.f_32++;
			}
			break;
		
		case 5:
			if (!func_11(&(Local_238.f_33)))
			{
				if (!unk_0xFA30DFD0084E92FE(iLocal_237, Local_238.f_32))
				{
					vVar0 = { Local_240[unk_0x6BAA0516CC970D99() /*5*/].f_2 + Vector(0f, 5f, 10f) };
					vVar0.z = vLocal_61.z;
					vVar1 = { Local_240[unk_0x6BAA0516CC970D99() /*5*/].f_2 + Vector(0f, 5f, 10f) };
					vVar1 = { vVar1 + Vector(0f, 0.1f, 0.1f) };
					unk_0x2084D4C6C2DF616F(vVar1 + Vector(10f, 0f, 0f), &(vVar1.f_2), 0, 0);
					vVar1.z = (vVar1.z - 25f);
					unk_0x208404BE3283C536(vVar0, vVar1, iVar2, 1, joaat("weapon_airstrike_rocket"), unk_0xE48AD7BF7762E114(Local_238.f_2.f_3), 1, 0, -1f, unk_0xBC25C936A095B5BA(), 1, 0, 0, 0, 0, 0);
					func_10(&(Local_238.f_33), 0, 0);
					unk_0xF0059F27F7BB6680(&iLocal_237, Local_238.f_32);
				}
			}
			else if (func_9(&(Local_238.f_33), 750, 0))
			{
				func_13(&(Local_238.f_33));
				Local_238.f_32++;
			}
			break;
		
		case 6:
			if (!func_11(&(Local_238.f_33)))
			{
				if (!unk_0xFA30DFD0084E92FE(iLocal_237, Local_238.f_32))
				{
					vVar0 = { Local_240[unk_0x6BAA0516CC970D99() /*5*/].f_2 + Vector(0f, 10f, 10f) };
					vVar0.z = vLocal_61.z;
					vVar1 = { Local_240[unk_0x6BAA0516CC970D99() /*5*/].f_2 + Vector(0f, 10f, 10f) };
					vVar1 = { vVar1 + Vector(0f, 0.1f, 0.1f) };
					unk_0x2084D4C6C2DF616F(vVar1 + Vector(10f, 0f, 0f), &(vVar1.f_2), 0, 0);
					vVar1.z = (vVar1.z - 25f);
					unk_0x208404BE3283C536(vVar0, vVar1, iVar2, 1, joaat("weapon_airstrike_rocket"), unk_0xE48AD7BF7762E114(Local_238.f_2.f_3), 1, 0, -1f, unk_0xBC25C936A095B5BA(), 1, 0, 0, 0, 0, 0);
					func_10(&(Local_238.f_33), 0, 0);
					unk_0xF0059F27F7BB6680(&iLocal_237, Local_238.f_32);
				}
			}
			else if (func_9(&(Local_238.f_33), 500, 0))
			{
				func_13(&(Local_238.f_33));
				Local_238.f_32++;
			}
			break;
		
		case 7:
			if (!func_11(&(Local_238.f_33)))
			{
				if (!unk_0xFA30DFD0084E92FE(iLocal_237, Local_238.f_32))
				{
					vVar0 = { Local_240[unk_0x6BAA0516CC970D99() /*5*/].f_2 + Vector(0f, -10f, -10f) };
					vVar0.z = vLocal_61.z;
					vVar1 = { Local_240[unk_0x6BAA0516CC970D99() /*5*/].f_2 + Vector(0f, -10f, -10f) };
					vVar1 = { vVar1 + Vector(0f, 0.1f, 0.1f) };
					unk_0x2084D4C6C2DF616F(vVar1 + Vector(10f, 0f, 0f), &(vVar1.f_2), 0, 0);
					vVar1.z = (vVar1.z - 25f);
					unk_0x208404BE3283C536(vVar0, vVar1, iVar2, 1, joaat("weapon_airstrike_rocket"), unk_0xE48AD7BF7762E114(Local_238.f_2.f_3), 1, 0, -1f, unk_0xBC25C936A095B5BA(), 1, 0, 0, 0, 0, 0);
					func_10(&(Local_238.f_33), 0, 0);
					unk_0xF0059F27F7BB6680(&iLocal_237, Local_238.f_32);
				}
			}
			else if (func_9(&(Local_238.f_33), 500, 0))
			{
				func_13(&(Local_238.f_33));
				Local_238.f_32++;
			}
			break;
		
		case 8:
			if (!func_11(&(Local_238.f_33)))
			{
				if (!unk_0xFA30DFD0084E92FE(iLocal_237, Local_238.f_32))
				{
					vVar0 = { Local_240[unk_0x6BAA0516CC970D99() /*5*/].f_2 + Vector(0f, 10f, -10f) };
					vVar0.z = vLocal_61.z;
					vVar1 = { Local_240[unk_0x6BAA0516CC970D99() /*5*/].f_2 + Vector(0f, 10f, -10f) };
					vVar1 = { vVar1 + Vector(0f, 0.1f, 0.1f) };
					unk_0x2084D4C6C2DF616F(vVar1 + Vector(10f, 0f, 0f), &(vVar1.f_2), 0, 0);
					vVar1.z = (vVar1.z - 25f);
					unk_0x208404BE3283C536(vVar0, vVar1, iVar2, 1, joaat("weapon_airstrike_rocket"), unk_0xE48AD7BF7762E114(Local_238.f_2.f_3), 1, 0, -1f, unk_0xBC25C936A095B5BA(), 1, 0, 0, 0, 0, 0);
					func_10(&(Local_238.f_33), 0, 0);
					unk_0xF0059F27F7BB6680(&iLocal_237, Local_238.f_32);
				}
			}
			else if (func_9(&(Local_238.f_33), 500, 0))
			{
				func_13(&(Local_238.f_33));
				Local_238.f_32++;
			}
			break;
		
		case 9:
			if (!func_11(&(Local_238.f_33)))
			{
				if (!unk_0xFA30DFD0084E92FE(iLocal_237, Local_238.f_32))
				{
					vVar0 = { Local_240[unk_0x6BAA0516CC970D99() /*5*/].f_2 + Vector(0f, -10f, 10f) };
					vVar0.z = vLocal_61.z;
					vVar1 = { Local_240[unk_0x6BAA0516CC970D99() /*5*/].f_2 + Vector(0f, -10f, 10f) };
					vVar1 = { vVar1 + Vector(0f, 0.1f, 0.1f) };
					unk_0x2084D4C6C2DF616F(vVar1 + Vector(10f, 0f, 0f), &(vVar1.f_2), 0, 0);
					vVar1.z = (vVar1.z - 25f);
					unk_0x208404BE3283C536(vVar0, vVar1, iVar2, 1, joaat("weapon_airstrike_rocket"), unk_0xE48AD7BF7762E114(Local_238.f_2.f_3), 1, 0, -1f, unk_0xBC25C936A095B5BA(), 1, 0, 0, 0, 0, 0);
					Local_238.f_32++;
					iLocal_57 = 0;
					unk_0xF0059F27F7BB6680(&iLocal_237, Local_238.f_32);
				}
			}
			break;
	}
}

void func_13(var uParam0)//Position - 0xD81
{
	uParam0->f_1 = 0;
}

int func_14(int iParam0)//Position - 0xD8E
{
	if (unk_0x7FFE36DB9042AF23(iParam0))
	{
		return !func_15(unk_0x19D7F09C2FABDDA0(iParam0));
	}
	return 0;
}

int func_15(int iParam0)//Position - 0xDAE
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

int func_16(vector3 vParam0)//Position - 0xDE7
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_17()//Position - 0xE11
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	int iVar3;
	int iVar4;
	
	if (func_14(Local_238.f_2))
	{
		iVar0 = unk_0x19D7F09C2FABDDA0(Local_238.f_2);
		vVar2 = { unk_0x541C2AEF053615BC(iVar0, 1) };
	}
	if (!iLocal_59)
	{
		if (!func_16(Local_240[unk_0x6BAA0516CC970D99() /*5*/].f_2))
		{
			vVar1 = { Local_240[unk_0x6BAA0516CC970D99() /*5*/].f_2 };
		}
		else if (func_23(unk_0xB5CEFD608600A09F(), 1, 1))
		{
			vVar1 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) };
		}
	}
	if (bLocal_58)
	{
		if (!iLocal_59)
		{
			if (func_14(Local_238.f_2))
			{
				if (!unk_0x4DBCE270B354E123(iVar0, vLocal_60, 75f, 75f, 1000f, 0, 1, 0))
				{
					fLocal_62 = unk_0xF0F2FC9DE291567F(vVar2, vVar1, false);
				}
				else
				{
					iLocal_59 = 1;
				}
			}
			else
			{
				iLocal_59 = 1;
			}
		}
		else
		{
			fLocal_62 = (fLocal_62 - 3.75f);
		}
		iVar3 = SYSTEM::FLOOR(fLocal_62);
		if (fLocal_62 <= 200f)
		{
			iVar4 = 6;
		}
		else
		{
			iVar4 = 1;
		}
		if (fLocal_62 >= 0f)
		{
			func_18(iVar3, "AIRSTRIKE_2", -1, iVar4, 2, 0, "AIRSTRIKE_6", 0, 0f, 0, 0, iVar4, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1);
		}
	}
}

void func_18(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24)//Position - 0xF28
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
			if (func_22(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_14D262.f_1 = 1;
		func_21(6, iVar0);
		Global_14D262.f_EBA[iVar0] = iParam0;
		StringCopy(&(Global_14D262.f_EBA.f_B[iVar0 /*16*/]), sParam1, 64);
		Global_14D262.f_EBA.f_B7[iVar0] = iParam3;
		Global_14D262.f_EBA.f_AC[iVar0] = iParam2;
		Global_14D262.f_EBA.f_104[iVar0] = iParam4;
		Global_14D262.f_EBA.f_10F[iVar0] = iParam5;
		StringCopy(&(Global_14D262.f_EBA.f_11A[iVar0 /*16*/]), sParam6, 64);
		Global_14D262.f_EBA.f_1BB[iVar0] = iParam7;
		Global_14D262.f_EBA.f_1C6[iVar0] = fParam8;
		Global_14D262.f_EBA.f_1F1[iVar0] = iParam9;
		Global_14D262.f_EBA.f_1FC[iVar0] = iParam10;
		Global_14D262.f_EBA.f_CD[iVar0] = iParam11;
		Global_14D262.f_EBA.f_D8[iVar0] = iParam12;
		Global_14D262.f_EBA.f_E3[iVar0] = iParam13;
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
		if (iParam15 == 5 && func_20())
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
			if (func_19())
			{
				Global_14D262.f_444 = 1;
			}
		}
	}
}

int func_19()//Position - 0x118A
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

int func_20()//Position - 0x11AE
{
	if (((unk_0x83D607D7994DEF3A() == 8 || unk_0x83D607D7994DEF3A() == 9) || unk_0x83D607D7994DEF3A() == 10) || unk_0x83D607D7994DEF3A() == 12)
	{
		return 1;
	}
	return 0;
}

void func_21(int iParam0, int iParam1)//Position - 0x11EC
{
	unk_0xF0059F27F7BB6680(&(Global_14D262.f_17E7[iParam0]), iParam1);
}

bool func_22(int iParam0, int iParam1)//Position - 0x1205
{
	return unk_0xFA30DFD0084E92FE(Global_14D262.f_17E7[iParam0], iParam1);
}

int func_23(int iParam0, bool bParam1, bool bParam2)//Position - 0x121E
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

void func_24()//Position - 0x1268
{
}

void func_25()//Position - 0x1270
{
	vector3 vVar0;
	bool bVar1;
	
	func_82();
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			if (!iLocal_56)
			{
				if (unk_0xB731B8C5BCE89836(joaat("cellphone_flashhand")) <= 0)
				{
					bVar1 = !func_81();
					unk_0x7A535CE1F001F3FE(unk_0xBC25C936A095B5BA(), joaat("weapon_flare"), 1, bVar1, bVar1);
					unk_0x8E25082A46F87892(unk_0xBC25C936A095B5BA(), joaat("weapon_flare"), bVar1);
					iLocal_56 = 1;
				}
			}
			else if (unk_0xD9872658AA62A38E(unk_0xBC25C936A095B5BA(), joaat("weapon_flare"), 100f, &(Local_240[unk_0x6BAA0516CC970D99() /*5*/].f_2), 1))
			{
				if (func_80(Local_240[unk_0x6BAA0516CC970D99() /*5*/].f_2, 0f, 0f, 0f, 0))
				{
					Local_240[unk_0x6BAA0516CC970D99() /*5*/].f_2 = { vVar0 };
				}
				if (func_7("AIRSTRIKE_1"))
				{
					unk_0x7456702622C62EA0(1);
				}
				if (!iLocal_55)
				{
					if (!func_79(Local_238.f_2.f_3))
					{
						if (func_14(Local_238.f_2))
						{
							func_78();
							unk_0xA4E856A8CD53B8DF(unk_0xE48AD7BF7762E114(Local_238.f_2.f_3));
							unk_0xA8E6405305C0D7DF(unk_0xE48AD7BF7762E114(Local_238.f_2.f_3), uLocal_49);
							unk_0x4D339A618B288894(unk_0x19D7F09C2FABDDA0(Local_238.f_2), SYSTEM::ROUND(50f));
							iLocal_55 = 1;
						}
					}
				}
			}
			else if (!iLocal_54)
			{
				if (!unk_0xF16DAFF595E80F7C())
				{
					if (func_77(unk_0xBC25C936A095B5BA()))
					{
						func_6("AIRSTRIKE_4", -1);
					}
					else
					{
						func_6("AIRSTRIKE_1", -1);
					}
					iLocal_54 = 1;
				}
			}
		}
	}
	func_49();
	func_26();
}

void func_26()//Position - 0x13BF
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	
	switch (Local_238.f_2.f_2)
	{
		case 0:
			func_48();
			break;
		
		case 1:
			func_48();
			break;
		
		case 2:
			if (func_14(Local_238.f_2))
			{
				bLocal_58 = true;
				iVar0 = unk_0x19D7F09C2FABDDA0(Local_238.f_2);
				if (!unk_0x2DA8CA50A72528FB(iLocal_47))
				{
					iLocal_47 = unk_0x511FE22BCF5353CD(iVar0);
					unk_0xBF0E22F3E083C33D(iLocal_47, 16);
					unk_0x436D0272182E484D(iLocal_47, "AIRSTRIKE_5");
					unk_0x222805B89367761E(iLocal_47, 0);
				}
				else
				{
					unk_0xCE128634FE291C0D(iLocal_47, SYSTEM::CEIL(unk_0x349C94FFF43E2979(iVar0)));
				}
				if (!iLocal_53)
				{
					if (!func_16(Local_240[unk_0x6BAA0516CC970D99() /*5*/].f_2))
					{
						vVar3 = { Local_240[unk_0x6BAA0516CC970D99() /*5*/].f_2 };
					}
					else
					{
						vVar3 = { vLocal_60 };
					}
					if (unk_0xF0F2FC9DE291567F(vVar3, unk_0x541C2AEF053615BC(iVar0, 1), true) <= (60f * 5f))
					{
						unk_0x33AF0C77B14652BC(unk_0x19D7F09C2FABDDA0(Local_238.f_2));
						iLocal_53 = 1;
					}
				}
				if (!iLocal_235)
				{
					if (!Local_238.f_36)
					{
						if (!func_79(Local_238.f_2.f_3))
						{
							if (!func_16(Local_240[unk_0x6BAA0516CC970D99() /*5*/].f_2))
							{
								if (unk_0xF0F2FC9DE291567F(func_47(unk_0xB5CEFD608600A09F()), unk_0x541C2AEF053615BC(unk_0x19D7F09C2FABDDA0(Local_238.f_2.f_3), 1), false) <= 250f)
								{
									if (unk_0xF0F2FC9DE291567F(vVar3, unk_0x541C2AEF053615BC(iVar0, 1), true) >= (60f * 2.5f))
									{
										func_30(&uLocal_69, "CT_AUD", "MPCT_ASarr", 12, 0, 0, 0);
										iLocal_235 = 1;
									}
								}
							}
						}
					}
				}
				if (Local_238.f_32 < 10)
				{
					if (!Local_238.f_35)
					{
						if (!func_16(Local_240[unk_0x6BAA0516CC970D99() /*5*/].f_2))
						{
							if (func_29() == 2)
							{
								if (!func_11(&uLocal_63))
								{
									func_10(&uLocal_63, 0, 0);
								}
								else if (func_9(&uLocal_63, 7500, 0))
								{
									Local_238.f_35 = 1;
								}
								vVar1 = { Local_240[unk_0x6BAA0516CC970D99() /*5*/].f_2 - Vector(1000f, 25f, 25f) };
								vVar2 = { Local_240[unk_0x6BAA0516CC970D99() /*5*/].f_2 + Vector(1000f, 25f, 25f) };
								vVar1.z = -200f;
								vVar2.z = 1500f;
								if (unk_0x4DBCE270B354E123(iVar0, Local_240[unk_0x6BAA0516CC970D99() /*5*/].f_2, 75f, 75f, 1000f, 0, 1, 0) && unk_0x1749F74D4E70A733(vVar1, vVar2, joaat("weapon_flare"), 0))
								{
									Local_238.f_35 = 1;
								}
							}
							else if (func_29() == 1)
							{
								Local_238.f_35 = 1;
								Local_238.f_32 = 100;
							}
						}
						else if (unk_0x4DBCE270B354E123(iVar0, vLocal_60, 75f, 75f, 1000f, 0, 1, 0))
						{
							Local_238.f_35 = 1;
							Local_238.f_32 = 100;
							Local_238.f_36 = 1;
							if (!iLocal_236)
							{
								func_30(&uLocal_69, "CT_AUD", "MPCT_ASflr", 12, 0, 0, 0);
								iLocal_236 = 1;
							}
						}
					}
				}
			}
			if (!func_14(Local_238.f_2) || func_79(Local_238.f_2.f_3))
			{
				func_27();
			}
			break;
		
		case 3:
			func_48();
			break;
	}
}

void func_27()//Position - 0x16B2
{
	int iVar0;
	
	if (!func_79(Local_238.f_2.f_3))
	{
		if (func_28(Local_238.f_2.f_3))
		{
			if (unk_0x89B5CBCE9D131B32(Local_238.f_2.f_3))
			{
				iVar0 = unk_0xE48AD7BF7762E114(Local_238.f_2.f_3);
				unk_0x65E471E4A2D56226(iVar0, 0, 0);
			}
		}
	}
}

int func_28(int iParam0)//Position - 0x16F6
{
	if (unk_0xDD5EE7D9FC37FA16(iParam0))
	{
		return 1;
	}
	if (unk_0x0DE6397A2CB3EF75())
	{
		unk_0xCDF25F6ADC88CCB4(iParam0);
	}
	return 0;
}

int func_29()//Position - 0x171A
{
	if (Local_238.f_37 == 1)
	{
		return Local_238.f_37;
	}
	else if (Local_238.f_37 == 2)
	{
		return Local_238.f_37;
	}
	if (!unk_0xB47B61546691E6E3(Local_240[unk_0x6BAA0516CC970D99() /*5*/].f_2 + Vector(0.5f, 0f, 0f)))
	{
		Local_238.f_37 = 1;
		return Local_238.f_37;
	}
	Local_238.f_37 = 2;
	return Local_238.f_37;
}

int func_30(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1775
{
	func_46(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	Global_280001 = 1;
	return func_31(sParam2, iParam3, 0);
}

int func_31(char* sParam0, int iParam1, bool bParam2)//Position - 0x17C3
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
					func_45();
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
		if (func_44(8, -1))
		{
			return 0;
		}
		Global_3E04 = { Global_3DFE };
		func_43();
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
				func_36();
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
				if (func_35())
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
			if (func_34())
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
			func_33();
			Global_3DC2 = bParam2;
		}
		Global_3DBA = iParam1;
		StringCopy(&Global_3C3B, sParam0, 24);
		Global_394A = 0;
		func_32();
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
		func_45();
	}
	return 0;
}

void func_32()//Position - 0x1A8F
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

void func_33()//Position - 0x1AC0
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

int func_34()//Position - 0x1B55
{
	if (Global_389D.f_1 == 1 || Global_389D.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_35()//Position - 0x1B7C
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

void func_36()//Position - 0x1C15
{
	if (func_42(14))
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
		Global_389D = func_37();
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

var func_37()//Position - 0x1CB7
{
	func_38();
	return Global_19B04.f_932.f_21B.f_10CD;
}

void func_38()//Position - 0x1CD0
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_41(Global_19B04.f_932.f_21B.f_10CD) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_40(unk_0xBC25C936A095B5BA());
			if (func_39(iVar0) && (!func_42(14) || Global_196EB))
			{
				if (Global_19B04.f_932.f_21B.f_10CD != iVar0 && func_39(Global_19B04.f_932.f_21B.f_10CD))
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

bool func_39(int iParam0)//Position - 0x1DCD
{
	return iParam0 < 3;
}

int func_40(int iParam0)//Position - 0x1DD9
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_41(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_41(int iParam0)//Position - 0x1E16
{
	if (func_39(iParam0))
	{
		return Global_19B04.f_6D75[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_42(int iParam0)//Position - 0x1E40
{
	return Global_8C41 == iParam0;
}

void func_43()//Position - 0x1E4E
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

bool func_44(int iParam0, int iParam1)//Position - 0x1EA5
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

void func_45()//Position - 0x1EE0
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

void func_46(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x1F37
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

Vector3 func_47(int iParam0)//Position - 0x1F8D
{
	return unk_0x541C2AEF053615BC(unk_0xA95CF30C72EB526E(iParam0), 0);
}

void func_48()//Position - 0x1FA0
{
	if (unk_0x2DA8CA50A72528FB(iLocal_47))
	{
		unk_0x07B8ECB35A4ED3AC(&iLocal_47);
	}
}

void func_49()//Position - 0x1FB7
{
	switch (Local_238.f_2.f_2)
	{
		case 0:
			func_76(1);
			break;
		
		case 1:
			if (func_50())
			{
				func_76(2);
			}
			break;
		
		case 2:
			if (!func_14(Local_238.f_2))
			{
				if (func_79(Local_238.f_2.f_3))
				{
					func_76(3);
				}
			}
			else if (func_79(Local_238.f_2.f_3))
			{
				func_76(3);
			}
			break;
		
		case 3:
			break;
	}
}

int func_50()//Position - 0x2032
{
	if (!func_11(&uLocal_67))
	{
		func_10(&uLocal_67, 0, 0);
	}
	else if (func_75(Local_238.f_2.f_1) && func_75(Local_238.f_2.f_3.f_1))
	{
		if (func_9(&uLocal_67, 3000, 0))
		{
			if (func_54() && func_51())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_51()//Position - 0x208F
{
	if ((!unk_0x7FFE36DB9042AF23(Local_238.f_2.f_3) && func_75(Local_238.f_2.f_3.f_1)) && unk_0x7FFE36DB9042AF23(Local_238.f_2))
	{
		if (func_14(Local_238.f_2))
		{
			if (func_53(&(Local_238.f_2.f_3), Local_238.f_2, 22, Local_238.f_2.f_3.f_1, -1, 1, 1, 1))
			{
				unk_0x2E35C4FA5F0ED22F(unk_0xE48AD7BF7762E114(Local_238.f_2.f_3), 1);
				unk_0x4106FAF8AA1D69D5(unk_0xE48AD7BF7762E114(Local_238.f_2.f_3), Global_180791);
				unk_0x7D314AB19CA29C96(unk_0xE48AD7BF7762E114(Local_238.f_2.f_3), 0);
				unk_0x22321800954A532E(unk_0xE48AD7BF7762E114(Local_238.f_2.f_3), 1);
				func_52();
				unk_0xA8E6405305C0D7DF(unk_0xE48AD7BF7762E114(Local_238.f_2.f_3), uLocal_48);
				unk_0x4D339A618B288894(unk_0x19D7F09C2FABDDA0(Local_238.f_2), SYSTEM::ROUND(50f));
			}
		}
	}
	if (!unk_0x7FFE36DB9042AF23(Local_238.f_2.f_3))
	{
		return 0;
	}
	unk_0x2CA123B0622F495C(Local_238.f_2.f_3.f_1);
	return 1;
}

void func_52()//Position - 0x2174
{
	if (!iLocal_50)
	{
		if (func_14(Local_238.f_2))
		{
			unk_0xC5A6DFE2B8987B17(&uLocal_48);
			unk_0xA7EC3DF47EFA2131(0, unk_0x19D7F09C2FABDDA0(Local_238.f_2), 0, 0, vLocal_60 + Vector((50f + 5f), 0f, 0f), 4, 60f, 15f, -1f, SYSTEM::CEIL((50f + 5f)), 20, 1);
			unk_0xA7EC3DF47EFA2131(0, unk_0x19D7F09C2FABDDA0(Local_238.f_2), 0, 0, Local_238.f_2.f_E, 4, 60f, 25f, -1f, SYSTEM::CEIL((50f + 5f)), 20, 1);
			unk_0x535008C596714F9E(uLocal_48);
			iLocal_50 = 1;
		}
	}
}

int func_53(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)//Position - 0x2204
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

int func_54()//Position - 0x228C
{
	vector3 vVar0;
	float fVar1;
	
	if (!unk_0x7FFE36DB9042AF23(Local_238.f_2))
	{
		if (func_75(Local_238.f_2.f_1))
		{
			if (unk_0x0B176B4C9E33A156("AIRSTRIKE_FLYOVER", 0))
			{
				func_71(&vVar0, &fVar1);
				if (func_56(vVar0, 6f, 1f, 1f, 5f, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					if (func_55(&(Local_238.f_2), Local_238.f_2.f_1, vVar0, fVar1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
					{
						Local_238.f_2.f_E = { vVar0 * Vector(0f, -1f, -1f) };
						unk_0xD421BC740C5340C3(unk_0x19D7F09C2FABDDA0(Local_238.f_2), 2);
						unk_0x346478B12F69D4E3(unk_0x19D7F09C2FABDDA0(Local_238.f_2), false);
						unk_0x73FD5B32F266E65D(unk_0x19D7F09C2FABDDA0(Local_238.f_2), 1);
						unk_0x46913653D1C7E82E(unk_0x19D7F09C2FABDDA0(Local_238.f_2));
						unk_0xA4DFFFD5B234240D(unk_0x19D7F09C2FABDDA0(Local_238.f_2), 60f);
						unk_0x2D655AA68FA1736B(unk_0x19D7F09C2FABDDA0(Local_238.f_2), true, 1, 0);
						unk_0x09A4B815980A80E9(unk_0x19D7F09C2FABDDA0(Local_238.f_2), 1000);
						unk_0x656194E145691D3E(unk_0x19D7F09C2FABDDA0(Local_238.f_2), 0);
						unk_0xA1EE8501940C1D3E(unk_0x19D7F09C2FABDDA0(Local_238.f_2), 3);
						unk_0xA503C429FD75E6D3(unk_0x19D7F09C2FABDDA0(Local_238.f_2));
						unk_0x2CA123B0622F495C(Local_238.f_2.f_1);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_55(var uParam0, int iParam1, vector3 vParam2, float fParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)//Position - 0x23AA
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

int func_56(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)//Position - 0x24A4
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
		if (func_64(vParam0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13))
		{
			return 0;
		}
	}
	Global_24B2CE.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_57(vParam0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_24B2CE.f_2++;
	return 1;
}

int func_57(vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)//Position - 0x25B5
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_23(unk_0xB5CEFD608600A09F(), 1, 1))
		{
			if (!unk_0x17FAADF9916EF741())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0xF0F2FC9DE291567F(func_62(unk_0xB5CEFD608600A09F()), vParam0, true) <= (fVar2 + fParam1))
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
		if (func_23(iVar1, 1, 1))
		{
			if (!func_59(iVar1, 0) && unk_0x75206900382D1E30(unk_0xB5CEFD608600A09F(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0xB5CEFD608600A09F()))
				{
					if ((func_58(iVar1) || !bParam8) && !Global_24FB5C[iVar1 /*406*/].f_FF)
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
								if (unk_0xF0F2FC9DE291567F(func_62(iVar1), vParam0, true) <= (fVar2 + fParam1))
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
							if (unk_0xF0F2FC9DE291567F(func_62(iVar1), vParam0, true) <= (fVar2 + fParam1))
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

int func_58(int iParam0)//Position - 0x276C
{
	if (unk_0xE904009319A7A43E(unk_0xA95CF30C72EB526E(iParam0)) || Global_24FB5C[iParam0 /*406*/].f_F1)
	{
		return 1;
	}
	return 0;
}

bool func_59(int iParam0, int iParam1)//Position - 0x2797
{
	bool bVar0;
	
	if (iParam0 == unk_0xB5CEFD608600A09F())
	{
		bVar0 = func_60(-1, 0) == 8;
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

int func_60(int iParam0, bool bParam1)//Position - 0x27E2
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_61();
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

int func_61()//Position - 0x2823
{
	return Global_1407E0;
}

Vector3 func_62(int iParam0)//Position - 0x282F
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_63() && Global_18402B[iVar0 /*770*/].f_2EA) && !func_16(Global_18402B[iVar0 /*770*/].f_2EB))
	{
		return Global_18402B[iVar0 /*770*/].f_2EB;
	}
	return func_47(iParam0);
}

var func_63()//Position - 0x2882
{
	return Global_255A46.f_10;
}

int func_64(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7)//Position - 0x2890
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && unk_0xB5CEFD608600A09F() != iVar1) || iParam6 == 0)
		{
			if (func_23(iVar1, bParam2, bParam3))
			{
				if (unk_0x75206900382D1E30(unk_0xB5CEFD608600A09F(), iVar1))
				{
					if (!bParam5 || (!unk_0x36CEFBE9B745A58D(unk_0xA95CF30C72EB526E(iVar1)) && func_58(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()) != unk_0x343CB262BF0CDF5A(iVar1))) || unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()) == -1)
						{
							if (((unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()) == -1 && uParam7) && bParam4) && func_65(iVar1))
							{
							}
							else if (unk_0x724D816EA203A79E(unk_0xA95CF30C72EB526E(iVar1)))
							{
								if (unk_0xF0F2FC9DE291567F(func_47(iVar1), vParam0, true) < fParam1)
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

int func_65(int iParam0)//Position - 0x298C
{
	if (func_70(unk_0xB5CEFD608600A09F(), iParam0))
	{
		return 1;
	}
	Global_26210D = { func_69(iParam0) };
	if (unk_0xE140B7178EA00705(&Global_26210D))
	{
		return 1;
	}
	if (func_66(unk_0xB5CEFD608600A09F(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_66(int iParam0, int iParam1)//Position - 0x29D3
{
	int iVar0;
	
	iVar0 = func_68(iParam0);
	if (!iVar0 == func_67())
	{
		if (iVar0 == func_68(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_67()//Position - 0x29FE
{
	return -1;
}

int func_68(int iParam0)//Position - 0x2A07
{
	if (iParam0 != func_67())
	{
		return Global_18C80F[iParam0 /*558*/].f_B;
	}
	return func_67();
}

struct<13> func_69(int iParam0)//Position - 0x2A2A
{
	struct<13> Var0;
	
	unk_0xB7DBA2C6D2C3C41A(iParam0, &Var0, 13);
	return Var0;
}

int func_70(int iParam0, int iParam1)//Position - 0x2A41
{
	if (unk_0xB9ACC1154C623363())
	{
		Global_26210D = { func_69(iParam0) };
		Global_26211A = { func_69(iParam1) };
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

void func_71(var uParam0, var uParam1)//Position - 0x2AAE
{
	float fVar0;
	
	*uParam0 = { func_73(vLocal_60 + Vector(200f, 0f, 0f), 600f, 600f, (200f / 2f)) };
	fVar0 = unk_0x5744C089D4BB9613((*uParam0 - 600f), (uParam0->f_1 - 600f), (*uParam0 + 600f), (uParam0->f_1 + 600f));
	if (uParam0->f_2 < fVar0)
	{
		uParam0->f_2 = fVar0;
	}
	*uParam1 = func_72(*uParam0, vLocal_60);
}

float func_72(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3)//Position - 0x2B26
{
	return unk_0xFDC254CE02DB0919((Param2 - Param0), (Param2.f_1 - Param0.f_1));
}

Vector3 func_73(vector3 vParam0, float fParam1, float fParam2, float fParam3)//Position - 0x2B40
{
	vector3 vVar0;
	float fVar1;
	
	vVar0 = { unk_0x55AEFCD285ECC0F2(-1f, 1f), unk_0x55AEFCD285ECC0F2(-1f, 1f), 0f };
	fVar1 = (fParam3 / 2f);
	vVar0 = { func_74(vVar0, unk_0x55AEFCD285ECC0F2(fParam1, fParam2)) };
	vVar0.z = unk_0x55AEFCD285ECC0F2(-fVar1, fVar1);
	return vParam0 + vVar0;
}

Vector3 func_74(vector3 vParam0, float fParam1)//Position - 0x2B89
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

bool func_75(int iParam0)//Position - 0x2BC0
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0xF243B7A14FCFD0F4(iParam0);
	return unk_0xD6513D668481290A(iParam0);
}

void func_76(int iParam0)//Position - 0x2BDE
{
	Local_238.f_2.f_2 = iParam0;
}

int func_77(int iParam0)//Position - 0x2BEE
{
	int iVar0;
	
	if (unk_0xE3CA72BD77D43B09(iParam0))
	{
		iVar0 = unk_0x9FE9D386222EEE47(iParam0, 0);
		if (unk_0xE59B7F5A03335350(iVar0, 0))
		{
			if (unk_0x3187EF5798B5D209(iVar0, -1, 0) == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_78()//Position - 0x2C24
{
	if (!iLocal_51)
	{
		if (func_14(Local_238.f_2))
		{
			unk_0xC5A6DFE2B8987B17(&uLocal_49);
			unk_0xA7EC3DF47EFA2131(0, unk_0x19D7F09C2FABDDA0(Local_238.f_2), 0, 0, Local_240[unk_0x6BAA0516CC970D99() /*5*/].f_2 + Vector((50f + 5f), 0f, 0f), 4, 60f, 15f, -1f, SYSTEM::CEIL((50f + 5f)), 20, 1);
			unk_0xA7EC3DF47EFA2131(0, unk_0x19D7F09C2FABDDA0(Local_238.f_2), 0, 0, Local_238.f_2.f_E, 4, 60f, 25f, -1f, SYSTEM::CEIL((50f + 5f)), 20, 1);
			unk_0x535008C596714F9E(uLocal_49);
			iLocal_51 = 1;
		}
	}
}

int func_79(int iParam0)//Position - 0x2CBD
{
	if (unk_0x7FFE36DB9042AF23(iParam0))
	{
		return unk_0x36CEFBE9B745A58D(unk_0xE48AD7BF7762E114(iParam0));
	}
	return 1;
}

bool func_80(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x2CDC
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

bool func_81()//Position - 0x2D23
{
	return Global_16B4F.f_141 > 0;
}

void func_82()//Position - 0x2D34
{
	if (!iLocal_234)
	{
		if (!func_79(Local_238.f_2.f_3))
		{
			func_83(&uLocal_69, 3, unk_0xE48AD7BF7762E114(Local_238.f_2.f_3), "FM_Pilot_Air", 1, 1);
			iLocal_234 = 1;
		}
	}
}

void func_83(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x2D69
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

int func_84()//Position - 0x2E04
{
	return Local_238;
}

int func_85(int iParam0)//Position - 0x2E0E
{
	return Local_240[iParam0 /*5*/];
}

void func_86()//Position - 0x2E1D
{
}

void func_87()//Position - 0x2E25
{
	if (unk_0x7FFE36DB9042AF23(Local_238.f_2.f_3) && unk_0x7FFE36DB9042AF23(Local_238.f_2))
	{
		if (func_14(Local_238.f_2) && !func_79(Local_238.f_2.f_3))
		{
			unk_0xA7EC3DF47EFA2131(unk_0xE48AD7BF7762E114(Local_238.f_2.f_3), unk_0x19D7F09C2FABDDA0(Local_238.f_2), 0, unk_0xBC25C936A095B5BA(), 1f, 1f, 1f, 8, 60f, 1000f, -1f, 400, 400, 1);
		}
	}
	func_89(func_90(1, 1), 11, func_67());
	func_88();
}

void func_88()//Position - 0x2EA8
{
	unk_0x95E4B6F3ED223F5A();
}

void func_89(int iParam0, int iParam1, var uParam2)//Position - 0x2EB4
{
	struct<4> Var0;
	
	Var0 = 539742369;
	Var0.f_1 = unk_0xB5CEFD608600A09F();
	Var0.f_3 = iParam1;
	Var0.f_2 = uParam2;
	if (!iParam0 == 0)
	{
		unk_0x38E776D9FA75679B(1, &Var0, 6, iParam0);
	}
}

int func_90(int iParam0, bool bParam1)//Position - 0x2EEC
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x3171C34AB3FE6F2E(iVar1);
		if (func_23(iVar2, 0, 0))
		{
			if (iVar2 != unk_0xB5CEFD608600A09F() || iParam0)
			{
				if (bParam1)
				{
					unk_0xF0059F27F7BB6680(&uVar0, iVar1);
				}
				else if (!func_59(iVar2, 0))
				{
					unk_0xF0059F27F7BB6680(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_91()//Position - 0x2F51
{
	var uVar0;
	
	func_98(&uVar0);
	if (Global_14083F == 0)
	{
		if (!unk_0x7AF0088ABFA713B6())
		{
			return 1;
		}
	}
	if (func_97())
	{
		return 1;
	}
	if (Global_25891C)
	{
		return 1;
	}
	if (func_96())
	{
		return 1;
	}
	if (func_95(157))
	{
		if (!func_94())
		{
			return 1;
		}
	}
	if (func_95(155))
	{
		return 1;
	}
	if (!unk_0x57D316754A262B34())
	{
		return 1;
	}
	if (func_92() != 0)
	{
		if (unk_0xB731B8C5BCE89836(func_92()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_92()//Position - 0x2FDB
{
	switch (func_93())
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

int func_93()//Position - 0x300F
{
	return Global_62BD;
}

bool func_94()//Position - 0x301A
{
	return Global_255A46.f_24A;
}

int func_95(int iParam0)//Position - 0x3029
{
	if (unk_0xA1AC399BCBEE5B2D(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_96()//Position - 0x3040
{
	return Global_258063;
}

bool func_97()//Position - 0x304C
{
	return Global_255A46.f_245;
}

void func_98(var uParam0)//Position - 0x305B
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
					func_99(iVar0);
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

void func_99(int iParam0)//Position - 0x30CE
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x414AA1932D1C88E2(1, iParam0, &vVar0, 3))
	{
		if (func_23(vVar0.y, 1, 1))
		{
			iVar1 = unk_0xA95CF30C72EB526E(vVar0.y);
			if (unk_0x724D816EA203A79E(iVar1))
			{
				if (unk_0x5237AF95232D78C5(iVar1, 0))
				{
					iVar2 = unk_0x9FE9D386222EEE47(iVar1, 0);
					if (unk_0x403C891106DCABAF(iVar2, vVar0.z) && unk_0x32405B7614E36453())
					{
						if (func_100(iVar2, &bVar3))
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

int func_100(int iParam0, var uParam1)//Position - 0x314F
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

void func_101()//Position - 0x31AE
{
	SYSTEM::WAIT(0);
}

void func_102(struct<21> Param0)//Position - 0x31BB
{
	func_108(func_109(Param0), Param0);
	unk_0xD1CF2F876BAD2600(1);
	unk_0xA6E7E0EC9E48D44C(1);
	func_106(0, -1, 0);
	unk_0x76AE988734CA7760(&Local_238, 58);
	unk_0xE45D6A3FD6454198(&Local_240, 11);
	unk_0x6C87EFD58B261C6F(0);
	if (!func_105())
	{
		func_87();
	}
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		vLocal_60 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0) };
	}
	if (func_3(unk_0xB5CEFD608600A09F(), 1))
	{
		bLocal_52 = true;
	}
	func_103(64, 1);
	Local_240[unk_0x6BAA0516CC970D99() /*5*/] = 0;
}

void func_103(int iParam0, bool bParam1)//Position - 0x323E
{
	int iVar0;
	
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = -1;
	}
	switch (iParam0)
	{
		case 59:
			Global_200000[func_104() /*12171*/].f_1E08.f_13 = iVar0;
			break;
		
		case 19:
			Global_200000[func_104() /*12171*/].f_1E08.f_12 = iVar0;
			break;
		
		case 74:
			Global_200000[func_104() /*12171*/].f_1E08.f_C = iVar0;
			break;
		
		case 29:
			Global_200000[func_104() /*12171*/].f_1E08.f_E = iVar0;
			break;
		
		case 8:
			Global_200000[func_104() /*12171*/].f_1E08.f_F = iVar0;
			break;
		
		case 31:
			Global_200000[func_104() /*12171*/].f_1E08.f_10 = iVar0;
			break;
		
		case 3:
			Global_200000[func_104() /*12171*/].f_1E08.f_14 = iVar0;
			break;
		
		case 6:
			Global_200000[func_104() /*12171*/].f_1E08.f_11 = iVar0;
			break;
		
		case 103:
		case 104:
		case 98:
		case 105:
			Global_200000[func_104() /*12171*/].f_1E08.f_17 = iVar0;
			break;
		
		case 76:
			Global_200000[func_104() /*12171*/].f_1E08.f_18 = iVar0;
			break;
		
		case 93:
			Global_200000[func_104() /*12171*/].f_1E08.f_19 = iVar0;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 77:
		case 81:
			Global_200000[func_104() /*12171*/].f_1E08.f_1A = iVar0;
			break;
		
		case 65:
		case 75:
		case 95:
			Global_200000[func_104() /*12171*/].f_1E08.f_1B = iVar0;
			break;
			break;
		
		case 97:
			Global_200000[func_104() /*12171*/].f_1E08.f_1D = iVar0;
			break;
		
		case 88:
			Global_200000[func_104() /*12171*/].f_1E08.f_1C = iVar0;
			break;
		
		case 100:
			Global_200000[func_104() /*12171*/].f_1E08.f_1F = iVar0;
			break;
		
		case 106:
			Global_200000[func_104() /*12171*/].f_1E08.f_20 = iVar0;
			break;
		
		case 99:
			Global_200000[func_104() /*12171*/].f_1E08.f_1E = iVar0;
			break;
	}
}

int func_104()//Position - 0x347D
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_105()//Position - 0x348A
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
		if (func_97())
		{
			return 0;
		}
		if (func_95(155))
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

int func_106(int iParam0, int iParam1, bool bParam2)//Position - 0x34E3
{
	int iVar0;
	
	iVar0 = unk_0x4796DAD7A8894E2F();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_88();
			}
			else
			{
				return 0;
			}
		}
		if (!func_107())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x7AF0088ABFA713B6())
				{
					if (!bParam2)
					{
						func_88();
					}
					else
					{
						return 0;
					}
				}
				if (func_97())
				{
					if (!bParam2)
					{
						func_88();
					}
					else
					{
						return 0;
					}
				}
				if (func_95(155))
				{
					if (!bParam2)
					{
						func_88();
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
					func_88();
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
				func_88();
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
			func_88();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_107()//Position - 0x35F8
{
	return Global_14083F;
}

void func_108(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x3604
{
	if (!unk_0x7AF0088ABFA713B6())
	{
		func_88();
	}
	unk_0xBF463BC3D6FFDE31(iParam0, 0, Param1.f_10);
}

int func_109(int iParam0)//Position - 0x3623
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

