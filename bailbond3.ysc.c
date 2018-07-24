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
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = -1;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 1000;
	var uLocal_54 = 1000;
	var uLocal_55 = 0;
	struct<4> Local_56[10];
	bool bLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	struct<5> Local_63 = { 0, 0, 0, 0, 0 } ;
	var uLocal_64 = 0;
	var uLocal_65 = -1;
	var uLocal_66 = 0;
	int iLocal_67 = 0;
	struct<20> Local_68 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<20> Local_69[6];
	int iLocal_70 = 0;
	struct<6> Local_71[6];
	struct<6> Local_72[8];
	struct<9> Local_73[4];
	struct<7> Local_74[1];
	struct<7> Local_75 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_76 = 0;
	struct<6> Local_77 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_78 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_79 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_80 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86[3] = { 0, 0, 0 };
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	bool bLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	bool bLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	bool bLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	bool bLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	float fLocal_118 = 0f;
	float fLocal_119 = 0f;
	float fLocal_120 = 0f;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
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
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	char* sLocal_146 = NULL;
	char* sLocal_147 = NULL;
	char* sLocal_148 = NULL;
	char* sLocal_149[3] = { NULL, NULL, NULL };
	char[] cLocal_150[8] = 0;
	char[] cLocal_151[8] = 0;
	char* sLocal_152 = NULL;
	char* sLocal_153 = NULL;
	char* sLocal_154 = NULL;
	char* sLocal_155 = NULL;
	char* sLocal_156 = NULL;
	var uLocal_157 = 16;
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
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	int iLocal_322 = 0;
	vector3 vLocal_323 = { 0f, 0f, 0f };
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	vector3 vLocal_327 = { 0f, 0f, 0f };
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	vector3 vLocal_331 = { 0f, 0f, 0f };
	vector3 vLocal_332 = { 0f, 0f, 0f };
	vector3 vLocal_333 = { 0f, 0f, 0f };
	vector3 vLocal_334 = { 0f, 0f, 0f };
	vector3 vLocal_335 = { 0f, 0f, 0f };
	vector3 vLocal_336 = { 0f, 0f, 0f };
	vector3 vLocal_337 = { 0f, 0f, 0f };
	vector3 vLocal_338 = { 0f, 0f, 0f };
	vector3 vLocal_339 = { 0f, 0f, 0f };
	vector3 vLocal_340 = { 0f, 0f, 0f };
	int iLocal_341 = 0;
	struct<8> Local_342 = { 0, 0, 0, 0, 0, 0, -1, 0 } ;
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
	bLocal_104 = true;
	cLocal_150 = "BB3AUD";
	cLocal_151 = "BBCAUD";
	sLocal_152 = "Trevor";
	sLocal_153 = "Maude";
	sLocal_154 = "maude_criminal_3";
	sLocal_155 = "maude_chair";
	sLocal_156 = "maude_laptop";
	StringCopy(&vLocal_323, "", 24);
	StringCopy(&vLocal_327, "MAUDE_MCS_4", 24);
	Local_63 = { ScriptParam_342 };
	if (unk_0xE8A79675302ED812(83))
	{
		if (iLocal_58 == 0)
		{
			Global_195F9 = 0;
			func_565();
		}
		else
		{
			Global_195F9 = 3;
			func_539(2);
			func_565();
		}
	}
	if (!func_527(1))
	{
		Global_195F9 = 0;
		func_565();
	}
	unk_0x25A523E067E06F54(1);
	func_507();
	if (func_506())
	{
		iVar0 = func_505();
		if (Global_154ED == 1)
		{
			iVar0++;
		}
		switch (iVar0)
		{
			case 0:
				func_436(&iLocal_341, 509.6743f, 5532.435f, 776.0009f, 153.1431f, 0, 0, 0, 0, 0, joaat("asterope"), 0, 145, 1);
				func_435(vLocal_336, fLocal_118, 1, 0);
				iLocal_61 = 2;
				func_424(1, 0);
				break;
			
			case 1:
				func_436(&iLocal_341, 2704.078f, 4152.24f, 42.2514f, 175.193f, 0, 0, 0, 0, 0, joaat("asterope"), 0, 145, 1);
				func_435(vLocal_331, 254.9762f, 0, 0);
				func_424(4, 0);
				break;
			
			default:
				break;
		}
	}
	else if (func_423(0))
	{
		if (func_422(unk_0xBC25C936A095B5BA()))
		{
			func_421(unk_0xBC25C936A095B5BA(), vLocal_336, fLocal_118, 0, 0);
			unk_0xF3F01A78937DC905(0f);
			unk_0x2B9AEC08E469E384(0f, 1065353216);
		}
	}
	while (true)
	{
		if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
		{
			unk_0x6A095EC1C9AF12A4(unk_0xB5CEFD608600A09F());
			unk_0x5D99F519B8411DB6(unk_0xB5CEFD608600A09F());
			vLocal_332 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) };
			func_410();
			func_409();
			switch (iLocal_58)
			{
				case 0:
					func_402();
					break;
				
				case 1:
					func_394();
					break;
				
				case 2:
					func_391();
					break;
				
				case 3:
					func_387();
					break;
				
				case 6:
					func_380();
					break;
				
				case 7:
					func_309();
					break;
				
				case 4:
					func_125();
					break;
				
				case 5:
					func_117(1);
					break;
				
				case 8:
					func_115();
					break;
				
				case 9:
					func_70();
					break;
			}
			if (bLocal_104 == 0)
			{
				func_1(iLocal_59);
			}
		}
		SYSTEM::WAIT(0);
	}
}

void func_1(int iParam0)//Position - 0x2BF
{
	if (iLocal_58 == iParam0)
	{
		if (func_69())
		{
			func_67(0, -1, 0);
		}
		func_34(iLocal_58);
		if (iLocal_58 == 4)
		{
			func_23(1, 0, 1);
		}
		else
		{
			func_23(1, 1, 1);
		}
		bLocal_104 = true;
		iLocal_105 = 0;
		if (iLocal_58 == 5)
		{
			func_22(500, 1);
		}
	}
	else
	{
		func_2();
	}
}

void func_2()//Position - 0x316
{
	if (func_21(unk_0xBC25C936A095B5BA()))
	{
		func_19();
		unk_0xEB233A3B7635D2AC();
		if (unk_0xF16DAFF595E80F7C())
		{
			unk_0x7456702622C62EA0(1);
		}
		switch (iLocal_58)
		{
			case 0:
				if (iLocal_60 == 1)
				{
					if (!func_69())
					{
						func_18(unk_0xBC25C936A095B5BA(), vLocal_337, fLocal_119, 0, 1);
						if (func_21(Local_68.f_9))
						{
							func_17(unk_0xBC25C936A095B5BA(), unk_0x541C2AEF053615BC(Local_68.f_9, 1));
						}
						unk_0xF3F01A78937DC905(0f);
						unk_0x2B9AEC08E469E384(0f, 1065353216);
						if (iLocal_105 == 0)
						{
							if (iLocal_59 == 1)
							{
								if (func_422(unk_0xBC25C936A095B5BA()))
								{
									func_10(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), 50f, 13, 5000, 0, 0);
									iLocal_105 = 1;
								}
							}
						}
					}
					iLocal_88 = 1;
					iLocal_61 = 2;
					func_7();
					iLocal_60 = 2;
				}
				break;
			
			case 1:
				iLocal_88 = 1;
				iLocal_87 = 1;
				if (iLocal_60 == 1)
				{
					if (!func_69())
					{
						func_18(unk_0xBC25C936A095B5BA(), vLocal_338, fLocal_120, 0, 1);
						unk_0xF3F01A78937DC905(0f);
						unk_0x2B9AEC08E469E384(0f, 1065353216);
						if (iLocal_105 == 0)
						{
							if (iLocal_59 == 2)
							{
								if (func_422(unk_0xBC25C936A095B5BA()))
								{
									func_10(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), 50f, 13, 5000, 0, 0);
									iLocal_105 = 1;
								}
							}
						}
					}
					Local_68.f_11 = (unk_0x105601648511CC64() - 5000);
					func_7();
					iLocal_60 = 2;
				}
				break;
			
			case 2:
				iLocal_81 = 1;
				if (iLocal_60 == 1)
				{
					iLocal_83 = 1;
					unk_0x49D46EE47C9CCB66(Local_68.f_9);
					func_421(Local_68.f_9, vLocal_334, 153.53f, 0, 0);
					if (!func_69())
					{
						unk_0x49D46EE47C9CCB66(unk_0xBC25C936A095B5BA());
						func_421(unk_0xBC25C936A095B5BA(), vLocal_334 + Vector(0f, -2f, -1f), -27.29f, 0, 0);
						unk_0xF3F01A78937DC905(0f);
						unk_0x2B9AEC08E469E384(0f, 1065353216);
						if (iLocal_105 == 0)
						{
							if (iLocal_59 == 3)
							{
								if (func_422(unk_0xBC25C936A095B5BA()))
								{
									func_10(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), 50f, 13, 5000, 0, 0);
									iLocal_105 = 1;
								}
							}
						}
					}
					func_19();
					func_5();
					func_7();
					iLocal_60 = 2;
				}
				break;
			
			case 3:
				iLocal_98 = 1;
				if (iLocal_60 == 1)
				{
					func_421(Local_68.f_9, vLocal_331, 0f, 0, 0);
					if (!func_69())
					{
						func_421(unk_0xBC25C936A095B5BA(), vLocal_331, 254.9762f, 0, 0);
						unk_0xF3F01A78937DC905(0f);
						unk_0x2B9AEC08E469E384(0f, 1065353216);
						if (iLocal_105 == 0)
						{
							if (iLocal_59 == 4)
							{
								if (func_422(unk_0xBC25C936A095B5BA()))
								{
									func_10(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), 50f, 13, 5000, 0, 0);
									iLocal_105 = 1;
								}
							}
						}
					}
					func_7();
					iLocal_60 = 2;
				}
				break;
			
			case 4:
				if (iLocal_60 == 1)
				{
					if (unk_0x866EAD7E27D8D0F8())
					{
						unk_0x73F91C7985A4C83B(0);
					}
				}
				break;
			
			case 6:
				if (iLocal_60 == 1)
				{
					unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), 0, 0);
					unk_0xCE6A8FE7DACF8BD4(unk_0xB5CEFD608600A09F(), 0);
					func_7();
				}
				break;
			
			case 7:
				if (iLocal_60 == 1)
				{
					iLocal_83 = 1;
					if (!func_69())
					{
						func_3(Local_68.f_9, 2.5f);
						if (iLocal_105 == 0)
						{
							if (iLocal_59 == 3)
							{
								if (func_422(unk_0xBC25C936A095B5BA()))
								{
									func_10(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), 50f, 13, 5000, 0, 0);
									iLocal_105 = 1;
								}
							}
						}
					}
					func_19();
					func_5();
					func_7();
					iLocal_60 = 2;
				}
				break;
			}
	}
}

int func_3(int iParam0, float fParam1)//Position - 0x64F
{
	vector3 vVar0;
	
	if (func_21(iParam0))
	{
		if (func_4(unk_0x541C2AEF053615BC(iParam0, 1), &vVar0, fParam1, 0))
		{
			unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), vVar0, 1, 0, 0, 1);
			func_17(unk_0xBC25C936A095B5BA(), unk_0x541C2AEF053615BC(iParam0, 1));
			return 1;
		}
	}
	return 0;
}

bool func_4(vector3 vParam0, var uParam1, float fParam2, int iParam3)//Position - 0x697
{
	var uVar0;
	vector3 vVar1;
	
	vVar1 = { unk_0x89D97EB4FAE4A574(vParam0, unk_0x55AEFCD285ECC0F2(0f, 360f), 0f, fParam2, 0f) };
	if (unk_0x2084D4C6C2DF616F(vVar1, &uVar0, 0, 0))
	{
		vVar1.z = uVar0;
	}
	*uParam1 = { vVar1 };
	return unk_0xF5D5237E20BDAEE6(vVar1, iParam3, uParam1, 0);
}

void func_5()//Position - 0x6E3
{
	Global_394A = 0;
	func_6();
}

void func_6()//Position - 0x6F3
{
	unk_0x5C7DC611411E2CF9();
	Global_41AB = 0;
	if (unk_0xE6711F601F11B66B())
	{
		unk_0x1E08809A5041F85B(false);
		Global_3DB8 = 6;
	}
}

void func_7()//Position - 0x714
{
	func_8();
	Local_68.f_11 = 0;
	Local_68.f_12 = 0;
	Local_68.f_13 = 0;
}

void func_8()//Position - 0x72F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_56)
	{
		func_9(&(Local_56[iVar0 /*4*/]));
		iVar0++;
	}
}

void func_9(var uParam0)//Position - 0x754
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_10(vector3 vParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0x76F
{
	var uVar0;
	int iVar1;
	
	uVar0 = unk_0xFC8E0C97C4F70062(vParam0, iParam1, iParam2, 127);
	if (unk_0x4EF7F52E5396B43C(uVar0))
	{
		iVar1 = (unk_0x105601648511CC64() + iParam3);
		while (!unk_0x75727AF9B92F13B9(uVar0) && unk_0x105601648511CC64() < iVar1)
		{
			if (bParam5)
			{
				func_12(0);
			}
			if (bParam4)
			{
				func_11();
			}
			SYSTEM::WAIT(0);
		}
		if (unk_0x105601648511CC64() < iVar1)
		{
		}
		unk_0xFD35AC7E0C27D42B(uVar0);
	}
}

void func_11()//Position - 0x7DF
{
	Global_4336.f_6 = 1;
}

void func_12(int iParam0)//Position - 0x7ED
{
	if (!Global_389D.f_1 == 1)
	{
		if (func_16(0))
		{
			func_13(iParam0);
		}
		unk_0xF0059F27F7BB6680(&Global_93C, 2);
	}
}

void func_13(int iParam0)//Position - 0x816
{
	if (Global_3943)
	{
		func_15(0, 0);
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
	if (!func_14())
	{
		Global_389D.f_1 = 3;
	}
}

int func_14()//Position - 0x886
{
	if (Global_389D.f_1 == 1 || Global_389D.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_15(bool bParam0, bool bParam1)//Position - 0x8AD
{
	if (bParam0)
	{
		if (func_16(0))
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

int func_16(int iParam0)//Position - 0x921
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

void func_17(int iParam0, struct<2> Param1, float fParam2)//Position - 0x97B
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	vVar0 = { unk_0x541C2AEF053615BC(iParam0, 1) };
	fVar2 = (Param1 - vVar0.x);
	fVar3 = (Param1.f_1 - vVar0.y);
	if (fVar3 != 0f)
	{
		fVar1 = unk_0xE8CFCB6B2165523B(fVar2, fVar3);
	}
	else if (fVar2 < 0f)
	{
		fVar1 = -90f;
	}
	else
	{
		fVar1 = 90f;
	}
	fVar1 = (fVar1 * -1f);
	unk_0x019CE76D5286C95C(iParam0, fVar1);
}

int func_18(int iParam0, vector3 vParam1, float fParam2, bool bParam3, int iParam4)//Position - 0x9DA
{
	bool bVar0;
	float fVar1;
	
	bVar0 = false;
	if (func_422(iParam0))
	{
		if (bParam3 == 1)
		{
			fVar1 = 0f;
			bVar0 = unk_0x2084D4C6C2DF616F(vParam1, &fVar1, 0, 0);
			if (bVar0)
			{
				vParam1.z = fVar1;
			}
		}
		unk_0x641B19E156645A92(iParam0, vParam1, 1, 0, 0, iParam4);
		unk_0x019CE76D5286C95C(iParam0, fParam2);
		if (bParam3)
		{
			return bVar0;
		}
		return 1;
	}
	return 0;
}

void func_19()//Position - 0xA36
{
	Global_394A = 0;
	func_20();
}

void func_20()//Position - 0xA46
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

int func_21(int iParam0)//Position - 0xA9D
{
	if (func_422(iParam0))
	{
		if (!unk_0x36CEFBE9B745A58D(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_22(int iParam0, bool bParam1)//Position - 0xABD
{
	if (unk_0x17FAADF9916EF741() || unk_0x422F9EDE839E6ABB())
	{
		if (!unk_0x26641E1BFD792DBC())
		{
			unk_0x829FA4611BD56B44(iParam0);
		}
	}
	if (bParam1)
	{
		while (!unk_0x726D9204B160D23E())
		{
			SYSTEM::WAIT(0);
		}
	}
}

void func_23(int iParam0, int iParam1, int iParam2)//Position - 0xAF9
{
	func_24(0, 0, iParam2, 1);
	if (iParam0 == 1)
	{
		unk_0x2B9AEC08E469E384(0f, 1065353216);
		unk_0xF3F01A78937DC905(0f);
	}
	if (iParam1 == 1)
	{
		func_22(500, 0);
	}
}

void func_24(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0xB2D
{
	int iVar0;
	
	iVar0 = unk_0xFC1CAE18F3ECBF2D();
	unk_0x0B55204F721A7EA1(iVar0, 0);
	unk_0xDDCAA2E64649E083(iVar0, bParam3, 0);
	func_25(0, 1, 0, 0, 0);
	if (iParam2 == 1)
	{
		unk_0x43F06392C4EF25E0(true);
		unk_0x59B038076F830627(true);
	}
	unk_0x7456702622C62EA0(1);
	if (iParam0 == 1)
	{
		unk_0xAC8915327014F426(0, 0);
	}
	if (iParam1 == 1)
	{
		if ((iLocal_43 != 0 && iLocal_43 != joaat("object")) && iLocal_43 != joaat("gadget_parachute"))
		{
			if (func_422(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x7B2E29350659BE8E(unk_0xBC25C936A095B5BA(), iLocal_43, 0))
				{
					unk_0x8E25082A46F87892(unk_0xBC25C936A095B5BA(), iLocal_43, false);
				}
			}
		}
	}
	if (func_21(unk_0xBC25C936A095B5BA()))
	{
		unk_0x4060A19D5551068A(unk_0xBC25C936A095B5BA(), 0, 0);
	}
}

void func_25(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)//Position - 0xBD5
{
	if (bParam0)
	{
		unk_0x0D2E9062E966BE4F(unk_0xB5CEFD608600A09F());
		unk_0x8D554ED10E00EEE3(unk_0xB5CEFD608600A09F(), 1);
		unk_0xDE255B32C6B37E90(unk_0xB5CEFD608600A09F(), 1);
		func_33(1);
		unk_0x32FF237D69EB5489();
		unk_0x3169E2C5E6A096BC();
		if (Global_389D.f_1 > 3)
		{
			if (unk_0x58E7DDFF8D17A82A())
			{
				unk_0x1E08809A5041F85B(false);
			}
			if (!func_14())
			{
				Global_389D.f_1 = 3;
			}
			Global_3DB8 = 5;
		}
		func_32(1, iParam3, iParam2, 0);
		Global_DAA5 = 1;
		Global_10ABB = 1;
		Global_11540 = 1;
	}
	else
	{
		func_33(0);
		unk_0xCB50D125C355ED9C();
		Global_DAA5 = 0;
		if (bParam1)
		{
			unk_0x7FF4F08CAB3344B1();
		}
		unk_0x8D554ED10E00EEE3(unk_0xB5CEFD608600A09F(), 0);
		unk_0xDE255B32C6B37E90(unk_0xB5CEFD608600A09F(), 0);
		func_32(0, iParam3, iParam2, 0);
		if (unk_0x7AF0088ABFA713B6())
		{
			if ((((!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && !func_30(unk_0xB5CEFD608600A09F())) && !func_27(unk_0xB5CEFD608600A09F(), 0)) && !func_26()) && !bParam4)
			{
				unk_0x1E5C2A1EAB944289(unk_0xBC25C936A095B5BA(), false);
			}
		}
		else if ((!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && !func_30(unk_0xB5CEFD608600A09F())) && !bParam4)
		{
			unk_0x1E5C2A1EAB944289(unk_0xBC25C936A095B5BA(), false);
		}
		Global_11540 = 0;
	}
}

bool func_26()//Position - 0xCFE
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_27.f_12, 14);
}

bool func_27(int iParam0, int iParam1)//Position - 0xD1B
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

int func_28(int iParam0, bool bParam1)//Position - 0xD66
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

int func_29()//Position - 0xDA7
{
	return Global_1407E0;
}

int func_30(int iParam0)//Position - 0xDB3
{
	if (func_27(iParam0, 0))
	{
		return 1;
	}
	if (func_31())
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

bool func_31()//Position - 0xDF5
{
	return unk_0xFA30DFD0084E92FE(Global_240006, 3);
}

int func_32(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0xE06
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

void func_33(int iParam0)//Position - 0xE39
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

void func_34(int iParam0)//Position - 0xE5C
{
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		switch (iParam0)
		{
			case 4:
				func_66(&vLocal_327);
				func_65();
				while (!func_58(1, 1093140480, 0) || !func_35())
				{
					func_66(&vLocal_327);
					func_65();
					SYSTEM::WAIT(0);
				}
				break;
			}
	}
}

int func_35()//Position - 0xEB8
{
	if (func_57(vLocal_332, Local_75.f_1, 210f))
	{
		if (!iLocal_112)
		{
			if ((func_56(2) && func_55(&Local_77, Local_77.f_5, Local_77.f_1, Local_77.f_4, 1)) && func_55(&Local_78, Local_78.f_5, Local_78.f_1, Local_78.f_4, 1))
			{
				if (func_52(&Local_75, Local_75.f_6, Local_75.f_1, Local_75.f_4, 1, 0, 1))
				{
					func_47();
					iLocal_112 = 1;
				}
			}
		}
		if (!unk_0x724D816EA203A79E(Local_79))
		{
			if (func_57(vLocal_332, Local_79.f_1, 150f))
			{
				if (unk_0x70CF24CEFB0F53B0(Local_79.f_1, 10f, func_46(), 0))
				{
					Local_79 = unk_0xCE5CC3450F9879E0(Local_79.f_1, 10f, func_46(), 1, 0, 1);
					if (func_422(Local_79))
					{
						unk_0x641B19E156645A92(Local_79, func_45(), 1, 0, 0, 1);
						unk_0x019CE76D5286C95C(Local_79, func_44());
						unk_0x346478B12F69D4E3(Local_79, true);
					}
				}
			}
		}
		if (!unk_0x724D816EA203A79E(Local_80))
		{
			if (func_57(vLocal_332, Local_80.f_1, 150f))
			{
				if (unk_0x70CF24CEFB0F53B0(Local_80.f_1, 10f, func_43(), 0))
				{
					Local_80 = unk_0xCE5CC3450F9879E0(Local_80.f_1, 10f, func_43(), 1, 0, 1);
				}
			}
		}
	}
	else if (!unk_0x33CC9445B2DF9387(Local_75.f_1, 2.5f))
	{
		func_40(&Local_75, 1);
		unk_0x4EA570997E107F35(func_39());
		func_36(&Local_77, 1);
		func_36(&Local_78, 1);
		func_36(&Local_79, 0);
		func_36(&Local_80, 0);
		iLocal_112 = 0;
	}
	return iLocal_112;
}

void func_36(int iParam0, bool bParam1)//Position - 0x106D
{
	if (bParam1)
	{
		func_38(iParam0);
	}
	else
	{
		func_37(iParam0, 0);
	}
}

void func_37(int iParam0, bool bParam1)//Position - 0x108A
{
	if (unk_0x724D816EA203A79E(*iParam0))
	{
		if (unk_0x2FAEA11D96CF14A3(*iParam0))
		{
			unk_0x17175087F2DB6AC8(*iParam0, 1, 1);
		}
		if (!bParam1)
		{
			unk_0xF8ED8988FAF2823F(iParam0);
		}
		else
		{
			unk_0x5524CBCEE0910236(*iParam0);
		}
	}
}

void func_38(int iParam0)//Position - 0x10C5
{
	if (unk_0x724D816EA203A79E(*iParam0))
	{
		if (unk_0x2FAEA11D96CF14A3(*iParam0))
		{
			unk_0x17175087F2DB6AC8(*iParam0, 1, 1);
		}
		unk_0xA35241BCE4C1A24B(iParam0);
	}
}

char* func_39()//Position - 0x10F0
{
	return "special_ped@maude@base";
}

void func_40(int iParam0, bool bParam1)//Position - 0x10FB
{
	if (bParam1)
	{
		func_42(iParam0);
	}
	else
	{
		func_41(iParam0, 1, 0, 1);
	}
}

void func_41(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x111A
{
	if (unk_0x724D816EA203A79E(*iParam0))
	{
		if (!unk_0x36CEFBE9B745A58D(*iParam0))
		{
			unk_0xB71D41C0310C93DE(*iParam0, 0, 1);
			if (iParam3 == 0)
			{
				unk_0xD999D66C5AFA4BE3(*iParam0);
			}
			unk_0x22321800954A532E(*iParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0x2E35C4FA5F0ED22F(*iParam0, 0);
			}
		}
		unk_0x02537C8C1BEEB477(iParam0);
	}
}

void func_42(int iParam0)//Position - 0x116A
{
	if (unk_0x724D816EA203A79E(*iParam0))
	{
		if (!unk_0x1D403DFADBC2DE3C(*iParam0, 0))
		{
			unk_0xB71D41C0310C93DE(*iParam0, 0, 1);
		}
		if (!unk_0x5CAE759AE8219D20(*iParam0))
		{
			unk_0x77815D3407C6700D(*iParam0, true, 0);
		}
		unk_0xF845620A03C7425B(iParam0);
	}
}

int func_43()//Position - 0x11AB
{
	return 2057223314;
}

float func_44()//Position - 0x11B8
{
	return -92.17f;
}

Vector3 func_45()//Position - 0x11C5
{
	return 2727.4f, 4145.56f, 43.68f;
}

int func_46()//Position - 0x11DC
{
	return -380698483;
}

void func_47()//Position - 0x11E9
{
	int iVar0;
	int iVar1;
	
	if (func_21(Local_75))
	{
		if (func_422(Local_77))
		{
			if (func_56(2))
			{
				iVar0 = unk_0xD0D858E538FD01C3(func_51(), func_50(), 2);
				unk_0xC2BF3DE5E47F801D(iVar0, true);
				unk_0x69D4A898629B0BDA(iVar0, 0);
				unk_0xB62398E536F695FC(Local_75, iVar0, func_39(), func_49(), 1000f, -8f, 4688, 0, 1148846080, 0);
				iVar1 = 0;
				iVar1 += 16;
				iVar1 += 64;
				iVar1 += 512;
				iVar1 += 4096;
				unk_0xBEBE356CCD6268A1(Local_77, iVar0, func_48(), func_39(), 1000f, -8f, iVar1, 1148846080);
				unk_0x2E35C4FA5F0ED22F(Local_75, 1);
				unk_0x8EF3D958386640FE(Local_75, 0);
				unk_0xB105531EDD3DE51B(Local_75, false);
				unk_0x4106FAF8AA1D69D5(Local_75, 1862763509);
				unk_0x95F58F57ACD332BA(Local_75, 0);
				unk_0x6757D726B4BAF0C4(Local_75, 0);
				unk_0x22321800954A532E(Local_75, 1);
				unk_0xC8FD3EBBB90E8D7F(Local_75, 118, false);
			}
		}
	}
}

char* func_48()//Position - 0x12D5
{
	return "base_chair";
}

char* func_49()//Position - 0x12E0
{
	return "base";
}

Vector3 func_50()//Position - 0x12EB
{
	return 0f, 0f, -92.17f;
}

Vector3 func_51()//Position - 0x12FA
{
	return 2727.4f, 4145.56f, 43.68f;
}

int func_52(var uParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x1311
{
	if (!unk_0x724D816EA203A79E(*uParam0))
	{
		if (func_54(iParam1))
		{
			*uParam0 = unk_0x01B3635C3E8EDD81(26, iParam1, vParam2, fParam3, 1, true);
			if (unk_0x724D816EA203A79E(*uParam0))
			{
				if (bParam5)
				{
					unk_0x346478B12F69D4E3(*uParam0, true);
				}
				if (bParam6)
				{
					if (!unk_0x36CEFBE9B745A58D(*uParam0))
					{
						unk_0x2E35C4FA5F0ED22F(*uParam0, 1);
					}
				}
				if (bParam4)
				{
					func_53(iParam1, 1);
				}
				return 1;
			}
		}
	}
	else
	{
		if (bParam4)
		{
			func_53(iParam1, 0);
		}
		return 1;
	}
	return 0;
}

void func_53(int iParam0, bool bParam1)//Position - 0x1393
{
	if (iParam0 != 0)
	{
		if (bParam1)
		{
			if (unk_0xD6513D668481290A(iParam0))
			{
				unk_0x2CA123B0622F495C(iParam0);
			}
		}
		else
		{
			unk_0x2CA123B0622F495C(iParam0);
		}
	}
}

int func_54(int iParam0)//Position - 0x13BE
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0xF243B7A14FCFD0F4(iParam0);
	if (unk_0xD6513D668481290A(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_55(var uParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4)//Position - 0x13E4
{
	if (!unk_0x724D816EA203A79E(*uParam0))
	{
		if (func_54(iParam1))
		{
			*uParam0 = unk_0xB6896943DA475493(iParam1, vParam2, true, true, 0);
			if (unk_0x724D816EA203A79E(*uParam0))
			{
				unk_0x019CE76D5286C95C(*uParam0, fParam3);
				unk_0xDF8A3F99E7CDEF9C(*uParam0, 1);
				if (bParam4)
				{
					func_53(iParam1, 1);
				}
				return 1;
			}
		}
	}
	else
	{
		if (bParam4)
		{
			func_53(iParam1, 0);
		}
		return 1;
	}
	return 0;
}

int func_56(int iParam0)//Position - 0x144F
{
	switch (iParam0)
	{
		case 0:
			unk_0x900CF084251DED26("BBONDS", 0);
			if (unk_0xFA9040D29FE330BD(0))
			{
				return 1;
			}
			break;
		
		case 2:
			unk_0x522053D86D6E1C7A(func_39());
			if (unk_0xF9E082857622D91E(func_39()))
			{
				return 1;
			}
			break;
		
		case 1:
			unk_0x522053D86D6E1C7A("oddjobs@bailbond_mountain");
			if (unk_0xF9E082857622D91E("oddjobs@bailbond_mountain"))
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_57(vector3 vParam0, vector3 vParam1, float fParam2)//Position - 0x14BA
{
	return SYSTEM::VDIST2(vParam0, vParam1) <= (fParam2 * fParam2);
}

int func_58(int iParam0, float fParam1, int iParam2)//Position - 0x14D4
{
	int iVar0;
	
	iVar0 = 1;
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		if ((!unk_0xE3CA72BD77D43B09(unk_0xBC25C936A095B5BA()) && !unk_0x11030C52A0DDFF8C(unk_0xBC25C936A095B5BA())) && !unk_0x57379381A330B2FF(unk_0xBC25C936A095B5BA()))
		{
			if (!func_63(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), fParam1, 1, 1056964608, 0, 1, 0))
			{
				iVar0 = 0;
			}
			else if (iParam2 == 1)
			{
				iVar0 = 0;
				if (!func_62(unk_0xBC25C936A095B5BA(), -828834893))
				{
					unk_0xA3981DED4FC2E56E(unk_0xBC25C936A095B5BA(), 0, 0);
				}
			}
			if (unk_0x2A348A3A98B80B13(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)))
			{
				iVar0 = 0;
			}
		}
	}
	func_61();
	if (func_60())
	{
		func_19();
		iVar0 = 0;
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (iParam0 == 1)
	{
		if (!func_59())
		{
			return 0;
		}
	}
	if (unk_0xE6711F601F11B66B())
	{
		unk_0x1E08809A5041F85B(false);
	}
	return 1;
}

bool func_59()//Position - 0x15A8
{
	bool bVar0;
	
	bVar0 = unk_0xDC9E16E99286F31D();
	if (!Global_11541)
	{
		if (!bVar0)
		{
			Global_11541 = 1;
		}
	}
	return bVar0;
}

int func_60()//Position - 0x15CB
{
	if (Global_3DB8 != 0 || unk_0xE6711F601F11B66B())
	{
		return 1;
	}
	return 0;
}

void func_61()//Position - 0x15ED
{
	unk_0xBBC4195AD74D153D(0, 21, 1);
	unk_0xBBC4195AD74D153D(0, 37, 1);
	unk_0xBBC4195AD74D153D(0, 25, 1);
	unk_0xBBC4195AD74D153D(0, 141, 1);
	unk_0xBBC4195AD74D153D(0, 140, 1);
	unk_0xBBC4195AD74D153D(0, 24, 1);
	unk_0xBBC4195AD74D153D(0, 257, 1);
	unk_0xBBC4195AD74D153D(0, 22, 1);
	unk_0xBBC4195AD74D153D(0, 23, 1);
}

int func_62(int iParam0, int iParam1)//Position - 0x163E
{
	if (func_21(iParam0))
	{
		if (unk_0xF4FCC3C1048FF2AB(iParam0, iParam1) == 1 || unk_0xF4FCC3C1048FF2AB(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_63(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x1671
{
	unk_0xBBC4195AD74D153D(0, 71, 1);
	unk_0xBBC4195AD74D153D(0, 72, 1);
	unk_0xBBC4195AD74D153D(0, 76, 1);
	unk_0xBBC4195AD74D153D(0, 73, 1);
	unk_0xBBC4195AD74D153D(0, 59, 1);
	unk_0xBBC4195AD74D153D(0, 60, 1);
	if (bParam5)
	{
		unk_0xBBC4195AD74D153D(0, 75, 1);
	}
	unk_0xBBC4195AD74D153D(0, 80, 1);
	if (!bParam6)
	{
		unk_0xBBC4195AD74D153D(0, 69, 1);
		unk_0xBBC4195AD74D153D(0, 70, 1);
		unk_0xBBC4195AD74D153D(0, 68, 1);
	}
	unk_0xBBC4195AD74D153D(0, 74, 1);
	unk_0xBBC4195AD74D153D(0, 86, 1);
	unk_0xBBC4195AD74D153D(0, 81, 1);
	unk_0xBBC4195AD74D153D(0, 82, 1);
	unk_0xBBC4195AD74D153D(0, 138, 1);
	unk_0xBBC4195AD74D153D(0, 136, 1);
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
	unk_0xBBC4195AD74D153D(0, 131, 1);
	unk_0xBBC4195AD74D153D(0, 132, 1);
	unk_0xBBC4195AD74D153D(0, 123, 1);
	unk_0xBBC4195AD74D153D(0, 126, 1);
	unk_0xBBC4195AD74D153D(0, 129, 1);
	unk_0xBBC4195AD74D153D(0, 130, 1);
	unk_0xBBC4195AD74D153D(0, 133, 1);
	unk_0xBBC4195AD74D153D(0, 134, 1);
	unk_0x12D40A07C0F343DC();
	func_64(iParam0);
	if ((unk_0x105601648511CC64() - Global_1D) > 500)
	{
		unk_0x241D744C1CCBC526(iParam0, fParam1, iParam2, iParam4);
	}
	Global_1D = unk_0x105601648511CC64();
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		if (unk_0x357058E632979E65(unk_0x8910237449BB6F79(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_64(int iParam0)//Position - 0x1800
{
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		if (unk_0xB90934C41404D57A(iParam0))
		{
			if (unk_0x8324A028D312E68D(iParam0))
			{
				unk_0xFE0D4DB713B1C1E7(iParam0, 0);
			}
		}
	}
}

void func_65()//Position - 0x182C
{
	if (func_422(Local_68.f_9))
	{
		if (unk_0xA5A42DEC1470C5A9())
		{
			unk_0x2C5D30EE32747F1F(sLocal_154, Local_68.f_9, 0);
		}
	}
	if (func_422(Local_75))
	{
		if (unk_0xA5A42DEC1470C5A9())
		{
			unk_0x2C5D30EE32747F1F(sLocal_153, Local_75, 0);
		}
	}
}

void func_66(char* sParam0)//Position - 0x186E
{
	func_25(1, 1, 0, 0, 0);
	unk_0x04DD7A558FCF2C34(sParam0, 8);
}

void func_67(int iParam0, int iParam1, int iParam2)//Position - 0x1887
{
	if (func_506() && func_69())
	{
		while (Global_16B16 != 6)
		{
			SYSTEM::WAIT(0);
		}
		unk_0x121BBDEFA4F0C22B(0);
		if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
		{
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				unk_0xF643D76BBEB27712(unk_0xBC25C936A095B5BA());
			}
		}
		if (iParam0 != 0)
		{
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x724D816EA203A79E(iParam0))
				{
					if (unk_0xE59B7F5A03335350(iParam0, 0))
					{
						if (!unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iParam0, 0))
						{
							unk_0xBD53A029D0155A42(unk_0xBC25C936A095B5BA(), iParam0, iParam1);
							unk_0x2B9AEC08E469E384(0f, 1065353216);
							unk_0xF3F01A78937DC905(0f);
							SYSTEM::WAIT(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
			{
				unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
			}
		}
		unk_0x174DF5072163DD21();
		func_68(0);
	}
}

void func_68(int iParam0)//Position - 0x194B
{
	if (iParam0 == 1)
	{
		unk_0xF0059F27F7BB6680(&(Global_16B1B.f_14), 13);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&(Global_16B1B.f_14), 13);
	}
}

bool func_69()//Position - 0x1974
{
	return unk_0xFA30DFD0084E92FE(Global_16B1B.f_14, 13);
}

void func_70()//Position - 0x1988
{
	char* sVar0;
	int iVar1;
	
	sVar0 = 0;
	switch (iLocal_60)
	{
		case 0:
			unk_0xEB233A3B7635D2AC();
			unk_0x7456702622C62EA0(1);
			if (func_60())
			{
				func_19();
			}
			func_111();
			Global_195F9 = 3;
			if (iLocal_62 == 4)
			{
				if (func_21(Local_75))
				{
					func_110(&uLocal_157, 4);
					func_109(Local_75, 0);
					if (!unk_0x9986AD62CA3DE747(Local_75))
					{
						if (func_108(Local_75, unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0), 35f))
						{
							unk_0x0DEF5E53360637F2(Local_75, 0);
							func_106(Local_75, "GENERIC_FRIGHTENED_HIGH", "MAUDE", 3);
						}
					}
				}
				if (unk_0x724D816EA203A79E(Local_78))
				{
					unk_0x346478B12F69D4E3(Local_78, false);
				}
				if (unk_0x724D816EA203A79E(Local_79))
				{
					unk_0x346478B12F69D4E3(Local_79, false);
				}
				unk_0x522053D86D6E1C7A(func_105());
				if (func_103(&Local_75, &Local_77, &iLocal_141))
				{
					iLocal_103 = 1;
				}
			}
			else if (iLocal_62 == 2)
			{
				iLocal_95 = 0;
				StringCopy(&vLocal_323, "BBC_T12", 24);
			}
			if (func_21(Local_68.f_9))
			{
				if (unk_0xD45C08B05D4687A7(Local_68.f_9))
				{
					unk_0x57EB4CC8F1928A47(Local_68.f_9);
				}
				func_102(Local_68.f_9, 1);
			}
			iVar1 = 0;
			while (iVar1 <= (iLocal_132 - 1))
			{
				func_102(Local_69[iVar1 /*20*/], 1);
				iVar1++;
			}
			switch (iLocal_62)
			{
				case 1:
					break;
				
				case 2:
					sVar0 = "BBS_F1";
					break;
				
				case 3:
					sVar0 = "BBS_F3";
					break;
				
				case 4:
					sVar0 = "BBS_F2";
					break;
				
				case 0:
					break;
			}
			if (iLocal_62 != 0)
			{
				func_101(sVar0);
			}
			func_539(2);
			iLocal_60 = 1;
			break;
		
		case 1:
			if (func_100())
			{
				if (unk_0xDB5C848CD9F1133E(unk_0xBC25C936A095B5BA()) > 4f || (unk_0xADC5538B9DCA2177(unk_0xBC25C936A095B5BA()) != -1 && unk_0xADC5538B9DCA2177(unk_0xBC25C936A095B5BA()) != 3))
				{
					func_98(1163.149f, 4432.493f, 59.3682f, 266.3425f);
					func_96(1178f, 4435.16f, 57.58f, 294.03f);
				}
				func_90(1);
				func_565();
			}
			else
			{
				if (!iLocal_95)
				{
					if (func_60())
					{
						func_5();
					}
					if (iLocal_62 == 4)
					{
						if (func_21(Local_75))
						{
							if (func_108(Local_75, vLocal_332, 35f))
							{
								func_89(&uLocal_157, 4, Local_75, "MAUDE", 0, 1);
								if (func_73(&uLocal_157, cLocal_151, &vLocal_323, 4, 0, 0, 0))
								{
									iLocal_95 = 1;
								}
							}
						}
					}
					else if (func_73(&uLocal_157, cLocal_151, &vLocal_323, 4, 0, 0, 0))
					{
						iLocal_95 = 1;
					}
				}
				if (iLocal_62 == 4)
				{
					if (!iLocal_103)
					{
						unk_0x522053D86D6E1C7A(func_105());
						if (func_103(&Local_75, &Local_77, &iLocal_141))
						{
							iLocal_103 = 1;
						}
					}
					else if (func_21(Local_75))
					{
						if (!func_62(Local_75, 1805844857))
						{
							if (!unk_0x889DA6CE8E4DB344(Local_75))
							{
								if (!unk_0x96044E39418AAF17(Local_75, func_105(), func_72(), 3))
								{
									func_71(&Local_75);
									unk_0x5558ED6D4A2DEC93(Local_75, unk_0xBC25C936A095B5BA(), 50f, -1, 0, 0);
									unk_0x22321800954A532E(Local_75, 1);
								}
							}
						}
					}
				}
			}
			break;
	}
}

void func_71(int iParam0)//Position - 0x1C88
{
	if (func_21(*iParam0))
	{
		unk_0xABA7AE40608505F2(*iParam0, 2, false);
		unk_0xABA7AE40608505F2(*iParam0, 64, false);
		unk_0xABA7AE40608505F2(*iParam0, 128, false);
		unk_0xABA7AE40608505F2(*iParam0, 8, false);
		unk_0xABA7AE40608505F2(*iParam0, 1, false);
		unk_0xABA7AE40608505F2(*iParam0, 32, false);
		unk_0x91629AC1E1F78419(*iParam0, 5, 0);
		unk_0x91629AC1E1F78419(*iParam0, 17, 1);
		unk_0xC8FD3EBBB90E8D7F(*iParam0, 118, true);
	}
}

char* func_72()//Position - 0x1CF1
{
	return "female_Flee_Table_Left_Maude";
}

int func_73(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1CFC
{
	if (iParam4 == 0)
	{
		if (unk_0x4B8E3E5901E59EB8())
		{
			if (unk_0x2DC92D46FC48E795(203) != 0)
			{
				return 0;
			}
		}
	}
	if (func_74(uParam0, sParam1, sParam2, iParam3, iParam4, iParam5, iParam6))
	{
		return 1;
	}
	return 0;
}

bool func_74(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1D39
{
	func_88(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_75(sParam2, iParam3, 0);
}

int func_75(char* sParam0, int iParam1, bool bParam2)//Position - 0x1D87
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
					func_20();
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
		if (func_87(8, -1))
		{
			return 0;
		}
		Global_3E04 = { Global_3DFE };
		func_86();
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
				func_79();
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
				if (func_78())
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
			func_77();
			Global_3DC2 = bParam2;
		}
		Global_3DBA = iParam1;
		StringCopy(&Global_3C3B, sParam0, 24);
		Global_394A = 0;
		func_76();
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
		func_20();
	}
	return 0;
}

void func_76()//Position - 0x2053
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

void func_77()//Position - 0x2084
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

int func_78()//Position - 0x2119
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

void func_79()//Position - 0x21B2
{
	if (func_85(14))
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
		Global_389D = func_80();
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

int func_80()//Position - 0x2254
{
	func_81();
	return Global_19B04.f_932.f_21B.f_10CD;
}

void func_81()//Position - 0x226D
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_84(Global_19B04.f_932.f_21B.f_10CD) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_83(unk_0xBC25C936A095B5BA());
			if (func_82(iVar0) && (!func_85(14) || Global_196EB))
			{
				if (Global_19B04.f_932.f_21B.f_10CD != iVar0 && func_82(Global_19B04.f_932.f_21B.f_10CD))
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

bool func_82(int iParam0)//Position - 0x236A
{
	return iParam0 < 3;
}

int func_83(int iParam0)//Position - 0x2376
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_84(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_84(int iParam0)//Position - 0x23B3
{
	if (func_82(iParam0))
	{
		return Global_19B04.f_6D75[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_85(int iParam0)//Position - 0x23DD
{
	return Global_8C41 == iParam0;
}

void func_86()//Position - 0x23EB
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

bool func_87(int iParam0, int iParam1)//Position - 0x2442
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

void func_88(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x247D
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

void func_89(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x24D3
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

void func_90(bool bParam0)//Position - 0x256E
{
	int iVar0;
	
	if (iLocal_130 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_130 - 1))
		{
			func_36(&(Local_72[iVar0 /*6*/]), bParam0);
			iVar0++;
		}
	}
	if (iLocal_128 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_128 - 1))
		{
			func_36(&(Local_73[iVar0 /*9*/]), bParam0);
			iVar0++;
		}
	}
	if (iLocal_131 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_131 - 1))
		{
			func_95(&(Local_74[iVar0 /*7*/]));
			iVar0++;
		}
	}
	func_36(&Local_77, bParam0);
	func_36(&Local_78, bParam0);
	func_36(&Local_79, 0);
	func_36(&Local_80, 0);
	if (func_21(Local_68.f_9))
	{
		if (unk_0xD45C08B05D4687A7(Local_68.f_9))
		{
			if (unk_0x9488E18994C5C83D(Local_68.f_9, unk_0x705BBFE5A8ADE4A9(unk_0xB5CEFD608600A09F())))
			{
				unk_0x57EB4CC8F1928A47(Local_68.f_9);
			}
		}
		unk_0xB71D41C0310C93DE(Local_68.f_9, 0, 1);
		unk_0x2E35C4FA5F0ED22F(Local_68.f_9, 0);
		if (Global_195F9 == 0)
		{
			unk_0x22321800954A532E(Local_68.f_9, 0);
		}
		else
		{
			unk_0x22321800954A532E(Local_68.f_9, 1);
		}
	}
	func_40(&(Local_68.f_9), bParam0);
	if (func_21(Local_75))
	{
		unk_0x2E35C4FA5F0ED22F(Local_75, 0);
		unk_0x22321800954A532E(Local_75, 1);
	}
	func_40(&Local_75, bParam0);
	if (iLocal_132 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_132 - 1))
		{
			if (iLocal_67 == 4)
			{
				if (func_21(Local_69[iVar0 /*20*/]))
				{
					unk_0x4106FAF8AA1D69D5(Local_69[iVar0 /*20*/], -2065892691);
					unk_0x2E35C4FA5F0ED22F(Local_69[iVar0 /*20*/], 0);
					if (Global_195F9 == 0)
					{
						unk_0x22321800954A532E(Local_69[iVar0 /*20*/], 0);
					}
					else
					{
						unk_0x22321800954A532E(Local_69[iVar0 /*20*/], 1);
					}
				}
			}
			func_40(&(Local_69[iVar0 /*20*/]), bParam0);
			iVar0++;
		}
	}
	if (iLocal_129 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_129 - 1))
		{
			func_91(&(Local_71[iVar0 /*6*/]), bParam0);
			iVar0++;
		}
	}
}

void func_91(int iParam0, bool bParam1)//Position - 0x2742
{
	if (bParam1)
	{
		func_93(iParam0);
	}
	else
	{
		func_92(iParam0);
	}
}

void func_92(int iParam0)//Position - 0x275E
{
	if (unk_0x724D816EA203A79E(*iParam0))
	{
		unk_0x1D403DFADBC2DE3C(*iParam0, 0);
		if (unk_0x5CAE759AE8219D20(*iParam0) && unk_0xB248FAA35ED47DB9(*iParam0, 1))
		{
			unk_0x1E7A09C1710FB071(iParam0);
		}
	}
}

void func_93(int iParam0)//Position - 0x2796
{
	if (unk_0x724D816EA203A79E(*iParam0))
	{
		if (!unk_0x5CAE759AE8219D20(*iParam0))
		{
			unk_0x77815D3407C6700D(*iParam0, true, 0);
		}
		if (func_94(*iParam0))
		{
			if (unk_0x5CAE759AE8219D20(*iParam0) && unk_0xB248FAA35ED47DB9(*iParam0, 1))
			{
				if (func_422(unk_0xBC25C936A095B5BA()))
				{
					if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), *iParam0, 0))
					{
						unk_0x1E7A09C1710FB071(iParam0);
						return;
					}
				}
				unk_0xCF6040807CC0E4A5(iParam0);
			}
		}
		else
		{
			if (func_422(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), *iParam0, 0))
				{
					unk_0x1E7A09C1710FB071(iParam0);
					return;
				}
			}
			unk_0xCF6040807CC0E4A5(iParam0);
		}
	}
}

int func_94(int iParam0)//Position - 0x2832
{
	if (func_422(iParam0))
	{
		if (unk_0xE59B7F5A03335350(iParam0, 0))
		{
			if (!unk_0x7544D2465B934445(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_95(var uParam0)//Position - 0x285C
{
	if (unk_0xA901403F1DB7A780(*uParam0))
	{
		unk_0x9680DF46F29C0428(*uParam0);
	}
}

void func_96(vector3 vParam0, float fParam1)//Position - 0x2875
{
	func_97(&(Global_181DF.f_B3B), vParam0, fParam1);
}

void func_97(var uParam0, vector3 vParam1, var uParam2)//Position - 0x288E
{
	*uParam0 = { vParam1 };
	uParam0->f_6 = uParam2;
}

void func_98(vector3 vParam0, float fParam1)//Position - 0x28A4
{
	if (func_99(Global_11632, 0f, 0f, 0f, 0))
	{
		Global_11632 = { vParam0 };
		Global_11635 = fParam1;
	}
}

bool func_99(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x28D0
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_100()//Position - 0x2917
{
	if (Global_3)
	{
		return 1;
	}
	if (Global_16B1B == 7 || Global_16B1B == 8)
	{
		return 1;
	}
	return 0;
}

void func_101(char* sParam0)//Position - 0x2944
{
	if (!unk_0xF1734B55490E9045(sParam0))
	{
		if (unk_0x5D29F91E567588E2(sParam0) <= 16)
		{
			StringCopy(&Global_1162A, sParam0, 16);
			StringCopy(&Global_1162E, "", 16);
			if (unk_0xD31A96FC53460BE2())
			{
				unk_0x632B3D2D98BE2D44();
			}
		}
	}
}

void func_102(int iParam0, bool bParam1)//Position - 0x2983
{
	if (func_21(iParam0))
	{
		unk_0x91629AC1E1F78419(iParam0, 5, 0);
		unk_0x91629AC1E1F78419(iParam0, 17, 1);
		unk_0xABA7AE40608505F2(iParam0, 512, false);
		if (!func_62(iParam0, 1805844857))
		{
			unk_0xA4E856A8CD53B8DF(iParam0);
			unk_0xD999D66C5AFA4BE3(iParam0);
			unk_0x56F2E1B5599188FA(iParam0, unk_0xBC25C936A095B5BA(), 3000, 0, 2);
			unk_0x5558ED6D4A2DEC93(iParam0, unk_0xBC25C936A095B5BA(), 10000f, -1, 0, 0);
		}
		if (bParam1)
		{
			unk_0x2E35C4FA5F0ED22F(iParam0, 1);
		}
		unk_0x22321800954A532E(iParam0, 1);
	}
}

int func_103(int iParam0, int iParam1, int iParam2)//Position - 0x29FE
{
	int iVar0;
	
	if (func_21(*iParam0))
	{
		if (unk_0x96044E39418AAF17(*iParam0, func_39(), func_49(), 3))
		{
			if (!unk_0x2CDE18D6C89522AD(*iParam0) || unk_0x69871CAEBDD20966(*iParam0))
			{
				unk_0x522053D86D6E1C7A(func_105());
				if (unk_0xF9E082857622D91E(func_105()))
				{
					*iParam2 = unk_0xD0D858E538FD01C3(2727.4f, 4145.56f, 43.68f, 0f, 0f, -92.17f, 2);
					unk_0xC2BF3DE5E47F801D(*iParam2, false);
					unk_0x69D4A898629B0BDA(*iParam2, 0);
					if (func_62(*iParam0, 1785177548))
					{
						unk_0x6C3BE67B02D72CDC(*iParam0, -1000f, 1);
					}
					unk_0xB62398E536F695FC(*iParam0, *iParam2, func_105(), func_72(), 1000f, -4f, 4626, 0, 1148846080, 0);
					unk_0x2EB4D46478766D87(*iParam0, 0, 0);
					if (func_422(*iParam1))
					{
						if (unk_0x96044E39418AAF17(*iParam1, func_39(), func_48(), 3))
						{
							unk_0x6C3BE67B02D72CDC(*iParam1, -16f, 0);
						}
						iVar0 = 0;
						iVar0 += 16;
						iVar0 += 64;
						iVar0 += 512;
						iVar0 += 4096;
						unk_0xBEBE356CCD6268A1(*iParam1, *iParam2, func_104(), func_105(), 16f, -4f, iVar0, 1148846080);
					}
					return 1;
				}
			}
			else
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

char* func_104()//Position - 0x2B4A
{
	return "Female_Flee_Table_Left_Maude_Chair";
}

char* func_105()//Position - 0x2B55
{
	return "special_ped@maude@exit_flee";
}

void func_106(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x2B61
{
	unk_0x7E80A36CD8BDF4D1(iParam0, sParam1, sParam2, func_107(iParam3), 0);
}

int func_107(int iParam0)//Position - 0x2B7A
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

bool func_108(int iParam0, vector3 vParam1, float fParam2)//Position - 0x2D6F
{
	return SYSTEM::VDIST2(unk_0x541C2AEF053615BC(iParam0, 1), vParam1) <= (fParam2 * fParam2);
}

void func_109(int iParam0, bool bParam1)//Position - 0x2D8C
{
	char* sVar0;
	int iVar1;
	int iVar2;
	
	if (func_21(iParam0))
	{
		iVar1 = 2;
		if (bParam1)
		{
			iVar1 = 3;
		}
		iVar2 = unk_0x491B2241281A03B7(0, iVar1);
		if (iVar2 == 0)
		{
			sVar0 = "SCREAM_PANIC";
		}
		else if (iVar2 == 1)
		{
			sVar0 = "SCREAM_TERROR";
		}
		else
		{
			sVar0 = "SUPER_HIGH_FALL";
		}
		if (unk_0xB6FD7D587FE0A1B4(iParam0))
		{
			func_106(iParam0, sVar0, "WAVELOAD_PAIN_MALE", 24);
		}
		else
		{
			func_106(iParam0, sVar0, "WAVELOAD_PAIN_FEMALE", 24);
		}
	}
}

void func_110(var uParam0, int iParam1)//Position - 0x2DFD
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_111()//Position - 0x2E1A
{
	func_114(iLocal_132);
	func_113(&(Local_68.f_8));
	func_112(&Local_68);
	func_113(&iLocal_116);
}

void func_112(int iParam0)//Position - 0x2E3E
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

void func_113(int iParam0)//Position - 0x2EB0
{
	if (unk_0x2DA8CA50A72528FB(*iParam0))
	{
		unk_0x0BBAABB52887CF8C(*iParam0, false);
		unk_0x07B8ECB35A4ED3AC(iParam0);
	}
}

void func_114(int iParam0)//Position - 0x2ED0
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (iParam0 - 1))
	{
		func_112(&(Local_69[iVar0 /*20*/].f_6));
		iVar0++;
	}
}

void func_115()//Position - 0x2EF9
{
	switch (iLocal_60)
	{
		case 0:
			unk_0xEB233A3B7635D2AC();
			unk_0x7456702622C62EA0(1);
			if (func_60())
			{
				func_19();
			}
			func_111();
			func_40(&Local_75, 1);
			func_102(Local_69[0 /*20*/], 1);
			iLocal_136 = unk_0x105601648511CC64();
			iLocal_60 = 1;
			break;
		
		case 1:
			if (func_116(iLocal_136, 500))
			{
				if (!bLocal_96)
				{
					if (func_60())
					{
						func_19();
						func_5();
					}
					if (func_73(&uLocal_157, cLocal_151, "BBC_PK1", 4, 0, 0, 0))
					{
						bLocal_96 = true;
					}
				}
				if (bLocal_96)
				{
					func_117(2);
				}
				if (func_116(iLocal_136, 1500))
				{
					func_117(2);
				}
			}
			break;
	}
}

bool func_116(int iParam0, int iParam1)//Position - 0x2FAA
{
	return (unk_0x105601648511CC64() - iParam0) > iParam1;
}

void func_117(int iParam0)//Position - 0x2FBC
{
	func_22(500, 1);
	func_118(func_124(Local_63.f_4), 0, 0);
	if (iParam0 == 2)
	{
		Global_195F9 = 1;
	}
	else
	{
		Global_195F9 = 2;
	}
	func_565();
}

void func_118(int iParam0, int iParam1, int iParam2)//Position - 0x2FF1
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_123((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_19B04.f_27B5[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_19B04.f_27B5[iParam0 /*12*/].f_6 == 11 || Global_19B04.f_27B5[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_19B04.f_27B5[iParam0 /*12*/].f_5 = 1;
		Global_19B04.f_27B5[iParam0 /*12*/].f_A = iParam1;
		Global_19B04.f_27B5[iParam0 /*12*/].f_B = iParam2;
		if (iParam0 == 287)
		{
			unk_0x438C09AFE8E5D473(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x438C09AFE8E5D473(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x438C09AFE8E5D473(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_119();
	}
}

void func_119()//Position - 0x30D9
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_199FC = 0;
	Global_199FD = 0;
	Global_199FE = 0;
	Global_199FF = 0;
	Global_19A00 = 0;
	Global_19A01 = 0;
	Global_19A02 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_19B04.f_27B5.f_F0D;
	Global_19B04.f_27B5.f_F0D = 0f;
	while (iVar0 < 321)
	{
		if (Global_19B04.f_27B5[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_19B04.f_27B5[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_199FC++;
					fVar1 = (fVar1 + Global_19B04.f_27B5[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_199FD++;
					fVar2 = (fVar2 + Global_19B04.f_27B5[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_199FE++;
					fVar3 = (fVar3 + Global_19B04.f_27B5[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_199FF++;
					fVar4 = (fVar4 + Global_19B04.f_27B5[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_19A00++;
					fVar5 = (fVar5 + (Global_19B04.f_27B5[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_19A01++;
					fVar6 = (fVar6 + Global_19B04.f_27B5[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_19A02++;
					fVar7 = (fVar7 + Global_19B04.f_27B5[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_199EB > 0)
	{
		if (Global_199FC == Global_199EB)
		{
			fVar1 = 55f;
		}
	}
	if (Global_199EC > 0)
	{
		if (Global_199FD == Global_199EC)
		{
			fVar2 = 10f;
		}
	}
	if (Global_199ED > 0)
	{
		if (Global_199FE == Global_199ED)
		{
			fVar3 = 0f;
		}
	}
	if (Global_199EE > 0)
	{
		if (Global_199FF == Global_199EE)
		{
			fVar4 = 10f;
		}
	}
	if (Global_199EF > 0)
	{
		if (((Global_19A00 == Global_199EF || (Global_199EF * 10 / Global_19A00) < 41) || Global_19A00 > Global_199F2) || Global_19A00 == Global_199F2)
		{
			if (!unk_0xFA30DFD0084E92FE(Global_19B04.f_27B5.f_F10, 14))
			{
				if (Global_19A00 == Global_199EF)
				{
					unk_0x438C09AFE8E5D473(joaat("num_rndevents_completed"), Global_199EF, 0);
					unk_0xF0059F27F7BB6680(&(Global_19B04.f_27B5.f_F10), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_199F0 > 0)
	{
		if (Global_19A01 == Global_199F0)
		{
			fVar6 = 15f;
		}
	}
	if (Global_199F1 > 0)
	{
		if (Global_19A02 == Global_199F1)
		{
			fVar7 = 5f;
		}
	}
	Global_19B04.f_27B5.f_F0D = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_19A00 > Global_199F2 || Global_19A00 == Global_199F2)
	{
		iVar9 = Global_199F2;
	}
	else
	{
		iVar9 = Global_19A00;
	}
	unk_0x3A57956BCE003880(joaat("num_missions_completed"), Global_199FC, 1);
	unk_0x3A57956BCE003880(joaat("num_missions_available"), Global_199EB, 1);
	unk_0x3A57956BCE003880(joaat("num_minigames_completed"), Global_199FD, 1);
	unk_0x3A57956BCE003880(joaat("num_minigames_available"), Global_199EC, 1);
	unk_0x3A57956BCE003880(joaat("num_oddjobs_completed"), Global_199FE, 1);
	unk_0x3A57956BCE003880(joaat("num_oddjobs_available"), Global_199ED, 1);
	unk_0x3A57956BCE003880(joaat("num_rndpeople_completed"), Global_199FF, 1);
	unk_0x3A57956BCE003880(joaat("num_rndpeople_available"), Global_199EE, 1);
	unk_0x3A57956BCE003880(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x3A57956BCE003880(joaat("num_rndevents_available"), Global_199F2, 1);
	unk_0x3A57956BCE003880(joaat("num_misc_completed"), (Global_19A02 + Global_19A01), 1);
	unk_0x3A57956BCE003880(joaat("num_misc_available"), (Global_199F1 + Global_199F0), 1);
	Global_19A03 = (Global_199FC * 100 / Global_199EB);
	Global_19A05 = ((Global_199FE + Global_199FD) * 100 / (Global_199ED + Global_199EC));
	Global_19A04 = ((Global_199FF + iVar9) * 100 / (Global_199EE + Global_199F2));
	Global_19A06 = ((Global_19A01 + Global_19A02) * 100 / (Global_199F0 + Global_199F1));
	unk_0xAE9FF06DD2A69C74(joaat("total_progress_made"), Global_19B04.f_27B5.f_F0D, 1);
	unk_0x3A57956BCE003880(joaat("percent_story_missions"), Global_19A03, 1);
	unk_0x3A57956BCE003880(joaat("percent_ambient_missions"), Global_19A04, 1);
	unk_0x3A57956BCE003880(joaat("percent_oddjobs"), Global_19A05, 1);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_19B04.f_27B5.f_F0D))
	{
		func_122(13, SYSTEM::FLOOR(Global_19B04.f_27B5.f_F0D));
	}
	if (!unk_0xF9BFA43C1BAFD016())
	{
		if (!Global_11542)
		{
			if (func_121() == 2 == 0 && !unk_0x7AF0088ABFA713B6())
			{
				if (unk_0x670C0C6C780A3F84())
				{
					Global_199FA = 0;
				}
				if (!Global_DA9F)
				{
					func_120();
				}
			}
		}
	}
}

int func_120()//Position - 0x359A
{
	if (func_423(0))
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

int func_121()//Position - 0x35E5
{
	return Global_62BD;
}

int func_122(int iParam0, int iParam1)//Position - 0x35F0
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

int func_123(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x3641
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
		iParam2 = func_29();
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

int func_124(int iParam0)//Position - 0x3B5B
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 149;
			break;
		
		case 1:
			iVar0 = 150;
			break;
		
		case 2:
			iVar0 = 152;
			break;
		
		case 3:
			iVar0 = 151;
			break;
	}
	return iVar0;
}

void func_125()//Position - 0x3BA0
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	
	switch (iLocal_60)
	{
		case 0:
			func_66(&vLocal_327);
			func_65();
			if (func_35())
			{
				if (func_58(1, 10.5f, 1))
				{
					unk_0x538BB037E00A3AD9(unk_0xBC25C936A095B5BA(), sLocal_152, 0, 0, 0);
					if (func_422(Local_75))
					{
						unk_0x538BB037E00A3AD9(Local_75, sLocal_153, 0, 0, 0);
					}
					if (func_422(Local_68.f_9))
					{
						unk_0x538BB037E00A3AD9(Local_68.f_9, sLocal_154, 0, 0, 0);
					}
					if (func_422(Local_77))
					{
						unk_0x538BB037E00A3AD9(Local_77, sLocal_155, 0, 0, 0);
					}
					if (func_422(Local_78))
					{
						unk_0x538BB037E00A3AD9(Local_78, sLocal_156, 0, 0, 0);
					}
					unk_0x93B1CB6BD50812C7(0);
					SYSTEM::WAIT(0);
					func_22(800, 0);
					func_191(2727.58f, 4144.19f, 43.95f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
					func_190(&vVar0, &vVar1, &fVar3);
					vVar2 = { func_189() };
					if (func_186(vVar2, 0))
					{
						func_179(vVar0, vVar1, fVar3, 2721.02f, 4140.34f, 43.66f, 257.67f, 1, 1, 1, 0, 0);
						func_127(2721.02f, 4140.34f, 43.66f, 257.67f, 0, 145);
					}
					else
					{
						func_179(vVar0, vVar1, fVar3, 2710.665f, 4149.075f, 42.7026f, 180.9488f, 1, 1, 1, 0, 0);
						func_127(2710.665f, 4149.075f, 42.7026f, 180.9488f, 0, 145);
					}
					if (func_21(Local_68.f_9))
					{
						if (unk_0xD45C08B05D4687A7(Local_68.f_9))
						{
							unk_0x57EB4CC8F1928A47(Local_68.f_9);
						}
						unk_0xA4E856A8CD53B8DF(Local_68.f_9);
						unk_0x641B19E156645A92(Local_68.f_9, 2724.02f, 4145.08f, 43.29f, 1, 0, 0, 1);
						unk_0x019CE76D5286C95C(Local_68.f_9, -84.2f);
						unk_0xA4E856A8CD53B8DF(Local_68.f_9);
					}
					iLocal_60 = 1;
				}
			}
			break;
		
		case 1:
			if (func_422(Local_77))
			{
				if (func_21(Local_75))
				{
					if (unk_0x3F3252765FE36DA8(sLocal_153, 0) && unk_0x3F3252765FE36DA8(sLocal_155, 0))
					{
						func_47();
					}
				}
			}
			if (unk_0x3F3252765FE36DA8(sLocal_152, 0))
			{
				unk_0x3E2B7D349B5735D3(unk_0xBC25C936A095B5BA(), -668482597, 0, 1, 0);
				unk_0x56EDA6006F1B166D(unk_0xB5CEFD608600A09F(), 1f, 2000, 0f, 1, 0);
			}
			if (unk_0x4B088956DA856645(0))
			{
				unk_0xF3F01A78937DC905(0f);
				unk_0x2B9AEC08E469E384(0f, 1065353216);
			}
			if (!unk_0x866EAD7E27D8D0F8())
			{
				iLocal_60 = 2;
			}
			break;
		
		case 2:
			if (unk_0x866EAD7E27D8D0F8())
			{
				unk_0x73F91C7985A4C83B(0);
			}
			else
			{
				if (unk_0xDC9E16E99286F31D())
				{
					unk_0xD103510B8989BEB2();
				}
				if (bLocal_104)
				{
					func_24(1, 1, 1, 1);
				}
				if (func_21(Local_68.f_9))
				{
					if (unk_0xD45C08B05D4687A7(Local_68.f_9))
					{
						unk_0x57EB4CC8F1928A47(Local_68.f_9);
					}
				}
				func_40(&(Local_68.f_9), 1);
				if (func_21(Local_75))
				{
					unk_0x56F2E1B5599188FA(Local_75, unk_0xBC25C936A095B5BA(), -1, 0, 2);
					unk_0x22321800954A532E(Local_75, 1);
				}
				func_41(&Local_75, 1, 0, 1);
				func_126(5);
			}
			break;
	}
}

void func_126(int iParam0)//Position - 0x3E7F
{
	iLocal_58 = iParam0;
	iLocal_60 = 0;
}

void func_127(vector3 vParam0, float fParam1, int iParam2, int iParam3)//Position - 0x3E8E
{
	vector3 vVar0;
	var uVar1;
	
	if (unk_0x724D816EA203A79E(Global_17646.f_4))
	{
		if (unk_0xE59B7F5A03335350(Global_17646.f_4, 0))
		{
			if (func_178(24) != Global_17646.f_4)
			{
				if (iParam2 == 1)
				{
					if (func_175(unk_0x541C2AEF053615BC(Global_17646.f_4, 1), iParam3, &vVar0, &uVar1))
					{
						vParam0 = { vVar0 };
						fParam1 = uVar1;
					}
				}
				func_128(Global_17646.f_4, vParam0, fParam1, 24, 0);
			}
		}
	}
}

void func_128(int iParam0, vector3 vParam1, float fParam2, int iParam3, bool bParam4)//Position - 0x3F09
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
		func_174(iParam3);
		Var0.f_9 = 49;
		Var0.f_3B = 2;
		func_169(iParam0, &Var0);
		if (func_99(vParam1, 0f, 0f, 0f, 0))
		{
			vParam1 = { unk_0x541C2AEF053615BC(iParam0, 1) };
			fParam2 = unk_0x349C94FFF43E2979(iParam0);
		}
		if (iParam3 == 24)
		{
			if (unk_0x56BEECB328B6D29D(unk_0x1377080E9B0BD993()) != joaat("vehicle_gen_controller"))
			{
				Global_11484 = unk_0x56BEECB328B6D29D(unk_0x1377080E9B0BD993());
			}
		}
		func_162(iParam3, &Var0, vParam1, fParam2, func_168(iParam0));
		func_129(iParam3, iParam0, 0);
	}
}

void func_129(int iParam0, int iParam1, int iParam2)//Position - 0x4034
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_159(&(Global_110A8.f_22B[0 /*21*/]), iParam0))
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
				Global_19B04.f_7F22.f_12C1 = func_148();
			}
			if (iParam1 != Global_110A8.f_8B[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_178(iParam0);
					if ((unk_0x724D816EA203A79E(iVar0) && unk_0xE59B7F5A03335350(iVar0, 0)) && iParam1 != iVar0)
					{
						func_130(iVar0, 145);
					}
				}
				Global_11432 = iParam1;
				Global_11433 = iParam0;
				Global_11434 = iParam2;
			}
		}
	}
}

void func_130(int iParam0, int iParam1)//Position - 0x4151
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_131(iParam0))
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
	func_169(iParam0, &(Global_19B04.f_7F22.f_1586));
}

int func_131(int iParam0)//Position - 0x4353
{
	if ((((((((((!unk_0x724D816EA203A79E(iParam0) || !unk_0xE59B7F5A03335350(iParam0, 0)) || func_146(iParam0, 0, 0)) || func_146(iParam0, 1, 0)) || func_146(iParam0, 2, 0)) || func_168(iParam0) != 145) || func_145(iParam0)) || func_144(iParam0)) || func_143(iParam0)) || func_142(iParam0)) || !func_132(unk_0x6F79ECA8C83E4357(iParam0)))
	{
		if (func_144(iParam0))
		{
		}
		if (func_144(iParam0))
		{
		}
		if (func_146(iParam0, 0, 0))
		{
		}
		if (func_146(iParam0, 1, 0))
		{
		}
		if (func_146(iParam0, 2, 0))
		{
		}
		if (func_168(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_132(int iParam0)//Position - 0x4430
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_133(iParam0, 0))
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

int func_133(int iParam0, bool bParam1)//Position - 0x45E1
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
		if (!func_141())
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
		if ((((!func_140() && !func_139()) && !func_138()) && !func_137()) && !func_141())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xF49912B78E2591B6() || unk_0x8ACB0C3FACC09467()) || unk_0xF7E138CFA19B55E7())
		{
		}
		else if (!func_138())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_136(iParam0))
		{
			return 0;
		}
	}
	if (!func_134(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_134(int iParam0)//Position - 0x476F
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_135())
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

int func_135()//Position - 0x483B
{
	if (unk_0x8ACB0C3FACC09467())
	{
		return unk_0xC9D803F7D7E10861();
	}
	return 0;
}

int func_136(int iParam0)//Position - 0x4852
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

int func_137()//Position - 0x62F9
{
	return 0;
}

int func_138()//Position - 0x6302
{
	return 1;
}

int func_139()//Position - 0x630B
{
	return 1;
}

int func_140()//Position - 0x6314
{
	if (unk_0x7B2F21BFE86AEB61(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_141()//Position - 0x632D
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

int func_142(int iParam0)//Position - 0x63E8
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x6F79ECA8C83E4357(iParam0);
	sVar1 = unk_0x2232934AD664DD49(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x3362CDE8460ED38B(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_133(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_143(int iParam0)//Position - 0x642E
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

int func_144(int iParam0)//Position - 0x6469
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

int func_145(int iParam0)//Position - 0x64E5
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

int func_146(int iParam0, int iParam1, bool bParam2)//Position - 0x65CD
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0x724D816EA203A79E(iParam0) || !unk_0xE59B7F5A03335350(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_147(iParam1, iVar0, &sVar1, &iVar2))
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

int func_147(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0x663E
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

var func_148()//Position - 0x6716
{
	var uVar0;
	
	func_158(&uVar0, unk_0xF40D00CD7B81C0A8());
	func_157(&uVar0, unk_0x7E09057438B9D216());
	func_156(&uVar0, unk_0x6E06C0DB9B43570D());
	func_151(&uVar0, unk_0xBE14F159908E4EE5());
	func_150(&uVar0, unk_0xDD6A91E47ED4D0CF());
	func_149(&uVar0, unk_0x4EEB3860BFC44B78());
	return uVar0;
}

void func_149(var uParam0, int iParam1)//Position - 0x675C
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

void func_150(var uParam0, int iParam1)//Position - 0x67E2
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_151(var uParam0, int iParam1)//Position - 0x6815
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_155(*uParam0);
	iVar1 = func_153(*uParam0);
	if (iParam1 < 1 || iParam1 > func_152(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_152(int iParam0, int iParam1)//Position - 0x6866
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

var func_153(int iParam0)//Position - 0x6908
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_154(unk_0xFA30DFD0084E92FE(iParam0, 31), -1, 1)) + 2011;
}

int func_154(bool bParam0, int iParam1, int iParam2)//Position - 0x692D
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_155(var uParam0)//Position - 0x6944
{
	return uParam0 & 15;
}

void func_156(var uParam0, int iParam1)//Position - 0x6951
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_157(var uParam0, int iParam1)//Position - 0x698B
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_158(var uParam0, int iParam1)//Position - 0x69C6
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_159(var uParam0, int iParam1)//Position - 0x6A02
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
			uParam0->f_4 = func_160(0, 1);
			uParam0->f_C = 0;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_160(0, 1);
			uParam0->f_C = 0;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_160(1, 1);
			uParam0->f_C = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_160(1, 2);
			uParam0->f_C = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 19);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_160(1, 1);
			uParam0->f_C = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_160(1, 2);
			uParam0->f_C = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 19);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_160(2, 1);
			uParam0->f_C = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_160(2, 1);
			uParam0->f_C = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_160(2, 1);
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
			if (func_141())
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
			if (func_141())
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
		if (!func_99(Global_19B04.f_7F22.f_748[uParam0->f_E /*3*/], 0f, 0f, 0f, 0))
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
		if (!func_99(Global_19B04.f_932.f_21B.f_DF0[1 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_19B04.f_932.f_21B.f_DF0[1 /*10*/][uParam0->f_C /*3*/] };
			uParam0->f_3 = Global_19B04.f_932.f_21B.f_E05[1 /*4*/][uParam0->f_C];
		}
	}
	else if (unk_0xFA30DFD0084E92FE(uParam0->f_9, 20))
	{
		if (!func_99(Global_19B04.f_932.f_21B.f_DF0[0 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_19B04.f_932.f_21B.f_DF0[0 /*10*/][uParam0->f_C /*3*/] };
			uParam0->f_3 = Global_19B04.f_932.f_21B.f_E05[0 /*4*/][uParam0->f_C];
		}
	}
	return iVar0;
}

int func_160(int iParam0, int iParam1)//Position - 0x80FB
{
	struct<82> Var0;
	
	if (func_82(iParam0))
	{
		Var0.f_B = 12;
		Var0.f_1F = 49;
		Var0.f_51 = 2;
		func_161(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_161(int iParam0, var uParam1, int iParam2)//Position - 0x813D
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

void func_162(int iParam0, var uParam1, vector3 vParam2, float fParam3, int iParam4)//Position - 0x8399
{
	if (func_159(&(Global_110A8.f_22B[0 /*21*/]), iParam0))
	{
		if (unk_0xFA30DFD0084E92FE(Global_110A8.f_22B[0 /*21*/].f_9, 10))
		{
			func_167(iParam0);
			func_166(uParam1, &(Global_19B04.f_7F22.f_45[Global_110A8.f_22B[0 /*21*/].f_E /*78*/]));
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
			func_163(iParam0, 1);
		}
	}
}

void func_163(int iParam0, bool bParam1)//Position - 0x8498
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_165(iParam0, 0))
		{
			func_164(iParam0, 1, 0);
			func_164(iParam0, 2, 0);
			func_164(iParam0, 3, 0);
			func_164(iParam0, 4, 0);
			func_164(iParam0, 0, 1);
			Global_110A8[iParam0] = 1;
		}
	}
	else
	{
		func_164(iParam0, 0, 0);
	}
}

void func_164(int iParam0, int iParam1, bool bParam2)//Position - 0x84F5
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

bool func_165(int iParam0, int iParam1)//Position - 0x8530
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_19B04.f_7F22[iParam0], iParam1);
}

void func_166(var uParam0, var uParam1)//Position - 0x8553
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

void func_167(int iParam0)//Position - 0x861F
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_159(&(Global_110A8.f_22B[0 /*21*/]), iParam0))
	{
		if (unk_0x724D816EA203A79E(Global_110A8.f_8B[iParam0]))
		{
			unk_0x77815D3407C6700D(Global_110A8.f_8B[iParam0], true, 1);
			unk_0x1E7A09C1710FB071(&(Global_110A8.f_8B[iParam0]));
			Global_110A8.f_8B[iParam0] = 0;
		}
		if (unk_0xFA30DFD0084E92FE(Global_110A8.f_22B[0 /*21*/].f_9, 13))
		{
			func_163(iParam0, 0);
		}
	}
}

int func_168(int iParam0)//Position - 0x8699
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

void func_169(int iParam0, var uParam1)//Position - 0x86FC
{
	int iVar0;
	
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		func_173(uParam1);
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
		if (uParam1->f_41 == -1 && !func_172(uParam1->f_42))
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
		func_171(&iParam0, &(uParam1->f_9), &(uParam1->f_3B));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xFC8A228C62614C5C(iParam0, iVar0 + 1))
			{
				unk_0xF0059F27F7BB6680(&(uParam1->f_4D), func_170(iVar0 + 1));
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

int func_170(int iParam0)//Position - 0x89A7
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

int func_171(int iParam0, var uParam1, var uParam2)//Position - 0x8A57
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

int func_172(int iParam0)//Position - 0x8B31
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

void func_173(var uParam0)//Position - 0x8B51
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

void func_174(int iParam0)//Position - 0x8C01
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_167(iParam0);
	func_163(iParam0, 0);
}

int func_175(vector3 vParam0, int iParam1, var uParam2, var uParam3)//Position - 0x8C28
{
	int iVar0;
	
	iVar0 = func_176(vParam0, iParam1, 1);
	switch (iVar0)
	{
		case 0:
			*uParam2 = { -827.351f, 157.785f, 68.2143f };
			*uParam3 = 85.1509f;
			return 1;
			break;
		
		case 1:
		case 2:
			*uParam2 = { 1992.523f, 3813.916f, 31.1008f };
			*uParam3 = 122.1498f;
			return 1;
			break;
		
		case 3:
			*uParam2 = { -1184.258f, -1496.556f, 3.3895f };
			*uParam3 = 303.2098f;
			return 1;
			break;
		
		case 4:
			*uParam2 = { 118.1067f, -1325.906f, 28.3706f };
			*uParam3 = 123.5016f;
			return 1;
			break;
		
		case 5:
			*uParam2 = { -18.118f, -1455.126f, 29.5004f };
			*uParam3 = 273.2822f;
			return 1;
			break;
		
		case 6:
			*uParam2 = { 1.5947f, 543.4017f, 173.4644f };
			*uParam3 = 310.7556f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

int func_176(vector3 vParam0, int iParam1, int iParam2)//Position - 0x8D3E
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = 10;
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (Global_1584A[iVar0 /*10*/].f_7 != 263)
		{
			if (Global_1584A[iVar0 /*10*/].f_9 == iParam1 || iParam1 == 145)
			{
				if (func_177(iVar0) || iParam2 == 0)
				{
					fVar1 = unk_0xF0F2FC9DE291567F(vParam0, Global_1584A[iVar0 /*10*/].f_3, true);
					if (fVar1 < fVar2)
					{
						fVar2 = fVar1;
						iVar3 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

bool func_177(int iParam0)//Position - 0x8DCD
{
	return unk_0xFA30DFD0084E92FE(Global_19B04.f_1C20[iParam0], 0);
}

int func_178(int iParam0)//Position - 0x8DE5
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_110A8.f_8B[iParam0];
}

void func_179(vector3 vParam0, vector3 vParam1, float fParam2, vector3 vParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)//Position - 0x8E01
{
	func_180(vParam0, vParam1, fParam2, vParam3, fParam4, 0f, 0f, 0f, bParam5, bParam6, bParam7, bParam8, bParam9);
}

void func_180(vector3 vParam0, vector3 vParam1, float fParam2, vector3 vParam3, float fParam4, vector3 vParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)//Position - 0x8E2A
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (bParam7)
	{
		bParam7 = false;
	}
	bVar2 = true;
	iVar3 = 0;
	iVar0 = unk_0x3E12B546F3F2597A();
	if (unk_0x724D816EA203A79E(iVar0))
	{
		if (!unk_0x5CAE759AE8219D20(iVar0))
		{
			unk_0x77815D3407C6700D(iVar0, true, 0);
			iVar3 = 1;
		}
		if (unk_0xE59B7F5A03335350(iVar0, 0))
		{
			if (bParam10)
			{
				func_185(iVar0);
			}
			if (unk_0x0C265B3C448E6954(iVar0, vParam0, vParam1, fParam2, 0, 1, 0))
			{
				bVar1 = true;
			}
			else
			{
				vVar6 = { unk_0x541C2AEF053615BC(iVar0, 1) };
				if ((vVar6.z > vParam0.z && vVar6.z < vParam1.z) || (vVar6.z > vParam1.z && vVar6.z < vParam0.z))
				{
					if (func_182(iVar0, vParam0, vParam1, fParam2))
					{
						bVar1 = true;
					}
				}
			}
			if (unk_0xE59B7F5A03335350(iVar0, 0))
			{
				if (unk_0x5E87CB0495C97732(iVar0, joaat("taxi")))
				{
					if (unk_0x3187EF5798B5D209(iVar0, -1, 0) != unk_0xBC25C936A095B5BA() && unk_0x3187EF5798B5D209(iVar0, -1, 0) != 0)
					{
						if (unk_0xF0F2FC9DE291567F(vParam0 + vParam1 / Vector(2f, 2f, 2f), unk_0x541C2AEF053615BC(iVar0, 1), true) < 20f)
						{
							bVar1 = true;
							bVar2 = false;
						}
					}
				}
			}
			if (bParam8)
			{
				if (func_146(iVar0, func_80(), 1))
				{
					bVar1 = false;
				}
			}
			if (bVar1)
			{
				if (!func_181(vParam5))
				{
					if (unk_0xE59B7F5A03335350(iVar0, 0))
					{
						iVar7 = unk_0x6F79ECA8C83E4357(iVar0);
						unk_0xB34C58360DA450F6(iVar0, &vVar4, &vVar5);
						if (unk_0x8C1A6E7D5F410F4A(iVar7))
						{
							vParam5.x = (vParam5.x + 3f);
							vParam5.y = (vParam5.y + 3f);
						}
						if (((iVar7 == joaat("zentorno") || iVar7 == joaat("btype")) || iVar7 == joaat("dubsta3")) || iVar7 == joaat("monster"))
						{
							vParam5 = { vParam5 * Vector(1.1f, 1.1f, 1.1f) };
						}
						else if (iVar7 == joaat("t20") || iVar7 == joaat("virgo"))
						{
							vParam5 = { vParam5 * Vector(1.2f, 1.2f, 1.2f) };
						}
						if ((vVar5.x - vVar4.x) > vParam5.x)
						{
							bVar2 = false;
						}
						else if ((vVar5.y - vVar4.y) > vParam5.y)
						{
							bVar2 = false;
						}
						else if ((vVar5.z - vVar4.z) > vParam5.z)
						{
							bVar2 = false;
						}
					}
				}
				if (unk_0xE59B7F5A03335350(iVar0, 0))
				{
					if (bVar2)
					{
						unk_0xEDAD35A0D81ED3FB(vParam3, 5f, 0, 0, 0, 0, false, 0);
						unk_0x019CE76D5286C95C(iVar0, fParam4);
						unk_0x641B19E156645A92(iVar0, vParam3, 1, 0, 0, 1);
						unk_0xF0A40F19AAB79E88(iVar0, 1084227584);
						if (bParam9)
						{
							unk_0x2D655AA68FA1736B(iVar0, false, 1, 0);
							unk_0x127F627F30266DD9(iVar0, 1);
						}
					}
					else
					{
						if (!unk_0x5CAE759AE8219D20(iVar0) || !unk_0xB248FAA35ED47DB9(iVar0, 1))
						{
							unk_0x77815D3407C6700D(iVar0, true, 1);
						}
						if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iVar0, 0))
						{
							unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), unk_0x541C2AEF053615BC(iVar0, 1), 1, 0, 0, 1);
						}
						unk_0xCF6040807CC0E4A5(&iVar0);
					}
				}
			}
			if (bParam6)
			{
				unk_0x1E0EC6B6C067C872(vParam0, vParam1, fParam2, 0, 0, 0, 0, 0, 0);
			}
			if (iVar3 == 1)
			{
				if (unk_0x724D816EA203A79E(iVar0))
				{
					if (unk_0x5CAE759AE8219D20(iVar0))
					{
						unk_0x1E7A09C1710FB071(&iVar0);
					}
				}
			}
		}
		else
		{
			if (!unk_0x5CAE759AE8219D20(iVar0))
			{
				unk_0x77815D3407C6700D(iVar0, true, 0);
			}
			iVar8 = unk_0x3187EF5798B5D209(iVar0, -1, 0);
			if (unk_0x724D816EA203A79E(iVar8) && !unk_0x36CEFBE9B745A58D(iVar8))
			{
				unk_0x641B19E156645A92(iVar8, unk_0x541C2AEF053615BC(iVar8, 1), 1, 0, 0, 1);
			}
			iVar9 = unk_0x7C02672B11D4F65B(unk_0x6F79ECA8C83E4357(iVar0));
			if (iVar9 <= 2)
			{
				iVar8 = unk_0x3187EF5798B5D209(iVar0, 0, 0);
				if (unk_0x724D816EA203A79E(iVar8) && !unk_0x36CEFBE9B745A58D(iVar8))
				{
					unk_0x641B19E156645A92(iVar8, unk_0x541C2AEF053615BC(iVar8, 1), 1, 0, 0, 1);
				}
			}
			if (iVar9 <= 4)
			{
				iVar8 = unk_0x3187EF5798B5D209(iVar0, 1, 0);
				if (unk_0x724D816EA203A79E(iVar8) && !unk_0x36CEFBE9B745A58D(iVar8))
				{
					unk_0x641B19E156645A92(iVar8, unk_0x541C2AEF053615BC(iVar8, 1), 1, 0, 0, 1);
				}
				iVar8 = unk_0x3187EF5798B5D209(iVar0, 2, 0);
				if (unk_0x724D816EA203A79E(iVar8) && !unk_0x36CEFBE9B745A58D(iVar8))
				{
					unk_0x641B19E156645A92(iVar8, unk_0x541C2AEF053615BC(iVar8, 1), 1, 0, 0, 1);
				}
			}
			unk_0xCF6040807CC0E4A5(&iVar0);
		}
	}
}

int func_181(vector3 vParam0)//Position - 0x921E
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_182(int iParam0, vector3 vParam1, vector3 vParam2, float fParam3)//Position - 0x9248
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6[4];
	struct<2> Var7;
	struct<2> Var8;
	
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		vParam1.z = vParam2.z;
		vVar0 = { func_184(vParam1 - vParam2) };
		vVar1 = { vVar0 };
		vVar0.x = -vVar1.y;
		vVar0.y = vVar1.x;
		vVar0.z = 0f;
		vVar2 = { vParam1 - vVar0 * FtoV((fParam3 / 2f)) };
		vVar3 = { vParam1 + vVar0 * FtoV((fParam3 / 2f)) };
		vVar4 = { vParam2 - vVar0 * FtoV((fParam3 / 2f)) };
		vVar5 = { vParam2 + vVar0 * FtoV((fParam3 / 2f)) };
		unk_0x2B3953EE61953843(unk_0x6F79ECA8C83E4357(iParam0), &Var7, &Var8);
		vVar6[0 /*3*/] = { unk_0xA4455714F3DCE207(iParam0, Var7, Var7.f_1, 0f) };
		vVar6[1 /*3*/] = { unk_0xA4455714F3DCE207(iParam0, Var7, Var8.f_1, 0f) };
		vVar6[2 /*3*/] = { unk_0xA4455714F3DCE207(iParam0, Var8, Var7.f_1, 0f) };
		vVar6[3 /*3*/] = { unk_0xA4455714F3DCE207(iParam0, Var8, Var8.f_1, 0f) };
		if (((((((((((((((func_183(vVar6[0 /*3*/], vVar6[1 /*3*/], vVar2, vVar3) || func_183(vVar6[0 /*3*/], vVar6[1 /*3*/], vVar3, vVar5)) || func_183(vVar6[0 /*3*/], vVar6[1 /*3*/], vVar4, vVar5)) || func_183(vVar6[0 /*3*/], vVar6[1 /*3*/], vVar2, vVar4)) || func_183(vVar6[1 /*3*/], vVar6[3 /*3*/], vVar2, vVar3)) || func_183(vVar6[1 /*3*/], vVar6[3 /*3*/], vVar3, vVar5)) || func_183(vVar6[1 /*3*/], vVar6[3 /*3*/], vVar4, vVar5)) || func_183(vVar6[1 /*3*/], vVar6[3 /*3*/], vVar2, vVar4)) || func_183(vVar6[3 /*3*/], vVar6[2 /*3*/], vVar2, vVar3)) || func_183(vVar6[3 /*3*/], vVar6[2 /*3*/], vVar3, vVar5)) || func_183(vVar6[3 /*3*/], vVar6[2 /*3*/], vVar4, vVar5)) || func_183(vVar6[3 /*3*/], vVar6[2 /*3*/], vVar2, vVar4)) || func_183(vVar6[2 /*3*/], vVar6[0 /*3*/], vVar2, vVar3)) || func_183(vVar6[2 /*3*/], vVar6[0 /*3*/], vVar3, vVar5)) || func_183(vVar6[2 /*3*/], vVar6[0 /*3*/], vVar4, vVar5)) || func_183(vVar6[2 /*3*/], vVar6[0 /*3*/], vVar2, vVar4))
		{
			return 1;
		}
	}
	return 0;
}

int func_183(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3, struct<2> Param4, var uParam5, struct<2> Param6, var uParam7)//Position - 0x953E
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
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	
	fVar0 = Param0;
	fVar1 = Param0.f_1;
	fVar2 = Param2;
	fVar3 = Param2.f_1;
	fVar4 = Param4;
	fVar5 = Param4.f_1;
	fVar6 = Param6;
	fVar7 = Param6.f_1;
	fVar8 = (fVar2 - fVar0);
	fVar9 = (fVar3 - fVar1);
	fVar10 = (fVar6 - fVar4);
	fVar11 = (fVar7 - fVar5);
	fVar12 = (((-fVar9 * (fVar0 - fVar4)) + (fVar8 * (fVar1 - fVar5))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	fVar13 = (((fVar10 * (fVar1 - fVar5)) - (fVar11 * (fVar0 - fVar4))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	if (((fVar12 >= 0f && fVar12 <= 1f) && fVar13 >= 0f) && fVar13 <= 1f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_184(vector3 vParam0)//Position - 0x95F2
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

void func_185(int iParam0)//Position - 0x9631
{
	if (unk_0x724D816EA203A79E(iParam0))
	{
		if (unk_0xE59B7F5A03335350(iParam0, 0))
		{
			if (unk_0x77F5C030D3238E26(iParam0) <= 200f)
			{
				unk_0xE6E403909F4BF47F(iParam0, 500f);
			}
			if (unk_0xA6EB9CEADFB819EC(iParam0) <= 700f)
			{
				unk_0xE6E403909F4BF47F(iParam0, 900f);
			}
			if (unk_0x8D66276473ABD7CC(iParam0) < 200)
			{
				unk_0xE6E403909F4BF47F(iParam0, 500f);
			}
		}
	}
}

bool func_186(vector3 vParam0, int iParam1)//Position - 0x9696
{
	return func_187(Global_17646.f_B3B.f_C.f_42, vParam0, iParam1);
}

int func_187(int iParam0, vector3 vParam1, int iParam2)//Position - 0x96B3
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam2 == 1)
	{
		vParam1 = { func_188() };
	}
	unk_0x2B3953EE61953843(iParam0, &vVar0, &vVar1);
	if ((vVar1.x - vVar0.x) > vParam1.x)
	{
		return 0;
	}
	else if ((vVar1.y - vVar0.y) > vParam1.y)
	{
		return 0;
	}
	else if ((vVar1.z - vVar0.z) > vParam1.z)
	{
		return 0;
	}
	return 1;
}

Vector3 func_188()//Position - 0x971D
{
	return 2.55f, 5.665f, 2.55f;
}

Vector3 func_189()//Position - 0x9734
{
	return 3.01f, 11.01f, 6.01f;
}

int func_190(var uParam0, var uParam1, var uParam2)//Position - 0x974B
{
	*uParam0 = { 2728.995f, 4143.165f, 41.02986f };
	*uParam1 = { 2719.126f, 4144.691f, 47.88543f };
	*uParam2 = 13f;
	return 1;
}

void func_191(vector3 vParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)//Position - 0x9782
{
	int iVar0;
	
	iVar0 = unk_0xFC1CAE18F3ECBF2D();
	if (unk_0x6A9CDB766DF7216F(iVar0))
	{
		func_308(0);
		if (bParam7)
		{
			unk_0x326DFEE77FABFC2F(unk_0xFC1CAE18F3ECBF2D(), 1);
		}
		if (bParam6)
		{
			switch (func_80())
			{
				case 0:
					if (func_307(unk_0xBC25C936A095B5BA(), 8, 15))
					{
						func_193(unk_0xBC25C936A095B5BA(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (func_307(unk_0xBC25C936A095B5BA(), 9, 6))
					{
						func_193(unk_0xBC25C936A095B5BA(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				
				case 1:
					if (func_307(unk_0xBC25C936A095B5BA(), 8, 1) || func_307(unk_0xBC25C936A095B5BA(), 8, 10))
					{
						func_193(unk_0xBC25C936A095B5BA(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				
				case 2:
					if (func_307(unk_0xBC25C936A095B5BA(), 8, 4))
					{
						func_193(unk_0xBC25C936A095B5BA(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				}
		}
		if (iParam4 == 1)
		{
			unk_0xA0C0B32E74BE8DB7(func_192(unk_0xFC1CAE18F3ECBF2D()), 50f, 0);
		}
		if (iParam5 == 1)
		{
			unk_0x4516EDD0A096FB5B(vParam0, 30f, 0);
		}
		if (bParam8)
		{
			unk_0x7A71B0C6DDC0D7DA(vParam0, 30f);
		}
		unk_0xADC7E88690E324EB(vParam0, 30f, 0);
		unk_0x7024F5748BAC99FC(iVar0, 0, 0);
		unk_0xCE6A8FE7DACF8BD4(iVar0, 0);
		unk_0x0B55204F721A7EA1(iVar0, 1);
		if (bParam10)
		{
			unk_0x43F06392C4EF25E0(false);
			unk_0x59B038076F830627(false);
		}
		unk_0xEB233A3B7635D2AC();
		if (iParam9 == 1)
		{
			unk_0x7456702622C62EA0(1);
		}
		if (iParam1 == 1)
		{
			unk_0xAC8915327014F426(1, 0);
		}
		if (iParam2 == 1)
		{
			iLocal_43 = 0;
			if (func_422(unk_0xBC25C936A095B5BA()))
			{
				iLocal_43 = unk_0x344123455D5F96BD(unk_0xBC25C936A095B5BA());
				unk_0x8E25082A46F87892(unk_0xBC25C936A095B5BA(), joaat("weapon_unarmed"), true);
			}
		}
		if (iParam3 == 1)
		{
			func_22(500, 0);
		}
	}
}

Vector3 func_192(int iParam0)//Position - 0x9940
{
	return unk_0x541C2AEF053615BC(unk_0xA95CF30C72EB526E(iParam0), 0);
}

int func_193(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x9953
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
	var uVar11;
	var uVar12;
	var uVar13;
	struct<14> Var14;
	var uVar15;
	
	if (unk_0x36CEFBE9B745A58D(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	Global_11487++;
	iVar5 = -99;
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -99;
	iVar9 = -99;
	iVar10 = unk_0x6F79ECA8C83E4357(iParam0);
	if (iParam5 == 0)
	{
		Global_11489[1 /*14*/] = { func_243(iVar10, iParam1, iParam2) };
		if (!func_242(iParam3))
		{
			Global_11487 = (Global_11487 - 1);
			return 0;
		}
		func_235(iParam1);
	}
	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (iVar10 == joaat("player_one"))
			{
				iVar5 = func_233(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = func_233(iParam0, 9);
			if (iVar10 == joaat("player_zero"))
			{
				if (iVar6 >= 9 && iVar6 <= 14)
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			else if (iVar10 == joaat("player_one"))
			{
				if (iVar6 >= 5 && iVar6 <= 10)
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			else if (iVar10 == joaat("player_two"))
			{
				if ((iVar6 >= 9 && iVar6 <= 14) || (iVar6 >= 15 && iVar6 <= 16))
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			iVar7 = func_232(iParam0, 1);
			if (!func_231(iVar10, 14, iVar7, -1))
			{
				iVar7 = -99;
			}
			iVar8 = func_232(iParam0, 0);
			if (!func_230(iVar10, 14, iVar8, -1) && !func_229(iVar10, 14, iVar8, -1))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("player_one"))
			{
				iVar9 = func_232(iParam0, 2);
			}
		}
		unk_0xF3A52280DD9C01A6(iParam0);
		uVar11 = 15;
		if (iParam5 == 1)
		{
			uVar11 = { Global_114B4 };
		}
		else
		{
			uVar11 = { func_225(iVar10, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar11[iVar0] != -99)
			{
				Global_11489[1 /*14*/] = { func_243(iVar10, iVar0, uVar11[iVar0]) };
				if (unk_0xFA30DFD0084E92FE(Global_11489[1 /*14*/].f_6, 0))
				{
					if (iVar0 == 13)
					{
						uVar12 = 9;
						if (iParam5 == 1)
						{
							uVar12 = { Global_114C5 };
						}
						else
						{
							uVar12 = { func_222(iVar10, uVar11[iVar0]) };
						}
						iVar1 = 0;
						while (iVar1 <= 8)
						{
							Global_11489[1 /*14*/] = { func_243(iVar10, 14, uVar12[iVar1]) };
							func_213(iParam0, Global_11489[1 /*14*/].f_C, Global_11489[1 /*14*/].f_3, Global_11489[1 /*14*/].f_4);
							func_235(14);
							if (Global_11487 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = func_205(iParam0, iVar10, 14, uVar12[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_193(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar2++;
								}
							}
							iVar1++;
						}
					}
					else if (iVar0 != 14 && iVar0 != 12)
					{
						if ((iVar10 == joaat("player_one") && iVar0 == 2) && uVar11[iVar0] == 20)
						{
							func_204(iVar10, 2, 20, &iVar4);
						}
						if (iParam4 == -1)
						{
							unk_0xB0031DDAE4FF0BC3(iParam0, func_203(iVar0), Global_11489[1 /*14*/].f_3, Global_11489[1 /*14*/].f_4, unk_0x41AF5D2DF638D88F(iParam0, func_203(iVar0)));
						}
						else
						{
							unk_0xB0031DDAE4FF0BC3(iParam0, func_203(iVar0), Global_11489[1 /*14*/].f_3, Global_11489[1 /*14*/].f_4, iParam4);
						}
						func_235(iVar0);
						if (Global_11487 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = func_205(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_193(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_11489[1 /*14*/] = { func_243(iVar10, iVar0, func_202(iParam0, iVar0, -1)) };
				if (unk_0xFA30DFD0084E92FE(Global_11489[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (func_201(iParam0, iVar10, &iVar4, 1))
							{
								func_193(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { func_225(iVar10, 0) };
						func_193(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var14 = { func_243(iVar10, 8, iVar5) };
			if (iVar5 != -99)
			{
				if (func_199(iVar10, iParam2, 8, iVar5, &uVar11, &Var14))
				{
					func_193(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { func_243(iVar10, 9, iVar6) };
			if (iVar6 != -99)
			{
				if (func_199(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_193(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { func_243(iVar10, 14, iVar7) };
			if (iVar7 != -99)
			{
				if (func_199(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_193(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { func_243(iVar10, 14, iVar8) };
			if (iVar8 != -99)
			{
				if (func_199(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_193(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { func_243(iVar10, 14, iVar9) };
			if (iVar9 != -99)
			{
				if (func_199(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_193(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else if (iParam1 == 13)
	{
		uVar15 = { func_222(iVar10, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_11489[1 /*14*/] = { func_243(iVar10, 14, uVar15[iVar1]) };
			func_213(iParam0, Global_11489[1 /*14*/].f_C, Global_11489[1 /*14*/].f_3, Global_11489[1 /*14*/].f_4);
			func_235(14);
			if (Global_11487 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_205(iParam0, iVar10, 14, uVar15[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_193(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		func_213(iParam0, Global_11489[1 /*14*/].f_C, Global_11489[1 /*14*/].f_3, Global_11489[1 /*14*/].f_4);
		func_235(iParam1);
		if (Global_11487 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_205(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_193(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
	}
	else
	{
		if (iParam4 == -1)
		{
			unk_0xB0031DDAE4FF0BC3(iParam0, func_203(iParam1), Global_11489[1 /*14*/].f_3, Global_11489[1 /*14*/].f_4, unk_0x41AF5D2DF638D88F(iParam0, func_203(iParam1)));
		}
		else
		{
			unk_0xB0031DDAE4FF0BC3(iParam0, func_203(iParam1), Global_11489[1 /*14*/].f_3, Global_11489[1 /*14*/].f_4, iParam4);
		}
		if (Global_11487 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_205(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_193(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			func_196(iVar10, iParam1, iParam2);
		}
	}
	if (Global_11487 == 1)
	{
		if (func_201(iParam0, iVar10, &iVar4, 0))
		{
			func_193(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_194(iParam0, iVar10, &iVar4))
		{
			func_193(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_11487 = (Global_11487 - 1);
	return 1;
}

int func_194(int iParam0, int iParam1, int iParam2)//Position - 0xA15F
{
	int iVar0;
	
	iVar0 = func_195(iParam1);
	if (Global_19B04.f_932.f_21B[iVar0 /*65*/].f_3F != -99)
	{
		if (!func_307(iParam0, Global_19B04.f_932.f_21B[iVar0 /*65*/].f_40, Global_19B04.f_932.f_21B[iVar0 /*65*/].f_3F))
		{
			*iParam2 = Global_19B04.f_932.f_21B[iVar0 /*65*/].f_3E;
			Global_19B04.f_932.f_21B[iVar0 /*65*/].f_3F = -99;
			Global_19B04.f_932.f_21B[iVar0 /*65*/].f_40 = 1;
			return 1;
		}
	}
	return 0;
}

int func_195(int iParam0)//Position - 0xA1EB
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 0;
			break;
		
		case joaat("player_one"):
			return 1;
			break;
		
		case joaat("player_two"):
			return 2;
			break;
		
		default:
			break;
	}
	return 145;
}

void func_196(int iParam0, int iParam1, int iParam2)//Position - 0xA226
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == joaat("player_zero"))
	{
		iVar0 = 5;
	}
	else if (iParam0 == joaat("player_one"))
	{
		iVar0 = 2;
	}
	else if (iParam0 == joaat("player_two"))
	{
		iVar0 = 4;
	}
	if (func_198(iParam0, 12, iVar0))
	{
		if (func_197(iParam0, iParam1, iParam2))
		{
			iVar1 = func_195(iParam0);
			if (iParam1 == 3)
			{
				Global_19B04.f_932.f_21B.f_C4[iVar1] = iParam2;
			}
			else if (iParam1 == 4)
			{
				Global_19B04.f_932.f_21B.f_C8[iVar1] = iParam2;
			}
		}
	}
}

int func_197(int iParam0, int iParam1, int iParam2)//Position - 0xA2B0
{
	if (iParam0 == joaat("player_zero"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 47 && iParam2 <= 54)
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 >= 77 && iParam2 <= 84)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 14 && iParam2 <= 21)
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 >= 41 && iParam2 <= 56)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 18 && iParam2 <= 29)
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 >= 54 && iParam2 <= 69)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_198(int iParam0, int iParam1, int iParam2)//Position - 0xA38E
{
	Global_11489[1 /*14*/] = { func_243(iParam0, iParam1, iParam2) };
	return unk_0xFA30DFD0084E92FE(Global_11489[1 /*14*/].f_6, 2);
}

int func_199(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)//Position - 0xA3B8
{
	var uVar0;
	int iVar1;
	
	if ((*uParam4)[iParam2] == iParam3)
	{
		return 1;
	}
	if (((*uParam4)[iParam2] == -99 && iParam2 != 14) && iParam2 != 13)
	{
		return 1;
	}
	if (iParam2 == 13 || (iParam2 == 14 && (*uParam4)[13] == 31))
	{
		if ((((((((iParam3 == 0 || iParam3 == 1) || iParam3 == 2) || iParam3 == 3) || iParam3 == 4) || iParam3 == 5) || iParam3 == 6) || iParam3 == 7) || iParam3 == 8)
		{
			return 1;
		}
	}
	if (iParam3 == -99 || uParam5->f_1 == -1)
	{
		return 1;
	}
	if (iParam2 == 14)
	{
		uVar0 = { func_222(iParam0, (*uParam4)[13]) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			if (uVar0[iVar1] == iParam3)
			{
				return 1;
			}
			iVar1++;
		}
	}
	if (func_200(iParam0, iParam2, iParam3))
	{
		return 1;
	}
	if (iParam0 == joaat("player_zero"))
	{
		if (func_231(iParam0, iParam2, iParam3, -1))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
		else if (func_230(iParam0, iParam2, iParam3, -1))
		{
			if (((((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 14) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 0)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
			}
			return 1;
		}
		else if (func_229(iParam0, iParam2, iParam3, -1))
		{
			if (((((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 14) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (func_231(iParam0, iParam2, iParam3, -1))
		{
			if ((iParam1 == 3 || iParam1 == 5) || iParam1 == 7)
			{
				return 0;
			}
			return 1;
		}
		else if (func_230(iParam0, iParam2, iParam3, -1))
		{
			if ((((iParam1 == 3 || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 21)
			{
				if (iParam2 == 8)
				{
					if (iParam3 == 9)
					{
						if (iParam1 == 8 || iParam1 == 21)
						{
							return 1;
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
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 26)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
				if (((iParam1 == 43 || iParam1 == 44) || iParam1 == 45) || iParam1 == 46)
				{
					if (iParam3 >= 5 && iParam3 <= 10)
					{
						return 0;
					}
				}
			}
			else if (iParam2 == 14)
			{
				if (((iParam1 == 43 || iParam1 == 44) || iParam1 == 45) || iParam1 == 46)
				{
					if (iParam3 >= 26 && iParam3 <= 39)
					{
						return 0;
					}
				}
			}
			return 1;
		}
		else if (func_229(iParam0, iParam2, iParam3, -1))
		{
			if (((((iParam1 == 3 || iParam1 == 3) || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 21)
			{
				return 0;
			}
			return 1;
		}
		else if (iParam2 == 14)
		{
			if (iParam3 >= 159 && iParam3 <= 174)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 2)
		{
			if (iParam2 == 14 && iParam3 == 0)
			{
				return 1;
			}
		}
		if (func_231(iParam0, iParam2, iParam3, -1))
		{
			if (((((iParam1 == 1 || iParam1 == 2) || iParam1 == 6) || iParam1 == 8) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
		else if (func_230(iParam0, iParam2, iParam3, -1))
		{
			if (((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 6) || iParam1 == 8) || iParam1 == 11) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 15)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
			}
			return 1;
		}
		else if (func_229(iParam0, iParam2, iParam3, -1))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 6) || iParam1 == 8) || iParam1 == 11) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
	}
	return 0;
}

int func_200(int iParam0, int iParam1, int iParam2)//Position - 0xA9BC
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 15)
					{
						return 1;
					}
					break;
				
				case 9:
					if (iParam2 == 6)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 1 || iParam2 == 10)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 4)
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

int func_201(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xAA55
{
	int iVar0;
	
	iVar0 = func_195(iParam1);
	if (Global_19B04.f_932.f_21B[iVar0 /*65*/].f_3C != -99)
	{
		if (!func_307(iParam0, Global_19B04.f_932.f_21B[iVar0 /*65*/].f_3D, Global_19B04.f_932.f_21B[iVar0 /*65*/].f_3C) || iParam3 == 1)
		{
			*iParam2 = Global_19B04.f_932.f_21B[iVar0 /*65*/].f_3B;
			Global_19B04.f_932.f_21B[iVar0 /*65*/].f_3C = -99;
			Global_19B04.f_932.f_21B[iVar0 /*65*/].f_3D = 2;
			return 1;
		}
	}
	return 0;
}

int func_202(int iParam0, int iParam1, int iParam2)//Position - 0xAAEB
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		if (iParam1 == 12)
		{
			iVar0 = 0;
			while (iVar0 <= 53)
			{
				if (func_307(iParam0, iParam1, iVar0))
				{
					return iVar0;
				}
				iVar0++;
			}
		}
		else if (iParam1 == 13)
		{
			iVar1 = 0;
			while (iVar1 <= 19)
			{
				if (func_307(iParam0, iParam1, iVar1))
				{
					return iVar1;
				}
				iVar1++;
			}
			return 31;
		}
		else if (iParam1 == 14)
		{
			if (iParam2 == -1)
			{
			}
			else
			{
				return func_232(iParam0, iParam2);
			}
		}
		else
		{
			return func_233(iParam0, iParam1);
		}
	}
	return -99;
}

int func_203(int iParam0)//Position - 0xAB8C
{
	switch (iParam0)
	{
		case 0:
			return 0;
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
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

int func_204(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xAC3C
{
	int iVar0;
	
	*iParam3 = -99;
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 7 || iParam2 == 23)
					{
						*iParam3 = 1;
					}
					break;
				
				case 9:
					if (iParam2 == 8 || (iParam2 >= 9 && iParam2 <= 14))
					{
						*iParam3 = 1;
					}
					break;
				
				case 10:
					if (iParam2 >= 44 && iParam2 <= 47)
					{
						*iParam3 = 1;
					}
					break;
				
				case 14:
					if ((((((iParam2 >= 31 && iParam2 <= 32) || (iParam2 >= 33 && iParam2 <= 34)) || (iParam2 >= 35 && iParam2 <= 36)) || iParam2 == 37) || (iParam2 >= 40 && iParam2 <= 41)) || iParam2 == 46)
					{
						*iParam3 = 1;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 2:
					if (iParam2 == 20)
					{
						*iParam3 = 20;
					}
					break;
				
				case 8:
					if (iParam2 == 4)
					{
						*iParam3 = 19;
					}
					break;
				
				case 9:
					if (iParam2 >= 5 && iParam2 <= 10)
					{
						*iParam3 = 19;
					}
					break;
				
				case 10:
					if (iParam2 >= 47 && iParam2 <= 50)
					{
						*iParam3 = 19;
					}
					break;
				
				case 14:
					if (((((iParam2 >= 26 && iParam2 <= 27) || (iParam2 >= 28 && iParam2 <= 29)) || (iParam2 >= 30 && iParam2 <= 31)) || iParam2 == 32) || (iParam2 >= 35 && iParam2 <= 36))
					{
						*iParam3 = 19;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 7)
					{
						*iParam3 = 2;
					}
					break;
				
				case 9:
					if ((iParam2 >= 9 && iParam2 <= 14) || (iParam2 >= 15 && iParam2 <= 16))
					{
						*iParam3 = 2;
					}
					break;
				
				case 10:
					if (iParam2 >= 29 && iParam2 <= 32)
					{
						*iParam3 = 2;
					}
					break;
				
				case 14:
					if ((((((iParam2 >= 47 && iParam2 <= 48) || (iParam2 >= 49 && iParam2 <= 50)) || (iParam2 >= 51 && iParam2 <= 52)) || iParam2 == 53) || (iParam2 >= 56 && iParam2 <= 57)) || iParam2 == 62)
					{
						*iParam3 = 2;
					}
					break;
			}
			break;
	}
	if (*iParam3 != -99)
	{
		iVar0 = func_195(iParam0);
		Global_19B04.f_932.f_21B[iVar0 /*65*/].f_3C = iParam2;
		Global_19B04.f_932.f_21B[iVar0 /*65*/].f_3D = iParam1;
		return 1;
	}
	return 0;
}

int func_205(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0xAF43
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
	
	iVar0 = -99;
	if (iParam4 == 0)
	{
		switch (iParam2)
		{
			case 2:
				iVar1 = func_233(iParam0, 1);
				iVar0 = func_212(iParam1, iParam3, iVar1);
				break;
			
			case 1:
				iVar2 = func_233(iParam0, 2);
				iVar0 = func_212(iParam1, iVar2, iParam3);
				break;
		}
	}
	else if (iParam4 == 2)
	{
		func_204(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 1)
	{
		func_211(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 6)
	{
		if (iParam2 == 4)
		{
			if (func_210(iParam1, iParam3, &iVar0))
			{
			}
		}
	}
	else
	{
		switch (iParam1)
		{
			case joaat("player_zero"):
				switch (iParam4)
				{
					case 3:
						switch (iParam2)
						{
							case 10:
								switch (iParam3)
								{
									case 36:
										iVar0 = 17;
										break;
									
									case 37:
										iVar0 = 17;
										break;
									
									case 38:
										iVar0 = 18;
										break;
									
									case 39:
										iVar0 = 18;
										break;
									
									case 40:
										iVar0 = 19;
										break;
									
									case 41:
										iVar0 = 19;
										break;
									
									case 42:
										iVar0 = 20;
										break;
									
									case 43:
										iVar0 = 20;
										break;
								}
								break;
							
							case 11:
								if (iParam3 >= 2 && iParam3 <= 7)
								{
									if (!func_209(iParam0, 3, 44, 59))
									{
										iVar0 = 44;
									}
								}
								else if (((iParam3 >= 8 && iParam3 <= 17) || (iParam3 >= 18 && iParam3 <= 27)) || (iParam3 >= 28 && iParam3 <= 43))
								{
									if (!func_209(iParam0, 3, 135, 150))
									{
										iVar0 = func_208(iParam1, 3, 135, 150);
									}
								}
								break;
						}
						break;
					
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 63:
										iVar0 = 4;
										break;
									
									case 61:
										iVar0 = 3;
										break;
									
									case 16:
										iVar0 = 1;
										break;
									
									case 114:
										iVar0 = 15;
										break;
									
									case 115:
										iVar0 = 17;
										break;
									
									case 116:
										iVar0 = 16;
										break;
									
									case 117:
										iVar0 = 18;
										break;
									
									case 118:
										iVar0 = 20;
										break;
									
									case 119:
										iVar0 = 19;
										break;
									
									case 125:
										iVar0 = 21;
										break;
									
									case 120:
										iVar0 = 22;
										break;
									
									case 124:
										iVar0 = 23;
										break;
									
									case 126:
										iVar0 = 24;
										break;
									
									case 121:
										iVar0 = 25;
										break;
									
									case 127:
										iVar0 = 26;
										break;
									
									case 128:
										iVar0 = 27;
										break;
									
									case 85:
										iVar0 = 6;
										break;
									
									case 77:
										iVar0 = 7;
										break;
									
									case 78:
										iVar0 = 8;
										break;
									
									case 79:
										iVar0 = 9;
										break;
									
									case 80:
										iVar0 = 10;
										break;
									
									case 81:
										iVar0 = 11;
										break;
									
									case 82:
										iVar0 = 12;
										break;
									
									case 83:
										iVar0 = 13;
										break;
									
									case 84:
										iVar0 = 14;
										break;
									
									case 21:
										iVar0 = 31;
										break;
									
									case 22:
										iVar0 = 30;
										break;
									
									case 23:
										iVar0 = 29;
										break;
									
									case 24:
										iVar0 = 28;
										break;
									
									case 25:
										iVar0 = 33;
										break;
									
									case 26:
										iVar0 = 35;
										break;
									
									case 27:
										iVar0 = 34;
										break;
									
									case 28:
										iVar0 = 32;
										break;
									
									default:
										if (iParam3 >= 17 && iParam3 <= 20)
										{
										}
										else
										{
											iVar0 = 0;
										}
										break;
								}
								break;
							
							case 11:
								if (iParam3 != 0)
								{
									iVar0 = 0;
								}
								break;
						}
						break;
					
					case 11:
						if (iParam2 == 3)
						{
							if ((iParam3 >= 44 && iParam3 <= 59) || (iParam3 >= 135 && iParam3 <= 150))
							{
							}
							else
							{
								iVar0 = 0;
							}
						}
						else if (iParam2 == 10)
						{
							if (iParam3 >= 36 && iParam3 <= 43)
							{
								iVar0 = 0;
							}
						}
						break;
				}
				break;
			
			case joaat("player_one"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 17:
										iVar0 = 2;
										break;
									
									case 90:
										iVar0 = 1;
										break;
									
									case 268:
										iVar0 = 3;
										break;
									
									case 269:
										iVar0 = 5;
										break;
									
									case 270:
										iVar0 = 4;
										break;
									
									case 271:
										iVar0 = 6;
										break;
									
									case 272:
										iVar0 = 8;
										break;
									
									case 273:
										iVar0 = 7;
										break;
									
									case 279:
										iVar0 = 9;
										break;
									
									case 274:
										iVar0 = 10;
										break;
									
									case 278:
										iVar0 = 11;
										break;
									
									case 280:
										iVar0 = 12;
										break;
									
									case 275:
										iVar0 = 13;
										break;
									
									case 281:
										iVar0 = 14;
										break;
									
									case 282:
										iVar0 = 15;
										break;
									
									case 107:
										iVar0 = 16;
										break;
									
									case 108:
										iVar0 = 17;
										break;
									
									case 109:
										iVar0 = 18;
										break;
									
									case 110:
										iVar0 = 19;
										break;
									
									case 111:
										iVar0 = 20;
										break;
									
									case 112:
										iVar0 = 21;
										break;
									
									case 113:
										iVar0 = 22;
										break;
									
									case 114:
										iVar0 = 23;
										break;
									
									case 115:
										iVar0 = 24;
										break;
									
									case 116:
										iVar0 = 25;
										break;
									
									case 117:
										iVar0 = 52;
										break;
									
									case 118:
										iVar0 = 27;
										break;
									
									case 119:
										iVar0 = 28;
										break;
									
									case 120:
										iVar0 = 29;
										break;
									
									case 121:
										iVar0 = 30;
										break;
									
									case 122:
										iVar0 = 31;
										break;
									
									case 296:
										iVar0 = 32;
										break;
									
									case 297:
										iVar0 = 33;
										break;
									
									case 298:
										iVar0 = 34;
										break;
									
									case 299:
										iVar0 = 35;
										break;
									
									case 300:
										iVar0 = 36;
										break;
									
									case 301:
										iVar0 = 37;
										break;
									
									case 302:
										iVar0 = 38;
										break;
									
									case 309:
										iVar0 = 39;
										break;
									
									case 310:
										iVar0 = 40;
										break;
									
									case 311:
										iVar0 = 41;
										break;
									
									case 312:
										iVar0 = 42;
										break;
									
									case 313:
										iVar0 = 43;
										break;
									
									case 314:
										iVar0 = 44;
										break;
									
									case 315:
										iVar0 = 45;
										break;
									
									case 316:
										iVar0 = 46;
										break;
									
									case 317:
										iVar0 = 51;
										break;
									
									default:
										iVar0 = 0;
										break;
								}
								break;
							
							case 11:
								if (iParam3 != 0)
								{
									iVar0 = 0;
								}
								break;
						}
						break;
					
					case 3:
						switch (iParam2)
						{
							case 11:
								if (iParam3 >= 47 && iParam3 <= 62)
								{
									if (!func_209(iParam0, 3, 209, 222))
									{
										iVar0 = func_208(iParam1, 3, 209, 222);
									}
								}
								else if ((iParam3 >= 1 && iParam3 <= 4) || (iParam3 >= 5 && iParam3 <= 8))
								{
									if (!func_209(iParam0, 3, 243, 258))
									{
										if (iParam3 == 1 || iParam3 == 5)
										{
											iVar0 = func_208(iParam1, 3, 243, 246);
										}
										else if (iParam3 == 2 || iParam3 == 6)
										{
											iVar0 = func_208(iParam1, 3, 247, 250);
										}
										else if (iParam3 == 3 || iParam3 == 7)
										{
											iVar0 = func_208(iParam1, 3, 251, 254);
										}
										else if (iParam3 == 4 || iParam3 == 8)
										{
											iVar0 = func_208(iParam1, 3, 255, 258);
										}
									}
								}
								else if (iParam3 == 41 || iParam3 == 42)
								{
									if (!func_209(iParam0, 3, 176, 191) && !func_209(iParam0, 3, 227, 242))
									{
										iVar0 = func_208(iParam1, 3, 176, 191);
									}
								}
								break;
						}
						break;
					
					case 8:
						if (iParam2 == 11 || iParam2 == 3)
						{
							if (iParam2 == 11)
							{
								iVar5 = iParam3;
								iVar4 = func_233(iParam0, 3);
							}
							else if (iParam2 == 3)
							{
								iVar4 = iParam3;
								iVar5 = func_233(iParam0, 11);
								iVar5 = func_207(iParam1, iVar4, iVar5, 0);
							}
							iVar3 = func_233(iParam0, 8);
							if (((iVar5 >= 5 && iVar5 <= 8) || (iVar5 >= 25 && iVar5 <= 40)) || (iVar5 >= 42 && iVar5 <= 43))
							{
								if (!func_206(joaat("player_one"), iVar3, iVar5, iVar4, &iVar6))
								{
									if (iVar6 != -99)
									{
										iVar0 = iVar6;
									}
								}
							}
							else if (((iVar3 >= 27 && iVar3 <= 42) || (iVar3 >= 43 && iVar3 <= 58)) || (iVar3 >= 59 && iVar3 <= 74))
							{
								iVar0 = 26;
							}
						}
						break;
					
					case 11:
						if (iParam2 == 3)
						{
							if (iParam3 >= 209 && iParam3 <= 222)
							{
							}
							else if (((iParam3 >= 176 && iParam3 <= 191) || (iParam3 >= 227 && iParam3 <= 242)) || (iParam3 >= 243 && iParam3 <= 258))
							{
								iVar7 = func_233(iParam0, 8);
								iVar8 = func_233(iParam0, 11);
								if (((iVar7 >= 27 && iVar7 <= 42) || (iVar7 >= 43 && iVar7 <= 58)) || (iVar7 >= 59 && iVar7 <= 74))
								{
									iVar0 = func_207(iParam1, iParam3, iVar8, 0);
								}
								else
								{
									iVar0 = func_207(iParam1, iParam3, iVar8, 1);
								}
							}
							else if (iParam3 >= 41 && iParam3 <= 56)
							{
								iVar0 = 45;
							}
							else if (iParam3 >= 223 && iParam3 <= 226)
							{
								iVar0 = 44;
							}
							else
							{
								iVar0 = 0;
							}
						}
						else if (iParam2 == 8)
						{
							if (((iParam3 >= 27 && iParam3 <= 42) || (iParam3 >= 43 && iParam3 <= 58)) || (iParam3 >= 59 && iParam3 <= 74))
							{
								iVar9 = func_233(iParam0, 11);
								iVar0 = func_207(iParam1, -99, iVar9, 0);
							}
						}
						break;
				}
				break;
			
			case joaat("player_two"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 50:
										iVar0 = 3;
										break;
									
									case 81:
										iVar0 = 5;
										break;
									
									case 82:
										iVar0 = 6;
										break;
									
									case 83:
										iVar0 = 7;
										break;
									
									case 84:
										iVar0 = 10;
										break;
									
									case 85:
										iVar0 = 9;
										break;
									
									case 86:
										iVar0 = 8;
										break;
									
									case 92:
										iVar0 = 22;
										break;
									
									case 87:
										iVar0 = 23;
										break;
									
									case 91:
										iVar0 = 24;
										break;
									
									case 93:
										iVar0 = 25;
										break;
									
									case 88:
										iVar0 = 26;
										break;
									
									case 94:
										iVar0 = 27;
										break;
									
									case 120:
										iVar0 = 11;
										break;
									
									case 121:
										iVar0 = 13;
										break;
									
									case 122:
										iVar0 = 14;
										break;
									
									case 124:
										iVar0 = 12;
										break;
									
									case 126:
										iVar0 = 18;
										break;
									
									case 128:
										iVar0 = 17;
										break;
									
									case 130:
										iVar0 = 19;
										break;
									
									case 131:
										iVar0 = 16;
										break;
									
									case 134:
										iVar0 = 15;
										break;
									
									case 135:
										iVar0 = 20;
										break;
									
									default:
										iVar0 = 0;
										break;
								}
								break;
						}
						break;
				}
				break;
			}
	}
	return iVar0;
}

int func_206(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4)//Position - 0xBAF6
{
	int iVar0;
	
	switch (iParam0)
	{
		case joaat("player_zero"):
			break;
		
		case joaat("player_one"):
			*uParam4 = 0;
			if (iParam1 >= 27 && iParam1 <= 42)
			{
				if (iParam2 != -99)
				{
					if ((iParam2 >= 5 && iParam2 <= 8) || (iParam2 >= 25 && iParam2 <= 40))
					{
					}
					else
					{
						if (iParam2 >= 42 && iParam2 <= 43)
						{
							if (iParam3 >= 176 && iParam3 <= 191)
							{
								iVar0 = (iParam1 - 27);
								*uParam4 = (59 + iVar0);
							}
							else if (iParam3 >= 227 && iParam3 <= 242)
							{
								iVar0 = (iParam1 - 27);
								*uParam4 = (43 + iVar0);
							}
						}
						return 0;
					}
				}
				if (iParam3 != -99)
				{
					if (((iParam3 >= 227 && iParam3 <= 242) || (iParam3 >= 176 && iParam3 <= 191)) || (iParam3 >= 243 && iParam3 <= 258))
					{
					}
					else
					{
						return 0;
					}
				}
			}
			else if (iParam1 >= 43 && iParam1 <= 58)
			{
				if (iParam2 != -99)
				{
					if (iParam2 >= 42 && iParam2 <= 43)
					{
					}
					else
					{
						if ((iParam2 >= 5 && iParam2 <= 8) || (iParam2 >= 25 && iParam2 <= 40))
						{
							iVar0 = (iParam1 - 43);
							*uParam4 = (27 + iVar0);
						}
						return 0;
					}
				}
				if (iParam3 != -99)
				{
					if (iParam3 >= 227 && iParam3 <= 242)
					{
					}
					else
					{
						if (iParam3 >= 176 && iParam3 <= 191)
						{
							if (iParam2 >= 42 && iParam2 <= 43)
							{
								iVar0 = (iParam1 - 43);
								*uParam4 = (59 + iVar0);
							}
						}
						return 0;
					}
				}
			}
			else if (iParam1 >= 59 && iParam1 <= 74)
			{
				if (iParam2 != -99)
				{
					if (iParam2 >= 42 && iParam2 <= 43)
					{
					}
					else
					{
						if ((iParam2 >= 5 && iParam2 <= 8) || (iParam2 >= 25 && iParam2 <= 40))
						{
							iVar0 = (iParam1 - 59);
							*uParam4 = (27 + iVar0);
						}
						return 0;
					}
				}
				if (iParam3 != -99)
				{
					if (iParam3 >= 176 && iParam3 <= 191)
					{
					}
					else
					{
						if (iParam3 >= 227 && iParam3 <= 242)
						{
							if (iParam2 >= 42 && iParam2 <= 43)
							{
								iVar0 = (iParam1 - 59);
								*uParam4 = (43 + iVar0);
							}
						}
						else if ((iParam2 >= 5 && iParam2 <= 8) || (iParam2 >= 25 && iParam2 <= 40))
						{
							iVar0 = (iParam1 - 59);
							*uParam4 = (27 + iVar0);
						}
						return 0;
					}
				}
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 12)
			{
				if (iParam3 != 241)
				{
					return 0;
				}
			}
			break;
	}
	return 1;
}

int func_207(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xBDDA
{
	int iVar0;
	
	if (iParam1 >= 243 && iParam1 <= 246)
	{
		if (iParam3 == 1)
		{
			return 1;
		}
		else
		{
			return 5;
		}
	}
	else if (iParam1 >= 247 && iParam1 <= 250)
	{
		if (iParam3 == 1)
		{
			return 2;
		}
		else
		{
			return 6;
		}
	}
	else if (iParam1 >= 251 && iParam1 <= 254)
	{
		if (iParam3 == 1)
		{
			return 3;
		}
		else
		{
			return 7;
		}
	}
	else if (iParam1 >= 255 && iParam1 <= 258)
	{
		if (iParam3 == 1)
		{
			return 4;
		}
		else
		{
			return 8;
		}
	}
	else if (iParam1 >= 255 && iParam1 <= 258)
	{
		if (iParam3 == 1)
		{
			return 4;
		}
		else
		{
			return 8;
		}
	}
	else if ((iParam1 >= 176 && iParam1 <= 191) || (iParam1 >= 227 && iParam1 <= 242))
	{
		if (iParam2 >= 9 && iParam2 <= 24)
		{
			if (iParam3 == 1)
			{
				return iParam2;
			}
			else
			{
				iVar0 = (iParam2 - 9);
				iParam2 = (25 + iVar0);
				return iParam2;
			}
		}
		else if (iParam2 >= 25 && iParam2 <= 40)
		{
			if (iParam3 == 1)
			{
				iVar0 = (iParam2 - 25);
				iParam2 = (9 + iVar0);
				return iParam2;
			}
			else
			{
				return iParam2;
			}
		}
		else if (iParam2 == 41 || iParam2 == 42)
		{
			if (iParam3 == 1)
			{
				return 41;
			}
			else
			{
				return 42;
			}
		}
		else
		{
			if (iParam3 == 1)
			{
				iParam2 = func_208(iParam0, 11, 9, 24);
			}
			else
			{
				iParam2 = func_208(iParam0, 11, 25, 40);
			}
			if (iParam2 == -99)
			{
				if (iParam3 == 1)
				{
					return 41;
				}
				else
				{
					return 42;
				}
			}
			else
			{
				return iParam2;
			}
		}
	}
	else if (iParam2 >= 1 && iParam2 <= 4)
	{
		if (iParam3 == 1)
		{
			return iParam2;
		}
		else
		{
			iVar0 = (iParam2 - 1);
			iParam2 = (5 + iVar0);
			return iParam2;
		}
	}
	else if (iParam2 >= 5 && iParam2 <= 8)
	{
		if (iParam3 == 1)
		{
			iVar0 = (iParam2 - 5);
			iParam2 = (1 + iVar0);
			return iParam2;
		}
		else
		{
			return iParam2;
		}
	}
	else if (iParam2 >= 9 && iParam2 <= 24)
	{
		if (iParam3 == 1)
		{
			return iParam2;
		}
		else
		{
			iVar0 = (iParam2 - 9);
			iParam2 = (25 + iVar0);
			return iParam2;
		}
	}
	else if (iParam2 >= 25 && iParam2 <= 40)
	{
		if (iParam3 == 1)
		{
			iVar0 = (iParam2 - 25);
			iParam2 = (9 + iVar0);
			return iParam2;
		}
		else
		{
			return iParam2;
		}
	}
	else if (iParam2 == 41 || iParam2 == 42)
	{
		if (iParam3 == 1)
		{
			return 41;
		}
		else
		{
			return 42;
		}
	}
	return -99;
}

int func_208(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xC0A3
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam2;
	while (iVar0 <= (iParam3 - 1))
	{
		iVar1 = iVar0;
		if (func_198(iParam0, iParam1, iVar1))
		{
			return iVar1;
		}
		iVar0++;
	}
	return -99;
}

int func_209(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xC0DA
{
	int iVar0;
	
	iVar0 = func_233(iParam0, iParam1);
	if (iVar0 >= iParam2 && iVar0 <= iParam3)
	{
		return 1;
	}
	return 0;
}

int func_210(int iParam0, int iParam1, int iParam2)//Position - 0xC103
{
	*iParam2 = -99;
	switch (iParam0)
	{
		case joaat("player_zero"):
			if ((((((((((((((((((iParam1 == 16 || iParam1 == 17) || iParam1 == 21) || iParam1 == 22) || iParam1 == 32) || (iParam1 >= 34 && iParam1 <= 39)) || (iParam1 >= 41 && iParam1 <= 45)) || iParam1 == 46) || (iParam1 >= 47 && iParam1 <= 54)) || (iParam1 >= 55 && iParam1 <= 70)) || (iParam1 >= 72 && iParam1 <= 79)) || iParam1 == 80) || (iParam1 >= 81 && iParam1 <= 83)) || (iParam1 >= 84 && iParam1 <= 87)) || iParam1 == 88) || (iParam1 >= 89 && iParam1 <= 91)) || iParam1 == 95) || (iParam1 >= 96 && iParam1 <= 111)) || iParam1 == 112)
			{
				*iParam2 = 6;
				return 1;
			}
			break;
		
		case joaat("player_one"):
			if ((((((iParam1 == 12 || (iParam1 >= 14 && iParam1 <= 21)) || iParam1 == 32) || iParam1 == 52) || (iParam1 >= 69 && iParam1 <= 70)) || iParam1 == 71) || (iParam1 >= 72 && iParam1 <= 77))
			{
				*iParam2 = 17;
				return 1;
			}
			break;
		
		case joaat("player_two"):
			if (((((((((((((((iParam1 == 4 || iParam1 == 5) || iParam1 == 6) || iParam1 == 7) || iParam1 == 14) || (iParam1 >= 18 && iParam1 <= 29)) || iParam1 == 31) || iParam1 == 32) || iParam1 == 33) || iParam1 == 34) || (iParam1 >= 35 && iParam1 <= 42)) || (iParam1 >= 43 && iParam1 <= 53)) || (iParam1 >= 54 && iParam1 <= 61)) || (iParam1 >= 71 && iParam1 <= 80)) || (iParam1 >= 81 && iParam1 <= 90)) || (iParam1 >= 94 && iParam1 <= 103))
			{
				*iParam2 = 8;
				return 1;
			}
			break;
	}
	return 0;
}

int func_211(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xC3CD
{
	int iVar0;
	
	*iParam3 = -99;
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 10:
					if (iParam2 >= 44 && iParam2 <= 47)
					{
						*iParam3 = 0;
					}
					break;
				
				case 14:
					if (((((((iParam2 >= 31 && iParam2 <= 32) || (iParam2 >= 33 && iParam2 <= 34)) || (iParam2 >= 35 && iParam2 <= 36)) || iParam2 == 37) || (iParam2 >= 38 && iParam2 <= 39)) || (iParam2 >= 40 && iParam2 <= 41)) || (iParam2 >= 42 && iParam2 <= 44))
					{
						*iParam3 = 0;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 10:
					if (iParam2 >= 47 && iParam2 <= 50)
					{
						*iParam3 = 0;
					}
					break;
				
				case 14:
					if (((((iParam2 >= 26 && iParam2 <= 27) || (iParam2 >= 28 && iParam2 <= 29)) || (iParam2 >= 30 && iParam2 <= 31)) || iParam2 == 32) || (iParam2 >= 35 && iParam2 <= 36))
					{
						*iParam3 = 0;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 9:
					if (iParam2 >= 15 && iParam2 <= 16)
					{
						*iParam3 = 0;
					}
					break;
				
				case 10:
					if (iParam2 >= 29 && iParam2 <= 32)
					{
						*iParam3 = 0;
					}
					break;
				
				case 14:
					if (((((((iParam2 >= 47 && iParam2 <= 48) || (iParam2 >= 49 && iParam2 <= 50)) || (iParam2 >= 51 && iParam2 <= 52)) || iParam2 == 53) || (iParam2 >= 54 && iParam2 <= 55)) || (iParam2 >= 56 && iParam2 <= 57)) || (iParam2 >= 58 && iParam2 <= 60))
					{
						*iParam3 = 0;
					}
					break;
			}
			break;
	}
	if (*iParam3 != -99)
	{
		iVar0 = func_195(iParam0);
		Global_19B04.f_932.f_21B[iVar0 /*65*/].f_3F = iParam2;
		Global_19B04.f_932.f_21B[iVar0 /*65*/].f_40 = iParam1;
		return 1;
	}
	return 0;
}

int func_212(int iParam0, int iParam1, int iParam2)//Position - 0xC657
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			if (iParam1 == 1)
			{
				if (iParam2 == 0)
				{
					return 1;
				}
				else if (iParam2 == 4)
				{
					return 5;
				}
				else
				{
					return 3;
				}
			}
			else if (iParam2 == 0)
			{
				return 0;
			}
			else if (iParam2 == 4)
			{
				return 4;
			}
			else
			{
				return 2;
			}
			break;
		
		case joaat("player_one"):
			if (iParam1 >= 0 && iParam1 <= 15)
			{
				if (iParam2 == 0)
				{
					return 0;
				}
				else
				{
					return 3;
				}
			}
			else if (iParam1 >= 16 && iParam1 <= 17)
			{
				if (iParam2 == 0)
				{
					return 2;
				}
				else
				{
					return 5;
				}
			}
			else if (iParam1 == 18)
			{
				if (iParam2 == 0)
				{
					return 6;
				}
				else
				{
					return 7;
				}
			}
			else if (iParam1 == 19)
			{
				if (iParam2 == 0)
				{
					return 1;
				}
				else
				{
					return 4;
				}
			}
			else if (iParam2 == 0)
			{
				return 1;
			}
			else
			{
				return 4;
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 2)
			{
				if (iParam2 == 0)
				{
					return 2;
				}
				else
				{
					return 3;
				}
			}
			else if (iParam1 == 3)
			{
				if (iParam2 == 0)
				{
					return 4;
				}
				else
				{
					return 6;
				}
			}
			else if (iParam1 == 8)
			{
				return 5;
			}
			else if (iParam2 == 0)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
	}
	return -99;
}

void func_213(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xC7AE
{
	int iVar0;
	
	if (iParam2 == -1)
	{
		unk_0x770493971AED5C38(iParam0, iParam1);
		if (iParam1 == 0)
		{
			unk_0xC8FD3EBBB90E8D7F(iParam0, 34, false);
			unk_0xC8FD3EBBB90E8D7F(iParam0, 36, false);
		}
	}
	else
	{
		unk_0x70FF586D857F1A81(iParam0, iParam1, iParam2, iParam3, unk_0x7AF0088ABFA713B6());
		if (iParam1 == 0)
		{
			iVar0 = func_218(iParam0, iParam2, iParam3, iParam1);
			if (func_214(unk_0x6F79ECA8C83E4357(iParam0), 14, iVar0, unk_0x0507C61DE3ABC626(iParam0, 0, iParam2, iParam3)))
			{
				unk_0xC8FD3EBBB90E8D7F(iParam0, 34, true);
				unk_0xC8FD3EBBB90E8D7F(iParam0, 36, true);
			}
			else
			{
				unk_0xC8FD3EBBB90E8D7F(iParam0, 34, false);
				unk_0xC8FD3EBBB90E8D7F(iParam0, 36, false);
			}
		}
	}
}

int func_214(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xC846
{
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam3 == -1)
					{
						iParam3 = func_215(iParam0, iParam2, 14, 3);
					}
					if ((iParam2 >= 131 && iParam2 <= 154) || (iParam2 >= 327 && unk_0xF062C4E30590463E(iParam3, -1033433901, 1)))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam3 == -1)
					{
						iParam3 = func_215(iParam0, iParam2, 14, 4);
					}
					if ((iParam2 >= 131 && iParam2 <= 154) || (iParam2 >= 327 && unk_0xF062C4E30590463E(iParam3, -1033433901, 1)))
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

int func_215(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xC914
{
	struct<2> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		unk_0x52C04EB4AFEE68A8(&Var0);
		iVar2 = 0;
		iVar3 = (iParam1 - func_217(iParam0));
		if (iVar3 < 0)
		{
			return -1;
		}
		iVar4 = unk_0x84E17E2A0638D182(iParam3, 6, -1, 1, -1, -1);
		iVar1 = 0;
		while (iVar1 < iVar4)
		{
			unk_0x6734B8C01E0C0700(iVar1, &Var0);
			if (!unk_0xD90F58A58682ED2F(Var0))
			{
				if (iVar2 == iVar3)
				{
					return Var0.f_1;
				}
				iVar2++;
			}
			iVar1++;
		}
	}
	else
	{
		unk_0x583A9200E6659C0E(&Var5);
		iVar7 = 0;
		iVar8 = (iParam1 - func_216(iParam0, func_203(iParam2)));
		if (iVar8 < 0)
		{
			return -1;
		}
		if ((iParam0 == Global_11503.f_1A[iParam2] && iParam1 == Global_11503[iParam2]) && Global_11503.f_D[iParam2] != 0)
		{
			return Global_11503.f_D[iParam2];
		}
		iVar9 = unk_0x84E17E2A0638D182(iParam3, 6, -1, 0, -1, func_203(iParam2));
		iVar6 = 0;
		while (iVar6 < iVar9)
		{
			unk_0x2E442314FAEFD7AD(iVar6, &Var5);
			if (!unk_0xD90F58A58682ED2F(Var5))
			{
				if (iVar7 == iVar8)
				{
					Global_11503.f_D[iParam2] = Var5.f_1;
					Global_11503[iParam2] = iParam1;
					Global_11503.f_1A[iParam2] = iParam0;
					return Var5.f_1;
				}
				iVar7++;
			}
			iVar6++;
		}
	}
	return -1;
}

int func_216(int iParam0, int iParam1)//Position - 0xCA70
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 6;
					break;
				
				case 3:
					return 181;
					break;
				
				case 4:
					return 113;
					break;
				
				case 5:
					return 14;
					break;
				
				case 6:
					return 99;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 24;
					break;
				
				case 9:
					return 20;
					break;
				
				case 10:
					return 48;
					break;
				
				case 11:
					return 45;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 21;
					break;
				
				case 3:
					return 318;
					break;
				
				case 4:
					return 117;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 134;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 77;
					break;
				
				case 9:
					return 12;
					break;
				
				case 10:
					return 53;
					break;
				
				case 11:
					return 63;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 6;
					break;
				
				case 2:
					return 9;
					break;
				
				case 3:
					return 242;
					break;
				
				case 4:
					return 104;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 84;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 18;
					break;
				
				case 9:
					return 17;
					break;
				
				case 10:
					return 33;
					break;
				
				case 11:
					return 1;
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 91;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 92;
					break;
				
				case 8:
					return 241;
					break;
				
				case 9:
					return 46;
					break;
				
				case 10:
					return 7;
					break;
				
				case 11:
					return 237;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 92;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 55;
					break;
				
				case 8:
					return 136;
					break;
				
				case 9:
					return 36;
					break;
				
				case 10:
					return 6;
					break;
				
				case 11:
					return 256;
					break;
			}
			break;
	}
	return -99;
}

int func_217(int iParam0)//Position - 0xCE17
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 113;
			break;
		
		case joaat("player_one"):
			return 175;
			break;
		
		case joaat("player_two"):
			return 155;
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			return 327;
			break;
		
		case joaat("mp_f_freemode_01"):
			return 327;
			break;
	}
	return -99;
}

int func_218(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xCE78
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (iParam1 == -1)
	{
		return func_221(iParam3);
	}
	iVar0 = unk_0x6F79ECA8C83E4357(iParam0);
	iVar1 = unk_0x0507C61DE3ABC626(iParam0, iParam3, iParam1, iParam2);
	if (iVar1 != -1 && iVar1 != 0)
	{
		if (iVar0 == joaat("mp_m_freemode_01"))
		{
			return func_220(unk_0x6F79ECA8C83E4357(iParam0), iVar1, 14, 3);
		}
		else if (iVar0 == joaat("mp_f_freemode_01"))
		{
			return func_220(unk_0x6F79ECA8C83E4357(iParam0), iVar1, 14, 4);
		}
	}
	iVar2 = unk_0xF4266C9B2BFE5D11(iParam0, iParam3);
	iVar4 = 0;
	while (iVar4 <= (iVar2 - 1))
	{
		iVar6 = unk_0x290B846DBC23DB32(iParam0, iParam3, iVar4);
		if (iVar4 != iParam1)
		{
			iVar3 = (iVar3 + iVar6);
		}
		else
		{
			iVar5 = 0;
			while (iVar5 <= (iVar6 - 1))
			{
				if (iVar4 == iParam1 && iVar5 == iParam2)
				{
					iVar3 = (iVar3 + func_219(iParam0, iParam3));
					return iVar3;
				}
				else
				{
					iVar3++;
				}
				iVar5++;
			}
		}
		iVar4++;
	}
	return func_221(iParam3);
}

int func_219(int iParam0, int iParam1)//Position - 0xCF74
{
	int iVar0;
	
	iVar0 = unk_0x6F79ECA8C83E4357(iParam0);
	switch (iVar0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 58;
					break;
				
				case 2:
					return 112;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 82;
					break;
				
				case 2:
					return 158;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 88;
					break;
				
				case 2:
					return 154;
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 155;
					break;
				
				case 6:
					return 319;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 155;
					break;
				
				case 6:
					return 319;
					break;
			}
			break;
	}
	return -99;
}

int func_220(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xD0B2
{
	struct<2> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		unk_0x52C04EB4AFEE68A8(&Var0);
		iVar2 = 0;
		iVar3 = unk_0x84E17E2A0638D182(iParam3, 6, -1, 1, -1, -1);
		iVar1 = 0;
		while (iVar1 < iVar3)
		{
			unk_0x6734B8C01E0C0700(iVar1, &Var0);
			if (!unk_0xD90F58A58682ED2F(Var0))
			{
				if (iParam1 == Var0.f_1)
				{
					return (func_217(iParam0) + iVar2);
				}
				iVar2++;
			}
			iVar1++;
		}
	}
	else
	{
		unk_0x583A9200E6659C0E(&Var4);
		iVar6 = 0;
		iVar7 = unk_0x84E17E2A0638D182(iParam3, 6, -1, 0, -1, func_203(iParam2));
		iVar5 = 0;
		while (iVar5 < iVar7)
		{
			unk_0x2E442314FAEFD7AD(iVar5, &Var4);
			if (!unk_0xD90F58A58682ED2F(Var4))
			{
				if (iParam1 == Var4.f_1)
				{
					return (func_216(iParam0, func_203(iParam2)) + iVar6);
				}
				iVar6++;
			}
			iVar5++;
		}
	}
	return -99;
}

int func_221(int iParam0)//Position - 0xD192
{
	switch (iParam0)
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
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
	}
	return 0;
}

struct<10> func_222(int iParam0, int iParam1)//Position - 0xD218
{
	int iVar0;
	struct<10> Var1;
	
	Var1 = 9;
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 31:
					func_224(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_224(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_224(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_224(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_224(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_224(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_224(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_224(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_224(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_224(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_224(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_223(&Var1, iParam0, iParam1, 10);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 31:
					func_224(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_224(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_224(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_224(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_224(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_224(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_224(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_224(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_224(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_224(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_223(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 31:
					func_224(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_224(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_224(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_224(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_224(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_224(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_224(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_224(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_224(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_224(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_223(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_224(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_224(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_224(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_224(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_224(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_224(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_224(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_224(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_224(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_224(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_224(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_224(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_224(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_224(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_224(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 14:
					func_224(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_224(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_224(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_224(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_224(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_224(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_224(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_224(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_224(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_224(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 24:
					func_224(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_223(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_224(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_224(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_224(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_224(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_224(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_224(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_224(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_224(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_224(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_224(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_224(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_224(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_224(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_224(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_224(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8);
					break;
				
				case 14:
					func_224(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_224(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_224(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_224(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_224(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_224(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_224(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_224(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_224(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_224(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_223(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
	}
	return Var1;
}

void func_223(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xDB47
{
	int iVar0;
	struct<4> Var1;
	vector3 vVar2;
	int iVar3;
	
	if (iParam2 != 0 && iParam2 != -99)
	{
		(*iParam0)[0] = 0;
		(*iParam0)[1] = 1;
		(*iParam0)[2] = 2;
		(*iParam0)[3] = 3;
		(*iParam0)[4] = 4;
		(*iParam0)[5] = 5;
		(*iParam0)[6] = 6;
		(*iParam0)[7] = 7;
		(*iParam0)[8] = 8;
		iVar0 = 0;
		if (iParam1 == joaat("player_zero"))
		{
			iVar0 = 0;
		}
		else if (iParam1 == joaat("player_one"))
		{
			iVar0 = 1;
		}
		else if (iParam1 == joaat("player_two"))
		{
			iVar0 = 2;
		}
		else if (iParam1 == joaat("mp_m_freemode_01"))
		{
			iVar0 = 3;
		}
		else if (iParam1 == joaat("mp_f_freemode_01"))
		{
			iVar0 = 4;
		}
		unk_0x4EB4493AFC60FE67(iParam2, &Var1);
		if (!unk_0xD90F58A58682ED2F(Var1))
		{
			iVar3 = 0;
			while (iVar3 < Var1.f_3)
			{
				if (unk_0x85722D65B0D5344D(Var1.f_1, iVar3, &vVar2) && vVar2.z != -1)
				{
					if ((vVar2.x != 0 && vVar2.x != -1) && vVar2.x != 1849449579)
					{
						(*iParam0)[vVar2.z] = func_220(iParam1, vVar2.x, 14, iVar0);
					}
					else if (vVar2.y != -1)
					{
						(*iParam0)[vVar2.z] = vVar2.y;
					}
				}
				iVar3++;
			}
		}
	}
}

void func_224(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0xDC71
{
	(*iParam0)[0] = iParam1;
	(*iParam0)[1] = iParam2;
	(*iParam0)[2] = iParam3;
	(*iParam0)[3] = iParam4;
	(*iParam0)[4] = iParam5;
	(*iParam0)[5] = iParam6;
	(*iParam0)[6] = iParam7;
	(*iParam0)[7] = iParam8;
	(*iParam0)[8] = iParam9;
}

struct<17> func_225(int iParam0, int iParam1)//Position - 0xDCB9
{
	int iVar0;
	struct<17> Var1;
	
	Var1 = 15;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	Var1.f_10 = 0;
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					if (Global_19B04.f_2360.f_63.f_3A[120])
					{
						func_228(&Var1, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					else
					{
						func_228(&Var1, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					break;
				
				case 1:
					func_228(&Var1, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0);
					break;
				
				case 2:
					func_228(&Var1, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8);
					break;
				
				case 3:
					func_228(&Var1, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31);
					break;
				
				case 4:
					func_228(&Var1, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2);
					break;
				
				case 5:
					func_228(&Var1, -99, -99, Global_19B04.f_932.f_21B.f_C4[0], Global_19B04.f_932.f_21B.f_C8[0], 6, 3, 0, 0, 0, -99, 0, 0, 3);
					break;
				
				case 6:
					func_228(&Var1, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_228(&Var1, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 8:
					func_228(&Var1, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_228(&Var1, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_228(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4);
					break;
				
				case 11:
					func_228(&Var1, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_228(&Var1, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_228(&Var1, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_228(&Var1, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6);
					break;
				
				case 15:
					func_228(&Var1, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31);
					break;
				
				case 16:
					func_228(&Var1, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_228(&Var1, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_228(&Var1, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7);
					break;
				
				case 19:
					func_228(&Var1, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_228(&Var1, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_228(&Var1, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_228(&Var1, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_228(&Var1, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_228(&Var1, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_228(&Var1, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_228(&Var1, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_228(&Var1, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_228(&Var1, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_228(&Var1, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_228(&Var1, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_228(&Var1, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31);
					break;
				
				case 32:
					func_228(&Var1, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_228(&Var1, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_228(&Var1, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31);
					break;
				
				case 35:
					func_228(&Var1, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_228(&Var1, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_228(&Var1, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_228(&Var1, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_228(&Var1, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_228(&Var1, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_228(&Var1, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_228(&Var1, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_228(&Var1, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_228(&Var1, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_228(&Var1, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 46:
					func_228(&Var1, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_228(&Var1, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 48:
					func_228(&Var1, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 49:
					func_228(&Var1, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 50:
					func_228(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9);
					break;
				
				case 51:
					func_228(&Var1, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 52:
					func_228(&Var1, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_226(&Var1, iParam0, iParam1, 53);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					func_228(&Var1, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_228(&Var1, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 2:
					func_228(&Var1, -99, -99, Global_19B04.f_932.f_21B.f_C4[1], Global_19B04.f_932.f_21B.f_C8[1], 17, 2, 26, 0, 0, -99, 0, 45, 31);
					break;
				
				case 3:
					func_228(&Var1, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1);
					break;
				
				case 4:
					func_228(&Var1, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2);
					break;
				
				case 5:
					func_228(&Var1, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 6:
					func_228(&Var1, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_228(&Var1, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3);
					break;
				
				case 8:
					func_228(&Var1, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5);
					break;
				
				case 9:
					func_228(&Var1, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_228(&Var1, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_228(&Var1, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 12:
					func_228(&Var1, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_228(&Var1, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_228(&Var1, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_228(&Var1, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_228(&Var1, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_228(&Var1, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_228(&Var1, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31);
					break;
				
				case 19:
					func_228(&Var1, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_228(&Var1, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_228(&Var1, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4);
					break;
				
				case 22:
					func_228(&Var1, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31);
					break;
				
				case 23:
					func_228(&Var1, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31);
					break;
				
				case 24:
					func_228(&Var1, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31);
					break;
				
				case 25:
					func_228(&Var1, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31);
					break;
				
				case 26:
					func_228(&Var1, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31);
					break;
				
				case 27:
					func_228(&Var1, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31);
					break;
				
				case 28:
					func_228(&Var1, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31);
					break;
				
				case 29:
					func_228(&Var1, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31);
					break;
				
				case 30:
					func_228(&Var1, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31);
					break;
				
				case 31:
					func_228(&Var1, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31);
					break;
				
				case 32:
					func_228(&Var1, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31);
					break;
				
				case 33:
					func_228(&Var1, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31);
					break;
				
				case 34:
					func_228(&Var1, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31);
					break;
				
				case 35:
					func_228(&Var1, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31);
					break;
				
				case 36:
					func_228(&Var1, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31);
					break;
				
				case 37:
					func_228(&Var1, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31);
					break;
				
				case 38:
					func_228(&Var1, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_228(&Var1, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_228(&Var1, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_228(&Var1, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_228(&Var1, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_228(&Var1, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6);
					break;
				
				case 44:
					func_228(&Var1, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 45:
					func_228(&Var1, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8);
					break;
				
				case 46:
					func_228(&Var1, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31);
					break;
				
				default:
					func_226(&Var1, iParam0, iParam1, 47);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					func_228(&Var1, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_228(&Var1, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8);
					break;
				
				case 2:
					func_228(&Var1, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1);
					break;
				
				case 3:
					func_228(&Var1, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2);
					break;
				
				case 4:
					func_228(&Var1, -99, -99, Global_19B04.f_932.f_21B.f_C4[2], Global_19B04.f_932.f_21B.f_C8[2], 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 5:
					func_228(&Var1, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6);
					break;
				
				case 6:
					func_228(&Var1, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3);
					break;
				
				case 7:
					func_228(&Var1, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4);
					break;
				
				case 8:
					func_228(&Var1, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_228(&Var1, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_228(&Var1, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_228(&Var1, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_228(&Var1, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_228(&Var1, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_228(&Var1, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_228(&Var1, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_228(&Var1, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_228(&Var1, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_228(&Var1, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 19:
					func_228(&Var1, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_228(&Var1, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_228(&Var1, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_228(&Var1, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_228(&Var1, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_228(&Var1, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_228(&Var1, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_228(&Var1, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_228(&Var1, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_228(&Var1, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_228(&Var1, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_228(&Var1, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_228(&Var1, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 32:
					func_228(&Var1, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_228(&Var1, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_228(&Var1, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 35:
					func_228(&Var1, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_228(&Var1, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_228(&Var1, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_228(&Var1, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_228(&Var1, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_228(&Var1, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_228(&Var1, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_228(&Var1, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_228(&Var1, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_228(&Var1, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_228(&Var1, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 46:
					func_228(&Var1, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_228(&Var1, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_226(&Var1, iParam0, iParam1, 48);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_228(&Var1, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31);
					break;
				
				case 1:
					func_228(&Var1, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0);
					break;
				
				case 2:
					func_228(&Var1, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1);
					break;
				
				case 3:
					func_228(&Var1, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2);
					break;
				
				case 4:
					func_228(&Var1, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3);
					break;
				
				case 5:
					func_228(&Var1, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4);
					break;
				
				case 6:
					func_228(&Var1, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5);
					break;
				
				case 7:
					func_228(&Var1, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6);
					break;
				
				case 8:
					func_228(&Var1, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7);
					break;
				
				case 9:
					func_228(&Var1, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8);
					break;
				
				case 10:
					func_228(&Var1, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9);
					break;
				
				case 11:
					func_228(&Var1, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10);
					break;
				
				case 12:
					func_228(&Var1, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11);
					break;
				
				case 13:
					func_228(&Var1, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12);
					break;
				
				case 14:
					func_228(&Var1, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13);
					break;
				
				case 15:
					func_228(&Var1, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14);
					break;
				
				case 16:
					func_228(&Var1, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15);
					break;
				
				case 17:
					func_228(&Var1, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16);
					break;
				
				case 18:
					func_228(&Var1, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17);
					break;
				
				case 19:
					func_228(&Var1, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18);
					break;
				
				case 20:
					func_228(&Var1, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19);
					break;
				
				case 21:
					func_228(&Var1, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20);
					break;
				
				case 22:
					func_228(&Var1, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21);
					break;
				
				case 23:
					func_228(&Var1, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22);
					break;
				
				case 24:
					func_228(&Var1, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23);
					break;
				
				case 25:
					func_228(&Var1, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24);
					break;
				
				default:
					func_226(&Var1, iParam0, iParam1, 26);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_228(&Var1, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31);
					break;
				
				case 1:
					func_228(&Var1, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31);
					break;
				
				case 2:
					func_228(&Var1, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0);
					break;
				
				case 3:
					func_228(&Var1, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1);
					break;
				
				case 4:
					func_228(&Var1, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2);
					break;
				
				case 5:
					func_228(&Var1, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3);
					break;
				
				case 6:
					func_228(&Var1, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4);
					break;
				
				case 7:
					func_228(&Var1, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5);
					break;
				
				case 8:
					func_228(&Var1, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6);
					break;
				
				case 9:
					func_228(&Var1, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7);
					break;
				
				case 10:
					func_228(&Var1, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8);
					break;
				
				case 11:
					func_228(&Var1, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9);
					break;
				
				case 12:
					func_228(&Var1, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10);
					break;
				
				case 13:
					func_228(&Var1, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31);
					break;
				
				case 14:
					func_228(&Var1, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11);
					break;
				
				case 15:
					func_228(&Var1, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12);
					break;
				
				case 16:
					func_228(&Var1, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13);
					break;
				
				case 17:
					func_228(&Var1, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14);
					break;
				
				case 18:
					func_228(&Var1, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15);
					break;
				
				case 19:
					func_228(&Var1, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16);
					break;
				
				case 20:
					func_228(&Var1, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17);
					break;
				
				case 21:
					func_228(&Var1, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31);
					break;
				
				case 22:
					func_228(&Var1, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18);
					break;
				
				case 23:
					func_228(&Var1, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19);
					break;
				
				case 24:
					func_228(&Var1, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20);
					break;
				
				case 25:
					func_228(&Var1, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21);
					break;
				
				case 26:
					func_228(&Var1, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22);
					break;
				
				case 27:
					func_228(&Var1, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23);
					break;
				
				default:
					func_226(&Var1, iParam0, iParam1, 28);
					break;
			}
			break;
	}
	return Var1;
}

void func_226(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0xFB01
{
	int iVar0;
	struct<5> Var1;
	vector3 vVar2;
	struct<2> Var3;
	int iVar4;
	
	(*uParam0)[0] = 0;
	(*uParam0)[2] = -99;
	(*uParam0)[3] = 0;
	(*uParam0)[4] = 0;
	(*uParam0)[6] = 0;
	(*uParam0)[5] = 0;
	(*uParam0)[8] = 0;
	(*uParam0)[9] = 0;
	(*uParam0)[10] = 0;
	(*uParam0)[1] = 0;
	(*uParam0)[7] = 0;
	(*uParam0)[11] = 0;
	(*uParam0)[13] = -99;
	(*uParam0)[14] = -99;
	uParam0->f_10 = 0;
	iVar0 = 0;
	if (iParam1 == joaat("player_zero"))
	{
		iVar0 = 0;
		(*uParam0)[13] = (10 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("player_one"))
	{
		iVar0 = 1;
		(*uParam0)[13] = (9 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("player_two"))
	{
		iVar0 = 2;
		(*uParam0)[13] = (9 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("mp_m_freemode_01"))
	{
		iVar0 = 3;
	}
	else if (iParam1 == joaat("mp_f_freemode_01"))
	{
		iVar0 = 4;
	}
	unk_0x7BF0EB7CF2278135(iVar0, 0);
	unk_0x6C790B0906752322((iParam2 - iParam3), &Var1);
	if (!unk_0xD90F58A58682ED2F(Var1))
	{
		iVar4 = 0;
		while (iVar4 < Var1.f_4)
		{
			if (unk_0xA69B4643EEC9A084(Var1.f_1, iVar4, &vVar2))
			{
				if ((vVar2.x != 0 && vVar2.x != -1) && vVar2.x != 1849449579)
				{
					if (vVar2.z == 10)
					{
						unk_0x583A9200E6659C0E(&Var3);
						unk_0xA6660705F33B0363(vVar2.x, &Var3);
						if (vVar2.x != Var3.f_1)
						{
							uParam0->f_10 = 1;
						}
					}
					if (vVar2.z == 10 && uParam0->f_10)
					{
						(*uParam0)[func_227(vVar2.z)] = vVar2.x;
						uParam0->f_10 = 1;
					}
					else
					{
						(*uParam0)[func_227(vVar2.z)] = func_220(iParam1, vVar2.x, func_227(vVar2.z), iVar0);
					}
				}
				else if (vVar2.y != -1)
				{
					(*uParam0)[func_227(vVar2.z)] = vVar2.y;
				}
			}
			iVar4++;
		}
		if (Var1.f_3 == 0)
		{
			(*uParam0)[13] = -99;
		}
		else
		{
			(*uParam0)[13] = Var1.f_1;
		}
	}
}

int func_227(int iParam0)//Position - 0xFCEB
{
	switch (iParam0)
	{
		case 0:
			return 0;
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
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

void func_228(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0xFD9B
{
	(*uParam0)[0] = iParam1;
	(*uParam0)[2] = iParam2;
	(*uParam0)[3] = iParam3;
	(*uParam0)[4] = iParam4;
	(*uParam0)[6] = iParam5;
	(*uParam0)[5] = iParam6;
	(*uParam0)[8] = iParam7;
	(*uParam0)[9] = iParam8;
	(*uParam0)[10] = iParam9;
	(*uParam0)[1] = iParam10;
	(*uParam0)[7] = iParam11;
	(*uParam0)[11] = iParam12;
	(*uParam0)[13] = iParam13;
	(*uParam0)[14] = -99;
}

int func_229(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xFE0C
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 == 16)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 14:
					if ((iParam2 == 40 || (iParam2 >= 41 && iParam2 <= 56)) || (iParam2 >= 64 && iParam2 <= 79))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 14:
					if ((iParam2 >= 17 && iParam2 <= 18) || (iParam2 >= 71 && iParam2 <= 86))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 18 && iParam2 <= 130)
					{
						return 1;
					}
					else if (iParam2 >= 10 && iParam2 <= 17)
					{
						return 1;
					}
					else if (iParam2 >= 327)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_215(iParam0, iParam2, 14, 3);
						}
						return (unk_0xF062C4E30590463E(iParam3, -1757550583, 1) || unk_0xF062C4E30590463E(func_215(iParam0, iParam2, 14, 3), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_215(iParam0, iParam2, 1, 3);
						}
						return (unk_0xF062C4E30590463E(iParam3, -1757550583, 0) || unk_0xF062C4E30590463E(func_215(iParam0, iParam2, 1, 3), -1842686353, 0));
					}
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 18 && iParam2 <= 130)
					{
						return 1;
					}
					else if (iParam2 >= 10 && iParam2 <= 17)
					{
						return 1;
					}
					else if (iParam2 >= 327)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_215(iParam0, iParam2, 14, 4);
						}
						return (unk_0xF062C4E30590463E(iParam3, -1757550583, 1) || unk_0xF062C4E30590463E(func_215(iParam0, iParam2, 14, 4), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_215(iParam0, iParam2, 1, 4);
						}
						return (unk_0xF062C4E30590463E(iParam3, -1757550583, 0) || unk_0xF062C4E30590463E(func_215(iParam0, iParam2, 1, 4), -1842686353, 0));
					}
					break;
			}
			break;
	}
	return 0;
}

int func_230(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1008A
{
	if (iParam0 == joaat("player_zero"))
	{
		if (iParam1 == 6)
		{
			if (iParam2 == 10)
			{
				return 1;
			}
		}
		else if (iParam1 == 8)
		{
			if ((iParam2 == 9 || iParam2 == 7) || iParam2 == 23)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 9 && iParam2 <= 14)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if ((((((((((((((((iParam2 == 12 || iParam2 == 59) || iParam2 == 60) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || iParam2 == 37) || iParam2 == 38) || iParam2 == 39) || iParam2 == 40) || iParam2 == 41) || (iParam2 >= 42 && iParam2 <= 44)) || iParam2 == 54) || iParam2 == 55)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (iParam1 == 2)
		{
			if (iParam2 == 20)
			{
				return 1;
			}
		}
		else if (iParam1 == 8)
		{
			if ((iParam2 == 3 || iParam2 == 5) || iParam2 == 9)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 5 && iParam2 <= 10)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((iParam2 == 82 || iParam2 == 10) || iParam2 == 26) || iParam2 == 27) || iParam2 == 28) || iParam2 == 29) || iParam2 == 30) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || (iParam2 >= 37 && iParam2 <= 39))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 8)
		{
			if (iParam2 == 14 || iParam2 == 7)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (((iParam2 == 8 || (iParam2 >= 9 && iParam2 <= 14)) || iParam2 == 15) || iParam2 == 16)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((iParam2 == 88 || iParam2 == 12) || iParam2 == 47) || iParam2 == 48) || iParam2 == 49) || iParam2 == 50) || iParam2 == 51) || iParam2 == 52) || iParam2 == 53) || iParam2 == 54) || iParam2 == 55) || iParam2 == 56) || iParam2 == 57) || (iParam2 >= 58 && iParam2 <= 60))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("mp_m_freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_215(iParam0, iParam2, 1, 3);
					}
					if (unk_0xF062C4E30590463E(iParam3, -1757550583, 0) || unk_0xF062C4E30590463E(iParam3, 66092876, 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_215(iParam0, iParam2, 1, 4);
					}
					if (unk_0xF062C4E30590463E(iParam3, -1757550583, 0) || unk_0xF062C4E30590463E(iParam3, 66092876, 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_231(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x104AF
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			if (iParam1 == 14)
			{
				if ((((((((iParam2 == 58 || iParam2 == 61) || (iParam2 >= 62 && iParam2 <= 69)) || (iParam2 >= 70 && iParam2 <= 79)) || (iParam2 >= 80 && iParam2 <= 89)) || iParam2 == 90) || (iParam2 >= 91 && iParam2 <= 102)) || (iParam2 >= 103 && iParam2 <= 110)) || iParam2 == 111)
				{
					return 1;
				}
			}
			break;
		
		case joaat("player_one"):
			if (iParam1 == 14)
			{
				if (((((((((((iParam2 >= 83 && iParam2 <= 92) || iParam2 == 93) || iParam2 == 94) || (iParam2 >= 95 && iParam2 <= 101)) || (iParam2 >= 102 && iParam2 <= 111)) || (iParam2 >= 112 && iParam2 <= 121)) || (iParam2 >= 122 && iParam2 <= 131)) || (iParam2 >= 132 && iParam2 <= 139)) || (iParam2 >= 140 && iParam2 <= 149)) || (iParam2 >= 150 && iParam2 <= 156)) || iParam2 == 157)
				{
					return 1;
				}
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 14)
			{
				if (((((((((iParam2 == 89 || (iParam2 >= 90 && iParam2 <= 99)) || (iParam2 >= 100 && iParam2 <= 109)) || iParam2 == 111) || iParam2 == 112) || (iParam2 >= 113 && iParam2 <= 122)) || (iParam2 >= 123 && iParam2 <= 132)) || (iParam2 >= 133 && iParam2 <= 142)) || (iParam2 >= 143 && iParam2 <= 152)) || iParam2 == 153)
				{
					return 1;
				}
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return 1;
				}
				else if (iParam2 >= 327)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_215(iParam0, iParam2, 14, 3);
					}
					return unk_0xF062C4E30590463E(iParam3, 97230661, 1);
				}
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return 1;
				}
				else if (iParam2 >= 327)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_215(iParam0, iParam2, 14, 4);
					}
					return unk_0xF062C4E30590463E(iParam3, 97230661, 1);
				}
			}
			break;
	}
	return 0;
}

int func_232(int iParam0, int iParam1)//Position - 0x107A2
{
	int iVar0;
	int iVar1;
	
	if (unk_0x36CEFBE9B745A58D(iParam0))
	{
		return -99;
	}
	iVar0 = unk_0x35C830BCF2BF70BE(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return func_221(iParam1);
	}
	iVar1 = unk_0x98F83843E924A56E(iParam0, iParam1);
	return func_218(iParam0, iVar0, iVar1, iParam1);
}

int func_233(int iParam0, int iParam1)//Position - 0x107E8
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || unk_0x36CEFBE9B745A58D(iParam0))
	{
		return -99;
	}
	iVar0 = func_203(iParam1);
	iVar1 = unk_0xA86A4D206EC8EB16(iParam0, iVar0);
	iVar2 = unk_0x695D13ECF7DAEC22(iParam0, iVar0);
	return func_234(iParam0, iVar1, iVar2, iParam1);
}

int func_234(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x10848
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_203(iParam3);
	iVar1 = unk_0x366048FAE8D7AE6C(iParam0, iVar0);
	iVar3 = 0;
	while (iVar3 <= (iVar1 - 1))
	{
		iVar5 = unk_0x57C0F4ECF269EEB9(iParam0, iVar0, iVar3);
		if (iVar3 != iParam1)
		{
			iVar2 = (iVar2 + iVar5);
		}
		else
		{
			iVar4 = 0;
			while (iVar4 <= (iVar5 - 1))
			{
				if (iVar3 == iParam1 && iVar4 == iParam2)
				{
					return iVar2;
				}
				else
				{
					iVar2++;
				}
				iVar4++;
			}
		}
		iVar3++;
	}
	return -99;
}

void func_235(int iParam0)//Position - 0x108CC
{
	if (unk_0xFA30DFD0084E92FE(Global_11489[1 /*14*/].f_6, 1) && !unk_0xFA30DFD0084E92FE(Global_11489[1 /*14*/].f_6, 6))
	{
		func_241(iParam0, Global_11489[1 /*14*/].f_5, Global_11489[1 /*14*/].f_2, 2, Global_11489[1 /*14*/].f_1, 1, 0);
	}
	if (unk_0xFA30DFD0084E92FE(Global_11489[1 /*14*/].f_6, 1) && unk_0xFA30DFD0084E92FE(Global_11489[1 /*14*/].f_6, 6))
	{
		if (iParam0 == 12)
		{
			func_236(Global_280004, 2, 1, 1, -1);
		}
		else if (iParam0 == 13)
		{
		}
		else if (iParam0 == 14)
		{
			func_236(Global_280004, 2, 1, 1, -1);
		}
		else
		{
			func_236(Global_280004, 2, 1, 1, -1);
		}
	}
}

void func_236(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)//Position - 0x10984
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Global_11486;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_240(iParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		iVar3 = func_239(iVar2, iVar0, 0);
		unk_0xF0059F27F7BB6680(&iVar3, iVar1);
		func_237(iVar2, iVar3, iVar0, 1, 0);
	}
}

void func_237(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x109CE
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_269BC5[iParam0 /*3*/][func_238(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x3A57956BCE003880(iVar0, iParam1, iParam3);
	}
}

int func_238(var uParam0)//Position - 0x109FE
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
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

int func_239(int iParam0, int iParam1, int iParam2)//Position - 0x10A32
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_269BC5[iParam0 /*3*/][func_238(iParam1)];
	if (unk_0x6CB99B97664C3727(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_240(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)//Position - 0x10A64
{
	int iVar0;
	
	*uParam2 = 8804;
	if ((bParam4 && Global_4113E7) || (!bParam4 && bParam5))
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case 8886212:
					case -969630947:
						*uParam2 = 971;
						*uParam3 = 19;
						return 1;
						break;
					
					case 1857811503:
					case -1198063650:
						*uParam2 = 971;
						*uParam3 = 20;
						return 1;
						break;
					
					case 552556691:
					case -1596927918:
						*uParam2 = 971;
						*uParam3 = 21;
						return 1;
						break;
					
					case 328711652:
					case 2093516866:
						*uParam2 = 971;
						*uParam3 = 22;
						return 1;
						break;
					
					case 1194403102:
					case 1863511255:
						*uParam2 = 971;
						*uParam3 = 23;
						return 1;
						break;
					
					case 1107630790:
					case 1503248869:
						*uParam2 = 971;
						*uParam3 = 24;
						return 1;
						break;
					
					case 1807937089:
					case 1263478096:
						*uParam2 = 971;
						*uParam3 = 25;
						return 1;
						break;
					
					case 1453442047:
					case 745170819:
						*uParam2 = 971;
						*uParam3 = 26;
						return 1;
						break;
					
					case -1071423629:
					case -1382822784:
					case 385813134:
						*uParam2 = 935;
						*uParam3 = 0;
						return 1;
						break;
					
					case -833094692:
					case -1731353868:
					case 675392787:
						*uParam2 = 935;
						*uParam3 = 1;
						return 1;
						break;
					
					case -1836153782:
					case -1960638561:
					case -238272479:
						*uParam2 = 935;
						*uParam3 = 2;
						return 1;
						break;
					
					case -1598414687:
					case 147161830:
					case 67757212:
						*uParam2 = 935;
						*uParam3 = 3;
						return 1;
						break;
					
					case 123661793:
					case -92608943:
					case -536372072:
						*uParam2 = 935;
						*uParam3 = 4;
						return 1;
						break;
					
					case 330958487:
					case -162931217:
					case -247578875:
						*uParam2 = 935;
						*uParam3 = 5;
						return 1;
						break;
					
					case -142717408:
					case 1665087452:
					case -854821214:
						*uParam2 = 935;
						*uParam3 = 7;
						return 1;
						break;
					
					case 1290696959:
					case 1012984348:
					case -1458295118:
						*uParam2 = 935;
						*uParam3 = 8;
						return 1;
						break;
					
					case 2059568454:
					case 933072050:
					case -1454802604:
						*uParam2 = 935;
						*uParam3 = 11;
						return 1;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case 8886212:
					case -969630947:
						*uParam2 = 1023;
						*uParam3 = 19;
						return 1;
						break;
					
					case 1857811503:
					case -1198063650:
						*uParam2 = 1023;
						*uParam3 = 20;
						return 1;
						break;
					
					case 552556691:
					case -1596927918:
						*uParam2 = 1023;
						*uParam3 = 21;
						return 1;
						break;
					
					case 328711652:
					case 2093516866:
						*uParam2 = 1023;
						*uParam3 = 22;
						return 1;
						break;
					
					case 1194403102:
					case 1863511255:
						*uParam2 = 1023;
						*uParam3 = 23;
						return 1;
						break;
					
					case 1107630790:
					case 1503248869:
						*uParam2 = 1023;
						*uParam3 = 24;
						return 1;
						break;
					
					case 1807937089:
					case 1263478096:
						*uParam2 = 1023;
						*uParam3 = 25;
						return 1;
						break;
					
					case 1453442047:
					case 745170819:
						*uParam2 = 1023;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case -1795774903:
					case -379046860:
						*uParam2 = 971;
						*uParam3 = 19;
						return 1;
						break;
					
					case 1655095722:
					case 472553912:
						*uParam2 = 971;
						*uParam3 = 20;
						return 1;
						break;
					
					case -1951624263:
					case 147288818:
						*uParam2 = 971;
						*uParam3 = 21;
						return 1;
						break;
					
					case -1586249913:
					case 1027988462:
						*uParam2 = 971;
						*uParam3 = 22;
						return 1;
						break;
					
					case -1472181024:
					case 788217689:
						*uParam2 = 971;
						*uParam3 = 23;
						return 1;
						break;
					
					case -1116178608:
					case 1338147047:
						*uParam2 = 971;
						*uParam3 = 24;
						return 1;
						break;
					
					case -1028914761:
					case 1095820292:
						*uParam2 = 971;
						*uParam3 = 25;
						return 1;
						break;
					
					case -654496167:
					case -1989217217:
						*uParam2 = 971;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case -1795774903:
					case -379046860:
						*uParam2 = 1023;
						*uParam3 = 19;
						return 1;
						break;
					
					case 1655095722:
					case 472553912:
						*uParam2 = 1023;
						*uParam3 = 20;
						return 1;
						break;
					
					case -1951624263:
					case 147288818:
						*uParam2 = 1023;
						*uParam3 = 21;
						return 1;
						break;
					
					case -1586249913:
					case 1027988462:
						*uParam2 = 1023;
						*uParam3 = 22;
						return 1;
						break;
					
					case -1472181024:
					case 788217689:
						*uParam2 = 1023;
						*uParam3 = 23;
						return 1;
						break;
					
					case -1116178608:
					case 1338147047:
						*uParam2 = 1023;
						*uParam3 = 24;
						return 1;
						break;
					
					case -1028914761:
					case 1095820292:
						*uParam2 = 1023;
						*uParam3 = 25;
						return 1;
						break;
					
					case -654496167:
					case -1989217217:
						*uParam2 = 1023;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
			}
	}
	iVar0 = -1;
	if (bParam4)
	{
		if (Global_4113E7)
		{
			iVar0 = unk_0x3C51A25CB060B4D8(iParam0);
		}
		else
		{
			iVar0 = unk_0x343A47DDE4AD45AF(iParam0);
		}
	}
	else if (bParam5)
	{
		iVar0 = unk_0x3C51A25CB060B4D8(iParam0);
	}
	else
	{
		iVar0 = unk_0x343A47DDE4AD45AF(iParam0);
	}
	if (iVar0 == -1)
	{
		return 0;
	}
	switch (iParam1)
	{
		case 1:
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1759;
					break;
				
				case 1:
					*uParam2 = 1760;
					break;
				
				case 2:
					*uParam2 = 1761;
					break;
				
				case 3:
					*uParam2 = 1762;
					break;
				
				case 4:
					*uParam2 = 1763;
					break;
				
				case 5:
					*uParam2 = 1764;
					break;
				
				case 6:
					*uParam2 = 1771;
					break;
				
				case 7:
					*uParam2 = 1772;
					break;
				
				case 8:
					*uParam2 = 1773;
					break;
				
				case 9:
					*uParam2 = 1774;
					break;
				
				case 10:
					*uParam2 = 1775;
					break;
				
				case 11:
					*uParam2 = 1776;
					break;
				
				case 12:
					*uParam2 = 1777;
					break;
				
				case 13:
					*uParam2 = 1785;
					break;
				
				case 14:
					*uParam2 = 1786;
					break;
				
				case 15:
					*uParam2 = 1887;
					break;
				
				case 16:
					*uParam2 = 1888;
					break;
				
				case 17:
					*uParam2 = 1919;
					break;
				
				case 18:
					*uParam2 = 1933;
					break;
				
				case 19:
					*uParam2 = 1934;
					break;
				
				case 20:
					*uParam2 = 1935;
					break;
				
				case 21:
					*uParam2 = 1936;
					break;
				
				case 22:
					*uParam2 = 1937;
					break;
				
				case 23:
					*uParam2 = 2041;
					break;
				
				case 24:
					*uParam2 = 2042;
					break;
				
				case 25:
					*uParam2 = 2068;
					break;
				
				case 26:
					*uParam2 = 2069;
					break;
				
				case 27:
					*uParam2 = 2070;
					break;
				
				case 28:
					*uParam2 = 2071;
					break;
				
				case 29:
					*uParam2 = 2072;
					break;
				
				case 30:
					*uParam2 = 2073;
					break;
				
				case 31:
					*uParam2 = 2074;
					break;
				
				case 32:
					*uParam2 = 2075;
					break;
				
				case 33:
					*uParam2 = 2076;
					break;
				
				case 34:
					*uParam2 = 2077;
					break;
				
				case 35:
					*uParam2 = 2324;
					break;
				
				case 36:
					*uParam2 = 2325;
					break;
				
				case 37:
					*uParam2 = 2385;
					break;
				
				case 38:
					*uParam2 = 2386;
					break;
				
				case 39:
					*uParam2 = 2387;
					break;
				
				case 40:
					*uParam2 = 2388;
					break;
				
				case 41:
					*uParam2 = 2447;
					break;
				
				case 42:
					*uParam2 = 2448;
					break;
				
				case 43:
					*uParam2 = 2449;
					break;
				
				case 44:
					*uParam2 = 2450;
					break;
				
				case 45:
					*uParam2 = 2451;
					break;
				
				case 46:
					*uParam2 = 2452;
					break;
				
				case 47:
					*uParam2 = 2453;
					break;
				
				case 48:
					*uParam2 = 2454;
					break;
				
				case 49:
					*uParam2 = 2455;
					break;
				
				case 50:
					*uParam2 = 2456;
					break;
				
				case 51:
					*uParam2 = 2585;
					break;
				
				case 52:
					*uParam2 = 2586;
					break;
				
				case 53:
					*uParam2 = 2587;
					break;
				
				case 54:
					*uParam2 = 2588;
					break;
				
				case 55:
					*uParam2 = 2589;
					break;
				
				case 56:
					*uParam2 = 2590;
					break;
				
				case 57:
					*uParam2 = 2591;
					break;
				
				case 58:
					*uParam2 = 2592;
					break;
				
				case 59:
					*uParam2 = 2593;
					break;
				
				case 60:
					*uParam2 = 2594;
					break;
				
				case 61:
					*uParam2 = 2595;
					break;
				
				case 62:
					*uParam2 = 3192;
					break;
				
				case 63:
					*uParam2 = 3193;
					break;
				
				case 64:
					*uParam2 = 3194;
					break;
				
				case 65:
					*uParam2 = 3195;
					break;
				
				case 66:
					*uParam2 = 3196;
					break;
				
				case 67:
					*uParam2 = 3197;
					break;
				
				case 68:
					*uParam2 = 3665;
					break;
				
				case 69:
					*uParam2 = 3666;
					break;
				
				case 70:
					*uParam2 = 3667;
					break;
				
				case 71:
					*uParam2 = 3668;
					break;
				
				case 72:
					*uParam2 = 3669;
					break;
				
				case 73:
					*uParam2 = 3670;
					break;
				
				case 74:
					*uParam2 = 3671;
					break;
				
				case 75:
					*uParam2 = 3672;
					break;
				
				case 76:
					*uParam2 = 3673;
					break;
				
				case 77:
					*uParam2 = 3674;
					break;
				
				case 78:
					*uParam2 = 3788;
					break;
				
				case 79:
					*uParam2 = 3789;
					break;
				
				case 80:
					*uParam2 = 3790;
					break;
				
				case 81:
					*uParam2 = 3791;
					break;
				
				case 82:
					*uParam2 = 3792;
					break;
				
				case 83:
					*uParam2 = 3793;
					break;
				
				case 84:
					*uParam2 = 3794;
					break;
				
				case 85:
					*uParam2 = 3795;
					break;
				
				case 86:
					*uParam2 = 3898;
					break;
				
				case 87:
					*uParam2 = 3899;
					break;
				
				case 88:
					*uParam2 = 3900;
					break;
				
				case 89:
					*uParam2 = 5333;
					break;
				
				case 90:
					*uParam2 = 5334;
					break;
				
				case 91:
					*uParam2 = 5335;
					break;
				
				case 92:
					*uParam2 = 5336;
					break;
				
				case 93:
					*uParam2 = 5337;
					break;
				
				case 94:
					*uParam2 = 5338;
					break;
				
				case 95:
					*uParam2 = 5339;
					break;
				
				case 96:
					*uParam2 = 5340;
					break;
				
				case 97:
					*uParam2 = 5341;
					break;
				
				case 98:
					*uParam2 = 5342;
					break;
				
				case 99:
					*uParam2 = 5343;
					break;
				
				case 100:
					*uParam2 = 5344;
					break;
				
				case 101:
					*uParam2 = 5390;
					break;
				
				case 102:
					*uParam2 = 5391;
					break;
				
				case 103:
					*uParam2 = 5392;
					break;
				
				case 104:
					*uParam2 = 5393;
					break;
				
				case 105:
					*uParam2 = 5394;
					break;
				
				case 106:
					*uParam2 = 5395;
					break;
				
				case 107:
					*uParam2 = 5396;
					break;
				
				case 108:
					*uParam2 = 5397;
					break;
				
				case 109:
					*uParam2 = 5398;
					break;
				
				case 110:
					*uParam2 = 5399;
					break;
				
				case 111:
					*uParam2 = 5400;
					break;
				
				case 112:
					*uParam2 = 5401;
					break;
				
				case 113:
					*uParam2 = 5402;
					break;
				
				case 114:
					*uParam2 = 5403;
					break;
				
				case 115:
					*uParam2 = 5404;
					break;
				
				case 116:
					*uParam2 = 5405;
					break;
				
				case 117:
					*uParam2 = 5406;
					break;
				
				case 118:
					*uParam2 = 5407;
					break;
				
				case 119:
					*uParam2 = 5408;
					break;
				
				case 120:
					*uParam2 = 5409;
					break;
				
				case 121:
					*uParam2 = 5410;
					break;
				
				case 122:
					*uParam2 = 5411;
					break;
				
				case 123:
					*uParam2 = 5412;
					break;
				
				case 124:
					*uParam2 = 6118;
					break;
				
				case 125:
					*uParam2 = 6119;
					break;
				
				case 126:
					*uParam2 = 6120;
					break;
				
				case 127:
					*uParam2 = 6121;
					break;
				
				case 128:
					*uParam2 = 6122;
					break;
				
				case 129:
					*uParam2 = 6123;
					break;
				
				case 130:
					*uParam2 = 6124;
					break;
				
				case 131:
					*uParam2 = 6125;
					break;
				
				case 132:
					*uParam2 = 6126;
					break;
				
				case 133:
					*uParam2 = 6127;
					break;
				
				case 134:
					*uParam2 = 6128;
					break;
				
				case 135:
					*uParam2 = 6129;
					break;
				
				case 136:
					*uParam2 = 6130;
					break;
				
				case 137:
					*uParam2 = 6131;
					break;
				
				case 138:
					*uParam2 = 6132;
					break;
				
				case 139:
					*uParam2 = 6431;
					break;
				
				case 140:
					*uParam2 = 6432;
					break;
				
				case 141:
					*uParam2 = 6433;
					break;
				
				case 142:
					*uParam2 = 6434;
					break;
				
				case 143:
					*uParam2 = 6435;
					break;
				
				case 144:
					*uParam2 = 6436;
					break;
				
				case 145:
					*uParam2 = 6437;
					break;
				
				case 146:
					*uParam2 = 6438;
					break;
				
				case 147:
					*uParam2 = 6439;
					break;
				
				case 148:
					*uParam2 = 6440;
					break;
				
				case 149:
					*uParam2 = 6441;
					break;
				
				case 150:
					*uParam2 = 6442;
					break;
				
				case 151:
					*uParam2 = 6443;
					break;
				
				case 152:
					*uParam2 = 6444;
					break;
				
				case 153:
					*uParam2 = 6445;
					break;
				
				case 154:
					*uParam2 = 7262;
					break;
				
				case 155:
					*uParam2 = 7263;
					break;
				
				case 156:
					*uParam2 = 7264;
					break;
				
				case 157:
					*uParam2 = 7265;
					break;
				
				case 158:
					*uParam2 = 7266;
					break;
				
				case 159:
					*uParam2 = 7267;
					break;
				
				case 160:
					*uParam2 = 7268;
					break;
				
				default:
					break;
			}
			break;
		
		case 2:
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1765;
					break;
				
				case 1:
					*uParam2 = 1766;
					break;
				
				case 2:
					*uParam2 = 1767;
					break;
				
				case 3:
					*uParam2 = 1768;
					break;
				
				case 4:
					*uParam2 = 1769;
					break;
				
				case 5:
					*uParam2 = 1770;
					break;
				
				case 6:
					*uParam2 = 1778;
					break;
				
				case 7:
					*uParam2 = 1779;
					break;
				
				case 8:
					*uParam2 = 1780;
					break;
				
				case 9:
					*uParam2 = 1781;
					break;
				
				case 10:
					*uParam2 = 1782;
					break;
				
				case 11:
					*uParam2 = 1783;
					break;
				
				case 12:
					*uParam2 = 1784;
					break;
				
				case 13:
					*uParam2 = 1787;
					break;
				
				case 14:
					*uParam2 = 1788;
					break;
				
				case 15:
					*uParam2 = 1889;
					break;
				
				case 16:
					*uParam2 = 1890;
					break;
				
				case 17:
					*uParam2 = 1920;
					break;
				
				case 18:
					*uParam2 = 1938;
					break;
				
				case 19:
					*uParam2 = 1939;
					break;
				
				case 20:
					*uParam2 = 1940;
					break;
				
				case 21:
					*uParam2 = 1941;
					break;
				
				case 22:
					*uParam2 = 1942;
					break;
				
				case 23:
					*uParam2 = 2043;
					break;
				
				case 24:
					*uParam2 = 2044;
					break;
				
				case 25:
					*uParam2 = 2078;
					break;
				
				case 26:
					*uParam2 = 2079;
					break;
				
				case 27:
					*uParam2 = 2080;
					break;
				
				case 28:
					*uParam2 = 2081;
					break;
				
				case 29:
					*uParam2 = 2082;
					break;
				
				case 30:
					*uParam2 = 2083;
					break;
				
				case 31:
					*uParam2 = 2084;
					break;
				
				case 32:
					*uParam2 = 2085;
					break;
				
				case 33:
					*uParam2 = 2086;
					break;
				
				case 34:
					*uParam2 = 2087;
					break;
				
				case 35:
					*uParam2 = 2326;
					break;
				
				case 36:
					*uParam2 = 2327;
					break;
				
				case 37:
					*uParam2 = 2389;
					break;
				
				case 38:
					*uParam2 = 2390;
					break;
				
				case 39:
					*uParam2 = 2391;
					break;
				
				case 40:
					*uParam2 = 2392;
					break;
				
				case 41:
					*uParam2 = 2457;
					break;
				
				case 42:
					*uParam2 = 2458;
					break;
				
				case 43:
					*uParam2 = 2459;
					break;
				
				case 44:
					*uParam2 = 2460;
					break;
				
				case 45:
					*uParam2 = 2461;
					break;
				
				case 46:
					*uParam2 = 2462;
					break;
				
				case 47:
					*uParam2 = 2463;
					break;
				
				case 48:
					*uParam2 = 2464;
					break;
				
				case 49:
					*uParam2 = 2465;
					break;
				
				case 50:
					*uParam2 = 2466;
					break;
				
				case 51:
					*uParam2 = 2596;
					break;
				
				case 52:
					*uParam2 = 2597;
					break;
				
				case 53:
					*uParam2 = 2598;
					break;
				
				case 54:
					*uParam2 = 2599;
					break;
				
				case 55:
					*uParam2 = 2600;
					break;
				
				case 56:
					*uParam2 = 2601;
					break;
				
				case 57:
					*uParam2 = 2602;
					break;
				
				case 58:
					*uParam2 = 2603;
					break;
				
				case 59:
					*uParam2 = 2604;
					break;
				
				case 60:
					*uParam2 = 2605;
					break;
				
				case 61:
					*uParam2 = 2606;
					break;
				
				case 62:
					*uParam2 = 3198;
					break;
				
				case 63:
					*uParam2 = 3199;
					break;
				
				case 64:
					*uParam2 = 3200;
					break;
				
				case 65:
					*uParam2 = 3201;
					break;
				
				case 66:
					*uParam2 = 3202;
					break;
				
				case 67:
					*uParam2 = 3203;
					break;
				
				case 68:
					*uParam2 = 3675;
					break;
				
				case 69:
					*uParam2 = 3676;
					break;
				
				case 70:
					*uParam2 = 3677;
					break;
				
				case 71:
					*uParam2 = 3678;
					break;
				
				case 72:
					*uParam2 = 3679;
					break;
				
				case 73:
					*uParam2 = 3680;
					break;
				
				case 74:
					*uParam2 = 3681;
					break;
				
				case 75:
					*uParam2 = 3682;
					break;
				
				case 76:
					*uParam2 = 3683;
					break;
				
				case 77:
					*uParam2 = 3684;
					break;
				
				case 78:
					*uParam2 = 3796;
					break;
				
				case 79:
					*uParam2 = 3797;
					break;
				
				case 80:
					*uParam2 = 3798;
					break;
				
				case 81:
					*uParam2 = 3799;
					break;
				
				case 82:
					*uParam2 = 3800;
					break;
				
				case 83:
					*uParam2 = 3801;
					break;
				
				case 84:
					*uParam2 = 3802;
					break;
				
				case 85:
					*uParam2 = 3803;
					break;
				
				case 86:
					*uParam2 = 3901;
					break;
				
				case 87:
					*uParam2 = 3902;
					break;
				
				case 88:
					*uParam2 = 3903;
					break;
				
				case 89:
					*uParam2 = 5345;
					break;
				
				case 90:
					*uParam2 = 5346;
					break;
				
				case 91:
					*uParam2 = 5347;
					break;
				
				case 92:
					*uParam2 = 5348;
					break;
				
				case 93:
					*uParam2 = 5349;
					break;
				
				case 94:
					*uParam2 = 5350;
					break;
				
				case 95:
					*uParam2 = 5351;
					break;
				
				case 96:
					*uParam2 = 5352;
					break;
				
				case 97:
					*uParam2 = 5353;
					break;
				
				case 98:
					*uParam2 = 5354;
					break;
				
				case 99:
					*uParam2 = 5355;
					break;
				
				case 100:
					*uParam2 = 5356;
					break;
				
				case 101:
					*uParam2 = 5413;
					break;
				
				case 102:
					*uParam2 = 5414;
					break;
				
				case 103:
					*uParam2 = 5415;
					break;
				
				case 104:
					*uParam2 = 5416;
					break;
				
				case 105:
					*uParam2 = 5417;
					break;
				
				case 106:
					*uParam2 = 5418;
					break;
				
				case 107:
					*uParam2 = 5419;
					break;
				
				case 108:
					*uParam2 = 5420;
					break;
				
				case 109:
					*uParam2 = 5421;
					break;
				
				case 110:
					*uParam2 = 5422;
					break;
				
				case 111:
					*uParam2 = 5423;
					break;
				
				case 112:
					*uParam2 = 5424;
					break;
				
				case 113:
					*uParam2 = 5425;
					break;
				
				case 114:
					*uParam2 = 5426;
					break;
				
				case 115:
					*uParam2 = 5427;
					break;
				
				case 116:
					*uParam2 = 5428;
					break;
				
				case 117:
					*uParam2 = 5429;
					break;
				
				case 118:
					*uParam2 = 5430;
					break;
				
				case 119:
					*uParam2 = 5431;
					break;
				
				case 120:
					*uParam2 = 5432;
					break;
				
				case 121:
					*uParam2 = 5433;
					break;
				
				case 122:
					*uParam2 = 5434;
					break;
				
				case 123:
					*uParam2 = 5435;
					break;
				
				case 124:
					*uParam2 = 6133;
					break;
				
				case 125:
					*uParam2 = 6134;
					break;
				
				case 126:
					*uParam2 = 6135;
					break;
				
				case 127:
					*uParam2 = 6136;
					break;
				
				case 128:
					*uParam2 = 6137;
					break;
				
				case 129:
					*uParam2 = 6138;
					break;
				
				case 130:
					*uParam2 = 6139;
					break;
				
				case 131:
					*uParam2 = 6140;
					break;
				
				case 132:
					*uParam2 = 6141;
					break;
				
				case 133:
					*uParam2 = 6142;
					break;
				
				case 134:
					*uParam2 = 6143;
					break;
				
				case 135:
					*uParam2 = 6144;
					break;
				
				case 136:
					*uParam2 = 6145;
					break;
				
				case 137:
					*uParam2 = 6146;
					break;
				
				case 138:
					*uParam2 = 6147;
					break;
				
				case 139:
					*uParam2 = 6446;
					break;
				
				case 140:
					*uParam2 = 6447;
					break;
				
				case 141:
					*uParam2 = 6448;
					break;
				
				case 142:
					*uParam2 = 6449;
					break;
				
				case 143:
					*uParam2 = 6450;
					break;
				
				case 144:
					*uParam2 = 6451;
					break;
				
				case 145:
					*uParam2 = 6452;
					break;
				
				case 146:
					*uParam2 = 6453;
					break;
				
				case 147:
					*uParam2 = 6454;
					break;
				
				case 148:
					*uParam2 = 6455;
					break;
				
				case 149:
					*uParam2 = 6456;
					break;
				
				case 150:
					*uParam2 = 6457;
					break;
				
				case 151:
					*uParam2 = 6458;
					break;
				
				case 152:
					*uParam2 = 6459;
					break;
				
				case 153:
					*uParam2 = 6460;
					break;
				
				case 154:
					*uParam2 = 7269;
					break;
				
				case 155:
					*uParam2 = 7270;
					break;
				
				case 156:
					*uParam2 = 7271;
					break;
				
				case 157:
					*uParam2 = 7272;
					break;
				
				case 158:
					*uParam2 = 7273;
					break;
				
				case 159:
					*uParam2 = 7274;
					break;
				
				case 160:
					*uParam2 = 7275;
					break;
				
				default:
					break;
			}
			break;
	}
	*uParam3 = (iVar0 % 32);
	return *uParam2 != 8804;
}

int func_241(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1235B
{
	if (iParam0 == 0)
	{
		if (iParam5 == 1)
		{
			unk_0xF0059F27F7BB6680(&(Global_19B04.f_932[iParam1 /*164*/][iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_932[iParam1 /*164*/][iParam3]), iParam4);
		}
		return unk_0xFA30DFD0084E92FE(Global_19B04.f_932[iParam1 /*164*/][iParam3], iParam4);
	}
	else if (iParam0 == 1)
	{
		if (iParam5 == 1)
		{
			unk_0xF0059F27F7BB6680(&(Global_19B04.f_932[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_932[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		return unk_0xFA30DFD0084E92FE(Global_19B04.f_932[iParam1 /*164*/].f_4[iParam3], iParam4);
	}
	else if (iParam0 == 2)
	{
		if (iParam5 == 1)
		{
			unk_0xF0059F27F7BB6680(&(Global_19B04.f_932[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_932[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		return unk_0xFA30DFD0084E92FE(Global_19B04.f_932[iParam1 /*164*/].f_8[iParam3], iParam4);
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xF0059F27F7BB6680(&(Global_19B04.f_932[iParam1 /*164*/].f_C[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_932[iParam1 /*164*/].f_C[iParam3]), iParam4);
			}
			return unk_0xFA30DFD0084E92FE(Global_19B04.f_932[iParam1 /*164*/].f_C[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xF0059F27F7BB6680(&(Global_19B04.f_932[iParam1 /*164*/].f_10[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_932[iParam1 /*164*/].f_10[iParam3]), iParam4);
			}
			return unk_0xFA30DFD0084E92FE(Global_19B04.f_932[iParam1 /*164*/].f_10[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xF0059F27F7BB6680(&(Global_19B04.f_932[iParam1 /*164*/].f_14[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_932[iParam1 /*164*/].f_14[iParam3]), iParam4);
			}
			return unk_0xFA30DFD0084E92FE(Global_19B04.f_932[iParam1 /*164*/].f_14[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0xF0059F27F7BB6680(&(Global_19B04.f_932[iParam1 /*164*/].f_18[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_932[iParam1 /*164*/].f_18[iParam3]), iParam4);
			}
			return unk_0xFA30DFD0084E92FE(Global_19B04.f_932[iParam1 /*164*/].f_18[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0xF0059F27F7BB6680(&(Global_19B04.f_932[iParam1 /*164*/].f_1C[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_932[iParam1 /*164*/].f_1C[iParam3]), iParam4);
			}
			return unk_0xFA30DFD0084E92FE(Global_19B04.f_932[iParam1 /*164*/].f_1C[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				unk_0xF0059F27F7BB6680(&(Global_19B04.f_932[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_932[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			return unk_0xFA30DFD0084E92FE(Global_19B04.f_932[iParam1 /*164*/].f_20[iParam3], iParam4);
		}
		else if (iParam2 == 6)
		{
			if (iParam5 == 1)
			{
				unk_0xF0059F27F7BB6680(&(Global_19B04.f_932[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_932[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			return unk_0xFA30DFD0084E92FE(Global_19B04.f_932[iParam1 /*164*/].f_24[iParam3], iParam4);
		}
		else if (iParam2 == 7)
		{
			if (iParam5 == 1)
			{
				unk_0xF0059F27F7BB6680(&(Global_19B04.f_932[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_932[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			return unk_0xFA30DFD0084E92FE(Global_19B04.f_932[iParam1 /*164*/].f_28[iParam3], iParam4);
		}
		else if (iParam2 == 8)
		{
			if (iParam5 == 1)
			{
				unk_0xF0059F27F7BB6680(&(Global_19B04.f_932[iParam1 /*164*/].f_2C[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_932[iParam1 /*164*/].f_2C[iParam3]), iParam4);
			}
			return unk_0xFA30DFD0084E92FE(Global_19B04.f_932[iParam1 /*164*/].f_2C[iParam3], iParam4);
		}
		else if (iParam2 == 9)
		{
			if (iParam5 == 1)
			{
				unk_0xF0059F27F7BB6680(&(Global_19B04.f_932[iParam1 /*164*/].f_30[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_932[iParam1 /*164*/].f_30[iParam3]), iParam4);
			}
			return unk_0xFA30DFD0084E92FE(Global_19B04.f_932[iParam1 /*164*/].f_30[iParam3], iParam4);
		}
	}
	else if (iParam0 == 4)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xF0059F27F7BB6680(&(Global_19B04.f_932[iParam1 /*164*/].f_34[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_932[iParam1 /*164*/].f_34[iParam3]), iParam4);
			}
			return unk_0xFA30DFD0084E92FE(Global_19B04.f_932[iParam1 /*164*/].f_34[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xF0059F27F7BB6680(&(Global_19B04.f_932[iParam1 /*164*/].f_38[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_932[iParam1 /*164*/].f_38[iParam3]), iParam4);
			}
			return unk_0xFA30DFD0084E92FE(Global_19B04.f_932[iParam1 /*164*/].f_38[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xF0059F27F7BB6680(&(Global_19B04.f_932[iParam1 /*164*/].f_3C[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_932[iParam1 /*164*/].f_3C[iParam3]), iParam4);
			}
			return unk_0xFA30DFD0084E92FE(Global_19B04.f_932[iParam1 /*164*/].f_3C[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0xF0059F27F7BB6680(&(Global_19B04.f_932[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_932[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			return unk_0xFA30DFD0084E92FE(Global_19B04.f_932[iParam1 /*164*/].f_40[iParam3], iParam4);
		}
	}
	else if (iParam0 == 5)
	{
		if (iParam5 == 1)
		{
			unk_0xF0059F27F7BB6680(&(Global_19B04.f_932[iParam1 /*164*/].f_44[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_932[iParam1 /*164*/].f_44[iParam3]), iParam4);
		}
		return unk_0xFA30DFD0084E92FE(Global_19B04.f_932[iParam1 /*164*/].f_44[iParam3], iParam4);
	}
	else if (iParam0 == 6)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xF0059F27F7BB6680(&(Global_19B04.f_932[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_932[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			return unk_0xFA30DFD0084E92FE(Global_19B04.f_932[iParam1 /*164*/].f_48[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xF0059F27F7BB6680(&(Global_19B04.f_932[iParam1 /*164*/].f_4C[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_932[iParam1 /*164*/].f_4C[iParam3]), iParam4);
			}
			return unk_0xFA30DFD0084E92FE(Global_19B04.f_932[iParam1 /*164*/].f_4C[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xF0059F27F7BB6680(&(Global_19B04.f_932[iParam1 /*164*/].f_50[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_932[iParam1 /*164*/].f_50[iParam3]), iParam4);
			}
			return unk_0xFA30DFD0084E92FE(Global_19B04.f_932[iParam1 /*164*/].f_50[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0xF0059F27F7BB6680(&(Global_19B04.f_932[iParam1 /*164*/].f_54[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_932[iParam1 /*164*/].f_54[iParam3]), iParam4);
			}
			return unk_0xFA30DFD0084E92FE(Global_19B04.f_932[iParam1 /*164*/].f_54[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0xF0059F27F7BB6680(&(Global_19B04.f_932[iParam1 /*164*/].f_58[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_932[iParam1 /*164*/].f_58[iParam3]), iParam4);
			}
			return unk_0xFA30DFD0084E92FE(Global_19B04.f_932[iParam1 /*164*/].f_58[iParam3], iParam4);
		}
	}
	else if (iParam0 == 7)
	{
		if (iParam5 == 1)
		{
			unk_0xF0059F27F7BB6680(&(Global_19B04.f_932[iParam1 /*164*/].f_5C[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_932[iParam1 /*164*/].f_5C[iParam3]), iParam4);
		}
		return unk_0xFA30DFD0084E92FE(Global_19B04.f_932[iParam1 /*164*/].f_5C[iParam3], iParam4);
	}
	else if (iParam0 == 8)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xF0059F27F7BB6680(&(Global_19B04.f_932[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_932[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			return unk_0xFA30DFD0084E92FE(Global_19B04.f_932[iParam1 /*164*/].f_60[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xF0059F27F7BB6680(&(Global_19B04.f_932[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_932[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			return unk_0xFA30DFD0084E92FE(Global_19B04.f_932[iParam1 /*164*/].f_64[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xF0059F27F7BB6680(&(Global_19B04.f_932[iParam1 /*164*/].f_68[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_932[iParam1 /*164*/].f_68[iParam3]), iParam4);
			}
			return unk_0xFA30DFD0084E92FE(Global_19B04.f_932[iParam1 /*164*/].f_68[iParam3], iParam4);
		}
	}
	else if (iParam0 == 9)
	{
		if (iParam5 == 1)
		{
			unk_0xF0059F27F7BB6680(&(Global_19B04.f_932[iParam1 /*164*/].f_6C[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_932[iParam1 /*164*/].f_6C[iParam3]), iParam4);
		}
		return unk_0xFA30DFD0084E92FE(Global_19B04.f_932[iParam1 /*164*/].f_6C[iParam3], iParam4);
	}
	else if (iParam0 == 10)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xF0059F27F7BB6680(&(Global_19B04.f_932[iParam1 /*164*/].f_70[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_932[iParam1 /*164*/].f_70[iParam3]), iParam4);
			}
			return unk_0xFA30DFD0084E92FE(Global_19B04.f_932[iParam1 /*164*/].f_70[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xF0059F27F7BB6680(&(Global_19B04.f_932[iParam1 /*164*/].f_74[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_932[iParam1 /*164*/].f_74[iParam3]), iParam4);
			}
			return unk_0xFA30DFD0084E92FE(Global_19B04.f_932[iParam1 /*164*/].f_74[iParam3], iParam4);
		}
	}
	else if (iParam0 == 11)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xF0059F27F7BB6680(&(Global_19B04.f_932[iParam1 /*164*/].f_78[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_932[iParam1 /*164*/].f_78[iParam3]), iParam4);
			}
			return unk_0xFA30DFD0084E92FE(Global_19B04.f_932[iParam1 /*164*/].f_78[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xF0059F27F7BB6680(&(Global_19B04.f_932[iParam1 /*164*/].f_7C[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_932[iParam1 /*164*/].f_7C[iParam3]), iParam4);
			}
			return unk_0xFA30DFD0084E92FE(Global_19B04.f_932[iParam1 /*164*/].f_7C[iParam3], iParam4);
		}
	}
	else if (iParam0 == 12)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xF0059F27F7BB6680(&(Global_19B04.f_932[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_932[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			return unk_0xFA30DFD0084E92FE(Global_19B04.f_932[iParam1 /*164*/].f_80[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xF0059F27F7BB6680(&(Global_19B04.f_932[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_932[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			return unk_0xFA30DFD0084E92FE(Global_19B04.f_932[iParam1 /*164*/].f_84[iParam3], iParam4);
		}
	}
	else if (iParam0 == 13)
	{
		if (iParam5 == 1)
		{
			unk_0xF0059F27F7BB6680(&(Global_19B04.f_932[iParam1 /*164*/].f_88[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_932[iParam1 /*164*/].f_88[iParam3]), iParam4);
		}
		return unk_0xFA30DFD0084E92FE(Global_19B04.f_932[iParam1 /*164*/].f_88[iParam3], iParam4);
	}
	else if (iParam0 == 14)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xF0059F27F7BB6680(&(Global_19B04.f_932[iParam1 /*164*/].f_8C[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_932[iParam1 /*164*/].f_8C[iParam3]), iParam4);
			}
			return unk_0xFA30DFD0084E92FE(Global_19B04.f_932[iParam1 /*164*/].f_8C[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xF0059F27F7BB6680(&(Global_19B04.f_932[iParam1 /*164*/].f_90[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_932[iParam1 /*164*/].f_90[iParam3]), iParam4);
			}
			return unk_0xFA30DFD0084E92FE(Global_19B04.f_932[iParam1 /*164*/].f_90[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xF0059F27F7BB6680(&(Global_19B04.f_932[iParam1 /*164*/].f_94[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_932[iParam1 /*164*/].f_94[iParam3]), iParam4);
			}
			return unk_0xFA30DFD0084E92FE(Global_19B04.f_932[iParam1 /*164*/].f_94[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0xF0059F27F7BB6680(&(Global_19B04.f_932[iParam1 /*164*/].f_98[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_932[iParam1 /*164*/].f_98[iParam3]), iParam4);
			}
			return unk_0xFA30DFD0084E92FE(Global_19B04.f_932[iParam1 /*164*/].f_98[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0xF0059F27F7BB6680(&(Global_19B04.f_932[iParam1 /*164*/].f_9C[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_932[iParam1 /*164*/].f_9C[iParam3]), iParam4);
			}
			return unk_0xFA30DFD0084E92FE(Global_19B04.f_932[iParam1 /*164*/].f_9C[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				unk_0xF0059F27F7BB6680(&(Global_19B04.f_932[iParam1 /*164*/].f_A0[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_932[iParam1 /*164*/].f_A0[iParam3]), iParam4);
			}
			return unk_0xFA30DFD0084E92FE(Global_19B04.f_932[iParam1 /*164*/].f_A0[iParam3], iParam4);
		}
	}
	return 0;
}

int func_242(int iParam0)//Position - 0x13279
{
	if (!unk_0xFA30DFD0084E92FE(Global_11489[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam0 == 1)
	{
		if (!unk_0xFA30DFD0084E92FE(Global_11489[1 /*14*/].f_6, 1))
		{
			return 0;
		}
		if (!unk_0xFA30DFD0084E92FE(Global_11489[1 /*14*/].f_6, 2))
		{
			return 0;
		}
	}
	return 1;
}

struct<14> func_243(int iParam0, int iParam1, int iParam2)//Position - 0x132CA
{
	func_306();
	if (iParam0 == joaat("player_zero"))
	{
		func_288(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_one"))
	{
		func_269(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_two"))
	{
		func_244(iParam1, iParam2);
	}
	return Global_11489[0 /*14*/];
}

void func_244(int iParam0, int iParam1)//Position - 0x1331C
{
	switch (iParam0)
	{
		case 0:
			func_268(iParam1);
			break;
		
		case 2:
			func_267(iParam1);
			break;
		
		case 3:
			func_264(iParam1);
			break;
		
		case 4:
			func_263(iParam1);
			break;
		
		case 6:
			func_262(iParam1);
			break;
		
		case 5:
			func_261(iParam1);
			break;
		
		case 8:
			func_260(iParam1);
			break;
		
		case 9:
			func_259(iParam1);
			break;
		
		case 10:
			func_258(iParam1);
			break;
		
		case 1:
			func_257(iParam1);
			break;
		
		case 7:
			func_256(iParam1);
			break;
		
		case 11:
			func_255(iParam1);
			break;
		
		case 12:
			func_254(iParam1);
			break;
		
		case 13:
			func_253(iParam1);
			break;
		
		case 14:
			func_245(iParam1);
			break;
	}
}

void func_245(int iParam0)//Position - 0x1340C
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 14;
	Global_11489[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 8;
			break;
		
		case 154:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 2;
			break;
		
		case 88:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P2_E1", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 45;
			iVar5 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P2_E2", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P2_E2_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P2_E2_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P2_E2_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 52;
			iVar5 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P2_E2_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 54;
			iVar5 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P2_E2_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 54;
			iVar5 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P2_E2_6", 16);
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P2_E2_7", 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P2_E2_8", 16);
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P2_E2_9", 16);
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P2_E3", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P2_E3_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P2_E3_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P2_E3_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P2_E3_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P2_E3_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P2_E3_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P2_E3_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P2_E3_8", 16);
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P2_E3_9", 16);
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 113:
			StringCopy(&Var2, "PROPS_P2_E7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 60;
			iVar5 = 10;
			break;
		
		case 114:
			StringCopy(&Var2, "PROPS_P2_E7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 10;
			break;
		
		case 115:
			StringCopy(&Var2, "PROPS_P2_E7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 50;
			iVar5 = 10;
			break;
		
		case 116:
			StringCopy(&Var2, "PROPS_P2_E7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 59;
			iVar5 = 10;
			break;
		
		case 117:
			StringCopy(&Var2, "PROPS_P2_E7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 118:
			StringCopy(&Var2, "PROPS_P2_E7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 119:
			StringCopy(&Var2, "PROPS_P2_E7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 120:
			StringCopy(&Var2, "PROPS_P2_E7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 59;
			iVar5 = 10;
			break;
		
		case 121:
			StringCopy(&Var2, "PROPS_P2_E7_8", 16);
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 79;
			iVar5 = 10;
			break;
		
		case 122:
			StringCopy(&Var2, "PROPS_P2_E7_9", 16);
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 79;
			iVar5 = 10;
			break;
		
		case 123:
			StringCopy(&Var2, "PROPS_P2_E8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 150;
			iVar5 = 10;
			break;
		
		case 124:
			StringCopy(&Var2, "PROPS_P2_E8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 150;
			iVar5 = 10;
			break;
		
		case 125:
			StringCopy(&Var2, "PROPS_P2_E8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 170;
			iVar5 = 10;
			break;
		
		case 126:
			StringCopy(&Var2, "PROPS_P2_E8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 127:
			StringCopy(&Var2, "PROPS_P2_E8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 180;
			iVar5 = 10;
			break;
		
		case 128:
			StringCopy(&Var2, "PROPS_P2_E8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 185;
			iVar5 = 10;
			break;
		
		case 129:
			StringCopy(&Var2, "PROPS_P2_E8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 189;
			iVar5 = 10;
			break;
		
		case 130:
			StringCopy(&Var2, "PROPS_P2_E8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 195;
			iVar5 = 10;
			break;
		
		case 131:
			StringCopy(&Var2, "PROPS_P2_E8_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 210;
			iVar5 = 10;
			break;
		
		case 132:
			StringCopy(&Var2, "PROPS_P2_E8_9", 16);
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 215;
			iVar5 = 10;
			break;
		
		case 133:
			StringCopy(&Var2, "PROPS_P2_E9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 165;
			iVar5 = 10;
			break;
		
		case 134:
			StringCopy(&Var2, "PROPS_P2_E9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 165;
			iVar5 = 10;
			break;
		
		case 135:
			StringCopy(&Var2, "PROPS_P2_E9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 169;
			iVar5 = 10;
			break;
		
		case 136:
			StringCopy(&Var2, "PROPS_P2_E9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 169;
			iVar5 = 10;
			break;
		
		case 137:
			StringCopy(&Var2, "PROPS_P2_E9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 138:
			StringCopy(&Var2, "PROPS_P2_E9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 139:
			StringCopy(&Var2, "PROPS_P2_E9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 140:
			StringCopy(&Var2, "PROPS_P2_E9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 189;
			iVar5 = 10;
			break;
		
		case 141:
			StringCopy(&Var2, "PROPS_P2_E9_8", 16);
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 195;
			iVar5 = 10;
			break;
		
		case 142:
			StringCopy(&Var2, "PROPS_P2_E9_9", 16);
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 195;
			iVar5 = 10;
			break;
		
		case 143:
			StringCopy(&Var2, "PROPS_P2_E10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 49;
			iVar5 = 10;
			break;
		
		case 144:
			StringCopy(&Var2, "PROPS_P2_E10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 10;
			break;
		
		case 145:
			StringCopy(&Var2, "PROPS_P2_E10_2", 16);
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 52;
			iVar5 = 10;
			break;
		
		case 146:
			StringCopy(&Var2, "PROPS_P2_E10_3", 16);
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 147:
			StringCopy(&Var2, "PROPS_P2_E10_4", 16);
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 60;
			iVar5 = 10;
			break;
		
		case 148:
			StringCopy(&Var2, "PROPS_P2_E10_5", 16);
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 149:
			StringCopy(&Var2, "PROPS_P2_E10_6", 16);
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 60;
			iVar5 = 10;
			break;
		
		case 150:
			StringCopy(&Var2, "PROPS_P2_E10_7", 16);
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 63;
			iVar5 = 10;
			break;
		
		case 151:
			StringCopy(&Var2, "PROPS_P2_E10_8", 16);
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 152:
			StringCopy(&Var2, "PROPS_P2_E10_9", 16);
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 68;
			iVar5 = 10;
			break;
		
		case 153:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 100;
			iVar5 = 10;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "PROPS_P2_H2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 320;
			iVar5 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "PROPS_P2_H7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "PROPS_P2_H7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar5 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar5 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 8;
			iVar5 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 9;
			iVar5 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 10;
			iVar5 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 11;
			iVar5 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 12;
			iVar5 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 13;
			iVar5 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 14;
			iVar5 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 15;
			iVar5 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar5 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar5 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 450;
			iVar5 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 59:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 64:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 65:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 66:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 67:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 68:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 69:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 25;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P1_H26_0", 16);
			iVar3 = 26;
			iVar4 = 0;
			iVar1 = 20;
			iVar5 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P1_H26_1", 16);
			iVar3 = 26;
			iVar4 = 1;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P1_H26_2", 16);
			iVar3 = 26;
			iVar4 = 2;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P1_H26_3", 16);
			iVar3 = 26;
			iVar4 = 3;
			iVar1 = 22;
			iVar5 = 0;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P1_H26_4", 16);
			iVar3 = 26;
			iVar4 = 4;
			iVar1 = 20;
			iVar5 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P1_H26_5", 16);
			iVar3 = 26;
			iVar4 = 5;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P1_H26_6", 16);
			iVar3 = 26;
			iVar4 = 6;
			iVar1 = 28;
			iVar5 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P1_H26_7", 16);
			iVar3 = 26;
			iVar4 = 7;
			iVar1 = 24;
			iVar5 = 0;
			break;
		
		case 79:
			StringCopy(&Var2, "PROPS_P1_H26_8", 16);
			iVar3 = 26;
			iVar4 = 8;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "PROPS_P1_H26_9", 16);
			iVar3 = 26;
			iVar4 = 9;
			iVar1 = 22;
			iVar5 = 0;
			break;
		
		case 81:
			StringCopy(&Var2, "PROPS_P1_H26_10", 16);
			iVar3 = 26;
			iVar4 = 10;
			iVar1 = 18;
			iVar5 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "PROPS_P1_H26_11", 16);
			iVar3 = 26;
			iVar4 = 11;
			iVar1 = 20;
			iVar5 = 0;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P1_H26_12", 16);
			iVar3 = 26;
			iVar4 = 12;
			iVar1 = 24;
			iVar5 = 0;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P1_H26_13", 16);
			iVar3 = 26;
			iVar4 = 13;
			iVar1 = 22;
			iVar5 = 0;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P1_H26_14", 16);
			iVar3 = 26;
			iVar4 = 14;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P1_H26_15", 16);
			iVar3 = 26;
			iVar4 = 15;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 87:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 27;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		default:
			func_252(iVar7, iParam0, 155);
			return;
			break;
	}
	func_246(&(Global_11489[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_246(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x14683
{
	int iVar0;
	int iVar1;
	
	uParam0->f_6 = 0;
	*uParam0 = iParam9;
	uParam0->f_1 = (iParam2 % 32);
	uParam0->f_2 = (iParam2 / 32);
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_7 = iParam6;
	StringCopy(&(uParam0->f_8), sParam3, 16);
	uParam0->f_D = iParam8;
	uParam0->f_C = func_251(iParam8);
	if ((uParam0->f_2 >= 10 && uParam0->f_5 >= 0) && uParam0->f_5 < 3)
	{
		if (!bParam10)
		{
		}
		uParam0->f_2 = 0;
	}
	if (unk_0x56BEECB328B6D29D(sParam3) != unk_0x56BEECB328B6D29D("NO_LABEL"))
	{
	}
	if (bParam7)
	{
		unk_0xF0059F27F7BB6680(&(uParam0->f_6), 3);
	}
	if (bParam10)
	{
		unk_0xF0059F27F7BB6680(&(uParam0->f_6), 0);
		if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
		{
			unk_0xF0059F27F7BB6680(&(uParam0->f_6), 5);
		}
		unk_0xF0059F27F7BB6680(&(uParam0->f_6), 1);
		unk_0xF0059F27F7BB6680(&(uParam0->f_6), 2);
		unk_0xF0059F27F7BB6680(&(uParam0->f_6), 6);
		if (func_85(14))
		{
			return;
		}
		if (iParam1 == 1)
		{
			if (unk_0xF062C4E30590463E(Global_280004, 1827025211, 0))
			{
				unk_0xF0059F27F7BB6680(&(uParam0->f_6), 7);
			}
		}
		if (iParam1 == 12)
		{
			if (!func_250(Global_280004, 1, 1, 1, -1))
			{
				unk_0x7CB6FD92BE491AD9(&(uParam0->f_6), 2);
			}
			if (!func_250(Global_280004, 2, 1, 1, -1))
			{
				unk_0xF0059F27F7BB6680(&(uParam0->f_6), 4);
			}
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_250(Global_280004, 1, 1, 1, -1))
			{
				unk_0x7CB6FD92BE491AD9(&(uParam0->f_6), 2);
			}
			if (!func_250(Global_280004, 2, 1, 1, -1))
			{
				unk_0xF0059F27F7BB6680(&(uParam0->f_6), 4);
			}
		}
		else
		{
			if (!func_250(Global_280004, 1, 1, 1, -1))
			{
				unk_0x7CB6FD92BE491AD9(&(uParam0->f_6), 2);
			}
			if (!func_250(Global_280004, 2, 1, 1, -1))
			{
				unk_0xF0059F27F7BB6680(&(uParam0->f_6), 4);
			}
		}
	}
	else if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
	{
		unk_0xF0059F27F7BB6680(&(uParam0->f_6), 0);
		unk_0xF0059F27F7BB6680(&(uParam0->f_6), 5);
		if (func_241(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0))
		{
			unk_0xF0059F27F7BB6680(&(uParam0->f_6), 1);
		}
		if (func_241(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0))
		{
			unk_0xF0059F27F7BB6680(&(uParam0->f_6), 2);
		}
		if (!func_241(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0))
		{
			unk_0xF0059F27F7BB6680(&(uParam0->f_6), 4);
		}
	}
	else
	{
		unk_0xF0059F27F7BB6680(&(uParam0->f_6), 0);
		if ((((((((((iParam1 == 11 || iParam1 == 4) || iParam1 == 6) || iParam1 == 1) || iParam1 == 14) || iParam1 == 2) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 7) || iParam1 == 12)
		{
			if (func_85(14))
			{
				return;
			}
			iVar0 = func_239(func_249(iParam1, uParam0->f_2), Global_11486, 0);
			if (unk_0xFA30DFD0084E92FE(iVar0, uParam0->f_1))
			{
				unk_0xF0059F27F7BB6680(&(uParam0->f_6), 1);
			}
			iVar0 = func_239(func_248(iParam1, uParam0->f_2), Global_11486, 0);
			if (unk_0xFA30DFD0084E92FE(iVar0, uParam0->f_1))
			{
				unk_0xF0059F27F7BB6680(&(uParam0->f_6), 2);
			}
			if (func_247(iParam1, uParam0->f_2, &iVar1))
			{
				iVar0 = func_239(iVar1, Global_11486, 0);
				if (!unk_0xFA30DFD0084E92FE(iVar0, uParam0->f_1))
				{
					unk_0xF0059F27F7BB6680(&(uParam0->f_6), 4);
				}
			}
		}
		else
		{
			unk_0xF0059F27F7BB6680(&(uParam0->f_6), 1);
			unk_0xF0059F27F7BB6680(&(uParam0->f_6), 2);
		}
	}
	if (iParam1 == 14)
	{
		if (iParam4 == -1)
		{
			unk_0xF0059F27F7BB6680(&(uParam0->f_6), 1);
			unk_0xF0059F27F7BB6680(&(uParam0->f_6), 2);
		}
	}
}

bool func_247(int iParam0, int iParam1, var uParam2)//Position - 0x14A14
{
	*uParam2 = 978;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 979;
					break;
				
				case 3:
					*uParam2 = 1429;
					break;
				
				case 4:
					*uParam2 = 995;
					break;
				
				case 6:
					*uParam2 = 1003;
					break;
				
				case 8:
					*uParam2 = 1430;
					break;
				
				case 9:
					*uParam2 = 1438;
					break;
				
				case 10:
					*uParam2 = 1440;
					break;
				
				case 1:
					*uParam2 = 1011;
					break;
				
				case 7:
					*uParam2 = 1441;
					break;
				
				case 11:
					*uParam2 = 987;
					break;
				
				case 14:
					*uParam2 = 1019;
					break;
				
				case 12:
					*uParam2 = 1030;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 980;
					break;
				
				case 4:
					*uParam2 = 996;
					break;
				
				case 6:
					*uParam2 = 1004;
					break;
				
				case 8:
					*uParam2 = 1431;
					break;
				
				case 9:
					*uParam2 = 1439;
					break;
				
				case 7:
					*uParam2 = 1442;
					break;
				
				case 11:
					*uParam2 = 988;
					break;
				
				case 14:
					*uParam2 = 1020;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 981;
					break;
				
				case 4:
					*uParam2 = 997;
					break;
				
				case 6:
					*uParam2 = 1005;
					break;
				
				case 8:
					*uParam2 = 1432;
					break;
				
				case 7:
					*uParam2 = 1443;
					break;
				
				case 11:
					*uParam2 = 989;
					break;
				
				case 14:
					*uParam2 = 1021;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 998;
					break;
				
				case 6:
					*uParam2 = 1006;
					break;
				
				case 8:
					*uParam2 = 1433;
					break;
				
				case 11:
					*uParam2 = 990;
					break;
				
				case 14:
					*uParam2 = 1022;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 999;
					break;
				
				case 6:
					*uParam2 = 1007;
					break;
				
				case 8:
					*uParam2 = 1434;
					break;
				
				case 11:
					*uParam2 = 991;
					break;
				
				case 14:
					*uParam2 = 1023;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1000;
					break;
				
				case 6:
					*uParam2 = 1008;
					break;
				
				case 8:
					*uParam2 = 1435;
					break;
				
				case 11:
					*uParam2 = 992;
					break;
				
				case 14:
					*uParam2 = 1024;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1001;
					break;
				
				case 6:
					*uParam2 = 1009;
					break;
				
				case 8:
					*uParam2 = 1436;
					break;
				
				case 11:
					*uParam2 = 993;
					break;
				
				case 14:
					*uParam2 = 1025;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1002;
					break;
				
				case 6:
					*uParam2 = 1010;
					break;
				
				case 8:
					*uParam2 = 1437;
					break;
				
				case 11:
					*uParam2 = 994;
					break;
				
				case 14:
					*uParam2 = 1026;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1027;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1028;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1029;
					break;
			}
			break;
	}
	return *uParam2 != 978;
}

int func_248(int iParam0, int iParam1)//Position - 0x14E19
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 927;
					break;
				
				case 3:
					return 1414;
					break;
				
				case 4:
					return 943;
					break;
				
				case 6:
					return 951;
					break;
				
				case 8:
					return 1415;
					break;
				
				case 9:
					return 1423;
					break;
				
				case 10:
					return 1425;
					break;
				
				case 1:
					return 959;
					break;
				
				case 7:
					return 1426;
					break;
				
				case 11:
					return 935;
					break;
				
				case 14:
					return 967;
					break;
				
				case 12:
					return 978;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 928;
					break;
				
				case 4:
					return 944;
					break;
				
				case 6:
					return 952;
					break;
				
				case 8:
					return 1416;
					break;
				
				case 9:
					return 1424;
					break;
				
				case 7:
					return 1427;
					break;
				
				case 11:
					return 936;
					break;
				
				case 14:
					return 968;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 929;
					break;
				
				case 4:
					return 945;
					break;
				
				case 6:
					return 953;
					break;
				
				case 8:
					return 1417;
					break;
				
				case 7:
					return 1428;
					break;
				
				case 11:
					return 937;
					break;
				
				case 14:
					return 969;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 946;
					break;
				
				case 6:
					return 954;
					break;
				
				case 8:
					return 1418;
					break;
				
				case 11:
					return 938;
					break;
				
				case 14:
					return 970;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 947;
					break;
				
				case 6:
					return 955;
					break;
				
				case 8:
					return 1419;
					break;
				
				case 11:
					return 939;
					break;
				
				case 14:
					return 971;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 948;
					break;
				
				case 6:
					return 956;
					break;
				
				case 8:
					return 1420;
					break;
				
				case 11:
					return 940;
					break;
				
				case 14:
					return 972;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 949;
					break;
				
				case 6:
					return 957;
					break;
				
				case 8:
					return 1421;
					break;
				
				case 11:
					return 941;
					break;
				
				case 14:
					return 973;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 950;
					break;
				
				case 6:
					return 958;
					break;
				
				case 8:
					return 1422;
					break;
				
				case 11:
					return 942;
					break;
				
				case 14:
					return 974;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 975;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 976;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 977;
					break;
			}
			break;
	}
	return 935;
}

int func_249(int iParam0, int iParam1)//Position - 0x15214
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 875;
					break;
				
				case 3:
					return 1399;
					break;
				
				case 4:
					return 891;
					break;
				
				case 6:
					return 899;
					break;
				
				case 8:
					return 1400;
					break;
				
				case 9:
					return 1408;
					break;
				
				case 10:
					return 1410;
					break;
				
				case 1:
					return 907;
					break;
				
				case 7:
					return 1411;
					break;
				
				case 11:
					return 883;
					break;
				
				case 14:
					return 915;
					break;
				
				case 12:
					return 926;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 876;
					break;
				
				case 4:
					return 892;
					break;
				
				case 6:
					return 900;
					break;
				
				case 8:
					return 1401;
					break;
				
				case 9:
					return 1409;
					break;
				
				case 7:
					return 1412;
					break;
				
				case 11:
					return 884;
					break;
				
				case 14:
					return 916;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 877;
					break;
				
				case 4:
					return 893;
					break;
				
				case 6:
					return 901;
					break;
				
				case 8:
					return 1402;
					break;
				
				case 7:
					return 1413;
					break;
				
				case 11:
					return 885;
					break;
				
				case 14:
					return 917;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 894;
					break;
				
				case 6:
					return 902;
					break;
				
				case 8:
					return 1403;
					break;
				
				case 11:
					return 886;
					break;
				
				case 14:
					return 918;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 895;
					break;
				
				case 6:
					return 903;
					break;
				
				case 8:
					return 1404;
					break;
				
				case 11:
					return 887;
					break;
				
				case 14:
					return 919;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 896;
					break;
				
				case 6:
					return 904;
					break;
				
				case 8:
					return 1405;
					break;
				
				case 11:
					return 888;
					break;
				
				case 14:
					return 920;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 897;
					break;
				
				case 6:
					return 905;
					break;
				
				case 8:
					return 1406;
					break;
				
				case 11:
					return 889;
					break;
				
				case 14:
					return 921;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 898;
					break;
				
				case 6:
					return 906;
					break;
				
				case 8:
					return 1407;
					break;
				
				case 11:
					return 890;
					break;
				
				case 14:
					return 922;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 923;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 924;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 925;
					break;
			}
			break;
	}
	return 883;
}

int func_250(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)//Position - 0x1560F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Global_11486;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_240(iParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		iVar3 = func_239(iVar2, iVar0, 0);
		return unk_0xFA30DFD0084E92FE(iVar3, iVar1);
	}
	return 0;
}

int func_251(int iParam0)//Position - 0x15651
{
	switch (iParam0)
	{
		case -1:
			return 0;
			break;
		
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
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 0;
			break;
		
		case 13:
			return 0;
			break;
	}
	return 0;
}

void func_252(int iParam0, int iParam1, int iParam2)//Position - 0x15725
{
	int iVar0;
	int iVar1;
	struct<8> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<10> Var6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	struct<10> Var11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	iVar0 = (iParam1 - iParam2);
	iVar0 = iVar0;
	if (iVar0 < 0)
	{
		return;
	}
	iVar1 = Global_11489[0 /*14*/].f_5;
	if (iParam0 == 12)
	{
		iVar4 = 0;
		iVar5 = unk_0x7BF0EB7CF2278135(iVar1, 0);
		iVar3 = 0;
		while (iVar3 < iVar5)
		{
			unk_0x6C790B0906752322(iVar3, &Var2);
			if (!unk_0xD90F58A58682ED2F(Var2))
			{
				if (iVar4 == (iParam1 - iParam2))
				{
					Global_280004 = Var2.f_1;
					Global_280005 = Var2;
					func_246(&(Global_11489[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
					return;
				}
				iVar4++;
			}
			iVar3++;
		}
	}
	else if (iParam0 == 13)
	{
		func_246(&(Global_11489[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
	}
	else if (iParam0 == 14)
	{
		unk_0x52C04EB4AFEE68A8(&Var6);
		iVar9 = 0;
		iVar10 = unk_0x84E17E2A0638D182(iVar1, 6, -1, 1, -1, -1);
		iVar8 = 0;
		while (iVar8 < iVar10)
		{
			unk_0x6734B8C01E0C0700(iVar8, &Var6);
			if (!unk_0xD90F58A58682ED2F(Var6))
			{
				if (iVar9 == (iParam1 - iParam2))
				{
					if (Var6.f_6 == 0)
					{
						iVar7 = 9;
					}
					else if (Var6.f_6 == 1)
					{
						iVar7 = 10;
					}
					else if (Var6.f_6 == 2)
					{
						iVar7 = 2;
					}
					else if (Var6.f_6 == 3)
					{
						iVar7 = 3;
					}
					else if (Var6.f_6 == 4)
					{
						iVar7 = 4;
					}
					else if (Var6.f_6 == 5)
					{
						iVar7 = 5;
					}
					else if (Var6.f_6 == 6)
					{
						iVar7 = 6;
					}
					else if (Var6.f_6 == 7)
					{
						iVar7 = 7;
					}
					else if (Var6.f_6 == 8)
					{
						iVar7 = 8;
					}
					else
					{
						iVar7 = -1;
					}
					Global_280004 = Var6.f_1;
					Global_280005 = Var6;
					func_246(&(Global_11489[0 /*14*/]), iParam0, iParam1, &(Var6.f_9), Var6.f_3, Var6.f_4, Var6.f_5, unk_0xF062C4E30590463E(Var6.f_1, -2050632586, 0), iVar7, 2, Var6.f_1 != 0);
					return;
				}
				iVar9++;
			}
			iVar8++;
		}
	}
	else
	{
		unk_0x583A9200E6659C0E(&Var11);
		iVar13 = 0;
		iVar14 = unk_0x84E17E2A0638D182(iVar1, 6, -1, 0, -1, func_203(iParam0));
		iVar12 = 0;
		while (iVar12 < iVar14)
		{
			unk_0x2E442314FAEFD7AD(iVar12, &Var11);
			if (!unk_0xD90F58A58682ED2F(Var11))
			{
				if (iVar13 == (iParam1 - iParam2))
				{
					Global_280004 = Var11.f_1;
					Global_280005 = Var11;
					func_246(&(Global_11489[0 /*14*/]), iParam0, iParam1, &(Var11.f_9), Var11.f_3, Var11.f_4, Var11.f_5, unk_0xF062C4E30590463E(Var11.f_1, -2050632586, 0), -1, 2, Var11.f_1 != 0);
					return;
				}
				iVar13++;
			}
			iVar12++;
		}
	}
}

void func_253(int iParam0)//Position - 0x159A0
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 13;
	Global_11489[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_252(iVar7, iParam0, 9);
			return;
			break;
	}
	func_246(&(Global_11489[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_254(int iParam0)//Position - 0x15AF6
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 12;
	Global_11489[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P2_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "OUTFIT_P2_5", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "OUTFIT_P2_6", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P2_7", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P2_8", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P2_9", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "OUTFIT_P2_10", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P2_12", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P2_13", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "OUTFIT_P2_14", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P2_15", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P2_16", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P2_17", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P2_18", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P2_19", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P2_20", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P2_21", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P2_22", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P2_23", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P2_24", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P2_25", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P2_26", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P2_27", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P2_28", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 119;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P2_29", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 99;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P2_30", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 129;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P2_44", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 125;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P2_45", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 120;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P2_46", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 139;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P2_47", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 149;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P2_48", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 145;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P2_49", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 140;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P2_50", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 135;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P2_31", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P2_32", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P2_33", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P2_34", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P2_35", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P2_36", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P2_37", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5500;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P2_38", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P2_39", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P2_40", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P2_41", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P2_42", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P2_43", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "OUTFIT_P2_12", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_252(iVar7, iParam0, 48);
			return;
			break;
	}
	func_246(&(Global_11489[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_255(int iParam0)//Position - 0x16003
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 11;
	Global_11489[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_252(iVar7, iParam0, 1);
			return;
			break;
	}
	func_246(&(Global_11489[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_256(int iParam0)//Position - 0x16077
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 7;
	Global_11489[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_252(iVar7, iParam0, 1);
			return;
			break;
	}
	func_246(&(Global_11489[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_257(int iParam0)//Position - 0x160EA
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 1;
	Global_11489[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P2_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P2_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P2_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P2_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "BERD_P2_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		default:
			func_252(iVar7, iParam0, 6);
			return;
			break;
	}
	func_246(&(Global_11489[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_258(int iParam0)//Position - 0x161D0
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 10;
	Global_11489[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 1;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 2;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 4;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 5;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 1;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 2;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 3;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 4;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 5;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 6;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 7;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 8;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 9;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 1;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 2;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 3;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 4;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 5;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 6;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 1;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 2;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 3;
			break;
		
		default:
			func_252(iVar7, iParam0, 33);
			return;
			break;
	}
	func_246(&(Global_11489[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_259(int iParam0)//Position - 0x16532
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 9;
	Global_11489[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 2;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 125;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 150;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 175;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 85;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 150;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 175;
			break;
		
		case 15:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 270;
			break;
		
		case 16:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 270;
			break;
		
		default:
			func_252(iVar7, iParam0, 17);
			return;
			break;
	}
	func_246(&(Global_11489[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_260(int iParam0)//Position - 0x16742
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 8;
	Global_11489[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "SPEC_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "SPEC_P2_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 16;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_252(iVar7, iParam0, 18);
			return;
			break;
	}
	func_246(&(Global_11489[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_261(int iParam0)//Position - 0x16971
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 5;
	Global_11489[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_252(iVar7, iParam0, 7);
			return;
			break;
	}
	func_246(&(Global_11489[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_262(int iParam0)//Position - 0x16A80
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 6;
	Global_11489[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P2_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 22;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P2_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 45;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P2_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 65;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P2_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 58;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P2_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 72;
			break;
		
		case 6:
			StringCopy(&Var2, "FEET_P2_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 68;
			break;
		
		case 7:
			StringCopy(&Var2, "FEET_P2_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 60;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "FEET_P2_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "FEET_P2_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "FEET_P2_9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "FEET_P2_9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 680;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P2_9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 650;
			break;
		
		case 19:
			StringCopy(&Var2, "FEET_P2_9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 670;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P2_9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 700;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P2_9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 680;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P2_9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 720;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P2_9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 740;
			break;
		
		case 24:
			StringCopy(&Var2, "FEET_P2_9_8", 16);
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 760;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P2_9_9", 16);
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 780;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P2_9_10", 16);
			iVar3 = 9;
			iVar4 = 10;
			iVar1 = 750;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P2_9_11", 16);
			iVar3 = 9;
			iVar4 = 11;
			iVar1 = 700;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P2_10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P2_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 790;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P2_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 750;
			break;
		
		case 38:
			StringCopy(&Var2, "FEET_P2_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 860;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P2_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 750;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P2_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 790;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P2_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P2_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 820;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P2_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 800;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P2_18_8", 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar1 = 850;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P2_18_9", 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar1 = 870;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P2_18_10", 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar1 = 720;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P2_18_11", 16);
			iVar3 = 18;
			iVar4 = 11;
			iVar1 = 740;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P2_18_12", 16);
			iVar3 = 18;
			iVar4 = 12;
			iVar1 = 800;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P2_18_13", 16);
			iVar3 = 18;
			iVar4 = 13;
			iVar1 = 750;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P2_18_14", 16);
			iVar3 = 18;
			iVar4 = 14;
			iVar1 = 770;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P2_18_15", 16);
			iVar3 = 18;
			iVar4 = 15;
			iVar1 = 860;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P2_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 850;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P2_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 800;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P2_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 780;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P2_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 890;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P2_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 820;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P2_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P2_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 870;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P2_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 930;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P2_19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 880;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P2_19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 900;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P2_19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 920;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P2_19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 970;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P2_19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 990;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P2_19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 960;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P2_19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 980;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P2_19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 950;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P2_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 110;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P2_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P2_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 120;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P2_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 110;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P2_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 125;
			break;
		
		case 73:
			StringCopy(&Var2, "FEET_P2_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 128;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P2_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 135;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P2_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 130;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P2_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 145;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P2_20_9", 16);
			iVar3 = 20;
			iVar4 = 9;
			iVar1 = 110;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P2_20_10", 16);
			iVar3 = 20;
			iVar4 = 10;
			iVar1 = 120;
			break;
		
		case 79:
			StringCopy(&Var2, "FEET_P2_20_11", 16);
			iVar3 = 20;
			iVar4 = 11;
			iVar1 = 150;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P2_20_12", 16);
			iVar3 = 20;
			iVar4 = 12;
			iVar1 = 125;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P2_20_13", 16);
			iVar3 = 20;
			iVar4 = 13;
			iVar1 = 120;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P2_20_14", 16);
			iVar3 = 20;
			iVar4 = 14;
			iVar1 = 130;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P2_20_15", 16);
			iVar3 = 20;
			iVar4 = 15;
			iVar1 = 110;
			break;
		
		default:
			func_252(iVar7, iParam0, 84);
			return;
			break;
	}
	func_246(&(Global_11489[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_263(int iParam0)//Position - 0x1741E
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 4;
	Global_11489[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P2_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 95;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P2_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 129;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P2_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 115;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "LEGS_P2_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "LEGS_P2_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 750;
			break;
		
		case 20:
			StringCopy(&Var2, "LEGS_P2_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 650;
			break;
		
		case 21:
			StringCopy(&Var2, "LEGS_P2_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 850;
			break;
		
		case 22:
			StringCopy(&Var2, "LEGS_P2_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 850;
			break;
		
		case 23:
			StringCopy(&Var2, "LEGS_P2_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 750;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P2_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 690;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P2_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 820;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P2_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 650;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P2_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 690;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P2_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 690;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P2_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 820;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "LEGS_P2_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "LEGS_P2_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "LEGS_P2_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "LEGS_P2_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 58;
			break;
		
		case 36:
			StringCopy(&Var2, "LEGS_P2_17_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			iVar1 = 68;
			break;
		
		case 37:
			StringCopy(&Var2, "LEGS_P2_17_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			iVar1 = 65;
			break;
		
		case 38:
			StringCopy(&Var2, "LEGS_P2_17_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar1 = 60;
			break;
		
		case 39:
			StringCopy(&Var2, "LEGS_P2_17_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar1 = 65;
			break;
		
		case 40:
			StringCopy(&Var2, "LEGS_P2_17_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar1 = 63;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P2_17_6", 16);
			iVar3 = 17;
			iVar4 = 6;
			iVar1 = 60;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P2_17_7", 16);
			iVar3 = 17;
			iVar4 = 7;
			iVar1 = 58;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P2_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P2_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P2_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 99;
			break;
		
		case 46:
			StringCopy(&Var2, "LEGS_P2_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 105;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P2_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 110;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P2_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 110;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P2_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 99;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P2_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 110;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P2_18_8", 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar1 = 110;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P2_18_9", 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar1 = 105;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P2_18_10", 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar1 = 105;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P2_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 15;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P2_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 15;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P2_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 15;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P2_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 15;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P2_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 15;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P2_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 15;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P2_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 15;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P2_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 15;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P2_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 600;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P2_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 600;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P2_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 600;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P2_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 600;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P2_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 600;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P2_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 600;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P2_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 600;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P2_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 600;
			break;
		
		case 70:
			StringCopy(&Var2, "LEGS_P2_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 600;
			break;
		
		case 71:
			StringCopy(&Var2, "LEGS_P2_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 80;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P2_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 80;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P2_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 80;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P2_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 80;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P2_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 80;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P2_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 80;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P2_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 80;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P2_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 80;
			break;
		
		case 79:
			StringCopy(&Var2, "LEGS_P2_21_8", 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 80;
			break;
		
		case 80:
			StringCopy(&Var2, "LEGS_P2_21_9", 16);
			iVar3 = 21;
			iVar4 = 9;
			iVar1 = 80;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P2_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P2_22_1", 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 12;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P2_22_2", 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 12;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P2_22_3", 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 22;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P2_22_4", 16);
			iVar3 = 22;
			iVar4 = 4;
			iVar1 = 18;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P2_22_5", 16);
			iVar3 = 22;
			iVar4 = 5;
			iVar1 = 20;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P2_22_6", 16);
			iVar3 = 22;
			iVar4 = 6;
			iVar1 = 30;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P2_22_7", 16);
			iVar3 = 22;
			iVar4 = 7;
			iVar1 = 30;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P2_22_8", 16);
			iVar3 = 22;
			iVar4 = 8;
			iVar1 = 30;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P2_22_9", 16);
			iVar3 = 22;
			iVar4 = 9;
			iVar1 = 30;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P2_23_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			break;
		
		case 92:
			StringCopy(&Var2, "LEGS_P2_24_0", 16);
			iVar3 = 24;
			iVar4 = 0;
			break;
		
		case 93:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 25;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 0;
			break;
		
		case 95:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 1;
			break;
		
		case 96:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 2;
			break;
		
		case 97:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 3;
			break;
		
		case 98:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 4;
			break;
		
		case 99:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 5;
			break;
		
		case 100:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 6;
			break;
		
		case 101:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 7;
			break;
		
		case 102:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 8;
			break;
		
		case 103:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 9;
			break;
		
		default:
			func_252(iVar7, iParam0, 104);
			return;
			break;
	}
	func_246(&(Global_11489[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_264(int iParam0)//Position - 0x17F90
{
	if (iParam0 < 136)
	{
		func_266(iParam0);
	}
	else
	{
		func_265(iParam0);
	}
	if (Global_11489[0 /*14*/].f_2 == -1)
	{
		func_252(3, iParam0, 242);
	}
}

void func_265(int iParam0)//Position - 0x17FC4
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_11489[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 136:
			StringCopy(&Var2, "TORSO_P2_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 32;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P2_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 39;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P2_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 40;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P2_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 42;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P2_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 45;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P2_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 48;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P2_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 52;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P2_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 55;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P2_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar1 = 390;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P2_22_1", 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 390;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P2_22_2", 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 560;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P2_22_3", 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 390;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P2_22_4", 16);
			iVar3 = 22;
			iVar4 = 4;
			iVar1 = 390;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P2_22_5", 16);
			iVar3 = 22;
			iVar4 = 5;
			iVar1 = 390;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P2_22_6", 16);
			iVar3 = 22;
			iVar4 = 6;
			iVar1 = 560;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P2_22_7", 16);
			iVar3 = 22;
			iVar4 = 7;
			iVar1 = 390;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P2_22_8", 16);
			iVar3 = 22;
			iVar4 = 8;
			iVar1 = 390;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P2_22_9", 16);
			iVar3 = 22;
			iVar4 = 9;
			iVar1 = 390;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P2_22_10", 16);
			iVar3 = 22;
			iVar4 = 10;
			iVar1 = 390;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P2_22_11", 16);
			iVar3 = 22;
			iVar4 = 11;
			iVar1 = 3950;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P2_23_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar1 = 150;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P2_23_1", 16);
			iVar3 = 23;
			iVar4 = 1;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P2_23_2", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar1 = 150;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P2_23_3", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar1 = 150;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P2_23_4", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar1 = 160;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P2_23_5", 16);
			iVar3 = 23;
			iVar4 = 5;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P2_24_0", 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar1 = 19;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P2_24_1", 16);
			iVar3 = 24;
			iVar4 = 1;
			iVar1 = 20;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P2_24_2", 16);
			iVar3 = 24;
			iVar4 = 2;
			iVar1 = 19;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P2_24_3", 16);
			iVar3 = 24;
			iVar4 = 3;
			iVar1 = 22;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P2_24_4", 16);
			iVar3 = 24;
			iVar4 = 4;
			iVar1 = 20;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P2_24_5", 16);
			iVar3 = 24;
			iVar4 = 5;
			iVar1 = 28;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P2_24_6", 16);
			iVar3 = 24;
			iVar4 = 6;
			iVar1 = 28;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P2_24_7", 16);
			iVar3 = 24;
			iVar4 = 7;
			iVar1 = 25;
			break;
		
		case 170:
			StringCopy(&Var2, "TORSO_P2_24_8", 16);
			iVar3 = 24;
			iVar4 = 8;
			iVar1 = 22;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P2_24_9", 16);
			iVar3 = 24;
			iVar4 = 9;
			iVar1 = 19;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P2_24_10", 16);
			iVar3 = 24;
			iVar4 = 10;
			iVar1 = 22;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P2_24_11", 16);
			iVar3 = 24;
			iVar4 = 11;
			iVar1 = 19;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P2_24_12", 16);
			iVar3 = 24;
			iVar4 = 12;
			iVar1 = 20;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P2_24_13", 16);
			iVar3 = 24;
			iVar4 = 13;
			iVar1 = 25;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P2_24_14", 16);
			iVar3 = 24;
			iVar4 = 14;
			iVar1 = 20;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P2_24_15", 16);
			iVar3 = 24;
			iVar4 = 15;
			iVar1 = 28;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P2_25_0", 16);
			iVar3 = 25;
			iVar4 = 0;
			iVar1 = 35;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P2_25_1", 16);
			iVar3 = 25;
			iVar4 = 1;
			iVar1 = 40;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P2_25_2", 16);
			iVar3 = 25;
			iVar4 = 2;
			iVar1 = 45;
			break;
		
		case 181:
			StringCopy(&Var2, "TORSO_P2_25_3", 16);
			iVar3 = 25;
			iVar4 = 3;
			iVar1 = 45;
			break;
		
		case 182:
			StringCopy(&Var2, "TORSO_P2_25_4", 16);
			iVar3 = 25;
			iVar4 = 4;
			iVar1 = 49;
			break;
		
		case 183:
			StringCopy(&Var2, "TORSO_P2_25_5", 16);
			iVar3 = 25;
			iVar4 = 5;
			iVar1 = 820;
			break;
		
		case 184:
			StringCopy(&Var2, "TORSO_P2_25_6", 16);
			iVar3 = 25;
			iVar4 = 6;
			iVar1 = 790;
			break;
		
		case 185:
			StringCopy(&Var2, "TORSO_P2_25_7", 16);
			iVar3 = 25;
			iVar4 = 7;
			iVar1 = 820;
			break;
		
		case 186:
			StringCopy(&Var2, "TORSO_P2_25_8", 16);
			iVar3 = 25;
			iVar4 = 8;
			iVar1 = 929;
			break;
		
		case 187:
			StringCopy(&Var2, "TORSO_P2_25_9", 16);
			iVar3 = 25;
			iVar4 = 9;
			iVar1 = 40;
			break;
		
		case 188:
			StringCopy(&Var2, "TORSO_P2_25_10", 16);
			iVar3 = 25;
			iVar4 = 10;
			iVar1 = 850;
			break;
		
		case 189:
			StringCopy(&Var2, "TORSO_P2_25_11", 16);
			iVar3 = 25;
			iVar4 = 11;
			iVar1 = 790;
			break;
		
		case 190:
			StringCopy(&Var2, "TORSO_P2_26_0", 16);
			iVar3 = 26;
			iVar4 = 0;
			break;
		
		case 191:
			StringCopy(&Var2, "TORSO_P2_26_1", 16);
			iVar3 = 26;
			iVar4 = 1;
			break;
		
		case 192:
			StringCopy(&Var2, "TORSO_P2_26_2", 16);
			iVar3 = 26;
			iVar4 = 2;
			break;
		
		case 193:
			StringCopy(&Var2, "TORSO_P2_26_3", 16);
			iVar3 = 26;
			iVar4 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "TORSO_P2_26_4", 16);
			iVar3 = 26;
			iVar4 = 4;
			break;
		
		case 195:
			StringCopy(&Var2, "TORSO_P2_26_5", 16);
			iVar3 = 26;
			iVar4 = 5;
			break;
		
		case 196:
			StringCopy(&Var2, "TORSO_P2_26_6", 16);
			iVar3 = 26;
			iVar4 = 6;
			break;
		
		case 197:
			StringCopy(&Var2, "TORSO_P2_26_7", 16);
			iVar3 = 26;
			iVar4 = 7;
			break;
		
		case 198:
			StringCopy(&Var2, "TORSO_P2_26_8", 16);
			iVar3 = 26;
			iVar4 = 8;
			break;
		
		case 199:
			StringCopy(&Var2, "TORSO_P2_26_9", 16);
			iVar3 = 26;
			iVar4 = 9;
			break;
		
		case 200:
			StringCopy(&Var2, "TORSO_P2_27_0", 16);
			iVar3 = 27;
			iVar4 = 0;
			iVar1 = 2200;
			break;
		
		case 201:
			StringCopy(&Var2, "TORSO_P2_27_1", 16);
			iVar3 = 27;
			iVar4 = 1;
			iVar1 = 2500;
			break;
		
		case 202:
			StringCopy(&Var2, "TORSO_P2_27_2", 16);
			iVar3 = 27;
			iVar4 = 2;
			iVar1 = 2500;
			break;
		
		case 203:
			StringCopy(&Var2, "TORSO_P2_27_3", 16);
			iVar3 = 27;
			iVar4 = 3;
			iVar1 = 2200;
			break;
		
		case 204:
			StringCopy(&Var2, "TORSO_P2_27_4", 16);
			iVar3 = 27;
			iVar4 = 4;
			iVar1 = 2500;
			break;
		
		case 205:
			StringCopy(&Var2, "TORSO_P2_27_5", 16);
			iVar3 = 27;
			iVar4 = 5;
			iVar1 = 2500;
			break;
		
		case 206:
			StringCopy(&Var2, "TORSO_P2_27_6", 16);
			iVar3 = 27;
			iVar4 = 6;
			iVar1 = 2200;
			break;
		
		case 207:
			StringCopy(&Var2, "TORSO_P2_28_0", 16);
			iVar3 = 28;
			iVar4 = 0;
			iVar1 = 1100;
			break;
		
		case 208:
			StringCopy(&Var2, "TORSO_P2_28_1", 16);
			iVar3 = 28;
			iVar4 = 1;
			iVar1 = 1200;
			break;
		
		case 209:
			StringCopy(&Var2, "TORSO_P2_28_2", 16);
			iVar3 = 28;
			iVar4 = 2;
			iVar1 = 1220;
			break;
		
		case 210:
			StringCopy(&Var2, "TORSO_P2_28_3", 16);
			iVar3 = 28;
			iVar4 = 3;
			iVar1 = 1250;
			break;
		
		case 211:
			StringCopy(&Var2, "TORSO_P2_28_4", 16);
			iVar3 = 28;
			iVar4 = 4;
			iVar1 = 1300;
			break;
		
		case 212:
			StringCopy(&Var2, "TORSO_P2_28_5", 16);
			iVar3 = 28;
			iVar4 = 5;
			iVar1 = 1360;
			break;
		
		case 213:
			StringCopy(&Var2, "TORSO_P2_28_6", 16);
			iVar3 = 28;
			iVar4 = 6;
			iVar1 = 35;
			break;
		
		case 214:
			StringCopy(&Var2, "TORSO_P2_28_7", 16);
			iVar3 = 28;
			iVar4 = 7;
			iVar1 = 38;
			break;
		
		case 215:
			StringCopy(&Var2, "TORSO_P2_28_8", 16);
			iVar3 = 28;
			iVar4 = 8;
			iVar1 = 40;
			break;
		
		case 216:
			StringCopy(&Var2, "TORSO_P2_28_9", 16);
			iVar3 = 28;
			iVar4 = 9;
			iVar1 = 42;
			break;
		
		case 217:
			StringCopy(&Var2, "TORSO_P2_28_10", 16);
			iVar3 = 28;
			iVar4 = 10;
			iVar1 = 50;
			break;
		
		case 218:
			StringCopy(&Var2, "TORSO_P2_28_11", 16);
			iVar3 = 28;
			iVar4 = 11;
			iVar1 = 45;
			break;
		
		case 219:
			StringCopy(&Var2, "TORSO_P2_28_12", 16);
			iVar3 = 28;
			iVar4 = 12;
			iVar1 = 45;
			break;
		
		case 220:
			StringCopy(&Var2, "TORSO_P2_28_13", 16);
			iVar3 = 28;
			iVar4 = 13;
			iVar1 = 44;
			break;
		
		case 221:
			StringCopy(&Var2, "TORSO_P2_28_14", 16);
			iVar3 = 28;
			iVar4 = 14;
			iVar1 = 46;
			break;
		
		case 222:
			StringCopy(&Var2, "TORSO_P2_28_15", 16);
			iVar3 = 28;
			iVar4 = 15;
			iVar1 = 52;
			break;
		
		case 223:
			StringCopy(&Var2, "TORSO_P2_29_0", 16);
			iVar3 = 29;
			iVar4 = 0;
			iVar1 = 3200;
			break;
		
		case 224:
			StringCopy(&Var2, "TORSO_P2_29_1", 16);
			iVar3 = 29;
			iVar4 = 1;
			iVar1 = 3200;
			break;
		
		case 225:
			StringCopy(&Var2, "TORSO_P2_29_2", 16);
			iVar3 = 29;
			iVar4 = 2;
			iVar1 = 2550;
			break;
		
		case 226:
			StringCopy(&Var2, "TORSO_P2_29_3", 16);
			iVar3 = 29;
			iVar4 = 3;
			iVar1 = 2750;
			break;
		
		case 227:
			StringCopy(&Var2, "TORSO_P2_29_4", 16);
			iVar3 = 29;
			iVar4 = 4;
			iVar1 = 2590;
			break;
		
		case 228:
			StringCopy(&Var2, "TORSO_P2_29_5", 16);
			iVar3 = 29;
			iVar4 = 5;
			iVar1 = 2750;
			break;
		
		case 229:
			StringCopy(&Var2, "TORSO_P2_29_6", 16);
			iVar3 = 29;
			iVar4 = 6;
			iVar1 = 2550;
			break;
		
		case 230:
			StringCopy(&Var2, "TORSO_P2_29_7", 16);
			iVar3 = 29;
			iVar4 = 7;
			iVar1 = 2590;
			break;
		
		case 231:
			StringCopy(&Var2, "TORSO_P2_29_8", 16);
			iVar3 = 29;
			iVar4 = 8;
			iVar1 = 2720;
			break;
		
		case 232:
			StringCopy(&Var2, "TORSO_P2_29_9", 16);
			iVar3 = 29;
			iVar4 = 9;
			iVar1 = 2750;
			break;
		
		case 233:
			StringCopy(&Var2, "TORSO_P2_30_0", 16);
			iVar3 = 30;
			iVar4 = 0;
			iVar1 = 3250;
			break;
		
		case 234:
			StringCopy(&Var2, "TORSO_P2_30_1", 16);
			iVar3 = 30;
			iVar4 = 1;
			iVar1 = 2950;
			break;
		
		case 235:
			StringCopy(&Var2, "TORSO_P2_30_2", 16);
			iVar3 = 30;
			iVar4 = 2;
			iVar1 = 3100;
			break;
		
		case 236:
			StringCopy(&Var2, "TORSO_P2_30_3", 16);
			iVar3 = 30;
			iVar4 = 3;
			iVar1 = 3150;
			break;
		
		case 237:
			StringCopy(&Var2, "TORSO_P2_30_4", 16);
			iVar3 = 30;
			iVar4 = 4;
			iVar1 = 3240;
			break;
		
		case 238:
			StringCopy(&Var2, "TORSO_P2_30_5", 16);
			iVar3 = 30;
			iVar4 = 5;
			iVar1 = 3350;
			break;
		
		case 239:
			StringCopy(&Var2, "TORSO_P2_30_6", 16);
			iVar3 = 30;
			iVar4 = 6;
			iVar1 = 3400;
			break;
		
		case 240:
			StringCopy(&Var2, "TORSO_P2_30_7", 16);
			iVar3 = 30;
			iVar4 = 7;
			iVar1 = 3280;
			break;
		
		case 241:
			StringCopy(&Var2, "TORSO_P2_31_0", 16);
			iVar3 = 31;
			iVar4 = 0;
			break;
		
		default:
			return;
			break;
	}
	func_246(&(Global_11489[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_266(int iParam0)//Position - 0x18BDD
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_11489[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P2_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 25;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P2_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P2_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 15;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P2_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 25;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P2_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 25;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P2_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 22;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P2_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 22;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P2_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 20;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P2_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 20;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P2_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 24;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P2_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 26;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P2_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			iVar1 = 28;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P2_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			iVar1 = 29;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P2_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			iVar1 = 22;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P2_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			iVar1 = 20;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "TORSO_P2_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 35;
			break;
		
		case 19:
			StringCopy(&Var2, "TORSO_P2_3_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 22;
			break;
		
		case 20:
			StringCopy(&Var2, "TORSO_P2_3_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 25;
			break;
		
		case 21:
			StringCopy(&Var2, "TORSO_P2_3_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 38;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P2_3_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 40;
			break;
		
		case 23:
			StringCopy(&Var2, "TORSO_P2_3_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 40;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P2_3_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 40;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P2_3_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 40;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P2_3_8", 16);
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 40;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P2_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P2_4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 500;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P2_4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 560;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P2_4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 600;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P2_4_4tu", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 650;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P2_4_5tu", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 500;
			break;
		
		case 33:
			StringCopy(&Var2, "TORSO_P2_4_6tu", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 560;
			break;
		
		case 34:
			StringCopy(&Var2, "TORSO_P2_4_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 500;
			break;
		
		case 35:
			StringCopy(&Var2, "TORSO_P2_4_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 650;
			break;
		
		case 36:
			StringCopy(&Var2, "TORSO_P2_4_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 540;
			break;
		
		case 37:
			StringCopy(&Var2, "TORSO_P2_4_10", 16);
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 690;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P2_4_11", 16);
			iVar3 = 4;
			iVar4 = 11;
			iVar1 = 560;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P2_4_12", 16);
			iVar3 = 4;
			iVar4 = 12;
			iVar1 = 590;
			break;
		
		case 40:
			StringCopy(&Var2, "TORSO_P2_4_13", 16);
			iVar3 = 4;
			iVar4 = 13;
			iVar1 = 690;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P2_4_14", 16);
			iVar3 = 4;
			iVar4 = 14;
			iVar1 = 540;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P2_4_15", 16);
			iVar3 = 4;
			iVar4 = 15;
			iVar1 = 500;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 53:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P2_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P2_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P2_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 25;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P2_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 27;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P2_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 22;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P2_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 350;
			break;
		
		case 60:
			StringCopy(&Var2, "TORSO_P2_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 27;
			break;
		
		case 61:
			StringCopy(&Var2, "TORSO_P2_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 370;
			break;
		
		case 62:
			StringCopy(&Var2, "TORSO_P2_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 25;
			break;
		
		case 63:
			StringCopy(&Var2, "TORSO_P2_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 22;
			break;
		
		case 64:
			StringCopy(&Var2, "TORSO_P2_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 25;
			break;
		
		case 65:
			StringCopy(&Var2, "TORSO_P2_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			break;
		
		case 66:
			StringCopy(&Var2, "TORSO_P2_11_12", 16);
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 22;
			break;
		
		case 67:
			StringCopy(&Var2, "TORSO_P2_11_13", 16);
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 27;
			break;
		
		case 68:
			StringCopy(&Var2, "TORSO_P2_11_14", 16);
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 25;
			break;
		
		case 69:
			StringCopy(&Var2, "TORSO_P2_11_15", 16);
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 27;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 1;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P2_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P2_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 39;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P2_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 42;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P2_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 49;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P2_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 35;
			break;
		
		case 76:
			StringCopy(&Var2, "TORSO_P2_13_5", 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 50;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P2_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 50;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P2_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 50;
			break;
		
		case 79:
			StringCopy(&Var2, "TORSO_P2_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P2_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 88;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P2_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 60;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P2_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 80;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P2_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 70;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P2_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 80;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P2_14_6", 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 70;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P2_14_7", 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 90;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P2_14_8", 16);
			iVar3 = 14;
			iVar4 = 8;
			iVar1 = 95;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P2_14_9", 16);
			iVar3 = 14;
			iVar4 = 9;
			iVar1 = 105;
			break;
		
		case 89:
			StringCopy(&Var2, "TORSO_P2_14_10", 16);
			iVar3 = 14;
			iVar4 = 10;
			iVar1 = 95;
			break;
		
		case 90:
			StringCopy(&Var2, "TORSO_P2_14_11", 16);
			iVar3 = 14;
			iVar4 = 11;
			iVar1 = 110;
			break;
		
		case 91:
			StringCopy(&Var2, "TORSO_P2_14_12", 16);
			iVar3 = 14;
			iVar4 = 12;
			iVar1 = 98;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P2_14_13", 16);
			iVar3 = 14;
			iVar4 = 13;
			iVar1 = 88;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P2_14_14", 16);
			iVar3 = 14;
			iVar4 = 14;
			iVar1 = 98;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P2_14_15", 16);
			iVar3 = 14;
			iVar4 = 15;
			iVar1 = 110;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P2_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P2_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P2_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P2_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P2_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 520;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P2_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 490;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P2_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 450;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P2_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 420;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P2_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 420;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P2_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 85;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P2_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 85;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P2_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 75;
			break;
		
		case 107:
			StringCopy(&Var2, "TORSO_P2_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 68;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P2_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 68;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P2_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 78;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P2_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 85;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P2_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 68;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P2_19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 75;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P2_19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 75;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P2_19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 78;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P2_19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 75;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P2_19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 75;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P2_19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 75;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P2_19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 78;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P2_19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 78;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P2_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 40;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P2_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 32;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P2_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 32;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P2_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 32;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P2_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P2_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 38;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P2_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 35;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P2_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 38;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P2_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 29;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P2_20_9", 16);
			iVar3 = 20;
			iVar4 = 9;
			iVar1 = 32;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P2_20_10", 16);
			iVar3 = 20;
			iVar4 = 10;
			iVar1 = 29;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P2_20_11", 16);
			iVar3 = 20;
			iVar4 = 11;
			iVar1 = 35;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P2_20_12", 16);
			iVar3 = 20;
			iVar4 = 12;
			iVar1 = 32;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P2_20_13", 16);
			iVar3 = 20;
			iVar4 = 13;
			iVar1 = 35;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P2_20_14", 16);
			iVar3 = 20;
			iVar4 = 14;
			iVar1 = 32;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P2_20_15", 16);
			iVar3 = 20;
			iVar4 = 15;
			iVar1 = 40;
			break;
		
		default:
			return;
			break;
	}
	func_246(&(Global_11489[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_267(int iParam0)//Position - 0x19AEB
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 2;
	Global_11489[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P2_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P2_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P2_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P2_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "HAIR_P2_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "HAIR_P2_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "HAIR_P2_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "HAIR_P2_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		default:
			func_252(iVar7, iParam0, 9);
			return;
			break;
	}
	func_246(&(Global_11489[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_268(int iParam0)//Position - 0x19C17
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 0;
	Global_11489[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		
		default:
			func_252(iVar7, iParam0, 7);
			return;
			break;
	}
	func_246(&(Global_11489[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_269(int iParam0, int iParam1)//Position - 0x19D14
{
	switch (iParam0)
	{
		case 0:
			func_287(iParam1);
			break;
		
		case 2:
			func_286(iParam1);
			break;
		
		case 3:
			func_282(iParam1);
			break;
		
		case 4:
			func_281(iParam1);
			break;
		
		case 6:
			func_280(iParam1);
			break;
		
		case 5:
			func_279(iParam1);
			break;
		
		case 8:
			func_278(iParam1);
			break;
		
		case 9:
			func_277(iParam1);
			break;
		
		case 10:
			func_276(iParam1);
			break;
		
		case 1:
			func_275(iParam1);
			break;
		
		case 7:
			func_274(iParam1);
			break;
		
		case 11:
			func_273(iParam1);
			break;
		
		case 12:
			func_272(iParam1);
			break;
		
		case 13:
			func_271(iParam1);
			break;
		
		case 14:
			func_270(iParam1);
			break;
	}
}

void func_270(int iParam0)//Position - 0x19E04
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 14;
	Global_11489[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 8;
			break;
		
		case 158:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 2;
			break;
		
		case 159:
			StringCopy(&Var2, "PROPS_P1_EA1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 4590;
			iVar5 = 2;
			break;
		
		case 160:
			StringCopy(&Var2, "PROPS_P1_EA1_1", 16);
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 4100;
			iVar5 = 2;
			break;
		
		case 161:
			StringCopy(&Var2, "PROPS_P1_EA1_2", 16);
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 3850;
			iVar5 = 2;
			break;
		
		case 162:
			StringCopy(&Var2, "PROPS_P1_EA1_3", 16);
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 1850;
			iVar5 = 2;
			break;
		
		case 163:
			StringCopy(&Var2, "PROPS_P1_EA1_4", 16);
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 5250;
			iVar5 = 2;
			break;
		
		case 164:
			StringCopy(&Var2, "PROPS_P1_EA1_5", 16);
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 2700;
			iVar5 = 2;
			break;
		
		case 165:
			StringCopy(&Var2, "PROPS_P1_EA1_6", 16);
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 3100;
			iVar5 = 2;
			break;
		
		case 166:
			StringCopy(&Var2, "PROPS_P1_EA1_7", 16);
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 5050;
			iVar5 = 2;
			break;
		
		case 167:
			StringCopy(&Var2, "PROPS_P1_EA2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 2500;
			iVar5 = 2;
			break;
		
		case 168:
			StringCopy(&Var2, "PROPS_P1_EA2_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 1950;
			iVar5 = 2;
			break;
		
		case 169:
			StringCopy(&Var2, "PROPS_P1_EA2_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 3900;
			iVar5 = 2;
			break;
		
		case 170:
			StringCopy(&Var2, "PROPS_P1_EA2_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 3550;
			iVar5 = 2;
			break;
		
		case 171:
			StringCopy(&Var2, "PROPS_P1_EA2_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 4500;
			iVar5 = 2;
			break;
		
		case 172:
			StringCopy(&Var2, "PROPS_P1_EA2_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 2700;
			iVar5 = 2;
			break;
		
		case 173:
			StringCopy(&Var2, "PROPS_P1_EA2_6", 16);
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 3100;
			iVar5 = 2;
			break;
		
		case 174:
			StringCopy(&Var2, "PROPS_P1_EA2_7", 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 2950;
			iVar5 = 2;
			break;
		
		case 82:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 10;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P1_E1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P1_E1_1", 16);
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P1_E1_2", 16);
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P1_E1_3", 16);
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 87:
			StringCopy(&Var2, "PROPS_P1_E1_4", 16);
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 88:
			StringCopy(&Var2, "PROPS_P1_E1_5", 16);
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P1_E1_6", 16);
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P1_E1_7", 16);
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P1_E1_8", 16);
			iVar3 = 1;
			iVar4 = 8;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P1_E1_9", 16);
			iVar3 = 1;
			iVar4 = 9;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P1_E2", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P1_E3", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 110;
			iVar5 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P1_E4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 120;
			iVar5 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P1_E4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 128;
			iVar5 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P1_E4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 130;
			iVar5 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P1_E4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 140;
			iVar5 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P1_E4_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 145;
			iVar5 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P1_E4_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 135;
			iVar5 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P1_E4_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 138;
			iVar5 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P1_E5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 110;
			iVar5 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P1_E5_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 112;
			iVar5 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P1_E5_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 115;
			iVar5 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P1_E5_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 118;
			iVar5 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P1_E5_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 120;
			iVar5 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P1_E5_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 125;
			iVar5 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P1_E5_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 128;
			iVar5 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P1_E5_7", 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 138;
			iVar5 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "PROPS_P1_E5_8", 16);
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 140;
			iVar5 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "PROPS_P1_E5_9", 16);
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 155;
			iVar5 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "PROPS_P1_E6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 113:
			StringCopy(&Var2, "PROPS_P1_E6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 114:
			StringCopy(&Var2, "PROPS_P1_E6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 115:
			StringCopy(&Var2, "PROPS_P1_E6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 116:
			StringCopy(&Var2, "PROPS_P1_E6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 60;
			iVar5 = 10;
			break;
		
		case 117:
			StringCopy(&Var2, "PROPS_P1_E6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 62;
			iVar5 = 10;
			break;
		
		case 118:
			StringCopy(&Var2, "PROPS_P1_E6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 119:
			StringCopy(&Var2, "PROPS_P1_E6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 68;
			iVar5 = 10;
			break;
		
		case 120:
			StringCopy(&Var2, "PROPS_P1_E6_8", 16);
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 68;
			iVar5 = 10;
			break;
		
		case 121:
			StringCopy(&Var2, "PROPS_P1_E6_9", 16);
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 72;
			iVar5 = 10;
			break;
		
		case 122:
			StringCopy(&Var2, "PROPS_P1_E7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 145;
			iVar5 = 10;
			break;
		
		case 123:
			StringCopy(&Var2, "PROPS_P1_E7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 149;
			iVar5 = 10;
			break;
		
		case 124:
			StringCopy(&Var2, "PROPS_P1_E7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 139;
			iVar5 = 10;
			break;
		
		case 125:
			StringCopy(&Var2, "PROPS_P1_E7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 149;
			iVar5 = 10;
			break;
		
		case 126:
			StringCopy(&Var2, "PROPS_P1_E7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 135;
			iVar5 = 10;
			break;
		
		case 127:
			StringCopy(&Var2, "PROPS_P1_E7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 138;
			iVar5 = 10;
			break;
		
		case 128:
			StringCopy(&Var2, "PROPS_P1_E7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 140;
			iVar5 = 10;
			break;
		
		case 129:
			StringCopy(&Var2, "PROPS_P1_E7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 145;
			iVar5 = 10;
			break;
		
		case 130:
			StringCopy(&Var2, "PROPS_P1_E7_8", 16);
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 159;
			iVar5 = 10;
			break;
		
		case 131:
			StringCopy(&Var2, "PROPS_P1_E7_9", 16);
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 155;
			iVar5 = 10;
			break;
		
		case 132:
			StringCopy(&Var2, "PROPS_P1_E8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 198;
			iVar5 = 10;
			break;
		
		case 133:
			StringCopy(&Var2, "PROPS_P1_E8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 210;
			iVar5 = 10;
			break;
		
		case 134:
			StringCopy(&Var2, "PROPS_P1_E8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 185;
			iVar5 = 10;
			break;
		
		case 135:
			StringCopy(&Var2, "PROPS_P1_E8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 220;
			iVar5 = 10;
			break;
		
		case 136:
			StringCopy(&Var2, "PROPS_P1_E8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 190;
			iVar5 = 10;
			break;
		
		case 137:
			StringCopy(&Var2, "PROPS_P1_E8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 200;
			iVar5 = 10;
			break;
		
		case 138:
			StringCopy(&Var2, "PROPS_P1_E8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 208;
			iVar5 = 10;
			break;
		
		case 139:
			StringCopy(&Var2, "PROPS_P1_E8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 210;
			iVar5 = 10;
			break;
		
		case 140:
			StringCopy(&Var2, "PROPS_P1_E9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 165;
			iVar5 = 10;
			break;
		
		case 141:
			StringCopy(&Var2, "PROPS_P1_E9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 185;
			iVar5 = 10;
			break;
		
		case 142:
			StringCopy(&Var2, "PROPS_P1_E9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 190;
			iVar5 = 10;
			break;
		
		case 143:
			StringCopy(&Var2, "PROPS_P1_E9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 178;
			iVar5 = 10;
			break;
		
		case 144:
			StringCopy(&Var2, "PROPS_P1_E9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 180;
			iVar5 = 10;
			break;
		
		case 145:
			StringCopy(&Var2, "PROPS_P1_E9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 168;
			iVar5 = 10;
			break;
		
		case 146:
			StringCopy(&Var2, "PROPS_P1_E9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 170;
			iVar5 = 10;
			break;
		
		case 147:
			StringCopy(&Var2, "PROPS_P1_E9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 148:
			StringCopy(&Var2, "PROPS_P1_E9_8", 16);
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 170;
			iVar5 = 10;
			break;
		
		case 149:
			StringCopy(&Var2, "PROPS_P1_E9_9", 16);
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 178;
			iVar5 = 10;
			break;
		
		case 150:
			StringCopy(&Var2, "PROPS_P1_E10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 140;
			iVar5 = 10;
			break;
		
		case 151:
			StringCopy(&Var2, "PROPS_P1_E10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 145;
			iVar5 = 10;
			break;
		
		case 152:
			StringCopy(&Var2, "PROPS_P1_E10_2", 16);
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 150;
			iVar5 = 10;
			break;
		
		case 153:
			StringCopy(&Var2, "PROPS_P1_E10_3", 16);
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 165;
			iVar5 = 10;
			break;
		
		case 154:
			StringCopy(&Var2, "PROPS_P1_E10_4", 16);
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 168;
			iVar5 = 10;
			break;
		
		case 155:
			StringCopy(&Var2, "PROPS_P1_E10_5", 16);
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 178;
			iVar5 = 10;
			break;
		
		case 156:
			StringCopy(&Var2, "PROPS_P1_E10_6", 16);
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 160;
			iVar5 = 10;
			break;
		
		case 157:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 100;
			iVar5 = 10;
			break;
		
		case 10:
			StringCopy(&Var2, "PROPS_P1_H0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 320;
			iVar5 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "PROPS_P1_H3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar5 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar5 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 8;
			iVar5 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 450;
			iVar5 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "PROPS_P1_H19_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "PROPS_P1_H19_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "PROPS_P1_H19_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "PROPS_P1_H19_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "PROPS_P1_H19_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "PROPS_P1_H19_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "PROPS_P1_H19_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar5 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "PROPS_P1_H19_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar5 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "PROPS_P1_H19_8", 16);
			iVar3 = 16;
			iVar4 = 8;
			iVar5 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "PROPS_P1_H19_9", 16);
			iVar3 = 16;
			iVar4 = 9;
			iVar5 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "PROPS_P1_H19_10", 16);
			iVar3 = 16;
			iVar4 = 10;
			iVar5 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "PROPS_P1_H19_11", 16);
			iVar3 = 16;
			iVar4 = 11;
			iVar5 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "PROPS_P1_H19_12", 16);
			iVar3 = 16;
			iVar4 = 12;
			iVar5 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "PROPS_P1_H19_13", 16);
			iVar3 = 16;
			iVar4 = 13;
			iVar5 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "PROPS_P1_H19_14", 16);
			iVar3 = 16;
			iVar4 = 14;
			iVar5 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "PROPS_P1_H19_15", 16);
			iVar3 = 16;
			iVar4 = 15;
			iVar5 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 59:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 64:
			StringCopy(&Var2, "PROPS_P1_H19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 30;
			iVar5 = 0;
			break;
		
		case 65:
			StringCopy(&Var2, "PROPS_P1_H19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 30;
			iVar5 = 0;
			break;
		
		case 66:
			StringCopy(&Var2, "PROPS_P1_H19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 32;
			iVar5 = 0;
			break;
		
		case 67:
			StringCopy(&Var2, "PROPS_P1_H19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 35;
			iVar5 = 0;
			break;
		
		case 68:
			StringCopy(&Var2, "PROPS_P1_H19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 38;
			iVar5 = 0;
			break;
		
		case 69:
			StringCopy(&Var2, "PROPS_P1_H19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 42;
			iVar5 = 0;
			break;
		
		case 70:
			StringCopy(&Var2, "PROPS_P1_H19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 42;
			iVar5 = 0;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P1_H19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 40;
			iVar5 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P1_H19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 45;
			iVar5 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P1_H19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 48;
			iVar5 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P1_H19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P1_H19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P1_H19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 28;
			iVar5 = 0;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P1_H19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 28;
			iVar5 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P1_H19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 30;
			iVar5 = 0;
			break;
		
		case 79:
			StringCopy(&Var2, "PROPS_P1_H19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 35;
			iVar5 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 81:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		default:
			func_252(iVar7, iParam0, 175);
			return;
			break;
	}
	func_246(&(Global_11489[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_271(int iParam0)//Position - 0x1B2F4
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 13;
	Global_11489[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_252(iVar7, iParam0, 9);
			return;
			break;
	}
	func_246(&(Global_11489[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_272(int iParam0)//Position - 0x1B444
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 12;
	Global_11489[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P1_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "OUTFIT_P1_2", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "OUTFIT_P1_4", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P1_7", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P1_10", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P1_11", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "OUTFIT_P1_12", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P1_13", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P1_15", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "OUTFIT_P1_16", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P1_17", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P1_18", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P1_19", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P1_20", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P1_21", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P1_22", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P1_23", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P1_24", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P1_25", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P1_26", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P1_27", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P1_28", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4000;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P1_29", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P1_30", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P1_31", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4650;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P1_32", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P1_33", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5000;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P1_34", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4750;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P1_35", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4750;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P1_36", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5200;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P1_37", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5200;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P1_38", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5500;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P1_39", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P1_40", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P1_41", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P1_42", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P1_43", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P1_47", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 3000;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P1_48", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 3000;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P1_49", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 3000;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P1_10", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P1_50", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P1_51", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P1_52", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P1_53", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P1_54", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_252(iVar7, iParam0, 47);
			return;
			break;
	}
	func_246(&(Global_11489[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_273(int iParam0)//Position - 0x1B94E
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 11;
	Global_11489[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 2;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "JBIB_P1_1_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "JBIB_P1_1_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			break;
		
		case 7:
			StringCopy(&Var2, "JBIB_P1_1_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			break;
		
		case 8:
			StringCopy(&Var2, "JBIB_P1_1_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "JBIB_P1_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "JBIB_P1_3_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "JBIB_P1_3_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			break;
		
		case 12:
			StringCopy(&Var2, "JBIB_P1_3_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "JBIB_P1_3_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			break;
		
		case 14:
			StringCopy(&Var2, "JBIB_P1_3_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			break;
		
		case 15:
			StringCopy(&Var2, "JBIB_P1_3_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			break;
		
		case 16:
			StringCopy(&Var2, "JBIB_P1_3_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			break;
		
		case 17:
			StringCopy(&Var2, "JBIB_P1_3_8", 16);
			iVar3 = 3;
			iVar4 = 8;
			break;
		
		case 18:
			StringCopy(&Var2, "JBIB_P1_3_9", 16);
			iVar3 = 3;
			iVar4 = 9;
			break;
		
		case 19:
			StringCopy(&Var2, "JBIB_P1_3_10", 16);
			iVar3 = 3;
			iVar4 = 10;
			break;
		
		case 20:
			StringCopy(&Var2, "JBIB_P1_3_11", 16);
			iVar3 = 3;
			iVar4 = 11;
			break;
		
		case 21:
			StringCopy(&Var2, "JBIB_P1_3_12", 16);
			iVar3 = 3;
			iVar4 = 12;
			break;
		
		case 22:
			StringCopy(&Var2, "JBIB_P1_3_13", 16);
			iVar3 = 3;
			iVar4 = 13;
			break;
		
		case 23:
			StringCopy(&Var2, "JBIB_P1_3_14", 16);
			iVar3 = 3;
			iVar4 = 14;
			break;
		
		case 24:
			StringCopy(&Var2, "JBIB_P1_3_15", 16);
			iVar3 = 3;
			iVar4 = 15;
			break;
		
		case 25:
			StringCopy(&Var2, "JBIB_P1_3_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "JBIB_P1_3_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			break;
		
		case 27:
			StringCopy(&Var2, "JBIB_P1_3_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			break;
		
		case 28:
			StringCopy(&Var2, "JBIB_P1_3_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			break;
		
		case 29:
			StringCopy(&Var2, "JBIB_P1_3_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			break;
		
		case 30:
			StringCopy(&Var2, "JBIB_P1_3_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			break;
		
		case 31:
			StringCopy(&Var2, "JBIB_P1_3_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			break;
		
		case 32:
			StringCopy(&Var2, "JBIB_P1_3_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			break;
		
		case 33:
			StringCopy(&Var2, "JBIB_P1_3_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			break;
		
		case 34:
			StringCopy(&Var2, "JBIB_P1_3_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			break;
		
		case 35:
			StringCopy(&Var2, "JBIB_P1_3_10", 16);
			iVar3 = 4;
			iVar4 = 10;
			break;
		
		case 36:
			StringCopy(&Var2, "JBIB_P1_3_11", 16);
			iVar3 = 4;
			iVar4 = 11;
			break;
		
		case 37:
			StringCopy(&Var2, "JBIB_P1_3_12", 16);
			iVar3 = 4;
			iVar4 = 12;
			break;
		
		case 38:
			StringCopy(&Var2, "JBIB_P1_3_13", 16);
			iVar3 = 4;
			iVar4 = 13;
			break;
		
		case 39:
			StringCopy(&Var2, "JBIB_P1_3_14", 16);
			iVar3 = 4;
			iVar4 = 14;
			break;
		
		case 40:
			StringCopy(&Var2, "JBIB_P1_3_15", 16);
			iVar3 = 4;
			iVar4 = 15;
			break;
		
		case 41:
			StringCopy(&Var2, "JBIB_P1_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "JBIB_P1_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "JBIB_P1_6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			break;
		
		case 44:
			StringCopy(&Var2, "JBIB_P1_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "JBIB_P1_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "JBIB_P1_9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "JBIB_P1_10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "JBIB_P1_10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 48;
			break;
		
		case 49:
			StringCopy(&Var2, "JBIB_P1_10_2", 16);
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 35;
			break;
		
		case 50:
			StringCopy(&Var2, "JBIB_P1_10_3", 16);
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 32;
			break;
		
		case 51:
			StringCopy(&Var2, "JBIB_P1_10_4", 16);
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 35;
			break;
		
		case 52:
			StringCopy(&Var2, "JBIB_P1_10_5", 16);
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 48;
			break;
		
		case 53:
			StringCopy(&Var2, "JBIB_P1_10_6", 16);
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 52;
			break;
		
		case 54:
			StringCopy(&Var2, "JBIB_P1_10_7", 16);
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 38;
			break;
		
		case 55:
			StringCopy(&Var2, "JBIB_P1_10_8", 16);
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 42;
			break;
		
		case 56:
			StringCopy(&Var2, "JBIB_P1_10_9", 16);
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 38;
			break;
		
		case 57:
			StringCopy(&Var2, "JBIB_P1_10_10", 16);
			iVar3 = 10;
			iVar4 = 10;
			iVar1 = 35;
			break;
		
		case 58:
			StringCopy(&Var2, "JBIB_P1_10_11", 16);
			iVar3 = 10;
			iVar4 = 11;
			iVar1 = 48;
			break;
		
		case 59:
			StringCopy(&Var2, "JBIB_P1_10_12", 16);
			iVar3 = 10;
			iVar4 = 12;
			iVar1 = 42;
			break;
		
		case 60:
			StringCopy(&Var2, "JBIB_P1_10_13", 16);
			iVar3 = 10;
			iVar4 = 13;
			iVar1 = 45;
			break;
		
		case 61:
			StringCopy(&Var2, "JBIB_P1_10_14", 16);
			iVar3 = 10;
			iVar4 = 14;
			iVar1 = 45;
			break;
		
		case 62:
			StringCopy(&Var2, "JBIB_P1_10_15", 16);
			iVar3 = 10;
			iVar4 = 15;
			iVar1 = 49;
			break;
		
		default:
			func_252(iVar7, iParam0, 63);
			return;
			break;
	}
	func_246(&(Global_11489[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_274(int iParam0)//Position - 0x1BFBB
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 7;
	Global_11489[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_252(iVar7, iParam0, 1);
			return;
			break;
	}
	func_246(&(Global_11489[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_275(int iParam0)//Position - 0x1C030
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 1;
	Global_11489[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P1_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P1_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P1_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P1_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P1_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		default:
			func_252(iVar7, iParam0, 5);
			return;
			break;
	}
	func_246(&(Global_11489[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_276(int iParam0)//Position - 0x1C0FF
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 10;
	Global_11489[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 1;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 2;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 3;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 4;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 5;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 2;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 4;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 5;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 6;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 1;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 2;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 3;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 4;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 5;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 6;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 7;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 8;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 9;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 10;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 11;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 12;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 13;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 14;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 15;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 1;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 2;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 3;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 4;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 5;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 6;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 1;
			break;
		
		case 41:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 2;
			break;
		
		case 42:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 3;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 4;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 5;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 6;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 7;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 1;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 2;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 3;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		default:
			func_252(iVar7, iParam0, 53);
			return;
			break;
	}
	func_246(&(Global_11489[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_277(int iParam0)//Position - 0x1C62E
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 9;
	Global_11489[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 125;
			break;
		
		case 6:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 150;
			break;
		
		case 7:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 175;
			break;
		
		case 8:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 85;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 150;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 175;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		default:
			func_252(iVar7, iParam0, 12);
			return;
			break;
	}
	func_246(&(Global_11489[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_278(int iParam0)//Position - 0x1C7C4
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 8;
	Global_11489[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC_P1_9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC_P1_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 195;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC_P1_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 195;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC_P1_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 195;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC_P1_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 250;
			break;
		
		case 15:
			StringCopy(&Var2, "SPEC_P1_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 250;
			break;
		
		case 16:
			StringCopy(&Var2, "SPEC_P1_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 250;
			break;
		
		case 17:
			StringCopy(&Var2, "SPEC_P1_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 195;
			break;
		
		case 18:
			StringCopy(&Var2, "SPEC_P1_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 250;
			break;
		
		case 19:
			StringCopy(&Var2, "SPEC_P1_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 250;
			break;
		
		case 20:
			StringCopy(&Var2, "SPEC_P1_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 250;
			break;
		
		case 21:
			StringCopy(&Var2, "SPEC_P1_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 250;
			break;
		
		case 22:
			StringCopy(&Var2, "SPEC_P1_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 195;
			break;
		
		case 23:
			StringCopy(&Var2, "SPEC_P1_11_12", 16);
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 250;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			break;
		
		case 29:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			break;
		
		case 30:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			break;
		
		case 31:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			break;
		
		case 32:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			break;
		
		case 33:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			break;
		
		case 34:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			break;
		
		case 35:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar3 = 15;
			iVar4 = 8;
			break;
		
		case 36:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar3 = 15;
			iVar4 = 9;
			break;
		
		case 37:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar3 = 15;
			iVar4 = 10;
			break;
		
		case 38:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar3 = 15;
			iVar4 = 11;
			break;
		
		case 39:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar3 = 15;
			iVar4 = 12;
			break;
		
		case 40:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar3 = 15;
			iVar4 = 13;
			break;
		
		case 41:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar3 = 15;
			iVar4 = 14;
			break;
		
		case 42:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar3 = 15;
			iVar4 = 15;
			break;
		
		case 43:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			break;
		
		case 46:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			break;
		
		case 47:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			break;
		
		case 48:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			break;
		
		case 49:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			break;
		
		case 50:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			break;
		
		case 51:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar3 = 16;
			iVar4 = 8;
			break;
		
		case 52:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar3 = 16;
			iVar4 = 9;
			break;
		
		case 53:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar3 = 16;
			iVar4 = 10;
			break;
		
		case 54:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar3 = 16;
			iVar4 = 11;
			break;
		
		case 55:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar3 = 16;
			iVar4 = 12;
			break;
		
		case 56:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar3 = 16;
			iVar4 = 13;
			break;
		
		case 57:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar3 = 16;
			iVar4 = 14;
			break;
		
		case 58:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar3 = 16;
			iVar4 = 15;
			break;
		
		case 59:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			break;
		
		case 61:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			break;
		
		case 62:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			break;
		
		case 63:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			break;
		
		case 64:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			break;
		
		case 65:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar3 = 17;
			iVar4 = 6;
			break;
		
		case 66:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar3 = 17;
			iVar4 = 7;
			break;
		
		case 67:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar3 = 17;
			iVar4 = 8;
			break;
		
		case 68:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar3 = 17;
			iVar4 = 9;
			break;
		
		case 69:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar3 = 17;
			iVar4 = 10;
			break;
		
		case 70:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar3 = 17;
			iVar4 = 11;
			break;
		
		case 71:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar3 = 17;
			iVar4 = 12;
			break;
		
		case 72:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar3 = 17;
			iVar4 = 13;
			break;
		
		case 73:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar3 = 17;
			iVar4 = 14;
			break;
		
		case 74:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar3 = 17;
			iVar4 = 15;
			break;
		
		case 75:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 19;
			iVar4 = 0;
			break;
		
		default:
			func_252(iVar7, iParam0, 77);
			return;
			break;
	}
	func_246(&(Global_11489[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_279(int iParam0)//Position - 0x1CFC1
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 5;
	Global_11489[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_252(iVar7, iParam0, 7);
			return;
			break;
	}
	func_246(&(Global_11489[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_280(int iParam0)//Position - 0x1D0D0
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 6;
	Global_11489[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P1_00_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P1_00_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 80;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P1_00_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 80;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P1_00_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 89;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P1_00_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 45;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P1_00_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 35;
			break;
		
		case 6:
			StringCopy(&Var2, "FEET_P1_00_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 89;
			break;
		
		case 7:
			StringCopy(&Var2, "FEET_P1_00_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 95;
			break;
		
		case 8:
			StringCopy(&Var2, "FEET_P1_00_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 115;
			break;
		
		case 9:
			StringCopy(&Var2, "FEET_P1_00_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 40;
			break;
		
		case 10:
			StringCopy(&Var2, "FEET_P1_00_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 145;
			break;
		
		case 11:
			StringCopy(&Var2, "FEET_P1_00_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 145;
			break;
		
		case 12:
			StringCopy(&Var2, "FEET_P1_01_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P1_06_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "FEET_P1_06_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 180;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P1_06_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 80;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P1_06_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 200;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P1_06_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 220;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P1_06_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 235;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P1_08_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 870;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P1_08_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 870;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P1_08_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 870;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P1_08_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 1275;
			break;
		
		case 29:
			StringCopy(&Var2, "FEET_P1_08_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 1275;
			break;
		
		case 30:
			StringCopy(&Var2, "FEET_P1_08_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 1275;
			break;
		
		case 31:
			StringCopy(&Var2, "FEET_P1_08_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 1275;
			break;
		
		case 32:
			StringCopy(&Var2, "FEET_P1_08_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 1275;
			break;
		
		case 33:
			StringCopy(&Var2, "FEET_P1_08_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 1275;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "FEET_P1_10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P1_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P1_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 50;
			break;
		
		case 38:
			StringCopy(&Var2, "FEET_P1_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 50;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P1_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 50;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P1_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 50;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P1_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 50;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P1_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 50;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P1_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 50;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P1_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 50;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P1_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 50;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P1_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 50;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P1_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 50;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P1_11_12", 16);
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 50;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P1_11_13", 16);
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 50;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P1_11_14", 16);
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 50;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P1_11_15", 16);
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 50;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P1_12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P1_12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 25;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P1_12_2", 16);
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 20;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P1_12_3", 16);
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 24;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P1_12_4", 16);
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 25;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P1_12_5", 16);
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 27;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P1_12_6", 16);
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 29;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P1_12_7", 16);
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 27;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P1_12_8", 16);
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 25;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P1_12_9", 16);
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 30;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P1_12_10", 16);
			iVar3 = 12;
			iVar4 = 10;
			iVar1 = 28;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P1_12_11", 16);
			iVar3 = 12;
			iVar4 = 11;
			iVar1 = 30;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P1_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P1_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 155;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P1_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 155;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P1_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 165;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P1_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 170;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P1_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 160;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P1_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 165;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P1_14_6", 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 170;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P1_14_7", 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 160;
			break;
		
		case 73:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P1_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar1 = 720;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P1_16_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 680;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P1_16_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 650;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P1_16_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 670;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P1_16_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 700;
			break;
		
		case 79:
			StringCopy(&Var2, "FEET_P1_16_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 680;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P1_16_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 720;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P1_16_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 740;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P1_16_8", 16);
			iVar3 = 16;
			iVar4 = 8;
			iVar1 = 760;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P1_16_9", 16);
			iVar3 = 16;
			iVar4 = 9;
			iVar1 = 780;
			break;
		
		case 84:
			StringCopy(&Var2, "FEET_P1_16_10", 16);
			iVar3 = 16;
			iVar4 = 10;
			iVar1 = 750;
			break;
		
		case 85:
			StringCopy(&Var2, "FEET_P1_16_11", 16);
			iVar3 = 16;
			iVar4 = 11;
			iVar1 = 700;
			break;
		
		case 86:
			StringCopy(&Var2, "FEET_P1_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 790;
			break;
		
		case 87:
			StringCopy(&Var2, "FEET_P1_17_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			iVar1 = 750;
			break;
		
		case 88:
			StringCopy(&Var2, "FEET_P1_17_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			iVar1 = 860;
			break;
		
		case 89:
			StringCopy(&Var2, "FEET_P1_17_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar1 = 750;
			break;
		
		case 90:
			StringCopy(&Var2, "FEET_P1_17_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar1 = 790;
			break;
		
		case 91:
			StringCopy(&Var2, "FEET_P1_17_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 92:
			StringCopy(&Var2, "FEET_P1_17_6", 16);
			iVar3 = 17;
			iVar4 = 6;
			iVar1 = 820;
			break;
		
		case 93:
			StringCopy(&Var2, "FEET_P1_17_7", 16);
			iVar3 = 17;
			iVar4 = 7;
			iVar1 = 800;
			break;
		
		case 94:
			StringCopy(&Var2, "FEET_P1_17_8", 16);
			iVar3 = 17;
			iVar4 = 8;
			iVar1 = 850;
			break;
		
		case 95:
			StringCopy(&Var2, "FEET_P1_17_9", 16);
			iVar3 = 17;
			iVar4 = 9;
			iVar1 = 870;
			break;
		
		case 96:
			StringCopy(&Var2, "FEET_P1_17_10", 16);
			iVar3 = 17;
			iVar4 = 10;
			iVar1 = 720;
			break;
		
		case 97:
			StringCopy(&Var2, "FEET_P1_17_11", 16);
			iVar3 = 17;
			iVar4 = 11;
			iVar1 = 740;
			break;
		
		case 98:
			StringCopy(&Var2, "FEET_P1_17_12", 16);
			iVar3 = 17;
			iVar4 = 12;
			iVar1 = 800;
			break;
		
		case 99:
			StringCopy(&Var2, "FEET_P1_17_13", 16);
			iVar3 = 17;
			iVar4 = 13;
			iVar1 = 750;
			break;
		
		case 100:
			StringCopy(&Var2, "FEET_P1_17_14", 16);
			iVar3 = 17;
			iVar4 = 14;
			iVar1 = 770;
			break;
		
		case 101:
			StringCopy(&Var2, "FEET_P1_17_15", 16);
			iVar3 = 17;
			iVar4 = 15;
			iVar1 = 860;
			break;
		
		case 102:
			StringCopy(&Var2, "FEET_P1_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 850;
			break;
		
		case 103:
			StringCopy(&Var2, "FEET_P1_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 800;
			break;
		
		case 104:
			StringCopy(&Var2, "FEET_P1_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 780;
			break;
		
		case 105:
			StringCopy(&Var2, "FEET_P1_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 890;
			break;
		
		case 106:
			StringCopy(&Var2, "FEET_P1_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 820;
			break;
		
		case 107:
			StringCopy(&Var2, "FEET_P1_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 108:
			StringCopy(&Var2, "FEET_P1_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 870;
			break;
		
		case 109:
			StringCopy(&Var2, "FEET_P1_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 930;
			break;
		
		case 110:
			StringCopy(&Var2, "FEET_P1_18_8", 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar1 = 880;
			break;
		
		case 111:
			StringCopy(&Var2, "FEET_P1_18_9", 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar1 = 900;
			break;
		
		case 112:
			StringCopy(&Var2, "FEET_P1_18_10", 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar1 = 920;
			break;
		
		case 113:
			StringCopy(&Var2, "FEET_P1_18_11", 16);
			iVar3 = 18;
			iVar4 = 11;
			iVar1 = 970;
			break;
		
		case 114:
			StringCopy(&Var2, "FEET_P1_18_12", 16);
			iVar3 = 18;
			iVar4 = 12;
			iVar1 = 990;
			break;
		
		case 115:
			StringCopy(&Var2, "FEET_P1_18_13", 16);
			iVar3 = 18;
			iVar4 = 13;
			iVar1 = 960;
			break;
		
		case 116:
			StringCopy(&Var2, "FEET_P1_18_14", 16);
			iVar3 = 18;
			iVar4 = 14;
			iVar1 = 980;
			break;
		
		case 117:
			StringCopy(&Var2, "FEET_P1_18_15", 16);
			iVar3 = 18;
			iVar4 = 15;
			iVar1 = 950;
			break;
		
		case 118:
			StringCopy(&Var2, "FEET_P1_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 110;
			break;
		
		case 119:
			StringCopy(&Var2, "FEET_P1_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 120:
			StringCopy(&Var2, "FEET_P1_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 120;
			break;
		
		case 121:
			StringCopy(&Var2, "FEET_P1_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 110;
			break;
		
		case 122:
			StringCopy(&Var2, "FEET_P1_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 125;
			break;
		
		case 123:
			StringCopy(&Var2, "FEET_P1_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 128;
			break;
		
		case 124:
			StringCopy(&Var2, "FEET_P1_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 135;
			break;
		
		case 125:
			StringCopy(&Var2, "FEET_P1_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 130;
			break;
		
		case 126:
			StringCopy(&Var2, "FEET_P1_19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 145;
			break;
		
		case 127:
			StringCopy(&Var2, "FEET_P1_19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 110;
			break;
		
		case 128:
			StringCopy(&Var2, "FEET_P1_19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 120;
			break;
		
		case 129:
			StringCopy(&Var2, "FEET_P1_19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 150;
			break;
		
		case 130:
			StringCopy(&Var2, "FEET_P1_19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 125;
			break;
		
		case 131:
			StringCopy(&Var2, "FEET_P1_19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 120;
			break;
		
		case 132:
			StringCopy(&Var2, "FEET_P1_19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 130;
			break;
		
		case 133:
			StringCopy(&Var2, "FEET_P1_19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 110;
			break;
		
		default:
			func_252(iVar7, iParam0, 134);
			return;
			break;
	}
	func_246(&(Global_11489[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_281(int iParam0)//Position - 0x1DFFA
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 4;
	Global_11489[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P1_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P1_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 32;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P1_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 38;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P1_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 44;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "LEGS_P1_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "LEGS_P1_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "LEGS_P1_6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 690;
			break;
		
		case 16:
			StringCopy(&Var2, "LEGS_P1_6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 720;
			break;
		
		case 17:
			StringCopy(&Var2, "LEGS_P1_6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 850;
			break;
		
		case 18:
			StringCopy(&Var2, "LEGS_P1_6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 850;
			break;
		
		case 19:
			StringCopy(&Var2, "LEGS_P1_6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 740;
			break;
		
		case 20:
			StringCopy(&Var2, "LEGS_P1_6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 750;
			break;
		
		case 21:
			StringCopy(&Var2, "LEGS_P1_6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 790;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P1_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P1_8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 145;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P1_8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 140;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P1_8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 148;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P1_8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 150;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P1_8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 154;
			break;
		
		case 30:
			StringCopy(&Var2, "LEGS_P1_8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 158;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "LEGS_P1_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 820;
			break;
		
		case 34:
			StringCopy(&Var2, "LEGS_P1_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 820;
			break;
		
		case 35:
			StringCopy(&Var2, "LEGS_P1_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 850;
			break;
		
		case 36:
			StringCopy(&Var2, "LEGS_P1_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 850;
			break;
		
		case 37:
			StringCopy(&Var2, "LEGS_P1_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 920;
			break;
		
		case 38:
			StringCopy(&Var2, "LEGS_P1_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 950;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "LEGS_P1_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P1_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 45;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P1_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 48;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P1_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 45;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P1_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 48;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P1_13_5", 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 52;
			break;
		
		case 46:
			StringCopy(&Var2, "LEGS_P1_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 55;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P1_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 58;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P1_13_8", 16);
			iVar3 = 13;
			iVar4 = 8;
			iVar1 = 60;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P1_13_9", 16);
			iVar3 = 13;
			iVar4 = 9;
			iVar1 = 58;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P1_13_10", 16);
			iVar3 = 13;
			iVar4 = 10;
			iVar1 = 62;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P1_13_11", 16);
			iVar3 = 13;
			iVar4 = 11;
			iVar1 = 65;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P1_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P1_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P1_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P1_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P1_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P1_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P1_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P1_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P1_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P1_15_8", 16);
			iVar3 = 15;
			iVar4 = 8;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P1_15_9", 16);
			iVar3 = 15;
			iVar4 = 9;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P1_15_10", 16);
			iVar3 = 15;
			iVar4 = 10;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P1_15_11", 16);
			iVar3 = 15;
			iVar4 = 11;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P1_15_12", 16);
			iVar3 = 15;
			iVar4 = 12;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P1_15_13", 16);
			iVar3 = 15;
			iVar4 = 13;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P1_15_14", 16);
			iVar3 = 15;
			iVar4 = 14;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P1_15_15", 16);
			iVar3 = 15;
			iVar4 = 15;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P1_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 16;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P1_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P1_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 160;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P1_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 180;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P1_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 180;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P1_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P1_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P1_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 79:
			StringCopy(&Var2, "LEGS_P1_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 118;
			break;
		
		case 80:
			StringCopy(&Var2, "LEGS_P1_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 120;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P1_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 128;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P1_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 128;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P1_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 130;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P1_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 145;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P1_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 138;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P1_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 132;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P1_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 148;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P1_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 118;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P1_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 118;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P1_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 118;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P1_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 129;
			break;
		
		case 92:
			StringCopy(&Var2, "LEGS_P1_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 135;
			break;
		
		case 93:
			StringCopy(&Var2, "LEGS_P1_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 135;
			break;
		
		case 94:
			StringCopy(&Var2, "LEGS_P1_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 118;
			break;
		
		case 95:
			StringCopy(&Var2, "LEGS_P1_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 118;
			break;
		
		case 96:
			StringCopy(&Var2, "LEGS_P1_21_8", 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 118;
			break;
		
		case 97:
			StringCopy(&Var2, "LEGS_P1_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar1 = 55;
			break;
		
		case 98:
			StringCopy(&Var2, "LEGS_P1_22_1", 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 55;
			break;
		
		case 99:
			StringCopy(&Var2, "LEGS_P1_22_2", 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 59;
			break;
		
		case 100:
			StringCopy(&Var2, "LEGS_P1_22_3", 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 59;
			break;
		
		case 101:
			StringCopy(&Var2, "LEGS_P1_22_4", 16);
			iVar3 = 22;
			iVar4 = 4;
			iVar1 = 65;
			break;
		
		case 102:
			StringCopy(&Var2, "LEGS_P1_22_5", 16);
			iVar3 = 22;
			iVar4 = 5;
			iVar1 = 65;
			break;
		
		case 103:
			StringCopy(&Var2, "LEGS_P1_22_6", 16);
			iVar3 = 22;
			iVar4 = 6;
			iVar1 = 69;
			break;
		
		case 104:
			StringCopy(&Var2, "LEGS_P1_22_7", 16);
			iVar3 = 22;
			iVar4 = 7;
			iVar1 = 69;
			break;
		
		case 105:
			StringCopy(&Var2, "LEGS_P1_22_8", 16);
			iVar3 = 22;
			iVar4 = 8;
			iVar1 = 75;
			break;
		
		case 106:
			StringCopy(&Var2, "LEGS_P1_22_9", 16);
			iVar3 = 22;
			iVar4 = 9;
			iVar1 = 75;
			break;
		
		case 107:
			StringCopy(&Var2, "LEGS_P1_22_10", 16);
			iVar3 = 22;
			iVar4 = 10;
			iVar1 = 65;
			break;
		
		case 108:
			StringCopy(&Var2, "LEGS_P1_22_11", 16);
			iVar3 = 22;
			iVar4 = 11;
			iVar1 = 65;
			break;
		
		case 109:
			StringCopy(&Var2, "LEGS_P1_22_12", 16);
			iVar3 = 22;
			iVar4 = 12;
			iVar1 = 65;
			break;
		
		case 110:
			StringCopy(&Var2, "LEGS_P1_22_13", 16);
			iVar3 = 22;
			iVar4 = 13;
			iVar1 = 65;
			break;
		
		case 111:
			StringCopy(&Var2, "LEGS_P1_23_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar1 = 38;
			break;
		
		case 112:
			StringCopy(&Var2, "LEGS_P1_23_1", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar1 = 38;
			break;
		
		case 113:
			StringCopy(&Var2, "LEGS_P1_23_2", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar1 = 28;
			break;
		
		case 114:
			StringCopy(&Var2, "LEGS_P1_23_3", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar1 = 34;
			break;
		
		case 115:
			StringCopy(&Var2, "LEGS_P1_23_4", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar1 = 36;
			break;
		
		case 116:
			StringCopy(&Var2, "LEGS_P1_23_5", 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar1 = 32;
			break;
		
		default:
			func_252(iVar7, iParam0, 117);
			return;
			break;
	}
	func_246(&(Global_11489[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_282(int iParam0)//Position - 0x1ECB6
{
	if (iParam0 < 107)
	{
		func_285(iParam0);
	}
	else if (iParam0 < 227)
	{
		func_284(iParam0);
	}
	else
	{
		func_283(iParam0);
	}
	if (Global_11489[0 /*14*/].f_2 == -1)
	{
		func_252(3, iParam0, 318);
	}
}

void func_283(int iParam0)//Position - 0x1ECFB
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_11489[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 227:
			StringCopy(&Var2, "TORSO_P1_18_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 228:
			StringCopy(&Var2, "TORSO_P1_18_1", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar6 = 3;
			break;
		
		case 229:
			StringCopy(&Var2, "TORSO_P1_18_2", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar6 = 3;
			break;
		
		case 230:
			StringCopy(&Var2, "TORSO_P1_18_3", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar6 = 3;
			break;
		
		case 231:
			StringCopy(&Var2, "TORSO_P1_18_4", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar6 = 3;
			break;
		
		case 232:
			StringCopy(&Var2, "TORSO_P1_18_5", 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar6 = 3;
			break;
		
		case 233:
			StringCopy(&Var2, "TORSO_P1_18_6", 16);
			iVar3 = 23;
			iVar4 = 6;
			iVar6 = 3;
			break;
		
		case 234:
			StringCopy(&Var2, "TORSO_P1_18_7", 16);
			iVar3 = 23;
			iVar4 = 7;
			iVar6 = 3;
			break;
		
		case 235:
			StringCopy(&Var2, "TORSO_P1_18_8", 16);
			iVar3 = 23;
			iVar4 = 8;
			iVar6 = 3;
			break;
		
		case 236:
			StringCopy(&Var2, "TORSO_P1_18_9", 16);
			iVar3 = 23;
			iVar4 = 9;
			iVar6 = 3;
			break;
		
		case 237:
			StringCopy(&Var2, "TORSO_P1_18_10", 16);
			iVar3 = 23;
			iVar4 = 10;
			iVar6 = 3;
			break;
		
		case 238:
			StringCopy(&Var2, "TORSO_P1_18_11", 16);
			iVar3 = 23;
			iVar4 = 11;
			iVar6 = 3;
			break;
		
		case 239:
			StringCopy(&Var2, "TORSO_P1_18_12", 16);
			iVar3 = 23;
			iVar4 = 12;
			iVar6 = 3;
			break;
		
		case 240:
			StringCopy(&Var2, "TORSO_P1_18_13", 16);
			iVar3 = 23;
			iVar4 = 13;
			iVar6 = 3;
			break;
		
		case 241:
			StringCopy(&Var2, "TORSO_P1_18_14", 16);
			iVar3 = 23;
			iVar4 = 14;
			iVar6 = 3;
			break;
		
		case 242:
			StringCopy(&Var2, "TORSO_P1_18_15", 16);
			iVar3 = 23;
			iVar4 = 15;
			iVar6 = 3;
			break;
		
		case 243:
			StringCopy(&Var2, "TORSO_P1_24_0", 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 244:
			StringCopy(&Var2, "TORSO_P1_24_1", 16);
			iVar3 = 24;
			iVar4 = 1;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 245:
			StringCopy(&Var2, "TORSO_P1_24_2", 16);
			iVar3 = 24;
			iVar4 = 2;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 246:
			StringCopy(&Var2, "TORSO_P1_24_3", 16);
			iVar3 = 24;
			iVar4 = 3;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 247:
			StringCopy(&Var2, "TORSO_P1_24_4", 16);
			iVar3 = 24;
			iVar4 = 4;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 248:
			StringCopy(&Var2, "TORSO_P1_24_5", 16);
			iVar3 = 24;
			iVar4 = 5;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 249:
			StringCopy(&Var2, "TORSO_P1_24_6", 16);
			iVar3 = 24;
			iVar4 = 6;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 250:
			StringCopy(&Var2, "TORSO_P1_24_7", 16);
			iVar3 = 24;
			iVar4 = 7;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 251:
			StringCopy(&Var2, "TORSO_P1_24_8", 16);
			iVar3 = 24;
			iVar4 = 8;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 252:
			StringCopy(&Var2, "TORSO_P1_24_9", 16);
			iVar3 = 24;
			iVar4 = 9;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 253:
			StringCopy(&Var2, "TORSO_P1_24_10", 16);
			iVar3 = 24;
			iVar4 = 10;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 254:
			StringCopy(&Var2, "TORSO_P1_24_11", 16);
			iVar3 = 24;
			iVar4 = 11;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 255:
			StringCopy(&Var2, "TORSO_P1_24_12", 16);
			iVar3 = 24;
			iVar4 = 12;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 256:
			StringCopy(&Var2, "TORSO_P1_24_13", 16);
			iVar3 = 24;
			iVar4 = 13;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 257:
			StringCopy(&Var2, "TORSO_P1_24_14", 16);
			iVar3 = 24;
			iVar4 = 14;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 258:
			StringCopy(&Var2, "TORSO_P1_24_15", 16);
			iVar3 = 24;
			iVar4 = 15;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 259:
			StringCopy(&Var2, "TORSO_P1_25_0", 16);
			iVar3 = 25;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 3;
			break;
		
		case 260:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 0;
			iVar6 = 1;
			break;
		
		case 261:
			StringCopy(&Var2, "TORSO_P1_27_0", 16);
			iVar3 = 27;
			iVar4 = 0;
			iVar1 = 150;
			break;
		
		case 262:
			StringCopy(&Var2, "TORSO_P1_27_1", 16);
			iVar3 = 27;
			iVar4 = 1;
			iVar1 = 160;
			break;
		
		case 263:
			StringCopy(&Var2, "TORSO_P1_27_2", 16);
			iVar3 = 27;
			iVar4 = 2;
			iVar1 = 150;
			break;
		
		case 264:
			StringCopy(&Var2, "TORSO_P1_27_3", 16);
			iVar3 = 27;
			iVar4 = 3;
			iVar1 = 150;
			break;
		
		case 265:
			StringCopy(&Var2, "TORSO_P1_27_4", 16);
			iVar3 = 27;
			iVar4 = 4;
			iVar1 = 160;
			break;
		
		case 266:
			StringCopy(&Var2, "TORSO_P1_27_5", 16);
			iVar3 = 27;
			iVar4 = 5;
			iVar1 = 160;
			break;
		
		case 267:
			StringCopy(&Var2, "TORSO_P1_28_0", 16);
			iVar3 = 28;
			iVar4 = 0;
			iVar1 = 88;
			break;
		
		case 268:
			StringCopy(&Var2, "TORSO_P1_28_1", 16);
			iVar3 = 28;
			iVar4 = 1;
			iVar1 = 60;
			break;
		
		case 269:
			StringCopy(&Var2, "TORSO_P1_28_2", 16);
			iVar3 = 28;
			iVar4 = 2;
			iVar1 = 70;
			break;
		
		case 270:
			StringCopy(&Var2, "TORSO_P1_28_3", 16);
			iVar3 = 28;
			iVar4 = 3;
			iVar1 = 80;
			break;
		
		case 271:
			StringCopy(&Var2, "TORSO_P1_28_4", 16);
			iVar3 = 28;
			iVar4 = 4;
			iVar1 = 90;
			break;
		
		case 272:
			StringCopy(&Var2, "TORSO_P1_28_5", 16);
			iVar3 = 28;
			iVar4 = 5;
			iVar1 = 80;
			break;
		
		case 273:
			StringCopy(&Var2, "TORSO_P1_28_6", 16);
			iVar3 = 28;
			iVar4 = 6;
			iVar1 = 70;
			break;
		
		case 274:
			StringCopy(&Var2, "TORSO_P1_28_7", 16);
			iVar3 = 28;
			iVar4 = 7;
			iVar1 = 95;
			break;
		
		case 275:
			StringCopy(&Var2, "TORSO_P1_28_8", 16);
			iVar3 = 28;
			iVar4 = 8;
			iVar1 = 105;
			break;
		
		case 276:
			StringCopy(&Var2, "TORSO_P1_28_9", 16);
			iVar3 = 28;
			iVar4 = 9;
			iVar1 = 95;
			break;
		
		case 277:
			StringCopy(&Var2, "TORSO_P1_28_10", 16);
			iVar3 = 28;
			iVar4 = 10;
			iVar1 = 110;
			break;
		
		case 278:
			StringCopy(&Var2, "TORSO_P1_28_11", 16);
			iVar3 = 28;
			iVar4 = 11;
			iVar1 = 98;
			break;
		
		case 279:
			StringCopy(&Var2, "TORSO_P1_28_12", 16);
			iVar3 = 28;
			iVar4 = 12;
			iVar1 = 88;
			break;
		
		case 280:
			StringCopy(&Var2, "TORSO_P1_28_13", 16);
			iVar3 = 28;
			iVar4 = 13;
			iVar1 = 98;
			break;
		
		case 281:
			StringCopy(&Var2, "TORSO_P1_28_14", 16);
			iVar3 = 28;
			iVar4 = 14;
			iVar1 = 110;
			break;
		
		case 282:
			StringCopy(&Var2, "TORSO_P1_28_15", 16);
			iVar3 = 28;
			iVar4 = 15;
			iVar1 = 98;
			break;
		
		case 283:
			StringCopy(&Var2, "TORSO_P1_29_0", 16);
			iVar3 = 29;
			iVar4 = 0;
			iVar1 = 250;
			break;
		
		case 284:
			StringCopy(&Var2, "TORSO_P1_29_1", 16);
			iVar3 = 29;
			iVar4 = 1;
			iVar1 = 270;
			break;
		
		case 285:
			StringCopy(&Var2, "TORSO_P1_29_2", 16);
			iVar3 = 29;
			iVar4 = 2;
			iVar1 = 280;
			break;
		
		case 286:
			StringCopy(&Var2, "TORSO_P1_29_3", 16);
			iVar3 = 29;
			iVar4 = 3;
			iVar1 = 275;
			break;
		
		case 287:
			StringCopy(&Var2, "TORSO_P1_29_4", 16);
			iVar3 = 29;
			iVar4 = 4;
			iVar1 = 290;
			break;
		
		case 288:
			StringCopy(&Var2, "TORSO_P1_29_5", 16);
			iVar3 = 29;
			iVar4 = 5;
			iVar1 = 35;
			break;
		
		case 289:
			StringCopy(&Var2, "TORSO_P1_29_6", 16);
			iVar3 = 29;
			iVar4 = 6;
			iVar1 = 35;
			break;
		
		case 290:
			StringCopy(&Var2, "TORSO_P1_29_7", 16);
			iVar3 = 29;
			iVar4 = 7;
			iVar1 = 35;
			break;
		
		case 291:
			StringCopy(&Var2, "TORSO_P1_29_8", 16);
			iVar3 = 29;
			iVar4 = 8;
			iVar1 = 295;
			break;
		
		case 292:
			StringCopy(&Var2, "TORSO_P1_29_9", 16);
			iVar3 = 29;
			iVar4 = 9;
			iVar1 = 35;
			break;
		
		case 293:
			StringCopy(&Var2, "TORSO_P1_29_10", 16);
			iVar3 = 29;
			iVar4 = 10;
			iVar1 = 35;
			break;
		
		case 294:
			StringCopy(&Var2, "TORSO_P1_29_11", 16);
			iVar3 = 29;
			iVar4 = 11;
			iVar1 = 35;
			break;
		
		case 295:
			StringCopy(&Var2, "TORSO_P1_29_12", 16);
			iVar3 = 29;
			iVar4 = 12;
			break;
		
		case 296:
			StringCopy(&Var2, "TORSO_P1_30_0", 16);
			iVar3 = 30;
			iVar4 = 0;
			iVar1 = 1750;
			break;
		
		case 297:
			StringCopy(&Var2, "TORSO_P1_30_1", 16);
			iVar3 = 30;
			iVar4 = 1;
			iVar1 = 1920;
			break;
		
		case 298:
			StringCopy(&Var2, "TORSO_P1_30_2", 16);
			iVar3 = 30;
			iVar4 = 2;
			iVar1 = 1890;
			break;
		
		case 299:
			StringCopy(&Var2, "TORSO_P1_30_3", 16);
			iVar3 = 30;
			iVar4 = 3;
			iVar1 = 1850;
			break;
		
		case 300:
			StringCopy(&Var2, "TORSO_P1_30_4", 16);
			iVar3 = 30;
			iVar4 = 4;
			iVar1 = 1750;
			break;
		
		case 301:
			StringCopy(&Var2, "TORSO_P1_30_5", 16);
			iVar3 = 30;
			iVar4 = 5;
			iVar1 = 1990;
			break;
		
		case 302:
			StringCopy(&Var2, "TORSO_P1_30_6", 16);
			iVar3 = 30;
			iVar4 = 6;
			iVar1 = 1820;
			break;
		
		case 303:
			StringCopy(&Var2, "TORSO_P1_30_7", 16);
			iVar3 = 30;
			iVar4 = 7;
			iVar1 = 1990;
			break;
		
		case 304:
			StringCopy(&Var2, "TORSO_P1_30_8", 16);
			iVar3 = 30;
			iVar4 = 8;
			iVar1 = 1920;
			break;
		
		case 305:
			StringCopy(&Var2, "TORSO_P1_30_9", 16);
			iVar3 = 30;
			iVar4 = 9;
			iVar1 = 1850;
			break;
		
		case 306:
			StringCopy(&Var2, "TORSO_P1_30_10", 16);
			iVar3 = 30;
			iVar4 = 10;
			iVar1 = 1990;
			break;
		
		case 307:
			StringCopy(&Var2, "TORSO_P1_30_11", 16);
			iVar3 = 30;
			iVar4 = 11;
			iVar1 = 1790;
			break;
		
		case 308:
			StringCopy(&Var2, "TORSO_P1_30_12", 16);
			iVar3 = 30;
			iVar4 = 12;
			iVar1 = 1790;
			break;
		
		case 309:
			StringCopy(&Var2, "TORSO_P1_31_0", 16);
			iVar3 = 31;
			iVar4 = 0;
			iVar1 = 69;
			break;
		
		case 310:
			StringCopy(&Var2, "TORSO_P1_31_1", 16);
			iVar3 = 31;
			iVar4 = 1;
			iVar1 = 75;
			break;
		
		case 311:
			StringCopy(&Var2, "TORSO_P1_31_2", 16);
			iVar3 = 31;
			iVar4 = 2;
			iVar1 = 75;
			break;
		
		case 312:
			StringCopy(&Var2, "TORSO_P1_31_3", 16);
			iVar3 = 31;
			iVar4 = 3;
			iVar1 = 79;
			break;
		
		case 313:
			StringCopy(&Var2, "TORSO_P1_31_4", 16);
			iVar3 = 31;
			iVar4 = 4;
			iVar1 = 79;
			break;
		
		case 314:
			StringCopy(&Var2, "TORSO_P1_31_5", 16);
			iVar3 = 31;
			iVar4 = 5;
			iVar1 = 89;
			break;
		
		case 315:
			StringCopy(&Var2, "TORSO_P1_31_6", 16);
			iVar3 = 31;
			iVar4 = 6;
			iVar1 = 85;
			break;
		
		case 316:
			StringCopy(&Var2, "TORSO_P1_31_7", 16);
			iVar3 = 31;
			iVar4 = 7;
			iVar1 = 85;
			break;
		
		case 317:
			StringCopy(&Var2, "TORSO_P1_31_8", 16);
			iVar3 = 31;
			iVar4 = 8;
			break;
		
		default:
			return;
			break;
	}
	func_246(&(Global_11489[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_284(int iParam0)//Position - 0x1F7A0
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_11489[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 107:
			StringCopy(&Var2, "TORSO_P1_12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 195;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P1_12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 420;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P1_12_2", 16);
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 390;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P1_12_3", 16);
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 450;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P1_12_4", 16);
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 400;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P1_12_5", 16);
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 390;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P1_12_6", 16);
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 570;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P1_12_7", 16);
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 390;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P1_12_8", 16);
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 470;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P1_12_9", 16);
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 390;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P1_12_10", 16);
			iVar3 = 12;
			iVar4 = 10;
			iVar1 = 520;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P1_12_11", 16);
			iVar3 = 12;
			iVar4 = 11;
			iVar1 = 490;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P1_12_12", 16);
			iVar3 = 12;
			iVar4 = 12;
			iVar1 = 490;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P1_12_13", 16);
			iVar3 = 12;
			iVar4 = 13;
			iVar1 = 590;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P1_12_14", 16);
			iVar3 = 12;
			iVar4 = 14;
			iVar1 = 560;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P1_12_15", 16);
			iVar3 = 12;
			iVar4 = 15;
			iVar1 = 520;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P1_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P1_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P1_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P1_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 90;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P1_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 85;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P1_13_5", 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 45;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P1_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 90;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P1_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 47;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P1_13_8", 16);
			iVar3 = 13;
			iVar4 = 8;
			iVar1 = 45;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P1_13_9", 16);
			iVar3 = 13;
			iVar4 = 9;
			iVar1 = 48;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P1_13_10", 16);
			iVar3 = 13;
			iVar4 = 10;
			iVar1 = 45;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P1_13_11", 16);
			iVar3 = 13;
			iVar4 = 11;
			iVar1 = 85;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P1_13_12", 16);
			iVar3 = 13;
			iVar4 = 12;
			iVar1 = 45;
			break;
		
		case 136:
			StringCopy(&Var2, "TORSO_P1_13_13", 16);
			iVar3 = 13;
			iVar4 = 13;
			iVar1 = 47;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P1_13_14", 16);
			iVar3 = 13;
			iVar4 = 14;
			iVar1 = 45;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P1_13_15", 16);
			iVar3 = 13;
			iVar4 = 15;
			iVar1 = 48;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P1_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 290;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P1_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 290;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P1_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 290;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P1_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 290;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P1_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 290;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P1_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 290;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P1_14_6", 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 65;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P1_14_7", 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 65;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P1_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 200;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P1_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 220;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P1_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 220;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P1_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 240;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P1_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P1_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 250;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P1_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 260;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P1_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 40;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P1_15_8", 16);
			iVar3 = 15;
			iVar4 = 8;
			iVar1 = 50;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P1_15_9", 16);
			iVar3 = 15;
			iVar4 = 9;
			iVar1 = 45;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P1_15_10", 16);
			iVar3 = 15;
			iVar4 = 10;
			iVar1 = 40;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P1_15_11", 16);
			iVar3 = 15;
			iVar4 = 11;
			iVar1 = 55;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P1_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P1_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 40;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P1_17_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			iVar1 = 50;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P1_17_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P1_17_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar1 = 50;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P1_17_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar1 = 50;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P1_17_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar1 = 50;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P1_17_6", 16);
			iVar3 = 17;
			iVar4 = 6;
			iVar1 = 50;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P1_17_7", 16);
			iVar3 = 17;
			iVar4 = 7;
			iVar1 = 50;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P1_17_8", 16);
			iVar3 = 17;
			iVar4 = 8;
			iVar1 = 50;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P1_17_9", 16);
			iVar3 = 17;
			iVar4 = 9;
			iVar1 = 50;
			break;
		
		case 170:
			StringCopy(&Var2, "TORSO_P1_17_10", 16);
			iVar3 = 17;
			iVar4 = 10;
			iVar1 = 50;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P1_17_11", 16);
			iVar3 = 17;
			iVar4 = 11;
			iVar1 = 50;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P1_17_12", 16);
			iVar3 = 17;
			iVar4 = 12;
			iVar1 = 50;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P1_17_13", 16);
			iVar3 = 17;
			iVar4 = 13;
			iVar1 = 50;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P1_17_14", 16);
			iVar3 = 17;
			iVar4 = 14;
			iVar1 = 50;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P1_17_15", 16);
			iVar3 = 17;
			iVar4 = 15;
			iVar1 = 50;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P1_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P1_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar6 = 3;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P1_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar6 = 3;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P1_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar6 = 3;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P1_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar6 = 3;
			break;
		
		case 181:
			StringCopy(&Var2, "TORSO_P1_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar6 = 3;
			break;
		
		case 182:
			StringCopy(&Var2, "TORSO_P1_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar6 = 3;
			break;
		
		case 183:
			StringCopy(&Var2, "TORSO_P1_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar6 = 3;
			break;
		
		case 184:
			StringCopy(&Var2, "TORSO_P1_18_8", 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar6 = 3;
			break;
		
		case 185:
			StringCopy(&Var2, "TORSO_P1_18_9", 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar6 = 3;
			break;
		
		case 186:
			StringCopy(&Var2, "TORSO_P1_18_10", 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar6 = 3;
			break;
		
		case 187:
			StringCopy(&Var2, "TORSO_P1_18_11", 16);
			iVar3 = 18;
			iVar4 = 11;
			iVar6 = 3;
			break;
		
		case 188:
			StringCopy(&Var2, "TORSO_P1_18_12", 16);
			iVar3 = 18;
			iVar4 = 12;
			iVar6 = 3;
			break;
		
		case 189:
			StringCopy(&Var2, "TORSO_P1_18_13", 16);
			iVar3 = 18;
			iVar4 = 13;
			iVar6 = 3;
			break;
		
		case 190:
			StringCopy(&Var2, "TORSO_P1_18_14", 16);
			iVar3 = 18;
			iVar4 = 14;
			iVar6 = 3;
			break;
		
		case 191:
			StringCopy(&Var2, "TORSO_P1_18_15", 16);
			iVar3 = 18;
			iVar4 = 15;
			iVar6 = 3;
			break;
		
		case 192:
			StringCopy(&Var2, "TORSO_P1_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 193:
			StringCopy(&Var2, "TORSO_P1_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 440;
			iVar6 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "TORSO_P1_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 440;
			iVar6 = 3;
			break;
		
		case 195:
			StringCopy(&Var2, "TORSO_P1_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 520;
			iVar6 = 3;
			break;
		
		case 196:
			StringCopy(&Var2, "TORSO_P1_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 440;
			iVar6 = 3;
			break;
		
		case 197:
			StringCopy(&Var2, "TORSO_P1_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 440;
			iVar6 = 3;
			break;
		
		case 198:
			StringCopy(&Var2, "TORSO_P1_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 199:
			StringCopy(&Var2, "TORSO_P1_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 200:
			StringCopy(&Var2, "TORSO_P1_19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 201:
			StringCopy(&Var2, "TORSO_P1_19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 202:
			StringCopy(&Var2, "TORSO_P1_19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 203:
			StringCopy(&Var2, "TORSO_P1_19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 204:
			StringCopy(&Var2, "TORSO_P1_19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 520;
			iVar6 = 3;
			break;
		
		case 205:
			StringCopy(&Var2, "TORSO_P1_19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 520;
			iVar6 = 3;
			break;
		
		case 206:
			StringCopy(&Var2, "TORSO_P1_19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 520;
			iVar6 = 3;
			break;
		
		case 207:
			StringCopy(&Var2, "TORSO_P1_19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 440;
			iVar6 = 3;
			break;
		
		case 208:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 20;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 209:
			StringCopy(&Var2, "TORSO_P1_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 220;
			break;
		
		case 210:
			StringCopy(&Var2, "TORSO_P1_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 200;
			break;
		
		case 211:
			StringCopy(&Var2, "TORSO_P1_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 240;
			break;
		
		case 212:
			StringCopy(&Var2, "TORSO_P1_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 240;
			break;
		
		case 213:
			StringCopy(&Var2, "TORSO_P1_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 260;
			break;
		
		case 214:
			StringCopy(&Var2, "TORSO_P1_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 275;
			break;
		
		case 215:
			StringCopy(&Var2, "TORSO_P1_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 275;
			break;
		
		case 216:
			StringCopy(&Var2, "TORSO_P1_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 280;
			break;
		
		case 217:
			StringCopy(&Var2, "TORSO_P1_21_8", 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 280;
			break;
		
		case 218:
			StringCopy(&Var2, "TORSO_P1_21_9", 16);
			iVar3 = 21;
			iVar4 = 9;
			iVar1 = 280;
			break;
		
		case 219:
			StringCopy(&Var2, "TORSO_P1_21_10", 16);
			iVar3 = 21;
			iVar4 = 10;
			iVar1 = 280;
			break;
		
		case 220:
			StringCopy(&Var2, "TORSO_P1_21_11", 16);
			iVar3 = 21;
			iVar4 = 11;
			iVar1 = 280;
			break;
		
		case 221:
			StringCopy(&Var2, "TORSO_P1_21_12", 16);
			iVar3 = 21;
			iVar4 = 12;
			iVar1 = 280;
			break;
		
		case 222:
			StringCopy(&Var2, "TORSO_P1_21_13", 16);
			iVar3 = 21;
			iVar4 = 13;
			iVar1 = 280;
			break;
		
		case 223:
			StringCopy(&Var2, "TORSO_P1_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar1 = 3100;
			iVar6 = 3;
			break;
		
		case 224:
			StringCopy(&Var2, "TORSO_P1_22_1", 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 2800;
			iVar6 = 3;
			break;
		
		case 225:
			StringCopy(&Var2, "TORSO_P1_22_2", 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 2500;
			iVar6 = 3;
			break;
		
		case 226:
			StringCopy(&Var2, "TORSO_P1_22_3", 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 3000;
			iVar6 = 3;
			break;
		
		default:
			return;
			break;
	}
	func_246(&(Global_11489[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_285(int iParam0)//Position - 0x20591
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_11489[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P1_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P1_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P1_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 180;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P1_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 22;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P1_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 20;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P1_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 18;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P1_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 19;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P1_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 22;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P1_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 20;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P1_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 19;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P1_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 19;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P1_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 18;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P1_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			iVar1 = 20;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P1_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			iVar1 = 22;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P1_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			iVar1 = 19;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P1_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			iVar1 = 22;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 2;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 3;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 4;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 5;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P1_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 3;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 1;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P1_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 20;
			iVar6 = 2;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P1_4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 22;
			iVar6 = 2;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P1_4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 20;
			iVar6 = 2;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P1_4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 25;
			iVar6 = 2;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P1_4_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 23;
			iVar6 = 2;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P1_4_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 25;
			iVar6 = 2;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P1_4_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 28;
			iVar6 = 2;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P1_4_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 26;
			iVar6 = 2;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P1_4_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 24;
			iVar6 = 2;
			break;
		
		case 33:
			StringCopy(&Var2, "TORSO_P1_4_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 27;
			iVar6 = 2;
			break;
		
		case 34:
			StringCopy(&Var2, "TORSO_P1_4_10", 16);
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 29;
			iVar6 = 2;
			break;
		
		case 35:
			StringCopy(&Var2, "TORSO_P1_4_11", 16);
			iVar3 = 4;
			iVar4 = 11;
			iVar1 = 28;
			iVar6 = 2;
			break;
		
		case 36:
			StringCopy(&Var2, "TORSO_P1_4_12", 16);
			iVar3 = 4;
			iVar4 = 12;
			iVar1 = 25;
			iVar6 = 2;
			break;
		
		case 37:
			StringCopy(&Var2, "TORSO_P1_4_13", 16);
			iVar3 = 4;
			iVar4 = 13;
			iVar1 = 22;
			iVar6 = 2;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P1_4_14", 16);
			iVar3 = 4;
			iVar4 = 14;
			iVar1 = 27;
			iVar6 = 2;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P1_4_15", 16);
			iVar3 = 4;
			iVar4 = 15;
			iVar1 = 29;
			iVar6 = 2;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P1_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P1_6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 1270;
			iVar6 = 3;
			break;
		
		case 43:
			StringCopy(&Var2, "TORSO_P1_6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 1270;
			iVar6 = 3;
			break;
		
		case 44:
			StringCopy(&Var2, "TORSO_P1_6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 1270;
			iVar6 = 3;
			break;
		
		case 45:
			StringCopy(&Var2, "TORSO_P1_6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 1090;
			iVar6 = 3;
			break;
		
		case 46:
			StringCopy(&Var2, "TORSO_P1_6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 1090;
			iVar6 = 3;
			break;
		
		case 47:
			StringCopy(&Var2, "TORSO_P1_6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 1120;
			iVar6 = 3;
			break;
		
		case 48:
			StringCopy(&Var2, "TORSO_P1_6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 1120;
			iVar6 = 3;
			break;
		
		case 49:
			StringCopy(&Var2, "TORSO_P1_6_8", 16);
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 1290;
			iVar6 = 3;
			break;
		
		case 50:
			StringCopy(&Var2, "TORSO_P1_6_9", 16);
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 1290;
			iVar6 = 3;
			break;
		
		case 51:
			StringCopy(&Var2, "TORSO_P1_6_10", 16);
			iVar3 = 6;
			iVar4 = 10;
			iVar1 = 1320;
			iVar6 = 3;
			break;
		
		case 52:
			StringCopy(&Var2, "TORSO_P1_6_11", 16);
			iVar3 = 6;
			iVar4 = 11;
			iVar1 = 1320;
			iVar6 = 3;
			break;
		
		case 53:
			StringCopy(&Var2, "TORSO_P1_6_12", 16);
			iVar3 = 6;
			iVar4 = 12;
			iVar1 = 1590;
			iVar6 = 3;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P1_6_13", 16);
			iVar3 = 6;
			iVar4 = 13;
			iVar1 = 1590;
			iVar6 = 3;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P1_6_14", 16);
			iVar3 = 6;
			iVar4 = 14;
			iVar1 = 1590;
			iVar6 = 3;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P1_6_15", 16);
			iVar3 = 6;
			iVar4 = 15;
			iVar1 = 1320;
			iVar6 = 3;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P1_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 98;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P1_7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 98;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P1_7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 110;
			break;
		
		case 60:
			StringCopy(&Var2, "TORSO_P1_7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 110;
			break;
		
		case 61:
			StringCopy(&Var2, "TORSO_P1_7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 118;
			break;
		
		case 62:
			StringCopy(&Var2, "TORSO_P1_7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 120;
			break;
		
		case 63:
			StringCopy(&Var2, "TORSO_P1_7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 120;
			break;
		
		case 64:
			StringCopy(&Var2, "TORSO_P1_7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 129;
			break;
		
		case 65:
			StringCopy(&Var2, "TORSO_P1_7_8", 16);
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 125;
			break;
		
		case 66:
			StringCopy(&Var2, "TORSO_P1_7_9", 16);
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 125;
			break;
		
		case 67:
			StringCopy(&Var2, "TORSO_P1_7_10", 16);
			iVar3 = 7;
			iVar4 = 10;
			iVar1 = 129;
			break;
		
		case 68:
			StringCopy(&Var2, "TORSO_P1_7_11", 16);
			iVar3 = 7;
			iVar4 = 11;
			iVar1 = 129;
			break;
		
		case 69:
			StringCopy(&Var2, "TORSO_P1_7_12", 16);
			iVar3 = 7;
			iVar4 = 12;
			iVar1 = 135;
			break;
		
		case 70:
			StringCopy(&Var2, "TORSO_P1_7_13", 16);
			iVar3 = 7;
			iVar4 = 13;
			iVar1 = 139;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P1_7_14", 16);
			iVar3 = 7;
			iVar4 = 14;
			iVar1 = 145;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P1_7_15", 16);
			iVar3 = 7;
			iVar4 = 15;
			iVar1 = 145;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P1_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P1_8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P1_8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			break;
		
		case 76:
			StringCopy(&Var2, "TORSO_P1_8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P1_8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 30;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P1_8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 38;
			break;
		
		case 79:
			StringCopy(&Var2, "TORSO_P1_8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 32;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P1_8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 30;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P1_8_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 33;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P1_8_9", 16);
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 35;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P1_8_10", 16);
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 35;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P1_8_11", 16);
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 38;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P1_8_12", 16);
			iVar3 = 8;
			iVar4 = 12;
			iVar1 = 33;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P1_8_13", 16);
			iVar3 = 8;
			iVar4 = 13;
			iVar1 = 35;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P1_8_14", 16);
			iVar3 = 8;
			iVar4 = 14;
			iVar1 = 38;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P1_8_15", 16);
			iVar3 = 8;
			iVar4 = 15;
			iVar1 = 32;
			break;
		
		case 89:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 91:
			StringCopy(&Var2, "TORSO_P1_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P1_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 59;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P1_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P1_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 25;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P1_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 29;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P1_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 27;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P1_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 25;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P1_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 27;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P1_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 28;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P1_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 30;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P1_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 29;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P1_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 27;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P1_11_12", 16);
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 29;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P1_11_13", 16);
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 32;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P1_11_14", 16);
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 30;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P1_11_15", 16);
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 28;
			break;
		
		default:
			return;
			break;
	}
	func_246(&(Global_11489[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_286(int iParam0)//Position - 0x211DA
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 2;
	Global_11489[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P1_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P1_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P1_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P1_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar6 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P1_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar6 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "HAIR_P1_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar6 = 3;
			break;
		
		case 6:
			StringCopy(&Var2, "HAIR_P1_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar6 = 3;
			break;
		
		case 7:
			StringCopy(&Var2, "HAIR_P1_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar6 = 3;
			break;
		
		case 8:
			StringCopy(&Var2, "HAIR_P1_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar6 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "HAIR_P1_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar6 = 3;
			break;
		
		case 10:
			StringCopy(&Var2, "HAIR_P1_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar6 = 3;
			break;
		
		case 11:
			StringCopy(&Var2, "HAIR_P1_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar6 = 3;
			break;
		
		case 12:
			StringCopy(&Var2, "HAIR_P1_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			iVar6 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "HAIR_P1_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "HAIR_P1_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			iVar6 = 3;
			break;
		
		case 15:
			StringCopy(&Var2, "HAIR_P1_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			iVar6 = 3;
			break;
		
		case 16:
			StringCopy(&Var2, "HAIR_P1_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 17:
			StringCopy(&Var2, "HAIR_P1_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 18:
			StringCopy(&Var2, "HAIR_P1_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 19:
			StringCopy(&Var2, "HAIR_P1_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_252(iVar7, iParam0, 21);
			return;
			break;
	}
	func_246(&(Global_11489[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_287(int iParam0)//Position - 0x21452
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 0;
	Global_11489[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 9;
			break;
		
		default:
			func_252(iVar7, iParam0, 10);
			return;
			break;
	}
	func_246(&(Global_11489[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_288(int iParam0, int iParam1)//Position - 0x21597
{
	switch (iParam0)
	{
		case 0:
			func_305(iParam1);
			break;
		
		case 2:
			func_304(iParam1);
			break;
		
		case 3:
			func_301(iParam1);
			break;
		
		case 4:
			func_300(iParam1);
			break;
		
		case 6:
			func_299(iParam1);
			break;
		
		case 5:
			func_298(iParam1);
			break;
		
		case 8:
			func_297(iParam1);
			break;
		
		case 9:
			func_296(iParam1);
			break;
		
		case 10:
			func_295(iParam1);
			break;
		
		case 1:
			func_294(iParam1);
			break;
		
		case 7:
			func_293(iParam1);
			break;
		
		case 11:
			func_292(iParam1);
			break;
		
		case 12:
			func_291(iParam1);
			break;
		
		case 13:
			func_290(iParam1);
			break;
		
		case 14:
			func_289(iParam1);
			break;
	}
}

void func_289(int iParam0)//Position - 0x21687
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 14;
	Global_11489[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 8;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "PROPS_P0_H1", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "PROPS_P0_H2", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 320;
			iVar5 = 11;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar5 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar5 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "PROPS_P0_H12", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 450;
			iVar5 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 25;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 27;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 28;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "PROPS_P0_E0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 45;
			iVar5 = 10;
			break;
		
		case 59:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 10;
			break;
		
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 10;
			break;
		
		case 61:
			StringCopy(&Var2, "PROPS_P0_E3", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 62:
			StringCopy(&Var2, "PROPS_P0_E4", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 63:
			StringCopy(&Var2, "PROPS_P0_E4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 56;
			iVar5 = 10;
			break;
		
		case 64:
			StringCopy(&Var2, "PROPS_P0_E4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 60;
			iVar5 = 10;
			break;
		
		case 65:
			StringCopy(&Var2, "PROPS_P0_E4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 66:
			StringCopy(&Var2, "PROPS_P0_E4_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 62;
			iVar5 = 10;
			break;
		
		case 67:
			StringCopy(&Var2, "PROPS_P0_E4_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 68:
			StringCopy(&Var2, "PROPS_P0_E4_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 68;
			iVar5 = 10;
			break;
		
		case 69:
			StringCopy(&Var2, "PROPS_P0_E4_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 68;
			iVar5 = 10;
			break;
		
		case 70:
			StringCopy(&Var2, "PROPS_P0_E5", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P0_E5_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P0_E5_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 72;
			iVar5 = 10;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P0_E5_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 70;
			iVar5 = 10;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P0_E5_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 74;
			iVar5 = 10;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P0_E5_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 78;
			iVar5 = 10;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P0_E5_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 82;
			iVar5 = 10;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P0_E5_7", 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 85;
			iVar5 = 10;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P0_E5_8", 16);
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 85;
			iVar5 = 10;
			break;
		
		case 79:
			StringCopy(&Var2, "PROPS_P0_E5_9", 16);
			iVar3 = 5;
			iVar4 = 9;
			iVar5 = 10;
			break;
		
		case 80:
			StringCopy(&Var2, "PROPS_P0_E6", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 81:
			StringCopy(&Var2, "PROPS_P0_E6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 82:
			StringCopy(&Var2, "PROPS_P0_E6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P0_E6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P0_E6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P0_E6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P0_E6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 87:
			StringCopy(&Var2, "PROPS_P0_E6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 88:
			StringCopy(&Var2, "PROPS_P0_E6_8", 16);
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P0_E6_9", 16);
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P0_E7", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P0_E8", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 170;
			iVar5 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P0_E8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P0_E8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 180;
			iVar5 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P0_E8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 185;
			iVar5 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P0_E8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 189;
			iVar5 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P0_E8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 195;
			iVar5 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P0_E8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 235;
			iVar5 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P0_E8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 245;
			iVar5 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P0_E8_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 250;
			iVar5 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P0_E8_9", 16);
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 275;
			iVar5 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P0_E8_10", 16);
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 280;
			iVar5 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P0_E8_11", 16);
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 295;
			iVar5 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P0_E9", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 179;
			iVar5 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P0_E9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 159;
			iVar5 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P0_E9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 165;
			iVar5 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P0_E9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 155;
			iVar5 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P0_E9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P0_E9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 185;
			iVar5 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P0_E9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 189;
			iVar5 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "PROPS_P0_E9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 225;
			iVar5 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 100;
			iVar5 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 2;
			break;
		
		default:
			func_252(iVar7, iParam0, 113);
			return;
			break;
	}
	func_246(&(Global_11489[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_290(int iParam0)//Position - 0x22410
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 13;
	Global_11489[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_252(iVar7, iParam0, 10);
			return;
			break;
	}
	func_246(&(Global_11489[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_291(int iParam0)//Position - 0x22589
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 12;
	Global_11489[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "OUTFIT_P0_1", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "OUTFIT_P0_4", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P0_7", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P0_8", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P0_9", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P0_11", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P0_12", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P0_14", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P0_17", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P0_18", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P0_19", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P0_20", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P0_22", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P0_23", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P0_24", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P0_26", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P0_28", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P0_29", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P0_30", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P0_31", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P0_32", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P0_33", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P0_34", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P0_35", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P0_11", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P0_36", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P0_37", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 840;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P0_38", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P0_39", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P0_40", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P0_41", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P0_42", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P0_43", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P0_44", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 3900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P0_45", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4000;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P0_46", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P0_47", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4600;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P0_48", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5500;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P0_49", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4400;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P0_50", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4400;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P0_51", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P0_52", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5500;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P0_53", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		
		case 47:
			StringCopy(&Var2, "OUTFIT_P0_54", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 48:
			StringCopy(&Var2, "OUTFIT_P0_55", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "OUTFIT_P0_17", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_252(iVar7, iParam0, 53);
			return;
			break;
	}
	func_246(&(Global_11489[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_292(int iParam0)//Position - 0x22AFF
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 11;
	Global_11489[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "JBIB_P0_02_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "JBIB_P0_02_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			break;
		
		case 4:
			StringCopy(&Var2, "JBIB_P0_02_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			break;
		
		case 5:
			StringCopy(&Var2, "JBIB_P0_02_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			break;
		
		case 6:
			StringCopy(&Var2, "JBIB_P0_02_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			break;
		
		case 7:
			StringCopy(&Var2, "JBIB_P0_02_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			break;
		
		case 8:
			StringCopy(&Var2, "JBIB_P0_03_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 390;
			break;
		
		case 9:
			StringCopy(&Var2, "JBIB_P0_03_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 390;
			break;
		
		case 10:
			StringCopy(&Var2, "JBIB_P0_03_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 420;
			break;
		
		case 11:
			StringCopy(&Var2, "JBIB_P0_03_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 420;
			break;
		
		case 12:
			StringCopy(&Var2, "JBIB_P0_03_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 490;
			break;
		
		case 13:
			StringCopy(&Var2, "JBIB_P0_03_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 490;
			break;
		
		case 14:
			StringCopy(&Var2, "JBIB_P0_03_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 540;
			break;
		
		case 15:
			StringCopy(&Var2, "JBIB_P0_03_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 540;
			break;
		
		case 16:
			StringCopy(&Var2, "JBIB_P0_03_8", 16);
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 550;
			break;
		
		case 17:
			StringCopy(&Var2, "JBIB_P0_03_9", 16);
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 540;
			break;
		
		case 18:
			StringCopy(&Var2, "JBIB_P0_04_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 850;
			break;
		
		case 19:
			StringCopy(&Var2, "JBIB_P0_04_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 850;
			break;
		
		case 20:
			StringCopy(&Var2, "JBIB_P0_04_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 890;
			break;
		
		case 21:
			StringCopy(&Var2, "JBIB_P0_04_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 890;
			break;
		
		case 22:
			StringCopy(&Var2, "JBIB_P0_04_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 920;
			break;
		
		case 23:
			StringCopy(&Var2, "JBIB_P0_04_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 920;
			break;
		
		case 24:
			StringCopy(&Var2, "JBIB_P0_04_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 950;
			break;
		
		case 25:
			StringCopy(&Var2, "JBIB_P0_04_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 980;
			break;
		
		case 26:
			StringCopy(&Var2, "JBIB_P0_04_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 1050;
			break;
		
		case 27:
			StringCopy(&Var2, "JBIB_P0_04_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 1100;
			break;
		
		case 28:
			StringCopy(&Var2, "JBIB_P0_05_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 1890;
			break;
		
		case 29:
			StringCopy(&Var2, "JBIB_P0_05_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 1820;
			break;
		
		case 30:
			StringCopy(&Var2, "JBIB_P0_05_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 1820;
			break;
		
		case 31:
			StringCopy(&Var2, "JBIB_P0_05_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 1850;
			break;
		
		case 32:
			StringCopy(&Var2, "JBIB_P0_05_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 1850;
			break;
		
		case 33:
			StringCopy(&Var2, "JBIB_P0_05_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 1900;
			break;
		
		case 34:
			StringCopy(&Var2, "JBIB_P0_05_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 1920;
			break;
		
		case 35:
			StringCopy(&Var2, "JBIB_P0_05_7", 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 1980;
			break;
		
		case 36:
			StringCopy(&Var2, "JBIB_P0_05_8", 16);
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 2100;
			break;
		
		case 37:
			StringCopy(&Var2, "JBIB_P0_05_9", 16);
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 2120;
			break;
		
		case 38:
			StringCopy(&Var2, "JBIB_P0_05_10", 16);
			iVar3 = 5;
			iVar4 = 10;
			iVar1 = 2000;
			break;
		
		case 39:
			StringCopy(&Var2, "JBIB_P0_05_11", 16);
			iVar3 = 5;
			iVar4 = 11;
			iVar1 = 2200;
			break;
		
		case 40:
			StringCopy(&Var2, "JBIB_P0_05_12", 16);
			iVar3 = 5;
			iVar4 = 12;
			iVar1 = 2280;
			break;
		
		case 41:
			StringCopy(&Var2, "JBIB_P0_05_13", 16);
			iVar3 = 5;
			iVar4 = 13;
			iVar1 = 2300;
			break;
		
		case 42:
			StringCopy(&Var2, "JBIB_P0_05_14", 16);
			iVar3 = 5;
			iVar4 = 14;
			iVar1 = 2350;
			break;
		
		case 43:
			StringCopy(&Var2, "JBIB_P0_05_15", 16);
			iVar3 = 5;
			iVar4 = 15;
			iVar1 = 2280;
			break;
		
		case 44:
			StringCopy(&Var2, "JBIB_P0_06_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		default:
			func_252(iVar7, iParam0, 45);
			return;
			break;
	}
	func_246(&(Global_11489[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_293(int iParam0)//Position - 0x23028
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 7;
	Global_11489[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_252(iVar7, iParam0, 1);
			return;
			break;
	}
	func_246(&(Global_11489[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_294(int iParam0)//Position - 0x2309B
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 1;
	Global_11489[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P0_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P0_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P0_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P0_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		default:
			func_252(iVar7, iParam0, 5);
			return;
			break;
	}
	func_246(&(Global_11489[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_295(int iParam0)//Position - 0x2316A
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 10;
	Global_11489[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 1;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 2;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 3;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 4;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 5;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 6;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 7;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 1;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 2;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 3;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 4;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 5;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 1;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 2;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 3;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 4;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 5;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 6;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 1;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 2;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 3;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 4;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 5;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 6;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 7;
			break;
		
		case 36:
			StringCopy(&Var2, "DECL_P0_10_8", 16);
			iVar3 = 10;
			iVar4 = 8;
			break;
		
		case 37:
			StringCopy(&Var2, "DECL_P0_10_9", 16);
			iVar3 = 10;
			iVar4 = 9;
			break;
		
		case 38:
			StringCopy(&Var2, "DECL_P0_10_10", 16);
			iVar3 = 10;
			iVar4 = 10;
			break;
		
		case 39:
			StringCopy(&Var2, "DECL_P0_10_11", 16);
			iVar3 = 10;
			iVar4 = 11;
			break;
		
		case 40:
			StringCopy(&Var2, "DECL_P0_10_12", 16);
			iVar3 = 10;
			iVar4 = 12;
			break;
		
		case 41:
			StringCopy(&Var2, "DECL_P0_10_13", 16);
			iVar3 = 10;
			iVar4 = 13;
			break;
		
		case 42:
			StringCopy(&Var2, "DECL_P0_10_14", 16);
			iVar3 = 10;
			iVar4 = 14;
			break;
		
		case 43:
			StringCopy(&Var2, "DECL_P0_10_15", 16);
			iVar3 = 10;
			iVar4 = 15;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 1;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 2;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 3;
			break;
		
		default:
			func_252(iVar7, iParam0, 48);
			return;
			break;
	}
	func_246(&(Global_11489[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_296(int iParam0)//Position - 0x23641
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 9;
	Global_11489[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 125;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 150;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 175;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 85;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 150;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 175;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_252(iVar7, iParam0, 20);
			return;
			break;
	}
	func_246(&(Global_11489[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_297(int iParam0)//Position - 0x238A9
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 8;
	Global_11489[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC_P0_10", 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "SPEC_P0_16", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 18;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 19;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 20;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 21;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 22;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_252(iVar7, iParam0, 24);
			return;
			break;
	}
	func_246(&(Global_11489[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_298(int iParam0)//Position - 0x23B7E
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 5;
	Global_11489[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_252(iVar7, iParam0, 14);
			return;
			break;
	}
	func_246(&(Global_11489[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_299(int iParam0)//Position - 0x23D46
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 6;
	Global_11489[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P0_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 665;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P0_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 620;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P0_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 540;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P0_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 580;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P0_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 650;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P0_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P0_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P0_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 64;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P0_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 56;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P0_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 69;
			break;
		
		case 24:
			StringCopy(&Var2, "FEET_P0_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 59;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P0_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 62;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P0_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 74;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P0_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 68;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P0_15_8", 16);
			iVar3 = 15;
			iVar4 = 8;
			iVar1 = 72;
			break;
		
		case 29:
			StringCopy(&Var2, "FEET_P0_15_9", 16);
			iVar3 = 15;
			iVar4 = 9;
			iVar1 = 70;
			break;
		
		case 30:
			StringCopy(&Var2, "FEET_P0_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar1 = 48;
			break;
		
		case 31:
			StringCopy(&Var2, "FEET_P0_16_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 48;
			break;
		
		case 32:
			StringCopy(&Var2, "FEET_P0_16_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 55;
			break;
		
		case 33:
			StringCopy(&Var2, "FEET_P0_16_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 75;
			break;
		
		case 34:
			StringCopy(&Var2, "FEET_P0_16_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 65;
			break;
		
		case 35:
			StringCopy(&Var2, "FEET_P0_16_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 68;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P0_16_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 58;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P0_16_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 68;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P0_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 790;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P0_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 750;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P0_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 860;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P0_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 750;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P0_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 790;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P0_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P0_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 820;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P0_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 800;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P0_18_8", 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar1 = 850;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P0_18_9", 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar1 = 870;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P0_18_10", 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar1 = 720;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P0_18_11", 16);
			iVar3 = 18;
			iVar4 = 11;
			iVar1 = 740;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P0_18_12", 16);
			iVar3 = 18;
			iVar4 = 12;
			iVar1 = 800;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P0_18_13", 16);
			iVar3 = 18;
			iVar4 = 13;
			iVar1 = 750;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P0_18_14", 16);
			iVar3 = 18;
			iVar4 = 14;
			iVar1 = 770;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P0_18_15", 16);
			iVar3 = 18;
			iVar4 = 15;
			iVar1 = 860;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P0_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 850;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P0_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 800;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P0_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 780;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P0_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 890;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P0_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 820;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P0_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P0_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 870;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P0_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 930;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P0_19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 880;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P0_19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 900;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P0_19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 920;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P0_19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 970;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P0_19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 990;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P0_19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 960;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P0_19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 980;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P0_19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 950;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P0_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 110;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P0_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 73:
			StringCopy(&Var2, "FEET_P0_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 120;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P0_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 110;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P0_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 125;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P0_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 128;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P0_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 135;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P0_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 130;
			break;
		
		case 79:
			StringCopy(&Var2, "FEET_P0_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 145;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P0_20_9", 16);
			iVar3 = 20;
			iVar4 = 9;
			iVar1 = 110;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P0_20_10", 16);
			iVar3 = 20;
			iVar4 = 10;
			iVar1 = 120;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P0_20_11", 16);
			iVar3 = 20;
			iVar4 = 11;
			iVar1 = 150;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P0_20_12", 16);
			iVar3 = 20;
			iVar4 = 12;
			iVar1 = 125;
			break;
		
		case 84:
			StringCopy(&Var2, "FEET_P0_20_13", 16);
			iVar3 = 20;
			iVar4 = 13;
			iVar1 = 120;
			break;
		
		case 85:
			StringCopy(&Var2, "FEET_P0_20_14", 16);
			iVar3 = 20;
			iVar4 = 14;
			iVar1 = 130;
			break;
		
		case 86:
			StringCopy(&Var2, "FEET_P0_20_15", 16);
			iVar3 = 20;
			iVar4 = 15;
			iVar1 = 110;
			break;
		
		case 87:
			StringCopy(&Var2, "FEET_P0_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 720;
			break;
		
		case 88:
			StringCopy(&Var2, "FEET_P0_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 680;
			break;
		
		case 89:
			StringCopy(&Var2, "FEET_P0_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 650;
			break;
		
		case 90:
			StringCopy(&Var2, "FEET_P0_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 670;
			break;
		
		case 91:
			StringCopy(&Var2, "FEET_P0_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 700;
			break;
		
		case 92:
			StringCopy(&Var2, "FEET_P0_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 680;
			break;
		
		case 93:
			StringCopy(&Var2, "FEET_P0_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 720;
			break;
		
		case 94:
			StringCopy(&Var2, "FEET_P0_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 740;
			break;
		
		case 95:
			StringCopy(&Var2, "FEET_P0_21_8", 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 760;
			break;
		
		case 96:
			StringCopy(&Var2, "FEET_P0_21_9", 16);
			iVar3 = 21;
			iVar4 = 9;
			iVar1 = 780;
			break;
		
		case 97:
			StringCopy(&Var2, "FEET_P0_21_10", 16);
			iVar3 = 21;
			iVar4 = 10;
			iVar1 = 750;
			break;
		
		case 98:
			StringCopy(&Var2, "FEET_P0_21_11", 16);
			iVar3 = 21;
			iVar4 = 11;
			iVar1 = 700;
			break;
		
		default:
			func_252(iVar7, iParam0, 99);
			return;
			break;
	}
	func_246(&(Global_11489[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_300(int iParam0)//Position - 0x2489B
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 4;
	Global_11489[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P0_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P0_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "LEGS_P0_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "LEGS_P0_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "LEGS_P0_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "LEGS_P0_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "LEGS_P0_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "LEGS_P0_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			break;
		
		case 10:
			StringCopy(&Var2, "LEGS_P0_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			break;
		
		case 11:
			StringCopy(&Var2, "LEGS_P0_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			break;
		
		case 12:
			StringCopy(&Var2, "LEGS_P0_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			break;
		
		case 13:
			StringCopy(&Var2, "LEGS_P0_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "LEGS_P0_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			break;
		
		case 15:
			StringCopy(&Var2, "LEGS_P0_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "LEGS_P0_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 115;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P0_7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P0_7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 128;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P0_7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 118;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P0_7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 125;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P0_7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 128;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P0_7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 128;
			break;
		
		case 30:
			StringCopy(&Var2, "LEGS_P0_7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 125;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P0_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 68;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P0_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 68;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P0_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 68;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P0_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 68;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P0_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 68;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P0_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P0_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 550;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P0_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 650;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P0_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 875;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P0_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 820;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P0_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 720;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P0_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 750;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P0_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 850;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P0_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P0_16_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 48;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P0_16_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 48;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P0_16_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 38;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P0_16_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 38;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P0_16_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 42;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P0_16_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 58;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P0_16_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 46;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P0_16_8", 16);
			iVar3 = 16;
			iVar4 = 8;
			iVar1 = 46;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P0_16_9", 16);
			iVar3 = 16;
			iVar4 = 9;
			iVar1 = 46;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P0_16_10", 16);
			iVar3 = 16;
			iVar4 = 10;
			iVar1 = 68;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P0_16_11", 16);
			iVar3 = 16;
			iVar4 = 11;
			iVar1 = 58;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P0_16_12", 16);
			iVar3 = 16;
			iVar4 = 12;
			iVar1 = 50;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P0_16_13", 16);
			iVar3 = 16;
			iVar4 = 13;
			iVar1 = 68;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P0_16_14", 16);
			iVar3 = 16;
			iVar4 = 14;
			iVar1 = 68;
			break;
		
		case 70:
			StringCopy(&Var2, "LEGS_P0_16_15", 16);
			iVar3 = 16;
			iVar4 = 15;
			iVar1 = 42;
			break;
		
		case 71:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P0_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P0_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 250;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P0_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 250;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P0_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 290;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P0_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 270;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P0_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 270;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P0_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 15;
			break;
		
		case 79:
			StringCopy(&Var2, "LEGS_P0_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 12;
			break;
		
		case 80:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 19;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P0_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P0_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 118;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P0_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 110;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P0_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 88;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P0_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 95;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P0_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 95;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P0_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 98;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P0_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar1 = 140;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P0_23_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P0_23_1", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar1 = 150;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P0_23_2", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar1 = 130;
			break;
		
		case 92:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 24;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 93:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 25;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "LEGS_P0_27_0", 16);
			iVar3 = 27;
			iVar4 = 0;
			break;
		
		case 96:
			StringCopy(&Var2, "LEGS_P0_28_0", 16);
			iVar3 = 28;
			iVar4 = 0;
			iVar1 = 45;
			break;
		
		case 97:
			StringCopy(&Var2, "LEGS_P0_28_1", 16);
			iVar3 = 28;
			iVar4 = 1;
			iVar1 = 48;
			break;
		
		case 98:
			StringCopy(&Var2, "LEGS_P0_28_2", 16);
			iVar3 = 28;
			iVar4 = 2;
			iVar1 = 48;
			break;
		
		case 99:
			StringCopy(&Var2, "LEGS_P0_28_3", 16);
			iVar3 = 28;
			iVar4 = 3;
			iVar1 = 52;
			break;
		
		case 100:
			StringCopy(&Var2, "LEGS_P0_28_4", 16);
			iVar3 = 28;
			iVar4 = 4;
			iVar1 = 52;
			break;
		
		case 101:
			StringCopy(&Var2, "LEGS_P0_28_5", 16);
			iVar3 = 28;
			iVar4 = 5;
			iVar1 = 55;
			break;
		
		case 102:
			StringCopy(&Var2, "LEGS_P0_28_6", 16);
			iVar3 = 28;
			iVar4 = 6;
			iVar1 = 55;
			break;
		
		case 103:
			StringCopy(&Var2, "LEGS_P0_28_7", 16);
			iVar3 = 28;
			iVar4 = 7;
			iVar1 = 55;
			break;
		
		case 104:
			StringCopy(&Var2, "LEGS_P0_28_8", 16);
			iVar3 = 28;
			iVar4 = 8;
			iVar1 = 58;
			break;
		
		case 105:
			StringCopy(&Var2, "LEGS_P0_28_9", 16);
			iVar3 = 28;
			iVar4 = 9;
			iVar1 = 58;
			break;
		
		case 106:
			StringCopy(&Var2, "LEGS_P0_28_10", 16);
			iVar3 = 28;
			iVar4 = 10;
			iVar1 = 60;
			break;
		
		case 107:
			StringCopy(&Var2, "LEGS_P0_28_11", 16);
			iVar3 = 28;
			iVar4 = 11;
			iVar1 = 60;
			break;
		
		case 108:
			StringCopy(&Var2, "LEGS_P0_28_12", 16);
			iVar3 = 28;
			iVar4 = 12;
			iVar1 = 62;
			break;
		
		case 109:
			StringCopy(&Var2, "LEGS_P0_28_13", 16);
			iVar3 = 28;
			iVar4 = 13;
			iVar1 = 62;
			break;
		
		case 110:
			StringCopy(&Var2, "LEGS_P0_28_14", 16);
			iVar3 = 28;
			iVar4 = 14;
			iVar1 = 65;
			break;
		
		case 111:
			StringCopy(&Var2, "LEGS_P0_28_15", 16);
			iVar3 = 28;
			iVar4 = 15;
			iVar1 = 65;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 29;
			iVar4 = 0;
			break;
		
		default:
			func_252(iVar7, iParam0, 113);
			return;
			break;
	}
	func_246(&(Global_11489[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_301(int iParam0)//Position - 0x254E4
{
	if (iParam0 < 60)
	{
		func_303(iParam0);
	}
	else
	{
		func_302(iParam0);
	}
	if (Global_11489[0 /*14*/].f_2 == -1)
	{
		func_252(3, iParam0, 181);
	}
}

void func_302(int iParam0)//Position - 0x25518
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_11489[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 64:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 65:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 66:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 67:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "TORSO_P0_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 120;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P0_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 120;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P0_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 120;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P0_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 120;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P0_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 120;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P0_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 120;
			break;
		
		case 76:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P0_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P0_16_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 20;
			break;
		
		case 79:
			StringCopy(&Var2, "TORSO_P0_16_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 24;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P0_16_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 22;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P0_16_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 25;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P0_16_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 25;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P0_16_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 22;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P0_16_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 27;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P0_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P0_17_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P0_17_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P0_17_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar1 = 48;
			break;
		
		case 89:
			StringCopy(&Var2, "TORSO_P0_17_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar1 = 40;
			break;
		
		case 90:
			StringCopy(&Var2, "TORSO_P0_17_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar1 = 45;
			break;
		
		case 91:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 18;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P0_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P0_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 190;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P0_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 190;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P0_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 190;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P0_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 210;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P0_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P0_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P0_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 55;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P0_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 110;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P0_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 99;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P0_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 49;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P0_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 120;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P0_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 45;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P0_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 115;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P0_20_9", 16);
			iVar3 = 20;
			iVar4 = 9;
			iVar1 = 105;
			break;
		
		case 107:
			StringCopy(&Var2, "TORSO_P0_20_10", 16);
			iVar3 = 20;
			iVar4 = 10;
			iVar1 = 90;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P0_20_11", 16);
			iVar3 = 20;
			iVar4 = 11;
			iVar1 = 95;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P0_20_12", 16);
			iVar3 = 20;
			iVar4 = 12;
			iVar1 = 39;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P0_20_13", 16);
			iVar3 = 20;
			iVar4 = 13;
			iVar1 = 95;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P0_20_14", 16);
			iVar3 = 20;
			iVar4 = 14;
			iVar1 = 35;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P0_20_15", 16);
			iVar3 = 20;
			iVar4 = 15;
			iVar1 = 95;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P0_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 88;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P0_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 60;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P0_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 70;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P0_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 80;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P0_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 90;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P0_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 80;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P0_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 70;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P0_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 95;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P0_21_8", 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 105;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P0_21_9", 16);
			iVar3 = 21;
			iVar4 = 9;
			iVar1 = 95;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P0_21_10", 16);
			iVar3 = 21;
			iVar4 = 10;
			iVar1 = 110;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P0_21_11", 16);
			iVar3 = 21;
			iVar4 = 11;
			iVar1 = 98;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P0_21_12", 16);
			iVar3 = 21;
			iVar4 = 12;
			iVar1 = 88;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P0_21_13", 16);
			iVar3 = 21;
			iVar4 = 13;
			iVar1 = 98;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P0_21_14", 16);
			iVar3 = 21;
			iVar4 = 14;
			iVar1 = 110;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P0_21_15", 16);
			iVar3 = 21;
			iVar4 = 15;
			iVar1 = 98;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P0_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P0_22_1", 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 4950;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P0_22_2", 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 4195;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P0_22_3", 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 3195;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P0_22_4", 16);
			iVar3 = 22;
			iVar4 = 4;
			iVar1 = 2950;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P0_22_5", 16);
			iVar3 = 22;
			iVar4 = 5;
			iVar1 = 3950;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P0_23_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar1 = 3200;
			break;
		
		case 136:
			StringCopy(&Var2, "TORSO_P0_23_1", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar1 = 3200;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P0_23_2", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar1 = 3200;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P0_23_3", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar1 = 3200;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P0_23_4", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar1 = 3200;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P0_23_5", 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar1 = 3200;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P0_23_6", 16);
			iVar3 = 23;
			iVar4 = 6;
			iVar1 = 3200;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P0_23_7", 16);
			iVar3 = 23;
			iVar4 = 7;
			iVar1 = 3200;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P0_23_8", 16);
			iVar3 = 23;
			iVar4 = 8;
			iVar1 = 3200;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P0_23_9", 16);
			iVar3 = 23;
			iVar4 = 9;
			iVar1 = 3200;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P0_23_10", 16);
			iVar3 = 23;
			iVar4 = 10;
			iVar1 = 3200;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P0_23_11", 16);
			iVar3 = 23;
			iVar4 = 11;
			iVar1 = 3200;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P0_23_12", 16);
			iVar3 = 23;
			iVar4 = 12;
			iVar1 = 3200;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P0_23_13", 16);
			iVar3 = 23;
			iVar4 = 13;
			iVar1 = 3200;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P0_23_14", 16);
			iVar3 = 23;
			iVar4 = 14;
			iVar1 = 3200;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P0_23_15", 16);
			iVar3 = 23;
			iVar4 = 15;
			iVar1 = 3200;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P0_24_0", 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar1 = 1350;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P0_24_1", 16);
			iVar3 = 24;
			iVar4 = 1;
			iVar1 = 1400;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P0_24_2", 16);
			iVar3 = 24;
			iVar4 = 2;
			iVar1 = 1200;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P0_24_3", 16);
			iVar3 = 24;
			iVar4 = 3;
			iVar1 = 1250;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P0_24_4", 16);
			iVar3 = 24;
			iVar4 = 4;
			iVar1 = 1350;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P0_24_5", 16);
			iVar3 = 24;
			iVar4 = 5;
			iVar1 = 1300;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P0_24_6", 16);
			iVar3 = 24;
			iVar4 = 6;
			iVar1 = 1380;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P0_24_7", 16);
			iVar3 = 24;
			iVar4 = 7;
			iVar1 = 1340;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P0_24_8", 16);
			iVar3 = 24;
			iVar4 = 8;
			iVar1 = 1380;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P0_24_9", 16);
			iVar3 = 24;
			iVar4 = 9;
			iVar1 = 1250;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P0_25_0", 16);
			iVar3 = 25;
			iVar4 = 0;
			iVar1 = 840;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P0_25_1", 16);
			iVar3 = 25;
			iVar4 = 1;
			iVar1 = 840;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P0_25_2", 16);
			iVar3 = 25;
			iVar4 = 2;
			iVar1 = 840;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P0_25_3", 16);
			iVar3 = 25;
			iVar4 = 3;
			iVar1 = 840;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P0_25_4", 16);
			iVar3 = 25;
			iVar4 = 4;
			iVar1 = 840;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P0_25_5", 16);
			iVar3 = 25;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P0_25_6", 16);
			iVar3 = 25;
			iVar4 = 6;
			iVar1 = 840;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P0_25_7", 16);
			iVar3 = 25;
			iVar4 = 7;
			iVar1 = 840;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P0_26_0", 16);
			iVar3 = 26;
			iVar4 = 0;
			break;
		
		case 170:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 27;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P0_28_0", 16);
			iVar3 = 28;
			iVar4 = 0;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P0_28_1", 16);
			iVar3 = 28;
			iVar4 = 1;
			iVar1 = 130;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P0_28_2", 16);
			iVar3 = 28;
			iVar4 = 2;
			iVar1 = 110;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P0_29_0", 16);
			iVar3 = 29;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P0_30_0", 16);
			iVar3 = 30;
			iVar4 = 0;
			iVar1 = 290;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P0_30_1", 16);
			iVar3 = 30;
			iVar4 = 1;
			iVar1 = 320;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P0_31_0", 16);
			iVar3 = 31;
			iVar4 = 0;
			iVar1 = 59;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P0_31_1", 16);
			iVar3 = 31;
			iVar4 = 1;
			iVar1 = 55;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P0_31_2", 16);
			iVar3 = 31;
			iVar4 = 2;
			iVar1 = 59;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P0_31_3", 16);
			iVar3 = 31;
			iVar4 = 3;
			iVar1 = 49;
			break;
		
		default:
			return;
			break;
	}
	func_246(&(Global_11489[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_303(int iParam0)//Position - 0x262B8
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_11489[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P0_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 3500;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P0_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P0_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P0_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P0_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P0_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P0_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P0_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P0_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P0_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P0_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P0_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P0_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P0_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 20;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 18;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 22;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 25;
			break;
		
		case 21:
			StringCopy(&Var2, "TORSO_P0_2_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 19;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P0_2_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 20;
			break;
		
		case 23:
			StringCopy(&Var2, "TORSO_P0_2_6", 16);
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 22;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P0_2_7", 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 18;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P0_2_8", 16);
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 39;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P0_2_9", 16);
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 32;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P0_2_10", 16);
			iVar3 = 2;
			iVar4 = 10;
			iVar1 = 35;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P0_2_11", 16);
			iVar3 = 2;
			iVar4 = 11;
			iVar1 = 35;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P0_2_12", 16);
			iVar3 = 2;
			iVar4 = 12;
			iVar1 = 210;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P0_2_13", 16);
			iVar3 = 2;
			iVar4 = 13;
			iVar1 = 250;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P0_2_14", 16);
			iVar3 = 2;
			iVar4 = 14;
			iVar1 = 290;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P0_2_15", 16);
			iVar3 = 2;
			iVar4 = 15;
			iVar1 = 310;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P0_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 150;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P0_7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 160;
			break;
		
		case 40:
			StringCopy(&Var2, "TORSO_P0_7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 150;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P0_7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 150;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P0_7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 160;
			break;
		
		case 43:
			StringCopy(&Var2, "TORSO_P0_7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 160;
			break;
		
		case 44:
			StringCopy(&Var2, "TORSO_P0_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "TORSO_P0_8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 52;
			break;
		
		case 46:
			StringCopy(&Var2, "TORSO_P0_8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 52;
			break;
		
		case 47:
			StringCopy(&Var2, "TORSO_P0_8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 55;
			break;
		
		case 48:
			StringCopy(&Var2, "TORSO_P0_8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 55;
			break;
		
		case 49:
			StringCopy(&Var2, "TORSO_P0_8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 58;
			break;
		
		case 50:
			StringCopy(&Var2, "TORSO_P0_8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 58;
			break;
		
		case 51:
			StringCopy(&Var2, "TORSO_P0_8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 62;
			break;
		
		case 52:
			StringCopy(&Var2, "TORSO_P0_8_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 65;
			break;
		
		case 53:
			StringCopy(&Var2, "TORSO_P0_8_9", 16);
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 65;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P0_8_10", 16);
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 68;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P0_8_11", 16);
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 68;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P0_8_12", 16);
			iVar3 = 8;
			iVar4 = 12;
			iVar1 = 55;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P0_8_13", 16);
			iVar3 = 8;
			iVar4 = 13;
			iVar1 = 62;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P0_8_14", 16);
			iVar3 = 8;
			iVar4 = 14;
			iVar1 = 58;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P0_8_15", 16);
			iVar3 = 8;
			iVar4 = 15;
			iVar1 = 58;
			break;
		
		default:
			return;
			break;
	}
	func_246(&(Global_11489[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_304(int iParam0)//Position - 0x26944
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 2;
	Global_11489[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P0_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P0_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P0_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P0_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		default:
			func_252(iVar7, iParam0, 6);
			return;
			break;
	}
	func_246(&(Global_11489[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_305(int iParam0)//Position - 0x26A2A
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 0;
	Global_11489[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		
		default:
			func_252(iVar7, iParam0, 7);
			return;
			break;
	}
	func_246(&(Global_11489[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_306()//Position - 0x26B27
{
	Global_11489[0 /*14*/].f_1 = -1;
	Global_11489[0 /*14*/].f_2 = -1;
	Global_11489[0 /*14*/].f_5 = -1;
	Global_11489[0 /*14*/].f_3 = -1;
	Global_11489[0 /*14*/].f_4 = -1;
	Global_11489[0 /*14*/].f_7 = 0;
	Global_11489[0 /*14*/].f_6 = 0;
	Global_11489[0 /*14*/].f_D = -1;
	Global_11489[0 /*14*/].f_C = 0;
	Global_11489[0 /*14*/] = 0;
	StringCopy(&(Global_11489[0 /*14*/].f_8), "NO_LABEL", 16);
}

int func_307(int iParam0, int iParam1, int iParam2)//Position - 0x26BA0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	int iVar7;
	var uVar8;
	
	if (unk_0x36CEFBE9B745A58D(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x6F79ECA8C83E4357(iParam0);
	Global_11489[1 /*14*/] = { func_243(iVar0, iParam1, iParam2) };
	if (!unk_0xFA30DFD0084E92FE(Global_11489[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar5 = { func_225(iVar0, iParam2) };
		iVar2 = 0;
		while (iVar2 <= 14)
		{
			if ((uVar5[iVar2] != -99 && iVar2 != 12) && iVar2 != 14)
			{
				if (!func_307(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { func_222(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_307(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_11489[2 /*14*/] = { func_243(iVar0, 14, iVar4) };
									if (Global_11489[2 /*14*/].f_C == iVar3)
									{
										if (func_307(iParam0, 14, iVar4))
										{
											if (!func_199(iVar0, iParam2, 14, iVar4, &uVar5, &(Global_11489[2 /*14*/])))
											{
												return 0;
											}
										}
									}
									iVar4++;
								}
							}
							iVar3++;
						}
					}
					else
					{
						iVar1 = func_233(iParam0, iVar2);
						Global_11489[2 /*14*/] = { func_243(iVar0, iVar2, iVar1) };
						if (!func_199(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_11489[2 /*14*/])))
						{
							return 0;
						}
					}
				}
			}
			iVar2++;
		}
		return 1;
	}
	else if (iParam1 == 13)
	{
		uVar8 = { func_222(iVar0, iParam2) };
		iVar7 = 0;
		while (iVar7 <= 8)
		{
			if (!func_307(iParam0, 14, uVar8[iVar7]))
			{
				return 0;
			}
			iVar7++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (unk_0x35C830BCF2BF70BE(iParam0, Global_11489[1 /*14*/].f_C) == Global_11489[1 /*14*/].f_3 && (unk_0x98F83843E924A56E(iParam0, Global_11489[1 /*14*/].f_C) == Global_11489[1 /*14*/].f_4 || Global_11489[1 /*14*/].f_3 == -1))
		{
			return 1;
		}
	}
	else if (Global_11489[1 /*14*/].f_3 == unk_0xA86A4D206EC8EB16(iParam0, func_203(iParam1)) && Global_11489[1 /*14*/].f_4 == unk_0x695D13ECF7DAEC22(iParam0, func_203(iParam1)))
	{
		return 1;
	}
	return 0;
}

void func_308(bool bParam0)//Position - 0x26DF8
{
	int iVar0;
	
	iVar0 = unk_0xFC1CAE18F3ECBF2D();
	if (!unk_0x0928DEFC3216677B(iVar0))
	{
		if (bParam0)
		{
		}
		unk_0xDDCAA2E64649E083(iVar0, bParam0, 16);
		unk_0xDDCAA2E64649E083(iVar0, bParam0, 32);
	}
	func_25(1, 1, 0, 0, 0);
}

void func_309()//Position - 0x26E35
{
	bool bVar0;
	vector3 vVar1;
	
	bVar0 = false;
	func_35();
	func_378();
	if (func_21(Local_68.f_9))
	{
		vVar1 = { unk_0x541C2AEF053615BC(Local_68.f_9, 0) };
		func_377(Local_68.f_9, &iLocal_133, 1126825984, 7);
		func_369(Local_68.f_9, &(Local_68.f_13), 1126825984, 7);
		func_357();
		switch (iLocal_60)
		{
			case 0:
				unk_0xA902E18EDF6FA0C8(5, 1862763509, iLocal_322);
				unk_0xA902E18EDF6FA0C8(5, iLocal_322, 1862763509);
				iLocal_137 = unk_0x8D66276473ABD7CC(Local_68.f_9);
				vLocal_339 = { unk_0x541C2AEF053615BC(Local_68.f_9, 0) };
				func_356(&vLocal_340, vLocal_339);
				func_355(Local_68.f_9);
				if (Local_68.f_A != 22 && Local_68.f_A != 23)
				{
					unk_0xA4E856A8CD53B8DF(Local_68.f_9);
					Local_68.f_12 = (unk_0x105601648511CC64() - 3000);
					Local_68.f_A = 22;
				}
				if (func_21(Local_68.f_9))
				{
					if (!unk_0x2DA8CA50A72528FB(Local_68.f_8))
					{
						Local_68.f_8 = func_354(Local_68.f_9, 1, 0, 5);
					}
					unk_0x5502708AECB47F5D(Local_68.f_9);
				}
				iLocal_134 = -1;
				iLocal_135 = -1;
				iLocal_109 = 0;
				iLocal_82 = 0;
				iLocal_81 = 0;
				sLocal_148 = "BB3_J8";
				iLocal_123 = unk_0x105601648511CC64();
				func_353(&(Local_68.f_8), "", "", &iLocal_126, iLocal_127, 0);
				iLocal_60 = 1;
				break;
			
			case 1:
				if (!iLocal_109)
				{
					func_353(&(Local_68.f_8), "", "", &iLocal_126, iLocal_127, 0);
					func_324(&uLocal_44, Local_68.f_9, 0, 0, 1, 1, 1);
					if (Local_68.f_A == 22 || Local_68.f_A == 23)
					{
						if (iLocal_135 == -1)
						{
							iLocal_135 = unk_0x105601648511CC64();
						}
						if (iLocal_134 == -1)
						{
							iLocal_134 = unk_0x105601648511CC64();
						}
						else if (func_116(iLocal_134, 8000))
						{
							bVar0 = true;
						}
						if (func_321(Local_68.f_9, vLocal_332, bVar0, 0, 1, iLocal_137))
						{
							if ((func_116(iLocal_135, 5000) || func_99(vLocal_340, 0f, 0f, 0f, 0)) || (!func_57(vVar1, vLocal_340, 8.5f) && !func_57(vVar1, vLocal_339, 8.5f)))
							{
								func_320();
								Local_68.f_11 = unk_0x105601648511CC64();
								func_318(&uLocal_44, 0, 0);
								iLocal_109 = 1;
							}
						}
						else
						{
							if (!iLocal_81)
							{
								if (!func_116(iLocal_123, 2500))
								{
									if (!func_60())
									{
										if (func_108(Local_68.f_9, vLocal_332, 30f))
										{
											if (func_73(&uLocal_157, cLocal_150, "BB3_J7", 4, 0, 0, 0))
											{
												iLocal_123 = unk_0x105601648511CC64();
												iLocal_81 = 1;
											}
										}
									}
								}
								else
								{
									iLocal_81 = 1;
								}
							}
							else if (!func_60())
							{
								if (func_116(iLocal_123, unk_0x491B2241281A03B7(5000, 12000)))
								{
									if (func_108(Local_68.f_9, vLocal_332, 30f))
									{
										if (unk_0x889DA6CE8E4DB344(Local_68.f_9))
										{
											if (unk_0x491B2241281A03B7(0, 101) < 30)
											{
												if (func_73(&uLocal_157, cLocal_151, "BBC_T13", 4, 0, 0, 0))
												{
													iLocal_123 = unk_0x105601648511CC64();
												}
											}
											else if (func_73(&uLocal_157, cLocal_150, "BB3_FLEE", 4, 0, 0, 0))
											{
												iLocal_123 = unk_0x105601648511CC64();
											}
										}
									}
								}
							}
							else
							{
								iLocal_123 = unk_0x105601648511CC64();
							}
							func_317(Local_68.f_9, vLocal_332, iLocal_135, 925353388);
						}
					}
					else
					{
						func_320();
						Local_68.f_11 = unk_0x105601648511CC64();
						func_318(&uLocal_44, 0, 0);
						iLocal_109 = 1;
					}
				}
				else
				{
					func_320();
					if (!func_108(Local_68.f_9, vLocal_332, 10f))
					{
						if (!iLocal_98)
						{
							if (!func_315(sLocal_148, 1))
							{
								func_313(&(Local_68.f_8), "BBS_APPSUS", "BBS_APPSUS2", &iLocal_126, &iLocal_127, 1, 1);
								iLocal_98 = 1;
							}
						}
						else
						{
							func_353(&(Local_68.f_8), "BBS_APPSUS", "BBS_APPSUS2", &iLocal_126, iLocal_127, 1);
						}
					}
					else
					{
						if (!iLocal_82)
						{
							if (!unk_0x2CDE18D6C89522AD(Local_68.f_9) && !unk_0x5237AF95232D78C5(Local_68.f_9, 0))
							{
								if (func_312("BBS_APPSUS", 0, 0) || func_312("BBS_APPSUS2", 0, 0))
								{
									unk_0xEB233A3B7635D2AC();
								}
								if (!func_60())
								{
									func_5();
								}
								if (func_73(&uLocal_157, cLocal_150, sLocal_148, 4, 0, 0, 0))
								{
									iLocal_82 = 1;
								}
							}
						}
						else if (!func_60())
						{
							iLocal_60 = 2;
						}
						func_353(&(Local_68.f_8), "", "", &iLocal_126, iLocal_127, 0);
					}
					if (func_310(&(Local_68.f_9)))
					{
						iLocal_114 = 1;
						iLocal_60 = 0;
					}
				}
				break;
			
			case 2:
				if (func_312("BBS_APPSUS", 0, 0) || func_312("BBS_APPSUS2", 0, 0))
				{
					unk_0xEB233A3B7635D2AC();
				}
				unk_0xAF0732277B825027(0);
				iLocal_82 = 1;
				func_320();
				unk_0xF5547CCC3D125DD6(5, 1862763509, iLocal_322);
				unk_0xF5547CCC3D125DD6(5, iLocal_322, 1862763509);
				func_113(&(Local_68.f_8));
				iLocal_82 = 1;
				Local_68.f_11 = unk_0x105601648511CC64();
				func_318(&uLocal_44, 0, 0);
				iLocal_110 = 0;
				iLocal_114 = 0;
				iLocal_83 = 1;
				func_126(3);
				break;
			}
	}
}

int func_310(var uParam0)//Position - 0x27310
{
	vector3 vVar0;
	
	if (func_21(*uParam0))
	{
		vVar0 = { unk_0x541C2AEF053615BC(*uParam0, 0) };
		if (!func_311(uParam0))
		{
			if (unk_0x876474582C5DECDE(vVar0 - Vector(7f, 7f, 7f), vVar0 + Vector(7f, 7f, 7f), 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_311(var uParam0)//Position - 0x27355
{
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		if (unk_0x5237AF95232D78C5(*uParam0, 0))
		{
			if (unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0) == unk_0x9FE9D386222EEE47(*uParam0, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_312(char* sParam0, int iParam1, char* sParam2)//Position - 0x2738D
{
	unk_0xE2CFC41F8121CE68(sParam0);
	if (iParam1 == 1)
	{
		unk_0xC9C304D0AABE1335(sParam2);
	}
	return unk_0x121EFFA2D57472F2();
}

void func_313(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6)//Position - 0x273AB
{
	if (unk_0x2DA8CA50A72528FB(*uParam0))
	{
		if (bParam5)
		{
			unk_0x0D5352939CC40C16(*uParam0, 1);
			unk_0x436D0272182E484D(*uParam0, "BLIP_ENEMY");
			if (iParam6 && !func_60())
			{
				if (!unk_0x4B8E3E5901E59EB8() || func_312(sParam2, 0, 0))
				{
					func_314(sParam1, 7500, 0);
				}
			}
		}
		else
		{
			unk_0x0D5352939CC40C16(*uParam0, 3);
			unk_0x436D0272182E484D(*uParam0, "BLIP_FRIEND");
			if (iParam6 && !func_60())
			{
				if (!unk_0x4B8E3E5901E59EB8() || func_312(sParam1, 0, 0))
				{
					func_314(sParam2, 7500, 0);
				}
			}
		}
		*iParam3 = unk_0x105601648511CC64();
		*iParam4 = unk_0x105601648511CC64();
	}
}

void func_314(char* sParam0, int iParam1, int iParam2)//Position - 0x27457
{
	iParam2 = iParam2;
	unk_0x3714DE83381EADC2(sParam0);
	unk_0x41D8F63F629E76BE(iParam1, 1);
}

int func_315(char* sParam0, bool bParam1)//Position - 0x27470
{
	struct<6> Var0;
	
	if (func_60())
	{
		Var0 = { func_316() };
		if (unk_0x3362CDE8460ED38B(&Var0, sParam0))
		{
			return 1;
		}
		if (bParam1)
		{
			if (unk_0x3362CDE8460ED38B(&Var0, "NULL"))
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<6> func_316()//Position - 0x274AB
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_3DB8 == 4)
	{
		return Global_3C3B;
	}
	return Var0;
}

void func_317(int iParam0, vector3 vParam1, int iParam2, float fParam3)//Position - 0x274CF
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	
	fVar1 = 64f;
	fVar2 = 625f;
	fVar3 = 16000f;
	fVar4 = SYSTEM::VDIST2(unk_0x541C2AEF053615BC(iParam0, 1), vParam1);
	iVar5 = (unk_0x105601648511CC64() - iParam2);
	fParam3 = (fParam3 * IntToFloat(iVar5));
	if (fVar4 > fVar3 && unk_0x41A5D6415E2CC10E(iParam0))
	{
		fVar0 = 1f;
	}
	else if (fVar4 > fVar2)
	{
		if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			fVar0 = 1.7f;
			fVar0 = (fVar0 - fParam3);
			if (fVar0 < 1.5f)
			{
				fVar0 = 1.5f;
			}
		}
		else
		{
			fVar0 = 2f;
		}
	}
	else if (fVar4 < fVar1)
	{
		fVar0 = 2.4f;
		fVar0 = (fVar0 - fParam3);
		if (fVar0 < 1.5f)
		{
			fVar0 = 1.5f;
		}
	}
	else
	{
		fVar0 = 2f;
		fVar0 = (fVar0 - fParam3);
		if (fVar0 < 1.5f)
		{
			fVar0 = 1.5f;
		}
	}
	unk_0xDBA0F5674ACCE43C(iParam0, fVar0);
}

void func_318(var uParam0, int iParam1, int iParam2)//Position - 0x275B4
{
	char* sVar0;
	
	if (unk_0x7AF0088ABFA713B6())
	{
		if (unk_0xFA30DFD0084E92FE(Global_267214.f_11E0, 26))
		{
			return;
		}
	}
	if (unk_0xBFFAD293E2DA992B())
	{
		unk_0xF04F2EB4128A4367(iParam2);
		unk_0x1A058EB0D1ACEC78("FocusIn");
		unk_0xC1300D0F3A74E20B("HINT_CAM_SCENE");
		if (uParam0->f_B)
		{
			unk_0x9216004FAC08D1DC("FocusOut", 0, 0);
			unk_0xC4BA30B532FE260F(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_B = 0;
		}
	}
	unk_0x4AED68BFACFB14CB(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0xEAEFBBEC1AEA464B(sVar0))
	{
		if (!unk_0x7AF0088ABFA713B6())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0xEAEFBBEC1AEA464B(uParam0->f_3))
	{
		if (func_319(uParam0->f_3))
		{
			unk_0x7456702622C62EA0(1);
		}
	}
	if (!unk_0xEAEFBBEC1AEA464B(sVar0))
	{
		if (func_319(sVar0))
		{
			unk_0x7456702622C62EA0(1);
		}
	}
}

int func_319(char* sParam0)//Position - 0x27691
{
	unk_0xF07D20149ECBC61E(sParam0);
	return unk_0xA66DBDA0A072514A(0);
}

void func_320()//Position - 0x276A4
{
	if (func_21(Local_68.f_9))
	{
		if (((Local_68.f_A != 32 && Local_68.f_A != 33) && Local_68.f_A != 30) && Local_68.f_A != 31)
		{
			unk_0xF5547CCC3D125DD6(5, 1862763509, iLocal_322);
			unk_0xF5547CCC3D125DD6(5, iLocal_322, 1862763509);
			if (unk_0xD45C08B05D4687A7(Local_68.f_9))
			{
				unk_0x57EB4CC8F1928A47(Local_68.f_9);
			}
			unk_0xD999D66C5AFA4BE3(Local_68.f_9);
			unk_0xA4E856A8CD53B8DF(Local_68.f_9);
			unk_0xBFDB9A018C6CE15A(Local_68.f_9);
			unk_0xEC9E10B23689A01D(Local_68.f_9, 1);
			unk_0x8E25082A46F87892(Local_68.f_9, joaat("weapon_unarmed"), true);
			unk_0xB499FECE23EEF9E4(Local_68.f_9, false);
			unk_0x6BBC364B0AA788E8(Local_68.f_9, 0);
			unk_0xABA7AE40608505F2(Local_68.f_9, 1, false);
			unk_0x91629AC1E1F78419(Local_68.f_9, 17, 1);
			unk_0x91629AC1E1F78419(Local_68.f_9, 0, 0);
			unk_0x91629AC1E1F78419(Local_68.f_9, 5, 0);
			if (unk_0x5237AF95232D78C5(Local_68.f_9, 1))
			{
				unk_0xA3981DED4FC2E56E(Local_68.f_9, 0, 0);
			}
			iLocal_142 = unk_0x105601648511CC64();
			Local_68.f_A = 32;
		}
	}
}

int func_321(int iParam0, vector3 vParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x2779F
{
	int iVar0;
	
	if (func_21(iParam0))
	{
		if (unk_0xD9C1758D86688CEA(iParam0, unk_0xBC25C936A095B5BA(), 1))
		{
			if (unk_0xD2B7EC731CF3F2D6(iParam0, 0, 2))
			{
				if (!unk_0xD2B7EC731CF3F2D6(iParam0, joaat("weapon_stungun"), 0))
				{
					unk_0x6CB22C1DB4505011(iParam0);
					if (unk_0x4DA34DFBFD6B69A0(iParam0, &iVar0))
					{
						unk_0x2F3F6BFD98FB98D5(iParam0);
						switch (iVar0)
						{
							case 11816:
							case 23553:
							case 24816:
							case 24817:
							case 24818:
							case 39317:
							case 58271:
							case 63931:
							case 51826:
							case 36864:
								unk_0x2F3F6BFD98FB98D5(iParam0);
								unk_0x6CB22C1DB4505011(iParam0);
								unk_0x5502708AECB47F5D(iParam0);
								return 1;
								break;
							}
						}
					}
			}
			unk_0x2F3F6BFD98FB98D5(iParam0);
			unk_0x6CB22C1DB4505011(iParam0);
			unk_0x5502708AECB47F5D(iParam0);
			if (unk_0x8D66276473ABD7CC(iParam0) < iParam5)
			{
				return 1;
			}
			if (unk_0x2CDE18D6C89522AD(iParam0))
			{
				return 1;
			}
			if (func_323(iParam0, vParam1))
			{
				return 1;
			}
		}
		unk_0x5502708AECB47F5D(iParam0);
		if (bParam3)
		{
			if (func_322(iParam0, vParam1, 1112014848, 1084227584))
			{
				return 1;
			}
		}
		if (bParam4)
		{
			if (unk_0x687BD6F7DF82B377(iParam0, 0))
			{
				return 1;
			}
		}
		if (bParam2)
		{
			if (func_108(iParam0, vParam1, 5f))
			{
				if (unk_0x2CDE18D6C89522AD(iParam0))
				{
					return 1;
				}
				if (func_108(iParam0, vParam1, 1f))
				{
					return 1;
				}
			}
			if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
			{
				if (unk_0xE921F8171F0733B3(iParam0, unk_0xBC25C936A095B5BA()))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_322(int iParam0, vector3 vParam1, float fParam2, float fParam3)//Position - 0x27915
{
	if (func_108(iParam0, vParam1, fParam2))
	{
		if (unk_0x32E373675659FDB0(unk_0xBC25C936A095B5BA()))
		{
			if (unk_0x04880508C862E589(unk_0x541C2AEF053615BC(iParam0, 1), fParam3, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_323(int iParam0, vector3 vParam1)//Position - 0x2794D
{
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		if (unk_0x5BA05886E7FFF5CA(unk_0xB5CEFD608600A09F()) >= 0 && unk_0x5BA05886E7FFF5CA(unk_0xB5CEFD608600A09F()) < 500)
		{
			if (func_108(iParam0, vParam1, 3.5f) || unk_0xE921F8171F0733B3(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_324(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x279AB
{
	func_325(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_325(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)//Position - 0x279C5
{
	func_326(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

void func_326(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)//Position - 0x279E2
{
	if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
	{
		func_318(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_327(uParam0, iParam1, vParam2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_327(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)//Position - 0x27A1A
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0xBFFAD293E2DA992B())
	{
		if (unk_0x105601648511CC64() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam3;
	if (unk_0xEAEFBBEC1AEA464B(iVar0))
	{
		if (!unk_0x7AF0088ABFA713B6())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_319(iVar0))
	{
		func_352();
	}
	if (func_351(iParam1) && unk_0x8F6EAC9E7D6812D5(iParam1))
	{
		iVar1 = 0;
		if (unk_0x386592AF38881675(iParam1))
		{
			unk_0x96EBAB29D0970E51(unk_0x399F7937FFE4DEBF(iParam1));
			unk_0x4264E957F21998DD(unk_0x399F7937FFE4DEBF(iParam1), 1);
			if (unk_0x6585240928240B98(unk_0x399F7937FFE4DEBF(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0xD27AC0E9B78CFDD7(iParam1))
		{
			unk_0xB845C705AB8047B2(unk_0x233ED4CD1F1A42C1(iParam1));
			if (unk_0xBF080988CF2E6210(unk_0x233ED4CD1F1A42C1(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0xB12D030810E8447D(iParam1))
		{
			unk_0xF0020781B6E3E577(unk_0x0EC4BFD5C83D125E(iParam1));
			if (unk_0x14D76A832488D2FF(unk_0x0EC4BFD5C83D125E(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0xBFFAD293E2DA992B())
		{
			if (func_346(uParam0, bParam5, bParam7, 0))
			{
				func_343(uParam0, iParam1, vParam2, iParam4);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_332(iVar0))
				{
					if ((unk_0xEAEFBBEC1AEA464B(uParam0->f_3) && !unk_0xEAEFBBEC1AEA464B(iVar0)) && unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
					{
						if ((iVar1 && !unk_0xF16DAFF595E80F7C()) && uParam6)
						{
							if (!func_319(iVar0))
							{
								func_331(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x3362CDE8460ED38B("CMN_HINT", iVar0))
								{
									func_330(1);
								}
							}
						}
					}
				}
			}
			else if (func_332(iVar0))
			{
				if (unk_0xEAEFBBEC1AEA464B(uParam0->f_3) && !unk_0xEAEFBBEC1AEA464B(iVar0))
				{
					if (((unk_0xD1DC4B08247A4317(iParam1) && iVar1) && !unk_0xF16DAFF595E80F7C()) && uParam6)
					{
						if (!func_319(iVar0))
						{
							func_331(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x3362CDE8460ED38B("CMN_HINT", iVar0))
							{
								func_330(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0xEAEFBBEC1AEA464B(sParam3))
			{
				if (func_319(sParam3))
				{
					unk_0x7456702622C62EA0(1);
				}
			}
			if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
			{
				if (unk_0x11030C52A0DDFF8C(unk_0xBC25C936A095B5BA()))
				{
					if (unk_0x3D875C2512206692(3) == 3 || unk_0x3D875C2512206692(3) == 4)
					{
						func_318(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xE3CA72BD77D43B09(unk_0xBC25C936A095B5BA()))
				{
					if (unk_0x3D875C2512206692(6) == 3 || unk_0x3D875C2512206692(6) == 4)
					{
						func_318(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x57379381A330B2FF(unk_0xBC25C936A095B5BA()))
				{
					if (unk_0x3D875C2512206692(4) == 3 || unk_0x3D875C2512206692(4) == 4)
					{
						func_318(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xD3A0CD3AD9C3D22A(unk_0xBC25C936A095B5BA()))
				{
					if (unk_0x3D875C2512206692(5) == 3 || unk_0x3D875C2512206692(5) == 4)
					{
						func_318(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x5CFC8E6CC224744A(unk_0xBC25C936A095B5BA()))
				{
					if (unk_0x3D875C2512206692(2) == 3 || unk_0x3D875C2512206692(2) == 4)
					{
						func_318(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x621126C4FACA4770() == 3 || unk_0x621126C4FACA4770() == 4)
				{
					func_318(uParam0, iVar0, 1);
				}
			}
			if (!func_346(uParam0, bParam5, bParam7, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_329(uParam0))
				{
					func_328(uParam0);
				}
			}
		}
	}
	else
	{
		func_318(uParam0, iVar0, 0);
	}
}

void func_328(var uParam0)//Position - 0x27D87
{
	if (func_351(unk_0xBC25C936A095B5BA()))
	{
		unk_0x44C98C11ED6DD327(unk_0xBC25C936A095B5BA());
	}
	if (unk_0xBFFAD293E2DA992B())
	{
		unk_0x4AED68BFACFB14CB(1);
		unk_0xF04F2EB4128A4367(0);
		unk_0xC1300D0F3A74E20B("HINT_CAM_SCENE");
		unk_0x1A058EB0D1ACEC78("FocusIn");
		if (uParam0->f_B)
		{
			unk_0x9216004FAC08D1DC("FocusOut", 0, 0);
			unk_0xC4BA30B532FE260F(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_B = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_329(var uParam0)//Position - 0x27DF0
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_A / 2);
		if (uParam0->f_2 + iVar0) > unk_0x105601648511CC64()
		{
			return 1;
		}
	}
	return 0;
}

int func_330(bool bParam0)//Position - 0x27E1B
{
	switch (Global_8C41)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_19B04.f_2724.f_64++;
			}
			return Global_19B04.f_2724.f_64;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_19B04.f_2724.f_65++;
			}
			return Global_19B04.f_2724.f_65;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_19B04.f_2724.f_66++;
			}
			return Global_19B04.f_2724.f_66;
			break;
		
		default:
			break;
	}
	return 3;
}

void func_331(char* sParam0, int iParam1)//Position - 0x27EC5
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 0, true, iParam1);
}

int func_332(char* sParam0)//Position - 0x27EDC
{
	if (!func_333(1, 1, 0))
	{
		if ((!unk_0xF1734B55490E9045(sParam0) && func_319(sParam0)) || func_319("CMN_HINT"))
		{
			unk_0x7456702622C62EA0(1);
		}
		return 0;
	}
	switch (Global_8C41)
	{
		case 0:
		case 3:
			if (func_330(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_330(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_330(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_333(bool bParam0, bool bParam1, bool bParam2)//Position - 0x27F75
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		if (!unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0x7930B3E9C919E90F())
	{
		return 0;
	}
	if (func_16(0))
	{
		return 0;
	}
	if (func_342())
	{
		return 0;
	}
	if (unk_0xF32BA80A2DED1FC6())
	{
		return 0;
	}
	if (Global_10AB8)
	{
		return 0;
	}
	if (unk_0xB731B8C5BCE89836(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_CF9C)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
		{
			if (unk_0x11030C52A0DDFF8C(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x3D875C2512206692(3) == 3 || unk_0x3D875C2512206692(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xE3CA72BD77D43B09(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x3D875C2512206692(6) == 3 || unk_0x3D875C2512206692(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x57379381A330B2FF(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x3D875C2512206692(4) == 3 || unk_0x3D875C2512206692(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xD3A0CD3AD9C3D22A(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x3D875C2512206692(5) == 3 || unk_0x3D875C2512206692(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x5CFC8E6CC224744A(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x3D875C2512206692(2) == 3 || unk_0x3D875C2512206692(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x621126C4FACA4770() == 3 || unk_0x621126C4FACA4770() == 4)
			{
				return 0;
			}
			if (unk_0x4FD86C3E23A67AB9())
			{
				return 0;
			}
		}
	}
	if ((func_341() || func_340(Global_440000.f_243FE)) || func_339())
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
			iVar1 = func_338(unk_0xBC25C936A095B5BA(), 0);
			if (((unk_0xE8E192A5EFE0253F(iVar0, iVar1) || (unk_0x6F79ECA8C83E4357(iVar0) == 562680400 && iVar1 != -1)) || (unk_0x6F79ECA8C83E4357(iVar0) == 1181327175 && iVar1 != -1)) || (((unk_0x6F79ECA8C83E4357(iVar0) == -1693015116 && iVar1 == 0) && func_337(iVar0, 10)) && unk_0x3EB14CBD49DA0017(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (func_334(unk_0xB5CEFD608600A09F()))
	{
		return 0;
	}
	return 1;
}

int func_334(int iParam0)//Position - 0x281C7
{
	if (iParam0 != func_336())
	{
		if (func_335(iParam0, 1, 1))
		{
			return Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1;
		}
		else if ((Global_140856 && iParam0 == unk_0xB5CEFD608600A09F()) && func_335(iParam0, 1, 0))
		{
			return Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1;
		}
	}
	return 0;
}

int func_335(int iParam0, bool bParam1, bool bParam2)//Position - 0x2822D
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

int func_336()//Position - 0x28277
{
	return -1;
}

int func_337(int iParam0, int iParam1)//Position - 0x28280
{
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		if (unk_0xA6BE0954FC6BAA16(iParam0) > 0)
		{
			switch (iParam1)
			{
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
					return 1;
					break;
				
				default:
					if (unk_0x34374BDFA570F489(iParam0, iParam1) > 0)
					{
						return 1;
					}
					break;
				}
			}
	}
	return 0;
}

int func_338(int iParam0, int iParam1)//Position - 0x282E2
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

var func_339()//Position - 0x28367
{
	return Global_255A46.f_10;
}

bool func_340(int iParam0)//Position - 0x28375
{
	return iParam0 == 51;
}

var func_341()//Position - 0x28382
{
	return Global_255A46.f_F;
}

bool func_342()//Position - 0x28390
{
	return unk_0x105601648511CC64() <= Global_43C1.f_1671 + 100;
}

void func_343(var uParam0, int iParam1, vector3 vParam2, int iParam3)//Position - 0x283A5
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1417C1 == 1)
	{
		return;
	}
	if (unk_0x1D403DFADBC2DE3C(iParam1, 0))
	{
		func_318(uParam0, 0, 0);
	}
	if (func_99(vParam2, 0f, 0f, 0f, 0))
	{
		if (unk_0x386592AF38881675(iParam1))
		{
			iVar0 = unk_0x399F7937FFE4DEBF(iParam1);
			if (!unk_0x5237AF95232D78C5(iVar0, 0))
			{
				if (unk_0x15DBD981998D4FE1(iVar0))
				{
					if (!func_344())
					{
						vParam2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0xB6FD7D587FE0A1B4(iVar0))
				{
					vParam2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0x4AED68BFACFB14CB(0);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_A;
	if (iParam3 == 1726668277)
	{
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
		if (iVar2 < 1500)
		{
			iVar2 = 1500;
		}
	}
	unk_0x1DE00CFB4CAEB978(iParam1, vParam2, 1, -1, iVar1, iVar2, iParam3);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0x56F2E1B5599188FA(unk_0xBC25C936A095B5BA(), iParam1, -1, iVar3, iVar4);
	unk_0x9216004FAC08D1DC("FocusIn", 0, 0);
	unk_0xD6423910AAD8A379("HINT_CAM_SCENE");
	unk_0xC4BA30B532FE260F(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_B = 1;
	uParam0->f_8 = unk_0x105601648511CC64();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_344()//Position - 0x284B5
{
	return func_345(unk_0xB5CEFD608600A09F());
}

int func_345(int iParam0)//Position - 0x284C5
{
	if (unk_0x6F79ECA8C83E4357(unk_0xA95CF30C72EB526E(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_346(var uParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x284E4
{
	if (uParam0->f_1)
	{
		if (unk_0x105601648511CC64() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
				{
					if (func_350(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x105601648511CC64();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_349(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x105601648511CC64();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_349(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x105601648511CC64();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_350(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x105601648511CC64();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_329(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0x105601648511CC64() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
					{
						if (!func_350(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x105601648511CC64();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_349(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x105601648511CC64();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_349(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x105601648511CC64();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_350(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x105601648511CC64();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
				{
					if (!func_350(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_349(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_349(bParam1, bParam2, bParam3) || unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1) || unk_0x74BCB6EDB1FFBFBA(unk_0xBC25C936A095B5BA(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_350(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x105601648511CC64() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
					{
						if (func_348(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_347(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1) || func_347(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1) || unk_0x74BCB6EDB1FFBFBA(unk_0xBC25C936A095B5BA(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_348(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_329(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_333(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_352();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_347(bool bParam0, bool bParam1, bool bParam2)//Position - 0x28850
{
	if (!func_333(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		if (!unk_0xE1C3A331B6951C3D(unk_0xB5CEFD608600A09F()))
		{
			unk_0xBBC4195AD74D153D(0, 140, 1);
			unk_0xBBC4195AD74D153D(0, 80, 1);
			if (unk_0xCB3E71B7B7FACCAF(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_348(bool bParam0, bool bParam1, bool bParam2)//Position - 0x288A2
{
	if (!func_333(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0xBBC4195AD74D153D(0, 80, 1);
		if (unk_0xE92D56CE0416C875())
		{
			if (unk_0xCB3E71B7B7FACCAF(0, 80))
			{
				unk_0x4AED68BFACFB14CB(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_349(bool bParam0, bool bParam1, bool bParam2)//Position - 0x288EB
{
	if (!func_333(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		if (!unk_0xE1C3A331B6951C3D(unk_0xB5CEFD608600A09F()))
		{
			unk_0xBBC4195AD74D153D(0, 140, 1);
			unk_0xBBC4195AD74D153D(0, 80, 1);
			if (unk_0xD3C4A010282C31F2(0, 80) && unk_0x105601648511CC64() > Global_74)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_350(bool bParam0, bool bParam1, bool bParam2)//Position - 0x2894A
{
	if (!func_333(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0xBBC4195AD74D153D(0, 80, 1);
		if (unk_0xE92D56CE0416C875())
		{
			if (unk_0xD3C4A010282C31F2(0, 80) && unk_0x105601648511CC64() > Global_74)
			{
				unk_0x4AED68BFACFB14CB(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_351(int iParam0)//Position - 0x289A0
{
	if (unk_0x724D816EA203A79E(iParam0))
	{
		if (unk_0xD27AC0E9B78CFDD7(iParam0))
		{
			if (unk_0xE59B7F5A03335350(unk_0x233ED4CD1F1A42C1(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0x386592AF38881675(iParam0))
		{
			if (!unk_0x36CEFBE9B745A58D(unk_0x399F7937FFE4DEBF(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0xB12D030810E8447D(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_352()//Position - 0x289FB
{
	unk_0xF0059F27F7BB6680(&Global_93C, 4);
}

void func_353(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x28A0B
{
	if (unk_0x2DA8CA50A72528FB(*uParam0))
	{
		if ((unk_0x105601648511CC64() - *iParam3) > 500)
		{
			if (unk_0x05C02D6192B773AF(*uParam0) == 1)
			{
				unk_0x0D5352939CC40C16(*uParam0, 3);
				unk_0x436D0272182E484D(*uParam0, "BLIP_FRIEND");
				if ((unk_0x105601648511CC64() - iParam4) < 7500 && iParam5)
				{
					if (!unk_0x4B8E3E5901E59EB8() || func_312(sParam1, 0, 0))
					{
						func_314(sParam2, 7500, 0);
					}
				}
				*iParam3 = unk_0x105601648511CC64();
			}
			else
			{
				unk_0x0D5352939CC40C16(*uParam0, 1);
				unk_0x436D0272182E484D(*uParam0, "BLIP_ENEMY");
				if ((unk_0x105601648511CC64() - iParam4) < 7500 && iParam5)
				{
					if (!unk_0x4B8E3E5901E59EB8() || func_312(sParam2, 0, 0))
					{
						func_314(sParam1, 7500, 0);
					}
				}
				*iParam3 = unk_0x105601648511CC64();
			}
		}
	}
	if ((unk_0x105601648511CC64() - iParam4) > 7500)
	{
		if (func_312(sParam1, 0, 0))
		{
			unk_0xBB5629E7D44054AE(sParam1);
		}
		if (func_312(sParam2, 0, 0))
		{
			unk_0xBB5629E7D44054AE(sParam2);
		}
	}
}

int func_354(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x28B06
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	bVar1 = true;
	if (bVar1)
	{
		if (func_422(iParam0))
		{
			iVar0 = unk_0x511FE22BCF5353CD(iParam0);
			unk_0xF9C2945DB5BAB4BF(iVar0, bParam2);
			unk_0x12DB69036F6569F7(iVar0, iParam3);
			unk_0x3F5F1772D71D5EC4(iVar0, 0.7f);
			if (!bParam1)
			{
				unk_0x3F5F1772D71D5EC4(iVar0, 0.5f);
			}
		}
	}
	return iVar0;
}

void func_355(int iParam0)//Position - 0x28B58
{
	unk_0x4106FAF8AA1D69D5(iParam0, iLocal_322);
	unk_0xC8FD3EBBB90E8D7F(iParam0, 177, true);
	unk_0xC8FD3EBBB90E8D7F(iParam0, 116, true);
	unk_0xC8FD3EBBB90E8D7F(iParam0, 42, true);
	unk_0xC8FD3EBBB90E8D7F(iParam0, 118, true);
	unk_0x9C74359FED150B42(iParam0, 10f, 5);
	unk_0x2E35C4FA5F0ED22F(iParam0, 1);
}

void func_356(var uParam0, vector3 vParam1)//Position - 0x28BA0
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { vParam1 - Vector(7f, 7f, 7f) };
	vVar1 = { vParam1 + Vector(7f, 7f, 7f) };
	if (unk_0x876474582C5DECDE(vVar0, vVar1, 0))
	{
		if (unk_0x91F0E599AED96A5E(vVar0, vVar1, joaat("weapon_grenade"), uParam0, 0))
		{
		}
		else if (unk_0x91F0E599AED96A5E(vVar0, vVar1, joaat("weapon_molotov"), uParam0, 0))
		{
		}
		else if (unk_0x91F0E599AED96A5E(vVar0, vVar1, joaat("weapon_smokegrenade"), uParam0, 0))
		{
		}
		else if (unk_0x91F0E599AED96A5E(vVar0, vVar1, joaat("weapon_bzgas"), uParam0, 0))
		{
		}
		else if (unk_0x91F0E599AED96A5E(vVar0, vVar1, joaat("weapon_stickybomb"), uParam0, 0))
		{
		}
		else if (unk_0x91F0E599AED96A5E(vVar0, vVar1, joaat("weapon_flare"), uParam0, 0))
		{
		}
		else
		{
			*uParam0 = { 0f, 0f, 0f };
		}
	}
	else
	{
		*uParam0 = { 0f, 0f, 0f };
	}
}

void func_357()//Position - 0x28C7D
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	vector3 vVar4;
	float fVar5;
	float fVar6;
	
	if (func_21(Local_68.f_9))
	{
		if (iLocal_70 == 0)
		{
			func_368(&(Local_68.f_9), &bLocal_115);
			if (func_367())
			{
				if (iLocal_109 || iLocal_58 == 7)
				{
					if (bLocal_115)
					{
						unk_0x43B967881C60631D(Local_68.f_9, func_366(), 1048576000);
						iLocal_70 = 2;
					}
					else
					{
						unk_0x43B967881C60631D(Local_68.f_9, func_365(), 1048576000);
						iLocal_70 = 1;
					}
				}
			}
		}
		else if (iLocal_70 == 1)
		{
			func_368(&(Local_68.f_9), &bLocal_115);
			if (bLocal_115)
			{
				if (func_367())
				{
					unk_0x43B967881C60631D(Local_68.f_9, func_366(), 1048576000);
					iLocal_70 = 2;
				}
			}
		}
		if (!unk_0xADA34C38F1319208(unk_0xBC25C936A095B5BA()))
		{
			switch (Local_68.f_A)
			{
				case 0:
					if (func_108(Local_68.f_9, vLocal_332, 20f))
					{
						if (!unk_0x640A454FD54BBEF2(Local_68.f_9, unk_0xBC25C936A095B5BA()))
						{
							unk_0x56F2E1B5599188FA(Local_68.f_9, unk_0xBC25C936A095B5BA(), -1, 0, 2);
						}
					}
					else if (unk_0x640A454FD54BBEF2(Local_68.f_9, unk_0xBC25C936A095B5BA()))
					{
						unk_0x44C98C11ED6DD327(Local_68.f_9);
					}
					break;
				
				case 1:
					break;
				
				case 2:
					break;
				
				case 3:
					if (func_116(Local_68.f_12, unk_0x491B2241281A03B7(250, 500)))
					{
						if (unk_0xD8BE87198802B1F7(Local_68.f_9))
						{
							unk_0x3D669AF9A68FF281(Local_68.f_9);
						}
						unk_0x56F2E1B5599188FA(Local_68.f_9, unk_0xBC25C936A095B5BA(), -1, 0, 2);
						unk_0x85DB484A637CEAB9(Local_68.f_9, unk_0xBC25C936A095B5BA(), -1);
						Local_68.f_A = 4;
					}
					break;
				
				case 4:
					if (!func_62(Local_68.f_9, -875674219))
					{
						Local_68.f_12 = (unk_0x105601648511CC64() - 5000);
						Local_68.f_A = 3;
					}
					break;
				
				case 5:
					if (!unk_0x640A454FD54BBEF2(Local_68.f_9, unk_0xBC25C936A095B5BA()))
					{
						unk_0x56F2E1B5599188FA(Local_68.f_9, unk_0xBC25C936A095B5BA(), -1, 0, 2);
					}
					unk_0x9565F9267674873A(Local_68.f_9, unk_0xBC25C936A095B5BA(), 20000, 2.5f, 1f, 1073741824, 0);
					unk_0x2E35C4FA5F0ED22F(Local_68.f_9, 1);
					Local_68.f_A = 6;
					break;
				
				case 6:
					if (!func_108(Local_68.f_9, vLocal_332, 3.5f))
					{
						if (!func_62(Local_68.f_9, 1227113341))
						{
							Local_68.f_A = 5;
						}
						else
						{
							unk_0x2AB5DAAC0FEF1B4F(Local_68.f_9, 1.1f);
						}
					}
					else if (!func_62(Local_68.f_9, -875674219))
					{
						unk_0x85DB484A637CEAB9(Local_68.f_9, unk_0xBC25C936A095B5BA(), -1);
					}
					break;
				
				case 7:
					if (func_116(Local_68.f_12, unk_0x491B2241281A03B7(250, 1000)))
					{
						if (unk_0xD8BE87198802B1F7(Local_68.f_9))
						{
							unk_0x3D669AF9A68FF281(Local_68.f_9);
						}
						unk_0x80F51E5792576467(Local_68.f_9, 0);
						unk_0x91629AC1E1F78419(Local_68.f_9, 5, 1);
						unk_0x91629AC1E1F78419(Local_68.f_9, 0, 0);
						unk_0xB8CBD998685C0685(Local_68.f_9, unk_0xBC25C936A095B5BA(), 0, 16);
						unk_0x2E35C4FA5F0ED22F(Local_68.f_9, 1);
						Local_68.f_A = 8;
					}
					break;
				
				case 8:
					if (!func_62(Local_68.f_9, 780511057))
					{
						Local_68.f_12 = (unk_0x105601648511CC64() - 5000);
						Local_68.f_A = 7;
					}
					break;
				
				case 9:
					unk_0x91629AC1E1F78419(Local_68.f_9, 5, 0);
					unk_0xF1FC2182A76AD7FC(Local_68.f_9, 1);
					if (!unk_0x2CDE18D6C89522AD(Local_68.f_9))
					{
						unk_0x50FBC3BBBAC48D06(Local_68.f_9, 1000, 1000, 0, 1, 1, 0);
					}
					Local_68.f_A = 10;
					break;
				
				case 10:
					if (!unk_0x2CDE18D6C89522AD(Local_68.f_9))
					{
						if (!func_62(Local_68.f_9, 474215631) && !func_62(Local_68.f_9, -1519143300))
						{
							if (!unk_0x149E9368A11035DE(Local_68.f_9))
							{
								unk_0xDD8AD9DE28030E73(Local_68.f_9, "CODE_HUMAN_STAND_COWER");
								unk_0xEE7131C3C73E7282(Local_68.f_9, -1);
								unk_0x2E35C4FA5F0ED22F(Local_68.f_9, 1);
							}
						}
					}
					break;
				
				case 38:
					unk_0x9CDD10270A1ACF6F(Local_68.f_9, &iVar0, 1);
					if (iVar0 == joaat("weapon_unarmed"))
					{
						unk_0x7A535CE1F001F3FE(Local_68.f_9, joaat("weapon_pistol"), -1, false, true);
					}
					unk_0x91629AC1E1F78419(Local_68.f_9, 0, 0);
					unk_0x80F51E5792576467(Local_68.f_9, 0);
					unk_0xFC3C88E2313FA926(Local_68.f_9, 15);
					unk_0xA4E856A8CD53B8DF(Local_68.f_9);
					unk_0x2E35C4FA5F0ED22F(Local_68.f_9, 1);
					Local_68.f_A = 39;
					break;
				
				case 39:
					if (!func_62(Local_68.f_9, 242628503))
					{
						fVar3 = unk_0x55AEFCD285ECC0F2(5f, 8f);
						unk_0xC5A6DFE2B8987B17(&uLocal_145);
						unk_0xD008964AF03AE263(0, unk_0xBC25C936A095B5BA(), fVar3, 30f);
						unk_0x57D65255D3D3B6A7(0, unk_0xBC25C936A095B5BA(), 2000, 0);
						unk_0x535008C596714F9E(uLocal_145);
						unk_0xA8E6405305C0D7DF(Local_68.f_9, uLocal_145);
						unk_0x02DAF06EA4F08219(&uLocal_145);
						unk_0x2E35C4FA5F0ED22F(Local_68.f_9, 1);
					}
					break;
				
				case 40:
					if (func_116(Local_68.f_12, unk_0x491B2241281A03B7(250, 750)))
					{
						unk_0x91629AC1E1F78419(Local_68.f_9, 0, 1);
						unk_0x80F51E5792576467(Local_68.f_9, 0);
						unk_0xFC3C88E2313FA926(Local_68.f_9, unk_0x491B2241281A03B7(10, 22));
						unk_0x479A4C6E23FBB038(Local_68.f_9, unk_0x491B2241281A03B7(30, 60));
						unk_0xF2BA021070DE727E(Local_68.f_9, 2055493265);
						unk_0x9CDD10270A1ACF6F(Local_68.f_9, &iVar0, 1);
						if (iVar0 == joaat("weapon_unarmed"))
						{
							unk_0x7A535CE1F001F3FE(Local_68.f_9, joaat("weapon_pistol"), -1, false, true);
							unk_0x8E25082A46F87892(Local_68.f_9, joaat("weapon_pistol"), false);
						}
						unk_0xB8CBD998685C0685(Local_68.f_9, unk_0xBC25C936A095B5BA(), 0, 16);
						unk_0x2E35C4FA5F0ED22F(Local_68.f_9, 1);
						Local_68.f_A = 41;
					}
					break;
				
				case 41:
					if (!func_62(Local_68.f_9, 780511057))
					{
						Local_68.f_12 = (unk_0x105601648511CC64() - 5000);
						Local_68.f_A = 40;
					}
					break;
				
				case 13:
					if ((!unk_0x16E28377989A37E9(Local_68.f_9) && !unk_0x2CDE18D6C89522AD(Local_68.f_9)) && !unk_0x687BD6F7DF82B377(Local_68.f_9, 0))
					{
						if (func_116(Local_68.f_12, unk_0x491B2241281A03B7(250, 500)))
						{
							unk_0x2E9860A2B72187F5(Local_68.f_9, 222, 1);
							unk_0xC5A6DFE2B8987B17(&uLocal_145);
							if (!func_108(Local_68.f_9, Local_68.f_D, 0.5f))
							{
								unk_0x346129B364057FF6(0, Local_68.f_D, 1f, 20000, 0.25f, 512, 1193033728);
							}
							unk_0xC0FDCDB0DF739C50(0, 190f, 0);
							unk_0xE896C0AD02364F2A(0, "oddjobs@bailbond_mountain", "base_jump_idle", 4f, -8f, -1, 1, 0, 0, 0, 0);
							unk_0x535008C596714F9E(uLocal_145);
							unk_0xA8E6405305C0D7DF(Local_68.f_9, uLocal_145);
							unk_0x02DAF06EA4F08219(&uLocal_145);
							unk_0x2E35C4FA5F0ED22F(Local_68.f_9, 1);
							Local_68.f_A = 14;
						}
					}
					else
					{
						Local_68.f_A = 18;
					}
					break;
				
				case 14:
					if (!unk_0x687BD6F7DF82B377(Local_68.f_9, 0))
					{
						if (!func_62(Local_68.f_9, 242628503))
						{
							Local_68.f_A = 13;
						}
						else if (unk_0x96044E39418AAF17(Local_68.f_9, "oddjobs@bailbond_mountain", "base_jump_idle", 3))
						{
							Local_68.f_12 = unk_0x105601648511CC64();
							Local_68.f_A = 15;
						}
					}
					else
					{
						Local_68.f_A = 18;
					}
					break;
				
				case 15:
					if (unk_0x96044E39418AAF17(Local_68.f_9, "oddjobs@bailbond_mountain", "base_jump_idle", 3))
					{
						if (func_116(Local_68.f_12, unk_0x491B2241281A03B7(250, 500)))
						{
							Local_68.f_12 = (unk_0x105601648511CC64() - 5000);
							Local_68.f_A = 16;
						}
					}
					else
					{
						Local_68.f_A = 13;
					}
					break;
				
				case 16:
					unk_0xF82197F205B9D8FD(Local_68.f_9, 0);
					if ((!unk_0x16E28377989A37E9(Local_68.f_9) && !unk_0x2CDE18D6C89522AD(Local_68.f_9)) && !unk_0x687BD6F7DF82B377(Local_68.f_9, 0))
					{
						if (func_116(Local_68.f_12, unk_0x491B2241281A03B7(250, 500)))
						{
							unk_0xB71D41C0310C93DE(Local_68.f_9, 1, 1);
							unk_0xAF9FC4463EA3090B(Local_68.f_9, 800);
							unk_0x2E9860A2B72187F5(Local_68.f_9, 222, 1);
							vLocal_335 = { unk_0xF90427F311003E57(Local_68.f_9) };
							unk_0xC5A6DFE2B8987B17(&uLocal_145);
							unk_0xE896C0AD02364F2A(0, "oddjobs@bailbond_mountain", "base_jump_spot", 8f, -1.5f, -1, 8, 0, 0, 0, 0);
							unk_0x28755FFBEC01D1EC(0, 0);
							unk_0x535008C596714F9E(uLocal_145);
							unk_0xA8E6405305C0D7DF(Local_68.f_9, uLocal_145);
							unk_0x02DAF06EA4F08219(&uLocal_145);
							unk_0x2E35C4FA5F0ED22F(Local_68.f_9, 1);
							Local_68.f_A = 17;
						}
					}
					else
					{
						Local_68.f_A = 18;
					}
					break;
				
				case 17:
					if (!unk_0x687BD6F7DF82B377(Local_68.f_9, 0))
					{
						if (unk_0x96044E39418AAF17(Local_68.f_9, "oddjobs@bailbond_mountain", "base_jump_spot", 3))
						{
							unk_0x1D3127CFE7D9B190(Local_68.f_9, "oddjobs@bailbond_mountain", "base_jump_spot", 1.7f);
							if (unk_0x4A3B2CF8BADDD74E(Local_68.f_9, "oddjobs@bailbond_mountain", "base_jump_spot") > 0.413f)
							{
								vLocal_335.z = 0f;
								func_184(vLocal_335);
								fVar5 = 9f;
								vVar4 = { -1f, 0f, 0f };
								if (vLocal_335.x < 0.164f)
								{
									vLocal_335.x = 0.164323f;
								}
								unk_0x5EBD7EB63AD5FB1D(Local_68.f_9, 1, Vector(fVar5, fVar5, fVar5) * vLocal_335, vVar4, 0, 0, 1, 1, 0, 1);
								Local_68.f_12 = unk_0x105601648511CC64();
								Local_68.f_A = 19;
							}
						}
					}
					else
					{
						Local_68.f_A = 18;
					}
					break;
				
				case 18:
					if (!func_108(Local_68.f_9, Local_63, 50f))
					{
						unk_0x65E471E4A2D56226(Local_68.f_9, 0, 0);
					}
					if ((!unk_0x16E28377989A37E9(Local_68.f_9) && !unk_0x2CDE18D6C89522AD(Local_68.f_9)) && !unk_0x687BD6F7DF82B377(Local_68.f_9, 0))
					{
						if (!unk_0x69871CAEBDD20966(Local_68.f_9))
						{
							if (unk_0x7214F4879DF8A314(Local_68.f_9))
							{
								if (!func_108(Local_68.f_9, Local_63, 25f))
								{
									unk_0x65E471E4A2D56226(Local_68.f_9, 0, 0);
								}
								else
								{
									Local_68.f_A = 19;
								}
							}
						}
					}
					break;
				
				case 19:
					unk_0x3E2B7D349B5735D3(Local_68.f_9, -1161760501, 0, 0, 0);
					if (func_116(Local_68.f_12, 500))
					{
						if (unk_0x01666D754C368931(Local_68.f_9))
						{
							unk_0x488CE41C0EE4EF1F(Local_68.f_9);
							unk_0xB0746E7FB281549D(Local_68.f_9, vLocal_333);
							Local_68.f_A = 20;
						}
					}
					break;
				
				case 20:
					if (unk_0xADC5538B9DCA2177(Local_68.f_9) == -1)
					{
						unk_0xAF9FC4463EA3090B(Local_68.f_9, 200);
						Local_68.f_A = 21;
					}
					else if (unk_0xADC5538B9DCA2177(Local_68.f_9) == 2)
					{
						if (!iLocal_106)
						{
							if (!func_108(Local_68.f_9, Local_63, 220f))
							{
								unk_0xD6F9F7605EC8EAD4(Local_68.f_9, vLocal_334);
								iLocal_106 = 1;
							}
						}
					}
					break;
				
				case 21:
					break;
				
				case 22:
					if (func_116(Local_68.f_12, unk_0x491B2241281A03B7(0, 500)))
					{
						if (unk_0xD8BE87198802B1F7(Local_68.f_9))
						{
							unk_0x92F21EB7190F52E9(Local_68.f_9, vLocal_332);
						}
						unk_0x9CDD10270A1ACF6F(Local_68.f_9, &iVar0, 1);
						if (iVar0 != joaat("weapon_unarmed"))
						{
							unk_0xBFDB9A018C6CE15A(Local_68.f_9);
							unk_0xEC9E10B23689A01D(Local_68.f_9, 1);
							unk_0x8E25082A46F87892(Local_68.f_9, joaat("weapon_unarmed"), true);
							unk_0xB499FECE23EEF9E4(Local_68.f_9, false);
						}
						unk_0xABA7AE40608505F2(Local_68.f_9, 2, false);
						unk_0xABA7AE40608505F2(Local_68.f_9, 64, false);
						unk_0xABA7AE40608505F2(Local_68.f_9, 128, false);
						unk_0xABA7AE40608505F2(Local_68.f_9, 8, false);
						unk_0xABA7AE40608505F2(Local_68.f_9, 1, false);
						unk_0xABA7AE40608505F2(Local_68.f_9, 32, false);
						unk_0x91629AC1E1F78419(Local_68.f_9, 5, 0);
						unk_0x91629AC1E1F78419(Local_68.f_9, 17, 1);
						unk_0xC5A6DFE2B8987B17(&uLocal_145);
						if (unk_0x5237AF95232D78C5(Local_68.f_9, 0))
						{
							unk_0xA3981DED4FC2E56E(0, 0, 64);
						}
						unk_0x5558ED6D4A2DEC93(0, unk_0xBC25C936A095B5BA(), 200f, -1, 0, 0);
						unk_0x535008C596714F9E(uLocal_145);
						unk_0xA8E6405305C0D7DF(Local_68.f_9, uLocal_145);
						unk_0x02DAF06EA4F08219(&uLocal_145);
						unk_0x2E35C4FA5F0ED22F(Local_68.f_9, 1);
						unk_0x22321800954A532E(Local_68.f_9, 1);
						Local_68.f_A = 23;
					}
					break;
				
				case 23:
					if (!func_62(Local_68.f_9, 1805844857) && !unk_0x889DA6CE8E4DB344(Local_68.f_9))
					{
						Local_68.f_12 = (unk_0x105601648511CC64() - 5000);
						Local_68.f_A = 22;
					}
					break;
				
				case 24:
					unk_0xABA7AE40608505F2(Local_68.f_9, 2, true);
					unk_0xABA7AE40608505F2(Local_68.f_9, 64, false);
					unk_0xABA7AE40608505F2(Local_68.f_9, 128, false);
					unk_0xABA7AE40608505F2(Local_68.f_9, 8, false);
					unk_0xABA7AE40608505F2(Local_68.f_9, 1, false);
					unk_0xABA7AE40608505F2(Local_68.f_9, 32, false);
					unk_0x91629AC1E1F78419(Local_68.f_9, 5, 0);
					unk_0x91629AC1E1F78419(Local_68.f_9, 17, 1);
					unk_0xC8FD3EBBB90E8D7F(Local_68.f_9, 173, true);
					unk_0x2E9860A2B72187F5(Local_68.f_9, 237, 1);
					unk_0x1F6829714DE50304(Local_68.f_9, 3f);
					if (func_94(Local_71[0 /*6*/]))
					{
						if ((!unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), Local_71[0 /*6*/], 0) && func_108(Local_71[0 /*6*/], Local_71[0 /*6*/].f_1, 3f)) && func_364(unk_0x349C94FFF43E2979(Local_71[0 /*6*/]), Local_71[0 /*6*/].f_4, 20f))
						{
							if (unk_0x62F3A07C43FFB568(Local_68.f_9, Local_71[0 /*6*/], 0) && !unk_0xA4813477CC5DD00F(Local_68.f_9))
							{
								Local_68.f_A = 25;
							}
							else if (func_116(Local_68.f_12, unk_0x491B2241281A03B7(250, 350)))
							{
								if (unk_0xD8BE87198802B1F7(Local_68.f_9))
								{
									unk_0x92F21EB7190F52E9(Local_68.f_9, vLocal_332);
								}
								else
								{
									unk_0xA4E856A8CD53B8DF(Local_68.f_9);
								}
								unk_0xD179FA0466FA4FE3(Local_68.f_9, Local_71[0 /*6*/], 25000, -1, 2f, 8388608, 0);
								unk_0x2E35C4FA5F0ED22F(Local_68.f_9, 1);
								Local_68.f_A = 25;
							}
						}
						else
						{
							Local_68.f_A = 22;
						}
					}
					else
					{
						Local_68.f_A = 22;
					}
					break;
				
				case 25:
					if (!func_94(Local_71[0 /*6*/]))
					{
						Local_68.f_A = 22;
					}
					else if (((unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), Local_71[0 /*6*/], 0) || unk_0xA4813477CC5DD00F(Local_68.f_9)) || !func_108(Local_71[0 /*6*/], Local_71[0 /*6*/].f_1, 3f)) || !func_364(unk_0x349C94FFF43E2979(Local_71[0 /*6*/]), Local_71[0 /*6*/].f_4, 20f))
					{
						Local_68.f_A = 22;
					}
					else if (unk_0x25EF720B1CAB1E23(Local_68.f_9, Local_71[0 /*6*/]))
					{
						Local_68.f_A = 42;
					}
					else if (!func_62(Local_68.f_9, -1794415470))
					{
						Local_68.f_A = 24;
					}
					unk_0x1F6829714DE50304(Local_68.f_9, 2f);
					break;
				
				case 26:
					if (func_94(Local_71[0 /*6*/]) && unk_0x25EF720B1CAB1E23(Local_68.f_9, Local_71[0 /*6*/]))
					{
						unk_0x1A06AE15BF21D407(Local_68.f_9, Local_71[0 /*6*/], unk_0xBC25C936A095B5BA(), 8, 30f, 786468, 350f, 30f, 1);
						unk_0xC8FD3EBBB90E8D7F(Local_68.f_9, 173, false);
						unk_0x2E35C4FA5F0ED22F(Local_68.f_9, 1);
						Local_68.f_A = 27;
					}
					else if (!unk_0x8F1FDD0A40DC834A(Local_68.f_9))
					{
						Local_68.f_A = 22;
					}
					break;
				
				case 27:
					if (!func_62(Local_68.f_9, -1273030092))
					{
						Local_68.f_A = 26;
					}
					break;
				
				case 28:
					unk_0xA4E856A8CD53B8DF(Local_68.f_9);
					unk_0x91629AC1E1F78419(Local_68.f_9, 5, 0);
					unk_0xDD8AD9DE28030E73(Local_68.f_9, "CODE_HUMAN_STAND_COWER");
					unk_0xEE7131C3C73E7282(Local_68.f_9, -1);
					unk_0x2E35C4FA5F0ED22F(Local_68.f_9, 1);
					Local_68.f_A = 29;
					break;
				
				case 29:
					if (!unk_0x2CDE18D6C89522AD(Local_68.f_9))
					{
						if (!func_62(Local_68.f_9, 474215631))
						{
							Local_68.f_A = 28;
						}
					}
					break;
				
				case 30:
					if (func_362(Local_68.f_9, Local_68.f_13, 100f, 1, 1090519040, 1097859072, 0) || func_361())
					{
						Local_68.f_A = 32;
					}
					else if (unk_0xB3CF56CA25030EC5(func_360()))
					{
						if (unk_0xF4FCC3C1048FF2AB(Local_68.f_9, -1519143300) == 1)
						{
							unk_0x641068AE8FF724D5(Local_68.f_9, 500);
						}
						else
						{
							unk_0xA4E856A8CD53B8DF(Local_68.f_9);
							unk_0xD999D66C5AFA4BE3(Local_68.f_9);
						}
						if (!unk_0x9488E18994C5C83D(Local_68.f_9, func_360()))
						{
							unk_0x75E3FA28CC7D5707(Local_68.f_9, func_360());
						}
						unk_0xCF0A6E4BED1DBA5D(func_360(), 0);
						unk_0xB26291CA19AEC32C(func_360(), 1.5f, 3.5f, -1082130432);
						unk_0x59B9712C1EAB0092(Local_68.f_9, 0);
						unk_0x95F58F57ACD332BA(Local_68.f_9, 1);
						unk_0x11BCA0CA7D0CE293(Local_68.f_9, 1);
						unk_0xEDBBBB8EA1B1625E(Local_68.f_9, 1);
						unk_0x5056032BA0CF3AAD(Local_68.f_9, 1);
						unk_0x6757D726B4BAF0C4(Local_68.f_9, 0);
						unk_0x12B5924811F58165(Local_68.f_9, 1);
						unk_0xC8FD3EBBB90E8D7F(Local_68.f_9, 167, true);
						unk_0xC8FD3EBBB90E8D7F(Local_68.f_9, 118, true);
						unk_0xF82197F205B9D8FD(Local_68.f_9, 1);
						unk_0xB71D41C0310C93DE(Local_68.f_9, 1, 1);
						unk_0xC8FD3EBBB90E8D7F(Local_68.f_9, 42, true);
						unk_0x63ECE17EEAC84602(Local_68.f_9, 1);
						unk_0xB6A0EC6216225695(Local_68.f_9, 1);
						unk_0xB58463DD7085635A(Local_68.f_9, 2f);
						unk_0xA3ECE7AA42735A48(Local_68.f_9, 2f);
						unk_0x5056032BA0CF3AAD(Local_68.f_9, 1);
						unk_0xC8FD3EBBB90E8D7F(Local_68.f_9, 118, true);
						unk_0xABA7AE40608505F2(Local_68.f_9, 1, false);
						unk_0x91629AC1E1F78419(Local_68.f_9, 17, 1);
						unk_0x91629AC1E1F78419(Local_68.f_9, 0, 0);
						unk_0x2E9860A2B72187F5(Local_68.f_9, 237, 1);
						unk_0x56F2E1B5599188FA(Local_68.f_9, unk_0xBC25C936A095B5BA(), -1, 0, 2);
						unk_0x2E35C4FA5F0ED22F(Local_68.f_9, 1);
						Local_68.f_A = 31;
					}
					break;
				
				case 31:
					if (func_362(Local_68.f_9, Local_68.f_13, 100f, 1, 1090519040, 1097859072, 0) || func_361())
					{
						Local_68.f_A = 32;
					}
					else
					{
						if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
						{
							if (func_359())
							{
								iVar1 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
								if (!unk_0x62F3A07C43FFB568(Local_68.f_9, iVar1, 0))
								{
									fVar6 = unk_0x8910237449BB6F79(iVar1);
									if (fVar6 < 1.75f && func_108(Local_68.f_9, vLocal_332, 8f))
									{
										if (!func_62(Local_68.f_9, -1794415470))
										{
											iVar2 = -1;
											if (unk_0x4C018135A7D41423(iVar1))
											{
												if (unk_0x1AAF0C23233C57AF(iVar1, 0, 0) && unk_0x2101FAC9A9D4C29D(Local_68.f_9, iVar1, 0, 1, 0))
												{
													iVar2 = 0;
												}
												else
												{
													iVar2 = -2;
												}
											}
											if (iVar2 != -1)
											{
												unk_0xD179FA0466FA4FE3(Local_68.f_9, iVar1, 25000, iVar2, 2f, 1048577, 0);
											}
										}
										else if (unk_0x8F1FDD0A40DC834A(Local_68.f_9))
										{
											if (unk_0x25480ACDBB6DB8F1(Local_68.f_9) != iVar1)
											{
												unk_0xA4E856A8CD53B8DF(Local_68.f_9);
											}
										}
									}
									else if (func_62(Local_68.f_9, -1794415470))
									{
										if (!unk_0x8F1FDD0A40DC834A(Local_68.f_9))
										{
											unk_0xA4E856A8CD53B8DF(Local_68.f_9);
										}
									}
								}
							}
							else if (func_62(Local_68.f_9, -1794415470))
							{
								unk_0xA4E856A8CD53B8DF(Local_68.f_9);
							}
						}
						else if (func_62(Local_68.f_9, -1794415470))
						{
							unk_0xA4E856A8CD53B8DF(Local_68.f_9);
						}
						if (unk_0x640A454FD54BBEF2(Local_68.f_9, unk_0xBC25C936A095B5BA()))
						{
							if (unk_0x8F1FDD0A40DC834A(Local_68.f_9))
							{
								unk_0x44C98C11ED6DD327(Local_68.f_9);
							}
						}
						else if (!unk_0x5237AF95232D78C5(Local_68.f_9, 1))
						{
							if (!unk_0x8F1FDD0A40DC834A(Local_68.f_9))
							{
								unk_0x56F2E1B5599188FA(Local_68.f_9, unk_0xBC25C936A095B5BA(), -1, 0, 2);
							}
						}
						unk_0x2E9860A2B72187F5(Local_68.f_9, 237, 1);
					}
					break;
				
				case 32:
					if (func_362(Local_68.f_9, Local_68.f_13, 100f, 1, 1090519040, 1097859072, 0) || func_361())
					{
						if (unk_0xD45C08B05D4687A7(Local_68.f_9))
						{
							unk_0x57EB4CC8F1928A47(Local_68.f_9);
							unk_0xB71D41C0310C93DE(Local_68.f_9, 0, 1);
							unk_0xC8FD3EBBB90E8D7F(Local_68.f_9, 42, false);
							unk_0xC8FD3EBBB90E8D7F(Local_68.f_9, 118, true);
						}
						unk_0xF82197F205B9D8FD(Local_68.f_9, 0);
						if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
						{
							if (func_62(Local_68.f_9, -1794415470))
							{
								unk_0xA4E856A8CD53B8DF(Local_68.f_9);
							}
						}
						if (((!unk_0x2CDE18D6C89522AD(Local_68.f_9) && !unk_0x687BD6F7DF82B377(Local_68.f_9, 0)) && !unk_0xA4813477CC5DD00F(Local_68.f_9)) && !func_62(Local_68.f_9, -828834893))
						{
							unk_0x56F2E1B5599188FA(Local_68.f_9, unk_0xBC25C936A095B5BA(), -1, 0, 2);
							if ((!func_358(Local_68.f_13, 10) && func_108(Local_68.f_9, vLocal_332, 50f)) || !func_116(iLocal_142, 2000))
							{
								if (unk_0x5237AF95232D78C5(Local_68.f_9, 0))
								{
									unk_0xA3981DED4FC2E56E(Local_68.f_9, 0, 0);
								}
								else if (((!unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), 6) && !unk_0x425BEBAA53B39EBF(unk_0xB5CEFD608600A09F(), Local_68.f_9)) && !func_361()) || unk_0x149E9368A11035DE(Local_68.f_9))
								{
									unk_0x85DB484A637CEAB9(Local_68.f_9, unk_0xBC25C936A095B5BA(), -1);
								}
								else if (unk_0xF4FCC3C1048FF2AB(Local_68.f_9, -1519143300) == 1)
								{
									unk_0x641068AE8FF724D5(Local_68.f_9, -1);
								}
								else
								{
									unk_0x2A2F7485FD2B9A29(Local_68.f_9, -1, unk_0xBC25C936A095B5BA(), -1, 0);
								}
							}
							else if (!unk_0x5237AF95232D78C5(Local_68.f_9, 0))
							{
								unk_0x85DB484A637CEAB9(Local_68.f_9, unk_0xBC25C936A095B5BA(), -1);
							}
							unk_0x2E35C4FA5F0ED22F(Local_68.f_9, 1);
							Local_68.f_A = 33;
						}
					}
					else if (!iLocal_110)
					{
						Local_68.f_A = 30;
					}
					else
					{
						Local_68.f_A = 34;
					}
					break;
				
				case 33:
					if (func_362(Local_68.f_9, Local_68.f_13, 100f, 1, 1090519040, 1097859072, 0) || func_361())
					{
						if (!func_62(Local_68.f_9, -1519143300))
						{
							if (!func_62(Local_68.f_9, -875674219))
							{
								if (unk_0x5237AF95232D78C5(Local_68.f_9, 0))
								{
									if (!func_358(Local_68.f_13, 10) && func_108(Local_68.f_9, vLocal_332, 50f))
									{
										unk_0xA3981DED4FC2E56E(Local_68.f_9, 0, 0);
										Local_68.f_A = 32;
									}
								}
								else
								{
									Local_68.f_A = 32;
								}
							}
							else if (!func_358(Local_68.f_13, 10) && func_108(Local_68.f_9, vLocal_332, 50f))
							{
								if ((unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), 6) || unk_0x425BEBAA53B39EBF(unk_0xB5CEFD608600A09F(), Local_68.f_9)) || func_361())
								{
									Local_68.f_A = 32;
								}
							}
						}
					}
					else if (!iLocal_110)
					{
						Local_68.f_A = 30;
					}
					else
					{
						Local_68.f_A = 34;
					}
					break;
				
				case 34:
					if (func_362(Local_68.f_9, Local_68.f_13, 100f, 1, 1090519040, 1097859072, 0))
					{
						Local_68.f_A = 32;
					}
					else
					{
						if (unk_0xD45C08B05D4687A7(Local_68.f_9))
						{
							unk_0x57EB4CC8F1928A47(Local_68.f_9);
							unk_0xB71D41C0310C93DE(Local_68.f_9, 0, 1);
							unk_0xC8FD3EBBB90E8D7F(Local_68.f_9, 42, false);
						}
						unk_0xA4E856A8CD53B8DF(Local_68.f_9);
						unk_0x56F2E1B5599188FA(Local_68.f_9, unk_0xBC25C936A095B5BA(), -1, 0, 2);
						unk_0x2E35C4FA5F0ED22F(Local_68.f_9, 1);
						Local_68.f_A = 35;
					}
					break;
				
				case 35:
					if (func_362(Local_68.f_9, Local_68.f_13, 100f, 1, 1090519040, 1097859072, 0))
					{
						Local_68.f_A = 32;
					}
					else if (unk_0x149E9368A11035DE(Local_68.f_9))
					{
						unk_0x5056032BA0CF3AAD(Local_68.f_9, 1);
						unk_0xEDBBBB8EA1B1625E(Local_68.f_9, 0);
					}
					else if ((!unk_0x2CDE18D6C89522AD(Local_68.f_9) && !unk_0x69871CAEBDD20966(Local_68.f_9)) && unk_0x7214F4879DF8A314(Local_68.f_9))
					{
						if (!unk_0xC5B8A5F778E321DD(Local_68.f_9, unk_0xBC25C936A095B5BA(), 45f))
						{
							if (!func_62(Local_68.f_9, -875674219))
							{
								unk_0x85DB484A637CEAB9(Local_68.f_9, unk_0xBC25C936A095B5BA(), -1);
							}
						}
					}
					break;
				
				case 36:
					break;
				
				case 37:
					break;
				
				case 42:
					unk_0x2E35C4FA5F0ED22F(Local_68.f_9, 1);
					Local_68.f_A = 43;
					break;
				
				case 43:
					break;
				}
			}
	}
}

bool func_358(int iParam0, int iParam1)//Position - 0x2A25D
{
	return (unk_0xC87A57742F7D3C06() - iParam0) > iParam1;
}

int func_359()//Position - 0x2A26F
{
	int iVar0;
	int iVar1;
	
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
	}
	else if (unk_0x8F1FDD0A40DC834A(unk_0xBC25C936A095B5BA()))
	{
		iVar0 = unk_0x25480ACDBB6DB8F1(unk_0xBC25C936A095B5BA());
	}
	if (!func_94(iVar0))
	{
		return 0;
	}
	else
	{
		if (unk_0x524ABB0435146845(iVar0) == 0)
		{
			return 0;
		}
		iVar1 = unk_0x6F79ECA8C83E4357(iVar0);
		if (unk_0x7512ED01F3F46714(iVar1))
		{
			return 0;
		}
		if (unk_0x2B4DE5C0D509B0F9(iVar1))
		{
			return 0;
		}
		if (unk_0x89B9572166100905(iVar1))
		{
			return 0;
		}
	}
	return 1;
}

var func_360()//Position - 0x2A2F5
{
	return unk_0x705BBFE5A8ADE4A9(unk_0xFC1CAE18F3ECBF2D());
}

int func_361()//Position - 0x2A305
{
	if (!iLocal_82)
	{
		return 1;
	}
	if (func_315(sLocal_148, 0))
	{
		return 1;
	}
	if (iLocal_58 != 3 && iLocal_58 != 6)
	{
		return 1;
	}
	if (unk_0x69871CAEBDD20966(Local_68.f_9) || unk_0x2CDE18D6C89522AD(Local_68.f_9))
	{
		iLocal_142 = unk_0x105601648511CC64();
		return 1;
	}
	if (!func_116(iLocal_142, 2000))
	{
		return 1;
	}
	return 0;
}

int func_362(int iParam0, int iParam1, float fParam2, bool bParam3, float fParam4, float fParam5, bool bParam6)//Position - 0x2A372
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	
	if (func_21(iParam0))
	{
		vVar0 = { unk_0x541C2AEF053615BC(iParam0, 1) };
		if (unk_0x04880508C862E589(vVar0, fParam4, 1))
		{
			return 1;
		}
		if (func_108(iParam0, vLocal_332, fParam2))
		{
			if (!func_358(iParam1, 10))
			{
				if (bParam6)
				{
					if (func_363(1, 0, 1))
					{
						if (unk_0x0D14122360FAC5C8(unk_0xBC25C936A095B5BA()) || unk_0xE20E6DFCF5FF2849(unk_0xBC25C936A095B5BA()))
						{
							return 1;
						}
					}
				}
				if (unk_0x425BEBAA53B39EBF(unk_0xB5CEFD608600A09F(), iParam0))
				{
					return 1;
				}
				if (unk_0xC2D39D2C720A03B0(unk_0xB5CEFD608600A09F()))
				{
					if (unk_0xDF25D3BB3759E7D1(unk_0xB5CEFD608600A09F(), iParam0))
					{
						return 1;
					}
					if (bParam3)
					{
						if (unk_0xC2D39D2C720A03B0(unk_0xB5CEFD608600A09F()))
						{
							if (unk_0xC5B8A5F778E321DD(unk_0xBC25C936A095B5BA(), iParam0, 45f))
							{
								return 1;
							}
						}
					}
				}
				if (unk_0x32E373675659FDB0(unk_0xBC25C936A095B5BA()))
				{
					return 1;
				}
				if (unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || unk_0xABB2AFD7539464EA(unk_0xBC25C936A095B5BA()))
				{
					return 1;
				}
				if (unk_0xADA34C38F1319208(unk_0xBC25C936A095B5BA()))
				{
					return 1;
				}
			}
		}
		if (unk_0xD9C1758D86688CEA(iParam0, unk_0xBC25C936A095B5BA(), 1))
		{
			unk_0x5502708AECB47F5D(iParam0);
			return 1;
		}
		if (unk_0xE921F8171F0733B3(iParam0, unk_0xBC25C936A095B5BA()) || unk_0xBF94E62A1FA7B7F3(iParam0, 56))
		{
			if (unk_0x2CDE18D6C89522AD(iParam0))
			{
				return 1;
			}
		}
		if (unk_0xC9FA5D38428AB6BE(-1, vVar0, fParam5))
		{
			return 1;
		}
		vVar1 = { vVar0 };
		vVar2 = { vVar1 };
		vVar1.x = (vVar1.x - fParam5);
		vVar1.y = (vVar1.y - fParam5);
		vVar1.z = (vVar1.z - fParam5);
		vVar2.x = (vVar2.x + fParam5);
		vVar2.y = (vVar2.y + fParam5);
		vVar2.z = (vVar2.z + fParam5);
		if (unk_0x876474582C5DECDE(vVar1, vVar2, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_363(bool bParam0, bool bParam1, bool bParam2)//Position - 0x2A528
{
	int iVar0;
	
	unk_0x9CDD10270A1ACF6F(unk_0xBC25C936A095B5BA(), &iVar0, 1);
	switch (iVar0)
	{
		case joaat("weapon_pistol"):
		case joaat("weapon_combatpistol"):
		case joaat("weapon_appistol"):
		case joaat("weapon_microsmg"):
		case joaat("weapon_smg"):
		case joaat("weapon_assaultrifle"):
		case joaat("weapon_carbinerifle"):
		case joaat("weapon_specialcarbine"):
		case joaat("weapon_advancedrifle"):
		case joaat("weapon_mg"):
		case joaat("weapon_combatmg"):
		case joaat("weapon_pumpshotgun"):
		case joaat("weapon_sawnoffshotgun"):
		case joaat("weapon_assaultshotgun"):
		case joaat("weapon_sniperrifle"):
		case joaat("weapon_heavysniper"):
		case joaat("weapon_remotesniper"):
		case joaat("weapon_grenadelauncher"):
		case joaat("weapon_rpg"):
		case joaat("weapon_snspistol"):
		case joaat("weapon_minigun"):
			return 1;
		
		default:
	}
	if (bParam0)
	{
		switch (iVar0)
		{
			case joaat("weapon_grenade"):
			case joaat("weapon_stickybomb"):
			case joaat("weapon_molotov"):
				return 1;
			}
		
		default:
	}
	if (bParam1)
	{
		switch (iVar0)
		{
			case joaat("weapon_knife"):
			case joaat("weapon_hammer"):
			case joaat("weapon_crowbar"):
			case joaat("weapon_bottle"):
			case default:
			}
	}
	if (bParam2)
	{
		if (iVar0 == joaat("weapon_stungun"))
		{
			return 1;
		}
	}
	return 0;
}

int func_364(float fParam0, float fParam1, float fParam2)//Position - 0x2A61F
{
	if (unk_0x357058E632979E65((fParam0 - fParam1)) <= fParam2)
	{
		return 1;
	}
	return 0;
}

char* func_365()//Position - 0x2A63B
{
	return "move_m@bail_bond_not_tazered";
}

char* func_366()//Position - 0x2A647
{
	return "move_m@bail_bond_tazered";
}

int func_367()//Position - 0x2A653
{
	unk_0xF632E62AC7874CD3(func_365());
	unk_0xF632E62AC7874CD3(func_366());
	if (unk_0x320539481B2F0121(func_365()) && unk_0x320539481B2F0121(func_366()))
	{
		return 1;
	}
	return 0;
}

void func_368(var uParam0, bool bParam1)//Position - 0x2A688
{
	if (unk_0x687BD6F7DF82B377(*uParam0, 0))
	{
		*bParam1 = 1;
	}
}

void func_369(int iParam0, var uParam1, float fParam2, int iParam3)//Position - 0x2A69F
{
	if (func_422(iParam0))
	{
		if (func_370(iParam0, unk_0xBC25C936A095B5BA(), fParam2, 1, 250, iParam3))
		{
			*uParam1 = unk_0xC87A57742F7D3C06();
		}
	}
}

bool func_370(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0x2A6CB
{
	var uVar0;
	vector3 vVar1;
	int iVar2;
	
	iVar2 = func_376(iParam0, iParam1);
	if (!func_422(iParam0) || !func_422(iParam1))
	{
		if (iVar2 != -1)
		{
			func_9(&(Local_56[iVar2 /*4*/]));
		}
		return 0;
	}
	if (!func_374(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar2 == -1)
	{
		iVar2 = func_373();
		if (iVar2 == -1)
		{
			return 0;
		}
		Local_56[iVar2 /*4*/].f_1 = iParam0;
		Local_56[iVar2 /*4*/].f_2 = iParam1;
	}
	vVar1 = { unk_0x823166D9421223CA(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_371(&(Local_56[iVar2 /*4*/]), vVar1, iParam1, &(Local_56[iVar2 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (unk_0x105601648511CC64() - Local_56[iVar2 /*4*/].f_3) < iParam4);
}

int func_371(var uParam0, vector3 vParam1, int iParam2, var uParam3, int iParam4, int iParam5)//Position - 0x2A78C
{
	var uVar0;
	vector3 vVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	iVar3 = 0;
	if (!func_422(iParam2))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		vVar1 = { func_372(iParam2, iParam5) };
		*uParam0 = unk_0xA20E4A82503CECB3(vParam1, vVar1 + vVar1 - vParam1 * Vector(0.1f, 0.1f, 0.1f), 511, iParam4, 7);
		return 0;
	}
	iVar4 = unk_0xB0695CD48A28A3A9(*uParam0, &uVar0, &vVar1, &uVar2, &iVar3);
	if (iVar4 == 0)
	{
		*uParam0 = 0;
		return 0;
	}
	else if (iVar4 == 1)
	{
		return 0;
	}
	*uParam0 = 0;
	if (unk_0x386592AF38881675(iVar3))
	{
		func_422(iVar3);
		if (unk_0x399F7937FFE4DEBF(iVar3) == iParam2)
		{
			if (bLocal_57)
			{
				unk_0xD1FD19DF6D5B1300(vParam1, unk_0x541C2AEF053615BC(iParam2, 1), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam3 = unk_0x105601648511CC64();
			return 1;
		}
		return 0;
	}
	if (unk_0xD27AC0E9B78CFDD7(iVar3))
	{
		func_422(iVar3);
		if (unk_0x5237AF95232D78C5(iParam2, 0))
		{
			if (unk_0x233ED4CD1F1A42C1(iVar3) == unk_0x9FE9D386222EEE47(iParam2, 0))
			{
				if (bLocal_57)
				{
					unk_0xD1FD19DF6D5B1300(vParam1, unk_0x541C2AEF053615BC(iParam2, 1), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam3 = unk_0x105601648511CC64();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}

Vector3 func_372(int iParam0, int iParam1)//Position - 0x2A8B8
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		iVar0 = unk_0x491B2241281A03B7(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return unk_0x541C2AEF053615BC(iParam0, 1);
	}
	else if (iParam1 == 1)
	{
		return unk_0x823166D9421223CA(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return unk_0x823166D9421223CA(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return unk_0x823166D9421223CA(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return unk_0x823166D9421223CA(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return unk_0x823166D9421223CA(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return unk_0x823166D9421223CA(iParam0, 36864, 0f, 0f, 0f);
	}
	return unk_0x541C2AEF053615BC(iParam0, 1);
}

int func_373()//Position - 0x2A97D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_56)
	{
		if ((Local_56[iVar0 /*4*/] == 0 && Local_56[iVar0 /*4*/].f_1 == 0) && Local_56[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_374(int iParam0, int iParam1, float fParam2, int iParam3)//Position - 0x2A9C7
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	vVar0 = { func_184(unk_0x541C2AEF053615BC(iParam1, 1) - unk_0x541C2AEF053615BC(iParam0, 1)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		vVar1 = { unk_0xF90427F311003E57(iParam0) };
	}
	else
	{
		vVar1 = { func_184(unk_0x823166D9421223CA(iParam0, 31086, 0f, 5f, 0f) - unk_0x823166D9421223CA(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar2 = func_375(vVar1, vVar0);
	if (fVar2 <= SYSTEM::COS((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

float func_375(vector3 vParam0, vector3 vParam1)//Position - 0x2AA58
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

int func_376(int iParam0, int iParam1)//Position - 0x2AA79
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_56)
	{
		if (Local_56[iVar0 /*4*/].f_1 == iParam0 && Local_56[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_377(int iParam0, int iParam1, float fParam2, int iParam3)//Position - 0x2AAB8
{
	if (func_422(iParam0))
	{
		if (func_370(unk_0xBC25C936A095B5BA(), iParam0, fParam2, 1, 250, iParam3))
		{
			*iParam1 = unk_0xC87A57742F7D3C06();
		}
	}
}

void func_378()//Position - 0x2AAE4
{
	if (func_57(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), vLocal_331, 100f))
	{
		if (!func_379())
		{
			unk_0x04DD7A558FCF2C34(&vLocal_327, 8);
			func_65();
			iLocal_113 = 1;
		}
	}
	else if (iLocal_113)
	{
		if (!func_57(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), vLocal_331, 120f))
		{
			if (unk_0xDC9E16E99286F31D())
			{
				unk_0xD103510B8989BEB2();
				iLocal_113 = 0;
			}
		}
		else
		{
			func_65();
		}
	}
	if (iLocal_113)
	{
		if (func_379())
		{
			unk_0xD103510B8989BEB2();
			iLocal_113 = 0;
		}
	}
}

bool func_379()//Position - 0x2AB6E
{
	return Global_16129;
}

void func_380()//Position - 0x2AB7A
{
	func_35();
	func_378();
	if (func_21(Local_68.f_9))
	{
		func_377(Local_68.f_9, &iLocal_133, 1126825984, 7);
		func_369(Local_68.f_9, &(Local_68.f_13), 1126825984, 7);
		func_357();
		switch (iLocal_60)
		{
			case 0:
				func_19();
				iLocal_84 = 0;
				iLocal_100 = 0;
				iLocal_60 = 1;
				break;
			
			case 1:
				if (!iLocal_110)
				{
					if (func_312("BBS_05", 0, 0))
					{
						unk_0xBB5629E7D44054AE("BBS_05");
					}
					func_113(&(Local_68.f_8));
					if (!func_108(Local_68.f_9, vLocal_332, 25f))
					{
						if (Local_68.f_A == 30 || Local_68.f_A == 31)
						{
							Local_68.f_12 = unk_0x105601648511CC64();
							Local_68.f_A = 34;
						}
						if (func_358(iLocal_133, 10))
						{
							if (!func_60())
							{
								if (func_73(&uLocal_157, cLocal_151, "BBC_T9", 4, 0, 0, 0))
								{
									iLocal_123 = unk_0x105601648511CC64();
								}
							}
						}
						iLocal_110 = 1;
					}
					else if (!unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0))
					{
						if (func_312("BBS_COPS", 0, 0))
						{
							unk_0xBB5629E7D44054AE("BBS_COPS");
						}
						iLocal_84 = 1;
						if (!func_60())
						{
							iLocal_60 = 2;
						}
					}
					else if (!iLocal_83)
					{
						if (!func_315(sLocal_148, 1))
						{
							if (func_73(&uLocal_157, cLocal_151, "BBC_T5", 4, 0, 0, 0))
							{
								iLocal_83 = 1;
							}
						}
					}
					else if (!iLocal_100)
					{
						if (!func_312("BBS_COPS", 0, 0))
						{
							func_314("BBS_COPS", 7500, 0);
							iLocal_100 = 1;
						}
					}
					else
					{
						func_383();
						func_381(&Local_75, vLocal_332, &iLocal_125, 5000, 1101004800);
					}
				}
				else if (func_108(Local_68.f_9, vLocal_332, 8f))
				{
					if (Local_68.f_A == 34 || Local_68.f_A == 35)
					{
						Local_68.f_12 = unk_0x105601648511CC64();
						Local_68.f_A = 30;
					}
					iLocal_100 = 0;
					if (func_312("BBS_05", 0, 0))
					{
						unk_0xBB5629E7D44054AE("BBS_05");
					}
					if (!func_60())
					{
						if (Local_68.f_A == 30 || Local_68.f_A == 31)
						{
							if (unk_0x491B2241281A03B7(0, 2) == 0)
							{
								if (func_73(&uLocal_157, cLocal_151, "BBC_T10", 4, 0, 0, 0))
								{
									iLocal_123 = unk_0x105601648511CC64();
								}
							}
							else if (func_73(&uLocal_157, cLocal_150, "BB3_J5", 4, 0, 0, 0))
							{
								iLocal_123 = unk_0x105601648511CC64();
							}
						}
					}
					iLocal_110 = 0;
				}
				else
				{
					if (func_312("BBS_COPS", 0, 0))
					{
						unk_0xBB5629E7D44054AE("BBS_COPS");
					}
					if (!unk_0x2DA8CA50A72528FB(Local_68.f_8))
					{
						Local_68.f_8 = func_354(Local_68.f_9, 1, 1, 5);
					}
					if (!iLocal_101)
					{
						func_314("BBS_05", 7500, 1);
						iLocal_101 = 1;
					}
				}
				if (func_310(&(Local_68.f_9)))
				{
					iLocal_114 = 1;
					iLocal_60 = 2;
				}
				break;
			
			case 2:
				if (func_312("BBS_05", 0, 0))
				{
					unk_0xBB5629E7D44054AE("BBS_05");
				}
				iLocal_84 = 1;
				func_113(&(Local_68.f_8));
				if (iLocal_114)
				{
					func_126(7);
				}
				else
				{
					if (func_312("BBS_COPS", 0, 0))
					{
						unk_0xBB5629E7D44054AE("BBS_COPS");
					}
					func_126(3);
				}
				break;
			}
	}
}

int func_381(int iParam0, vector3 vParam1, int iParam2, int iParam3, float fParam4)//Position - 0x2AE8E
{
	vector3 vVar0;
	var uVar1;
	char[] cVar2[8];
	char* sVar3;
	
	if (func_21(*iParam0))
	{
		if (!func_60())
		{
			vVar0 = { unk_0x541C2AEF053615BC(*iParam0, 1) };
			if (SYSTEM::VDIST2(vParam1, vVar0) < (fParam4 * fParam4))
			{
				if (unk_0x105601648511CC64() - *iParam2) > (iParam3 + unk_0x491B2241281A03B7(0, 2000))
				{
					uVar1 = 16;
					func_89(&uVar1, 4, *iParam0, "MAUDE", 0, 1);
					cVar2 = "BBCAUD";
					sVar3 = "BBC_loiter";
					func_382(&uVar1, cVar2, sVar3, 4, 0, 0);
					*iParam2 = unk_0x105601648511CC64();
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_382(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x2AF1A
{
	func_88(uParam0, 145, sParam1, iParam4, iParam5, 0);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	unk_0xF0059F27F7BB6680(&Global_394A, 0);
	Global_3DBB = iParam3;
	StringCopy(&Global_3DAE, sParam2, 24);
}

void func_383()//Position - 0x2AF55
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	if (unk_0x4B8E3E5901E59EB8() && unk_0x2DC92D46FC48E795(203) != 0)
	{
		iVar1 = 1;
	}
	if (func_21(Local_68.f_9))
	{
		if (func_60())
		{
			iLocal_123 = unk_0x105601648511CC64();
		}
		if (!iLocal_85)
		{
			if (func_73(&uLocal_157, cLocal_150, "BB3_J6", 4, 0, 0, 0))
			{
				iLocal_85 = 1;
			}
		}
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
			if (unk_0x5237AF95232D78C5(Local_68.f_9, 0) && unk_0x9FE9D386222EEE47(Local_68.f_9, 0) == iVar0)
			{
				if (!unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0))
				{
					if (!iLocal_108)
					{
						if (!func_60())
						{
							iLocal_122 = unk_0x105601648511CC64();
							iLocal_108 = 1;
						}
					}
					else if (!iLocal_86[0])
					{
						if ((unk_0x105601648511CC64() - iLocal_122) > 7500)
						{
							func_386(0);
						}
					}
					else if (!iLocal_86[1])
					{
						if ((unk_0x105601648511CC64() - iLocal_122) > 10000)
						{
							func_386(1);
						}
					}
					else if (!iLocal_86[2])
					{
						if ((unk_0x105601648511CC64() - iLocal_122) > 10000)
						{
							func_386(2);
						}
					}
					if (unk_0x724D816EA203A79E(iVar0))
					{
						if (unk_0x8910237449BB6F79(iVar0) < 0.5f)
						{
							if (!iLocal_94)
							{
								if (!func_60())
								{
									if (func_116(iLocal_138, 3500))
									{
										if (func_73(&uLocal_157, cLocal_150, "BB3_STOP", 4, 0, 0, 0))
										{
											iLocal_94 = 1;
										}
									}
								}
							}
						}
						else if (iLocal_94)
						{
							if (!func_315("BB3_STOP", 1))
							{
								iLocal_138 = unk_0x105601648511CC64();
							}
						}
						else
						{
							iLocal_138 = unk_0x105601648511CC64();
						}
					}
				}
				else if (!iLocal_84)
				{
					if (func_73(&uLocal_157, cLocal_150, "BB3_J9", 4, 0, 0, 0))
					{
						iLocal_84 = 1;
					}
				}
			}
			else
			{
				if (!iLocal_102)
				{
					if (!func_359())
					{
						func_331("BBS_VH1", -1);
						iLocal_102 = 1;
					}
				}
				iLocal_138 = unk_0x105601648511CC64();
			}
			iLocal_89 = 0;
			iLocal_90 = 0;
		}
		else
		{
			iLocal_138 = unk_0x105601648511CC64();
			iLocal_94 = 0;
			if (unk_0x8F1FDD0A40DC834A(unk_0xBC25C936A095B5BA()))
			{
				iVar0 = unk_0x25480ACDBB6DB8F1(unk_0xBC25C936A095B5BA());
				if (!iLocal_89)
				{
					if (func_359())
					{
						if (!unk_0x5237AF95232D78C5(Local_68.f_9, 0))
						{
							if (!func_315("BBC_T6", 1))
							{
								if (func_73(&uLocal_157, cLocal_151, "BBC_T6", 4, iVar1, 0, 0))
								{
									iLocal_89 = 1;
								}
							}
						}
						func_385("BBS_VH1", 1);
					}
					else if (!func_315("BBC_T8", 1) && !func_315("BB3_WTF", 1))
					{
						if (unk_0x491B2241281A03B7(0, 11) < 5)
						{
							if (func_73(&uLocal_157, cLocal_151, "BBC_T8", 4, iVar1, 0, 0))
							{
								iLocal_89 = 1;
							}
						}
						else if (func_73(&uLocal_157, cLocal_150, "BB3_WTF", 4, iVar1, 0, 0))
						{
							iLocal_89 = 1;
						}
					}
				}
				else if (!iLocal_93)
				{
					if (func_384(&iVar0))
					{
						if ((!func_315("BB3_JACK", 1) && !func_315("BBC_T6", 1)) && !func_315("BBC_T8", 1))
						{
							if (func_73(&uLocal_157, cLocal_150, "BB3_JACK", 4, iVar1, 0, 0))
							{
								iLocal_93 = 1;
							}
						}
					}
				}
			}
			else
			{
				iLocal_89 = 0;
				if (unk_0x5237AF95232D78C5(Local_68.f_9, 0))
				{
					if (!iLocal_90)
					{
						if (!func_315("BBC_T7", 1) && !func_315("BB3_OUT", 1))
						{
							if (unk_0x491B2241281A03B7(0, 11) < 5)
							{
								if (func_73(&uLocal_157, cLocal_151, "BBC_T7", 4, iVar1, 0, 0))
								{
									iLocal_90 = 1;
								}
							}
							else if (func_73(&uLocal_157, cLocal_150, "BB3_OUT", 4, iVar1, 0, 0))
							{
								iLocal_90 = 1;
							}
						}
					}
				}
				else if (Local_68.f_A == 33 && func_62(Local_68.f_9, -1519143300))
				{
					if (func_108(Local_68.f_9, vLocal_332, 25f))
					{
						if (!func_315("BB3_J11", 1))
						{
							if (func_116(iLocal_124, unk_0x491B2241281A03B7(2500, 5000)))
							{
								if (func_60())
								{
									func_5();
								}
								if (func_73(&uLocal_157, cLocal_150, "BB3_J11", 4, 0, 0, 0))
								{
									iLocal_124 = unk_0x105601648511CC64();
								}
							}
						}
						else
						{
							iLocal_124 = unk_0x105601648511CC64();
						}
					}
				}
				else
				{
					iLocal_124 = 0;
					if (!iLocal_84)
					{
						if (func_73(&uLocal_157, cLocal_150, "BB3_J9", 4, 0, 0, 0))
						{
							iLocal_123 = unk_0x105601648511CC64();
							iLocal_84 = 1;
						}
					}
					if (!func_60())
					{
						if (func_116(iLocal_123, unk_0x491B2241281A03B7(3000, 6000)))
						{
							if (!func_108(Local_68.f_9, vLocal_332, 20f))
							{
								if (func_73(&uLocal_157, cLocal_150, "BB3_J4", 4, 0, 0, 0))
								{
									iLocal_123 = unk_0x105601648511CC64();
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_384(int iParam0)//Position - 0x2B3D1
{
	int iVar0;
	
	if (func_94(*iParam0))
	{
		if (unk_0x4FCDC2EC534819EF(unk_0xBC25C936A095B5BA()))
		{
			return 1;
		}
		iVar0 = unk_0x40B8412A87DA8328(unk_0xBC25C936A095B5BA());
		if (func_422(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

void func_385(char* sParam0, int iParam1)//Position - 0x2B40A
{
	if (func_319(sParam0))
	{
		unk_0x7456702622C62EA0(iParam1);
	}
}

void func_386(int iParam0)//Position - 0x2B421
{
	if (!iLocal_86[iParam0])
	{
		if (func_73(&uLocal_157, cLocal_150, sLocal_149[iParam0], 4, 0, 0, 0))
		{
			iLocal_86[iParam0] = 1;
			iLocal_108 = 0;
			iLocal_122 = 0;
		}
	}
}

void func_387()//Position - 0x2B45C
{
	func_35();
	func_378();
	if (func_21(Local_68.f_9))
	{
		func_377(Local_68.f_9, &iLocal_133, 1126825984, 7);
		func_369(Local_68.f_9, &(Local_68.f_13), 1126825984, 7);
		func_357();
		switch (iLocal_60)
		{
			case 0:
				iLocal_60 = 1;
				break;
			
			case 1:
				if (!iLocal_110)
				{
					if (func_312("BBS_05", 0, 0))
					{
						unk_0xBB5629E7D44054AE("BBS_05");
					}
					func_113(&(Local_68.f_8));
					if (!func_108(Local_68.f_9, vLocal_332, 25f))
					{
						if (Local_68.f_A == 30 || Local_68.f_A == 31)
						{
							Local_68.f_12 = unk_0x105601648511CC64();
							Local_68.f_A = 34;
						}
						if (func_358(iLocal_133, 10))
						{
							if (!func_60())
							{
								if (func_73(&uLocal_157, cLocal_151, "BBC_T9", 4, 0, 0, 0))
								{
									iLocal_123 = unk_0x105601648511CC64();
								}
							}
						}
						iLocal_83 = 1;
						iLocal_110 = 1;
					}
					else if (unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0))
					{
						unk_0xAEEA080912A0AB35(unk_0xB5CEFD608600A09F());
						iLocal_83 = 1;
						iLocal_60 = 2;
					}
					else
					{
						if (!unk_0x2DA8CA50A72528FB(iLocal_116))
						{
							if (iLocal_97)
							{
								iLocal_116 = func_390(vLocal_331, 5, 1);
							}
						}
						if (!iLocal_83)
						{
							if (!func_315(sLocal_148, 1))
							{
								if (func_73(&uLocal_157, cLocal_151, "BBC_T5", 4, 0, 0, 0))
								{
									iLocal_83 = 1;
								}
							}
						}
						else if (!iLocal_97)
						{
							if (!func_60())
							{
								func_314("BBS_DROP", 7500, 0);
								iLocal_123 = unk_0x105601648511CC64();
								iLocal_97 = 1;
							}
						}
						else
						{
							func_383();
						}
						if (unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), vLocal_331, 4f, 4f, 2f, 1, 1, 0))
						{
						}
						if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 2732.815f, 4143.618f, 42.02822f, 2724.603f, 4144.803f, 46.33084f, 9f, 0, 1, 0))
						{
							iLocal_60 = 2;
						}
						if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
						{
							if (func_108(unk_0xBC25C936A095B5BA(), vLocal_331, 6.5f))
							{
								iLocal_60 = 2;
							}
						}
						else if (func_108(unk_0xBC25C936A095B5BA(), vLocal_331, 2.5f))
						{
							iLocal_60 = 2;
						}
					}
				}
				else
				{
					func_113(&iLocal_116);
					if (func_312("BBS_DROP", 0, 0))
					{
						unk_0xBB5629E7D44054AE("BBS_DROP");
					}
					if (func_108(Local_68.f_9, vLocal_332, 8f))
					{
						if (Local_68.f_A == 34 || Local_68.f_A == 35)
						{
							Local_68.f_12 = unk_0x105601648511CC64();
							Local_68.f_A = 30;
						}
						if (func_312("BBS_05", 0, 0))
						{
							unk_0xBB5629E7D44054AE("BBS_05");
						}
						if (!func_60())
						{
							if (Local_68.f_A == 30 || Local_68.f_A == 31)
							{
								if (unk_0x491B2241281A03B7(0, 2) == 0)
								{
									if (func_73(&uLocal_157, cLocal_151, "BBC_T10", 4, 0, 0, 0))
									{
										iLocal_123 = unk_0x105601648511CC64();
									}
								}
								else if (func_73(&uLocal_157, cLocal_150, "BB3_J5", 4, 0, 0, 0))
								{
									iLocal_123 = unk_0x105601648511CC64();
								}
							}
						}
						iLocal_110 = 0;
					}
					else
					{
						if (!unk_0x2DA8CA50A72528FB(Local_68.f_8))
						{
							Local_68.f_8 = func_354(Local_68.f_9, 1, 1, 5);
						}
						if (!iLocal_101)
						{
							func_314("BBS_05", 7500, 1);
							iLocal_101 = 1;
						}
					}
				}
				if (!bLocal_107)
				{
					bLocal_107 = func_388(vLocal_332, Local_63, 180f);
				}
				if (func_310(&(Local_68.f_9)))
				{
					iLocal_114 = 1;
					iLocal_60 = 2;
				}
				break;
			
			case 2:
				func_113(&iLocal_116);
				if (func_312("BBS_DROP", 0, 0))
				{
					unk_0xBB5629E7D44054AE("BBS_DROP");
				}
				if (iLocal_114)
				{
					func_126(7);
				}
				else if (unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0))
				{
					func_126(6);
				}
				else
				{
					func_113(&(Local_68.f_8));
					if (func_312("BBS_05", 0, 0))
					{
						unk_0xBB5629E7D44054AE("BBS_05");
					}
					if (!bLocal_107)
					{
						bLocal_107 = func_388(vLocal_332, Local_63, 0f);
					}
					func_126(4);
				}
				break;
			}
	}
}

int func_388(vector3 vParam0, vector3 vParam1, float fParam2)//Position - 0x2B831
{
	int iVar0;
	
	if (!func_389(vParam0, vParam1, fParam2))
	{
		unk_0xE85B33FB221A23CD(3, 1);
		unk_0xE85B33FB221A23CD(5, 1);
		if (iLocal_132 > 0)
		{
			iVar0 = 0;
			while (iVar0 <= (iLocal_132 - 1))
			{
				func_41(&(Local_69[iVar0 /*20*/]), 1, 0, 1);
				iVar0++;
			}
		}
		if (iLocal_129 > 0)
		{
			iVar0 = 0;
			while (iVar0 <= (iLocal_129 - 1))
			{
				func_92(&(Local_71[iVar0 /*6*/]));
				iVar0++;
			}
		}
		if (iLocal_130 > 0)
		{
			iVar0 = 0;
			while (iVar0 <= (iLocal_130 - 1))
			{
				func_37(&(Local_72[iVar0 /*6*/]), 0);
				iVar0++;
			}
		}
		if (iLocal_128 > 0)
		{
			iVar0 = 0;
			while (iVar0 <= (iLocal_128 - 1))
			{
				func_37(&(Local_73[iVar0 /*9*/]), 0);
				iVar0++;
			}
		}
		if (iLocal_131 > 0)
		{
			iVar0 = 0;
			while (iVar0 <= (iLocal_131 - 1))
			{
				func_95(&(Local_74[iVar0 /*7*/]));
				iVar0++;
			}
		}
	}
	return 0;
}

bool func_389(vector3 vParam0, vector3 vParam1, float fParam2)//Position - 0x2B923
{
	vector3 vVar0;
	
	vVar0 = { vParam1 - vParam0 };
	return ((vVar0.x * vVar0.x) + (vVar0.y * vVar0.y)) <= (fParam2 * fParam2);
}

int func_390(vector3 vParam0, int iParam1, bool bParam2)//Position - 0x2B94D
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = unk_0x390CF6C8AD6903B7(vParam0);
	unk_0x12DB69036F6569F7(iVar0, iParam1);
	unk_0x3F5F1772D71D5EC4(iVar0, 1f);
	unk_0x0BBAABB52887CF8C(iVar0, bParam2);
	return iVar0;
}

void func_391()//Position - 0x2B97B
{
	bool bVar0;
	
	bVar0 = false;
	if (func_21(Local_68.f_9))
	{
		func_377(Local_68.f_9, &iLocal_133, 1126825984, 7);
		func_369(Local_68.f_9, &(Local_68.f_13), 1126825984, 7);
		func_357();
		func_393();
		switch (iLocal_60)
		{
			case 0:
				iLocal_123 = unk_0x105601648511CC64();
				Local_68.f_11 = unk_0x105601648511CC64();
				Local_68.f_12 = unk_0x105601648511CC64();
				Local_68.f_A = 13;
				if (func_21(Local_68.f_9))
				{
					if (!unk_0x2DA8CA50A72528FB(Local_68.f_8))
					{
						Local_68.f_8 = func_354(Local_68.f_9, 1, 0, 5);
					}
					unk_0x5502708AECB47F5D(Local_68.f_9);
				}
				func_353(&(Local_68.f_8), "", "", &iLocal_126, iLocal_127, 0);
				iLocal_60 = 1;
				break;
			
			case 1:
				unk_0x2E9860A2B72187F5(Local_68.f_9, 222, 1);
				if (!iLocal_109)
				{
					func_353(&(Local_68.f_8), "", "", &iLocal_126, iLocal_127, 0);
					func_324(&uLocal_44, Local_68.f_9, 0, 0, 1, 1, 1);
					if (!iLocal_81)
					{
						if (func_116(Local_68.f_11, 3000))
						{
							iLocal_81 = 1;
						}
						if (!func_60() && func_108(Local_68.f_9, vLocal_332, 35f))
						{
							if (func_73(&uLocal_157, cLocal_150, sLocal_147, 4, 0, 0, 0))
							{
								Local_68.f_11 = unk_0x105601648511CC64();
								iLocal_123 = unk_0x105601648511CC64();
								iLocal_81 = 1;
							}
						}
					}
					if (Local_68.f_A == 21)
					{
						if (unk_0x724D816EA203A79E(Local_68.f_9))
						{
							unk_0x5502708AECB47F5D(Local_68.f_9);
						}
						Local_68.f_A = 22;
					}
					else if (Local_68.f_A == 22 || Local_68.f_A == 23)
					{
						if (iLocal_135 == -1)
						{
							iLocal_135 = unk_0x105601648511CC64();
						}
						if (iLocal_134 == -1)
						{
							iLocal_134 = unk_0x105601648511CC64();
						}
						else if (func_116(iLocal_134, 5000))
						{
							bVar0 = true;
						}
						if (func_321(Local_68.f_9, vLocal_332, bVar0, 0, 1, 170))
						{
							func_320();
							Local_68.f_11 = unk_0x105601648511CC64();
							func_318(&uLocal_44, 0, 0);
							iLocal_109 = 1;
						}
						else
						{
							func_317(Local_68.f_9, vLocal_332, iLocal_134, 925353388);
						}
					}
					if (!func_60())
					{
						if (iLocal_81)
						{
							if (unk_0xADC5538B9DCA2177(unk_0xBC25C936A095B5BA()) == -1)
							{
								if (func_116(iLocal_123, unk_0x491B2241281A03B7(5000, 12000)))
								{
									if (Local_68.f_A == 22 || Local_68.f_A == 23)
									{
										if (func_108(Local_68.f_9, vLocal_332, 30f))
										{
											if (unk_0x889DA6CE8E4DB344(Local_68.f_9))
											{
												if (unk_0x491B2241281A03B7(0, 101) < 30)
												{
													if (func_73(&uLocal_157, cLocal_151, "BBC_T13", 4, 0, 0, 0))
													{
														iLocal_123 = unk_0x105601648511CC64();
													}
												}
												else if (func_73(&uLocal_157, cLocal_150, "BB3_FLEE", 4, 0, 0, 0))
												{
													iLocal_123 = unk_0x105601648511CC64();
												}
											}
										}
									}
								}
							}
						}
					}
					else
					{
						iLocal_123 = unk_0x105601648511CC64();
					}
				}
				else
				{
					func_320();
					if (!func_108(Local_68.f_9, vLocal_332, 10f))
					{
						if (!iLocal_98)
						{
							if (!func_315(sLocal_148, 1))
							{
								func_313(&(Local_68.f_8), "BBS_APPSUS", "BBS_APPSUS2", &iLocal_126, &iLocal_127, 1, 1);
								iLocal_98 = 1;
							}
						}
						else
						{
							func_353(&(Local_68.f_8), "BBS_APPSUS", "BBS_APPSUS2", &iLocal_126, iLocal_127, 1);
						}
					}
					else
					{
						if (!iLocal_82)
						{
							if (!unk_0x2CDE18D6C89522AD(Local_68.f_9) && !unk_0x5237AF95232D78C5(Local_68.f_9, 0))
							{
								if (func_312("BBS_APPSUS", 0, 0) || func_312("BBS_APPSUS2", 0, 0))
								{
									unk_0xEB233A3B7635D2AC();
								}
								if (!func_60())
								{
									func_5();
								}
								if (func_73(&uLocal_157, cLocal_150, sLocal_148, 4, 0, 0, 0))
								{
									iLocal_82 = 1;
								}
							}
						}
						else if (!func_60())
						{
							iLocal_60 = 2;
						}
						func_353(&(Local_68.f_8), "", "", &iLocal_126, iLocal_127, 0);
					}
					if (func_310(&(Local_68.f_9)))
					{
						iLocal_114 = 1;
						iLocal_60 = 2;
					}
				}
				break;
			
			case 2:
				if (func_312("BBS_APPSUS", 0, 0) || func_312("BBS_APPSUS2", 0, 0))
				{
					unk_0xEB233A3B7635D2AC();
				}
				iLocal_82 = 1;
				unk_0xF5547CCC3D125DD6(5, 1862763509, iLocal_322);
				unk_0xF5547CCC3D125DD6(5, iLocal_322, 1862763509);
				func_113(&(Local_68.f_8));
				func_320();
				Local_68.f_11 = unk_0x105601648511CC64();
				func_318(&uLocal_44, 0, 0);
				func_37(&(Local_73[0 /*9*/]), 0);
				func_41(&(Local_69[0 /*20*/]), 1, 0, 1);
				func_392(1, &uLocal_144);
				if (iLocal_114)
				{
					func_126(7);
				}
				else
				{
					func_126(3);
				}
				break;
			}
	}
}

void func_392(bool bParam0, var uParam1)//Position - 0x2BDCF
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { 2711.198f, 4134.425f, 32.90168f };
	vVar1 = { 2739.981f, 4155.221f, 50.28859f };
	if (bParam0)
	{
		*uParam1 = unk_0x1DAA351326EA3537(vVar0, vVar1, 0, 1, 1, 1);
		unk_0xF16F7C45E0B1B52B(vVar0, vVar1);
		unk_0x379ACE23D404525C(vVar0, vVar1, false, 1);
		unk_0xDD56BACCCF835044(vVar0, vVar1, 0);
		unk_0x6935EBF9868982DC(2697.222f, 4119.894f, 42.79107f, 2746.04f, 4162.974f, 43.62732f, 0, 1);
		unk_0x6C5F5B5F6894CCE3(2728.333f, 4144.778f, 43.29292f, 7.5f, 1, 0, 0, false);
	}
	else
	{
		unk_0x483687B0FCA5415A(*uParam1, 0);
		unk_0x02DD9F29D9655E48();
		unk_0x379ACE23D404525C(vVar0, vVar1, true, 1);
		unk_0x832ADB79A274D4E9(2697.222f, 4119.894f, 42.79107f, 2746.04f, 4162.974f, 43.62732f, 1);
	}
}

void func_393()//Position - 0x2BEBC
{
	if (func_21(Local_69[0 /*20*/]))
	{
		if (Local_69[0 /*20*/].f_E == 0)
		{
			func_369(Local_69[0 /*20*/], &(Local_69[0 /*20*/].f_11), 160f, 7);
			if (func_362(Local_69[0 /*20*/], Local_69[0 /*20*/].f_11, 1101004800, 0, 1090519040, 1097859072, 0))
			{
				if (unk_0x724D816EA203A79E(Local_73[0 /*9*/]))
				{
					if (unk_0xE7E55F7532DEE345(Local_73[0 /*9*/]))
					{
						unk_0x17175087F2DB6AC8(Local_73[0 /*9*/], 1, 1);
					}
				}
				Local_69[0 /*20*/].f_E = 4;
			}
			else if (unk_0x724D816EA203A79E(Local_73[0 /*9*/]))
			{
				if (!unk_0xE7E55F7532DEE345(Local_73[0 /*9*/]))
				{
					unk_0x5DBE04849460E608(Local_73[0 /*9*/], Local_69[0 /*20*/], unk_0xFA18E720A39243D0(Local_69[0 /*20*/], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				}
				else
				{
					if (!unk_0x96044E39418AAF17(Local_69[0 /*20*/], "oddjobs@bailbond_mountain", "Idle_Camman", 3))
					{
						unk_0xE896C0AD02364F2A(Local_69[0 /*20*/], "oddjobs@bailbond_mountain", "Idle_Camman", 8f, -8f, -1, 49, 0, 0, 0, 0);
					}
					if (!func_62(Local_69[0 /*20*/], -875674219))
					{
						if (func_422(Local_68.f_9))
						{
							unk_0x56F2E1B5599188FA(Local_69[0 /*20*/], Local_68.f_9, -1, 2060, 3);
							unk_0x85DB484A637CEAB9(Local_69[0 /*20*/], Local_68.f_9, -1);
						}
					}
				}
			}
		}
		else if (Local_69[0 /*20*/].f_E == 4)
		{
			if (!func_62(Local_69[0 /*20*/], 1805844857))
			{
				if (unk_0x724D816EA203A79E(Local_73[0 /*9*/]))
				{
					if (unk_0xE7E55F7532DEE345(Local_73[0 /*9*/]))
					{
						unk_0x17175087F2DB6AC8(Local_73[0 /*9*/], 1, 1);
					}
					else
					{
						func_37(&(Local_73[0 /*9*/]), 0);
					}
				}
				func_102(Local_69[0 /*20*/], 1);
			}
		}
	}
	else if (Local_69[0 /*20*/].f_E != 5)
	{
		func_37(&(Local_73[0 /*9*/]), 0);
		func_41(&(Local_69[0 /*20*/]), 1, 0, 1);
		Local_69[0 /*20*/].f_E = 5;
	}
}

void func_394()//Position - 0x2C08A
{
	if (func_21(Local_68.f_9))
	{
		func_377(Local_68.f_9, &iLocal_133, 1126825984, 1);
		func_369(Local_68.f_9, &(Local_68.f_13), 1126825984, 7);
		func_357();
		func_393();
		switch (iLocal_60)
		{
			case 0:
				if (!unk_0x2DA8CA50A72528FB(Local_68.f_8))
				{
					Local_68.f_8 = func_354(Local_68.f_9, 1, 0, 5);
				}
				func_313(&(Local_68.f_8), "", "", &iLocal_126, &iLocal_127, 1, 0);
				iLocal_60 = 1;
				break;
			
			case 1:
				switch (iLocal_61)
				{
					case 2:
						if (!iLocal_88)
						{
							if (func_60())
							{
								func_5();
							}
							if (func_73(&uLocal_157, cLocal_151, "BBC_T14", 4, 0, 0, 0))
							{
								Local_68.f_11 = unk_0x105601648511CC64();
								iLocal_88 = 1;
							}
							func_353(&(Local_68.f_8), "", "", &iLocal_126, iLocal_127, 0);
						}
						else if (!iLocal_99)
						{
							if (!func_315("BBC_T14", 1))
							{
								func_313(&(Local_68.f_8), "BBS_APHEND", "BBS_APHEND2", &iLocal_126, &iLocal_127, 1, 1);
								iLocal_99 = 1;
							}
						}
						else
						{
							func_353(&(Local_68.f_8), "BBS_APHEND", "BBS_APHEND2", &iLocal_126, iLocal_127, 1);
							if (func_108(Local_68.f_9, vLocal_332, 25f) && func_401(Local_68.f_9, vLocal_332, 10f))
							{
								if (unk_0xB3B744D2D9D757D1(unk_0xBC25C936A095B5BA()) || unk_0x74AAB09D79A6344E(unk_0xBC25C936A095B5BA(), 0))
								{
									if (func_400(&(Local_68.f_13)))
									{
										iLocal_61 = 1;
										iLocal_91 = 0;
										if (Local_68.f_A != 3 && Local_68.f_A != 4)
										{
											Local_68.f_12 = (unk_0x105601648511CC64() - 50000);
											Local_68.f_A = 3;
										}
									}
									else if (!unk_0xADA34C38F1319208(unk_0xBC25C936A095B5BA()) && unk_0xE921F8171F0733B3(unk_0xBC25C936A095B5BA(), Local_68.f_9))
									{
										iLocal_61 = 1;
										iLocal_91 = 0;
										if (Local_68.f_A != 3 && Local_68.f_A != 4)
										{
											Local_68.f_12 = (unk_0x105601648511CC64() - 50000);
											Local_68.f_A = 3;
										}
									}
								}
								else if (func_399(Local_68.f_9, iLocal_133, 0, 1103626240, 1086324736))
								{
									iLocal_61 = 0;
								}
								else if (func_108(Local_68.f_9, vLocal_332, 5f))
								{
									iLocal_61 = 0;
								}
								else if (func_400(&(Local_68.f_13)))
								{
									if (func_108(Local_68.f_9, vLocal_332, (25f - 1.5f)))
									{
										iLocal_61 = 1;
										iLocal_91 = 0;
										if (Local_68.f_A != 3 && Local_68.f_A != 4)
										{
											Local_68.f_12 = (unk_0x105601648511CC64() - 50000);
											Local_68.f_A = 3;
										}
									}
								}
							}
							func_398();
						}
						if (func_362(Local_68.f_9, Local_68.f_13, 20f, 0, 1090519040, 1097859072, 0) || Local_69[0 /*20*/].f_E != 0)
						{
							iLocal_60 = 2;
						}
						break;
					
					case 0:
					case 1:
						if (!iLocal_91)
						{
							if (func_312("BBS_APHEND", 0, 0) || func_312("BBS_APHEND2", 0, 0))
							{
								unk_0xEB233A3B7635D2AC();
							}
							if (func_60())
							{
								func_5();
							}
							if (func_73(&uLocal_157, cLocal_150, "BB3_J2", 4, 0, 0, 0))
							{
								Local_68.f_11 = unk_0x105601648511CC64();
								iLocal_123 = unk_0x105601648511CC64();
								iLocal_91 = 1;
							}
							func_353(&(Local_68.f_8), "", "", &iLocal_126, iLocal_127, 0);
						}
						else if (!iLocal_87)
						{
							if (!func_315("BBC_T14", 1) && !func_315("BB3_J2", 1))
							{
								if (func_312("BBS_APHEND", 0, 0) || func_312("BBS_APHEND2", 0, 0))
								{
									unk_0xEB233A3B7635D2AC();
								}
								if (func_60())
								{
									func_5();
								}
								if (func_73(&uLocal_157, cLocal_151, "BBC_T1", 4, 0, 0, 0))
								{
									Local_68.f_11 = unk_0x105601648511CC64();
									iLocal_87 = 1;
								}
								else if (iLocal_61 == 1)
								{
									if (func_116(iLocal_123, 1250))
									{
										Local_68.f_11 = (unk_0x105601648511CC64() - 3000);
										iLocal_87 = 1;
									}
								}
							}
							else
							{
								iLocal_123 = unk_0x105601648511CC64();
							}
							func_353(&(Local_68.f_8), "", "", &iLocal_126, iLocal_127, 0);
						}
						else if (func_116(Local_68.f_11, 500))
						{
							if (Local_68.f_A != 3 && Local_68.f_A != 4)
							{
								Local_68.f_12 = unk_0x105601648511CC64();
								Local_68.f_A = 3;
							}
							iLocal_60 = 2;
						}
						if (func_362(Local_68.f_9, Local_68.f_13, 20f, 0, 1090519040, 1097859072, 0) || Local_69[0 /*20*/].f_E != 0)
						{
							iLocal_60 = 2;
						}
						break;
					
					case 3:
						func_353(&(Local_68.f_8), "", "", &iLocal_126, iLocal_127, 0);
						iLocal_60 = 2;
						break;
				}
				break;
			
			case 2:
				if (Local_68.f_A != 3 && Local_68.f_A != 4)
				{
					Local_68.f_12 = (unk_0x105601648511CC64() - 50000);
					Local_68.f_A = 3;
				}
				Local_68.f_11 = unk_0x105601648511CC64();
				if (func_312("BBS_APHEND", 0, 0) || func_312("BBS_APHEND2", 0, 0))
				{
					unk_0xEB233A3B7635D2AC();
				}
				func_395(0);
				func_353(&(Local_68.f_8), "", "", &iLocal_126, iLocal_127, 0);
				iLocal_126 = unk_0x105601648511CC64();
				iLocal_127 = unk_0x105601648511CC64();
				func_126(2);
				break;
			}
	}
}

void func_395(bool bParam0)//Position - 0x2C58B
{
	if (func_315("BB3_J10", 0))
	{
		if (bParam0)
		{
			func_396();
		}
		else
		{
			func_5();
		}
	}
}

void func_396()//Position - 0x2C5AF
{
	Global_394A = 0;
	func_397();
}

void func_397()//Position - 0x2C5BF
{
	if (unk_0xE6711F601F11B66B())
	{
		unk_0x5C7DC611411E2CF9();
		Global_41AB = 0;
		unk_0x1E08809A5041F85B(true);
		Global_3DB8 = 6;
		return;
	}
}

void func_398()//Position - 0x2C5E3
{
	if (iLocal_139 < 10)
	{
		if (!iLocal_92)
		{
			if (!func_60())
			{
				if (func_108(Local_68.f_9, vLocal_332, (25f + 5f)))
				{
					iLocal_117 = 0;
					if (unk_0x4B8E3E5901E59EB8())
					{
						iLocal_117 = 1;
					}
					if (func_73(&uLocal_157, cLocal_150, "BB3_J10", 1, iLocal_117, 0, 0))
					{
						iLocal_140 = unk_0x105601648511CC64();
						iLocal_139++;
						iLocal_92 = 1;
					}
				}
			}
		}
		else if (!func_315("BB3_J10", 0))
		{
			if (func_116(iLocal_140, unk_0x491B2241281A03B7(2500, 4000)))
			{
				iLocal_92 = 0;
			}
		}
		else
		{
			iLocal_140 = unk_0x105601648511CC64();
		}
	}
}

int func_399(int iParam0, int iParam1, bool bParam2, float fParam3, float fParam4)//Position - 0x2C684
{
	if (func_422(iParam0))
	{
		if (!func_358(iParam1, 10))
		{
			if (bParam2)
			{
				if (!func_108(Local_68.f_9, vLocal_332, fParam3))
				{
					return 0;
				}
				if (!func_401(iParam0, vLocal_332, fParam4))
				{
					return 0;
				}
			}
			if (unk_0xD1DC4B08247A4317(iParam0))
			{
				if (!unk_0x41A5D6415E2CC10E(iParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_400(var uParam0)//Position - 0x2C6EA
{
	if (!func_358(*uParam0, 10))
	{
		return 1;
	}
	return 0;
}

int func_401(int iParam0, vector3 vParam1, float fParam2)//Position - 0x2C704
{
	vector3 vVar0;
	float fVar1;
	
	vVar0 = { unk_0x541C2AEF053615BC(iParam0, 0) };
	fVar1 = unk_0x357058E632979E65((vVar0.z - vParam1.z));
	if (fVar1 <= fParam2)
	{
		return 1;
	}
	return 0;
}

void func_402()//Position - 0x2C733
{
	switch (iLocal_60)
	{
		case 0:
			if (bLocal_104)
			{
				if (func_423(0) && !Global_1974B)
				{
					func_22(800, 0);
				}
			}
			if (!Global_1974B)
			{
				iLocal_60 = 1;
			}
			break;
		
		case 1:
			func_403(&Local_63, &uLocal_157);
			if (func_21(Local_68.f_9))
			{
				func_377(Local_68.f_9, &iLocal_133, 1126825984, 1);
				func_369(Local_68.f_9, &(Local_68.f_13), 1126825984, 7);
				func_357();
				func_393();
				if (func_108(Local_68.f_9, vLocal_332, 25f) && func_401(Local_68.f_9, vLocal_332, 10f))
				{
					if (unk_0xB3B744D2D9D757D1(unk_0xBC25C936A095B5BA()) || unk_0x74AAB09D79A6344E(unk_0xBC25C936A095B5BA(), 0))
					{
						if (func_400(&(Local_68.f_13)))
						{
							iLocal_61 = 1;
							iLocal_60 = 2;
						}
						else if (!unk_0xADA34C38F1319208(unk_0xBC25C936A095B5BA()) && unk_0xE921F8171F0733B3(unk_0xBC25C936A095B5BA(), Local_68.f_9))
						{
							iLocal_61 = 1;
							iLocal_60 = 2;
						}
					}
					else if (func_399(Local_68.f_9, iLocal_133, 0, 1103626240, 1086324736))
					{
						iLocal_61 = 0;
						iLocal_60 = 2;
					}
					else if (func_108(Local_68.f_9, vLocal_332, 5f))
					{
						iLocal_61 = 0;
						iLocal_60 = 2;
					}
					else if (func_400(&(Local_68.f_13)))
					{
						if (func_108(Local_68.f_9, vLocal_332, (25f - 1.5f)))
						{
							iLocal_61 = 1;
							iLocal_60 = 2;
						}
					}
				}
				else if (unk_0xDF25D3BB3759E7D1(unk_0xB5CEFD608600A09F(), Local_68.f_9) || unk_0x425BEBAA53B39EBF(unk_0xB5CEFD608600A09F(), Local_68.f_9))
				{
					iLocal_61 = 2;
					iLocal_60 = 2;
				}
				if (func_362(Local_68.f_9, Local_68.f_13, 25f, 0, 1090519040, 1097859072, 0) || Local_69[0 /*20*/].f_E != 0)
				{
					iLocal_61 = 3;
					iLocal_60 = 2;
				}
			}
			func_398();
			break;
		
		case 2:
			if (iLocal_61 == 3)
			{
				func_395(0);
				func_313(&(Local_68.f_8), "", "", &iLocal_126, &iLocal_127, 1, 0);
				func_126(2);
			}
			else
			{
				if (iLocal_61 == 1)
				{
					iLocal_91 = 0;
					if (Local_68.f_A != 3 && Local_68.f_A != 4)
					{
						Local_68.f_12 = (unk_0x105601648511CC64() - 50000);
						Local_68.f_A = 3;
					}
				}
				func_126(1);
			}
			break;
	}
}

void func_403(var uParam0, var uParam1)//Position - 0x2C973
{
	if (!uParam0->f_7)
	{
		if (func_406(26, func_408(uParam0->f_4), 0))
		{
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				if ((!func_60() && !unk_0x9986AD62CA3DE747(unk_0xBC25C936A095B5BA())) && !unk_0x4B8E3E5901E59EB8())
				{
					func_89(uParam1, 2, unk_0xBC25C936A095B5BA(), "TREVOR", 0, 1);
					if (func_74(uParam1, func_405(uParam0->f_4), func_404(uParam0->f_4), 4, 0, 0, 0))
					{
						uParam0->f_7 = 1;
					}
				}
				else
				{
					uParam0->f_7 = 1;
				}
			}
			else
			{
				uParam0->f_7 = 1;
			}
		}
	}
}

char* func_404(int iParam0)//Position - 0x2CA04
{
	switch (iParam0)
	{
		case 0:
			return "BB1_TE";
		
		case 1:
			return "BB2_TE";
		
		case 2:
			return "BB3_TE";
		
		case 3:
			return "BB4_TE";
		
		default:
	}
	return "NULL";
}

char* func_405(int iParam0)//Position - 0x2CA49
{
	switch (iParam0)
	{
		case 0:
			return "BB1AUD";
		
		case 1:
			return "BB2AUD";
		
		case 2:
			return "BB3AUD";
		
		case 3:
			return "BB4AUD";
		
		default:
	}
	return "NULL";
}

int func_406(int iParam0, int iParam1, int iParam2)//Position - 0x2CA8C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = func_407(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	iVar1 = Global_90CE[iParam1 /*12*/].f_3;
	if (iVar1 >= 3)
	{
		return 0;
	}
	iVar2 = -1;
	iVar3 = 0;
	iVar4 = iParam2;
	iVar3 = 0;
	while (iVar3 < Global_B522[iVar0 /*203*/].f_9)
	{
		if (Global_B522[iVar0 /*203*/].f_A[iVar3 /*48*/] == iParam1)
		{
			if (iVar4 == 0)
			{
				iVar2 = iVar3;
			}
			else
			{
				iVar4 = (iVar4 - 1);
			}
		}
		iVar3++;
	}
	if (iVar2 == -1)
	{
		return 0;
	}
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < 16)
	{
		if ((Global_B3B8[iVar1 /*120*/].f_56[iVar3] && Global_B3B8[iVar1 /*120*/].f_12[iVar3] == Global_B522[iVar0 /*203*/].f_1) && Global_B3B8[iVar1 /*120*/].f_1[iVar3] == iVar2)
		{
			return Global_B3B8[iVar1 /*120*/].f_45[iVar3];
		}
		iVar3++;
	}
	return 0;
}

int func_407(int iParam0)//Position - 0x2CB76
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

int func_408(int iParam0)//Position - 0x2CBDA
{
	switch (iParam0)
	{
		case 0:
			return 75;
		
		case 1:
			return 76;
		
		case 2:
			return 77;
		
		case 3:
			return 78;
		
		default:
	}
	return 79;
}

void func_409()//Position - 0x2CC17
{
	if (bLocal_104)
	{
		if (((iLocal_58 != 9 && iLocal_58 != 4) && iLocal_58 != 5) && iLocal_58 != 8)
		{
			if (unk_0x724D816EA203A79E(Local_68.f_9))
			{
				if (unk_0x1D403DFADBC2DE3C(Local_68.f_9, 0) || unk_0x36CEFBE9B745A58D(Local_68.f_9))
				{
					func_126(8);
				}
			}
		}
	}
}

void func_410()//Position - 0x2CC74
{
	if (bLocal_104)
	{
		if ((iLocal_58 != 9 && iLocal_58 != 4) && iLocal_58 != 5)
		{
			func_411();
			if (iLocal_62 != 0)
			{
				if (iLocal_62 == 1)
				{
					Global_195F9 = 0;
					func_565();
				}
				else
				{
					func_126(9);
				}
			}
		}
	}
}

void func_411()//Position - 0x2CCBE
{
	float fVar0;
	
	if (unk_0x724D816EA203A79E(Local_75))
	{
		if (unk_0x1D403DFADBC2DE3C(Local_75, 0) || unk_0x36CEFBE9B745A58D(Local_75))
		{
			iLocal_62 = 3;
			return;
		}
		if (iLocal_62 == 4)
		{
			return;
		}
		if (func_412(0))
		{
			iLocal_62 = 4;
			return;
		}
	}
	if (iLocal_62 == 2 || iLocal_62 == 1)
	{
		return;
	}
	if (iLocal_58 == 0)
	{
		if (!SYSTEM::VDIST2(vLocal_332, Local_63) <= ((Local_63.f_3 + 25f) * (Local_63.f_3 + 25f)))
		{
			if (unk_0x41A5D6415E2CC10E(Local_68.f_9))
			{
				iLocal_62 = 1;
				return;
			}
		}
	}
	else if (unk_0x724D816EA203A79E(Local_68.f_9))
	{
		if (!unk_0x1D403DFADBC2DE3C(Local_68.f_9, 0) && !unk_0x36CEFBE9B745A58D(Local_68.f_9))
		{
			if ((iLocal_58 == 2 || iLocal_58 == 1) || iLocal_58 == 7)
			{
				fVar0 = 150f;
				if (unk_0xADC5538B9DCA2177(unk_0xBC25C936A095B5BA()) != -1 || unk_0xADC5538B9DCA2177(Local_68.f_9) != -1)
				{
					fVar0 = (fVar0 + 300f);
				}
				if (!func_108(Local_68.f_9, vLocal_332, fVar0))
				{
					if (unk_0x41A5D6415E2CC10E(Local_68.f_9))
					{
						iLocal_62 = 2;
						return;
					}
				}
				if (Local_68.f_A != 19 && Local_68.f_A != 20)
				{
					if (!func_108(Local_68.f_9, vLocal_332, 1000f))
					{
						iLocal_62 = 2;
						return;
					}
				}
			}
			else if (iLocal_58 == 3 || iLocal_58 == 6)
			{
				if (!func_108(Local_68.f_9, vLocal_332, 80f))
				{
					if (unk_0x41A5D6415E2CC10E(Local_68.f_9))
					{
						iLocal_62 = 2;
						return;
					}
				}
			}
		}
	}
}

int func_412(bool bParam0)//Position - 0x2CE5A
{
	if (func_21(Local_75))
	{
		if ((unk_0x48EBE45A9A7EB10C(Local_75) || unk_0x127812AA6652253F(Local_75)) || unk_0xA0ABD1D1512F5AFC(Local_75))
		{
			return 1;
		}
		if (unk_0xCBBE5AFE2CD2E9B6(unk_0xBC25C936A095B5BA()))
		{
			if (unk_0xE921F8171F0733B3(unk_0xBC25C936A095B5BA(), Local_75))
			{
				return 1;
			}
			if (unk_0x724D816EA203A79E(Local_77))
			{
				if (unk_0xE921F8171F0733B3(unk_0xBC25C936A095B5BA(), Local_77))
				{
					return 1;
				}
			}
			if (unk_0x724D816EA203A79E(Local_79))
			{
				if (unk_0xE921F8171F0733B3(unk_0xBC25C936A095B5BA(), Local_79))
				{
					return 1;
				}
			}
			if (unk_0x724D816EA203A79E(Local_78))
			{
				if (unk_0xE921F8171F0733B3(unk_0xBC25C936A095B5BA(), Local_78))
				{
					return 1;
				}
			}
		}
		if (unk_0xBF94E62A1FA7B7F3(Local_75, 60))
		{
			return 1;
		}
		if (unk_0x2CDE18D6C89522AD(Local_75))
		{
			if (unk_0xE642C1AC73CE364E(Local_75, unk_0xBC25C936A095B5BA(), 3f, 3f, 3f, 0, 1, 0))
			{
				return 1;
			}
		}
		if (unk_0xBF94E62A1FA7B7F3(Local_75, 50))
		{
			return 1;
		}
		if (func_418(Local_75, 1126825984))
		{
			return 1;
		}
		if (func_413(Local_75, 1, 0, 0, 0))
		{
			return 1;
		}
		if (unk_0xC9FA5D38428AB6BE(-1, unk_0x541C2AEF053615BC(Local_75, 1), 15f))
		{
			return 1;
		}
		if (unk_0xBF94E62A1FA7B7F3(Local_75, 72))
		{
			return 1;
		}
		if (bParam0)
		{
			if (unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_413(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x2CFB2
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 8f;
	fVar1 = 15f;
	if (bParam1 == 0)
	{
		fVar0 = 1.86f;
		fVar1 = 1.86f;
	}
	if (bParam2)
	{
		fVar0 = 2f;
	}
	if (func_422(unk_0xBC25C936A095B5BA()) && func_422(iParam0))
	{
		unk_0x9CDD10270A1ACF6F(unk_0xBC25C936A095B5BA(), &iVar2, 1);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_417(iParam0, bParam1, fVar0, fVar1))
			{
				return 1;
			}
			if (func_414(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
		else
		{
			if (unk_0x75F706B6889D7D86(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x32E373675659FDB0(unk_0xBC25C936A095B5BA()))
				{
					if (unk_0x04880508C862E589(unk_0x541C2AEF053615BC(iParam0, 1), fVar0, 1))
					{
						return 1;
					}
				}
			}
			else
			{
				if (bParam1)
				{
					fVar0 = 1.86f;
					fVar1 = 1.86f;
				}
				if (func_417(iParam0, bParam1, fVar0, fVar1))
				{
					return 1;
				}
			}
			if (func_414(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_414(int iParam0, float fParam1, bool bParam2, bool bParam3)//Position - 0x2D0AD
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { unk_0x541C2AEF053615BC(iParam0, 1) };
	vVar1 = { vVar0 };
	vVar0.x = (vVar0.x - fParam1);
	vVar0.y = (vVar0.y - fParam1);
	vVar0.z = (vVar0.z - fParam1);
	vVar1.x = (vVar1.x + fParam1);
	vVar1.y = (vVar1.y + fParam1);
	vVar1.z = (vVar1.z + fParam1);
	if (bParam2)
	{
		if (((unk_0x882DD30F83E61E2F(unk_0x541C2AEF053615BC(iParam0, 1), joaat("weapon_grenade"), fParam1, 1) || unk_0x882DD30F83E61E2F(unk_0x541C2AEF053615BC(iParam0, 1), joaat("weapon_molotov"), fParam1, 1)) || unk_0x882DD30F83E61E2F(unk_0x541C2AEF053615BC(iParam0, 1), joaat("weapon_smokegrenade"), fParam1, 1)) || unk_0x882DD30F83E61E2F(unk_0x541C2AEF053615BC(iParam0, 1), joaat("weapon_stickybomb"), 5f, 1))
		{
			if (bParam3)
			{
				if (func_415(iParam0, fParam1))
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
	}
	else
	{
		if (bParam3)
		{
			if (func_415(iParam0, fParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x876474582C5DECDE(vVar0, vVar1, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_415(int iParam0, float fParam1)//Position - 0x2D1B9
{
	var uVar0;
	vector3 vVar1;
	
	if ((((unk_0x532D2AB42B013CC0(iParam0, joaat("weapon_grenade"), fParam1, &vVar1, &uVar0, 0) || unk_0x532D2AB42B013CC0(iParam0, joaat("weapon_smokegrenade"), fParam1, &vVar1, &uVar0, 0)) || unk_0x532D2AB42B013CC0(iParam0, joaat("weapon_bzgas"), fParam1, &vVar1, &uVar0, 0)) || unk_0x532D2AB42B013CC0(iParam0, joaat("weapon_stickybomb"), fParam1, &vVar1, &uVar0, 0)) || unk_0x532D2AB42B013CC0(iParam0, joaat("weapon_molotov"), fParam1, &vVar1, &uVar0, 0))
	{
		if (func_416(iParam0, vVar1, 90f, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_416(int iParam0, vector3 vParam1, float fParam2, int iParam3)//Position - 0x2D24E
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	vVar0 = { func_184(vParam1 - unk_0x541C2AEF053615BC(iParam0, 1)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		vVar1 = { unk_0xF90427F311003E57(iParam0) };
	}
	else
	{
		vVar1 = { func_184(unk_0x823166D9421223CA(iParam0, 31086, 0f, 5f, 0f) - unk_0x823166D9421223CA(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar2 = func_375(vVar1, vVar0);
	if (fVar2 <= SYSTEM::COS((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

int func_417(int iParam0, bool bParam1, float fParam2, float fParam3)//Position - 0x2D2DC
{
	if (bParam1)
	{
		if (unk_0x32E373675659FDB0(unk_0xBC25C936A095B5BA()))
		{
			if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iParam0, fParam3, fParam3, fParam3, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	if (unk_0x04880508C862E589(unk_0x541C2AEF053615BC(iParam0, 1), fParam2, 1))
	{
		return 1;
	}
	return 0;
}

int func_418(int iParam0, float fParam1)//Position - 0x2D324
{
	float fVar0;
	
	if (func_422(unk_0xBC25C936A095B5BA()) && func_422(iParam0))
	{
		if (func_420(iParam0) || unk_0x425BEBAA53B39EBF(unk_0xB5CEFD608600A09F(), iParam0))
		{
			if (unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
			{
				if (func_419(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_419(int iParam0, float fParam1)//Position - 0x2D39A
{
	return func_370(iParam0, unk_0xBC25C936A095B5BA(), fParam1, 1, 250, 7);
}

int func_420(int iParam0)//Position - 0x2D3B2
{
	if (unk_0xDF25D3BB3759E7D1(unk_0xB5CEFD608600A09F(), iParam0) && unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), 6))
	{
		return 1;
	}
	return 0;
}

void func_421(int iParam0, vector3 vParam1, float fParam2, bool bParam3, bool bParam4)//Position - 0x2D3DA
{
	func_18(iParam0, vParam1, fParam2, bParam3, 1);
	if (bParam4)
	{
		if (func_422(iParam0))
		{
			unk_0x2EB4D46478766D87(iParam0, 0, 0);
		}
	}
}

int func_422(int iParam0)//Position - 0x2D408
{
	if (unk_0x724D816EA203A79E(iParam0))
	{
		if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_423(bool bParam0)//Position - 0x2D429
{
	if (!bParam0 && unk_0xB731B8C5BCE89836(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_1163A, 0);
}

void func_424(int iParam0, bool bParam1)//Position - 0x2D454
{
	func_434(bParam1, 1);
	if (bParam1)
	{
		func_425();
	}
	iLocal_59 = iParam0;
	bLocal_104 = false;
	if (func_69())
	{
		iLocal_105 = 1;
	}
	else
	{
		iLocal_105 = 0;
	}
	if (!func_69())
	{
		if (iLocal_59 == 0)
		{
			if (func_422(unk_0xBC25C936A095B5BA()))
			{
				func_421(unk_0xBC25C936A095B5BA(), vLocal_336, fLocal_118, 0, 0);
				unk_0xF3F01A78937DC905(0f);
				unk_0x2B9AEC08E469E384(0f, 1065353216);
				func_10(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), 50f, 13, 5000, 0, 0);
				iLocal_105 = 1;
			}
		}
	}
	func_1(iLocal_59);
}

void func_425()//Position - 0x2D4E3
{
	func_426(1, 0);
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (!func_69())
		{
			unk_0x49D46EE47C9CCB66(unk_0xBC25C936A095B5BA());
			func_421(unk_0xBC25C936A095B5BA(), vLocal_336, fLocal_118, 0, 0);
			unk_0xF3F01A78937DC905(0f);
			unk_0x2B9AEC08E469E384(0f, 1065353216);
		}
		unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), 0, 0);
		unk_0xCE6A8FE7DACF8BD4(unk_0xB5CEFD608600A09F(), 0);
	}
	func_19();
	unk_0x926FDA90094AA5FA(iLocal_322);
	func_507();
	func_126(0);
}

void func_426(bool bParam0, bool bParam1)//Position - 0x2D555
{
	unk_0xEB233A3B7635D2AC();
	if (unk_0xF16DAFF595E80F7C())
	{
		unk_0x7456702622C62EA0(1);
	}
	if (Global_195F9 == 0)
	{
		func_19();
	}
	unk_0xDF53A66AEE1401AA(1f);
	unk_0xE85B33FB221A23CD(2, 1);
	unk_0xE85B33FB221A23CD(3, 1);
	unk_0xE85B33FB221A23CD(4, 1);
	unk_0xE85B33FB221A23CD(5, 1);
	unk_0x6E52C7765A0F4382(1);
	func_432(0);
	func_15(0, 0);
	unk_0x59B038076F830627(true);
	unk_0x43F06392C4EF25E0(true);
	func_431(0);
	unk_0x70559E09D593F993(0);
	func_430(1);
	if (iLocal_58 > 2)
	{
		func_392(0, &uLocal_144);
	}
	unk_0x483687B0FCA5415A(iLocal_143, 0);
	unk_0x02DD9F29D9655E48();
	func_110(&uLocal_157, 2);
	func_110(&uLocal_157, 3);
	func_110(&uLocal_157, 4);
	func_318(&uLocal_44, 0, 0);
	unk_0x062C9995BFD27B2A(false, 0, 3000, 1, 0, 0);
	unk_0x2991B7F8ABC4BB0C(1f);
	func_24(1, 1, 1, 1);
	unk_0x01EB6657F2BCE9D3(0);
	func_429(1, 1, 1);
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
	}
	if (func_21(unk_0xBC25C936A095B5BA()))
	{
		unk_0xC8FD3EBBB90E8D7F(unk_0xBC25C936A095B5BA(), 32, true);
		unk_0xC8FD3EBBB90E8D7F(unk_0xBC25C936A095B5BA(), 250, true);
		unk_0x44C98C11ED6DD327(unk_0xBC25C936A095B5BA());
	}
	func_111();
	func_90(bParam0);
	func_427(bParam1);
}

void func_427(bool bParam0)//Position - 0x2D66C
{
	if (bParam0)
	{
		unk_0x841D233D3CE81152(0, true);
	}
	unk_0x4EA570997E107F35("oddjobs@bailbond_mountain");
	unk_0x4EA570997E107F35(func_105());
	func_428();
}

void func_428()//Position - 0x2D692
{
	unk_0x6984B170050030EF(func_365());
	unk_0x6984B170050030EF(func_366());
}

void func_429(bool bParam0, int iParam1, int iParam2)//Position - 0x2D6AA
{
	bool bVar0;
	
	bVar0 = true;
	if (unk_0x102F1A3BD4B68933())
	{
		while (bVar0)
		{
			bVar0 = unk_0x102F1A3BD4B68933();
			if (unk_0x866EAD7E27D8D0F8())
			{
				unk_0x73F91C7985A4C83B(0);
			}
			if (unk_0xDC9E16E99286F31D())
			{
				unk_0xD103510B8989BEB2();
			}
			if (unk_0x102F1A3BD4B68933() && !unk_0x866EAD7E27D8D0F8())
			{
				bVar0 = false;
			}
			SYSTEM::WAIT(0);
		}
		if (bParam0)
		{
			func_24(iParam1, iParam2, 1, 1);
		}
	}
}

void func_430(int iParam0)//Position - 0x2D709
{
	Global_16126 = iParam0;
}

void func_431(bool bParam0)//Position - 0x2D717
{
	if (bParam0)
	{
		unk_0xA902E18EDF6FA0C8(2, 1862763509, 296331235);
		unk_0xA902E18EDF6FA0C8(2, 1862763509, 1166638144);
		unk_0xA902E18EDF6FA0C8(2, 1862763509, 2037579709);
		unk_0xA902E18EDF6FA0C8(2, 1862763509, 2017343592);
		unk_0xA902E18EDF6FA0C8(2, 1862763509, -1821475077);
		unk_0xA902E18EDF6FA0C8(2, 1862763509, 1782292358);
		unk_0x74E34CCB87168855(unk_0xB5CEFD608600A09F(), 0);
	}
	else
	{
		unk_0xA902E18EDF6FA0C8(255, 1862763509, 296331235);
		unk_0xA902E18EDF6FA0C8(255, 1862763509, 1166638144);
		unk_0xA902E18EDF6FA0C8(255, 1862763509, 2037579709);
		unk_0xA902E18EDF6FA0C8(255, 1862763509, 2017343592);
		unk_0xA902E18EDF6FA0C8(255, 1862763509, -1821475077);
		unk_0xA902E18EDF6FA0C8(255, 1862763509, 1782292358);
		unk_0x74E34CCB87168855(unk_0xB5CEFD608600A09F(), 1);
	}
}

void func_432(bool bParam0)//Position - 0x2D7F3
{
	if (bParam0)
	{
		func_433();
		if (Global_389D.f_1 == 10 || Global_389D.f_1 == 9)
		{
			unk_0xF0059F27F7BB6680(&Global_93C, 16);
		}
		Global_389D.f_1 = 1;
		if (func_16(0))
		{
			func_13(0);
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

void func_433()//Position - 0x2D856
{
	if (Global_389D.f_1 == 9 || Global_389D.f_1 == 10)
	{
		Global_3DED = 0;
		Global_3DE9 = 1;
	}
}

void func_434(bool bParam0, bool bParam1)//Position - 0x2D87F
{
	if (bParam0)
	{
		func_429(0, 1, 1);
	}
	if (!unk_0x17FAADF9916EF741())
	{
		unk_0x7A41D32A383895D8(0);
	}
	func_191(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, bParam1, 1, 1, 1);
}

void func_435(vector3 vParam0, float fParam1, int iParam2, int iParam3)//Position - 0x2D8B2
{
	if (func_506())
	{
		unk_0x6C87EFD58B261C6F(0);
		unk_0x7CB6FD92BE491AD9(&(Global_16B1B.f_14), 2);
		unk_0x121BBDEFA4F0C22B(1);
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
		{
			unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 0);
		}
		Global_16B17 = { vParam0 };
		Global_16B1A = fParam1;
		Global_16B16 = 1;
		if (iParam2 == 1)
		{
			unk_0xF0059F27F7BB6680(&(Global_16B1B.f_14), 14);
		}
		else
		{
			unk_0x7CB6FD92BE491AD9(&(Global_16B1B.f_14), 14);
		}
		if (iParam3 == 1)
		{
			unk_0xF0059F27F7BB6680(&(Global_16B1B.f_14), 24);
		}
		else
		{
			unk_0x7CB6FD92BE491AD9(&(Global_16B1B.f_14), 24);
		}
		func_68(1);
	}
}

void func_436(int iParam0, vector3 vParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x2D947
{
	int iVar0;
	
	iVar0 = 1;
	if (!func_506() || !func_504())
	{
		iVar0 = 0;
	}
	if (iVar0 == 1)
	{
		if (!func_501(iParam4, iParam5, iParam6, iParam11))
		{
			iVar0 = 0;
		}
	}
	if (iVar0 == 1)
	{
		func_499();
		while (!func_498())
		{
			SYSTEM::WAIT(0);
		}
		*iParam0 = func_479(vParam1, fParam2);
	}
	else if (iParam7 == 1)
	{
		if (func_99(vParam1, 0f, 0f, 0f, 0))
		{
			vParam1 = { Global_181DF.f_B3B };
			fParam2 = Global_181DF.f_B3B.f_6;
		}
		unk_0x6C5F5B5F6894CCE3(vParam1, 5f, 1, 0, 0, false);
		func_475(vParam1, 5f, 0);
		if (func_82(iParam10))
		{
			func_474(iParam10, 0);
			while (!func_437(iParam0, iParam10, vParam1, fParam2, 1, 0))
			{
				SYSTEM::WAIT(0);
			}
		}
		else
		{
			unk_0xF243B7A14FCFD0F4(iParam8);
			while (!unk_0xD6513D668481290A(iParam8))
			{
				SYSTEM::WAIT(0);
			}
			*iParam0 = unk_0x61C05BF08A1E0EFE(iParam8, vParam1, fParam2, 1, 1, 0);
			if (unk_0x724D816EA203A79E(*iParam0) && !unk_0x1D403DFADBC2DE3C(*iParam0, 0))
			{
				if (iParam9 == 0)
				{
					unk_0x6012A6A4F2950585(*iParam0, 0);
				}
				else if (iParam9 > 0)
				{
					unk_0x914C5DE0B15B8B59(*iParam0, iParam9, iParam9);
				}
			}
			unk_0x2CA123B0622F495C(iParam8);
		}
	}
	if (iParam3 == 1)
	{
		if (((unk_0x724D816EA203A79E(*iParam0) && !unk_0x1D403DFADBC2DE3C(*iParam0, 0)) && unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA())) && !unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			unk_0xBD53A029D0155A42(unk_0xBC25C936A095B5BA(), *iParam0, -1);
			unk_0xF0A40F19AAB79E88(*iParam0, 1084227584);
		}
	}
}

int func_437(int iParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4, int iParam5)//Position - 0x2DADB
{
	int iVar0;
	var uVar1;
	struct<97> Var2;
	int iVar3;
	int iVar4;
	bool bVar5;
	char cVar6[16];
	int iVar7;
	
	if (func_82(iParam1))
	{
		Var2.f_B = 12;
		Var2.f_1F = 49;
		Var2.f_51 = 2;
		func_161(iParam1, &Var2, iParam5);
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
				*iParam0 = unk_0x61C05BF08A1E0EFE(Global_19B04.f_932.f_21B.f_953[0 /*295*/][iParam1 /*98*/], vParam2, fParam3, 0, 0, 0);
				unk_0xF0A40F19AAB79E88(*iParam0, 1084227584);
				unk_0x551DF575AE9A2969(*iParam0, 0);
				unk_0x2487C8A04B65E2BD(*iParam0, 0);
				unk_0xA73D1278857991A2(*iParam0, 1);
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
				if (func_473(&uVar1, &iVar0))
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
				func_469(iParam0, &(Global_19B04.f_932.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_1F), &(Global_19B04.f_932.f_21B.f_953[0 /*295*/][iParam1 /*98*/].f_51));
				unk_0x0C95DC9BB0F56943(*iParam0, Var2.f_60);
				if (iParam1 == 2)
				{
					if (unk_0x6F79ECA8C83E4357(*iParam0) == joaat("bodhi2"))
					{
						func_467(iParam0);
					}
				}
				if (bParam4)
				{
					unk_0x2CA123B0622F495C(Global_19B04.f_932.f_21B.f_953[0 /*295*/][iParam1 /*98*/]);
				}
				func_466(*iParam0, iParam1);
				return 1;
			}
		}
		else if (Global_19B04.f_932.f_21B.f_953[1 /*295*/][iParam1 /*98*/] == Var2)
		{
			unk_0xF243B7A14FCFD0F4(Global_19B04.f_932.f_21B.f_953[1 /*295*/][iParam1 /*98*/]);
			if (unk_0xD6513D668481290A(Global_19B04.f_932.f_21B.f_953[1 /*295*/][iParam1 /*98*/]))
			{
				*iParam0 = unk_0x61C05BF08A1E0EFE(Global_19B04.f_932.f_21B.f_953[1 /*295*/][iParam1 /*98*/], vParam2, fParam3, 0, 0, 0);
				unk_0xF0A40F19AAB79E88(*iParam0, 1084227584);
				unk_0x551DF575AE9A2969(*iParam0, 0);
				unk_0x2487C8A04B65E2BD(*iParam0, 0);
				unk_0xA73D1278857991A2(*iParam0, 1);
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
				if (func_473(&uVar1, &iVar0))
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
				func_469(iParam0, &(Global_19B04.f_932.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_1F), &(Global_19B04.f_932.f_21B.f_953[1 /*295*/][iParam1 /*98*/].f_51));
				unk_0x0C95DC9BB0F56943(*iParam0, Var2.f_60);
				if (iParam1 == 2)
				{
					if (unk_0x6F79ECA8C83E4357(*iParam0) == joaat("bodhi2"))
					{
						func_467(iParam0);
					}
				}
				if (bParam4)
				{
					unk_0x2CA123B0622F495C(Global_19B04.f_932.f_21B.f_953[1 /*295*/][iParam1 /*98*/]);
				}
				func_466(*iParam0, iParam1);
				return 1;
			}
		}
		else
		{
			unk_0xF243B7A14FCFD0F4(Var2);
			if (unk_0xD6513D668481290A(Var2))
			{
				bVar5 = true;
				*iParam0 = unk_0x61C05BF08A1E0EFE(Var2, vParam2, fParam3, 1, 1, 0);
				unk_0xF0A40F19AAB79E88(*iParam0, 1084227584);
				unk_0x551DF575AE9A2969(*iParam0, 0);
				unk_0x2487C8A04B65E2BD(*iParam0, 0);
				unk_0xA73D1278857991A2(*iParam0, 1);
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
				if (func_473(&uVar1, &iVar0))
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
				func_469(iParam0, &(Var2.f_1F), &(Var2.f_51));
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
						func_467(iParam0);
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
					func_438(iParam1, iParam0, 0, 1);
				}
				if (bParam4)
				{
					unk_0x2CA123B0622F495C(Var2);
				}
				if (bVar5)
				{
					func_466(*iParam0, iParam1);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_438(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x2E91F
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	
	if ((func_82(iParam0) && unk_0x724D816EA203A79E(*iParam1)) && unk_0xE59B7F5A03335350(*iParam1, 0))
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
			func_130(*iParam1, iParam0);
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
		if (unk_0x1092AA16A9506AA1(*iParam1) >= 0 && func_442(*iParam1, 0, &uVar0))
		{
			func_171(iParam1, &(Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_1F), &(Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_51));
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
				Global_19B04.f_4E79[iParam0 /*43*/].f_1F = func_441(*iParam1);
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
				func_439(Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_5, Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_7, iVar3, 1, &(Global_19B04.f_4E79[iParam0 /*43*/].f_1));
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
				func_439(Global_19B04.f_932.f_21B.f_953[iParam2 /*295*/][iParam0 /*98*/].f_6, -1, iVar3, 0, &(Global_19B04.f_4E79[iParam0 /*43*/].f_2));
			}
		}
	}
}

int func_439(int iParam0, int iParam1, int iParam2, bool bParam3, var uParam4)//Position - 0x2F533
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (func_440(iVar0, &sVar2, &iVar1, &iVar3, &iVar4))
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

bool func_440(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4)//Position - 0x2F5A6
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

float func_441(int iParam0)//Position - 0x30A9A
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

int func_442(int iParam0, bool bParam1, var uParam2)//Position - 0x30B4A
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
	if ((!func_464(iVar0, bParam1, uParam2) && !func_463(unk_0xB5CEFD608600A09F())) && !func_448(iParam0))
	{
		return 0;
	}
	if (func_463(unk_0xB5CEFD608600A09F()))
	{
		if (func_447(iVar0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	bVar1 = false;
	if (func_446(unk_0xB5CEFD608600A09F()) && (unk_0x8C1A6E7D5F410F4A(iVar0) || unk_0xA19D269B4B5A1532(iVar0)))
	{
		bVar1 = true;
	}
	if (((((((unk_0x10A01B0B02B273EF(iParam0) && unk_0x6F79ECA8C83E4357(iParam0) != -32236122) && unk_0x6F79ECA8C83E4357(iParam0) != 177270108) && unk_0x6F79ECA8C83E4357(iParam0) != 387748548) && unk_0x6F79ECA8C83E4357(iParam0) != 1502869817) && unk_0x6F79ECA8C83E4357(iParam0) != -1881846085) && !bVar1) && !(func_445(unk_0x6F79ECA8C83E4357(iParam0)) && func_443(unk_0xB5CEFD608600A09F())))
	{
		*uParam2 = 2;
		return 0;
	}
	if (!unk_0x7AF0088ABFA713B6())
	{
		if ((func_143(iParam0) && unk_0x6F79ECA8C83E4357(iParam0) != joaat("sentinel2")) && unk_0x6F79ECA8C83E4357(iParam0) != joaat("issi2"))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	return 1;
}

int func_443(int iParam0)//Position - 0x30CC7
{
	if (iParam0 != func_336())
	{
		if (func_335(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1)
			{
				return func_444(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 11;
			}
		}
	}
	return 0;
}

int func_444(int iParam0)//Position - 0x30D0E
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

int func_445(int iParam0)//Position - 0x3105A
{
	if (((iParam0 == 1945374990 || iParam0 == 1653666139) || iParam0 == 219613597) || iParam0 == -1988428699)
	{
		return 1;
	}
	return 0;
}

int func_446(int iParam0)//Position - 0x3109C
{
	if (iParam0 != func_336())
	{
		if (func_335(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1)
			{
				return func_444(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 7;
			}
		}
	}
	return 0;
}

int func_447(int iParam0)//Position - 0x310E2
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

int func_448(int iParam0)//Position - 0x31117
{
	if (func_462(unk_0xB5CEFD608600A09F()) || func_461(unk_0xB5CEFD608600A09F()))
	{
		if (func_449(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_449(int iParam0)//Position - 0x31146
{
	if ((!unk_0x724D816EA203A79E(iParam0) || !unk_0xE59B7F5A03335350(iParam0, 0)) || unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		return 0;
	}
	if (func_452(iParam0, 0))
	{
		return 1;
	}
	if (unk_0x3C03CFD5DD1E2D97(iParam0, "Player_Vehicle"))
	{
		if (unk_0x67CFC62D543B19EF(iParam0, "Player_Vehicle") == unk_0x6985F05381EF147F(unk_0xB5CEFD608600A09F()))
		{
			if (func_450(iParam0))
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

int func_450(int iParam0)//Position - 0x311FD
{
	if (!unk_0x724D816EA203A79E(iParam0) || !unk_0xE59B7F5A03335350(iParam0, 0))
	{
		return 0;
	}
	if (func_451(unk_0x6F79ECA8C83E4357(iParam0)))
	{
		return 1;
	}
	return 0;
}

int func_451(int iParam0)//Position - 0x31233
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

int func_452(int iParam0, bool bParam1)//Position - 0x3128C
{
	switch (unk_0x6F79ECA8C83E4357(iParam0))
	{
		case joaat("technical"):
		case joaat("insurgent"):
			if (func_454(unk_0x6F79ECA8C83E4357(iParam0), 0))
			{
				if (Global_267214.f_122 == iParam0)
				{
					return 1;
				}
				else if (func_453(iParam0) != -1 && !bParam1)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_453(int iParam0)//Position - 0x312E7
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

int func_454(int iParam0, int iParam1)//Position - 0x31321
{
	if (iParam1 == 0)
	{
		if (func_460(iParam0, 0))
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
			return func_459();
			break;
		
		case joaat("sabregt"):
			if (Global_40001.f_351A)
			{
				return func_458();
			}
			break;
		
		case joaat("tornado"):
		case joaat("tornado2"):
		case joaat("tornado3"):
			if (Global_40001.f_351B)
			{
				return func_458();
			}
			break;
		
		case joaat("virgo3"):
			if (Global_40001.f_3519)
			{
				return func_458();
			}
			break;
		
		case joaat("minivan"):
			if (Global_40001.f_351C)
			{
				return func_458();
			}
			break;
		
		case joaat("slamvan"):
			if (Global_40001.f_351E)
			{
				return func_458();
			}
			break;
		
		case joaat("sultan"):
		case joaat("banshee"):
			return func_457();
			break;
		
		case joaat("comet2"):
			if (Global_40001.f_4677)
			{
				return func_456();
			}
			break;
		
		case joaat("diablous"):
			if (Global_40001.f_4679)
			{
				return func_456();
			}
			break;
		
		case joaat("fcr"):
			if (Global_40001.f_467D)
			{
				return func_456();
			}
			break;
		
		case joaat("elegy2"):
			if (Global_40001.f_467A)
			{
				return func_456();
			}
			break;
		
		case joaat("nero"):
			if (Global_40001.f_4681)
			{
				return func_456();
			}
			break;
		
		case joaat("italigtb"):
			if (Global_40001.f_467F)
			{
				return func_456();
			}
			break;
		
		case joaat("specter"):
			if (Global_40001.f_4684)
			{
				return func_456();
			}
			break;
		
		case joaat("technical"):
			if (Global_40001.f_4E1B)
			{
				return func_455();
			}
			break;
		
		case joaat("insurgent"):
			if (Global_40001.f_4E1C)
			{
				return func_455();
			}
			break;
	}
	return 0;
}

bool func_455()//Position - 0x31501
{
	return unk_0x7B2F21BFE86AEB61(2067165443);
}

bool func_456()//Position - 0x31512
{
	return unk_0x7B2F21BFE86AEB61(-957277403);
}

bool func_457()//Position - 0x31523
{
	return unk_0x7B2F21BFE86AEB61(210122941);
}

bool func_458()//Position - 0x31534
{
	return unk_0x7B2F21BFE86AEB61(-1894522408);
}

bool func_459()//Position - 0x31545
{
	return unk_0x7B2F21BFE86AEB61(1630677557);
}

int func_460(int iParam0, int iParam1)//Position - 0x31556
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

int func_461(int iParam0)//Position - 0x317C9
{
	if (iParam0 != func_336())
	{
		if (func_335(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1 && Global_24FB5C[iParam0 /*406*/].f_131.f_4 != func_336())
			{
				return func_444(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 5;
			}
		}
	}
	return 0;
}

int func_462(int iParam0)//Position - 0x31828
{
	if (iParam0 != func_336())
	{
		if (func_335(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1 && Global_24FB5C[iParam0 /*406*/].f_131.f_4 != func_336())
			{
				return func_444(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 8;
			}
		}
	}
	return 0;
}

int func_463(int iParam0)//Position - 0x31888
{
	if (iParam0 != func_336())
	{
		if (func_335(iParam0, 1, 1))
		{
			if (Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1)
			{
				return func_444(Global_24FB5C[iParam0 /*406*/].f_131.f_1) == 9;
			}
		}
	}
	return 0;
}

int func_464(int iParam0, bool bParam1, var uParam2)//Position - 0x318CF
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
	if (func_446(unk_0xB5CEFD608600A09F()) && (unk_0x8C1A6E7D5F410F4A(iParam0) || unk_0xA19D269B4B5A1532(iParam0)))
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
		if (func_465(iParam0))
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

int func_465(int iParam0)//Position - 0x31CE7
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

void func_466(int iParam0, int iParam1)//Position - 0x31D10
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

void func_467(int iParam0)//Position - 0x31D92
{
	if (!func_468(*iParam0))
	{
		unk_0xE54F7105CEA81918(*iParam0, 5, !Global_19B04.f_2360.f_63.f_3A[119]);
	}
}

bool func_468(int iParam0)//Position - 0x31DBD
{
	return unk_0xFC8A228C62614C5C(iParam0, 5);
}

int func_469(int iParam0, var uParam1, var uParam2)//Position - 0x31DCC
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
	if (func_460(unk_0x6F79ECA8C83E4357(*iParam0), 1) && unk_0x3EB14CBD49DA0017(*iParam0, 24) != func_472(*iParam0, ((*uParam1)[38] - 1)))
	{
		unk_0x5C9F67BE33A5A3EE(*iParam0, 24, func_472(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	func_471(iParam0);
	if (func_470(*iParam0))
	{
		unk_0xDB35A2F9333ABEC5(*iParam0, 1);
		unk_0xA73D1278857991A2(*iParam0, 1);
	}
	return 1;
}

int func_470(int iParam0)//Position - 0x31F4A
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

void func_471(var uParam0)//Position - 0x32026
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

int func_472(int iParam0, int iParam1)//Position - 0x32066
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

int func_473(var uParam0, int iParam1)//Position - 0x3214B
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

void func_474(int iParam0, int iParam1)//Position - 0x3218C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x724D816EA203A79E(Global_1613F[iVar0]))
		{
			if (iParam0 == 145 || Global_16149[iVar0] == iParam0)
			{
				if (iParam1 == 0 || unk_0x6F79ECA8C83E4357(Global_1613F[iVar0]) == func_160(iParam0, iParam1))
				{
					if (!unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), Global_1613F[iVar0], 0))
					{
						unk_0x77815D3407C6700D(Global_1613F[iVar0], false, 1);
						unk_0xCF6040807CC0E4A5(&(Global_1613F[iVar0]));
						Global_16149[iVar0] = 145;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_475(vector3 vParam0, float fParam1, bool bParam2)//Position - 0x3222A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_159(&(Global_110A8.f_22B[0 /*21*/]), iVar0))
		{
			if (unk_0xF0F2FC9DE291567F(vParam0, Global_110A8.f_22B[0 /*21*/], bParam2) <= fParam1)
			{
				func_476(iVar0);
			}
		}
		iVar0++;
	}
}

void func_476(int iParam0)//Position - 0x3227A
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_159(&(Global_110A8.f_22B[0 /*21*/]), iParam0))
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
			if (((((iParam0 == 24 && func_165(iParam0, 0)) && Global_11435.f_42 == 0) && Global_19B04.f_7F22.f_7A6[Global_110A8.f_22B[0 /*21*/].f_E] != 0) && Global_19B04.f_7F22.f_7A6[Global_110A8.f_22B[0 /*21*/].f_E] > 3) && (!func_477(0, Global_110A8.f_22B[0 /*21*/].f_C) || !func_477(1, Global_110A8.f_22B[0 /*21*/].f_C)))
			{
				func_166(&(Global_19B04.f_7F22.f_45[Global_110A8.f_22B[0 /*21*/].f_E /*78*/]), &Global_11435);
				Global_11483 = Global_19B04.f_7F22.f_15D7;
			}
			func_163(iParam0, 0);
		}
	}
}

int func_477(int iParam0, int iParam1)//Position - 0x323EC
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
	if (iParam0 < 0 || iParam0 >= func_478(&(Global_19B04.f_7F22.f_13AE[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_133(Global_19B04.f_7F22.f_13AE[iVar0 /*157*/][iParam0 /*78*/].f_42, 0);
}

int func_478(var uParam0)//Position - 0x3245E
{
	return *uParam0;
}

int func_479(vector3 vParam0, float fParam1)//Position - 0x32469
{
	return func_480(&(Global_181DF.f_B3B), vParam0, fParam1, 0);
}

int func_480(var uParam0, vector3 vParam1, float fParam2, bool bParam3)//Position - 0x32483
{
	int iVar0;
	vector3 vVar1;
	bool bVar2;
	var uVar3;
	int iVar4;
	
	if (func_497(uParam0))
	{
		if (func_99(vParam1, 0f, 0f, 0f, 0))
		{
			vParam1 = { *uParam0 };
			fParam2 = uParam0->f_6;
		}
		if (uParam0->f_C.f_42 == joaat("monster") || uParam0->f_C.f_42 == joaat("marshall"))
		{
			if (unk_0x7352105EC4D7541F(vParam1, -816.8716f, 185.6238f, 71.40275f, -807.4894f, 189.3762f, 75.27323f, 6.5f, 0, 1))
			{
				vParam1 = { -850.93f, 158.82f, 65.7f };
				fParam2 = 89.5f;
			}
		}
		if (func_496(uParam0))
		{
			unk_0x6C5F5B5F6894CCE3(vParam1, 5f, 1, 0, 0, false);
			func_475(vParam1, 5f, 0);
			iVar0 = unk_0x61C05BF08A1E0EFE(uParam0->f_C.f_42, vParam1, fParam2, 1, 1, 0);
			if (unk_0x724D816EA203A79E(iVar0))
			{
				vVar1 = { unk_0x541C2AEF053615BC(iVar0, 1) };
				if (SYSTEM::VDIST2(vVar1, -1151.15f, -1530.32f, 7.48925f) <= 3f)
				{
					unk_0xD5874E4A4BF782FC(iVar0, vParam1, 0, 0, 1);
				}
				func_485(iVar0, &(uParam0->f_C), 0, 1);
				bVar2 = true;
				if (unk_0xE7B3A320107C1379(uParam0->f_C.f_42) || unk_0x7974165A9BC75283(uParam0->f_C.f_42))
				{
					if (!unk_0xD841AD3F7B98FC00(vParam1.x, vParam1.y, (vParam1.z + 30f), vParam1.x, vParam1.y, (vParam1.z - 30f), &uVar3))
					{
						bVar2 = false;
					}
				}
				if (bVar2)
				{
					unk_0xF0A40F19AAB79E88(iVar0, 1084227584);
				}
				if (uParam0->f_7 == 1)
				{
					if (bParam3)
					{
						if (unk_0x7C28D15641461C68(unk_0x6F79ECA8C83E4357(iVar0)))
						{
							func_474(uParam0->f_B, 1);
						}
						else if (unk_0x7512ED01F3F46714(unk_0x6F79ECA8C83E4357(iVar0)))
						{
							func_474(uParam0->f_B, 2);
						}
					}
					unk_0x551DF575AE9A2969(iVar0, 0);
					unk_0x2487C8A04B65E2BD(iVar0, 0);
					unk_0xA73D1278857991A2(iVar0, 1);
					func_466(iVar0, uParam0->f_B);
				}
				else if ((!func_482(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_A) && unk_0x3362CDE8460ED38B(unk_0x1377080E9B0BD993(), "startup_positioning"))
				{
					iVar4 = func_481(iVar0);
					if (iVar4 == -1)
					{
						uParam0->f_A = 0;
					}
					else
					{
						func_476(iVar4);
					}
				}
				if (((Global_16B1B != 13 && Global_16B1B != 10) && Global_16B1B != 11) && Global_16B1B != 12)
				{
					if (unk_0x56BEECB328B6D29D(&(Global_16B1B.f_3)) == Global_11484)
					{
						if (uParam0->f_C.f_42 == Global_19B04.f_7F22.f_45[21 /*78*/].f_42)
						{
							func_163(24, 0);
							func_476(24);
						}
					}
				}
				if (uParam0->f_9 == 1)
				{
					func_130(iVar0, uParam0->f_B);
				}
				unk_0x2CA123B0622F495C(uParam0->f_C.f_42);
				vVar1 = { unk_0x541C2AEF053615BC(iVar0, 1) };
			}
			return iVar0;
		}
	}
	return iVar0;
}

int func_481(int iParam0)//Position - 0x32735
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if ((unk_0x724D816EA203A79E(Global_110A8.f_1E4[iVar0]) && !unk_0x1D403DFADBC2DE3C(Global_110A8.f_1E4[iVar0], 0)) && unk_0xE59B7F5A03335350(Global_110A8.f_1E4[iVar0], 0))
		{
			unk_0x87F182D2DA225F0D(iParam0, &iVar1, &iVar2);
			unk_0x87F182D2DA225F0D(Global_110A8.f_1E4[iVar0], &iVar3, &iVar4);
			if (((unk_0x6F79ECA8C83E4357(iParam0) == unk_0x6F79ECA8C83E4357(Global_110A8.f_1E4[iVar0]) && unk_0x0FF608FD384AF8FA(iParam0) == unk_0x0FF608FD384AF8FA(Global_110A8.f_1E4[iVar0])) && iVar1 == iVar2) && iVar3 == iVar4)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_482(int iParam0, vector3 vParam1, bool bParam2)//Position - 0x327F8
{
	int iVar0;
	var uVar1[3];
	int iVar2;
	int iVar3;
	
	iVar0 = unk_0x6F79ECA8C83E4357(iParam0);
	switch (iVar0)
	{
		case joaat("cargobob"):
			if (func_484(iParam0, Global_110A8.f_8B[38], 0))
			{
				func_476(38);
				return 1;
			}
			break;
		
		case 1938952078:
			if (func_484(iParam0, Global_110A8.f_8B[43], 1))
			{
				func_476(43);
				return 1;
			}
			break;
		
		case joaat("cuban800"):
			iVar2 = unk_0xD7F48BFEBC0E3FB2(unk_0xBC25C936A095B5BA(), &uVar1);
			iVar3 = 0;
			while (iVar3 <= (iVar2 - 1))
			{
				if (func_484(iParam0, uVar1[iVar3], 1) && func_483(unk_0x541C2AEF053615BC(uVar1[iVar3], 1), 2136.133f, 4780.563f, 39.9702f, 5f, 0))
				{
					if ((!bParam2 || func_99(vParam1, 0f, 0f, 0f, 0)) || unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(iParam0, 1), unk_0x541C2AEF053615BC(uVar1[iVar3], 1), true) < 10f)
					{
						unk_0xCF6040807CC0E4A5(&iParam0);
						return 1;
					}
					else
					{
						return 0;
					}
				}
				iVar3++;
			}
			break;
		
		case joaat("luxor2"):
			if ((unk_0x724D816EA203A79E(Global_110A8.f_1E4[14]) && unk_0xE59B7F5A03335350(iParam0, 0)) && unk_0xE59B7F5A03335350(Global_110A8.f_1E4[14], 0))
			{
				if (unk_0x6F79ECA8C83E4357(Global_110A8.f_1E4[14]) == joaat("luxor2") && unk_0x0FF608FD384AF8FA(iParam0) == unk_0x0FF608FD384AF8FA(Global_110A8.f_1E4[14]))
				{
					func_476(14);
					return 1;
				}
			}
			break;
		
		case joaat("swift2"):
			if ((unk_0x724D816EA203A79E(Global_110A8.f_1E4[20]) && unk_0xE59B7F5A03335350(iParam0, 0)) && unk_0xE59B7F5A03335350(Global_110A8.f_1E4[20], 0))
			{
				if (unk_0x6F79ECA8C83E4357(Global_110A8.f_1E4[20]) == joaat("swift2") && unk_0x0FF608FD384AF8FA(iParam0) == unk_0x0FF608FD384AF8FA(Global_110A8.f_1E4[20]))
				{
					func_476(20);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_483(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)//Position - 0x32A00
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

int func_484(int iParam0, int iParam1, bool bParam2)//Position - 0x32A7B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((unk_0x724D816EA203A79E(iParam1) && !unk_0x1D403DFADBC2DE3C(iParam1, 0)) && unk_0xE59B7F5A03335350(iParam1, 0))
	{
		if (bParam2)
		{
			unk_0x87F182D2DA225F0D(iParam0, &iVar0, &iVar1);
			unk_0x87F182D2DA225F0D(iParam1, &iVar2, &iVar3);
			if (iVar0 == iVar2 && iVar1 == iVar3)
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

void func_485(int iParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0x32ADC
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		if (!func_489(iParam0))
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
			if (unk_0xFA30DFD0084E92FE(uParam1->f_4D, func_170(iVar0 + 1)))
			{
			}
			else
			{
				unk_0xF0059F27F7BB6680(&(uParam1->f_4D), func_170(iVar0 + 1));
			}
		}
		else if (uParam1->f_42 == joaat("sandking") || uParam1->f_42 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (unk_0xFA30DFD0084E92FE(uParam1->f_4D, func_170(iVar1 + 1)))
			{
			}
			else
			{
				unk_0xF0059F27F7BB6680(&(uParam1->f_4D), func_170(iVar1 + 1));
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
		if (((unk_0xFA30DFD0084E92FE(uParam1->f_4D, 15) || func_488(iParam0)) || (((uParam1->f_3E == 0 && uParam1->f_3F == 0) && uParam1->f_40 == 0) && uParam1->f_9[20] > 0)) && func_487())
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
		if (uParam1->f_41 == -1 && !func_172(uParam1->f_42))
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
						func_486(iParam0, uParam1->f_45);
					}
				}
				else
				{
					func_486(iParam0, uParam1->f_45);
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
			func_469(&iParam0, &(uParam1->f_9), &(uParam1->f_3B));
		}
		if (!unk_0x8C1A6E7D5F410F4A(uParam1->f_42) && !unk_0xE7B3A320107C1379(uParam1->f_42))
		{
			iVar2 = 0;
			while (iVar2 <= 11)
			{
				if (unk_0xFA30DFD0084E92FE(uParam1->f_4D, func_170(iVar2 + 1)))
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

void func_486(int iParam0, int iParam1)//Position - 0x3302C
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

bool func_487()//Position - 0x33091
{
	return unk_0x7B2F21BFE86AEB61(-1691188696);
}

int func_488(int iParam0)//Position - 0x330A2
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

int func_489(int iParam0)//Position - 0x330ED
{
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		if (!func_495(unk_0xB5CEFD608600A09F(), -1))
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
	if (func_491(unk_0xB5CEFD608600A09F()) == 3)
	{
		if (unk_0x724D816EA203A79E(iParam0) && unk_0xE59B7F5A03335350(iParam0, 0))
		{
			if (func_490(iParam0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_490(int iParam0)//Position - 0x33174
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

int func_491(int iParam0)//Position - 0x331A3
{
	if (func_494(iParam0) == 233)
	{
		return func_492(iParam0);
	}
	return -1;
}

int func_492(int iParam0)//Position - 0x331C0
{
	if (func_493(iParam0, 0))
	{
		return Global_18C80F[iParam0 /*558*/].f_B.f_B0;
	}
	return -1;
}

int func_493(int iParam0, int iParam1)//Position - 0x331E3
{
	if (Global_18C80F[iParam0 /*558*/].f_B.f_21 != -1 || (iParam1 && Global_18C80F[iParam0 /*558*/].f_B.f_20 != -1))
	{
		return 1;
	}
	return 0;
}

int func_494(int iParam0)//Position - 0x3321E
{
	if (func_493(iParam0, 0))
	{
		return Global_18C80F[iParam0 /*558*/].f_B.f_21;
	}
	return -1;
}

int func_495(int iParam0, int iParam1)//Position - 0x33241
{
	int iVar0;
	
	if (func_335(iParam0, 1, 1))
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

int func_496(var uParam0)//Position - 0x3328E
{
	if (func_497(uParam0))
	{
		if (unk_0xD6513D668481290A(uParam0->f_C.f_42))
		{
			return 1;
		}
		else
		{
			return 0;
		}
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_497(var uParam0)//Position - 0x332C3
{
	if (uParam0->f_C.f_42 == 0)
	{
		return 0;
	}
	if (!func_133(uParam0->f_C.f_42, 0))
	{
		return 0;
	}
	if (uParam0->f_C.f_42 == joaat("stunt") && func_483(*uParam0, 1694.62f, 3276.27f, 41.31f, 1056964608, 0))
	{
		return 0;
	}
	return 1;
}

bool func_498()//Position - 0x33322
{
	return func_496(&(Global_181DF.f_B3B));
}

void func_499()//Position - 0x33335
{
	func_500(&(Global_181DF.f_B3B));
}

void func_500(var uParam0)//Position - 0x33348
{
	if (func_497(uParam0))
	{
		unk_0xF243B7A14FCFD0F4(uParam0->f_C.f_42);
	}
}

int func_501(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x33366
{
	if (unk_0xE7B3A320107C1379(Global_181DF.f_B3B.f_C.f_42))
	{
		return 0;
	}
	if (iParam1 == 0 && unk_0x8C1A6E7D5F410F4A(Global_181DF.f_B3B.f_C.f_42))
	{
		return 0;
	}
	if (iParam2 == 0 && func_503(Global_181DF.f_B3B.f_C.f_42))
	{
		return 0;
	}
	if (iParam3 == 0 && unk_0xA19D269B4B5A1532(Global_181DF.f_B3B.f_C.f_42))
	{
		return 0;
	}
	if (iParam0 == 1)
	{
		if (!func_502())
		{
			return 0;
		}
	}
	return 1;
}

int func_502()//Position - 0x333F4
{
	float fVar0;
	
	if (!func_504())
	{
		return 0;
	}
	if ((unk_0xE7B3A320107C1379(Global_181DF.f_B3B.f_C.f_42) || unk_0xA19D269B4B5A1532(Global_181DF.f_B3B.f_C.f_42)) || unk_0xFF2234981505F7F4(Global_181DF.f_B3B.f_C.f_42))
	{
		return 0;
	}
	fVar0 = unk_0xB5AEE116EA91D2FA(Global_181DF.f_B3B.f_C.f_42);
	if (fVar0 < 37f)
	{
		return 0;
	}
	return 1;
}

int func_503(int iParam0)//Position - 0x33469
{
	switch (iParam0)
	{
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("polmav"):
		case joaat("policeb"):
		case joaat("policet"):
		case joaat("policeold2"):
		case joaat("policeold1"):
		case joaat("sheriff"):
		case joaat("sheriff2"):
			return 1;
			break;
	}
	return 0;
}

bool func_504()//Position - 0x334C2
{
	return func_497(&(Global_181DF.f_B3B));
}

int func_505()//Position - 0x334D5
{
	if (!Global_16B1B == 10 && !Global_16B1B == 9)
	{
		return 0;
	}
	return Global_16B1B.f_2;
}

int func_506()//Position - 0x334FF
{
	if (Global_16B1B == 10 || Global_16B1B == 9)
	{
		return 1;
	}
	return 0;
}

void func_507()//Position - 0x33523
{
	vector3 vVar0;
	vector3 vVar1;
	
	func_515();
	while (!func_56(0) || !func_56(1))
	{
		SYSTEM::WAIT(0);
	}
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		unk_0xC8FD3EBBB90E8D7F(unk_0xBC25C936A095B5BA(), 32, false);
		unk_0xC8FD3EBBB90E8D7F(unk_0xBC25C936A095B5BA(), 250, false);
	}
	unk_0xB2CB6EAA6B280A84("ENEMIES", &iLocal_322);
	unk_0xA902E18EDF6FA0C8(5, 1862763509, iLocal_322);
	unk_0xA902E18EDF6FA0C8(5, iLocal_322, 1862763509);
	vVar0 = { func_514(Local_63) };
	vVar1 = { func_513(Local_63) };
	unk_0xF16F7C45E0B1B52B(vVar0, vVar1);
	iLocal_143 = unk_0x1DAA351326EA3537(vVar0, vVar1, 0, 1, 1, 1);
	unk_0x6C5F5B5F6894CCE3(Local_63, 30f, 0, 0, 0, false);
	unk_0xE85B33FB221A23CD(2, 0);
	unk_0xE85B33FB221A23CD(3, 0);
	unk_0xE85B33FB221A23CD(4, 0);
	unk_0xE85B33FB221A23CD(5, 0);
	unk_0x6E52C7765A0F4382(0);
	unk_0xDF53A66AEE1401AA(0.2f);
	func_431(1);
	while (!func_510())
	{
		SYSTEM::WAIT(0);
	}
	func_508();
	if (func_21(unk_0xBC25C936A095B5BA()))
	{
		func_89(&uLocal_157, 2, unk_0xBC25C936A095B5BA(), "TREVOR", 0, 1);
		unk_0x7C7F4D01B6DB297B(unk_0xBC25C936A095B5BA(), 1);
	}
	if (func_21(Local_68.f_9))
	{
		func_89(&uLocal_157, 3, Local_68.f_9, sLocal_146, 0, 1);
		unk_0x7C7F4D01B6DB297B(Local_68.f_9, 1);
	}
}

void func_508()//Position - 0x33668
{
	if (func_21(Local_68.f_9))
	{
		unk_0x0DEF5E53360637F2(Local_68.f_9, 1);
		unk_0x5056032BA0CF3AAD(Local_68.f_9, 1);
		unk_0x6BBC364B0AA788E8(Local_68.f_9, 100);
		unk_0x65E471E4A2D56226(Local_68.f_9, 200, 0);
		unk_0x6F81644465434992(Local_68.f_9, 1);
		unk_0xF82197F205B9D8FD(Local_68.f_9, 1);
		unk_0x63ECE17EEAC84602(Local_68.f_9, 1);
		unk_0xB6A0EC6216225695(Local_68.f_9, 1);
		unk_0xB58463DD7085635A(Local_68.f_9, 2f);
		unk_0xA3ECE7AA42735A48(Local_68.f_9, 2f);
		unk_0x5056032BA0CF3AAD(Local_68.f_9, 1);
		unk_0xEDBBBB8EA1B1625E(Local_68.f_9, 0);
		unk_0xC8FD3EBBB90E8D7F(Local_68.f_9, 118, true);
		unk_0xC8FD3EBBB90E8D7F(Local_68.f_9, 137, true);
		unk_0xC8FD3EBBB90E8D7F(Local_68.f_9, 281, true);
		unk_0xF7CDBCD11F31B71A(Local_68.f_9, 1);
		if (Local_68.f_C != 0)
		{
			unk_0x7A535CE1F001F3FE(Local_68.f_9, Local_68.f_C, -1, true, true);
		}
		func_355(Local_68.f_9);
		func_509(Local_68.f_9, "TARGET_", 0);
		Local_68.f_A = 0;
		unk_0x7A535CE1F001F3FE(Local_68.f_9, joaat("gadget_parachute"), 1, false, true);
		unk_0xB0031DDAE4FF0BC3(Local_68.f_9, 0, 0, 1, 0);
		unk_0xB0031DDAE4FF0BC3(Local_68.f_9, 2, 0, 0, 0);
		unk_0xB0031DDAE4FF0BC3(Local_68.f_9, 3, 0, 1, 0);
		unk_0xB0031DDAE4FF0BC3(Local_68.f_9, 4, 0, 0, 0);
		unk_0xB0031DDAE4FF0BC3(Local_68.f_9, 8, 1, 0, 0);
		unk_0xB0031DDAE4FF0BC3(Local_68.f_9, 10, 1, 0, 0);
		unk_0xB0031DDAE4FF0BC3(Local_68.f_9, 8, 3, 0, 0);
		unk_0xC5A6DFE2B8987B17(&uLocal_145);
		if (func_21(Local_69[0 /*20*/]))
		{
			unk_0x85DB484A637CEAB9(0, Local_69[0 /*20*/], 0);
		}
		unk_0xE896C0AD02364F2A(0, "oddjobs@bailbond_mountain", "excited_idle_a", 8f, -8f, -1, 0, 0, 0, 0, 0);
		unk_0xE896C0AD02364F2A(0, "oddjobs@bailbond_mountain", "excited_idle_b", 8f, -8f, -1, 0, 0, 0, 0, 0);
		unk_0xE896C0AD02364F2A(0, "oddjobs@bailbond_mountain", "excited_idle_c", 8f, -8f, -1, 0, 0, 0, 0, 0);
		unk_0xAFD74A5E065F57E0(uLocal_145, 1);
		unk_0x535008C596714F9E(uLocal_145);
		unk_0xA8E6405305C0D7DF(Local_68.f_9, uLocal_145);
		unk_0x02DAF06EA4F08219(&uLocal_145);
		if (func_21(Local_69[0 /*20*/]))
		{
			func_355(Local_69[0 /*20*/]);
			if (Local_69[0 /*20*/].f_5 != 0)
			{
				unk_0x7A535CE1F001F3FE(Local_69[0 /*20*/], Local_69[0 /*20*/].f_5, -1, true, true);
			}
			func_509(Local_69[0 /*20*/], "BACKUP_", 0);
			unk_0xB0031DDAE4FF0BC3(Local_69[0 /*20*/], 0, 1, 1, 0);
			unk_0xB0031DDAE4FF0BC3(Local_69[0 /*20*/], 2, 1, 0, 0);
			unk_0xB0031DDAE4FF0BC3(Local_69[0 /*20*/], 3, 0, 0, 0);
			unk_0xB0031DDAE4FF0BC3(Local_69[0 /*20*/], 4, 1, 1, 0);
			unk_0xB0031DDAE4FF0BC3(Local_69[0 /*20*/], 8, 0, 0, 0);
			unk_0xB0031DDAE4FF0BC3(Local_69[0 /*20*/], 10, 0, 0, 0);
			if (unk_0x724D816EA203A79E(Local_73[0 /*9*/]))
			{
				if (!unk_0xE7E55F7532DEE345(Local_73[0 /*9*/]))
				{
					unk_0x5DBE04849460E608(Local_73[0 /*9*/], Local_69[0 /*20*/], unk_0xFA18E720A39243D0(Local_69[0 /*20*/], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					unk_0x346478B12F69D4E3(Local_73[0 /*9*/], false);
					unk_0x56F2E1B5599188FA(Local_69[0 /*20*/], Local_68.f_9, -1, 2060, 3);
					unk_0xE896C0AD02364F2A(Local_69[0 /*20*/], "oddjobs@bailbond_mountain", "Idle_Camman", 8f, -8f, -1, 49, 0, 0, 0, 0);
					unk_0x85DB484A637CEAB9(Local_69[0 /*20*/], Local_68.f_9, -1);
				}
			}
		}
	}
}

void func_509(int iParam0, char* sParam1, int iParam2)//Position - 0x3395F
{
	char cVar0[16];
	
	StringCopy(&cVar0, sParam1, 16);
	StringIntConCat(&cVar0, iParam2, 16);
	unk_0xF85FAED5BA864282(iParam0, &cVar0);
}

int func_510()//Position - 0x3397B
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (func_52(&(Local_68.f_9), Local_68.f_B, Local_68.f_D, Local_68.f_10, 1, 0, 0))
	{
		if (func_21(Local_68.f_9))
		{
			unk_0x2E35C4FA5F0ED22F(Local_68.f_9, 1);
			iVar0++;
		}
	}
	if (iLocal_132 > 0)
	{
		iVar2 = 0;
		while (iVar2 <= (iLocal_132 - 1))
		{
			if (func_52(&(Local_69[iVar2 /*20*/]), Local_69[iVar2 /*20*/].f_13, Local_69[iVar2 /*20*/].f_1, Local_69[iVar2 /*20*/].f_4, 0, 0, 0))
			{
				if (func_21(Local_69[iVar2 /*20*/]))
				{
					iVar0++;
					iVar1++;
				}
			}
			iVar2++;
		}
	}
	if (iVar1 == iLocal_132)
	{
		iVar2 = 0;
		while (iVar2 <= (iLocal_132 - 1))
		{
			unk_0x2CA123B0622F495C(Local_69[iVar2 /*20*/].f_13);
			iVar2++;
		}
	}
	if (iLocal_129 > 0)
	{
		iVar2 = 0;
		while (iVar2 <= (iLocal_129 - 1))
		{
			if (func_512(&(Local_71[iVar2 /*6*/]), Local_71[iVar2 /*6*/].f_5, Local_71[iVar2 /*6*/].f_1, Local_71[iVar2 /*6*/].f_4, 1))
			{
				iVar0++;
			}
			iVar2++;
		}
	}
	if (iLocal_130 > 0)
	{
		iVar2 = 0;
		while (iVar2 <= (iLocal_130 - 1))
		{
			if (func_55(&(Local_72[iVar2 /*6*/]), Local_72[iVar2 /*6*/].f_5, Local_72[iVar2 /*6*/].f_1, Local_72[iVar2 /*6*/].f_4, 1))
			{
				iVar0++;
			}
			iVar2++;
		}
	}
	if (iLocal_128 > 0)
	{
		iVar2 = 0;
		while (iVar2 <= (iLocal_128 - 1))
		{
			if (func_55(&(Local_73[iVar2 /*9*/]), Local_73[iVar2 /*9*/].f_8, Local_73[iVar2 /*9*/].f_1, Local_73[iVar2 /*9*/].f_7, 1))
			{
				unk_0x346478B12F69D4E3(Local_73[iVar2 /*9*/], true);
				iVar0++;
			}
			iVar2++;
		}
	}
	if (iLocal_131 > 0)
	{
		iVar2 = 0;
		while (iVar2 <= (iLocal_131 - 1))
		{
			if (func_511(&(Local_74[iVar2 /*7*/]), Local_74[iVar2 /*7*/].f_5, Local_74[iVar2 /*7*/].f_2, Local_74[iVar2 /*7*/].f_6, Local_74[iVar2 /*7*/].f_1, 1))
			{
				iVar0++;
			}
			iVar2++;
		}
	}
	if (iVar0 == ((((iLocal_132 + iLocal_129) + iLocal_130) + iLocal_128) + iLocal_131) + 1)
	{
		return 1;
	}
	return 0;
}

int func_511(var uParam0, int iParam1, vector3 vParam2, int iParam3, int iParam4, bool bParam5)//Position - 0x33BB5
{
	if (!unk_0xA901403F1DB7A780(*uParam0))
	{
		if (func_54(iParam4))
		{
			*uParam0 = unk_0x249B372087B496EC(iParam1, vParam2, iParam3, -1, 1, iParam4);
			if (unk_0xA901403F1DB7A780(*uParam0))
			{
				if (unk_0x0C1FBBAF5CF75B09(*uParam0))
				{
					if (bParam5)
					{
						func_53(iParam4, 1);
					}
					return 1;
				}
			}
		}
	}
	else if (unk_0x0C1FBBAF5CF75B09(*uParam0))
	{
		if (bParam5)
		{
			func_53(iParam4, 0);
		}
		return 1;
	}
	return 0;
}

int func_512(var uParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4)//Position - 0x33C26
{
	if (!unk_0x724D816EA203A79E(*uParam0))
	{
		if (func_54(iParam1))
		{
			*uParam0 = unk_0x61C05BF08A1E0EFE(iParam1, vParam2, fParam3, 1, 1, 0);
			if (unk_0x724D816EA203A79E(*uParam0))
			{
				if (!unk_0x5CAE759AE8219D20(*uParam0))
				{
					unk_0x77815D3407C6700D(*uParam0, true, 0);
				}
				if (func_94(*uParam0))
				{
					unk_0x641B19E156645A92(*uParam0, vParam2, 1, 0, 0, 1);
					unk_0x019CE76D5286C95C(*uParam0, fParam3);
				}
				unk_0xF0A40F19AAB79E88(*uParam0, 1084227584);
				if (bParam4)
				{
					func_53(iParam1, 1);
				}
				return 1;
			}
		}
	}
	else
	{
		if (bParam4)
		{
			func_53(iParam1, 0);
		}
		return 1;
	}
	return 0;
}

Vector3 func_513(struct<5> Param0, var uParam1, var uParam2, var uParam3)//Position - 0x33CC5
{
	switch (Param0.f_4)
	{
		case 0:
			return 2956.785f, 2824.594f, 45.1931f;
		
		case 1:
			return 197.6706f, 2333.772f, 105.647f;
		
		case 2:
			return 535.9079f, 5518.323f, 772.5947f;
		
		case 3:
			return 1446.768f, 6361.93f, 26.9007f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_514(struct<5> Param0, var uParam1, var uParam2, var uParam3)//Position - 0x33D39
{
	switch (Param0.f_4)
	{
		case 0:
			return 2929.665f, 2782.219f, 34.8822f;
		
		case 1:
			return 145.6927f, 2266.886f, 70.4983f;
		
		case 2:
			return 491.7797f, 5485.706f, 736.4918f;
		
		case 3:
			return 1414.211f, 6326.607f, 20.8036f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_515()//Position - 0x33DAD
{
	int iVar0;
	
	iVar0 = 0;
	iLocal_67 = 5;
	Local_68.f_B = joaat("s_m_y_xmech_02");
	Local_68.f_D = { 515.5f, 5494.33f, 766.77f };
	Local_68.f_10 = 187.4998f;
	Local_68.f_C = joaat("weapon_unarmed");
	Local_68.f_A = 0;
	Local_68.f_11 = 0;
	Local_68.f_12 = 0;
	Local_68.f_13 = 0;
	func_8();
	Local_69[0 /*20*/].f_13 = joaat("a_m_y_skater_01");
	Local_69[0 /*20*/].f_1 = { 513.79f, 5495.2f, 767.76f };
	Local_69[0 /*20*/].f_4 = 247.4996f;
	Local_69[0 /*20*/].f_5 = joaat("weapon_unarmed");
	Local_69[0 /*20*/].f_E = 0;
	iLocal_132 = 1;
	Local_71[0 /*6*/].f_5 = joaat("sanchez");
	Local_71[0 /*6*/].f_1 = { 513.4f, 5501.95f, 770.5f };
	Local_71[0 /*6*/].f_4 = 270f;
	iLocal_129 = 1;
	iLocal_130 = 0;
	Local_73[0 /*9*/].f_8 = joaat("prop_v_cam_01");
	Local_73[0 /*9*/].f_1 = { 515.2064f, 5496.782f, 767.511f };
	Local_73[0 /*9*/].f_7 = 0f;
	iLocal_128 = 1;
	Local_74[0 /*7*/].f_5 = joaat("pickup_parachute");
	Local_74[0 /*7*/].f_2 = { 515.06f, 5500.79f, 769.55f };
	unk_0xF0059F27F7BB6680(&(Local_74[0 /*7*/].f_6), 3);
	unk_0xF0059F27F7BB6680(&(Local_74[0 /*7*/].f_6), 4);
	unk_0xF0059F27F7BB6680(&(Local_74[0 /*7*/].f_6), 1);
	iLocal_131 = 1;
	vLocal_336 = { 519.3214f, 5543.285f, 776.6292f };
	fLocal_118 = 171.0401f;
	vLocal_337 = { 526.7953f, 5518.609f, 770.8146f };
	fLocal_119 = 149.4155f;
	vLocal_338 = { 516.7903f, 5503.043f, 769.7175f };
	fLocal_120 = 171.4808f;
	vLocal_339 = { 0f, 0f, 0f };
	vLocal_340 = { 0f, 0f, 0f };
	iLocal_61 = 4;
	iLocal_81 = 0;
	iLocal_82 = 0;
	iLocal_83 = 0;
	iLocal_85 = 1;
	iLocal_84 = 1;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		iLocal_86[iVar0] = 0;
		iVar0++;
	}
	iLocal_87 = 0;
	iLocal_88 = 0;
	iLocal_89 = 0;
	iLocal_90 = 0;
	iLocal_91 = 1;
	iLocal_93 = 0;
	iLocal_92 = 0;
	iLocal_94 = 0;
	iLocal_97 = 0;
	iLocal_99 = 0;
	iLocal_100 = 0;
	iLocal_101 = 0;
	iLocal_102 = 0;
	bLocal_107 = false;
	iLocal_108 = 0;
	iLocal_109 = 0;
	iLocal_110 = 0;
	iLocal_111 = 1;
	iLocal_112 = 0;
	iLocal_113 = 0;
	iLocal_114 = 0;
	iLocal_95 = 1;
	bLocal_96 = false;
	iLocal_103 = 0;
	bLocal_115 = false;
	iLocal_106 = 0;
	iLocal_62 = 0;
	iLocal_122 = 0;
	iLocal_126 = 0;
	iLocal_127 = 0;
	iLocal_123 = 0;
	iLocal_124 = 0;
	iLocal_125 = 0;
	iLocal_121 = 0;
	iLocal_138 = 0;
	iLocal_133 = 0;
	iLocal_134 = -1;
	iLocal_135 = -1;
	iLocal_137 = 0;
	iLocal_139 = 0;
	iLocal_140 = 0;
	iLocal_141 = -1;
	vLocal_333 = { 1110.065f, 4408.885f, 64.5833f };
	vLocal_334 = { 1525.04f, 4491.764f, 53.3925f };
	vLocal_331 = { 2722.661f, 4143.105f, 43.0617f };
	StringCopy(&vLocal_323, "", 24);
	Local_75.f_6 = func_526(62);
	Local_75.f_1 = { func_525() };
	Local_75.f_4 = func_524();
	Local_77.f_5 = func_523();
	Local_77.f_1 = { func_522() };
	Local_77.f_4 = func_521();
	Local_78.f_5 = func_520();
	Local_78.f_1 = { func_519() };
	Local_78.f_4 = func_518();
	Local_79.f_5 = func_46();
	Local_79.f_1 = { func_45() };
	Local_79.f_4 = func_44();
	Local_80.f_5 = func_43();
	Local_80.f_1 = { func_517() };
	Local_80.f_4 = func_516();
	sLocal_146 = "BailBond3Jumper";
	sLocal_147 = "BB3_J1";
	sLocal_148 = "BB3_J3";
	sLocal_149[0] = "BB3_VC1";
	sLocal_149[1] = "BB3_VC2";
	sLocal_149[2] = "BB3_VC3";
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		iLocal_86[iVar0] = 0;
		iVar0++;
	}
	iLocal_70 = 0;
}

float func_516()//Position - 0x3416C
{
	return 75.15f;
}

Vector3 func_517()//Position - 0x34179
{
	return 2727.29f, 4145.9f, 44.16f;
}

float func_518()//Position - 0x34190
{
	return 71f;
}

Vector3 func_519()//Position - 0x3419D
{
	return 2727.686f, 4145.715f, 44.08f;
}

int func_520()//Position - 0x341B4
{
	return 1385417869;
}

float func_521()//Position - 0x341C1
{
	return -91.28f;
}

Vector3 func_522()//Position - 0x341CE
{
	return 2728.35f, 4145.59f, 43.3f;
}

int func_523()//Position - 0x341E5
{
	return -741944541;
}

float func_524()//Position - 0x341F2
{
	return 89.19f;
}

Vector3 func_525()//Position - 0x341FF
{
	return 2728.33f, 4145.6f, 43.89f;
}

int func_526(int iParam0)//Position - 0x34216
{
	if (!func_82(iParam0))
	{
		return Global_19B04.f_6D75[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_527(bool bParam0)//Position - 0x34241
{
	if (unk_0x04604C9E42BD0E47())
	{
		return 0;
	}
	if (Global_62BF)
	{
		return 0;
	}
	if (func_85(6) || func_85(7))
	{
		return 0;
	}
	if (func_80() != 2)
	{
		return 0;
	}
	if (unk_0x866EAD7E27D8D0F8())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (!func_537(4))
		{
			return 0;
		}
		if (unk_0x8520DF5301DD9811())
		{
			return 0;
		}
		if (!unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
		{
			return 0;
		}
		if (!func_531(4))
		{
			return 0;
		}
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
		{
			if (unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0))
			{
				return 0;
			}
		}
		if (unk_0x866EAD7E27D8D0F8())
		{
			return 0;
		}
		if (Global_10AB8)
		{
			return 0;
		}
		if (func_530() || func_529())
		{
			return 0;
		}
		if (func_528())
		{
			return 0;
		}
	}
	return 1;
}

int func_528()//Position - 0x34319
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

int func_529()//Position - 0x34343
{
	if (unk_0xB731B8C5BCE89836(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_530()//Position - 0x3435D
{
	if (!unk_0x7AF0088ABFA713B6())
	{
		return Global_161D2.f_2C == 1;
	}
	return 0;
}

int func_531(int iParam0)//Position - 0x34379
{
	int iVar0;
	
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
		{
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				iVar0 = func_80();
				if (!func_82(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x8F1FDD0A40DC834A(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_530()) || Global_1974B) || Global_62BF) || func_536()) || func_87(8, -1)) || func_535()) || func_534()) || func_528()) || func_529()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1) || func_530()) || Global_62BF) || func_536()) || func_87(8, -1)) || func_528()) || func_535()) || func_534()) || func_529()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x8F1FDD0A40DC834A(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_530()) || Global_1974B) || Global_62BF) || func_536()) || func_87(8, -1)) || func_528()) || func_535()) || func_534()) || func_529()) || Global_19B04.f_1DEB.f_397[iVar0] == 5) || Global_8E64 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA()) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_530()) || Global_1974B) || Global_62BF) || func_536()) || func_87(8, -1)) || func_535()) || func_534()) || func_529()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_530() || unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0) || func_87(8, -1)) || func_529()) || func_533()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_87(8, -1) || func_535()) || func_534()) || func_533()) || func_532())
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
							if ((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || func_530()) || Global_62BF) || func_536()) || func_87(8, -1)) || func_534()) || func_528()) || func_529()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || !unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F())) || !unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F())) || !unk_0x726D9204B160D23E()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || func_530()) || func_534()) || Global_1974B) || Global_62BF) || func_536()) || Global_90C1) || func_87(8, -1)) || func_528()) || func_533()) || func_529()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || !unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F())) || !unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F())) || !unk_0x726D9204B160D23E()) || unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0)) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1)) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0x9273B3557334635D(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || func_530()) || Global_1974B) || Global_62BF) || func_536()) || func_87(8, -1)) || func_528()) || func_533()) || func_535()) || func_534()) || func_529())
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

var func_532()//Position - 0x34A96
{
	return Global_16B42.f_1;
}

int func_533()//Position - 0x34AA4
{
	if (Global_15FA6 != -1)
	{
		return unk_0xFA30DFD0084E92FE(Global_147B0[Global_15FA6 /*34*/].f_F, 13);
	}
	return 0;
}

bool func_534()//Position - 0x34ACA
{
	return Global_16B4F.f_142 > 0;
}

bool func_535()//Position - 0x34ADB
{
	return Global_16B4F.f_141 > 0;
}

var func_536()//Position - 0x34AEC
{
	return Global_140856;
}

bool func_537(int iParam0)//Position - 0x34AF8
{
	return func_538(iParam0, Global_8C41);
}

int func_538(int iParam0, int iParam1)//Position - 0x34B09
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

void func_539(int iParam0)//Position - 0x34CEA
{
	func_564();
	if (!func_563())
	{
		if (Global_154EB == Global_16B40)
		{
			Global_19B04.f_617D.f_4[iParam0]++;
		}
		Global_154EB = Global_16B40;
		func_540(unk_0x1377080E9B0BD993());
	}
}

void func_540(char* sParam0)//Position - 0x34D35
{
	if (Global_16B1B != 12)
	{
		func_541(sParam0, 5, -1);
	}
}

int func_541(char* sParam0, int iParam1, int iParam2)//Position - 0x34D52
{
	int iVar0;
	struct<32> Var1;
	int iVar2;
	
	func_560();
	func_559();
	Global_16B1B = 0;
	StringCopy(&(Global_16B1B.f_3), sParam0, 32);
	Global_16B1B.f_B = iParam1;
	unk_0x720260ACC9BD334E(1);
	unk_0x153C03E284E30336(0);
	unk_0x4101DC5C065D2EB5(0);
	func_13(1);
	func_432(1);
	func_556(0);
	func_555(1);
	unk_0x7CB6FD92BE491AD9(&(Global_16B1B.f_14), 9);
	unk_0x7CB6FD92BE491AD9(&(Global_16B1B.f_14), 6);
	unk_0x7CB6FD92BE491AD9(&(Global_16B1B.f_14), 20);
	unk_0x7CB6FD92BE491AD9(&(Global_16B1B.f_14), 21);
	unk_0x7CB6FD92BE491AD9(&(Global_16B1B.f_14), 5);
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
		{
			if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
			{
				iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
				if (unk_0x8730A01B72F31307(iVar0))
				{
					unk_0xF0059F27F7BB6680(&(Global_16B1B.f_14), 5);
				}
			}
		}
	}
	unk_0x7456702622C62EA0(1);
	unk_0xEB233A3B7635D2AC();
	func_554(0);
	func_553(1);
	Global_16B1B.f_2 = Global_16B40;
	if (func_552())
	{
		if (func_551())
		{
			if (Global_16B40 >= func_548())
			{
				if (!unk_0xFA30DFD0084E92FE(Global_147B0[iParam2 /*34*/].f_F, 16))
				{
					if (Global_19B04.f_2360.f_14A[iParam2 /*6*/].f_1 >= 2)
					{
						Global_154EC = 1;
					}
				}
			}
		}
		else if (Global_16B1B.f_B == 6)
		{
			func_543(iParam2, &Var1);
			if (Var1.f_1F == 1)
			{
				if (Global_19B04.f_4871[iParam2 /*6*/].f_4 >= 2)
				{
					Global_154EC = 1;
				}
			}
		}
		else
		{
			iVar2 = func_542(unk_0x1377080E9B0BD993());
			if (iVar2 > -1)
			{
				if (Global_19B04.f_617D.f_4[iVar2] >= 2)
				{
					Global_154EC = 1;
				}
			}
		}
	}
	return 1;
}

int func_542(char* sParam0)//Position - 0x34EE4
{
	if (unk_0x3362CDE8460ED38B("BailBond1", sParam0))
	{
		return 0;
	}
	else if (unk_0x3362CDE8460ED38B("BailBond2", sParam0))
	{
		return 1;
	}
	else if (unk_0x3362CDE8460ED38B("BailBond3", sParam0))
	{
		return 2;
	}
	else if (unk_0x3362CDE8460ED38B("BailBond4", sParam0))
	{
		return 3;
	}
	return -1;
}

void func_543(int iParam0, var uParam1)//Position - 0x34F3A
{
	switch (iParam0)
	{
		case 0:
			func_544(uParam1, "Abigail1", func_546(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_545(iParam0), 1, 0);
			break;
		
		case 1:
			func_544(uParam1, "Abigail2", func_546(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_545(iParam0), 1, 0);
			break;
		
		case 2:
			func_544(uParam1, "Barry1", func_546(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_545(iParam0), 1, 0);
			break;
		
		case 3:
			func_544(uParam1, "Barry2", func_546(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_545(iParam0), 1, 1);
			break;
		
		case 4:
			func_544(uParam1, "Barry3", func_546(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_545(iParam0), 0, 0);
			break;
		
		case 5:
			func_544(uParam1, "Barry3A", func_546(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_545(iParam0), 0, 1);
			break;
		
		case 6:
			func_544(uParam1, "Barry3C", func_546(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_545(iParam0), 0, 1);
			break;
		
		case 7:
			func_544(uParam1, "Barry4", func_546(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_545(iParam0), 0, 0);
			break;
		
		case 8:
			func_544(uParam1, "Dreyfuss1", func_546(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_545(iParam0), 0, 0);
			break;
		
		case 9:
			func_544(uParam1, "Epsilon1", func_546(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_545(iParam0), 0, 0);
			break;
		
		case 10:
			func_544(uParam1, "Epsilon2", func_546(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_545(iParam0), 1, 0);
			break;
		
		case 11:
			func_544(uParam1, "Epsilon3", func_546(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_545(iParam0), 0, 0);
			break;
		
		case 12:
			func_544(uParam1, "Epsilon4", func_546(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_545(iParam0), 0, 0);
			break;
		
		case 13:
			func_544(uParam1, "Epsilon5", func_546(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_545(iParam0), 1, 0);
			break;
		
		case 14:
			func_544(uParam1, "Epsilon6", func_546(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_545(iParam0), 0, 1);
			break;
		
		case 15:
			func_544(uParam1, "Epsilon7", func_546(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_545(iParam0), 0, 0);
			break;
		
		case 16:
			func_544(uParam1, "Epsilon8", func_546(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_545(iParam0), 1, 0);
			break;
		
		case 17:
			func_544(uParam1, "Extreme1", func_546(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_545(iParam0), 0, 1);
			break;
		
		case 18:
			func_544(uParam1, "Extreme2", func_546(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_545(iParam0), 0, 1);
			break;
		
		case 19:
			func_544(uParam1, "Extreme3", func_546(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_545(iParam0), 0, 1);
			break;
		
		case 20:
			func_544(uParam1, "Extreme4", func_546(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_545(iParam0), 0, 0);
			break;
		
		case 21:
			func_544(uParam1, "Fanatic1", func_546(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_545(iParam0), 1, 0);
			break;
		
		case 22:
			func_544(uParam1, "Fanatic2", func_546(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_545(iParam0), 1, 0);
			break;
		
		case 23:
			func_544(uParam1, "Fanatic3", func_546(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_545(iParam0), 0, 1);
			break;
		
		case 24:
			func_544(uParam1, "Hao1", func_546(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_545(iParam0), 0, 1);
			break;
		
		case 25:
			func_544(uParam1, "Hunting1", func_546(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_545(iParam0), 0, 1);
			break;
		
		case 26:
			func_544(uParam1, "Hunting2", func_546(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_545(iParam0), 0, 1);
			break;
		
		case 27:
			func_544(uParam1, "Josh1", func_546(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_545(iParam0), 1, 0);
			break;
		
		case 28:
			func_544(uParam1, "Josh2", func_546(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_545(iParam0), 1, 1);
			break;
		
		case 29:
			func_544(uParam1, "Josh3", func_546(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_545(iParam0), 1, 1);
			break;
		
		case 30:
			func_544(uParam1, "Josh4", func_546(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_545(iParam0), 1, 0);
			break;
		
		case 31:
			func_544(uParam1, "Maude1", func_546(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_545(iParam0), 0, 1);
			break;
		
		case 32:
			func_544(uParam1, "Minute1", func_546(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_545(iParam0), 0, 1);
			break;
		
		case 33:
			func_544(uParam1, "Minute2", func_546(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_545(iParam0), 0, 1);
			break;
		
		case 34:
			func_544(uParam1, "Minute3", func_546(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_545(iParam0), 0, 1);
			break;
		
		case 35:
			func_544(uParam1, "MrsPhilips1", func_546(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_545(iParam0), 0, 0);
			break;
		
		case 36:
			func_544(uParam1, "MrsPhilips2", func_546(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_545(iParam0), 0, 0);
			break;
		
		case 37:
			func_544(uParam1, "Nigel1", func_546(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_545(iParam0), 1, 0);
			break;
		
		case 38:
			func_544(uParam1, "Nigel1A", func_546(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_545(iParam0), 1, 1);
			break;
		
		case 39:
			func_544(uParam1, "Nigel1B", func_546(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_545(iParam0), 1, 1);
			break;
		
		case 40:
			func_544(uParam1, "Nigel1C", func_546(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_545(iParam0), 1, 1);
			break;
		
		case 41:
			func_544(uParam1, "Nigel1D", func_546(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_545(iParam0), 1, 1);
			break;
		
		case 42:
			func_544(uParam1, "Nigel2", func_546(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_545(iParam0), 1, 1);
			break;
		
		case 43:
			func_544(uParam1, "Nigel3", func_546(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_545(iParam0), 1, 1);
			break;
		
		case 44:
			func_544(uParam1, "Omega1", func_546(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_545(iParam0), 0, 0);
			break;
		
		case 45:
			func_544(uParam1, "Omega2", func_546(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_545(iParam0), 0, 0);
			break;
		
		case 46:
			func_544(uParam1, "Paparazzo1", func_546(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_545(iParam0), 0, 1);
			break;
		
		case 47:
			func_544(uParam1, "Paparazzo2", func_546(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_545(iParam0), 0, 1);
			break;
		
		case 48:
			func_544(uParam1, "Paparazzo3", func_546(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_545(iParam0), 0, 0);
			break;
		
		case 49:
			func_544(uParam1, "Paparazzo3A", func_546(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_545(iParam0), 0, 1);
			break;
		
		case 50:
			func_544(uParam1, "Paparazzo3B", func_546(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_545(iParam0), 0, 1);
			break;
		
		case 51:
			func_544(uParam1, "Paparazzo4", func_546(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_545(iParam0), 0, 0);
			break;
		
		case 52:
			func_544(uParam1, "Rampage1", func_546(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_545(iParam0), 0, 0);
			break;
		
		case 54:
			func_544(uParam1, "Rampage3", func_546(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_545(iParam0), 1, 0);
			break;
		
		case 55:
			func_544(uParam1, "Rampage4", func_546(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_545(iParam0), 1, 0);
			break;
		
		case 56:
			func_544(uParam1, "Rampage5", func_546(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_545(iParam0), 0, 0);
			break;
		
		case 53:
			func_544(uParam1, "Rampage2", func_546(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_545(iParam0), 1, 0);
			break;
		
		case 57:
			func_544(uParam1, "TheLastOne", func_546(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_545(iParam0), 0, 1);
			break;
		
		case 58:
			func_544(uParam1, "Tonya1", func_546(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_545(iParam0), 0, 1);
			break;
		
		case 59:
			func_544(uParam1, "Tonya2", func_546(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_545(iParam0), 0, 1);
			break;
		
		case 60:
			func_544(uParam1, "Tonya3", func_546(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_545(iParam0), 0, 1);
			break;
		
		case 61:
			func_544(uParam1, "Tonya4", func_546(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_545(iParam0), 0, 1);
			break;
		
		case 62:
			func_544(uParam1, "Tonya5", func_546(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_545(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_544(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)//Position - 0x360EF
{
	uParam0->f_4 = iParam4;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam3;
	uParam0->f_5 = iParam5;
	uParam0->f_6 = { vParam6 };
	uParam0->f_9 = iParam7;
	StringCopy(&(uParam0->f_A), sParam8, 16);
	uParam0->f_E = iParam9;
	uParam0->f_F = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 24);
	uParam0->f_16 = iParam12;
	uParam0->f_17 = iParam13;
	uParam0->f_18 = iParam14;
	uParam0->f_19 = iParam15;
	uParam0->f_1A = iParam16;
	uParam0->f_1B = iParam17;
	uParam0->f_1C = iParam18;
	uParam0->f_1D = uParam19;
	uParam0->f_1E = iParam20;
	uParam0->f_1F = iParam21;
}

int func_545(int iParam0)//Position - 0x36180
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
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
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_546(int iParam0)//Position - 0x364C6
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_547(iParam0) };
	if (unk_0xF1734B55490E9045(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_547(int iParam0)//Position - 0x364FD
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_548()//Position - 0x36949
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_549(&(Global_16B1B.f_3), 0);
	iVar1 = 0;
	if (iVar0 == 53)
	{
		iVar1 = 1;
	}
	return iVar1;
}

int func_549(char* sParam0, bool bParam1)//Position - 0x3696D
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x56BEECB328B6D29D(sParam0);
	iVar1 = func_550(iVar0, 1);
	if (iVar1 == -1 && !bParam1)
	{
	}
	return iVar1;
}

int func_550(int iParam0, bool bParam1)//Position - 0x36997
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 94)
	{
		if (Global_147B0[iVar0 /*34*/].f_6 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	if (!bParam1)
	{
	}
	return -1;
}

int func_551()//Position - 0x369CD
{
	if ((((Global_16B1B.f_B == 0 || Global_16B1B.f_B == 1) || Global_16B1B.f_B == 2) || Global_16B1B.f_B == 3) || Global_16B1B.f_B == 4)
	{
		return 1;
	}
	return 0;
}

int func_552()//Position - 0x36A1D
{
	if ((((Global_16B1B.f_B == 0 || Global_16B1B.f_B == 1) || Global_16B1B.f_B == 2) || Global_16B1B.f_B == 6) || Global_16B1B.f_B == 3)
	{
		return 1;
	}
	if (Global_16B1B.f_B == 5)
	{
		if (func_542(&(Global_16B1B.f_3)) > -1)
		{
			return 1;
		}
	}
	return 0;
}

void func_553(int iParam0)//Position - 0x36A89
{
	if (iParam0 == 1)
	{
		Global_8E66 = 1;
	}
	else
	{
		Global_8E66 = 0;
	}
}

void func_554(bool bParam0)//Position - 0x36AA2
{
	unk_0x59B038076F830627(bParam0);
	unk_0x43F06392C4EF25E0(bParam0);
}

void func_555(int iParam0)//Position - 0x36AB6
{
	if (iParam0 == 1)
	{
		unk_0x3169E2C5E6A096BC();
		unk_0xF0059F27F7BB6680(&(Global_16B1B.f_14), 3);
	}
	else if (unk_0xFA30DFD0084E92FE(Global_16B1B.f_14, 3))
	{
		unk_0xCB50D125C355ED9C();
		unk_0x7CB6FD92BE491AD9(&(Global_16B1B.f_14), 3);
	}
}

void func_556(int iParam0)//Position - 0x36AF3
{
	if (iParam0 == 1)
	{
		if (unk_0xFA30DFD0084E92FE(Global_16B1B.f_14, 4))
		{
			func_558();
			unk_0x7CB6FD92BE491AD9(&(Global_16B1B.f_14), 4);
		}
	}
	else
	{
		func_557();
		unk_0xF0059F27F7BB6680(&(Global_16B1B.f_14), 4);
	}
}

void func_557()//Position - 0x36B30
{
	Global_4336.f_5 = 1;
}

void func_558()//Position - 0x36B3E
{
	Global_4336.f_5 = 0;
}

void func_559()//Position - 0x36B4C
{
	Global_154EC = 0;
	Global_154ED = 0;
}

void func_560()//Position - 0x36B5E
{
	Global_16B1B = 13;
	Global_16B1B.f_1 = -1;
	Global_16B1B.f_2 = 0;
	Global_16B1B.f_1E = 0f;
	unk_0x7CB6FD92BE491AD9(&(Global_16B1B.f_14), 25);
	Global_16B3D = 0;
	func_553(0);
	func_562();
	func_561();
	Global_16B1B.f_12 = -1;
	Global_16B1B.f_13 = -1;
}

void func_561()//Position - 0x36BAD
{
	unk_0x7CB6FD92BE491AD9(&(Global_16B1B.f_14), 22);
	unk_0x7CB6FD92BE491AD9(&(Global_16B1B.f_14), 8);
}

void func_562()//Position - 0x36BCD
{
	if (Global_16B1B.f_10 != 0)
	{
		unk_0xB0B0FE33F4F22679(&(Global_16B1B.f_10));
		Global_16B1B.f_10 = 0;
	}
	if (Global_16B1B.f_11 != 0)
	{
		unk_0xB0B0FE33F4F22679(&(Global_16B1B.f_11));
		Global_16B1B.f_11 = 0;
	}
}

int func_563()//Position - 0x36C0B
{
	if (((Global_16B1B == 13 || Global_16B1B == 10) || Global_16B1B == 11) || Global_16B1B == 12)
	{
		return 0;
	}
	return 1;
}

void func_564()//Position - 0x36C49
{
	Global_16B3E = 1;
	if (unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1))
	{
		if (unk_0xF1734B55490E9045(&Global_1162A))
		{
			switch (func_80())
			{
				case 0:
					StringCopy(&Global_1162A, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_1162A, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_1162A, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_1162E, "", 16);
		}
		Global_16B3E = 0;
	}
	else if (!unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (unk_0xF1734B55490E9045(&Global_1162A))
		{
			switch (func_80())
			{
				case 0:
					StringCopy(&Global_1162A, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_1162A, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_1162A, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_1162E, "", 16);
		}
		Global_16B3E = 0;
		unk_0xF0059F27F7BB6680(&(Global_16B1B.f_14), 25);
	}
}

void func_565()//Position - 0x36D36
{
	if (iLocal_111)
	{
		func_426(0, 1);
	}
	unk_0x95E4B6F3ED223F5A();
}

