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
	var uLocal_60 = 10;
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
	var uLocal_71 = 2;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 8;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 8;
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
	float fLocal_94 = 0f;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	struct<73> Local_103 = { 0, 0, 3, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1101004800, 0 } ;
	struct<10> Local_104[32];
	struct<54> Local_105 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0 } ;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	int iLocal_108 = 0;
	char* sLocal_109 = NULL;
	int iLocal_110 = 0;
	vector3 vLocal_111 = { 0f, 0f, 0f };
	vector3 vLocal_112 = { 0f, 0f, 0f };
	float fLocal_113 = 0f;
	int iLocal_114 = 0;
	vector3 vLocal_115 = { 0f, 0f, 0f };
	vector3 vLocal_116 = { 0f, 0f, 0f };
	int iLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	vector3 vLocal_127 = { 0f, 0f, 0f };
	float fLocal_128 = 0f;
	vector3 vLocal_129 = { 0f, 0f, 0f };
	float fLocal_130 = 0f;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	vector3 vLocal_143 = { 0f, 0f, 0f };
	vector3 vLocal_144 = { 0f, 0f, 0f };
	vector3 vLocal_145 = { 0f, 0f, 0f };
	vector3 vLocal_146 = { 0f, 0f, 0f };
	float fLocal_147 = 0f;
	vector3 vLocal_148 = { 0f, 0f, 0f };
	vector3 vLocal_149 = { 0f, 0f, 0f };
	float fLocal_150 = 0f;
	var uLocal_151 = 16;
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
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	int iLocal_316[5] = { 0, 0, 0, 0, 0 };
	int iLocal_317[5] = { 0, 0, 0, 0, 0 };
	float fLocal_318 = 0f;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	int iLocal_333 = 0;
	int iLocal_334 = 0;
	int iLocal_335 = 0;
	int iLocal_336 = 0;
	int iLocal_337 = 0;
	int iLocal_338 = 0;
	int iLocal_339 = 0;
	int iLocal_340 = 0;
	int iLocal_341 = 0;
	vector3 vLocal_342 = { 0f, 0f, 0f };
	struct<21> Local_343 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	iLocal_110 = joaat("mp_m_shopkeep_01");
	iLocal_114 = -1;
	iLocal_117 = -1;
	iLocal_131 = 303280717;
	iLocal_132 = SYSTEM::ROUND(Global_40001.f_975);
	iLocal_133 = SYSTEM::ROUND(Global_40001.f_971) + 1;
	iLocal_134 = 1;
	if (unk_0x7AF0088ABFA713B6())
	{
		if (!func_434(ScriptParam_343))
		{
			func_429();
		}
		if (func_428(1))
		{
			func_420(unk_0xB5CEFD608600A09F(), 0, 98816);
		}
	}
	while (true)
	{
		func_419();
		if (func_409())
		{
			func_429();
		}
		func_407();
		if (unk_0xFA30DFD0084E92FE(Local_103.f_17, 6))
		{
			if (func_428(1))
			{
				func_420(unk_0xB5CEFD608600A09F(), 1, 0);
				func_404();
				unk_0x7CB6FD92BE491AD9(&(Local_105.f_35), 7);
				func_403();
			}
		}
		switch (func_402(unk_0x6BAA0516CC970D99()))
		{
			case 0:
				unk_0x522053D86D6E1C7A("mp_am_hold_up");
				if (unk_0xF9E082857622D91E("mp_am_hold_up"))
				{
					if (func_392())
					{
						unk_0x8AA3F48A15444B98(func_391(Local_105), 0);
						if (unk_0x7FFE36DB9042AF23(Local_103))
						{
							if (func_390() > 0)
							{
								if (!func_389(Local_103))
								{
									func_388(&uLocal_151, 3, unk_0xE48AD7BF7762E114(Local_103), &(Local_103.f_2E), 1, 0);
									func_387();
								}
								unk_0xF0059F27F7BB6680(&(Local_105.f_34), 22);
								Local_104[unk_0x6BAA0516CC970D99() /*10*/].f_4 = 2;
							}
						}
					}
				}
				if (func_390() == 6)
				{
					Local_104[unk_0x6BAA0516CC970D99() /*10*/].f_4 = 5;
				}
				break;
			
			case 2:
				func_264(&Local_105, vLocal_115, vLocal_116, &Local_103, &(Local_104[unk_0x6BAA0516CC970D99() /*10*/]), unk_0x0C265B3C448E6954(unk_0xE48AD7BF7762E114(Local_103), vLocal_148, vLocal_149, fLocal_150, 0, 1, 0), 0);
				func_257();
				if (func_390() == 2)
				{
					func_133();
				}
				else if (func_390() == 6)
				{
					Local_104[unk_0x6BAA0516CC970D99() /*10*/].f_4 = 5;
				}
				if (!unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), vLocal_144, 30f, 30f, 30f, 0, 1, 0))
				{
					Local_104[unk_0x6BAA0516CC970D99() /*10*/].f_4 = 6;
				}
				break;
			
			case 5:
				func_132(&(Local_103.f_45));
				if (func_131(&(Local_103.f_45)))
				{
					Local_104[unk_0x6BAA0516CC970D99() /*10*/].f_4 = 6;
				}
				break;
			
			case 4:
				Local_104[unk_0x6BAA0516CC970D99() /*10*/].f_4 = 6;
			
			case 6:
				func_51();
				func_429();
				break;
		}
		if (unk_0x0DE6397A2CB3EF75())
		{
			switch (func_390())
			{
				case 0:
					if (!unk_0xFA30DFD0084E92FE(Local_105.f_34, 16))
					{
						func_49(func_50(0));
						func_49(func_50(1));
						func_49(func_50(2));
						unk_0x522053D86D6E1C7A("mp_am_hold_up");
						if (unk_0xF9E082857622D91E("mp_am_hold_up"))
						{
							if (func_392())
							{
								unk_0x6C5F5B5F6894CCE3(vLocal_115, 1.5f, 0, 1, 0, true);
								unk_0x6C5F5B5F6894CCE3(vLocal_112, 1.5f, 0, 1, 0, true);
								unk_0xF0059F27F7BB6680(&(Local_105.f_34), 16);
							}
						}
					}
					else if (func_47())
					{
						Local_103.f_C = 2;
					}
					break;
				
				case 2:
					func_46();
					func_43();
					func_28();
					func_27();
					func_20();
					func_19();
					func_11();
					func_10();
					if (func_4())
					{
						func_1();
						Local_103.f_C = 6;
					}
					break;
				
				case 6:
					func_1();
					break;
				}
		}
	}
}

void func_1()//Position - 0x394
{
	if (unk_0x7FFE36DB9042AF23(Local_103.f_D))
	{
		if (func_3(Local_103.f_D))
		{
			if (unk_0xE7E55F7532DEE345(unk_0x370629AFF3A5C45C(Local_103.f_D)))
			{
				unk_0x17175087F2DB6AC8(unk_0x370629AFF3A5C45C(Local_103.f_D), 1, 1);
				func_2(&(Local_103.f_D));
			}
		}
	}
}

void func_2(var uParam0)//Position - 0x3D7
{
	int iVar0;
	
	if (unk_0x8EA6CABD14F1B89A(*uParam0))
	{
		iVar0 = unk_0xD14280F674B4DBF4(*uParam0);
		unk_0x91BCA7FA73FFCDF2(&iVar0);
	}
}

int func_3(int iParam0)//Position - 0x3FB
{
	if (unk_0x7FFE36DB9042AF23(iParam0))
	{
		unk_0xCDF25F6ADC88CCB4(iParam0);
		return unk_0x89B5CBCE9D131B32(iParam0);
	}
	return 0;
}

int func_4()//Position - 0x41D
{
	if (func_5())
	{
		return 1;
	}
	return 0;
}

int func_5()//Position - 0x431
{
	if (unk_0xFA30DFD0084E92FE(Local_103.f_17, 2))
	{
		return 1;
	}
	if (unk_0xFA30DFD0084E92FE(Local_103.f_17, 3))
	{
		return 1;
	}
	if (!func_9())
	{
		if ((unk_0xFA30DFD0084E92FE(Local_103.f_17, 11) || unk_0xFA30DFD0084E92FE(Local_103.f_17, 19)) || (unk_0xFA30DFD0084E92FE(Local_103.f_17, 9) && !unk_0xFA30DFD0084E92FE(Local_103.f_17, 20)))
		{
			func_6(Local_105.f_32, 1, func_7());
			return 1;
		}
		if (unk_0xFA30DFD0084E92FE(Local_103.f_17, 18))
		{
			func_6(Local_105.f_32, 1, func_7());
			return 1;
		}
	}
	if (unk_0xFA30DFD0084E92FE(Local_103.f_17, 18))
	{
		if (!unk_0xFA30DFD0084E92FE(Local_103.f_18, 7))
		{
			func_6(Local_105.f_32, 1, func_7());
			unk_0xF0059F27F7BB6680(&(Local_103.f_18), 7);
		}
	}
	return 0;
}

void func_6(var uParam0, int iParam1, int iParam2)//Position - 0x501
{
	struct<4> Var0;
	
	Var0 = 573498540;
	Var0.f_1 = unk_0xB5CEFD608600A09F();
	Var0.f_2 = uParam0;
	Var0.f_3 = iParam1;
	if (!iParam2 == 0)
	{
		unk_0x38E776D9FA75679B(1, &Var0, 4, iParam2);
	}
}

int func_7()//Position - 0x539
{
	return func_8(unk_0x97A8DBBB86A85986("freemode", -1, 0));
}

int func_8(int iParam0)//Position - 0x54E
{
	var uVar0;
	
	unk_0xF0059F27F7BB6680(&uVar0, iParam0);
	return uVar0;
}

int func_9()//Position - 0x560
{
	if ((unk_0xFA30DFD0084E92FE(Local_103.f_17, 13) || unk_0xFA30DFD0084E92FE(Local_103.f_17, 27)) || unk_0xFA30DFD0084E92FE(Local_103.f_17, 28))
	{
		return 1;
	}
	return 0;
}

void func_10()//Position - 0x59A
{
	var uVar0;
	
	if (!unk_0xFA30DFD0084E92FE(Local_103.f_17, 21))
	{
		if (func_389(Local_103))
		{
			Local_103.f_48 = unk_0xDF6ED6F322C4F404(Local_103, &uVar0);
			unk_0xF0059F27F7BB6680(&(Local_103.f_17), 21);
		}
	}
	if (!unk_0xFA30DFD0084E92FE(Local_103.f_17, 19))
	{
		if (unk_0xFA30DFD0084E92FE(Local_103.f_17, 10) && Local_103.f_25 <= 0f)
		{
			unk_0xF0059F27F7BB6680(&(Local_103.f_17), 19);
		}
	}
	if (!unk_0xFA30DFD0084E92FE(Local_103.f_18, 17))
	{
		if (unk_0xFA30DFD0084E92FE(Local_103.f_17, 20))
		{
			if (func_3(Local_103.f_D))
			{
				unk_0x8AB4D83A9145FCD7(unk_0x370629AFF3A5C45C(Local_103.f_D), 0, 0);
				unk_0xF0059F27F7BB6680(&(Local_103.f_18), 17);
			}
		}
	}
	if (!unk_0xFA30DFD0084E92FE(Local_103.f_17, 6))
	{
		if (Global_267214.f_8 == 1)
		{
			unk_0xF0059F27F7BB6680(&(Local_103.f_17), 6);
			unk_0xF0059F27F7BB6680(&(Local_103.f_17), 16);
		}
	}
}

int func_11()//Position - 0x667
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x0DE6397A2CB3EF75() || !unk_0xFA30DFD0084E92FE(Local_103.f_19, 0))
	{
		return 0;
	}
	if (Local_103.f_42 != 6)
	{
		if (Local_103.f_42 > 0 && func_389(Local_103.f_F))
		{
			Local_103.f_42 = 6;
			return 0;
		}
		switch (Local_103.f_42)
		{
			case 0:
				if (!func_17(&uLocal_331, 10000, 0))
				{
					iVar0 = unk_0xDD69F88FEB1D3ABD(vLocal_148, 20f, 20f, 20f, -1);
					if (!unk_0x36CEFBE9B745A58D(iVar0))
					{
						if (!unk_0x5CAE759AE8219D20(iVar0))
						{
							iVar1 = unk_0x6F79ECA8C83E4357(iVar0);
							if (((((((iVar1 != joaat("mp_m_freemode_01") && iVar1 != joaat("mp_f_freemode_01")) && !unk_0xBFED55DE95EA4B0C(vLocal_148, 25f, 25f, 25f)) && !unk_0x4DBCE270B354E123(iVar0, vLocal_143, 1f, 1f, 2f, 0, 1, 0)) && !unk_0x72C9157015C2151B(iVar0, 7)) && !unk_0x5237AF95232D78C5(iVar0, 1)) && unk_0x95FEE2A3FD506FA6(iVar0)) && func_16(iVar1))
							{
								unk_0xC7587327285D9984(iVar0);
								if (unk_0x4DF785C4DF542CD0(iVar0))
								{
									if (func_15(&(Local_103.f_F), iVar0, 1, 0))
									{
										unk_0x7A853DA478E4882E(unk_0xE48AD7BF7762E114(Local_103.f_F), joaat("weapon_pistol"), 25000, 0);
										unk_0x22321800954A532E(unk_0xE48AD7BF7762E114(Local_103.f_F), 1);
										Local_103.f_42 = 1;
										unk_0xF0059F27F7BB6680(&(Local_103.f_19), 1);
										unk_0x4106FAF8AA1D69D5(unk_0xE48AD7BF7762E114(Local_103.f_F), Global_180796);
										unk_0x54480313BB3E8DD0(unk_0xE48AD7BF7762E114(Local_103.f_F), 2);
										unk_0x65E471E4A2D56226(unk_0xE48AD7BF7762E114(Local_103.f_F), SYSTEM::ROUND((200f * Global_40001.f_99)), 0);
										func_388(&uLocal_151, 4, unk_0xE48AD7BF7762E114(Local_103.f_F), "StoreHero", 1, 0);
										unk_0xA3A7138EAD2268A0(unk_0xE48AD7BF7762E114(Local_103.f_F), func_14(), 0, 1);
									}
								}
							}
						}
					}
				}
				break;
			
			case 1:
				if ((unk_0xFA30DFD0084E92FE(Local_103.f_17, 9) || unk_0xFA30DFD0084E92FE(Local_103.f_17, 5)) || unk_0xFA30DFD0084E92FE(Local_103.f_17, 4))
				{
					Local_103.f_42 = 2;
				}
				break;
			
			case 2:
				if (func_17(&(Local_103.f_43), 3000, 0) || (unk_0xF4FCC3C1048FF2AB(unk_0xE48AD7BF7762E114(Local_103.f_F), 1227113341) != 0 && unk_0xF4FCC3C1048FF2AB(unk_0xE48AD7BF7762E114(Local_103.f_F), 1227113341) != 1))
				{
					func_13(&(Local_103.f_43));
					Local_103.f_42 = 3;
				}
				break;
			
			case 3:
				if (((unk_0xFA30DFD0084E92FE(Local_103.f_17, 5) || unk_0xFA30DFD0084E92FE(Local_103.f_19, 8)) || unk_0xFA30DFD0084E92FE(Local_103.f_19, 9)) || func_17(&(Local_103.f_43), 5000, 0))
				{
					if (func_12() || func_17(&(Local_103.f_43), 5000, 0))
					{
						Local_103.f_42 = 4;
					}
					else
					{
						Local_103.f_42 = 5;
					}
				}
				break;
			
			case 4:
				break;
			
			case 5:
				break;
			}
	}
	return 1;
}

int func_12()//Position - 0x946
{
	if (unk_0xFA30DFD0084E92FE(unk_0x491B2241281A03B7(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_13(var uParam0)//Position - 0x967
{
	uParam0->f_1 = 0;
}

char* func_14()//Position - 0x974
{
	int iVar0;
	
	iVar0 = unk_0x491B2241281A03B7(0, 100);
	if (iVar0 < 30)
	{
		return "WORLD_HUMAN_SMOKING";
	}
	if (iVar0 >= 30 && iVar0 < 70)
	{
		return "WORLD_HUMAN_HANG_OUT_STREET";
	}
	return "WORLD_HUMAN_STAND_MOBILE";
}

int func_15(var uParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x9B3
{
	unk_0x77815D3407C6700D(iParam1, bParam2, iParam3);
	*uParam0 = unk_0x2F3B70ED60C4B9EB(iParam1);
	if (unk_0x7FFE36DB9042AF23(*uParam0))
	{
		if (bParam2)
		{
			unk_0xF2A50F5F6E7737D8(*uParam0, 1);
		}
		return 1;
	}
	return 0;
}

int func_16(int iParam0)//Position - 0x9EA
{
	if (((((((((((((((((((((((((((((((((((((((((((((((((((((iParam0 == joaat("mp_m_freemode_01") || iParam0 == joaat("mp_m_fibsec_01")) || iParam0 == joaat("mp_s_m_armoured_01")) || iParam0 == joaat("s_f_y_airhostess_01")) || iParam0 == joaat("s_f_y_baywatch_01")) || iParam0 == joaat("s_f_y_cop_01")) || iParam0 == joaat("s_f_y_ranger_01")) || iParam0 == joaat("s_f_y_scrubs_01")) || iParam0 == joaat("s_f_y_sheriff_01")) || iParam0 == joaat("s_m_m_armoured_01")) || iParam0 == joaat("s_m_m_armoured_02")) || iParam0 == joaat("s_m_m_bouncer_01")) || iParam0 == joaat("s_m_m_ciasec_01")) || iParam0 == joaat("s_m_m_chemsec_01")) || iParam0 == joaat("s_m_m_doctor_01")) || iParam0 == joaat("s_m_m_fiboffice_01")) || iParam0 == joaat("s_m_m_fiboffice_02")) || iParam0 == joaat("s_m_m_highsec_01")) || iParam0 == joaat("s_m_m_highsec_02")) || iParam0 == joaat("s_m_m_janitor")) || iParam0 == joaat("s_m_m_lsmetro_01")) || iParam0 == joaat("s_m_m_marine_01")) || iParam0 == joaat("s_m_m_marine_02")) || iParam0 == joaat("s_m_m_paramedic_01")) || iParam0 == joaat("s_m_m_pilot_01")) || iParam0 == joaat("s_m_m_pilot_02")) || iParam0 == joaat("s_m_m_postal_01")) || iParam0 == joaat("s_m_m_postal_02")) || iParam0 == joaat("s_m_m_prisguard_01")) || iParam0 == joaat("s_m_m_scientist_01")) || iParam0 == joaat("s_m_m_security_01")) || iParam0 == joaat("s_m_m_ups_01")) || iParam0 == joaat("s_m_m_ups_02")) || iParam0 == joaat("s_m_y_airworker")) || iParam0 == joaat("s_m_y_armymech_01")) || iParam0 == joaat("s_m_y_baywatch_01")) || iParam0 == joaat("s_m_y_blackops_01")) || iParam0 == joaat("s_m_y_blackops_02")) || iParam0 == joaat("s_m_y_cop_01")) || iParam0 == joaat("s_m_y_doorman_01")) || iParam0 == joaat("s_m_y_fireman_01")) || iParam0 == joaat("s_m_y_garbage")) || iParam0 == joaat("s_m_y_hwaycop_01")) || iParam0 == joaat("s_m_y_marine_01")) || iParam0 == joaat("s_m_y_marine_02")) || iParam0 == joaat("s_m_y_marine_03")) || iParam0 == joaat("s_m_y_pilot_01")) || iParam0 == joaat("s_m_y_ranger_01")) || iParam0 == joaat("s_m_y_sheriff_01")) || iParam0 == joaat("s_m_y_swat_01")) || iParam0 == joaat("s_m_y_uscg_01")) || iParam0 == joaat("s_m_y_valet_01")) || iParam0 == joaat("s_m_y_waiter_01")) || iParam0 == joaat("u_m_m_jewelsec_01"))
	{
		return 0;
	}
	return 1;
}

int func_17(var uParam0, int iParam1, bool bParam2)//Position - 0xCE8
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_18(uParam0, bParam2, 0);
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

void func_18(var uParam0, bool bParam1, bool bParam2)//Position - 0xD46
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

void func_19()//Position - 0xD8B
{
	if (Local_103.f_1E == 0)
	{
		if (Local_103.f_3 >= 2 && Local_103.f_3 != 9)
		{
			Local_103.f_1E = unk_0x88FF812531D9DF7C(99, unk_0xBC25C936A095B5BA(), 60000f);
		}
	}
}

void func_20()//Position - 0xDC3
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (!unk_0xFA30DFD0084E92FE(Local_103.f_1, 5))
	{
		if (Local_103.f_29 > 0)
		{
			func_24();
			if (!unk_0xFA30DFD0084E92FE(Local_103.f_1, 5))
			{
				return;
			}
		}
	}
	if (unk_0xFA30DFD0084E92FE(Local_103.f_1, 1))
	{
		if (Local_103.f_2 == 3 && !unk_0xFA30DFD0084E92FE(Local_103.f_17, 9))
		{
			Local_103.f_2 = 0;
		}
		unk_0x7CB6FD92BE491AD9(&(Local_103.f_1), 1);
	}
	switch (Local_103.f_2)
	{
		case 0:
			if ((((func_3(Local_103) && !func_389(Local_103)) && func_3(Local_103.f_10[Local_103.f_1A])) && Local_103.f_3 != 8) && Local_103.f_3 != 7)
			{
				if (!unk_0x2CDE18D6C89522AD(unk_0xE48AD7BF7762E114(Local_103)))
				{
					if (unk_0xFA30DFD0084E92FE(Local_103.f_17, 9) || unk_0xFA30DFD0084E92FE(Local_103.f_1, 4))
					{
						Local_103.f_2 = 2;
						return;
					}
					if (!iLocal_108)
					{
						unk_0xC0FDCDB0DF739C50(unk_0xE48AD7BF7762E114(Local_103), Local_103.f_2A, 1600);
						iLocal_108 = 1;
					}
					if (func_17(&uLocal_321, 100, 0))
					{
						fVar0 = unk_0x349C94FFF43E2979(unk_0xE48AD7BF7762E114(Local_103));
						fVar1 = (Local_103.f_2A - 10f);
						fVar2 = (Local_103.f_2A + 10f);
						if (fVar1 < 0f)
						{
							fVar2 = ((Local_103.f_2A - 10f) + 360f);
							fVar1 = ((Local_103.f_2A + 10f) + 360f);
						}
						else if (fVar2 >= 360f)
						{
							fVar2 = ((Local_103.f_2A - 10f) - 360f);
							fVar1 = ((Local_103.f_2A + 10f) - 360f);
						}
						if (((fVar0 < fVar2 && fVar0 > fVar1) && func_17(&uLocal_327, 1000, 0)) || func_17(&uLocal_327, 3125, 0))
						{
							unk_0xD999D66C5AFA4BE3(unk_0xE48AD7BF7762E114(Local_103));
							Local_103.f_1B = unk_0xC3B4161C4E86D1FA(unk_0xA4455714F3DCE207(unk_0xE48AD7BF7762E114(Local_103), -0.65f, 0.87f, -0.02f), vLocal_116, 2, 1, 0, 1065353216, 0, 1065353216);
							unk_0xE09EEAFD88EC7AA1(unk_0xE48AD7BF7762E114(Local_103), Local_103.f_1B, "mp_am_hold_up", func_23(Local_103.f_1A), 1.5f, -1.5f, 157, 16, 1148846080, 0);
							if (unk_0x7FFE36DB9042AF23(Local_103.f_10[Local_103.f_1A]))
							{
								unk_0xDC078F87049ECECE(unk_0x370629AFF3A5C45C(Local_103.f_10[Local_103.f_1A]), true, 0);
								unk_0xDA8D3375412E53C1(unk_0x370629AFF3A5C45C(Local_103.f_10[Local_103.f_1A]), Local_103.f_1B, "mp_am_hold_up", func_22(Local_103.f_1A), 4f, -4f, 8);
							}
							unk_0x6013B113B38211A7(Local_103.f_1B);
							Local_103.f_2 = 1;
							iLocal_117 = unk_0xB57F0B6D6209FF97(Local_103.f_1B);
						}
					}
				}
			}
			break;
		
		case 1:
			if (unk_0xFA30DFD0084E92FE(Local_103.f_17, 9) || unk_0xFA30DFD0084E92FE(Local_103.f_1, 4))
			{
				iLocal_117 = unk_0xB57F0B6D6209FF97(Local_103.f_1B);
				if (unk_0x77FC50899603581D(iLocal_117))
				{
					unk_0x913ADDC330AF164E(Local_103.f_1B);
				}
				Local_103.f_2 = 2;
				return;
			}
			if (iLocal_117 >= 0)
			{
				if (unk_0x77FC50899603581D(iLocal_117) || func_17(&uLocal_323, 2000, 0))
				{
					if ((unk_0x77FC50899603581D(iLocal_117) && unk_0x8FD30584EB38411B(iLocal_117) == 1f) || func_17(&uLocal_323, 2000, 0))
					{
						if ((func_3(Local_103) && !func_389(Local_103)) && !unk_0xFA30DFD0084E92FE(Local_103.f_17, 9))
						{
							unk_0xA4E856A8CD53B8DF(unk_0xE48AD7BF7762E114(Local_103));
						}
						unk_0x913ADDC330AF164E(Local_103.f_1B);
						Local_103.f_2 = 2;
					}
				}
			}
			else
			{
				iLocal_117 = unk_0xB57F0B6D6209FF97(Local_103.f_1B);
			}
			break;
		
		case 2:
			func_3(Local_103.f_10[Local_103.f_1A]);
			if (func_17(&uLocal_329, 1000, 0) && func_3(Local_103.f_10[Local_103.f_1A]))
			{
				if (unk_0x724D816EA203A79E(unk_0x370629AFF3A5C45C(Local_103.f_10[Local_103.f_1A])))
				{
					unk_0xDC078F87049ECECE(unk_0x370629AFF3A5C45C(Local_103.f_10[Local_103.f_1A]), false, 0);
					unk_0x346478B12F69D4E3(unk_0x370629AFF3A5C45C(Local_103.f_10[Local_103.f_1A]), true);
					unk_0x641B19E156645A92(unk_0x370629AFF3A5C45C(Local_103.f_10[Local_103.f_1A]), func_21(Local_103.f_1A), 1, 0, 0, 1);
				}
				iLocal_117 = -1;
				iLocal_108 = 0;
				if (unk_0xFA30DFD0084E92FE(Local_103.f_1, 4))
				{
					unk_0x7CB6FD92BE491AD9(&(Local_103.f_1), 4);
				}
				func_13(&uLocal_329);
				func_13(&uLocal_323);
				func_13(&uLocal_321);
				func_13(&uLocal_327);
				Local_103.f_2 = 3;
			}
			break;
		
		case 3:
			break;
	}
}

Vector3 func_21(int iParam0)//Position - 0x1218
{
	switch (iParam0)
	{
		case 3:
			return vLocal_129 - Vector(1f, 0.2f, 0.1f);
		
		case 1:
			return vLocal_129 - Vector(1f, 0.2f, 0f);
		
		case 2:
			return vLocal_129 - Vector(1f, 0.2f, -0.1f);
		
		case 4:
			return vLocal_129 - Vector(1f, -0.2f, 0.1f);
		
		case 0:
			return vLocal_129 - Vector(1f, -0.2f, 0f);
		
		case 5:
			return vLocal_129 - Vector(1f, -0.2f, -0.1f);
		
		default:
	}
	return vLocal_129 - Vector(1f, 0f, -0.1f);
}

char* func_22(int iParam0)//Position - 0x12C8
{
	switch (iParam0)
	{
		case 3:
			return "purchase_chocbar";
		
		case 1:
			return "purchase_chocbar";
		
		case 2:
			return "purchase_chocbar";
		
		case 4:
			return "purchase_cigarette";
		
		case 0:
			return "purchase_beer";
		
		case 5:
			return "purchase_energydrink";
		
		default:
	}
	return "purchase_energydrink";
}

char* func_23(int iParam0)//Position - 0x1322
{
	switch (iParam0)
	{
		case 3:
			return "purchase_chocbar_shopkeeper";
		
		case 1:
			return "purchase_chocbar_shopkeeper";
		
		case 2:
			return "purchase_chocbar_shopkeeper";
		
		case 4:
			return "purchase_cigarette_shopkeeper";
		
		case 0:
			return "purchase_beer_shopkeeper";
		
		case 5:
			return "purchase_energydrink_shopkeeper";
		
		default:
	}
	return "purchase_energydrink_shopkeeper";
}

int func_24()//Position - 0x137E
{
	if (((((!unk_0x7FFE36DB9042AF23(Local_103.f_10[3]) || !unk_0x7FFE36DB9042AF23(Local_103.f_10[1])) || !unk_0x7FFE36DB9042AF23(Local_103.f_10[2])) || !unk_0x7FFE36DB9042AF23(Local_103.f_10[4])) || !unk_0x7FFE36DB9042AF23(Local_103.f_10[0])) || !unk_0x7FFE36DB9042AF23(Local_103.f_10[5]))
	{
		if (((((func_49(func_26(3)) && func_49(func_26(1))) && func_49(func_26(2))) && func_49(func_26(4))) && func_49(func_26(0))) && func_49(func_26(5)))
		{
			if (unk_0x16CC0D3F6523391B(0, 0, 6, 0))
			{
				if (!unk_0x7FFE36DB9042AF23(Local_103.f_10[3]))
				{
					if (func_25(&(Local_103.f_10[3]), func_26(3), func_21(3), 1, 1, 0, 1, 0))
					{
						unk_0x7FDC51451428DF70(unk_0x370629AFF3A5C45C(Local_103.f_10[3]), unk_0x9911032C958CE1B0(vLocal_111));
						unk_0x346478B12F69D4E3(unk_0x370629AFF3A5C45C(Local_103.f_10[3]), true);
						unk_0xDC078F87049ECECE(unk_0x370629AFF3A5C45C(Local_103.f_10[3]), false, 0);
					}
				}
				if (!unk_0x7FFE36DB9042AF23(Local_103.f_10[1]))
				{
					if (func_25(&(Local_103.f_10[1]), func_26(1), func_21(1), 1, 1, 0, 1, 0))
					{
						unk_0x7FDC51451428DF70(unk_0x370629AFF3A5C45C(Local_103.f_10[1]), unk_0x9911032C958CE1B0(vLocal_111));
						unk_0x346478B12F69D4E3(unk_0x370629AFF3A5C45C(Local_103.f_10[1]), true);
						unk_0xDC078F87049ECECE(unk_0x370629AFF3A5C45C(Local_103.f_10[1]), false, 0);
					}
				}
				if (!unk_0x7FFE36DB9042AF23(Local_103.f_10[2]))
				{
					if (func_25(&(Local_103.f_10[2]), func_26(2), func_21(2), 1, 1, 0, 1, 0))
					{
						unk_0x7FDC51451428DF70(unk_0x370629AFF3A5C45C(Local_103.f_10[2]), unk_0x9911032C958CE1B0(vLocal_111));
						unk_0x346478B12F69D4E3(unk_0x370629AFF3A5C45C(Local_103.f_10[2]), true);
						unk_0xDC078F87049ECECE(unk_0x370629AFF3A5C45C(Local_103.f_10[2]), false, 0);
					}
				}
				if (!unk_0x7FFE36DB9042AF23(Local_103.f_10[4]))
				{
					if (func_25(&(Local_103.f_10[4]), func_26(4), func_21(4), 1, 1, 0, 1, 0))
					{
						unk_0x7FDC51451428DF70(unk_0x370629AFF3A5C45C(Local_103.f_10[4]), unk_0x9911032C958CE1B0(vLocal_111));
						unk_0x346478B12F69D4E3(unk_0x370629AFF3A5C45C(Local_103.f_10[4]), true);
						unk_0xDC078F87049ECECE(unk_0x370629AFF3A5C45C(Local_103.f_10[4]), false, 0);
					}
				}
				if (!unk_0x7FFE36DB9042AF23(Local_103.f_10[0]))
				{
					if (func_25(&(Local_103.f_10[0]), func_26(0), func_21(0), 1, 1, 0, 1, 0))
					{
						unk_0x7FDC51451428DF70(unk_0x370629AFF3A5C45C(Local_103.f_10[0]), unk_0x9911032C958CE1B0(vLocal_111));
						unk_0x346478B12F69D4E3(unk_0x370629AFF3A5C45C(Local_103.f_10[0]), true);
						unk_0xDC078F87049ECECE(unk_0x370629AFF3A5C45C(Local_103.f_10[0]), false, 0);
					}
				}
				if (!unk_0x7FFE36DB9042AF23(Local_103.f_10[5]))
				{
					if (func_25(&(Local_103.f_10[5]), func_26(5), func_21(5), 1, 1, 0, 1, 0))
					{
						unk_0x7FDC51451428DF70(unk_0x370629AFF3A5C45C(Local_103.f_10[5]), unk_0x9911032C958CE1B0(vLocal_111));
						unk_0x346478B12F69D4E3(unk_0x370629AFF3A5C45C(Local_103.f_10[5]), true);
						unk_0xDC078F87049ECECE(unk_0x370629AFF3A5C45C(Local_103.f_10[5]), false, 0);
					}
				}
			}
		}
	}
	else
	{
		unk_0xF0059F27F7BB6680(&(Local_103.f_1), 5);
		return 1;
	}
	return 0;
}

int func_25(var uParam0, int iParam1, vector3 vParam2, bool bParam3, bool bParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x16C1
{
	if (!unk_0x892B896276E3AB8B(1))
	{
		return 0;
	}
	if (bParam7)
	{
		*uParam0 = unk_0x2448E4C54354F8D6(unk_0x1E0CB5BD6231AB3D(iParam1, vParam2, bParam4, bParam3, iParam5));
	}
	else
	{
		*uParam0 = unk_0x2448E4C54354F8D6(unk_0xB6896943DA475493(iParam1, vParam2, bParam4, bParam3, iParam5));
	}
	if (unk_0x7FFE36DB9042AF23(*uParam0))
	{
		unk_0x656194E145691D3E(unk_0x370629AFF3A5C45C(*uParam0), iParam6);
		if (unk_0x270072584099CC42(unk_0x370629AFF3A5C45C(*uParam0)))
		{
			if (bParam3)
			{
				unk_0xF2A50F5F6E7737D8(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_26(int iParam0)//Position - 0x1743
{
	switch (iParam0)
	{
		case 3:
			return joaat("prop_choc_pq");
		
		case 1:
			return joaat("prop_choc_ego");
		
		case 2:
			return joaat("prop_choc_meto");
		
		case 4:
			return joaat("prop_ld_fags_01");
		
		case 0:
			return joaat("prop_ecola_can");
		
		case 5:
			return joaat("prop_amb_beer_bottle");
		
		default:
	}
	return joaat("prop_choc_pq");
}

void func_27()//Position - 0x17AB
{
	float fVar0;
	
	if (!unk_0xFA30DFD0084E92FE(Local_103.f_17, 9))
	{
		if (Global_267214.f_8 == 1 || unk_0xFA30DFD0084E92FE(Local_103.f_17, 6))
		{
			if ((((func_3(Local_103.f_D) && func_3(Local_103)) && !func_389(Local_103)) && Local_103.f_3 != 8) && Local_103.f_3 != 7)
			{
				if (!unk_0x2CDE18D6C89522AD(unk_0xE48AD7BF7762E114(Local_103)))
				{
					if (!unk_0xFA30DFD0084E92FE(Local_105.f_34, 30))
					{
						unk_0xC0FDCDB0DF739C50(unk_0xE48AD7BF7762E114(Local_103), Local_103.f_2A, 1600);
						unk_0xF0059F27F7BB6680(&(Local_105.f_34), 30);
					}
					if (func_17(&uLocal_319, 100, 0))
					{
						fVar0 = unk_0x349C94FFF43E2979(unk_0xE48AD7BF7762E114(Local_103));
						if ((fVar0 > (Local_103.f_2A - 20f) && fVar0 < (Local_103.f_2A + 20f)) || func_17(&uLocal_325, 1500, 0))
						{
							unk_0xD999D66C5AFA4BE3(unk_0xE48AD7BF7762E114(Local_103));
							Local_103.f_1D = unk_0xC3B4161C4E86D1FA(vLocal_115, vLocal_116, 2, 1, 0, 1065353216, 0, 1065353216);
							unk_0xE09EEAFD88EC7AA1(unk_0xE48AD7BF7762E114(Local_103), Local_103.f_1D, "mp_am_hold_up", "holdup_victim_20s", 4f, -1.5f, 157, 16, 1148846080, 0);
							if (unk_0x7FFE36DB9042AF23(Local_103.f_D))
							{
								unk_0x346478B12F69D4E3(unk_0x370629AFF3A5C45C(Local_103.f_D), false);
								unk_0x73FD5B32F266E65D(unk_0x370629AFF3A5C45C(Local_103.f_D), 1);
								unk_0xDA8D3375412E53C1(unk_0x370629AFF3A5C45C(Local_103.f_D), Local_103.f_1D, "mp_am_hold_up", "holdup_victim_20s_bag", 4f, -4f, 137);
							}
							if (unk_0x7FFE36DB9042AF23(Local_103.f_E))
							{
								unk_0xDA8D3375412E53C1(unk_0x370629AFF3A5C45C(Local_103.f_E), Local_103.f_1D, "mp_am_hold_up", "holdup_victim_20s_till", 4f, -4f, 137);
							}
							unk_0x6013B113B38211A7(Local_103.f_1D);
							unk_0xF0059F27F7BB6680(&(Local_103.f_17), 9);
						}
					}
				}
				else
				{
					Local_103.f_3 = 8;
				}
			}
		}
	}
	else if (!unk_0xFA30DFD0084E92FE(Local_103.f_17, 17))
	{
		iLocal_114 = unk_0xB57F0B6D6209FF97(Local_103.f_1D);
		if (iLocal_114 >= 0)
		{
			func_3(Local_103);
			if (unk_0x77FC50899603581D(iLocal_114))
			{
				unk_0x69194304DB679A9C(unk_0xBC25C936A095B5BA(), 0, -1, 0);
				unk_0xF0059F27F7BB6680(&(Local_103.f_17), 17);
			}
		}
	}
	else if (!unk_0xFA30DFD0084E92FE(Local_103.f_18, 15))
	{
		iLocal_114 = unk_0xB57F0B6D6209FF97(Local_103.f_1D);
		if (iLocal_114 >= 0)
		{
			if (unk_0x77FC50899603581D(iLocal_114))
			{
				func_3(Local_103);
				if ((unk_0x7FFE36DB9042AF23(Local_103.f_D) && func_3(Local_103.f_D)) && func_3(Local_103))
				{
					if (unk_0x8FD30584EB38411B(iLocal_114) > 0.44f)
					{
						unk_0xDC078F87049ECECE(unk_0x370629AFF3A5C45C(Local_103.f_D), true, 0);
						unk_0xD434A01DEA38A939(unk_0x370629AFF3A5C45C(Local_103.f_D), true, 0);
						unk_0xF0059F27F7BB6680(&(Local_103.f_18), 15);
					}
				}
			}
		}
	}
}

int func_28()//Position - 0x1A43
{
	int iVar0;
	float fVar1;
	
	if (!unk_0x0DE6397A2CB3EF75())
	{
		return 0;
	}
	func_41();
	if (Local_103.f_3 != 9)
	{
		if (func_389(Local_103))
		{
			Local_103.f_3 = 9;
			return 0;
		}
		if ((unk_0xFA30DFD0084E92FE(Local_103.f_17, 6) && !unk_0xFA30DFD0084E92FE(Local_103.f_17, 9)) && Local_103.f_3 < 8)
		{
			if (!unk_0x7FFE36DB9042AF23(Local_103.f_D) || !unk_0x7FFE36DB9042AF23(Local_103.f_E))
			{
				Local_103.f_3 = 8;
			}
		}
		switch (Local_103.f_3)
		{
			case 0:
				if (!func_389(Local_103))
				{
					Local_103.f_3 = 1;
				}
				break;
			
			case 1:
				if (unk_0xFA30DFD0084E92FE(Local_103.f_17, 4))
				{
					Local_103.f_3 = 2;
				}
				else if (unk_0xFA30DFD0084E92FE(Local_103.f_17, 6) || unk_0xFA30DFD0084E92FE(Local_103.f_17, 9))
				{
					Local_103.f_3 = 4;
				}
				else if (func_39() || func_33(0))
				{
					Local_103.f_3 = 8;
				}
				else if (func_31())
				{
					Local_103.f_3 = 7;
				}
				break;
			
			case 2:
				if (unk_0xFA30DFD0084E92FE(Local_103.f_17, 6) || unk_0xFA30DFD0084E92FE(Local_103.f_17, 9))
				{
					Local_103.f_3 = 4;
				}
				else if (func_39() || func_33(1))
				{
					Local_103.f_3 = 8;
				}
				else if (func_31())
				{
					Local_103.f_3 = 7;
				}
				break;
			
			case 3:
				if (unk_0xF4FCC3C1048FF2AB(unk_0xE48AD7BF7762E114(Local_103), 1920390111) != 0 && unk_0xF4FCC3C1048FF2AB(unk_0xE48AD7BF7762E114(Local_103), 1920390111) != 1)
				{
					Local_103.f_3 = 4;
				}
				else if (func_33(1))
				{
					Local_103.f_3 = 8;
				}
				else if (func_31())
				{
					Local_103.f_3 = 7;
				}
				break;
			
			case 4:
				if (unk_0xFA30DFD0084E92FE(Local_103.f_17, 17))
				{
					iVar0 = 0;
					iLocal_114 = unk_0xB57F0B6D6209FF97(Local_103.f_1D);
					if (iLocal_114 >= 0)
					{
						if (unk_0x77FC50899603581D(iLocal_114))
						{
							if (unk_0x04880508C862E589(vLocal_111, 3f, 0))
							{
								if (!unk_0xFA30DFD0084E92FE(Local_103.f_17, 25))
								{
									unk_0xF0059F27F7BB6680(&(Local_103.f_17), 25);
								}
								Local_103.f_21 = (Local_103.f_21 + 0.35f);
							}
							fVar1 = unk_0x8FD30584EB38411B(iLocal_114);
							if (fVar1 >= 0.8f)
							{
								Local_103.f_25 = 1f;
							}
							else if (fVar1 <= 0.5f)
							{
								Local_103.f_25 = 0f;
							}
							else if (fVar1 > Local_103.f_25)
							{
								Local_103.f_25 = ((fVar1 - 0.5f) * 3.33f);
							}
							if (fVar1 >= 0.92f)
							{
								Local_103.f_25 = 1f;
								iVar0 = 1;
							}
						}
						else
						{
							iVar0 = 1;
						}
					}
					else
					{
						iVar0 = 1;
					}
					if (iVar0 == 1)
					{
						Local_103.f_3 = 6;
					}
					else if (func_33(1))
					{
						Local_103.f_3 = 8;
					}
					else if (func_31())
					{
						Local_103.f_3 = 7;
					}
				}
				break;
			
			case 5:
				if (func_39() || func_33(1))
				{
					Local_103.f_3 = 8;
				}
				break;
			
			case 6:
				func_29();
				if (func_39() || func_33(1))
				{
					Local_103.f_3 = 8;
				}
				else if (func_31())
				{
					Local_103.f_3 = 7;
				}
				else if (unk_0xFA30DFD0084E92FE(Local_103.f_18, 3))
				{
					if (!unk_0xFA30DFD0084E92FE(Local_103.f_18, 4))
					{
						Local_103.f_3 = 7;
					}
				}
				break;
			
			case 8:
				func_29();
				break;
			
			case 7:
				break;
		}
	}
	else if (!unk_0xFA30DFD0084E92FE(Local_103.f_18, 10))
	{
		if (!unk_0x7FFE36DB9042AF23(Local_103))
		{
			Local_103.f_2B = (Local_103.f_2B - 1);
			unk_0xF0059F27F7BB6680(&(Local_103.f_18), 10);
		}
	}
	return 1;
}

void func_29()//Position - 0x1DAF
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xFA30DFD0084E92FE(Local_103.f_18, 2))
	{
		iVar0 = unk_0x491B2241281A03B7(0, 10);
		iVar1 = (iLocal_134 + func_30());
		if (iVar0 < iVar1)
		{
			unk_0xF0059F27F7BB6680(&(Local_103.f_18), 3);
		}
		unk_0xF0059F27F7BB6680(&(Local_103.f_18), 2);
	}
}

int func_30()//Position - 0x1DF0
{
	int iVar0;
	
	iVar0 = (Global_24FB5C[unk_0xB5CEFD608600A09F() /*406*/].f_24 - 1);
	if (iVar0 >= 4)
	{
		return 4;
	}
	return iVar0;
}

int func_31()//Position - 0x1E15
{
	int iVar0;
	int iVar1;
	
	if (unk_0x694514BD37EC4E94(0, 24) || unk_0x694514BD37EC4E94(0, 257))
	{
		iVar0 = func_32(unk_0xBC25C936A095B5BA());
		if ((((((iVar0 != joaat("weapon_unarmed") && iVar0 != 0) && iVar0 != joaat("vehicle_weapon_player_bullet")) && iVar0 != joaat("vehicle_weapon_player_buzzard")) && iVar0 != joaat("vehicle_weapon_player_laser")) && iVar0 != joaat("vehicle_weapon_tank")) && iVar0 != joaat("weapon_flare"))
		{
			iVar1 = unk_0x1966F403E5C2133D(iVar0);
			if (((((((unk_0x46C0645571D5BB21(unk_0xBC25C936A095B5BA(), iVar0) == 0 && iVar1 != -728555052) && iVar1 != 507375312) && iVar1 != 0) && iVar1 != -37788308) && iVar1 != -801780072) && iVar1 != 431593103) && iVar1 != -755518101)
			{
				if (unk_0x645938DA8ED5E0BA(unk_0xBC25C936A095B5BA()) == iLocal_139)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

var func_32(int iParam0)//Position - 0x1F15
{
	var uVar0;
	
	unk_0x9CDD10270A1ACF6F(iParam0, &uVar0, 1);
	return uVar0;
}

int func_33(int iParam0)//Position - 0x1F29
{
	int iVar0;
	struct<2> Var1;
	int iVar2;
	int iVar3;
	
	if (func_37(unk_0xB5CEFD608600A09F(), 146))
	{
		return 1;
	}
	if (unk_0xFA30DFD0084E92FE(Local_103.f_17, 5))
	{
		return 1;
	}
	if (unk_0x2CDE18D6C89522AD(unk_0xE48AD7BF7762E114(Local_103)))
	{
		return 1;
	}
	if (func_36() || func_35())
	{
		return 1;
	}
	if (func_34())
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < unk_0x432AA9CCB3EE0174(1))
	{
		if (unk_0x2BFAC254CC069912(1, iVar0) == 182)
		{
			if (unk_0x414AA1932D1C88E2(1, iVar0, &Var1, 11))
			{
				if (unk_0x724D816EA203A79E(Var1) && unk_0x386592AF38881675(Var1))
				{
					iVar2 = unk_0x399F7937FFE4DEBF(Var1);
					if (unk_0x36CEFBE9B745A58D(iVar2) && unk_0x645938DA8ED5E0BA(iVar2) == iLocal_139)
					{
						if (unk_0x724D816EA203A79E(Var1.f_1) && unk_0x386592AF38881675(Var1.f_1))
						{
							iVar3 = unk_0x399F7937FFE4DEBF(Var1.f_1);
							if (iVar3 != unk_0xE48AD7BF7762E114(Local_103))
							{
								return 1;
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (iParam0 == 1)
	{
		if (!unk_0xFA30DFD0084E92FE(Local_103.f_18, 5))
		{
			if (unk_0xBFED55DE95EA4B0C(vLocal_145 - Vector(25f, 25f, 25f), vLocal_145 + Vector(25f, 25f, 25f)))
			{
				unk_0xF0059F27F7BB6680(&(Local_103.f_18), 5);
			}
		}
	}
	return 0;
}

int func_34()//Position - 0x2066
{
	if (Local_105.f_32 >= 15 && Local_105.f_32 <= 19)
	{
		if (unk_0xC9FA5D38428AB6BE(9, vLocal_145, 40f))
		{
			return 1;
		}
	}
	if (unk_0x6E65ED1DEEDEE6F8(-1, vLocal_145, vLocal_146, fLocal_147))
	{
		return 1;
	}
	if (unk_0x6E65ED1DEEDEE6F8(-1, vLocal_148, vLocal_149, fLocal_150))
	{
		return 1;
	}
	return 0;
}

int func_35()//Position - 0x20D0
{
	if ((unk_0xC7BAAE53803FB28C(vLocal_148, vLocal_149, fLocal_150, joaat("weapon_grenade"), 0) || unk_0xC7BAAE53803FB28C(vLocal_148, vLocal_149, fLocal_150, joaat("weapon_molotov"), 0)) || unk_0xC7BAAE53803FB28C(vLocal_148, vLocal_149, fLocal_150, joaat("weapon_stickybomb"), 0))
	{
		return 1;
	}
	return 0;
}

int func_36()//Position - 0x2131
{
	if ((unk_0xC7BAAE53803FB28C(vLocal_145, vLocal_146, fLocal_147, joaat("weapon_grenade"), 0) || unk_0xC7BAAE53803FB28C(vLocal_145, vLocal_146, fLocal_147, joaat("weapon_molotov"), 0)) || unk_0xC7BAAE53803FB28C(vLocal_145, vLocal_146, fLocal_147, joaat("weapon_stickybomb"), 0))
	{
		return 1;
	}
	return 0;
}

int func_37(int iParam0, int iParam1)//Position - 0x2192
{
	if (Global_18C80F[iParam0 /*558*/] == iParam1)
	{
		return func_38(iParam0);
	}
	return 0;
}

int func_38(int iParam0)//Position - 0x21B2
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xFA30DFD0084E92FE(Global_18C80F[iVar0 /*558*/].f_1, 0);
	}
	return 0;
}

int func_39()//Position - 0x21D8
{
	if (func_40() || func_34())
	{
		return 1;
	}
	return 0;
}

int func_40()//Position - 0x21F6
{
	if (unk_0x596EC89128D2052F(vLocal_145, vLocal_146, fLocal_147, 0))
	{
		return 1;
	}
	if (unk_0x596EC89128D2052F(vLocal_148, vLocal_149, fLocal_150, 0))
	{
		return 1;
	}
	return 0;
}

void func_41()//Position - 0x2231
{
	if (Local_103.f_21 > 0f)
	{
		if (func_42(&(Local_103.f_22), 50, 0))
		{
			Local_103.f_21 = (Local_103.f_21 - 0.02f);
			if (Local_103.f_21 < 0f)
			{
				Local_103.f_21 = 0f;
			}
			func_13(&(Local_103.f_22));
		}
	}
}

int func_42(var uParam0, int iParam1, bool bParam2)//Position - 0x2274
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_18(uParam0, bParam2, 0);
	if (unk_0x7AF0088ABFA713B6() && !bParam2)
	{
		if (unk_0xC40EDFF7541407A8(unk_0xCCA9497DA4595710(unk_0xED678C85A82F0AB9(), *uParam0)) >= iParam1)
		{
			func_13(uParam0);
			return 1;
		}
	}
	else if (unk_0xC40EDFF7541407A8(unk_0xCCA9497DA4595710(unk_0x105601648511CC64(), *uParam0)) >= iParam1)
	{
		func_13(uParam0);
		return 1;
	}
	return 0;
}

void func_43()//Position - 0x22DE
{
	int iVar0;
	int iVar1;
	
	if (unk_0x05086B70D2CFEA6F(unk_0xCFA8A401AAD7BB5A(iLocal_124)))
	{
		iVar0 = unk_0x4ED43B67B3F05E0F(unk_0xCFA8A401AAD7BB5A(iLocal_124));
		iVar1 = unk_0xA95CF30C72EB526E(iVar0);
		if (!unk_0xFA30DFD0084E92FE(Local_103.f_17, 11))
		{
			if (unk_0xFA30DFD0084E92FE(Local_104[iLocal_124 /*10*/], 5))
			{
				if (unk_0x8EA6CABD14F1B89A(Local_103.f_D))
				{
					if (func_3(Local_103.f_D))
					{
						unk_0x17175087F2DB6AC8(unk_0x370629AFF3A5C45C(Local_103.f_D), 1, 1);
						func_45(&(Local_103.f_D));
					}
				}
				else
				{
					Local_103.f_26 = { Local_104[iLocal_124 /*10*/].f_7 };
					Local_103.f_2C = 7;
					unk_0xF0059F27F7BB6680(&(Local_103.f_17), 11);
				}
			}
		}
		if (!unk_0xFA30DFD0084E92FE(Local_103.f_17, 14))
		{
			if (unk_0xFA30DFD0084E92FE(Local_104[iLocal_124 /*10*/], 6))
			{
				unk_0xF0059F27F7BB6680(&(Local_103.f_17), 14);
			}
		}
		if (!unk_0xFA30DFD0084E92FE(Local_103.f_17, 15))
		{
			if (unk_0xFA30DFD0084E92FE(Local_104[iLocal_124 /*10*/], 7))
			{
				unk_0xF0059F27F7BB6680(&(Local_103.f_17), 15);
			}
		}
		if (!unk_0xFA30DFD0084E92FE(Local_103.f_17, 26))
		{
			if (unk_0xFA30DFD0084E92FE(Local_104[iLocal_124 /*10*/], 24))
			{
				unk_0xF0059F27F7BB6680(&(Local_103.f_17), 26);
			}
		}
		if (!unk_0xFA30DFD0084E92FE(Local_103.f_17, 22))
		{
			if (unk_0xFA30DFD0084E92FE(Local_104[iLocal_124 /*10*/], 22))
			{
				unk_0xF0059F27F7BB6680(&(Local_103.f_17), 22);
			}
		}
		if (!unk_0xFA30DFD0084E92FE(Local_103.f_17, 23))
		{
			if (unk_0xFA30DFD0084E92FE(Local_104[iLocal_124 /*10*/], 23))
			{
				unk_0xF0059F27F7BB6680(&(Local_103.f_17), 23);
			}
		}
		if (!unk_0xFA30DFD0084E92FE(Local_103.f_17, 30))
		{
			if (unk_0xFA30DFD0084E92FE(Local_104[iLocal_124 /*10*/], 25))
			{
				unk_0xF0059F27F7BB6680(&(Local_103.f_17), 30);
			}
		}
		if (!unk_0xFA30DFD0084E92FE(Local_103.f_17, 31))
		{
			if (unk_0xFA30DFD0084E92FE(Local_104[iLocal_124 /*10*/], 26))
			{
				unk_0xF0059F27F7BB6680(&(Local_103.f_17), 31);
			}
		}
		if (!unk_0xFA30DFD0084E92FE(Local_103.f_18, 6))
		{
			if (unk_0xFA30DFD0084E92FE(Local_104[iLocal_124 /*10*/], 29))
			{
				unk_0xF0059F27F7BB6680(&(Local_103.f_18), 6);
			}
		}
		if (!unk_0xFA30DFD0084E92FE(Local_103.f_18, 9))
		{
			if (unk_0xFA30DFD0084E92FE(Local_104[iLocal_124 /*10*/], 31))
			{
				unk_0xF0059F27F7BB6680(&(Local_103.f_18), 9);
			}
		}
		if (!unk_0xFA30DFD0084E92FE(Local_103.f_1, 3))
		{
			if (unk_0xFA30DFD0084E92FE(Local_104[iLocal_124 /*10*/].f_1, 3))
			{
				unk_0xF0059F27F7BB6680(&(Local_103.f_1), 3);
			}
		}
		if (unk_0xFA30DFD0084E92FE(Local_103.f_19, 1))
		{
			if (!unk_0xFA30DFD0084E92FE(Local_103.f_19, 6))
			{
				if (unk_0xFA30DFD0084E92FE(Local_104[iLocal_124 /*10*/].f_5, 1))
				{
					unk_0xF0059F27F7BB6680(&(Local_103.f_19), 6);
				}
			}
			if (!unk_0xFA30DFD0084E92FE(Local_103.f_19, 7))
			{
				if (unk_0xFA30DFD0084E92FE(Local_104[iLocal_124 /*10*/].f_5, 2))
				{
					unk_0xF0059F27F7BB6680(&(Local_103.f_19), 7);
				}
			}
			if (!unk_0xFA30DFD0084E92FE(Local_103.f_19, 5))
			{
				if (unk_0xFA30DFD0084E92FE(Local_104[iLocal_124 /*10*/].f_5, 0))
				{
					unk_0xF0059F27F7BB6680(&(Local_103.f_19), 5);
				}
			}
		}
		if (!unk_0xFA30DFD0084E92FE(Local_103.f_17, 20))
		{
			if (unk_0xFA30DFD0084E92FE(Local_104[iLocal_124 /*10*/], 11))
			{
				unk_0xF0059F27F7BB6680(&(Local_103.f_17), 20);
			}
		}
		if (!unk_0xFA30DFD0084E92FE(Local_103.f_18, 17))
		{
			if (unk_0xFA30DFD0084E92FE(Local_104[iLocal_124 /*10*/], 13))
			{
				unk_0xF0059F27F7BB6680(&(Local_103.f_18), 17);
			}
		}
		if (func_44(iVar0, 1, 1))
		{
			if (!unk_0xFA30DFD0084E92FE(Local_103.f_17, 5))
			{
				if (!func_389(Local_103))
				{
					if (unk_0xD9C1758D86688CEA(unk_0xE48AD7BF7762E114(Local_103), iVar1, 1))
					{
						unk_0xF0059F27F7BB6680(&(Local_103.f_17), 5);
					}
				}
			}
			if (unk_0xFA30DFD0084E92FE(Local_103.f_19, 1))
			{
				if (!unk_0xFA30DFD0084E92FE(Local_103.f_19, 8))
				{
					if (!func_389(Local_103.f_F))
					{
						if (unk_0xD9C1758D86688CEA(unk_0xE48AD7BF7762E114(Local_103.f_F), iVar1, 1))
						{
							unk_0xF0059F27F7BB6680(&(Local_103.f_19), 8);
						}
					}
				}
				if (!unk_0xFA30DFD0084E92FE(Local_103.f_19, 9))
				{
					if (unk_0xFA30DFD0084E92FE(Local_104[iLocal_124 /*10*/].f_5, 3))
					{
						unk_0xF0059F27F7BB6680(&(Local_103.f_19), 9);
					}
				}
			}
			if (!unk_0xFA30DFD0084E92FE(Local_103.f_17, 6))
			{
				if (unk_0xFA30DFD0084E92FE(Local_104[iLocal_124 /*10*/], 1))
				{
					unk_0xF0059F27F7BB6680(&(Local_103.f_17), 6);
				}
			}
			if (!unk_0xFA30DFD0084E92FE(Local_103.f_17, 16))
			{
				if (unk_0xFA30DFD0084E92FE(Local_104[iLocal_124 /*10*/], 8))
				{
					unk_0xF0059F27F7BB6680(&(Local_103.f_17), 16);
				}
			}
			if (!unk_0xFA30DFD0084E92FE(Local_103.f_18, 1))
			{
				if (unk_0xFA30DFD0084E92FE(Local_104[iLocal_124 /*10*/], 27))
				{
					unk_0xF0059F27F7BB6680(&(Local_103.f_18), 1);
				}
			}
			if (!unk_0xFA30DFD0084E92FE(Local_103.f_17, 7))
			{
				if (unk_0xFA30DFD0084E92FE(Local_104[iLocal_124 /*10*/], 0))
				{
					unk_0xF0059F27F7BB6680(&(Local_103.f_17), 7);
				}
			}
			if (!unk_0xFA30DFD0084E92FE(Local_103.f_17, 10))
			{
				if (unk_0xFA30DFD0084E92FE(Local_104[iLocal_124 /*10*/], 4))
				{
					if (Local_103.f_3 != 5 && Local_103.f_3 != 6)
					{
						Local_103.f_3 = 5;
					}
					unk_0xF0059F27F7BB6680(&(Local_103.f_17), 10);
				}
			}
			if (!unk_0xFA30DFD0084E92FE(Local_103.f_1, 2))
			{
				if (unk_0xFA30DFD0084E92FE(Local_104[iLocal_124 /*10*/].f_1, 2))
				{
					unk_0xF0059F27F7BB6680(&(Local_103.f_1), 2);
					unk_0xF0059F27F7BB6680(&(Local_103.f_1), 4);
					iLocal_126 = iLocal_124;
				}
			}
			else if (!unk_0xFA30DFD0084E92FE(Local_104[iLocal_126 /*10*/].f_1, 2))
			{
				unk_0x7CB6FD92BE491AD9(&(Local_103.f_1), 2);
				if (unk_0xFA30DFD0084E92FE(Local_103.f_1, 3))
				{
					unk_0x7CB6FD92BE491AD9(&(Local_103.f_1), 3);
				}
			}
			if (!unk_0xFA30DFD0084E92FE(Local_103.f_18, 8))
			{
				if (unk_0xFA30DFD0084E92FE(Local_104[iLocal_124 /*10*/], 30))
				{
					unk_0xF0059F27F7BB6680(&(Local_103.f_18), 8);
				}
			}
			if (!unk_0xFA30DFD0084E92FE(Local_103.f_1, 0))
			{
				if (unk_0xFA30DFD0084E92FE(Local_104[iLocal_124 /*10*/].f_1, 0))
				{
					unk_0xF0059F27F7BB6680(&(Local_103.f_1), 0);
					unk_0xF0059F27F7BB6680(&(Local_103.f_1), 1);
					Local_103.f_1A = Local_104[iLocal_124 /*10*/].f_2;
					iLocal_125 = iLocal_124;
				}
			}
			else if (!unk_0xFA30DFD0084E92FE(Local_104[iLocal_125 /*10*/].f_1, 0))
			{
				unk_0x7CB6FD92BE491AD9(&(Local_103.f_1), 0);
			}
			if (!unk_0xFA30DFD0084E92FE(Local_103.f_18, 13))
			{
				if (unk_0xFA30DFD0084E92FE(Local_104[iLocal_124 /*10*/], 21))
				{
					unk_0xF0059F27F7BB6680(&(Local_103.f_18), 13);
				}
			}
		}
	}
	iLocal_124++;
	if (iLocal_124 == unk_0x81C86888AEA2F49B())
	{
		iLocal_124 = 0;
	}
}

int func_44(int iParam0, bool bParam1, bool bParam2)//Position - 0x287F
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

void func_45(var uParam0)//Position - 0x28C9
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

void func_46()//Position - 0x2902
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	unk_0xF0059F27F7BB6680(&(Local_103.f_17), 2);
	unk_0xF0059F27F7BB6680(&(Local_103.f_17), 3);
	unk_0x7CB6FD92BE491AD9(&(Local_103.f_17), 13);
	unk_0x7CB6FD92BE491AD9(&(Local_103.f_17), 27);
	unk_0x7CB6FD92BE491AD9(&(Local_103.f_17), 28);
	unk_0x7CB6FD92BE491AD9(&(Local_103.f_18), 4);
	if (!unk_0xFA30DFD0084E92FE(Local_103.f_17, 18))
	{
		if (func_389(Local_103))
		{
			if (Local_103.f_25 <= 0f)
			{
				unk_0xF0059F27F7BB6680(&(Local_103.f_17), 18);
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < unk_0x81C86888AEA2F49B())
	{
		if (unk_0x05086B70D2CFEA6F(unk_0xCFA8A401AAD7BB5A(iVar0)))
		{
			iVar5 = unk_0x4ED43B67B3F05E0F(unk_0xCFA8A401AAD7BB5A(iVar0));
			iVar6 = unk_0xA95CF30C72EB526E(iVar5);
			if (Local_104[iVar0 /*10*/].f_3 > 0)
			{
				Local_103.f_4 = (Local_103.f_4 + Local_104[iVar0 /*10*/].f_3);
				Local_104[iVar0 /*10*/].f_3 = 0;
			}
			if (unk_0xFA30DFD0084E92FE(Local_103.f_17, 3))
			{
				if (unk_0x4DBCE270B354E123(iVar6, vLocal_144, 30f, 30f, 30f, 0, 1, 0))
				{
					unk_0x7CB6FD92BE491AD9(&(Local_103.f_17), 3);
				}
			}
			if (!unk_0xFA30DFD0084E92FE(Local_103.f_18, 16))
			{
				if (unk_0xFA30DFD0084E92FE(Local_104[iVar0 /*10*/], 12))
				{
					unk_0xF0059F27F7BB6680(&(Local_103.f_18), 16);
				}
			}
			if (func_44(iVar5, 1, 1))
			{
				if (unk_0xFA30DFD0084E92FE(Local_103.f_17, 2))
				{
					unk_0x7CB6FD92BE491AD9(&(Local_103.f_17), 2);
				}
				if (unk_0x645938DA8ED5E0BA(iVar6) == iLocal_139)
				{
					if (unk_0xFE759354B0E71217(iVar6) == iLocal_140 || unk_0xFE759354B0E71217(iVar6) == iLocal_141)
					{
						iVar2 = 1;
					}
					else if (unk_0xFE759354B0E71217(iVar6) == iLocal_142)
					{
						unk_0xF0059F27F7BB6680(&(Local_103.f_17), 27);
						iVar3 = 1;
					}
				}
				if (iVar2 == 1 || iVar3 == 1)
				{
					unk_0xF0059F27F7BB6680(&(Local_103.f_17), 13);
					iVar4++;
					if (!unk_0xFA30DFD0084E92FE(Local_103.f_17, 9) && !unk_0xFA30DFD0084E92FE(Local_103.f_17, 21))
					{
						if (!unk_0xFA30DFD0084E92FE(Local_103.f_17, 4))
						{
							if (unk_0x9CDD10270A1ACF6F(iVar6, &iVar1, 1))
							{
								if ((((iVar1 != joaat("weapon_unarmed") && iVar1 != 0) && iVar1 != joaat("object")) && iVar1 != joaat("weapon_flare")) && iVar1 != joaat("weapon_snowball"))
								{
									if (Local_103.f_20 == -1)
									{
										Local_103.f_20 = iVar0;
									}
									else if (!unk_0x05086B70D2CFEA6F(unk_0xCFA8A401AAD7BB5A(Local_103.f_20)))
									{
										Local_103.f_20 = -1;
									}
									unk_0xF0059F27F7BB6680(&(Local_103.f_17), 4);
									if (!unk_0xFA30DFD0084E92FE(Local_103.f_17, 12))
									{
										if (unk_0x4DBCE270B354E123(iVar6, vLocal_111, 2.5f, 2.5f, 3f, 0, 1, 0))
										{
											unk_0xF0059F27F7BB6680(&(Local_103.f_17), 12);
										}
									}
								}
							}
						}
						if (!unk_0xFA30DFD0084E92FE(Local_103.f_18, 0))
						{
							if (unk_0x904E94842BB9E173(iVar5) > 0)
							{
								unk_0xF0059F27F7BB6680(&(Local_103.f_18), 0);
							}
						}
					}
				}
				else if (unk_0x4DBCE270B354E123(iVar6, vLocal_144, 5f, 5f, 2.5f, 0, 1, 0))
				{
					unk_0xF0059F27F7BB6680(&(Local_103.f_17), 28);
					iVar4++;
				}
				if (!unk_0xFA30DFD0084E92FE(Local_103.f_18, 4))
				{
					if (unk_0xFA30DFD0084E92FE(Local_104[iVar0 /*10*/], 28))
					{
						unk_0xF0059F27F7BB6680(&(Local_103.f_18), 4);
					}
				}
				if ((unk_0xFA30DFD0084E92FE(Local_103.f_17, 9) && !unk_0xFA30DFD0084E92FE(Local_103.f_17, 20)) && !unk_0xFA30DFD0084E92FE(Local_103.f_17, 19))
				{
					if (Local_104[iLocal_124 /*10*/].f_6 > Local_103.f_21)
					{
						Local_103.f_21 = Local_104[iVar0 /*10*/].f_6;
						func_13(&(Local_103.f_22));
						if (!unk_0xFA30DFD0084E92FE(Local_103.f_17, 24))
						{
							if (Local_103.f_21 > (0.55f + 0.2f))
							{
								unk_0xF0059F27F7BB6680(&(Local_103.f_17), 24);
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (Local_103.f_29 != iVar4)
	{
		Local_103.f_29 = iVar4;
	}
}

int func_47()//Position - 0x2C7F
{
	int iVar0;
	
	if ((!unk_0x7FFE36DB9042AF23(Local_103) || !unk_0x7FFE36DB9042AF23(Local_103.f_D)) || !unk_0x7FFE36DB9042AF23(Local_103.f_E))
	{
		if ((func_49(iLocal_110) && func_49(func_50(1))) && func_49(func_50(2)))
		{
			if (unk_0x16CC0D3F6523391B(1, 0, 2, 0))
			{
				if (!unk_0x7FFE36DB9042AF23(Local_103))
				{
					if (func_48(&Local_103, 4, iLocal_110, vLocal_111 - Vector(1f, 0f, 0f), Local_103.f_2A, 1, 1, 1))
					{
						unk_0xB0031DDAE4FF0BC3(unk_0xE48AD7BF7762E114(Local_103), 0, iLocal_316[0], iLocal_317[0], 0);
						unk_0xB0031DDAE4FF0BC3(unk_0xE48AD7BF7762E114(Local_103), 2, iLocal_316[1], iLocal_317[1], 0);
						unk_0xB0031DDAE4FF0BC3(unk_0xE48AD7BF7762E114(Local_103), 3, iLocal_316[2], iLocal_317[2], 0);
						unk_0xB0031DDAE4FF0BC3(unk_0xE48AD7BF7762E114(Local_103), 4, iLocal_316[3], iLocal_317[3], 0);
						unk_0xB0031DDAE4FF0BC3(unk_0xE48AD7BF7762E114(Local_103), 8, iLocal_316[4], iLocal_317[4], 0);
						unk_0x7FDC51451428DF70(unk_0xE48AD7BF7762E114(Local_103), unk_0x9911032C958CE1B0(vLocal_111));
						unk_0x22321800954A532E(unk_0xE48AD7BF7762E114(Local_103), 1);
						unk_0x2E35C4FA5F0ED22F(unk_0xE48AD7BF7762E114(Local_103), 1);
						unk_0xE43AD8CB1B4DDED9(unk_0xE48AD7BF7762E114(Local_103), 1, 0);
						unk_0x16DCE907D1FFE3CC(unk_0xE48AD7BF7762E114(Local_103), 16);
						unk_0xEA2C4A582CD26EF5(unk_0xE48AD7BF7762E114(Local_103), 0);
						unk_0xABA7AE40608505F2(unk_0xE48AD7BF7762E114(Local_103), 1024, true);
						unk_0xEC9E10B23689A01D(unk_0xE48AD7BF7762E114(Local_103), 1);
						unk_0x65E471E4A2D56226(unk_0xE48AD7BF7762E114(Local_103), SYSTEM::ROUND((200f * Global_40001.f_99)), 0);
						if (!unk_0x3C03CFD5DD1E2D97(unk_0xE48AD7BF7762E114(Local_103), "XP_Blocker"))
						{
							unk_0xE9A905ADFD5BC8A0(unk_0xE48AD7BF7762E114(Local_103), "XP_Blocker", 1);
						}
						func_388(&uLocal_151, 3, unk_0xE48AD7BF7762E114(Local_103), &(Local_103.f_2E), 1, 0);
					}
				}
				if (!unk_0x7FFE36DB9042AF23(Local_103.f_D))
				{
					iVar0 = unk_0x9AAFCC33C3B745BA(-1795552418, vLocal_127, 0, func_50(1));
					if (unk_0x724D816EA203A79E(iVar0))
					{
						Local_103.f_D = unk_0x2448E4C54354F8D6(iVar0);
						unk_0x346478B12F69D4E3(unk_0x370629AFF3A5C45C(Local_103.f_D), true);
						unk_0xD434A01DEA38A939(unk_0x370629AFF3A5C45C(Local_103.f_D), false, 0);
						unk_0x019CE76D5286C95C(unk_0x370629AFF3A5C45C(Local_103.f_D), fLocal_128);
						unk_0x7FDC51451428DF70(unk_0x370629AFF3A5C45C(Local_103.f_D), unk_0x9911032C958CE1B0(vLocal_111));
						unk_0x1E5C2A1EAB944289(unk_0x370629AFF3A5C45C(Local_103.f_D), 1);
						unk_0xCF04858BE075051B(unk_0x370629AFF3A5C45C(Local_103.f_D), -0.2f, 1);
						unk_0x8AB4D83A9145FCD7(unk_0x370629AFF3A5C45C(Local_103.f_D), 1, 0);
						unk_0xDC078F87049ECECE(unk_0x370629AFF3A5C45C(Local_103.f_D), false, 0);
					}
				}
				if (!unk_0x7FFE36DB9042AF23(Local_103.f_E))
				{
					if (func_25(&(Local_103.f_E), func_50(2), vLocal_129 - Vector(0.12f, 0f, 0f), 1, 1, 0, 1, 0))
					{
						unk_0x019CE76D5286C95C(unk_0x370629AFF3A5C45C(Local_103.f_E), fLocal_130);
						unk_0x7FDC51451428DF70(unk_0x370629AFF3A5C45C(Local_103.f_E), unk_0x9911032C958CE1B0(vLocal_111));
						unk_0x346478B12F69D4E3(unk_0x370629AFF3A5C45C(Local_103.f_E), true);
					}
				}
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_48(int iParam0, int iParam1, int iParam2, vector3 vParam3, float fParam4, bool bParam5, int iParam6, int iParam7)//Position - 0x2F52
{
	int iVar0;
	
	if (!unk_0x88E77A85289CC883(1))
	{
		return 0;
	}
	iVar0 = unk_0x01B3635C3E8EDD81(iParam1, iParam2, vParam3, fParam4, iParam6, bParam5);
	*iParam0 = unk_0x5902CDB733CD6ADE(iVar0);
	if (unk_0x7FFE36DB9042AF23(*iParam0))
	{
		unk_0x656194E145691D3E(iVar0, iParam7);
		if (unk_0x270072584099CC42(iVar0))
		{
			if (bParam5)
			{
				unk_0xF2A50F5F6E7737D8(*iParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

bool func_49(int iParam0)//Position - 0x2FB1
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0xF243B7A14FCFD0F4(iParam0);
	return unk_0xD6513D668481290A(iParam0);
}

int func_50(int iParam0)//Position - 0x2FCF
{
	switch (iParam0)
	{
		case 0:
			return joaat("mp_m_shopkeep_01");
		
		case 1:
			return joaat("p_poly_bag_01_s");
		
		case 2:
			return joaat("p_till_01_s");
		
		default:
	}
	return joaat("mp_m_shopkeep_01");
}

void func_51()//Position - 0x300D
{
	if (!unk_0xFA30DFD0084E92FE(Local_105.f_34, 20))
	{
		if (unk_0xFA30DFD0084E92FE(Local_103.f_17, 11) || unk_0xFA30DFD0084E92FE(Local_103.f_18, 16))
		{
			if (unk_0x645938DA8ED5E0BA(unk_0xBC25C936A095B5BA()) == iLocal_139 || unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), vLocal_144, 5f, 5f, 2.5f, 0, 1, 0))
			{
				func_54();
				func_52();
				func_6(Local_105.f_32, 1, func_7());
				unk_0xF0059F27F7BB6680(&(Local_105.f_34), 20);
			}
			else
			{
				if ((unk_0xFA30DFD0084E92FE(Local_105.f_34, 31) && (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0 || unk_0xFA30DFD0084E92FE(Local_104[unk_0x6BAA0516CC970D99() /*10*/], 1))) && unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), vLocal_144, 20f, 20f, 20f, 0, 1, 0))
				{
					func_54();
				}
				unk_0xF0059F27F7BB6680(&(Local_105.f_34), 20);
			}
		}
	}
}

void func_52()//Position - 0x30F7
{
	int iVar0;
	
	iVar0 = func_53(47);
	Global_24D643[iVar0 /*83*/] = 47;
	StringCopy(&(Global_24D643[iVar0 /*83*/].f_12[0 /*16*/]), "-StraightIntoFreemode", 64);
}

int func_53(int iParam0)//Position - 0x3124
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_24D643[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_24D643[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

void func_54()//Position - 0x3171
{
	int iVar0;
	
	if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0 || unk_0xFA30DFD0084E92FE(Local_104[unk_0x6BAA0516CC970D99() /*10*/], 1))
	{
		iVar0 = func_130(1181, -1, 0);
		if (!unk_0xFA30DFD0084E92FE(iVar0, Local_105.f_32))
		{
			func_129(14, 1, -1);
			unk_0xF0059F27F7BB6680(&iVar0, Local_105.f_32);
			func_128(1181, iVar0, -1, 1, 0);
			if (func_127(14, -1) >= 20)
			{
				func_113(44, 1);
			}
			else
			{
				func_112(44, func_127(14, -1));
			}
		}
		func_111(1167, 1, -1);
		func_110(12, 1, -1, 1);
		func_100(19);
		iLocal_334 = 100;
		iLocal_334 = SYSTEM::ROUND((IntToFloat(iLocal_334) * Global_40001.f_1081));
		func_58(2, "XPT_HOLDUP", -1636175450, -235721452, iLocal_334, 1, -1, 0);
		func_55(12, 0);
	}
}

void func_55(int iParam0, int iParam1)//Position - 0x3248
{
	int iVar0;
	
	if (func_57(iParam0, iParam1))
	{
		iVar0 = func_56();
		Global_258004[iVar0] = iParam0;
	}
}

int func_56()//Position - 0x326B
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

int func_57(int iParam0, var uParam1)//Position - 0x32A0
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

var func_58(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x3326
{
	return func_59(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

var func_59(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x3342
{
	var uVar0;
	
	uVar0 = func_60(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_60(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x3365
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_99(unk_0xB5CEFD608600A09F()) || func_98(unk_0xB5CEFD608600A09F()))
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
	else if (func_95() || func_91(unk_0xB5CEFD608600A09F()))
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
	if (func_90(sParam2))
	{
	}
	if (func_89())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_87(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_40001.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_86(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_83(0, &iVar1);
					break;
				
				case 3:
					func_83(1, &iVar1);
					break;
				
				case 1:
					func_79(&iVar1);
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
			func_111(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_71((func_78(unk_0xB5CEFD608600A09F()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x5FF267E54EB49897(iVar1, iParam8, iParam9);
				if (Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_27.f_2 != -1)
				{
					func_111(1165, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_65(iVar1);
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
				func_61((func_63(unk_0xB5CEFD608600A09F()) + iVar1));
			}
			else
			{
				func_61((func_63(unk_0xB5CEFD608600A09F()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_61(int iParam0)//Position - 0x3563
{
	if (func_89())
	{
		Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_D3.f_5 = iParam0;
		func_62(joaat("mpply_globalxp"), iParam0);
	}
}

void func_62(int iParam0, int iParam1)//Position - 0x358E
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x3A57956BCE003880(iVar0, iParam1, 1);
	}
}

int func_63(int iParam0)//Position - 0x35AA
{
	if (iParam0 > -1)
	{
		if (func_44(iParam0, 0, 1))
		{
			if (iParam0 == unk_0xB5CEFD608600A09F())
			{
				return func_64(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_18402B[iParam0 /*770*/].f_D3.f_5;
			}
		}
		else
		{
			return func_64(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_64(int iParam0)//Position - 0x35FB
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

void func_65(int iParam0)//Position - 0x3619
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_70(unk_0xB5CEFD608600A09F()) };
	if (unk_0xB9ACC1154C623363())
	{
		if (unk_0xD7F4457CECF10121(&Var0))
		{
			iVar1 = func_68(func_69(&Var0));
			if (iVar1 == 0)
			{
				func_67(&Global_14F5C9, iParam0);
				func_66(joaat("mpply_crew_local_xp_0"), Global_14F5C9);
			}
			else if (iVar1 == 1)
			{
				func_67(&Global_14F5CA, iParam0);
				func_66(joaat("mpply_crew_local_xp_1"), Global_14F5CA);
			}
			else if (iVar1 == 2)
			{
				func_67(&Global_14F5CB, iParam0);
				func_66(joaat("mpply_crew_local_xp_2"), Global_14F5CB);
			}
			else if (iVar1 == 3)
			{
				func_67(&Global_14F5CC, iParam0);
				func_66(joaat("mpply_crew_local_xp_3"), Global_14F5CC);
			}
			else if (iVar1 == 4)
			{
				func_67(&Global_14F5CD, iParam0);
				func_66(joaat("mpply_crew_local_xp_4"), Global_14F5CD);
			}
		}
	}
}

void func_66(int iParam0, int iParam1)//Position - 0x36ED
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

void func_67(var uParam0, int iParam1)//Position - 0x3812
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_68(int iParam0)//Position - 0x3823
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

int func_69(var uParam0)//Position - 0x3880
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

struct<13> func_70(int iParam0)//Position - 0x38A3
{
	struct<13> Var0;
	
	unk_0xB7DBA2C6D2C3C41A(iParam0, &Var0, 13);
	return Var0;
}

void func_71(int iParam0, int iParam1, int iParam2)//Position - 0x38BA
{
	if (func_89())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_40001.f_2320 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_14F642[func_76(-1)])
				{
					unk_0x5FF267E54EB49897(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_14F642[func_76(-1)])
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
		if (func_75(unk_0xB5CEFD608600A09F()))
		{
			Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_D3.f_1 = iParam0;
			Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_D3.f_6 = func_73(iParam0, 1);
		}
		func_72(639, iParam0, -1, 1);
		func_128(640, func_73(iParam0, 1), -1, 1, 0);
		Global_14F642[func_76(-1)] = iParam0;
		func_55(7, 0);
	}
}

void func_72(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x39DB
{
	int iVar0;
	
	iVar0 = Global_269BC5[iParam0 /*3*/][func_76(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x3A57956BCE003880(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_14F606[func_76(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_14F60C[func_76(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_14F612[func_76(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_14F618[func_76(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_14F5EE[func_76(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_14F5F4[func_76(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_14F5FA[func_76(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_14F600[func_76(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_14F5D6[func_76(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_14F5DC[func_76(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_14F5E2[func_76(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_14F5E8[func_76(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_14F61E[func_76(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_14F624[func_76(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_14F62A[func_76(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_14F630[func_76(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_14F636[func_76(iParam2)] = iParam1;
			break;
		
		case 7229:
			Global_14F63C[func_76(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_14F642[func_76(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_14F648[func_76(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_270CF3[0 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_270CF3[1 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 2925:
			Global_270CF3[2 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_270CF3[3 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 7818:
			Global_270D5E[func_76(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_14F64E[func_76(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_14F654[func_76(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_14F65A[func_76(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_14F660[func_76(iParam2)] = iParam1;
			break;
		
		case 3049:
			Global_270D27[0 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3050:
			Global_270D27[1 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3051:
			Global_270D27[2 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3052:
			Global_270D27[3 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_270D27[4 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3632:
			Global_270D61[0 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3633:
			Global_270D61[1 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3634:
			Global_270D61[2 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3635:
			Global_270D61[3 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_270D61[4 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_270D71[0 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_270D71[1 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_270D71[2 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_270D71[3 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_270D71[4 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3217:
			Global_270D27[5 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_270CF3[4 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3659:
			Global_270D81[func_76(iParam2)] = iParam1;
			break;
		
		case 3660:
			Global_270D8A[func_76(iParam2)] = iParam1;
			break;
		
		case 3661:
			Global_270D84[func_76(iParam2)] = iParam1;
			break;
		
		case 3662:
			Global_270D8D[func_76(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_270D87[func_76(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_270D90[func_76(iParam2)] = iParam1;
			break;
		
		case 3685:
			Global_270D93[func_76(iParam2)] = iParam1;
			break;
		
		case 3225:
			Global_270D27[6 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3226:
			Global_270CF3[5 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_270D27[7 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3228:
			Global_270CF3[6 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 4015:
			Global_270D27[8 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 4016:
			Global_270CF3[7 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 4018:
			Global_270D27[9 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_270CF3[8 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 4021:
			Global_270D27[10 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_270CF3[9 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 4024:
			Global_270D27[11 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_270CF3[10 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 6105:
			Global_270D27[12 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 6106:
			Global_270CF3[11 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 6163:
			Global_270D27[13 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 6164:
			Global_270CF3[12 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 6541:
			Global_270D27[14 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 6542:
			Global_270CF3[13 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 6554:
			Global_270D27[15 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 6555:
			Global_270CF3[14 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 6557:
			Global_270D27[16 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_270CF3[15 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 6560:
			Global_270D27[17 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_270CF3[16 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_73(int iParam0, bool bParam1)//Position - 0x4197
{
	if (bParam1)
	{
	}
	return func_74(iParam0, 0);
}

int func_74(int iParam0, int iParam1)//Position - 0x41AB
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

int func_75(int iParam0)//Position - 0x426A
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

int func_76(int iParam0)//Position - 0x428F
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_77();
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

int func_77()//Position - 0x42C3
{
	return Global_1407E0;
}

int func_78(int iParam0)//Position - 0x42CF
{
	if (Global_1406D2.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0xB5CEFD608600A09F())
			{
				return Global_14F642[func_76(-1)];
			}
			else if (func_75(iParam0))
			{
				return Global_18402B[iParam0 /*770*/].f_D3.f_1;
			}
		}
	}
	else
	{
		return Global_14F642[func_76(-1)];
	}
	return 0;
}

void func_79(int iParam0)//Position - 0x432C
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
				if (unk_0x343CB262BF0CDF5A(iVar5) == iVar1 || func_82(unk_0x343CB262BF0CDF5A(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0xB5CEFD608600A09F())
					{
						if (func_81(unk_0xB5CEFD608600A09F(), iVar5))
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
		iVar6 = SYSTEM::ROUND((func_80(*iParam0, 100) * (10f * Global_40001.f_1079)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_80(*iParam0, 100) * (20f * Global_40001.f_1072)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_80(int iParam0, int iParam1)//Position - 0x4417
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_81(int iParam0, int iParam1)//Position - 0x4438
{
	if (unk_0xB9ACC1154C623363())
	{
		Global_26210D = { func_70(iParam0) };
		Global_26211A = { func_70(iParam1) };
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

int func_82(int iParam0, int iParam1, int iParam2)//Position - 0x44A5
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

void func_83(bool bParam0, int iParam1)//Position - 0x4670
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
				if (func_44(iVar4, 0, 1))
				{
					if (iVar4 != unk_0xB5CEFD608600A09F())
					{
						iVar1++;
						if (func_81(unk_0xB5CEFD608600A09F(), iVar4))
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
			if (func_44(iVar4, 1, 1))
			{
				if (iVar4 != unk_0xB5CEFD608600A09F())
				{
					if (func_84(unk_0xB5CEFD608600A09F(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_81(unk_0xB5CEFD608600A09F(), iVar4))
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
		iVar5 = SYSTEM::ROUND((func_80(*iParam1, 100) * (10f * Global_40001.f_1079)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_80(*iParam1, 100) * (20f * Global_40001.f_1072)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_84(int iParam0, int iParam1)//Position - 0x4788
{
	return SYSTEM::VDIST(func_85(iParam0), func_85(iParam1));
	return 0f;
}

Vector3 func_85(int iParam0)//Position - 0x47A4
{
	return unk_0x541C2AEF053615BC(unk_0xA95CF30C72EB526E(iParam0), 0);
}

int func_86(int iParam0)//Position - 0x47B7
{
	int iVar0;
	
	if (unk_0x8820DB58BCD4A148() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_80(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_87(int iParam0)//Position - 0x47EE
{
	if (iParam0 < 0)
	{
		if (unk_0xC40EDFF7541407A8(iParam0) > func_78(unk_0xB5CEFD608600A09F()))
		{
			iParam0 = -func_78(unk_0xB5CEFD608600A09F());
		}
	}
	if (func_88(8000, 0, 0) > 0)
	{
		if (func_88(8000, 0, 0) < (iParam0 + func_78(unk_0xB5CEFD608600A09F())))
		{
			iParam0 = (func_88(8000, 0, 0) - func_78(unk_0xB5CEFD608600A09F()));
		}
	}
	return iParam0;
}

int func_88(int iParam0, bool bParam1, int iParam2)//Position - 0x4852
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

int func_89()//Position - 0x487A
{
	return 1;
}

int func_90(char* sParam0)//Position - 0x4883
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

int func_91(int iParam0)//Position - 0x48BD
{
	return func_92(func_93(iParam0));
}

int func_92(int iParam0)//Position - 0x48CF
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_93(int iParam0)//Position - 0x48E9
{
	if (func_94(iParam0, 0))
	{
		return Global_18C80F[iParam0 /*558*/].f_B.f_21;
	}
	return -1;
}

int func_94(int iParam0, int iParam1)//Position - 0x490C
{
	if (Global_18C80F[iParam0 /*558*/].f_B.f_21 != -1 || (iParam1 && Global_18C80F[iParam0 /*558*/].f_B.f_20 != -1))
	{
		return 1;
	}
	return 0;
}

int func_95()//Position - 0x4947
{
	if (unk_0x517823CA390A19F6())
	{
		return func_97();
	}
	return func_96(Global_440000.f_1EF38);
}

int func_96(int iParam0)//Position - 0x496B
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

var func_97()//Position - 0x49A5
{
	return Global_255A46.f_10;
}

bool func_98(int iParam0)//Position - 0x49B3
{
	return Global_24FB5C[iParam0 /*406*/].f_6F == 2;
}

bool func_99(int iParam0)//Position - 0x49C8
{
	return Global_24FB5C[iParam0 /*406*/].f_6F == 7;
}

void func_100(int iParam0)//Position - 0x49DD
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
			if (Global_200000[func_109() /*12171*/].f_1E08.f_EFE[iVar0 /*3*/] == iVar1)
			{
				iVar2 = iVar0;
			}
			if (Global_200000[func_109() /*12171*/].f_1E08.f_EFE[iVar0 /*3*/].f_1)
			{
				iVar3++;
			}
			iVar0++;
		}
		if (iVar2 > -1 && iVar2 < 3)
		{
			if (!Global_200000[func_109() /*12171*/].f_1E08.f_EFE[iVar2 /*3*/].f_1)
			{
				func_105(iVar2, 1);
				unk_0xF0059F27F7BB6680(&Global_26233A, (8 + iVar2));
				func_103(2110, -1);
				func_101(67, -1);
				func_103(2577, -1);
				func_101(69, -1);
				unk_0x7481F930F09A9108(1000, iVar1);
				if (iVar3 < 2)
				{
					if (!unk_0xFA30DFD0084E92FE(Global_26233A, 12))
					{
						func_55(7, 0);
					}
					else
					{
						func_55(15, 0);
					}
				}
			}
		}
	}
}

void func_101(int iParam0, int iParam1)//Position - 0x4AD4
{
	int iVar0;
	
	iVar0 = func_127(iParam0, func_76(iParam1));
	iVar0++;
	func_102(iParam0, iVar0, iParam1);
}

void func_102(int iParam0, int iParam1, var uParam2)//Position - 0x4AFA
{
	int iVar0;
	
	iVar0 = Global_270B3A[iParam0 /*3*/][func_76(uParam2)];
	unk_0x3A57956BCE003880(iVar0, iParam1, 1);
}

void func_103(int iParam0, int iParam1)//Position - 0x4B1E
{
	int iVar0;
	
	iVar0 = func_130(iParam0, func_76(iParam1), 0);
	iVar0++;
	if (!func_104(iParam0))
	{
		func_128(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_72(iParam0, iVar0, iParam1, 1);
	}
}

int func_104(int iParam0)//Position - 0x4B5F
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

void func_105(int iParam0, int iParam1)//Position - 0x4D57
{
	if (Global_200000[func_109() /*12171*/].f_1E08.f_EFE[iParam0 /*3*/].f_1 != iParam1)
	{
		Global_200000[func_109() /*12171*/].f_1E08.f_EFE[iParam0 /*3*/].f_1 = iParam1;
		func_106(func_108(iParam0), iParam1, -1, 1);
	}
}

void func_106(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x4DA2
{
	int iVar0;
	
	if (func_107())
	{
		iVar0 = Global_2705A2[iParam0 /*3*/][func_76(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x7DB90DFB4AE71E86(iVar0, iParam1, iParam3);
		}
	}
}

int func_107()//Position - 0x4DD4
{
	return 1;
	return 0;
}

int func_108(int iParam0)//Position - 0x4DE1
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

int func_109()//Position - 0x4E13
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_110(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x4E20
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
		iParam2 = func_77();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0x761270FB5119E371((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x87C0AFE55188B978((iParam0 - 0)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0x761270FB5119E371((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x87C0AFE55188B978((iParam0 - 192)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0x761270FB5119E371((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x87C0AFE55188B978((iParam0 - 513)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0x761270FB5119E371((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x87C0AFE55188B978((iParam0 - 705)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0xC4006144B74F1FE6((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x87C0AFE55188B978((iParam0 - 3111)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0xC4006144B74F1FE6((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x87C0AFE55188B978((iParam0 - 2919)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0x64CE28C63005F094((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x87C0AFE55188B978((iParam0 - 4207)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0x64CE28C63005F094((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x87C0AFE55188B978((iParam0 - 4335)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = unk_0x64CE28C63005F094((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x87C0AFE55188B978((iParam0 - 6029)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = unk_0x64CE28C63005F094((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x87C0AFE55188B978((iParam0 - 7385)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = unk_0x64CE28C63005F094((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x87C0AFE55188B978((iParam0 - 7321)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = unk_0x64CE28C63005F094((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x87C0AFE55188B978((iParam0 - 9361)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = unk_0x64CE28C63005F094((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x87C0AFE55188B978((iParam0 - 15369)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = unk_0x64CE28C63005F094((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x87C0AFE55188B978((iParam0 - 15562)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = unk_0x64CE28C63005F094((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0x87C0AFE55188B978((iParam0 - 15946)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = unk_0x64CE28C63005F094((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0x87C0AFE55188B978((iParam0 - 18098)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = unk_0x64CE28C63005F094((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - unk_0x87C0AFE55188B978((iParam0 - 22066)) * 64);
		iVar0 = unk_0xEA9B48C6F815D934(iVar18, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_111(int iParam0, int iParam1, int iParam2)//Position - 0x533A
{
	int iVar0;
	
	iVar0 = func_130(iParam0, func_76(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_104(iParam0))
	{
		func_128(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_72(iParam0, iVar0, iParam2, 1);
	}
}

int func_112(int iParam0, int iParam1)//Position - 0x537C
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

int func_113(int iParam0, int iParam1)//Position - 0x53CD
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_114(iParam0, iParam1);
}

int func_114(int iParam0, int iParam1)//Position - 0x53E8
{
	if (func_126(14) && !func_125(iParam0))
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
	if (func_124(&Global_411EB6))
	{
		if (func_122(&Global_411EB6, iParam0))
		{
			return 0;
		}
		if (func_115(&Global_411EB6, iParam0))
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

int func_115(var uParam0, int iParam1)//Position - 0x5485
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x6D5CBCB6411EDE89(iParam1))
	{
		return 0;
	}
	if (func_126(14) && !func_125(iParam1))
	{
		return 0;
	}
	if (func_122(uParam0, iParam1))
	{
		return 0;
	}
	if (func_121(uParam0) < 0f)
	{
		func_120(uParam0, 0);
	}
	func_118(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_116(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_116(var uParam0, int iParam1)//Position - 0x5536
{
	int iVar0;
	
	if (unk_0x6D5CBCB6411EDE89(iParam1))
	{
		return 0;
	}
	if (func_126(14) && !func_125(iParam1))
	{
		return 0;
	}
	if (func_122(uParam0, iParam1))
	{
		return 0;
	}
	if (func_121(uParam0) < 0f)
	{
		func_120(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_117(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_117(var uParam0, int iParam1)//Position - 0x55B1
{
	return (*uParam0)[iParam1] == 78;
}

void func_118(var uParam0)//Position - 0x55C2
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_119(uParam0, iVar0);
		iVar0++;
	}
	func_120(uParam0, (Global_411EB5 - 0.5f));
}

void func_119(var uParam0, int iParam1)//Position - 0x55F6
{
	(*uParam0)[iParam1] = 78;
}

void func_120(var uParam0, float fParam1)//Position - 0x5606
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

float func_121(var uParam0)//Position - 0x5623
{
	return uParam0->f_50;
}

bool func_122(var uParam0, int iParam1)//Position - 0x562F
{
	return func_123(uParam0, iParam1) != -1;
}

int func_123(var uParam0, int iParam1)//Position - 0x5641
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

bool func_124(var uParam0)//Position - 0x566E
{
	return uParam0->f_4F == 1;
}

int func_125(int iParam0)//Position - 0x567C
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

bool func_126(int iParam0)//Position - 0x56CC
{
	return Global_8C41 == iParam0;
}

int func_127(int iParam0, int iParam1)//Position - 0x56DA
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_270B3A[iParam0 /*3*/][func_76(iParam1)];
	if (unk_0x6CB99B97664C3727(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_128(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x5706
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_269BC5[iParam0 /*3*/][func_76(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x3A57956BCE003880(iVar0, iParam1, iParam3);
	}
}

void func_129(int iParam0, int iParam1, int iParam2)//Position - 0x5736
{
	int iVar0;
	
	iVar0 = func_127(iParam0, func_76(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_102(iParam0, iVar0, iParam2);
}

int func_130(int iParam0, int iParam1, int iParam2)//Position - 0x575D
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_269BC5[iParam0 /*3*/][func_76(iParam1)];
	if (unk_0x6CB99B97664C3727(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_131(var uParam0)//Position - 0x578F
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

void func_132(var uParam0)//Position - 0x57B8
{
	if (!uParam0->f_1)
	{
		if (unk_0x0DE6397A2CB3EF75())
		{
			func_18(uParam0, 0, 0);
		}
	}
}

void func_133()//Position - 0x57D7
{
	bool bVar0;
	int iVar1;
	
	func_249();
	func_223();
	func_176();
	func_51();
	func_174();
	func_173();
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (unk_0x645938DA8ED5E0BA(unk_0xBC25C936A095B5BA()) == iLocal_139)
		{
			if (Global_267214.f_15FB.f_1 == 0)
			{
				Global_267214.f_15FB.f_1 = 1;
			}
			if (unk_0xFE759354B0E71217(unk_0xBC25C936A095B5BA()) == iLocal_140 || unk_0xFE759354B0E71217(unk_0xBC25C936A095B5BA()) == iLocal_141)
			{
				bVar0 = true;
			}
			else if (unk_0xFE759354B0E71217(unk_0xBC25C936A095B5BA()) == iLocal_142)
			{
				iVar1 = 1;
			}
		}
		else if (Global_267214.f_15FB.f_1 == 1)
		{
			Global_267214.f_15FB.f_1 = 0;
		}
	}
	if (!unk_0xFA30DFD0084E92FE(Local_105.f_34, 31))
	{
		if (func_93(unk_0xB5CEFD608600A09F()) != 154)
		{
			if ((bVar0 || iVar1) || unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), vLocal_144, (5f / 2f), (5f / 2f), (5f / 2f), 0, 1, 0))
			{
				unk_0x8E25082A46F87892(unk_0xBC25C936A095B5BA(), joaat("weapon_unarmed"), true);
				unk_0xF0059F27F7BB6680(&(Local_105.f_34), 31);
			}
		}
	}
	if ((!unk_0xFA30DFD0084E92FE(Local_105.f_34, 26) && bVar0) && !(func_172(0) || func_171()))
	{
		if (func_169("SNK_MNU", Local_105, 0))
		{
			unk_0xF0059F27F7BB6680(&(Local_105.f_34), 26);
		}
	}
	if (!bVar0 && unk_0xFA30DFD0084E92FE(Local_105.f_34, 26))
	{
		if (!unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F()) || (unk_0xEF0E25DA0CB6E8FF(Local_105.f_1) && unk_0xEDEA6C8F42EE05F6(Local_105.f_1)))
		{
			unk_0xA4E856A8CD53B8DF(unk_0xBC25C936A095B5BA());
			unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
			unk_0xF3F01A78937DC905(0f);
			unk_0x2B9AEC08E469E384(0f, 1065353216);
			if (Local_105.f_33 > 0)
			{
				Local_104[unk_0x6BAA0516CC970D99() /*10*/].f_3 = Local_105.f_33;
				Local_105.f_33 = 0;
			}
			func_404();
			unk_0x7CB6FD92BE491AD9(&(Local_105.f_35), 7);
			if (unk_0xEF0E25DA0CB6E8FF(Local_105.f_1))
			{
				unk_0x4EC087603E1DEF9C(Local_105.f_1, 0);
			}
			unk_0x062C9995BFD27B2A(false, 0, 3000, 1, 0, 0);
		}
		func_166(1, Local_105);
		unk_0x7CB6FD92BE491AD9(&(Local_105.f_34), 26);
	}
	if (!unk_0xFA30DFD0084E92FE(Local_104[unk_0x6BAA0516CC970D99() /*10*/], 21))
	{
		if (iVar1 || func_164(unk_0xBC25C936A095B5BA(), Local_105.f_32))
		{
			unk_0xF0059F27F7BB6680(&(Local_104[unk_0x6BAA0516CC970D99() /*10*/]), 21);
		}
	}
	if (bVar0 || iVar1)
	{
		func_161();
		func_155();
		func_149();
		func_145(1);
		func_138();
		unk_0xAEEA080912A0AB35(unk_0xB5CEFD608600A09F());
		unk_0xC87F56DCAF19EC70(unk_0xB5CEFD608600A09F());
		if (unk_0xFA30DFD0084E92FE(Global_267214.f_7, 0))
		{
			unk_0x3E56BC8044387735(Local_103.f_47);
			func_136(vLocal_144, func_137(30), 0);
			unk_0x7CB6FD92BE491AD9(&(Global_267214.f_7), 0);
		}
	}
	else
	{
		if (unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), vLocal_144, 5f, 5f, 2.5f, 0, 1, 0))
		{
			func_145(0);
		}
		if (!unk_0xFA30DFD0084E92FE(Global_267214.f_7, 0))
		{
			unk_0x78296F03625AF8AA();
			func_134(vLocal_144, func_137(30), "");
			unk_0xF0059F27F7BB6680(&(Global_267214.f_7), 0);
		}
	}
	if ((unk_0xFA30DFD0084E92FE(Local_103.f_17, 22) || unk_0xFA30DFD0084E92FE(Local_103.f_17, 23)) || unk_0xFA30DFD0084E92FE(Local_103.f_17, 7))
	{
		unk_0x6A095EC1C9AF12A4(unk_0xB5CEFD608600A09F());
	}
}

int func_134(vector3 vParam0, char* sParam1, char* sParam2)//Position - 0x5B08
{
	int iVar0;
	
	if (!unk_0xF1734B55490E9045(sParam1))
	{
		iVar0 = 0;
		while (iVar0 < 16)
		{
			if (!unk_0x3362CDE8460ED38B(&(Global_267214.f_F72[iVar0 /*26*/].f_4), sParam1))
			{
				if (unk_0xF1734B55490E9045(&(Global_267214.f_F72[iVar0 /*26*/].f_4)))
				{
					Global_267214.f_F72[iVar0 /*26*/] = 1;
					Global_267214.f_F72[iVar0 /*26*/].f_1 = { vParam0 };
					StringCopy(&(Global_267214.f_F72[iVar0 /*26*/].f_4), sParam1, 24);
					StringCopy(&(Global_267214.f_F72[iVar0 /*26*/].f_A), sParam2, 64);
					return 1;
				}
			}
			else if (!func_135(Global_267214.f_F72[iVar0 /*26*/].f_1, vParam0, 0))
			{
				Global_267214.f_F72[iVar0 /*26*/] = 1;
				Global_267214.f_F72[iVar0 /*26*/].f_1 = { vParam0 };
				StringCopy(&(Global_267214.f_F72[iVar0 /*26*/].f_4), sParam1, 24);
				StringCopy(&(Global_267214.f_F72[iVar0 /*26*/].f_A), sParam2, 64);
				return 1;
			}
			else
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_135(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x5C09
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

void func_136(vector3 vParam0, char* sParam1, int iParam2)//Position - 0x5C50
{
	int iVar0;
	
	if (!unk_0xF1734B55490E9045(sParam1))
	{
		iVar0 = 0;
		while (iVar0 < 16)
		{
			if (unk_0x3362CDE8460ED38B(&(Global_267214.f_F72[iVar0 /*26*/].f_4), sParam1))
			{
				if (iParam2 || func_135(Global_267214.f_F72[iVar0 /*26*/].f_1, vParam0, 0))
				{
					Global_267214.f_F72[iVar0 /*26*/] = 0;
					Global_267214.f_F72[iVar0 /*26*/].f_1 = { 0f, 0f, 0f };
					StringCopy(&(Global_267214.f_F72[iVar0 /*26*/].f_4), "", 24);
					StringCopy(&(Global_267214.f_F72[iVar0 /*26*/].f_A), "", 64);
				}
			}
			iVar0++;
		}
	}
}

char* func_137(int iParam0)//Position - 0x5CF2
{
	if (iParam0 == iParam0)
	{
	}
	return "";
}

void func_138()//Position - 0x5D05
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x7CB6FD92BE491AD9(&(Local_104[unk_0x6BAA0516CC970D99() /*10*/]), 28);
	if (!func_389(Local_103) && func_44(unk_0xB5CEFD608600A09F(), 1, 1))
	{
		if (unk_0x9CDD10270A1ACF6F(unk_0xBC25C936A095B5BA(), &iVar0, 1))
		{
			if ((((iVar0 != joaat("weapon_unarmed") && iVar0 != joaat("object")) && iVar0 != joaat("weapon_flare")) && iVar0 != joaat("weapon_snowball")) && iVar0 != joaat("weapon_flashlight"))
			{
				if ((((unk_0xC2D39D2C720A03B0(unk_0xB5CEFD608600A09F()) && unk_0xC5B8A5F778E321DD(unk_0xBC25C936A095B5BA(), unk_0xE48AD7BF7762E114(Local_103), 45f)) && unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), unk_0xE48AD7BF7762E114(Local_103), 5f, 5f, 2f, 0, 1, 0)) || unk_0xDF25D3BB3759E7D1(unk_0xB5CEFD608600A09F(), unk_0xE48AD7BF7762E114(Local_103))) || unk_0x425BEBAA53B39EBF(unk_0xB5CEFD608600A09F(), unk_0xE48AD7BF7762E114(Local_103)))
				{
					if (!(func_172(0) || func_171()) && ((!func_142(unk_0xB5CEFD608600A09F()) || func_93(unk_0xB5CEFD608600A09F()) == 154) || func_93(unk_0xB5CEFD608600A09F()) == 171))
					{
						if (func_140(unk_0xB5CEFD608600A09F(), unk_0xE48AD7BF7762E114(Local_103)) || unk_0xB68DC32A9F946A50(unk_0xB5CEFD608600A09F()))
						{
							if (!unk_0xFA30DFD0084E92FE(Local_104[unk_0x6BAA0516CC970D99() /*10*/], 1))
							{
								func_139(func_8(unk_0x4ED43B67B3F05E0F(unk_0x7121087DFC37DE0B())));
								unk_0xF0059F27F7BB6680(&(Local_104[unk_0x6BAA0516CC970D99() /*10*/]), 1);
							}
							if (!unk_0xFA30DFD0084E92FE(Local_104[unk_0x6BAA0516CC970D99() /*10*/], 8))
							{
								unk_0xF0059F27F7BB6680(&(Local_104[unk_0x6BAA0516CC970D99() /*10*/]), 8);
							}
						}
						unk_0xF0059F27F7BB6680(&(Local_104[unk_0x6BAA0516CC970D99() /*10*/]), 28);
					}
				}
			}
		}
	}
	if (!unk_0xFA30DFD0084E92FE(Local_105.f_34, 28))
	{
		if (unk_0xFA30DFD0084E92FE(Local_104[unk_0x6BAA0516CC970D99() /*10*/], 28))
		{
			if (unk_0x9CDD10270A1ACF6F(unk_0xBC25C936A095B5BA(), &iVar1, 1))
			{
				if (iVar1 != 0 && iVar1 != joaat("weapon_snowball"))
				{
					iVar2 = unk_0x1966F403E5C2133D(iVar1);
					if (iVar2 == 416676503)
					{
						sLocal_109 = "hold_up_head_additive_pistol";
						unk_0xE896C0AD02364F2A(unk_0xBC25C936A095B5BA(), "mp_am_hold_up", sLocal_109, 8f, -8f, -1, 305, 0, 0, 0, 0);
					}
					else if ((((iVar2 == 1159398588 || iVar2 == 970310034) || iVar2 == 860033945) || iVar2 == -1212426201) || iVar2 == -957766203)
					{
						sLocal_109 = "hold_up_head_additive_rifle";
						unk_0xE896C0AD02364F2A(unk_0xBC25C936A095B5BA(), "mp_am_hold_up", sLocal_109, 8f, -8f, -1, 305, 0, 0, 0, 0);
					}
					else
					{
						sLocal_109 = "";
					}
					unk_0xF0059F27F7BB6680(&(Local_105.f_34), 28);
				}
			}
		}
	}
	else if (!unk_0xFA30DFD0084E92FE(Local_104[unk_0x6BAA0516CC970D99() /*10*/], 28) || unk_0x32E373675659FDB0(unk_0xBC25C936A095B5BA()))
	{
		if (!unk_0xF1734B55490E9045(sLocal_109))
		{
			if (unk_0x96044E39418AAF17(unk_0xBC25C936A095B5BA(), "mp_am_hold_up", sLocal_109, 3))
			{
				unk_0x08FA5F7132D73F6F(unk_0xBC25C936A095B5BA(), "mp_am_hold_up", sLocal_109, -1056964608);
			}
		}
		unk_0x7CB6FD92BE491AD9(&(Local_105.f_34), 28);
	}
	if (unk_0xFA30DFD0084E92FE(Local_103.f_19, 1))
	{
		if (!unk_0xFA30DFD0084E92FE(Local_104[unk_0x6BAA0516CC970D99() /*10*/].f_5, 3))
		{
			if (!func_389(Local_103.f_F) && func_44(unk_0xB5CEFD608600A09F(), 1, 1))
			{
				if (unk_0x9CDD10270A1ACF6F(unk_0xBC25C936A095B5BA(), &iVar3, 1))
				{
					if ((((iVar3 != joaat("weapon_unarmed") && iVar3 != joaat("object")) && iVar3 != joaat("weapon_flare")) && iVar3 != joaat("weapon_snowball")) && !(func_172(0) || func_171()))
					{
						if (unk_0xDF25D3BB3759E7D1(unk_0xB5CEFD608600A09F(), unk_0xE48AD7BF7762E114(Local_103.f_F)) || unk_0x425BEBAA53B39EBF(unk_0xB5CEFD608600A09F(), unk_0xE48AD7BF7762E114(Local_103.f_F)))
						{
							if (func_140(unk_0xB5CEFD608600A09F(), unk_0xE48AD7BF7762E114(Local_103.f_F)) || unk_0xB68DC32A9F946A50(unk_0xB5CEFD608600A09F()))
							{
								unk_0xF0059F27F7BB6680(&(Local_104[unk_0x6BAA0516CC970D99() /*10*/].f_5), 3);
							}
						}
					}
				}
			}
		}
	}
}

void func_139(int iParam0)//Position - 0x60E2
{
	struct<2> Var0;
	
	Var0 = -763402588;
	Var0.f_1 = unk_0xB5CEFD608600A09F();
	if (!iParam0 == 0)
	{
		unk_0x38E776D9FA75679B(1, &Var0, 2, iParam0);
	}
}

int func_140(int iParam0, int iParam1)//Position - 0x610E
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	
	if (func_44(iParam0, 1, 1))
	{
		vVar0 = { func_85(iParam0) };
	}
	if (!unk_0x36CEFBE9B745A58D(iParam1))
	{
		vVar1 = { unk_0x541C2AEF053615BC(iParam1, 1) };
	}
	vVar3 = { vVar1 - vVar0 };
	if (!unk_0x36CEFBE9B745A58D(iParam1))
	{
		vVar2 = { unk_0xA4455714F3DCE207(iParam1, 0f, 7f, 0f) };
		vVar4 = { vVar2 - vVar1 };
	}
	vVar3.z = 0f;
	vVar4.z = 0f;
	fVar5 = func_141(vVar3, vVar4);
	if (fVar5 < -0.1f)
	{
		return 1;
	}
	return 0;
}

float func_141(vector3 vParam0, vector3 vParam1)//Position - 0x6199
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

int func_142(int iParam0)//Position - 0x61BA
{
	if (func_38(iParam0))
	{
		return 1;
	}
	if (func_143(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_143(int iParam0)//Position - 0x61DD
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_144(iParam0, 9);
	}
	return 0;
}

bool func_144(int iParam0, int iParam1)//Position - 0x61FB
{
	return unk_0xFA30DFD0084E92FE(Global_18C80F[iParam0 /*558*/].f_B.f_4, iParam1);
}

void func_145(int iParam0)//Position - 0x6216
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xB5CEFD608600A09F() != Global_267214.f_12C7)
	{
		if (!unk_0xFA30DFD0084E92FE(Local_105.f_34, 6))
		{
			if (iParam0 == 1)
			{
				if (unk_0x9CDD10270A1ACF6F(unk_0xBC25C936A095B5BA(), &iVar2, 1))
				{
					if ((((iVar2 != joaat("weapon_unarmed") && iVar2 != 0) && iVar2 != joaat("object")) && iVar2 != joaat("weapon_flare")) && iVar2 != joaat("weapon_snowball"))
					{
						if (!unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), vLocal_111, 2.5f, 2.5f, 3f, 0, 1, 0))
						{
							iVar1 = 1;
						}
						iVar0 = 1;
					}
				}
				if ((((iVar1 == 1 || unk_0xFA30DFD0084E92FE(Local_104[unk_0x6BAA0516CC970D99() /*10*/], 5)) || (iVar0 == 1 && Local_103.f_3 >= 3)) || (iVar0 == 1 && unk_0xFA30DFD0084E92FE(Local_103.f_18, 16))) || unk_0xFA30DFD0084E92FE(Local_104[unk_0x6BAA0516CC970D99() /*10*/], 12))
				{
					if (((!unk_0xFA30DFD0084E92FE(Local_103.f_17, 12) || Local_103.f_3 >= 3) || unk_0xFA30DFD0084E92FE(Local_104[unk_0x6BAA0516CC970D99() /*10*/], 12)) || (iVar0 == 1 && unk_0xFA30DFD0084E92FE(Local_103.f_18, 16)))
					{
						Global_24FB5C[unk_0xB5CEFD608600A09F() /*406*/].f_24++;
						func_13(&(Global_252E21.f_E90));
						func_18(&(Global_252E21.f_E90), 0, 0);
						if (Global_24FB5C[unk_0xB5CEFD608600A09F() /*406*/].f_24 <= 2)
						{
							if (func_148())
							{
								if (func_147() < 2)
								{
									unk_0x16F9568D5D08F080(unk_0xB5CEFD608600A09F(), 37, unk_0x88B0E2A64EF693DE(func_147()));
								}
								else
								{
									unk_0x16F9568D5D08F080(unk_0xB5CEFD608600A09F(), 37, unk_0x88B0E2A64EF693DE(2));
								}
							}
							else
							{
								unk_0x16F9568D5D08F080(unk_0xB5CEFD608600A09F(), 37, unk_0x88B0E2A64EF693DE(2));
							}
						}
						else if (Global_24FB5C[unk_0xB5CEFD608600A09F() /*406*/].f_24 >= 5)
						{
							if (func_148())
							{
								if (func_147() < 3)
								{
									unk_0x16F9568D5D08F080(unk_0xB5CEFD608600A09F(), 37, unk_0x88B0E2A64EF693DE(func_147()));
								}
								else
								{
									unk_0x16F9568D5D08F080(unk_0xB5CEFD608600A09F(), 37, unk_0x88B0E2A64EF693DE(3));
								}
							}
							else
							{
								unk_0x16F9568D5D08F080(unk_0xB5CEFD608600A09F(), 37, unk_0x88B0E2A64EF693DE(4));
							}
						}
						else if (func_148())
						{
							if (func_147() < 3)
							{
								unk_0x16F9568D5D08F080(unk_0xB5CEFD608600A09F(), 37, unk_0x88B0E2A64EF693DE(func_147()));
							}
							else
							{
								unk_0x16F9568D5D08F080(unk_0xB5CEFD608600A09F(), 37, unk_0x88B0E2A64EF693DE(3));
							}
						}
						else
						{
							unk_0x16F9568D5D08F080(unk_0xB5CEFD608600A09F(), 37, unk_0x88B0E2A64EF693DE(3));
						}
						if (!unk_0xFA30DFD0084E92FE(Local_104[unk_0x6BAA0516CC970D99() /*10*/], 1))
						{
							unk_0xF0059F27F7BB6680(&(Local_104[unk_0x6BAA0516CC970D99() /*10*/]), 2);
						}
						unk_0xF0059F27F7BB6680(&(Local_105.f_34), 6);
						unk_0xF0059F27F7BB6680(&(Local_104[unk_0x6BAA0516CC970D99() /*10*/]), 25);
					}
				}
			}
			if (!unk_0xFA30DFD0084E92FE(Local_105.f_34, 27) && !unk_0xFA30DFD0084E92FE(Local_105.f_34, 6))
			{
				if (unk_0xABB2AFD7539464EA(unk_0xBC25C936A095B5BA()))
				{
					if (func_17(&uLocal_137, 2000, 0) || unk_0xFF2EA801C4691698(unk_0xBC25C936A095B5BA()))
					{
						unk_0x16F9568D5D08F080(unk_0xB5CEFD608600A09F(), 37, unk_0x88B0E2A64EF693DE(1));
						unk_0xF0059F27F7BB6680(&(Local_105.f_34), 27);
						unk_0xF0059F27F7BB6680(&(Local_104[unk_0x6BAA0516CC970D99() /*10*/]), 27);
						unk_0xF0059F27F7BB6680(&(Local_104[unk_0x6BAA0516CC970D99() /*10*/]), 25);
						if (!unk_0xFA30DFD0084E92FE(Local_104[unk_0x6BAA0516CC970D99() /*10*/], 1))
						{
							unk_0xF0059F27F7BB6680(&(Local_104[unk_0x6BAA0516CC970D99() /*10*/]), 2);
						}
					}
				}
				else if (func_146(&uLocal_137))
				{
					func_13(&uLocal_137);
				}
			}
		}
		if (!unk_0xFA30DFD0084E92FE(Local_105.f_34, 24))
		{
			if (unk_0xFA30DFD0084E92FE(Local_105.f_34, 31))
			{
				if (func_389(Local_103))
				{
					if (func_148())
					{
						if (func_147() < 3)
						{
							unk_0x16F9568D5D08F080(unk_0xB5CEFD608600A09F(), 37, unk_0x88B0E2A64EF693DE(func_147()));
						}
						else
						{
							unk_0x16F9568D5D08F080(unk_0xB5CEFD608600A09F(), 37, unk_0x88B0E2A64EF693DE(3));
						}
					}
					else
					{
						unk_0x16F9568D5D08F080(unk_0xB5CEFD608600A09F(), 13, unk_0x88B0E2A64EF693DE(3));
					}
					unk_0xF0059F27F7BB6680(&(Local_105.f_34), 24);
					if (!unk_0xFA30DFD0084E92FE(Local_104[unk_0x6BAA0516CC970D99() /*10*/], 1))
					{
						unk_0xF0059F27F7BB6680(&(Local_104[unk_0x6BAA0516CC970D99() /*10*/]), 2);
					}
				}
			}
		}
	}
}

bool func_146(var uParam0)//Position - 0x65F4
{
	return uParam0->f_1;
}

int func_147()//Position - 0x6600
{
	return Global_40001.f_2ED2;
}

int func_148()//Position - 0x660F
{
	if (func_143(unk_0xB5CEFD608600A09F()) && func_93(unk_0xB5CEFD608600A09F()) == 154)
	{
		return 1;
	}
	return 0;
}

void func_149()//Position - 0x6637
{
	int iVar0;
	int iVar1;
	
	if (func_44(unk_0xB5CEFD608600A09F(), 1, 1))
	{
		if (!unk_0xFA30DFD0084E92FE(Local_105.f_34, 23) && unk_0xFA30DFD0084E92FE(Local_103.f_17, 17))
		{
			if (!func_389(Local_103))
			{
				iLocal_114 = unk_0xB57F0B6D6209FF97(Local_103.f_1D);
				if (iLocal_114 >= 0)
				{
					if (unk_0x77FC50899603581D(iLocal_114))
					{
						if ((!unk_0xFA30DFD0084E92FE(Global_1917BC, 15) && func_154()) && func_153())
						{
							unk_0xF0059F27F7BB6680(&Global_1917BC, 15);
						}
						if (!unk_0xF16DAFF595E80F7C())
						{
							iVar0 = func_130(1190, -1, 0);
							if (!unk_0xFA30DFD0084E92FE(iVar0, 3))
							{
								if (unk_0x8FD30584EB38411B(iLocal_114) < 0.4f && unk_0x645938DA8ED5E0BA(unk_0xBC25C936A095B5BA()) == iLocal_139)
								{
									func_152("FHU_HELP3", -1);
									unk_0xF0059F27F7BB6680(&iVar0, 3);
									func_128(1190, iVar0, -1, 1, 0);
								}
							}
							else if (!unk_0xFA30DFD0084E92FE(iVar0, 5) || !unk_0xFA30DFD0084E92FE(iVar0, 6))
							{
								if (unk_0x8FD30584EB38411B(iLocal_114) < 0.7f && unk_0x645938DA8ED5E0BA(unk_0xBC25C936A095B5BA()) == iLocal_139)
								{
									func_152("FHU_HELP4", -1);
									unk_0xF0059F27F7BB6680(&iVar0, 5);
									func_128(1190, iVar0, -1, 1, 0);
									unk_0xF0059F27F7BB6680(&(Local_105.f_34), 23);
								}
							}
							else
							{
								unk_0xF0059F27F7BB6680(&(Local_105.f_34), 23);
							}
						}
					}
				}
			}
		}
		if (((((((!func_37(unk_0xB5CEFD608600A09F(), 146) && !func_151()) && func_93(unk_0xB5CEFD608600A09F()) != 167) && func_93(unk_0xB5CEFD608600A09F()) != 190) && func_93(unk_0xB5CEFD608600A09F()) != 191) && func_93(unk_0xB5CEFD608600A09F()) != 250) && func_93(unk_0xB5CEFD608600A09F()) != 237) && func_93(unk_0xB5CEFD608600A09F()) != 238)
		{
			if (!unk_0xFA30DFD0084E92FE(Local_105.f_35, 1))
			{
				if (!unk_0xF16DAFF595E80F7C())
				{
					if (((((func_389(Local_103) || Local_103.f_3 > 7) && !unk_0xFA30DFD0084E92FE(Local_103.f_17, 20)) && !unk_0xFA30DFD0084E92FE(Local_103.f_17, 11)) && !unk_0xFA30DFD0084E92FE(Local_104[unk_0x6BAA0516CC970D99() /*10*/], 5)) && unk_0x90629C6D0C640733(vLocal_115, 1.5f) == 0)
					{
						iVar1 = func_130(1190, -1, 0);
						if (!unk_0xFA30DFD0084E92FE(iVar1, 20) || !unk_0xFA30DFD0084E92FE(iVar1, 21))
						{
							func_152("FHU_HELPM", -1);
							if (!unk_0xFA30DFD0084E92FE(iVar1, 20))
							{
								unk_0xF0059F27F7BB6680(&iVar1, 20);
							}
							else
							{
								unk_0xF0059F27F7BB6680(&iVar1, 21);
							}
							func_128(1190, iVar1, -1, 1, 0);
							unk_0xF0059F27F7BB6680(&(Local_105.f_35), 1);
						}
						else
						{
							unk_0xF0059F27F7BB6680(&(Local_105.f_35), 1);
						}
					}
				}
			}
			else if (func_150("FHU_HELPM"))
			{
				if ((unk_0xFA30DFD0084E92FE(Local_103.f_17, 20) || unk_0xFA30DFD0084E92FE(Local_103.f_17, 11)) || unk_0xFA30DFD0084E92FE(Local_104[unk_0x6BAA0516CC970D99() /*10*/], 5))
				{
					unk_0x7456702622C62EA0(1);
				}
			}
		}
	}
}

int func_150(char* sParam0)//Position - 0x6926
{
	unk_0xF07D20149ECBC61E(sParam0);
	return unk_0xA66DBDA0A072514A(0);
}

bool func_151()//Position - 0x6939
{
	return Global_1801DD;
}

void func_152(char* sParam0, int iParam1)//Position - 0x6945
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 0, 1, iParam1);
}

bool func_153()//Position - 0x695C
{
	return unk_0xFA30DFD0084E92FE(Global_267214.f_6B9, 21);
}

bool func_154()//Position - 0x6971
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_92, 3);
}

void func_155()//Position - 0x698B
{
	float fVar0;
	float fVar1;
	
	if (Local_103.f_3 == 4)
	{
		if (func_44(unk_0xB5CEFD608600A09F(), 1, 1))
		{
			if (!func_389(Local_103))
			{
				iLocal_114 = unk_0xB57F0B6D6209FF97(Local_103.f_1D);
				if (iLocal_114 >= 0)
				{
					if (unk_0x77FC50899603581D(iLocal_114))
					{
						fVar0 = unk_0x8FD30584EB38411B(iLocal_114);
						fVar0 = (fVar0 * 1000f);
						if (fVar0 <= 890f)
						{
							func_156(SYSTEM::ROUND(fVar0), 890, "HUP_PROG", func_160(unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F())), 0, 1, 13);
						}
						fVar1 = unk_0xC4EA392E1E849405(unk_0xB5CEFD608600A09F());
						fVar1 = (fVar1 - 0.3f);
						if (fVar1 < 0f)
						{
							fVar1 = 0f;
						}
						fVar1 = (fVar1 * 4f);
						Local_104[unk_0x6BAA0516CC970D99() /*10*/].f_6 = fVar1;
					}
				}
			}
		}
	}
}

void func_156(int iParam0, int iParam1, char* sParam2, var uParam3, int iParam4, int iParam5, int iParam6)//Position - 0x6A3D
{
	func_157(iParam0, iParam1, sParam2, uParam3, iParam4, iParam6, -1f, -1f, 0, iParam5, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1);
}

void func_157(var uParam0, var uParam1, char* sParam2, var uParam3, var uParam4, var uParam5, float fParam6, float fParam7, int iParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23)//Position - 0x6A68
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_159(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_14D262.f_1 = 1;
		func_158(0, iVar0);
		Global_14D262.f_445[iVar0] = uParam0;
		Global_14D262.f_445.f_B[iVar0] = uParam1;
		StringCopy(&(Global_14D262.f_445.f_16[iVar0 /*16*/]), sParam2, 64);
		Global_14D262.f_445.f_C2[iVar0] = uParam3;
		Global_14D262.f_445.f_B7[iVar0] = uParam4;
		Global_14D262.f_445.f_D8[iVar0] = uParam5;
		Global_14D262.f_445.f_E3[iVar0 /*3*/] = fParam6;
		Global_14D262.f_445.f_E3[iVar0 /*3*/].f_1 = fParam7;
		Global_14D262.f_445.f_102[iVar0] = iParam8;
		Global_14D262.f_445.f_10D[iVar0] = uParam9;
		Global_14D262.f_445.f_138[iVar0] = iParam10;
		Global_14D262.f_445.f_143[iVar0] = iParam11;
		Global_14D262.f_445.f_14E[iVar0] = iParam12;
		Global_14D262.f_445.f_159[iVar0] = iParam13;
		Global_14D262.f_440 = 1;
		Global_14D262.f_445.f_164[iVar0] = iParam14;
		Global_14D262.f_445.f_16F[iVar0] = iParam15;
		Global_14D262.f_445.f_17A[iVar0] = iParam16;
		Global_14D262.f_445.f_185[iVar0] = iParam17;
		Global_14D262.f_445.f_190[iVar0] = iParam18;
		Global_14D262.f_445.f_19B[iVar0] = iParam19;
		Global_14D262.f_445.f_1A6[iVar0] = iParam20;
		Global_14D262.f_445.f_1B1[iVar0] = iParam21;
		Global_14D262.f_445.f_1BC[iVar0] = iParam22;
		Global_14D262.f_445.f_1C7[iVar0] = iParam23;
	}
}

void func_158(int iParam0, int iParam1)//Position - 0x6C31
{
	unk_0xF0059F27F7BB6680(&(Global_14D262.f_17E7[iParam0]), iParam1);
}

bool func_159(int iParam0, int iParam1)//Position - 0x6C4A
{
	return unk_0xFA30DFD0084E92FE(Global_14D262.f_17E7[iParam0], iParam1);
}

int func_160(int iParam0)//Position - 0x6C63
{
	if (iParam0 == 0)
	{
	}
	return 116;
}

void func_161()//Position - 0x6C73
{
	if (!unk_0xFA30DFD0084E92FE(Local_105.f_35, 2))
	{
		unk_0x522053D86D6E1C7A("oddjobs@shop_robbery@rob_till");
		unk_0x522053D86D6E1C7A(func_162());
		if (unk_0xF9E082857622D91E("oddjobs@shop_robbery@rob_till") && unk_0xF9E082857622D91E(func_162()))
		{
			unk_0xF0059F27F7BB6680(&(Local_105.f_35), 2);
		}
	}
}

char* func_162()//Position - 0x6CBB
{
	if (func_163(unk_0xB5CEFD608600A09F()))
	{
		return "anim@am_hold_up@male";
	}
	return "anim@am_hold_up@female";
}

int func_163(int iParam0)//Position - 0x6CD9
{
	if (!unk_0x7AF0088ABFA713B6())
	{
		return 1;
	}
	return Global_24FB5C[iParam0 /*406*/].f_E2;
}

int func_164(int iParam0, int iParam1)//Position - 0x6CFB
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	vVar0 = { 0f, 0f, 0f };
	vVar1 = { 0f, 0f, 0f };
	fVar2 = 0f;
	func_165(iParam1, &vVar0, &vVar1, &fVar2);
	if (unk_0x0C265B3C448E6954(iParam0, vVar0, vVar1, fVar2, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

void func_165(int iParam0, var uParam1, var uParam2, float fParam3)//Position - 0x6D3B
{
	if (iParam0 == 0)
	{
		*uParam1 = { 1390.033f, 3605.529f, 33.98091f };
		*uParam2 = { 1394.412f, 3607.156f, 36.38288f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 1)
	{
		*uParam1 = { -3041.675f, 583.5931f, 6.908931f };
		*uParam2 = { -3037.284f, 585.0375f, 9.521532f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 2)
	{
		*uParam1 = { -3245.184f, 1000.124f, 11.83071f };
		*uParam2 = { -3240.504f, 999.7783f, 14.46645f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 3)
	{
		*uParam1 = { 549.5332f, 2668.464f, 41.15651f };
		*uParam2 = { 548.9114f, 2673.108f, 43.7766f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 4)
	{
		*uParam1 = { 2554.316f, 380.8569f, 107.623f };
		*uParam2 = { 2558.98f, 380.6908f, 110.2684f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 5)
	{
		*uParam1 = { 2675.476f, 3280.807f, 54.24115f };
		*uParam2 = { 2679.577f, 3278.526f, 56.8955f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 6)
	{
		*uParam1 = { 1729.145f, 6417.834f, 34.03724f };
		*uParam2 = { 1727.07f, 6413.635f, 36.66442f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 7)
	{
		*uParam1 = { 1958.61f, 3742.512f, 31.34376f };
		*uParam2 = { 1960.958f, 3738.465f, 33.98634f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 8)
	{
		*uParam1 = { 24.51093f, -1344.449f, 28.49703f };
		*uParam2 = { 24.52224f, -1349.084f, 31.14272f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 9)
	{
		*uParam1 = { 373.296f, 329.2379f, 102.5664f };
		*uParam2 = { 372.1347f, 324.6985f, 105.214f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 10)
	{
		*uParam1 = { 1168.183f, 2711.203f, 37.06316f };
		*uParam2 = { 1163.144f, 2711.246f, 40.16688f };
		*fParam3 = 2.5f;
	}
	else if (iParam0 == 11)
	{
		*uParam1 = { -2966.142f, 388.6418f, 14.04331f };
		*uParam2 = { -2965.812f, 393.6473f, 17.17248f };
		*fParam3 = 2.5f;
	}
	else if (iParam0 == 12)
	{
		*uParam1 = { -1223.599f, -909.8984f, 11.32635f };
		*uParam2 = { -1219.443f, -907.0756f, 14.45929f };
		*fParam3 = 2.5f;
	}
	else if (iParam0 == 13)
	{
		*uParam1 = { 1133.524f, -980.3087f, 45.41582f };
		*uParam2 = { 1134.22f, -985.284f, 48.53235f };
		*fParam3 = 2.5f;
	}
	else if (iParam0 == 14)
	{
		*uParam1 = { -1484.413f, -379.3236f, 39.16341f };
		*uParam2 = { -1487.954f, -375.7666f, 42.28885f };
		*fParam3 = 2.5f;
	}
	else if (iParam0 == 15)
	{
		*uParam1 = { 1699.447f, 4921.57f, 41.06366f };
		*uParam2 = { 1695.64f, 4924.245f, 44.22165f };
		*fParam3 = 2.25f;
	}
	else if (iParam0 == 16)
	{
		*uParam1 = { -705.7869f, -911.6997f, 18.2156f };
		*uParam2 = { -705.7026f, -916.374f, 21.33545f };
		*fParam3 = 2.25f;
	}
	else if (iParam0 == 17)
	{
		*uParam1 = { -45.26995f, -1756.669f, 28.42101f };
		*uParam2 = { -48.26036f, -1760.285f, 31.56342f };
		*fParam3 = 2.25f;
	}
	else if (iParam0 == 18)
	{
		*uParam1 = { 1164.697f, -320.7587f, 68.2051f };
		*uParam2 = { 1165.463f, -325.0899f, 71.37893f };
		*fParam3 = 2.25f;
	}
	else if (iParam0 == 19)
	{
		*uParam1 = { -1821.205f, 795.8699f, 137.0893f };
		*uParam2 = { -1818.041f, 792.3982f, 140.1836f };
		*fParam3 = 2.25f;
	}
}

void func_166(bool bParam0, int iParam1)//Position - 0x7198
{
	int iVar0;
	
	if (!func_168(&iVar0, 0, iParam1))
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
		unk_0x841D233D3CE81152(9, 0);
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
		func_167(&(Global_43C1.f_159A[iVar0 /*10*/]));
		Global_43C1.f_15D7[iVar0] = 0;
	}
	else
	{
		Global_43C1.f_15D7[iVar0] = 0;
	}
}

void func_167(int iParam0)//Position - 0x7256
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

int func_168(var uParam0, bool bParam1, int iParam2)//Position - 0x727F
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

bool func_169(char* sParam0, int iParam1, bool bParam2)//Position - 0x731C
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_168(&iVar0, 1, iParam1))
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
	unk_0x8AA3F48A15444B98("CommonMenu", 0);
	Global_43C1.f_156C[iVar0] = 1;
	if (!unk_0x499783D01578C2D2("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		unk_0x8AA3F48A15444B98("MPShopSale", 0);
		Global_43C1.f_1573[iVar0] = 1;
		if (!unk_0x499783D01578C2D2("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_43C1.f_159A[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_170(&(Global_43C1.f_159A[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_170(var uParam0)//Position - 0x7412
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

int func_171()//Position - 0x74B4
{
	if (unk_0xB731B8C5BCE89836(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_172(int iParam0)//Position - 0x74D1
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

void func_173()//Position - 0x752B
{
	if (unk_0xB5CEFD608600A09F() != Global_267214.f_12C7)
	{
		if (!unk_0xFA30DFD0084E92FE(Local_105.f_34, 24))
		{
			if (Local_103.f_48 == unk_0xB5CEFD608600A09F() || (unk_0xFA30DFD0084E92FE(Local_105.f_34, 31) && unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), vLocal_145, 20f, 20f, 20f, 0, 1, 0)))
			{
				if (func_389(Local_103))
				{
					if (func_148())
					{
						if (func_147() < 3)
						{
							unk_0x16F9568D5D08F080(unk_0xB5CEFD608600A09F(), 37, unk_0x88B0E2A64EF693DE(func_147()));
						}
						else
						{
							unk_0x16F9568D5D08F080(unk_0xB5CEFD608600A09F(), 37, unk_0x88B0E2A64EF693DE(3));
						}
					}
					else
					{
						unk_0x16F9568D5D08F080(unk_0xB5CEFD608600A09F(), 13, unk_0x88B0E2A64EF693DE(3));
					}
					unk_0xF0059F27F7BB6680(&(Local_105.f_34), 24);
					if (!unk_0xFA30DFD0084E92FE(Local_104[unk_0x6BAA0516CC970D99() /*10*/], 1))
					{
						unk_0xF0059F27F7BB6680(&(Local_104[unk_0x6BAA0516CC970D99() /*10*/]), 2);
					}
				}
			}
		}
	}
}

int func_174()//Position - 0x7608
{
	if (!unk_0xFA30DFD0084E92FE(Local_103.f_19, 0))
	{
		return 0;
	}
	if (func_389(Local_103.f_F))
	{
		if (unk_0x2DA8CA50A72528FB(iLocal_333))
		{
			unk_0x07B8ECB35A4ED3AC(&iLocal_333);
		}
		return 0;
	}
	if (Local_103.f_42 == 4)
	{
		if (!unk_0x2DA8CA50A72528FB(iLocal_333))
		{
			iLocal_333 = unk_0x511FE22BCF5353CD(unk_0xE48AD7BF7762E114(Local_103.f_F));
			unk_0x0D5352939CC40C16(iLocal_333, 1);
			unk_0x3F5F1772D71D5EC4(iLocal_333, 0.7f);
		}
	}
	if (!unk_0x89B5CBCE9D131B32(Local_103.f_F))
	{
		return 0;
	}
	switch (Local_103.f_42)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			if (unk_0xF4FCC3C1048FF2AB(unk_0xE48AD7BF7762E114(Local_103.f_F), 713668775) != 0)
			{
				if (unk_0xF4FCC3C1048FF2AB(unk_0xE48AD7BF7762E114(Local_103.f_F), 713668775) != 1)
				{
					if (func_44(unk_0xB5CEFD608600A09F(), 1, 1))
					{
						unk_0x9565F9267674873A(unk_0xE48AD7BF7762E114(Local_103.f_F), unk_0xBC25C936A095B5BA(), -1, 4f, 2f, 1073741824, 0);
					}
				}
			}
			break;
		
		case 3:
			if (!unk_0xFA30DFD0084E92FE(Local_103.f_19, 5) && !unk_0xFA30DFD0084E92FE(Local_104[unk_0x6BAA0516CC970D99() /*10*/].f_5, 0))
			{
				if (unk_0xF4FCC3C1048FF2AB(unk_0xE48AD7BF7762E114(Local_103.f_F), 1227113341) != 0 && unk_0xF4FCC3C1048FF2AB(unk_0xE48AD7BF7762E114(Local_103.f_F), 1227113341) != 1)
				{
					unk_0x85DB484A637CEAB9(unk_0xE48AD7BF7762E114(Local_103.f_F), unk_0xBC25C936A095B5BA(), 10000);
					unk_0xF0059F27F7BB6680(&(Local_104[unk_0x6BAA0516CC970D99() /*10*/].f_5), 0);
				}
			}
			if ((!unk_0xFA30DFD0084E92FE(Local_103.f_19, 6) && !unk_0xFA30DFD0084E92FE(Local_104[unk_0x6BAA0516CC970D99() /*10*/].f_5, 1)) && !func_175())
			{
				func_388(&uLocal_151, 4, unk_0xE48AD7BF7762E114(Local_103.f_F), "StoreHero", 1, 0);
				unk_0x53D8178763EDCE60(unk_0xE48AD7BF7762E114(Local_103.f_F), "GENERIC_INSULT_HIGH", "SPEECH_PARAMS_FORCE", 1);
				unk_0xF0059F27F7BB6680(&(Local_104[unk_0x6BAA0516CC970D99() /*10*/].f_5), 1);
			}
			break;
		
		case 4:
			if ((!unk_0xFA30DFD0084E92FE(Local_103.f_19, 7) && !unk_0xFA30DFD0084E92FE(Local_104[unk_0x6BAA0516CC970D99() /*10*/].f_5, 2)) && !func_175())
			{
				func_388(&uLocal_151, 4, unk_0xE48AD7BF7762E114(Local_103.f_F), "StoreHero", 1, 0);
				unk_0x53D8178763EDCE60(unk_0xE48AD7BF7762E114(Local_103.f_F), "GENERIC_FUCK_YOU", "SPEECH_PARAMS_FORCE", 1);
				unk_0xF0059F27F7BB6680(&(Local_104[unk_0x6BAA0516CC970D99() /*10*/].f_5), 2);
			}
			if (unk_0xFA30DFD0084E92FE(Local_103.f_19, 7) || unk_0xFA30DFD0084E92FE(Local_104[unk_0x6BAA0516CC970D99() /*10*/].f_5, 2))
			{
				if (unk_0xF4FCC3C1048FF2AB(unk_0xE48AD7BF7762E114(Local_103.f_F), -1442466670) != 0 && unk_0xF4FCC3C1048FF2AB(unk_0xE48AD7BF7762E114(Local_103.f_F), -1442466670) != 1)
				{
					unk_0xA4E856A8CD53B8DF(unk_0xE48AD7BF7762E114(Local_103.f_F));
					unk_0x4106FAF8AA1D69D5(unk_0xE48AD7BF7762E114(Local_103.f_F), Global_180797);
					unk_0xB90F3BE2A1EF63DB(unk_0xE48AD7BF7762E114(Local_103.f_F), 20f, 0);
					unk_0x22321800954A532E(unk_0xE48AD7BF7762E114(Local_103.f_F), 1);
				}
			}
			break;
		
		case 5:
			if (unk_0xF4FCC3C1048FF2AB(unk_0xE48AD7BF7762E114(Local_103.f_F), 242628503) != 0 && unk_0xF4FCC3C1048FF2AB(unk_0xE48AD7BF7762E114(Local_103.f_F), 242628503) != 1)
			{
				unk_0xA4E856A8CD53B8DF(unk_0xE48AD7BF7762E114(Local_103.f_F));
				unk_0xA8E6405305C0D7DF(unk_0xE48AD7BF7762E114(Local_103.f_F), uLocal_119);
				unk_0x22321800954A532E(unk_0xE48AD7BF7762E114(Local_103.f_F), 1);
			}
			else if (unk_0xF4FCC3C1048FF2AB(unk_0xE48AD7BF7762E114(Local_103.f_F), -875674219) != 1 && unk_0xF4FCC3C1048FF2AB(unk_0xE48AD7BF7762E114(Local_103.f_F), -875674219) != 0)
			{
				if (func_17(&uLocal_135, 5000, 0))
				{
					func_13(&uLocal_135);
					unk_0x85DB484A637CEAB9(unk_0xE48AD7BF7762E114(Local_103.f_F), unk_0xBC25C936A095B5BA(), 10000);
				}
			}
			break;
	}
	return 1;
}

int func_175()//Position - 0x798C
{
	if (Global_3DB8 != 0 || unk_0xE6711F601F11B66B())
	{
		return 1;
	}
	return 0;
}

void func_176()//Position - 0x79AE
{
	if (Local_103.f_3 == 4)
	{
		if ((!unk_0xFA30DFD0084E92FE(Local_103.f_17, 10) && !unk_0xFA30DFD0084E92FE(Local_104[unk_0x6BAA0516CC970D99() /*10*/], 4)) && unk_0xFA30DFD0084E92FE(Local_103.f_17, 17))
		{
			if (unk_0x7FFE36DB9042AF23(Local_103.f_D))
			{
				if (unk_0x89B5CBCE9D131B32(Local_103.f_D) || (!unk_0xDD5EE7D9FC37FA16(Local_103.f_D) && unk_0x0DE6397A2CB3EF75()))
				{
					if (!func_389(Local_103))
					{
						if (unk_0x2CDE18D6C89522AD(unk_0xE48AD7BF7762E114(Local_103)))
						{
							unk_0xD434A01DEA38A939(unk_0x370629AFF3A5C45C(Local_103.f_D), true, 0);
							unk_0x73FD5B32F266E65D(unk_0x370629AFF3A5C45C(Local_103.f_D), 1);
							unk_0x3A8D19D7D434A741(unk_0x370629AFF3A5C45C(Local_103.f_D), 0f, 0f, -1f);
							unk_0x16DCE907D1FFE3CC(unk_0xE48AD7BF7762E114(Local_103), 16);
							unk_0xF0059F27F7BB6680(&(Local_104[unk_0x6BAA0516CC970D99() /*10*/]), 4);
						}
					}
					else
					{
						unk_0xD434A01DEA38A939(unk_0x370629AFF3A5C45C(Local_103.f_D), true, 0);
						unk_0x73FD5B32F266E65D(unk_0x370629AFF3A5C45C(Local_103.f_D), 1);
						unk_0x3A8D19D7D434A741(unk_0x370629AFF3A5C45C(Local_103.f_D), 0f, 0f, -1f);
						unk_0xF0059F27F7BB6680(&(Local_104[unk_0x6BAA0516CC970D99() /*10*/]), 4);
					}
				}
			}
		}
	}
	func_177();
}

void func_177()//Position - 0x7AB4
{
	int iVar0;
	var uVar1;
	
	if (unk_0x7FFE36DB9042AF23(Local_103.f_D))
	{
		if (!unk_0x1D403DFADBC2DE3C(unk_0x370629AFF3A5C45C(Local_103.f_D), 0))
		{
			if ((!unk_0xFA30DFD0084E92FE(Local_103.f_17, 11) && !unk_0xFA30DFD0084E92FE(Local_104[unk_0x6BAA0516CC970D99() /*10*/], 5)) && Local_103.f_25 > 0f)
			{
				if (((func_222() || func_221(0.87f)) || Local_103.f_3 >= 5) || unk_0xFA30DFD0084E92FE(Local_103.f_17, 10))
				{
					if (!unk_0xFA30DFD0084E92FE(Local_104[unk_0x6BAA0516CC970D99() /*10*/], 11))
					{
						if (unk_0x89B5CBCE9D131B32(Local_103.f_D))
						{
							unk_0x8AB4D83A9145FCD7(unk_0x370629AFF3A5C45C(Local_103.f_D), 0, 0);
							unk_0xF0059F27F7BB6680(&(Local_104[unk_0x6BAA0516CC970D99() /*10*/]), 13);
						}
						if (func_93(unk_0xB5CEFD608600A09F()) != 155)
						{
							unk_0x3737022C467D48F7(func_50(1), 1);
						}
						unk_0xF0059F27F7BB6680(&(Local_104[unk_0x6BAA0516CC970D99() /*10*/]), 11);
					}
					if (unk_0xB6A16B5E7EB81F9B(unk_0x370629AFF3A5C45C(Local_103.f_D), unk_0xBC25C936A095B5BA()))
					{
						Local_104[unk_0x6BAA0516CC970D99() /*10*/].f_7 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) };
						unk_0x2084D4C6C2DF616F(Local_104[unk_0x6BAA0516CC970D99() /*10*/].f_7, &(Local_104[unk_0x6BAA0516CC970D99() /*10*/].f_7.f_2), 0, 0);
						if (unk_0x89B5CBCE9D131B32(Local_103.f_D))
						{
							unk_0x17175087F2DB6AC8(unk_0x370629AFF3A5C45C(Local_103.f_D), 1, 1);
							func_45(&(Local_103.f_D));
						}
						iVar0 = unk_0x491B2241281A03B7(iLocal_132, iLocal_133);
						if (unk_0xFA30DFD0084E92FE(Local_103.f_17, 10))
						{
							iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Local_103.f_25));
						}
						if (Local_103.f_4 > 1000)
						{
							Local_103.f_4 = 1000;
						}
						iVar0 = (iVar0 + Local_103.f_4);
						iVar0 = func_220(iVar0, 1);
						if (iVar0 > Global_40001.f_A6)
						{
							iVar0 = Global_40001.f_A6;
						}
						if (func_219(unk_0xB5CEFD608600A09F()) && func_217(func_218(unk_0xB5CEFD608600A09F())) < 1f)
						{
							if (Global_40001.f_1082 > 1f)
							{
								Global_40001.f_1082 = 1f;
							}
							iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1082));
						}
						if (iVar0 > 0)
						{
							if (func_216())
							{
								func_207(1734805203, iVar0, &uVar1, 0, 0, 0);
							}
							else
							{
								func_203(iVar0, 1, 1, 1092616192);
								unk_0x5839B5C3D05A7348(iVar0);
							}
						}
						Global_267214.f_15FB = (Global_267214.f_15FB + iVar0);
						Global_267214.f_15FB.f_2 = 1;
						Global_267214.f_15FB.f_5 = 1;
						iLocal_335 = (iLocal_335 + iVar0);
						func_202(3);
						if (!unk_0xFA30DFD0084E92FE(Local_104[unk_0x6BAA0516CC970D99() /*10*/], 5))
						{
							func_201(Local_103.f_26, iVar0);
						}
						else
						{
							func_192(unk_0xBC25C936A095B5BA(), iVar0);
						}
						func_191(1, iVar0);
						if (func_187(1))
						{
							func_178(4);
						}
						unk_0xF0059F27F7BB6680(&(Local_104[unk_0x6BAA0516CC970D99() /*10*/]), 5);
						unk_0xF0059F27F7BB6680(&(Local_105.f_35), 6);
					}
				}
			}
		}
	}
}

void func_178(int iParam0)//Position - 0x7D5D
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_40001.f_42A7;
			break;
		
		case 1:
			iVar0 = Global_40001.f_429D;
			break;
		
		case 2:
			iVar0 = Global_40001.f_42A8;
			break;
		
		case 3:
			iVar0 = Global_40001.f_42A0;
			break;
		
		case 4:
			iVar0 = Global_40001.f_429C;
			break;
		
		case 6:
			iVar0 = 3;
			break;
		
		case 7:
			iVar0 = Global_40001.f_42AB;
			break;
		
		case 8:
			iVar0 = Global_40001.f_42AC;
			break;
		
		case 9:
			iVar0 = Global_40001.f_42AF;
			break;
		
		case 22:
			iVar0 = Global_40001.f_42B0;
			break;
		
		case 23:
			iVar0 = Global_40001.f_42A9;
			break;
		
		case 25:
			iVar0 = Global_40001.f_4621;
			break;
		
		case 26:
			iVar0 = Global_40001.f_4620;
			break;
	}
	if (iVar0 != 0)
	{
		unk_0x0022CBDAA2EA4C4F(func_185(func_186()), func_183(func_186()), func_182(), func_181(), iParam0, iVar0);
	}
	func_180(iVar0);
	func_179(iVar0);
}

void func_179(int iParam0)//Position - 0x7E82
{
	int iVar0;
	
	iVar0 = func_130(3964, -1, 0);
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
	func_128(3964, iVar0, -1, 1, 0);
}

void func_180(int iParam0)//Position - 0x7ED0
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

int func_181()//Position - 0x7F4A
{
	if (Global_196948.f_3 != 0)
	{
		return Global_196948.f_3;
	}
	return -1;
}

int func_182()//Position - 0x7F66
{
	if (Global_196948.f_2 != 0)
	{
		return Global_196948.f_2;
	}
	return -1;
}

int func_183(int iParam0)//Position - 0x7F82
{
	if (iParam0 == func_184())
	{
		return -1;
	}
	return Global_18C80F[iParam0 /*558*/].f_B.f_8[1];
}

int func_184()//Position - 0x7FA7
{
	return -1;
}

int func_185(int iParam0)//Position - 0x7FB0
{
	if (iParam0 == func_184())
	{
		return -1;
	}
	return Global_18C80F[iParam0 /*558*/].f_B.f_8[0];
}

int func_186()//Position - 0x7FD5
{
	return Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_B;
}

bool func_187(bool bParam0)//Position - 0x7FEA
{
	return func_188(unk_0xB5CEFD608600A09F(), bParam0);
}

int func_188(int iParam0, bool bParam1)//Position - 0x7FFC
{
	return func_189(iParam0, bParam1, 1);
}

int func_189(int iParam0, bool bParam1, int iParam2)//Position - 0x8011
{
	int iVar0;
	
	if (iParam0 == func_184())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_190(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_18C80F[iParam0 /*558*/].f_B;
	if (iVar0 != func_184() && Global_18C80F[iVar0 /*558*/].f_B.f_199 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_190(int iParam0, int iParam1)//Position - 0x806D
{
	if (iParam0 != func_184())
	{
		if (Global_18C80F[iParam0 /*558*/].f_B != func_184())
		{
			if (Global_18C80F[iParam0 /*558*/].f_B == iParam0 && Global_18C80F[iParam0 /*558*/].f_B.f_199 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_191(int iParam0, int iParam1)//Position - 0x80BC
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

void func_192(int iParam0, int iParam1)//Position - 0x812E
{
	vector3 vVar0;
	
	vVar0 = { func_199(unk_0xBC25C936A095B5BA(), 1) };
	if (iParam0 == func_198(unk_0xBC25C936A095B5BA()))
	{
		func_197(1);
	}
	func_193(vVar0, iParam1, 7, 0, 0);
}

void func_193(vector3 vParam0, int iParam1, int iParam2, char* sParam3, int iParam4)//Position - 0x8162
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
			Global_252E21.f_504[iVar1 /*30*/].f_4 = func_196(Global_252E21.f_504[iVar1 /*30*/], &Global_14063D, &Global_14063E);
			Global_252E21.f_504[iVar1 /*30*/].f_7 = unk_0xED678C85A82F0AB9();
			Global_252E21.f_504[iVar1 /*30*/].f_3 = iParam1;
			Global_252E21.f_504[iVar1 /*30*/].f_8 = iParam2;
			Global_252E21.f_504[iVar1 /*30*/].f_9 = func_195();
			Global_252E21.f_504[iVar1 /*30*/].f_A = func_194();
			StringCopy(&(Global_252E21.f_504[iVar1 /*30*/].f_16), sParam3, 16);
			Global_252E21.f_504[iVar1 /*30*/].f_1A = unk_0x863D0D1A37055D36(unk_0xED678C85A82F0AB9(), iParam4);
		}
	}
}

int func_194()//Position - 0x8279
{
	if (Global_252E21.f_75D)
	{
		Global_252E21.f_75D = 0;
		return 1;
	}
	Global_252E21.f_75D = 0;
	return 0;
}

var func_195()//Position - 0x82A3
{
	var uVar0;
	
	uVar0 = Global_252E21.f_75F;
	Global_252E21.f_75F = 1;
	return uVar0;
}

float func_196(vector3 vParam0, var uParam1, var uParam2)//Position - 0x82BE
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

void func_197(int iParam0)//Position - 0x8357
{
	Global_252E21.f_75D = iParam0;
}

int func_198(int iParam0)//Position - 0x8368
{
	return iParam0;
}

Vector3 func_199(int iParam0, bool bParam1)//Position - 0x8372
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
	if (iParam0 == func_200(unk_0xBC25C936A095B5BA()) && unk_0x3D875C2512206692(unk_0xEBC6179F395EFBEB()) == 4)
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

int func_200(int iParam0)//Position - 0x8436
{
	return iParam0;
}

void func_201(vector3 vParam0, int iParam1)//Position - 0x8440
{
	func_193(vParam0, iParam1, 6, 0, 0);
}

void func_202(int iParam0)//Position - 0x8455
{
	Global_252E21.f_75F = iParam0;
}

void func_203(int iParam0, int iParam1, int iParam2, float fParam3)//Position - 0x8466
{
	func_204(iParam0, iParam1, iParam2, fParam3);
}

void func_204(int iParam0, int iParam1, int iParam2, float fParam3)//Position - 0x847A
{
	func_205(iParam0, iParam1, iParam2, fParam3);
}

void func_205(int iParam0, int iParam1, int iParam2, float fParam3)//Position - 0x848E
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
		func_206(iVar1, 0);
	}
}

void func_206(int iParam0, bool bParam1)//Position - 0x8511
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

void func_207(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x8522
{
	int iVar0;
	
	if (!func_216())
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
				func_208(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_208(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_208(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x89E8
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_216())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x060D652F887827B8(func_77()) || unk_0xEBA8BD5AE6FF01CA())
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
			*uParam0 = func_215(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1);
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
			func_214(1, iParam4);
			Global_410B51 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_209(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_209(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x8B8C
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xF0059F27F7BB6680(&(Global_24FB5C[unk_0xB5CEFD608600A09F() /*406*/].f_76.f_47), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_210(iParam0);
	}
}

void func_210(int iParam0)//Position - 0x8BC4
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_216())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_213(iParam0))
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
		func_211(&(Global_41092C[iParam0 /*80*/]));
	}
}

void func_211(var uParam0)//Position - 0x8C16
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
	func_212(&(uParam0->f_8.f_3));
	func_212(&(uParam0->f_8.f_10));
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

void func_212(var uParam0)//Position - 0x8D10
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

int func_213(int iParam0)//Position - 0x8D58
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_41092C[iParam0 /*80*/].f_5 == 1;
	}
	return 0;
}

void func_214(int iParam0, int iParam1)//Position - 0x8D80
{
	Global_25897B = iParam1;
	Global_25897A = iParam0;
}

int func_215(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9)//Position - 0x8D94
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_41092C[iVar0 /*80*/].f_2 == 0)
		{
			if (!func_216())
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

int func_216()//Position - 0x8E8D
{
	if (unk_0x8ACB0C3FACC09467())
	{
		return unk_0xC9D803F7D7E10861();
	}
	return 0;
}

float func_217(int iParam0)//Position - 0x8EA4
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

int func_218(int iParam0)//Position - 0x8F5C
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_18C80F[iVar0 /*558*/];
	}
	return -1;
}

int func_219(int iParam0)//Position - 0x8F7B
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_18C80F[iVar0 /*558*/] != -1;
	}
	return 0;
}

int func_220(int iParam0, int iParam1)//Position - 0x8F9C
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

int func_221(float fParam0)//Position - 0x8FDD
{
	iLocal_114 = unk_0xB57F0B6D6209FF97(Local_103.f_1D);
	if (iLocal_114 >= 0)
	{
		if (unk_0x77FC50899603581D(iLocal_114))
		{
			if (unk_0x8FD30584EB38411B(iLocal_114) >= fParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_222()//Position - 0x9013
{
	iLocal_114 = unk_0xB57F0B6D6209FF97(Local_103.f_1D);
	if (iLocal_114 >= 0)
	{
		if (unk_0x77FC50899603581D(iLocal_114))
		{
			if (unk_0x8FD30584EB38411B(iLocal_114) >= 1f)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_223()//Position - 0x9048
{
	func_224();
}

int func_224()//Position - 0x9055
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!unk_0x89B5CBCE9D131B32(Local_103))
	{
		return 0;
	}
	if (func_389(Local_103))
	{
		if (!unk_0xFA30DFD0084E92FE(Local_105.f_35, 3))
		{
			unk_0x851D6A4006011A10(unk_0xE48AD7BF7762E114(Local_103));
			unk_0xF0059F27F7BB6680(&(Local_105.f_35), 3);
		}
		return 0;
	}
	switch (Local_103.f_3)
	{
		case 0:
			unk_0x2E9860A2B72187F5(unk_0xE48AD7BF7762E114(Local_103), 71, 1);
			break;
		
		case 1:
			if (!unk_0xFA30DFD0084E92FE(Local_103.f_17, 4) && !unk_0xFA30DFD0084E92FE(Local_103.f_17, 12))
			{
				if (unk_0xFA30DFD0084E92FE(Local_103.f_17, 13))
				{
					if (!unk_0xFA30DFD0084E92FE(Local_105.f_34, 17))
					{
						unk_0x16DCE907D1FFE3CC(unk_0xE48AD7BF7762E114(Local_103), 16);
						unk_0x56F2E1B5599188FA(unk_0xE48AD7BF7762E114(Local_103), unk_0xBC25C936A095B5BA(), -1, 0, 2);
						if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
						{
							func_230(10);
						}
						else if (unk_0xFA30DFD0084E92FE(Local_103.f_18, 0))
						{
							if (!unk_0xFA30DFD0084E92FE(Local_103.f_18, 11))
							{
								if (!unk_0xFA30DFD0084E92FE(Local_103.f_18, 12))
								{
									func_230(13);
								}
								else
								{
									func_230(20);
								}
							}
							else
							{
								func_230(17);
							}
							unk_0xF0059F27F7BB6680(&(Local_104[unk_0x6BAA0516CC970D99() /*10*/]), 25);
						}
						else if (!unk_0xFA30DFD0084E92FE(Local_103.f_18, 11))
						{
							if (!unk_0xFA30DFD0084E92FE(Local_103.f_18, 12))
							{
								func_230(0);
							}
							else
							{
								func_230(18);
							}
						}
						else
						{
							func_230(15);
						}
						unk_0xF0059F27F7BB6680(&(Local_105.f_34), 17);
					}
					else if (unk_0xF4FCC3C1048FF2AB(unk_0xE48AD7BF7762E114(Local_103), -875674219) != 1 && unk_0xF4FCC3C1048FF2AB(unk_0xE48AD7BF7762E114(Local_103), -875674219) != 0)
					{
						if (func_17(&uLocal_135, 5000, 0))
						{
							func_13(&uLocal_135);
							if (!iLocal_108)
							{
								unk_0x85DB484A637CEAB9(unk_0xE48AD7BF7762E114(Local_103), unk_0xBC25C936A095B5BA(), 10000);
							}
							unk_0x56F2E1B5599188FA(unk_0xE48AD7BF7762E114(Local_103), unk_0xBC25C936A095B5BA(), -1, 0, 2);
						}
					}
				}
			}
			unk_0x2E9860A2B72187F5(unk_0xE48AD7BF7762E114(Local_103), 71, 1);
			break;
		
		case 2:
			if (!unk_0xFA30DFD0084E92FE(Local_103.f_17, 7) && !unk_0xFA30DFD0084E92FE(Local_104[unk_0x6BAA0516CC970D99() /*10*/], 0))
			{
				iVar1 = unk_0xBC25C936A095B5BA();
				if (Local_103.f_20 > -1)
				{
					if (unk_0x05086B70D2CFEA6F(unk_0xCFA8A401AAD7BB5A(Local_103.f_20)))
					{
						iVar0 = unk_0x4ED43B67B3F05E0F(unk_0xCFA8A401AAD7BB5A(Local_103.f_20));
						iVar1 = unk_0xA95CF30C72EB526E(iVar0);
					}
				}
				if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
				{
					unk_0x56F2E1B5599188FA(unk_0xE48AD7BF7762E114(Local_103), iVar1, -1, 0, 2);
					unk_0x16DCE907D1FFE3CC(unk_0xE48AD7BF7762E114(Local_103), 16);
					unk_0xE896C0AD02364F2A(unk_0xE48AD7BF7762E114(Local_103), "mp_am_hold_up", "WARY_LOOP", 4f, -4f, -1, 49, 0, 0, 0, 0);
					unk_0xF0059F27F7BB6680(&(Local_104[unk_0x6BAA0516CC970D99() /*10*/]), 0);
				}
			}
			else if (unk_0xF4FCC3C1048FF2AB(unk_0xE48AD7BF7762E114(Local_103), -875674219) != 1 && unk_0xF4FCC3C1048FF2AB(unk_0xE48AD7BF7762E114(Local_103), -875674219) != 0)
			{
				if (func_17(&uLocal_135, 5000, 0))
				{
					iVar1 = unk_0xBC25C936A095B5BA();
					if (Local_103.f_20 > -1)
					{
						if (unk_0x05086B70D2CFEA6F(unk_0xCFA8A401AAD7BB5A(Local_103.f_20)))
						{
							iVar0 = unk_0x4ED43B67B3F05E0F(unk_0xCFA8A401AAD7BB5A(Local_103.f_20));
							iVar1 = unk_0xA95CF30C72EB526E(iVar0);
						}
					}
					func_13(&uLocal_135);
					unk_0x85DB484A637CEAB9(unk_0xE48AD7BF7762E114(Local_103), iVar1, 10000);
					unk_0x56F2E1B5599188FA(unk_0xE48AD7BF7762E114(Local_103), iVar1, -1, 0, 2);
				}
			}
			if (unk_0xFA30DFD0084E92FE(Local_103.f_17, 16))
			{
				unk_0x16DCE907D1FFE3CC(unk_0xE48AD7BF7762E114(Local_103), 16);
			}
			unk_0x2E9860A2B72187F5(unk_0xE48AD7BF7762E114(Local_103), 71, 1);
			break;
		
		case 3:
			if (!unk_0xFA30DFD0084E92FE(Local_105.f_34, 25))
			{
				if (unk_0xF4FCC3C1048FF2AB(unk_0xE48AD7BF7762E114(Local_103), 1920390111) != 0 && unk_0xF4FCC3C1048FF2AB(unk_0xE48AD7BF7762E114(Local_103), 1920390111) != 1)
				{
					unk_0x22321800954A532E(unk_0xE48AD7BF7762E114(Local_103), 1);
					unk_0xABA7AE40608505F2(unk_0xE48AD7BF7762E114(Local_103), 2, false);
					unk_0xABA7AE40608505F2(unk_0xE48AD7BF7762E114(Local_103), 8, true);
					unk_0xABA7AE40608505F2(unk_0xE48AD7BF7762E114(Local_103), 16, true);
					unk_0x16DCE907D1FFE3CC(unk_0xE48AD7BF7762E114(Local_103), 16);
					unk_0xC0FDCDB0DF739C50(unk_0xE48AD7BF7762E114(Local_103), Local_103.f_2A, -1);
					unk_0xF0059F27F7BB6680(&(Local_105.f_34), 25);
				}
			}
			break;
		
		case 4:
			if (!unk_0xFA30DFD0084E92FE(Local_103.f_17, 17) && !unk_0xFA30DFD0084E92FE(Local_104[unk_0x6BAA0516CC970D99() /*10*/], 3))
			{
				if (unk_0x0DE6397A2CB3EF75())
				{
					Global_267214.f_8 = 1;
				}
				iVar2 = unk_0xBC25C936A095B5BA();
				if (Global_267214.f_9 != func_184())
				{
					if (func_44(Global_267214.f_9, 1, 1))
					{
						iVar2 = unk_0xA95CF30C72EB526E(Global_267214.f_9);
					}
				}
				unk_0x56F2E1B5599188FA(unk_0xE48AD7BF7762E114(Local_103), iVar2, 30000, 0, 3);
				unk_0xA3860F0641D38992(unk_0xE48AD7BF7762E114(Local_103), "mood_stressed_1", 0);
				unk_0xF0059F27F7BB6680(&(Local_104[unk_0x6BAA0516CC970D99() /*10*/]), 3);
			}
			else
			{
				iLocal_114 = unk_0xB57F0B6D6209FF97(Local_103.f_1D);
				if (iLocal_114 >= 0)
				{
					if (unk_0x77FC50899603581D(iLocal_114))
					{
						fLocal_318 = (Local_103.f_21 + 0.6f);
						if (fLocal_318 < 0.75f)
						{
							fLocal_318 = 0.75f;
						}
						if (unk_0xFA30DFD0084E92FE(Local_103.f_18, 4))
						{
							fLocal_318 = (fLocal_318 + 0.25f);
						}
						if (fLocal_318 > 1.75f)
						{
							fLocal_318 = 1.75f;
						}
						unk_0x0528941193DBFFA9(iLocal_114, fLocal_318);
					}
				}
			}
			break;
		
		case 5:
			if (!unk_0xFA30DFD0084E92FE(Local_104[unk_0x6BAA0516CC970D99() /*10*/], 10))
			{
				if (unk_0xF4FCC3C1048FF2AB(unk_0xE48AD7BF7762E114(Local_103), 242628503) != 0 && unk_0xF4FCC3C1048FF2AB(unk_0xE48AD7BF7762E114(Local_103), 242628503) != 1)
				{
					if (!unk_0x2CDE18D6C89522AD(unk_0xE48AD7BF7762E114(Local_103)))
					{
						iLocal_114 = unk_0xB57F0B6D6209FF97(Local_103.f_1D);
						if ((iLocal_114 >= 0 && !unk_0x77FC50899603581D(iLocal_114)) || iLocal_114 < 0)
						{
							unk_0xA8E6405305C0D7DF(unk_0xE48AD7BF7762E114(Local_103), uLocal_119);
							unk_0x16DCE907D1FFE3CC(unk_0xE48AD7BF7762E114(Local_103), 16);
							unk_0x22321800954A532E(unk_0xE48AD7BF7762E114(Local_103), 1);
							unk_0xF0059F27F7BB6680(&(Local_104[unk_0x6BAA0516CC970D99() /*10*/]), 10);
						}
					}
				}
			}
			else if (unk_0xF4FCC3C1048FF2AB(unk_0xE48AD7BF7762E114(Local_103), -875674219) != 1 && unk_0xF4FCC3C1048FF2AB(unk_0xE48AD7BF7762E114(Local_103), -875674219) != 0)
			{
				if (func_17(&uLocal_135, 5000, 0))
				{
					func_13(&uLocal_135);
					iVar1 = unk_0xBC25C936A095B5BA();
					if (Local_103.f_20 > -1)
					{
						if (unk_0x05086B70D2CFEA6F(unk_0xCFA8A401AAD7BB5A(Local_103.f_20)))
						{
							iVar0 = unk_0x4ED43B67B3F05E0F(unk_0xCFA8A401AAD7BB5A(Local_103.f_20));
							iVar1 = unk_0xA95CF30C72EB526E(iVar0);
						}
					}
					unk_0x85DB484A637CEAB9(unk_0xE48AD7BF7762E114(Local_103), iVar1, 10000);
					unk_0x56F2E1B5599188FA(unk_0xE48AD7BF7762E114(Local_103), unk_0xBC25C936A095B5BA(), -1, 0, 2);
				}
			}
			break;
		
		case 6:
			if (!unk_0xFA30DFD0084E92FE(Local_104[unk_0x6BAA0516CC970D99() /*10*/], 10))
			{
				if ((iLocal_114 < 0 || !unk_0x77FC50899603581D(iLocal_114)) || unk_0x8FD30584EB38411B(iLocal_114) >= 0.95f)
				{
					func_229();
					iVar1 = unk_0xBC25C936A095B5BA();
					if (Local_103.f_20 > -1)
					{
						if (unk_0x05086B70D2CFEA6F(unk_0xCFA8A401AAD7BB5A(Local_103.f_20)))
						{
							iVar0 = unk_0x4ED43B67B3F05E0F(unk_0xCFA8A401AAD7BB5A(Local_103.f_20));
							iVar1 = unk_0xA95CF30C72EB526E(iVar0);
						}
					}
					unk_0x2A2F7485FD2B9A29(unk_0xE48AD7BF7762E114(Local_103), -1, iVar1, -1, 1);
					unk_0x2EB4D46478766D87(unk_0xE48AD7BF7762E114(Local_103), 0, 0);
					unk_0x16DCE907D1FFE3CC(unk_0xE48AD7BF7762E114(Local_103), 16);
					unk_0x22321800954A532E(unk_0xE48AD7BF7762E114(Local_103), 1);
					unk_0xF0059F27F7BB6680(&(Local_104[unk_0x6BAA0516CC970D99() /*10*/]), 10);
				}
			}
			break;
		
		case 7:
			if (unk_0xF4FCC3C1048FF2AB(unk_0xE48AD7BF7762E114(Local_103), -1442466670) != 0 && unk_0xF4FCC3C1048FF2AB(unk_0xE48AD7BF7762E114(Local_103), -1442466670) != 1)
			{
				if (!func_175())
				{
					func_228();
					unk_0xA4E856A8CD53B8DF(unk_0xE48AD7BF7762E114(Local_103));
					unk_0xB90F3BE2A1EF63DB(unk_0xE48AD7BF7762E114(Local_103), 20f, 0);
					func_230(4);
				}
			}
			break;
		
		case 8:
			if (!unk_0xFA30DFD0084E92FE(Local_104[unk_0x6BAA0516CC970D99() /*10*/], 9))
			{
				func_229();
				iLocal_114 = unk_0xB57F0B6D6209FF97(Local_103.f_1D);
				if ((iLocal_114 >= 0 && !unk_0x77FC50899603581D(iLocal_114)) || iLocal_114 < 0)
				{
					if ((!unk_0xFA30DFD0084E92FE(Local_103.f_17, 27) && !func_36()) && !func_35())
					{
						if (unk_0xFA30DFD0084E92FE(Local_103.f_18, 2))
						{
							if (!unk_0xFA30DFD0084E92FE(Local_103.f_18, 3))
							{
								unk_0xA8E6405305C0D7DF(unk_0xE48AD7BF7762E114(Local_103), uLocal_121);
								iVar3 = 1;
							}
							else
							{
								func_228();
								unk_0xA8E6405305C0D7DF(unk_0xE48AD7BF7762E114(Local_103), uLocal_122);
								iVar3 = 1;
							}
						}
					}
					else
					{
						unk_0xAB43C54784946B9F(unk_0xE48AD7BF7762E114(Local_103), vLocal_112, 250f, -1, 1, 0);
						iVar3 = 1;
					}
					if (iVar3 == 1)
					{
						func_230(25);
						unk_0x22321800954A532E(unk_0xE48AD7BF7762E114(Local_103), 1);
						func_6(Local_105.f_32, 1, func_7());
						unk_0xF0059F27F7BB6680(&(Local_104[unk_0x6BAA0516CC970D99() /*10*/]), 9);
					}
				}
			}
			else if (!unk_0xFA30DFD0084E92FE(Local_104[unk_0x6BAA0516CC970D99() /*10*/], 19))
			{
				iVar4 = unk_0x7E7999013BDD429A(unk_0xE48AD7BF7762E114(Local_103));
				if (iVar4 == 3)
				{
					unk_0xD999D66C5AFA4BE3(unk_0xE48AD7BF7762E114(Local_103));
					unk_0xF0059F27F7BB6680(&(Local_104[unk_0x6BAA0516CC970D99() /*10*/]), 19);
				}
				else if (iVar4 == 2)
				{
					unk_0xA4E856A8CD53B8DF(unk_0xE48AD7BF7762E114(Local_103));
					if (!unk_0xFA30DFD0084E92FE(Local_103.f_18, 3))
					{
						unk_0xA8E6405305C0D7DF(unk_0xE48AD7BF7762E114(Local_103), uLocal_123);
					}
					else
					{
						unk_0xB90F3BE2A1EF63DB(unk_0xE48AD7BF7762E114(Local_103), 20f, 0);
					}
					unk_0xF0059F27F7BB6680(&(Local_104[unk_0x6BAA0516CC970D99() /*10*/]), 19);
				}
			}
			break;
	}
	func_225();
	return 1;
}

void func_225()//Position - 0x992C
{
	if ((Local_103.f_3 != 8 && Local_103.f_3 != 7) && Local_103.f_2 == 3)
	{
		if ((((!unk_0xFA30DFD0084E92FE(Local_103.f_17, 14) || !unk_0xFA30DFD0084E92FE(Local_103.f_17, 15)) || !unk_0xFA30DFD0084E92FE(Local_103.f_17, 22)) || !unk_0xFA30DFD0084E92FE(Local_103.f_17, 23)) || !unk_0xFA30DFD0084E92FE(Local_103.f_17, 30))
		{
			iLocal_114 = unk_0xB57F0B6D6209FF97(Local_103.f_1D);
			if (iLocal_114 >= 0)
			{
				if (unk_0x77FC50899603581D(iLocal_114))
				{
					if (!func_175())
					{
						if (!unk_0xFA30DFD0084E92FE(Local_103.f_17, 14) && !unk_0xFA30DFD0084E92FE(Local_104[unk_0x6BAA0516CC970D99() /*10*/], 6))
						{
							func_230(2);
							unk_0xF0059F27F7BB6680(&(Local_104[unk_0x6BAA0516CC970D99() /*10*/]), 6);
						}
						if (!unk_0xFA30DFD0084E92FE(Local_103.f_17, 15) && !unk_0xFA30DFD0084E92FE(Local_104[unk_0x6BAA0516CC970D99() /*10*/], 7))
						{
							if (unk_0x8FD30584EB38411B(iLocal_114) > 0.87f)
							{
								func_230(3);
								unk_0xF0059F27F7BB6680(&(Local_104[unk_0x6BAA0516CC970D99() /*10*/]), 7);
							}
						}
						if (!unk_0xFA30DFD0084E92FE(Local_103.f_17, 22) && !unk_0xFA30DFD0084E92FE(Local_104[unk_0x6BAA0516CC970D99() /*10*/], 22))
						{
							if (unk_0xFA30DFD0084E92FE(Local_103.f_17, 24) && !func_175())
							{
								func_230(11);
								unk_0xF0059F27F7BB6680(&(Local_104[unk_0x6BAA0516CC970D99() /*10*/]), 22);
							}
						}
						if (!unk_0xFA30DFD0084E92FE(Local_103.f_17, 23) && !unk_0xFA30DFD0084E92FE(Local_104[unk_0x6BAA0516CC970D99() /*10*/], 23))
						{
							if (unk_0xFA30DFD0084E92FE(Local_103.f_17, 25) && !func_175())
							{
								func_230(12);
								unk_0xF0059F27F7BB6680(&(Local_104[unk_0x6BAA0516CC970D99() /*10*/]), 23);
							}
						}
					}
				}
			}
		}
		if (!unk_0xFA30DFD0084E92FE(Local_103.f_17, 9))
		{
			if (!unk_0xFA30DFD0084E92FE(Local_103.f_17, 26) && !unk_0xFA30DFD0084E92FE(Local_104[unk_0x6BAA0516CC970D99() /*10*/], 24))
			{
				if (unk_0xFA30DFD0084E92FE(Local_103.f_17, 7))
				{
					if (!func_175())
					{
						if (!unk_0xFA30DFD0084E92FE(Local_103.f_18, 11))
						{
							if (!unk_0xFA30DFD0084E92FE(Local_103.f_18, 12))
							{
								func_230(1);
							}
							else
							{
								func_230(19);
							}
						}
						else
						{
							func_230(16);
						}
						unk_0xF0059F27F7BB6680(&(Local_104[unk_0x6BAA0516CC970D99() /*10*/]), 24);
						return;
					}
					else
					{
						func_226();
						return;
					}
				}
			}
			if (((!unk_0xFA30DFD0084E92FE(Local_103.f_17, 30) && !unk_0xFA30DFD0084E92FE(Local_104[unk_0x6BAA0516CC970D99() /*10*/], 25)) && !unk_0xFA30DFD0084E92FE(Local_103.f_17, 7)) && !unk_0xFA30DFD0084E92FE(Local_103.f_17, 4))
			{
				if (unk_0xFA30DFD0084E92FE(Local_103.f_18, 0) && !func_175())
				{
					if ((unk_0xFA30DFD0084E92FE(Local_103.f_17, 7) && unk_0xFA30DFD0084E92FE(Local_103.f_17, 4)) || (!unk_0xFA30DFD0084E92FE(Local_103.f_17, 7) && !unk_0xFA30DFD0084E92FE(Local_103.f_17, 4)))
					{
						if (!unk_0xFA30DFD0084E92FE(Local_103.f_18, 11))
						{
							if (!unk_0xFA30DFD0084E92FE(Local_103.f_18, 12))
							{
								func_230(13);
							}
							else
							{
								func_230(20);
							}
						}
						else
						{
							func_230(17);
						}
						unk_0xF0059F27F7BB6680(&(Local_104[unk_0x6BAA0516CC970D99() /*10*/]), 25);
						return;
					}
				}
			}
			if (!unk_0xFA30DFD0084E92FE(Local_103.f_17, 31) && !unk_0xFA30DFD0084E92FE(Local_104[unk_0x6BAA0516CC970D99() /*10*/], 26))
			{
				if (unk_0xFA30DFD0084E92FE(Local_103.f_18, 1) && !func_175())
				{
					func_230(14);
					unk_0xF0059F27F7BB6680(&(Local_104[unk_0x6BAA0516CC970D99() /*10*/]), 26);
					return;
				}
			}
			if (!unk_0xFA30DFD0084E92FE(Local_103.f_18, 9) && !unk_0xFA30DFD0084E92FE(Local_104[unk_0x6BAA0516CC970D99() /*10*/], 31))
			{
				if (unk_0xFA30DFD0084E92FE(Local_103.f_18, 8) && !func_175())
				{
					func_230(22);
					unk_0xF0059F27F7BB6680(&(Local_104[unk_0x6BAA0516CC970D99() /*10*/]), 31);
					return;
				}
			}
			if (!unk_0xFA30DFD0084E92FE(Local_103.f_1, 3) && !unk_0xFA30DFD0084E92FE(Local_104[unk_0x6BAA0516CC970D99() /*10*/].f_1, 3))
			{
				if (unk_0xFA30DFD0084E92FE(Local_103.f_1, 2) && !func_175())
				{
					func_230(24);
					unk_0xF0059F27F7BB6680(&(Local_104[unk_0x6BAA0516CC970D99() /*10*/].f_1), 3);
					return;
				}
			}
			if (!unk_0xFA30DFD0084E92FE(Local_103.f_18, 14) && !unk_0xFA30DFD0084E92FE(Local_104[unk_0x6BAA0516CC970D99() /*10*/], 20))
			{
				if (unk_0xFA30DFD0084E92FE(Local_103.f_18, 13) && !func_175())
				{
					func_230(23);
					unk_0xF0059F27F7BB6680(&(Local_104[unk_0x6BAA0516CC970D99() /*10*/]), 20);
					return;
				}
			}
		}
	}
	if (!unk_0xFA30DFD0084E92FE(Local_103.f_18, 6) && !unk_0xFA30DFD0084E92FE(Local_104[unk_0x6BAA0516CC970D99() /*10*/], 29))
	{
		if (unk_0xFA30DFD0084E92FE(Local_103.f_18, 5))
		{
			if (!func_175())
			{
				func_230(21);
				unk_0xF0059F27F7BB6680(&(Local_104[unk_0x6BAA0516CC970D99() /*10*/]), 29);
				return;
			}
		}
	}
}

void func_226()//Position - 0x9DCB
{
	Global_394A = 0;
	func_227();
}

void func_227()//Position - 0x9DDB
{
	unk_0x5C7DC611411E2CF9();
	Global_41AB = 0;
	if (unk_0xE6711F601F11B66B())
	{
		unk_0x1E08809A5041F85B(false);
		Global_3DB8 = 6;
	}
}

void func_228()//Position - 0x9DFC
{
	int iVar0;
	
	iVar0 = unk_0x491B2241281A03B7(0, 12);
	if (iVar0 < 3)
	{
		unk_0x7A853DA478E4882E(unk_0xE48AD7BF7762E114(Local_103), joaat("weapon_pistol"), 25000, 0);
		unk_0xFC3C88E2313FA926(unk_0xE48AD7BF7762E114(Local_103), unk_0x491B2241281A03B7(10, 35));
	}
	else if (iVar0 < 6)
	{
		unk_0x7A853DA478E4882E(unk_0xE48AD7BF7762E114(Local_103), joaat("weapon_combatpistol"), 25000, 0);
		unk_0xFC3C88E2313FA926(unk_0xE48AD7BF7762E114(Local_103), unk_0x491B2241281A03B7(15, 40));
	}
	else if (iVar0 == 6)
	{
		unk_0x7A853DA478E4882E(unk_0xE48AD7BF7762E114(Local_103), joaat("weapon_microsmg"), 25000, 0);
		unk_0xFC3C88E2313FA926(unk_0xE48AD7BF7762E114(Local_103), unk_0x491B2241281A03B7(10, 25));
	}
	else if (iVar0 == 7)
	{
		unk_0x7A853DA478E4882E(unk_0xE48AD7BF7762E114(Local_103), joaat("weapon_combatmg"), 25000, 0);
		unk_0xFC3C88E2313FA926(unk_0xE48AD7BF7762E114(Local_103), unk_0x491B2241281A03B7(5, 15));
	}
	else if (iVar0 == 8)
	{
		unk_0x7A853DA478E4882E(unk_0xE48AD7BF7762E114(Local_103), joaat("weapon_bat"), 25000, 0);
		unk_0xFC3C88E2313FA926(unk_0xE48AD7BF7762E114(Local_103), unk_0x491B2241281A03B7(20, 40));
	}
	else if (iVar0 == 9)
	{
		unk_0x7A853DA478E4882E(unk_0xE48AD7BF7762E114(Local_103), joaat("weapon_assaultrifle"), 25000, 0);
		unk_0xFC3C88E2313FA926(unk_0xE48AD7BF7762E114(Local_103), unk_0x491B2241281A03B7(5, 30));
	}
	else if (iVar0 == 10)
	{
		unk_0x7A853DA478E4882E(unk_0xE48AD7BF7762E114(Local_103), joaat("weapon_sawnoffshotgun"), 25000, 0);
		unk_0xFC3C88E2313FA926(unk_0xE48AD7BF7762E114(Local_103), unk_0x491B2241281A03B7(5, 20));
	}
	else
	{
		unk_0x7A853DA478E4882E(unk_0xE48AD7BF7762E114(Local_103), joaat("weapon_pumpshotgun"), 25000, 0);
		unk_0xFC3C88E2313FA926(unk_0xE48AD7BF7762E114(Local_103), unk_0x491B2241281A03B7(10, 25));
	}
	func_6(Local_105.f_32, 1, func_7());
	unk_0x4106FAF8AA1D69D5(unk_0xE48AD7BF7762E114(Local_103), Global_180797);
	unk_0xF7CDBCD11F31B71A(unk_0xE48AD7BF7762E114(Local_103), 1);
	unk_0x54480313BB3E8DD0(unk_0xE48AD7BF7762E114(Local_103), 1);
	unk_0xE95574194EEDAEF7(unk_0xE48AD7BF7762E114(Local_103), vLocal_111, 20f, 0, 0);
	unk_0x22321800954A532E(unk_0xE48AD7BF7762E114(Local_103), 1);
}

void func_229()//Position - 0x9FC2
{
	iLocal_114 = unk_0xB57F0B6D6209FF97(Local_103.f_1D);
	if (iLocal_114 >= 0)
	{
		if (unk_0x77FC50899603581D(iLocal_114))
		{
			unk_0x913ADDC330AF164E(Local_103.f_1D);
		}
	}
}

void func_230(int iParam0)//Position - 0x9FEE
{
	struct<2> Var0;
	int iVar1;
	
	if (unk_0xFA30DFD0084E92FE(Local_103.f_17, 13))
	{
		if (!func_389(Local_103))
		{
			if (unk_0x89B5CBCE9D131B32(Local_103) || (!unk_0xDD5EE7D9FC37FA16(Local_103) && unk_0x0DE6397A2CB3EF75()))
			{
				if (!unk_0x2CDE18D6C89522AD(unk_0xE48AD7BF7762E114(Local_103)))
				{
					if (Local_103.f_2D == 0)
					{
						StringCopy(&Var0, "RB_SH2", 16);
					}
					else if (Local_103.f_2D == 1)
					{
						StringCopy(&Var0, "RB_12_F", 16);
					}
					else
					{
						StringCopy(&Var0, "RB_SH3", 16);
					}
					StringIntConCat(&Var0, Local_103.f_1F, 16);
					StringIntConCat(&Var0, iParam0, 16);
					if (unk_0x3362CDE8460ED38B(&Var0, "RB_SH241"))
					{
						if (unk_0x9CDD10270A1ACF6F(unk_0xBC25C936A095B5BA(), &iVar1, 1))
						{
							if ((((((iVar1 == joaat("weapon_unarmed") || iVar1 == 0) || iVar1 == joaat("object")) || iVar1 == joaat("weapon_flare")) || iVar1 == joaat("weapon_snowball")) || func_248(iVar1)) || func_247(iVar1))
							{
								StringCopy(&Var0, "RB_SH211", 16);
							}
						}
					}
					func_388(&uLocal_151, 3, unk_0xE48AD7BF7762E114(Local_103), &(Local_103.f_2E), 1, 0);
					switch (iParam0)
					{
						case 0:
							unk_0x7E80A36CD8BDF4D1(unk_0xE48AD7BF7762E114(Local_103), "SHOP_GREET", &(Local_103.f_32), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 1:
							func_231(&uLocal_151, "RB_12AU", &Var0, 12, 1, 0, 1);
							break;
						
						case 2:
							func_231(&uLocal_151, "RB_12AU", &Var0, 12, 1, 0, 1);
							break;
						
						case 3:
							func_231(&uLocal_151, "RB_12AU", &Var0, 12, 1, 0, 1);
							break;
						
						case 4:
							unk_0x7E80A36CD8BDF4D1(unk_0xE48AD7BF7762E114(Local_103), "SHOP_BRAVE", &(Local_103.f_32), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 10:
							unk_0x7E80A36CD8BDF4D1(unk_0xE48AD7BF7762E114(Local_103), "SHOP_REMOVE_VEHICLE", &(Local_103.f_32), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 11:
							unk_0x7E80A36CD8BDF4D1(unk_0xE48AD7BF7762E114(Local_103), "SHOP_REACT_TO_SHOUT", &(Local_103.f_32), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 12:
							unk_0x7E80A36CD8BDF4D1(unk_0xE48AD7BF7762E114(Local_103), "SHOP_HURRYING", &(Local_103.f_32), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 13:
							unk_0x7E80A36CD8BDF4D1(unk_0xE48AD7BF7762E114(Local_103), "SHOP_NO_COPS", &(Local_103.f_32), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 14:
							unk_0x7E80A36CD8BDF4D1(unk_0xE48AD7BF7762E114(Local_103), "SHOP_THREATENED", &(Local_103.f_32), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 15:
							unk_0x7E80A36CD8BDF4D1(unk_0xE48AD7BF7762E114(Local_103), "SHOP_GREET_START", &(Local_103.f_32), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 16:
							unk_0x7E80A36CD8BDF4D1(unk_0xE48AD7BF7762E114(Local_103), "SHOP_SCARED_START", &(Local_103.f_32), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 17:
							unk_0x7E80A36CD8BDF4D1(unk_0xE48AD7BF7762E114(Local_103), "SHOP_NO_COPS_START", &(Local_103.f_32), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 18:
							unk_0x7E80A36CD8BDF4D1(unk_0xE48AD7BF7762E114(Local_103), "SHOP_GREET_END", &(Local_103.f_32), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 19:
							unk_0x7E80A36CD8BDF4D1(unk_0xE48AD7BF7762E114(Local_103), "SHOP_SCARED_END", &(Local_103.f_32), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 20:
							unk_0x7E80A36CD8BDF4D1(unk_0xE48AD7BF7762E114(Local_103), "SHOP_NO_COPS_END", &(Local_103.f_32), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 21:
							unk_0x7E80A36CD8BDF4D1(unk_0xE48AD7BF7762E114(Local_103), "SHOP_COPS_ARRIVED", &(Local_103.f_32), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 22:
							unk_0x7E80A36CD8BDF4D1(unk_0xE48AD7BF7762E114(Local_103), "SHOP_SELL", &(Local_103.f_32), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 23:
							unk_0x7E80A36CD8BDF4D1(unk_0xE48AD7BF7762E114(Local_103), "SHOP_NO_ENTRY", &(Local_103.f_32), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 24:
							unk_0x7E80A36CD8BDF4D1(unk_0xE48AD7BF7762E114(Local_103), "SHOP_STEAL", &(Local_103.f_32), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 25:
							unk_0x7E80A36CD8BDF4D1(unk_0xE48AD7BF7762E114(Local_103), "SCREAM_PANIC", &(Local_103.f_32), "SPEECH_PARAMS_FORCE", 1);
							break;
						}
					}
				}
			}
	}
}

int func_231(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xA39F
{
	func_246(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_232(sParam2, iParam3, 0);
}

int func_232(char* sParam0, int iParam1, bool bParam2)//Position - 0xA3ED
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
					func_245();
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
		if (func_244(8, -1))
		{
			return 0;
		}
		Global_3E04 = { Global_3DFE };
		func_243();
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
				func_237();
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
				if (func_236())
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
			if (func_235())
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
			func_234();
			Global_3DC2 = bParam2;
		}
		Global_3DBA = iParam1;
		StringCopy(&Global_3C3B, sParam0, 24);
		Global_394A = 0;
		func_233();
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
		func_245();
	}
	return 0;
}

void func_233()//Position - 0xA6B9
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

void func_234()//Position - 0xA6EB
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

int func_235()//Position - 0xA780
{
	if (Global_389D.f_1 == 1 || Global_389D.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_236()//Position - 0xA7A7
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

void func_237()//Position - 0xA840
{
	if (func_126(14))
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
		Global_389D = func_238();
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

var func_238()//Position - 0xA8E2
{
	func_239();
	return Global_19B04.f_932.f_21B.f_10CD;
}

void func_239()//Position - 0xA8FB
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_242(Global_19B04.f_932.f_21B.f_10CD) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_241(unk_0xBC25C936A095B5BA());
			if (func_240(iVar0) && (!func_126(14) || Global_196EB))
			{
				if (Global_19B04.f_932.f_21B.f_10CD != iVar0 && func_240(Global_19B04.f_932.f_21B.f_10CD))
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

bool func_240(int iParam0)//Position - 0xA9F8
{
	return iParam0 < 3;
}

int func_241(int iParam0)//Position - 0xAA04
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_242(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_242(int iParam0)//Position - 0xAA41
{
	if (func_240(iParam0))
	{
		return Global_19B04.f_6D75[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_243()//Position - 0xAA6B
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

bool func_244(int iParam0, int iParam1)//Position - 0xAAC3
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

void func_245()//Position - 0xAAFE
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

void func_246(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0xAB55
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

int func_247(int iParam0)//Position - 0xABAB
{
	switch (iParam0)
	{
		case joaat("weapon_molotov"):
		case joaat("weapon_smokegrenade"):
		case joaat("weapon_grenade"):
		case joaat("weapon_stickybomb"):
		case joaat("weapon_proxmine"):
			return 1;
			break;
		
		case -1169823560:
			return 1;
			break;
	}
	return 0;
}

int func_248(int iParam0)//Position - 0xABED
{
	switch (iParam0)
	{
		case joaat("weapon_knife"):
		case joaat("weapon_bat"):
		case joaat("weapon_nightstick"):
		case joaat("weapon_hammer"):
		case joaat("weapon_golfclub"):
		case joaat("weapon_crowbar"):
		case joaat("weapon_bottle"):
		case joaat("weapon_dagger"):
		case joaat("weapon_knuckle"):
		case joaat("weapon_hatchet"):
		case joaat("weapon_machete"):
		case joaat("weapon_switchblade"):
			return 1;
			break;
		
		case -853065399:
		case -1810795771:
		case 419712736:
			return 1;
			break;
		
		case 940833800:
			return 1;
	}
	return 0;
}

void func_249()//Position - 0xAC6F
{
	int iVar0;
	
	iVar0 = unk_0xBC93E1C9C8F877D9(false, 0);
	if (Local_103.f_2B != iVar0)
	{
		if (Local_103.f_2B < iVar0 || func_256(Local_103.f_2B, 0, 1))
		{
			unk_0xD1CF2F876BAD2600(Local_103.f_2B);
		}
	}
	iVar0 = unk_0x2B3A16ECF7925A20(false, 0);
	if (Local_103.f_2C != iVar0)
	{
		if (Local_103.f_2C < iVar0 || func_250(Local_103.f_2C, 0, 1))
		{
			unk_0x38A34821FCF0B79E(Local_103.f_2C);
		}
	}
}

int func_250(int iParam0, bool bParam1, bool bParam2)//Position - 0xACDD
{
	return func_251(2, iParam0, 1, bParam1, bParam2);
}

int func_251(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0xACF1
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xFA30DFD0084E92FE(Global_14FADF, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_255(iParam0) - func_254(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_254(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_255(iParam0) - func_253(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_254(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_255(iParam0) - func_254(iParam0, 1));
		}
		if (!bParam4 && Global_18402B[unk_0xB5CEFD608600A09F() /*770*/] != 3)
		{
			iVar1 = (iVar1 - func_252(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_252(int iParam0)//Position - 0xADBA
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

int func_253(int iParam0)//Position - 0xADF4
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

int func_254(int iParam0, bool bParam1)//Position - 0xAE3A
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

int func_255(int iParam0)//Position - 0xAED7
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

int func_256(int iParam0, bool bParam1, bool bParam2)//Position - 0xAF17
{
	return func_251(0, iParam0, 1, bParam1, bParam2);
}

void func_257()//Position - 0xAF2B
{
	float fVar0;
	int iVar1;
	bool bVar2;
	vector3 vVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	
	switch (iLocal_336)
	{
		case 0:
			if (!unk_0xFA30DFD0084E92FE(Local_105.f_35, 0))
			{
				if (unk_0x7FFE36DB9042AF23(Local_103.f_E))
				{
					if (func_263(vLocal_342))
					{
						vLocal_342 = { unk_0xA4455714F3DCE207(unk_0x370629AFF3A5C45C(Local_103.f_E), 0f, -0.5f, 0f) };
						unk_0xF0059F27F7BB6680(&(Local_105.f_35), 0);
					}
				}
			}
			if ((((unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), vLocal_342, 0.5f, 0.5f, 1f, 0, 1, 0) && (func_389(Local_103) || Local_103.f_3 > 7)) && !unk_0xFA30DFD0084E92FE(Local_103.f_17, 20)) && !unk_0xFA30DFD0084E92FE(Local_103.f_17, 11)) && unk_0x90629C6D0C640733(vLocal_115, 1.5f) == 0)
			{
				if (((((!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0) && !func_172(0)) && !func_262()) && !unk_0xE186ACC7BE9B244E()) && !func_37(unk_0xB5CEFD608600A09F(), 146)) && unk_0x7FFE36DB9042AF23(Local_103.f_E))
				{
					func_152("FHU_MANR", -1);
					Global_267214.f_15FB.f_4 = 1;
					iLocal_336 = 1;
				}
			}
			break;
		
		case 1:
			if (((((!unk_0xFA30DFD0084E92FE(Local_103.f_18, 16) && !unk_0xFA30DFD0084E92FE(Local_104[unk_0x6BAA0516CC970D99() /*10*/], 12)) && !unk_0xFA30DFD0084E92FE(Local_103.f_17, 20)) && !unk_0xFA30DFD0084E92FE(Local_103.f_17, 11)) && unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), vLocal_342, 0.5f, 0.5f, 1f, 0, 1, 0)) && (!func_142(unk_0xB5CEFD608600A09F()) || func_93(unk_0xB5CEFD608600A09F()) == 154))
			{
				if (((unk_0x694514BD37EC4E94(0, 51) && !func_261(0)) && !func_262()) && !unk_0xE186ACC7BE9B244E())
				{
					if (func_150("FHU_MANR"))
					{
						unk_0x7456702622C62EA0(1);
					}
					unk_0xDDCAA2E64649E083(unk_0xFC1CAE18F3ECBF2D(), false, 640);
					unk_0xF0059F27F7BB6680(&(Local_104[unk_0x6BAA0516CC970D99() /*10*/]), 12);
					iLocal_336 = 2;
				}
				else if ((unk_0x105601648511CC64() % 1000) < 50)
				{
					if (iLocal_341 == 0)
					{
						func_258(&iLocal_341, 4, "FHU_MANR", 0, 0, 0, 0);
					}
				}
			}
			else if (func_150("FHU_MANR"))
			{
				unk_0x7456702622C62EA0(1);
			}
			break;
		
		case 2:
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				vVar3 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) };
				vLocal_342.z = (vVar3.z - 1f);
				unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), vLocal_342, 1, 0, 0, 1);
				unk_0x019CE76D5286C95C(unk_0xBC25C936A095B5BA(), unk_0xFDC254CE02DB0919((vLocal_129.x - vLocal_342.x), (vLocal_129.y - vLocal_342.y)));
				unk_0x02DAF06EA4F08219(&uVar4);
				unk_0xC5A6DFE2B8987B17(&uVar4);
				unk_0xE896C0AD02364F2A(0, "oddjobs@shop_robbery@rob_till", "enter", 8f, -8f, 4000, 262144, 0, 0, 0, 0);
				unk_0xE896C0AD02364F2A(0, "oddjobs@shop_robbery@rob_till", "loop", 8f, -8f, 4000, 262145, 0, 0, 0, 0);
				unk_0xE896C0AD02364F2A(0, "oddjobs@shop_robbery@rob_till", "exit", 8f, -8f, 4000, 262144, 0, 0, 0, 0);
				unk_0x535008C596714F9E(uVar4);
				unk_0xA8E6405305C0D7DF(unk_0xBC25C936A095B5BA(), uVar4);
				unk_0x69194304DB679A9C(unk_0xBC25C936A095B5BA(), 0, -1, 0);
				unk_0x2E9860A2B72187F5(unk_0xBC25C936A095B5BA(), 200, 1);
				unk_0x2E9860A2B72187F5(unk_0xBC25C936A095B5BA(), 71, 1);
				bVar2 = unk_0x9CDD10270A1ACF6F(unk_0xBC25C936A095B5BA(), &iLocal_340, 1);
				if (bVar2)
				{
					unk_0x8E25082A46F87892(unk_0xBC25C936A095B5BA(), joaat("weapon_unarmed"), true);
				}
				unk_0x2EB4D46478766D87(unk_0xBC25C936A095B5BA(), 0, 0);
				if (!unk_0xEF0E25DA0CB6E8FF(iLocal_337))
				{
					iLocal_337 = unk_0x585DE1CBEEB2D27D(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, 0, 2);
				}
				unk_0x5BB58B645F7051F4(iLocal_337, unk_0xBC25C936A095B5BA(), -0.1878f, 3.0635f, 0.68f, 1);
				unk_0xA65BD9EDFDFA4D71(iLocal_337, unk_0xBC25C936A095B5BA(), -0.0129f, 0.0927f, 0.3008f, 1);
				unk_0x9DF315A9EFFF87AC(iLocal_337, 35f);
				unk_0x2FB83B8BD6C05FD2(iLocal_337, "HAND_SHAKE", 0.1f);
				unk_0x348665177DBFB93B(iLocal_337, true);
				unk_0x062C9995BFD27B2A(true, 0, 3000, 1, 0, 0);
			}
			iLocal_336 = 3;
			break;
		
		case 3:
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				if (!unk_0xEF0E25DA0CB6E8FF(iLocal_338))
				{
					iLocal_338 = unk_0x585DE1CBEEB2D27D(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, 0, 2);
				}
				unk_0x5BB58B645F7051F4(iLocal_338, unk_0xBC25C936A095B5BA(), -1.0346f, 2.9183f, 0.68f, 1);
				unk_0xA65BD9EDFDFA4D71(iLocal_338, unk_0xBC25C936A095B5BA(), -0.0574f, 0.1074f, 0.3008f, 1);
				unk_0x9DF315A9EFFF87AC(iLocal_338, 35f);
				unk_0x2FB83B8BD6C05FD2(iLocal_338, "HAND_SHAKE", 0.1f);
				unk_0xAE099C1ADC89C331(iLocal_338, iLocal_337, 6000, 1, 1);
				unk_0x2E9860A2B72187F5(unk_0xBC25C936A095B5BA(), 71, 1);
				unk_0x69194304DB679A9C(unk_0xBC25C936A095B5BA(), 0, -1, 0);
				unk_0x2E9860A2B72187F5(unk_0xBC25C936A095B5BA(), 200, 1);
			}
			iLocal_336 = 4;
			break;
		
		case 4:
			if (!unk_0x16BE1286447174A9(iLocal_338))
			{
				iLocal_336 = 5;
			}
			else if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x96044E39418AAF17(unk_0xBC25C936A095B5BA(), "oddjobs@shop_robbery@rob_till", "loop", 3))
				{
					fVar0 = unk_0x4A3B2CF8BADDD74E(unk_0xBC25C936A095B5BA(), "oddjobs@shop_robbery@rob_till", "loop");
					if ((fVar0 > 0.374f && fVar0 <= 0.484f) || (fVar0 > 0.824f && fVar0 <= 0.92f))
					{
						if (!iLocal_339)
						{
							iVar5 = SYSTEM::ROUND(((IntToFloat(iLocal_132) * 0.75f) / 4f));
							iVar6 = SYSTEM::ROUND(((IntToFloat(iLocal_133) * 0.75f) / 4f));
							iVar1 = unk_0x491B2241281A03B7(iVar5, iVar6 + 1);
							iVar1 = func_220(iVar1, 1);
							if (iVar1 > (Global_40001.f_A6 / 4))
							{
								iVar1 = (Global_40001.f_A6 / 4);
							}
							if (func_219(unk_0xB5CEFD608600A09F()) && func_217(func_218(unk_0xB5CEFD608600A09F())) < 1f)
							{
								if (Global_40001.f_1082 > 1f)
								{
									Global_40001.f_1082 = 1f;
								}
								iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_40001.f_1082));
							}
							if (iVar1 > 0)
							{
								if (func_216())
								{
									func_207(1734805203, iVar1, &uVar7, 0, 0, 0);
								}
								else
								{
									func_203(iVar1, 1, 1, 1092616192);
									unk_0x5839B5C3D05A7348(iVar1);
								}
							}
							Global_267214.f_15FB = (Global_267214.f_15FB + iVar1);
							iLocal_335 = (iLocal_335 + iVar1);
							func_191(1, iLocal_335);
							unk_0xC4BA30B532FE260F(-1, "ROBBERY_MONEY_TOTAL", "HUD_FRONTEND_CUSTOM_SOUNDSET", 1);
							iLocal_339 = 1;
						}
					}
					else if (iLocal_339)
					{
						iLocal_339 = 0;
					}
				}
				unk_0x2E9860A2B72187F5(unk_0xBC25C936A095B5BA(), 71, 1);
				unk_0x69194304DB679A9C(unk_0xBC25C936A095B5BA(), 0, -1, 0);
				unk_0x2E9860A2B72187F5(unk_0xBC25C936A095B5BA(), 200, 1);
			}
			break;
		
		case 5:
			if (iLocal_340 != joaat("weapon_unarmed") && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				unk_0x8E25082A46F87892(unk_0xBC25C936A095B5BA(), iLocal_340, true);
			}
			unk_0x69194304DB679A9C(unk_0xBC25C936A095B5BA(), 1, -1, 0);
			unk_0xF3F01A78937DC905(0f);
			unk_0x2B9AEC08E469E384(0f, 1065353216);
			if (unk_0xEF0E25DA0CB6E8FF(iLocal_337))
			{
				unk_0x4EC087603E1DEF9C(iLocal_337, 0);
			}
			if (unk_0xEF0E25DA0CB6E8FF(iLocal_338))
			{
				unk_0x4EC087603E1DEF9C(iLocal_338, 0);
			}
			unk_0x062C9995BFD27B2A(false, 0, 3000, 1, 0, 0);
			unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
			Global_267214.f_15FB.f_2 = 1;
			Global_267214.f_15FB.f_5 = 1;
			if (func_187(1))
			{
				func_178(4);
			}
			iLocal_336 = 7;
			break;
		
		case 6:
			unk_0x348665177DBFB93B(iLocal_338, false);
			unk_0x062C9995BFD27B2A(false, 0, 3000, 1, 0, 0);
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				unk_0x49D46EE47C9CCB66(unk_0xBC25C936A095B5BA());
			}
			iLocal_336 = 5;
			break;
	}
}

void func_258(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)//Position - 0xB676
{
	int iVar0;
	
	if (unk_0xB731B8C5BCE89836(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x7930B3E9C919E90F())
	{
		if (!*iParam0 == -1)
		{
			func_259(iParam0);
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

void func_259(var uParam0)//Position - 0xB7A1
{
	int iVar0;
	
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_260(*uParam0);
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

int func_260(int iParam0)//Position - 0xB7F8
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

int func_261(int iParam0)//Position - 0xB833
{
	if (iParam0 == 1)
	{
		if (Global_389D.f_1 > 3)
		{
			if (unk_0xFA30DFD0084E92FE(Global_93B, 14))
			{
				if (Global_389C == 1)
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
		else
		{
			return 0;
		}
	}
	if (unk_0xB731B8C5BCE89836(joaat("cellphone_flashhand")) > 0)
	{
		if (Global_389C == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (Global_389D.f_1 > 3)
	{
		if (Global_389C == 1)
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

bool func_262()//Position - 0xB8B7
{
	return unk_0x105601648511CC64() <= Global_43C1.f_1671 + 100;
}

int func_263(vector3 vParam0)//Position - 0xB8CC
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_264(var uParam0, var uParam1, var uParam2, var uParam3, vector3 vParam4, var uParam5, int iParam6, bool bParam7, bool bParam8)//Position - 0xB8F6
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar3;
	int iVar4;
	char* sVar5;
	float fVar6;
	int iVar7;
	int iVar8;
	
	if (((uParam5->f_4 >= 1000 || (uParam5->f_4 + uParam0->f_33) >= 1000) || func_386(&(uParam5->f_5))) || (func_146(&(Global_267214.f_A)) && !func_385(Global_267214.f_A, 300000, 0)))
	{
		if (func_146(&(Global_267214.f_A)))
		{
			if ((unk_0x105601648511CC64() % 2500) < 50)
			{
			}
		}
		if (!uParam0->f_22)
		{
			uParam0->f_22 = 1;
			if (!func_146(&(Global_267214.f_A)))
			{
				func_18(&(Global_267214.f_A), 0, 0);
			}
		}
	}
	else
	{
		if (func_146(&(Global_267214.f_A)))
		{
			func_13(&(Global_267214.f_A));
		}
		if (uParam0->f_22)
		{
			uParam0->f_22 = 0;
		}
	}
	if ((unk_0x105601648511CC64() % 5000) < 50)
	{
	}
	if ((((((uParam5->f_3 < 2 && func_44(unk_0xB5CEFD608600A09F(), 1, 1)) && unk_0xFA30DFD0084E92FE(uParam0->f_34, 26)) && !func_384(-1082130432)) && unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) < 1) && !bParam7) && !func_389(*uParam5))
	{
		iVar4 = 0;
		if ((unk_0xE186ACC7BE9B244E() && uParam0->f_36 != 0) && !unk_0x4F2BFB7C2A730EC7())
		{
			if (!bParam8)
			{
				uParam0->f_36 = 0;
				func_383(uParam0, &(iParam6->f_3));
			}
		}
		switch (uParam0->f_36)
		{
			case 0:
				if ((((!unk_0xE186ACC7BE9B244E() && !unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1)) && !unk_0x226A1FD8C273ADE9(unk_0xBC25C936A095B5BA())) && (!func_142(unk_0xB5CEFD608600A09F()) || func_93(unk_0xB5CEFD608600A09F()) == 154)) && !func_382(unk_0xB5CEFD608600A09F(), 21))
				{
					if (func_381(*uParam0, &uParam1, vParam4.z, &(uParam0->f_10[0 /*3*/]), &(uParam0->f_10[1 /*3*/]), &(uParam0->f_17), &(uParam0->f_1A)))
					{
						vVar2 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) };
						vVar3 = { unk_0x541C2AEF053615BC(unk_0xE48AD7BF7762E114(*uParam5), 1) };
						if ((unk_0xF0F2FC9DE291567F(vVar2, uParam0->f_17, true) < 5f && unk_0x357058E632979E65((vVar2.z - vVar3.z)) < 0.25f) || func_428(1))
						{
							if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), uParam0->f_10[0 /*3*/], uParam0->f_10[1 /*3*/], uParam0->f_1A, 0, 1, 0) || func_428(1))
							{
								if (unk_0x053F9FA04F814AF3(unk_0xBC25C936A095B5BA(), uParam0->f_17, 135f) || func_428(1))
								{
									if (uParam0->f_22)
									{
										if (func_428(1))
										{
											func_403();
										}
										if (((!func_150("SHR_HOLDUP_1") && !func_150("SHR_MENU")) && !func_380()) && func_379())
										{
											func_152("SHR_SOLD_OUT", -1);
											uParam0->f_36 = 10;
										}
									}
									else
									{
										if (func_428(1))
										{
										}
										uParam0->f_E = -1;
										func_258(&(uParam0->f_E), 4, "SHR_MENU", 0, 0, 0, 0);
										uParam0->f_36 = 2;
									}
								}
								else if ((unk_0x105601648511CC64() % 8000) < 50)
								{
								}
							}
							else
							{
								if ((unk_0x105601648511CC64() % 8000) < 50)
								{
								}
								unk_0x9689CECD9CFDA876(vVar2, uParam0->f_10[0 /*3*/], 0, 0, 255, 255);
								unk_0x9689CECD9CFDA876(vVar2, uParam0->f_10[1 /*3*/], 0, 0, 255, 255);
							}
						}
						else
						{
							if ((unk_0x105601648511CC64() % 8000) < 50)
							{
							}
							unk_0x9689CECD9CFDA876(vVar2, uParam0->f_17, 0, 0, 255, 255);
						}
					}
				}
				else
				{
					if (func_150("SHR_MENU"))
					{
						unk_0x7456702622C62EA0(1);
					}
					if (func_38(unk_0xB5CEFD608600A09F()))
					{
						if (!unk_0xFA30DFD0084E92FE(uParam0->f_35, 4))
						{
							func_152("SHR_FM_CRIT", -1);
							unk_0x652B3075D0E58C13(3, 21, 200, 0, 0);
							unk_0xF0059F27F7BB6680(&(uParam0->f_35), 4);
						}
					}
					if ((unk_0x105601648511CC64() % 8000) < 50)
					{
					}
				}
				break;
			
			case 2:
				vVar2 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) };
				vVar3 = { unk_0x541C2AEF053615BC(unk_0xE48AD7BF7762E114(*uParam5), 1) };
				if ((!unk_0x053F9FA04F814AF3(unk_0xBC25C936A095B5BA(), uParam0->f_17, 135f) || unk_0x357058E632979E65((vVar2.z - vVar3.z)) >= 0.25f) && !func_428(1))
				{
					if (func_150("SHR_MENU"))
					{
						unk_0x7456702622C62EA0(1);
					}
					func_259(&(uParam0->f_E));
					uParam0->f_36 = 0;
				}
				if (unk_0xE186ACC7BE9B244E())
				{
					if (func_150("SHR_MENU"))
					{
						unk_0x7456702622C62EA0(1);
					}
					func_259(&(uParam0->f_E));
					uParam0->f_36 = 0;
				}
				if (func_172(0) || func_171())
				{
					if (func_150("SHR_MENU"))
					{
						unk_0x7456702622C62EA0(1);
					}
					func_259(&(uParam0->f_E));
					func_166(1, *uParam0);
					unk_0x7CB6FD92BE491AD9(&(uParam0->f_34), 26);
					uParam0->f_36 = 0;
				}
				if (!unk_0x226A1FD8C273ADE9(unk_0xBC25C936A095B5BA()))
				{
					if (func_378(uParam0->f_E, 1) || func_428(1))
					{
						if (func_428(1))
						{
							func_403();
						}
						if (func_150("SHR_MENU"))
						{
							unk_0x7456702622C62EA0(1);
						}
						func_376(&(uParam0->f_2C));
						func_259(&(uParam0->f_E));
						func_370(0, 0);
						unk_0xF0059F27F7BB6680(&(uParam0->f_35), 7);
						func_420(unk_0xB5CEFD608600A09F(), 0, 66048);
						unk_0x32FF237D69EB5489();
						if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && !func_389(*uParam5))
						{
							unk_0x85DB484A637CEAB9(unk_0xBC25C936A095B5BA(), unk_0xE48AD7BF7762E114(*uParam5), 0);
							unk_0x7CB6FD92BE491AD9(&(iParam6->f_1), 1);
						}
						func_369();
						uParam0->f_36 = 3;
					}
				}
				break;
			
			case 3:
				if (!bParam8)
				{
					if (!unk_0xEF0E25DA0CB6E8FF(uParam0->f_1))
					{
						uParam0->f_1 = unk_0x585DE1CBEEB2D27D(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, 0, 2);
						func_368(*uParam0, &(uParam0->f_2), &(uParam0->f_5), &fVar6);
						unk_0x6125108F6208C1F6(uParam0->f_1, uParam0->f_2);
						unk_0x3553F2A72957724E(uParam0->f_1, uParam0->f_5, 2);
						unk_0x9DF315A9EFFF87AC(uParam0->f_1, fVar6);
						unk_0x2FB83B8BD6C05FD2(uParam0->f_1, "HAND_SHAKE", 0.1f);
						unk_0x348665177DBFB93B(uParam0->f_1, true);
						unk_0x062C9995BFD27B2A(true, 0, 3000, 1, 0, 0);
					}
					uParam0->f_25 = func_391(*uParam0);
				}
				if (unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F()))
				{
					unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 0);
				}
				uParam0->f_D = 6;
				func_367(0, 0);
				func_366(1, 1, 0, 0, 0);
				func_365(1, 2, 1, 1, 1);
				func_364("SNK_ITEM");
				if (!bParam8)
				{
					func_362(1, uParam0->f_25, uParam0->f_25);
				}
				iVar7 = 0;
				while (iVar7 < uParam0->f_D)
				{
					func_357(iVar7, func_361(iVar7), 0, 1, 0, 0);
					if (uParam5->f_5[iVar7] >= 10 || ((func_146(&(Global_267214.f_C[iVar7 /*2*/])) && !func_385(Global_267214.f_C[iVar7 /*2*/], 150000, 0)) && *uParam0 == Global_267214.f_1B))
					{
						func_357(iVar7, "", 1, 1, 0, 0);
						func_356(15, 0);
						if (func_146(&(Global_267214.f_C[iVar7 /*2*/])) && !func_385(Global_267214.f_C[iVar7 /*2*/], 150000, 0))
						{
							uParam5->f_5[iVar7] = 10;
						}
						if (!func_146(&(Global_267214.f_C[iVar7 /*2*/])))
						{
							Global_267214.f_1B = *uParam0;
							func_18(&(Global_267214.f_C[iVar7 /*2*/]), 0, 0);
						}
					}
					else if (func_353(iVar7))
					{
						func_357(iVar7, "SNK_FULL", 0, 1, 0, 0);
					}
					else if (!bParam8)
					{
						func_357(iVar7, "ITEM_COST", 1, 1, 0, 0);
						func_349(func_352(uParam0, iVar7), 0);
					}
					else
					{
						func_357(iVar7, "SNK_FREE", 0, 1, 0, 0);
					}
					iVar7++;
				}
				func_348(0);
				func_347(uParam0->f_C, 1, 1);
				if (uParam0->f_23)
				{
					if (!bParam8)
					{
						func_346("SNK_BOUGHT", 0, 0);
					}
					else
					{
						func_346("SNK_STORED", 0, 0);
					}
				}
				else if (uParam5->f_5[uParam0->f_C] >= 10)
				{
					func_346("SNK_SOUT", 0, 0);
				}
				else
				{
					func_346(func_345(uParam0->f_C), 0, 0);
				}
				func_344(201, "ITEM_SELECT", -1, 0);
				func_344(202, "ITEM_BACK", -1, 0);
				if (!bParam8)
				{
					func_344(203, "SNK_LIFT", -1, 0);
					func_312(1, *uParam0, 1, 0, 1, -1082130432, 0, 0);
				}
				uParam0->f_36 = 4;
				break;
			
			case 4:
				if (unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F()))
				{
					unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 0);
				}
				if (unk_0xF4FCC3C1048FF2AB(unk_0xBC25C936A095B5BA(), -875674219) == 7)
				{
					if (!unk_0xFA30DFD0084E92FE(iParam6->f_1, 1))
					{
						if (!bParam8)
						{
							func_420(unk_0xB5CEFD608600A09F(), 0, 98816);
						}
						else
						{
							func_420(unk_0xB5CEFD608600A09F(), 0, 256);
						}
						unk_0xF0059F27F7BB6680(&(iParam6->f_1), 1);
					}
				}
				iVar4 = 0;
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
						func_308(0, 0, 0, 1);
						func_307(0, -1, 1);
						if (func_306())
						{
							if (Global_4118D6 != uParam0->f_C)
							{
								unk_0xC4BA30B532FE260F(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
								uParam0->f_C = Global_4118D6;
								func_347(uParam0->f_C, 1, 1);
								uParam0->f_1B = 0;
								uParam0->f_1D = 0;
								uParam0->f_1E = 0;
								uParam0->f_20 = 0;
								sVar5 = func_345(uParam0->f_C);
								if (unk_0x0F6F4C227FB5DD52(sVar5))
								{
									func_346(sVar5, 0, 0);
								}
							}
							else
							{
								iVar4 = 1;
							}
						}
					}
				}
				if (!bParam8)
				{
					func_312(1, *uParam0, 1, 0, 1, -1082130432, 0, 0);
				}
				func_296(uParam0, &(uParam5->f_5), bParam8);
				if ((uParam5->f_2 > 2 && unk_0xFA30DFD0084E92FE(uParam5->f_1, 0)) && unk_0xFA30DFD0084E92FE(iParam6->f_1, 0))
				{
					unk_0x7CB6FD92BE491AD9(&(iParam6->f_1), 0);
				}
				if ((unk_0x694514BD37EC4E94(2, 201) || iVar4 == 1) || uParam0->f_2F)
				{
					if (!uParam0->f_2F)
					{
						uParam0->f_1B = 1;
						uParam0->f_1D = 0;
						uParam0->f_1E = 0;
						uParam0->f_20 = 0;
						func_376(&(uParam0->f_2C));
					}
					if ((uParam0->f_1C && uParam0->f_1F) && uParam0->f_21)
					{
						if (func_216())
						{
							uParam0->f_2F = 1;
							uParam0->f_30 = 0;
							uParam0->f_31 = -1;
							iVar0 = 0;
							if (!bParam8)
							{
								iVar0 = func_352(uParam0, uParam0->f_C);
							}
							func_284(uParam0, -1303831698, 537254313, iVar0);
							uParam0->f_36 = 5;
						}
						else
						{
							uParam0->f_23 = 1;
							unk_0xC4BA30B532FE260F(-1, "PURCHASE", "HUD_LIQUOR_STORE_SOUNDSET", 1);
							uParam5->f_5[uParam0->f_C]++;
							uParam0->f_36 = 6;
						}
					}
					else
					{
						uParam0->f_23 = 0;
						if (!uParam0->f_1C && !uParam0->f_24)
						{
							iVar0 = 0;
							if (!bParam8)
							{
								iVar0 = func_352(uParam0, uParam0->f_C);
							}
							func_283(unk_0x56BEECB328B6D29D(func_345(uParam0->f_C)), iVar0, 0);
							func_276(0, 31, 3);
							uParam0->f_36 = 11;
						}
						unk_0xC4BA30B532FE260F(-1, "ERROR", "HUD_LIQUOR_STORE_SOUNDSET", 1);
					}
					if (!uParam0->f_21)
					{
						uParam0->f_36 = 3;
					}
				}
				if (!bParam8)
				{
					if (unk_0x694514BD37EC4E94(2, 203) && !uParam0->f_2F)
					{
						uParam0->f_1B = 1;
						if (uParam5->f_5[uParam0->f_C] < 10)
						{
							uParam0->f_21 = 1;
						}
						else
						{
							uParam0->f_21 = 0;
						}
						func_376(&(uParam0->f_2C));
						if (!uParam0->f_21)
						{
							unk_0xC4BA30B532FE260F(-1, "ERROR", "HUD_LIQUOR_STORE_SOUNDSET", 1);
						}
						else if (!uParam0->f_1F)
						{
							unk_0xC4BA30B532FE260F(-1, "ERROR", "HUD_LIQUOR_STORE_SOUNDSET", 1);
						}
						else
						{
							unk_0xE896C0AD02364F2A(unk_0xBC25C936A095B5BA(), func_162(), func_275(), 8f, -8f, -1, 1048576, 0, 0, 0, 0);
							uParam0->f_36 = 8;
							uParam0->f_F = unk_0x105601648511CC64();
							unk_0xC4BA30B532FE260F(-1, "SELECT", "HUD_LIQUOR_STORE_SOUNDSET", 1);
							if (!bParam8)
							{
								func_383(uParam0, &(iParam6->f_3));
							}
						}
					}
				}
				if (unk_0x694514BD37EC4E94(2, 202) || unk_0x093484B35A948BFC(2, 238))
				{
					if (func_428(1))
					{
						func_403();
					}
					uParam0->f_36 = 9;
					uParam0->f_F = unk_0x105601648511CC64();
					if (!bParam8)
					{
						unk_0xC4BA30B532FE260F(-1, "CANCEL", "HUD_LIQUOR_STORE_SOUNDSET", 1);
						func_383(uParam0, &(iParam6->f_3));
					}
					else
					{
						unk_0xC4BA30B532FE260F(-1, "BACK", "HUD_FREEMODE_SOUNDSET", 1);
						Global_25807F = 1;
					}
				}
				if (uParam0->f_22)
				{
					uParam0->f_36 = 10;
					uParam0->f_F = unk_0x105601648511CC64();
					if (!bParam8)
					{
						func_383(uParam0, &(iParam6->f_3));
					}
					func_152("SHR_SOLD_OUT", -1);
				}
				iVar8 = 0;
				while (iVar8 < uParam0->f_D)
				{
					if (func_146(&(Global_267214.f_C[iVar8 /*2*/])) && func_385(Global_267214.f_C[iVar8 /*2*/], 150000, 0))
					{
						func_13(&(Global_267214.f_C[iVar8 /*2*/]));
						uParam5->f_5[iVar8] = 0;
						uParam0->f_36 = 3;
					}
					iVar8++;
				}
				break;
			
			case 5:
				iVar0 = 0;
				if (!bParam8)
				{
					func_312(1, *uParam0, 1, 0, 1, -1082130432, 0, 0);
					iVar0 = func_352(uParam0, uParam0->f_C);
				}
				if (func_284(uParam0, -1303831698, 537254313, iVar0))
				{
				}
				else
				{
					switch (uParam0->f_31)
					{
						case 0:
							uParam0->f_23 = 0;
							if (!uParam0->f_1C && !uParam0->f_24)
							{
								if (!bParam8)
								{
									iVar0 = func_352(uParam0, uParam0->f_C);
								}
								func_283(unk_0x56BEECB328B6D29D(func_345(uParam0->f_C)), iVar0, 0);
								func_276(0, 31, 3);
								func_274();
								func_273();
								uParam0->f_36 = 11;
							}
							else
							{
								if (func_428(1))
								{
									func_403();
								}
								uParam0->f_36 = 9;
								uParam0->f_F = unk_0x105601648511CC64();
								unk_0xC4BA30B532FE260F(-1, "CANCEL", "HUD_LIQUOR_STORE_SOUNDSET", 1);
								if (!bParam8)
								{
									func_383(uParam0, &(iParam6->f_3));
								}
							}
							break;
						
						case 2:
							uParam0->f_23 = 1;
							unk_0xC4BA30B532FE260F(-1, "PURCHASE", "HUD_LIQUOR_STORE_SOUNDSET", 1);
							uParam5->f_5[uParam0->f_C]++;
							uParam0->f_36 = 6;
							break;
						
						default:
							break;
						}
				}
				break;
			
			case 6:
				if (!bParam8)
				{
					func_312(1, *uParam0, 1, 0, 1, -1082130432, 0, 0);
				}
				if (func_216())
				{
					unk_0xCD4DA7A56BD941BF(func_271(func_272()));
				}
				if (bParam8)
				{
					if (!unk_0xFA30DFD0084E92FE(Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_111.f_6D, 6))
					{
						unk_0xBC861966BE6E16EA(1, uParam0->f_C, 0, 1);
						unk_0xF0059F27F7BB6680(&(Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_111.f_6D), 6);
					}
					iVar1 = 0;
					switch (uParam0->f_C)
					{
						case 3:
							func_111(1275, 1, -1);
							func_110(16, 1, -1, 1);
							break;
						
						case 1:
							func_111(1276, 1, -1);
							func_110(15, 1, -1, 1);
							break;
						
						case 2:
							func_110(14, 1, -1, 1);
							func_111(1277, 1, -1);
							break;
						
						case 4:
							uParam0->f_37 = 20;
							if (func_130(1097, -1, 0) + 20 > 20)
							{
								uParam0->f_37 = (20 - func_130(1097, -1, 0));
							}
							func_111(1097, uParam0->f_37, -1);
							break;
						
						case 0:
							func_111(62, 1, -1);
							break;
						
						case 5:
							func_111(63, 1, -1);
							break;
					}
				}
				else
				{
					switch (uParam0->f_C)
					{
						case 3:
							if (func_270(unk_0xB5CEFD608600A09F(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_352(uParam0, uParam0->f_C);
							}
							func_111(1275, 1, -1);
							func_110(16, 1, -1, 1);
							unk_0x65A6CA53C1C58D40(iVar1, unk_0x56BEECB328B6D29D("SNK_ITEM1"), 12, 1, false, 0, 0, 0, 0, 1);
							break;
						
						case 1:
							if (func_270(unk_0xB5CEFD608600A09F(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_352(uParam0, uParam0->f_C);
							}
							func_111(1276, 1, -1);
							func_110(15, 1, -1, 1);
							unk_0x65A6CA53C1C58D40(iVar1, unk_0x56BEECB328B6D29D("SNK_ITEM2"), 12, 1, false, 0, 0, 0, 0, 1);
							break;
						
						case 2:
							if (func_270(unk_0xB5CEFD608600A09F(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_352(uParam0, uParam0->f_C);
							}
							func_110(14, 1, -1, 1);
							func_111(1277, 1, -1);
							unk_0x65A6CA53C1C58D40(iVar1, unk_0x56BEECB328B6D29D("SNK_ITEM3"), 12, 1, false, 0, 0, 0, 0, 1);
							break;
						
						case 4:
							if (func_270(unk_0xB5CEFD608600A09F(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_352(uParam0, uParam0->f_C);
							}
							uParam0->f_37 = 20;
							if (func_130(1097, -1, 0) + 20 > 20)
							{
								uParam0->f_37 = (20 - func_130(1097, -1, 0));
							}
							func_111(1097, uParam0->f_37, -1);
							unk_0x65A6CA53C1C58D40(iVar1, unk_0x56BEECB328B6D29D("SNK_ITEM4"), 12, 1, false, 0, 0, 0, 0, 1);
							break;
						
						case 0:
							if (func_270(unk_0xB5CEFD608600A09F(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_352(uParam0, uParam0->f_C);
							}
							func_111(62, 1, -1);
							unk_0x65A6CA53C1C58D40(iVar1, unk_0x56BEECB328B6D29D("SNK_ITEM5"), 12, 1, false, 0, 0, 0, 0, 1);
							break;
						
						case 5:
							if (func_270(unk_0xB5CEFD608600A09F(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_352(uParam0, uParam0->f_C);
							}
							func_111(63, 1, -1);
							unk_0x65A6CA53C1C58D40(iVar1, unk_0x56BEECB328B6D29D("SNK_ITEM6"), 12, 1, false, 0, 0, 0, 0, 1);
							break;
						}
				}
				if (func_216())
				{
					func_210(func_272());
				}
				func_269(-iVar1, 0);
				uParam0->f_33 = (uParam0->f_33 + iVar1);
				if (!unk_0xFA30DFD0084E92FE(*iParam6, 30))
				{
					unk_0xF0059F27F7BB6680(iParam6, 30);
				}
				if (!unk_0xFA30DFD0084E92FE(iParam6->f_1, 0))
				{
					unk_0xF0059F27F7BB6680(&(iParam6->f_1), 0);
					iParam6->f_2 = uParam0->f_C;
				}
				if (uParam0->f_22 || uParam0->f_33 >= 1000)
				{
					uParam0->f_36 = 10;
					if (!bParam8)
					{
						func_383(uParam0, &(iParam6->f_3));
					}
					func_152("SHR_SOLD_OUT", -1);
				}
				else if (uParam5->f_5[uParam0->f_C] >= 10 || func_353(uParam0->f_C))
				{
					uParam0->f_36 = 3;
				}
				else
				{
					uParam0->f_36 = 4;
				}
				break;
			
			case 8:
				func_197(1);
				switch (uParam0->f_C)
				{
					case 3:
						func_267(0, 1f, 3);
						func_111(1275, 1, -1);
						func_110(13, 1, -1, 1);
						break;
					
					case 1:
						func_267(1, 1f, 3);
						func_111(1276, 1, -1);
						func_110(13, 1, -1, 1);
						break;
					
					case 2:
						func_267(2, 1f, 3);
						func_111(1277, 1, -1);
						func_110(13, 1, -1, 1);
						break;
					
					case 4:
						uParam0->f_37 = 20;
						if (func_130(1097, -1, 0) + 20 > 20)
						{
							uParam0->f_37 = (20 - func_130(1097, -1, 0));
						}
						func_267(5, SYSTEM::TO_FLOAT(uParam0->f_37), 3);
						func_111(1097, uParam0->f_37, -1);
						break;
					
					case 0:
						func_267(3, 1f, 3);
						func_111(62, 1, -1);
						break;
					
					case 5:
						func_267(4, 1f, 3);
						func_111(63, 1, -1);
						break;
				}
				if (!bParam8)
				{
					func_420(unk_0xB5CEFD608600A09F(), 1, 0);
				}
				if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) < 1 && !func_265(unk_0xB5CEFD608600A09F()))
				{
					unk_0x16F9568D5D08F080(unk_0xB5CEFD608600A09F(), 37, unk_0x88B0E2A64EF693DE(1));
					unk_0xF0059F27F7BB6680(iParam6, 25);
					if (!unk_0xFA30DFD0084E92FE(*iParam6, 1))
					{
						unk_0xF0059F27F7BB6680(iParam6, 2);
					}
				}
				if (!unk_0xFA30DFD0084E92FE(iParam6->f_1, 2))
				{
					unk_0xF0059F27F7BB6680(&(iParam6->f_1), 2);
				}
				uParam0->f_36 = 12;
				break;
			
			case 11:
				if (!Global_16B4F.f_569 && !unk_0x4F2BFB7C2A730EC7())
				{
					uParam0->f_36 = 4;
				}
				break;
			
			case 10:
				if (!bParam8)
				{
					func_420(unk_0xB5CEFD608600A09F(), 1, 0);
				}
				if ((unk_0x105601648511CC64() - uParam0->f_F) > 1000)
				{
					uParam0->f_36 = 12;
				}
				else
				{
					unk_0xD55638CE45B2B948(2, 203);
					unk_0xD55638CE45B2B948(2, 202);
					unk_0xD55638CE45B2B948(2, 188);
					unk_0xD55638CE45B2B948(2, 187);
					unk_0xD55638CE45B2B948(2, 189);
					unk_0xD55638CE45B2B948(2, 190);
				}
				break;
			
			case 9:
				if ((unk_0x105601648511CC64() - uParam0->f_F) > 1000)
				{
					uParam0->f_36 = 0;
				}
				else
				{
					unk_0xD55638CE45B2B948(2, 203);
					unk_0xD55638CE45B2B948(2, 202);
					unk_0xD55638CE45B2B948(2, 188);
					unk_0xD55638CE45B2B948(2, 187);
					unk_0xD55638CE45B2B948(2, 189);
					unk_0xD55638CE45B2B948(2, 190);
				}
				break;
			
			case 12:
				if (unk_0xFA30DFD0084E92FE(uParam5->f_1, 3))
				{
					if (unk_0xFA30DFD0084E92FE(iParam6->f_1, 2))
					{
						unk_0x7CB6FD92BE491AD9(&(iParam6->f_1), 2);
					}
					if (unk_0xFA30DFD0084E92FE(iParam6->f_1, 3))
					{
						unk_0x7CB6FD92BE491AD9(&(iParam6->f_1), 3);
					}
				}
				break;
		}
	}
	else
	{
		if ((unk_0x105601648511CC64() % 8000) < 50)
		{
		}
		if (unk_0xFA30DFD0084E92FE(uParam5->f_1, 3))
		{
			if (unk_0xFA30DFD0084E92FE(iParam6->f_1, 2))
			{
				unk_0x7CB6FD92BE491AD9(&(iParam6->f_1), 2);
			}
			if (unk_0xFA30DFD0084E92FE(iParam6->f_1, 3))
			{
				unk_0x7CB6FD92BE491AD9(&(iParam6->f_1), 3);
			}
		}
		if ((uParam0->f_36 != 12 && unk_0xFA30DFD0084E92FE(uParam0->f_34, 26)) && !unk_0x4F2BFB7C2A730EC7())
		{
			if ((((uParam0->f_36 == 4 || uParam0->f_36 == 3) || uParam0->f_36 == 6) || uParam0->f_36 == 11) || uParam0->f_36 == 5)
			{
				func_383(uParam0, &(iParam6->f_3));
			}
			uParam0->f_36 = 12;
		}
		if (uParam0->f_E != -1)
		{
			func_259(&(uParam0->f_E));
		}
	}
}

int func_265(int iParam0)//Position - 0xCDAF
{
	if ((func_38(iParam0) || func_266(iParam0)) && func_217(func_218(iParam0)) == 0f)
	{
		return 1;
	}
	return 0;
}

int func_266(int iParam0)//Position - 0xCDE2
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xFA30DFD0084E92FE(Global_18C80F[iVar0 /*558*/].f_1, 7);
	}
	return 0;
}

void func_267(int iParam0, float fParam1, int iParam2)//Position - 0xCE08
{
	struct<8> Var0;
	vector3 vVar1;
	int iVar2;
	int iVar3;
	
	if (fParam1 > 0f)
	{
		if (func_268(iParam0, &Var0))
		{
			vVar1 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0) };
			func_197(1);
			iVar3 = -1;
			iVar2 = 0;
			while (iVar2 < 20)
			{
				if (Global_252E21.f_504[iVar2 /*30*/].f_6 == 0 || Global_252E21.f_504[iVar2 /*30*/].f_6 == 7)
				{
					iVar3 = iVar2;
					iVar2 = 20;
				}
				iVar2++;
			}
			if (iVar3 != -1)
			{
				Global_252E21.f_504[iVar3 /*30*/] = { vVar1 };
				Global_252E21.f_504[iVar3 /*30*/].f_6 = 1;
				Global_252E21.f_504[iVar3 /*30*/].f_4 = func_196(Global_252E21.f_504[iVar3 /*30*/], &Global_14063D, &Global_14063E);
				Global_252E21.f_504[iVar3 /*30*/].f_5 = fParam1;
				Global_252E21.f_504[iVar3 /*30*/].f_7 = unk_0xED678C85A82F0AB9();
				Global_252E21.f_504[iVar3 /*30*/].f_8 = iParam2;
				Global_252E21.f_504[iVar3 /*30*/].f_E = { Var0 };
				Global_252E21.f_504[iVar3 /*30*/].f_9 = func_195();
				Global_252E21.f_504[iVar3 /*30*/].f_A = func_194();
			}
		}
	}
}

int func_268(int iParam0, char* sParam1)//Position - 0xCF2A
{
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "PU_REWARD_S1", 32);
			return 1;
		
		case 1:
			StringCopy(sParam1, "PU_REWARD_S2", 32);
			return 1;
		
		case 2:
			StringCopy(sParam1, "PU_REWARD_S3", 32);
			return 1;
		
		case 3:
			StringCopy(sParam1, "PU_REWARD_D1", 32);
			return 1;
		
		case 4:
			StringCopy(sParam1, "PU_REWARD_D2", 32);
			return 1;
		
		case 5:
			StringCopy(sParam1, "PU_REWARD_11", 32);
			return 1;
		
		case 6:
			StringCopy(sParam1, "PU_REWARD_PC", 32);
			return 1;
		
		default:
	}
	return 0;
}

void func_269(int iParam0, int iParam1)//Position - 0xCFB8
{
	func_205(iParam0, 1, 1, 0);
	if (iParam1 == 1)
	{
		func_206(iParam0, 0);
	}
}

int func_270(int iParam0, bool bParam1, bool bParam2)//Position - 0xCFD6
{
	if (iParam0 == func_184())
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

int func_271(int iParam0)//Position - 0xD040
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_41092C[iParam0 /*80*/];
	}
	return -1;
}

int func_272()//Position - 0xD064
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_271(iVar0) != 2147483647)
		{
			if (func_213(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_273()//Position - 0xD09E
{
	Global_255A46.f_29F.f_20 = 1;
}

void func_274()//Position - 0xD0B0
{
	Global_255A46.f_29F.f_1C = 1;
	Global_255A46.f_29F.f_20 = 0;
	Global_255A46.f_29F.f_1F = unk_0x56BEECB328B6D29D(unk_0x1377080E9B0BD993());
	func_13(&(Global_255A46.f_29F.f_1D));
}

char* func_275()//Position - 0xD0EA
{
	if (func_12())
	{
		return "Shoplift_Mid";
	}
	return "Shoplift_Low";
}

void func_276(int iParam0, int iParam1, int iParam2)//Position - 0xD104
{
	int iVar0;
	
	if (!unk_0x69CD416923DBB24E())
	{
		return;
	}
	if (unk_0x7AF0088ABFA713B6() && func_280(unk_0xB5CEFD608600A09F(), 1))
	{
		return;
	}
	if (unk_0x8FCEEB789599BD9B(2, 199) || unk_0xD3C4A010282C31F2(2, 199))
	{
		return;
	}
	if (unk_0x0352C1B6B66A87AC() != 0)
	{
		return;
	}
	if (unk_0xE186ACC7BE9B244E())
	{
		return;
	}
	if (unk_0x14973A77EAB7E05A())
	{
		return;
	}
	if (unk_0x18158A50125911B6())
	{
		return;
	}
	if (func_279())
	{
		return;
	}
	if (!func_277())
	{
		return;
	}
	if (unk_0x7AF0088ABFA713B6() || iParam0)
	{
		if (!Global_16B4F.f_569 && !unk_0x4F2BFB7C2A730EC7())
		{
			iVar0 = 18;
			UI::_SET_WARNING_MESSAGE_2("BRSCRWTEX", "BRDISTEX", iVar0, "BRSHETEX", 0, -1, 0, 0, 1, 0);
			Global_25847E = iParam1;
			Global_16B4F.f_569 = 1;
			Global_16B4F.f_56A = iParam2;
		}
	}
}

int func_277()//Position - 0xD1DE
{
	if (func_278())
	{
		return 0;
	}
	if (unk_0x670C0C6C780A3F84() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_278()//Position - 0xD1FE
{
	return Global_258255;
}

bool func_279()//Position - 0xD20A
{
	return Global_2584E7;
}

int func_280(int iParam0, bool bParam1)//Position - 0xD216
{
	if (bParam1)
	{
		if (func_281(iParam0))
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

bool func_281(int iParam0)//Position - 0xD242
{
	return func_282(iParam0);
}

bool func_282(int iParam0)//Position - 0xD250
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[iParam0 /*770*/].f_D.f_1, 0);
}

void func_283(int iParam0, int iParam1, int iParam2)//Position - 0xD26A
{
	Global_16B4F.f_56B = iParam0;
	Global_16B4F.f_56C = iParam1;
	Global_16B4F.f_56D = iParam2;
}

int func_284(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0xD28D
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[] cVar3[8];
	char* sVar4;
	
	if (uParam0->f_2F)
	{
		switch (uParam0->f_30)
		{
			case 0:
				iVar0 = 0;
				iVar1 = 0;
				iVar2 = iParam3;
				if (unk_0x2F3FE16FCE949D80() > 0)
				{
					if (unk_0x2F3FE16FCE949D80() >= iVar2)
					{
						iVar1 = iVar2;
					}
					else
					{
						iVar1 = (iVar2 - (iVar2 - unk_0x2F3FE16FCE949D80()));
					}
					iVar2 = (iVar2 - iVar1);
				}
				if (iVar2 > 0)
				{
					if (unk_0x8378732DD7891451(-1) > 0)
					{
						if (unk_0x8378732DD7891451(-1) >= iVar2)
						{
							iVar0 = iVar2;
						}
						else
						{
							iVar0 = (iVar2 - (iVar2 - unk_0x8378732DD7891451(-1)));
						}
						iVar2 = (iVar2 - iVar0);
					}
				}
				cVar3 = func_361(uParam0->f_C);
				func_292(&sVar4, cVar3, func_293(uParam0));
				if (func_289(78225582, iParam1, unk_0x56BEECB328B6D29D(&sVar4), iParam2, 1, iParam3, 1, 8, 0, 3))
				{
					if (func_287())
					{
						unk_0x9847DA464A59B3C8(1);
						unk_0x6BF8A17A90747DF2(-iVar0, -iVar1);
						uParam0->f_30 = 1;
					}
					else
					{
						uParam0->f_30 = 3;
					}
				}
				else
				{
					uParam0->f_30 = 3;
				}
				break;
			
			case 1:
				if (func_286(func_272()))
				{
					if (func_285(func_272()) == 2)
					{
						uParam0->f_30 = 2;
					}
					else
					{
						uParam0->f_30 = 3;
					}
				}
				break;
			
			case 2:
				uParam0->f_2F = 0;
				uParam0->f_30 = 0;
				unk_0x9847DA464A59B3C8(0);
				unk_0x4E0EC60D119222B1(13);
				uParam0->f_31 = 2;
				return 0;
				break;
			
			case 3:
				func_210(func_272());
				uParam0->f_2F = 0;
				uParam0->f_30 = 0;
				unk_0x9847DA464A59B3C8(0);
				unk_0x4E0EC60D119222B1(13);
				uParam0->f_31 = 0;
				return 0;
				break;
		}
		return 1;
	}
	uParam0->f_30 = 0;
	uParam0->f_31 = -1;
	return 0;
}

int func_285(int iParam0)//Position - 0xD40A
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_41092C[iParam0 /*80*/].f_2;
	}
	return 0;
}

int func_286(int iParam0)//Position - 0xD430
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_41092C[iParam0 /*80*/].f_2 != 1;
	}
	return 0;
}

int func_287()//Position - 0xD458
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_216())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	iVar2 = func_272();
	if (iVar2 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!unk_0x060D652F887827B8(func_77()) || unk_0xEBA8BD5AE6FF01CA())
		{
			if (func_288(Global_41092C[iVar2 /*80*/].f_6, Global_41092C[iVar2 /*80*/].f_4, Global_41092C[iVar2 /*80*/].f_1) == 1)
			{
				Global_410B52 = 1;
			}
			return 0;
		}
		if (Global_2584E7)
		{
			if (Global_41092C[iVar2 /*80*/].f_6 == 1067618600 || Global_41092C[iVar2 /*80*/].f_6 == -1303831698)
			{
				Global_410B53 = 1;
				return 0;
			}
		}
	}
	iVar3 = func_271(iVar2);
	if (iVar3 != 2147483647)
	{
		if ((bVar0 || iVar1) || unk_0xCEA9F48EB9CF0CC7(iVar3))
		{
			Global_41092C[iVar2 /*80*/].f_4A = 1;
			Global_41092C[iVar2 /*80*/].f_49 = 0;
			Global_41092C[iVar2 /*80*/].f_4B = unk_0xC87A57742F7D3C06();
			if (bVar0)
			{
				Global_41092C[iVar2 /*80*/].f_45 = 1;
				Global_41092C[iVar2 /*80*/].f_49 = 1;
			}
			Global_41092C[iVar2 /*80*/].f_4F = 0;
			Global_410B45 = 1;
			return 1;
		}
	}
	return 0;
}

int func_288(int iParam0, int iParam1, int iParam2)//Position - 0xD584
{
	if (iParam0 == -433440095 || iParam0 == 1474183246)
	{
		switch (iParam1)
		{
			case 1940862352:
				if (iParam2 >= 10000)
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case -31156877:
			case -327918414:
			case 550898518:
			case 835976347:
			case 1347433368:
				if (iParam2 >= 1000)
				{
					return 1;
				}
				else
				{
					return 2;
				}
				break;
			
			case 1982688246:
				return 0;
				break;
			
			case 1718438689:
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
			case -664597565:
			case 599804707:
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
			case 443347049:
				return 1;
				break;
			
			case 1515774909:
			case 1173654533:
			case -899802304:
			case -663944335:
			case 1208553146:
			case -613221010:
			case -671062876:
			case 291576838:
			case -1276678868:
			case 711665950:
			case -407201236:
			case -754024203:
			case -1885444887:
			case 1931729587:
			case 1064954035:
			case -180141073:
			case 2131324797:
			case 283351220:
			case 1108628223:
			case -876847842:
			case 68030260:
				return 2;
				break;
			
			default:
				return 0;
				break;
		}
	}
	else if ((iParam0 == -1134853190 || iParam0 == 925407197) || iParam0 == -1589378882)
	{
		return 0;
	}
	return 1;
}

int func_289(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0xD923
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	
	bVar0 = false;
	if (!func_216())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x060D652F887827B8(func_77()) || unk_0xEBA8BD5AE6FF01CA())
		{
			Global_410B52 = 1;
			return 0;
		}
		if (Global_2584E7)
		{
			if (iParam1 == 1067618600 || iParam1 == -1303831698)
			{
				Global_410B53 = 1;
				return 0;
			}
		}
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	iVar1 = func_272();
	if (iVar1 == -1)
	{
		if (!func_291(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9))
		{
			return 0;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && func_290(iParam1))
		{
			Var2 = iParam8;
			Var2.f_1 = iParam2;
			Var2.f_2 = uParam5;
			Var2.f_3 = iParam6;
		}
		else
		{
			Var2 = iParam2;
			Var2.f_1 = iParam8;
			Var2.f_2 = uParam5;
			Var2.f_3 = iParam6;
		}
		Global_41092C[iVar1 /*80*/].f_1 = Var2.f_2;
		Global_41092C[iVar1 /*80*/].f_4C = Var2;
		Global_41092C[iVar1 /*80*/].f_4D = Var2.f_1;
		if (bVar0 || unk_0xC05F79B6C480051D(&Var2, iParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_290(int iParam0)//Position - 0xDA3F
{
	switch (iParam0)
	{
		case -221807075:
		case -1224924353:
		case -2121967344:
		case 1394405165:
		case -2052814106:
		case 1701289268:
		case -1796535835:
		case -1928802392:
		case 581564040:
		case 23048035:
		case 2117376854:
		case -1377881127:
		case -504675202:
		case 1906937290:
		case -1616616027:
		case -1799524201:
		case 269396419:
		case 69656641:
		case -103880010:
		case -1494913648:
			return 1;
			break;
	}
	return 0;
}

int func_291(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5)//Position - 0xDACE
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_216())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x060D652F887827B8(func_77()) || unk_0xEBA8BD5AE6FF01CA())
		{
			Global_410B52 = 1;
			return 0;
		}
		if (Global_2584E7)
		{
			if (iParam2 == 1067618600 || iParam2 == -1303831698)
			{
				Global_410B53 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_41092C[iVar1 /*80*/].f_2 == 0)
		{
			bVar2 = true;
		}
		else if (Global_41092C[iVar1 /*80*/].f_5 == 1)
		{
			return 0;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0;
	}
	*iParam0 = 0;
	if (!bVar0)
	{
		if (unk_0x83AAC4B63428F9E9())
		{
			unk_0xC7150D5EF5AFC7C1();
		}
	}
	if (bVar0 || unk_0x74DBB836BF448E5B(&iVar3, iParam2, iParam3, iParam4))
	{
		*iParam0 = func_215(iVar3, uParam1, -2085313189, iParam3, iParam2, 0, 1, iParam4, uParam5, 0);
		return 1;
	}
	return 0;
}

void func_292(char* sParam0, char* sParam1, int iParam2)//Position - 0xDBC4
{
	StringCopy(sParam0, "MT_", 64);
	StringConCat(sParam0, sParam1, 64);
	StringConCat(sParam0, "_t0_v", 64);
	StringIntConCat(sParam0, iParam2, 64);
}

int func_293(var uParam0)//Position - 0xDBE8
{
	if (func_270(unk_0xB5CEFD608600A09F(), 1, 0) || func_294(unk_0xB5CEFD608600A09F()))
	{
		return 3;
	}
	else if (uParam0->f_32 >= 10 && uParam0->f_32 <= 14)
	{
		return 0;
	}
	else if (uParam0->f_32 >= 15 && uParam0->f_32 <= 19)
	{
		return 1;
	}
	else
	{
		return 2;
	}
	return -1;
}

int func_294(int iParam0)//Position - 0xDC51
{
	if (iParam0 != func_184())
	{
		if (func_44(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1)
			{
				return func_295(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 9;
			}
		}
	}
	return 0;
}

int func_295(int iParam0)//Position - 0xDC98
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

void func_296(var uParam0, var uParam1, bool bParam2)//Position - 0xDFE4
{
	char* sVar0;
	
	if (!uParam0->f_1D)
	{
	}
	if (func_305(uParam0))
	{
		uParam0->f_1B = 0;
		func_304(&(uParam0->f_2C));
		uParam0->f_C = (uParam0->f_C - 1);
		if (uParam0->f_C < 0)
		{
			uParam0->f_C = (uParam0->f_D - 1);
		}
		unk_0xC4BA30B532FE260F(-1, "NAV_UP_DOWN", "HUD_LIQUOR_STORE_SOUNDSET", 1);
		func_347(uParam0->f_C, 1, 1);
		sVar0 = func_345(uParam0->f_C);
		uParam0->f_1D = 0;
		uParam0->f_1E = 0;
		uParam0->f_20 = 0;
		if (unk_0x0F6F4C227FB5DD52(sVar0))
		{
			func_346(sVar0, 0, 0);
		}
	}
	if (func_301(uParam0))
	{
		uParam0->f_1B = 0;
		func_304(&(uParam0->f_2C));
		uParam0->f_C++;
		if (uParam0->f_C > (uParam0->f_D - 1))
		{
			uParam0->f_C = 0;
		}
		unk_0xC4BA30B532FE260F(-1, "NAV_UP_DOWN", "HUD_LIQUOR_STORE_SOUNDSET", 1);
		func_347(uParam0->f_C, 1, 1);
		sVar0 = func_345(uParam0->f_C);
		uParam0->f_1D = 0;
		uParam0->f_1E = 0;
		uParam0->f_20 = 0;
		if (unk_0x0F6F4C227FB5DD52(sVar0))
		{
			func_346(sVar0, 0, 0);
		}
	}
	if (!uParam0->f_1D)
	{
		if (unk_0x4B4C38B8656AEB1E(func_352(uParam0, uParam0->f_C), 0, 1, 0, -1))
		{
			uParam0->f_1C = 1;
		}
		else
		{
			uParam0->f_1C = 0;
			uParam0->f_24 = 1;
		}
		uParam0->f_1D = 1;
	}
	if (!uParam0->f_1E)
	{
		uParam0->f_1F = 1;
		if (uParam0->f_C == 3)
		{
			uParam0->f_1F = func_130(1275, -1, 0) < 30;
		}
		else if (uParam0->f_C == 1)
		{
			uParam0->f_1F = func_130(1276, -1, 0) < 15;
		}
		else if (uParam0->f_C == 2)
		{
			uParam0->f_1F = func_130(1277, -1, 0) < 5;
		}
		else if (uParam0->f_C == 4)
		{
			uParam0->f_1F = func_130(1097, -1, 0) < 20;
		}
		else if (uParam0->f_C == 0)
		{
			uParam0->f_1F = func_130(62, -1, 0) < 10;
		}
		else if (uParam0->f_C == 5)
		{
			uParam0->f_1F = func_130(63, -1, 0) < 10;
		}
		uParam0->f_1E = 1;
	}
	if (!uParam0->f_20)
	{
		if ((*uParam1)[uParam0->f_C] < 10)
		{
			uParam0->f_21 = 1;
		}
		else
		{
			uParam0->f_21 = 0;
			func_346("SNK_SOUT", 0, 0);
		}
		uParam0->f_20 = 1;
	}
	if (uParam0->f_1B)
	{
		if (func_297(&(uParam0->f_2C)) < 3f)
		{
			if (uParam0->f_23)
			{
				if (!bParam2)
				{
					func_346("SNK_BOUGHT", 0, 0);
				}
				else
				{
					func_346("SNK_STORED", 0, 0);
				}
			}
			else if (!uParam0->f_1C)
			{
				func_346("SNK_AFFORD", 0, 0);
			}
			else if (!uParam0->f_21)
			{
				func_346("SNK_SOUT", 0, 0);
			}
			else if (!uParam0->f_1F)
			{
				if (uParam0->f_C == 3)
				{
					func_346("SNK_SNK1FU", 0, 0);
				}
				else if (uParam0->f_C == 1)
				{
					func_346("SNK_SNK2FU", 0, 0);
				}
				else if (uParam0->f_C == 2)
				{
					func_346("SNK_SNK3FU", 0, 0);
				}
				else if (uParam0->f_C == 4)
				{
					func_346("SNK_SMOKFU", 0, 0);
				}
				else if (uParam0->f_C == 0)
				{
					func_346("SNK_DRK1FU", 0, 0);
				}
				else if (uParam0->f_C == 5)
				{
					func_346("SNK_DRK2FU", 0, 0);
				}
				else
				{
					func_346("SNK_NEEDED", 0, 0);
				}
				unk_0xF0059F27F7BB6680(&(uParam0->f_35), 26);
			}
		}
		else
		{
			uParam0->f_1B = 0;
			uParam0->f_23 = 0;
			func_304(&(uParam0->f_2C));
			sVar0 = func_345(uParam0->f_C);
			if (unk_0x0F6F4C227FB5DD52(sVar0))
			{
				func_346(sVar0, 0, 0);
			}
		}
	}
}

float func_297(var uParam0)//Position - 0xE31E
{
	if (func_300(uParam0))
	{
		if (func_299(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_298(unk_0xFA30DFD0084E92FE(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

float func_298(bool bParam0)//Position - 0xE35A
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

bool func_299(var uParam0)//Position - 0xE3B2
{
	return unk_0xFA30DFD0084E92FE(*uParam0, 2);
}

bool func_300(var uParam0)//Position - 0xE3C2
{
	return unk_0xFA30DFD0084E92FE(*uParam0, 1);
}

int func_301(var uParam0)//Position - 0xE3D2
{
	float fVar0;
	
	fVar0 = unk_0x5F9521C8EE73F79F(2, 219);
	if ((fVar0 > 0.8f || unk_0x8FCEEB789599BD9B(2, 187)) || unk_0x694514BD37EC4E94(2, 242))
	{
		if (!func_300(&(uParam0->f_29)))
		{
			func_303(&(uParam0->f_29));
			return 1;
		}
		else if (func_302(&(uParam0->f_29)) > 0.25f)
		{
			func_376(&(uParam0->f_29));
			return 1;
		}
	}
	else if (func_300(&(uParam0->f_29)))
	{
		func_304(&(uParam0->f_29));
	}
	return 0;
}

float func_302(var uParam0)//Position - 0xE457
{
	if (func_300(uParam0))
	{
		if (func_299(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_298(unk_0xFA30DFD0084E92FE(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

void func_303(int iParam0)//Position - 0xE496
{
	if (!func_300(iParam0))
	{
		func_376(iParam0);
	}
}

void func_304(var uParam0)//Position - 0xE4AE
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_305(var uParam0)//Position - 0xE4C4
{
	float fVar0;
	
	fVar0 = unk_0x5F9521C8EE73F79F(2, 219);
	if ((fVar0 < -0.8f || unk_0x8FCEEB789599BD9B(2, 188)) || unk_0x694514BD37EC4E94(2, 241))
	{
		if (!func_300(&(uParam0->f_26)))
		{
			func_303(&(uParam0->f_26));
			return 1;
		}
		else if (func_302(&(uParam0->f_26)) > 0.25f)
		{
			func_376(&(uParam0->f_26));
			return 1;
		}
	}
	else if (func_300(&(uParam0->f_26)))
	{
		func_304(&(uParam0->f_26));
	}
	return 0;
}

int func_306()//Position - 0xE549
{
	if (unk_0x50465D2C022B9E04(2))
	{
		if (Global_4118D6 > -1)
		{
			if (unk_0x694514BD37EC4E94(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_307(int iParam0, int iParam1, bool bParam2)//Position - 0xE570
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

void func_308(bool bParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0xE650
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
	func_311();
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
				func_310(0);
			}
			return;
		}
		if (((Global_4118D0 >= fVar0 && Global_4118D0 <= fVar2) && Global_4118D1 >= (fVar3 + fVar6)) && Global_4118D1 < (fVar3 + 0.034722f))
		{
			Global_4118D6 = -3;
			if (bParam3)
			{
				func_310(0);
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
				func_309(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_43C0, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
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

void func_309(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0xE8FC
{
	unk_0xF7EBEC3FF57AEC65((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

void func_310(bool bParam0)//Position - 0xE92B
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
		func_309(fVar0, fVar1, Global_43C0, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_4118D6 == -3)
	{
		func_309(fVar0, (fVar1 + fVar2), Global_43C0, fVar2, 255, 255, 255, iVar3);
	}
	unk_0x2A025E7CEBB76D14();
}

void func_311()//Position - 0xE9B4
{
	Global_4118D2 = Global_4118D0;
	Global_4118D3 = Global_4118D1;
	Global_4118D0 = unk_0xBCEB785249D7E5BE(2, 239);
	Global_4118D1 = unk_0xBCEB785249D7E5BE(2, 240);
	Global_4118D4 = (Global_4118D0 - Global_4118D2);
	Global_4118D5 = (Global_4118D1 - Global_4118D3);
}

void func_312(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)//Position - 0xE9FC
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
	
	if (!func_168(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_342(0, bParam6))
	{
		return;
	}
	unk_0xC2EAD30963BDAA47(76, 84);
	unk_0xF6A6FFB73848BF82(-0.05f, -0.05f, 0f, 0f);
	fVar56 = 0f;
	fVar57 = 0f;
	if (Global_43C1)
	{
		if (func_340(29, 1, 1, &fVar36, &fVar37, bParam7))
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
		if (func_339())
		{
			iVar59 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar60) * fVar62));
		}
		fVar63 = (SYSTEM::TO_FLOAT(iVar59) / SYSTEM::TO_FLOAT(iVar60));
		fVar61 = (fVar63 / fVar62);
		if (func_339())
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
					StringCopy(&cVar64, func_338(29), 64);
					StringCopy(&cVar65, func_336(29, 1), 64);
					if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_1A3F[29 /*16*/])) == -1487683087)
					{
						func_309(Global_43BE, Global_43BF, fParam5, (fVar56 - 0f), 0, 0, 0, 255);
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
				func_309(Global_43BE, (Global_43BF + fVar56), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_43BF + fVar56) + 0.034722f) + 0f);
				if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_1)) != 0)
				{
					func_335();
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
						func_335();
						func_333((((Global_43BE + fParam5) - 0.00390625f) - func_334("CM_ITEM_COUNT", Global_43C1.f_15E4, Global_43C1.f_15E3)), ((Global_43BF + fVar56) + 0.00416664f), "CM_ITEM_COUNT", Global_43C1.f_15E4, Global_43C1.f_15E3);
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
				func_309(Global_43BE, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
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
					func_340(Global_43C1.f_121E, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_43BE + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_332(fVar40);
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
				func_309(Global_43BE, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
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
				func_332(fVar40);
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
					func_340(Global_43C1.f_121E, 1, 1, &fVar36, &fVar37, bParam7);
					func_331(Global_43C1.f_121E, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0x51DA985AC0B70E2E(func_338(Global_43C1.f_121E), func_336(Global_43C1.f_121E, 1), ((Global_43BE + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
					func_340(Global_41188A.f_43, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_43BE + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_332(fVar40);
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
				func_309(Global_43BE, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
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
				func_332(fVar40);
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
					func_340(Global_41188A.f_43, 1, 1, &fVar36, &fVar37, bParam7);
					func_331(Global_41188A.f_43, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0x51DA985AC0B70E2E(func_338(Global_41188A.f_43), func_336(Global_41188A.f_43, 1), ((Global_43BE + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
			func_324(iVar59, iParam1, 0, 0, 0, 0, bParam4, 1, 0);
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
					func_322(bVar32, 1, 0, 0, 0, 0, 0);
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
												func_322(bVar32, Global_43C1.f_64A[iVar24], Global_43C1.f_74B[iVar24], bVar54, iVar74, bVar51, bVar50);
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
													if (func_340(Global_43C1.f_1151[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
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
											if (func_340(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_43C1.f_1359[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_340(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_331(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0x51DA985AC0B70E2E(func_338(26), func_336(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
											if (func_340(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_340(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_331(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0x51DA985AC0B70E2E(func_338(27), func_336(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
											func_322(bVar32, Global_43C1.f_64A[iVar24], Global_43C1.f_74B[iVar24], bVar54, 0, bVar51, bVar50);
											if (Global_43C1.f_1EF7 && Global_43C1.f_1EF8 == iVar6)
											{
												func_321(bVar32);
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
													if (func_340(Global_43C1.f_1151[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
													{
														fVar40 = (fVar40 + (fVar36 * 0.5f));
														if (func_340(Global_43C1.f_1151[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_331(Global_43C1.f_1151[(iVar22 + iVar28)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
															if (Global_43C1.f_1359[iVar8] == 2)
															{
																unk_0x51DA985AC0B70E2E(func_338(Global_43C1.f_1151[(iVar22 + iVar28)]), func_336(Global_43C1.f_1151[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar40) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else
															{
																unk_0x51DA985AC0B70E2E(func_338(Global_43C1.f_1151[(iVar22 + iVar28)]), func_336(Global_43C1.f_1151[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar40) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
												if (func_320() && unk_0xB731B8C5BCE89836(joaat("fm_mission_creator")) > 0)
												{
													if (iVar8 == 0)
													{
														func_322(0, Global_43C1.f_64A[iVar24], Global_43C1.f_74B[iVar24], bVar54, 0, bVar51, bVar50);
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
													if (func_340(Global_43C1.f_1151[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
													{
														fVar40 = (fVar40 + (fVar36 * 0.5f));
														if (func_340(Global_43C1.f_1151[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_331(Global_43C1.f_1151[(iVar22 + iVar14)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
															if (Global_43C1.f_1151[(iVar22 + iVar14)] == 30)
															{
																unk_0x51DA985AC0B70E2E(func_338(Global_43C1.f_1151[(iVar22 + iVar14)]), func_336(Global_43C1.f_1151[(iVar22 + iVar14)], bVar32), (Global_43BE + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else if (Global_43C1.f_1359[iVar8] == 2)
															{
																unk_0x51DA985AC0B70E2E(func_338(Global_43C1.f_1151[(iVar22 + iVar14)]), func_336(Global_43C1.f_1151[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar40) + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else
															{
																unk_0x51DA985AC0B70E2E(func_338(Global_43C1.f_1151[(iVar22 + iVar14)]), func_336(Global_43C1.f_1151[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar40) + fVar41) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
											func_322(bVar32, Global_43C1.f_64A[iVar24], Global_43C1.f_74B[iVar24], bVar54, 0, 0, 0);
											if (Global_43C1.f_1EF7 && Global_43C1.f_1EF8 == iVar6)
											{
												func_321(bVar32);
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
											if (func_340(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_43C1.f_1359[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_340(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_331(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0x51DA985AC0B70E2E(func_338(26), func_336(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
											if (func_340(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_340(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_331(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0x51DA985AC0B70E2E(func_338(27), func_336(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										func_322(bVar32, Global_43C1.f_64A[iVar24], Global_43C1.f_74B[iVar24], bVar54, 0, 0, 0);
										func_319((fVar34 + fVar40), fVar35, "NUMBER", Global_43C1.f_F4E[iVar20], 0);
									}
									bVar39 = true;
									iVar20++;
									break;
								
								case 3:
									if (iVar5 == 1 && bVar33)
									{
										if (!Global_43C1.f_15DF)
										{
											func_322(bVar32, Global_43C1.f_64A[iVar24], Global_43C1.f_74B[iVar24], bVar54, 0, 0, 0);
											if (Global_43C1.f_1EF7 && Global_43C1.f_1EF8 == iVar6)
											{
												func_321(bVar32);
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
											if (func_340(26, 1, 0, &fVar36, &fVar37, 0))
											{
												if (Global_43C1.f_1359[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_340(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_331(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0x51DA985AC0B70E2E(func_338(26), func_336(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
											if (func_340(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_340(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_331(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													unk_0x51DA985AC0B70E2E(func_338(27), func_336(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										func_322(bVar32, Global_43C1.f_64A[iVar24], Global_43C1.f_74B[iVar24], bVar54, 0, 0, 0);
										func_318((fVar34 + fVar40), fVar35, "NUMBER", Global_43C1.f_104F[iVar21], Global_43C1.f_10D0[iVar21]);
									}
									bVar39 = true;
									iVar21++;
									break;
								
								case 4:
									if (iVar5 == 1 && bVar33)
									{
										if (func_340(Global_43C1.f_1151[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
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
												if (func_340(26, 1, 0, &fVar36, &fVar37, bParam7))
												{
													if (Global_43C1.f_1359[iVar8] == 2)
													{
														fVar40 = (fVar40 - (fVar36 * 2f));
													}
													fVar43 = (fVar36 * 0.5f);
													if (func_340(26, 1, 1, &fVar36, &fVar37, bParam7))
													{
														func_331(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
														unk_0x51DA985AC0B70E2E(func_338(26), func_336(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
													}
												}
												if (func_340(27, 1, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + fVar36);
													fVar43 = (fVar36 * 0.5f);
													if (func_340(27, 1, 1, &fVar36, &fVar37, bParam7))
													{
														func_331(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
														unk_0x51DA985AC0B70E2E(func_338(27), func_336(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
													}
												}
											}
											if (func_340(Global_43C1.f_1151[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_331(Global_43C1.f_1151[iVar22], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
												unk_0x51DA985AC0B70E2E(func_338(Global_43C1.f_1151[iVar22]), func_336(Global_43C1.f_1151[iVar22], bVar32), ((fVar34 + fVar40) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), (fVar36 * func_317(Global_43C1.f_1151[iVar22])), (fVar37 * func_317(Global_43C1.f_1151[iVar22])), 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
									if (func_340(26, 1, 1, &fVar36, &fVar37, bParam7))
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
		func_314(0);
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
		func_313(1);
	}
	unk_0x2A025E7CEBB76D14();
}

void func_313(int iParam0)//Position - 0x11661
{
	Global_14D262.f_437 = iParam0;
}

void func_314(int iParam0)//Position - 0x11672
{
	if (!Global_389D.f_1 == 1)
	{
		if (func_172(0))
		{
			func_315(iParam0);
		}
		unk_0xF0059F27F7BB6680(&Global_93C, 2);
	}
}

void func_315(int iParam0)//Position - 0x1169B
{
	if (Global_3943)
	{
		func_316(0, 0);
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
	if (!func_235())
	{
		Global_389D.f_1 = 3;
	}
}

void func_316(bool bParam0, bool bParam1)//Position - 0x1170B
{
	if (bParam0)
	{
		if (func_172(0))
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

float func_317(int iParam0)//Position - 0x1177F
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

void func_318(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)//Position - 0x117EE
{
	unk_0x8B371195127AACF2(sParam2);
	unk_0x3AE7CB4034BE212F(fParam3, iParam4);
	unk_0x3A8B9C7B1C825123(fParam0, fParam1, 0);
}

void func_319(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x1180D
{
	unk_0x8B371195127AACF2(sParam2);
	unk_0xAA5C5BF0489E5553(iParam3);
	unk_0x3A8B9C7B1C825123(fParam0, fParam1, iParam4);
}

bool func_320()//Position - 0x1182B
{
	return unk_0x7B2F21BFE86AEB61(-1762644250);
}

void func_321(bool bParam0)//Position - 0x1183C
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

void func_322(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x11882
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_323(Global_43C1.f_16F6[iParam4], &iVar0, &iVar1, &iVar2);
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

void func_323(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x11A30
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

void func_324(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x11CBA
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_168(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_342(bParam4, bParam8))
	{
		return;
	}
	if (func_329())
	{
		return;
	}
	if (unk_0xF32BA80A2DED1FC6())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_327(unk_0xB5CEFD608600A09F(), 0))
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
					func_326(&(Global_43C1.f_1221[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0x56BEECB328B6D29D(&(Global_43C1.f_12E2[iVar2 /*4*/])) == unk_0x56BEECB328B6D29D("PREV"))
					{
						func_326(&(Global_43C1.f_1221[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_43C1.f_1313[iVar1] == -1)
					{
						func_325(&(Global_43C1.f_12E2[iVar1 /*4*/]));
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
				func_326(&Global_41188A);
				if (Global_41188A.f_14 == -1)
				{
					func_325(&(Global_41188A.f_10));
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

void func_325(char* sParam0)//Position - 0x12196
{
	unk_0x57016C44F10111F0(sParam0);
	unk_0x64989E60CF560CA1();
}

void func_326(char* sParam0)//Position - 0x121A8
{
	unk_0xCB30200B8055CA57(sParam0);
}

bool func_327(int iParam0, int iParam1)//Position - 0x121B6
{
	bool bVar0;
	
	if (iParam0 == unk_0xB5CEFD608600A09F())
	{
		bVar0 = func_328(-1, 0) == 8;
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

int func_328(int iParam0, bool bParam1)//Position - 0x12201
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_77();
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

int func_329()//Position - 0x12242
{
	vector3 vVar0;
	
	if (Global_389D.f_1 > 3)
	{
		return 1;
	}
	if (func_330())
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

int func_330()//Position - 0x122B0
{
	if (unk_0xB731B8C5BCE89836(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_331(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x122CA
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

void func_332(float fParam0)//Position - 0x1239D
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

void func_333(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x123FC
{
	unk_0x8B371195127AACF2(sParam2);
	unk_0xAA5C5BF0489E5553(iParam3);
	unk_0xAA5C5BF0489E5553(iParam4);
	unk_0x3A8B9C7B1C825123(fParam0, fParam1, 0);
}

float func_334(char* sParam0, int iParam1, int iParam2)//Position - 0x1241F
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
	func_335();
	unk_0xE746379C2AF24EF6(sParam0);
	unk_0xAA5C5BF0489E5553(iParam1);
	unk_0xAA5C5BF0489E5553(iParam2);
	return unk_0x2207C0EA517B975D(1);
}

void func_335()//Position - 0x12461
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

var func_336(int iParam0, bool bParam1)//Position - 0x124EB
{
	char* sVar0[2];
	var uVar1;
	struct<13> Var2;
	
	if (!unk_0xF1734B55490E9045(&(Global_43C1.f_1A3F[iParam0 /*16*/])))
	{
		if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_1A3F[iParam0 /*16*/])) == -1487683087)
		{
			Var2 = { func_70(unk_0xB5CEFD608600A09F()) };
			if (unk_0xB5AD4F878C27B0F4(&Var2, &uVar1))
			{
				return func_337(&uVar1);
			}
		}
		else
		{
			return func_337(&(Global_43C1.f_1A3F[iParam0 /*16*/]));
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

var func_337(var uParam0)//Position - 0x1293D
{
	return uParam0;
}

char* func_338(int iParam0)//Position - 0x12947
{
	var uVar0;
	struct<13> Var1;
	
	if (!unk_0xF1734B55490E9045(&(Global_43C1.f_16FE[iParam0 /*16*/])))
	{
		if (unk_0x56BEECB328B6D29D(&(Global_43C1.f_16FE[iParam0 /*16*/])) == -1487683087)
		{
			Var1 = { func_70(unk_0xB5CEFD608600A09F()) };
			unk_0xB5AD4F878C27B0F4(&Var1, &uVar0);
			return func_337(&uVar0);
		}
		else
		{
			return func_337(&(Global_43C1.f_16FE[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 48)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

int func_339()//Position - 0x129BC
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

int func_340(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)//Position - 0x129EE
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	
	StringCopy(&cVar0, func_338(iParam0), 64);
	StringCopy(&cVar1, func_336(iParam0, bParam1), 64);
	if (unk_0x56BEECB328B6D29D(&cVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			unk_0x1BBB0A5225346008(&iVar2, &iVar3);
			fVar5 = unk_0x3771EE4CB542D71E(0);
			if (func_339())
			{
				iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) * fVar5));
			}
			fVar6 = (SYSTEM::TO_FLOAT(iVar2) / SYSTEM::TO_FLOAT(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_339())
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
		vVar7.x = (vVar7.x * (func_341(iParam0) / fVar4));
		vVar7.y = (vVar7.y * (func_341(iParam0) / fVar4));
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

float func_341(int iParam0)//Position - 0x12B9F
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

int func_342(bool bParam0, bool bParam1)//Position - 0x12C3E
{
	if (Global_252E21.f_760.f_2B0 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0x726D9204B160D23E() || (func_244(8, -1) && func_343() != 64)) || (unk_0x0352C1B6B66A87AC() != 0 && !bParam1)) || (unk_0x7930B3E9C919E90F() && !bParam0)) || unk_0x4F2BFB7C2A730EC7()) || Global_11646) || Global_43C1.f_1EFA) || unk_0x18158A50125911B6()) || Global_16B4F.f_569)
	{
		return 0;
	}
	return 1;
}

int func_343()//Position - 0x12CDB
{
	return Global_140815;
}

void func_344(int iParam0, char* sParam1, int iParam2, bool bParam3)//Position - 0x12CE7
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
	if (!bParam3)
	{
		unk_0xF0059F27F7BB6680(&(Global_43C1.f_133A), Global_43C1.f_121F);
	}
	StringCopy(&(Global_43C1.f_1221[Global_43C1.f_121F /*16*/]), sVar0, 64);
	StringCopy(&(Global_43C1.f_12E2[Global_43C1.f_121F /*4*/]), sParam1, 16);
	Global_43C1.f_1313[Global_43C1.f_121F] = iParam2;
	Global_43C1.f_1320[Global_43C1.f_121F] = iParam0;
	Global_43C1.f_132D[Global_43C1.f_121F] = 32;
	Global_43C1.f_121F++;
}

char* func_345(int iParam0)//Position - 0x12D9C
{
	int iVar0;
	
	if (iParam0 != -1)
	{
		iVar0 = iParam0;
	}
	else
	{
		iVar0 = 6;
	}
	switch (iVar0)
	{
		case 6:
			return "SNK_AFFORD";
		
		case 3:
			return "SNK_ITEM1_D";
		
		case 1:
			return "SNK_ITEM2_D";
		
		case 2:
			return "SNK_ITEM3_D";
		
		case 4:
			return "SNK_ITEM4_D";
		
		case 0:
			return "SNK_ITEM5_D";
		
		case 5:
			return "SNK_ITEM6_D";
		
		default:
	}
	return "";
}

void func_346(char* sParam0, int iParam1, int iParam2)//Position - 0x12E1A
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

void func_347(var uParam0, bool bParam1, int iParam2)//Position - 0x12E7F
{
	int iVar0;
	int iVar1;
	
	Global_43C1.f_15E6 = uParam0;
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

void func_348(int iParam0)//Position - 0x12FD1
{
	Global_43C1.f_15E5 = iParam0;
}

void func_349(var uParam0, bool bParam1)//Position - 0x12FE1
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
	Global_43C1.f_F4E[Global_43C1.f_13E4] = uParam0;
	Global_43C1.f_13E4++;
	Global_43C1.f_84C[Global_43C1.f_15E9 /*5*/][Global_43C1.f_15EA] = 2;
	Global_43C1.f_15EA++;
	if (Global_43C1.f_15EA >= Global_43C1.f_15E8)
	{
		fVar0 = func_351();
		if (Global_43C1.f_1351[Global_43C1.f_13E1] && Global_43C1.f_15EA == Global_43C1.f_15E8)
		{
			func_340(26, 1, 0, &fVar1, &uVar2, 0);
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
			fVar3 = func_350();
			if (fVar3 > Global_43C1.f_15EC[Global_43C1.f_13E0])
			{
				Global_43C1.f_15EC[Global_43C1.f_13E0] = fVar3;
			}
		}
	}
}

float func_350()//Position - 0x1311C
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
			if (func_340(Global_43C1.f_1151[((Global_43C1.f_13E6 - iVar1) + iVar0)], 1, 0, &uVar3, &fVar4, 0))
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

float func_351()//Position - 0x131CF
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
	func_322(0, 1, 0, 0, 0, iVar6 > 0, 0);
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
			func_340(Global_43C1.f_1151[((Global_43C1.f_13E6 - iVar5) + iVar7)], 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + fVar1);
		}
		iVar7++;
	}
	return fVar0;
}

int func_352(var uParam0, int iParam1)//Position - 0x13616
{
	int iVar0;
	
	iVar0 = iParam1;
	switch (func_293(uParam0))
	{
		case 0:
			switch (iVar0)
			{
				case 3:
					return 2;
				
				case 1:
					return 3;
				
				case 2:
					return 5;
				
				case 4:
					return 7;
				
				case 0:
					return 2;
				
				case 5:
					return 2;
				
				default:
			}
			break;
		
		case 1:
			switch (iVar0)
			{
				case 3:
					return 1;
				
				case 1:
					return 2;
				
				case 2:
					return 3;
				
				case 4:
					return 8;
				
				case 0:
					return 2;
				
				case 5:
					return 5;
				
				default:
			}
			break;
		
		case 2:
			switch (iVar0)
			{
				case 3:
					return 1;
				
				case 1:
					return 2;
				
				case 2:
					return 4;
				
				case 4:
					return 6;
				
				case 0:
					return 3;
				
				case 5:
					return 4;
				
				default:
			}
			break;
	}
	return 0;
}

int func_353(int iParam0)//Position - 0x13713
{
	if (func_130(func_355(iParam0), -1, 0) >= func_354(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_354(var uParam0)//Position - 0x13735
{
	int iVar0;
	
	iVar0 = uParam0;
	switch (iVar0)
	{
		case 3:
			return 30;
		
		case 1:
			return 15;
		
		case 2:
			return 5;
		
		case 4:
			return 20;
		
		case 0:
			return 10;
		
		case 5:
			return 10;
		
		default:
	}
	return 0;
}

int func_355(var uParam0)//Position - 0x1378A
{
	int iVar0;
	
	iVar0 = uParam0;
	switch (iVar0)
	{
		case 3:
			return 1275;
		
		case 1:
			return 1276;
		
		case 2:
			return 1277;
		
		case 4:
			return 1097;
		
		case 0:
			return 62;
		
		case 5:
			return 63;
		
		default:
	}
	return 8804;
}

void func_356(int iParam0, bool bParam1)//Position - 0x137E6
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_43C1.f_13E6 >= 128)
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
	Global_43C1.f_1151[Global_43C1.f_13E6] = iParam0;
	Global_43C1.f_13E6++;
	Global_43C1.f_84C[Global_43C1.f_15E9 /*5*/][Global_43C1.f_15EA] = 4;
	Global_43C1.f_15EA++;
	if (Global_43C1.f_15EA >= Global_43C1.f_15E8)
	{
		fVar0 = func_351();
		if (Global_43C1.f_1351[Global_43C1.f_13E1] && Global_43C1.f_15EA == Global_43C1.f_15E8)
		{
			func_340(26, 1, 0, &fVar1, &uVar2, 0);
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
			fVar3 = func_350();
			if (fVar3 > Global_43C1.f_15EC[Global_43C1.f_13E0])
			{
				Global_43C1.f_15EC[Global_43C1.f_13E0] = fVar3;
			}
		}
	}
}

void func_357(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)//Position - 0x13920
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
		func_360(Global_43C1.f_13E0, 1);
	}
	else
	{
		func_360(Global_43C1.f_13E0, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_359(&(Global_43C1.f_49[Global_43C1.f_13E2 /*6*/]));
		if (Global_43C1.f_1351[Global_43C1.f_13E1])
		{
			func_340(26, 1, 0, &fVar2, &uVar3, 0);
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
			fVar4 = func_358(&(Global_43C1.f_49[Global_43C1.f_13E2 /*6*/]));
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

float func_358(char* sParam0)//Position - 0x13B2C
{
	if (!unk_0x0F6F4C227FB5DD52(sParam0))
	{
	}
	return unk_0x60F548525BE58E47(0.35f, 0);
}

float func_359(char* sParam0)//Position - 0x13B48
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
	func_322(0, 1, 0, 0, 0, 0, 0);
	unk_0xE746379C2AF24EF6(sParam0);
	return unk_0x2207C0EA517B975D(1);
}

void func_360(int iParam0, bool bParam1)//Position - 0x13B85
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

char* func_361(int iParam0)//Position - 0x13BD1
{
	int iVar0;
	
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 3:
			return "SNK_ITEM1";
		
		case 1:
			return "SNK_ITEM2";
		
		case 2:
			return "SNK_ITEM3";
		
		case 4:
			return "SNK_ITEM4";
		
		case 0:
			return "SNK_ITEM5";
		
		case 5:
			return "SNK_ITEM6";
		
		default:
	}
	return "";
}

void func_362(int iParam0, char* sParam1, char* sParam2)//Position - 0x13C36
{
	Global_43C1 = iParam0;
	func_363(29, sParam1, sParam2);
}

void func_363(int iParam0, char* sParam1, char* sParam2)//Position - 0x13C4D
{
	StringCopy(&(Global_43C1.f_16FE[iParam0 /*16*/]), sParam1, 64);
	StringCopy(&(Global_43C1.f_1A3F[iParam0 /*16*/]), sParam2, 64);
}

void func_364(char* sParam0)//Position - 0x13C71
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

void func_365(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x13CBC
{
	Global_43C1.f_1359[0] = iParam0;
	Global_43C1.f_1359[1] = iParam1;
	Global_43C1.f_1359[2] = iParam2;
	Global_43C1.f_1359[3] = iParam3;
	Global_43C1.f_1359[4] = iParam4;
}

void func_366(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x13CFB
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

void func_367(bool bParam0, bool bParam1)//Position - 0x13DA5
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

int func_368(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x1428A
{
	vector3 vVar0;
	float fVar1;
	
	switch (iParam0)
	{
		case 0:
			*uParam1 = { unk_0x89D97EB4FAE4A574(-706.6382f, -913.6887f, 19.21f, -89.999f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (-89.999f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 1:
			*uParam1 = { unk_0x89D97EB4FAE4A574(-47.19871f, -1757.67f, 29.42f, -130f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (-130f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 2:
			*uParam1 = { unk_0x89D97EB4FAE4A574(1164.21f, -322.89f, 69.2f, -80f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (-80f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 3:
			*uParam1 = { unk_0x89D97EB4FAE4A574(1698.307f, 4923.371f, 42.06f, 145f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (145f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 4:
			*uParam1 = { unk_0x89D97EB4FAE4A574(-1820.465f, 793.8166f, 138.09f, -47.53f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (-47.53f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 5:
			vVar0 = { 1165.958f, 2710.201f, 38.14286f };
			fVar1 = -1.15f;
			*uParam1 = { unk_0x89D97EB4FAE4A574(vVar0, fVar1, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar1 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 6:
			vVar0 = { -2967.027f, 390.9038f, 15.02f };
			fVar1 = -94.76f;
			*uParam1 = { unk_0x89D97EB4FAE4A574(vVar0, fVar1, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar1 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 7:
			vVar0 = { -1222.331f, -907.8234f, 12.31f };
			fVar1 = -147.297f;
			*uParam1 = { unk_0x89D97EB4FAE4A574(vVar0, fVar1, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar1 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 8:
			vVar0 = { 1134.811f, -982.3615f, 46.4f };
			fVar1 = 96.68562f;
			*uParam1 = { unk_0x89D97EB4FAE4A574(vVar0, fVar1, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar1 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 9:
			vVar0 = { -1486.673f, -378.4638f, 40.15f };
			fVar1 = -46.229f;
			*uParam1 = { unk_0x89D97EB4FAE4A574(vVar0, fVar1, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar1 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 10:
			vVar0 = { -3244.573f, 1000.658f, 12.83f };
			fVar1 = 175.074f;
			*uParam1 = { unk_0x89D97EB4FAE4A574(vVar0, fVar1, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar1 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 11:
			vVar0 = { -3041.357f, 584.2665f, 7.9f };
			fVar1 = -162.241f;
			*uParam1 = { unk_0x89D97EB4FAE4A574(vVar0, fVar1, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar1 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 12:
			vVar0 = { 548.9015f, 2668.941f, 42.15f };
			fVar1 = -82.5f;
			*uParam1 = { unk_0x89D97EB4FAE4A574(vVar0, fVar1, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar1 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 13:
			vVar0 = { 2554.875f, 381.3857f, 108.62f };
			fVar1 = 177.716f;
			*uParam1 = { unk_0x89D97EB4FAE4A574(vVar0, fVar1, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar1 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 14:
			vVar0 = { 2676.212f, 3280.969f, 55.24f };
			fVar1 = 150.87f;
			*uParam1 = { unk_0x89D97EB4FAE4A574(vVar0, fVar1, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar1 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 15:
			vVar0 = { 1729.329f, 6417.123f, 35.03f };
			fVar1 = 63.641f;
			*uParam1 = { unk_0x89D97EB4FAE4A574(vVar0, fVar1, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar1 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 16:
			vVar0 = { 1959.323f, 3742.29f, 32.34f };
			fVar1 = 120f;
			*uParam1 = { unk_0x89D97EB4FAE4A574(vVar0, fVar1, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar1 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 17:
			vVar0 = { 24.94562f, -1344.954f, 29.49f };
			fVar1 = 90f;
			*uParam1 = { unk_0x89D97EB4FAE4A574(vVar0, fVar1, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar1 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 18:
			vVar0 = { 373.5954f, 328.5892f, 103.56f };
			fVar1 = 75.885f;
			*uParam1 = { unk_0x89D97EB4FAE4A574(vVar0, fVar1, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar1 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case -2:
			*uParam1 = { 1390.653f, 3598.966f, 35.6115f };
			*uParam2 = { -3.6091f, 0.022f, -8.6461f };
			*uParam3 = 35f;
			break;
	}
	return 1;
}

void func_369()//Position - 0x14A23
{
	if (unk_0x8ACB0C3FACC09467())
	{
		unk_0xFCEBCC3D5D7DB96E(0.325f, 0.3f);
	}
}

void func_370(int iParam0, int iParam1)//Position - 0x14A41
{
	if (!func_280(unk_0xB5CEFD608600A09F(), 1) || iParam1)
	{
		if (!func_375())
		{
			Global_1406A0.f_1 = 1;
			Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_9 = 1;
			if (iParam0 == 1)
			{
				Global_1406A0.f_2 = 1;
			}
			func_371(0);
		}
	}
}

void func_371(int iParam0)//Position - 0x14A93
{
	if (!func_375() || iParam0)
	{
		Global_1406A0 = 1;
		func_374(1);
		if (((!unk_0x517823CA390A19F6() && !func_373()) && !func_372(unk_0xB5CEFD608600A09F())) && !func_142(unk_0xB5CEFD608600A09F()))
		{
			Global_EF3AD = 1;
		}
		Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_8 = 1;
	}
}

int func_372(int iParam0)//Position - 0x14AF6
{
	if (func_280(iParam0, 1))
	{
		if (Global_18402B[iParam0 /*770*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_373()//Position - 0x14B1A
{
	return Global_255A46.f_2D7;
}

void func_374(bool bParam0)//Position - 0x14B29
{
	if (unk_0x7AF0088ABFA713B6())
	{
		if (!func_375())
		{
			if (func_44(unk_0xB5CEFD608600A09F(), 1, 0))
			{
				unk_0x0130A557FECA322C(unk_0xBC25C936A095B5BA(), 1);
				unk_0xC8FD3EBBB90E8D7F(unk_0xBC25C936A095B5BA(), 342, false);
				unk_0xC8FD3EBBB90E8D7F(unk_0xBC25C936A095B5BA(), 122, false);
			}
			unk_0xE8A86792404E8DB8(unk_0xB5CEFD608600A09F(), 1f);
			unk_0x6CF2954DEC49C61F(0);
			unk_0xEF791AEFDDE09A3D(1);
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
			if (func_44(unk_0xB5CEFD608600A09F(), 1, 1))
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
			unk_0xEF791AEFDDE09A3D(0);
		}
	}
}

bool func_375()//Position - 0x14C22
{
	return Global_1406A0;
}

void func_376(int iParam0)//Position - 0x14C2E
{
	func_377(iParam0, 0f);
}

void func_377(int iParam0, float fParam1)//Position - 0x14C3D
{
	iParam0->f_1 = (func_298(unk_0xFA30DFD0084E92FE(*iParam0, 4)) - fParam1);
	unk_0xF0059F27F7BB6680(iParam0, 1);
	unk_0x7CB6FD92BE491AD9(iParam0, 2);
	iParam0->f_2 = 0f;
}

int func_378(int iParam0, bool bParam1)//Position - 0x14C6B
{
	int iVar0;
	
	iVar0 = func_260(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x6A9CDB766DF7216F(unk_0xFC1CAE18F3ECBF2D()))
	{
		return 0;
	}
	if (func_172(0))
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

int func_379()//Position - 0x14D23
{
	if (Global_19B04.f_4F9D.f_91 > 0)
	{
		return 0;
	}
	return 1;
}

bool func_380()//Position - 0x14D40
{
	return Global_4334;
}

int func_381(int iParam0, var uParam1, float fParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x14D4B
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			*uParam3 = { unk_0x89D97EB4FAE4A574(*uParam1, fParam2, 1.46991f, -0.814453f, -0.97226f) };
			*uParam4 = { unk_0x89D97EB4FAE4A574(*uParam1, fParam2, -1.5828f, -0.814453f, 0.84774f) };
			*uParam5 = { unk_0x89D97EB4FAE4A574(*uParam1, fParam2, 0.0586548f, 0.178162f, 0f) };
			*uParam6 = 0.75f;
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam3 = { unk_0x89D97EB4FAE4A574(*uParam1, fParam2, -1.55054f, -0.920414f, -0.998837f) };
			*uParam4 = { unk_0x89D97EB4FAE4A574(*uParam1, fParam2, 1.54138f, -0.920414f, 0.901165f) };
			*uParam5 = { unk_0x89D97EB4FAE4A574(*uParam1, fParam2, 0.0586548f, 0.178162f, 0f) };
			*uParam6 = 0.75f;
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			*uParam3 = { unk_0x89D97EB4FAE4A574(*uParam1, fParam2, -2.60296f, -0.851523f, -0.999289f) };
			*uParam4 = { unk_0x89D97EB4FAE4A574(*uParam1, fParam2, 0.443411f, -0.851523f, 0.820711f) };
			*uParam5 = { unk_0x89D97EB4FAE4A574(*uParam1, fParam2, -1.17421f, 0.39005f, 0f) };
			*uParam6 = 0.75f;
			break;
		
		case -2:
			*uParam3 = { 1390.955f, 3604.379f, 33.98091f };
			*uParam4 = { 1394.475f, 3605.664f, 35.98091f };
			*uParam5 = { 1392.551f, 3605.449f, 35.30949f };
			*uParam6 = 0.75f;
			break;
	}
	return 1;
}

bool func_382(int iParam0, int iParam1)//Position - 0x14F31
{
	return unk_0xFA30DFD0084E92FE(Global_24FB5C[iParam0 /*406*/].f_CC, iParam1);
}

void func_383(var uParam0, var uParam1)//Position - 0x14F4A
{
	unk_0xA4E856A8CD53B8DF(unk_0xBC25C936A095B5BA());
	func_420(unk_0xB5CEFD608600A09F(), 1, 0);
	unk_0xF3F01A78937DC905(0f);
	unk_0x2B9AEC08E469E384(0f, 1065353216);
	if (uParam0->f_33 > 0)
	{
		*uParam1 = uParam0->f_33;
		uParam0->f_33 = 0;
	}
	func_404();
	unk_0x7CB6FD92BE491AD9(&(uParam0->f_35), 7);
	if (func_150("SHR_MENU"))
	{
		unk_0x7456702622C62EA0(1);
	}
	if (uParam0->f_E != -1)
	{
		func_259(&(uParam0->f_E));
	}
	if (unk_0xEF0E25DA0CB6E8FF(uParam0->f_1))
	{
		unk_0x4EC087603E1DEF9C(uParam0->f_1, 0);
	}
	unk_0x062C9995BFD27B2A(false, 0, 3000, 1, 0, 0);
}

int func_384(float fParam0)//Position - 0x14FD4
{
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()) && !unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		if (fParam0 <= 0f)
		{
			return unk_0x31E5D759D5CB9546(unk_0xBC25C936A095B5BA()) > 0;
		}
		else
		{
			return unk_0xEA85590434A67895(unk_0xBC25C936A095B5BA(), unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), fParam0) > 0;
		}
	}
	return 0;
}

int func_385(int iParam0, var uParam1, int iParam2, bool bParam3)//Position - 0x15026
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

int func_386(var uParam0)//Position - 0x15079
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if ((*uParam0)[iVar0] < 10)
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_387()//Position - 0x150A3
{
	unk_0xC5A6DFE2B8987B17(&uLocal_119);
	unk_0x56F2E1B5599188FA(0, unk_0xBC25C936A095B5BA(), -1, 0, 2);
	unk_0xE896C0AD02364F2A(0, "mp_am_hold_up", "handsup_enter", 8f, -8f, -1, 262192, 0, 0, 0, 0);
	unk_0xE896C0AD02364F2A(0, "mp_am_hold_up", "handsup_base", 8f, -4f, -1, 262193, 0, 0, 0, 0);
	unk_0x535008C596714F9E(uLocal_119);
	unk_0xC5A6DFE2B8987B17(&uLocal_120);
	unk_0xE896C0AD02364F2A(0, "mp_am_hold_up", "handsup_base", 4f, -4f, -1, 262193, 0, 0, 0, 0);
	unk_0x535008C596714F9E(uLocal_120);
	unk_0xC5A6DFE2B8987B17(&uLocal_121);
	unk_0x346129B364057FF6(0, vLocal_112, 2f, -1, 0.25f, 0, fLocal_113);
	unk_0xE896C0AD02364F2A(0, "mp_am_hold_up", "cower_intro", 8f, -4f, -1, 262144, 0, 0, 0, 0);
	unk_0xE896C0AD02364F2A(0, "mp_am_hold_up", "cower_loop", 8f, -4f, -1, 270337, 0, 0, 0, 0);
	unk_0xAB43C54784946B9F(0, vLocal_112, 250f, -1, 1, 0);
	unk_0x0D042F5C6172D20A(0, 0);
	unk_0x535008C596714F9E(uLocal_121);
	unk_0xC5A6DFE2B8987B17(&uLocal_123);
	unk_0xE896C0AD02364F2A(0, "mp_am_hold_up", "cower_intro", 8f, -4f, -1, 262144, 0, 0, 0, 0);
	unk_0xE896C0AD02364F2A(0, "mp_am_hold_up", "cower_loop", 8f, -4f, -1, 270337, 0, 0, 0, 0);
	unk_0x0D042F5C6172D20A(0, 0);
	unk_0x535008C596714F9E(uLocal_123);
	unk_0xC5A6DFE2B8987B17(&uLocal_122);
	unk_0x346129B364057FF6(0, vLocal_112, 2f, -1, 0.25f, 0, (fLocal_113 - 180f));
	unk_0x74C219E0C7FC4E4B(0, 1);
	unk_0xB90F3BE2A1EF63DB(0, 20f, 0);
	unk_0x535008C596714F9E(uLocal_122);
}

void func_388(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x1522A
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

int func_389(int iParam0)//Position - 0x152C5
{
	if (unk_0x7FFE36DB9042AF23(iParam0))
	{
		return unk_0x36CEFBE9B745A58D(unk_0xE48AD7BF7762E114(iParam0));
	}
	return 1;
}

int func_390()//Position - 0x152E4
{
	return Local_103.f_C;
}

char* func_391(int iParam0)//Position - 0x152F0
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return "ShopUI_Title_GasStation";
		
		case 5:
			return "ShopUI_Title_LiquorStore3";
		
		case 6:
		case 7:
		case 8:
		case 9:
			return "ShopUI_Title_LiquorStore2";
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			return "ShopUI_Title_ConvenienceStore";
		
		case -2:
			return "ShopUI_Title_LiquorStore";
		
		default:
	}
	return "NULL";
}

int func_392()//Position - 0x1539C
{
	vector3 vVar0;
	
	if (func_400(&(Local_105.f_32), 0))
	{
		func_398(Local_105.f_32, &iLocal_139, &iLocal_140, &iLocal_141, &iLocal_142, &vLocal_143, &vLocal_144);
		func_397(Local_105.f_32, &vLocal_145, &vLocal_146, &fLocal_147);
		func_396(Local_105.f_32, &vLocal_148, &vLocal_149, &fLocal_150);
		switch (Local_105.f_32)
		{
			case 0:
				vLocal_115 = { 1393.1f, 3605.89f, (35.2f - 0.2f) };
				vLocal_116 = { 0f, 0f, 21.89f };
				iLocal_110 = func_50(0);
				vLocal_112 = { 1394.852f, 3609.509f, 33.9809f };
				fLocal_113 = 116.5329f;
				iLocal_134 = 1;
				if (func_394(6, 18))
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 0;
					iLocal_316[1] = 0;
					iLocal_317[1] = 0;
					iLocal_316[2] = 0;
					iLocal_317[2] = 0;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 0;
					iLocal_317[4] = 0;
				}
				else
				{
					iLocal_316[0] = 1;
					iLocal_317[0] = 0;
					iLocal_316[1] = 1;
					iLocal_317[1] = 1;
					iLocal_316[2] = 1;
					iLocal_317[2] = 2;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 0;
					iLocal_317[4] = 0;
				}
				break;
			
			case 1:
				vLocal_116 = { 0f, 0f, -160f };
				vLocal_115 = { -3041.38f, 584.35f, (8.11f - 0.2f) };
				iLocal_110 = func_50(0);
				vLocal_112 = { -3047.512f, 588.9807f, 6.9089f };
				fLocal_113 = 178.8753f;
				iLocal_134 = 1;
				if (func_394(6, 18))
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 1;
					iLocal_316[1] = 1;
					iLocal_317[1] = 0;
					iLocal_316[2] = 0;
					iLocal_317[2] = 1;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 0;
					iLocal_317[4] = 1;
				}
				else
				{
					iLocal_316[0] = 2;
					iLocal_317[0] = 0;
					iLocal_316[1] = 0;
					iLocal_317[1] = 0;
					iLocal_316[2] = 1;
					iLocal_317[2] = 2;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 0;
					iLocal_317[4] = 1;
				}
				break;
			
			case 2:
				vLocal_115 = { -3244.56f, 1000.74f, (13.03f - 0.2f) };
				vLocal_116 = { 0f, 0f, 175.52f };
				iLocal_110 = func_50(0);
				vLocal_112 = { -3249.114f, 1006.558f, 11.8307f };
				fLocal_113 = 191.594f;
				iLocal_134 = 1;
				if (func_394(6, 18))
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 2;
					iLocal_316[1] = 1;
					iLocal_317[1] = 1;
					iLocal_316[2] = 0;
					iLocal_317[2] = 2;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 0;
					iLocal_317[4] = 2;
				}
				else
				{
					iLocal_316[0] = 2;
					iLocal_317[0] = 1;
					iLocal_316[1] = 0;
					iLocal_317[1] = 0;
					iLocal_316[2] = 1;
					iLocal_317[2] = 0;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 0;
					iLocal_317[4] = 2;
				}
				break;
			
			case 3:
				vLocal_116 = { 0f, 0f, -82.38f };
				vLocal_115 = { 548.82f, 2668.93f, (42.36f - 0.2f) };
				iLocal_110 = func_50(0);
				vLocal_112 = { 543.0796f, 2663.967f, 41.1565f };
				fLocal_113 = 228.4295f;
				iLocal_134 = 1;
				if (func_394(6, 18))
				{
					iLocal_316[0] = 1;
					iLocal_317[0] = 0;
					iLocal_316[1] = 2;
					iLocal_317[1] = 0;
					iLocal_316[2] = 1;
					iLocal_317[2] = 0;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 0;
					iLocal_317[4] = 0;
				}
				else
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 0;
					iLocal_316[1] = 2;
					iLocal_317[1] = 1;
					iLocal_316[2] = 1;
					iLocal_317[2] = 1;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 0;
					iLocal_317[4] = 0;
				}
				break;
			
			case 4:
				vLocal_116 = { 0f, 0f, 180f };
				vLocal_115 = { 2554.88f, 381.47f, (108.82f - 0.2f) };
				iLocal_110 = func_50(0);
				vLocal_112 = { 2549.85f, 387.1622f, 107.623f };
				fLocal_113 = 197.2994f;
				iLocal_134 = 1;
				if (func_394(6, 18))
				{
					iLocal_316[0] = 2;
					iLocal_317[0] = 0;
					iLocal_316[1] = 2;
					iLocal_317[1] = 1;
					iLocal_316[2] = 1;
					iLocal_317[2] = 1;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 0;
					iLocal_317[4] = 1;
				}
				else
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 1;
					iLocal_316[1] = 1;
					iLocal_317[1] = 0;
					iLocal_316[2] = 0;
					iLocal_317[2] = 2;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 0;
					iLocal_317[4] = 1;
				}
				break;
			
			case 5:
				vLocal_116 = { 0f, 0f, 155f };
				vLocal_115 = { 2676.26f, 3281.04f, (55.44f - 0.2f) };
				iLocal_110 = func_50(0);
				vLocal_112 = { 2671.351f, 3283.136f, 54.2411f };
				fLocal_113 = 296.5427f;
				iLocal_134 = 1;
				if (func_394(6, 18))
				{
					iLocal_316[0] = 2;
					iLocal_317[0] = 1;
					iLocal_316[1] = 0;
					iLocal_317[1] = 0;
					iLocal_316[2] = 1;
					iLocal_317[2] = 2;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 0;
					iLocal_317[4] = 2;
				}
				else
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 2;
					iLocal_316[1] = 2;
					iLocal_317[1] = 1;
					iLocal_316[2] = 0;
					iLocal_317[2] = 2;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 0;
					iLocal_317[4] = 2;
				}
				break;
			
			case 6:
				vLocal_116 = { 0f, 0f, 63.3f };
				vLocal_115 = { 1729.4f, 6417.08f, (35.24f - 0.2f) };
				iLocal_110 = func_50(0);
				vLocal_112 = { 1733.967f, 6421.495f, 34.0372f };
				fLocal_113 = 130.9518f;
				iLocal_134 = 1;
				if (func_394(6, 18))
				{
					iLocal_316[0] = 2;
					iLocal_317[0] = 2;
					iLocal_316[1] = 1;
					iLocal_317[1] = 0;
					iLocal_316[2] = 0;
					iLocal_317[2] = 0;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 0;
					iLocal_317[4] = 0;
				}
				else
				{
					iLocal_316[0] = 1;
					iLocal_317[0] = 0;
					iLocal_316[1] = 0;
					iLocal_317[1] = 0;
					iLocal_316[2] = 1;
					iLocal_317[2] = 0;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 0;
					iLocal_317[4] = 0;
				}
				break;
			
			case 7:
				vLocal_116 = { 0f, 0f, 117f };
				vLocal_115 = { 1959.4f, 3742.33f, (32.54f - 0.2f) };
				iLocal_110 = func_50(0);
				vLocal_112 = { 1958.92f, 3746.267f, 31.3438f };
				fLocal_113 = 73.6245f;
				iLocal_134 = 1;
				if (func_394(6, 18))
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 0;
					iLocal_316[1] = 1;
					iLocal_317[1] = 1;
					iLocal_316[2] = 0;
					iLocal_317[2] = 1;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 0;
					iLocal_317[4] = 1;
				}
				else
				{
					iLocal_316[0] = 2;
					iLocal_317[0] = 0;
					iLocal_316[1] = 0;
					iLocal_317[1] = 0;
					iLocal_316[2] = 1;
					iLocal_317[2] = 1;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 0;
					iLocal_317[4] = 1;
				}
				break;
			
			case 8:
				vLocal_116 = { 0f, 0f, 92f };
				vLocal_115 = { 25.03f, -1344.96f, (29.69f - 0.2f) };
				iLocal_110 = func_50(0);
				vLocal_112 = { 30.5721f, -1339.782f, 28.4939f };
				fLocal_113 = 110.7699f;
				iLocal_134 = 1;
				if (func_394(6, 18))
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 1;
					iLocal_316[1] = 2;
					iLocal_317[1] = 0;
					iLocal_316[2] = 0;
					iLocal_317[2] = 2;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 0;
					iLocal_317[4] = 2;
				}
				else
				{
					iLocal_316[0] = 2;
					iLocal_317[0] = 1;
					iLocal_316[1] = 1;
					iLocal_317[1] = 0;
					iLocal_316[2] = 1;
					iLocal_317[2] = 2;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 0;
					iLocal_317[4] = 2;
				}
				break;
			
			case 9:
				vLocal_116 = { 0f, 0f, 75f };
				vLocal_115 = { 373.68f, 328.56f, (103.77f - 0.2f) };
				iLocal_110 = func_50(0);
				vLocal_112 = { 376.2976f, 331.8158f, 102.5664f };
				fLocal_113 = 52.0064f;
				iLocal_134 = 1;
				if (func_394(6, 18))
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 2;
					iLocal_316[1] = 2;
					iLocal_317[1] = 1;
					iLocal_316[2] = 1;
					iLocal_317[2] = 0;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 0;
					iLocal_317[4] = 0;
				}
				else
				{
					iLocal_316[0] = 2;
					iLocal_317[0] = 2;
					iLocal_316[1] = 1;
					iLocal_317[1] = 1;
					iLocal_316[2] = 0;
					iLocal_317[2] = 0;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 0;
					iLocal_317[4] = 0;
				}
				break;
			
			case 10:
				vLocal_116 = { 0f, 0f, 0f };
				vLocal_115 = { 1165.96f, 2710.2f, (38.25f - 0.105f) };
				iLocal_110 = func_50(0);
				vLocal_112 = { 1168.971f, 2719.118f, 36.0632f };
				fLocal_113 = 136.5945f;
				iLocal_134 = 3;
				if (func_394(10, 22))
				{
					iLocal_316[0] = 1;
					iLocal_317[0] = 0;
					iLocal_316[1] = 0;
					iLocal_317[1] = 0;
					iLocal_316[2] = 1;
					iLocal_317[2] = 1;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				else
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 0;
					iLocal_316[1] = 2;
					iLocal_317[1] = 0;
					iLocal_316[2] = 0;
					iLocal_317[2] = 1;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				break;
			
			case 11:
				vLocal_116 = { 0f, 0f, -92f };
				vLocal_115 = { -2967.03f, 390.9f, (15.23f - 0.2f) };
				iLocal_110 = func_50(0);
				vLocal_112 = { -2962.983f, 391.9788f, 14.0433f };
				fLocal_113 = 176.1174f;
				iLocal_134 = 3;
				if (func_394(10, 22))
				{
					iLocal_316[0] = 2;
					iLocal_317[0] = 0;
					iLocal_316[1] = 1;
					iLocal_317[1] = 0;
					iLocal_316[2] = 1;
					iLocal_317[2] = 2;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				else
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 1;
					iLocal_316[1] = 2;
					iLocal_317[1] = 1;
					iLocal_316[2] = 0;
					iLocal_317[2] = 2;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				break;
			
			case 12:
				vLocal_116 = { 0f, 0f, -145f };
				vLocal_115 = { -1222.33f, -907.82f, (12.52f - 0.2f) };
				iLocal_110 = func_50(0);
				vLocal_112 = { -1218.283f, -915.7103f, 10.3264f };
				fLocal_113 = 43.8031f;
				iLocal_134 = 3;
				if (func_394(10, 22))
				{
					iLocal_316[0] = 2;
					iLocal_317[0] = 1;
					iLocal_316[1] = 1;
					iLocal_317[1] = 1;
					iLocal_316[2] = 0;
					iLocal_317[2] = 0;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				else
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 2;
					iLocal_316[1] = 1;
					iLocal_317[1] = 0;
					iLocal_316[2] = 1;
					iLocal_317[2] = 0;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				break;
			
			case 13:
				vLocal_116 = { 0f, 0f, 103f };
				vLocal_115 = { 1134.81f, -982.36f, (46.6f - 0.2f) };
				iLocal_110 = func_50(0);
				vLocal_112 = { 1130.155f, -979.2816f, 45.4158f };
				fLocal_113 = 269.2587f;
				iLocal_134 = 3;
				if (func_394(10, 22))
				{
					iLocal_316[0] = 2;
					iLocal_317[0] = 2;
					iLocal_316[1] = 2;
					iLocal_317[1] = 0;
					iLocal_316[2] = 0;
					iLocal_317[2] = 1;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				else
				{
					iLocal_316[0] = 1;
					iLocal_317[0] = 0;
					iLocal_316[1] = 0;
					iLocal_317[1] = 0;
					iLocal_316[2] = 1;
					iLocal_317[2] = 1;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				break;
			
			case 14:
				vLocal_116 = { 0f, 0f, -41f };
				vLocal_115 = { -1486.67f, -378.46f, (40.35f - 0.2f) };
				iLocal_110 = func_50(0);
				vLocal_112 = { -1479.163f, -375.0302f, 38.1633f };
				fLocal_113 = 36.5415f;
				iLocal_134 = 3;
				if (func_394(10, 22))
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 0;
					iLocal_316[1] = 2;
					iLocal_317[1] = 1;
					iLocal_316[2] = 0;
					iLocal_317[2] = 2;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				else
				{
					iLocal_316[0] = 2;
					iLocal_317[0] = 0;
					iLocal_316[1] = 1;
					iLocal_317[1] = 0;
					iLocal_316[2] = 1;
					iLocal_317[2] = 2;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				break;
			
			case 15:
				vLocal_116 = { 0f, 0f, 145f };
				vLocal_115 = { (1698.33f - 0.04f), 4923.33f, (42.12f - 0.06f) };
				iLocal_110 = func_50(0);
				vLocal_112 = { 1707.303f, 4918.31f, 41.0636f };
				fLocal_113 = 24.9178f;
				iLocal_134 = 2;
				if (func_394(8, 20))
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 1;
					iLocal_316[1] = 0;
					iLocal_317[1] = 0;
					iLocal_316[2] = 1;
					iLocal_317[2] = 0;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				else
				{
					iLocal_316[0] = 2;
					iLocal_317[0] = 1;
					iLocal_316[1] = 1;
					iLocal_317[1] = 1;
					iLocal_316[2] = 0;
					iLocal_317[2] = 0;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				break;
			
			case 16:
				vLocal_116 = { 0f, 0f, -87f };
				vLocal_115 = { -706.69f, -913.69f, (19.27f - 0.06f) };
				iLocal_110 = func_50(0);
				vLocal_112 = { -709.7998f, -907.1352f, 18.2156f };
				fLocal_113 = 291.6504f;
				iLocal_134 = 2;
				if (func_394(8, 20))
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 2;
					iLocal_316[1] = 1;
					iLocal_317[1] = 0;
					iLocal_316[2] = 1;
					iLocal_317[2] = 1;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				else
				{
					iLocal_316[0] = 2;
					iLocal_317[0] = 2;
					iLocal_316[1] = 2;
					iLocal_317[1] = 0;
					iLocal_316[2] = 0;
					iLocal_317[2] = 1;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				break;
			
			case 17:
				vLocal_116 = { 0f, 0f, -125f };
				vLocal_115 = { -47.23f, -1757.64f, (29.48f - 0.06f) };
				iLocal_110 = func_50(0);
				vLocal_112 = { -40.42f, -1751.423f, 28.421f };
				fLocal_113 = 145.6553f;
				iLocal_134 = 2;
				if (func_394(8, 20))
				{
					iLocal_316[0] = 1;
					iLocal_317[0] = 0;
					iLocal_316[1] = 1;
					iLocal_317[1] = 1;
					iLocal_316[2] = 1;
					iLocal_317[2] = 2;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				else
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 0;
					iLocal_316[1] = 2;
					iLocal_317[1] = 0;
					iLocal_316[2] = 0;
					iLocal_317[2] = 2;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				break;
			
			case 18:
				vLocal_116 = { 0f, 0f, -74f };
				vLocal_115 = { 1164.16f, -322.9f, (69.26f - 0.06f) };
				iLocal_110 = func_50(0);
				vLocal_112 = { 1159.682f, -314.254f, 68.2051f };
				fLocal_113 = 232.6337f;
				iLocal_134 = 2;
				if (func_394(8, 20))
				{
					iLocal_316[0] = 2;
					iLocal_317[0] = 0;
					iLocal_316[1] = 2;
					iLocal_317[1] = 1;
					iLocal_316[2] = 0;
					iLocal_317[2] = 0;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				else
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 1;
					iLocal_316[1] = 2;
					iLocal_317[1] = 0;
					iLocal_316[2] = 0;
					iLocal_317[2] = 0;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				break;
			
			case 19:
				vLocal_115 = { -1820.5f, 793.78f, (138.32f - 0.22f) };
				vLocal_116 = { 0f, 0f, -47.3f };
				iLocal_110 = func_50(0);
				vLocal_112 = { -1828.907f, 799.6096f, 137.1776f };
				fLocal_113 = 247.1234f;
				iLocal_134 = 2;
				if (func_394(8, 20))
				{
					iLocal_316[0] = 2;
					iLocal_317[0] = 1;
					iLocal_316[1] = 0;
					iLocal_317[1] = 0;
					iLocal_316[2] = 0;
					iLocal_317[2] = 1;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				else
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 2;
					iLocal_316[1] = 2;
					iLocal_317[1] = 1;
					iLocal_316[2] = 0;
					iLocal_317[2] = 1;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				break;
		}
		vLocal_115 = { unk_0x89D97EB4FAE4A574(vLocal_115, vLocal_116.z, 0f, 0.075f, 0f) };
		vLocal_111 = { unk_0x883FF674F22D1F7C("mp_am_hold_up", "holdup_victim_20s", vLocal_115, vLocal_116, 0, 2) };
		vVar0 = { unk_0xBFDD14D0A09BE0FA("mp_am_hold_up", "holdup_victim_20s", vLocal_115, vLocal_116, 0, 2) };
		Local_103.f_2A = vVar0.z;
		vLocal_127 = { unk_0x883FF674F22D1F7C("mp_am_hold_up", "holdup_victim_20s_bag", vLocal_115, vLocal_116, 0, 2) };
		vVar0 = { unk_0xBFDD14D0A09BE0FA("mp_am_hold_up", "holdup_victim_20s_bag", vLocal_115, vLocal_116, 0, 2) };
		fLocal_128 = vVar0.z;
		vLocal_129 = { unk_0x883FF674F22D1F7C("mp_am_hold_up", "holdup_victim_20s_till", vLocal_115, vLocal_116, 0, 2) };
		vVar0 = { unk_0xBFDD14D0A09BE0FA("mp_am_hold_up", "holdup_victim_20s_till", vLocal_115, vLocal_116, 0, 2) };
		fLocal_130 = vVar0.z;
		Local_105 = func_393(Local_105.f_32);
		if (unk_0x0DE6397A2CB3EF75())
		{
			Local_103.f_2D = iLocal_316[0];
			if (Local_103.f_2D == 0)
			{
				StringCopy(&(Local_103.f_32), "MP_M_SHOPKEEP_01_PAKISTANI_MINI_01", 64);
				StringCopy(&(Local_103.f_2E), "StoreOwner2", 16);
			}
			else if (Local_103.f_2D == 1)
			{
				StringCopy(&(Local_103.f_32), "MP_M_SHOPKEEP_01_LATINO_MINI_01", 64);
				StringCopy(&(Local_103.f_2E), "StoreOwner", 16);
			}
			else
			{
				StringCopy(&(Local_103.f_32), "MP_M_SHOPKEEP_01_CHINESE_MINI_01", 64);
				StringCopy(&(Local_103.f_2E), "StoreOwner3", 16);
			}
		}
		if (!unk_0xFA30DFD0084E92FE(Local_105.f_34, 29))
		{
			unk_0xE090137E6ECF31FE(vLocal_115, 0.5f, iLocal_131, 1);
			unk_0xF0059F27F7BB6680(&(Local_105.f_34), 29);
		}
		return 1;
	}
	return 0;
}

int func_393(int iParam0)//Position - 0x1682B
{
	switch (iParam0)
	{
		case 16:
			return 0;
		
		case 17:
			return 1;
		
		case 18:
			return 2;
		
		case 15:
			return 3;
		
		case 19:
			return 4;
		
		case 10:
			return 5;
		
		case 11:
			return 6;
		
		case 12:
			return 7;
		
		case 13:
			return 8;
		
		case 14:
			return 9;
		
		case 2:
			return 10;
		
		case 1:
			return 11;
		
		case 3:
			return 12;
		
		case 4:
			return 13;
		
		case 5:
			return 14;
		
		case 6:
			return 15;
		
		case 7:
			return 16;
		
		case 8:
			return 17;
		
		case 9:
			return 18;
		
		case 0:
			return -2;
		
		default:
	}
	return -1;
}

bool func_394(int iParam0, int iParam1)//Position - 0x16910
{
	return func_395(unk_0x6E06C0DB9B43570D(), iParam0, iParam1);
}

int func_395(int iParam0, int iParam1, int iParam2)//Position - 0x16924
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == 24)
	{
		iParam1 = 0;
	}
	if (iParam1 < 0 || iParam1 >= 24)
	{
		return 0;
	}
	if (iParam2 == 24)
	{
		iParam2 = 0;
	}
	if (iParam2 < 0 || iParam2 >= 24)
	{
		return 0;
	}
	if (iParam1 == iParam2)
	{
		return 1;
	}
	bVar0 = iParam2 < iParam1;
	iVar1 = iParam1;
	iVar2 = iParam2;
	if (bVar0)
	{
		iVar2 = 24;
	}
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	if (!bVar0)
	{
		return 0;
	}
	iVar1 = 0;
	iVar2 = iParam2;
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	return 0;
}

void func_396(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x169CD
{
	if (iParam0 == 0)
	{
		*uParam1 = { 1393.091f, 3607.383f, 33.9809f };
		*uParam2 = { 1391.178f, 3612.516f, (38.3614f - 0.2f) };
		*uParam3 = 12.5f;
	}
	else if (iParam0 == 1)
	{
		*uParam1 = { -3045.013f, 585.9666f, (10.35421f - 0.2f) };
		*uParam2 = { -3048.714f, 584.7961f, 6.948262f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 2)
	{
		*uParam1 = { -3247.313f, 1003.657f, (15.27433f - 0.2f) };
		*uParam2 = { -3251.157f, 1003.984f, 11.83501f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 3)
	{
		*uParam1 = { 546.5474f, 2665.642f, (44.60108f - 0.2f) };
		*uParam2 = { 547.054f, 2661.794f, 41.15667f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 4)
	{
		*uParam1 = { 2552f, 384.2527f, (111.0656f - 0.2f) };
		*uParam2 = { 2548.145f, 384.4133f, 107.6241f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 5)
	{
		*uParam1 = { 2674.946f, 3284.833f, (57.68088f - 0.2f) };
		*uParam2 = { 2671.569f, 3286.699f, 54.24464f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 6)
	{
		*uParam1 = { 1733.119f, 6418.579f, (37.48002f - 0.2f) };
		*uParam2 = { 1734.839f, 6422.032f, 34.03751f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 7)
	{
		*uParam1 = { 1960.224f, 3746.258f, (34.7878f - 0.2f) };
		*uParam2 = { 1958.295f, 3749.599f, 31.34522f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 8)
	{
		*uParam1 = { 27.71382f, -1341.968f, (31.93314f - 0.2f) };
		*uParam2 = { 27.71049f, -1338.109f, 28.49479f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 9)
	{
		*uParam1 = { 377.0183f, 330.808f, (106.0112f - 0.2f) };
		*uParam2 = { 377.9499f, 334.5523f, 102.567f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 10)
	{
		*uParam1 = { 1167.015f, 2711.601f, (40.66147f - 0.2f) };
		*uParam2 = { 1167.082f, 2720.243f, 36.06501f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 11)
	{
		*uParam1 = { -2965.705f, 389.6696f, (17.64162f - 0.2f) };
		*uParam2 = { -2957.095f, 389.139f, 13.04323f };
		*uParam3 = 8.75f;
	}
	else if (iParam0 == 12)
	{
		*uParam1 = { -1222.402f, -909.5575f, (14.92466f - 0.2f) };
		*uParam2 = { -1217.682f, -916.7974f, 10.33735f };
		*uParam3 = 8.75f;
	}
	else if (iParam0 == 13)
	{
		*uParam1 = { 1133.284f, -981.473f, (49.01414f - 0.2f) };
		*uParam2 = { 1124.708f, -982.6027f, 44.42008f };
		*uParam3 = 8.75f;
	}
	else if (iParam0 == 14)
	{
		*uParam1 = { -1484.883f, -378.2694f, (42.76172f - 0.2f) };
		*uParam2 = { -1478.771f, -372.1664f, 38.16948f };
		*uParam3 = 8.75f;
	}
	else if (iParam0 == 15)
	{
		*uParam1 = { 1704.556f, 4921.806f, (44.02687f - 0.2f) };
		*uParam2 = { 1708.285f, 4919.196f, 41.06359f };
		*uParam3 = 4f;
	}
	else if (iParam0 == 16)
	{
		*uParam1 = { -709.019f, -907.7159f, (21.17918f - 0.2f) };
		*uParam2 = { -709.0177f, -903.1516f, 18.21618f };
		*uParam3 = 4f;
	}
	else if (iParam0 == 17)
	{
		*uParam1 = { -45.16617f, -1751.578f, (31.37973f - 0.2f) };
		*uParam2 = { -42.22961f, -1748.09f, 28.42099f };
		*uParam3 = 4f;
	}
	else if (iParam0 == 18)
	{
		*uParam1 = { 1160.825f, -317.4214f, (71.16085f - 0.2f) };
		*uParam2 = { 1160.033f, -312.932f, 68.20509f };
		*uParam3 = 4f;
	}
	else if (iParam0 == 19)
	{
		*uParam1 = { -1826.218f, 796.6393f, (140.1334f - 0.2f) };
		*uParam2 = { -1829.301f, 799.9996f, 137.18f };
		*uParam3 = 4f;
	}
}

void func_397(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x16E8E
{
	if (iParam0 == 0)
	{
		*uParam1 = { 1395.548f, 3600.575f, 33.98914f };
		*uParam2 = { 1392.08f, 3609.983f, (37.33543f - 0.2f) };
		*uParam3 = 12.25f;
	}
	if (iParam0 == 1)
	{
		*uParam1 = { -3038.657f, 589.5176f, 6.904751f };
		*uParam2 = { -3045.476f, 587.4066f, (11.31222f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 2)
	{
		*uParam1 = { -3240.032f, 1004.482f, 11.8307f };
		*uParam2 = { -3247.188f, 1005.107f, (16.25224f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 3)
	{
		*uParam1 = { 544.2278f, 2672.5f, 41.1565f };
		*uParam2 = { 545.201f, 2665.442f, (45.69155f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 4)
	{
		*uParam1 = { 2559.176f, 385.3936f, 107.623f };
		*uParam2 = { 2552.054f, 385.6057f, (112.1638f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 5)
	{
		*uParam1 = { 2681.864f, 3282.603f, 54.24114f };
		*uParam2 = { 2675.586f, 3285.981f, (58.79021f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 6)
	{
		*uParam1 = { 1731.237f, 6411.557f, 34.03723f };
		*uParam2 = { 1734.383f, 6417.952f, (38.58461f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 7)
	{
		*uParam1 = { 1964.999f, 3740.795f, 31.34375f };
		*uParam2 = { 1961.384f, 3746.928f, (35.89571f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 8)
	{
		*uParam1 = { Vector(28.49392f, -1348.507f, 27.03358f) + Vector(0f, -0.4f, 2f) };
		*uParam2 = { Vector(33.03834f, -1341.382f, 27.05614f) - Vector(0.2f, 0.2f, 0.2f) + Vector(0f, -0.4f, 2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 9)
	{
		*uParam1 = { 376.6309f, 323.5533f, 102.5664f };
		*uParam2 = { 378.3253f, 330.4793f, (107.1095f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 10)
	{
		*uParam1 = { 1166.497f, 2703.756f, 37.06307f };
		*uParam2 = { 1166.525f, 2711.974f, (41.66307f - 0.2f) };
		*uParam3 = 7.75f;
	}
	if (iParam0 == 11)
	{
		*uParam1 = { -2973.512f, 390.7873f, 14.04322f };
		*uParam2 = { -2965.288f, 390.2452f, (18.54322f - 0.2f) };
		*uParam3 = 7.75f;
	}
	if (iParam0 == 12)
	{
		*uParam1 = { -1226.417f, -902.6738f, 11.33496f };
		*uParam2 = { -1221.765f, -909.5887f, (15.82626f - 0.2f) };
		*uParam3 = 7.75f;
	}
	if (iParam0 == 13)
	{
		*uParam1 = { 1141.35f, -980.9322f, 45.41594f };
		*uParam2 = { 1132.976f, -982.0952f, (49.91574f - 0.2f) };
		*uParam3 = 7.75f;
	}
	if (iParam0 == 14)
	{
		*uParam1 = { -1490.949f, -383.4771f, 39.16332f };
		*uParam2 = { -1485.006f, -377.6167f, (43.66332f - 0.2f) };
		*uParam3 = 7.75f;
	}
	if (iParam0 == 15)
	{
		*uParam1 = { 1698.98f, 4929.093f, 41.06357f };
		*uParam2 = { 1705.233f, 4924.578f, (45.60386f - 0.2f) };
		*uParam3 = 14f;
	}
	if (iParam0 == 16)
	{
		*uParam1 = { -711.77f, -916.4685f, 18.21557f };
		*uParam2 = { -711.7368f, -908.7517f, (22.76488f - 0.2f) };
		*uParam3 = 14f;
	}
	if (iParam0 == 17)
	{
		*uParam1 = { -52.90452f, -1756.474f, 28.42097f };
		*uParam2 = { -47.92523f, -1750.614f, (32.94246f - 0.2f) };
		*uParam3 = 14f;
	}
	if (iParam0 == 18)
	{
		*uParam1 = { 1159.633f, -326.5087f, 68.20507f };
		*uParam2 = { 1158.335f, -318.9123f, (72.74828f - 0.2f) };
		*uParam3 = 14f;
	}
	if (iParam0 == 19)
	{
		*uParam1 = { -1822.373f, 788.2851f, 137.1876f };
		*uParam2 = { -1827.484f, 794.0739f, (141.6933f - 0.2f) };
		*uParam3 = 14f;
	}
}

void func_398(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x1733B
{
	func_399(iParam0, uParam5, uParam6);
	switch (iParam0)
	{
		case 0:
			if (*iParam1 == 0)
			{
				*iParam1 = unk_0x5E29F9399E0829A3(*uParam5, "v_methlab");
			}
			*uParam2 = -1621784842;
			*uParam4 = -924210258;
			*uParam3 = -1;
			break;
		
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			if (*iParam1 == 0)
			{
				*iParam1 = unk_0x5E29F9399E0829A3(*uParam5, "v_shop_247");
			}
			*uParam2 = 1569794095;
			*uParam4 = 462608346;
			*uParam3 = -1;
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			if (*iParam1 == 0)
			{
				*iParam1 = unk_0x5E29F9399E0829A3(*uParam5, "v_gen_liquor");
			}
			*uParam2 = -278510267;
			*uParam4 = -1293435817;
			*uParam3 = -1;
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			if (*iParam1 == 0)
			{
				*iParam1 = unk_0x5E29F9399E0829A3(*uParam5, "v_gasstation");
			}
			*uParam2 = -1659520475;
			*uParam4 = -1272390353;
			*uParam3 = -835664728;
			break;
	}
}

void func_399(int iParam0, var uParam1, var uParam2)//Position - 0x17484
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1394.169f, 3599.86f, 34.0121f };
			*uParam2 = { 1395.548f, 3600.575f, 33.98914f };
			break;
		
		case 1:
			*uParam1 = { -3038.908f, 589.5187f, 6.9048f };
			*uParam2 = { -3038.657f, 589.5176f, 6.904751f };
			break;
		
		case 2:
			*uParam1 = { -3240.317f, 1004.433f, 11.8307f };
			*uParam2 = { -3240.032f, 1004.482f, 11.8307f };
			break;
		
		case 3:
			*uParam1 = { 544.2802f, 2672.811f, 41.1566f };
			*uParam2 = { 544.2278f, 2672.5f, 41.1565f };
			break;
		
		case 4:
			*uParam1 = { 2559.247f, 385.5266f, 107.623f };
			*uParam2 = { 2559.176f, 385.3936f, 107.623f };
			break;
		
		case 5:
			*uParam1 = { 2682.003f, 3282.543f, 54.2411f };
			*uParam2 = { 2681.864f, 3282.603f, 54.24114f };
			break;
		
		case 6:
			*uParam1 = { 1731.21f, 6411.403f, 34.0372f };
			*uParam2 = { 1731.237f, 6411.557f, 34.03723f };
			break;
		
		case 7:
			*uParam1 = { 1965.054f, 3740.555f, 31.3448f };
			*uParam2 = { 1964.999f, 3740.795f, 31.34375f };
			break;
		
		case 8:
			*uParam1 = { Vector(28.5036f, -1348.813f, 27.0641f) + Vector(0f, -0.4f, 2f) };
			*uParam2 = { Vector(28.49392f, -1348.507f, 27.03358f) + Vector(0f, -0.4f, 2f) };
			break;
		
		case 9:
			*uParam1 = { 376.6533f, 323.6471f, 102.5664f };
			*uParam2 = { 376.6309f, 323.5533f, 102.5664f };
			break;
		
		case 10:
			*uParam1 = { Vector(37.1573f, 2703.114f, 1195.432f) + Vector(0f, 0.39f, -29.04f) };
			*uParam2 = { 1166.497f, 2703.756f, 37.06307f };
			break;
		
		case 11:
			*uParam1 = { -2973.262f, 390.8184f, 14.0433f };
			*uParam2 = { -2973.512f, 390.7873f, 14.04322f };
			break;
		
		case 12:
			*uParam1 = { -1226.464f, -902.5864f, 11.2783f };
			*uParam2 = { -1226.417f, -902.6738f, 11.33496f };
			break;
		
		case 13:
			*uParam1 = { 1141.36f, -980.8802f, 45.4155f };
			*uParam2 = { 1141.35f, -980.9322f, 45.41594f };
			break;
		
		case 14:
			*uParam1 = { -1491.057f, -383.5728f, 39.1706f };
			*uParam2 = { -1490.949f, -383.4771f, 39.16332f };
			break;
		
		case 15:
			*uParam1 = { 1698.808f, 4929.198f, 41.0783f };
			*uParam2 = { 1698.98f, 4929.093f, 41.06357f };
			break;
		
		case 16:
			*uParam1 = { -711.721f, -916.6965f, 18.2145f };
			*uParam2 = { -711.77f, -916.4685f, 18.21557f };
			break;
		
		case 17:
			*uParam1 = { -53.124f, -1756.405f, 28.421f };
			*uParam2 = { -52.90452f, -1756.474f, 28.42097f };
			break;
		
		case 18:
			*uParam1 = { 1159.542f, -326.6986f, 67.923f };
			*uParam2 = { 1159.633f, -326.5087f, 68.20507f };
			break;
		
		case 19:
			*uParam1 = { -1822.287f, 788.006f, 137.1859f };
			*uParam2 = { -1822.373f, 788.2851f, 137.1876f };
			break;
	}
}

int func_400(var uParam0, bool bParam1)//Position - 0x1785B
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar1 = 9999.9f;
	iVar2 = 0;
	while (iVar2 < 20)
	{
		fVar0 = unk_0xF0F2FC9DE291567F(func_85(unk_0xB5CEFD608600A09F()), func_401(iVar2), true);
		if (fVar0 < fVar1)
		{
			if (bParam1)
			{
				if (!unk_0xFA30DFD0084E92FE(Global_24FAB1.f_3E, iVar2) && unk_0xFA30DFD0084E92FE(Global_24FAB1.f_40, iVar2))
				{
					fVar1 = fVar0;
					*uParam0 = iVar2;
				}
			}
			else
			{
				fVar1 = fVar0;
				*uParam0 = iVar2;
			}
		}
		iVar2++;
	}
	return 1;
}

Vector3 func_401(int iParam0)//Position - 0x178D6
{
	vector3 vVar0;
	var uVar1;
	
	func_399(iParam0, &vVar0, &uVar1);
	return vVar0;
}

int func_402(int iParam0)//Position - 0x178EC
{
	return Local_104[iParam0 /*10*/].f_4;
}

void func_403()//Position - 0x178FC
{
	Global_255A46.f_29F.f_1C = 0;
}

void func_404()//Position - 0x1790E
{
	if (Global_1406A0.f_1 == 1)
	{
		func_405(0);
		Global_1406A0.f_1 = 0;
		Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_9 = 0;
	}
}

void func_405(int iParam0)//Position - 0x1793A
{
	if (func_375())
	{
		if (iParam0 == 1)
		{
			if (Global_267214.f_111D == -1)
			{
				Global_267214.f_111D = 60000;
			}
			func_406(&(Global_267214.f_111B), 0, 0);
			if (Global_267214.f_1120 == -1)
			{
				Global_267214.f_1120 = 10000;
			}
			func_406(&(Global_267214.f_111E), 0, 0);
		}
		else
		{
			Global_1406A0 = 0;
			Global_18C80F[unk_0xB5CEFD608600A09F() /*558*/].f_8 = 0;
			func_374(1);
		}
		if ((!unk_0x517823CA390A19F6() && !func_373()) && !func_372(unk_0xB5CEFD608600A09F()))
		{
			Global_EF3AD = 0;
		}
	}
}

void func_406(var uParam0, bool bParam1, bool bParam2)//Position - 0x179D4
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

void func_407()//Position - 0x17A11
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	if (!func_44(unk_0xB5CEFD608600A09F(), 1, 1))
	{
		iVar0 = 1;
		if (unk_0xFA30DFD0084E92FE(Local_105.f_35, 6) && !unk_0xFA30DFD0084E92FE(Local_105.f_35, 5))
		{
			iVar1 = unk_0x8378732DD7891451(-1);
			iVar2 = 0;
			unk_0xF0059F27F7BB6680(&iVar2, 8);
			unk_0xF0059F27F7BB6680(&iVar2, 4);
			unk_0xF0059F27F7BB6680(&iVar2, 1);
			if (iLocal_335 > Global_40001.f_A6)
			{
				iLocal_335 = Global_40001.f_A6;
			}
			if (iVar1 < iLocal_335)
			{
				if (iVar1 > 0)
				{
					if (func_49(func_50(1)))
					{
						if (unk_0x0A485277B2A5D0CD(iVar1, 0, 0, 0, &uVar3, -1))
						{
							if (func_216())
							{
								if (!unk_0xFA30DFD0084E92FE(Global_267214.f_7, 1))
								{
									Global_267214.f_1264 = iVar1;
									Global_267214.f_1265 = iVar2;
									Global_267214.f_1266 = { unk_0x733A3EDEC245A3D2(unk_0xBC25C936A095B5BA(), 1067030938, 1069547520) };
									func_208(&(Global_267214.f_1263), -1135378931, 537254313, 1474183246, 1022400740, Global_267214.f_1264, 1, 3);
									unk_0xF0059F27F7BB6680(&(Global_267214.f_7), 1);
									iLocal_335 = 0;
									unk_0xF0059F27F7BB6680(&(Local_105.f_35), 5);
								}
							}
							else
							{
								unk_0x050087F9137D09CA(joaat("pickup_money_variable"), unk_0x733A3EDEC245A3D2(unk_0xBC25C936A095B5BA(), 1067030938, 1069547520), iVar2, iVar1, func_50(1), 0, 0);
								func_203(-iVar1, 1, 1, 1092616192);
								unk_0x27B3D030881498E9(iVar1, 0, 0);
								func_207(1022400740, iVar1, &uVar4, 0, 0, 0);
								iLocal_335 = 0;
								func_408();
								unk_0xF0059F27F7BB6680(&(Local_105.f_35), 5);
							}
						}
					}
					else
					{
						iVar0 = 0;
					}
				}
			}
			else if (iLocal_335 > 0)
			{
				if (func_49(func_50(1)))
				{
					if (unk_0x0A485277B2A5D0CD(iLocal_335, 0, 0, 0, &uVar3, -1))
					{
						if (func_216())
						{
							if (!unk_0xFA30DFD0084E92FE(Global_267214.f_7, 1))
							{
								Global_267214.f_1264 = iLocal_335;
								Global_267214.f_1265 = iVar2;
								Global_267214.f_1266 = { unk_0x733A3EDEC245A3D2(unk_0xBC25C936A095B5BA(), 1067030938, 1069547520) };
								func_208(&(Global_267214.f_1263), -1135378931, 537254313, 1474183246, 1022400740, Global_267214.f_1264, 1, 3);
								unk_0xF0059F27F7BB6680(&(Global_267214.f_7), 1);
								iLocal_335 = 0;
								unk_0xF0059F27F7BB6680(&(Local_105.f_35), 5);
							}
						}
						else
						{
							unk_0x050087F9137D09CA(joaat("pickup_money_variable"), unk_0x733A3EDEC245A3D2(unk_0xBC25C936A095B5BA(), 1067030938, 1069547520), iVar2, iLocal_335, func_50(1), 0, 0);
							func_203(-iLocal_335, 1, 1, 1092616192);
							unk_0x27B3D030881498E9(iLocal_335, 0, 0);
							func_207(1022400740, iLocal_335, &uVar5, 0, 0, 0);
							iLocal_335 = 0;
							func_408();
							unk_0xF0059F27F7BB6680(&(Local_105.f_35), 5);
						}
					}
				}
				else
				{
					iVar0 = 0;
				}
			}
		}
		if (iVar0 == 1)
		{
			func_429();
		}
		else
		{
			return;
		}
	}
}

void func_408()//Position - 0x17CC9
{
	Global_267214.f_110 = 0;
	Global_267214.f_111 = 0;
	Global_267214.f_112 = 0;
}

int func_409()//Position - 0x17CE9
{
	var uVar0;
	
	func_416(&uVar0);
	if (Global_14083F == 0)
	{
		if (!unk_0x7AF0088ABFA713B6())
		{
			return 1;
		}
	}
	if (func_415())
	{
		return 1;
	}
	if (Global_25891C)
	{
		return 1;
	}
	if (func_414())
	{
		return 1;
	}
	if (func_413(157))
	{
		if (!func_412())
		{
			return 1;
		}
	}
	if (func_413(155))
	{
		return 1;
	}
	if (!unk_0x57D316754A262B34())
	{
		return 1;
	}
	if (func_410() != 0)
	{
		if (unk_0xB731B8C5BCE89836(func_410()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_410()//Position - 0x17D73
{
	switch (func_411())
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

int func_411()//Position - 0x17DA7
{
	return Global_62BD;
}

bool func_412()//Position - 0x17DB2
{
	return Global_255A46.f_24A;
}

int func_413(int iParam0)//Position - 0x17DC1
{
	if (unk_0xA1AC399BCBEE5B2D(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_414()//Position - 0x17DD8
{
	return Global_258063;
}

bool func_415()//Position - 0x17DE4
{
	return Global_255A46.f_245;
}

void func_416(var uParam0)//Position - 0x17DF3
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
					func_417(iVar0);
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

void func_417(int iParam0)//Position - 0x17E66
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x414AA1932D1C88E2(1, iParam0, &vVar0, 3))
	{
		if (func_44(vVar0.y, 1, 1))
		{
			iVar1 = unk_0xA95CF30C72EB526E(vVar0.y);
			if (unk_0x724D816EA203A79E(iVar1))
			{
				if (unk_0x5237AF95232D78C5(iVar1, 0))
				{
					iVar2 = unk_0x9FE9D386222EEE47(iVar1, 0);
					if (unk_0x403C891106DCABAF(iVar2, vVar0.z) && unk_0x32405B7614E36453())
					{
						if (func_418(iVar2, &bVar3))
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

int func_418(int iParam0, var uParam1)//Position - 0x17EE7
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

void func_419()//Position - 0x17F46
{
	SYSTEM::WAIT(0);
}

void func_420(int iParam0, bool bParam1, int iParam2)//Position - 0x17F53
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	int iVar25;
	int iVar26;
	
	if (bParam1)
	{
		if (unk_0x778F0492FD6A3D74())
		{
			unk_0xC4248B71D9B26306(false);
		}
	}
	if (!unk_0x7AF0088ABFA713B6())
	{
		iVar0 = iParam2;
		unk_0xDDCAA2E64649E083(iParam0, bParam1, iVar0);
	}
	else
	{
		bVar1 = iParam2 & 2 != false;
		bVar2 = iParam2 & 4 != false;
		bVar3 = iParam2 & 8 != false;
		bVar4 = iParam2 & 16 != false;
		bVar5 = iParam2 & 32 != false;
		bVar6 = iParam2 & 64 != false;
		bVar7 = iParam2 & 128 != false;
		bVar8 = iParam2 & 256 != false;
		bVar9 = iParam2 & 512 != false;
		bVar10 = iParam2 & 1024 != false;
		bVar11 = iParam2 & 2048 != false;
		bVar12 = iParam2 & 4096 != false;
		bVar13 = iParam2 & 8192 != false;
		bVar14 = iParam2 & 16384 != false;
		bVar15 = iParam2 & 32768 != false;
		bVar16 = iParam2 & 65536 != false;
		bVar17 = iParam2 & 131072 != false;
		bVar18 = iParam2 & 262144 != false;
		bVar19 = iParam2 & 524288 != false;
		bVar20 = iParam2 & 1048576 != false;
		bVar21 = iParam2 & 2097152 != false;
		bVar22 = iParam2 & 4194304 != false;
		bVar23 = iParam2 & 8388608 != false;
		if (!func_426())
		{
			bVar24 = false;
			if (bParam1 == 1)
			{
				bVar24 = true;
			}
			if (bVar15 == 0 && !bVar20)
			{
				bVar24 = true;
			}
			if (bVar9 == 1)
			{
				bVar24 = true;
			}
			if (bVar24)
			{
				return;
			}
		}
		if (bVar17)
		{
		}
		if (unk_0x96B1061E8F3CBC9A(iParam0) && unk_0x6A9CDB766DF7216F(iParam0))
		{
			iVar25 = unk_0xA95CF30C72EB526E(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && unk_0x7AF0088ABFA713B6())
				{
					unk_0x32E44624A62DB55D(1);
				}
				else if (bVar13 || (!func_327(unk_0xB5CEFD608600A09F(), 0) && !func_425()))
				{
					unk_0xDC078F87049ECECE(iVar25, !bVar13, 0);
				}
				if (!bVar13)
				{
					if (unk_0x7AF0088ABFA713B6() && !bVar18)
					{
						unk_0x32E44624A62DB55D(0);
					}
					Global_24FB5C[iParam0 /*406*/].f_F0 = 0;
				}
			}
			if (bParam1)
			{
				if (!func_424(iVar25) && !unk_0xE55B9B1B2A172FD4(iVar25))
				{
					if (!bVar21)
					{
						unk_0xD434A01DEA38A939(iVar25, true, 0);
					}
				}
				if (!unk_0xE7E55F7532DEE345(iVar25))
				{
					if (!bVar20)
					{
						unk_0x346478B12F69D4E3(iVar25, false);
					}
					unk_0x656194E145691D3E(iVar25, 1);
				}
				else if (!bVar20)
				{
					unk_0x346478B12F69D4E3(iVar25, false);
				}
				unk_0xB105531EDD3DE51B(iVar25, true);
				unk_0x3D7FF8418367D451(iParam0, 0);
				if (unk_0xE58FD1D062663A04(iVar25) && unk_0xCF9FD9F078487083(iVar25))
				{
					unk_0xF1B63714B0383791(iVar25);
				}
				unk_0xF1FC2182A76AD7FC(iVar25, 1);
				if (unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F()) == 0)
				{
					func_423();
					func_422();
				}
				if (unk_0x9C8234ED756EFA0E())
				{
					if (!bVar22)
					{
					}
				}
				if (unk_0x719413B40BB63D86())
				{
				}
				Global_24FB5C[iParam0 /*406*/].f_F1 = 0;
				if (!bVar23)
				{
					bVar2 = true;
				}
			}
			else
			{
				if (!func_424(iVar25) && !unk_0xE55B9B1B2A172FD4(iVar25))
				{
					if (!bVar21)
					{
						unk_0xD434A01DEA38A939(iVar25, !bVar14, 0);
					}
					if (!unk_0xE7E55F7532DEE345(iVar25))
					{
						if (!bVar20)
						{
							unk_0x346478B12F69D4E3(iVar25, bVar15);
						}
						if (!bVar15)
						{
							unk_0x656194E145691D3E(iVar25, 1);
						}
					}
					if (func_421(Global_440000.f_243FE))
					{
						unk_0x346478B12F69D4E3(iVar25, true);
					}
				}
				if (Global_14083F)
				{
					bVar9 = false;
				}
				if (bVar9)
				{
					unk_0x3D7FF8418367D451(iParam0, 0);
				}
				else
				{
					unk_0x3D7FF8418367D451(iParam0, 1);
				}
				unk_0xB105531EDD3DE51B(iVar25, bVar16);
				if (bVar2)
				{
					if (!unk_0xC3532F7D5B045BFC(iVar25) && !unk_0x5237AF95232D78C5(iVar25, 0))
					{
						unk_0x49D46EE47C9CCB66(iVar25);
					}
				}
			}
			iVar26 = 0;
			if (bVar1)
			{
				iVar26 |= 2;
			}
			if (bVar2)
			{
				iVar26 |= 4;
			}
			if (bVar3)
			{
				iVar26 |= 8;
			}
			if (bVar4)
			{
				iVar26 |= 16;
			}
			if (bVar5)
			{
				iVar26 |= 32;
			}
			if (bVar6)
			{
				iVar26 |= 64;
			}
			if (bVar7)
			{
				iVar26 |= 128;
			}
			if (bVar8)
			{
				iVar26 |= 256;
			}
			if (bVar9)
			{
				iVar26 |= 512;
			}
			if (bVar10)
			{
				iVar26 |= 1024;
			}
			if (bVar11)
			{
				iVar26 |= 2048;
			}
			if (bVar12)
			{
				iVar26 |= 4096;
			}
			unk_0xDDCAA2E64649E083(iParam0, bParam1, iVar26);
		}
	}
}

bool func_421(int iParam0)//Position - 0x18356
{
	return iParam0 == 17;
}

void func_422()//Position - 0x18363
{
	vector3 vVar0;
	
	Global_252E21.f_4CC = 0;
	Global_252E21.f_4CD = 0;
	Global_252E21.f_4CE = { 9999.9f, 9999.9f, 9999.9f };
	Global_252E21.f_4D3 = -1;
	Global_252E21.f_4D4 = 0;
	Global_24B2CE.f_A6F = { vVar0 };
}

void func_423()//Position - 0x183B0
{
	Global_24B2CE.f_2B2 = 0;
	Global_24B2CE.f_A9A = 0;
	Global_24B2CE.f_1FC = 0;
	Global_24B2CE.f_254 = 0;
	Global_24FB5C[unk_0xB5CEFD608600A09F() /*406*/].f_CB = 0;
	Global_24B2CE.f_A6E = 0;
}

int func_424(int iParam0)//Position - 0x183EE
{
	int iVar0;
	
	if (unk_0x5237AF95232D78C5(iParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0xF4FCC3C1048FF2AB(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_425()//Position - 0x1841F
{
	return unk_0xFA30DFD0084E92FE(Global_240006, 3);
}

int func_426()//Position - 0x18430
{
	if (func_427() == 0)
	{
		return 1;
	}
	return 0;
}

int func_427()//Position - 0x18445
{
	return Global_1406D2.f_12;
}

bool func_428(bool bParam0)//Position - 0x18453
{
	if (bParam0)
	{
		return (Global_255A46.f_29F.f_1C && unk_0x56BEECB328B6D29D(unk_0x1377080E9B0BD993()) == Global_255A46.f_29F.f_1F);
	}
	return Global_255A46.f_29F.f_1C;
}

void func_429()//Position - 0x1848F
{
	int iVar0;
	
	Global_267214.f_8 = 0;
	if (unk_0x7AF0088ABFA713B6())
	{
		if (!func_389(Local_103))
		{
			if (unk_0x89B5CBCE9D131B32(Local_103) || (!unk_0xDD5EE7D9FC37FA16(Local_103) && unk_0x0DE6397A2CB3EF75()))
			{
				unk_0x16DCE907D1FFE3CC(unk_0xE48AD7BF7762E114(Local_103), 0);
				unk_0x851D6A4006011A10(unk_0xE48AD7BF7762E114(Local_103));
				if (unk_0xFA30DFD0084E92FE(Local_105.f_34, 22))
				{
					if (unk_0xFA30DFD0084E92FE(Local_105.f_34, 20))
					{
						if (Local_103.f_3 != 7)
						{
							if (!unk_0xFA30DFD0084E92FE(Local_104[unk_0x6BAA0516CC970D99() /*10*/], 9))
							{
								unk_0xA4E856A8CD53B8DF(unk_0xE48AD7BF7762E114(Local_103));
								unk_0xA8E6405305C0D7DF(unk_0xE48AD7BF7762E114(Local_103), uLocal_121);
								unk_0x2E35C4FA5F0ED22F(unk_0xE48AD7BF7762E114(Local_103), 0);
							}
						}
						else if (unk_0xF4FCC3C1048FF2AB(unk_0xE48AD7BF7762E114(Local_103), -1442466670) != 0 && unk_0xF4FCC3C1048FF2AB(unk_0xE48AD7BF7762E114(Local_103), -1442466670) != 1)
						{
							unk_0xA4E856A8CD53B8DF(unk_0xE48AD7BF7762E114(Local_103));
							if (!unk_0x7B2E29350659BE8E(unk_0xE48AD7BF7762E114(Local_103), joaat("weapon_pistol"), 0))
							{
								unk_0x7A853DA478E4882E(unk_0xE48AD7BF7762E114(Local_103), joaat("weapon_pistol"), 25000, 1);
								unk_0xFC3C88E2313FA926(unk_0xE48AD7BF7762E114(Local_103), 30);
							}
							func_230(4);
							unk_0xB90F3BE2A1EF63DB(unk_0xE48AD7BF7762E114(Local_103), 20f, 0);
						}
					}
					else if ((unk_0xFA30DFD0084E92FE(Local_103.f_17, 3) || !func_9()) || !func_433())
					{
						if (!unk_0xFA30DFD0084E92FE(Local_104[unk_0x6BAA0516CC970D99() /*10*/], 9))
						{
							unk_0xA4E856A8CD53B8DF(unk_0xE48AD7BF7762E114(Local_103));
							unk_0xA8E6405305C0D7DF(unk_0xE48AD7BF7762E114(Local_103), uLocal_121);
							unk_0x2E35C4FA5F0ED22F(unk_0xE48AD7BF7762E114(Local_103), 0);
						}
					}
					else
					{
						unk_0xA4E856A8CD53B8DF(unk_0xE48AD7BF7762E114(Local_103));
						unk_0x22321800954A532E(unk_0xE48AD7BF7762E114(Local_103), 1);
						unk_0xDE2D2B13F24A979D(unk_0xE48AD7BF7762E114(Local_103), -1);
						unk_0x2E35C4FA5F0ED22F(unk_0xE48AD7BF7762E114(Local_103), 0);
					}
				}
			}
		}
		if ((unk_0xFA30DFD0084E92FE(Local_103.f_17, 3) || !func_9()) || unk_0x3D4274189EB7E01E() <= 1)
		{
			if (unk_0x7FFE36DB9042AF23(Local_103.f_D))
			{
				if (unk_0x89B5CBCE9D131B32(Local_103.f_D))
				{
					unk_0x17175087F2DB6AC8(unk_0x370629AFF3A5C45C(Local_103.f_D), 1, 1);
					func_45(&(Local_103.f_D));
				}
			}
		}
		if (((unk_0xFA30DFD0084E92FE(Local_103.f_17, 3) || !func_9()) || unk_0xFA30DFD0084E92FE(Local_105.f_34, 20)) || unk_0x3D4274189EB7E01E() <= 1)
		{
			if (unk_0x7FFE36DB9042AF23(Local_103.f_E))
			{
				if (unk_0x89B5CBCE9D131B32(Local_103.f_E))
				{
					func_45(&(Local_103.f_E));
				}
			}
		}
		if (func_216() && unk_0xFA30DFD0084E92FE(Global_267214.f_7, 1))
		{
			if (func_285(Global_267214.f_1263) == 1)
			{
				func_432(Global_267214.f_1263, 4);
			}
			else
			{
				func_210(Global_267214.f_1263);
			}
			unk_0x7CB6FD92BE491AD9(&(Global_267214.f_7), 1);
		}
		if (Local_103.f_C == 6)
		{
			if (unk_0x7FFE36DB9042AF23(Local_103))
			{
				if (unk_0x3C03CFD5DD1E2D97(unk_0xE48AD7BF7762E114(Local_103), "XP_Blocker"))
				{
					unk_0x9F0CCFDACCFF15B6(unk_0xE48AD7BF7762E114(Local_103), "XP_Blocker");
				}
			}
		}
		if (unk_0x0DE6397A2CB3EF75())
		{
			unk_0x9A172FCB057ABAEF(Local_103.f_1E);
		}
	}
	func_431();
	unk_0x4EA570997E107F35("mp_am_hold_up");
	unk_0x78296F03625AF8AA();
	if (func_150("SHR_MENU"))
	{
		unk_0x7456702622C62EA0(1);
	}
	Global_267214.f_9 = func_184();
	unk_0x786556581D95BCB2(func_391(Local_105));
	func_166(1, Local_105);
	if (Local_105.f_E != -1)
	{
		func_259(&(Local_105.f_E));
	}
	Global_267214.f_1B = Local_105;
	if (Global_267214.f_15FB.f_4 == 1)
	{
		Global_267214.f_15FB.f_4 = 0;
	}
	if (Global_267214.f_15FB.f_5 == 1)
	{
		Global_267214.f_15FB.f_5 = 0;
	}
	if (unk_0xFA30DFD0084E92FE(Local_105.f_34, 29))
	{
		unk_0x466BFD40867F5065(vLocal_115, 0.5f, iLocal_131, 1);
	}
	if (unk_0xFA30DFD0084E92FE(Local_105.f_35, 7))
	{
		func_404();
		unk_0x7CB6FD92BE491AD9(&(Local_105.f_35), 7);
	}
	if (unk_0x7AF0088ABFA713B6())
	{
		if (unk_0xFA30DFD0084E92FE(Local_103.f_17, 6) || unk_0xFA30DFD0084E92FE(Local_103.f_17, 21))
		{
			if (unk_0xFA30DFD0084E92FE(Local_103.f_17, 21))
			{
				iVar0 = 1;
			}
			unk_0xBFD5D07FF1228487(30, iLocal_334, iLocal_335, iVar0);
		}
	}
	if (unk_0xEF0E25DA0CB6E8FF(Local_105.f_1))
	{
		if (unk_0xEDEA6C8F42EE05F6(Local_105.f_1))
		{
			unk_0x062C9995BFD27B2A(false, 0, 3000, 1, 0, 0);
		}
		unk_0x4EC087603E1DEF9C(Local_105.f_1, 0);
	}
	func_430();
}

void func_430()//Position - 0x188A6
{
	unk_0x95E4B6F3ED223F5A();
}

void func_431()//Position - 0x188B2
{
	unk_0x02DAF06EA4F08219(&uLocal_118);
	unk_0x02DAF06EA4F08219(&uLocal_119);
}

void func_432(int iParam0, int iParam1)//Position - 0x188C8
{
	if (func_271(iParam0) != -1)
	{
		if (Global_41092C[iParam0 /*80*/].f_2 == 1)
		{
			Global_41092C[iParam0 /*80*/].f_48 = iParam1;
		}
	}
}

int func_433()//Position - 0x188F4
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < unk_0x81C86888AEA2F49B())
	{
		if (unk_0x05086B70D2CFEA6F(unk_0xCFA8A401AAD7BB5A(iVar0)))
		{
			iVar1 = unk_0x4ED43B67B3F05E0F(unk_0xCFA8A401AAD7BB5A(iVar0));
			iVar2 = unk_0xA95CF30C72EB526E(iVar1);
			if (func_44(iVar1, 1, 1))
			{
				if (unk_0x645938DA8ED5E0BA(iVar2) == iLocal_139)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_434(struct<21> Param0)//Position - 0x1894E
{
	int iVar0;
	
	func_440(func_441(Param0), Param0);
	unk_0xD1CF2F876BAD2600(2);
	unk_0x38A34821FCF0B79E(8);
	func_438(0, -1, 0);
	unk_0x76AE988734CA7760(&Local_103, 73);
	unk_0xE45D6A3FD6454198(&Local_104, 321);
	unk_0x6C87EFD58B261C6F(0);
	if (!func_437())
	{
		return 0;
	}
	if (unk_0x0DE6397A2CB3EF75())
	{
		func_49(func_50(0));
		func_49(func_50(1));
		func_49(func_50(2));
		unk_0x522053D86D6E1C7A("mp_am_hold_up");
		unk_0x522053D86D6E1C7A("mp_missheist_countrybank@cower");
		Local_103.f_2C = 8;
		if (func_436())
		{
			unk_0xF0059F27F7BB6680(&(Local_103.f_18), 11);
		}
		else if (func_435())
		{
			unk_0xF0059F27F7BB6680(&(Local_103.f_18), 12);
		}
		Local_103.f_1C = unk_0x491B2241281A03B7(1, 11);
		Local_103.f_1F = unk_0x491B2241281A03B7(1, 5);
		if ((func_12() && !func_382(unk_0xB5CEFD608600A09F(), 1)) && !func_382(unk_0xB5CEFD608600A09F(), 2))
		{
			Local_103.f_2B = 2;
			unk_0xF0059F27F7BB6680(&(Local_103.f_19), 0);
		}
		else
		{
			Local_103.f_2B = 1;
		}
		Local_103.f_47 = unk_0x55AEFCD285ECC0F2(18f, 28f);
	}
	if (func_93(unk_0xB5CEFD608600A09F()) != 155)
	{
		unk_0x3737022C467D48F7(func_50(1), 0);
	}
	iVar0 = func_130(1190, -1, 0);
	if (unk_0xFA30DFD0084E92FE(iVar0, 20) && unk_0xFA30DFD0084E92FE(iVar0, 21))
	{
		unk_0xF0059F27F7BB6680(&(Local_105.f_35), 1);
	}
	Local_104[unk_0x6BAA0516CC970D99() /*10*/].f_4 = 0;
	return 1;
}

int func_435()//Position - 0x18AAA
{
	if (Local_105.f_32 >= 0 && Local_105.f_32 <= 9)
	{
		if (func_394(5, 6) || func_394(17, 18))
		{
			return 1;
		}
		return 0;
	}
	if (Local_105.f_32 >= 10 && Local_105.f_32 <= 14)
	{
		if (func_394(9, 10) || func_394(21, 22))
		{
			return 1;
		}
		return 0;
	}
	if (Local_105.f_32 >= 15 && Local_105.f_32 <= 19)
	{
		if (func_394(7, 8) || func_394(19, 20))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_436()//Position - 0x18B56
{
	if (Local_105.f_32 >= 0 && Local_105.f_32 <= 9)
	{
		if (func_394(6, 7) || func_394(18, 19))
		{
			return 1;
		}
		return 0;
	}
	if (Local_105.f_32 >= 10 && Local_105.f_32 <= 14)
	{
		if (func_394(10, 11) || func_394(22, 23))
		{
			return 1;
		}
		return 0;
	}
	if (Local_105.f_32 >= 15 && Local_105.f_32 <= 19)
	{
		if (func_394(8, 9) || func_394(20, 21))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_437()//Position - 0x18C02
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
		if (func_415())
		{
			return 0;
		}
		if (func_413(155))
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

int func_438(int iParam0, int iParam1, bool bParam2)//Position - 0x18C5B
{
	int iVar0;
	
	iVar0 = unk_0x4796DAD7A8894E2F();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_430();
			}
			else
			{
				return 0;
			}
		}
		if (!func_439())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x7AF0088ABFA713B6())
				{
					if (!bParam2)
					{
						func_430();
					}
					else
					{
						return 0;
					}
				}
				if (func_415())
				{
					if (!bParam2)
					{
						func_430();
					}
					else
					{
						return 0;
					}
				}
				if (func_413(155))
				{
					if (!bParam2)
					{
						func_430();
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
					func_430();
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
				func_430();
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
			func_430();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_439()//Position - 0x18D70
{
	return Global_14083F;
}

void func_440(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x18D7C
{
	if (!unk_0x7AF0088ABFA713B6())
	{
		func_430();
	}
	unk_0xBF463BC3D6FFDE31(iParam0, 0, Param1.f_10);
}

int func_441(int iParam0)//Position - 0x18D9B
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

