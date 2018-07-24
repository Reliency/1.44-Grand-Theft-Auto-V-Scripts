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
	int iLocal_28 = 0;
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
	struct<22> Local_103 = { 0, 0, 0, -1, 0, -1, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	struct<14> Local_107 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	vector3 vLocal_108[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	var uLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	struct<2> Local_123 = { 0, 0 } ;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 16;
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
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	char* sLocal_295 = NULL;
	struct<21> Local_296 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	iLocal_28 = 3;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_94 = ((0.05f + 0.275f) - 0.01f);
	func_372(ScriptParam_296);
	while (true)
	{
		func_371();
		if (func_361() || !func_360(unk_0xB5CEFD608600A09F(), 0, 1))
		{
			func_358();
		}
		switch (func_357(unk_0x6BAA0516CC970D99()))
		{
			case 0:
				if (func_356() == 2)
				{
					vLocal_108[unk_0x6BAA0516CC970D99() /*3*/].f_1 = 2;
				}
				else if (func_356() == 6)
				{
					vLocal_108[unk_0x6BAA0516CC970D99() /*3*/].f_1 = 5;
				}
				break;
			
			case 2:
				if (func_356() == 2)
				{
					func_349();
					func_52();
				}
				else if (func_356() == 6)
				{
					vLocal_108[unk_0x6BAA0516CC970D99() /*3*/].f_1 = 5;
				}
				if (((func_49(unk_0xB5CEFD608600A09F(), 1) || func_46(unk_0xB5CEFD608600A09F())) || unk_0xFA30DFD0084E92FE(iLocal_111, 8)) || unk_0xFA30DFD0084E92FE(iLocal_111, 16))
				{
					vLocal_108[unk_0x6BAA0516CC970D99() /*3*/].f_1 = 6;
				}
				break;
			
			case 5:
				func_45(&(Local_103.f_13));
				if (func_44(&(Local_103.f_13)))
				{
					vLocal_108[unk_0x6BAA0516CC970D99() /*3*/].f_1 = 6;
				}
				break;
			
			case 3:
				vLocal_108[unk_0x6BAA0516CC970D99() /*3*/].f_1 = 6;
			
			case 6:
				func_358();
				break;
		}
		if (unk_0x0DE6397A2CB3EF75())
		{
			switch (func_356())
			{
				case 0:
					func_43(&(Local_103.f_11), 0, 0);
					Local_103.f_1 = 2;
					break;
				
				case 2:
					func_39();
					func_37();
					func_3();
					if (func_1())
					{
						Local_103.f_1 = 6;
					}
					break;
				
				case 6:
					break;
				}
		}
	}
}

int func_1()//Position - 0x1FB
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

bool func_2()//Position - 0x20F
{
	return unk_0xFA30DFD0084E92FE(Local_103, 6);
}

void func_3()//Position - 0x21E
{
	if (unk_0x0DE6397A2CB3EF75())
	{
		switch (Local_103.f_2)
		{
			case 0:
				if (!unk_0xFA30DFD0084E92FE(Local_103, 10))
				{
					if (func_36(&(Local_103.f_11), 300000, 0))
					{
						unk_0xF0059F27F7BB6680(&Local_103, 10);
					}
				}
				if (!unk_0xFA30DFD0084E92FE(Local_103, 10))
				{
					if (unk_0xFA30DFD0084E92FE(Local_103, 0))
					{
						Local_103.f_5 = func_35();
						Local_103.f_2 = 1;
						Local_103.f_4 = 0;
					}
				}
				break;
			
			case 1:
				if (func_6())
				{
					unk_0xF0059F27F7BB6680(&Local_103, 3);
					unk_0x7CB6FD92BE491AD9(&Local_103, 13);
					func_43(&(Local_103.f_15), 0, 0);
					Local_103.f_2 = 2;
				}
				break;
			
			case 2:
				if (unk_0xFA30DFD0084E92FE(Local_103, 4))
				{
					func_4(Local_103.f_5);
					Local_103.f_2 = 7;
				}
				break;
			
			case 7:
				func_4(Local_103.f_5);
				break;
			}
	}
}

void func_4(int iParam0)//Position - 0x2EA
{
	switch (iParam0)
	{
		case 0:
			func_5(&(Local_103.f_9[0]));
			func_5(&(Local_103.f_C[0]));
			break;
	}
}

void func_5(var uParam0)//Position - 0x318
{
	int iVar0;
	
	if (unk_0x8EA6CABD14F1B89A(*uParam0))
	{
		iVar0 = unk_0xD14280F674B4DBF4(*uParam0);
		unk_0x91BCA7FA73FFCDF2(&iVar0);
	}
}

int func_6()//Position - 0x33C
{
	if (Local_103.f_5 == 0)
	{
		if (!unk_0xFA30DFD0084E92FE(Local_103, 1))
		{
			iLocal_119 = 0;
			iLocal_120 = unk_0x491B2241281A03B7(0, 5);
			iLocal_106 = 0;
			Local_103.f_3 = -1;
			Local_103.f_4 = 0;
			unk_0xF0059F27F7BB6680(&Local_103, 1);
		}
		if (!unk_0xFA30DFD0084E92FE(Local_103, 2))
		{
			if (func_34())
			{
				unk_0xF0059F27F7BB6680(&Local_103, 2);
			}
		}
		else if (func_7())
		{
			return 1;
		}
	}
	return 0;
}

int func_7()//Position - 0x39E
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar3;
	
	iVar0 = func_33();
	iVar1 = func_32();
	if (!unk_0x8EA6CABD14F1B89A(Local_103.f_C[0]))
	{
		if (Local_103.f_F == 0)
		{
			unk_0xA6E7E0EC9E48D44C(1);
			Local_103.f_F = 1;
		}
		if (!unk_0xFA30DFD0084E92FE(Local_103, 13))
		{
			if (unk_0x424470694C82EFFA(1))
			{
				if (unk_0x88E77A85289CC883(1))
				{
					if (func_31(1, 1, 1))
					{
						if (func_25(1, 1, 1))
						{
							unk_0xF0059F27F7BB6680(&Local_103, 13);
						}
					}
				}
			}
		}
		if (unk_0xFA30DFD0084E92FE(Local_103, 13))
		{
			if (func_24(iVar1))
			{
				if (func_24(iVar0))
				{
					if (func_12(&vVar2, &fVar3))
					{
						if (func_11(&(Local_103.f_C[0]), iVar1, vVar2, fVar3, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
						{
							unk_0xF82197F205B9D8FD(unk_0x19D7F09C2FABDDA0(Local_103.f_C[0]), 1);
							if (unk_0x46032D09AA009EC4("Not_Allow_As_Saved_Veh", 3))
							{
								unk_0x3F9FE9BB735B1604(unk_0x19D7F09C2FABDDA0(Local_103.f_C[0]), "Not_Allow_As_Saved_Veh", 1);
							}
							Local_103.f_F = 1;
						}
					}
				}
			}
		}
	}
	if (unk_0x8EA6CABD14F1B89A(Local_103.f_C[0]))
	{
		if (!unk_0x8EA6CABD14F1B89A(Local_103.f_9[0]))
		{
			if (Local_103.f_10 == 0)
			{
				unk_0xD1CF2F876BAD2600(1);
				Local_103.f_10 = 1;
			}
			if (unk_0x88E77A85289CC883(1))
			{
				if (func_24(iVar0))
				{
					if (func_9(Local_103.f_C[0]))
					{
						if (unk_0x89B5CBCE9D131B32(Local_103.f_C[0]))
						{
							if (func_8(&(Local_103.f_9[0]), Local_103.f_C[0], 26, iVar0, -1, 1, 1, 1))
							{
								unk_0xF82197F205B9D8FD(unk_0xE48AD7BF7762E114(Local_103.f_9[0]), 1);
								unk_0xE43AD8CB1B4DDED9(unk_0xE48AD7BF7762E114(Local_103.f_9[0]), 1, 0);
								unk_0x2E35C4FA5F0ED22F(unk_0xE48AD7BF7762E114(Local_103.f_9[0]), 1);
								unk_0x4106FAF8AA1D69D5(unk_0xE48AD7BF7762E114(Local_103.f_9[0]), Global_180794);
								unk_0xE43AD8CB1B4DDED9(unk_0xE48AD7BF7762E114(Local_103.f_9[0]), 1, 0);
								unk_0x65E471E4A2D56226(unk_0xE48AD7BF7762E114(Local_103.f_9[0]), SYSTEM::ROUND((200f * Global_40001.f_99)), 0);
								Local_103.f_10 = 1;
							}
						}
					}
				}
			}
		}
	}
	if (!unk_0x8EA6CABD14F1B89A(Local_103.f_9[0]) || !unk_0x8EA6CABD14F1B89A(Local_103.f_C[0]))
	{
		return 0;
	}
	return 1;
}

int func_8(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)//Position - 0x59E
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

int func_9(int iParam0)//Position - 0x626
{
	if (unk_0x7FFE36DB9042AF23(iParam0))
	{
		return !func_10(unk_0x19D7F09C2FABDDA0(iParam0));
	}
	return 0;
}

int func_10(int iParam0)//Position - 0x646
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

int func_11(var uParam0, int iParam1, vector3 vParam2, float fParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)//Position - 0x67F
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

int func_12(var uParam0, var uParam1)//Position - 0x779
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	
	if (!func_23(*uParam0, 0f, 0f, 0f, 0))
	{
		return 1;
	}
	switch (iLocal_120)
	{
		case 0:
			if (unk_0xFA30DFD0084E92FE(Local_103.f_4, iLocal_120))
			{
				vVar0 = { -1232.842f, -1095.003f, 2.2331f };
				vVar1 = { -1226.248f, -1089.819f, 10.1513f };
				vVar2 = { func_22(0, 0) };
				fVar3 = 19.7853f;
			}
			break;
		
		case 1:
			if (unk_0xFA30DFD0084E92FE(Local_103.f_4, iLocal_120))
			{
				vVar0 = { -622.0966f, 250.3288f, 75.7075f };
				vVar1 = { -614.8635f, 255.2288f, 88.7755f };
				vVar2 = { func_22(0, 1) };
				fVar3 = 266.4686f;
			}
			break;
		
		case 2:
			if (unk_0xFA30DFD0084E92FE(Local_103.f_4, iLocal_120))
			{
				vVar0 = { 794.4784f, -2034.339f, 25.2469f };
				vVar1 = { 798.8026f, -2026.004f, 33.2793f };
				vVar2 = { func_22(0, 2) };
				fVar3 = 355.9428f;
			}
			break;
		
		case 3:
			if (unk_0xFA30DFD0084E92FE(Local_103.f_4, iLocal_120))
			{
				vVar0 = { -1623.919f, 1249.831f, 135.2495f };
				vVar1 = { -1621.554f, 1257.98f, 145.2376f };
				vVar2 = { func_22(0, 3) };
				fVar3 = 353.7463f;
			}
			break;
		
		case 4:
			if (unk_0xFA30DFD0084E92FE(Local_103.f_4, iLocal_120))
			{
				vVar0 = { 1118.077f, 1875.035f, 60.3776f };
				vVar1 = { 1127.638f, 1883.083f, 70.1053f };
				vVar2 = { func_22(0, 4) };
				fVar3 = 201.3967f;
			}
			break;
	}
	if (iLocal_120 < 5)
	{
		if (!func_23(vVar0, 0f, 0f, 0f, 0))
		{
			if (Local_103.f_3 == -1)
			{
				Local_103.f_3 = unk_0xFBA2969CF388F1EA(vVar0, vVar1);
			}
			else if (unk_0xFCB427D77FFFB63D(Local_103.f_3))
			{
				if (unk_0xD43DDBF2AA6067AE(Local_103.f_3))
				{
					if (!unk_0xB64F51EF77C262F8(Local_103.f_3))
					{
						if (!func_13(vVar2, 1084227584, 1, 1, 1123024896, 0, -1, 0, 0))
						{
							*uParam0 = { vVar2 };
							*uParam1 = fVar3;
							unk_0xE4A125EBE8973305(Local_103.f_3);
							return 1;
						}
						else
						{
							iLocal_120++;
							unk_0xE4A125EBE8973305(Local_103.f_3);
							Local_103.f_3 = -1;
						}
					}
					else
					{
						iLocal_120++;
						unk_0xE4A125EBE8973305(Local_103.f_3);
						Local_103.f_3 = -1;
					}
				}
			}
		}
		else
		{
			iLocal_120++;
		}
	}
	else
	{
		iLocal_120 = 0;
	}
	return 0;
}

int func_13(vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)//Position - 0x9E4
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_360(unk_0xB5CEFD608600A09F(), 1, 1))
		{
			if (!unk_0x17FAADF9916EF741())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0xF0F2FC9DE291567F(func_18(unk_0xB5CEFD608600A09F()), vParam0, true) <= (fVar2 + fParam1))
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
		if (func_360(iVar1, 1, 1))
		{
			if (!func_15(iVar1, 0) && unk_0x75206900382D1E30(unk_0xB5CEFD608600A09F(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0xB5CEFD608600A09F()))
				{
					if ((func_14(iVar1) || !bParam8) && !Global_24FB5C[iVar1 /*406*/].f_FF)
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
								if (unk_0xF0F2FC9DE291567F(func_18(iVar1), vParam0, true) <= (fVar2 + fParam1))
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
							if (unk_0xF0F2FC9DE291567F(func_18(iVar1), vParam0, true) <= (fVar2 + fParam1))
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

int func_14(int iParam0)//Position - 0xB9B
{
	if (unk_0xE904009319A7A43E(unk_0xA95CF30C72EB526E(iParam0)) || Global_24FB5C[iParam0 /*406*/].f_F1)
	{
		return 1;
	}
	return 0;
}

bool func_15(int iParam0, int iParam1)//Position - 0xBC6
{
	bool bVar0;
	
	if (iParam0 == unk_0xB5CEFD608600A09F())
	{
		bVar0 = func_16(-1, 0) == 8;
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

int func_16(int iParam0, bool bParam1)//Position - 0xC11
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_17();
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

int func_17()//Position - 0xC52
{
	return Global_1407E0;
}

Vector3 func_18(int iParam0)//Position - 0xC5E
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_21() && Global_18402B[iVar0 /*770*/].f_2EA) && !func_20(Global_18402B[iVar0 /*770*/].f_2EB))
	{
		return Global_18402B[iVar0 /*770*/].f_2EB;
	}
	return func_19(iParam0);
}

Vector3 func_19(int iParam0)//Position - 0xCB1
{
	return unk_0x541C2AEF053615BC(unk_0xA95CF30C72EB526E(iParam0), 0);
}

int func_20(vector3 vParam0)//Position - 0xCC4
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

var func_21()//Position - 0xCEE
{
	return Global_255A46.f_10;
}

Vector3 func_22(int iParam0, int iParam1)//Position - 0xCFC
{
	vector3 vVar0;
	
	vVar0 = { 0f, 0f, 0f };
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				vVar0 = { -1228.99f, -1092.231f, 7.0465f };
			}
			else if (iParam1 == 1)
			{
				vVar0 = { -618.6293f, 252.6611f, 80.5897f };
			}
			else if (iParam1 == 2)
			{
				vVar0 = { 796.6768f, -2029.602f, 28.1346f };
			}
			else if (iParam1 == 3)
			{
				vVar0 = { -1622.881f, 1253.516f, 139.6713f };
			}
			else if (iParam1 == 4)
			{
				vVar0 = { 1123.27f, 1878.917f, 65.7957f };
			}
			break;
	}
	return vVar0;
}

bool func_23(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0xDA8
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

bool func_24(int iParam0)//Position - 0xDEF
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0xF243B7A14FCFD0F4(iParam0);
	return unk_0xD6513D668481290A(iParam0);
}

bool func_25(int iParam0, bool bParam1, bool bParam2)//Position - 0xE0D
{
	return func_26(0, iParam0, 1, bParam1, bParam2);
}

int func_26(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0xE21
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xFA30DFD0084E92FE(Global_14FADF, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_30(iParam0) - func_29(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_29(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_30(iParam0) - func_28(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_29(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_30(iParam0) - func_29(iParam0, 1));
		}
		if (!bParam4 && Global_18402B[unk_0xB5CEFD608600A09F() /*770*/] != 3)
		{
			iVar1 = (iVar1 - func_27(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_27(int iParam0)//Position - 0xEEA
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_28(int iParam0)//Position - 0xF24
{
	switch (iParam0)
	{
		case 0:
			return Global_14FADF.f_1;
			break;
		
		case 1:
			return Global_14FADF.f_2;
			break;
		
		case 2:
			return Global_14FADF.f_3;
			break;
	}
	return 0;
}

int func_29(int iParam0, bool bParam1)//Position - 0xF6A
{
	int iVar0;
	
	iVar0 = unk_0xB5CEFD608600A09F();
	switch (iParam0)
	{
		case 0:
			if (!unk_0x32405B7614E36453())
			{
				return Global_24FB5C[iVar0 /*406*/].f_CD;
			}
			else
			{
				return unk_0xBC93E1C9C8F877D9(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!unk_0x32405B7614E36453())
			{
				return Global_24FB5C[iVar0 /*406*/].f_CE;
			}
			else
			{
				return unk_0x146F82F73FA40AB0(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!unk_0x32405B7614E36453())
			{
				return Global_24FB5C[iVar0 /*406*/].f_CF;
			}
			else
			{
				return unk_0x2B3A16ECF7925A20(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_30(int iParam0)//Position - 0x1007
{
	switch (iParam0)
	{
		case 0:
			return Global_14FAE7;
			break;
		
		case 1:
			return Global_14FAE8;
			break;
		
		case 2:
			return Global_14FAE9;
			break;
	}
	return 0;
}

bool func_31(int iParam0, bool bParam1, bool bParam2)//Position - 0x1047
{
	return func_26(1, iParam0, 1, bParam1, bParam2);
}

int func_32()//Position - 0x105B
{
	return joaat("cavalcade");
}

int func_33()//Position - 0x1068
{
	return joaat("a_m_y_business_03");
}

int func_34()//Position - 0x1075
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar3;
	float fVar4;
	int iVar5;
	
	if (unk_0xFA30DFD0084E92FE(Local_103, 1))
	{
		if (iLocal_106 >= vLocal_108.x)
		{
			if (iLocal_119 < 5)
			{
				iLocal_119++;
			}
			iLocal_106 = 0;
		}
		if (iLocal_106 == 0)
		{
			unk_0xF0059F27F7BB6680(&iLocal_111, 1);
		}
		if (iLocal_119 < 5)
		{
			iVar5 = iLocal_106;
			if (unk_0x05086B70D2CFEA6F(unk_0xCFA8A401AAD7BB5A(iVar5)))
			{
				iVar0 = unk_0x4ED43B67B3F05E0F(unk_0xCFA8A401AAD7BB5A(iVar5));
				if (func_360(iVar0, 1, 1))
				{
					iVar1 = unk_0xA95CF30C72EB526E(iVar0);
					if (unk_0xFA30DFD0084E92FE(iLocal_111, 1))
					{
						vVar2 = { func_22(Local_103.f_5, iLocal_119) };
						vVar3 = { unk_0x541C2AEF053615BC(iVar1, 0) };
						fVar4 = unk_0xF0F2FC9DE291567F(vVar2, vVar3, true);
						if (fVar4 < 300f)
						{
							unk_0x7CB6FD92BE491AD9(&iLocal_111, 1);
						}
					}
				}
			}
			iLocal_106++;
			if (iLocal_106 == vLocal_108.x)
			{
				if (unk_0xFA30DFD0084E92FE(iLocal_111, 1))
				{
					unk_0xF0059F27F7BB6680(&(Local_103.f_4), iLocal_119);
				}
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_35()//Position - 0x114D
{
	return 0;
}

int func_36(var uParam0, int iParam1, bool bParam2)//Position - 0x1156
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_43(uParam0, bParam2, 0);
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

void func_37()//Position - 0x11B4
{
	if (unk_0x0DE6397A2CB3EF75())
	{
		switch (Local_103.f_6)
		{
			case 0:
				if (unk_0x8EA6CABD14F1B89A(Local_103.f_9[0]) && unk_0x8EA6CABD14F1B89A(Local_103.f_C[0]))
				{
					Local_103.f_6 = 1;
				}
				break;
			
			case 1:
				if (unk_0x8EA6CABD14F1B89A(Local_103.f_9[0]))
				{
					if (!func_38(Local_103.f_9[0]))
					{
						if (unk_0x8EA6CABD14F1B89A(Local_103.f_C[0]))
						{
							if (func_9(Local_103.f_C[0]))
							{
								if (unk_0x25EF720B1CAB1E23(unk_0xE48AD7BF7762E114(Local_103.f_9[0]), unk_0x19D7F09C2FABDDA0(Local_103.f_C[0])))
								{
									if (unk_0xFA30DFD0084E92FE(Local_103, 7))
									{
										unk_0xF0059F27F7BB6680(&Local_103, 9);
										Local_103.f_6 = 2;
									}
									else if (unk_0xFA30DFD0084E92FE(Local_103, 14))
									{
										unk_0xF0059F27F7BB6680(&Local_103, 9);
										Local_103.f_6 = 2;
									}
									else if (unk_0xFA30DFD0084E92FE(Local_103, 19))
									{
										Local_103.f_6 = 3;
									}
								}
								else
								{
									Local_103.f_6 = 4;
								}
							}
							else
							{
								Local_103.f_6 = 3;
							}
						}
					}
				}
				break;
			
			case 2:
				if (unk_0x8EA6CABD14F1B89A(Local_103.f_9[0]))
				{
					if (!func_38(Local_103.f_9[0]))
					{
						if (!unk_0xCBBE5AFE2CD2E9B6(unk_0xE48AD7BF7762E114(Local_103.f_9[0])))
						{
							Local_103.f_6 = 4;
						}
						else if (unk_0x8EA6CABD14F1B89A(Local_103.f_C[0]))
						{
							if (!func_9(Local_103.f_C[0]))
							{
								Local_103.f_6 = 3;
							}
							else if (unk_0xFA30DFD0084E92FE(Local_103, 19))
							{
								Local_103.f_6 = 3;
							}
						}
					}
				}
				break;
			
			case 3:
				if (unk_0x8EA6CABD14F1B89A(Local_103.f_9[0]))
				{
					if (!func_38(Local_103.f_9[0]))
					{
						if (!unk_0x5237AF95232D78C5(unk_0xE48AD7BF7762E114(Local_103.f_9[0]), 0))
						{
							Local_103.f_6 = 4;
						}
					}
				}
				break;
			
			case 4:
				break;
			}
	}
}

int func_38(int iParam0)//Position - 0x136A
{
	if (unk_0x7FFE36DB9042AF23(iParam0))
	{
		return unk_0x36CEFBE9B745A58D(unk_0xE48AD7BF7762E114(iParam0));
	}
	return 1;
}

void func_39()//Position - 0x1389
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (unk_0x0DE6397A2CB3EF75())
	{
		if (iLocal_105 >= vLocal_108.x)
		{
			iLocal_105 = 0;
			iLocal_118 = 0;
			unk_0x7CB6FD92BE491AD9(&iLocal_111, 0);
			unk_0xF0059F27F7BB6680(&iLocal_111, 5);
			unk_0x7CB6FD92BE491AD9(&Local_103, 5);
			unk_0x7CB6FD92BE491AD9(&Local_103, 17);
			unk_0x7CB6FD92BE491AD9(&iLocal_111, 14);
			unk_0x7CB6FD92BE491AD9(&iLocal_111, 19);
			if (!unk_0xFA30DFD0084E92FE(Local_103, 16))
			{
				if (unk_0xFA30DFD0084E92FE(Local_103, 18))
				{
					if (!unk_0xFA30DFD0084E92FE(Local_103, 4))
					{
						unk_0xF0059F27F7BB6680(&Local_103, 16);
					}
				}
			}
			if (func_42(&(Local_103.f_15)))
			{
				if (!unk_0xFA30DFD0084E92FE(Local_103, 12))
				{
					if (func_36(&(Local_103.f_15), 360000, 0))
					{
						unk_0xF0059F27F7BB6680(&Local_103, 12);
					}
					if (!unk_0xFA30DFD0084E92FE(Local_103, 15))
					{
						if (func_36(&(Local_103.f_15), 240000, 0))
						{
							unk_0xF0059F27F7BB6680(&Local_103, 15);
						}
					}
				}
				else
				{
					unk_0xF0059F27F7BB6680(&iLocal_111, 9);
				}
			}
		}
		iVar0 = iLocal_105;
		if (unk_0x05086B70D2CFEA6F(unk_0xCFA8A401AAD7BB5A(iVar0)))
		{
			iVar3 = unk_0x4ED43B67B3F05E0F(unk_0xCFA8A401AAD7BB5A(iVar0));
			iVar2 = iVar3;
			if (unk_0xFA30DFD0084E92FE(iLocal_111, 5))
			{
				if (vLocal_108[iVar0 /*3*/].f_2 < 7)
				{
					unk_0x7CB6FD92BE491AD9(&iLocal_111, 5);
				}
			}
			if (!unk_0xFA30DFD0084E92FE(Local_103, 0))
			{
				if (unk_0xFA30DFD0084E92FE(vLocal_108[iVar0 /*3*/], 0))
				{
					iLocal_118++;
				}
			}
			else if (unk_0xFA30DFD0084E92FE(vLocal_108[iVar0 /*3*/], 2))
			{
				if (!unk_0xFA30DFD0084E92FE(Local_103, 17))
				{
					if (!unk_0xFA30DFD0084E92FE(Local_103.f_7, iVar2))
					{
						if (vLocal_108[iVar0 /*3*/].f_2 > 4)
						{
							unk_0xF0059F27F7BB6680(&(Local_103.f_7), iVar2);
							unk_0xF0059F27F7BB6680(&Local_103, 17);
						}
					}
				}
				if (!unk_0xFA30DFD0084E92FE(Local_103, 5))
				{
					unk_0xF0059F27F7BB6680(&Local_103, 5);
				}
				if (!unk_0xFA30DFD0084E92FE(Local_103, 4))
				{
					if (unk_0xFA30DFD0084E92FE(vLocal_108[iVar0 /*3*/], 1))
					{
						Local_103.f_8 = iVar3;
						unk_0xF0059F27F7BB6680(&Local_103, 4);
						unk_0x7CB6FD92BE491AD9(&iLocal_111, 15);
						unk_0x7CB6FD92BE491AD9(&Local_103, 18);
					}
				}
				if (!unk_0xFA30DFD0084E92FE(Local_103, 4))
				{
					if (!unk_0xFA30DFD0084E92FE(Local_103, 18))
					{
						if (unk_0xFA30DFD0084E92FE(vLocal_108[iVar0 /*3*/], 7))
						{
							unk_0xF0059F27F7BB6680(&Local_103, 18);
						}
					}
				}
				if (unk_0xFA30DFD0084E92FE(iLocal_111, 9))
				{
					if (unk_0xFA30DFD0084E92FE(vLocal_108[iVar0 /*3*/], 5))
					{
						unk_0x7CB6FD92BE491AD9(&iLocal_111, 9);
					}
				}
				if (!unk_0xFA30DFD0084E92FE(iLocal_111, 14))
				{
					if (unk_0xFA30DFD0084E92FE(vLocal_108[iVar0 /*3*/], 6))
					{
						unk_0xF0059F27F7BB6680(&iLocal_111, 14);
					}
				}
				if (!unk_0xFA30DFD0084E92FE(iLocal_111, 20))
				{
					if (unk_0xFA30DFD0084E92FE(vLocal_108[iVar0 /*3*/], 8))
					{
						unk_0xF0059F27F7BB6680(&iLocal_111, 20);
					}
				}
			}
		}
		iVar1 = 0;
		while (iVar1 <= 31)
		{
			if (unk_0x05086B70D2CFEA6F(unk_0xCFA8A401AAD7BB5A(iVar1)))
			{
				func_41(iVar1);
			}
			iVar1++;
		}
		iLocal_105++;
		if (iLocal_105 >= vLocal_108.x)
		{
			if (!unk_0xFA30DFD0084E92FE(Local_103, 16))
			{
				if (unk_0x8EA6CABD14F1B89A(Local_103.f_9[0]))
				{
					if (func_38(Local_103.f_9[0]))
					{
						if (!unk_0xFA30DFD0084E92FE(Local_103, 4))
						{
							if (unk_0xFA30DFD0084E92FE(iLocal_111, 15))
							{
								if (!func_42(&uLocal_116))
								{
									func_43(&uLocal_116, 0, 0);
								}
								else if (func_36(&uLocal_116, 2000, 0))
								{
									unk_0xF0059F27F7BB6680(&Local_103, 16);
								}
							}
						}
					}
				}
			}
			unk_0xF0059F27F7BB6680(&iLocal_111, 0);
			if (!unk_0xFA30DFD0084E92FE(Local_103, 0))
			{
				if (iLocal_118 >= 1)
				{
					unk_0xF0059F27F7BB6680(&Local_103, 0);
				}
			}
			if (!unk_0xFA30DFD0084E92FE(Local_103, 14))
			{
				if (unk_0xFA30DFD0084E92FE(iLocal_111, 14))
				{
					unk_0xF0059F27F7BB6680(&Local_103, 14);
				}
			}
			if (!unk_0xFA30DFD0084E92FE(Local_103, 19))
			{
				if (unk_0xFA30DFD0084E92FE(iLocal_111, 20))
				{
					unk_0xF0059F27F7BB6680(&Local_103, 19);
				}
			}
			if (!unk_0xFA30DFD0084E92FE(Local_103, 6))
			{
				if (unk_0xFA30DFD0084E92FE(iLocal_111, 5))
				{
					if (Local_103.f_2 > 1 && Local_103.f_2 <= 7)
					{
						unk_0xF0059F27F7BB6680(&Local_103, 6);
					}
					else if (unk_0xFA30DFD0084E92FE(Local_103, 10))
					{
						unk_0xF0059F27F7BB6680(&Local_103, 6);
					}
				}
			}
			if (unk_0xFA30DFD0084E92FE(Local_103, 17))
			{
				unk_0x7CB6FD92BE491AD9(&Local_103, 17);
				unk_0x7CB6FD92BE491AD9(&Local_103, 15);
				unk_0x7CB6FD92BE491AD9(&Local_103, 12);
				func_40(&(Local_103.f_15));
				func_43(&(Local_103.f_15), 0, 0);
			}
			if (!unk_0xFA30DFD0084E92FE(Local_103, 11))
			{
				if (unk_0xFA30DFD0084E92FE(Local_103, 12))
				{
					if (unk_0xFA30DFD0084E92FE(iLocal_111, 9))
					{
						unk_0xF0059F27F7BB6680(&Local_103, 11);
					}
				}
			}
		}
	}
}

void func_40(var uParam0)//Position - 0x1777
{
	uParam0->f_1 = 0;
}

void func_41(int iParam0)//Position - 0x1784
{
	if (unk_0x0DE6397A2CB3EF75())
	{
		if (!unk_0xFA30DFD0084E92FE(Local_103, 7))
		{
			if (unk_0xFA30DFD0084E92FE(vLocal_108[iParam0 /*3*/], 3))
			{
				unk_0xF0059F27F7BB6680(&Local_103, 7);
			}
		}
	}
}

bool func_42(var uParam0)//Position - 0x17B3
{
	return uParam0->f_1;
}

void func_43(var uParam0, bool bParam1, bool bParam2)//Position - 0x17BF
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

int func_44(var uParam0)//Position - 0x1804
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

void func_45(var uParam0)//Position - 0x182D
{
	if (!uParam0->f_1)
	{
		if (unk_0x0DE6397A2CB3EF75())
		{
			func_43(uParam0, 0, 0);
		}
	}
}

int func_46(int iParam0)//Position - 0x184C
{
	if (func_48(iParam0))
	{
		if (!func_47(iParam0, 11))
		{
			return 1;
		}
	}
	return 0;
}

bool func_47(int iParam0, int iParam1)//Position - 0x186E
{
	return unk_0xFA30DFD0084E92FE(Global_24FB5C[iParam0 /*406*/].f_CC, iParam1);
}

int func_48(int iParam0)//Position - 0x1887
{
	if (Global_24FB5C[iParam0 /*406*/].f_CC == 0)
	{
		return 0;
	}
	return 1;
}

int func_49(int iParam0, bool bParam1)//Position - 0x18A3
{
	if (bParam1)
	{
		if (func_50(iParam0))
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

bool func_50(int iParam0)//Position - 0x18CF
{
	return func_51(iParam0);
}

bool func_51(int iParam0)//Position - 0x18DD
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_D.f_1, 0);
}

void func_52()//Position - 0x18F7
{
	func_340();
	func_337();
	if (unk_0xFA30DFD0084E92FE(Local_103, 10))
	{
		if (vLocal_108[unk_0x6BAA0516CC970D99() /*3*/].f_2 < 6)
		{
			vLocal_108[unk_0x6BAA0516CC970D99() /*3*/].f_2 = 6;
		}
	}
	if (unk_0xFA30DFD0084E92FE(Local_103, 4))
	{
		if (vLocal_108[unk_0x6BAA0516CC970D99() /*3*/].f_2 <= 6)
		{
			vLocal_108[unk_0x6BAA0516CC970D99() /*3*/].f_2 = 6;
		}
	}
	if (unk_0xFA30DFD0084E92FE(Local_103, 16))
	{
		if (!unk_0xFA30DFD0084E92FE(Local_103, 4))
		{
			if (vLocal_108[unk_0x6BAA0516CC970D99() /*3*/].f_2 <= 6)
			{
				vLocal_108[unk_0x6BAA0516CC970D99() /*3*/].f_2 = 6;
				Local_107.f_2 = 1974654884;
				func_335(Local_107, func_336(1));
			}
		}
	}
	if (unk_0xFA30DFD0084E92FE(Local_103, 11))
	{
		if (vLocal_108[unk_0x6BAA0516CC970D99() /*3*/].f_2 <= 6)
		{
			vLocal_108[unk_0x6BAA0516CC970D99() /*3*/].f_2 = 6;
			Local_107.f_2 = 1974654884;
			func_335(Local_107, func_336(1));
		}
	}
	if (vLocal_108[unk_0x6BAA0516CC970D99() /*3*/].f_2 > 0)
	{
		if (vLocal_108[unk_0x6BAA0516CC970D99() /*3*/].f_2 < 6)
		{
			if ((((func_49(unk_0xB5CEFD608600A09F(), 1) || func_334()) || func_333() > 0) || func_47(unk_0xB5CEFD608600A09F(), 1)) || func_332())
			{
				vLocal_108[unk_0x6BAA0516CC970D99() /*3*/].f_2 = 6;
			}
		}
	}
	if (vLocal_108[unk_0x6BAA0516CC970D99() /*3*/].f_2 > 0)
	{
		if (vLocal_108[unk_0x6BAA0516CC970D99() /*3*/].f_2 < 6)
		{
			if (func_330(unk_0xB5CEFD608600A09F()))
			{
				vLocal_108[unk_0x6BAA0516CC970D99() /*3*/].f_2 = 6;
			}
		}
	}
	switch (vLocal_108[unk_0x6BAA0516CC970D99() /*3*/].f_2)
	{
		case 0:
			if (unk_0xFA30DFD0084E92FE(vLocal_108[unk_0x6BAA0516CC970D99() /*3*/], 0))
			{
				if (unk_0xFA30DFD0084E92FE(Local_103, 3))
				{
					if (!unk_0xFA30DFD0084E92FE(Local_103, 15))
					{
						unk_0xF0059F27F7BB6680(&(vLocal_108[unk_0x6BAA0516CC970D99() /*3*/]), 2);
						func_329(11, 1);
						vLocal_108[unk_0x6BAA0516CC970D99() /*3*/].f_2 = 3;
					}
					else
					{
						vLocal_108[unk_0x6BAA0516CC970D99() /*3*/].f_2 = 6;
						unk_0xF0059F27F7BB6680(&iLocal_111, 16);
					}
				}
			}
			break;
		
		case 3:
			if (func_328(Local_103.f_5))
			{
				func_327(Local_103.f_5);
				vLocal_108[unk_0x6BAA0516CC970D99() /*3*/].f_2 = 4;
			}
			break;
		
		case 4:
			if (!func_326())
			{
				if (func_216())
				{
					vLocal_108[unk_0x6BAA0516CC970D99() /*3*/].f_2 = 5;
					func_214(88, 1);
					func_213();
				}
				else if (unk_0xFA30DFD0084E92FE(iLocal_111, 8))
				{
					vLocal_108[unk_0x6BAA0516CC970D99() /*3*/].f_2 = 6;
				}
			}
			else if (func_204())
			{
				vLocal_108[unk_0x6BAA0516CC970D99() /*3*/].f_2 = 5;
			}
			else
			{
				if (unk_0xFA30DFD0084E92FE(iLocal_111, 8))
				{
					vLocal_108[unk_0x6BAA0516CC970D99() /*3*/].f_2 = 6;
				}
				if (unk_0xFA30DFD0084E92FE(Local_103, 15))
				{
					func_191(12, 116);
					vLocal_108[unk_0x6BAA0516CC970D99() /*3*/].f_2 = 6;
					unk_0xF0059F27F7BB6680(&iLocal_111, 16);
				}
			}
			break;
		
		case 5:
			if (Local_103.f_5 == 0)
			{
				func_61();
			}
			break;
		
		case 6:
			vLocal_108[unk_0x6BAA0516CC970D99() /*3*/] = 0;
			unk_0x7CB6FD92BE491AD9(&iLocal_111, 3);
			unk_0x7CB6FD92BE491AD9(&iLocal_111, 4);
			iLocal_110 = 0;
			func_191(12, 116);
			if (unk_0x2DA8CA50A72528FB(Global_193968))
			{
				unk_0x07B8ECB35A4ED3AC(&Global_193968);
			}
			func_60(&Local_123);
			func_53();
			func_329(11, 0);
			vLocal_108[unk_0x6BAA0516CC970D99() /*3*/].f_2 = 7;
			break;
		
		case 7:
			if (Local_103.f_2 == 0 && !unk_0xFA30DFD0084E92FE(Local_103, 10))
			{
				vLocal_108[unk_0x6BAA0516CC970D99() /*3*/].f_2 = 0;
			}
			break;
	}
}

void func_53()//Position - 0x1C30
{
	if (!func_59())
	{
		return;
	}
	if (!unk_0x56BEECB328B6D29D(unk_0x1377080E9B0BD993()) == Global_140740.f_9)
	{
		return;
	}
	func_54();
}

void func_54()//Position - 0x1C5D
{
	func_56();
	func_55(0);
}

void func_55(bool bParam0)//Position - 0x1C6E
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

void func_56()//Position - 0x1D00
{
	if (!func_58())
	{
	}
	if (func_59())
	{
		unk_0x0C2CA00C24C64582(&(Global_140740.f_C));
		func_57();
		unk_0xF633952844D6CF3D();
	}
}

void func_57()//Position - 0x1D29
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

int func_58()//Position - 0x1F9B
{
	if (!func_59())
	{
		return 0;
	}
	unk_0xE2CFC41F8121CE68(&(Global_140740.f_C));
	func_57();
	return unk_0x121EFFA2D57472F2();
}

int func_59()//Position - 0x1FC1
{
	if (Global_140740 == 20)
	{
		return 0;
	}
	return 1;
}

void func_60(int iParam0)//Position - 0x1FD7
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

void func_61()//Position - 0x2049
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (unk_0x8EA6CABD14F1B89A(Local_103.f_9[0]))
	{
		if (!func_38(Local_103.f_9[0]))
		{
			if (unk_0x2DA8CA50A72528FB(Global_193968))
			{
				if (func_189() || func_188())
				{
					unk_0x2E9308F22ABD4DF5(Global_193968, 0);
				}
				else
				{
					unk_0x2E9308F22ABD4DF5(Global_193968, 4);
				}
			}
			else
			{
				Global_193968 = unk_0x511FE22BCF5353CD(unk_0xE48AD7BF7762E114(Local_103.f_9[0]));
				unk_0x0D5352939CC40C16(Global_193968, 1);
				unk_0x3F5F1772D71D5EC4(Global_193968, 0f);
			}
			if (unk_0x2DA8CA50A72528FB(Local_123))
			{
				if (func_189() || func_188())
				{
					unk_0x2E9308F22ABD4DF5(Local_123, 0);
				}
				else
				{
					unk_0x2E9308F22ABD4DF5(Local_123, 4);
				}
				if (!unk_0xFA30DFD0084E92FE(iLocal_111, 10))
				{
					unk_0x436D0272182E484D(Local_123, "FM_GDM_BLP");
					unk_0xF0059F27F7BB6680(&iLocal_111, 10);
				}
			}
			if (unk_0x2DA8CA50A72528FB(Local_123.f_1))
			{
				if (func_189() || func_188())
				{
					unk_0x2E9308F22ABD4DF5(Local_123.f_1, 0);
				}
				else
				{
					unk_0x2E9308F22ABD4DF5(Local_123.f_1, 4);
				}
				if (!unk_0xFA30DFD0084E92FE(iLocal_111, 12))
				{
					unk_0x436D0272182E484D(Local_123.f_1, "FM_GDM_BLP");
					unk_0xF0059F27F7BB6680(&iLocal_111, 12);
				}
			}
			if (!unk_0xFA30DFD0084E92FE(iLocal_111, 6))
			{
				if (!unk_0xFA30DFD0084E92FE(Global_240006, 7) && !func_176(unk_0xB5CEFD608600A09F(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
				{
					if (unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F()))
					{
						if (!func_189())
						{
							func_170("FM_GDM_KIL", 0);
						}
						unk_0xF0059F27F7BB6680(&iLocal_111, 6);
					}
				}
			}
			else if (unk_0xFA30DFD0084E92FE(Global_240006, 7))
			{
				func_53();
				unk_0x7CB6FD92BE491AD9(&iLocal_111, 6);
			}
			else if (func_169())
			{
				func_53();
				unk_0x7CB6FD92BE491AD9(&iLocal_111, 6);
			}
			else if (func_176(unk_0xB5CEFD608600A09F(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
			{
				func_53();
				unk_0x7CB6FD92BE491AD9(&iLocal_111, 6);
			}
		}
		else if (unk_0xFA30DFD0084E92FE(iLocal_111, 6))
		{
			func_53();
			unk_0x7CB6FD92BE491AD9(&iLocal_111, 6);
		}
		if (!unk_0xFA30DFD0084E92FE(vLocal_108[unk_0x6BAA0516CC970D99() /*3*/], 1))
		{
			iVar1 = unk_0xDF6ED6F322C4F404(Local_103.f_9[0], &uVar0);
			if (iVar1 == unk_0xB5CEFD608600A09F())
			{
				unk_0xF0059F27F7BB6680(&(vLocal_108[unk_0x6BAA0516CC970D99() /*3*/]), 1);
				iVar2 = func_166(func_168(unk_0xB5CEFD608600A09F(), 1), 1);
				if (iVar2 > 100)
				{
					iVar2 = 100;
				}
				iVar3 = iVar2 * 20;
				iVar3 = SYSTEM::ROUND((Global_40001.f_1084 * IntToFloat(iVar3)));
				func_123(2, "XPT_KAIE", -1859646258, 2131309714, iVar3, 1, -1, 0);
				if (Global_40001.f_976 != 0f)
				{
					iVar4 = SYSTEM::ROUND(Global_40001.f_976);
				}
				else
				{
					iVar4 = 2000;
				}
				if (Global_40001.f_972 != 0f)
				{
					iVar5 = SYSTEM::ROUND(Global_40001.f_972);
				}
				else
				{
					iVar5 = 8000;
				}
				if (iVar4 >= 100)
				{
					iVar6 = (iVar4 / 100);
				}
				if (iVar5 >= 100)
				{
					iVar7 = (iVar5 / 100);
				}
				iVar8 = unk_0x491B2241281A03B7(iVar6, iVar7 + 1) * 100;
				iVar8 = func_122(iVar8, 1);
				if (iVar8 > iVar5)
				{
					iVar8 = iVar5;
				}
				func_74(&iVar8, 1);
				if (func_73())
				{
					if (iVar8 > 0)
					{
						func_64(-352356931, iVar8, &iVar9, 0, 0, 0);
						Global_41092C[iVar9 /*80*/].f_8 = -1146479277;
					}
				}
				else
				{
					unk_0x74B7D87EBC7BBA98(iVar8, -1146479277);
				}
				func_63(5, iVar8);
			}
			else if (iVar1 != func_62())
			{
				if (unk_0x96B1061E8F3CBC9A(iVar1))
				{
					if (!unk_0xFA30DFD0084E92FE(vLocal_108[unk_0x6BAA0516CC970D99() /*3*/], 7))
					{
						if (!unk_0xF6391659C669C3B1(iVar1))
						{
							unk_0xF0059F27F7BB6680(&(vLocal_108[unk_0x6BAA0516CC970D99() /*3*/]), 7);
						}
					}
				}
			}
		}
	}
}

int func_62()//Position - 0x23A2
{
	return -1;
}

void func_63(int iParam0, int iParam1)//Position - 0x23AB
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

void func_64(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x241D
{
	int iVar0;
	
	if (!func_73())
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
				func_65(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_65(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_65(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x28E3
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_73())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x060D652F887827B8(func_17()) || unk_0xEBA8BD5AE6FF01CA())
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
			*uParam0 = func_72(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1);
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
			func_71(1, iParam4);
			Global_410B51 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_66(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_66(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x2A87
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xF0059F27F7BB6680(&(Global_24FB5C[unk_0xB5CEFD608600A09F() /*406*/].f_76.f_47), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_67(iParam0);
	}
}

void func_67(int iParam0)//Position - 0x2ABF
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_73())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_70(iParam0))
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
		func_68(&(Global_41092C[iParam0 /*80*/]));
	}
}

void func_68(var uParam0)//Position - 0x2B11
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
	func_69(&(uParam0->f_8.f_3));
	func_69(&(uParam0->f_8.f_10));
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

void func_69(var uParam0)//Position - 0x2C07
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

int func_70(int iParam0)//Position - 0x2C4F
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_41092C[iParam0 /*80*/].f_5 == 1;
	}
	return 0;
}

void func_71(int iParam0, int iParam1)//Position - 0x2C77
{
	Global_25897B = iParam1;
	Global_25897A = iParam0;
}

int func_72(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9)//Position - 0x2C8B
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_41092C[iVar0 /*80*/].f_2 == 0)
		{
			if (!func_73())
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

int func_73()//Position - 0x2D84
{
	if (unk_0x8ACB0C3FACC09467())
	{
		return unk_0xC9D803F7D7E10861();
	}
	return 0;
}

void func_74(int iParam0, int iParam1)//Position - 0x2D9B
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_121())
		{
			if (func_120(0))
			{
				if (!func_116(0))
				{
					if (unk_0x96B1061E8F3CBC9A(func_115()))
					{
						if (func_114() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_114());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_112(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_80("GB_BCUT_TICK1", func_115(), iVar0, 0, 0, 1, 1);
						}
						func_79(20);
						func_75(func_115(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_75(int iParam0, int iParam1, int iParam2)//Position - 0x2E3B
{
	struct<8> Var0;
	
	if (func_360(iParam0, 0, 1))
	{
		Var0 = 1838378015;
		Var0.f_1 = unk_0xB5CEFD608600A09F();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_78(iParam0);
		func_77(&(Var0.f_6), &(Var0.f_7));
		unk_0x38E776D9FA75679B(1, &Var0, 8, func_76(iParam0));
	}
}

var func_76(int iParam0)//Position - 0x2E91
{
	var uVar0;
	
	unk_0xF0059F27F7BB6680(&uVar0, iParam0);
	return uVar0;
}

void func_77(var uParam0, var uParam1)//Position - 0x2EA3
{
	*uParam0 = Global_190DD1.f_9;
	*uParam1 = Global_190DD1.f_A;
}

var func_78(int iParam0)//Position - 0x2EBD
{
	return Global_18C80F[iParam0 /*558*/].f_1EB;
}

void func_79(int iParam0)//Position - 0x2ED1
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xF0059F27F7BB6680(&(Global_267214.f_1312.f_7[iVar0]), iVar1);
}

int func_80(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)//Position - 0x2EFA
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
		unk_0x449F0674640D94C0(func_87(iParam1, -2, 1, 0));
		unk_0x607C19B90D297FE2(func_85(&Var1));
		if (!iParam3 == 0)
		{
			unk_0x449F0674640D94C0(iParam3);
		}
		unk_0xAA5C5BF0489E5553(iParam2);
		iVar0 = unk_0x5E48BB10C6423FD5(0, 1);
		func_81(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_81(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x2F91
{
	int iVar0;
	
	if ((!func_84() || !unk_0x517823CA390A19F6()) || !func_15(unk_0xB5CEFD608600A09F(), 0))
	{
		return;
	}
	iVar0 = func_82(iParam2);
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

int func_82(int iParam0)//Position - 0x3099
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_195C05 - 1))
	{
		if (iParam0 > Global_195C05.f_5[iVar0 /*53*/].f_1)
		{
			func_83(iVar0);
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

void func_83(int iParam0)//Position - 0x30FB
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_195C05.f_5[iVar0 /*53*/] = { Global_195C05.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_84()//Position - 0x3134
{
	return unk_0x7B2F21BFE86AEB61(-1762644250);
}

var func_85(char* sParam0)//Position - 0x3145
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_86(&cVar0);
}

var func_86(char[4] cParam0)//Position - 0x3167
{
	return cParam0;
}

int func_87(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x3171
{
	int iVar0;
	int iVar1;
	
	if (func_330(iParam0))
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
	if ((func_330(unk_0xB5CEFD608600A09F()) || (func_111() && func_110())) && !unk_0xFA30DFD0084E92FE(Global_267214.f_11E0, 31))
	{
		iVar1 = func_109();
		if (unk_0x724D816EA203A79E(iVar1))
		{
			if (unk_0x15DBD981998D4FE1(iVar1))
			{
				if (unk_0x5363B43856FA7779(iVar1) != -1)
				{
					if (func_360(unk_0x5363B43856FA7779(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x517823CA390A19F6()) && iParam1 < 4)
						{
							if (Global_440000.f_1DBFD[iParam1] != -1)
							{
								return func_107(iParam1, iParam0, 0);
							}
							else
							{
								return func_95(iParam0, unk_0x5363B43856FA7779(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_95(iParam0, unk_0x5363B43856FA7779(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x517823CA390A19F6()) && iParam1 < 4)
			{
				if (Global_440000.f_1DBFD[iParam1] != -1)
				{
					return func_107(iParam1, iParam0, 0);
				}
				else
				{
					return func_88(0, -1, 0);
				}
			}
			else
			{
				return func_88(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x517823CA390A19F6()) && iParam1 < 4)
	{
		if (Global_440000.f_1DBFD[iParam1] != -1)
		{
			return func_107(iParam1, iParam0, 0);
		}
		else
		{
			return func_95(iParam0, unk_0xB5CEFD608600A09F(), iParam1, bParam2, bParam3);
		}
	}
	return func_95(iParam0, unk_0xB5CEFD608600A09F(), iParam1, bParam2, bParam3);
}

int func_88(bool bParam0, int iParam1, bool bParam2)//Position - 0x3341
{
	return func_89(unk_0xB5CEFD608600A09F(), bParam0, iParam1, bParam2);
}

int func_89(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x3357
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
			if (func_94(iVar0, iParam2, 0) && !unk_0xFA30DFD0084E92FE(Global_440000.f_F, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_93(1);
				}
				else
				{
					return func_93(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0xFA30DFD0084E92FE(Global_440000.f_4, 20))
			{
				return func_90(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_90(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_93(1);
	}
	return func_93(0);
}

int func_90(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x341B
{
	int iVar0;
	
	iVar0 = func_92(iParam0, iParam1, iParam3);
	if (func_91(Global_440000.f_1EF38, 1))
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

int func_91(int iParam0, bool bParam1)//Position - 0x3533
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

int func_92(int iParam0, int iParam1, int iParam2)//Position - 0x3584
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
			if (!func_94(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_93(bool bParam0)//Position - 0x35CB
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_94(int iParam0, int iParam1, int iParam2)//Position - 0x35E2
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

int func_95(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x37AD
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
			if (func_104(1))
			{
				iVar3 = func_100(iParam0);
				if (!iVar3 == -1)
				{
					return func_98(iVar3);
				}
			}
			if ((func_97(iParam1, iParam0, iVar0, 0) && !unk_0xFA30DFD0084E92FE(Global_440000.f_F, 18)) || ((func_94(unk_0x343CB262BF0CDF5A(iParam1), unk_0x343CB262BF0CDF5A(iParam0), 0) && unk_0xFA30DFD0084E92FE(Global_440000.f_F, 23)) && !unk_0xFA30DFD0084E92FE(Global_440000.f_F, 18)))
			{
				return func_93(1);
			}
			else if (unk_0xFA30DFD0084E92FE(Global_440000.f_F, 26))
			{
				return func_96(1);
			}
			else
			{
				return func_89(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1805D3 || Global_1805CA) || Global_18402B[iParam0 /*770*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1805D3 == 1 && Global_1805DD == 0))
			{
				return func_93(1);
			}
			else
			{
				return func_89(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1805CE && Global_1803FC.f_E == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_100(iParam0);
	if (!iVar4 == -1)
	{
		return func_98(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_96(bool bParam0)//Position - 0x3951
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_97(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3968
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

int func_98(int iParam0)//Position - 0x39E0
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_99(iParam0);
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

var func_99(int iParam0)//Position - 0x3AA3
{
	return Global_24E35D.f_817.f_2C[iParam0 /*2*/].f_1;
}

int func_100(int iParam0)//Position - 0x3ABA
{
	if (!iParam0 == func_62())
	{
		if (func_102(iParam0, 1))
		{
			return Global_24E35D.f_817.f_B[func_101(iParam0)];
		}
	}
	return -1;
}

int func_101(int iParam0)//Position - 0x3AEC
{
	if (iParam0 != func_62())
	{
		return Global_18C80F[iParam0 /*558*/].f_B;
	}
	return func_62();
}

bool func_102(int iParam0, bool bParam1)//Position - 0x3B0F
{
	if (!bParam1)
	{
		if (func_103(iParam0))
		{
			return 0;
		}
	}
	return Global_18C80F[iParam0 /*558*/].f_B != func_62();
}

int func_103(int iParam0)//Position - 0x3B3A
{
	if (iParam0 != func_62())
	{
		if (Global_18C80F[iParam0 /*558*/].f_B != func_62())
		{
			return Global_18C80F[iParam0 /*558*/].f_B == iParam0;
		}
	}
	return 0;
}

int func_104(int iParam0)//Position - 0x3B6F
{
	if ((func_106() || func_105()) || (func_21() && iParam0))
	{
		return 1;
	}
	return 0;
}

var func_105()//Position - 0x3B9E
{
	return Global_255A46.f_F;
}

var func_106()//Position - 0x3BAC
{
	return Global_255A46.f_E;
}

int func_107(int iParam0, int iParam1, bool bParam2)//Position - 0x3BBA
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_EF621.f_C[iParam0];
	if (func_104(1))
	{
		iVar2 = func_100(iParam1);
		if (!iVar2 == -1)
		{
			return func_98(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (unk_0xFA30DFD0084E92FE(Global_440000.f_62[iParam0 /*10231*/].f_14F1[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_62())
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
			iVar0 = func_89(iParam1, !bParam2, iParam0, 0);
		}
		if (unk_0xFA30DFD0084E92FE(Global_440000.f_15, 13))
		{
			iVar0 = func_108(iParam0);
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

int func_108(int iParam0)//Position - 0x3D1F
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

var func_109()//Position - 0x3DF4
{
	return Global_240006.f_2;
}

bool func_110()//Position - 0x3E02
{
	return unk_0xFA30DFD0084E92FE(Global_240006, 4);
}

bool func_111()//Position - 0x3E13
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_27.f_12, 14);
}

void func_112(int iParam0, bool bParam1)//Position - 0x3E30
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_113(1);
	}
	else
	{
		iVar1 = func_113(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_113(bool bParam0)//Position - 0x3E62
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_40001.f_2E03;
}

int func_114()//Position - 0x3E88
{
	return Global_40001.f_2E02;
}

int func_115()//Position - 0x3E97
{
	return Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B;
}

bool func_116(bool bParam0)//Position - 0x3EAC
{
	return func_117(unk_0xB5CEFD608600A09F(), bParam0);
}

int func_117(int iParam0, bool bParam1)//Position - 0x3EBE
{
	return func_118(iParam0, bParam1, 1);
}

int func_118(int iParam0, bool bParam1, int iParam2)//Position - 0x3ECF
{
	int iVar0;
	
	if (iParam0 == func_62())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_119(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_18C80F[iParam0 /*558*/].f_B;
	if (iVar0 != func_62() && Global_18C80F[iVar0 /*558*/].f_B.f_199 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_119(int iParam0, int iParam1)//Position - 0x3F2B
{
	if (iParam0 != func_62())
	{
		if (Global_18C80F[iParam0 /*558*/].f_B != func_62())
		{
			if (Global_18C80F[iParam0 /*558*/].f_B == iParam0 && Global_18C80F[iParam0 /*558*/].f_B.f_199 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_120(bool bParam0)//Position - 0x3F7A
{
	return func_102(unk_0xB5CEFD608600A09F(), bParam0);
}

bool func_121()//Position - 0x3F8C
{
	return func_103(unk_0xB5CEFD608600A09F());
}

int func_122(int iParam0, int iParam1)//Position - 0x3F9C
{
	float fVar0;
	
	switch (iParam1)
	{
		case 0:
			break;
		
		case 1:
			if (iParam0 > 0)
			{
				fVar0 = (SYSTEM::TO_FLOAT(iParam0) * Global_40001);
				iParam0 = SYSTEM::ROUND(fVar0);
			}
			break;
		
		default:
			break;
	}
	return iParam0;
}

var func_123(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x3FDD
{
	return func_124(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

var func_124(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x3FF9
{
	var uVar0;
	
	uVar0 = func_125(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_125(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x401E
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_165(unk_0xB5CEFD608600A09F()) || func_164(unk_0xB5CEFD608600A09F()))
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
	else if (func_162() || func_158(unk_0xB5CEFD608600A09F()))
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
	if (func_157(sParam2))
	{
	}
	if (func_156())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_154(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_40001.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_153(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_151(0, &iVar1);
					break;
				
				case 3:
					func_151(1, &iVar1);
					break;
				
				case 1:
					func_148(&iVar1);
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
			func_145(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_136((func_144(unk_0xB5CEFD608600A09F()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x5FF267E54EB49897(iVar1, iParam8, iParam9);
				if (Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_27.f_2 != -1)
				{
					func_145(1165, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_130(iVar1);
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
				func_126((func_128(unk_0xB5CEFD608600A09F()) + iVar1));
			}
			else
			{
				func_126((func_128(unk_0xB5CEFD608600A09F()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_126(int iParam0)//Position - 0x421C
{
	if (func_156())
	{
		Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_D3.f_5 = iParam0;
		func_127(joaat("mpply_globalxp"), iParam0);
	}
}

void func_127(int iParam0, int iParam1)//Position - 0x4247
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x3A57956BCE003880(iVar0, iParam1, 1);
	}
}

int func_128(int iParam0)//Position - 0x4263
{
	if (iParam0 > -1)
	{
		if (func_360(iParam0, 0, 1))
		{
			if (iParam0 == unk_0xB5CEFD608600A09F())
			{
				return func_129(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_18402B[iParam0 /*770*/].f_D3.f_5;
			}
		}
		else
		{
			return func_129(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_129(int iParam0)//Position - 0x42B4
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

void func_130(int iParam0)//Position - 0x42D2
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_135(unk_0xB5CEFD608600A09F()) };
	if (unk_0xB9ACC1154C623363())
	{
		if (unk_0xD7F4457CECF10121(&Var0))
		{
			iVar1 = func_133(func_134(&Var0));
			if (iVar1 == 0)
			{
				func_132(&Global_14F5C9, iParam0);
				func_131(joaat("mpply_crew_local_xp_0"), Global_14F5C9);
			}
			else if (iVar1 == 1)
			{
				func_132(&Global_14F5CA, iParam0);
				func_131(joaat("mpply_crew_local_xp_1"), Global_14F5CA);
			}
			else if (iVar1 == 2)
			{
				func_132(&Global_14F5CB, iParam0);
				func_131(joaat("mpply_crew_local_xp_2"), Global_14F5CB);
			}
			else if (iVar1 == 3)
			{
				func_132(&Global_14F5CC, iParam0);
				func_131(joaat("mpply_crew_local_xp_3"), Global_14F5CC);
			}
			else if (iVar1 == 4)
			{
				func_132(&Global_14F5CD, iParam0);
				func_131(joaat("mpply_crew_local_xp_4"), Global_14F5CD);
			}
		}
	}
}

void func_131(int iParam0, int iParam1)//Position - 0x43A6
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

void func_132(var uParam0, int iParam1)//Position - 0x44CB
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_133(int iParam0)//Position - 0x44DC
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

int func_134(var uParam0)//Position - 0x4539
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

struct<13> func_135(int iParam0)//Position - 0x455C
{
	struct<13> Var0;
	
	unk_0xB7DBA2C6D2C3C41A(iParam0, &Var0, 13);
	return Var0;
}

void func_136(int iParam0, int iParam1, int iParam2)//Position - 0x4573
{
	if (func_156())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_40001.f_2320 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_14F642[func_143(-1)])
				{
					unk_0x5FF267E54EB49897(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_14F642[func_143(-1)])
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
		if (func_142(unk_0xB5CEFD608600A09F()))
		{
			Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_D3.f_1 = iParam0;
			Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_D3.f_6 = func_166(iParam0, 1);
		}
		func_141(639, iParam0, -1, 1);
		func_140(640, func_166(iParam0, 1), -1, 1, 0);
		Global_14F642[func_143(-1)] = iParam0;
		func_137(7, 0);
	}
}

void func_137(int iParam0, int iParam1)//Position - 0x4694
{
	int iVar0;
	
	if (func_139(iParam0, iParam1))
	{
		iVar0 = func_138();
		Global_258004[iVar0] = iParam0;
	}
}

int func_138()//Position - 0x46B7
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

int func_139(int iParam0, var uParam1)//Position - 0x46EC
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

void func_140(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x4772
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_269BC5[iParam0 /*3*/][func_143(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x3A57956BCE003880(iVar0, iParam1, iParam3);
	}
}

void func_141(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x47A2
{
	int iVar0;
	
	iVar0 = Global_269BC5[iParam0 /*3*/][func_143(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x3A57956BCE003880(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_14F606[func_143(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_14F60C[func_143(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_14F612[func_143(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_14F618[func_143(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_14F5EE[func_143(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_14F5F4[func_143(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_14F5FA[func_143(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_14F600[func_143(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_14F5D6[func_143(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_14F5DC[func_143(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_14F5E2[func_143(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_14F5E8[func_143(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_14F61E[func_143(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_14F624[func_143(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_14F62A[func_143(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_14F630[func_143(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_14F636[func_143(iParam2)] = iParam1;
			break;
		
		case 7229:
			Global_14F63C[func_143(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_14F642[func_143(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_14F648[func_143(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_270CF3[0 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_270CF3[1 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 2925:
			Global_270CF3[2 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_270CF3[3 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 7818:
			Global_270D5E[func_143(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_14F64E[func_143(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_14F654[func_143(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_14F65A[func_143(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_14F660[func_143(iParam2)] = iParam1;
			break;
		
		case 3049:
			Global_270D27[0 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 3050:
			Global_270D27[1 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 3051:
			Global_270D27[2 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 3052:
			Global_270D27[3 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_270D27[4 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 3632:
			Global_270D61[0 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 3633:
			Global_270D61[1 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 3634:
			Global_270D61[2 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 3635:
			Global_270D61[3 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_270D61[4 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_270D71[0 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_270D71[1 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_270D71[2 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_270D71[3 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_270D71[4 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 3217:
			Global_270D27[5 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_270CF3[4 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 3659:
			Global_270D81[func_143(iParam2)] = iParam1;
			break;
		
		case 3660:
			Global_270D8A[func_143(iParam2)] = iParam1;
			break;
		
		case 3661:
			Global_270D84[func_143(iParam2)] = iParam1;
			break;
		
		case 3662:
			Global_270D8D[func_143(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_270D87[func_143(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_270D90[func_143(iParam2)] = iParam1;
			break;
		
		case 3685:
			Global_270D93[func_143(iParam2)] = iParam1;
			break;
		
		case 3225:
			Global_270D27[6 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 3226:
			Global_270CF3[5 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_270D27[7 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 3228:
			Global_270CF3[6 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 4015:
			Global_270D27[8 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 4016:
			Global_270CF3[7 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 4018:
			Global_270D27[9 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_270CF3[8 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 4021:
			Global_270D27[10 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_270CF3[9 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 4024:
			Global_270D27[11 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_270CF3[10 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 6105:
			Global_270D27[12 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 6106:
			Global_270CF3[11 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 6163:
			Global_270D27[13 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 6164:
			Global_270CF3[12 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 6541:
			Global_270D27[14 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 6542:
			Global_270CF3[13 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 6554:
			Global_270D27[15 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 6555:
			Global_270CF3[14 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 6557:
			Global_270D27[16 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_270CF3[15 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 6560:
			Global_270D27[17 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_270CF3[16 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_142(int iParam0)//Position - 0x4F5C
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

int func_143(int iParam0)//Position - 0x4F81
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_17();
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

int func_144(int iParam0)//Position - 0x4FB5
{
	if (Global_1406D2.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0xB5CEFD608600A09F())
			{
				return Global_14F642[func_143(-1)];
			}
			else if (func_142(iParam0))
			{
				return Global_18402B[iParam0 /*770*/].f_D3.f_1;
			}
		}
	}
	else
	{
		return Global_14F642[func_143(-1)];
	}
	return 0;
}

void func_145(int iParam0, int iParam1, int iParam2)//Position - 0x5012
{
	int iVar0;
	
	iVar0 = func_147(iParam0, func_143(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_146(iParam0))
	{
		func_140(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_141(iParam0, iVar0, iParam2, 1);
	}
}

int func_146(int iParam0)//Position - 0x5054
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

int func_147(int iParam0, int iParam1, int iParam2)//Position - 0x524C
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_269BC5[iParam0 /*3*/][func_143(iParam1)];
	if (unk_0x6CB99B97664C3727(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_148(int iParam0)//Position - 0x527E
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
				if (unk_0x343CB262BF0CDF5A(iVar5) == iVar1 || func_94(unk_0x343CB262BF0CDF5A(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0xB5CEFD608600A09F())
					{
						if (func_150(unk_0xB5CEFD608600A09F(), iVar5))
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
		iVar6 = SYSTEM::ROUND((func_149(*iParam0, 100) * (10f * Global_40001.f_1079)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_149(*iParam0, 100) * (20f * Global_40001.f_1072)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_149(int iParam0, int iParam1)//Position - 0x5369
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_150(int iParam0, int iParam1)//Position - 0x538A
{
	if (unk_0xB9ACC1154C623363())
	{
		Global_26210D = { func_135(iParam0) };
		Global_26211A = { func_135(iParam1) };
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

void func_151(bool bParam0, int iParam1)//Position - 0x53F7
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
				if (func_360(iVar4, 0, 1))
				{
					if (iVar4 != unk_0xB5CEFD608600A09F())
					{
						iVar1++;
						if (func_150(unk_0xB5CEFD608600A09F(), iVar4))
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
			if (func_360(iVar4, 1, 1))
			{
				if (iVar4 != unk_0xB5CEFD608600A09F())
				{
					if (func_152(unk_0xB5CEFD608600A09F(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_150(unk_0xB5CEFD608600A09F(), iVar4))
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
		iVar5 = SYSTEM::ROUND((func_149(*iParam1, 100) * (10f * Global_40001.f_1079)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_149(*iParam1, 100) * (20f * Global_40001.f_1072)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_152(int iParam0, int iParam1)//Position - 0x550F
{
	return SYSTEM::VDIST(func_19(iParam0), func_19(iParam1));
	return 0f;
}

int func_153(int iParam0)//Position - 0x552B
{
	int iVar0;
	
	if (unk_0x8820DB58BCD4A148() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_149(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_154(int iParam0)//Position - 0x5562
{
	if (iParam0 < 0)
	{
		if (unk_0xC40EDFF7541407A8(iParam0) > func_144(unk_0xB5CEFD608600A09F()))
		{
			iParam0 = -func_144(unk_0xB5CEFD608600A09F());
		}
	}
	if (func_155(8000, 0, 0) > 0)
	{
		if (func_155(8000, 0, 0) < (iParam0 + func_144(unk_0xB5CEFD608600A09F())))
		{
			iParam0 = (func_155(8000, 0, 0) - func_144(unk_0xB5CEFD608600A09F()));
		}
	}
	return iParam0;
}

int func_155(int iParam0, bool bParam1, int iParam2)//Position - 0x55C6
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

int func_156()//Position - 0x55EE
{
	return 1;
}

int func_157(char* sParam0)//Position - 0x55F7
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

int func_158(int iParam0)//Position - 0x562F
{
	return func_159(func_160(iParam0));
}

int func_159(int iParam0)//Position - 0x5641
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_160(int iParam0)//Position - 0x565B
{
	if (func_161(iParam0, 0))
	{
		return Global_18C80F[iParam0 /*558*/].f_B.f_21;
	}
	return -1;
}

int func_161(int iParam0, int iParam1)//Position - 0x567E
{
	if (Global_18C80F[iParam0 /*558*/].f_B.f_21 != -1 || (iParam1 && Global_18C80F[iParam0 /*558*/].f_B.f_20 != -1))
	{
		return 1;
	}
	return 0;
}

int func_162()//Position - 0x56B9
{
	if (unk_0x517823CA390A19F6())
	{
		return func_21();
	}
	return func_163(Global_440000.f_1EF38);
}

int func_163(int iParam0)//Position - 0x56DD
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

bool func_164(int iParam0)//Position - 0x5717
{
	return Global_24FB5C[iParam0 /*406*/].f_6F == 2;
}

bool func_165(int iParam0)//Position - 0x572C
{
	return Global_24FB5C[iParam0 /*406*/].f_6F == 7;
}

int func_166(int iParam0, bool bParam1)//Position - 0x5741
{
	if (bParam1)
	{
	}
	return func_167(iParam0, 0);
}

int func_167(int iParam0, int iParam1)//Position - 0x5755
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

int func_168(int iParam0, bool bParam1)//Position - 0x5814
{
	if (bParam1)
	{
	}
	return func_144(iParam0);
}

bool func_169()//Position - 0x5827
{
	return Global_10AB8;
}

void func_170(char* sParam0, bool bParam1)//Position - 0x5833
{
	if (unk_0xF1734B55490E9045(sParam0))
	{
		return;
	}
	if (unk_0xF5429F058A48A07C(sParam0) > 23)
	{
		return;
	}
	if (func_174(sParam0))
	{
		return;
	}
	func_54();
	Global_140740 = 0;
	StringCopy(&(Global_140740.f_1), unk_0x1377080E9B0BD993(), 32);
	Global_140740.f_9 = unk_0x56BEECB328B6D29D(&(Global_140740.f_1));
	StringCopy(&(Global_140740.f_C), sParam0, 16);
	func_173();
	func_172(bParam1);
	func_171();
}

void func_171()//Position - 0x589E
{
	unk_0xF0059F27F7BB6680(&(Global_140740.f_3B), 1);
}

void func_172(bool bParam0)//Position - 0x58B1
{
	if (bParam0)
	{
		unk_0xF0059F27F7BB6680(&(Global_140740.f_3B), 0);
		return;
	}
	unk_0x7CB6FD92BE491AD9(&(Global_140740.f_3B), 0);
}

void func_173()//Position - 0x58D7
{
	Global_140740.f_A = unk_0x863D0D1A37055D36(unk_0xED678C85A82F0AB9(), 86400000);
	Global_140740.f_B = unk_0xED678C85A82F0AB9();
}

bool func_174(char* sParam0)//Position - 0x58FC
{
	if (!func_59())
	{
		return 0;
	}
	if (Global_140740 == 11)
	{
		return func_175(sParam0);
	}
	if (unk_0xF1734B55490E9045(sParam0))
	{
		return 0;
	}
	return unk_0x56BEECB328B6D29D(sParam0) == unk_0x56BEECB328B6D29D(&(Global_140740.f_C));
}

bool func_175(char* sParam0)//Position - 0x5940
{
	if (!func_59())
	{
		return 0;
	}
	if (unk_0xF1734B55490E9045(sParam0))
	{
		return 0;
	}
	return unk_0x56BEECB328B6D29D(sParam0) == unk_0x56BEECB328B6D29D(&(Global_140740.f_10));
}

int func_176(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)//Position - 0x5972
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
		if (func_187(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_186(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_185(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_184(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_183(iParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_182(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_181(iParam0))
		{
			return 1;
		}
	}
	if (!bParam9)
	{
		if (func_180(iParam0))
		{
			return 1;
		}
	}
	if (!bParam10)
	{
		if (func_179(iParam0))
		{
			return 1;
		}
	}
	if (!bParam11)
	{
		if (func_177(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_177(int iParam0, bool bParam1)//Position - 0x5A72
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
	if (iParam0 != func_62())
	{
		if (func_360(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1 && Global_24FB5C[iParam0 /*406*/].f_131.f_4 != func_62())
			{
				return func_178(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 12;
			}
		}
	}
	return 0;
}

int func_178(int iParam0)//Position - 0x5B00
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

int func_179(int iParam0)//Position - 0x5E4C
{
	if (iParam0 != func_62())
	{
		if (func_360(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1)
			{
				return func_178(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 11;
			}
		}
	}
	return 0;
}

int func_180(int iParam0)//Position - 0x5E93
{
	if (iParam0 != func_62())
	{
		if (func_360(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1)
			{
				return func_178(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 11;
			}
		}
	}
	return 0;
}

int func_181(int iParam0)//Position - 0x5EDA
{
	if (iParam0 != func_62())
	{
		if (func_360(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1 && Global_24FB5C[iParam0 /*406*/].f_131.f_4 != func_62())
			{
				return func_178(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 8;
			}
		}
	}
	return 0;
}

int func_182(int iParam0)//Position - 0x5F3A
{
	if (iParam0 != func_62())
	{
		if (func_360(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1)
			{
				return func_178(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 9;
			}
		}
	}
	return 0;
}

int func_183(int iParam0)//Position - 0x5F81
{
	if (iParam0 != func_62())
	{
		if (func_360(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1)
			{
				return func_178(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 7;
			}
		}
	}
	return 0;
}

int func_184(int iParam0)//Position - 0x5FC7
{
	if (iParam0 != func_62())
	{
		if (func_360(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1)
			{
				return func_178(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 4;
			}
		}
	}
	return 0;
}

int func_185(int iParam0)//Position - 0x600D
{
	if (iParam0 != func_62())
	{
		if (func_360(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1)
			{
				return func_178(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 1;
			}
		}
	}
	return 0;
}

int func_186(int iParam0)//Position - 0x6053
{
	if (iParam0 != func_62())
	{
		if (func_360(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1)
			{
				return func_178(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 2;
			}
		}
	}
	return 0;
}

int func_187(int iParam0)//Position - 0x6099
{
	if (iParam0 != func_62())
	{
		if (func_360(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1)
			{
				return func_178(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 0;
			}
		}
	}
	return 0;
}

var func_188()//Position - 0x60DF
{
	return Global_24DCC0.f_699;
}

int func_189()//Position - 0x60EE
{
	if (func_190(18))
	{
		return 1;
	}
	if (func_190(0))
	{
		return 1;
	}
	return 0;
}

bool func_190(int iParam0)//Position - 0x6110
{
	int iVar0;
	
	iVar0 = func_147(2476, -1, 0);
	return unk_0xFA30DFD0084E92FE(iVar0, iParam0);
}

void func_191(int iParam0, int iParam1)//Position - 0x612B
{
	int iVar0;
	
	iVar0 = func_203(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (!iParam1 == Global_248844[iVar0 /*46*/].f_8)
	{
		return;
	}
	if (!Global_248844[iVar0 /*46*/].f_4 && Global_248844[iVar0 /*46*/])
	{
		Global_248844[iVar0 /*46*/].f_4 = 1;
		func_195();
	}
	func_192(iVar0);
}

void func_192(int iParam0)//Position - 0x6188
{
	int iVar0;
	int iVar1;
	
	if (iParam0 >= Global_14F51B)
	{
		return;
	}
	if (Global_248844[iParam0 /*46*/].f_1A != -1)
	{
		unk_0x8C563C8EA840EA02(Global_248844[iParam0 /*46*/].f_1A);
	}
	iVar0 = iParam0;
	iVar1 = iVar0 + 1;
	while (iVar1 < Global_14F51B)
	{
		Global_248844[iVar0 /*46*/] = { Global_248844[iVar1 /*46*/] };
		Global_248844[iVar0 /*46*/] = { Global_248844[iVar1 /*46*/] };
		iVar0++;
		iVar1++;
	}
	func_194(iVar0);
	Global_14F51B = (Global_14F51B - 1);
	if (Global_14F4FE)
	{
		if (Global_14F4FC > 0)
		{
			func_193();
		}
	}
}

void func_193()//Position - 0x6229
{
	Global_14F4FE = 0;
}

void func_194(int iParam0)//Position - 0x6236
{
	Global_248844[iParam0 /*46*/] = 0;
	Global_248844[iParam0 /*46*/].f_2 = 0;
	Global_248844[iParam0 /*46*/].f_3 = 0;
	Global_248844[iParam0 /*46*/].f_4 = 0;
	Global_248844[iParam0 /*46*/].f_5 = func_62();
	Global_248844[iParam0 /*46*/].f_6 = 145;
	Global_248844[iParam0 /*46*/].f_7 = 1;
	Global_248844[iParam0 /*46*/].f_8 = -1;
	Global_248844[iParam0 /*46*/].f_9 = -1;
	StringCopy(&(Global_248844[iParam0 /*46*/].f_A), "", 64);
	Global_248844[iParam0 /*46*/].f_1A = -1;
	StringCopy(&(Global_248844[iParam0 /*46*/].f_1B), "", 32);
	Global_248844[iParam0 /*46*/].f_23 = -1;
	Global_248844[iParam0 /*46*/].f_24 = -1;
	Global_248844[iParam0 /*46*/].f_25 = 0;
	Global_248844[iParam0 /*46*/].f_27 = 0;
	Global_248844[iParam0 /*46*/].f_28 = -1;
	Global_248844[iParam0 /*46*/].f_29 = 0;
	Global_248844[iParam0 /*46*/].f_2A = 0;
	Global_248844[iParam0 /*46*/].f_2B = 0;
	Global_248844[iParam0 /*46*/].f_2D = 0;
	if (unk_0x7AF0088ABFA713B6())
	{
		Global_248844[iParam0 /*46*/].f_26 = unk_0xED678C85A82F0AB9();
	}
}

void func_195()//Position - 0x6344
{
	Global_41DF = (Global_41DF - 1);
	if (Global_41DF < 0)
	{
		func_202("[MMM][NewJobInv][JobList] Calling Reset_New_Invites_Indicator from Decrement_New_Invites_Indicator");
	}
	func_196();
}

void func_196()//Position - 0x6366
{
	if (!Global_3944)
	{
		if (Global_389D.f_1 == 6)
		{
			func_201(Global_388A, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_197(1);
			func_201(Global_388A, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_3889), -1082130432, -1082130432, -1082130432);
		}
	}
}

void func_197(int iParam0)//Position - 0x63C3
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
		if (func_200(14))
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
								func_199(&(Global_942[iVar1 /*15*/]));
								unk_0x1E1FB49121565EB6(iVar2);
								unk_0xF9FBC2F3F73D94C9();
							}
							if (Global_25805E)
							{
								if (iVar1 == 14)
								{
									func_198(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_942[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_41DF), -1f, &(Global_942[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_198(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_942[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_41E4), -1f, &(Global_942[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_198(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_942[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_942[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_198(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_942[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_942[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_198(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_942[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_41DF), -1f, &(Global_942[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x29CD142125FE177B(Global_388A, "SET_DATA_SLOT");
								unk_0x1E1FB49121565EB6(1);
								unk_0x1E1FB49121565EB6(iVar0);
								unk_0x1E1FB49121565EB6(Global_942[iVar1 /*15*/].f_A);
								unk_0x1E1FB49121565EB6(0);
								func_199(&(Global_942[iVar1 /*15*/]));
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
								func_199(&(Global_942[iVar1 /*15*/]));
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
								func_199(&(Global_942[iVar1 /*15*/]));
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
								func_199(&(Global_942[iVar1 /*15*/]));
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
								func_199(&(Global_942[iVar1 /*15*/]));
								unk_0x1E1FB49121565EB6(42);
								unk_0xF9FBC2F3F73D94C9();
							}
							else if (Global_942[iVar1 /*15*/].f_A == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_18C323.f_1;
								func_198(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_942[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_942[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_198(Global_388A, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_942[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(0), -1f, &(Global_942[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_198(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x695B
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
		func_199(sParam7);
	}
	if (!unk_0xF1734B55490E9045(sParam8))
	{
		func_199(sParam8);
	}
	if (!unk_0xF1734B55490E9045(sParam9))
	{
		func_199(sParam9);
	}
	if (!unk_0xF1734B55490E9045(sParam10))
	{
		func_199(sParam10);
	}
	if (!unk_0xF1734B55490E9045(sParam11))
	{
		func_199(sParam11);
	}
	unk_0xF9FBC2F3F73D94C9();
}

void func_199(char* sParam0)//Position - 0x6A0E
{
	unk_0x57016C44F10111F0(sParam0);
	unk_0x64989E60CF560CA1();
}

bool func_200(int iParam0)//Position - 0x6A20
{
	return Global_8C41 == iParam0;
}

void func_201(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x6A2E
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

void func_202(char* sParam0)//Position - 0x6A91
{
	if (Global_41DF != 0)
	{
		if (!unk_0xF1734B55490E9045(sParam0))
		{
		}
		Global_41DF = 0;
	}
}

int func_203(int iParam0)//Position - 0x6AAE
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_14F51B)
	{
		if (!Global_248844[iVar0 /*46*/].f_7)
		{
			if (Global_248844[iVar0 /*46*/].f_6 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_204()//Position - 0x6AF1
{
	if (!unk_0xFA30DFD0084E92FE(iLocal_111, 17))
	{
		func_206(12, 116, "", 1, 0, 1, 0);
		unk_0xF0059F27F7BB6680(&iLocal_111, 17);
	}
	else if (!unk_0xFA30DFD0084E92FE(iLocal_111, 18))
	{
		if (func_205(12, 116))
		{
			unk_0xF0059F27F7BB6680(&iLocal_111, 18);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_205(int iParam0, int iParam1)//Position - 0x6B43
{
	int iVar0;
	
	iVar0 = func_203(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!iParam1 == Global_248844[iVar0 /*46*/].f_8)
	{
		return 0;
	}
	if (!Global_248844[iVar0 /*46*/].f_2)
	{
		return 0;
	}
	func_192(iVar0);
	Global_248CD1 = unk_0x105601648511CC64() + 1500;
	return 1;
}

void func_206(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6)//Position - 0x6B96
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<4> Var3;
	
	iVar0 = func_203(iParam0);
	if (bParam5)
	{
		if (iVar0 != -1)
		{
			func_192(iVar0);
		}
	}
	iVar1 = iParam0;
	bVar2 = false;
	StringCopy(&Var3, "", 32);
	func_207(iParam1, iVar1, bVar2, sParam2, &Var3, iParam3, -1, -1, -1, iParam4, iParam6);
}

void func_207(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4, var uParam5, int iParam6, int iParam7, int iParam8, var uParam9, var uParam10)//Position - 0x6BDC
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<46> Var5;
	bool bVar6;
	struct<13> Var7;
	int iVar8;
	
	iVar0 = func_62();
	iVar1 = 145;
	if (bParam2)
	{
		iVar0 = unk_0x3171C34AB3FE6F2E(iParam1);
	}
	else
	{
		iVar1 = iParam1;
	}
	if (bParam2)
	{
		if (func_212())
		{
			return;
		}
	}
	iVar2 = Global_14F51B;
	if (iVar2 >= 12)
	{
		iVar2 = (iVar2 - 1);
	}
	iVar3 = (iVar2 - 1);
	while (iVar3 >= 0)
	{
		Global_248844[iVar2 /*46*/] = { Global_248844[iVar3 /*46*/] };
		iVar2 = (iVar2 - 1);
		iVar3 = (iVar3 - 1);
	}
	Global_14F51B++;
	if (Global_14F51B > 12)
	{
		Global_14F51B = 12;
	}
	iVar4 = 0;
	if (Global_248844[1 /*46*/].f_1)
	{
		Global_248844[0 /*46*/] = { Global_248844[1 /*46*/] };
		Global_248844[1 /*46*/] = { Var5 };
		iVar4 = 1;
	}
	if (iVar4 == 0)
	{
		Global_248844[iVar4 /*46*/].f_1 = uParam10;
	}
	else
	{
		Global_248844[iVar4 /*46*/].f_1 = 0;
	}
	Global_248844[iVar4 /*46*/] = 0;
	Global_248844[iVar4 /*46*/].f_2 = 0;
	Global_248844[iVar4 /*46*/].f_3 = 0;
	Global_248844[iVar4 /*46*/].f_4 = 0;
	Global_248844[iVar4 /*46*/].f_5 = iVar0;
	Global_248844[iVar4 /*46*/].f_6 = iVar1;
	Global_248844[iVar4 /*46*/].f_7 = bParam2;
	Global_248844[iVar4 /*46*/].f_8 = iParam0;
	Global_248844[iVar4 /*46*/].f_9 = -1;
	StringCopy(&(Global_248844[iVar4 /*46*/].f_A), sParam3, 64);
	Global_248844[iVar4 /*46*/].f_1A = -1;
	StringCopy(&(Global_248844[iVar4 /*46*/].f_1B), sParam4, 32);
	Global_248844[iVar4 /*46*/].f_23 = iParam6;
	Global_248844[iVar4 /*46*/].f_24 = iParam7;
	Global_248844[iVar4 /*46*/].f_25 = 0;
	Global_248844[iVar4 /*46*/].f_26 = unk_0xED678C85A82F0AB9();
	Global_248844[iVar4 /*46*/].f_27 = uParam5;
	Global_248844[iVar4 /*46*/].f_28 = Global_248CD0;
	Global_248844[iVar4 /*46*/].f_2C = iParam8;
	Global_248844[iVar4 /*46*/].f_2D = uParam9;
	if (iParam0 == 123 || iParam0 == 234)
	{
		Global_248844[iVar4 /*46*/].f_9 = func_209();
	}
	Global_248CD0++;
	func_208();
	Global_248844[iVar4 /*46*/].f_29 = 0;
	Global_248844[iVar4 /*46*/].f_2A = 0;
	Global_248844[iVar4 /*46*/].f_2B = 0;
	if (unk_0xF49912B78E2591B6())
	{
		if (bParam2)
		{
			bVar6 = true;
			if (bVar6)
			{
				Var7 = { func_135(iVar0) };
				iVar8 = unk_0x9BD2E680D4EF6B0A(&Var7);
				if (iVar8 != -1)
				{
					Global_248844[iVar4 /*46*/].f_29 = iVar8;
					Global_248844[iVar4 /*46*/].f_2A = 1;
					Global_248844[iVar4 /*46*/].f_2B = 0;
				}
			}
		}
	}
}

void func_208()//Position - 0x6E51
{
	Global_14F500 = unk_0x863D0D1A37055D36(unk_0xED678C85A82F0AB9(), 30000);
}

int func_209()//Position - 0x6E68
{
	vector3 vVar0[24];
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	StringCopy(&cVar0, "", 24);
	cVar0 = { func_211() };
	if (unk_0xF1734B55490E9045(&cVar0) || unk_0x3362CDE8460ED38B(".", &cVar0))
	{
		return -1;
	}
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		switch (iVar1)
		{
			case 0:
				StringCopy(&cVar0, func_210(53, -1), 24);
				break;
			
			case 1:
				StringCopy(&cVar0, func_210(54, -1), 24);
				break;
			
			case 2:
				StringCopy(&cVar0, func_210(55, -1), 24);
				break;
			
			case 3:
				StringCopy(&cVar0, func_210(56, -1), 24);
				break;
			
			case 4:
				StringCopy(&cVar0, func_210(57, -1), 24);
				break;
			
			case 5:
				StringCopy(&cVar0, func_210(58, -1), 24);
				break;
			
			case 6:
				StringCopy(&cVar0, func_210(59, -1), 24);
				break;
			
			default:
				StringCopy(&cVar0, "", 24);
				break;
		}
		if (!unk_0xF1734B55490E9045(&cVar0) && !unk_0x3362CDE8460ED38B(".", &cVar0))
		{
			iVar2++;
		}
		iVar1++;
	}
	if (iVar2 == 0)
	{
		return -1;
	}
	iVar3 = func_147(7335, -1, 0);
	iVar4 = 0;
	iVar1 = 0;
	while (iVar1 < iVar2)
	{
		iVar4 = iVar1 * 3;
		if (iVar4 != -1)
		{
			if (!unk_0xFA30DFD0084E92FE(iVar3, iVar4))
			{
				return 7;
			}
		}
		iVar1++;
	}
	return 1;
}

char* func_210(int iParam0, int iParam1)//Position - 0x6FB7
{
	var uVar0;
	
	uVar0 = Global_2709BD[iParam0 /*3*/][func_143(iParam1)];
	return unk_0x91BB75E88F326596(uVar0, -1);
}

struct<6> func_211()//Position - 0x6FD8
{
	struct<6> Var0;
	int iVar1;
	int iVar2;
	
	if (unk_0xF1734B55490E9045(&(Global_19511E.f_A)))
	{
		iVar2 = func_147(7336, -1, 0);
		if (iVar2 == 0)
		{
			StringCopy(&Var0, ".", 24);
		}
		else
		{
			iVar1 = 0;
			while (iVar1 < 1118)
			{
				if ((Global_C2055.f_4[iVar1 /*88*/].f_41 == 0 && Global_C2055.f_4[iVar1 /*88*/].f_44 == 1) && unk_0xFA30DFD0084E92FE(Global_C2055.f_4[iVar1 /*88*/].f_4C, 13))
				{
					if (Global_C2055.f_18055[iVar1 /*13*/].f_1 == iVar2)
					{
						Var0 = { Global_C2055.f_1B929[Global_C2055.f_18055[iVar1 /*13*/].f_A /*6*/] };
						iVar1 = 1118;
					}
				}
				iVar1++;
			}
			if (unk_0xF1734B55490E9045(&Var0))
			{
			}
		}
		Global_19511E.f_A = { Var0 };
		return Var0;
	}
	return Global_19511E.f_A;
}

bool func_212()//Position - 0x70B7
{
	return Global_14082E == 10;
}

void func_213()//Position - 0x70C6
{
	int iVar0;
	
	iVar0 = Global_14F636[func_143(-1)];
	unk_0xF0059F27F7BB6680(&iVar0, 8);
	func_141(1303, iVar0, -1, 1);
}

void func_214(int iParam0, bool bParam1)//Position - 0x70EE
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
			Global_200000[func_215() /*12171*/].f_1E08.f_13 = iVar0;
			break;
		
		case 19:
			Global_200000[func_215() /*12171*/].f_1E08.f_12 = iVar0;
			break;
		
		case 74:
			Global_200000[func_215() /*12171*/].f_1E08.f_C = iVar0;
			break;
		
		case 29:
			Global_200000[func_215() /*12171*/].f_1E08.f_E = iVar0;
			break;
		
		case 8:
			Global_200000[func_215() /*12171*/].f_1E08.f_F = iVar0;
			break;
		
		case 31:
			Global_200000[func_215() /*12171*/].f_1E08.f_10 = iVar0;
			break;
		
		case 3:
			Global_200000[func_215() /*12171*/].f_1E08.f_14 = iVar0;
			break;
		
		case 6:
			Global_200000[func_215() /*12171*/].f_1E08.f_11 = iVar0;
			break;
		
		case 103:
		case 104:
		case 98:
		case 105:
			Global_200000[func_215() /*12171*/].f_1E08.f_17 = iVar0;
			break;
		
		case 76:
			Global_200000[func_215() /*12171*/].f_1E08.f_18 = iVar0;
			break;
		
		case 93:
			Global_200000[func_215() /*12171*/].f_1E08.f_19 = iVar0;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 77:
		case 81:
			Global_200000[func_215() /*12171*/].f_1E08.f_1A = iVar0;
			break;
		
		case 65:
		case 75:
		case 95:
			Global_200000[func_215() /*12171*/].f_1E08.f_1B = iVar0;
			break;
			break;
		
		case 97:
			Global_200000[func_215() /*12171*/].f_1E08.f_1D = iVar0;
			break;
		
		case 88:
			Global_200000[func_215() /*12171*/].f_1E08.f_1C = iVar0;
			break;
		
		case 100:
			Global_200000[func_215() /*12171*/].f_1E08.f_1F = iVar0;
			break;
		
		case 106:
			Global_200000[func_215() /*12171*/].f_1E08.f_20 = iVar0;
			break;
		
		case 99:
			Global_200000[func_215() /*12171*/].f_1E08.f_1E = iVar0;
			break;
	}
}

int func_215()//Position - 0x732D
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_216()//Position - 0x733A
{
	if (!unk_0xFA30DFD0084E92FE(iLocal_111, 4))
	{
		if (!unk_0xFA30DFD0084E92FE(iLocal_111, 8) || (unk_0xFA30DFD0084E92FE(iLocal_111, 8) && func_36(&uLocal_114, 600000, 0)))
		{
			if (func_222(Local_103.f_5))
			{
				unk_0xF0059F27F7BB6680(&iLocal_111, 4);
				unk_0x7CB6FD92BE491AD9(&iLocal_111, 8);
			}
		}
	}
	else if (!func_221())
	{
		if (!unk_0xFA30DFD0084E92FE(iLocal_111, 19))
		{
			if (func_220())
			{
				unk_0xF0059F27F7BB6680(&iLocal_111, 19);
			}
			else if (!func_219() && !func_217())
			{
				unk_0xF0059F27F7BB6680(&iLocal_111, 8);
				unk_0x7CB6FD92BE491AD9(&iLocal_111, 4);
				func_43(&uLocal_114, 0, 0);
				iLocal_110 = 0;
			}
		}
		else if (!func_217())
		{
			if (func_219())
			{
				return 1;
			}
			else
			{
				return 1;
			}
		}
	}
	else
	{
		unk_0xF0059F27F7BB6680(&iLocal_111, 8);
		unk_0x7CB6FD92BE491AD9(&iLocal_111, 4);
		func_43(&uLocal_114, 0, 0);
		iLocal_110 = 0;
	}
	return 0;
}

bool func_217()//Position - 0x7421
{
	return func_218();
}

bool func_218()//Position - 0x742D
{
	return Global_14B309.f_28 == 3;
}

bool func_219()//Position - 0x743D
{
	return Global_14B309.f_39.f_1;
}

int func_220()//Position - 0x744D
{
	if (Global_3DB8 == 4)
	{
		if (unk_0x58E7DDFF8D17A82A())
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

int func_221()//Position - 0x7472
{
	if (Global_41B0)
	{
		return 1;
	}
	return 0;
}

int func_222(int iParam0)//Position - 0x7488
{
	int iVar0;
	
	switch (iLocal_110)
	{
		case 0:
			if (func_320(0, 1, 1, 1))
			{
				if (!func_319(12, -1))
				{
					func_315(iParam0);
					iLocal_110++;
				}
			}
			break;
		
		case 1:
			iVar0 = func_314(iParam0);
			func_313(iParam0);
			if (func_223(&uLocal_130, iVar0, "FM_1AU", sLocal_295, 0, 0))
			{
				unk_0x7CB6FD92BE491AD9(&iLocal_111, 11);
				iLocal_110++;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_223(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x7509
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	if (func_311())
	{
		return 0;
	}
	if (func_310())
	{
		return 0;
	}
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_224(uParam0, iParam1, sParam2, sParam3, 1, iParam5, iParam4, sVar0, bVar1, iVar2, sVar0, sVar0, -1);
}

int func_224(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, char* sParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)//Position - 0x754E
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xF1734B55490E9045(sParam2))
	{
		return 0;
	}
	if (unk_0xF5429F058A48A07C(sParam2) > 7)
	{
		return 0;
	}
	if (unk_0xF1734B55490E9045(sParam3))
	{
		return 0;
	}
	if (unk_0xF5429F058A48A07C(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = unk_0x56BEECB328B6D29D(unk_0x1377080E9B0BD993());
	iVar1 = func_309(sParam2, sParam3);
	iVar2 = 0;
	if (!unk_0xF1734B55490E9045(sParam7))
	{
		iVar2 = unk_0x56BEECB328B6D29D(sParam7);
	}
	if (func_308(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_303(iParam6))
	{
		return 0;
	}
	if (func_300(iVar0, iVar1, iVar2))
	{
		if (func_299())
		{
			return 0;
		}
		func_298();
		return func_231(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, iParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_230(iParam4))
	{
		return 0;
	}
	func_225(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, iParam6);
	return 0;
}

void func_225(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x7633
{
	Global_14B309.f_28.f_1 = iParam0;
	Global_14B309.f_28.f_2 = iParam1;
	Global_14B309.f_28.f_3 = iParam2;
	StringCopy(&(Global_14B309.f_28.f_4), sParam3, 16);
	Global_14B309.f_28.f_8 = iParam4;
	Global_14B309.f_28.f_9 = iParam5;
	Global_14B309.f_28.f_E = iParam6;
	func_226(iParam4);
	func_298();
	Global_14B309.f_28.f_D = unk_0x863D0D1A37055D36(unk_0xED678C85A82F0AB9(), 7000);
}

void func_226(int iParam0)//Position - 0x76A0
{
	if (func_229(iParam0))
	{
		func_228();
		return;
	}
	func_227();
}

void func_227()//Position - 0x76BC
{
	Global_14B309.f_28.f_A = 0;
}

void func_228()//Position - 0x76CD
{
	Global_14B309.f_28.f_A = 1;
}

int func_229(int iParam0)//Position - 0x76DE
{
	switch (iParam0)
	{
		case 4:
		case 5:
			return 1;
		
		case 0:
		case 1:
		case 7:
		case 8:
		case 2:
		case 3:
			return 0;
		
		default:
	}
	return 0;
}

bool func_230(int iParam0)//Position - 0x7726
{
	return iParam0 > Global_14B309.f_28.f_8;
}

int func_231(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)//Position - 0x7739
{
	struct<2> Var0;
	
	func_297();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_294(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_291(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_294(uParam0, sParam3, sParam4);
		}
		return func_275(uParam0, iParam1, sParam3, sParam4, iParam7);
	}
	if (iParam5 == 5)
	{
		return func_274(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_264(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_263(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_232(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_232(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0x7832
{
	bool bVar0;
	
	func_262();
	bVar0 = true;
	if (func_234(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_233(120000);
		return 1;
	}
	return 0;
}

void func_233(int iParam0)//Position - 0x7869
{
	Global_14B309.f_28.f_B = unk_0x863D0D1A37055D36(unk_0xED678C85A82F0AB9(), iParam0);
	Global_14B309.f_28.f_C = 1;
}

int func_234(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)//Position - 0x788C
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_62();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = unk_0xD885B2234FC72D62(iVar0);
		iVar1 = func_256(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0x41FE031452B5ECF8(unk_0xED678C85A82F0AB9(), Global_14B309.f_28.f_D))
			{
				return 0;
			}
		}
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_255(sParam5, bParam6, &iVar3);
	uVar5 = func_253(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0xF1734B55490E9045(sParam8))
	{
		iVar6++;
		if (!unk_0xF1734B55490E9045(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x3362CDE8460ED38B(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (unk_0xFA30DFD0084E92FE(iParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0xFA30DFD0084E92FE(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0xF1734B55490E9045(sVar2))
	{
		bVar12 = func_252(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_238(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0xFA30DFD0084E92FE(iParam4, 0))
	{
		func_237();
	}
	func_262();
	func_236();
	func_235();
	return 1;
}

void func_235()//Position - 0x79DE
{
	Global_14B309.f_39 = 0;
	Global_14B309.f_39.f_1 = 0;
}

void func_236()//Position - 0x79F6
{
	Global_14B309.f_28 = 3;
}

void func_237()//Position - 0x7A05
{
	unk_0xF0059F27F7BB6680(&Global_93B, 8);
}

int func_238(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)//Position - 0x7A16
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_239(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_BFE = iParam6;
			unk_0xF0059F27F7BB6680(&Global_411DCA, 0);
		}
		return 1;
	}
	return 0;
}

int func_239(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)//Position - 0x7A82
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x3362CDE8460ED38B(sParam14, sParam15))
	{
	}
	func_246();
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
		if (Global_411DBB == 1)
		{
			return 0;
		}
		if (unk_0xB731B8C5BCE89836(joaat("appemail")) > 0)
		{
			return 0;
		}
		if (unk_0xB731B8C5BCE89836(joaat("appmpemail")) > 0)
		{
			return 0;
		}
	}
	if (func_245() == 0)
	{
		func_243();
		return 0;
	}
	func_242(Global_411DBA);
	StringCopy(&(Global_4118D9[Global_411DBA /*104*/]), sParam1, 64);
	Global_4118D9[Global_411DBA /*104*/].f_11 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_4118D9[Global_411DBA /*104*/].f_18 = iParam2;
	}
	Global_4118D9[Global_411DBA /*104*/].f_19 = iParam7;
	Global_4118D9[Global_411DBA /*104*/].f_1A = uParam8;
	Global_4118D9[Global_411DBA /*104*/].f_1D = uParam9;
	Global_4118D9[Global_411DBA /*104*/].f_1E = uParam12;
	Global_4118D9[Global_411DBA /*104*/].f_1F = uParam11;
	Global_4118D9[Global_411DBA /*104*/].f_1C = 0;
	Global_4118D9[Global_411DBA /*104*/].f_20 = iParam3;
	StringCopy(&(Global_4118D9[Global_411DBA /*104*/].f_21), sParam4, 64);
	Global_4118D9[Global_411DBA /*104*/].f_31 = iParam6;
	StringCopy(&(Global_4118D9[Global_411DBA /*104*/].f_32), sParam5, 64);
	Global_4118D9[Global_411DBA /*104*/].f_42 = iParam13;
	StringCopy(&(Global_4118D9[Global_411DBA /*104*/].f_43), sParam14, 64);
	StringCopy(&(Global_4118D9[Global_411DBA /*104*/].f_53), sParam15, 64);
	func_246();
	switch (iParam16)
	{
		case 3:
			Global_4118D9[Global_411DBA /*104*/].f_63[Global_389D] = 1;
			break;
		
		case 0:
			Global_4118D9[Global_411DBA /*104*/].f_63[0] = 1;
			break;
		
		case 2:
			Global_4118D9[Global_411DBA /*104*/].f_63[2] = 1;
			break;
		
		case 1:
			Global_4118D9[Global_411DBA /*104*/].f_63[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_389D)
		{
			case 0:
				func_241(0);
				break;
			
			case 1:
				func_241(1);
				break;
			
			case 2:
				func_241(2);
				break;
			
			case 3:
				func_241(3);
				break;
			
			default:
				break;
			}
	}
	if (iParam7 == 1)
	{
		switch (iParam16)
		{
			case 3:
				Global_411DBB = 1;
				break;
			
			case 0:
				Global_411DBB = 1;
				break;
			
			case 2:
				Global_411DBB = 1;
				break;
			
			case 1:
				Global_411DBB = 1;
				break;
			}
	}
	Global_41E5[Global_411DBA] = 0;
	if (bParam10)
	{
		func_246();
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
			if (!func_240())
			{
				unk_0xC4BA30B532FE260F(-1, "Text_Arrive_Tone", &Global_3892, 1);
			}
		}
	}
	if (!Global_3944)
	{
		if (Global_389D.f_1 == 6)
		{
			func_201(Global_388A, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_197(1);
			func_201(Global_388A, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_3889), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

bool func_240()//Position - 0x7E43
{
	return Global_140856;
}

void func_241(int iParam0)//Position - 0x7E4F
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_19B04.f_36C6[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_242(int iParam0)//Position - 0x7E6E
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
	Global_4118D9[iParam0 /*104*/].f_12 = iVar0;
	Global_4118D9[iParam0 /*104*/].f_12.f_1 = iVar1;
	Global_4118D9[iParam0 /*104*/].f_12.f_2 = iVar2;
	Global_4118D9[iParam0 /*104*/].f_12.f_3 = iVar3;
	Global_4118D9[iParam0 /*104*/].f_12.f_4 = uVar4;
	Global_4118D9[iParam0 /*104*/].f_12.f_5 = iVar5;
}

void func_243()//Position - 0x7EEE
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_411DBA = 11;
	Global_4118D9[Global_411DBA /*104*/].f_12 = -1;
	Global_4118D9[Global_411DBA /*104*/].f_12.f_1 = 0;
	Global_4118D9[Global_411DBA /*104*/].f_12.f_2 = 0;
	Global_4118D9[Global_411DBA /*104*/].f_12.f_3 = 0;
	Global_4118D9[Global_411DBA /*104*/].f_12.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_244(Global_4118D9[iVar2 /*104*/].f_12, Global_4118D9[Global_411DBA /*104*/].f_12))
		{
			Global_411DBA = iVar2;
		}
		iVar2++;
	}
	Global_4118D9[Global_411DBA /*104*/].f_18 = 1;
}

int func_244(struct<6> Param0, struct<6> Param1)//Position - 0x7F98
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

int func_245()//Position - 0x8084
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_4118D9[iVar2 /*104*/].f_18 == 0)
		{
			Global_411DBA = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_411DBA = 11;
	Global_4118D9[Global_411DBA /*104*/].f_12 = -1;
	Global_4118D9[Global_411DBA /*104*/].f_12.f_1 = 0;
	Global_4118D9[Global_411DBA /*104*/].f_12.f_2 = 0;
	Global_4118D9[Global_411DBA /*104*/].f_12.f_3 = 0;
	Global_4118D9[Global_411DBA /*104*/].f_12.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_4118D9[iVar2 /*104*/].f_18 == 0 || Global_4118D9[iVar2 /*104*/].f_18 == 1)
		{
			if (!func_244(Global_4118D9[iVar2 /*104*/].f_12, Global_4118D9[Global_411DBA /*104*/].f_12))
			{
				Global_411DBA = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_411DBA == 11)
	{
		return 0;
	}
	Global_4118D9[Global_411DBA /*104*/].f_63[0] = 0;
	Global_4118D9[Global_411DBA /*104*/].f_63[1] = 0;
	Global_4118D9[Global_411DBA /*104*/].f_63[2] = 0;
	return 1;
}

void func_246()//Position - 0x81AF
{
	if (func_200(14))
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
		Global_389D = func_247();
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

var func_247()//Position - 0x8251
{
	func_248();
	return Global_19B04.f_932.f_21B.f_10CD;
}

void func_248()//Position - 0x826A
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_251(Global_19B04.f_932.f_21B.f_10CD) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_250(unk_0xBC25C936A095B5BA());
			if (func_249(iVar0) && (!func_200(14) || Global_196EB))
			{
				if (Global_19B04.f_932.f_21B.f_10CD != iVar0 && func_249(Global_19B04.f_932.f_21B.f_10CD))
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

bool func_249(int iParam0)//Position - 0x8367
{
	return iParam0 < 3;
}

int func_250(int iParam0)//Position - 0x8373
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_251(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_251(int iParam0)//Position - 0x83B0
{
	if (func_249(iParam0))
	{
		return Global_19B04.f_6D75[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_252(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)//Position - 0x83DA
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	iVar0 = 3;
	if (func_239(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_BFE = iParam10;
			unk_0xF0059F27F7BB6680(&Global_411DCA, 0);
		}
		return 1;
	}
	return 0;
}

int func_253(int iParam0, int iParam1)//Position - 0x845C
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_254(2, iParam1);
	return iParam0;
}

void func_254(int iParam0, var uParam1)//Position - 0x847B
{
	bool bVar0;
	bool bVar1;
	
	if (iParam0 == 0)
	{
		return;
	}
	bVar0 = false;
	bVar1 = false;
	switch (iParam0)
	{
		case 1:
			bVar0 = true;
			break;
		
		case 2:
			bVar1 = true;
			break;
		
		default:
			return;
	}
	if (bVar0)
	{
		switch (*uParam1)
		{
			case 1:
			case 3:
				break;
			
			case 0:
				*uParam1 = 1;
				break;
			
			case 2:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
	if (bVar1)
	{
		switch (*uParam1)
		{
			case 2:
			case 3:
				break;
			
			case 0:
				*uParam1 = 2;
				break;
			
			case 1:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
}

char* func_255(char* sParam0, bool bParam1, int iParam2)//Position - 0x852C
{
	if (unk_0xF1734B55490E9045(sParam0))
	{
		return sLocal_18;
	}
	if (unk_0x3362CDE8460ED38B(sParam0, sLocal_18))
	{
		return sLocal_18;
	}
	func_254(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return unk_0xFCB4C1AC11347344(sParam0);
}

int func_256(int iParam0)//Position - 0x8569
{
	int iVar0;
	
	iVar0 = func_259(iParam0);
	if (iVar0 == -1)
	{
		func_257(iParam0, 1);
		return 0;
	}
	Global_14FA05[iVar0 /*5*/].f_4 = 1;
	return Global_14FA05[iVar0 /*5*/].f_2;
}

void func_257(int iParam0, bool bParam1)//Position - 0x859F
{
	if (!func_360(iParam0, 0, 1))
	{
		return;
	}
	if (func_259(iParam0) != -1)
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
	if (func_258(iParam0))
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

int func_258(int iParam0)//Position - 0x860B
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

int func_259(int iParam0)//Position - 0x863D
{
	int iVar0;
	
	if (!func_360(iParam0, 0, 1))
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
			func_260(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_260(int iParam0)//Position - 0x86BC
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
	func_261(&(Global_14FA05[iVar2 /*5*/]));
	Global_14FAA6 = (Global_14FAA6 - 1);
}

void func_261(var uParam0)//Position - 0x8772
{
	*uParam0 = 0;
	uParam0->f_1 = func_62();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x7AF0088ABFA713B6())
	{
		uParam0->f_3 = unk_0xED678C85A82F0AB9();
	}
}

void func_262()//Position - 0x879F
{
	Global_14B309.f_28.f_9 = 4;
}

int func_263(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0x87B0
{
	bool bVar0;
	
	func_262();
	bVar0 = false;
	return func_234(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_264(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0x87D7
{
	bool bVar0;
	
	bVar0 = false;
	return func_265(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_265(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)//Position - 0x87FA
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_62();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = unk_0xD885B2234FC72D62(iVar0);
		iVar1 = func_256(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0x41FE031452B5ECF8(unk_0xED678C85A82F0AB9(), Global_14B309.f_28.f_D))
			{
				return 0;
			}
		}
		Global_41DD = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_255(sParam5, bParam6, &iVar3);
	uVar5 = func_253(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0xF1734B55490E9045(sParam8))
	{
		iVar6++;
		if (!unk_0xF1734B55490E9045(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x3362CDE8460ED38B(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (unk_0xFA30DFD0084E92FE(iParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0xFA30DFD0084E92FE(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0xF1734B55490E9045(sVar2))
	{
		bVar12 = func_273(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_267(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0xFA30DFD0084E92FE(iParam4, 0))
	{
		func_237();
	}
	func_266();
	func_236();
	func_235();
	return 1;
}

void func_266()//Position - 0x8951
{
	Global_14B309.f_28.f_9 = 3;
}

int func_267(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)//Position - 0x8962
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
	if (func_268(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
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

int func_268(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)//Position - 0x89FA
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x3362CDE8460ED38B(sParam14, sParam15))
	{
	}
	func_246();
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
	if (func_272() == 0)
	{
		func_270();
		return 0;
	}
	func_269(Global_41E3);
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
		func_241(0);
		func_241(2);
		func_241(1);
	}
	else
	{
		func_246();
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
					func_241(0);
					Global_BFD = 0;
					break;
				
				case 1:
					func_241(1);
					Global_BFD = 1;
					break;
				
				case 2:
					func_241(2);
					Global_BFD = 2;
					break;
				
				case 3:
					func_241(3);
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
		func_246();
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
			if (!func_240())
			{
				unk_0xC4BA30B532FE260F(-1, "Text_Arrive_Tone", &Global_3892, 1);
			}
		}
	}
	if (!Global_3944)
	{
		if (Global_389D.f_1 == 6)
		{
			func_201(Global_388A, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_197(1);
			func_201(Global_388A, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_3889), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_269(int iParam0)//Position - 0x8EAF
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

void func_270()//Position - 0x8F41
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
		if (!func_271(Global_19B04.f_3720[iVar2 /*104*/].f_12, Global_19B04.f_3720[Global_41E3 /*104*/].f_12))
		{
			Global_41E3 = iVar2;
		}
		iVar2++;
	}
	Global_19B04.f_3720[Global_41E3 /*104*/].f_18 = 1;
}

int func_271(struct<6> Param0, struct<6> Param1)//Position - 0x900C
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

int func_272()//Position - 0x90F7
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
			if (!func_271(Global_19B04.f_3720[iVar2 /*104*/].f_12, Global_19B04.f_3720[Global_41E3 /*104*/].f_12))
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

int func_273(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)//Position - 0x925F
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	unk_0x7CB6FD92BE491AD9(&Global_93B, 10);
	iVar0 = 3;
	if (func_268(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_BFE = iParam10;
			Global_B9D[3 /*6*/] = { Global_19B04.f_6D75[iParam0 /*29*/].f_3 };
			Global_BEA = iParam0;
			StringCopy(&Global_BEB, sParam5, 64);
			unk_0xF0059F27F7BB6680(&Global_93B, 1);
			unk_0xF0059F27F7BB6680(&Global_93B, 7);
		}
		return 1;
	}
	return 0;
}

int func_274(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0x9314
{
	bool bVar0;
	
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
	}
	if (unk_0x7199482D96955B9E(unk_0xBC25C936A095B5BA()))
	{
		return 0;
	}
	func_266();
	bVar0 = true;
	if (func_265(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_233(120000);
		return 1;
	}
	return 0;
}

int func_275(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4)//Position - 0x9366
{
	bool bVar0;
	int iVar1;
	
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (unk_0x7199482D96955B9E(unk_0xBC25C936A095B5BA()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (unk_0xFA30DFD0084E92FE(iParam4, 7))
	{
		iVar1 = 9;
	}
	if (unk_0xFA30DFD0084E92FE(iParam4, 4))
	{
		bVar0 = func_290(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_281(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (unk_0xFA30DFD0084E92FE(iParam4, 3))
		{
			func_280(1);
		}
		if (unk_0xFA30DFD0084E92FE(iParam4, 5))
		{
			func_279(1);
		}
		func_278();
		func_236();
		func_277();
		func_276();
		return 1;
	}
	return 0;
}

void func_276()//Position - 0x9409
{
	Global_269481 = 0;
}

void func_277()//Position - 0x9416
{
	Global_14B309.f_39 = 1;
	Global_14B309.f_39.f_1 = 0;
}

void func_278()//Position - 0x942E
{
	Global_14B309.f_28.f_9 = 1;
}

void func_279(int iParam0)//Position - 0x943F
{
	if (iParam0 == 1)
	{
		unk_0xF0059F27F7BB6680(&Global_93D, 0);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&Global_93D, 0);
	}
}

void func_280(int iParam0)//Position - 0x9460
{
	if (iParam0 == 1)
	{
		unk_0xF0059F27F7BB6680(&Global_93B, 20);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&Global_93B, 20);
	}
}

int func_281(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x9483
{
	func_289(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_3DE8 = 0;
	Global_3DBF = 1;
	Global_3DC6 = 0;
	Global_3DC1 = 0;
	Global_4197 = 0;
	Global_4199 = 0;
	Global_419D = 0;
	Global_3DBD = 0;
	Global_3DEC = 0;
	Global_3DEE = 0;
	Global_280001 = 0;
	return func_282(sParam3, iParam4, bParam7);
}

int func_282(char* sParam0, int iParam1, bool bParam2)//Position - 0x94D1
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
					func_288();
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
		if (func_319(8, -1))
		{
			return 0;
		}
		Global_3E04 = { Global_3DFE };
		func_287();
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
				func_246();
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
				if (func_286())
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
			if (func_285())
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
			func_284();
			Global_3DC2 = bParam2;
		}
		Global_3DBA = iParam1;
		StringCopy(&Global_3C3B, sParam0, 24);
		Global_394A = 0;
		func_283();
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
		func_288();
	}
	return 0;
}

void func_283()//Position - 0x979D
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

void func_284()//Position - 0x97CE
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

int func_285()//Position - 0x9863
{
	if (Global_389D.f_1 == 1 || Global_389D.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_286()//Position - 0x988A
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

void func_287()//Position - 0x9923
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

void func_288()//Position - 0x997A
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

void func_289(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x99D1
{
	Global_3B96 = { *uParam0 };
	Global_68F = iParam1;
	StringCopy(&Global_3DFE, sParam2, 24);
	Global_4195 = iParam5;
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

int func_290(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x9A27
{
	func_289(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_3DE8 = 1;
	Global_3DBF = 1;
	Global_3DC6 = 0;
	Global_3DC1 = 0;
	Global_4197 = 0;
	Global_4199 = 0;
	Global_419D = 0;
	Global_3DBD = 0;
	Global_3DEC = 0;
	Global_3DEE = 0;
	Global_280001 = 0;
	return func_282(sParam3, iParam4, bParam7);
}

int func_291(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)//Position - 0x9A75
{
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
	}
	if (unk_0x7199482D96955B9E(unk_0xBC25C936A095B5BA()))
	{
		return 0;
	}
	if (func_293(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_292();
		func_278();
		func_236();
		func_277();
		func_276();
		return 1;
	}
	return 0;
}

void func_292()//Position - 0x9AC7
{
	Global_41B2 = 0;
}

bool func_293(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)//Position - 0x9AD3
{
	func_289(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_3DE8 = 0;
	Global_3DBF = 1;
	Global_3DC6 = 0;
	Global_3DC1 = 1;
	Global_4197 = 0;
	Global_4199 = 0;
	Global_419D = 0;
	Global_3DBD = 0;
	Global_3DEC = 1;
	Global_3DEE = 0;
	StringCopy(&Global_3E4C, sParam5, 24);
	Global_280001 = 0;
	return func_282(sParam3, iParam4, bParam8);
}

int func_294(var uParam0, char* sParam1, char* sParam2)//Position - 0x9B28
{
	if (func_296(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_295();
		func_236();
		func_277();
		return 1;
	}
	return 0;
}

void func_295()//Position - 0x9B53
{
	Global_14B309.f_28.f_9 = 2;
}

bool func_296(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x9B64
{
	func_289(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_282(sParam2, iParam3, 0);
}

void func_297()//Position - 0x9BB2
{
	Global_14B309.f_37 = Global_14B309.f_28.f_1;
	Global_14B309.f_37.f_1 = Global_14B309.f_28.f_A;
}

void func_298()//Position - 0x9BD8
{
	Global_14B309.f_28 = 1;
}

bool func_299()//Position - 0x9BE7
{
	return Global_14B309.f_28 == 1;
}

int func_300(int iParam0, int iParam1, int iParam2)//Position - 0x9BF7
{
	if (!func_301(iParam0))
	{
		return 0;
	}
	if (Global_14B309.f_28.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_14B309.f_28.f_3 != iParam2)
		{
			return 0;
		}
	}
	return 1;
}

int func_301(int iParam0)//Position - 0x9C36
{
	if (!func_302())
	{
		return 0;
	}
	if (!Global_14B309.f_28.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_302()//Position - 0x9C5E
{
	if (Global_14B309.f_28 == 0)
	{
		return 0;
	}
	return 1;
}

int func_303(int iParam0)//Position - 0x9C75
{
	if (func_307())
	{
		return 0;
	}
	if (func_218())
	{
		return 0;
	}
	if (func_306(0))
	{
		return 0;
	}
	if (Global_1406D2.f_12 != 0)
	{
		return 0;
	}
	if (Global_193981 || func_305())
	{
		return 0;
	}
	if (!unk_0xFA30DFD0084E92FE(iParam0, 6))
	{
		if (func_304())
		{
			return 0;
		}
	}
	return 1;
}

bool func_304()//Position - 0x9CD9
{
	return unk_0x41FE031452B5ECF8(unk_0xED678C85A82F0AB9(), Global_14F500);
}

int func_305()//Position - 0x9CED
{
	if (Global_40E7E8.f_31D > -1)
	{
		return 1;
	}
	return 0;
}

int func_306(int iParam0)//Position - 0x9D05
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

bool func_307()//Position - 0x9D5F
{
	return func_285();
}

int func_308(int iParam0, int iParam1, int iParam2)//Position - 0x9D6B
{
	if (!func_218())
	{
		return 0;
	}
	return func_300(iParam0, iParam1, iParam2);
}

int func_309(char* sParam0, char* sParam1)//Position - 0x9D89
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return unk_0x56BEECB328B6D29D(&cVar0);
}

bool func_310()//Position - 0x9DA3
{
	return Global_268A34.f_1;
}

int func_311()//Position - 0x9DB1
{
	if (Global_14B3C5.f_2)
	{
		return 1;
	}
	return func_312();
}

bool func_312()//Position - 0x9DCA
{
	return func_307();
}

void func_313(int iParam0)//Position - 0x9DD6
{
	if (!unk_0xFA30DFD0084E92FE(iLocal_111, 11))
	{
		switch (iParam0)
		{
			case 0:
				sLocal_295 = "FMA_KIL1";
				unk_0xF0059F27F7BB6680(&iLocal_111, 11);
				break;
			}
	}
}

int func_314(int iParam0)//Position - 0x9E09
{
	int iVar0;
	
	iVar0 = 144;
	switch (iParam0)
	{
		case 0:
			iVar0 = 12;
			break;
	}
	return iVar0;
}

void func_315(int iParam0)//Position - 0x9E2B
{
	switch (iParam0)
	{
		case 0:
			func_317(12, 3, 0);
			func_316(&uLocal_130, 1, 0, "Lester", 0, 1);
			break;
	}
}

void func_316(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x9E5A
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

void func_317(int iParam0, int iParam1, bool bParam2)//Position - 0x9EF5
{
	Global_BE9 = iParam0;
	if (Global_75[iParam0 /*10*/].f_8 != 144)
	{
		func_246();
		if (iParam1 == 4)
		{
			Global_19B04.f_6D75[iParam0 /*29*/].f_C[0] = 1;
			Global_19B04.f_6D75[iParam0 /*29*/].f_C[1] = 1;
			Global_19B04.f_6D75[iParam0 /*29*/].f_C[2] = 1;
			Global_19B04.f_6D75[iParam0 /*29*/].f_18[0] = 1;
			Global_19B04.f_6D75[iParam0 /*29*/].f_18[1] = 1;
			Global_19B04.f_6D75[iParam0 /*29*/].f_18[2] = 1;
		}
		else
		{
			if (Global_19B04.f_6D75[iParam0 /*29*/].f_C[iParam1] == 1 && Global_19B04.f_6D75[iParam0 /*29*/].f_18[iParam1] == 1)
			{
				bParam2 = false;
			}
			Global_19B04.f_6D75[iParam0 /*29*/].f_C[iParam1] = 1;
			Global_19B04.f_6D75[iParam0 /*29*/].f_18[iParam1] = 1;
		}
		if (bParam2)
		{
			if (!Global_11542)
			{
				if (iParam1 != 4)
				{
					if (Global_389D != iParam1)
					{
						Global_BCE[iParam1 /*4*/] = { Global_19B04.f_6D75[iParam0 /*29*/].f_3 };
						Global_BDF[iParam1] = 1;
						Global_BE4[iParam1] = iParam0;
					}
					else if (iParam0 == Global_389D)
					{
					}
					else
					{
						Global_B9D[1 /*6*/] = { Global_19B04.f_6D75[iParam0 /*29*/].f_3 };
						Global_B9D[1 /*6*/].f_5 = iParam1;
						func_318();
					}
				}
				else
				{
					Global_B9D[1 /*6*/] = { Global_19B04.f_6D75[iParam0 /*29*/].f_3 };
					Global_B9D[1 /*6*/].f_5 = iParam1;
					func_318();
				}
			}
			else
			{
				Global_B9D[1 /*6*/] = { Global_19B04.f_6D75[iParam0 /*29*/].f_3 };
				Global_B9D[1 /*6*/].f_5 = iParam1;
				func_318();
			}
		}
	}
}

void func_318()//Position - 0xA09F
{
	char cVar0[64];
	char cVar1[64];
	char* sVar2;
	
	StringCopy(&cVar0, unk_0xFCB4C1AC11347344(&(Global_19B04.f_6D75[Global_BE9 /*29*/].f_7)), 64);
	if (Global_BFC == 0)
	{
		unk_0x2E94302CFF011F2E("");
		StringCopy(&cVar1, unk_0xFCB4C1AC11347344(&(Global_B9D[1 /*6*/])), 64);
		sVar2 = unk_0xFCB4C1AC11347344("CELL_253");
		unk_0x7BB0762D8C75A3C7(&cVar0, &cVar0, 0, 3, sVar2, &cVar1);
	}
	else
	{
		unk_0x2E94302CFF011F2E("CELL_255");
		unk_0xC9C304D0AABE1335(&(Global_B9D[1 /*6*/]));
		unk_0x7BB0762D8C75A3C7(&cVar0, &cVar0, 0, 3, "", 0);
	}
	unk_0x7CB6FD92BE491AD9(&Global_93B, 0);
}

bool func_319(int iParam0, int iParam1)//Position - 0xA11E
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

int func_320(bool bParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0xA159
{
	if (iParam2 && unk_0xF16DAFF595E80F7C())
	{
		return 0;
	}
	if (func_325())
	{
		return 0;
	}
	if (!unk_0x726D9204B160D23E())
	{
		return 0;
	}
	if (func_324())
	{
		return 0;
	}
	if (func_334())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_49(unk_0xB5CEFD608600A09F(), 1))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_48(unk_0xB5CEFD608600A09F()))
		{
			return 0;
		}
	}
	if (func_323())
	{
		return 0;
	}
	if (unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		return 0;
	}
	if (unk_0xE186ACC7BE9B244E())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F()))
		{
			return 0;
		}
	}
	if (Global_180514)
	{
		return 0;
	}
	if (func_322())
	{
		return 0;
	}
	if (func_321())
	{
		return 0;
	}
	if (func_332())
	{
		return 0;
	}
	if (Global_10AB8)
	{
		return 0;
	}
	if (Global_269665)
	{
		return 0;
	}
	return 1;
}

bool func_321()//Position - 0xA246
{
	return Global_255A46.f_243;
}

bool func_322()//Position - 0xA255
{
	return Global_255A46.f_2DB;
}

bool func_323()//Position - 0xA264
{
	return Global_252E21.f_BD3.f_242;
}

bool func_324()//Position - 0xA276
{
	return unk_0x105601648511CC64() <= Global_43C1.f_1671 + 100;
}

int func_325()//Position - 0xA28B
{
	if (Global_3DB8 != 0 || unk_0xE6711F601F11B66B())
	{
		return 1;
	}
	return 0;
}

int func_326()//Position - 0xA2AD
{
	int iVar0;
	
	iVar0 = Global_14F636[func_143(-1)];
	if (unk_0xFA30DFD0084E92FE(iVar0, 8))
	{
		return 1;
	}
	return 0;
}

void func_327(int iParam0)//Position - 0xA2D2
{
	switch (iParam0)
	{
		case 0:
			if (unk_0x8EA6CABD14F1B89A(Local_103.f_C[0]))
			{
				Global_252E21.f_EA2.f_1[0] = unk_0x19D7F09C2FABDDA0(Local_103.f_C[0]);
			}
			if (unk_0x8EA6CABD14F1B89A(Local_103.f_9[0]))
			{
				Global_252E21.f_EA2.f_4[0] = unk_0xE48AD7BF7762E114(Local_103.f_9[0]);
			}
			break;
	}
}

int func_328(int iParam0)//Position - 0xA334
{
	switch (iParam0)
	{
		case 0:
			if (unk_0x8EA6CABD14F1B89A(Local_103.f_C[0]) && unk_0x8EA6CABD14F1B89A(Local_103.f_9[0]))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_329(int iParam0, bool bParam1)//Position - 0xA36F
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

int func_330(int iParam0)//Position - 0xA3D2
{
	if (func_15(iParam0, 0))
	{
		return 1;
	}
	if (func_331())
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

bool func_331()//Position - 0xA414
{
	return unk_0xFA30DFD0084E92FE(Global_240006, 3);
}

bool func_332()//Position - 0xA425
{
	return Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_C4 != 0;
}

int func_333()//Position - 0xA43C
{
	return Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_C5;
}

bool func_334()//Position - 0xA451
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_27.f_12, 0);
}

void func_335(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)//Position - 0xA46D
{
	Param0 = -471892217;
	Param0.f_1 = unk_0xB5CEFD608600A09F();
	if (!iParam13 == 0)
	{
		unk_0x38E776D9FA75679B(1, &Param0, 14, iParam13);
	}
}

int func_336(int iParam0)//Position - 0xA49A
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
			if (func_360(iVar2, 0, 0))
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

void func_337()//Position - 0xA4F7
{
	if (vLocal_108[unk_0x6BAA0516CC970D99() /*3*/].f_2 >= 5 && vLocal_108[unk_0x6BAA0516CC970D99() /*3*/].f_2 < 6)
	{
		if (unk_0xFA30DFD0084E92FE(Local_103, 4))
		{
			if (!unk_0xFA30DFD0084E92FE(iLocal_111, 3))
			{
				if (func_360(Local_103.f_8, 0, 1))
				{
					func_338("FM_TGDM_KIL", Local_103.f_8, 0, 0, 0, 1, 1, 0);
				}
				unk_0xF0059F27F7BB6680(&iLocal_111, 3);
			}
		}
	}
}

int func_338(char* sParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7)//Position - 0xA55B
{
	int iVar0;
	int iVar1;
	struct<16> Var2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	iVar1 = unk_0x343CB262BF0CDF5A(iParam1);
	if (unk_0x75206900382D1E30(unk_0xB5CEFD608600A09F(), iParam1) || iParam3)
	{
		if (!bParam2)
		{
			StringCopy(&Var2, unk_0xD885B2234FC72D62(iParam1), 64);
		}
		else
		{
			StringCopy(&Var2, unk_0xD885B2234FC72D62(iParam1), 64);
		}
		if (unk_0xF1734B55490E9045(&Var2))
		{
		}
		unk_0x2E94302CFF011F2E(sParam0);
		if ((iVar1 != -1 && unk_0x517823CA390A19F6()) && iVar1 < 4)
		{
			if (Global_440000.f_1DBFD[iVar1] != -1)
			{
				unk_0x449F0674640D94C0(func_107(iVar1, iParam1, 0));
			}
			else
			{
				unk_0x449F0674640D94C0(func_87(iParam1, -2, 1, 0));
			}
		}
		else
		{
			unk_0x449F0674640D94C0(func_87(iParam1, -2, 1, 0));
		}
		unk_0x607C19B90D297FE2(func_85(&Var2));
		if (!bParam4)
		{
			iVar0 = unk_0x5E48BB10C6423FD5(0, 1);
		}
		else
		{
			Global_26210D = { func_135(iParam1) };
			if (unk_0x24723877416AAAFC(&Global_2620C7, 35, &Global_26210D))
			{
				iVar3 = 0;
				if (unk_0x3362CDE8460ED38B(&(Global_2620C7.f_16), "Leader") && Global_2620C7.f_1E == 0)
				{
					iVar3 = 1;
				}
				if (Global_2620C7.f_15 > 0)
				{
					iVar4 = 0;
				}
				else
				{
					iVar4 = 1;
				}
				if (bParam6)
				{
					if (bParam7)
					{
						Var2 = { func_339(&Var2) };
					}
					iVar0 = unk_0x0F92E4F5455F4880(iVar4, unk_0x5E69F635CCDEE0CF(&Global_2620C7, 35), &(Global_2620C7.f_11), Global_2620C7.f_1E, iVar3, 0, Global_2620C7, &Var2, Global_140CDB, Global_140CDC, Global_140CDD);
				}
				else
				{
					iVar0 = unk_0x8D3D8A069BE71027(iVar4, unk_0x5E69F635CCDEE0CF(&Global_2620C7, 35), &(Global_2620C7.f_11), Global_2620C7.f_1E, iVar3, 0, Global_2620C7, Global_140CDB, Global_140CDC, Global_140CDD);
				}
			}
			else
			{
				iVar0 = unk_0x5E48BB10C6423FD5(0, 1);
			}
		}
		func_81(14, sParam0, 1, &Var2, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

struct<16> func_339(char* sParam0)//Position - 0xA719
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

void func_340()//Position - 0xA743
{
	int iVar0;
	
	iVar0 = unk_0x6BAA0516CC970D99();
	if (iLocal_121 != Local_103.f_F)
	{
		iLocal_121 = Local_103.f_F;
		unk_0xA6E7E0EC9E48D44C(iLocal_121);
	}
	if (iLocal_122 != Local_103.f_10)
	{
		iLocal_122 = Local_103.f_10;
		unk_0xD1CF2F876BAD2600(iLocal_122);
	}
	if (func_360(unk_0xB5CEFD608600A09F(), 0, 1))
	{
		if (!unk_0xFA30DFD0084E92FE(vLocal_108[iVar0 /*3*/], 0))
		{
			if (vLocal_108[unk_0x6BAA0516CC970D99() /*3*/].f_2 == 0)
			{
				if (func_333() == 0)
				{
					unk_0xF0059F27F7BB6680(&(vLocal_108[iVar0 /*3*/]), 0);
				}
			}
		}
		else if (unk_0xFA30DFD0084E92FE(vLocal_108[iVar0 /*3*/], 0))
		{
			if ((func_49(unk_0xB5CEFD608600A09F(), 1) || func_46(unk_0xB5CEFD608600A09F())) || func_333() > 0)
			{
				func_40(&uLocal_112);
				unk_0x7CB6FD92BE491AD9(&(vLocal_108[iVar0 /*3*/]), 0);
			}
			else if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				if (!unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F()))
				{
					if (!unk_0xFA30DFD0084E92FE(iLocal_111, 7))
					{
						unk_0xF0059F27F7BB6680(&iLocal_111, 7);
						func_348();
					}
				}
				else if (unk_0xFA30DFD0084E92FE(iLocal_111, 7))
				{
					unk_0x7CB6FD92BE491AD9(&iLocal_111, 7);
					if (!func_47(unk_0xB5CEFD608600A09F(), 0))
					{
						func_346();
					}
				}
			}
		}
		if (!unk_0xFA30DFD0084E92FE(vLocal_108[iVar0 /*3*/], 3))
		{
			if (vLocal_108[unk_0x6BAA0516CC970D99() /*3*/].f_2 > 3 && vLocal_108[unk_0x6BAA0516CC970D99() /*3*/].f_2 < 6)
			{
				if (unk_0xFA30DFD0084E92FE(Global_252E21.f_EA2, 1))
				{
					unk_0xF0059F27F7BB6680(&(vLocal_108[iVar0 /*3*/]), 3);
				}
			}
		}
		if (vLocal_108[unk_0x6BAA0516CC970D99() /*3*/].f_2 > 3)
		{
			if (!unk_0xFA30DFD0084E92FE(vLocal_108[unk_0x6BAA0516CC970D99() /*3*/], 5))
			{
				if (func_345(Local_103.f_5))
				{
					unk_0xF0059F27F7BB6680(&(vLocal_108[unk_0x6BAA0516CC970D99() /*3*/]), 5);
				}
			}
			else if (!func_345(Local_103.f_5))
			{
				unk_0x7CB6FD92BE491AD9(&(vLocal_108[unk_0x6BAA0516CC970D99() /*3*/]), 5);
			}
			if (!unk_0xFA30DFD0084E92FE(vLocal_108[unk_0x6BAA0516CC970D99() /*3*/], 6))
			{
				if (func_342(Local_103.f_5))
				{
					unk_0xF0059F27F7BB6680(&(vLocal_108[unk_0x6BAA0516CC970D99() /*3*/]), 6);
				}
			}
			if (!unk_0xFA30DFD0084E92FE(vLocal_108[unk_0x6BAA0516CC970D99() /*3*/], 8))
			{
				if (func_341())
				{
					unk_0xF0059F27F7BB6680(&(vLocal_108[unk_0x6BAA0516CC970D99() /*3*/]), 8);
				}
			}
		}
		if (!unk_0xFA30DFD0084E92FE(iLocal_111, 13))
		{
			if (unk_0x8EA6CABD14F1B89A(Local_103.f_9[0]))
			{
				if (!func_38(Local_103.f_9[0]))
				{
					unk_0xE43AD8CB1B4DDED9(unk_0xE48AD7BF7762E114(Local_103.f_9[0]), 1, 0);
					unk_0xF0059F27F7BB6680(&iLocal_111, 13);
				}
			}
		}
	}
}

int func_341()//Position - 0xA984
{
	if (unk_0x8EA6CABD14F1B89A(Local_103.f_C[0]))
	{
		if (func_9(Local_103.f_C[0]))
		{
			if (unk_0xBCDD4514E5CAE591(unk_0x19D7F09C2FABDDA0(Local_103.f_C[0]), 0, 7000) || unk_0xBCDD4514E5CAE591(unk_0x19D7F09C2FABDDA0(Local_103.f_C[0]), 1, 40000))
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

int func_342(int iParam0)//Position - 0xA9E4
{
	switch (iParam0)
	{
		case 0:
			if (unk_0x8EA6CABD14F1B89A(Local_103.f_9[0]))
			{
				if (!func_38(Local_103.f_9[0]))
				{
					if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
					{
						if (func_343(unk_0xE48AD7BF7762E114(Local_103.f_9[0])))
						{
							return 1;
						}
					}
				}
			}
			break;
	}
	return 0;
}

int func_343(int iParam0)//Position - 0xAA3C
{
	int iVar0;
	int iVar1;
	
	if (unk_0x425BEBAA53B39EBF(unk_0xB5CEFD608600A09F(), iParam0))
	{
		return 1;
	}
	if (unk_0xDF25D3BB3759E7D1(unk_0xB5CEFD608600A09F(), iParam0))
	{
		return 1;
	}
	if (func_344())
	{
		if (unk_0x1CD240A97A49C198(unk_0xB5CEFD608600A09F(), &iVar0))
		{
			if (unk_0x386592AF38881675(iVar0))
			{
				iVar1 = unk_0x399F7937FFE4DEBF(iVar0);
				if (unk_0x724D816EA203A79E(iVar1))
				{
					if (!unk_0x1D403DFADBC2DE3C(iVar1, 0))
					{
						if (unk_0x5237AF95232D78C5(iVar1, 0))
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

bool func_344()//Position - 0xAAAE
{
	return Global_1805CD;
}

int func_345(int iParam0)//Position - 0xAABA
{
	switch (iParam0)
	{
		case 0:
			if (unk_0x8EA6CABD14F1B89A(Local_103.f_9[0]))
			{
				if (!func_38(Local_103.f_9[0]))
				{
					if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
					{
						if (SYSTEM::VDIST2(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), unk_0x541C2AEF053615BC(unk_0xE48AD7BF7762E114(Local_103.f_9[0]), 1)) < 40000f)
						{
							return 1;
						}
					}
				}
			}
			break;
	}
	return 0;
}

void func_346()//Position - 0xAB26
{
	if (!Global_140738)
	{
		return;
	}
	func_347();
}

void func_347()//Position - 0xAB3D
{
	Global_140738 = 0;
	StringCopy(&(Global_140738.f_1), "", 24);
	Global_140738.f_7 = 0;
}

void func_348()//Position - 0xAB5C
{
	Global_140738 = 1;
	StringCopy(&(Global_140738.f_1), unk_0x1377080E9B0BD993(), 24);
	Global_140738.f_7 = unk_0x56BEECB328B6D29D(&(Global_140738.f_1));
}

void func_349()//Position - 0xAB85
{
	switch (Local_103.f_6)
	{
		case 1:
			if (unk_0x0DE6397A2CB3EF75())
			{
				if (unk_0x8EA6CABD14F1B89A(Local_103.f_C[0]))
				{
					if (func_9(Local_103.f_C[0]))
					{
						if (!func_38(Local_103.f_9[0]))
						{
							if (unk_0x25EF720B1CAB1E23(unk_0xE48AD7BF7762E114(Local_103.f_9[0]), unk_0x19D7F09C2FABDDA0(Local_103.f_C[0])))
							{
								if (unk_0xF4FCC3C1048FF2AB(unk_0xE48AD7BF7762E114(Local_103.f_9[0]), -258271821) != 1 && unk_0xF4FCC3C1048FF2AB(unk_0xE48AD7BF7762E114(Local_103.f_9[0]), -258271821) != 0)
								{
									unk_0x204BA7B1C7DD25F4(unk_0xE48AD7BF7762E114(Local_103.f_9[0]), unk_0x19D7F09C2FABDDA0(Local_103.f_C[0]), 20f, 786603);
								}
							}
						}
					}
				}
			}
			break;
		
		case 2:
			if (unk_0x0DE6397A2CB3EF75())
			{
				if (unk_0x8EA6CABD14F1B89A(Local_103.f_C[0]))
				{
					if (unk_0x8EA6CABD14F1B89A(Local_103.f_9[0]))
					{
						if (func_9(Local_103.f_C[0]))
						{
							if (!func_38(Local_103.f_9[0]))
							{
								if (unk_0x25EF720B1CAB1E23(unk_0xE48AD7BF7762E114(Local_103.f_9[0]), unk_0x19D7F09C2FABDDA0(Local_103.f_C[0])))
								{
									if ((unk_0xF4FCC3C1048FF2AB(unk_0xE48AD7BF7762E114(Local_103.f_9[0]), -258271821) != 1 && unk_0xF4FCC3C1048FF2AB(unk_0xE48AD7BF7762E114(Local_103.f_9[0]), -258271821) != 0) || unk_0xFA30DFD0084E92FE(Local_103, 9))
									{
										unk_0x204BA7B1C7DD25F4(unk_0xE48AD7BF7762E114(Local_103.f_9[0]), unk_0x19D7F09C2FABDDA0(Local_103.f_C[0]), 30f, 786469);
										if (unk_0xFA30DFD0084E92FE(Local_103, 9))
										{
											unk_0x7CB6FD92BE491AD9(&Local_103, 9);
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (unk_0x8EA6CABD14F1B89A(Local_103.f_9[0]))
			{
				if (!func_38(Local_103.f_9[0]))
				{
					if (unk_0xF4FCC3C1048FF2AB(unk_0xE48AD7BF7762E114(Local_103.f_9[0]), -828834893) != 1 && unk_0xF4FCC3C1048FF2AB(unk_0xE48AD7BF7762E114(Local_103.f_9[0]), -828834893) != 0)
					{
						if (func_353(Local_103.f_9[0]))
						{
							if (unk_0x89B5CBCE9D131B32(Local_103.f_9[0]))
							{
								unk_0xA3981DED4FC2E56E(unk_0xE48AD7BF7762E114(Local_103.f_9[0]), 0, 0);
							}
						}
					}
				}
			}
			break;
		
		case 4:
			if (unk_0x8EA6CABD14F1B89A(Local_103.f_9[0]))
			{
				if (!func_38(Local_103.f_9[0]))
				{
					if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
					{
						if (unk_0xF4FCC3C1048FF2AB(unk_0xE48AD7BF7762E114(Local_103.f_9[0]), 1805844857) != 1 && unk_0xF4FCC3C1048FF2AB(unk_0xE48AD7BF7762E114(Local_103.f_9[0]), 1805844857) != 0)
						{
							if (func_353(Local_103.f_9[0]))
							{
								if (unk_0x89B5CBCE9D131B32(Local_103.f_9[0]))
								{
									unk_0x5558ED6D4A2DEC93(unk_0xE48AD7BF7762E114(Local_103.f_9[0]), unk_0xBC25C936A095B5BA(), 500f, -1, 0, 1);
								}
							}
						}
					}
				}
			}
			break;
	}
	if (unk_0x8EA6CABD14F1B89A(Local_103.f_9[0]))
	{
		if ((vLocal_108[unk_0x6BAA0516CC970D99() /*3*/].f_2 >= 5 && vLocal_108[unk_0x6BAA0516CC970D99() /*3*/].f_2 < 6) && !func_176(unk_0xB5CEFD608600A09F(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
		{
			func_350(Local_103.f_9[0], &Local_123, -1082130432, 0, 1, 0, 0, -1, -1, 1);
		}
		else
		{
			func_60(&Local_123);
		}
	}
}

void func_350(int iParam0, int iParam1, float fParam2, bool bParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, bool bParam9)//Position - 0xAEB0
{
	if (unk_0x7FFE36DB9042AF23(iParam0))
	{
		if (func_352())
		{
			Global_252E21 = unk_0xB5CEFD608600A09F();
		}
		if (bParam3)
		{
			func_351(unk_0xE48AD7BF7762E114(iParam0), iParam1, 1, Global_252E21, iParam4, iParam5, fParam2, sParam6, iParam7, iParam8, bParam9);
		}
		else
		{
			func_351(unk_0xE48AD7BF7762E114(iParam0), iParam1, -1, Global_252E21, iParam4, iParam5, fParam2, sParam6, iParam7, iParam8, bParam9);
		}
	}
	else if (unk_0x2DA8CA50A72528FB(*iParam1))
	{
		func_60(iParam1);
	}
}

int func_351(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)//Position - 0xAF2B
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

bool func_352()//Position - 0xB102
{
	return Global_14083F;
}

int func_353(int iParam0)//Position - 0xB10E
{
	if (unk_0xDD5EE7D9FC37FA16(iParam0))
	{
		return 1;
	}
	if (func_354(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_354(int iParam0)//Position - 0xB131
{
	if (!unk_0x0DE6397A2CB3EF75())
	{
		return 0;
	}
	if (!unk_0x8EA6CABD14F1B89A(iParam0))
	{
		return 0;
	}
	if (func_355(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_355(int iParam0)//Position - 0xB161
{
	if (unk_0x7FFE36DB9042AF23(iParam0))
	{
		unk_0xCDF25F6ADC88CCB4(iParam0);
		return unk_0x89B5CBCE9D131B32(iParam0);
	}
	return 0;
}

int func_356()//Position - 0xB183
{
	return Local_103.f_1;
}

int func_357(int iParam0)//Position - 0xB18F
{
	return vLocal_108[iParam0 /*3*/].f_1;
}

void func_358()//Position - 0xB19F
{
	func_53();
	func_329(11, 0);
	func_191(12, 116);
	unk_0x7CB6FD92BE491AD9(&(Global_252E21.f_EA2), 0);
	unk_0x7CB6FD92BE491AD9(&(Global_252E21.f_EA2), 1);
	if (unk_0x7AF0088ABFA713B6())
	{
		if (unk_0x6BAA0516CC970D99() > -1)
		{
			vLocal_108[unk_0x6BAA0516CC970D99() /*3*/] = 0;
		}
	}
	if (unk_0x7AF0088ABFA713B6())
	{
		if (unk_0x0DE6397A2CB3EF75())
		{
			if (unk_0xFCB427D77FFFB63D(Local_103.f_3))
			{
				unk_0xE4A125EBE8973305(Local_103.f_3);
			}
			Local_103.f_3 = -1;
		}
	}
	if (unk_0x2DA8CA50A72528FB(Global_193968))
	{
		unk_0x07B8ECB35A4ED3AC(&Global_193968);
	}
	unk_0x7CB6FD92BE491AD9(&iLocal_111, 3);
	unk_0x7CB6FD92BE491AD9(&iLocal_111, 4);
	iLocal_110 = 0;
	if (unk_0x2DA8CA50A72528FB(Local_123))
	{
		unk_0x07B8ECB35A4ED3AC(&Local_123);
	}
	func_359();
}

void func_359()//Position - 0xB247
{
	unk_0x95E4B6F3ED223F5A();
}

int func_360(int iParam0, bool bParam1, bool bParam2)//Position - 0xB253
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

int func_361()//Position - 0xB29D
{
	var uVar0;
	
	func_368(&uVar0);
	if (Global_14083F == 0)
	{
		if (!unk_0x7AF0088ABFA713B6())
		{
			return 1;
		}
	}
	if (func_367())
	{
		return 1;
	}
	if (Global_25891C)
	{
		return 1;
	}
	if (func_366())
	{
		return 1;
	}
	if (func_365(157))
	{
		if (!func_364())
		{
			return 1;
		}
	}
	if (func_365(155))
	{
		return 1;
	}
	if (!unk_0x57D316754A262B34())
	{
		return 1;
	}
	if (func_362() != 0)
	{
		if (unk_0xB731B8C5BCE89836(func_362()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_362()//Position - 0xB327
{
	switch (func_363())
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

int func_363()//Position - 0xB35B
{
	return Global_62BD;
}

bool func_364()//Position - 0xB366
{
	return Global_255A46.f_24A;
}

int func_365(int iParam0)//Position - 0xB375
{
	if (unk_0xA1AC399BCBEE5B2D(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_366()//Position - 0xB38C
{
	return Global_258063;
}

bool func_367()//Position - 0xB398
{
	return Global_255A46.f_245;
}

void func_368(var uParam0)//Position - 0xB3A7
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
					func_369(iVar0);
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

void func_369(int iParam0)//Position - 0xB41A
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x414AA1932D1C88E2(1, iParam0, &vVar0, 3))
	{
		if (func_360(vVar0.y, 1, 1))
		{
			iVar1 = unk_0xA95CF30C72EB526E(vVar0.y);
			if (unk_0x724D816EA203A79E(iVar1))
			{
				if (unk_0x5237AF95232D78C5(iVar1, 0))
				{
					iVar2 = unk_0x9FE9D386222EEE47(iVar1, 0);
					if (unk_0x403C891106DCABAF(iVar2, vVar0.z) && unk_0x32405B7614E36453())
					{
						if (func_370(iVar2, &bVar3))
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

int func_370(int iParam0, var uParam1)//Position - 0xB49B
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

void func_371()//Position - 0xB4FA
{
	SYSTEM::WAIT(0);
}

void func_372(struct<21> Param0)//Position - 0xB507
{
	func_375(func_376(Param0), Param0);
	func_374(0, -1, 0);
	unk_0x76AE988734CA7760(&Local_103, 23);
	unk_0xE45D6A3FD6454198(&vLocal_108, 97);
	unk_0x6C87EFD58B261C6F(0);
	if (!func_373())
	{
		func_358();
	}
	unk_0xF0059F27F7BB6680(&(Global_252E21.f_EA2), 0);
	unk_0x7CB6FD92BE491AD9(&(Global_252E21.f_EA2), 1);
}

int func_373()//Position - 0xB55F
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
		if (func_367())
		{
			return 0;
		}
		if (func_365(155))
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

int func_374(int iParam0, int iParam1, bool bParam2)//Position - 0xB5B8
{
	int iVar0;
	
	iVar0 = unk_0x4796DAD7A8894E2F();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_359();
			}
			else
			{
				return 0;
			}
		}
		if (!func_352())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x7AF0088ABFA713B6())
				{
					if (!bParam2)
					{
						func_359();
					}
					else
					{
						return 0;
					}
				}
				if (func_367())
				{
					if (!bParam2)
					{
						func_359();
					}
					else
					{
						return 0;
					}
				}
				if (func_365(155))
				{
					if (!bParam2)
					{
						func_359();
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
					func_359();
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
				func_359();
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
			func_359();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_375(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0xB6CD
{
	if (!unk_0x7AF0088ABFA713B6())
	{
		func_359();
	}
	unk_0xBF463BC3D6FFDE31(iParam0, 0, Param1.f_10);
}

int func_376(int iParam0)//Position - 0xB6EC
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

