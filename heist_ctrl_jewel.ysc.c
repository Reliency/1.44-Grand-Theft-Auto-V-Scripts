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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	struct<485> Local_46 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16 } ;
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
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	int iLocal_245 = 0;
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	int iLocal_248 = 0;
	int iLocal_249 = 0;
	int iLocal_250 = 0;
	int iLocal_251 = 0;
	int iLocal_252 = 0;
	int iLocal_253 = 0;
	int iLocal_254 = 0;
	int iLocal_255 = 0;
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
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_36 = 202;
	iLocal_37 = 201;
	iLocal_38 = 24;
	iLocal_39 = 202;
	iLocal_40 = 25;
	iLocal_43 = -1;
	iLocal_45 = -1;
	iLocal_254 = -1;
	if (unk_0xE8A79675302ED812(82))
	{
		func_235();
	}
	func_234(3);
	func_223(&(Local_46.f_1), func_233(Global_15C29[1 /*19*/], Global_15C29[2 /*19*/]));
	func_222(&Local_46, 0);
	while (!func_221(4))
	{
		if (!Global_1164F)
		{
			if (!func_220(86) && !func_219(14))
			{
				func_208(&Local_46, 32f, 35f);
			}
			else if (unk_0xFA30DFD0084E92FE(Local_46.f_1C1, 0))
			{
				func_206(&Local_46);
			}
			if (unk_0xFA30DFD0084E92FE(Local_46.f_1C1, 0))
			{
				if (func_205() == 86)
				{
					while (!func_206(&Local_46))
					{
						SYSTEM::WAIT(0);
					}
				}
			}
			func_203(&Local_46);
			func_194();
			func_145();
			if (func_143(0) || unk_0xFA30DFD0084E92FE(Local_46.f_1C1, 2))
			{
				func_67(&Local_46);
				func_4(&Local_46);
				func_3(&Local_46);
			}
		}
		if (unk_0xB731B8C5BCE89836(joaat("jewelry_heist")) > 0)
		{
			func_2();
		}
		SYSTEM::WAIT(0);
	}
	func_1(3);
	func_235();
}

int func_1(int iParam0)//Position - 0x185
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (unk_0xFA30DFD0084E92FE(Global_19B04.f_2360.f_63.f_DB[iVar0], iVar1))
	{
		unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_2360.f_63.f_DB[iVar0]), iVar1);
		return 1;
	}
	return 0;
}

void func_2()//Position - 0x1DF
{
	int iVar0;
	
	if (Global_11646)
	{
		return;
	}
	if (!unk_0x6A9CDB766DF7216F(unk_0xFC1CAE18F3ECBF2D()))
	{
		return;
	}
	iVar0 = SYSTEM::ROUND((1f + (1000f * SYSTEM::TIMESTEP())));
	Global_15CE8.f_8 = (Global_15CE8.f_8 + iVar0);
}

void func_3(var uParam0)//Position - 0x221
{
	if (unk_0xFA30DFD0084E92FE(Global_15C14, *uParam0))
	{
		if (unk_0xFA30DFD0084E92FE(uParam0->f_1C1, 1))
		{
			unk_0xF0059F27F7BB6680(&(uParam0->f_1C1), 15);
			unk_0xF0059F27F7BB6680(&(uParam0->f_1C1), 16);
			unk_0xF0059F27F7BB6680(&(uParam0->f_1C1), 14);
			unk_0x7CB6FD92BE491AD9(&Global_15C14, *uParam0);
		}
	}
}

void func_4(var uParam0)//Position - 0x270
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_65(func_66(*uParam0));
	if (iVar0 < 0 || iVar0 >= 5)
	{
		return;
	}
	iVar1 = iVar0;
	if ((iVar1 != uParam0->f_1D0 && !(iVar1 == 2 && uParam0->f_1D0 == 4)) && !((*uParam0 == 1 && iVar1 == 3) && uParam0->f_1D0 == 4))
	{
		if (unk_0xFA30DFD0084E92FE(uParam0->f_1C1, 2))
		{
			func_5(uParam0, iVar1, 0);
		}
		else
		{
			uParam0->f_1D0 = iVar1;
		}
	}
}

void func_5(var uParam0, int iParam1, int iParam2)//Position - 0x2FE
{
	if (iParam1 != uParam0->f_1D0)
	{
		if (uParam0->f_2A8 == 0)
		{
			func_64(uParam0);
			uParam0->f_1D0 = iParam1;
			func_6(uParam0, iParam1, iParam2);
		}
	}
}

void func_6(var uParam0, int iParam1, int iParam2)//Position - 0x330
{
	switch (iParam1)
	{
		case 0:
			func_63(uParam0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_1C1), 5);
			unk_0x7CB6FD92BE491AD9(&(uParam0->f_1C1), 4);
			break;
		
		case 1:
			func_63(uParam0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_1C1), 5);
			unk_0x7CB6FD92BE491AD9(&(uParam0->f_1C1), 4);
			uParam0->f_1C4 = -1;
			break;
		
		case 2:
			func_35(uParam0, uParam0->f_1A1, iParam2);
			unk_0xF0059F27F7BB6680(&(uParam0->f_1C1), 5);
			unk_0x7CB6FD92BE491AD9(&(uParam0->f_1C1), 4);
			uParam0->f_1C9 = unk_0x105601648511CC64();
			break;
		
		case 3:
			func_17(uParam0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_1C1), 5);
			unk_0x7CB6FD92BE491AD9(&(uParam0->f_1C1), 4);
			unk_0xF0059F27F7BB6680(&(uParam0->f_1C1), 9);
			uParam0->f_1C9 = unk_0x105601648511CC64();
			break;
		
		case 4:
			func_13(&(uParam0->f_1.f_6C[0 /*4*/]), 1);
			func_13(&(uParam0->f_1.f_6C[1 /*4*/]), 1);
			Global_19B04.f_1.f_6[*uParam0] = 1;
			unk_0x7456702622C62EA0(0);
			func_11(uParam0, 0);
			func_63(uParam0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_1C1), 5);
			unk_0xF0059F27F7BB6680(&(uParam0->f_1C1), 4);
			uParam0->f_1C9 = unk_0x105601648511CC64();
			break;
	}
	func_7(uParam0);
}

void func_7(var uParam0)//Position - 0x45D
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	bool bVar6;
	
	sVar0 = unk_0xC7CF72D26EA6A227(2, 13, true);
	sVar1 = unk_0xC7CF72D26EA6A227(2, 11, true);
	sVar2 = unk_0xE57EAD1FEA2A6FAF(0, 32, true);
	sVar3 = unk_0xC7CF72D26EA6A227(0, 1, true);
	sVar4 = unk_0xE57EAD1FEA2A6FAF(2, 201, true);
	sVar5 = unk_0xE57EAD1FEA2A6FAF(2, 202, true);
	if (unk_0x50465D2C022B9E04(2))
	{
		sVar0 = unk_0xC7CF72D26EA6A227(2, 6, true);
		sVar1 = unk_0xC7CF72D26EA6A227(2, 7, true);
		sVar2 = unk_0xC7CF72D26EA6A227(0, 29, true);
	}
	bVar6 = func_10(1, *uParam0);
	unk_0x29CD142125FE177B(uParam0->f_19E, "SET_MAX_WIDTH");
	unk_0xD44E04EBBDC4CE88(0.6f);
	unk_0xF9FBC2F3F73D94C9();
	switch (uParam0->f_1D0)
	{
		case 0:
			if (unk_0xFA30DFD0084E92FE(uParam0->f_1C1, 2))
			{
				if (bVar6)
				{
					unk_0x29CD142125FE177B(uParam0->f_19E, "SET_DATA_SLOT_EMPTY");
					unk_0xF9FBC2F3F73D94C9();
					unk_0x29CD142125FE177B(uParam0->f_19E, "SET_DATA_SLOT");
					unk_0x1E1FB49121565EB6(1);
					func_9(sVar2);
					func_8("PB_H_ZOOM");
					unk_0xF9FBC2F3F73D94C9();
					unk_0x29CD142125FE177B(uParam0->f_19E, "SET_DATA_SLOT");
					unk_0x1E1FB49121565EB6(0);
					func_9(sVar3);
					func_8("PB_H_LOOK");
					unk_0xF9FBC2F3F73D94C9();
				}
				else
				{
					unk_0x29CD142125FE177B(uParam0->f_19E, "SET_DATA_SLOT_EMPTY");
					unk_0xF9FBC2F3F73D94C9();
					unk_0x29CD142125FE177B(uParam0->f_19E, "SET_DATA_SLOT");
					unk_0x1E1FB49121565EB6(2);
					func_9(sVar2);
					func_8("PB_H_ZOOM");
					unk_0xF9FBC2F3F73D94C9();
					unk_0x29CD142125FE177B(uParam0->f_19E, "SET_DATA_SLOT");
					unk_0x1E1FB49121565EB6(1);
					func_9(sVar3);
					func_8("PB_H_LOOK");
					unk_0xF9FBC2F3F73D94C9();
					unk_0x29CD142125FE177B(uParam0->f_19E, "SET_DATA_SLOT");
					unk_0x1E1FB49121565EB6(0);
					func_9(sVar5);
					func_8("PB_H_EXIT");
					unk_0xF9FBC2F3F73D94C9();
				}
				unk_0x29CD142125FE177B(uParam0->f_19E, "DRAW_INSTRUCTIONAL_BUTTONS");
				unk_0x5E5DBD0A6623969E(false);
				unk_0xF9FBC2F3F73D94C9();
			}
			break;
		
		case 1:
			unk_0x29CD142125FE177B(uParam0->f_19E, "SET_DATA_SLOT_EMPTY");
			unk_0xF9FBC2F3F73D94C9();
			unk_0x29CD142125FE177B(uParam0->f_19E, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0x5E5DBD0A6623969E(false);
			unk_0xF9FBC2F3F73D94C9();
			break;
		
		case 2:
			if (unk_0xFA30DFD0084E92FE(uParam0->f_1C1, 2))
			{
				unk_0x29CD142125FE177B(uParam0->f_19E, "SET_DATA_SLOT_EMPTY");
				unk_0xF9FBC2F3F73D94C9();
				if (*uParam0 == 2)
				{
					unk_0x29CD142125FE177B(uParam0->f_19E, "SET_DATA_SLOT");
					unk_0x1E1FB49121565EB6(2);
					func_9(sVar0);
					func_8("PB_H_SELCT");
					unk_0xF9FBC2F3F73D94C9();
					unk_0x29CD142125FE177B(uParam0->f_19E, "SET_DATA_SLOT");
					unk_0x1E1FB49121565EB6(1);
					func_9(sVar3);
					func_8("PB_H_LOOK");
					unk_0xF9FBC2F3F73D94C9();
					unk_0x29CD142125FE177B(uParam0->f_19E, "SET_DATA_SLOT");
					unk_0x1E1FB49121565EB6(0);
					func_9(sVar4);
					func_8("PB_H_TRIG");
					unk_0xF9FBC2F3F73D94C9();
				}
				else
				{
					unk_0x29CD142125FE177B(uParam0->f_19E, "SET_DATA_SLOT");
					unk_0x1E1FB49121565EB6(3);
					func_9(sVar0);
					func_8("PB_H_SELCT");
					unk_0xF9FBC2F3F73D94C9();
					unk_0x29CD142125FE177B(uParam0->f_19E, "SET_DATA_SLOT");
					unk_0x1E1FB49121565EB6(2);
					func_9(sVar3);
					func_8("PB_H_LOOK");
					unk_0xF9FBC2F3F73D94C9();
					unk_0x29CD142125FE177B(uParam0->f_19E, "SET_DATA_SLOT");
					unk_0x1E1FB49121565EB6(1);
					func_9(sVar5);
					func_8("PB_H_UNDO");
					unk_0xF9FBC2F3F73D94C9();
					unk_0x29CD142125FE177B(uParam0->f_19E, "SET_DATA_SLOT");
					unk_0x1E1FB49121565EB6(0);
					func_9(sVar4);
					func_8("PB_H_TRIG");
					unk_0xF9FBC2F3F73D94C9();
				}
				unk_0x29CD142125FE177B(uParam0->f_19E, "DRAW_INSTRUCTIONAL_BUTTONS");
				unk_0x5E5DBD0A6623969E(false);
				unk_0xF9FBC2F3F73D94C9();
			}
			break;
		
		case 3:
			if (unk_0xFA30DFD0084E92FE(uParam0->f_1C1, 2))
			{
				if (unk_0xFA30DFD0084E92FE(uParam0->f_1C1, 9))
				{
					unk_0x29CD142125FE177B(uParam0->f_19E, "SET_DATA_SLOT_EMPTY");
					unk_0xF9FBC2F3F73D94C9();
					unk_0x29CD142125FE177B(uParam0->f_19E, "SET_DATA_SLOT");
					unk_0x1E1FB49121565EB6(1);
					func_9(sVar1);
					func_8("PB_H_SELCT");
					unk_0xF9FBC2F3F73D94C9();
					unk_0x29CD142125FE177B(uParam0->f_19E, "SET_DATA_SLOT");
					unk_0x1E1FB49121565EB6(0);
					func_9(sVar3);
					func_8("PB_H_LOOK");
					unk_0xF9FBC2F3F73D94C9();
				}
				else
				{
					unk_0x29CD142125FE177B(uParam0->f_19E, "SET_DATA_SLOT_EMPTY");
					unk_0xF9FBC2F3F73D94C9();
					unk_0x29CD142125FE177B(uParam0->f_19E, "SET_DATA_SLOT");
					unk_0x1E1FB49121565EB6(2);
					func_9(sVar1);
					func_8("PB_H_SELCT");
					unk_0xF9FBC2F3F73D94C9();
					unk_0x29CD142125FE177B(uParam0->f_19E, "SET_DATA_SLOT");
					unk_0x1E1FB49121565EB6(1);
					func_9(sVar3);
					func_8("PB_H_LOOK");
					unk_0xF9FBC2F3F73D94C9();
					unk_0x29CD142125FE177B(uParam0->f_19E, "SET_DATA_SLOT");
					unk_0x1E1FB49121565EB6(0);
					func_9(sVar4);
					func_8("PB_H_TRIG");
					unk_0xF9FBC2F3F73D94C9();
				}
				unk_0x29CD142125FE177B(uParam0->f_19E, "DRAW_INSTRUCTIONAL_BUTTONS");
				unk_0x5E5DBD0A6623969E(false);
				unk_0xF9FBC2F3F73D94C9();
			}
			break;
		
		case 4:
			if (unk_0xFA30DFD0084E92FE(uParam0->f_1C1, 2))
			{
				unk_0x29CD142125FE177B(uParam0->f_19E, "SET_DATA_SLOT_EMPTY");
				unk_0xF9FBC2F3F73D94C9();
				unk_0x29CD142125FE177B(uParam0->f_19E, "SET_DATA_SLOT");
				unk_0x1E1FB49121565EB6(3);
				func_9(sVar2);
				func_8("PB_H_ZOOM");
				unk_0xF9FBC2F3F73D94C9();
				unk_0x29CD142125FE177B(uParam0->f_19E, "SET_DATA_SLOT");
				unk_0x1E1FB49121565EB6(2);
				func_9(sVar3);
				func_8("PB_H_LOOK");
				unk_0xF9FBC2F3F73D94C9();
				unk_0x29CD142125FE177B(uParam0->f_19E, "SET_DATA_SLOT");
				unk_0x1E1FB49121565EB6(1);
				func_9(sVar5);
				func_8("PB_H_UNDO");
				unk_0xF9FBC2F3F73D94C9();
				unk_0x29CD142125FE177B(uParam0->f_19E, "SET_DATA_SLOT");
				unk_0x1E1FB49121565EB6(0);
				func_9(sVar4);
				func_8("PB_H_CONF");
				unk_0xF9FBC2F3F73D94C9();
				unk_0x29CD142125FE177B(uParam0->f_19E, "DRAW_INSTRUCTIONAL_BUTTONS");
				unk_0x5E5DBD0A6623969E(false);
				unk_0xF9FBC2F3F73D94C9();
			}
			break;
	}
}

void func_8(char* sParam0)//Position - 0x939
{
	unk_0x57016C44F10111F0(sParam0);
	unk_0x64989E60CF560CA1();
}

void func_9(char* sParam0)//Position - 0x94B
{
	unk_0xCB30200B8055CA57(sParam0);
}

bool func_10(int iParam0, int iParam1)//Position - 0x959
{
	bool bVar0;
	
	if (iParam0 == 11 || iParam0 == -1)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	bVar0 = unk_0xFA30DFD0084E92FE(Global_19B04.f_2360.f_63.f_DB[iParam0], iParam1);
	return bVar0;
}

void func_11(var uParam0, bool bParam1)//Position - 0x9A6
{
	if (bParam1)
	{
		unk_0xF0059F27F7BB6680(&(uParam0->f_1C1), 18);
		if (((!func_12(&(uParam0->f_1.f_14[0 /*4*/])) && !func_12(&(uParam0->f_1.f_14[1 /*4*/]))) && !func_12(&(uParam0->f_1.f_6C[0 /*4*/]))) && !func_12(&(uParam0->f_1.f_6C[1 /*4*/])))
		{
			unk_0x7456702622C62EA0(0);
		}
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&(uParam0->f_1C1), 18);
	}
}

int func_12(char* sParam0)//Position - 0xA1B
{
	unk_0xF07D20149ECBC61E(sParam0);
	return unk_0xA66DBDA0A072514A(0);
}

void func_13(char* sParam0, int iParam1)//Position - 0xA2E
{
	int iVar0;
	int iVar1;
	
	if (Global_195B4 && iParam1)
	{
		if (func_12(sParam0) && !unk_0x5ECDC4E2F3BFF708())
		{
			unk_0x7456702622C62EA0(0);
		}
	}
	iVar0 = 0;
	while (iVar0 < Global_19B04.f_4F9D.f_91)
	{
		if (unk_0x3362CDE8460ED38B(sParam0, &(Global_19B04.f_4F9D[iVar0 /*16*/])))
		{
			iVar1 = iVar0;
			while (iVar1 <= (Global_19B04.f_4F9D.f_91 - 2))
			{
				func_16(iVar1, iVar1 + 1);
				iVar1++;
			}
			func_15((Global_19B04.f_4F9D.f_91 - 1));
			Global_19B04.f_4F9D.f_91 = (Global_19B04.f_4F9D.f_91 - 1);
			func_14();
			return;
		}
		iVar0++;
	}
}

void func_14()//Position - 0xADB
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

void func_15(int iParam0)//Position - 0xBFB
{
	StringCopy(&(Global_19B04.f_4F9D[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_19B04.f_4F9D[iParam0 /*16*/].f_4), "", 16);
	Global_19B04.f_4F9D[iParam0 /*16*/].f_8 = 0;
	Global_19B04.f_4F9D[iParam0 /*16*/].f_9 = 0;
	Global_19B04.f_4F9D[iParam0 /*16*/].f_B = 0;
	Global_19B04.f_4F9D[iParam0 /*16*/].f_A = -1;
	Global_19B04.f_4F9D[iParam0 /*16*/].f_C = 0;
	Global_19B04.f_4F9D[iParam0 /*16*/].f_D = 0;
	Global_19B04.f_4F9D[iParam0 /*16*/].f_E = 0;
	Global_19B04.f_4F9D[iParam0 /*16*/].f_F = 0;
}

void func_16(int iParam0, int iParam1)//Position - 0xC95
{
	Global_19B04.f_4F9D[iParam0 /*16*/] = { Global_19B04.f_4F9D[iParam1 /*16*/] };
	Global_19B04.f_4F9D[iParam0 /*16*/].f_4 = { Global_19B04.f_4F9D[iParam1 /*16*/].f_4 };
	Global_19B04.f_4F9D[iParam0 /*16*/].f_8 = Global_19B04.f_4F9D[iParam1 /*16*/].f_8;
	Global_19B04.f_4F9D[iParam0 /*16*/].f_A = Global_19B04.f_4F9D[iParam1 /*16*/].f_A;
	Global_19B04.f_4F9D[iParam0 /*16*/].f_9 = Global_19B04.f_4F9D[iParam1 /*16*/].f_9;
	Global_19B04.f_4F9D[iParam0 /*16*/].f_B = Global_19B04.f_4F9D[iParam1 /*16*/].f_B;
	Global_19B04.f_4F9D[iParam0 /*16*/].f_C = Global_19B04.f_4F9D[iParam1 /*16*/].f_C;
	Global_19B04.f_4F9D[iParam0 /*16*/].f_D = Global_19B04.f_4F9D[iParam1 /*16*/].f_D;
	Global_19B04.f_4F9D[iParam0 /*16*/].f_E = Global_19B04.f_4F9D[iParam1 /*16*/].f_E;
	Global_19B04.f_4F9D[iParam0 /*16*/].f_F = Global_19B04.f_4F9D[iParam1 /*16*/].f_F;
}

void func_17(var uParam0)//Position - 0xDA5
{
	int iVar0;
	struct<2> Var1;
	
	func_34(uParam0);
	func_31(uParam0);
	unk_0x29CD142125FE177B(uParam0->f_19D, "FOCUS_VIEW");
	unk_0x1E1FB49121565EB6(uParam0->f_19F);
	unk_0xF9FBC2F3F73D94C9();
	iVar0 = func_65(func_30(*uParam0));
	if (iVar0 != 0)
	{
		if (iVar0 == func_29(*uParam0, 0))
		{
			unk_0x29CD142125FE177B(uParam0->f_19D, "SET_INPUT_EVENT");
			unk_0x1E1FB49121565EB6(8);
			unk_0xF9FBC2F3F73D94C9();
		}
		else if (iVar0 == func_29(*uParam0, 1))
		{
			unk_0x29CD142125FE177B(uParam0->f_19D, "SET_INPUT_EVENT");
			unk_0x1E1FB49121565EB6(9);
			unk_0xF9FBC2F3F73D94C9();
		}
	}
	Var1 = (uParam0->f_1.f_10 + uParam0->f_1.f_12);
	Var1.f_1 = (uParam0->f_1.f_10.f_1 + uParam0->f_1.f_12.f_1);
	func_25(uParam0, &Var1, uParam0->f_1.f_A);
	func_23(uParam0, 1, 1);
	func_11(uParam0, 0);
	func_18(uParam0);
}

void func_18(var uParam0)//Position - 0xE78
{
	int iVar0;
	
	if (unk_0xFA30DFD0084E92FE(uParam0->f_1C1, 7))
	{
		if (!unk_0xFA30DFD0084E92FE(uParam0->f_1C1, 18))
		{
			switch (uParam0->f_1D0)
			{
				case 3:
					if (!Global_19B04.f_1[*uParam0])
					{
						if (!unk_0x3362CDE8460ED38B(&(uParam0->f_1.f_14[0 /*4*/]), ""))
						{
							func_21(&(uParam0->f_1.f_14[0 /*4*/]), 3, 0, -1, 10000, 7, 0, 0, 0);
						}
						if (!unk_0x3362CDE8460ED38B(&(uParam0->f_1.f_14[1 /*4*/]), ""))
						{
							func_21(&(uParam0->f_1.f_14[1 /*4*/]), 3, 1000, -1, 10000, 7, 0, 0, 0);
						}
						Global_19B04.f_1[*uParam0] = 1;
					}
					else if (func_20() && !unk_0xF16DAFF595E80F7C())
					{
						if (((!unk_0xFA30DFD0084E92FE(uParam0->f_1C1, 11) && !unk_0xFA30DFD0084E92FE(uParam0->f_1C1, 10)) && !func_19()) && uParam0->f_1E3 == 0)
						{
							unk_0x2F618BD43614DD0D("PB_H_CHOICE");
							unk_0x72F8FA06CC9EC899(0, 1, false, -1);
						}
					}
					break;
				
				case 2:
					if (!Global_19B04.f_1.f_6[*uParam0])
					{
						if (!unk_0x3362CDE8460ED38B(&(uParam0->f_1.f_6C[0 /*4*/]), ""))
						{
							func_21(&(uParam0->f_1.f_6C[0 /*4*/]), 3, 0, -1, 10000, 7, 0, 0, 0);
						}
						if (!unk_0x3362CDE8460ED38B(&(uParam0->f_1.f_6C[1 /*4*/]), ""))
						{
							func_21(&(uParam0->f_1.f_6C[1 /*4*/]), 3, 1000, -1, 10000, 7, 0, 0, 0);
						}
						Global_19B04.f_1.f_6[*uParam0] = 1;
					}
					else if (func_20() && !unk_0xF16DAFF595E80F7C())
					{
						if (!unk_0xFA30DFD0084E92FE(uParam0->f_1C1, 10))
						{
							if ((!func_12("PB_H_GUNM") && !func_12("PB_H_HACK")) && !func_12("PB_H_DRIV"))
							{
								iVar0 = func_65(func_30(*uParam0));
								if (uParam0->f_1A1 < 5)
								{
									if (((!unk_0xFA30DFD0084E92FE(uParam0->f_1C1, 11) && !unk_0xFA30DFD0084E92FE(uParam0->f_1C1, 10)) && !func_19()) && uParam0->f_1E3 == 0)
									{
										switch (Global_15C29[iVar0 /*19*/].f_1[uParam0->f_1A1])
										{
											case 1:
												unk_0x2F618BD43614DD0D("PB_H_GUNM");
												unk_0x72F8FA06CC9EC899(0, 1, false, -1);
												break;
											
											case 2:
												unk_0x2F618BD43614DD0D("PB_H_HACK");
												unk_0x72F8FA06CC9EC899(0, 1, false, -1);
												break;
											
											case 3:
												unk_0x2F618BD43614DD0D("PB_H_DRIV");
												unk_0x72F8FA06CC9EC899(0, 1, false, -1);
												break;
											}
										}
									}
								}
							}
					}
					break;
				}
			}
	}
}

int func_19()//Position - 0x10ED
{
	if (Global_3DB8 != 0 || unk_0xE6711F601F11B66B())
	{
		return 1;
	}
	return 0;
}

int func_20()//Position - 0x110F
{
	if (Global_19B04.f_4F9D.f_91 > 0)
	{
		return 0;
	}
	return 1;
}

void func_21(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x112C
{
	func_22(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_22(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x114D
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
		func_14();
	}
}

void func_23(var uParam0, int iParam1, int iParam2)//Position - 0x1320
{
	if (!unk_0xFA30DFD0084E92FE(uParam0->f_1.f_12F, iParam1))
	{
		if (!unk_0x3362CDE8460ED38B(&(uParam0->f_1.f_118[iParam1 /*2*/]), ""))
		{
			func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_118[iParam1 /*2*/], iParam2);
			unk_0xF0059F27F7BB6680(&(uParam0->f_1.f_12F), iParam1);
		}
	}
}

void func_24(var uParam0, struct<2> Param1, struct<2> Param2, int iParam3)//Position - 0x137A
{
	if (uParam0->f_1E3 == 3)
	{
		return;
	}
	if (!unk_0xF1734B55490E9045(&Param2))
	{
		uParam0->f_1D3[uParam0->f_1E3 /*5*/] = { Param1 };
		uParam0->f_1D3[uParam0->f_1E3 /*5*/].f_2 = { Param2 };
		uParam0->f_1D3[uParam0->f_1E3 /*5*/].f_4 = iParam3;
		uParam0->f_1E3++;
	}
}

void func_25(var uParam0, var uParam1, float fParam2)//Position - 0x13DA
{
	vector3 vVar0;
	
	uParam0->f_19B = *uParam1;
	uParam0->f_19B.f_1 = uParam1->f_1;
	uParam0->f_1C6 = unk_0x105601648511CC64() + 1000;
	vVar0 = { func_27(uParam0, &(uParam0->f_19B)) };
	func_26(&(uParam0->f_289), vVar0, fParam2);
}

void func_26(var uParam0, vector3 vParam1, float fParam2)//Position - 0x141F
{
	uParam0->f_B = { vParam1 };
	if (fParam2 != -1f)
	{
		uParam0->f_7 = fParam2;
	}
}

Vector3 func_27(var uParam0, var uParam1)//Position - 0x143E
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	
	fVar0 = uParam0->f_1.f_4;
	fVar1 = uParam0->f_1.f_5;
	func_28(uParam0, uParam1, &fVar2, &fVar3);
	fVar4 = (fVar0 * (fVar2 - 0.5f));
	fVar5 = (-fVar1 * (fVar3 - 0.5f));
	fVar6 = uParam0->f_194;
	vVar7 = { uParam0->f_191 };
	vVar7 = { vVar7 + Vector(fVar5, (fVar4 * SYSTEM::COS((90f - fVar6))), (fVar4 * SYSTEM::SIN((90f - fVar6)))) };
	fVar8 = fVar4;
	fVar9 = unk_0x4902846B4A99364A((fVar8 / uParam0->f_1.f_8));
	fVar10 = (uParam0->f_191.f_2 - uParam0->f_289.f_1.f_2);
	fVar11 = (vVar7.z - uParam0->f_289.f_1.f_2);
	fVar12 = (fVar11 - fVar10);
	fVar13 = unk_0x4902846B4A99364A((fVar12 / uParam0->f_1.f_8));
	fVar14 = ((fVar9 * 3f) / 18f);
	return (fVar13 * 0.95f), fVar14, (-fVar9 * 0.85f);
}

void func_28(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0x1523
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0->f_1.f_2;
	iVar1 = uParam0->f_1.f_3;
	if (*uParam1 < 0 || *uParam1 > iVar0)
	{
		return;
	}
	if (uParam1->f_1 < 0 || uParam1->f_1 > iVar1)
	{
		return;
	}
	*uParam2 = (SYSTEM::TO_FLOAT(*uParam1) / SYSTEM::TO_FLOAT(iVar0));
	*uParam3 = (SYSTEM::TO_FLOAT(uParam1->f_1) / SYSTEM::TO_FLOAT(iVar1));
}

int func_29(int iParam0, int iParam1)//Position - 0x158E
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2;
					break;
				
				case 1:
					return 1;
					break;
				
				default:
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 3;
					break;
				
				case 1:
					return 4;
					break;
				
				default:
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 5;
					break;
				
				default:
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 6;
					break;
				
				case 1:
					return 7;
					break;
				
				default:
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return 8;
					break;
				
				case 1:
					return 9;
					break;
				
				default:
					break;
			}
			break;
	}
	return 0;
}

int func_30(int iParam0)//Position - 0x1674
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 7;
			break;
		
		case 1:
			iVar0 = 8;
			break;
		
		case 2:
			iVar0 = 9;
			break;
		
		case 3:
			iVar0 = 10;
			break;
		
		case 4:
			iVar0 = 11;
			break;
	}
	return iVar0;
}

void func_31(var uParam0)//Position - 0x16C5
{
	int iVar0;
	
	unk_0x29CD142125FE177B(uParam0->f_19D, "CREATE_VIEW");
	unk_0x1E1FB49121565EB6(uParam0->f_19F);
	unk_0x1E1FB49121565EB6(1);
	unk_0xD44E04EBBDC4CE88(SYSTEM::TO_FLOAT(uParam0->f_1.f_10));
	unk_0xD44E04EBBDC4CE88(SYSTEM::TO_FLOAT(uParam0->f_1.f_10.f_1));
	unk_0xF9FBC2F3F73D94C9();
	func_33(uParam0);
	switch (*uParam0)
	{
		case 0:
			unk_0x29CD142125FE177B(uParam0->f_19D, "SET_DATA_SLOT");
			unk_0x1E1FB49121565EB6(uParam0->f_19F);
			unk_0x1E1FB49121565EB6(0);
			unk_0x1E1FB49121565EB6(2);
			unk_0xF9FBC2F3F73D94C9();
			unk_0x29CD142125FE177B(uParam0->f_19D, "SET_DATA_SLOT");
			unk_0x1E1FB49121565EB6(uParam0->f_19F);
			unk_0x1E1FB49121565EB6(1);
			unk_0x1E1FB49121565EB6(1);
			unk_0xF9FBC2F3F73D94C9();
			break;
		
		case 1:
			unk_0x29CD142125FE177B(uParam0->f_19D, "SET_DATA_SLOT");
			unk_0x1E1FB49121565EB6(uParam0->f_19F);
			unk_0x1E1FB49121565EB6(0);
			unk_0x1E1FB49121565EB6(3);
			unk_0xF9FBC2F3F73D94C9();
			unk_0x29CD142125FE177B(uParam0->f_19D, "SET_DATA_SLOT");
			unk_0x1E1FB49121565EB6(uParam0->f_19F);
			unk_0x1E1FB49121565EB6(1);
			unk_0x1E1FB49121565EB6(4);
			unk_0xF9FBC2F3F73D94C9();
			break;
		
		case 3:
			unk_0x29CD142125FE177B(uParam0->f_19D, "SET_DATA_SLOT");
			unk_0x1E1FB49121565EB6(uParam0->f_19F);
			unk_0x1E1FB49121565EB6(0);
			unk_0x1E1FB49121565EB6(6);
			unk_0xF9FBC2F3F73D94C9();
			unk_0x29CD142125FE177B(uParam0->f_19D, "SET_DATA_SLOT");
			unk_0x1E1FB49121565EB6(uParam0->f_19F);
			unk_0x1E1FB49121565EB6(1);
			unk_0x1E1FB49121565EB6(7);
			unk_0xF9FBC2F3F73D94C9();
			break;
		
		case 4:
			unk_0x29CD142125FE177B(uParam0->f_19D, "SET_DATA_SLOT");
			unk_0x1E1FB49121565EB6(uParam0->f_19F);
			unk_0x1E1FB49121565EB6(0);
			unk_0x1E1FB49121565EB6(8);
			unk_0xF9FBC2F3F73D94C9();
			unk_0x29CD142125FE177B(uParam0->f_19D, "SET_DATA_SLOT");
			unk_0x1E1FB49121565EB6(uParam0->f_19F);
			unk_0x1E1FB49121565EB6(1);
			unk_0x1E1FB49121565EB6(9);
			unk_0xF9FBC2F3F73D94C9();
			break;
	}
	unk_0x29CD142125FE177B(uParam0->f_19D, "DISPLAY_VIEW");
	unk_0x1E1FB49121565EB6(uParam0->f_19F);
	unk_0xF9FBC2F3F73D94C9();
	unk_0x29CD142125FE177B(uParam0->f_19D, "SHOW_VIEW");
	unk_0x1E1FB49121565EB6(uParam0->f_19F);
	unk_0x5E5DBD0A6623969E(func_32(*uParam0, uParam0->f_1.f_1D));
	unk_0xF9FBC2F3F73D94C9();
	iVar0 = func_65(func_30(*uParam0));
	if (iVar0 != 0)
	{
		unk_0x29CD142125FE177B(uParam0->f_19D, "FOCUS_VIEW");
		unk_0x1E1FB49121565EB6(uParam0->f_19F);
		unk_0xF9FBC2F3F73D94C9();
		if (iVar0 == func_29(*uParam0, 0))
		{
			unk_0x29CD142125FE177B(uParam0->f_19D, "SET_INPUT_EVENT");
			unk_0x1E1FB49121565EB6(8);
			unk_0xF9FBC2F3F73D94C9();
		}
		else if (iVar0 == func_29(*uParam0, 1))
		{
			unk_0x29CD142125FE177B(uParam0->f_19D, "SET_INPUT_EVENT");
			unk_0x1E1FB49121565EB6(9);
			unk_0xF9FBC2F3F73D94C9();
		}
		unk_0x29CD142125FE177B(uParam0->f_19D, "FOCUS_VIEW");
		unk_0x1E1FB49121565EB6(99);
		unk_0xF9FBC2F3F73D94C9();
	}
}

bool func_32(int iParam0, int iParam1)//Position - 0x1932
{
	return unk_0xFA30DFD0084E92FE(Global_19B04.f_1.f_78[iParam0], iParam1);
}

void func_33(var uParam0)//Position - 0x194C
{
	unk_0x29CD142125FE177B(uParam0->f_19D, "SET_LABELS");
	func_8("H_CRW_NAME");
	func_8("H_CRW_TYPE");
	func_8("H_CRW_SKILLS");
	switch (*uParam0)
	{
		case 0:
			func_8("H_LBL_JWL");
			break;
		
		case 1:
			func_8("H_LBL_DOC");
			break;
		
		case 2:
			func_8("H_LBL_RUR");
			break;
		
		case 3:
			func_8("H_LBL_AGN");
			break;
		
		case 4:
			func_8("H_LBL_FA");
			func_8("H_LBL_FB");
			break;
	}
	if (*uParam0 != 1)
	{
		func_8("H_LBL_CRW");
	}
	func_8("H_LBL_TODO");
	if (*uParam0 != 2)
	{
		func_8("H_LBL_APP");
	}
	switch (*uParam0)
	{
		case 0:
			func_8("H_LBL_J1");
			func_8("H_LBL_J2");
			func_8("H_LBL_J3");
			func_8("H_LBL_J4");
			func_8("HC_J_IMPACT");
			func_8("HC_J_STEALTH");
			break;
		
		case 1:
			func_8("HC_D_BLOW_UP");
			func_8("HC_D_DEEP_SEA");
			break;
		
		case 2:
			func_8("H_LBL_R1");
			func_8("H_LBL_R2");
			func_8("H_LBL_R3");
			func_8("H_LBL_R4");
			func_8("H_LBL_R5");
			func_8("H_LBL_R6");
			func_8("H_LBL_R7");
			func_8("H_LBL_R8");
			func_8("H_LBL_R9");
			func_8("H_LBL_R10");
			func_8("H_LBL_R11");
			func_8("H_LBL_R12");
			break;
		
		case 3:
			func_8("H_LBL_A1");
			func_8("H_LBL_A2");
			func_8("H_LBL_A3");
			func_8("H_LBL_A4");
			func_8("H_LBL_A5");
			func_8("HC_A_FIRETRUCK");
			func_8("HC_A_HELICOPTER");
			break;
		
		case 4:
			func_8("H_LBL_F1");
			func_8("H_LBL_F2");
			func_8("H_LBL_F3");
			func_8("H_LBL_F4");
			func_8("H_LBL_F5");
			func_8("HC_F_TRAFFCONT");
			func_8("HC_F_HELI");
			break;
	}
	unk_0xF9FBC2F3F73D94C9();
}

void func_34(var uParam0)//Position - 0x1B4E
{
	unk_0x29CD142125FE177B(uParam0->f_19D, "SET_DATA_SLOT_EMPTY");
	unk_0x1E1FB49121565EB6(uParam0->f_19F);
	unk_0xF9FBC2F3F73D94C9();
}

void func_35(var uParam0, int iParam1, int iParam2)//Position - 0x1B70
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 < 0 || iParam1 >= uParam0->f_1.f_60)
	{
		return;
	}
	func_23(uParam0, 2, 1);
	iVar0 = func_65(func_30(*uParam0));
	iVar1 = Global_15C29[iVar0 /*19*/].f_1[iParam1];
	switch (iVar1)
	{
		case 1:
			func_62(uParam0, iVar0, 1);
			break;
		
		case 2:
			func_62(uParam0, iVar0, 3);
			break;
		
		case 3:
			func_62(uParam0, iVar0, 2);
			break;
	}
	func_61(uParam0, uParam0->f_1A1);
	func_36(uParam0, uParam0->f_1A1);
	uParam0->f_1C2 = iParam1;
	unk_0x29CD142125FE177B(uParam0->f_19D, "SHOW_VIEW");
	unk_0x1E1FB49121565EB6(iParam1);
	unk_0x5E5DBD0A6623969E(true);
	unk_0xF9FBC2F3F73D94C9();
	unk_0x29CD142125FE177B(uParam0->f_19D, "FOCUS_VIEW");
	unk_0x1E1FB49121565EB6(iParam1);
	unk_0xF9FBC2F3F73D94C9();
	func_25(uParam0, &(uParam0->f_1.f_61[iParam1 /*2*/]), uParam0->f_1.f_A);
	if (iParam2 != 0)
	{
		iVar2 = 0;
		while (uParam0->f_1A2[iVar2] != iParam2)
		{
			unk_0x29CD142125FE177B(uParam0->f_19D, "SET_INPUT_EVENT");
			unk_0x1E1FB49121565EB6(9);
			unk_0xF9FBC2F3F73D94C9();
			iVar2++;
			if (iVar2 > 7)
			{
				return;
			}
		}
	}
	func_11(uParam0, 0);
	func_18(uParam0);
}

void func_36(var uParam0, int iParam1)//Position - 0x1CA6
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_30(*uParam0);
	iVar1 = func_65(iVar0);
	iVar2 = Global_15C29[iVar1 /*19*/].f_1[iParam1];
	unk_0x29CD142125FE177B(uParam0->f_19D, "CREATE_VIEW");
	unk_0x1E1FB49121565EB6(iParam1);
	unk_0x1E1FB49121565EB6(0);
	unk_0xD44E04EBBDC4CE88(SYSTEM::TO_FLOAT(uParam0->f_1.f_61[iParam1 /*2*/]));
	unk_0xD44E04EBBDC4CE88(SYSTEM::TO_FLOAT(uParam0->f_1.f_61[iParam1 /*2*/].f_1));
	unk_0xF9FBC2F3F73D94C9();
	func_33(uParam0);
	iVar3 = 0;
	if (Global_19B04.f_1.f_C[iVar1 /*6*/][iParam1] != 0)
	{
		iVar4 = Global_19B04.f_1.f_C[iVar1 /*6*/][iParam1];
		func_41(uParam0->f_19D, iVar4, iParam1, iVar3, iVar4);
	}
	else
	{
		iVar5 = 0;
		while (iVar5 < 14)
		{
			iVar6 = iVar5;
			if (func_40(iVar6) == iVar2)
			{
				if (func_39(iVar6))
				{
					if (!func_38(iVar6))
					{
						if (!func_37(uParam0, iVar6))
						{
							if (!(iVar6 == 11 && *uParam0 == 3))
							{
								func_41(uParam0->f_19D, iVar6, iParam1, iVar3, iVar5);
								uParam0->f_1A2[iVar3] = iVar6;
								iVar3++;
							}
						}
					}
				}
			}
			iVar5++;
		}
	}
	if (Global_19B04.f_1.f_C[iVar1 /*6*/][iParam1] != 0)
	{
		unk_0x29CD142125FE177B(uParam0->f_19D, "SHOW_VIEW");
		unk_0x1E1FB49121565EB6(iParam1);
		unk_0x5E5DBD0A6623969E(true);
		unk_0xF9FBC2F3F73D94C9();
	}
	else
	{
		unk_0x29CD142125FE177B(uParam0->f_19D, "SHOW_VIEW");
		unk_0x1E1FB49121565EB6(iParam1);
		unk_0x5E5DBD0A6623969E(false);
		unk_0xF9FBC2F3F73D94C9();
	}
	unk_0x29CD142125FE177B(uParam0->f_19D, "DISPLAY_VIEW");
	unk_0x1E1FB49121565EB6(iParam1);
	unk_0xF9FBC2F3F73D94C9();
}

int func_37(var uParam0, int iParam1)//Position - 0x1E30
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_65(func_30(*uParam0));
	iVar1 = 0;
	while (iVar1 < uParam0->f_1A1)
	{
		if (Global_19B04.f_1.f_C[iVar0 /*6*/][iVar1] == iParam1)
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

bool func_38(int iParam0)//Position - 0x1E75
{
	return unk_0xFA30DFD0084E92FE(Global_19B04.f_1.f_76, iParam0);
}

bool func_39(int iParam0)//Position - 0x1E8B
{
	return unk_0xFA30DFD0084E92FE(Global_19B04.f_1.f_74, iParam0);
}

int func_40(int iParam0)//Position - 0x1EA1
{
	return Global_15B8F[iParam0 /*5*/];
}

void func_41(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1EB1
{
	unk_0x29CD142125FE177B(iParam0, "SET_DATA_SLOT");
	unk_0x1E1FB49121565EB6(iParam2);
	unk_0x1E1FB49121565EB6(iParam3);
	unk_0x1E1FB49121565EB6(iParam4);
	func_8(func_59(iParam1));
	func_8(func_58(iParam1));
	switch (func_40(iParam1))
	{
		case 1:
			func_8(func_57(0));
			unk_0x1E1FB49121565EB6(func_54(iParam1, 0));
			func_8(func_57(1));
			unk_0x1E1FB49121565EB6(func_54(iParam1, 1));
			func_8(func_57(2));
			unk_0x1E1FB49121565EB6(func_54(iParam1, 2));
			func_8(func_57(3));
			unk_0x1E1FB49121565EB6(func_54(iParam1, 3));
			break;
		
		case 2:
			func_8(func_53(0));
			unk_0x1E1FB49121565EB6(func_50(iParam1, 0));
			func_8(func_53(1));
			unk_0x1E1FB49121565EB6(func_50(iParam1, 1));
			func_8(func_53(2));
			unk_0x1E1FB49121565EB6(func_50(iParam1, 2));
			break;
		
		case 3:
			func_8(func_48(0));
			unk_0x1E1FB49121565EB6(func_43(iParam1, 0));
			func_8(func_48(1));
			unk_0x1E1FB49121565EB6(func_43(iParam1, 1));
			func_8(func_48(2));
			unk_0x1E1FB49121565EB6(func_43(iParam1, 2));
			break;
	}
	func_8("H_CRW_CUT");
	unk_0x1E1FB49121565EB6(func_42(iParam1));
	unk_0xF9FBC2F3F73D94C9();
}

var func_42(int iParam0)//Position - 0x1FED
{
	return Global_15B8F[iParam0 /*5*/].f_1;
}

int func_43(int iParam0, int iParam1)//Position - 0x1FFF
{
	return SYSTEM::ROUND(((SYSTEM::TO_FLOAT(func_45(iParam0, iParam1)) / SYSTEM::TO_FLOAT(func_44(iParam1))) * 100f));
}

int func_44(int iParam0)//Position - 0x2028
{
	switch (iParam0)
	{
		case 0:
			return 100;
			break;
		
		case 1:
			return 100;
			break;
		
		case 2:
			return 100;
			break;
	}
	return 0;
}

int func_45(int iParam0, int iParam1)//Position - 0x2062
{
	if (func_40(iParam0) != 3)
	{
		return -1;
	}
	return func_46(iParam0, iParam1);
}

int func_46(int iParam0, int iParam1)//Position - 0x2080
{
	return func_47(iParam1, Global_19B04.f_1.f_49[iParam0 /*3*/].f_1, Global_19B04.f_1.f_49[iParam0 /*3*/].f_2);
}

int func_47(int iParam0, int iParam1, int iParam2)//Position - 0x20AA
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return SYSTEM::SHIFT_RIGHT(iParam1, (15 * iParam0)) & 32767;
			break;
		
		case 2:
		case 3:
			return SYSTEM::SHIFT_RIGHT(iParam2, (15 * (iParam0 - 2))) & 32767;
			break;
	}
	return -1;
}

char* func_48(int iParam0)//Position - 0x20FE
{
	return func_49(3, iParam0);
}

char* func_49(int iParam0, int iParam1)//Position - 0x210D
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return "HC_STA_G1";
					break;
				
				case 1:
					return "HC_STA_G2";
					break;
				
				case 2:
					return "HC_STA_G3";
					break;
				
				case 3:
					return "HC_STA_G4";
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return "HC_STA_H1";
					break;
				
				case 1:
					return "HC_STA_H2";
					break;
				
				case 2:
					return "HC_STA_H3";
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return "HC_STA_D1";
					break;
				
				case 1:
					return "HC_STA_D2";
					break;
				
				case 2:
					return "HC_STA_D3";
					break;
			}
			break;
	}
	return "ERROR!";
}

int func_50(int iParam0, int iParam1)//Position - 0x21F0
{
	return SYSTEM::ROUND(((SYSTEM::TO_FLOAT(func_52(iParam0, iParam1)) / SYSTEM::TO_FLOAT(func_51(iParam1))) * 100f));
}

int func_51(int iParam0)//Position - 0x2219
{
	switch (iParam0)
	{
		case 0:
			return 100;
			break;
		
		case 1:
			return 100;
			break;
		
		case 2:
			return 100;
			break;
	}
	return 0;
}

int func_52(int iParam0, int iParam1)//Position - 0x2253
{
	if (func_40(iParam0) != 2)
	{
		return -1;
	}
	return func_46(iParam0, iParam1);
}

char* func_53(int iParam0)//Position - 0x2271
{
	return func_49(2, iParam0);
}

int func_54(int iParam0, int iParam1)//Position - 0x2280
{
	return SYSTEM::ROUND(((SYSTEM::TO_FLOAT(func_56(iParam0, iParam1)) / SYSTEM::TO_FLOAT(func_55(iParam1))) * 100f));
}

int func_55(int iParam0)//Position - 0x22A9
{
	switch (iParam0)
	{
		case 0:
			return 1000;
			break;
		
		case 1:
			return 100;
			break;
		
		case 2:
			return 100;
			break;
		
		case 3:
			return 100;
			break;
	}
	return 0;
}

int func_56(int iParam0, int iParam1)//Position - 0x22F2
{
	if (func_40(iParam0) != 1)
	{
		return -1;
	}
	return func_46(iParam0, iParam1);
}

char* func_57(int iParam0)//Position - 0x2310
{
	return func_49(1, iParam0);
}

char* func_58(int iParam0)//Position - 0x231F
{
	switch (Global_15B8F[iParam0 /*5*/])
	{
		case 1:
			return "HC_TYPE_G";
			break;
		
		case 2:
			return "HC_TYPE_H";
			break;
		
		case 3:
			return "HC_TYPE_D";
			break;
	}
	return "ERROR!";
}

char* func_59(int iParam0)//Position - 0x2368
{
	return func_60(iParam0);
}

char* func_60(int iParam0)//Position - 0x2376
{
	switch (iParam0)
	{
		case 1:
			return "HC_N_GUS";
			break;
		
		case 2:
			return "HC_N_KAR";
			break;
		
		case 10:
			return "HC_N_PAC";
			break;
		
		case 11:
			return "HC_N_CHE";
			break;
		
		case 3:
			return "HC_N_HUG";
			break;
		
		case 4:
			return "HC_N_NOR";
			break;
		
		case 5:
			return "HC_N_DAR";
			break;
		
		case 6:
			return "HC_N_PAI";
			break;
		
		case 7:
			return "HC_N_CHR";
			break;
		
		case 12:
			return "HC_N_RIC";
			break;
		
		case 8:
			return "HC_N_EDD";
			break;
		
		case 13:
			return "HC_N_TAL";
			break;
		
		case 9:
			return "HC_N_KRM";
			break;
	}
	return "ERROR!";
}

void func_61(var uParam0, int iParam1)//Position - 0x2459
{
	unk_0x29CD142125FE177B(uParam0->f_19D, "SET_DATA_SLOT_EMPTY");
	unk_0x1E1FB49121565EB6(iParam1);
	unk_0xF9FBC2F3F73D94C9();
}

void func_62(var uParam0, int iParam1, int iParam2)//Position - 0x2478
{
	int iVar0;
	
	if (!unk_0xFA30DFD0084E92FE(Global_15C29[iParam1 /*19*/].f_12, iParam2))
	{
		if (!unk_0x3362CDE8460ED38B(&(Global_15C29[iParam1 /*19*/].f_7[iParam2 /*2*/]), ""))
		{
			func_24(uParam0, uParam0->f_1.f_114, Global_15C29[iParam1 /*19*/].f_7[iParam2 /*2*/], 1);
			unk_0xF0059F27F7BB6680(&(Global_15C29[iParam1 /*19*/].f_12), iParam2);
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if (unk_0x3362CDE8460ED38B(&(Global_15C29[iParam1 /*19*/].f_7[iParam2 /*2*/]), &(Global_15C29[iVar0 /*19*/].f_7[iParam2 /*2*/])))
				{
					unk_0xF0059F27F7BB6680(&(Global_15C29[iVar0 /*19*/].f_12), iParam2);
				}
				iVar0++;
			}
		}
	}
}

void func_63(var uParam0)//Position - 0x2523
{
	func_25(uParam0, &(uParam0->f_1.f_C), 45f);
	unk_0x29CD142125FE177B(uParam0->f_19D, "FOCUS_VIEW");
	unk_0x1E1FB49121565EB6(99);
	unk_0xF9FBC2F3F73D94C9();
	func_18(uParam0);
}

void func_64(var uParam0)//Position - 0x2559
{
	switch (uParam0->f_1D0)
	{
		case 1:
		case 2:
		case 3:
			unk_0x29CD142125FE177B(uParam0->f_19D, "FOCUS_VIEW");
			unk_0x1E1FB49121565EB6(99);
			unk_0xF9FBC2F3F73D94C9();
			break;
	}
	unk_0x7456702622C62EA0(0);
}

int func_65(int iParam0)//Position - 0x259C
{
	if (iParam0 == 13 || iParam0 == -1)
	{
		return 0;
	}
	return Global_19B04.f_2360.f_63.f_CD[iParam0];
}

int func_66(int iParam0)//Position - 0x25C9
{
	switch (iParam0)
	{
		case 0:
			return 2;
			break;
		
		case 1:
			return 3;
			break;
		
		case 2:
			return 4;
			break;
		
		case 3:
			return 5;
			break;
		
		case 4:
			return 6;
			break;
	}
	return -1;
}

void func_67(var uParam0)//Position - 0x261A
{
	if (unk_0xFA30DFD0084E92FE(uParam0->f_1C1, 1))
	{
		func_68(uParam0);
	}
}

void func_68(var uParam0)//Position - 0x2635
{
	bool bVar0;
	vector3 vVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!unk_0xFA30DFD0084E92FE(uParam0->f_1C1, 2))
	{
		if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
		{
			if (!func_142(0))
			{
				if (func_133(8))
				{
					if (SYSTEM::VDIST2(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), uParam0->f_191) < 4f)
					{
						vVar1 = { uParam0->f_191 - unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true) };
						fVar2 = unk_0xFDC254CE02DB0919(vVar1.x, vVar1.y);
						fVar3 = unk_0x357058E632979E65((uParam0->f_194 - fVar2));
						if (fVar3 <= 70f)
						{
							bVar0 = true;
						}
						else
						{
							fVar4 = uParam0->f_194;
							if (fVar4 > 180f)
							{
								fVar4 = (fVar4 - 360f);
							}
							else if (fVar4 < -180f)
							{
								fVar4 = (fVar4 + 360f);
							}
							if ((fVar4 - fVar2) < fVar3)
							{
								fVar3 = unk_0x357058E632979E65((fVar4 - fVar2));
							}
							if (fVar3 <= 70f)
							{
								bVar0 = true;
							}
							else
							{
								if (fVar2 > 180f)
								{
									fVar2 = (fVar2 - 360f);
								}
								else if (fVar2 < -180f)
								{
									fVar2 = (fVar2 + 360f);
								}
								if ((uParam0->f_194 - fVar2) < fVar3)
								{
									fVar3 = unk_0x357058E632979E65((uParam0->f_194 - fVar2));
								}
								if (fVar3 <= 70f)
								{
									bVar0 = true;
								}
								else
								{
									if ((fVar4 - fVar2) < fVar3)
									{
										fVar3 = unk_0x357058E632979E65((fVar4 - fVar2));
									}
									if (fVar3 <= 70f)
									{
										bVar0 = true;
									}
								}
							}
						}
					}
				}
			}
		}
		if (bVar0)
		{
			if (uParam0->f_1C3 == -1)
			{
				func_132(&(uParam0->f_1C3), 3, "PB_H_ENT", 0, 0, 0, 0);
			}
			else if (func_131(uParam0->f_1C3, 1))
			{
				func_129(&(uParam0->f_1C3));
				func_115(uParam0);
			}
		}
		else if (uParam0->f_1C3 != -1)
		{
			func_129(&(uParam0->f_1C3));
		}
	}
	else
	{
		bVar5 = func_10(1, *uParam0);
		func_77(uParam0);
		if (((!bVar5 && uParam0->f_1C5 > 15) && (unk_0x694514BD37EC4E94(2, iLocal_36) || unk_0x694514BD37EC4E94(2, 238))) || unk_0xFA30DFD0084E92FE(uParam0->f_1C1, 8))
		{
			unk_0x7CB6FD92BE491AD9(&(uParam0->f_1C1), 8);
			func_69(uParam0, 0);
		}
	}
}

void func_69(var uParam0, bool bParam1)//Position - 0x2854
{
	vector3 vVar0;
	int iVar1;
	
	uParam0->f_1C5 = 0;
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0x346478B12F69D4E3(unk_0xBC25C936A095B5BA(), false);
		if (!bParam1)
		{
			vVar0 = { uParam0->f_191 };
			vVar0 = { vVar0 + Vector(0f, (1f * SYSTEM::COS((180f - uParam0->f_194))), (1f * SYSTEM::SIN((180f - uParam0->f_194)))) };
			unk_0x2084D4C6C2DF616F(vVar0, &(vVar0.f_2), 0, 0);
			unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), vVar0, 1, false, 0, 1);
			unk_0x019CE76D5286C95C(unk_0xBC25C936A095B5BA(), uParam0->f_194);
			unk_0xF3F01A78937DC905(0f);
			unk_0x2B9AEC08E469E384(0f, 1065353216);
			unk_0x3E2B7D349B5735D3(unk_0xBC25C936A095B5BA(), -1871534317, false, 0, 0);
			unk_0x2EB4D46478766D87(unk_0xBC25C936A095B5BA(), 1, 0);
		}
	}
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 134);
	}
	unk_0x43F06392C4EF25E0(true);
	func_72(0);
	func_71();
	unk_0xCB50D125C355ED9C();
	unk_0xC0404835F30391BB(17);
	unk_0xE76B5B45069F0B60(0);
	func_70(&(uParam0->f_289), 0, 1);
	func_13(&(uParam0->f_1.f_14[0 /*4*/]), 1);
	func_13(&(uParam0->f_1.f_14[1 /*4*/]), 1);
	func_13(&(uParam0->f_1.f_6C[0 /*4*/]), 1);
	func_13(&(uParam0->f_1.f_6C[1 /*4*/]), 1);
	unk_0x7456702622C62EA0(1);
	while (unk_0xF16DAFF595E80F7C())
	{
		unk_0x7456702622C62EA0(1);
		SYSTEM::WAIT(0);
	}
	iVar1 = unk_0x9911032C958CE1B0(uParam0->f_191);
	if (iVar1 != 0)
	{
		unk_0xB165D6ED2E977354(iVar1);
	}
	unk_0xF3D744E4ACB5CB90();
	func_64(uParam0);
	unk_0x7CB6FD92BE491AD9(&(uParam0->f_1C1), 7);
	unk_0x7CB6FD92BE491AD9(&(uParam0->f_1C1), 2);
	Global_15C13 = 0;
}

void func_70(var uParam0, int iParam1, bool bParam2)//Position - 0x29D9
{
	if (unk_0xEF0E25DA0CB6E8FF(*uParam0))
	{
		if (bParam2)
		{
			unk_0x062C9995BFD27B2A(false, false, 3000, 1, iParam1, 0);
		}
		if (unk_0xEDEA6C8F42EE05F6(*uParam0))
		{
			unk_0x348665177DBFB93B(*uParam0, false);
		}
		unk_0x4EC087603E1DEF9C(*uParam0, iParam1);
	}
	if (uParam0->f_17)
	{
		unk_0x96CC36AFF33D1DFD();
		uParam0->f_17 = 0;
	}
	uParam0->f_1 = { 0f, 0f, 0f };
	uParam0->f_4 = { 0f, 0f, 0f };
	uParam0->f_7 = 0f;
	uParam0->f_14 = 0;
	uParam0->f_15 = 0;
	uParam0->f_16 = 0;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_B = { 0f, 0f, 0f };
	uParam0->f_E = { 0f, 0f, 0f };
	uParam0->f_11 = 0f;
	uParam0->f_12 = 0f;
}

void func_71()//Position - 0x2A73
{
	Global_4336.f_5 = 0;
}

void func_72(bool bParam0)//Position - 0x2A81
{
	if (bParam0)
	{
		func_76();
		if (Global_389D.f_1 == 10 || Global_389D.f_1 == 9)
		{
			unk_0xF0059F27F7BB6680(&Global_93C, 16);
		}
		Global_389D.f_1 = 1;
		if (func_142(0))
		{
			func_73(0);
		}
	}
	else if (Global_389D.f_1 == 1)
	{
		if (!Global_389D.f_1 == 0)
		{
			Global_389D.f_1 = 3;
		}
	}
}

void func_73(int iParam0)//Position - 0x2AE4
{
	if (Global_3943)
	{
		func_75(0, 0);
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
	if (!func_74())
	{
		Global_389D.f_1 = 3;
	}
}

int func_74()//Position - 0x2B54
{
	if (Global_389D.f_1 == 1 || Global_389D.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_75(bool bParam0, bool bParam1)//Position - 0x2B7B
{
	if (bParam0)
	{
		if (func_142(0))
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

void func_76()//Position - 0x2BEF
{
	if (Global_389D.f_1 == 9 || Global_389D.f_1 == 10)
	{
		Global_3DED = 0;
		Global_3DE9 = 1;
	}
}

void func_77(var uParam0)//Position - 0x2C18
{
	char* sVar0;
	bool bVar1;
	vector3 vVar2;
	
	sVar0 = unk_0xC7CF72D26EA6A227(0, 1, true);
	if (!unk_0x3362CDE8460ED38B(sVar0, uParam0->f_1D2))
	{
		func_7(uParam0);
	}
	uParam0->f_1D2 = sVar0;
	func_113();
	func_101(uParam0);
	func_85(uParam0);
	if (uParam0->f_1D0 == 1)
	{
		func_82(uParam0);
	}
	if (func_20())
	{
		func_18(uParam0);
	}
	bVar1 = uParam0->f_1C6 > unk_0x105601648511CC64();
	func_78(&(uParam0->f_289), unk_0xFA30DFD0084E92FE(uParam0->f_1C1, 4), (unk_0xFA30DFD0084E92FE(uParam0->f_1C1, 5) && !bVar1), 1, 0, 1045220557, 1, 1065353216, 0);
	if (unk_0xFA30DFD0084E92FE(uParam0->f_1C1, 7))
	{
		if ((!unk_0x866EAD7E27D8D0F8() && unk_0x726D9204B160D23E()) && !unk_0xE186ACC7BE9B244E())
		{
			if (uParam0->f_1D0 != 1)
			{
				if (uParam0->f_1D0 == 0 || (((!unk_0xFA30DFD0084E92FE(uParam0->f_1C1, 11) && !unk_0xFA30DFD0084E92FE(uParam0->f_1C1, 10)) && !func_19()) && uParam0->f_1E3 == 0))
				{
					if (!unk_0xFA30DFD0084E92FE(uParam0->f_1C1, 18) || uParam0->f_1D0 == 2)
					{
						unk_0x4B6031094354FED6(uParam0->f_19E, 255, 255, 255, 0, 0);
					}
				}
			}
		}
	}
	unk_0x43F06392C4EF25E0(false);
	unk_0x4E0EC60D119222B1(2);
	unk_0x4E0EC60D119222B1(1);
	unk_0x4E0EC60D119222B1(8);
	unk_0x4E0EC60D119222B1(7);
	unk_0x4E0EC60D119222B1(3);
	unk_0xE9DBADA362313538();
	unk_0xC2EAD30963BDAA47(82, 66);
	unk_0x6DB77F071B43C870(17, 0.612f, 0.818f);
	unk_0x2A025E7CEBB76D14();
	if (!unk_0x866EAD7E27D8D0F8())
	{
		unk_0xD55638CE45B2B948(2, 201);
	}
	unk_0xD55638CE45B2B948(2, 202);
	unk_0xD55638CE45B2B948(2, 188);
	unk_0xD55638CE45B2B948(2, 187);
	unk_0xD55638CE45B2B948(2, 189);
	unk_0xD55638CE45B2B948(2, 190);
	if (!unk_0xFA30DFD0084E92FE(uParam0->f_1C1, 7))
	{
		if (!unk_0x866EAD7E27D8D0F8())
		{
			vVar2 = { uParam0->f_191 };
			vVar2 = { vVar2 + Vector(0.5f, (2.9f * SYSTEM::COS((180f - uParam0->f_194))), (2.9f * SYSTEM::SIN((180f - uParam0->f_194)))) };
			unk_0x2084D4C6C2DF616F(vVar2, &(vVar2.f_2), 0, 0);
			unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 134);
			unk_0x49D46EE47C9CCB66(unk_0xBC25C936A095B5BA());
			unk_0x346478B12F69D4E3(unk_0xBC25C936A095B5BA(), true);
			unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), vVar2, 1, false, 0, 1);
			unk_0x019CE76D5286C95C(unk_0xBC25C936A095B5BA(), uParam0->f_194);
			unk_0xF0059F27F7BB6680(&(uParam0->f_1C1), 7);
		}
	}
}

void func_78(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, float fParam7, bool bParam8)//Position - 0x2E6A
{
	int iVar0[4];
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	vector3 vVar6;
	int iVar7;
	int iVar8;
	
	unk_0x9601F9343A2063DE(2);
	func_81(&(iVar0[0]), &(iVar0[1]), &(iVar0[2]), &(iVar0[3]), 0, 0);
	if (unk_0xF31C9BB6C94E205D())
	{
		iVar0[3] = (iVar0[3] * -1);
	}
	if (unk_0x50465D2C022B9E04(2))
	{
		fVar1 = unk_0x4C25B6CE9D0B3C92(2, 239);
		fVar2 = unk_0x4C25B6CE9D0B3C92(2, 240);
		fVar3 = (fVar1 - uParam0->f_1D);
		fVar4 = (fVar2 - uParam0->f_1E);
		uParam0->f_1D = fVar1;
		uParam0->f_1E = fVar2;
		if (bParam4)
		{
			iVar0[2] = -SYSTEM::ROUND(((fVar3 * fParam5) * 127f));
			iVar0[3] = -SYSTEM::ROUND(((fVar4 * fParam5) * 127f));
		}
		else
		{
			iVar0[2] = SYSTEM::ROUND(((unk_0x4C25B6CE9D0B3C92(2, 290) * fParam5) * 127f));
			iVar0[3] = SYSTEM::ROUND(((unk_0x4C25B6CE9D0B3C92(2, 291) * fParam5) * 127f));
		}
		iVar0[2] = func_80((iVar0[2] + uParam0->f_18), -127, 127);
		iVar0[3] = func_80((iVar0[3] + uParam0->f_19), -127, 127);
	}
	if (uParam0->f_18 == iVar0[2] && uParam0->f_19 == iVar0[3])
	{
		if (uParam0->f_1B < unk_0x105601648511CC64())
		{
			uParam0->f_18 = 0;
			uParam0->f_19 = 0;
			if (unk_0x50465D2C022B9E04(2))
			{
				iVar0[2] = 0;
				iVar0[3] = 0;
				uParam0->f_1C = 1;
			}
		}
	}
	else
	{
		uParam0->f_18 = iVar0[2];
		uParam0->f_19 = iVar0[3];
		uParam0->f_1B = unk_0x105601648511CC64() + 4000;
		uParam0->f_1C = 0;
	}
	if (bParam2)
	{
		uParam0->f_8.f_2 = (-(SYSTEM::TO_FLOAT(iVar0[2]) / 127f) * IntToFloat(uParam0->f_14));
		uParam0->f_8.f_1 = ((-uParam0->f_8.f_2 * IntToFloat(uParam0->f_16)) / IntToFloat(uParam0->f_14));
		uParam0->f_8 = (-(SYSTEM::TO_FLOAT(iVar0[3]) / 127f) * IntToFloat(uParam0->f_15));
	}
	else
	{
		uParam0->f_8 = { 0f, 0f, 0f };
		uParam0->f_18 = 0;
		uParam0->f_19 = 0;
	}
	fVar5 = (30f * SYSTEM::TIMESTEP());
	vVar6 = { uParam0->f_8 + uParam0->f_B };
	if ((unk_0x50465D2C022B9E04(2) && bParam2) && !uParam0->f_1C)
	{
		uParam0->f_E = vVar6.x;
		uParam0->f_E.f_1 = vVar6.y;
		uParam0->f_E.f_2 = vVar6.z;
	}
	else
	{
		uParam0->f_E = (uParam0->f_E + func_79(((((vVar6.x - uParam0->f_E) * 0.05f) * fVar5) * fParam7), -3f, 3f));
		uParam0->f_E.f_1 = (uParam0->f_E.f_1 + func_79(((((vVar6.y - uParam0->f_E.f_1) * 0.05f) * fVar5) * fParam7), -3f, 3f));
		uParam0->f_E.f_2 = (uParam0->f_E.f_2 + func_79(((((vVar6.z - uParam0->f_E.f_2) * 0.05f) * fVar5) * fParam7), -3f, 3f));
	}
	if (uParam0->f_1A)
	{
		uParam0->f_E = func_79(uParam0->f_E, SYSTEM::TO_FLOAT(-uParam0->f_15), SYSTEM::TO_FLOAT(uParam0->f_15));
		uParam0->f_E.f_1 = func_79(uParam0->f_E.f_1, SYSTEM::TO_FLOAT(-uParam0->f_16), SYSTEM::TO_FLOAT(uParam0->f_16));
		uParam0->f_E.f_2 = func_79(uParam0->f_E.f_2, SYSTEM::TO_FLOAT(-uParam0->f_14), SYSTEM::TO_FLOAT(uParam0->f_14));
	}
	if (unk_0x50465D2C022B9E04(0) && bParam1)
	{
		if (uParam0->f_1C)
		{
			uParam0->f_11 = uParam0->f_7;
		}
	}
	else
	{
		uParam0->f_11 = uParam0->f_7;
	}
	if (bParam1)
	{
		if (unk_0x50465D2C022B9E04(0))
		{
			iVar7 = 40;
			iVar8 = 41;
			if (bParam6)
			{
				iVar7 = 241;
				iVar8 = 242;
			}
			if (unk_0xF7DDAAF0EFDAFA22(0, iVar7))
			{
				uParam0->f_11 = (uParam0->f_11 - 5f);
				uParam0->f_1B = unk_0x105601648511CC64() + 4000;
				uParam0->f_1C = 0;
			}
			else if (unk_0xF7DDAAF0EFDAFA22(0, iVar8))
			{
				uParam0->f_11 = (uParam0->f_11 + 5f);
				uParam0->f_1B = unk_0x105601648511CC64() + 4000;
				uParam0->f_1C = 0;
			}
			if (bParam3)
			{
				uParam0->f_11 = func_79(uParam0->f_11, (uParam0->f_7 - uParam0->f_13), uParam0->f_7);
			}
			else
			{
				uParam0->f_11 = func_79(uParam0->f_11, (uParam0->f_7 - uParam0->f_13), (uParam0->f_7 + uParam0->f_13));
			}
		}
		else if (bParam8)
		{
			iVar0[1] = unk_0x1B3AE5B27313855F(2, 207);
			iVar0[3] = unk_0x1B3AE5B27313855F(2, 208);
			if (bParam3)
			{
				if (SYSTEM::TO_FLOAT(iVar0[3]) > 127f)
				{
					uParam0->f_11 = (uParam0->f_11 - IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[3]) / 128f) * (uParam0->f_13 / 2f)))));
				}
			}
			else
			{
				uParam0->f_11 = (uParam0->f_11 + IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[1]) / 128f) * uParam0->f_13))));
				uParam0->f_11 = (uParam0->f_11 - IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[3]) / 128f) * uParam0->f_13))));
			}
		}
		else if (bParam3)
		{
			if (SYSTEM::TO_FLOAT(iVar0[1]) < 0f)
			{
				uParam0->f_11 = (uParam0->f_11 + IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[1]) / 128f) * uParam0->f_13))));
			}
		}
		else
		{
			uParam0->f_11 = (uParam0->f_11 + IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[1]) / 128f) * uParam0->f_13))));
		}
	}
	uParam0->f_12 = (uParam0->f_12 + (((uParam0->f_11 - uParam0->f_12) * 0.06f) * fVar5));
	unk_0x9961B404F89D0597(*uParam0, uParam0->f_1, uParam0->f_4 + uParam0->f_E, uParam0->f_12, 0, 1, 1, 2);
	if (unk_0xEF0E25DA0CB6E8FF(*uParam0))
	{
		if (unk_0xEDEA6C8F42EE05F6(*uParam0))
		{
			if (unk_0xF448AA2D7E08A675(*uParam0))
			{
				unk_0xE9B1C9E275C24095();
			}
		}
	}
}

float func_79(float fParam0, float fParam1, float fParam2)//Position - 0x33BE
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

int func_80(int iParam0, int iParam1, int iParam2)//Position - 0x33E5
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_81(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)//Position - 0x340A
{
	*uParam0 = SYSTEM::FLOOR((unk_0x4C25B6CE9D0B3C92(2, 218) * 127f));
	*uParam1 = SYSTEM::FLOOR((unk_0x4C25B6CE9D0B3C92(2, 219) * 127f));
	*uParam2 = SYSTEM::FLOOR((unk_0x4C25B6CE9D0B3C92(2, 220) * 127f));
	*uParam3 = SYSTEM::FLOOR((unk_0x4C25B6CE9D0B3C92(2, 221) * 127f));
	if (bParam4)
	{
		if (!unk_0x4B1521EDBF25A39C(2, 218))
		{
			*uParam0 = SYSTEM::FLOOR((unk_0xE56557A1B607909F(2, 218) * 127f));
		}
		if (!unk_0x4B1521EDBF25A39C(2, 219))
		{
			*uParam1 = SYSTEM::FLOOR((unk_0xE56557A1B607909F(2, 219) * 127f));
		}
		if (!unk_0x4B1521EDBF25A39C(2, 220))
		{
			*uParam2 = SYSTEM::FLOOR((unk_0xE56557A1B607909F(2, 220) * 127f));
		}
		if (!unk_0x4B1521EDBF25A39C(2, 221))
		{
			*uParam3 = SYSTEM::FLOOR((unk_0xE56557A1B607909F(2, 221) * 127f));
		}
	}
	if (unk_0x50465D2C022B9E04(2))
	{
		if (bParam5)
		{
			if (unk_0xF31C9BB6C94E205D())
			{
				*uParam3 = (*uParam3 * -1);
			}
			if (unk_0xCBE319E6CA6FF4D2())
			{
				*uParam3 = (*uParam3 * -1);
			}
		}
	}
}

void func_82(var uParam0)//Position - 0x350E
{
	bool bVar0;
	int iVar1;
	
	if (!func_10(3, *uParam0))
	{
		if (uParam0->f_1E3 == 0 && uParam0->f_1C7 > 3)
		{
			if (uParam0->f_1C4 == -1)
			{
				if (unk_0xFA30DFD0084E92FE(uParam0->f_1C1, 19))
				{
					uParam0->f_1C4 = unk_0x105601648511CC64() + 500;
				}
				else
				{
					uParam0->f_1C4 = unk_0x105601648511CC64();
				}
			}
			else if (unk_0x105601648511CC64() > uParam0->f_1C4)
			{
				bVar0 = false;
				iVar1 = 0;
				while (iVar1 < uParam0->f_1.f_171)
				{
					if (!bVar0)
					{
						if (!unk_0xFA30DFD0084E92FE(uParam0->f_1.f_12F, iVar1 + 4))
						{
							func_84(uParam0, iVar1);
							if (unk_0xFA30DFD0084E92FE(uParam0->f_1.f_172, iVar1))
							{
								unk_0xF0059F27F7BB6680(&(uParam0->f_1C1), 19);
							}
							else
							{
								unk_0x7CB6FD92BE491AD9(&(uParam0->f_1C1), 19);
							}
							bVar0 = true;
						}
					}
					iVar1++;
				}
				if (!bVar0)
				{
					func_83(3, *uParam0, 1);
				}
			}
		}
	}
}

void func_83(int iParam0, int iParam1, bool bParam2)//Position - 0x35ED
{
	bool bVar0;
	
	if (iParam0 == 11 || iParam0 == -1)
	{
		return;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return;
	}
	bVar0 = unk_0xFA30DFD0084E92FE(Global_19B04.f_2360.f_63.f_DB[iParam0], iParam1);
	if (bVar0 == bParam2)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xF0059F27F7BB6680(&(Global_19B04.f_2360.f_63.f_DB[iParam0]), iParam1);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_2360.f_63.f_DB[iParam0]), iParam1);
	}
}

void func_84(var uParam0, int iParam1)//Position - 0x3672
{
	unk_0x29CD142125FE177B(uParam0->f_19D, "FOCUS_VIEW");
	unk_0x1E1FB49121565EB6(99);
	unk_0xF9FBC2F3F73D94C9();
	func_25(uParam0, &(uParam0->f_1.f_173[iParam1 /*2*/]), uParam0->f_1.f_B);
	func_23(uParam0, iParam1 + 4, 1);
	uParam0->f_1C4 = -1;
}

void func_85(var uParam0)//Position - 0x36B9
{
	int iVar0;
	int iVar1;
	
	if ((!func_19() && unk_0x726D9204B160D23E()) && !unk_0x866EAD7E27D8D0F8())
	{
		if (uParam0->f_1E3 > 0)
		{
			if (!unk_0xFA30DFD0084E92FE(uParam0->f_1C1, 13))
			{
				if (func_86(&(uParam0->f_1E4), &(uParam0->f_1D3[0 /*5*/]), &(uParam0->f_1D3[0 /*5*/].f_2), 4, 0, 0, 0))
				{
					uParam0->f_1C7 = 0;
					if (uParam0->f_1D3[0 /*5*/].f_4)
					{
						unk_0x7CB6FD92BE491AD9(&(uParam0->f_1C1), 11);
					}
					else
					{
						unk_0xF0059F27F7BB6680(&(uParam0->f_1C1), 11);
					}
					iVar0 = 0;
					while (iVar0 < 2)
					{
						uParam0->f_1D3[iVar0 /*5*/] = { uParam0->f_1D3[iVar0 + 1 /*5*/] };
						uParam0->f_1D3[iVar0 /*5*/].f_2 = { uParam0->f_1D3[iVar0 + 1 /*5*/].f_2 };
						uParam0->f_1D3[iVar0 /*5*/].f_4 = uParam0->f_1D3[iVar0 + 1 /*5*/].f_4;
						iVar0++;
					}
					uParam0->f_1E3 = (uParam0->f_1E3 - 1);
				}
			}
			else
			{
				iVar1 = 0;
				while (iVar1 < 2)
				{
					uParam0->f_1D3[iVar1 /*5*/] = { uParam0->f_1D3[iVar1 + 1 /*5*/] };
					uParam0->f_1D3[iVar1 /*5*/].f_2 = { uParam0->f_1D3[iVar1 + 1 /*5*/].f_2 };
					uParam0->f_1D3[iVar1 /*5*/].f_4 = uParam0->f_1D3[iVar1 + 1 /*5*/].f_4;
					iVar1++;
				}
				uParam0->f_1E3 = (uParam0->f_1E3 - 1);
				unk_0x7CB6FD92BE491AD9(&(uParam0->f_1C1), 13);
				unk_0x7CB6FD92BE491AD9(&(uParam0->f_1C1), 11);
			}
		}
		else
		{
			if (unk_0xFA30DFD0084E92FE(uParam0->f_1C1, 11))
			{
				unk_0x7CB6FD92BE491AD9(&(uParam0->f_1C1), 11);
			}
			if (unk_0xFA30DFD0084E92FE(uParam0->f_1C1, 13))
			{
				unk_0x7CB6FD92BE491AD9(&(uParam0->f_1C1), 13);
			}
			uParam0->f_1C7++;
		}
	}
}

bool func_86(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x3870
{
	func_100(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_87(sParam2, iParam3, 0);
}

int func_87(char* sParam0, int iParam1, bool bParam2)//Position - 0x38BE
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
					func_99();
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
		if (func_98(8, -1))
		{
			return 0;
		}
		Global_3E04 = { Global_3DFE };
		func_97();
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
				func_91();
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
				if (func_90())
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
			if (func_74())
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
			func_89();
			Global_3DC2 = bParam2;
		}
		Global_3DBA = iParam1;
		StringCopy(&Global_3C3B, sParam0, 24);
		Global_394A = 0;
		func_88();
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
		func_99();
	}
	return 0;
}

void func_88()//Position - 0x3B8A
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

void func_89()//Position - 0x3BBB
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

int func_90()//Position - 0x3C50
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

void func_91()//Position - 0x3CE9
{
	if (func_219(14))
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
		Global_389D = func_92();
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

var func_92()//Position - 0x3D8B
{
	func_93();
	return Global_19B04.f_932.f_21B.f_10CD;
}

void func_93()//Position - 0x3DA4
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_96(Global_19B04.f_932.f_21B.f_10CD) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_95(unk_0xBC25C936A095B5BA());
			if (func_94(iVar0) && (!func_219(14) || Global_196EB))
			{
				if (Global_19B04.f_932.f_21B.f_10CD != iVar0 && func_94(Global_19B04.f_932.f_21B.f_10CD))
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

bool func_94(int iParam0)//Position - 0x3EA1
{
	return iParam0 < 3;
}

int func_95(int iParam0)//Position - 0x3EAD
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_96(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_96(int iParam0)//Position - 0x3EEA
{
	if (func_94(iParam0))
	{
		return Global_19B04.f_6D75[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_97()//Position - 0x3F14
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

bool func_98(int iParam0, int iParam1)//Position - 0x3F6B
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

void func_99()//Position - 0x3FA6
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

void func_100(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x3FFD
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

void func_101(var uParam0)//Position - 0x4056
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
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
	
	uParam0->f_1C5++;
	if (unk_0x8A0D8839261BAEEF(2))
	{
		func_7(uParam0);
	}
	if (!unk_0xFA30DFD0084E92FE(uParam0->f_1C1, 11))
	{
		if ((unk_0x694514BD37EC4E94(2, iLocal_37) || unk_0x694514BD37EC4E94(2, iLocal_39)) || (unk_0x50465D2C022B9E04(2) && (unk_0x694514BD37EC4E94(2, iLocal_38) || unk_0x694514BD37EC4E94(2, iLocal_40))))
		{
			func_111();
			if (unk_0xFA30DFD0084E92FE(uParam0->f_1C1, 12))
			{
				unk_0xF0059F27F7BB6680(&(uParam0->f_1C1), 13);
				unk_0x7CB6FD92BE491AD9(&(uParam0->f_1C1), 11);
				unk_0x7CB6FD92BE491AD9(&(uParam0->f_1C1), 10);
			}
			unk_0x7CB6FD92BE491AD9(&(uParam0->f_1C1), 12);
		}
	}
	func_81(&(uParam0->f_1CA[0]), &(uParam0->f_1CA[1]), &(uParam0->f_1CA[2]), &(uParam0->f_1CA[3]), 0, 0);
	if (unk_0x50465D2C022B9E04(2))
	{
		uParam0->f_1CA[2] = (uParam0->f_1CA[2] / 10);
		uParam0->f_1CA[3] = (uParam0->f_1CA[3] / 10);
		uParam0->f_1CA[2] = func_80((uParam0->f_1CA[2] + uParam0->f_289.f_18), -127, 127);
		uParam0->f_1CA[3] = func_80((uParam0->f_1CA[3] + uParam0->f_289.f_19), -127, 127);
	}
	uParam0->f_289.f_18 = uParam0->f_1CA[2];
	uParam0->f_289.f_19 = uParam0->f_1CA[3];
	if (unk_0xF31C9BB6C94E205D())
	{
		uParam0->f_1CA[3] = -uParam0->f_1CA[3];
	}
	if (uParam0->f_1C6 > unk_0x105601648511CC64())
	{
		uParam0->f_1CA[2] = 0;
		uParam0->f_1CA[3] = 0;
	}
	if (uParam0->f_1D0 == 0 || uParam0->f_1D0 == 4)
	{
		if (uParam0->f_1C5 > 15)
		{
			unk_0xF0059F27F7BB6680(&(uParam0->f_1C1), 4);
		}
		else
		{
			unk_0x7CB6FD92BE491AD9(&(uParam0->f_1C1), 4);
		}
	}
	if (!unk_0xFA30DFD0084E92FE(uParam0->f_1C1, 10))
	{
		if (!unk_0xFA30DFD0084E92FE(uParam0->f_1C1, 11))
		{
			if ((unk_0x105601648511CC64() - uParam0->f_1C8) > 200)
			{
				if ((uParam0->f_1D0 == 2 || uParam0->f_1D0 == 3) || uParam0->f_1D0 == 4)
				{
					if ((unk_0x105601648511CC64() - uParam0->f_1C9) > 25000)
					{
						func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_118[3 /*2*/], 1);
						uParam0->f_1C9 = (unk_0x105601648511CC64() + unk_0x491B2241281A03B7(0, 8000));
					}
				}
				if (uParam0->f_1D0 == 2)
				{
					if ((((uParam0->f_1CA[1] < -85 || uParam0->f_1CA[0] < -85) || unk_0x8FCEEB789599BD9B(2, 188)) || unk_0x8FCEEB789599BD9B(2, 189)) || (unk_0x50465D2C022B9E04(2) && unk_0xF7DDAAF0EFDAFA22(2, 241)))
					{
						unk_0x29CD142125FE177B(uParam0->f_19D, "SET_INPUT_EVENT");
						unk_0x1E1FB49121565EB6(8);
						unk_0xF9FBC2F3F73D94C9();
						unk_0x29CD142125FE177B(uParam0->f_19D, "GET_CURRENT_SELECTION");
						uParam0->f_2AA = unk_0xC27A95D32A8160C0();
						uParam0->f_1C8 = unk_0x105601648511CC64();
						uParam0->f_1C9 = uParam0->f_1C8;
					}
					else if ((((uParam0->f_1CA[1] > 85 || uParam0->f_1CA[0] > 85) || unk_0x8FCEEB789599BD9B(2, 187)) || unk_0x8FCEEB789599BD9B(2, 190)) || (unk_0x50465D2C022B9E04(2) && unk_0xF7DDAAF0EFDAFA22(0, 242)))
					{
						unk_0x29CD142125FE177B(uParam0->f_19D, "SET_INPUT_EVENT");
						unk_0x1E1FB49121565EB6(9);
						unk_0xF9FBC2F3F73D94C9();
						unk_0x29CD142125FE177B(uParam0->f_19D, "GET_CURRENT_SELECTION");
						uParam0->f_2AA = unk_0xC27A95D32A8160C0();
						uParam0->f_1C8 = unk_0x105601648511CC64();
						uParam0->f_1C9 = uParam0->f_1C8;
					}
				}
				if (uParam0->f_1D0 == 3)
				{
					if ((uParam0->f_1CA[1] < -85 || unk_0x8FCEEB789599BD9B(2, 188)) || (unk_0x50465D2C022B9E04(2) && unk_0xF7DDAAF0EFDAFA22(0, 40)))
					{
						unk_0x29CD142125FE177B(uParam0->f_19D, "SET_INPUT_EVENT");
						unk_0x1E1FB49121565EB6(8);
						unk_0xF9FBC2F3F73D94C9();
						if (uParam0->f_1A0 != 0)
						{
							unk_0xC4BA30B532FE260F(-1, "MARKER_ERASE", "HEIST_BULLETIN_BOARD_SOUNDSET", true);
						}
						uParam0->f_1A0 = 0;
						if (unk_0xFA30DFD0084E92FE(uParam0->f_1C1, 9))
						{
							unk_0x7CB6FD92BE491AD9(&(uParam0->f_1C1), 9);
							func_7(uParam0);
						}
						uParam0->f_1C8 = unk_0x105601648511CC64();
						uParam0->f_1C9 = uParam0->f_1C8;
					}
					else if ((uParam0->f_1CA[1] > 85 || unk_0x8FCEEB789599BD9B(2, 187)) || (unk_0x50465D2C022B9E04(2) && unk_0xF7DDAAF0EFDAFA22(0, 41)))
					{
						unk_0x29CD142125FE177B(uParam0->f_19D, "SET_INPUT_EVENT");
						unk_0x1E1FB49121565EB6(9);
						unk_0xF9FBC2F3F73D94C9();
						if (uParam0->f_1A0 != 1)
						{
							unk_0xC4BA30B532FE260F(-1, "MARKER_ERASE", "HEIST_BULLETIN_BOARD_SOUNDSET", true);
						}
						uParam0->f_1A0 = 1;
						if (unk_0xFA30DFD0084E92FE(uParam0->f_1C1, 9))
						{
							unk_0x7CB6FD92BE491AD9(&(uParam0->f_1C1), 9);
							func_7(uParam0);
						}
						uParam0->f_1C8 = unk_0x105601648511CC64();
						uParam0->f_1C9 = uParam0->f_1C8;
					}
				}
				if (!func_19() || unk_0xFA30DFD0084E92FE(uParam0->f_1C1, 13))
				{
					if (unk_0x694514BD37EC4E94(2, iLocal_37) || (unk_0x50465D2C022B9E04(2) && unk_0x694514BD37EC4E94(2, iLocal_38)))
					{
						switch (uParam0->f_1D0)
						{
							case 3:
								if (!func_19())
								{
									if (!unk_0xFA30DFD0084E92FE(uParam0->f_1C1, 9))
									{
										uParam0->f_1C8 = unk_0x105601648511CC64();
										iVar0 = func_30(*uParam0);
										if (iVar0 != -1)
										{
											unk_0x29CD142125FE177B(uParam0->f_19D, "GET_CURRENT_SELECTION");
											uParam0->f_2A8 = unk_0xC27A95D32A8160C0();
											func_11(uParam0, 1);
											func_13(&(uParam0->f_1.f_14[0 /*4*/]), 1);
											func_13(&(uParam0->f_1.f_14[1 /*4*/]), 1);
											Global_19B04.f_1[*uParam0] = 1;
											unk_0x7456702622C62EA0(0);
										}
									}
								}
								break;
							
							case 2:
								if (!func_10(4, *uParam0))
								{
									iVar0 = func_30(*uParam0);
									iVar1 = func_65(iVar0);
									if (uParam0->f_1C2 < Global_15C29[iVar1 /*19*/])
									{
										unk_0x29CD142125FE177B(uParam0->f_19D, "GET_CURRENT_SELECTION");
										uParam0->f_2A9 = unk_0xC27A95D32A8160C0();
										func_11(uParam0, 1);
									}
								}
								break;
							
							case 4:
								if (*uParam0 != 1)
								{
									func_83(4, *uParam0, 1);
									if (!func_110(0))
									{
										func_108(*uParam0);
									}
								}
								else
								{
									func_83(5, *uParam0, 1);
								}
								unk_0xC4BA30B532FE260F(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
								iVar0 = func_30(*uParam0);
								iVar1 = func_65(iVar0);
								iVar2 = 0;
								while (iVar2 < Global_15C29[iVar1 /*19*/])
								{
									if (Global_19B04.f_1.f_C[iVar1 /*6*/][iVar2] == 0 || func_40(Global_19B04.f_1.f_C[iVar1 /*6*/][iVar2]) != Global_15C29[iVar1 /*19*/].f_1[iVar2])
									{
										bVar4 = false;
										iVar5 = 0;
										while (iVar5 < 14)
										{
											if (!bVar4)
											{
												bVar4 = true;
												iVar3 = iVar5;
												if (iVar3 != 0)
												{
													if (Global_15B8F[iVar3 /*5*/] != Global_15C29[iVar1 /*19*/].f_1[iVar2])
													{
														bVar4 = false;
													}
													if (!unk_0xFA30DFD0084E92FE(Global_19B04.f_1.f_74, iVar3))
													{
														bVar4 = false;
													}
													if (unk_0xFA30DFD0084E92FE(Global_19B04.f_1.f_76, iVar3))
													{
														bVar4 = false;
													}
													if (iVar3 == 11 && *uParam0 == 3)
													{
														bVar4 = false;
													}
													if (func_37(uParam0, iVar3))
													{
														bVar4 = false;
													}
												}
												else
												{
													bVar4 = false;
												}
											}
											iVar5++;
										}
										Global_19B04.f_1.f_C[iVar1 /*6*/][iVar2] = iVar3;
									}
									iVar2++;
								}
								func_11(uParam0, 1);
								func_62(uParam0, iVar1, 4);
								break;
						}
						uParam0->f_1AB = 0;
					}
					if (unk_0x694514BD37EC4E94(2, iLocal_39) || (unk_0x50465D2C022B9E04(2) && unk_0x694514BD37EC4E94(2, iLocal_40)))
					{
						switch (uParam0->f_1D0)
						{
							case 2:
								iVar0 = func_30(*uParam0);
								iVar1 = func_65(iVar0);
								if (uParam0->f_1C2 > 0)
								{
									func_11(uParam0, 1);
									uParam0->f_1C2 = (uParam0->f_1C2 - 1);
									uParam0->f_1A1 = uParam0->f_1C2;
									iVar6 = Global_19B04.f_1.f_C[iVar1 /*6*/][uParam0->f_1C2];
									Global_19B04.f_1.f_C[iVar1 /*6*/][uParam0->f_1C2] = 0;
									uParam0->f_1D1 = Global_15C29[iVar1 /*19*/].f_1[uParam0->f_1C2];
									func_35(uParam0, uParam0->f_1C2, iVar6);
									unk_0xC4BA30B532FE260F(-1, "UNDO", "HEIST_BULLETIN_BOARD_SOUNDSET", true);
									uParam0->f_1AB = 0;
									uParam0->f_1C8 = unk_0x105601648511CC64();
								}
								else if (!func_221(0))
								{
									if (*uParam0 != 2)
									{
										iVar7 = 0;
										while (iVar7 < uParam0->f_1.f_60)
										{
											unk_0x29CD142125FE177B(uParam0->f_19D, "SET_DATA_SLOT_EMPTY");
											unk_0x1E1FB49121565EB6(iVar7);
											unk_0xF9FBC2F3F73D94C9();
											unk_0x29CD142125FE177B(uParam0->f_19D, "SET_DATA_SLOT_EMPTY");
											unk_0x1E1FB49121565EB6(iVar7);
											unk_0x5E5DBD0A6623969E(true);
											unk_0xF9FBC2F3F73D94C9();
											iVar7++;
										}
										unk_0xC4BA30B532FE260F(-1, "UNDO", "HEIST_BULLETIN_BOARD_SOUNDSET", true);
										iVar7 = 0;
										while (iVar7 < 2)
										{
											if (uParam0->f_1.f_1E[iVar7] != 13)
											{
												func_107(*uParam0, uParam0->f_1.f_1E[iVar7], 0);
											}
											iVar7++;
										}
										uParam0->f_1AB = 0;
										func_11(uParam0, 1);
										uParam0->f_1C8 = unk_0x105601648511CC64();
										uParam0->f_1D1 = 0;
										func_106(0, 1);
									}
								}
								break;
							
							case 4:
								if (*uParam0 != 1)
								{
									iVar0 = func_30(*uParam0);
									iVar1 = func_65(iVar0);
									uParam0->f_1C2 = (uParam0->f_1C2 - 1);
									uParam0->f_1A1 = uParam0->f_1C2;
									iVar8 = Global_19B04.f_1.f_C[iVar1 /*6*/][uParam0->f_1C2];
									Global_19B04.f_1.f_C[iVar1 /*6*/][uParam0->f_1C2] = 0;
									uParam0->f_1D1 = Global_15C29[iVar1 /*19*/].f_1[uParam0->f_1C2];
									func_5(uParam0, 2, iVar8);
								}
								else
								{
									iVar9 = 0;
									while (iVar9 < 2)
									{
										if (uParam0->f_1.f_1E[iVar9] != 13)
										{
											func_107(*uParam0, uParam0->f_1.f_1E[iVar9], 0);
										}
										iVar9++;
									}
									func_105(8, 0);
									func_83(5, 1, 0);
									uParam0->f_1AB = 0;
									func_11(uParam0, 1);
									uParam0->f_1C8 = unk_0x105601648511CC64();
									func_5(uParam0, 3, 0);
								}
								unk_0xC4BA30B532FE260F(-1, "UNDO", "HEIST_BULLETIN_BOARD_SOUNDSET", true);
								break;
							}
						}
					}
				}
		}
	}
	else if (uParam0->f_1C7 > 5)
	{
		iVar0 = func_30(*uParam0);
		iVar1 = func_65(iVar0);
		if (uParam0->f_1C2 >= Global_15C29[iVar1 /*19*/] || (*uParam0 == 1 && uParam0->f_1C2 > uParam0->f_19F))
		{
			unk_0x29CD142125FE177B(uParam0->f_19D, "FOCUS_VIEW");
			unk_0x1E1FB49121565EB6(99);
			unk_0x1E1FB49121565EB6(-1);
			unk_0xF9FBC2F3F73D94C9();
			func_23(uParam0, 0, 1);
			func_5(uParam0, 4, 0);
		}
		else
		{
			if (!unk_0xFA30DFD0084E92FE(uParam0->f_1C1, 17))
			{
				iVar10 = Global_19B04.f_1.f_C[iVar1 /*6*/][uParam0->f_1C2];
				Global_19B04.f_1.f_C[iVar1 /*6*/][uParam0->f_1C2] = 0;
				uParam0->f_1D1 = Global_15C29[iVar1 /*19*/].f_1[uParam0->f_1C2];
				func_35(uParam0, uParam0->f_1C2, iVar10);
			}
			unk_0x7CB6FD92BE491AD9(&(uParam0->f_1C1), 17);
		}
		uParam0->f_1C9 = unk_0x105601648511CC64();
		unk_0x7CB6FD92BE491AD9(&(uParam0->f_1C1), 10);
	}
	else if (unk_0xF16DAFF595E80F7C())
	{
		if (((!func_12(&(uParam0->f_1.f_6C[0 /*4*/])) && !func_12(&(uParam0->f_1.f_6C[1 /*4*/]))) && !func_12(&(uParam0->f_1.f_14[0 /*4*/]))) && !func_12(&(uParam0->f_1.f_14[1 /*4*/])))
		{
			unk_0x7456702622C62EA0(1);
		}
	}
	if (uParam0->f_2A8 != 0)
	{
		if (unk_0x3B6BD69AB08B86C2(uParam0->f_2A8))
		{
			iVar11 = unk_0x6AE1427A38313694(uParam0->f_2A8);
			iVar1 = func_29(*uParam0, iVar11);
			iVar0 = func_30(*uParam0);
			func_105(iVar0, iVar1);
			if (!func_110(0))
			{
				func_104(*uParam0);
			}
			unk_0xC4BA30B532FE260F(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			func_62(uParam0, iVar1, 0);
			if (uParam0->f_1.f_1E[iVar11] != 13)
			{
				func_107(*uParam0, uParam0->f_1.f_1E[iVar11], 1);
			}
			iVar12 = 0;
			while (iVar12 < uParam0->f_1.f_60)
			{
				func_61(uParam0, iVar12);
				if (iVar12 < Global_15C29[iVar1 /*19*/])
				{
					unk_0x29CD142125FE177B(uParam0->f_19D, "SHOW_VIEW");
					unk_0x1E1FB49121565EB6(iVar12);
					unk_0x5E5DBD0A6623969E(true);
					unk_0xF9FBC2F3F73D94C9();
				}
				else
				{
					unk_0x29CD142125FE177B(uParam0->f_19D, "SHOW_VIEW");
					unk_0x1E1FB49121565EB6(iVar12);
					unk_0x5E5DBD0A6623969E(false);
					unk_0xF9FBC2F3F73D94C9();
				}
				iVar12++;
			}
			if (*uParam0 != 1)
			{
				func_83(5, *uParam0, 1);
			}
			else
			{
				unk_0xF0059F27F7BB6680(&(uParam0->f_1C1), 10);
				uParam0->f_1C2++;
			}
			unk_0x7456702622C62EA0(0);
			uParam0->f_2A8 = 0;
		}
	}
	if (uParam0->f_2A9 != 0)
	{
		if (unk_0x3B6BD69AB08B86C2(uParam0->f_2A9))
		{
			iVar13 = unk_0x6AE1427A38313694(uParam0->f_2A9);
			iVar0 = func_30(*uParam0);
			iVar1 = func_65(iVar0);
			Global_19B04.f_1.f_C[iVar1 /*6*/][uParam0->f_1C2] = uParam0->f_1A2[iVar13];
			iVar14 = Global_19B04.f_1.f_C[iVar1 /*6*/][uParam0->f_1C2];
			unk_0x29CD142125FE177B(uParam0->f_19D, "UPDATE_DATA_SLOT");
			unk_0x1E1FB49121565EB6(uParam0->f_1C2);
			unk_0x1E1FB49121565EB6(iVar13);
			unk_0x1E1FB49121565EB6(iVar14);
			unk_0xF9FBC2F3F73D94C9();
			unk_0x29CD142125FE177B(uParam0->f_19D, "FOCUS_VIEW");
			unk_0x1E1FB49121565EB6(99);
			unk_0xF9FBC2F3F73D94C9();
			unk_0xC4BA30B532FE260F(-1, "PERSON_SELECT", "HEIST_BULLETIN_BOARD_SOUNDSET", true);
			unk_0x7CB6FD92BE491AD9(&(uParam0->f_1C1), 17);
			func_103(uParam0, iVar14);
			uParam0->f_1C2++;
			uParam0->f_1A1 = uParam0->f_1C2;
			uParam0->f_1C8 = unk_0x105601648511CC64();
			uParam0->f_1C9 = uParam0->f_1C8;
			unk_0xF0059F27F7BB6680(&(uParam0->f_1C1), 10);
			if (!func_12(&(uParam0->f_1.f_6C[0 /*4*/])) && !func_12(&(uParam0->f_1.f_6C[1 /*4*/])))
			{
				unk_0x7456702622C62EA0(0);
			}
			uParam0->f_2A9 = 0;
		}
	}
	if (uParam0->f_2AA != 0)
	{
		if (unk_0x3B6BD69AB08B86C2(uParam0->f_2AA))
		{
			iVar15 = unk_0x6AE1427A38313694(uParam0->f_2AA);
			if (iVar15 != -1)
			{
				iVar16 = uParam0->f_1A2[iVar15];
				if (iVar16 != uParam0->f_1AB)
				{
					unk_0xC4BA30B532FE260F(-1, "PERSON_SCROLL", "HEIST_BULLETIN_BOARD_SOUNDSET", true);
				}
				uParam0->f_1AB = iVar16;
			}
			uParam0->f_2AA = 0;
		}
	}
	if (uParam0->f_1AB != 0)
	{
		func_102(uParam0, uParam0->f_1AB);
	}
}

void func_102(var uParam0, int iParam1)//Position - 0x4E1F
{
	if (!func_19())
	{
		if (uParam0->f_1E3 == 0)
		{
			switch (iParam1)
			{
				case 10:
					if (unk_0xFA30DFD0084E92FE(Global_19B04.f_1.f_77, 14))
					{
						if (!unk_0x3362CDE8460ED38B(&(uParam0->f_1.f_130[14 /*2*/]), ""))
						{
							unk_0xF0059F27F7BB6680(&(uParam0->f_1C1), 10);
							unk_0xF0059F27F7BB6680(&(uParam0->f_1C1), 17);
							func_24(uParam0, uParam0->f_1.f_116, uParam0->f_1.f_130[14 /*2*/], 1);
							unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_1.f_77), 14);
							unk_0xF0059F27F7BB6680(&(uParam0->f_1C1), 12);
							return;
						}
					}
					break;
				
				case 13:
					if (unk_0xFA30DFD0084E92FE(Global_19B04.f_1.f_77, 16))
					{
						if (!unk_0x3362CDE8460ED38B(&(uParam0->f_1.f_130[16 /*2*/]), ""))
						{
							unk_0xF0059F27F7BB6680(&(uParam0->f_1C1), 10);
							unk_0xF0059F27F7BB6680(&(uParam0->f_1C1), 17);
							func_24(uParam0, uParam0->f_1.f_116, uParam0->f_1.f_130[16 /*2*/], 1);
							unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_1.f_77), 16);
							unk_0xF0059F27F7BB6680(&(uParam0->f_1C1), 12);
							return;
						}
					}
					break;
				
				case 12:
					if (unk_0xFA30DFD0084E92FE(Global_19B04.f_1.f_77, 15))
					{
						if (!unk_0x3362CDE8460ED38B(&(uParam0->f_1.f_130[15 /*2*/]), ""))
						{
							unk_0xF0059F27F7BB6680(&(uParam0->f_1C1), 10);
							unk_0xF0059F27F7BB6680(&(uParam0->f_1C1), 17);
							func_24(uParam0, uParam0->f_1.f_116, uParam0->f_1.f_130[15 /*2*/], 1);
							unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_1.f_77), 15);
							unk_0xF0059F27F7BB6680(&(uParam0->f_1C1), 12);
							return;
						}
					}
					break;
				
				case 11:
					if (unk_0xFA30DFD0084E92FE(Global_19B04.f_1.f_77, 17))
					{
						if (!unk_0x3362CDE8460ED38B(&(uParam0->f_1.f_130[17 /*2*/]), ""))
						{
							unk_0xF0059F27F7BB6680(&(uParam0->f_1C1), 10);
							unk_0xF0059F27F7BB6680(&(uParam0->f_1C1), 17);
							func_24(uParam0, uParam0->f_1.f_116, uParam0->f_1.f_130[17 /*2*/], 1);
							unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_1.f_77), 17);
							unk_0xF0059F27F7BB6680(&(uParam0->f_1C1), 12);
							return;
						}
					}
					break;
				}
			}
	}
}

void func_103(var uParam0, int iParam1)//Position - 0x503B
{
	if (!unk_0xFA30DFD0084E92FE(uParam0->f_1CF, iParam1))
	{
		if (!unk_0xFA30DFD0084E92FE(Global_19B04.f_1.f_77, iParam1))
		{
			if (!unk_0x3362CDE8460ED38B(&(uParam0->f_1.f_130[iParam1 /*2*/]), ""))
			{
				func_24(uParam0, uParam0->f_1.f_116, uParam0->f_1.f_130[iParam1 /*2*/], 1);
				unk_0xF0059F27F7BB6680(&(Global_19B04.f_1.f_77), iParam1);
			}
		}
		else
		{
			switch (*uParam0)
			{
				case 2:
					switch (iParam1)
					{
						case 1:
							if (unk_0xFA30DFD0084E92FE(Global_19B04.f_1.f_75, 0))
							{
								func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[18 /*2*/], 1);
							}
							break;
						
						case 10:
							if (unk_0xFA30DFD0084E92FE(Global_19B04.f_1.f_75, 1))
							{
								func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[18 /*2*/], 1);
							}
							break;
					}
					break;
				
				case 3:
					switch (iParam1)
					{
						case 12:
							if (unk_0xFA30DFD0084E92FE(Global_19B04.f_1.f_75, 3))
							{
								func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[24 /*2*/], 1);
							}
							break;
						
						case 9:
							if (unk_0xFA30DFD0084E92FE(Global_19B04.f_1.f_75, 6))
							{
								func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[26 /*2*/], 1);
							}
							break;
						
						case 1:
							if (unk_0xFA30DFD0084E92FE(Global_19B04.f_1.f_75, 0))
							{
								if (unk_0xFA30DFD0084E92FE(Global_19B04.f_1.f_75, 7))
								{
									func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[21 /*2*/], 1);
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[18 /*2*/], 1);
								}
							}
							else if (unk_0xFA30DFD0084E92FE(Global_19B04.f_1.f_75, 7))
							{
								func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[19 /*2*/], 1);
							}
							break;
						
						case 10:
							if (unk_0xFA30DFD0084E92FE(Global_19B04.f_1.f_75, 1))
							{
								if (unk_0xFA30DFD0084E92FE(Global_19B04.f_1.f_75, 8))
								{
									func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[21 /*2*/], 1);
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[18 /*2*/], 1);
								}
							}
							else if (unk_0xFA30DFD0084E92FE(Global_19B04.f_1.f_75, 8))
							{
								func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[19 /*2*/], 1);
							}
							break;
						
						case 6:
							if (unk_0xFA30DFD0084E92FE(Global_19B04.f_1.f_75, 4))
							{
								func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[18 /*2*/], 1);
							}
							break;
						
						case 7:
							if (unk_0xFA30DFD0084E92FE(Global_19B04.f_1.f_75, 2))
							{
								func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[18 /*2*/], 1);
							}
							break;
						
						case 8:
							if (unk_0xFA30DFD0084E92FE(Global_19B04.f_1.f_75, 5))
							{
								func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[18 /*2*/], 1);
							}
							break;
					}
					break;
				
				case 4:
					switch (iParam1)
					{
						case 12:
							if (unk_0xFA30DFD0084E92FE(Global_19B04.f_1.f_75, 15))
							{
								if (unk_0xFA30DFD0084E92FE(Global_19B04.f_1.f_75, 3))
								{
									func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[25 /*2*/], 1);
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[24 /*2*/], 1);
								}
							}
							break;
						
						case 7:
							if (unk_0xFA30DFD0084E92FE(Global_19B04.f_1.f_75, 2))
							{
								if (unk_0xFA30DFD0084E92FE(Global_19B04.f_1.f_75, 14))
								{
									func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[30 /*2*/], 1);
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[28 /*2*/], 1);
								}
							}
							else if (unk_0xFA30DFD0084E92FE(Global_19B04.f_1.f_75, 14))
							{
								func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[29 /*2*/], 1);
							}
							break;
						
						case 9:
							if (unk_0xFA30DFD0084E92FE(Global_19B04.f_1.f_75, 18))
							{
								if (unk_0xFA30DFD0084E92FE(Global_19B04.f_1.f_75, 6))
								{
									func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[27 /*2*/], 1);
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[26 /*2*/], 1);
								}
							}
							break;
						
						case 4:
							if (unk_0xFA30DFD0084E92FE(Global_19B04.f_1.f_75, 17))
							{
								func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[31 /*2*/], 1);
							}
							break;
						
						case 5:
							if (unk_0xFA30DFD0084E92FE(Global_19B04.f_1.f_75, 12))
							{
								func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[31 /*2*/], 1);
							}
							break;
						
						case 1:
							if (unk_0xFA30DFD0084E92FE(Global_19B04.f_1.f_75, 10))
							{
								if (unk_0xFA30DFD0084E92FE(Global_19B04.f_1.f_75, 0))
								{
									if (unk_0xFA30DFD0084E92FE(Global_19B04.f_1.f_75, 7))
									{
										func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[23 /*2*/], 1);
									}
									else
									{
										func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[22 /*2*/], 1);
									}
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[20 /*2*/], 1);
								}
							}
							break;
						
						case 10:
							if (unk_0xFA30DFD0084E92FE(Global_19B04.f_1.f_75, 11))
							{
								if (unk_0xFA30DFD0084E92FE(Global_19B04.f_1.f_75, 1))
								{
									if (unk_0xFA30DFD0084E92FE(Global_19B04.f_1.f_75, 8))
									{
										func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[23 /*2*/], 1);
									}
									else
									{
										func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[22 /*2*/], 1);
									}
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[20 /*2*/], 1);
								}
							}
							break;
						
						case 3:
							if (unk_0xFA30DFD0084E92FE(Global_19B04.f_1.f_75, 13))
							{
								func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[20 /*2*/], 1);
							}
							break;
						
						case 6:
							if (unk_0xFA30DFD0084E92FE(Global_19B04.f_1.f_75, 19))
							{
								if (unk_0xFA30DFD0084E92FE(Global_19B04.f_1.f_75, 4))
								{
									func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[22 /*2*/], 1);
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[20 /*2*/], 1);
								}
							}
							break;
						
						case 8:
							if (unk_0xFA30DFD0084E92FE(Global_19B04.f_1.f_75, 16))
							{
								if (unk_0xFA30DFD0084E92FE(Global_19B04.f_1.f_75, 5))
								{
									func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[22 /*2*/], 1);
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[20 /*2*/], 1);
								}
							}
							break;
						
						case 13:
							if (unk_0xFA30DFD0084E92FE(Global_19B04.f_1.f_75, 20))
							{
								func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[20 /*2*/], 1);
							}
							break;
					}
					break;
				}
		}
		unk_0xF0059F27F7BB6680(&(uParam0->f_1CF), iParam1);
	}
}

void func_104(int iParam0)//Position - 0x57D2
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_19B04.f_2360.f_63.f_CD[7];
			if (iVar0 == 1)
			{
				unk_0x7DB90DFB4AE71E86(joaat("sp_heist_chose_jewel_stealth"), 1, 1);
			}
			else
			{
				unk_0x7DB90DFB4AE71E86(joaat("sp_heist_chose_jewel_stealth"), 0, 1);
			}
			break;
		
		case 1:
			iVar0 = Global_19B04.f_2360.f_63.f_CD[8];
			if (iVar0 == 3)
			{
				unk_0x7DB90DFB4AE71E86(joaat("sp_heist_chose_docks_sink_ship"), 1, 1);
			}
			else
			{
				unk_0x7DB90DFB4AE71E86(joaat("sp_heist_chose_docks_sink_ship"), 0, 1);
			}
			break;
		
		case 3:
			iVar0 = Global_19B04.f_2360.f_63.f_CD[10];
			if (iVar0 == 6)
			{
				unk_0x7DB90DFB4AE71E86(joaat("sp_heist_chose_bureau_firecrew"), 1, 1);
			}
			else
			{
				unk_0x7DB90DFB4AE71E86(joaat("sp_heist_chose_bureau_firecrew"), 0, 1);
			}
			break;
		
		case 4:
			iVar0 = Global_19B04.f_2360.f_63.f_CD[11];
			if (iVar0 == 8)
			{
				unk_0x7DB90DFB4AE71E86(joaat("sp_heist_chose_bigs_traffic"), 1, 1);
			}
			else
			{
				unk_0x7DB90DFB4AE71E86(joaat("sp_heist_chose_bigs_traffic"), 0, 1);
			}
			break;
	}
}

void func_105(int iParam0, int iParam1)//Position - 0x58CD
{
	if (iParam0 == 13 || iParam0 == -1)
	{
		return;
	}
	if (Global_19B04.f_2360.f_63.f_CD[iParam0] == iParam1)
	{
		return;
	}
	Global_19B04.f_2360.f_63.f_CD[iParam0] = iParam1;
}

void func_106(int iParam0, int iParam1)//Position - 0x5912
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return;
	}
	if (Global_19B04.f_2360.f_63.f_3A[iParam0] == iParam1)
	{
		return;
	}
	Global_19B04.f_2360.f_63.f_3A[iParam0] = iParam1;
}

void func_107(int iParam0, int iParam1, bool bParam2)//Position - 0x5957
{
	if (bParam2)
	{
		unk_0xF0059F27F7BB6680(&(Global_19B04.f_1.f_78[iParam0]), iParam1);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_1.f_78[iParam0]), iParam1);
	}
	unk_0xF0059F27F7BB6680(&Global_15C14, iParam0);
}

void func_108(int iParam0)//Position - 0x5995
{
	int iVar0;
	int iVar1;
	
	func_109(iParam0);
	switch (iParam0)
	{
		case 0:
			iVar1 = Global_19B04.f_2360.f_63.f_CD[7];
			iVar0 = 0;
			while (iVar0 < Global_15C29[iVar1 /*19*/])
			{
				switch (Global_19B04.f_1.f_C[iVar1 /*6*/][iVar0])
				{
					case 1:
						unk_0xF0059F27F7BB6680(&(Global_19B04.f_1.f_75), 0);
						break;
					
					case 10:
						unk_0xF0059F27F7BB6680(&(Global_19B04.f_1.f_75), 1);
						unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_1.f_77), 14);
						break;
					
					case 7:
						unk_0xF0059F27F7BB6680(&(Global_19B04.f_1.f_75), 2);
						break;
					
					case 12:
						unk_0xF0059F27F7BB6680(&(Global_19B04.f_1.f_75), 3);
						unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_1.f_77), 15);
						break;
					
					case 6:
						unk_0xF0059F27F7BB6680(&(Global_19B04.f_1.f_75), 4);
						break;
					
					case 8:
						unk_0xF0059F27F7BB6680(&(Global_19B04.f_1.f_75), 5);
						break;
					
					case 9:
						unk_0xF0059F27F7BB6680(&(Global_19B04.f_1.f_75), 6);
						break;
				}
				unk_0xF0059F27F7BB6680(&(Global_19B04.f_1.f_77), Global_19B04.f_1.f_C[iVar1 /*6*/][iVar0]);
				iVar0++;
			}
			break;
		
		case 2:
			iVar1 = Global_19B04.f_2360.f_63.f_CD[9];
			iVar0 = 0;
			while (iVar0 < Global_15C29[iVar1 /*19*/])
			{
				switch (Global_19B04.f_1.f_C[iVar1 /*6*/][iVar0])
				{
					case 1:
						unk_0xF0059F27F7BB6680(&(Global_19B04.f_1.f_75), 7);
						break;
					
					case 10:
						unk_0xF0059F27F7BB6680(&(Global_19B04.f_1.f_75), 8);
						unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_1.f_77), 14);
						break;
					
					case 11:
						unk_0xF0059F27F7BB6680(&(Global_19B04.f_1.f_75), 9);
						unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_1.f_77), 17);
						break;
				}
				unk_0xF0059F27F7BB6680(&(Global_19B04.f_1.f_77), Global_19B04.f_1.f_C[iVar1 /*6*/][iVar0]);
				iVar0++;
			}
			break;
		
		case 3:
			iVar1 = Global_19B04.f_2360.f_63.f_CD[10];
			iVar0 = 0;
			while (iVar0 < Global_15C29[iVar1 /*19*/])
			{
				switch (Global_19B04.f_1.f_C[iVar1 /*6*/][iVar0])
				{
					case 1:
						unk_0xF0059F27F7BB6680(&(Global_19B04.f_1.f_75), 10);
						break;
					
					case 10:
						unk_0xF0059F27F7BB6680(&(Global_19B04.f_1.f_75), 11);
						unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_1.f_77), 14);
						break;
					
					case 5:
						unk_0xF0059F27F7BB6680(&(Global_19B04.f_1.f_75), 12);
						break;
					
					case 3:
						unk_0xF0059F27F7BB6680(&(Global_19B04.f_1.f_75), 13);
						break;
					
					case 4:
						unk_0xF0059F27F7BB6680(&(Global_19B04.f_1.f_75), 17);
						break;
					
					case 7:
						unk_0xF0059F27F7BB6680(&(Global_19B04.f_1.f_75), 14);
						break;
					
					case 12:
						unk_0xF0059F27F7BB6680(&(Global_19B04.f_1.f_75), 15);
						unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_1.f_77), 15);
						break;
					
					case 6:
						unk_0xF0059F27F7BB6680(&(Global_19B04.f_1.f_75), 19);
						break;
					
					case 8:
						unk_0xF0059F27F7BB6680(&(Global_19B04.f_1.f_75), 16);
						break;
					
					case 9:
						unk_0xF0059F27F7BB6680(&(Global_19B04.f_1.f_75), 18);
						break;
					
					case 13:
						unk_0xF0059F27F7BB6680(&(Global_19B04.f_1.f_75), 20);
						unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_1.f_77), 16);
						break;
				}
				unk_0xF0059F27F7BB6680(&(Global_19B04.f_1.f_77), Global_19B04.f_1.f_C[iVar1 /*6*/][iVar0]);
				iVar0++;
			}
			break;
	}
}

void func_109(int iParam0)//Position - 0x5D12
{
	switch (iParam0)
	{
		case 0:
			unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_1.f_75), 0);
			unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_1.f_75), 1);
			unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_1.f_75), 2);
			unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_1.f_75), 3);
			unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_1.f_75), 4);
			unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_1.f_75), 5);
			unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_1.f_75), 6);
			break;
		
		case 2:
			unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_1.f_75), 7);
			unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_1.f_75), 8);
			unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_1.f_75), 9);
			break;
		
		case 3:
			unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_1.f_75), 10);
			unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_1.f_75), 11);
			unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_1.f_75), 12);
			unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_1.f_75), 13);
			unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_1.f_75), 14);
			unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_1.f_75), 15);
			unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_1.f_75), 16);
			unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_1.f_75), 17);
			unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_1.f_75), 18);
			unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_1.f_75), 19);
			unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_1.f_75), 20);
			break;
	}
}

bool func_110(bool bParam0)//Position - 0x5E5A
{
	if (!bParam0 && unk_0xB731B8C5BCE89836(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_1163A, 0);
}

void func_111()//Position - 0x5E85
{
	Global_394A = 0;
	func_112();
}

void func_112()//Position - 0x5E95
{
	unk_0x5C7DC611411E2CF9();
	Global_41AB = 0;
	if (unk_0xE6711F601F11B66B())
	{
		unk_0x1E08809A5041F85B(false);
		Global_3DB8 = 6;
	}
}

void func_113()//Position - 0x5EB6
{
	unk_0x2423B13D9CFAD1DD();
	func_114();
}

void func_114()//Position - 0x5EC6
{
	Global_4336.f_86 = 1;
}

void func_115(var uParam0)//Position - 0x5ED4
{
	vector3 vVar0;
	int iVar1;
	
	uParam0->f_1C5 = 0;
	uParam0->f_1CF = 0;
	unk_0xF0059F27F7BB6680(&(uParam0->f_1C1), 9);
	func_11(uParam0, 0);
	if (!unk_0x866EAD7E27D8D0F8())
	{
		if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
		{
			if (Global_90C1 == 1)
			{
				func_120(unk_0xBC25C936A095B5BA());
			}
			vVar0 = { uParam0->f_191 };
			vVar0 = { vVar0 + Vector(0.5f, (2.9f * SYSTEM::COS((180f - uParam0->f_194))), (2.9f * SYSTEM::SIN((180f - uParam0->f_194)))) };
			unk_0x2084D4C6C2DF616F(vVar0, &(vVar0.f_2), 0, 0);
			unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 134);
			unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), vVar0, 1, false, 0, 1);
			unk_0x019CE76D5286C95C(unk_0xBC25C936A095B5BA(), uParam0->f_194);
			unk_0x49D46EE47C9CCB66(unk_0xBC25C936A095B5BA());
			unk_0x346478B12F69D4E3(unk_0xBC25C936A095B5BA(), true);
		}
		unk_0xF0059F27F7BB6680(&(uParam0->f_1C1), 7);
	}
	unk_0x43F06392C4EF25E0(false);
	func_72(1);
	func_119();
	unk_0x3169E2C5E6A096BC();
	unk_0x6C5F5B5F6894CCE3(uParam0->f_191, 5f, 1, 1, 0, false);
	unk_0x5DEC86EE2E34A59D(uParam0->f_191, 5f);
	unk_0xE76B5B45069F0B60(1);
	unk_0xC2EAD30963BDAA47(82, 66);
	unk_0x6DB77F071B43C870(17, 0.612f, 0.818f);
	unk_0x2A025E7CEBB76D14();
	func_118(&(uParam0->f_289), uParam0->f_195, uParam0->f_198, 45f, 18, 13, 3, uParam0->f_1.f_9, 0, 0, -1082130432, 0);
	iVar1 = unk_0x9911032C958CE1B0(uParam0->f_191);
	if (iVar1 != 0)
	{
		unk_0x184188AF06D2A771(iVar1);
	}
	unk_0x394EE83EEDDF9A95(&(Global_15BD6[uParam0->f_1.f_1 /*15*/].f_7));
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0x4CA584ADA874824F(unk_0x96AF90209D22127A(unk_0xBC25C936A095B5BA()));
	}
	func_117(0);
	func_116();
	unk_0xCB8EEC006EBFC1E7(0);
	if (unk_0x8ACB0C3FACC09467())
	{
		unk_0x29CD142125FE177B(uParam0->f_19E, "TOGGLE_MOUSE_BUTTONS");
		unk_0x5E5DBD0A6623969E(false);
		unk_0xF9FBC2F3F73D94C9();
	}
	uParam0->f_1D2 = unk_0xC7CF72D26EA6A227(2, 10, true);
	unk_0xF0059F27F7BB6680(&(uParam0->f_1C1), 2);
	Global_15C13 = 1;
	func_6(uParam0, uParam0->f_1D0, 0);
}

void func_116()//Position - 0x60C6
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_19B04.f_4F9D.f_91)
	{
		func_15(iVar0);
		iVar0++;
	}
	Global_19B04.f_4F9D.f_91 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_19B04.f_4F9D.f_92[iVar0] = 0;
		iVar0++;
	}
	if (unk_0xF16DAFF595E80F7C())
	{
		unk_0x7456702622C62EA0(1);
	}
}

void func_117(bool bParam0)//Position - 0x6124
{
	if (!bParam0)
	{
		Global_195B6 = unk_0x105601648511CC64() + 250;
	}
	Global_195B3 = bParam0;
}

void func_118(var uParam0, vector3 vParam1, vector3 vParam2, float fParam3, int iParam4, int iParam5, int iParam6, var uParam7, int iParam8, int iParam9, float fParam10, bool bParam11)//Position - 0x6142
{
	uParam0->f_1 = { vParam1 };
	uParam0->f_4 = { vParam2 };
	uParam0->f_7 = fParam3;
	uParam0->f_14 = iParam4;
	uParam0->f_15 = iParam5;
	uParam0->f_16 = iParam6;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_B = { 0f, 0f, 0f };
	uParam0->f_E = { 0f, 0f, 0f };
	uParam0->f_11 = fParam3;
	uParam0->f_12 = fParam3;
	uParam0->f_17 = iParam8;
	uParam0->f_13 = uParam7;
	*uParam0 = unk_0x578D5D08EC980893("DEFAULT_SCRIPTED_CAMERA", false);
	unk_0x348665177DBFB93B(*uParam0, true);
	unk_0x9961B404F89D0597(*uParam0, uParam0->f_1, uParam0->f_4, uParam0->f_7, 0, 1, 1, 2);
	if (!bParam11)
	{
		unk_0x2FB83B8BD6C05FD2(*uParam0, "HAND_SHAKE", 0.19f);
	}
	unk_0x062C9995BFD27B2A(true, false, 3000, 1, 0, 0);
	if (fParam10 > 0f)
	{
		unk_0x97AD4F1D22AEA4FC(*uParam0, fParam10);
	}
	if (uParam0->f_17)
	{
		unk_0xA1517A9C3F0715E0(iParam9);
	}
	uParam0->f_18 = 0;
	uParam0->f_19 = 0;
	uParam0->f_1D = 0f;
	uParam0->f_1E = 0f;
	uParam0->f_1A = 0;
	uParam0->f_1C = 0;
	uParam0->f_1B = 0;
}

void func_119()//Position - 0x623A
{
	Global_4336.f_5 = 1;
}

void func_120(int iParam0)//Position - 0x6248
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!unk_0x724D816EA203A79E(iParam0))
	{
		return;
	}
	iVar0 = func_128(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_8FEC[iVar0 /*5*/];
		func_123(1, iVar1, 1);
		return;
	}
	iVar2 = func_122(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_121(iVar2);
}

void func_121(int iParam0)//Position - 0x62A1
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

int func_122(int iParam0)//Position - 0x6324
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_8FD2[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_123(int iParam0, int iParam1, int iParam2)//Position - 0x6355
{
	func_124(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_124(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x636A
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
	if (func_126(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_125();
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

int func_125()//Position - 0x63EC
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

int func_126(int iParam0, int iParam1, int iParam2)//Position - 0x641D
{
	if (func_127(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_127(int iParam0, int iParam1, int iParam2)//Position - 0x6438
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

int func_128(int iParam0)//Position - 0x6484
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
		if (!Global_8FEC[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_8FEC[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_129(var uParam0)//Position - 0x64CD
{
	int iVar0;
	
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_130(*uParam0);
	if (iVar0 == -1)
	{
		*uParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_8F05[iVar0 /*32*/])
		{
			Global_8F05[iVar0 /*32*/].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}
	*uParam0 = -1;
}

int func_130(int iParam0)//Position - 0x6524
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

int func_131(int iParam0, bool bParam1)//Position - 0x655F
{
	int iVar0;
	
	iVar0 = func_130(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x6A9CDB766DF7216F(unk_0xFC1CAE18F3ECBF2D()))
	{
		return 0;
	}
	if (func_142(0))
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

void func_132(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)//Position - 0x6617
{
	int iVar0;
	
	if (unk_0xB731B8C5BCE89836(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x7930B3E9C919E90F())
	{
		if (!*uParam0 == -1)
		{
			func_129(uParam0);
		}
		return;
	}
	if (!*uParam0 == -1)
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
			*uParam0 = Global_8F05[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_133(int iParam0)//Position - 0x6742
{
	int iVar0;
	
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
		{
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				iVar0 = func_92();
				if (!func_94(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x8F1FDD0A40DC834A(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_141()) || Global_1974B) || Global_62BF) || func_140()) || func_98(8, -1)) || func_139()) || func_138()) || func_137()) || func_136()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1) || func_141()) || Global_62BF) || func_140()) || func_98(8, -1)) || func_137()) || func_139()) || func_138()) || func_136()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x8F1FDD0A40DC834A(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_141()) || Global_1974B) || Global_62BF) || func_140()) || func_98(8, -1)) || func_137()) || func_139()) || func_138()) || func_136()) || Global_19B04.f_1DEB.f_397[iVar0] == 5) || Global_8E64 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA()) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_141()) || Global_1974B) || Global_62BF) || func_140()) || func_98(8, -1)) || func_139()) || func_138()) || func_136()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_141() || unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0) || func_98(8, -1)) || func_136()) || func_135()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_98(8, -1) || func_139()) || func_138()) || func_135()) || func_134())
						{
							return 0;
						}
						if ((unk_0x7930B3E9C919E90F() && unk_0xFAB96FF5BAB29092() != 3) && unk_0x5935088CFB983803() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
						{
							if ((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || func_141()) || Global_62BF) || func_140()) || func_98(8, -1)) || func_138()) || func_137()) || func_136()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || !unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F())) || !unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F())) || !unk_0x726D9204B160D23E()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || func_141()) || func_138()) || Global_1974B) || Global_62BF) || func_140()) || Global_90C1) || func_98(8, -1)) || func_137()) || func_135()) || func_136()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || !unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F())) || !unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F())) || !unk_0x726D9204B160D23E()) || unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0)) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1)) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0x9273B3557334635D(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || func_141()) || Global_1974B) || Global_62BF) || func_140()) || func_98(8, -1)) || func_137()) || func_135()) || func_139()) || func_138()) || func_136())
						{
							return 0;
						}
						break;
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
	else
	{
		return 0;
	}
	return 1;
}

var func_134()//Position - 0x6E5F
{
	return Global_16B42.f_1;
}

int func_135()//Position - 0x6E6D
{
	if (Global_15FA6 != -1)
	{
		return unk_0xFA30DFD0084E92FE(Global_147B0[Global_15FA6 /*34*/].f_F, 13);
	}
	return 0;
}

int func_136()//Position - 0x6E93
{
	if (unk_0xB731B8C5BCE89836(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_137()//Position - 0x6EAD
{
	if (Global_11646)
	{
		return 1;
	}
	else if (Global_DA99 && !Global_DA9F)
	{
		return 1;
	}
	return 0;
}

bool func_138()//Position - 0x6ED7
{
	return Global_16B4F.f_142 > 0;
}

bool func_139()//Position - 0x6EE8
{
	return Global_16B4F.f_141 > 0;
}

var func_140()//Position - 0x6EF9
{
	return Global_140856;
}

int func_141()//Position - 0x6F05
{
	if (!unk_0x7AF0088ABFA713B6())
	{
		return Global_161D2.f_2C == 1;
	}
	return 0;
}

int func_142(int iParam0)//Position - 0x6F21
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

bool func_143(int iParam0)//Position - 0x6F7B
{
	return func_144(iParam0, Global_8C41);
}

int func_144(int iParam0, int iParam1)//Position - 0x6F8C
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

void func_145()//Position - 0x716D
{
	int iVar0;
	vector3 vVar1;
	
	if (func_221(17))
	{
		if (!unk_0xFA30DFD0084E92FE(iLocal_41, 11))
		{
			unk_0x04DD7A558FCF2C34("JH_1_MCS_4P2", 8);
			unk_0x63831D2D5110C305("lesterHandler");
			unk_0x900CF084251DED26("JHS1AUD", 6);
			unk_0xF0059F27F7BB6680(&iLocal_41, 11);
		}
		else if (unk_0xA5A42DEC1470C5A9())
		{
			unk_0x5B2777A27D4C30AE("LESTER", 1, 0, 0, 0);
		}
	}
	if (func_221(18))
	{
		if (func_221(17))
		{
			if ((unk_0x30F17D4B59B81517("JH_1_MCS_4P2") && unk_0xACE95AD318CE412B("lesterHandler")) && unk_0xFA9040D29FE330BD(6))
			{
				if (!unk_0x1D403DFADBC2DE3C(iLocal_245, 0))
				{
					unk_0x538BB037E00A3AD9(iLocal_245, "Lester", 0, joaat("cs_lestercrest"), 0);
				}
				else
				{
					unk_0x538BB037E00A3AD9(iLocal_245, "Lester", 2, joaat("cs_lestercrest"), 0);
				}
				if (unk_0x724D816EA203A79E(iLocal_248))
				{
					if (unk_0x2FAEA11D96CF14A3(iLocal_248))
					{
						unk_0x17175087F2DB6AC8(iLocal_248, 1, 1);
					}
				}
				if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
				{
					unk_0x538BB037E00A3AD9(unk_0xBC25C936A095B5BA(), "Michael", 0, joaat("player_zero"), 0);
				}
				if (unk_0x724D816EA203A79E(iLocal_248))
				{
					unk_0x538BB037E00A3AD9(iLocal_248, "WalkingStick_Lester", 1, joaat("prop_cs_walking_stick"), 0);
				}
				else
				{
					unk_0x538BB037E00A3AD9(iLocal_248, "WalkingStick_Lester", 2, joaat("prop_cs_walking_stick"), 0);
				}
				unk_0xF243B7A14FCFD0F4(joaat("prop_cs_walking_stick"));
				unk_0xF243B7A14FCFD0F4(joaat("prop_laptop_lester2"));
				func_72(1);
				func_117(1);
				func_185(1, 1, 1, 0, 0);
				iLocal_43 = -1;
				unk_0x93B1CB6BD50812C7(0);
				if (func_110(0))
				{
					unk_0xE444CD50419A8207(0, 0, 0, 0);
				}
				func_106(17, 0);
			}
		}
		else if (unk_0x866EAD7E27D8D0F8())
		{
			func_113();
			if (unk_0xFA30DFD0084E92FE(iLocal_41, 7))
			{
				if (unk_0x724D816EA203A79E(iLocal_248))
				{
					unk_0xDC078F87049ECECE(iLocal_248, true, 0);
				}
				if (unk_0x724D816EA203A79E(iLocal_246))
				{
					unk_0xDC078F87049ECECE(iLocal_246, true, 0);
				}
				if (unk_0x724D816EA203A79E(iLocal_245))
				{
					unk_0xDC078F87049ECECE(iLocal_245, true, 0);
				}
				unk_0x7CB6FD92BE491AD9(&iLocal_41, 7);
			}
			if (unk_0x3F3252765FE36DA8("Lester", 0))
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_245))
				{
					iVar0 = iLocal_245;
					SYSTEM::START_NEW_SCRIPT_WITH_ARGS("lesterHandler", &iVar0, 1, 1424);
					unk_0x91DEC7187FA01089("lesterHandler");
					iLocal_255 = unk_0x105601648511CC64();
					unk_0xF0059F27F7BB6680(&iLocal_41, 18);
				}
			}
			if (unk_0x3F3252765FE36DA8("Michael", 0))
			{
				if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
				{
					vVar1 = { 709.3766f, -964.2602f, 29.3954f };
					unk_0x2084D4C6C2DF616F(vVar1, &(vVar1.f_2), 0, 0);
					if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
					{
						unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), vVar1, 1, false, 0, 1);
						unk_0x019CE76D5286C95C(unk_0xBC25C936A095B5BA(), 261.7831f);
						if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
						{
							unk_0x56EDA6006F1B166D(unk_0xB5CEFD608600A09F(), 1f, 2000, 0f, 1, 0);
						}
						unk_0x3E2B7D349B5735D3(unk_0xBC25C936A095B5BA(), -668482597, false, 0, 0);
					}
					unk_0x2EB4D46478766D87(unk_0xBC25C936A095B5BA(), 0, 0);
				}
			}
			if (unk_0x4B088956DA856645(0))
			{
				unk_0xF3F01A78937DC905(0f);
				unk_0x2B9AEC08E469E384(0f, 1065353216);
			}
		}
		else if (iLocal_43 == -1 && !func_110(0))
		{
			iLocal_43 = unk_0x105601648511CC64() + 1500;
		}
		else if (unk_0x105601648511CC64() > iLocal_43 || func_110(0))
		{
			if (func_110(0))
			{
				unk_0x7A41D32A383895D8(0);
			}
			else
			{
				Global_DA9F = 0;
				Global_16B42 = 0;
				func_184();
			}
			unk_0x2CA123B0622F495C(joaat("prop_cs_walking_stick"));
			unk_0x2CA123B0622F495C(joaat("prop_laptop_lester2"));
			func_72(0);
			func_185(0, 1, 1, 0, 0);
			func_182(&(Global_19B04.f_932.f_21B), 86);
			func_154(&(Global_19B04.f_932.f_21B), 86);
			func_153(&iLocal_45);
			unk_0x7CB6FD92BE491AD9(&iLocal_41, 1);
			unk_0x483687B0FCA5415A(iLocal_249, 0);
			if (iLocal_254 != -1)
			{
				if (unk_0x2A0D5F9585271A68(iLocal_254))
				{
					unk_0x5BF83EEC9AFDCD0E(iLocal_254);
				}
			}
			unk_0x02DD9F29D9655E48();
			unk_0x4BDC021CD4295F17(Local_46.f_1.f_18A - Local_46.f_1.f_18D, Local_46.f_1.f_18A + Local_46.f_1.f_18D, true, 0);
			unk_0xAEC867D0DBB7AFEB(5);
			func_106(18, 0);
			func_146(0, 0);
		}
	}
	else if (!func_221(17))
	{
		if (unk_0x30F17D4B59B81517("JH_1_MCS_4P2"))
		{
			unk_0xD103510B8989BEB2();
		}
	}
	if (unk_0xFA30DFD0084E92FE(iLocal_41, 18))
	{
		unk_0xBBC4195AD74D153D(0, 26, 1);
		if (unk_0x105601648511CC64() > iLocal_255 + 1000)
		{
			unk_0x7CB6FD92BE491AD9(&iLocal_41, 18);
		}
	}
}

void func_146(int iParam0, bool bParam1)//Position - 0x756C
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 14)
	{
		iVar1 = iVar0;
		if (func_39(iVar1) || func_38(iVar1))
		{
			if (!(iVar1 == 11 && iParam0 == 3))
			{
				switch (iVar1)
				{
					case 1:
						func_150(4, 1);
						break;
					
					case 4:
						func_150(8, 1);
						break;
					
					case 6:
						func_150(10, 1);
						break;
					
					case 7:
						func_150(1, 1);
						break;
					
					case 8:
						func_150(3, 1);
						break;
					
					case 9:
						func_150(6, 1);
						break;
					
					case 10:
						func_150(9, 1);
						break;
					
					case 12:
						func_150(11, 1);
						break;
					
					case 13:
						func_150(12, 1);
						break;
					
					case 11:
						if (func_149(91))
						{
							func_150(0, 1);
						}
						break;
					
					case 5:
						if (func_149(91))
						{
							func_150(2, 1);
						}
						break;
					
					case 3:
						if (func_149(67))
						{
							func_150(5, 1);
						}
						break;
					
					case 2:
						if (func_149(77))
						{
							func_150(7, 1);
						}
						break;
					}
				}
		}
		iVar0++;
	}
	if (!func_39(10) && unk_0xFA30DFD0084E92FE(Global_19B04.f_6186.f_8[4], 0))
	{
		func_150(9, 1);
	}
	if (!func_39(13) && unk_0xFA30DFD0084E92FE(Global_19B04.f_6186.f_8[16], 0))
	{
		func_150(12, 1);
	}
	if (!func_39(12))
	{
		if (iParam0 == 4)
		{
			func_150(11, 1);
		}
	}
	if (!bParam1)
	{
		if (!func_148(69))
		{
			func_21("DI_HLP_HST", 2, 0, 20000, 10000, 7, 0, 209, 0);
		}
		func_147("DI_FEED_HST");
	}
}

void func_147(char* sParam0)//Position - 0x7738
{
	unk_0x2E94302CFF011F2E("");
	unk_0x20CD8193D21A53C8("CHAR_ACTING_UP", "CHAR_ACTING_UP", 0, 0, "DI_FEED_CHAR", sParam0);
}

int func_148(int iParam0)//Position - 0x775C
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return unk_0xFA30DFD0084E92FE(Global_19B04.f_4F9D.f_96[iVar1], iVar0);
	}
	return 0;
}

int func_149(int iParam0)//Position - 0x779F
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_19B04.f_2360.f_14A[iParam0 /*6*/];
}

void func_150(int iParam0, bool bParam1)//Position - 0x77CB
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 <= 31)
	{
		if (!func_152(iParam0))
		{
			unk_0xF0059F27F7BB6680(&(Global_19B04.f_6725.f_1), iVar0);
			if (!bParam1)
			{
				func_147(func_151(iParam0));
			}
		}
	}
}

char* func_151(int iParam0)//Position - 0x7814
{
	switch (iParam0)
	{
		case 0:
			return "CM_HSTCHE";
			break;
		
		case 1:
			return "CM_HSTCHR";
			break;
		
		case 2:
			return "CM_HSTDAR";
			break;
		
		case 3:
			return "CM_HSTEDD";
			break;
		
		case 4:
			return "CM_HSTGUS";
			break;
		
		case 5:
			return "CM_HSTHUG";
			break;
		
		case 6:
			return "CM_HSTKRM";
			break;
		
		case 7:
			return "CM_HSTKAR";
			break;
		
		case 8:
			return "CM_HSTNOR";
			break;
		
		case 9:
			return "CM_HSTPAC";
			break;
		
		case 10:
			return "CM_HSTPAI";
			break;
		
		case 11:
			return "CM_HSTRIC";
			break;
		
		case 12:
			return "CM_HSTTAL";
			break;
	}
	return "ERROR!";
}

int func_152(int iParam0)//Position - 0x78F7
{
	if (iParam0 != -1 && iParam0 != 13)
	{
		return unk_0xFA30DFD0084E92FE(Global_19B04.f_6725.f_1, iParam0);
	}
	return 0;
}

void func_153(int iParam0)//Position - 0x7926
{
	if (*iParam0 == -1)
	{
		return;
	}
	if (!*iParam0 == Global_8C1B)
	{
		*iParam0 = -1;
		return;
	}
	*iParam0 = -1;
	Global_8C1A = 0;
	Global_8C1C = 0;
	Global_8C41 = 15;
	Global_DA9C = 0;
	Global_DA9D = 0;
}

void func_154(var uParam0, int iParam1)//Position - 0x7963
{
	switch (iParam1)
	{
		case 17:
			func_155(uParam0, 0, 12);
			break;
		
		case 19:
			func_155(uParam0, 1, 13);
			break;
		
		case 29:
			func_155(uParam0, 1, 14);
			break;
		
		case 30:
			func_155(uParam0, 2, 15);
			func_155(uParam0, 1, 29);
			break;
		
		case 32:
			func_155(uParam0, 1, 16);
			func_155(uParam0, 0, 17);
			break;
		
		case 39:
			func_155(uParam0, 0, 21);
			func_155(uParam0, 1, 20);
			break;
		
		case 31:
			func_155(uParam0, 0, 18);
			break;
		
		case 20:
			func_155(uParam0, 2, 22);
			break;
		
		case 66:
			func_155(uParam0, 1, 23);
			break;
		
		case 68:
			func_155(uParam0, 1, 24);
			break;
		
		case 70:
			func_155(uParam0, 1, 67);
			break;
		
		case 8:
			func_155(uParam0, 1, 25);
			func_155(uParam0, 2, 26);
			break;
		
		case 67:
			func_155(uParam0, 1, 27);
			break;
		
		case 9:
			func_155(uParam0, 2, 28);
			break;
		
		case 38:
			func_155(uParam0, 2, 30);
			func_155(uParam0, 1, 19);
			break;
		
		case 83:
			func_155(uParam0, 2, 33);
			break;
		
		case 45:
			func_155(uParam0, 1, 35);
			break;
		
		case 64:
			func_155(uParam0, 0, 36);
			func_155(uParam0, 1, 37);
			break;
		
		case 91:
			func_155(uParam0, 0, 41);
			break;
		
		case 42:
			func_155(uParam0, 0, 58);
			Global_16908[0 /*98*/] = 0;
			func_155(uParam0, 2, 59);
			Global_16908[2 /*98*/] = 0;
			break;
		
		case 41:
			func_155(uParam0, 1, 42);
			func_155(uParam0, 2, 42);
			break;
		
		case 15:
			func_155(uParam0, 0, 46);
			func_155(uParam0, 1, 47);
			break;
		
		case 16:
			func_155(uParam0, 0, 48);
			break;
		
		case 48:
			func_155(uParam0, 1, 50);
			func_155(uParam0, 2, 51);
			break;
		
		case 74:
			func_155(uParam0, 0, 52);
			func_155(uParam0, 1, 66);
			break;
		
		case 76:
			func_155(uParam0, 1, 53);
			func_155(uParam0, 2, 54);
			func_155(uParam0, 0, 62);
			break;
		
		case 75:
			func_155(uParam0, 0, 61);
			func_155(uParam0, 1, 31);
			break;
		
		case 69:
			func_155(uParam0, 1, 63);
			break;
		
		case 84:
			func_155(uParam0, 0, 68);
			func_155(uParam0, 2, 69);
			break;
		
		case 85:
			func_155(uParam0, 0, 64);
			func_155(uParam0, 2, 65);
			break;
		
		case 93:
			func_155(uParam0, 1, 38);
			func_155(uParam0, 2, 39);
			break;
		
		case 11:
			func_155(uParam0, 2, 55);
			break;
		
		case 77:
			func_155(uParam0, 1, 56);
			func_155(uParam0, 2, 57);
			break;
		
		default:
			break;
	}
}

int func_155(var uParam0, int iParam1, int iParam2)//Position - 0x7CAC
{
	int iVar0;
	struct<98> Var1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	if (!unk_0xFA30DFD0084E92FE(Global_19B04.f_2360.f_63.f_DB[0], 9))
	{
		iVar0 = Global_19B04.f_4848[iParam1];
		if (iVar0 == 11)
		{
			return 0;
		}
		if ((iVar0 == 8 || iVar0 == 9) || iVar0 == 10)
		{
			return 0;
		}
	}
	Global_19B04.f_4848[iParam1] = iParam2;
	uParam0->f_8E4[iParam1] = func_171();
	if (!func_170(iParam2, &(uParam0->f_8E8[iParam1 /*3*/]), &(uParam0->f_8F2[iParam1])))
	{
		return 0;
	}
	if (!func_169(uParam0->f_8E8[iParam1 /*3*/], 0f, 0f, 0f, 0))
	{
		if (!func_169(Global_16543[iParam2 /*3*/], 0f, 0f, 0f, 0))
		{
			Var1.f_B = 12;
			Var1.f_1F = 49;
			Var1.f_51 = 2;
			if (func_156(iParam1, iParam2, &Var1, &uVar2, &uVar3, &uVar4, &uVar5))
			{
				Global_16908[iParam1 /*98*/] = { Var1 };
			}
		}
	}
	uParam0->f_8F6[iParam1] = 0;
	uParam0->f_8FA[iParam1 /*3*/] = { 0f, 0f, 0f };
	uParam0->f_904[iParam1] = 0;
	return 1;
}

int func_156(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x7DCC
{
	uParam2->f_3 = 1000;
	uParam2->f_1 = 0;
	uParam2->f_54 = 255;
	uParam2->f_55 = 255;
	uParam2->f_56 = 255;
	switch (iParam1)
	{
		case 5:
			*uParam2 = { Global_16908[iParam0 /*98*/] };
			if (Global_16A2F[iParam0] != 2)
			{
				if (unk_0x7352105EC4D7541F(Global_16A37[iParam0 /*3*/], -829.7478f, 192.117f, 76.73248f, -827.1384f, 153.8595f, 59.96172f, 33.25f, 0, true))
				{
					if (Global_16A2F[iParam0] == 1)
					{
						*uParam3 = { Global_16A37[iParam0 /*3*/] - Global_19B04.f_932.f_21B.f_8E8[iParam0 /*3*/] };
						*uParam4 = (Global_16A41[iParam0] - Global_19B04.f_932.f_21B.f_8F2[iParam0]);
						if (SYSTEM::VMAG2(*uParam3) > (5f * 5f))
						{
							*uParam3 = { 0f, 0f, 0f };
							*uParam4 = 0f;
							return 0;
						}
					}
				}
				*uParam3 = { Global_16A37[iParam0 /*3*/] - Global_19B04.f_932.f_21B.f_8E8[iParam0 /*3*/] };
				*uParam4 = (Global_16A41[iParam0] - Global_19B04.f_932.f_21B.f_8F2[iParam0]);
				if (SYSTEM::VMAG2(*uParam3) < (0.5f * 0.5f))
				{
					*uParam3 = { *uParam3 * Vector(1.5f, 1.5f, 1.5f) };
				}
			}
			else
			{
				*uParam3 = { 0f, 0f, 0f };
				*uParam4 = 0f;
			}
			return 1;
			break;
		
		case 6:
			*uParam2 = { Global_16908[iParam0 /*98*/] };
			if (Global_16A2F[iParam0] != 2)
			{
				*uParam3 = { Global_16A37[iParam0 /*3*/] - Global_19B04.f_932.f_21B.f_8E8[iParam0 /*3*/] };
				*uParam4 = (Global_16A41[iParam0] - Global_19B04.f_932.f_21B.f_8F2[iParam0]);
				if (SYSTEM::VMAG2(*uParam3) < (0.5f * 0.5f))
				{
					*uParam3 = { *uParam3 * Vector(1.5f, 1.5f, 1.5f) };
				}
			}
			else
			{
				*uParam3 = { 0f, 0f, 0f };
				*uParam4 = 0f;
			}
			return 1;
			break;
		
		case 7:
			*uParam2 = { Global_16908[iParam0 /*98*/] };
			if (Global_16A2F[iParam0] != 2)
			{
				*uParam3 = { Global_16A37[iParam0 /*3*/] - Global_19B04.f_932.f_21B.f_8E8[iParam0 /*3*/] };
				*uParam4 = (Global_16A41[iParam0] - Global_19B04.f_932.f_21B.f_8F2[iParam0]);
				if (SYSTEM::VMAG2(*uParam3) < (0.5f * 0.5f))
				{
					*uParam3 = { *uParam3 * Vector(1.5f, 1.5f, 1.5f) };
				}
			}
			else
			{
				*uParam3 = { 0f, 0f, 0f };
				*uParam4 = 0f;
			}
			return 1;
			break;
		
		case 11:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { 37.43f, -23.81f, 0f };
			*uParam4 = 127f;
			return 1;
			break;
		
		case 8:
			uParam2->f_61 = 0;
			*uParam2 = joaat("mesa");
			*uParam3 = { Vector(28.826f, -1277.56f, -90.961f) - Vector(28.3203f, -1324.195f, -90.0089f) };
			*uParam4 = (1.27f - 194.1887f);
			return 1;
			break;
		
		case 9:
			return func_156(iParam0, 8, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 10:
			return func_156(iParam0, 8, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 13:
			func_158(iParam0, uParam2, 0);
			*uParam5 = { 0f, 5f, 0f };
			*uParam6 = 5f;
			return 1;
			break;
		
		case 14:
			func_158(iParam0, uParam2, 2);
			uParam2->f_5B = 1;
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 15:
			uParam2->f_61 = 0;
			*uParam2 = joaat("frogger");
			uParam2->f_5 = 34;
			uParam2->f_6 = 34;
			uParam2->f_7 = 0;
			uParam2->f_8 = 0;
			uParam2->f_9 = 0;
			uParam2->f_B[0] = 1;
			uParam2->f_B[1] = 1;
			uParam2->f_B[2] = 1;
			uParam2->f_B[3] = 1;
			uParam2->f_B[4] = 1;
			uParam2->f_B[5] = 1;
			uParam2->f_B[6] = 1;
			uParam2->f_B[7] = 1;
			uParam2->f_B[8] = 1;
			*uParam5 = { 0f, 50f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 55:
			uParam2->f_61 = 0;
			*uParam2 = joaat("mesa");
			*uParam3 = { Vector(4.8006f, -2965.499f, 782.1644f) - Vector(4.0205f, -2975.341f, 798.4536f) };
			*uParam4 = (246.1684f - 90f);
			return 1;
			break;
		
		case 56:
			func_158(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 20f;
			return 1;
			break;
		
		case 57:
			uParam2->f_61 = 0;
			*uParam2 = joaat("penumbra");
			*uParam3 = { Vector(28.764f, -1431.464f, 66.028f) - Vector(28.2954f, -1351.52f, 37.5988f) };
			*uParam4 = (141.28f - 90.0339f);
			return 1;
			break;
		
		case 12:
			uParam2->f_61 = 0;
			*uParam2 = joaat("taxi");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam5 = { 0f, 5f, 0f };
			*uParam6 = 5f;
			return 1;
			break;
		
		case 16:
			func_158(iParam0, uParam2, 0);
			*uParam5 = { 0f, 15f, 0f };
			*uParam6 = 5f;
			return 1;
			break;
		
		case 17:
			func_158(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 18:
			func_158(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 19:
			func_158(iParam0, uParam2, 0);
			*uParam5 = { 0f, 15f, 0f };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 20:
			func_158(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 23:
			return func_156(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 24:
			func_158(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 67:
			func_158(iParam0, uParam2, 1);
			uParam2->f_5B = 1;
			*uParam3 = { 21.6401f, 38.5601f, 1.9708f };
			*uParam4 = -84f;
			return 1;
			break;
		
		case 58:
			func_158(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 59:
			func_158(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 60:
			func_158(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 22:
			uParam2->f_61 = 0;
			*uParam2 = joaat("phantom");
			*uParam5 = { 0f, 50f, 0f };
			*uParam6 = 20f;
			return 1;
			break;
		
		case 74:
			func_158(iParam0, uParam2, 1);
			uParam2->f_5B = 2;
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 38:
			func_158(iParam0, uParam2, 2);
			uParam2->f_5B = 2;
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 41:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { -2.72f, 0.45f, 1f };
			*uParam4 = -137f;
			return 1;
			break;
		
		case 25:
			uParam2->f_61 = 0;
			*uParam2 = joaat("blista");
			*uParam3 = { Vector(29.17f, -1417.047f, 54.081f) - Vector(28.2915f, -1464.68f, 72.2278f) };
			*uParam4 = (0.72f - 156.8827f);
			return 1;
			break;
		
		case 27:
			uParam2->f_61 = 0;
			*uParam2 = joaat("seminole");
			*uParam3 = { Vector(24.9f, -938.8f, 792.3f) - Vector(24.2312f, -906f, 763f) };
			*uParam4 = (2.23f - 7.2736f);
			return 1;
			break;
		
		case 26:
			uParam2->f_61 = 0;
			*uParam2 = joaat("peyote");
			*uParam3 = { Vector(28.701f, -1090.07f, 306.036f) - Vector(28.3684f, -1120.786f, 257.9167f) };
			*uParam4 = (-1f - 97.2736f);
			return 1;
			break;
		
		case 40:
			func_157(iParam0, uParam2, 1);
			uParam2->f_5B = 1;
			*uParam3 = { 16.5182f, -8.5576f, -2.3291f };
			*uParam4 = 174.24f;
			return 1;
			break;
		
		case 28:
			uParam2->f_61 = 0;
			*uParam2 = joaat("polmav");
			uParam2->f_B[0] = 1;
			uParam2->f_B[1] = 1;
			uParam2->f_B[2] = 1;
			uParam2->f_B[3] = 1;
			uParam2->f_B[4] = 1;
			uParam2->f_B[5] = 1;
			uParam2->f_B[6] = 1;
			uParam2->f_B[7] = 1;
			uParam2->f_B[8] = 1;
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 234:
			func_157(iParam0, uParam2, 1);
			uParam2->f_5B = 1;
			*uParam3 = { 16.5182f, -8.5576f, -2.3291f };
			*uParam4 = 174.24f;
			return 1;
			break;
		
		case 75:
			func_158(iParam0, uParam2, 0);
			*uParam5 = { 2.5f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 76:
			func_158(iParam0, uParam2, 0);
			*uParam5 = { 2.5f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 42:
			uParam2->f_61 = 0;
			*uParam2 = joaat("mesa");
			*uParam3 = { Vector(4.8006f, -2965.499f, 782.1644f) - Vector(4.0205f, -2975.341f, 798.4536f) };
			*uParam4 = (246.1684f - 90f);
			return 1;
			break;
		
		case 43:
			uParam2->f_61 = 0;
			*uParam2 = joaat("mesa");
			*uParam3 = { Vector(5.4446f, -2912.043f, 659.5297f) - Vector(5.0589f, -2916.479f, 709.0244f) };
			*uParam4 = (247.4806f - 355.326f);
			return 1;
			break;
		
		case 44:
			uParam2->f_61 = 0;
			*uParam2 = joaat("sadler");
			*uParam3 = { Vector(5.1176f, -2936.843f, 656.9753f) - Vector(5.1337f, -2917.325f, 643.5248f) };
			*uParam4 = (253.776f - 334.1068f);
			return 1;
			break;
		
		case 45:
			uParam2->f_61 = 0;
			*uParam2 = joaat("mixer");
			*uParam3 = { Vector(5.681f, -2769.795f, 593.033f) - Vector(5.0558f, -2819.085f, 594.4415f) };
			*uParam4 = (2.62f - 299.0519f);
			return 1;
			break;
		
		case 47:
			uParam2->f_61 = 0;
			*uParam2 = joaat("cavalcade");
			uParam2->f_5 = 0;
			uParam2->f_6 = 0;
			uParam2->f_7 = 0;
			uParam2->f_8 = 0;
			uParam2->f_9 = 0;
			StringCopy(&(uParam2->f_1B), "22LJK483", 16);
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			*uParam5 = { 0f, 10f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 49:
			func_158(iParam0, uParam2, 0);
			*uParam5 = { -1.5f, 35f, 3f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 48:
			func_157(iParam0, uParam2, 1);
			uParam2->f_5B = 1;
			*uParam3 = { 3.8721f, -5.9568f, 0f };
			*uParam4 = (164.2466f - 180f);
			return 1;
			break;
		
		case 50:
			func_158(iParam0, uParam2, 0);
			*uParam5 = { 0f, 10f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 51:
			uParam2->f_61 = 0;
			*uParam2 = joaat("stretch");
			*uParam3 = { Vector(28.1755f, -550.2679f, -1170.72f) - Vector(30.2361f, -526.9999f, -1257.5f) };
			*uParam4 = (310.4708f - 220.9554f);
			return 1;
			break;
		
		case 52:
			func_158(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 12.5f;
			return 1;
			break;
		
		case 66:
			func_158(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 12.5f;
			return 1;
			break;
		
		case 61:
			func_158(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 62:
			func_158(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 63:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { -2.9117f, -15.0499f, -0.3468f };
			*uParam4 = -139.9751f;
			return 1;
			break;
		
		case 64:
			func_158(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 69:
			uParam2->f_61 = 0;
			*uParam2 = joaat("prairie");
			*uParam3 = { Vector(36.5734f, -85.1799f, -737.1358f) - Vector(54f, 111f, -852f) };
			*uParam4 = (64.1848f - 180f);
			return 1;
			break;
		
		case 65:
		case 54:
			uParam2->f_61 = 0;
			*uParam2 = joaat("frogger2");
			uParam2->f_5 = 40;
			uParam2->f_6 = 0;
			uParam2->f_7 = 0;
			uParam2->f_8 = 0;
			uParam2->f_9 = 0;
			uParam2->f_B[0] = 1;
			uParam2->f_B[1] = 1;
			uParam2->f_B[2] = 1;
			uParam2->f_B[3] = 1;
			uParam2->f_B[4] = 1;
			uParam2->f_B[5] = 1;
			uParam2->f_B[6] = 1;
			uParam2->f_B[7] = 1;
			uParam2->f_B[8] = 1;
			uParam2->f_59 = 1;
			if (iParam1 == 54)
			{
				*uParam3 = { 5.5414f, -6.6035f, 1.0473f };
				*uParam4 = -83.2547f;
			}
			if (iParam1 == 65)
			{
				*uParam3 = { 5.7209f, -12.3958f, 1.0746f };
				*uParam4 = -152.2593f;
			}
			return 1;
			break;
		
		case 112:
			func_157(iParam0, uParam2, 1);
			uParam2->f_5B = 1;
			*uParam3 = { unk_0x55AEFCD285ECC0F2(-5f, 5f), unk_0x55AEFCD285ECC0F2(-5f, 5f), 0f };
			*uParam4 = unk_0x55AEFCD285ECC0F2(-180f, 180f);
			return 1;
			break;
		
		case 113:
			if (func_156(iParam0, 112, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { unk_0x55AEFCD285ECC0F2(-5f, 5f), unk_0x55AEFCD285ECC0F2(-5f, 5f), 0f };
				*uParam4 = unk_0x55AEFCD285ECC0F2(-180f, 180f);
				return 1;
			}
			break;
		
		case 118:
			uParam2->f_61 = 0;
			*uParam2 = joaat("scorcher");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			*uParam5 = { 1f, 12.5f, 0f };
			*uParam6 = 5f;
			return 1;
			break;
		
		case 119:
			if (func_156(iParam0, 118, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 5f, 20f, 0f };
				*uParam6 = 5f;
				return 1;
			}
			break;
		
		case 120:
			if (func_156(iParam0, 118, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 30f, 0f };
				*uParam6 = 8f;
				return 1;
			}
			break;
		
		case 173:
			uParam2->f_61 = 0;
			*uParam2 = joaat("cruiser");
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0.1f;
			*uParam5 = { 0.1f, 0.1f, 0.1f };
			*uParam6 = 0.1f;
			return 1;
			break;
		
		case 114:
			func_157(iParam0, uParam2, 1);
			uParam2->f_5B = 1;
			*uParam3 = { -1.9002f, 1.205f, -0.3537f };
			*uParam4 = -180f;
			return 1;
			break;
		
		case 105:
			func_158(iParam0, uParam2, 1);
			*uParam5 = { 0f, 0.1f, 0f };
			*uParam6 = 0.5f;
			return 1;
			break;
		
		case 106:
			return func_156(iParam0, 105, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 107:
			return func_156(iParam0, 105, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 98:
			func_157(iParam0, uParam2, 1);
			uParam2->f_5B = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0.1f;
			*uParam5 = { 0.1f, 0.1f, 0.1f };
			*uParam6 = 0.1f;
			return 1;
			break;
		
		case 99:
			func_157(iParam0, uParam2, 1);
			uParam2->f_5B = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			*uParam5 = { 0f, 0f, 0f };
			*uParam6 = 0f;
			return 1;
			break;
		
		case 100:
			return func_156(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 101:
			return func_156(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 102:
			return func_156(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 123:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { 3.2267f, 1.0966f, -0.354f };
			*uParam4 = -31.73f;
			return 1;
			break;
		
		case 125:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { -13.7322f, 1.8783f, 1.0593f };
			*uParam4 = 55.3652f;
			return 1;
			break;
		
		case 133:
			uParam2->f_61 = 0;
			*uParam2 = joaat("tropic");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			uParam2->f_B[0] = 0;
			uParam2->f_B[1] = 0;
			uParam2->f_B[2] = 1;
			uParam2->f_B[3] = 0;
			uParam2->f_B[4] = 0;
			uParam2->f_B[5] = 1;
			uParam2->f_B[6] = 1;
			uParam2->f_B[7] = 1;
			uParam2->f_B[8] = 1;
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 89:
		case 90:
		case 127:
			func_157(iParam0, uParam2, 1);
			uParam2->f_5B = 1;
			*uParam5 = { 0f, 0f, 0f };
			*uParam6 = 0.1f;
			return 1;
			break;
		
		case 91:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { 15.4538f, -8.711f, 5.79f };
			*uParam4 = 2.4942f;
			return 1;
			break;
		
		case 93:
			if (func_156(iParam0, 91, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -8.1f, -9.01f, 0.4439f };
				*uParam4 = 94.03f;
				return 1;
			}
			break;
		
		case 121:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { 18.8468f, 40.7721f, 0f };
			*uParam4 = -116.3936f;
			return 1;
			break;
		
		case 115:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(43.517f, -33.7052f, -531.6035f) - Vector(45.6141f, -21.87f, -511.73f) };
			*uParam4 = ((177.259f - 180f) - 69f);
			return 1;
			break;
		
		case 116:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { 1.7826f, 12.2098f, -0.6964f };
			*uParam4 = -96.0001f;
			return 1;
			break;
		
		case 117:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { 11.8705f, -1.4684f, -1.6487f };
			*uParam4 = -125.8331f;
			return 1;
			break;
		
		case 94:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { -13.1578f, 16.3962f, 0.6396f };
			*uParam4 = -177f;
			return 1;
			break;
		
		case 96:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { -21.0518f, 0.5037f, 0.4091f };
			*uParam4 = -83.1262f;
			return 1;
			break;
		
		case 108:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { 10.8971f, 2.0809f, -0.7983f };
			*uParam4 = -150.9417f;
			return 1;
			break;
		
		case 109:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { 79.9901f, -52.83f, -0.3533f };
			*uParam4 = 44.7231f;
			return 1;
			break;
		
		case 135:
			func_157(iParam0, uParam2, 1);
			uParam2->f_5B = 1;
			*uParam3 = { unk_0x55AEFCD285ECC0F2(-5f, 5f), unk_0x55AEFCD285ECC0F2(-5f, 5f), 0f };
			*uParam4 = unk_0x55AEFCD285ECC0F2(-180f, 180f);
			return 1;
			break;
		
		case 136:
			if (func_156(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { unk_0x55AEFCD285ECC0F2(-5f, 5f), unk_0x55AEFCD285ECC0F2(-5f, 5f), 0f };
				*uParam4 = unk_0x55AEFCD285ECC0F2(-180f, 180f);
				return 1;
			}
			break;
		
		case 137:
			if (func_156(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { unk_0x55AEFCD285ECC0F2(-5f, 5f), unk_0x55AEFCD285ECC0F2(-5f, 5f), 0f };
				*uParam4 = unk_0x55AEFCD285ECC0F2(-180f, 180f);
				return 1;
			}
			break;
		
		case 138:
			if (func_156(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { unk_0x55AEFCD285ECC0F2(-5f, 5f), unk_0x55AEFCD285ECC0F2(-5f, 5f), 0f };
				*uParam4 = unk_0x55AEFCD285ECC0F2(-180f, 180f);
				return 1;
			}
			break;
		
		case 139:
			if (func_156(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 2.4845f, 2.3286f, -0.383f };
				*uParam4 = -31.4884f;
				return 1;
			}
			break;
		
		case 140:
			if (func_156(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 15f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 141:
			if (func_156(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 40f, 0f };
				*uParam6 = 12.5f;
				return 1;
			}
			break;
		
		case 142:
			func_158(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 143:
			if (func_156(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 144:
			if (func_156(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 145:
			if (func_156(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 146:
			if (func_156(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 147:
			if (func_156(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 15f, 0f };
				*uParam6 = 7.5f;
				return 1;
			}
			break;
		
		case 148:
			if (func_156(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 149:
			if (func_156(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 151:
			if (func_156(iParam0, 94, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -13.2213f, 16.331f, 0f };
				*uParam4 = 6f;
				return 1;
			}
			break;
		
		case 162:
			if (func_156(iParam0, 115, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 10.3876f, -10.3585f, -1.2183f };
				*uParam4 = 8.6726f;
				return 1;
			}
			break;
		
		case 158:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { 1.0793f, 15.631f, 1.1744f };
			*uParam4 = 2.52f;
			return 1;
			break;
		
		case 166:
			return func_156(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 170:
			func_157(iParam0, uParam2, 1);
			uParam2->f_5B = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0.1f;
			*uParam5 = { 0.1f, 0.1f, 0.1f };
			*uParam6 = 0.1f;
			return 1;
			break;
		
		case 171:
			return func_156(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 172:
			return func_156(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 208:
			func_158(iParam0, uParam2, 1);
			*uParam5 = { 0f, 0.1f, 0f };
			*uParam6 = 0.5f;
			return 1;
			break;
		
		case 209:
			return func_156(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 210:
			return func_156(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 211:
			func_157(iParam0, uParam2, 2);
			uParam2->f_5B = 2;
			*uParam3 = { -2.19f, -1.23f, 0f };
			*uParam4 = 90f;
			return 1;
			break;
		
		case 212:
			func_157(iParam0, uParam2, 1);
			uParam2->f_5B = 1;
			uParam2->f_2 = 0f;
			*uParam3 = { -1.3547f, 2.1615f, -0.3723f };
			*uParam4 = 177.8041f;
			return 1;
			break;
		
		case 213:
			if (func_156(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -4.2075f, 1.0943f, 0f };
				*uParam4 = 15.82f;
				return 1;
			}
			break;
		
		case 214:
			func_157(iParam0, uParam2, 1);
			uParam2->f_5B = 1;
			uParam2->f_2 = 0f;
			*uParam3 = { 2.291f, 1.0879f, 0.0635f };
			*uParam4 = 177.798f;
			return 1;
			break;
		
		case 215:
			uParam2->f_61 = 0;
			*uParam2 = joaat("taxi");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam3 = { -0.9714f, 1.6112f, -0.2773f };
			*uParam4 = -7.0583f;
			*uParam5 = { Vector(183.8081f, 578.5989f, 174.7651f) - Vector(176.086f, 551.7596f, 10.9694f) };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 196:
			uParam2->f_61 = 0;
			*uParam2 = joaat("taxi");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam3 = { Vector(29.4846f, -1457.915f, -17.4132f) - Vector(31.1932f, -1441.182f, -14.8689f) };
			*uParam4 = (89.0026f - -1.5f);
			*uParam5 = { Vector(33.6125f, -1563.461f, -147.0307f) - Vector(31.1932f, -1441.182f, -14.8689f) };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 221:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(43.5168f, -33.5909f, -531.4f) - Vector(45.2617f, -28.54f, -521.13f) };
			*uParam4 = (357.1407f - 84.96f);
			return 1;
			break;
		
		case 216:
			if (func_156(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -2.1752f, -2.3781f, 0f };
				*uParam4 = -68.4f;
				return 1;
			}
			break;
		
		case 217:
			if (func_156(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -3.9761f, 0.2542f, 0f };
				*uParam4 = -70.5273f;
				return 1;
			}
			break;
		
		case 232:
		case 233:
			func_157(iParam0, uParam2, 1);
			uParam2->f_5B = 1;
			*uParam3 = { Vector(28.225f, -1015.11f, -70.4456f) - Vector(27.5447f, -1019.235f, -78.4023f) };
			*uParam4 = (162.098f - 109.0206f);
			return 1;
			break;
		
		case 192:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(3.403f, -1531.113f, -1190.017f) - Vector(4.7514f, -1573.632f, -1174.458f) };
			*uParam4 = (302.182f - 105.981f);
			return 1;
			break;
		
		case 193:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(3.403f, -1531.113f, -1190.017f) - Vector(4.3599f, -1573.692f, -1175.298f) };
			*uParam4 = (302.182f - 172.9187f);
			return 1;
			break;
		
		case 194:
			if (func_156(iParam0, 193, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 12.74f, 3.26f, 0f };
				*uParam4 = 95.217f;
				return 1;
			}
			break;
		
		case 195:
			if (func_156(iParam0, 193, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -1.34f, 7.684f, 0f };
				*uParam4 = 173.52f;
				return 1;
			}
			break;
		
		case 200:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.4055f, -1607.568f, 44.4802f) - Vector(((28.2858f - 0.5f) + 1.5f), -1607.286f, 2.8895f) };
			*uParam4 = (318.2674f - (310.879f - 180f));
			return 1;
			break;
		
		case 201:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.1773f, -1592.787f, 3.6009f) - Vector(29.2903f, -1607.286f, 2.8895f) };
			*uParam4 = (322.6286f - 130.879f);
			return 1;
			break;
		
		case 202:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { 91.3579f, 18.1788f, -0.1911f };
			*uParam4 = -90.3475f;
			return 1;
			break;
		
		case 222:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { 12.5073f, -3.4625f, -0.3702f };
			*uParam4 = 14.3405f;
			return 1;
			break;
		
		case 223:
			if (func_156(iParam0, 222, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 21.87f, -10.5f, 0f };
				*uParam4 = -104.76f;
				return 1;
			}
			break;
		
		case 224:
			return func_156(iParam0, 222, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 226:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.7f, -1356.9f, 24.6f) - Vector(29.3437f, -1351.412f, 28.986f) };
			*uParam4 = ((270.1767f - 160f) - 180f);
			return 1;
			break;
		
		case 227:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { -19.8544f, -10.4863f, -0.0334f };
			*uParam4 = -120.12f;
			return 1;
			break;
		
		case 228:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { 21.5897f, -6.8544f, 0.6015f };
			*uParam4 = -141f;
			return 1;
			break;
		
		case 229:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { -7.6041f, 0.1369f, 0.5812f };
			*uParam4 = -145.769f;
			return 1;
			break;
		
		case 230:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { -1.6f, 7.6802f, 0.6947f };
			*uParam4 = -50.99f;
			return 1;
			break;
		
		case 238:
			func_157(iParam0, uParam2, 1);
			uParam2->f_5B = 1;
			*uParam3 = { 22.322f, -6.2034f, 0f };
			*uParam4 = 73.071f;
			return 1;
			break;
		
		case 250:
			func_157(iParam0, uParam2, 1);
			uParam2->f_5B = 1;
			*uParam3 = { -1.2901f, -5.5798f, -0.0357f };
			*uParam4 = 160.56f;
			return 1;
			break;
		
		case 251:
			if (func_156(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -4.0739f, 7.7692f, -0.2984f };
				*uParam4 = -48.9552f;
				return 1;
			}
			break;
		
		case 252:
			if (func_156(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -5.778f, -4.2397f, 0.9091f };
				*uParam4 = -12.9418f;
				return 1;
			}
			break;
		
		case 253:
			if (func_156(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 0.6968f, 1.1033f, 0.912f };
				*uParam4 = 90f;
				return 1;
			}
			break;
		
		case 281:
			func_157(iParam0, uParam2, 1);
			uParam2->f_5B = 1;
			*uParam5 = { 0f, 8f, 0.6f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 282:
			if (func_156(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				return 1;
			}
			break;
		
		case 283:
			if (func_156(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				return 1;
			}
			break;
		
		case 284:
			if (func_156(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				uParam2->f_61 = 0;
				*uParam2 = joaat("faggio2");
				uParam2->f_5B = 0;
				return 1;
			}
			break;
		
		case 275:
			func_157(iParam0, uParam2, 1);
			uParam2->f_5B = 1;
			*uParam5 = { 0f, 8f, 0.6f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 276:
			return func_156(iParam0, 275, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 277:
			return func_156(iParam0, 275, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 280:
			if (!Global_3)
			{
				uParam2->f_61 = 0;
				*uParam2 = joaat("tropic");
				uParam2->f_B[0] = 0;
				uParam2->f_B[1] = 0;
				uParam2->f_B[2] = 1;
				uParam2->f_B[3] = 0;
				uParam2->f_B[4] = 0;
				uParam2->f_B[5] = 1;
				uParam2->f_B[6] = 1;
				uParam2->f_B[7] = 1;
				uParam2->f_B[8] = 1;
			}
			else
			{
				uParam2->f_61 = 0;
				*uParam2 = joaat("dinghy");
			}
			*uParam3 = { Vector(-0.6187f, -1440.421f, 2779.759f) - Vector(0.3109f, -1453.731f, 2789.845f) };
			uParam3->f_2 = (uParam3->f_2 + 0.5f);
			*uParam4 = (340.0835f - 4.44f);
			*uParam3 = { Vector(-0.7f, 16.55f, -3.3962f) + Vector(0.5f, 0.5f, -0.5f) };
			*uParam4 = (23.6441f + 90f);
			*uParam3 = { -4.0164f, 19.9594f, 0f };
			*uParam4 = 113.6465f;
			*uParam3 = { *uParam3 * Vector(1.1f, 1.1f, 1.1f) };
			return 1;
			break;
		
		case 247:
			uParam2->f_61 = 0;
			*uParam2 = joaat("sanchez");
			*uParam3 = { 9.8707f, 13.0084f, 0f };
			*uParam4 = ((-114f - 43f) + 133f);
			return 1;
			break;
		
		case 288:
			uParam2->f_61 = 0;
			*uParam2 = joaat("speedo");
			*uParam3 = { -7.7078f, 23.9099f, 1.7307f };
			*uParam4 = 24.3187f;
			return 1;
			break;
		
		case 309:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { -4.5662f, -3.2485f, (0.9455f - 1.7f) };
			*uParam4 = -138.6056f;
			return 1;
			break;
		
		case 305:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(33.8797f, 3597.047f, 1399.662f) - Vector(37.9419f, 3602.284f, 1394.208f) };
			*uParam4 = (315.9865f - 122.5269f);
			return 1;
			break;
		
		case 310:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { 10.5999f, 3.3997f, 1.0212f };
			*uParam4 = -50.3062f;
			return 1;
			break;
		
		case 255:
			uParam2->f_61 = 0;
			*uParam2 = joaat("romero");
			*uParam3 = { -13.2279f, -7.5348f, 0f };
			*uParam4 = 4.32f;
			return 1;
			break;
		
		case 265:
			uParam2->f_61 = 0;
			*uParam2 = joaat("bmx");
			*uParam3 = { 11.9596f, 0.345f, -1.0016f };
			*uParam4 = -42.4225f;
			return 1;
			break;
		
		case 285:
			uParam2->f_61 = 0;
			*uParam2 = joaat("gburrito");
			*uParam3 = { 3.424f, 7.6462f, 0.8227f };
			*uParam4 = -150f;
			return 1;
			break;
		
		case 256:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(7.1164f, -1094.205f, -1243.65f) - Vector(7.1f, -1105.15f, -1242.68f) };
			*uParam4 = (14.0848f - 120f);
			return 1;
			break;
		
		case 257:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(6.8143f, -930.5448f, -1672.535f) - Vector(6.479f, -974.7168f, -1667.148f) };
			*uParam4 = (144.9416f - 171.253f);
			return 1;
			break;
		
		case 258:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(30.3025f, 6276.12f, -267.5488f) - Vector(30.5054f, 6250.9f, -301.4778f) };
			*uParam4 = (130.9896f - 10.247f);
			return 1;
			break;
		
		case 314:
			uParam2->f_61 = 0;
			*uParam2 = joaat("cuban800");
			*uParam5 = { 0f, 150f, 20f };
			*uParam6 = 30f;
			return 1;
			break;
	}
	switch (iParam1)
	{
		case 110:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(32.5629f, -387.5143f, -147.166f) - Global_16543[iParam1 /*3*/] };
			*uParam4 = (341.4322f - 133f);
			return 1;
			break;
		
		case 111:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(24.4283f, -689.1462f, -1306.782f) - Global_16543[iParam1 /*3*/] };
			*uParam4 = (214.6826f - 33f);
			return 1;
			break;
		
		case 153:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(79.3324f, 254.0631f, -708.9244f) - Global_16543[iParam1 /*3*/] };
			*uParam4 = (115.2022f - -176.25f);
			return 1;
			break;
		
		case 154:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(79.3324f, 254.0631f, -708.9244f) - Global_16543[iParam1 /*3*/] };
			*uParam4 = (115.2022f - -147.192f);
			return 1;
			break;
		
		case 165:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(35.0054f, -441.1681f, -1100.878f) - Global_16543[iParam1 /*3*/] };
			*uParam4 = (297.5568f - -144.622f);
			return 1;
			break;
		
		case 159:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(36.3852f, -199.5354f, -825.3141f) - Global_16543[iParam1 /*3*/] };
			*uParam4 = (29.4869f - -62.5f);
			return 1;
			break;
		
		case 160:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(36.2086f, -144.1027f, -730.8218f) - Global_16543[iParam1 /*3*/] };
			*uParam4 = (28.532f - 119f);
			return 1;
			break;
		
		case 167:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(31.7307f, -523.2257f, -1144.174f) - Global_16543[iParam1 /*3*/] };
			*uParam4 = (299.2956f - -22.32f);
			return 1;
			break;
		
		case 152:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(60.9436f, 314.6989f, -1421.8f) - Global_16543[iParam1 /*3*/] };
			*uParam4 = (335.4134f - 72f);
			return 1;
			break;
		
		case 157:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(79.469f, 255.3143f, -706.187f) - Global_16543[iParam1 /*3*/] };
			*uParam4 = (117.3069f - 37.27f);
			return 1;
			break;
		
		case 225:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.7165f, -1677.734f, 185.4888f) - Global_16543[iParam1 /*3*/] };
			*uParam4 = (54.2538f - -83.8f);
			return 1;
			break;
		
		case 218:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.3218f, -1405.159f, -17.556f) - Global_16543[iParam1 /*3*/] };
			*uParam4 = (91.3098f - -70.4124f);
			return 1;
			break;
		
		case 219:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(30.2611f, -1492.151f, -219.3172f) - Global_16543[iParam1 /*3*/] };
			*uParam4 = (139.2572f - -12f);
			return 1;
			break;
		
		case 220:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(25.3018f, -1811.693f, -22.6138f) - Global_16543[iParam1 /*3*/] };
			*uParam4 = (141.0423f - -117.356f);
			return 1;
			break;
		
		case 206:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(208.5337f, 773.6719f, 164.1308f) - Global_16543[iParam1 /*3*/] };
			*uParam4 = (136.3104f - -36f);
			return 1;
			break;
		
		case 207:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(108.9995f, 396.924f, -263.3745f) - Global_16543[iParam1 /*3*/] };
			*uParam4 = (284.4611f - -95.588f);
			return 1;
			break;
		
		case 274:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(139.5782f, 2030.446f, -1883.836f) - Global_16543[iParam1 /*3*/] };
			*uParam4 = (340.5746f - 9f);
			return 1;
			break;
		
		case 312:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(10.0296f, 6560.557f, -200.684f) - Global_16543[iParam1 /*3*/] };
			*uParam4 = (134.5505f - 110.5931f);
			return 1;
			break;
		
		case 271:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(6.4647f, -1083.751f, -1278.023f) - Global_16543[iParam1 /*3*/] };
			*uParam4 = (115.8919f - 26.3597f);
			return 1;
			break;
		
		case 248:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(102.4417f, 164.5124f, 325.8113f) - Global_16543[iParam1 /*3*/] };
			*uParam4 = (68.4108f - 10.77f);
			return 1;
			break;
		
		case 242:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(56.616f, -122.9896f, -1622.22f) - Global_16543[iParam1 /*3*/] };
			*uParam4 = (210.8653f - 13.7207f);
			return 1;
			break;
		
		case 254:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(53.0019f, -213.7796f, 172.442f) - Global_16543[iParam1 /*3*/] };
			*uParam4 = (250.3032f - -40f);
			return 1;
			break;
		
		case 287:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(17.3426f, -836.0328f, -887.9977f) - Global_16543[iParam1 /*3*/] };
			*uParam4 = (270.8607f - -81f);
			return 1;
			break;
		
		case 286:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(4.8359f, -1182.704f, -1264.218f) - Global_16543[iParam1 /*3*/] };
			*uParam4 = (298.4328f - -150f);
			return 1;
			break;
		
		case 239:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(104.8218f, 289.0073f, -80.4564f) - Global_16543[iParam1 /*3*/] };
			*uParam4 = (247.6446f - -122f);
			return 1;
			break;
		
		case 243:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.2762f, -1477.282f, 434.9171f) - Global_16543[iParam1 /*3*/] };
			*uParam4 = (228.6353f - 18f);
			return 1;
			break;
		
		case 244:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.2762f, -1477.282f, 434.9171f) - Global_16543[iParam1 /*3*/] };
			*uParam4 = (228.6353f - -51f);
			return 1;
			break;
		
		case 249:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(103.1881f, 177.7729f, 288.977f) - Global_16543[iParam1 /*3*/] };
			*uParam4 = (68.9831f - (138f - 180f));
			return 1;
			break;
		
		case 273:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(32.7794f, -432.4635f, -161.4589f) - Global_16543[iParam1 /*3*/] };
			*uParam4 = (340.0368f - -153f);
			return 1;
			break;
		
		case 92:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(202.1143f, 828.3607f, -806.8813f) - Global_16543[iParam1 /*3*/] };
			*uParam4 = (101.1612f - -54.347f);
			return 1;
			break;
		
		case 103:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(12.0174f, -1108.081f, -1724.72f) - Global_16543[iParam1 /*3*/] };
			*uParam4 = (319.8931f - 143.4931f);
			return 1;
			break;
		
		case 109:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(10.2248f, -628.4899f, -1859.505f) - Global_16543[iParam1 /*3*/] };
			*uParam4 = (229.0784f - 99f);
			return 1;
			break;
		
		case 81:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(53.1469f, 90.4242f, -1393.442f) - Global_16543[iParam1 /*3*/] };
			*uParam4 = (123.1782f - -45f);
			return 1;
			break;
		
		case 95:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(101.921f, 186.1865f, 370.5876f) - Global_16543[iParam1 /*3*/] };
			*uParam4 = (159.7861f - 70f);
			return 1;
			break;
		
		case 97:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(45.9871f, -188.5636f, -1391.156f) - Global_16543[iParam1 /*3*/] };
			*uParam4 = (36.5172f - -45f);
			return 1;
			break;
		
		case 134:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(46.0567f, 3076.742f, 2001.918f) - Global_16543[iParam1 /*3*/] };
			*uParam4 = (328.101f - -33.128f);
			return 1;
			break;
		
		case 88:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(60.9442f, 314.7191f, -1421.821f) - Global_16543[iParam1 /*3*/] };
			*uParam4 = (336.5938f - -132f);
			return 1;
			break;
		
		case 306:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(37.4888f, 5643.726f, -569.3535f) - Global_16543[iParam1 /*3*/] };
			*uParam4 = (296.1685f - unk_0xFDC254CE02DB0919(7.4998f, -7.4995f));
			return 1;
			break;
		
		case 307:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(47.4526f, 4717.728f, -1555.593f) - Global_16543[iParam1 /*3*/] };
			*uParam4 = (236.223f - unk_0xFDC254CE02DB0919(-10.6345f, -0.7246f));
			return 1;
			break;
		
		case 308:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(22.7549f, 4629.148f, -1553.861f) - Global_16543[iParam1 /*3*/] };
			*uParam4 = (332.7842f - unk_0xFDC254CE02DB0919(3.4271f, 13.6787f));
			return 1;
			break;
		
		case 278:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(35.9161f, -1009.745f, 631.8275f) - Global_16543[iParam1 /*3*/] };
			*uParam4 = (98.8128f - -33.77f);
			return 1;
			break;
		
		case 279:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(234.6825f, 900.8749f, -111.9033f) - Global_16543[iParam1 /*3*/] };
			*uParam4 = (6.1087f - 155.68f);
			return 1;
			break;
		
		case 240:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(33.5351f, 3636.151f, 1546.323f) - Global_16543[iParam1 /*3*/] };
			*uParam4 = (298.4009f - -4.124f);
			return 1;
			break;
		
		case 241:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(30.512f, 6439.667f, -179.4242f) - Global_16543[iParam1 /*3*/] };
			*uParam4 = (225.5593f - 108f);
			return 1;
			break;
		
		case 264:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.2977f, -1390.545f, 486.7419f) - Global_16543[iParam1 /*3*/] };
			*uParam4 = (178.298f - -90f);
			return 1;
			break;
		
		case 266:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(10.5662f, 143.2342f, -3052.895f) - Global_16543[iParam1 /*3*/] };
			*uParam4 = (85.3429f - 68.8227f);
			return 1;
			break;
		
		case 267:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(39.9155f, 4934.08f, 2202.375f) - Global_16543[iParam1 /*3*/] };
			*uParam4 = (314.2654f - 56.2037f);
			return 1;
			break;
		
		case 269:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.149f, -782.0952f, 401.2502f) - Global_16543[iParam1 /*3*/] };
			*uParam4 = (179.9905f - -106.6605f);
			return 1;
			break;
		
		case 246:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(3.3919f, -1534.507f, -1195.256f) - Global_16543[iParam1 /*3*/] };
			*uParam4 = (305.8221f - -165f);
			return 1;
			break;
		
		case 263:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(12.8792f, -1241.213f, -573.3765f) - Global_16543[iParam1 /*3*/] };
			*uParam4 = (316.9941f - -171f);
			return 1;
			break;
		
		case 259:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(4.0002f, -1298.539f, -724.429f) - Global_16543[iParam1 /*3*/] };
			*uParam4 = (230.5715f - -32.488f);
			return 1;
			break;
		
		case 260:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(61.203f, 250.8387f, -1309.114f) - Global_16543[iParam1 /*3*/] };
			*uParam4 = (10.7756f - -29.093f);
			return 1;
			break;
		
		case 261:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(79.764f, 60.3233f, 917.6678f) - Global_16543[iParam1 /*3*/] };
			*uParam4 = (148.021f - 229.6085f);
			return 1;
			break;
		
		case 270:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { Vector(350f, 8588f, 2919f) - Global_16543[iParam1 /*3*/] };
			*uParam4 = unk_0x55AEFCD285ECC0F2(-180f, 180f);
			return 1;
			break;
		
		case 289:
			func_158(iParam0, uParam2, 0);
			*uParam3 = { -48.5171f, 28.4211f, 3.0057f };
			*uParam4 = -1.3831f;
			return 1;
			break;
	}
	return 0;
}

void func_157(int iParam0, var uParam1, int iParam2)//Position - 0xB44D
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

int func_158(int iParam0, var uParam1, int iParam2)//Position - 0xB6A9
{
	if (Global_16908[iParam0 /*98*/] == 0)
	{
		func_157(iParam0, uParam1, iParam2);
		uParam1->f_5B = iParam2;
		return 1;
	}
	if (Global_16908[iParam0 /*98*/] == joaat("blimp"))
	{
		func_157(iParam0, uParam1, iParam2);
		uParam1->f_5B = iParam2;
		return 1;
	}
	if (func_168(iParam0))
	{
		func_157(iParam0, uParam1, iParam2);
		uParam1->f_5B = iParam2;
		return 1;
	}
	if (unk_0xE7B3A320107C1379(Global_16908[iParam0 /*98*/]))
	{
		func_157(iParam0, uParam1, iParam2);
		uParam1->f_5B = iParam2;
		return 1;
	}
	if (unk_0xA19D269B4B5A1532(Global_16908[iParam0 /*98*/]))
	{
		func_157(iParam0, uParam1, iParam2);
		uParam1->f_5B = iParam2;
		return 1;
	}
	if (unk_0x8C1A6E7D5F410F4A(Global_16908[iParam0 /*98*/]))
	{
		func_157(iParam0, uParam1, iParam2);
		uParam1->f_5B = iParam2;
		return 1;
	}
	if (unk_0xFF2234981505F7F4(Global_16908[iParam0 /*98*/]))
	{
		func_157(iParam0, uParam1, iParam2);
		uParam1->f_5B = iParam2;
		return 1;
	}
	if (iParam2 == 1)
	{
		if (!unk_0x7C28D15641461C68(Global_16908[iParam0 /*98*/]))
		{
			func_157(iParam0, uParam1, iParam2);
			uParam1->f_5B = iParam2;
			return 1;
		}
	}
	else if (iParam2 == 2)
	{
		if (!unk_0x7512ED01F3F46714(Global_16908[iParam0 /*98*/]))
		{
			func_157(iParam0, uParam1, iParam2);
			uParam1->f_5B = iParam2;
			return 1;
		}
	}
	if (!func_159(Global_16908[iParam0 /*98*/], 0))
	{
		func_157(iParam0, uParam1, iParam2);
		uParam1->f_5B = iParam2;
		return 1;
	}
	if (iParam2 != 0)
	{
		func_157(iParam0, uParam1, iParam2);
		uParam1->f_5B = iParam2;
		if (Global_16908[iParam0 /*98*/] != *uParam1)
		{
			*uParam1 = { Global_16908[iParam0 /*98*/] };
			uParam1->f_5B = 0;
			return 0;
		}
	}
	else
	{
		func_157(iParam0, uParam1, 1);
		uParam1->f_5B = 1;
		if (Global_16908[iParam0 /*98*/] == *uParam1)
		{
			func_157(iParam0, uParam1, 1);
			uParam1->f_5B = 1;
			return 1;
		}
		func_157(iParam0, uParam1, 2);
		uParam1->f_5B = 2;
		if (Global_16908[iParam0 /*98*/] == *uParam1)
		{
			func_157(iParam0, uParam1, 2);
			uParam1->f_5B = 2;
			return 1;
		}
		*uParam1 = { Global_16908[iParam0 /*98*/] };
		uParam1->f_5B = 0;
		return 0;
	}
	func_157(iParam0, uParam1, iParam2);
	uParam1->f_5B = iParam2;
	return 1;
}

int func_159(int iParam0, bool bParam1)//Position - 0xB8E0
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
		if (!func_167())
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
		if ((((!func_166() && !func_165()) && !func_164()) && !func_163()) && !func_167())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xF49912B78E2591B6() || unk_0x8ACB0C3FACC09467()) || unk_0xF7E138CFA19B55E7())
		{
		}
		else if (!func_164())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_162(iParam0))
		{
			return 0;
		}
	}
	if (!func_160(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_160(int iParam0)//Position - 0xBA6E
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_161())
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

int func_161()//Position - 0xBB3A
{
	if (unk_0x8ACB0C3FACC09467())
	{
		return unk_0xC9D803F7D7E10861();
	}
	return 0;
}

int func_162(int iParam0)//Position - 0xBB51
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

int func_163()//Position - 0xD5F8
{
	return 0;
}

int func_164()//Position - 0xD601
{
	return 1;
}

int func_165()//Position - 0xD60A
{
	return 1;
}

int func_166()//Position - 0xD613
{
	if (unk_0x7B2F21BFE86AEB61(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_167()//Position - 0xD62C
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

int func_168(int iParam0)//Position - 0xD6E7
{
	if (Global_16908[iParam0 /*98*/] == joaat("blimp") || Global_16908[iParam0 /*98*/] == joaat("blimp2"))
	{
		return 1;
	}
	if (Global_16908[iParam0 /*98*/] == joaat("submersible") || Global_16908[iParam0 /*98*/] == joaat("submersible2"))
	{
		return 1;
	}
	if (Global_16908[iParam0 /*98*/] == joaat("freight"))
	{
		return 1;
	}
	if (Global_16908[iParam0 /*98*/] == joaat("packer"))
	{
		return 1;
	}
	if (Global_16908[iParam0 /*98*/] == joaat("asea2"))
	{
		return 1;
	}
	if (Global_16908[iParam0 /*98*/] == joaat("burrito2") || Global_16908[iParam0 /*98*/] == joaat("fbi2"))
	{
		return 1;
	}
	if (Global_16908[iParam0 /*98*/] == joaat("entityxf") && !Global_19B04.f_2360.f_14A[8 /*6*/])
	{
		return 1;
	}
	if (Global_16908[iParam0 /*98*/] == joaat("cheetah") && !Global_19B04.f_2360.f_14A[8 /*6*/])
	{
		return 1;
	}
	if (Global_16908[iParam0 /*98*/] == joaat("policeb") && !Global_19B04.f_2360.f_14A[8 /*6*/])
	{
		return 1;
	}
	if (Global_16908[iParam0 /*98*/] == joaat("ztype") && !Global_19B04.f_2360.f_14A[9 /*6*/])
	{
		return 1;
	}
	if (Global_16908[iParam0 /*98*/] == joaat("polmav") && !Global_19B04.f_2360.f_14A[9 /*6*/])
	{
		return 1;
	}
	if (Global_16908[iParam0 /*98*/] == joaat("jb700") && !Global_19B04.f_2360.f_14A[10 /*6*/])
	{
		return 1;
	}
	if (Global_16908[iParam0 /*98*/] == joaat("monroe") && !Global_19B04.f_2360.f_14A[11 /*6*/])
	{
		return 1;
	}
	if (Global_16908[iParam0 /*98*/] == 1938952078)
	{
		return 1;
	}
	if (Global_16908[iParam0 /*98*/] == joaat("handler"))
	{
		return 1;
	}
	if (Global_16908[iParam0 /*98*/] == joaat("monroe"))
	{
		return 1;
	}
	if (Global_16908[iParam0 /*98*/] == joaat("phantom"))
	{
		return 1;
	}
	if (((Global_16908[iParam0 /*98*/] == joaat("gauntlet") && !Global_19B04.f_2360.f_14A[80 /*6*/]) && !Global_19B04.f_2360.f_14A[81 /*6*/]) && !Global_19B04.f_2360.f_14A[82 /*6*/])
	{
		return 1;
	}
	return 0;
}

bool func_169(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0xD967
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_170(int iParam0, var uParam1, float fParam2)//Position - 0xD9AE
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*fParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { -90.0089f, -1324.195f, 28.3203f };
			*fParam2 = 194.1887f;
			return 1;
			break;
		
		case 9:
			return func_170(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_170(8, uParam1, fParam2);
			break;
		
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*fParam2 = 201.6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = { 1432.34f, -1887.383f, 70.5768f };
			*fParam2 = 350.0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = { 1666.204f, 1967.25f, 143.3213f };
			*fParam2 = 0.7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*fParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = { 135.055f, -1759.64f, 27.8957f };
			*fParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = { 687.6992f, -1744.03f, 28.3624f };
			*fParam2 = 267.1409f;
			return 1;
			break;
		
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*fParam2 = 340.0526f;
			return 1;
			break;
		
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*fParam2 = 22.9566f;
			return 1;
			break;
		
		case 20:
			*uParam1 = { 1555.958f, 953.6136f, 77.2063f };
			*fParam2 = 152.8118f;
			return 1;
			break;
		
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*fParam2 = (250.4535f - 360f);
			return 1;
			break;
		
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*fParam2 = 119.603f;
			return 1;
			break;
		
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*fParam2 = 168f;
			return 1;
			break;
		
		case 24:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*fParam2 = 51.7279f;
			return 1;
			break;
		
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*fParam2 = 151.2504f;
			return 1;
			break;
		
		case 25:
			*uParam1 = { 72.2278f, -1464.68f, 28.2915f };
			*fParam2 = 156.8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*fParam2 = 7.2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = { 257.9167f, -1120.786f, 28.3684f };
			*fParam2 = 97.2736f;
			return 1;
			break;
		
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*fParam2 = 4f;
			return 1;
			break;
		
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*fParam2 = 162.693f;
			return 1;
			break;
		
		case 59:
			*uParam1 = { -1771.802f, 794.4316f, 138.4211f };
			*fParam2 = 128.9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = { 1495.595f, -1848.821f, 70.2075f };
			*fParam2 = 32.2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = { 2897.554f, 4032.241f, 50.1419f };
			*fParam2 = 192.8091f;
			return 1;
			break;
		
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*fParam2 = -3.7534f;
			return 1;
			break;
		
		case 42:
			*uParam1 = { Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = { 709.0244f, -2916.479f, 5.0589f };
			*fParam2 = 355.326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*fParam2 = 334.1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = { 595.2742f, -2819.183f, 5.0559f };
			*fParam2 = 46.8853f;
			return 1;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*fParam2 = 165.9421f;
			return 1;
			break;
		
		case 49:
			*uParam1 = { 3321.537f, 4975.455f, 25.9097f };
			*fParam2 = 221.228f;
			return 1;
			break;
		
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*fParam2 = (42f + 180f);
			return 1;
			break;
		
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*fParam2 = 98.9764f;
			return 1;
			break;
		
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*fParam2 = 220.9554f;
			return 1;
			break;
		
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*fParam2 = 83.9922f;
			return 1;
			break;
		
		case 66:
			*uParam1 = { 262.5499f, -2540.15f, 4.8433f };
			*fParam2 = -64.1366f;
			return 1;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*fParam2 = 127.7547f;
			return 1;
			break;
		
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*fParam2 = -63f;
			return 1;
			break;
		
		case 57:
			*uParam1 = { 37.5988f, -1351.52f, 28.2954f };
			*fParam2 = 90.0339f;
			return 1;
			break;
		
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*fParam2 = 84.6231f;
			return 1;
			break;
		
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*fParam2 = 99.6049f;
			return 1;
			break;
		
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*fParam2 = 120f;
			return 1;
			break;
		
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*fParam2 = 211.8223f;
			return 1;
			break;
		
		case 64:
			*uParam1 = { 2091.258f, 4714.852f, 40.1936f };
			*fParam2 = 136.0867f;
			return 1;
			break;
		
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

var func_171()//Position - 0xE31D
{
	var uVar0;
	
	func_181(&uVar0, unk_0xF40D00CD7B81C0A8());
	func_180(&uVar0, unk_0x7E09057438B9D216());
	func_179(&uVar0, unk_0x6E06C0DB9B43570D());
	func_174(&uVar0, unk_0xBE14F159908E4EE5());
	func_173(&uVar0, unk_0xDD6A91E47ED4D0CF());
	func_172(&uVar0, unk_0x4EEB3860BFC44B78());
	return uVar0;
}

void func_172(var uParam0, int iParam1)//Position - 0xE363
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

void func_173(var uParam0, int iParam1)//Position - 0xE3E9
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_174(var uParam0, int iParam1)//Position - 0xE41C
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_178(*uParam0);
	iVar1 = func_176(*uParam0);
	if (iParam1 < 1 || iParam1 > func_175(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_175(int iParam0, int iParam1)//Position - 0xE46D
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

var func_176(int iParam0)//Position - 0xE50F
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_177(unk_0xFA30DFD0084E92FE(iParam0, 31), -1, 1)) + 2011;
}

int func_177(bool bParam0, int iParam1, int iParam2)//Position - 0xE534
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_178(var uParam0)//Position - 0xE54B
{
	return uParam0 & 15;
}

void func_179(var uParam0, int iParam1)//Position - 0xE558
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_180(var uParam0, int iParam1)//Position - 0xE592
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_181(var uParam0, int iParam1)//Position - 0xE5CD
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

void func_182(var uParam0, int iParam1)//Position - 0xE609
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar3;
	
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_19B04.f_4848[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !unk_0xFA30DFD0084E92FE(Global_19B04.f_2360.f_63.f_DB[0], 9))
		{
		}
		else
		{
			vVar2 = { 0f, 0f, 0f };
			fVar3 = 0f;
			if (!func_170(Global_19B04.f_4848[iVar0], &vVar2, &fVar3))
			{
				Global_19B04.f_4848[iVar0] = 318;
				func_183(&(uParam0->f_8E4[iVar0]));
				uParam0->f_8E8[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_8F2[iVar0] = 0f;
				uParam0->f_8F6[iVar0] = 0;
				uParam0->f_8FA[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_904[iVar0] = 0;
				Global_1617A[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_1617A[iVar0 /*29*/].f_9 = 0f;
				Global_1617A[iVar0 /*29*/].f_C = 0f;
				Global_1617A[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_1617A[iVar0 /*29*/].f_A = 0f;
				Global_1617A[iVar0 /*29*/].f_D = 0f;
				Global_1617A[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_1617A[iVar0 /*29*/].f_B = 0f;
				Global_1617A[iVar0 /*29*/].f_E = 0f;
				Global_1617A[iVar0 /*29*/].f_11 = { 0f, 0f, 0f };
				Global_1617A[iVar0 /*29*/].f_1A = 0f;
				Global_1617A[iVar0 /*29*/].f_14 = { 0f, 0f, 0f };
				Global_1617A[iVar0 /*29*/].f_1B = 0f;
				Global_1617A[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_1617A[iVar0 /*29*/].f_1C = 0f;
			}
		}
		iVar0++;
	}
}

void func_183(var uParam0)//Position - 0xE7D2
{
	*uParam0 = -15;
}

int func_184()//Position - 0xE7E0
{
	if (func_110(0))
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

void func_185(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)//Position - 0xE82B
{
	if (bParam0)
	{
		unk_0x0D2E9062E966BE4F(unk_0xB5CEFD608600A09F());
		unk_0x8D554ED10E00EEE3(unk_0xB5CEFD608600A09F(), 1);
		unk_0xDE255B32C6B37E90(unk_0xB5CEFD608600A09F(), 1);
		func_193(1);
		unk_0x32FF237D69EB5489();
		unk_0x3169E2C5E6A096BC();
		if (Global_389D.f_1 > 3)
		{
			if (unk_0x58E7DDFF8D17A82A())
			{
				unk_0x1E08809A5041F85B(false);
			}
			if (!func_74())
			{
				Global_389D.f_1 = 3;
			}
			Global_3DB8 = 5;
		}
		func_192(1, iParam3, iParam2, 0);
		Global_DAA5 = 1;
		Global_10ABB = 1;
		Global_11540 = 1;
	}
	else
	{
		func_193(0);
		unk_0xCB50D125C355ED9C();
		Global_DAA5 = 0;
		if (bParam1)
		{
			unk_0x7FF4F08CAB3344B1();
		}
		unk_0x8D554ED10E00EEE3(unk_0xB5CEFD608600A09F(), 0);
		unk_0xDE255B32C6B37E90(unk_0xB5CEFD608600A09F(), 0);
		func_192(0, iParam3, iParam2, 0);
		if (unk_0x7AF0088ABFA713B6())
		{
			if ((((!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && !func_190(unk_0xB5CEFD608600A09F())) && !func_187(unk_0xB5CEFD608600A09F(), 0)) && !func_186()) && !bParam4)
			{
				unk_0x1E5C2A1EAB944289(unk_0xBC25C936A095B5BA(), false);
			}
		}
		else if ((!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && !func_190(unk_0xB5CEFD608600A09F())) && !bParam4)
		{
			unk_0x1E5C2A1EAB944289(unk_0xBC25C936A095B5BA(), false);
		}
		Global_11540 = 0;
	}
}

bool func_186()//Position - 0xE954
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_27.f_12, 14);
}

bool func_187(int iParam0, int iParam1)//Position - 0xE971
{
	bool bVar0;
	
	if (iParam0 == unk_0xB5CEFD608600A09F())
	{
		bVar0 = func_188(-1, 0) == 8;
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

int func_188(int iParam0, bool bParam1)//Position - 0xE9BC
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_189();
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

int func_189()//Position - 0xE9FD
{
	return Global_1407E0;
}

int func_190(int iParam0)//Position - 0xEA09
{
	if (func_187(iParam0, 0))
	{
		return 1;
	}
	if (func_191())
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

bool func_191()//Position - 0xEA4B
{
	return unk_0xFA30DFD0084E92FE(Global_240006, 3);
}

int func_192(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xEA5C
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x8ACB0C3FACC09467())
	{
		if (unk_0xB34A6828EBD4A1D8() != iParam0 && iParam2)
		{
			unk_0x22506029183A78EC(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_193(int iParam0)//Position - 0xEA8F
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

void func_194()//Position - 0xEAB2
{
	unk_0x9571345062496DCC(-1747852954);
	if (func_221(16))
	{
		if (!func_110(0))
		{
			if (!unk_0xFA30DFD0084E92FE(iLocal_41, 10))
			{
				unk_0x04DD7A558FCF2C34("JH_1_MCS_4_P1_ALT1", 8);
				func_202();
				func_107(0, 0, 1);
				iLocal_249 = unk_0x1DAA351326EA3537(Local_46.f_1.f_18A - Local_46.f_1.f_18D, Local_46.f_1.f_18A + Local_46.f_1.f_18D, 0, 1, 1, 1);
				iLocal_254 = unk_0x3F15B158E03C72E5(Local_46.f_1.f_18A, Local_46.f_1.f_18D * Vector(1.5f, 1.5f, 1.5f), 0f, 0, 7);
				unk_0xF16F7C45E0B1B52B(Local_46.f_1.f_18A - Local_46.f_1.f_18D, Local_46.f_1.f_18A + Local_46.f_1.f_18D);
				unk_0x4BDC021CD4295F17(Local_46.f_1.f_18A - Local_46.f_1.f_18D, Local_46.f_1.f_18A + Local_46.f_1.f_18D, false, 0);
				unk_0xF0059F27F7BB6680(&iLocal_41, 10);
			}
			else if (unk_0xA5A42DEC1470C5A9())
			{
				unk_0x5B2777A27D4C30AE("LESTER", 1, 0, 0, 0);
			}
			if (func_149(86))
			{
				if (!unk_0xFA30DFD0084E92FE(iLocal_41, 1))
				{
					if (func_143(0))
					{
						if (func_199(&iLocal_45, 0, 0, 0, 0) == 1)
						{
							func_192(1, 0, 1, 0);
							if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
							{
								unk_0xA98B19EC1C93FC3C(unk_0xB5CEFD608600A09F());
								unk_0xAEC867D0DBB7AFEB(0);
							}
							unk_0xF0059F27F7BB6680(&iLocal_41, 1);
							unk_0xF0059F27F7BB6680(&iLocal_41, 2);
						}
					}
				}
			}
			if (unk_0xFA30DFD0084E92FE(iLocal_41, 2))
			{
				switch (iLocal_42)
				{
					case 0:
						if (unk_0xEF0E25DA0CB6E8FF(iLocal_250))
						{
							unk_0x4EC087603E1DEF9C(iLocal_250, 0);
						}
						if (unk_0xEF0E25DA0CB6E8FF(iLocal_251))
						{
							unk_0x4EC087603E1DEF9C(iLocal_251, 0);
						}
						iLocal_250 = unk_0x585DE1CBEEB2D27D(26379945, 724.4682f, -992.0684f, 24.25137f, 5.259225f, 0.000715f, 25.88918f, 44.13121f, 0, 2);
						iLocal_251 = unk_0x585DE1CBEEB2D27D(26379945, 724.3727f, -991.3205f, 24.43304f, 31.49925f, 0.000715f, -4.206256f, 44.13121f, 0, 2);
						if (unk_0x724D816EA203A79E(Global_15DFD.f_9[0]))
						{
							if (!unk_0x1D403DFADBC2DE3C(Global_15DFD.f_9[0], 0))
							{
								iLocal_245 = Global_15DFD.f_9[0];
								unk_0x77815D3407C6700D(iLocal_245, false, 1);
							}
						}
						if (unk_0x724D816EA203A79E(Global_15DFD[0]))
						{
							if (!unk_0x1D403DFADBC2DE3C(Global_15DFD[0], 0))
							{
								iLocal_247 = Global_15DFD[0];
							}
						}
						iLocal_42++;
						break;
					
					case 1:
						func_185(1, 1, 0, 0, 0);
						unk_0x43F06392C4EF25E0(false);
						unk_0x59B038076F830627(false);
						if (unk_0x724D816EA203A79E(iLocal_247))
						{
							if (unk_0xE59B7F5A03335350(iLocal_247, 0))
							{
								unk_0xA65BD9EDFDFA4D71(iLocal_250, iLocal_247, 0f, 0f, 0f, 1);
							}
						}
						unk_0xAE099C1ADC89C331(iLocal_251, iLocal_250, 5000, 1, 1);
						unk_0x062C9995BFD27B2A(true, false, 3000, 1, 0, 0);
						iLocal_43 = unk_0x105601648511CC64();
						iLocal_42++;
						break;
					
					case 2:
						if ((unk_0x105601648511CC64() - iLocal_43) > 1200)
						{
							if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
							{
								if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
								{
									if (unk_0xE59B7F5A03335350(iLocal_247, 0))
									{
										if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_247, 0))
										{
											unk_0xC5A6DFE2B8987B17(&iLocal_252);
											unk_0x932E201A82D2EDB8(0, iLocal_247, 0);
											unk_0x346129B364057FF6(0, 718.1777f, -976.126f, 23.9148f, 1f, 20000, 1048576000, 0, 1193033728);
											unk_0x535008C596714F9E(iLocal_252);
											unk_0xA4E856A8CD53B8DF(unk_0xBC25C936A095B5BA());
											unk_0xA8E6405305C0D7DF(unk_0xBC25C936A095B5BA(), iLocal_252);
										}
									}
								}
							}
							iLocal_42++;
						}
						break;
					
					case 3:
						if ((unk_0x105601648511CC64() - iLocal_43) > 2400)
						{
							if (!unk_0x1D403DFADBC2DE3C(iLocal_245, 0))
							{
								if (unk_0x724D816EA203A79E(iLocal_247))
								{
									if (unk_0xE59B7F5A03335350(iLocal_247, 0))
									{
										if (unk_0x62F3A07C43FFB568(iLocal_245, iLocal_247, 0))
										{
											unk_0xC5A6DFE2B8987B17(&iLocal_253);
											unk_0x932E201A82D2EDB8(0, iLocal_247, 0);
											unk_0x346129B364057FF6(0, 718.1777f, -976.126f, 23.9148f, 1f, 20000, 1048576000, 0, 1193033728);
											unk_0x535008C596714F9E(iLocal_253);
											unk_0xA4E856A8CD53B8DF(iLocal_245);
											unk_0xA8E6405305C0D7DF(iLocal_245, iLocal_253);
										}
									}
								}
							}
							iLocal_42++;
						}
						break;
					
					case 4:
						if ((unk_0x105601648511CC64() - iLocal_43) > 5000)
						{
							unk_0x7CB6FD92BE491AD9(&iLocal_41, 2);
						}
						break;
					}
			}
			if (unk_0xFA30DFD0084E92FE(iLocal_41, 1) && !unk_0xFA30DFD0084E92FE(iLocal_41, 2))
			{
				if (unk_0x30F17D4B59B81517("JH_1_MCS_4_P1_ALT1"))
				{
					if (!unk_0x866EAD7E27D8D0F8())
					{
						iLocal_246 = unk_0xBC25C936A095B5BA();
						if (!unk_0x1D403DFADBC2DE3C(iLocal_246, 0))
						{
							unk_0x538BB037E00A3AD9(iLocal_246, "Michael", 0, joaat("player_zero"), 0);
						}
						if (!unk_0x1D403DFADBC2DE3C(iLocal_245, 0))
						{
							unk_0x538BB037E00A3AD9(iLocal_245, "Lester", 2, joaat("ig_lestercrest"), 0);
						}
						unk_0xF0059F27F7BB6680(&iLocal_41, 9);
						unk_0x538BB037E00A3AD9(iLocal_248, "WalkingStick_Lester", 2, joaat("prop_cs_walking_stick"), 0);
						unk_0xF0059F27F7BB6680(&iLocal_41, 8);
						func_198(&(Local_46.f_1E4), 0, 0, "MICHAEL", 1, 1);
						func_198(&(Local_46.f_1E4), 3, 0, "LESTER", 1, 1);
						func_72(1);
						iLocal_43 = unk_0x105601648511CC64();
						unk_0x93B1CB6BD50812C7(2048);
					}
					else
					{
						func_113();
						if (!unk_0xFA30DFD0084E92FE(iLocal_41, 17))
						{
							if (!unk_0x726D9204B160D23E() && !unk_0x26641E1BFD792DBC())
							{
								unk_0x829FA4611BD56B44(800);
							}
							unk_0xF0059F27F7BB6680(&iLocal_41, 17);
						}
						if (unk_0xF32C50C7B7BC9264())
						{
							unk_0xF0059F27F7BB6680(&iLocal_41, 16);
						}
						if (unk_0xFA30DFD0084E92FE(iLocal_41, 16))
						{
							if (unk_0x17FAADF9916EF741())
							{
								if (!unk_0xFA30DFD0084E92FE(iLocal_41, 12))
								{
									func_107(0, 1, 1);
									unk_0xF0059F27F7BB6680(&iLocal_41, 12);
								}
								if (!unk_0xFA30DFD0084E92FE(iLocal_41, 13))
								{
									func_107(0, 2, 1);
									unk_0xF0059F27F7BB6680(&iLocal_41, 13);
								}
								if (!unk_0xFA30DFD0084E92FE(iLocal_41, 14))
								{
									func_107(0, 3, 1);
									unk_0xF0059F27F7BB6680(&iLocal_41, 14);
								}
								if (!unk_0xFA30DFD0084E92FE(iLocal_41, 15))
								{
									func_107(0, 4, 1);
									unk_0xF0059F27F7BB6680(&iLocal_41, 15);
								}
								func_196(&Local_46);
								if (!unk_0xFA30DFD0084E92FE(iLocal_41, 0))
								{
									func_195();
									unk_0xF0059F27F7BB6680(&iLocal_41, 0);
								}
							}
						}
						if (!unk_0xFA30DFD0084E92FE(iLocal_41, 5))
						{
							if (unk_0xEF0E25DA0CB6E8FF(iLocal_250))
							{
								unk_0x348665177DBFB93B(iLocal_250, false);
							}
							if (unk_0xEF0E25DA0CB6E8FF(iLocal_251))
							{
								unk_0x348665177DBFB93B(iLocal_251, false);
							}
							unk_0x062C9995BFD27B2A(false, false, 3000, 1, 0, 0);
							if (unk_0xEF0E25DA0CB6E8FF(iLocal_251))
							{
								unk_0x4EC087603E1DEF9C(iLocal_251, 0);
							}
							if (unk_0xEF0E25DA0CB6E8FF(iLocal_251))
							{
								unk_0x4EC087603E1DEF9C(iLocal_251, 0);
							}
							if (unk_0x724D816EA203A79E(iLocal_245))
							{
								unk_0xF845620A03C7425B(&iLocal_245);
							}
							unk_0xF0059F27F7BB6680(&iLocal_41, 5);
						}
						if (!unk_0xFA30DFD0084E92FE(iLocal_41, 6))
						{
							if (iLocal_44 > 0)
							{
								unk_0xF0059F27F7BB6680(&iLocal_41, 6);
							}
						}
						if (!unk_0xFA30DFD0084E92FE(iLocal_41, 12))
						{
							if ((unk_0x105601648511CC64() - iLocal_43) > 14058)
							{
								func_107(0, 1, 1);
								unk_0xF0059F27F7BB6680(&iLocal_41, 12);
							}
						}
						else if (!unk_0xFA30DFD0084E92FE(iLocal_41, 13))
						{
							if ((unk_0x105601648511CC64() - iLocal_43) > 22887)
							{
								func_107(0, 2, 1);
								unk_0xF0059F27F7BB6680(&iLocal_41, 13);
							}
						}
						else if (!unk_0xFA30DFD0084E92FE(iLocal_41, 14))
						{
							if ((unk_0x105601648511CC64() - iLocal_43) > 27988)
							{
								func_107(0, 3, 1);
								func_196(&Local_46);
								unk_0xF0059F27F7BB6680(&iLocal_41, 14);
							}
						}
						else if (!unk_0xFA30DFD0084E92FE(iLocal_41, 15))
						{
							if ((unk_0x105601648511CC64() - iLocal_43) > 42084)
							{
								func_107(0, 4, 1);
								unk_0xF0059F27F7BB6680(&iLocal_41, 15);
							}
						}
						if (unk_0xFA30DFD0084E92FE(iLocal_41, 8))
						{
							if (unk_0x724D816EA203A79E(unk_0x95E040A13E9940DC("WalkingStick_Lester", joaat("prop_cs_walking_stick"))))
							{
								iLocal_248 = unk_0x0EC4BFD5C83D125E(unk_0x95E040A13E9940DC("WalkingStick_Lester", joaat("prop_cs_walking_stick")));
								unk_0x7CB6FD92BE491AD9(&iLocal_41, 8);
							}
						}
						if (unk_0xFA30DFD0084E92FE(iLocal_41, 9))
						{
							if (unk_0x724D816EA203A79E(unk_0x95E040A13E9940DC("Lester", joaat("ig_lestercrest"))))
							{
								iLocal_245 = unk_0x399F7937FFE4DEBF(unk_0x95E040A13E9940DC("Lester", joaat("ig_lestercrest")));
								unk_0x7CB6FD92BE491AD9(&iLocal_41, 9);
							}
						}
						if (unk_0x3F3252765FE36DA8("Michael", 0))
						{
							if (!unk_0x1D403DFADBC2DE3C(iLocal_246, 0))
							{
								unk_0x2E35C4FA5F0ED22F(iLocal_246, true);
								unk_0xC8FD3EBBB90E8D7F(iLocal_246, 208, true);
								unk_0xC8FD3EBBB90E8D7F(iLocal_246, 118, false);
								unk_0xC8FD3EBBB90E8D7F(iLocal_246, 213, false);
								unk_0xDF14F570C0180463(iLocal_246, 708.8129f, -966.3621f, 29.3956f, 1f, 20000, 1193033728, 0.5f);
							}
						}
						if (unk_0x3F3252765FE36DA8("Lester", 0))
						{
							if (!unk_0x1D403DFADBC2DE3C(iLocal_245, 0))
							{
								if (unk_0x724D816EA203A79E(iLocal_248))
								{
									unk_0x5DBE04849460E608(iLocal_248, iLocal_245, unk_0xFA18E720A39243D0(iLocal_245, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
								}
							}
							if (!unk_0x1D403DFADBC2DE3C(iLocal_245, 0))
							{
								unk_0x2E35C4FA5F0ED22F(iLocal_245, true);
								unk_0xC8FD3EBBB90E8D7F(iLocal_245, 208, true);
								unk_0xC8FD3EBBB90E8D7F(iLocal_245, 118, false);
								unk_0xC8FD3EBBB90E8D7F(iLocal_245, 213, false);
								unk_0xDF14F570C0180463(iLocal_245, 708.3643f, -963.9194f, 29.4181f, 1f, 20000, 1193033728, 0.5f);
							}
						}
						if (unk_0x4B088956DA856645(0))
						{
							if (!unk_0xFA30DFD0084E92FE(iLocal_41, 0))
							{
								func_195();
								unk_0xF0059F27F7BB6680(&iLocal_41, 0);
							}
							if (!unk_0xFA30DFD0084E92FE(iLocal_41, 7))
							{
								if (!unk_0x1D403DFADBC2DE3C(iLocal_246, 0))
								{
									unk_0xDC078F87049ECECE(iLocal_246, false, 0);
								}
								if (!unk_0x1D403DFADBC2DE3C(iLocal_245, 0))
								{
									unk_0xDC078F87049ECECE(iLocal_245, false, 0);
								}
								if (unk_0x724D816EA203A79E(iLocal_248))
								{
									unk_0xDC078F87049ECECE(iLocal_248, false, 0);
								}
								unk_0xF0059F27F7BB6680(&iLocal_41, 7);
							}
							func_106(16, 0);
						}
						iLocal_44++;
					}
				}
			}
		}
		else
		{
			func_198(&(Local_46.f_1E4), 0, 0, "MICHAEL", 1, 1);
			func_198(&(Local_46.f_1E4), 3, 0, "LESTER", 1, 1);
			if (func_143(0))
			{
				if (func_199(&iLocal_45, 0, 0, 0, 0) == 1)
				{
					unk_0xF0059F27F7BB6680(&iLocal_41, 1);
				}
			}
			if (unk_0xFA30DFD0084E92FE(iLocal_41, 1))
			{
				func_195();
				func_106(16, 0);
			}
		}
	}
	else
	{
		if (unk_0x30F17D4B59B81517("JH_1_MCS_4_P1_ALT1"))
		{
			unk_0xD103510B8989BEB2();
		}
		if (unk_0xFA30DFD0084E92FE(iLocal_41, 10))
		{
			unk_0x7CB6FD92BE491AD9(&iLocal_41, 10);
		}
	}
}

void func_195()//Position - 0xF415
{
	func_83(1, 0, 1);
	func_83(2, 0, 1);
	func_203(&Local_46);
	func_67(&Local_46);
}

void func_196(var uParam0)//Position - 0xF437
{
	if (unk_0xFA30DFD0084E92FE(uParam0->f_1C1, 1))
	{
		if (!unk_0x866EAD7E27D8D0F8())
		{
			if (unk_0xFA30DFD0084E92FE(uParam0->f_1C1, 2))
			{
				func_69(uParam0, 0);
			}
		}
		func_197(uParam0);
		unk_0x7CB6FD92BE491AD9(&(uParam0->f_1C1), 1);
		unk_0x7CB6FD92BE491AD9(&Global_15C15, *uParam0);
	}
}

void func_197(var uParam0)//Position - 0xF483
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_1.f_21)
	{
		if (unk_0x724D816EA203A79E(uParam0->f_1AC[iVar0]))
		{
			unk_0xA35241BCE4C1A24B(&(uParam0->f_1AC[iVar0]));
		}
		iVar0++;
	}
}

void func_198(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0xF4BF
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

int func_199(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0xF55A
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_161D2.f_2C == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_201(0))
		{
			return 0;
		}
		Global_8C1D++;
		*iParam0 = Global_8C1D;
		unk_0x3D7FF8418367D451(unk_0xFC1CAE18F3ECBF2D(), 0);
		Global_4336.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x27CBA62D1F6DF074(8);
		}
		Global_8C41 = iParam2;
		Global_8C1B = *iParam0;
		Global_8C1C = iParam4;
		Global_8C1A = 0;
		return 1;
	}
	if (*iParam0 != -1)
	{
		if (Global_8C1A > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_8C1A)
			{
				if (Global_8C20[iVar0 /*4*/] == *iParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_8C1B == *iParam0)
		{
			return 1;
		}
		*iParam0 = -1;
	}
	if (*iParam0 == -1)
	{
		if (!func_143(iParam2))
		{
			return 0;
		}
		if (Global_8C1A == 8)
		{
			return 0;
		}
		Global_8C1D++;
		*iParam0 = Global_8C1D;
		Global_8C20[Global_8C1A /*4*/] = Global_8C1D;
		Global_8C20[Global_8C1A /*4*/].f_1 = iParam1;
		Global_8C20[Global_8C1A /*4*/].f_2 = iParam2;
		Global_8C20[Global_8C1A /*4*/].f_3 = 0;
		Global_8C1A++;
		if (iParam4 != 0)
		{
			func_200(iParam0, iParam4);
		}
	}
	return 2;
}

void func_200(var uParam0, int iParam1)//Position - 0xF691
{
	int iVar0;
	
	if (Global_8C1A == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_8C1A)
	{
		if (Global_8C20[iVar0 /*4*/] == *uParam0)
		{
			Global_8C20[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

int func_201(int iParam0)//Position - 0xF6E0
{
	if (Global_8C41 == 15)
	{
		return 0;
	}
	if (func_143(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_202()//Position - 0xF702
{
	Global_16B42 = 1;
}

void func_203(var uParam0)//Position - 0xF70F
{
	if (func_10(2, *uParam0))
	{
		if (unk_0xFA30DFD0084E92FE(uParam0->f_1C1, 1))
		{
			if (unk_0xFA30DFD0084E92FE(uParam0->f_1C1, 2))
			{
				func_69(uParam0, func_204(*uParam0));
				func_83(2, *uParam0, 0);
			}
			else
			{
				func_115(uParam0);
				func_83(2, *uParam0, 0);
			}
		}
	}
}

int func_204(int iParam0)//Position - 0xF764
{
	switch (iParam0)
	{
		case 0:
			return func_221(18);
			break;
		
		case 1:
			return func_221(22);
			break;
		
		case 2:
			return func_221(40);
			break;
		
		case 3:
			return func_221(8);
			break;
		
		case 4:
			return func_221(26);
			break;
		
		default:
			break;
	}
	return 0;
}

int func_205()//Position - 0xF7D1
{
	return Global_11648;
}

int func_206(var uParam0)//Position - 0xF7DD
{
	if (unk_0xFA30DFD0084E92FE(uParam0->f_1C1, 1))
	{
		func_196(uParam0);
	}
	if (unk_0xFA30DFD0084E92FE(uParam0->f_1C1, 0))
	{
		func_207(uParam0);
	}
	return 1;
}

void func_207(var uParam0)//Position - 0xF80C
{
	unk_0xDA70546257A3ED8B("HEIST_BULLETIN_BOARD");
	unk_0x2CA123B0622F495C(joaat("prop_ld_planning_pin_01"));
	unk_0x2CA123B0622F495C(joaat("prop_ld_planning_pin_02"));
	unk_0x2CA123B0622F495C(joaat("prop_ld_planning_pin_03"));
	if (uParam0->f_19D != 0)
	{
		unk_0xB0B0FE33F4F22679(&(uParam0->f_19D));
	}
	if (uParam0->f_19E != 0)
	{
		unk_0xB0B0FE33F4F22679(&(uParam0->f_19E));
	}
	unk_0x841D233D3CE81152(5, false);
	unk_0x7CB6FD92BE491AD9(&Global_15C16, *uParam0);
	unk_0x7CB6FD92BE491AD9(&(uParam0->f_1C1), 0);
}

void func_208(var uParam0, float fParam1, float fParam2)//Position - 0xF876
{
	float fVar0;
	
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		fVar0 = SYSTEM::VDIST2(uParam0->f_191, unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true));
		if (unk_0xFA30DFD0084E92FE(uParam0->f_1C1, 1))
		{
			func_216(uParam0);
		}
		else if (fVar0 < (fParam1 * fParam1) || unk_0xFA30DFD0084E92FE(Global_15C15, *uParam0))
		{
			if (unk_0xFA30DFD0084E92FE(uParam0->f_1C1, 0))
			{
				if (func_215(uParam0))
				{
					if (unk_0xFA30DFD0084E92FE(Global_15C15, *uParam0))
					{
						if (unk_0xFA30DFD0084E92FE(Global_15C17, *uParam0))
						{
							func_210(uParam0);
						}
					}
					else
					{
						func_210(uParam0);
					}
				}
			}
			else
			{
				func_209(uParam0);
			}
		}
		if (fVar0 > (fParam2 * fParam2) && !unk_0xFA30DFD0084E92FE(Global_15C15, *uParam0))
		{
			if (unk_0xFA30DFD0084E92FE(uParam0->f_1C1, 0))
			{
				if (unk_0xFA30DFD0084E92FE(uParam0->f_1C1, 1))
				{
					func_196(uParam0);
				}
				func_207(uParam0);
			}
		}
	}
}

void func_209(var uParam0)//Position - 0xF95F
{
	if (!unk_0x0D5B5D9ECF3081DD())
	{
		return;
	}
	unk_0x900CF084251DED26(&(uParam0->f_1.f_110), 5);
	unk_0x284F2ACE6839D3C0("HEIST_BULLETIN_BOARD", false, -1);
	if (*uParam0 != 1)
	{
		unk_0xF243B7A14FCFD0F4(joaat("prop_ld_planning_pin_01"));
		unk_0xF243B7A14FCFD0F4(joaat("prop_ld_planning_pin_02"));
		unk_0xF243B7A14FCFD0F4(joaat("prop_ld_planning_pin_03"));
	}
	uParam0->f_19D = unk_0x4B4A22319BB70CD6(&(uParam0->f_1.f_10C));
	uParam0->f_19E = unk_0x4B4A22319BB70CD6("INSTRUCTIONAL_BUTTONS");
	unk_0xF0059F27F7BB6680(&Global_15C14, *uParam0);
	unk_0xF0059F27F7BB6680(&(uParam0->f_1C1), 0);
}

void func_210(var uParam0)//Position - 0xF9DD
{
	int iVar0;
	
	if (!unk_0xFA30DFD0084E92FE(uParam0->f_1C1, 1))
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_1.f_60)
		{
			func_36(uParam0, iVar0);
			iVar0++;
		}
		func_33(uParam0);
		func_31(uParam0);
		func_214(uParam0);
		func_213(uParam0);
		func_211(uParam0);
		unk_0xF0059F27F7BB6680(&(uParam0->f_1C1), 1);
	}
}

void func_211(var uParam0)//Position - 0xFA3A
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	vector3 vVar4;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_1.f_21)
	{
		if (func_32(*uParam0, uParam0->f_1.f_4B[iVar0]))
		{
			switch ((iVar0 % 3))
			{
				case 0:
					iVar1 = joaat("prop_ld_planning_pin_01");
					break;
				
				case 1:
					iVar1 = joaat("prop_ld_planning_pin_02");
					break;
				
				case 2:
					iVar1 = joaat("prop_ld_planning_pin_03");
					break;
			}
			fVar2 = (SYSTEM::TO_FLOAT((unk_0x491B2241281A03B7(0, 65535) - 32767)) / 4000f);
			fVar3 = (SYSTEM::TO_FLOAT((unk_0x491B2241281A03B7(0, 65535) - 32767)) / 4000f);
			vVar4 = { func_212(uParam0, &(uParam0->f_1.f_22[iVar0 /*2*/])) };
			uParam0->f_1AC[iVar0] = unk_0xB6896943DA475493(iVar1, vVar4, true, true, false);
			unk_0x784C605D172817C8(uParam0->f_1AC[iVar0], fVar2, 0f, (uParam0->f_194 + fVar3), 2, 1);
			unk_0x77815D3407C6700D(uParam0->f_1AC[iVar0], true, 0);
			unk_0x1E5C2A1EAB944289(uParam0->f_1AC[iVar0], true);
			unk_0xD434A01DEA38A939(uParam0->f_1AC[iVar0], false, 0);
			unk_0x67621132C2EEAC18(uParam0->f_1AC[iVar0], 0);
			unk_0x346478B12F69D4E3(uParam0->f_1AC[iVar0], true);
		}
		iVar0++;
	}
	unk_0x7CB6FD92BE491AD9(&Global_15C17, *uParam0);
}

Vector3 func_212(var uParam0, var uParam1)//Position - 0xFB6F
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	
	fVar0 = uParam0->f_1.f_4;
	fVar1 = uParam0->f_1.f_5;
	func_28(uParam0, uParam1, &fVar2, &fVar3);
	fVar4 = (fVar0 * (fVar2 - 0.5f));
	fVar5 = (-fVar1 * (fVar3 - 0.5f));
	fVar6 = uParam0->f_194;
	vVar7 = { uParam0->f_191 };
	vVar7 = { vVar7 + Vector(fVar5, (fVar4 * SYSTEM::COS((90f - fVar6))), (fVar4 * SYSTEM::SIN((90f - fVar6)))) };
	return vVar7;
}

void func_213(var uParam0)//Position - 0xFBED
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar1 = *uParam0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_1.f_75)
	{
		iVar2 = uParam0->f_1.f_BA[iVar0];
		bVar3 = unk_0xFA30DFD0084E92FE(Global_19B04.f_1.f_78[iVar1], iVar2);
		if (uParam0->f_1.f_8D[iVar0 /*2*/] == 0 && uParam0->f_1.f_8D[iVar0 /*2*/].f_1 == 0)
		{
			unk_0x29CD142125FE177B(uParam0->f_19D, "SHOW_HEIST_ASSET");
			unk_0x1E1FB49121565EB6(uParam0->f_1.f_76[iVar0]);
			unk_0x5E5DBD0A6623969E(bVar3);
			unk_0xF9FBC2F3F73D94C9();
		}
		else
		{
			unk_0x29CD142125FE177B(uParam0->f_19D, "SHOW_HEIST_ASSET");
			unk_0x1E1FB49121565EB6(uParam0->f_1.f_76[iVar0]);
			unk_0x5E5DBD0A6623969E(bVar3);
			unk_0x1E1FB49121565EB6(0);
			unk_0xD44E04EBBDC4CE88(SYSTEM::TO_FLOAT(uParam0->f_1.f_8D[iVar0 /*2*/]));
			unk_0xD44E04EBBDC4CE88(SYSTEM::TO_FLOAT(uParam0->f_1.f_8D[iVar0 /*2*/].f_1));
			unk_0xF9FBC2F3F73D94C9();
		}
		iVar0++;
	}
}

void func_214(var uParam0)//Position - 0xFCCD
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x29CD142125FE177B(uParam0->f_19D, "CREATE_VIEW");
	unk_0x1E1FB49121565EB6(uParam0->f_19F + 1);
	unk_0x1E1FB49121565EB6(2);
	unk_0xD44E04EBBDC4CE88(SYSTEM::TO_FLOAT(uParam0->f_1.f_E));
	unk_0xD44E04EBBDC4CE88(SYSTEM::TO_FLOAT(uParam0->f_1.f_E.f_1));
	unk_0xF9FBC2F3F73D94C9();
	iVar0 = *uParam0;
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < uParam0->f_1.f_D1)
	{
		if (func_32(iVar0, uParam0->f_1.f_F8[iVar2]))
		{
			iVar3 = 0;
			if (func_32(iVar0, uParam0->f_1.f_102[iVar2]))
			{
				iVar3 = 1;
			}
			unk_0x29CD142125FE177B(uParam0->f_19D, "SET_DATA_SLOT");
			unk_0x1E1FB49121565EB6(uParam0->f_19F + 1);
			unk_0x1E1FB49121565EB6(iVar1);
			unk_0x1E1FB49121565EB6(iVar3);
			func_8(&(uParam0->f_1.f_D3[iVar2 /*4*/]));
			unk_0xF9FBC2F3F73D94C9();
			iVar1++;
		}
		iVar2++;
	}
	unk_0x29CD142125FE177B(uParam0->f_19D, "DISPLAY_VIEW");
	unk_0x1E1FB49121565EB6(uParam0->f_19F + 1);
	unk_0xF9FBC2F3F73D94C9();
	if (func_32(*uParam0, uParam0->f_1.f_D2))
	{
		unk_0x29CD142125FE177B(uParam0->f_19D, "SHOW_VIEW");
		unk_0x1E1FB49121565EB6(uParam0->f_19F + 1);
		unk_0x5E5DBD0A6623969E(true);
		unk_0xF9FBC2F3F73D94C9();
	}
	else
	{
		unk_0x29CD142125FE177B(uParam0->f_19D, "SHOW_VIEW");
		unk_0x1E1FB49121565EB6(uParam0->f_19F + 1);
		unk_0x5E5DBD0A6623969E(false);
		unk_0xF9FBC2F3F73D94C9();
	}
}

int func_215(var uParam0)//Position - 0xFE0D
{
	if (!unk_0xA7F138B5B1AB2CF6(uParam0->f_19D))
	{
		return 0;
	}
	if (!unk_0xA7F138B5B1AB2CF6(uParam0->f_19E))
	{
		return 0;
	}
	if (!unk_0xFA9040D29FE330BD(5))
	{
		return 0;
	}
	if (unk_0x0D5B5D9ECF3081DD())
	{
		if (!unk_0x284F2ACE6839D3C0("HEIST_BULLETIN_BOARD", false, -1))
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
	if (*uParam0 != 1)
	{
		if ((!unk_0xD6513D668481290A(joaat("prop_ld_planning_pin_01")) || !unk_0xD6513D668481290A(joaat("prop_ld_planning_pin_02"))) || !unk_0xD6513D668481290A(joaat("prop_ld_planning_pin_03")))
		{
			return 0;
		}
	}
	unk_0xF0059F27F7BB6680(&Global_15C16, *uParam0);
	return 1;
}

void func_216(var uParam0)//Position - 0xFEA8
{
	float fVar0;
	float fVar1;
	
	if (func_32(*uParam0, 0))
	{
		func_217(uParam0);
		fVar0 = (-uParam0->f_1.f_4 * 0.5f);
		fVar1 = (uParam0->f_1.f_5 * 0.5f);
		unk_0x5BB21DFF8E985392(uParam0->f_19D, uParam0->f_191 + Vector(fVar1, (fVar0 * SYSTEM::COS((90f - uParam0->f_194))), (fVar0 * SYSTEM::SIN((90f - uParam0->f_194)))), 180f, 0f, uParam0->f_194, 1f, 1f, 1f, uParam0->f_1.f_6, uParam0->f_1.f_7, 1f, 2);
	}
}

void func_217(var uParam0)//Position - 0xFF31
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	vector3 vVar6;
	
	if (unk_0xFA30DFD0084E92FE(Global_15C14, *uParam0))
	{
		unk_0xF0059F27F7BB6680(&(uParam0->f_1C1), 16);
		unk_0xF0059F27F7BB6680(&(uParam0->f_1C1), 15);
		unk_0xF0059F27F7BB6680(&(uParam0->f_1C1), 14);
		unk_0x7CB6FD92BE491AD9(&Global_15C14, *uParam0);
	}
	if (unk_0xFA30DFD0084E92FE(uParam0->f_1C1, 16))
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_1.f_75)
		{
			iVar1 = uParam0->f_1.f_BA[iVar0];
			bVar2 = func_32(*uParam0, iVar1);
			unk_0x29CD142125FE177B(uParam0->f_19D, "SHOW_HEIST_ASSET");
			unk_0x1E1FB49121565EB6(uParam0->f_1.f_76[iVar0]);
			unk_0x5E5DBD0A6623969E(bVar2);
			unk_0x1E1FB49121565EB6(0);
			unk_0xF9FBC2F3F73D94C9();
			iVar0++;
		}
		unk_0x7CB6FD92BE491AD9(&(uParam0->f_1C1), 16);
	}
	if (unk_0xFA30DFD0084E92FE(uParam0->f_1C1, 15))
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_1.f_21)
		{
			if (func_32(*uParam0, uParam0->f_1.f_4B[iVar0]))
			{
				if (!unk_0x724D816EA203A79E(uParam0->f_1AC[iVar0]))
				{
					switch ((iVar0 % 3))
					{
						case 0:
							iVar3 = joaat("prop_ld_planning_pin_01");
							break;
						
						case 1:
							iVar3 = joaat("prop_ld_planning_pin_02");
							break;
						
						case 2:
							iVar3 = joaat("prop_ld_planning_pin_03");
							break;
					}
					fVar4 = (SYSTEM::TO_FLOAT((unk_0x491B2241281A03B7(0, 65535) - 32767)) / 4000f);
					fVar5 = (SYSTEM::TO_FLOAT((unk_0x491B2241281A03B7(0, 65535) - 32767)) / 4000f);
					vVar6 = { func_212(uParam0, &(uParam0->f_1.f_22[iVar0 /*2*/])) };
					uParam0->f_1AC[iVar0] = unk_0xB6896943DA475493(iVar3, vVar6, true, true, false);
					unk_0x784C605D172817C8(uParam0->f_1AC[iVar0], fVar4, 0f, (uParam0->f_194 + fVar5), 2, 1);
					unk_0x77815D3407C6700D(uParam0->f_1AC[iVar0], true, 0);
					unk_0x1E5C2A1EAB944289(uParam0->f_1AC[iVar0], true);
					unk_0xD434A01DEA38A939(uParam0->f_1AC[iVar0], false, 0);
					unk_0x67621132C2EEAC18(uParam0->f_1AC[iVar0], 0);
					unk_0x346478B12F69D4E3(uParam0->f_1AC[iVar0], true);
				}
			}
			else if (!unk_0x724D816EA203A79E(uParam0->f_1AC[iVar0]))
			{
				unk_0xA35241BCE4C1A24B(&(uParam0->f_1AC[iVar0]));
			}
			iVar0++;
		}
		unk_0x7CB6FD92BE491AD9(&(uParam0->f_1C1), 15);
	}
	if (unk_0xFA30DFD0084E92FE(uParam0->f_1C1, 14))
	{
		func_218(uParam0);
		func_33(uParam0);
		func_214(uParam0);
		unk_0x7CB6FD92BE491AD9(&(uParam0->f_1C1), 14);
	}
}

void func_218(var uParam0)//Position - 0x1017F
{
	unk_0x29CD142125FE177B(uParam0->f_19D, "SET_DATA_SLOT_EMPTY");
	unk_0x1E1FB49121565EB6(uParam0->f_19F + 1);
	unk_0xF9FBC2F3F73D94C9();
}

bool func_219(int iParam0)//Position - 0x101A3
{
	return Global_8C41 == iParam0;
}

int func_220(int iParam0)//Position - 0x101B1
{
	int iVar0;
	
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	if (Global_1542D[iParam0 /*2*/])
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < Global_1478C)
	{
		if (Global_1478C[iVar0 /*5*/] != -1)
		{
			if (Global_1164F.f_6D[Global_1478C[iVar0 /*5*/] /*4*/] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_221(int iParam0)//Position - 0x10219
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_19B04.f_2360.f_63.f_3A[iParam0];
}

void func_222(var uParam0, int iParam1)//Position - 0x10246
{
	vector3 vVar0;
	float fVar1;
	
	*uParam0 = iParam1;
	vVar0 = { Global_15BD6[uParam0->f_1.f_1 /*15*/].f_3 };
	fVar1 = Global_15BD6[uParam0->f_1.f_1 /*15*/].f_6;
	uParam0->f_191 = { vVar0 };
	uParam0->f_194 = fVar1;
	uParam0->f_195 = { vVar0 + Vector(0f, (-uParam0->f_1.f_8 * SYSTEM::COS((360f - fVar1))), (-uParam0->f_1.f_8 * SYSTEM::SIN((360f - fVar1)))) };
	uParam0->f_198 = { -0.85f, 0f, fVar1 };
	unk_0xF0059F27F7BB6680(&(uParam0->f_1C1), 4);
	uParam0->f_19F = uParam0->f_1.f_60;
	uParam0->f_1A0 = -1;
	unk_0x7CB6FD92BE491AD9(&(uParam0->f_1C1), 0);
	unk_0x7CB6FD92BE491AD9(&(uParam0->f_1C1), 1);
	unk_0x7CB6FD92BE491AD9(&(uParam0->f_1C1), 2);
	uParam0->f_1D0 = 0;
	uParam0->f_1C3 = -1;
}

void func_223(var uParam0, var uParam1)//Position - 0x10312
{
	func_232(uParam0, 1, "HEIST_JEWELLERY", "BOARD0", "JHFAUD", "CRWAUD", 2, 2, 7, 8, uParam1, 708.9957f, -965.256f, 31.39533f, 5.5f, 6.25f, 4f);
	func_231(uParam0, 750, 540, 2.1f, 1.47f, 3.6f, 2.05f, 2f, 375, 250, 116, 420, 248, 425, 380, 425, 510, 430, 0, 0, 650, 300, 0, 70, 684, 106);
	func_230(uParam0, 20f, 22f, 28f);
	func_229(uParam0, "BRD_H_01", "BRD_H_02", "BRD_H_03", "BRD_H_04", "JHFP1", "JHFP4", "JHP11", "JHHUR");
	func_228(uParam0, 1, "CRW_GM", "");
	func_228(uParam0, 4, "CRW_NR", "");
	func_228(uParam0, 6, "CRW_PH", "");
	func_228(uParam0, 7, "CRW_CF", "");
	func_228(uParam0, 8, "CRW_ET", "");
	func_228(uParam0, 9, "CRW_KD", "");
	func_228(uParam0, 10, "CRW_PM", "CRM_PM");
	func_228(uParam0, 12, "CRW_RL", "CRM_RL");
	func_227(uParam0, 0, 0, 0, 0);
	func_227(uParam0, 6, 0, 0, 0);
	func_227(uParam0, 1, 0, 0, 0);
	func_227(uParam0, 3, 1, 0, 0);
	func_227(uParam0, 11, 2, 0, 0);
	func_227(uParam0, 5, 3, 0, 0);
	func_227(uParam0, 9, 3, 0, 0);
	func_227(uParam0, 2, 4, 0, 0);
	func_227(uParam0, 7, 9, 0, 0);
	func_227(uParam0, 10, 10, 0, 0);
	func_226(uParam0, 2, 2, "H_TD_SEC");
	func_226(uParam0, 2, 2, "H_TD_PHOTO");
	func_226(uParam0, 2, 5, "H_TD_PLAN");
	func_226(uParam0, 2, 6, "H_TD_CREW");
	func_226(uParam0, 7, 11, "H_TD_CARB");
	func_226(uParam0, 8, 9, "H_TD_BUGS");
	func_226(uParam0, 8, 10, "H_TD_GAS");
	func_225(uParam0, 0, 203, 74);
	func_225(uParam0, 1, 368, 181);
	func_225(uParam0, 1, 556, 189);
	func_225(uParam0, 2, 690, 63);
	func_225(uParam0, 2, 673, 308);
	func_225(uParam0, 2, 671, 406);
	func_225(uParam0, 3, 245, 244);
	func_225(uParam0, 4, 70, 68);
	func_224(uParam0, 0, "JHP12", 214, 165, 1);
	func_224(uParam0, 0, "JHP13", 254, 46, 1);
	func_224(uParam0, 0, "JHP14", 70, 97, 1);
	func_224(uParam0, 0, "JHP15", 254, 275, 1);
	func_224(uParam0, 0, "JHP16", 457, 165, 1);
}

void func_224(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)//Position - 0x105B8
{
	struct<2> Var0;
	
	if (uParam0->f_171 < 7)
	{
		StringCopy(&Var0, sParam2, 8);
		uParam0->f_182[uParam0->f_171] = iParam1;
		uParam0->f_173[uParam0->f_171 /*2*/] = iParam3;
		uParam0->f_173[uParam0->f_171 /*2*/].f_1 = iParam4;
		uParam0->f_118[uParam0->f_171 + 4 /*2*/] = { Var0 };
		if (bParam5)
		{
			unk_0xF0059F27F7BB6680(&(uParam0->f_172), uParam0->f_171);
		}
		uParam0->f_171++;
	}
}

void func_225(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x10631
{
	if (uParam0->f_21 < 20)
	{
		uParam0->f_4B[uParam0->f_21] = iParam1;
		uParam0->f_22[uParam0->f_21 /*2*/] = iParam2;
		uParam0->f_22[uParam0->f_21 /*2*/].f_1 = iParam3;
		uParam0->f_21++;
	}
}

void func_226(var uParam0, int iParam1, int iParam2, char* sParam3)//Position - 0x10675
{
	struct<8> Var0;
	
	if (uParam0->f_D1 < 9)
	{
		StringCopy(&Var0, sParam3, 32);
		uParam0->f_F8[uParam0->f_D1] = iParam1;
		uParam0->f_102[uParam0->f_D1] = iParam2;
		MemCopy(&(uParam0->f_D3[uParam0->f_D1 /*4*/]), {Var0}, 4);
		uParam0->f_D1++;
	}
}

void func_227(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x106C5
{
	if (uParam0->f_75 < 22)
	{
		uParam0->f_76[uParam0->f_75] = iParam1;
		uParam0->f_BA[uParam0->f_75] = iParam2;
		uParam0->f_8D[uParam0->f_75 /*2*/] = iParam3;
		uParam0->f_8D[uParam0->f_75 /*2*/].f_1 = iParam4;
		uParam0->f_75++;
	}
}

void func_228(var uParam0, int iParam1, char* sParam2, char* sParam3)//Position - 0x10715
{
	struct<2> Var0;
	struct<2> Var1;
	
	StringCopy(&Var0, sParam2, 8);
	StringCopy(&Var1, sParam3, 8);
	uParam0->f_130[iParam1 /*2*/] = { Var0 };
	if (!unk_0x3362CDE8460ED38B(sParam3, ""))
	{
		switch (iParam1)
		{
			case 10:
				uParam0->f_130[14 /*2*/] = { Var1 };
				break;
			
			case 13:
				uParam0->f_130[16 /*2*/] = { Var1 };
				break;
			
			case 12:
				uParam0->f_130[15 /*2*/] = { Var1 };
				break;
			
			case 11:
				uParam0->f_130[17 /*2*/] = { Var1 };
				break;
			
			default:
				break;
			}
	}
}

void func_229(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8)//Position - 0x107AF
{
	struct<4> Var0;
	struct<4> Var1;
	struct<4> Var2;
	struct<4> Var3;
	struct<2> Var4;
	struct<2> Var5;
	struct<2> Var6;
	struct<2> Var7;
	
	StringCopy(&Var0, sParam1, 16);
	StringCopy(&Var1, sParam2, 16);
	StringCopy(&Var2, sParam3, 16);
	StringCopy(&Var3, sParam4, 16);
	StringCopy(&Var4, sParam5, 8);
	StringCopy(&Var5, sParam6, 8);
	StringCopy(&Var6, sParam7, 8);
	StringCopy(&Var7, sParam8, 8);
	uParam0->f_14[0 /*4*/] = { Var0 };
	uParam0->f_14[1 /*4*/] = { Var1 };
	uParam0->f_6C[0 /*4*/] = { Var2 };
	uParam0->f_6C[1 /*4*/] = { Var3 };
	uParam0->f_118[1 /*2*/] = { Var4 };
	uParam0->f_118[2 /*2*/] = { Var5 };
	uParam0->f_118[0 /*2*/] = { Var6 };
	uParam0->f_118[3 /*2*/] = { Var7 };
}

void func_230(var uParam0, float fParam1, float fParam2, float fParam3)//Position - 0x10853
{
	uParam0->f_9 = fParam1;
	uParam0->f_A = fParam2;
	uParam0->f_B = fParam3;
}

void func_231(var uParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)//Position - 0x1086D
{
	uParam0->f_2 = iParam1;
	uParam0->f_3 = iParam2;
	uParam0->f_4 = fParam3;
	uParam0->f_5 = fParam4;
	uParam0->f_6 = fParam5;
	uParam0->f_7 = fParam6;
	uParam0->f_8 = fParam7;
	uParam0->f_C = iParam8;
	uParam0->f_C.f_1 = iParam9;
	uParam0->f_61[0 /*2*/] = iParam10;
	uParam0->f_61[0 /*2*/].f_1 = iParam11;
	uParam0->f_61[1 /*2*/] = iParam12;
	uParam0->f_61[1 /*2*/].f_1 = iParam13;
	uParam0->f_61[2 /*2*/] = iParam14;
	uParam0->f_61[2 /*2*/].f_1 = iParam15;
	uParam0->f_61[3 /*2*/] = iParam16;
	uParam0->f_61[3 /*2*/].f_1 = iParam17;
	uParam0->f_61[4 /*2*/] = iParam18;
	uParam0->f_61[4 /*2*/].f_1 = iParam19;
	uParam0->f_10 = iParam20;
	uParam0->f_10.f_1 = iParam21;
	uParam0->f_12 = iParam22;
	uParam0->f_12.f_1 = iParam23;
	uParam0->f_E = iParam24;
	uParam0->f_E.f_1 = iParam25;
}

void func_232(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, var uParam10, vector3 vParam11, vector3 vParam12)//Position - 0x1093B
{
	uParam0->f_1 = iParam1;
	StringCopy(&(uParam0->f_10C), sParam2, 16);
	StringCopy(&(uParam0->f_110), sParam3, 16);
	StringCopy(&(uParam0->f_114), sParam4, 8);
	StringCopy(&(uParam0->f_116), sParam5, 8);
	uParam0->f_1D = iParam6;
	uParam0->f_1E[0] = iParam8;
	uParam0->f_1E[1] = iParam9;
	uParam0->f_D2 = iParam7;
	uParam0->f_60 = uParam10;
	uParam0->f_18A = { vParam11 };
	uParam0->f_18D = { vParam12 };
}

int func_233(int iParam0, int iParam1)//Position - 0x109A7
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int func_234(int iParam0)//Position - 0x109BD
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (unk_0xFA30DFD0084E92FE(Global_19B04.f_2360.f_63.f_DB[iVar0], iVar1))
	{
		return 0;
	}
	unk_0xF0059F27F7BB6680(&(Global_19B04.f_2360.f_63.f_DB[iVar0]), iVar1);
	return 1;
}

void func_235()//Position - 0x10A17
{
	if (unk_0x30F17D4B59B81517("JH_1_MCS_4P2") || unk_0x30F17D4B59B81517("JH_1_MCS_4_P1_ALT1"))
	{
		unk_0xD103510B8989BEB2();
	}
	func_106(16, 0);
	func_106(17, 0);
	func_106(18, 0);
	func_83(1, 0, 0);
	func_83(2, 0, 0);
	unk_0x483687B0FCA5415A(iLocal_249, 0);
	if (iLocal_254 != -1)
	{
		if (unk_0x2A0D5F9585271A68(iLocal_254))
		{
			unk_0x5BF83EEC9AFDCD0E(iLocal_254);
		}
	}
	unk_0x02DD9F29D9655E48();
	unk_0x4BDC021CD4295F17(Local_46.f_1.f_18A - Local_46.f_1.f_18D, Local_46.f_1.f_18A + Local_46.f_1.f_18D, true, 0);
	unk_0xAEC867D0DBB7AFEB(5);
	if (iLocal_45 != -1)
	{
		func_153(&iLocal_45);
	}
	while (!func_206(&Local_46))
	{
		SYSTEM::WAIT(0);
	}
	unk_0x95E4B6F3ED223F5A();
}

