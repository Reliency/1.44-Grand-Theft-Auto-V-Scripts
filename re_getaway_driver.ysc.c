#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	int iLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	float fLocal_16 = 0f;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	int iLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	char* sLocal_22 = NULL;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
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
	int iLocal_48 = 0;
	vector3 vLocal_49 = { 0f, 0f, 0f };
	float fLocal_50 = 0f;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	var uLocal_53 = 16;
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
	int iLocal_218 = 0;
	int iLocal_219 = 0;
	int iLocal_220 = 0;
	int iLocal_221 = 0;
	int iLocal_222 = 0;
	int iLocal_223 = 0;
	int iLocal_224 = 0;
	int iLocal_225 = 0;
	int iLocal_226 = 0;
	int iLocal_227 = 0;
	int iLocal_228 = 0;
	int iLocal_229 = 0;
	int iLocal_230 = 0;
	int iLocal_231 = 0;
	vector3 vLocal_232 = { 0f, 0f, 0f };
	vector3 vLocal_233 = { 0f, 0f, 0f };
	vector3 vLocal_234 = { 0f, 0f, 0f };
	vector3 vLocal_235 = { 0f, 0f, 0f };
	vector3 vLocal_236 = { 0f, 0f, 0f };
	vector3 vLocal_237 = { 0f, 0f, 0f };
	vector3 vLocal_238 = { 0f, 0f, 0f };
	vector3 vLocal_239 = { 0f, 0f, 0f };
	vector3 vLocal_240 = { 0f, 0f, 0f };
	vector3 vLocal_241 = { 0f, 0f, 0f };
	vector3 vLocal_242 = { 0f, 0f, 0f };
	vector3 vLocal_243 = { 0f, 0f, 0f };
	vector3 vLocal_244 = { 0f, 0f, 0f };
	vector3 vLocal_245 = { 0f, 0f, 0f };
	bool bLocal_246 = 0;
	bool bLocal_247 = 0;
	bool bLocal_248 = 0;
	bool bLocal_249 = 0;
	int iLocal_250 = 0;
	int iLocal_251 = 0;
	int iLocal_252 = 0;
	int iLocal_253 = 0;
	int iLocal_254 = 0;
	var uLocal_255[2] = { 0, 0 };
	int iLocal_256 = 0;
	int iLocal_257 = 0;
	int iLocal_258[2] = { 0, 0 };
	int iLocal_259[5] = { 0, 0, 0, 0, 0 };
	int iLocal_260[3] = { 0, 0, 0 };
	int iLocal_261[2] = { 0, 0 };
	int iLocal_262 = 0;
	int iLocal_263 = 0;
	int iLocal_264 = 0;
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	int iLocal_269 = 0;
	var uLocal_270 = 8;
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
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 1;
	struct<2> Local_418 = { 0, 5 } ;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 5;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	struct<9> Var1;
	int iVar2;
	var uVar3;
	bool bVar4;
	var uVar5;
	var uVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	iLocal_0 = 3;
	iLocal_4 = 1;
	iLocal_5 = 134;
	iLocal_6 = 134;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 1;
	iLocal_10 = 134;
	iLocal_11 = 1;
	iLocal_12 = 12;
	iLocal_13 = 12;
	fLocal_16 = 0.001f;
	iLocal_19 = -1;
	sLocal_22 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0.0375f;
	fLocal_28 = 0.17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	iLocal_47 = unk_0xD736C0AC62BF73AD();
	iLocal_48 = unk_0x880E0FAC08C6FA65();
	fLocal_50 = -1f;
	iLocal_218 = 1;
	iLocal_227 = -1;
	iLocal_228 = -1;
	vLocal_236 = { 370.2576f, -1597.488f, 35.94954f };
	vLocal_237 = { 824.992f, -1289.267f, 27.24564f };
	vLocal_238 = { 450.1889f, -981.6754f, 42.69174f };
	vLocal_239 = { -1088.37f, -842.2911f, 30.27554f };
	vLocal_240 = { 608.9076f, 0.806411f, 100.2497f };
	vLocal_241 = { -562.0159f, -130.8113f, 37.4369f };
	vLocal_242 = { 1855.237f, 3683.236f, 33.29165f };
	vLocal_243 = { -443.5063f, 6016.231f, 30.71787f };
	vLocal_244 = { -1034.6f, 4918.6f, 205.9f };
	iVar0 = 0;
	iVar2 = 0;
	vLocal_232 = { ScriptParam_418.f_1[0 /*3*/] };
	Var1 = joaat("g_m_y_mexgoon_02");
	Var1.f_1 = joaat("hc_gunman");
	Var1.f_2 = joaat("mp_m_shopkeep_01");
	Var1.f_3 = joaat("a_f_y_soucent_01");
	Var1.f_4 = joaat("a_m_m_soucent_01");
	Var1.f_5 = joaat("s_m_y_cop_01");
	Var1.f_6 = joaat("police3");
	if (unk_0xE8A79675302ED812(11))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_258[0]))
		{
			if (unk_0xD45C08B05D4687A7(iLocal_258[0]))
			{
				unk_0x57EB4CC8F1928A47(iLocal_258[0]);
			}
		}
		if (!unk_0x36CEFBE9B745A58D(iLocal_258[1]))
		{
			if (unk_0xD45C08B05D4687A7(iLocal_258[1]))
			{
				unk_0x57EB4CC8F1928A47(iLocal_258[1]);
			}
		}
		func_239(Var1, &iLocal_258, bVar4);
	}
	func_238(&uLocal_270, 3);
	if (func_207(vLocal_232, -1, 0, 0, 0))
	{
		func_204(-1);
	}
	else
	{
		unk_0x95E4B6F3ED223F5A();
	}
	while (iVar0 != 7)
	{
		iVar8 = 0;
		func_201(&uLocal_270);
		if (!unk_0x684B06333594F9EA() && !func_200())
		{
			iVar8 = 0;
			iVar0 = 7;
			func_239(Var1, &iLocal_258, bVar4);
		}
		if (!func_200())
		{
			if (func_199() || func_198(7))
			{
				iVar8 = 0;
				iVar0 = 7;
				func_239(Var1, &iLocal_258, bVar4);
			}
		}
		unk_0x2E94C9549322098D("RE_GD", 0);
		if (func_197())
		{
			if (unk_0x724D816EA203A79E(iLocal_258[0]))
			{
				unk_0xF845620A03C7425B(&(iLocal_258[0]));
			}
			if (unk_0x724D816EA203A79E(iLocal_258[1]))
			{
				unk_0xF845620A03C7425B(&(iLocal_258[1]));
			}
			while (!func_196())
			{
				SYSTEM::WAIT(0);
			}
			func_192(9, 0);
			func_183(-1, 0);
			func_180();
			iVar8 = 0;
			iVar0 = 7;
			func_239(Var1, &iLocal_258, bVar4);
		}
		if (unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0) && !unk_0x1D403DFADBC2DE3C(unk_0x3E12B546F3F2597A(), 0))
		{
			if (unk_0xBFED55DE95EA4B0C(func_179(unk_0xB5CEFD608600A09F()) - Vector(10f, 20f, 20f), func_179(unk_0xB5CEFD608600A09F()) + Vector(10f, 20f, 20f)) || unk_0x89E5F484A37AE468(func_179(unk_0xB5CEFD608600A09F()) - Vector(10f, 20f, 20f), func_179(unk_0xB5CEFD608600A09F()) + Vector(10f, 20f, 20f)))
			{
				if ((((!unk_0x36CEFBE9B745A58D(iLocal_258[0]) && !unk_0x36CEFBE9B745A58D(iLocal_258[1])) && unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), unk_0x3E12B546F3F2597A(), 0)) && unk_0x62F3A07C43FFB568(iLocal_258[0], unk_0x3E12B546F3F2597A(), 0)) && unk_0x62F3A07C43FFB568(iLocal_258[1], unk_0x3E12B546F3F2597A(), 0))
				{
					if (unk_0x8910237449BB6F79(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)) < 0.2f)
					{
						if (iLocal_228 == -1)
						{
							iLocal_228 = unk_0x105601648511CC64();
						}
					}
					else
					{
						iLocal_228 = -1;
					}
					if (iLocal_228 != -1 && unk_0x105601648511CC64() > iLocal_228 + 1000)
					{
						if (!func_178())
						{
							func_169(&uLocal_53, "REGETAU", "REAWA_LOSE", 4, 0, 0, 0);
						}
						if (iLocal_228 != -1 && unk_0x105601648511CC64() > iLocal_228 + 10000)
						{
							func_167();
							SYSTEM::WAIT(0);
							func_169(&uLocal_53, "REGETAU", "REAWA_COPS", 4, 0, 0, 0);
							if (!unk_0x36CEFBE9B745A58D(iLocal_258[0]))
							{
								unk_0xC5A6DFE2B8987B17(&iLocal_265);
								unk_0xA3981DED4FC2E56E(0, 0, 0);
								unk_0x5558ED6D4A2DEC93(0, unk_0xBC25C936A095B5BA(), 1000f, -1, 0, 0);
								unk_0x535008C596714F9E(iLocal_265);
								unk_0xA8E6405305C0D7DF(iLocal_258[0], iLocal_265);
								unk_0x02DAF06EA4F08219(&iLocal_265);
								unk_0x22321800954A532E(iLocal_258[0], true);
							}
							if (!unk_0x36CEFBE9B745A58D(iLocal_258[1]))
							{
								unk_0xC5A6DFE2B8987B17(&iLocal_265);
								unk_0xA3981DED4FC2E56E(0, 500, 0);
								unk_0x5558ED6D4A2DEC93(0, unk_0xBC25C936A095B5BA(), 1000f, -1, 0, 0);
								unk_0x535008C596714F9E(iLocal_265);
								unk_0xA8E6405305C0D7DF(iLocal_258[1], iLocal_265);
								unk_0x02DAF06EA4F08219(&iLocal_265);
								unk_0x22321800954A532E(iLocal_258[1], true);
							}
							iVar8 = 0;
							iVar0 = 7;
							func_239(Var1, &iLocal_258, bVar4);
						}
					}
				}
			}
		}
		if (iVar2 > 1)
		{
			if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) == 0)
			{
				unk_0xA902E18EDF6FA0C8(255, iLocal_266, -1033021910);
				unk_0xA902E18EDF6FA0C8(255, iLocal_266, 1166638144);
				unk_0xA902E18EDF6FA0C8(255, -1033021910, iLocal_266);
				unk_0xA902E18EDF6FA0C8(255, 1166638144, iLocal_266);
			}
			else
			{
				unk_0xA902E18EDF6FA0C8(1, iLocal_266, -1033021910);
				unk_0xA902E18EDF6FA0C8(1, iLocal_266, 1166638144);
				unk_0xA902E18EDF6FA0C8(1, -1033021910, iLocal_266);
				unk_0xA902E18EDF6FA0C8(1, 1166638144, iLocal_266);
			}
		}
		if ((iVar2 > 1 && iVar2 < 7) && !iLocal_253)
		{
			if (unk_0x724D816EA203A79E(iLocal_257))
			{
				if (unk_0xD9C1758D86688CEA(iLocal_257, unk_0xBC25C936A095B5BA(), 1))
				{
					func_167();
					SYSTEM::WAIT(0);
					if (!unk_0x36CEFBE9B745A58D(iLocal_258[0]))
					{
						unk_0x5558ED6D4A2DEC93(iLocal_258[0], unk_0xBC25C936A095B5BA(), 200f, -1, 0, 0);
					}
					if (!unk_0x36CEFBE9B745A58D(iLocal_258[1]))
					{
						unk_0x5558ED6D4A2DEC93(iLocal_258[1], unk_0xBC25C936A095B5BA(), 200f, -1, 0, 0);
					}
					iVar8 = 0;
					iVar0 = 7;
					func_239(Var1, &iLocal_258, bVar4);
				}
			}
		}
		if ((iVar2 > 7 && iVar2 < 18) && !iLocal_253)
		{
			if (unk_0x724D816EA203A79E(iLocal_258[0]) && unk_0x724D816EA203A79E(iLocal_258[1]))
			{
				if (unk_0x36CEFBE9B745A58D(iLocal_258[1]) || !unk_0xE642C1AC73CE364E(iLocal_258[0], unk_0xBC25C936A095B5BA(), 80f, 80f, 80f, 0, 1, 0))
				{
					if (!unk_0x36CEFBE9B745A58D(iLocal_258[0]))
					{
						unk_0xC5A6DFE2B8987B17(&iLocal_265);
						unk_0xA3981DED4FC2E56E(0, 0, 0);
						unk_0x5558ED6D4A2DEC93(0, unk_0xBC25C936A095B5BA(), 200f, -1, 0, 0);
						unk_0x535008C596714F9E(iLocal_265);
						unk_0xA8E6405305C0D7DF(iLocal_258[0], iLocal_265);
						unk_0x02DAF06EA4F08219(&iLocal_265);
						unk_0x22321800954A532E(iLocal_258[0], true);
						func_167();
						SYSTEM::WAIT(0);
						func_169(&uLocal_53, "REGETAU", "REAWA_FKDB", 4, 0, 0, 0);
					}
					iVar8 = 0;
					iVar0 = 7;
					func_239(Var1, &iLocal_258, bVar4);
				}
				if (unk_0x36CEFBE9B745A58D(iLocal_258[0]) || !unk_0xE642C1AC73CE364E(iLocal_258[1], unk_0xBC25C936A095B5BA(), 80f, 80f, 80f, 0, 1, 0))
				{
					if (!unk_0x36CEFBE9B745A58D(iLocal_258[1]))
					{
						unk_0xC5A6DFE2B8987B17(&iLocal_265);
						unk_0xA3981DED4FC2E56E(0, 0, 0);
						unk_0x5558ED6D4A2DEC93(0, unk_0xBC25C936A095B5BA(), 200f, -1, 0, 0);
						unk_0x535008C596714F9E(iLocal_265);
						unk_0xA8E6405305C0D7DF(iLocal_258[1], iLocal_265);
						unk_0x02DAF06EA4F08219(&iLocal_265);
						unk_0x22321800954A532E(iLocal_258[1], true);
						func_167();
						SYSTEM::WAIT(0);
						func_169(&uLocal_53, "REGETAU", "REAWA_DEAD1", 4, 0, 0, 0);
					}
					iVar8 = 0;
					iVar0 = 7;
					func_239(Var1, &iLocal_258, bVar4);
				}
			}
		}
		if (func_166(&iLocal_258, unk_0x3E12B546F3F2597A(), 180f))
		{
			if (unk_0xD9C1758D86688CEA(iLocal_258[0], unk_0xBC25C936A095B5BA(), 1) || unk_0xD9C1758D86688CEA(iLocal_258[0], unk_0xBC25C936A095B5BA(), 1))
			{
				iLocal_253 = 1;
			}
			if (iLocal_253)
			{
				if (!bLocal_248)
				{
					func_165();
				}
				if (!bLocal_249)
				{
					if (!unk_0x36CEFBE9B745A58D(iLocal_257))
					{
						unk_0xC5A6DFE2B8987B17(&iLocal_265);
						if (unk_0x96044E39418AAF17(iLocal_257, "random@getawaydriver", "idle_a", 3) || unk_0x96044E39418AAF17(iLocal_257, "random@getawaydriver", "idle_2_hands_up", 3))
						{
							unk_0xE896C0AD02364F2A(0, "random@getawaydriver", "hands_up_2_idle", 4f, -4f, -1, 0, 0, 0, 0, 0);
						}
						unk_0x56F2E1B5599188FA(0, unk_0xBC25C936A095B5BA(), 10000, 2052, 4);
						unk_0x9565F9267674873A(0, unk_0xBC25C936A095B5BA(), -1, 5f, 3f, 1073741824, 0);
						unk_0xE896C0AD02364F2A(0, "random@getawaydriver", "gesture_nod_yes_soft", 8f, -8f, -1, 48, 0, 0, 0, 0);
						unk_0x85DB484A637CEAB9(0, unk_0xBC25C936A095B5BA(), 3000);
						unk_0xA3A7138EAD2268A0(0, "WORLD_HUMAN_STAND_MOBILE", 0, 1);
						unk_0x535008C596714F9E(iLocal_265);
						unk_0xA8E6405305C0D7DF(iLocal_257, iLocal_265);
						unk_0x02DAF06EA4F08219(&iLocal_265);
						unk_0x22321800954A532E(iLocal_257, true);
						bLocal_249 = true;
					}
				}
			}
			else
			{
				iVar8 = 0;
				iVar0 = 7;
				func_239(Var1, &iLocal_258, bVar4);
			}
			if (bLocal_248)
			{
				unk_0xDF53A66AEE1401AA(1f);
				unk_0xDE255B32C6B37E90(unk_0xB5CEFD608600A09F(), 0);
				if (!unk_0x36CEFBE9B745A58D(iLocal_260[0]))
				{
					if (!unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0))
					{
						if (unk_0xE642C1AC73CE364E(iLocal_260[0], unk_0xBC25C936A095B5BA(), 4f, 4f, 4f, 0, 1, 0))
						{
							if (!func_178())
							{
								unk_0x56F2E1B5599188FA(iLocal_260[0], unk_0xBC25C936A095B5BA(), 1000, 2052, 4);
								func_169(&uLocal_53, "REGETAU", "REAWA_THX", 4, 0, 0, 0);
								SYSTEM::SETTIMERB(0);
							}
							else
							{
								if (!unk_0x36CEFBE9B745A58D(iLocal_260[0]))
								{
									unk_0x2E35C4FA5F0ED22F(iLocal_260[0], false);
								}
								if (!unk_0x36CEFBE9B745A58D(iLocal_260[1]))
								{
									unk_0x2E35C4FA5F0ED22F(iLocal_260[1], false);
								}
								if (SYSTEM::TIMERB() > 3000)
								{
									while (!func_196())
									{
										SYSTEM::WAIT(0);
									}
									func_192(9, 0);
									func_164(5);
									func_183(-1, 0);
									func_180();
									iVar8 = 0;
									iVar0 = 7;
									func_239(Var1, &iLocal_258, bVar4);
								}
							}
						}
						else if (!unk_0xE642C1AC73CE364E(iLocal_260[0], unk_0xBC25C936A095B5BA(), 120f, 120f, 120f, 0, 1, 0))
						{
							iVar8 = 0;
							iVar0 = 7;
							func_239(Var1, &iLocal_258, bVar4);
						}
					}
					else
					{
						unk_0xA4E856A8CD53B8DF(iLocal_260[0]);
						func_167();
						SYSTEM::WAIT(0);
						iVar8 = 0;
						iVar0 = 7;
						func_239(Var1, &iLocal_258, bVar4);
					}
				}
				else if (unk_0x36CEFBE9B745A58D(iLocal_257))
				{
					iVar8 = 0;
					iVar0 = 7;
					func_239(Var1, &iLocal_258, bVar4);
				}
			}
			if (bLocal_249)
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_257))
				{
					if (unk_0xE642C1AC73CE364E(iLocal_257, unk_0xBC25C936A095B5BA(), 4f, 4f, 4f, 0, 1, 0))
					{
						if (!func_178())
						{
							unk_0x56F2E1B5599188FA(iLocal_257, unk_0xBC25C936A095B5BA(), 3000, 2048, 2);
							func_169(&uLocal_53, "REGETAU", "REAWA_THANKS", 4, 0, 0, 0);
						}
						else
						{
							if (!unk_0x36CEFBE9B745A58D(iLocal_257))
							{
								unk_0xB105531EDD3DE51B(iLocal_257, true);
							}
							while (func_178())
							{
								SYSTEM::WAIT(0);
							}
							while (!func_196())
							{
								SYSTEM::WAIT(0);
							}
							unk_0x878261FFF1AA7E94(1);
							func_192(9, 0);
							func_164(5);
							func_183(-1, 0);
							func_180();
							iVar8 = 0;
							iVar0 = 7;
							func_239(Var1, &iLocal_258, bVar4);
						}
					}
					else if (!unk_0xE642C1AC73CE364E(iLocal_257, unk_0xBC25C936A095B5BA(), 120f, 120f, 120f, 0, 1, 0))
					{
						iVar8 = 0;
						iVar0 = 7;
						func_239(Var1, &iLocal_258, bVar4);
					}
				}
				else if (unk_0x36CEFBE9B745A58D(iLocal_260[0]))
				{
					iVar8 = 0;
					iVar0 = 7;
					func_239(Var1, &iLocal_258, bVar4);
				}
			}
		}
		switch (iVar0)
		{
			case 0:
				if (func_152())
				{
					iVar8 = 0;
					iVar0 = 7;
					func_239(Var1, &iLocal_258, bVar4);
				}
				if (func_140(1, Var1))
				{
					iVar8 = 0;
					iVar0 = 2;
				}
				break;
			
			case 2:
				if (func_128(3))
				{
					iLocal_269 = 1;
					func_127(1);
					iVar7 = unk_0x105601648511CC64();
					iVar0 = 4;
				}
				else
				{
					iVar0 = 6;
				}
				iVar8 = 0;
				break;
			
			case 4:
				iVar8 = 0;
				unk_0xF0059F27F7BB6680(&uVar3, 4);
				unk_0xF0059F27F7BB6680(&uVar3, 1);
				unk_0xF0059F27F7BB6680(&uVar3, 5);
				if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
				{
					if (!unk_0x1D403DFADBC2DE3C(unk_0x3E12B546F3F2597A(), 0))
					{
						if (func_126())
						{
							if (unk_0xE59B7F5A03335350(unk_0x3E12B546F3F2597A(), 0))
							{
								if ((unk_0x1AAF0C23233C57AF(unk_0x3E12B546F3F2597A(), 0, 0) && unk_0x1AAF0C23233C57AF(unk_0x3E12B546F3F2597A(), 2, 0)) && unk_0x1AAF0C23233C57AF(unk_0x3E12B546F3F2597A(), 1, 0))
								{
									iVar0 = 5;
								}
							}
						}
					}
				}
				else
				{
					iVar0 = 6;
				}
				iVar0 = 5;
				unk_0x3F473AC37A85C668(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), &uVar5, &uVar6, 1, 1077936128, 0);
				if (func_125(iVar7, 20000))
				{
					iVar0 = 6;
				}
				if (iVar0 != 5)
				{
				}
				break;
			
			case 5:
				if (iVar2 > 1)
				{
					if (!func_200())
					{
						if (unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
						{
							iVar8 = 0;
							iVar0 = 6;
							break;
						}
						if (!iLocal_252)
						{
							if (unk_0x11F754EAEA6336BA(unk_0xBC25C936A095B5BA(), Vector(28.4601f, -1565.293f, 61.5891f) - Vector(30f, 30f, 30f), Vector(28.4601f, -1565.293f, 61.5891f) + Vector(30f, 30f, 30f), 0, 1))
							{
								iVar9 = 0;
								while (iVar9 < iLocal_259)
								{
									if (!unk_0x36CEFBE9B745A58D(iLocal_259[iVar9]))
									{
										unk_0x5558ED6D4A2DEC93(iLocal_259[iVar9], unk_0xBC25C936A095B5BA(), 1000f, -1, 0, 0);
										unk_0x22321800954A532E(iLocal_259[iVar9], true);
									}
									iVar9++;
								}
								if (!unk_0x36CEFBE9B745A58D(iLocal_257))
								{
									unk_0x5558ED6D4A2DEC93(iLocal_257, unk_0xBC25C936A095B5BA(), 1000f, -1, 0, 0);
									unk_0x22321800954A532E(iLocal_257, true);
								}
								iLocal_252 = 1;
							}
						}
					}
				}
				else if (func_152())
				{
					iVar8 = 0;
					iVar0 = 7;
					func_239(Var1, &iLocal_258, bVar4);
				}
				if (iVar0 != 6)
				{
					if (func_1(&iVar2, Var1, &iLocal_258, &iVar8, &bVar4))
					{
						iVar0 = 6;
						break;
					}
				}
				break;
			
			case 6:
				iVar8 = 0;
				iVar0 = 7;
				func_239(Var1, &iLocal_258, bVar4);
				break;
				break;
			
			case 7:
				iVar8 = 0;
				break;
		}
		if (iVar0 != 7)
		{
			SYSTEM::WAIT(iVar8);
		}
	}
	func_239(Var1, &iLocal_258, bVar4);
}

int func_1(int iParam0, struct<5> Param1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, bool bParam8)//Position - 0xE0E
{
	int iVar0;
	vector3 vVar1[2];
	float fVar2[2];
	vector3 vVar3;
	float fVar4;
	vector3 vVar5[5];
	float fVar6;
	vector3 vVar7[5];
	int iVar8;
	vector3 vVar9;
	int iVar10[3];
	vector3 vVar11;
	vector3 vVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	
	vVar5[0 /*3*/] = { -56.7157f, -1317.766f, 27.9845f };
	vVar5[1 /*3*/] = { 457.5345f, -813.3361f, 26.511f };
	vVar5[2 /*3*/] = { 884.047f, -2239.43f, 29.4387f };
	vVar5[3 /*3*/] = { -1339.328f, -762.4225f, 19.314f };
	vVar5[4 /*3*/] = { -461.6898f, 283.665f, 82.2492f };
	vVar7[0 /*3*/] = { -45.2654f, -1290.126f, 28.1977f };
	vVar7[1 /*3*/] = { 470.193f, -731.1867f, 26.412f };
	vVar7[2 /*3*/] = { 889.9938f, -2177.638f, 29.5195f };
	vVar7[3 /*3*/] = { -1334.826f, -792.1527f, 18.8175f };
	vVar7[4 /*3*/] = { -424.5901f, 288.3558f, 82.2293f };
	switch (*iParam0)
	{
		case 0:
			if (func_124(vLocal_232, 300f, 1))
			{
				*iParam0 = 1;
			}
			break;
		
		case 1:
			*iParam7 = 0;
			func_115(39, 1);
			func_115(40, 1);
			func_115(41, 1);
			func_115(42, 1);
			func_115(43, 1);
			func_115(44, 1);
			if (func_114() == 0)
			{
				func_113(&uLocal_53, 0, unk_0xBC25C936A095B5BA(), "MICHAEL", 0, 1);
			}
			else if (func_114() == 1)
			{
				func_113(&uLocal_53, 0, unk_0xBC25C936A095B5BA(), "FRANKLIN", 0, 1);
			}
			else if (func_114() == 2)
			{
				func_113(&uLocal_53, 0, unk_0xBC25C936A095B5BA(), "TREVOR", 0, 1);
			}
			if (SYSTEM::VDIST(vLocal_232, 933.83f, 3640.22f, 32.36f) < 20f)
			{
				vVar1[0 /*3*/] = { 943.1853f, 3647.218f, 31.3603f };
				fVar2[0] = 58.2967f;
				vVar1[1 /*3*/] = { 941.3207f, 3650.301f, 31.3111f };
				fVar2[1] = 92.7793f;
				vVar3 = { 939.2422f, 3649.755f, 31.3536f };
				fVar4 = 260.4475f;
			}
			else if (SYSTEM::VDIST(vLocal_232, 57.86f, -1562.4f, 29.47f) < 20f)
			{
				vVar1[0 /*3*/] = { 66.0644f, -1564.218f, 28.4602f };
				fVar2[0] = 198.4093f;
				vVar1[1 /*3*/] = { 63.5055f, -1568.178f, 28.4602f };
				fVar2[1] = 254.133f;
				vVar3 = { 68.4259f, -1569.067f, 28.6027f };
				fVar4 = 64.1114f;
			}
			iLocal_231 = unk_0x705BBFE5A8ADE4A9(unk_0xB5CEFD608600A09F());
			unk_0x379ACE23D404525C(vLocal_232 - Vector(20f, 20f, 20f), vLocal_232 + Vector(20f, 20f, 20f), false, 1);
			unk_0x1DAA351326EA3537(vLocal_232 - Vector(50f, 50f, 50f), vLocal_232 + Vector(50f, 50f, 50f), 0, 1, 1, 1);
			unk_0x4BDC021CD4295F17(vLocal_232 - Vector(20f, 20f, 20f), vLocal_232 + Vector(20f, 20f, 20f), false, 0);
			unk_0x6935EBF9868982DC(vLocal_232 - Vector(20f, 20f, 20f), vLocal_232 + Vector(20f, 20f, 20f), false, 1);
			unk_0xF243B7A14FCFD0F4(joaat("picador"));
			unk_0xF243B7A14FCFD0F4(joaat("stanier"));
			unk_0xF243B7A14FCFD0F4(joaat("patriot"));
			while ((!unk_0xD6513D668481290A(joaat("picador")) || !unk_0xD6513D668481290A(joaat("stanier"))) || !unk_0xD6513D668481290A(joaat("patriot")))
			{
				SYSTEM::WAIT(0);
			}
			iVar10[0] = unk_0x61C05BF08A1E0EFE(joaat("picador"), 59.5209f, -1547.228f, 28.4602f, 49.1762f, true, true, false);
			iVar10[1] = unk_0x61C05BF08A1E0EFE(joaat("stanier"), 33.3296f, -1577.537f, 28.2826f, 51.8183f, true, true, false);
			iVar10[2] = unk_0x61C05BF08A1E0EFE(joaat("patriot"), 48.8282f, -1582.706f, 28.4603f, 226.8345f, true, true, false);
			unk_0xF0A40F19AAB79E88(iVar10[0], 1084227584);
			unk_0xF0A40F19AAB79E88(iVar10[1], 1084227584);
			unk_0xF0A40F19AAB79E88(iVar10[2], 1084227584);
			if (iLocal_229 == 0)
			{
			}
			unk_0xB2CB6EAA6B280A84("reCriminals", &iLocal_266);
			unk_0xB2CB6EAA6B280A84("reShopKeep", &iLocal_267);
			unk_0xB2CB6EAA6B280A84("reCops", &iLocal_268);
			unk_0xA902E18EDF6FA0C8(5, iLocal_266, -1533126372);
			unk_0xA902E18EDF6FA0C8(5, iLocal_268, iLocal_266);
			unk_0xA902E18EDF6FA0C8(5, -1533126372, iLocal_266);
			unk_0xA902E18EDF6FA0C8(1, -1533126372, iLocal_268);
			unk_0xA902E18EDF6FA0C8(1, iLocal_268, -1533126372);
			(*uParam6)[0] = unk_0x01B3635C3E8EDD81(22, Param1, vVar1[0 /*3*/], fVar2[0], 1, true);
			unk_0x2E35C4FA5F0ED22F((*uParam6)[0], true);
			unk_0x2CA123B0622F495C(Param1);
			unk_0x4106FAF8AA1D69D5((*uParam6)[0], iLocal_266);
			unk_0x7A535CE1F001F3FE((*uParam6)[0], joaat("weapon_appistol"), -1, true, true);
			unk_0x8EF3D958386640FE((*uParam6)[0], unk_0x491B2241281A03B7(800, 2000));
			unk_0xC8FD3EBBB90E8D7F((*uParam6)[0], 206, true);
			unk_0xABA7AE40608505F2((*uParam6)[0], 2, false);
			unk_0xABA7AE40608505F2((*uParam6)[0], 1024, true);
			unk_0xABA7AE40608505F2((*uParam6)[0], 65536, true);
			unk_0xB0031DDAE4FF0BC3((*uParam6)[0], 9, 1, 0, 0);
			func_113(&uLocal_53, 2, (*uParam6)[0], "REGETRobber2", 0, 1);
			(*uParam6)[1] = unk_0x01B3635C3E8EDD81(22, Param1.f_1, vVar1[1 /*3*/], fVar2[1], 1, true);
			unk_0x2E35C4FA5F0ED22F((*uParam6)[1], true);
			unk_0x2CA123B0622F495C(Param1.f_1);
			unk_0x4106FAF8AA1D69D5((*uParam6)[1], iLocal_266);
			unk_0x7A535CE1F001F3FE((*uParam6)[1], joaat("weapon_pistol"), -1, true, true);
			unk_0x8EF3D958386640FE((*uParam6)[1], unk_0x491B2241281A03B7(800, 2000));
			unk_0xC8FD3EBBB90E8D7F((*uParam6)[1], 206, true);
			unk_0xABA7AE40608505F2((*uParam6)[1], 2, false);
			unk_0xABA7AE40608505F2((*uParam6)[1], 1024, true);
			unk_0xABA7AE40608505F2((*uParam6)[1], 65536, true);
			unk_0xB0031DDAE4FF0BC3((*uParam6)[1], 0, 5, 0, 0);
			unk_0xB0031DDAE4FF0BC3((*uParam6)[1], 1, 1, 0, 0);
			unk_0xB0031DDAE4FF0BC3((*uParam6)[1], 2, 1, 0, 0);
			unk_0xB0031DDAE4FF0BC3((*uParam6)[1], 3, 6, 0, 0);
			unk_0xB0031DDAE4FF0BC3((*uParam6)[1], 4, 6, 2, 0);
			unk_0xB0031DDAE4FF0BC3((*uParam6)[1], 6, 1, 0, 0);
			unk_0xB0031DDAE4FF0BC3((*uParam6)[1], 8, 0, 0, 0);
			unk_0xB0031DDAE4FF0BC3((*uParam6)[1], 9, 0, 0, 0);
			unk_0xB0031DDAE4FF0BC3((*uParam6)[1], 10, 1, 0, 0);
			unk_0x36C3B58DA78A2679((*uParam6)[1], "PACKIE_AI_Norm_Part1_Booth");
			func_113(&uLocal_53, 1, (*uParam6)[1], "PACKIE", 0, 1);
			iLocal_257 = unk_0x01B3635C3E8EDD81(4, Param1.f_2, vVar3, fVar4, 1, true);
			unk_0x2CA123B0622F495C(Param1.f_2);
			unk_0x2E35C4FA5F0ED22F(iLocal_257, true);
			unk_0x4106FAF8AA1D69D5(iLocal_257, iLocal_267);
			unk_0x36C3B58DA78A2679(iLocal_257, "A_M_Y_Business_01_CHINESE_MINI_01");
			func_113(&uLocal_53, 3, iLocal_257, "StoreOwner", 0, 1);
			iLocal_259[0] = unk_0x01B3635C3E8EDD81(5, Param1.f_3, 62.8929f, -1575.52f, 28.6027f, 326.1814f, 1, true);
			unk_0x2CA123B0622F495C(Param1.f_3);
			unk_0x91629AC1E1F78419(iLocal_259[0], 17, true);
			unk_0xEE7131C3C73E7282(iLocal_259[0], -1);
			iLocal_259[2] = unk_0x01B3635C3E8EDD81(5, Param1.f_3, 61.6538f, -1555.256f, 28.4601f, 206.7004f, 1, true);
			unk_0x2CA123B0622F495C(Param1.f_3);
			unk_0x91629AC1E1F78419(iLocal_259[2], 17, true);
			unk_0xA3A7138EAD2268A0(iLocal_259[2], "WORLD_HUMAN_MOBILE_FILM_SHOCKING", 0, 0);
			iLocal_259[3] = unk_0x01B3635C3E8EDD81(4, Param1.f_4, 75.9343f, -1556.306f, 28.6028f, 147.2908f, 1, true);
			unk_0x2CA123B0622F495C(Param1.f_4);
			unk_0x91629AC1E1F78419(iLocal_259[3], 17, true);
			*iParam0 = 2;
			break;
		
		case 2:
			if (((((!unk_0x1D403DFADBC2DE3C(iLocal_257, 0) && !unk_0x1D403DFADBC2DE3C(iLocal_259[0], 0)) && !unk_0x1D403DFADBC2DE3C(iLocal_259[2], 0)) && !unk_0x1D403DFADBC2DE3C(iLocal_259[3], 0)) && !unk_0x1D403DFADBC2DE3C((*uParam6)[0], 0)) && !unk_0x1D403DFADBC2DE3C((*uParam6)[1], 0))
			{
				if (((((unk_0xCF9FD9F078487083(iLocal_257) && unk_0xCF9FD9F078487083(iLocal_259[0])) && unk_0xCF9FD9F078487083(iLocal_259[2])) && unk_0xCF9FD9F078487083(iLocal_259[3])) && unk_0xCF9FD9F078487083((*uParam6)[0])) && unk_0xCF9FD9F078487083((*uParam6)[1]))
				{
					unk_0x522053D86D6E1C7A("random@getawaydriver@thugs");
					unk_0x522053D86D6E1C7A("combat@gestures@pistol@halt");
					unk_0x522053D86D6E1C7A("misslamar1ig_20");
					unk_0x522053D86D6E1C7A("random@getawaydriver");
					while (((!unk_0xF9E082857622D91E("random@getawaydriver@thugs") || !unk_0xF9E082857622D91E("combat@gestures@pistol@halt")) || !unk_0xF9E082857622D91E("misslamar1ig_20")) || !unk_0xF9E082857622D91E("random@getawaydriver"))
					{
						SYSTEM::WAIT(0);
					}
					if (!unk_0x36CEFBE9B745A58D(iLocal_257))
					{
						unk_0x2A2F7485FD2B9A29(iLocal_257, -1, 0, -1, 0);
						if (!unk_0x36CEFBE9B745A58D((*uParam6)[0]))
						{
							unk_0xE896C0AD02364F2A((*uParam6)[0], "random@getawaydriver@thugs", "base_a", 4f, -2f, -1, 1, 0, 0, 0, 0);
							unk_0x56F2E1B5599188FA((*uParam6)[0], unk_0xBC25C936A095B5BA(), -1, 2052, 4);
						}
						if (!unk_0x36CEFBE9B745A58D((*uParam6)[1]))
						{
							unk_0xE896C0AD02364F2A((*uParam6)[1], "random@getawaydriver@thugs", "base_b", 4f, -2f, -1, 1, 0, 0, 0, 0);
							unk_0x56F2E1B5599188FA((*uParam6)[1], unk_0xBC25C936A095B5BA(), -1, 2052, 4);
						}
					}
					SYSTEM::SETTIMERA(0);
					*iParam0 = 3;
				}
			}
			break;
		
		case 3:
			if (SYSTEM::TIMERA() > 0)
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_259[0]))
				{
					func_111(iLocal_259[0], "GENERIC_SHOCKED_HIGH", 24);
				}
			}
			if (SYSTEM::TIMERA() > 1000)
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_259[2]))
				{
					func_111(iLocal_259[2], "GENERIC_FRIGHTENED_HIGH", 24);
				}
			}
			if (SYSTEM::TIMERA() > 2000)
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_259[3]))
				{
					func_111(iLocal_259[3], "GENERIC_FRIGHTENED_HIGH", 24);
					SYSTEM::SETTIMERA(0);
				}
			}
			if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 81.71976f, -1530.834f, 28.17651f, 26.78526f, -1595.693f, 58.29443f, 32.875f, 0, true, 0))
			{
				if (!iLocal_252)
				{
					if (!unk_0x36CEFBE9B745A58D(iLocal_259[0]))
					{
						unk_0xAB43C54784946B9F(iLocal_259[0], vLocal_232, 200f, -1, 0, 0);
					}
					if (!unk_0x36CEFBE9B745A58D(iLocal_259[2]))
					{
						unk_0xC5A6DFE2B8987B17(&iLocal_265);
						unk_0x61E7E913658B4389(0, 250);
						unk_0xAB43C54784946B9F(0, vLocal_232, 200f, -1, 0, 0);
						unk_0x535008C596714F9E(iLocal_265);
						unk_0xA8E6405305C0D7DF(iLocal_259[2], iLocal_265);
						unk_0x02DAF06EA4F08219(&iLocal_265);
					}
					if (!unk_0x36CEFBE9B745A58D(iLocal_259[3]))
					{
						unk_0xC5A6DFE2B8987B17(&iLocal_265);
						unk_0x61E7E913658B4389(0, 500);
						unk_0xAB43C54784946B9F(0, vLocal_232, 200f, -1, 0, 0);
						unk_0x535008C596714F9E(iLocal_265);
						unk_0xA8E6405305C0D7DF(iLocal_259[3], iLocal_265);
						unk_0x02DAF06EA4F08219(&iLocal_265);
					}
					iLocal_252 = 1;
				}
			}
			if (func_72(uParam6, unk_0x3E12B546F3F2597A()))
			{
				*iParam0 = 4;
			}
			if (func_71())
			{
				*iParam0 = 18;
			}
			if (unk_0xBFED55DE95EA4B0C(vLocal_232 - Vector(40f, 40f, 40f), vLocal_232 + Vector(40f, 40f, 40f)) || unk_0x89E5F484A37AE468(vLocal_232 - Vector(40f, 40f, 40f), vLocal_232 + Vector(40f, 40f, 40f)))
			{
				if (!unk_0x36CEFBE9B745A58D((*uParam6)[0]) && !unk_0x36CEFBE9B745A58D((*uParam6)[1]))
				{
					unk_0x5558ED6D4A2DEC93((*uParam6)[0], unk_0xBC25C936A095B5BA(), 1000f, -1, 0, 0);
					unk_0x5558ED6D4A2DEC93((*uParam6)[1], unk_0xBC25C936A095B5BA(), 1000f, -1, 0, 0);
					func_167();
					SYSTEM::WAIT(0);
					func_169(&uLocal_53, "REGETAU", "REAWA_POLICE", 4, 0, 0, 0);
					*iParam0 = 20;
				}
			}
			break;
		
		case 4:
			if (!func_178())
			{
				if ((!unk_0x36CEFBE9B745A58D((*uParam6)[0]) && !unk_0x36CEFBE9B745A58D((*uParam6)[1])) && !unk_0x36CEFBE9B745A58D(iLocal_257))
				{
				}
				if (unk_0x724D816EA203A79E(iLocal_257))
				{
					if (!unk_0x36CEFBE9B745A58D(iLocal_257))
					{
						func_169(&uLocal_53, "REGETAU", "REAWA_DOWN", 4, 0, 0, 0);
						unk_0x56F2E1B5599188FA((*uParam6)[0], unk_0xBC25C936A095B5BA(), 10000, 2052, 4);
						unk_0xC5A6DFE2B8987B17(&iLocal_265);
						unk_0xE896C0AD02364F2A(0, "random@getawaydriver", "idle_2_hands_up", 4f, -4f, -1, 0, 0.25f, 0, 0, 0);
						unk_0xE896C0AD02364F2A(0, "random@getawaydriver", "idle_a", 4f, -4f, -1, 1, 0, 0, 0, 0);
						unk_0x535008C596714F9E(iLocal_265);
						unk_0xA8E6405305C0D7DF(iLocal_257, iLocal_265);
						unk_0x02DAF06EA4F08219(&iLocal_265);
					}
					*iParam0 = 5;
				}
			}
			if (func_71())
			{
				*iParam0 = 18;
			}
			if (((unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0) || unk_0x0879C0BDFDEB6C70(unk_0xBC25C936A095B5BA())) || unk_0xBFED55DE95EA4B0C(vLocal_232 - Vector(40f, 40f, 40f), vLocal_232 + Vector(40f, 40f, 40f))) || unk_0x89E5F484A37AE468(vLocal_232 - Vector(40f, 40f, 40f), vLocal_232 + Vector(40f, 40f, 40f)))
			{
				if (!unk_0x36CEFBE9B745A58D((*uParam6)[0]) && !unk_0x36CEFBE9B745A58D((*uParam6)[1]))
				{
					unk_0x5558ED6D4A2DEC93((*uParam6)[0], unk_0xBC25C936A095B5BA(), 1000f, -1, 0, 0);
					unk_0x5558ED6D4A2DEC93((*uParam6)[1], unk_0xBC25C936A095B5BA(), 1000f, -1, 0, 0);
					func_167();
					SYSTEM::WAIT(0);
					func_169(&uLocal_53, "REGETAU", "REAWA_POLICE", 4, 0, 0, 0);
					*iParam0 = 20;
				}
			}
			break;
		
		case 5:
			if (unk_0x36CEFBE9B745A58D(iLocal_257))
			{
				if (!unk_0x36CEFBE9B745A58D((*uParam6)[0]) && !unk_0x36CEFBE9B745A58D((*uParam6)[1]))
				{
					unk_0x85DB484A637CEAB9((*uParam6)[0], unk_0xBC25C936A095B5BA(), -1);
					unk_0x85DB484A637CEAB9((*uParam6)[1], unk_0xBC25C936A095B5BA(), -1);
				}
			}
			else if (unk_0xF4FCC3C1048FF2AB(iLocal_257, 242628503) != 1 && unk_0xF4FCC3C1048FF2AB(iLocal_257, 242628503) != 0)
			{
				unk_0xC5A6DFE2B8987B17(&iLocal_265);
				unk_0xE896C0AD02364F2A(0, "random@getawaydriver", "idle_2_hands_up", 4f, -4f, -1, 0, 0.25f, 0, 0, 0);
				unk_0xE896C0AD02364F2A(0, "random@getawaydriver", "idle_a", 4f, -4f, -1, 1, 0, 0, 0, 0);
				unk_0x535008C596714F9E(iLocal_265);
				unk_0xA8E6405305C0D7DF(iLocal_257, iLocal_265);
				unk_0x02DAF06EA4F08219(&iLocal_265);
			}
			if (!unk_0x36CEFBE9B745A58D(iLocal_258[0]) && !unk_0x36CEFBE9B745A58D(iLocal_258[1]))
			{
				if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0) && !unk_0x5CFC8E6CC224744A(unk_0xBC25C936A095B5BA()))
				{
					if (!unk_0x1D403DFADBC2DE3C(unk_0x3E12B546F3F2597A(), 0))
					{
						if (unk_0x8910237449BB6F79(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)) < 0.1f)
						{
							if (func_126() && unk_0x58F9E0EA914AEF2C(unk_0x3E12B546F3F2597A()))
							{
								unk_0x3B6B082832176FA5(unk_0x6F79ECA8C83E4357(unk_0x3E12B546F3F2597A()), 3);
								if (!unk_0x36CEFBE9B745A58D(iLocal_257))
								{
									vLocal_245 = { unk_0x541C2AEF053615BC(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), false) };
									vVar11 = { unk_0xA4455714F3DCE207(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), -1.5f, -1.5f, 0f) };
									vVar12 = { unk_0xA4455714F3DCE207(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 1.5f, 0f, 0f) };
									unk_0xC5A6DFE2B8987B17(&iLocal_265);
									unk_0x56F2E1B5599188FA(0, unk_0xBC25C936A095B5BA(), 10000, 2096, 4);
									unk_0x57D65255D3D3B6A7(0, iLocal_257, 1500, 0);
									unk_0x8744E2AAA4C44FDC(0, vVar11, iLocal_257, 3f, false, 0.5f, 4f, true, 0, 0, -957453492, 20000);
									unk_0x56F2E1B5599188FA(0, unk_0xBC25C936A095B5BA(), 10000, 2096, 4);
									unk_0x535008C596714F9E(iLocal_265);
									unk_0xA8E6405305C0D7DF(iLocal_258[0], iLocal_265);
									unk_0x02DAF06EA4F08219(&iLocal_265);
									unk_0xC5A6DFE2B8987B17(&iLocal_265);
									unk_0x56F2E1B5599188FA(0, unk_0xBC25C936A095B5BA(), 10000, 2096, 4);
									unk_0x57D65255D3D3B6A7(0, iLocal_257, 2500, 0);
									unk_0x8744E2AAA4C44FDC(0, vVar12, iLocal_257, 3f, false, 0.5f, 4f, true, 0, 0, -957453492, 20000);
									unk_0x56F2E1B5599188FA(0, unk_0xBC25C936A095B5BA(), 10000, 2096, 4);
									unk_0x535008C596714F9E(iLocal_265);
									unk_0xA8E6405305C0D7DF(iLocal_258[1], iLocal_265);
									unk_0x02DAF06EA4F08219(&iLocal_265);
								}
								else
								{
									unk_0x75E3FA28CC7D5707(iLocal_258[0], func_70());
									unk_0x75E3FA28CC7D5707(iLocal_258[1], func_70());
									unk_0x59B9712C1EAB0092(iLocal_258[0], 1);
									unk_0x59B9712C1EAB0092(iLocal_258[1], 0);
									if (unk_0x6F79ECA8C83E4357(unk_0xD20EBB97FE8799ED(unk_0xBC25C936A095B5BA())) == joaat("bus"))
									{
										if (!unk_0x1AAF0C23233C57AF(unk_0xD20EBB97FE8799ED(unk_0xBC25C936A095B5BA()), 1, 0))
										{
											iVar13 = unk_0x3187EF5798B5D209(unk_0xD20EBB97FE8799ED(unk_0xBC25C936A095B5BA()), 1, 0);
											if (!unk_0x5CAE759AE8219D20(iVar13))
											{
												unk_0x77815D3407C6700D(iVar13, true, 0);
												unk_0xF845620A03C7425B(&iVar13);
											}
										}
										if (!unk_0x1AAF0C23233C57AF(unk_0xD20EBB97FE8799ED(unk_0xBC25C936A095B5BA()), 0, 0))
										{
											iVar13 = unk_0x3187EF5798B5D209(unk_0xD20EBB97FE8799ED(unk_0xBC25C936A095B5BA()), 0, 0);
											if (!unk_0x5CAE759AE8219D20(iVar13))
											{
												unk_0x77815D3407C6700D(iVar13, true, 0);
												unk_0xF845620A03C7425B(&iVar13);
											}
										}
									}
									unk_0x0AB3C2863B144B82(iLocal_258[0], 1);
									unk_0x0AB3C2863B144B82(iLocal_258[1], 1);
								}
								*iParam0 = 6;
							}
							else if (!iLocal_250)
							{
								if (!func_178())
								{
									func_169(&uLocal_53, "REGETAU", "REAWA_CAR", 4, 0, 0, 0);
									unk_0x56F2E1B5599188FA(iLocal_258[1], unk_0xBC25C936A095B5BA(), -1, 2096, 4);
									iLocal_250 = 1;
								}
							}
						}
					}
				}
				else if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), (*uParam6)[1], 10f, 10f, 10f, 0, 1, 0))
				{
					if (!iLocal_250)
					{
						if (!func_178())
						{
							func_169(&uLocal_53, "REGETAU", "REAWA_NDCAR", 4, 0, 0, 0);
							unk_0x56F2E1B5599188FA(iLocal_258[1], unk_0xBC25C936A095B5BA(), -1, 2096, 4);
							iLocal_250 = 1;
						}
					}
				}
			}
			if (iLocal_250 || iLocal_251)
			{
				if (unk_0x8910237449BB6F79(unk_0xBC25C936A095B5BA()) < 0.2f)
				{
					if (iLocal_228 == -1)
					{
						iLocal_228 = unk_0x105601648511CC64();
					}
				}
				else
				{
					iLocal_228 = -1;
				}
				if (iLocal_228 != -1 && unk_0x105601648511CC64() > iLocal_228 + 10000)
				{
					func_167();
					SYSTEM::WAIT(0);
					func_169(&uLocal_53, "REGETAU", "REAWA_COPS", 4, 0, 0, 0);
					if (!unk_0x36CEFBE9B745A58D(iLocal_258[0]))
					{
						unk_0x5558ED6D4A2DEC93(iLocal_258[0], unk_0xBC25C936A095B5BA(), 200f, -1, 0, 0);
						unk_0x22321800954A532E(iLocal_258[0], true);
						SYSTEM::WAIT(0);
						unk_0x02537C8C1BEEB477(&(iLocal_258[0]));
					}
					if (!unk_0x36CEFBE9B745A58D(iLocal_258[1]))
					{
						unk_0x5558ED6D4A2DEC93(iLocal_258[1], unk_0xBC25C936A095B5BA(), 200f, -1, 0, 0);
						unk_0x22321800954A532E(iLocal_258[1], true);
						SYSTEM::WAIT(0);
						unk_0x02537C8C1BEEB477(&(iLocal_258[1]));
					}
					*iParam7 = 0;
					*iParam0 = 20;
				}
			}
			func_69(uParam6, 120f);
			if (func_71())
			{
				*iParam0 = 18;
			}
			if (((unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0) || unk_0x0879C0BDFDEB6C70(unk_0xBC25C936A095B5BA())) || unk_0xBFED55DE95EA4B0C(vLocal_232 - Vector(40f, 40f, 40f), vLocal_232 + Vector(40f, 40f, 40f))) || unk_0x89E5F484A37AE468(vLocal_232 - Vector(40f, 40f, 40f), vLocal_232 + Vector(40f, 40f, 40f)))
			{
				if (!unk_0x36CEFBE9B745A58D((*uParam6)[0]) && !unk_0x36CEFBE9B745A58D((*uParam6)[1]))
				{
					unk_0x5558ED6D4A2DEC93((*uParam6)[0], unk_0xBC25C936A095B5BA(), 200f, -1, 0, 0);
					unk_0x5558ED6D4A2DEC93((*uParam6)[1], unk_0xBC25C936A095B5BA(), 200f, -1, 0, 0);
					func_167();
					SYSTEM::WAIT(0);
					func_169(&uLocal_53, "REGETAU", "REAWA_POLICE", 4, 0, 0, 0);
					*iParam0 = 20;
				}
			}
			break;
		
		case 6:
			*iParam0 = 7;
			break;
		
		case 7:
			*iParam7 = 0;
			if (!unk_0x1D403DFADBC2DE3C(unk_0x3E12B546F3F2597A(), 0))
			{
				if (!func_68(uParam6, unk_0x3E12B546F3F2597A(), 120f) || !bLocal_246)
				{
					if (!unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), vLocal_245, 2f, 2f, 2f, false, true, 0))
					{
						if (!unk_0x36CEFBE9B745A58D(iLocal_258[0]) && !unk_0x36CEFBE9B745A58D(iLocal_258[1]))
						{
							if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0) && !unk_0x5CFC8E6CC224744A(unk_0xBC25C936A095B5BA()))
							{
								if (func_126() && unk_0x58F9E0EA914AEF2C(unk_0x3E12B546F3F2597A()))
								{
									unk_0x3B6B082832176FA5(unk_0x6F79ECA8C83E4357(unk_0x3E12B546F3F2597A()), 3);
									while (!unk_0x317B2443006524C2(unk_0x6F79ECA8C83E4357(unk_0x3E12B546F3F2597A())))
									{
										SYSTEM::WAIT(0);
									}
									if (!unk_0x36CEFBE9B745A58D(iLocal_258[0]) && !unk_0x36CEFBE9B745A58D(iLocal_258[1]))
									{
										if (!unk_0xD45C08B05D4687A7(iLocal_258[0]) && !unk_0xD45C08B05D4687A7(iLocal_258[1]))
										{
											unk_0xA4E856A8CD53B8DF(iLocal_258[0]);
											unk_0xA4E856A8CD53B8DF(iLocal_258[1]);
											unk_0x56F2E1B5599188FA(iLocal_258[1], unk_0xBC25C936A095B5BA(), 10000, 2052, 4);
											unk_0x75E3FA28CC7D5707(iLocal_258[0], func_70());
											unk_0x75E3FA28CC7D5707(iLocal_258[1], func_70());
											unk_0x59B9712C1EAB0092(iLocal_258[0], 1);
											unk_0x59B9712C1EAB0092(iLocal_258[1], 0);
											if (unk_0x6F79ECA8C83E4357(unk_0xD20EBB97FE8799ED(unk_0xBC25C936A095B5BA())) == joaat("bus"))
											{
												if (!unk_0x1AAF0C23233C57AF(unk_0xD20EBB97FE8799ED(unk_0xBC25C936A095B5BA()), 1, 0))
												{
													iVar14 = unk_0x3187EF5798B5D209(unk_0xD20EBB97FE8799ED(unk_0xBC25C936A095B5BA()), 1, 0);
													if (!unk_0x5CAE759AE8219D20(iVar14))
													{
														unk_0x77815D3407C6700D(iVar14, true, 0);
														unk_0xF845620A03C7425B(&iVar14);
													}
												}
												if (!unk_0x1AAF0C23233C57AF(unk_0xD20EBB97FE8799ED(unk_0xBC25C936A095B5BA()), 0, 0))
												{
													iVar14 = unk_0x3187EF5798B5D209(unk_0xD20EBB97FE8799ED(unk_0xBC25C936A095B5BA()), 0, 0);
													if (!unk_0x5CAE759AE8219D20(iVar14))
													{
														unk_0x77815D3407C6700D(iVar14, true, 0);
														unk_0xF845620A03C7425B(&iVar14);
													}
												}
											}
											unk_0x0AB3C2863B144B82(iLocal_258[0], 1);
											unk_0x0AB3C2863B144B82(iLocal_258[1], 1);
										}
									}
								}
								else if (!iLocal_250)
								{
									if (!func_178())
									{
										func_169(&uLocal_53, "REGETAU", "REAWA_CAR", 4, 0, 0, 0);
										iLocal_250 = 1;
									}
								}
							}
							else if (unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), (*uParam6)[1], 10f, 10f, 10f, 0, 1, 0))
							{
								if (!iLocal_250)
								{
									if (!func_178())
									{
										func_169(&uLocal_53, "REGETAU", "REAWA_NDCAR", 4, 0, 0, 0);
										iLocal_250 = 1;
									}
								}
							}
						}
					}
				}
			}
			if (!unk_0x36CEFBE9B745A58D(iLocal_258[0]))
			{
				if (!unk_0xD45C08B05D4687A7(iLocal_258[0]))
				{
					if (!unk_0x36CEFBE9B745A58D(iLocal_257))
					{
						if (!unk_0x1D403DFADBC2DE3C(unk_0x3E12B546F3F2597A(), 0))
						{
							if ((unk_0xF4FCC3C1048FF2AB(iLocal_258[0], 242628503) != 1 && unk_0xF4FCC3C1048FF2AB(iLocal_258[0], 242628503) != 0) || unk_0xF4FCC3C1048FF2AB(iLocal_258[0], 242628503) == 7)
							{
								unk_0x75E3FA28CC7D5707(iLocal_258[0], func_70());
								unk_0x0AB3C2863B144B82(iLocal_258[0], 1);
							}
						}
					}
					else
					{
						unk_0x75E3FA28CC7D5707(iLocal_258[0], func_70());
						unk_0x0AB3C2863B144B82(iLocal_258[0], 1);
					}
				}
				else
				{
					if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
					{
						if ((!unk_0x8F1FDD0A40DC834A(iLocal_258[0]) && !unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), vLocal_245, 2f, 2f, 2f, false, true, 0)) && !unk_0x4DBCE270B354E123(iLocal_258[0], unk_0x541C2AEF053615BC(unk_0x3E12B546F3F2597A(), true), 2.5f, 2.5f, 2.5f, false, true, 0))
						{
							unk_0x1F6829714DE50304(iLocal_258[0], 2f);
						}
					}
					if (unk_0xF4FCC3C1048FF2AB(iLocal_258[0], -875674219) == 1 || unk_0xF4FCC3C1048FF2AB(iLocal_258[0], -875674219) == 0)
					{
					}
				}
			}
			if (!unk_0x36CEFBE9B745A58D(iLocal_258[1]))
			{
				if (!unk_0xD45C08B05D4687A7(iLocal_258[1]))
				{
					if (!unk_0x36CEFBE9B745A58D(iLocal_257))
					{
						if (!unk_0x1D403DFADBC2DE3C(unk_0x3E12B546F3F2597A(), 0))
						{
							if ((unk_0xF4FCC3C1048FF2AB(iLocal_258[1], 242628503) != 1 && unk_0xF4FCC3C1048FF2AB(iLocal_258[1], 242628503) != 0) || unk_0xF4FCC3C1048FF2AB(iLocal_258[1], 242628503) == 7)
							{
								unk_0x75E3FA28CC7D5707(iLocal_258[1], func_70());
								unk_0x0AB3C2863B144B82(iLocal_258[1], 1);
							}
						}
					}
					else
					{
						unk_0x75E3FA28CC7D5707(iLocal_258[1], func_70());
						unk_0x0AB3C2863B144B82(iLocal_258[1], 1);
					}
				}
				else
				{
					if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
					{
						if ((!unk_0x8F1FDD0A40DC834A(iLocal_258[1]) && !unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), vLocal_245, 2f, 2f, 2f, false, true, 0)) && !unk_0x4DBCE270B354E123(iLocal_258[1], unk_0x541C2AEF053615BC(unk_0x3E12B546F3F2597A(), true), 2.5f, 2.5f, 2.5f, false, true, 0))
						{
							unk_0x1F6829714DE50304(iLocal_258[1], 2f);
						}
					}
					if (unk_0xF4FCC3C1048FF2AB(iLocal_258[1], -875674219) == 1 || unk_0xF4FCC3C1048FF2AB(iLocal_258[1], -875674219) == 0)
					{
					}
				}
			}
			if (!bLocal_246)
			{
				if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
				{
					if ((!unk_0x1D403DFADBC2DE3C(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 0) && !unk_0x36CEFBE9B745A58D(iLocal_258[0])) && !unk_0x36CEFBE9B745A58D(iLocal_258[1]))
					{
						if ((unk_0x62F3A07C43FFB568(iLocal_258[0], unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 0) && !unk_0x62F3A07C43FFB568(iLocal_258[1], unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 0)) && !unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_258[1], 20f, 20f, 20f, 0, 1, 0))
						{
							bLocal_246 = true;
						}
						if ((unk_0x62F3A07C43FFB568(iLocal_258[1], unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 0) && !unk_0x62F3A07C43FFB568(iLocal_258[0], unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 0)) && !unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_258[0], 20f, 20f, 20f, 0, 1, 0))
						{
							bLocal_246 = true;
						}
					}
				}
			}
			if (!unk_0x1D403DFADBC2DE3C(unk_0x3E12B546F3F2597A(), 0))
			{
				if (func_68(uParam6, unk_0x3E12B546F3F2597A(), 120f) || bLocal_246)
				{
					if (!unk_0x36CEFBE9B745A58D(iLocal_257))
					{
						unk_0xC5A6DFE2B8987B17(&iLocal_265);
						unk_0xE896C0AD02364F2A(0, "random@getawaydriver", "hands_up_2_idle", 4f, -4f, -1, 0, 0, 0, 0, 0);
						unk_0x5558ED6D4A2DEC93(0, unk_0xBC25C936A095B5BA(), 200f, -1, 0, 0);
						unk_0x535008C596714F9E(iLocal_265);
						unk_0xA8E6405305C0D7DF(iLocal_257, iLocal_265);
						unk_0x02DAF06EA4F08219(&iLocal_265);
						unk_0x22321800954A532E(iLocal_257, true);
						unk_0x02537C8C1BEEB477(&iLocal_257);
					}
					func_67();
					if (!unk_0x33CC9445B2DF9387(7.3162f, -1544.838f, 28.2558f, 3f))
					{
						iLocal_263 = unk_0x61C05BF08A1E0EFE(joaat("police3"), 7.3162f, -1544.838f, 28.2558f, 251.9956f, true, true, false);
						iLocal_261[0] = unk_0xFD8987C090669BD5(iLocal_263, 6, joaat("s_m_y_cop_01"), -1, 1, true);
						iLocal_261[1] = unk_0xFD8987C090669BD5(iLocal_263, 6, joaat("s_m_y_cop_01"), 0, 1, true);
						unk_0x7A535CE1F001F3FE(iLocal_261[0], joaat("weapon_pistol"), -1, false, true);
						unk_0x7A535CE1F001F3FE(iLocal_261[1], joaat("weapon_pistol"), -1, false, true);
						unk_0xEB061E1EBFED4D59(iLocal_261[0], 0);
					}
					if (!unk_0x33CC9445B2DF9387(91.6602f, -1541.899f, 28.3422f, 3f))
					{
						iLocal_263 = unk_0x61C05BF08A1E0EFE(joaat("police3"), 91.6602f, -1541.899f, 28.3422f, 127.3064f, true, true, false);
						iLocal_261[0] = unk_0xFD8987C090669BD5(iLocal_263, 6, joaat("s_m_y_cop_01"), -1, 1, true);
						iLocal_261[1] = unk_0xFD8987C090669BD5(iLocal_263, 6, joaat("s_m_y_cop_01"), 0, 1, true);
						unk_0x7A535CE1F001F3FE(iLocal_261[0], joaat("weapon_pistol"), -1, false, true);
						unk_0x7A535CE1F001F3FE(iLocal_261[1], joaat("weapon_pistol"), -1, false, true);
						unk_0xEB061E1EBFED4D59(iLocal_261[0], 0);
					}
					if (!unk_0x33CC9445B2DF9387(32.8029f, -1594.4f, 28.4262f, 3f))
					{
						iLocal_263 = unk_0x61C05BF08A1E0EFE(joaat("police3"), 32.8029f, -1594.4f, 28.4262f, 337.7429f, true, true, false);
						iLocal_261[0] = unk_0xFD8987C090669BD5(iLocal_263, 6, joaat("s_m_y_cop_01"), -1, 1, true);
						iLocal_261[1] = unk_0xFD8987C090669BD5(iLocal_263, 6, joaat("s_m_y_cop_01"), 0, 1, true);
						unk_0x7A535CE1F001F3FE(iLocal_261[0], joaat("weapon_pistol"), -1, false, true);
						unk_0x7A535CE1F001F3FE(iLocal_261[1], joaat("weapon_pistol"), -1, false, true);
						unk_0xEB061E1EBFED4D59(iLocal_261[0], 0);
					}
					unk_0xB4513103F3EB41DB("SCRIPTED_SCANNER_REPORT_GETAWAY_01", 0f);
					unk_0x47E6F608C9D0A4AF(unk_0x3E12B546F3F2597A(), 1);
					unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), 2, 0);
					unk_0xCE6A8FE7DACF8BD4(unk_0xB5CEFD608600A09F(), 0);
					unk_0x7B6A06DE40F28782(unk_0xB5CEFD608600A09F(), 0f);
					unk_0xA902E18EDF6FA0C8(5, -1533126372, iLocal_266);
					unk_0xA902E18EDF6FA0C8(5, iLocal_266, -1533126372);
					SYSTEM::WAIT(1000);
					if (!bLocal_246)
					{
						func_169(&uLocal_53, "REGETAU", "REAWA_COPS2", 4, 0, 0, 0);
					}
					if (!unk_0x36CEFBE9B745A58D((*uParam6)[iVar8]))
					{
						unk_0x5502708AECB47F5D((*uParam6)[iVar8]);
					}
					iLocal_222 = unk_0x105601648511CC64();
					*iParam0 = 8;
				}
			}
			if (!unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 95.0746f, -1520.042f, 28.3593f, -5.9698f, -1641.819f, 38.4042f, 98.1875f, 0, true, 0))
			{
				if (!unk_0x36CEFBE9B745A58D((*uParam6)[0]) && !unk_0x36CEFBE9B745A58D((*uParam6)[1]))
				{
					unk_0x5558ED6D4A2DEC93((*uParam6)[0], unk_0xBC25C936A095B5BA(), 200f, -1, 0, 0);
					unk_0x5558ED6D4A2DEC93((*uParam6)[1], unk_0xBC25C936A095B5BA(), 200f, -1, 0, 0);
					func_167();
					SYSTEM::WAIT(0);
					func_169(&uLocal_53, "REGETAU", "REAWA_COPS", 4, 0, 0, 0);
					*iParam0 = 20;
				}
			}
			func_69(uParam6, 120f);
			func_66();
			if (func_71())
			{
				*iParam0 = 18;
			}
			break;
		
		case 8:
			func_65(iLocal_51);
			if (func_125(iLocal_222, 3000))
			{
				*iParam0 = 9;
			}
			if (func_71())
			{
				*iParam0 = 18;
			}
			break;
		
		case 9:
			func_64(uParam6);
			if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) == 0)
			{
				unk_0xA902E18EDF6FA0C8(1, -1533126372, iLocal_266);
				unk_0xA902E18EDF6FA0C8(1, iLocal_266, -1533126372);
				if (!unk_0x1D403DFADBC2DE3C(unk_0x3E12B546F3F2597A(), 0))
				{
					unk_0x47E6F608C9D0A4AF(unk_0x3E12B546F3F2597A(), 0);
				}
				if (!unk_0x1D403DFADBC2DE3C(iLocal_263, 0))
				{
					unk_0x1E7A09C1710FB071(&iLocal_263);
				}
				if (!unk_0x36CEFBE9B745A58D(iLocal_261[0]))
				{
					unk_0x02537C8C1BEEB477(&(iLocal_261[0]));
				}
				if (!unk_0x36CEFBE9B745A58D(iLocal_261[1]))
				{
					unk_0x02537C8C1BEEB477(&(iLocal_261[1]));
				}
				func_65(iLocal_51);
				*iParam0 = 10;
			}
			iVar8 = 0;
			while (iVar8 < *uParam6)
			{
				if (!unk_0x1D403DFADBC2DE3C(unk_0x3E12B546F3F2597A(), 0) && !unk_0x36CEFBE9B745A58D((*uParam6)[iVar8]))
				{
					if (!unk_0x25EF720B1CAB1E23((*uParam6)[iVar8], unk_0x3E12B546F3F2597A()))
					{
						if (!unk_0x2DA8CA50A72528FB(uLocal_255[iVar8]))
						{
							uLocal_255[iVar8] = func_62((*uParam6)[iVar8], 0, 145);
							func_65(iLocal_51);
						}
					}
				}
				iVar8++;
			}
			func_69(uParam6, 120f);
			func_66();
			if (func_60())
			{
				*iParam0 = 12;
			}
			if (func_71())
			{
				*iParam0 = 18;
			}
			break;
		
		case 10:
			if (unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0))
			{
				unk_0xA902E18EDF6FA0C8(5, -1533126372, iLocal_266);
				unk_0xA902E18EDF6FA0C8(5, iLocal_266, -1533126372);
				func_65(iLocal_51);
				*iParam0 = 8;
			}
			else
			{
				unk_0xA902E18EDF6FA0C8(1, -1533126372, iLocal_266);
				unk_0xA902E18EDF6FA0C8(1, iLocal_266, -1533126372);
				vVar9 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true) };
				fVar6 = 9999f;
				iVar15 = 0;
				while (iVar15 < vVar5.x)
				{
					if (SYSTEM::VDIST(vVar9, vVar5[iVar15 /*3*/]) < fVar6)
					{
						fVar6 = SYSTEM::VDIST(vVar9, vVar5[iVar15 /*3*/]);
						iLocal_221 = iVar15;
					}
					iVar15++;
				}
				if (func_59(vVar5[iLocal_221 /*3*/], 0f, 0f, 0f, 0))
				{
					iLocal_221 = 0;
				}
				iLocal_51 = func_57(vVar5[iLocal_221 /*3*/], 1);
				if (func_114() == 2 && !func_56())
				{
					if (!unk_0x2DA8CA50A72528FB(iLocal_256))
					{
						iLocal_256 = func_57(vLocal_244, 0);
						unk_0xBF0E22F3E083C33D(iLocal_256, 269);
						func_54();
					}
				}
				iLocal_222 = unk_0x105601648511CC64();
				if (!iLocal_220)
				{
					func_167();
					SYSTEM::WAIT(0);
					func_169(&uLocal_53, "REGETAU", "REAWA_HOM", 4, 0, 0, 0);
					iLocal_220 = 1;
				}
				*iParam0 = 11;
			}
			if (func_71())
			{
				*iParam0 = 18;
			}
			break;
		
		case 11:
			*iParam7 = 0;
			func_53(uParam6);
			if (unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0))
			{
				func_65(iLocal_51);
				*iParam0 = 8;
			}
			else
			{
				if (func_52(vVar5[iLocal_221 /*3*/]))
				{
					func_169(&uLocal_53, "REGETAU", "REAWA_CULT", 4, 0, 0, 0);
				}
				if (func_50())
				{
					func_167();
					SYSTEM::WAIT(0);
					if (func_49())
					{
						func_169(&uLocal_53, "REGETAU", "REAWA_CULT2", 4, 0, 0, 0);
					}
					else
					{
						func_169(&uLocal_53, "REGETAU", "REAWA_CULT3", 4, 0, 0, 0);
					}
				}
				if (!unk_0x36CEFBE9B745A58D(iLocal_258[0]) && !unk_0x36CEFBE9B745A58D(iLocal_258[1]))
				{
					if ((unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), vVar5[iLocal_221 /*3*/], Global_13, true, true, 0) && unk_0x4DBCE270B354E123(iLocal_258[0], vVar5[iLocal_221 /*3*/], 20f, 20f, 20f, false, true, 0)) && unk_0x4DBCE270B354E123(iLocal_258[1], vVar5[iLocal_221 /*3*/], 20f, 20f, 20f, false, true, 0))
					{
						func_65(iLocal_51);
						iVar8 = 0;
						while (iVar8 <= (*uParam6 - 1))
						{
							if (iLocal_218)
							{
								unk_0x241D744C1CCBC526(unk_0x3E12B546F3F2597A(), 10.5f, 2, 0);
								SYSTEM::WAIT(1000);
								iLocal_218 = 0;
							}
							if (!unk_0x36CEFBE9B745A58D((*uParam6)[iVar8]))
							{
								unk_0x5502708AECB47F5D((*uParam6)[iVar8]);
								unk_0x57EB4CC8F1928A47((*uParam6)[iVar8]);
								unk_0x6BC61312A222189A(iLocal_231);
							}
							iVar8++;
						}
						*iParam0 = 13;
					}
				}
			}
			iVar8 = 0;
			while (iVar8 < *uParam6)
			{
				if (!unk_0x1D403DFADBC2DE3C(unk_0x3E12B546F3F2597A(), 0) && !unk_0x36CEFBE9B745A58D((*uParam6)[iVar8]))
				{
					if (!unk_0x25EF720B1CAB1E23((*uParam6)[iVar8], unk_0x3E12B546F3F2597A()))
					{
						if (!unk_0x2DA8CA50A72528FB(uLocal_255[iVar8]))
						{
							uLocal_255[iVar8] = func_62((*uParam6)[iVar8], 0, 145);
						}
					}
				}
				iVar8++;
			}
			func_69(uParam6, 120f);
			func_66();
			if (unk_0x8910237449BB6F79(unk_0xBC25C936A095B5BA()) < 0.2f)
			{
				if (iLocal_228 == -1)
				{
					iLocal_228 = unk_0x105601648511CC64();
				}
			}
			else
			{
				iLocal_228 = -1;
			}
			if (iLocal_228 != -1 && unk_0x105601648511CC64() > (iLocal_228 + 60000))
			{
				func_167();
				SYSTEM::WAIT(0);
				func_169(&uLocal_53, "REGETAU", "REAWA_COPS", 4, 0, 0, 0);
				if (!unk_0x36CEFBE9B745A58D(iLocal_258[0]))
				{
					unk_0x5558ED6D4A2DEC93(iLocal_258[0], unk_0xBC25C936A095B5BA(), 200f, -1, 0, 0);
					unk_0x22321800954A532E(iLocal_258[0], true);
				}
				if (!unk_0x36CEFBE9B745A58D(iLocal_258[1]))
				{
					unk_0x5558ED6D4A2DEC93(iLocal_258[1], unk_0xBC25C936A095B5BA(), 200f, -1, 0, 0);
					unk_0x22321800954A532E(iLocal_258[1], true);
				}
				*iParam7 = 0;
				*iParam0 = 20;
			}
			if (func_60())
			{
				*iParam0 = 12;
			}
			if (func_71())
			{
				*iParam0 = 18;
			}
			break;
		
		case 12:
			func_165();
			if (bLocal_248)
			{
				unk_0x57EB4CC8F1928A47(iLocal_258[0]);
				unk_0x57EB4CC8F1928A47(iLocal_258[1]);
				unk_0xA98B19EC1C93FC3C(unk_0xB5CEFD608600A09F());
				func_167();
				SYSTEM::WAIT(0);
				func_169(&uLocal_53, "REGETAU", "REAWA_COPS3", 4, 0, 0, 0);
				if (!unk_0x36CEFBE9B745A58D((*uParam6)[0]))
				{
					unk_0xC5A6DFE2B8987B17(&iLocal_265);
					unk_0xA3981DED4FC2E56E(0, 0, 4194304);
					unk_0x5558ED6D4A2DEC93(0, unk_0xBC25C936A095B5BA(), 200f, -1, 0, 0);
					unk_0x535008C596714F9E(iLocal_265);
					unk_0xA8E6405305C0D7DF((*uParam6)[0], iLocal_265);
					unk_0x02DAF06EA4F08219(&iLocal_265);
					unk_0x22321800954A532E((*uParam6)[0], true);
				}
				if (!unk_0x36CEFBE9B745A58D((*uParam6)[1]))
				{
					unk_0xC5A6DFE2B8987B17(&iLocal_265);
					unk_0xA3981DED4FC2E56E(0, 500, 4194304);
					unk_0x5558ED6D4A2DEC93(0, unk_0xBC25C936A095B5BA(), 200f, -1, 0, 0);
					unk_0x535008C596714F9E(iLocal_265);
					unk_0xA8E6405305C0D7DF((*uParam6)[1], iLocal_265);
					unk_0x02DAF06EA4F08219(&iLocal_265);
					unk_0x22321800954A532E((*uParam6)[1], true);
				}
				*iParam0 = 20;
			}
			break;
		
		case 13:
			if (unk_0x8910237449BB6F79(unk_0xBC25C936A095B5BA()) < 5f)
			{
				iVar8 = 0;
				while (iVar8 <= (*uParam6 - 1))
				{
					if (!unk_0x36CEFBE9B745A58D((*uParam6)[iVar8]))
					{
						if (unk_0xF4FCC3C1048FF2AB((*uParam6)[iVar8], 242628503) != 1 || unk_0xF4FCC3C1048FF2AB((*uParam6)[iVar8], 242628503) != 0)
						{
							if (!unk_0x36CEFBE9B745A58D((*uParam6)[iVar8]))
							{
								iVar0 = 0;
								iLocal_226 = iVar8;
							}
						}
					}
					iVar8++;
				}
				*iParam0 = 14;
			}
			break;
		
		case 14:
			iVar8 = 0;
			while (iVar8 < *uParam6)
			{
				if (!unk_0x36CEFBE9B745A58D((*uParam6)[0]))
				{
					unk_0x56F2E1B5599188FA(unk_0xBC25C936A095B5BA(), (*uParam6)[iVar8], 4000, 2048, 2);
					unk_0xC5A6DFE2B8987B17(&iVar0);
					unk_0xA3981DED4FC2E56E(0, 0, 4194816);
					unk_0x346129B364057FF6(0, vVar7[iLocal_221 /*3*/], 2f, -1, 1048576000, 0, 1193033728);
					unk_0x5558ED6D4A2DEC93(0, unk_0xBC25C936A095B5BA(), 200f, -1, 0, 0);
					unk_0x535008C596714F9E(iVar0);
					unk_0xA8E6405305C0D7DF((*uParam6)[0], iVar0);
					unk_0x02DAF06EA4F08219(&iVar0);
					if (!unk_0x36CEFBE9B745A58D((*uParam6)[1]))
					{
						unk_0xC5A6DFE2B8987B17(&iVar0);
						unk_0xA3981DED4FC2E56E(0, 2000, 4194816);
						unk_0x56F2E1B5599188FA(0, unk_0xBC25C936A095B5BA(), 3000, 2052, 2);
						unk_0x346129B364057FF6(0, vVar7[iLocal_221 /*3*/], 2f, -1, 1048576000, 0, 1193033728);
						unk_0x5558ED6D4A2DEC93(0, unk_0xBC25C936A095B5BA(), 200f, -1, 0, 0);
						unk_0x535008C596714F9E(iVar0);
						unk_0xA8E6405305C0D7DF((*uParam6)[1], iVar0);
						unk_0x02DAF06EA4F08219(&iVar0);
					}
					iVar0 = 0;
					unk_0x22321800954A532E((*uParam6)[iVar8], true);
					unk_0x56F2E1B5599188FA((*uParam6)[iVar8], unk_0xBC25C936A095B5BA(), 4000, 2052, 2);
					func_167();
					SYSTEM::WAIT(0);
					if (iLocal_226 > 0)
					{
						func_169(&uLocal_53, "REGETAU", "REAWA_STOP2", 4, 0, 0, 0);
					}
					else
					{
						func_169(&uLocal_53, "REGETAU", "REAWA_STOP", 4, 0, 0, 0);
					}
					*iParam0 = 15;
				}
				iVar8++;
			}
			break;
		
		case 15:
			if (!*bParam8)
			{
				if (!unk_0x36CEFBE9B745A58D((*uParam6)[1]))
				{
					if (!iLocal_218)
					{
						unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
						iLocal_218 = 1;
					}
					func_17(func_114(), 1, 1000, 0, 1);
					*bParam8 = 1;
				}
			}
			else if (!unk_0x36CEFBE9B745A58D((*uParam6)[0]) && !unk_0x36CEFBE9B745A58D((*uParam6)[1]))
			{
				if (!unk_0x5237AF95232D78C5((*uParam6)[0], 0) && !unk_0x5237AF95232D78C5((*uParam6)[1], 0))
				{
					unk_0xEB233A3B7635D2AC();
					unk_0x44C98C11ED6DD327(unk_0xBC25C936A095B5BA());
					while (!func_196())
					{
						SYSTEM::WAIT(0);
					}
					func_3(10, 0);
					if (func_2(77))
					{
						func_192(9, 0);
					}
					func_164(6);
					func_183(-1, 0);
					func_180();
					*iParam0 = 20;
				}
			}
			break;
		
		case 16:
			*bParam8 = 1;
			*iParam0 = 20;
			break;
		
		case 17:
			break;
		
		case 18:
			iLocal_253 = 1;
			unk_0xA902E18EDF6FA0C8(5, iLocal_266, 1862763509);
			unk_0xA902E18EDF6FA0C8(1, iLocal_266, iLocal_266);
			unk_0xA98B19EC1C93FC3C(unk_0xB5CEFD608600A09F());
			unk_0xDF53A66AEE1401AA(0f);
			unk_0xDE255B32C6B37E90(unk_0xB5CEFD608600A09F(), 1);
			iVar16 = 0;
			while (iVar16 < iLocal_258)
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_258[iVar16]))
				{
					if (unk_0x2DA8CA50A72528FB(uLocal_255[iVar16]))
					{
						unk_0x07B8ECB35A4ED3AC(&(uLocal_255[iVar16]));
						if (unk_0x5237AF95232D78C5(iLocal_258[iVar16], 0))
						{
							unk_0xA3981DED4FC2E56E(iLocal_258[iVar16], 0, 0);
						}
						if (unk_0x2DA8CA50A72528FB(iLocal_51))
						{
							unk_0x07B8ECB35A4ED3AC(&iLocal_51);
						}
						unk_0x57EB4CC8F1928A47(iLocal_258[iVar16]);
						unk_0xB8CBD998685C0685(iLocal_258[iVar16], unk_0xBC25C936A095B5BA(), 0, 16);
						unk_0x22321800954A532E(iLocal_258[iVar16], true);
					}
				}
				iVar16++;
			}
			func_167();
			SYSTEM::WAIT(0);
			if (!unk_0x36CEFBE9B745A58D(iLocal_258[1]))
			{
				func_169(&uLocal_53, "REGETAU", "REAWA_ATTP", 4, 0, 0, 0);
			}
			else if (!unk_0x36CEFBE9B745A58D(iLocal_258[0]))
			{
				func_169(&uLocal_53, "REGETAU", "REAWA_ATTB", 4, 0, 0, 0);
			}
			if (!bLocal_249)
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_257))
				{
					unk_0xB105531EDD3DE51B(iLocal_257, false);
					unk_0xE896C0AD02364F2A(iLocal_257, "random@getawaydriver", "base", 4f, -4f, -1, 1, 0, 0, 0, 0);
				}
			}
			iVar16 = 0;
			while (iVar16 < iLocal_259)
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_259[iVar16]))
				{
					unk_0x5558ED6D4A2DEC93(iLocal_259[iVar16], unk_0xBC25C936A095B5BA(), 150f, -1, 0, 0);
					unk_0x22321800954A532E(iLocal_259[iVar16], true);
				}
				iVar16++;
			}
			*iParam0 = 19;
			break;
		
		case 19:
			unk_0xA902E18EDF6FA0C8(5, iLocal_266, 1862763509);
			iVar16 = 0;
			while (iVar16 < iLocal_258)
			{
				if (unk_0x36CEFBE9B745A58D(iLocal_258[iVar16]))
				{
					if (unk_0x2DA8CA50A72528FB(uLocal_255[iVar16]))
					{
						unk_0x07B8ECB35A4ED3AC(&(uLocal_255[iVar16]));
					}
				}
				if (!unk_0x36CEFBE9B745A58D(iLocal_258[iVar16]))
				{
					if (!unk_0x2DA8CA50A72528FB(uLocal_255[iVar16]))
					{
						uLocal_255[iVar16] = func_62(iLocal_258[iVar16], 1, 145);
					}
					if (unk_0xD45C08B05D4687A7(iLocal_258[iVar16]))
					{
						unk_0x57EB4CC8F1928A47(iLocal_258[iVar16]);
					}
					if (unk_0x5237AF95232D78C5(iLocal_258[iVar16], 0))
					{
						unk_0xA3981DED4FC2E56E(iLocal_258[iVar16], 0, 0);
						unk_0xB8CBD998685C0685(iLocal_258[iVar16], unk_0xBC25C936A095B5BA(), 0, 16);
						unk_0x22321800954A532E(iLocal_258[iVar16], true);
					}
					else
					{
						unk_0xB8CBD998685C0685(iLocal_258[iVar16], unk_0xBC25C936A095B5BA(), 0, 16);
						unk_0x22321800954A532E(iLocal_258[iVar16], true);
					}
				}
				iVar16++;
			}
			if (unk_0x2DA8CA50A72528FB(iLocal_51))
			{
				unk_0x07B8ECB35A4ED3AC(&iLocal_51);
			}
			break;
		
		case 20:
			if (!func_178())
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_2(int iParam0)//Position - 0x367F
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_19B04.f_2360.f_14A[iParam0 /*6*/];
}

void func_3(int iParam0, bool bParam1)//Position - 0x36AB
{
	int iVar0;
	char* sVar1;
	
	unk_0xF0059F27F7BB6680(&(Global_19B04.f_1.f_74), iParam0);
	switch (iParam0)
	{
		case 10:
			unk_0xF0059F27F7BB6680(&(Global_19B04.f_1.f_77), 14);
			break;
		
		case 13:
			unk_0xF0059F27F7BB6680(&(Global_19B04.f_1.f_77), 16);
			break;
		
		case 12:
			unk_0xF0059F27F7BB6680(&(Global_19B04.f_1.f_77), 15);
			break;
		
		case 11:
			unk_0xF0059F27F7BB6680(&(Global_19B04.f_1.f_77), 17);
			break;
	}
	if (!bParam1)
	{
		iVar0 = 0;
		switch (func_16(iParam0))
		{
			case 1:
				iVar0 = 6;
				break;
			
			case 3:
				iVar0 = 4;
				break;
			
			case 2:
				iVar0 = 5;
				break;
		}
		sVar1 = func_14(iParam0);
		unk_0x2E94302CFF011F2E("FEED_CREW_U");
		unk_0xC9C304D0AABE1335(func_14(iParam0));
		unk_0x7BB0762D8C75A3C7(sVar1, sVar1, 0, iVar0, "", 0);
		if (!func_13(45))
		{
			func_4("AM_H_CREWU", 2, 0, 20000, 10000, func_7(), 0, 131, 0);
		}
	}
}

void func_4(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x37A9
{
	func_5(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_5(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x37CB
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
		func_6();
	}
}

void func_6()//Position - 0x399F
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

int func_7()//Position - 0x3ABF
{
	func_8();
	switch (Global_19B04.f_932.f_21B.f_10CD)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

void func_8()//Position - 0x3B05
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_12(Global_19B04.f_932.f_21B.f_10CD) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_11(unk_0xBC25C936A095B5BA());
			if (func_10(iVar0) && (!func_9(14) || Global_196EB))
			{
				if (Global_19B04.f_932.f_21B.f_10CD != iVar0 && func_10(Global_19B04.f_932.f_21B.f_10CD))
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

bool func_9(int iParam0)//Position - 0x3C02
{
	return Global_8C41 == iParam0;
}

bool func_10(int iParam0)//Position - 0x3C10
{
	return iParam0 < 3;
}

int func_11(int iParam0)//Position - 0x3C1C
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_12(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_12(int iParam0)//Position - 0x3C59
{
	if (func_10(iParam0))
	{
		return Global_19B04.f_6D75[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_13(int iParam0)//Position - 0x3C83
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

var func_14(int iParam0)//Position - 0x3CC6
{
	return func_15(iParam0);
}

char* func_15(int iParam0)//Position - 0x3CD4
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

int func_16(int iParam0)//Position - 0x3DB7
{
	return Global_15B8F[iParam0 /*5*/];
}

void func_17(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x3DC7
{
	int iVar0;
	int iVar1;
	
	if (Global_19B04.f_6D75[iParam0 /*29*/].f_11 == 3)
	{
		return;
	}
	if (Global_19B04.f_6D75[iParam0 /*29*/].f_11 == 4)
	{
		return;
	}
	func_18(Global_19B04.f_6D75[iParam0 /*29*/].f_11, 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_random_peds");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_random_peds");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_random_peds");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_missions");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_missions");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_missions");
					break;
				
				default:
					return;
				}
		}
		unk_0x6CB99B97664C3727(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0x3A57956BCE003880(iVar1, iVar0, 1);
	}
}

int func_18(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x3EAE
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_48();
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
					func_47(99, 1);
					func_46(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_46(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_46(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_31(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_27(5))
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
							func_46(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_46(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_46(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_27(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_46(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_46(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_46(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_46(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_46(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_46(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_46(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_46(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_46(joaat("sp2_money_spent_property"), iParam3);
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
									func_46(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_46(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_46(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_46(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_46(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_46(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_27(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_46(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_46(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_46(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_46(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_46(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_46(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_26(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_47(95, iParam3);
					break;
				
				case 1:
					func_47(97, iParam3);
					break;
				
				case 2:
					func_47(96, iParam3);
					break;
			}
			func_47(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_21(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_21(iVar1);
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
					func_46(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_46(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_46(joaat("sp2_total_cash_earned"), iParam3);
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
	func_20(iParam0);
	if (Global_8C41 == 15)
	{
		func_19(0);
	}
	return 1;
}

void func_19(bool bParam0)//Position - 0x44AF
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

void func_20(int iParam0)//Position - 0x4731
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

void func_21(int iParam0)//Position - 0x478B
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_24(129, 0, -1, 1);
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
	else if (unk_0xFA30DFD0084E92FE(Global_19B04.f_5037.f_1D7, iParam0) || unk_0xFA30DFD0084E92FE(Global_200000[func_23() /*12171*/].f_1E08.f_A, iParam0))
	{
		bVar0 = true;
		unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_5037.f_1D7), iParam0);
		unk_0x7CB6FD92BE491AD9(&(Global_200000[func_23() /*12171*/].f_1E08.f_A), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x2E94302CFF011F2E("COUP_RED");
		unk_0xC9C304D0AABE1335(func_22(iParam0));
		unk_0x7BB0762D8C75A3C7(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_22(int iParam0)//Position - 0x4862
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

int func_23()//Position - 0x48EA
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_24(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x48F7
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
		iParam2 = func_25();
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

int func_25()//Position - 0x4E11
{
	return Global_1407E0;
}

void func_26(int iParam0)//Position - 0x4E1D
{
	func_47(93, iParam0);
	func_47(29, iParam0);
	func_47(30, iParam0);
}

bool func_27(int iParam0)//Position - 0x4E3D
{
	if (iParam0 == 8)
	{
		return func_28(129, -1, -1);
	}
	if (!unk_0x7AF0088ABFA713B6())
	{
		return unk_0xFA30DFD0084E92FE(Global_19B04.f_5037.f_1D7, iParam0);
	}
	return unk_0xFA30DFD0084E92FE(Global_200000[func_23() /*12171*/].f_1E08.f_A, iParam0);
}

int func_28(int iParam0, int iParam1, int iParam2)//Position - 0x4E8B
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_25();
	}
	iVar1 = func_30(iParam0, iParam1);
	uVar2 = func_29(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xDAB376DC6F83D68C(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_29(int iParam0)//Position - 0x4EC8
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

int func_30(int iParam0, int iParam1)//Position - 0x51B4
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_25();
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

int func_31(bool bParam0)//Position - 0x5481
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
		func_45(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_32(27, 1);
	return 1;
}

int func_32(int iParam0, int iParam1)//Position - 0x5538
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_33(iParam0, iParam1);
}

int func_33(int iParam0, int iParam1)//Position - 0x5553
{
	if (func_9(14) && !func_44(iParam0))
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
	if (func_43(&Global_411EB6))
	{
		if (func_41(&Global_411EB6, iParam0))
		{
			return 0;
		}
		if (func_34(&Global_411EB6, iParam0))
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

int func_34(var uParam0, int iParam1)//Position - 0x55F0
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x6D5CBCB6411EDE89(iParam1))
	{
		return 0;
	}
	if (func_9(14) && !func_44(iParam1))
	{
		return 0;
	}
	if (func_41(uParam0, iParam1))
	{
		return 0;
	}
	if (func_40(uParam0) < 0f)
	{
		func_39(uParam0, 0);
	}
	func_37(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_35(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_35(var uParam0, int iParam1)//Position - 0x56A1
{
	int iVar0;
	
	if (unk_0x6D5CBCB6411EDE89(iParam1))
	{
		return 0;
	}
	if (func_9(14) && !func_44(iParam1))
	{
		return 0;
	}
	if (func_41(uParam0, iParam1))
	{
		return 0;
	}
	if (func_40(uParam0) < 0f)
	{
		func_39(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_36(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_36(var uParam0, int iParam1)//Position - 0x571C
{
	return (*uParam0)[iParam1] == 78;
}

void func_37(var uParam0)//Position - 0x572D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_38(uParam0, iVar0);
		iVar0++;
	}
	func_39(uParam0, (Global_411EB5 - 0.5f));
}

void func_38(var uParam0, int iParam1)//Position - 0x5761
{
	(*uParam0)[iParam1] = 78;
}

void func_39(var uParam0, float fParam1)//Position - 0x5771
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

float func_40(var uParam0)//Position - 0x578E
{
	return uParam0->f_50;
}

bool func_41(var uParam0, int iParam1)//Position - 0x579A
{
	return func_42(uParam0, iParam1) != -1;
}

int func_42(var uParam0, int iParam1)//Position - 0x57AC
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

bool func_43(var uParam0)//Position - 0x57D9
{
	return uParam0->f_4F == 1;
}

int func_44(int iParam0)//Position - 0x57E7
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

int func_45(int iParam0, int iParam1)//Position - 0x5837
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

void func_46(int iParam0, int iParam1)//Position - 0x5888
{
	int iVar0;
	
	unk_0x6CB99B97664C3727(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x3A57956BCE003880(iParam0, iVar0, 1);
}

void func_47(int iParam0, int iParam1)//Position - 0x58AB
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

void func_48()//Position - 0x5908
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

int func_49()//Position - 0x597D
{
	if (unk_0xFA30DFD0084E92FE(unk_0x491B2241281A03B7(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_50()//Position - 0x599E
{
	if (func_114() == 2)
	{
		if (func_51())
		{
			if (unk_0xF0F2FC9DE291567F(-1014.154f, 4881.411f, 245.0001f, unk_0x541C2AEF053615BC(unk_0xA95CF30C72EB526E(unk_0xFC1CAE18F3ECBF2D()), false), true) < 400f)
			{
				if (!Global_63AD)
				{
					unk_0x3857DADBD6EC8A54("AC_EN_ROUTE_CULT");
					Global_63AD = 1;
					if (!Global_63AC)
					{
						Global_63AC = 1;
						return 1;
					}
				}
			}
			else if (Global_63AD)
			{
				unk_0x3857DADBD6EC8A54("AC_LEFT_AREA");
				Global_63AD = 0;
			}
		}
	}
	return 0;
}

bool func_51()//Position - 0x5A19
{
	return Global_63A8;
}

int func_52(vector3 vParam0)//Position - 0x5A24
{
	if (func_114() == 2)
	{
		if (func_51() && !Global_63AB)
		{
			if (fLocal_50 == -1f)
			{
				fLocal_50 = SYSTEM::VDIST(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), vParam0);
			}
			if (SYSTEM::VDIST(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), vParam0) > (fLocal_50 + 200f) || unk_0xF0F2FC9DE291567F(-1014.154f, 4881.411f, 245.0001f, unk_0x541C2AEF053615BC(unk_0xA95CF30C72EB526E(unk_0xFC1CAE18F3ECBF2D()), false), true) < 400f)
			{
				Global_63AB = 1;
				return 1;
			}
		}
	}
	return 0;
}

void func_53(var uParam0)//Position - 0x5AB1
{
	if (!unk_0x36CEFBE9B745A58D((*uParam0)[0]) && !unk_0x36CEFBE9B745A58D((*uParam0)[1]))
	{
		if (unk_0xE642C1AC73CE364E((*uParam0)[0], (*uParam0)[1], 15f, 15f, 15f, 0, 1, 0) && unk_0xE642C1AC73CE364E((*uParam0)[0], unk_0xBC25C936A095B5BA(), 15f, 15f, 15f, 0, 1, 0))
		{
			switch (iLocal_225)
			{
				case 0:
					iLocal_224 = unk_0x105601648511CC64();
					iLocal_225++;
					break;
				
				case 1:
					if (func_125(iLocal_224, 2000))
					{
						if (!func_178())
						{
							func_169(&uLocal_53, "REGETAU", "REAWA_PITCH", 4, 0, 0, 0);
							iLocal_225++;
						}
					}
					break;
				
				case 2:
					if (!func_178())
					{
						if (func_114() == 0)
						{
							func_169(&uLocal_53, "REGETAU", "REAWA_SUREM", 4, 0, 0, 0);
						}
						if (func_114() == 1)
						{
							func_169(&uLocal_53, "REGETAU", "REAWA_SUREF", 4, 0, 0, 0);
						}
						if (func_114() == 2)
						{
							func_169(&uLocal_53, "REGETAU", "REAWA_SURET", 4, 0, 0, 0);
						}
						iLocal_225++;
					}
					break;
				}
			}
	}
}

void func_54()//Position - 0x5BD2
{
	if (func_114() == 2)
	{
		if (!Global_63AA)
		{
			func_55("CULT_BLIP_HELP", -1);
			Global_63AA = 1;
		}
	}
}

void func_55(char* sParam0, int iParam1)//Position - 0x5BF6
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 0, true, iParam1);
}

int func_56()//Position - 0x5C0D
{
	if (Global_19B04.f_6186.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

int func_57(vector3 vParam0, bool bParam1)//Position - 0x5C29
{
	int iVar0;
	
	iVar0 = unk_0x390CF6C8AD6903B7(vParam0);
	unk_0x3F5F1772D71D5EC4(iVar0, func_58(unk_0x7AF0088ABFA713B6(), 1f, 1f));
	unk_0x0BBAABB52887CF8C(iVar0, bParam1);
	return iVar0;
}

float func_58(bool bParam0, float fParam1, float fParam2)//Position - 0x5C55
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_59(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x5C6C
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_60()//Position - 0x5CB3
{
	if (func_61())
	{
		if (((((((unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), vLocal_236, 50f, 50f, 50f, false, true, 0) || unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), vLocal_237, 50f, 50f, 50f, false, true, 0)) || unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), vLocal_238, 50f, 50f, 50f, false, true, 0)) || unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), vLocal_239, 50f, 50f, 50f, false, true, 0)) || unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), vLocal_240, 50f, 50f, 50f, false, true, 0)) || unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), vLocal_241, 50f, 50f, 50f, false, true, 0)) || unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), vLocal_242, 50f, 50f, 50f, false, true, 0)) || unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), vLocal_243, 50f, 50f, 50f, false, true, 0))
		{
			if (unk_0x8910237449BB6F79(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)) < 0.2f)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_61()//Position - 0x5DFE
{
	int iVar0;
	
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
		if (unk_0xE59B7F5A03335350(iVar0, 0))
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_258[0]) && !unk_0x36CEFBE9B745A58D(iLocal_258[1]))
			{
				if (unk_0x62F3A07C43FFB568(iLocal_258[0], iVar0, 0) && unk_0x62F3A07C43FFB568(iLocal_258[1], iVar0, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_62(int iParam0, bool bParam1, int iParam2)//Position - 0x5E6C
{
	int iVar0;
	
	iVar0 = func_63(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x2DA8CA50A72528FB(iVar0)) && unk_0x0F6F4C227FB5DD52(&(Global_19B04.f_6D75[iParam2 /*29*/].f_3)))
	{
		unk_0x436D0272182E484D(iVar0, &(Global_19B04.f_6D75[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_63(int iParam0, bool bParam1, bool bParam2)//Position - 0x5EBE
{
	int iVar0;
	
	if (!unk_0x724D816EA203A79E(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x511FE22BCF5353CD(iParam0);
	if (unk_0xD27AC0E9B78CFDD7(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(iVar0, func_58(unk_0x7AF0088ABFA713B6(), 1f, 1f));
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
		unk_0x3F5F1772D71D5EC4(iVar0, func_58(unk_0x7AF0088ABFA713B6(), 0.7f, 0.7f));
		unk_0xF9C2945DB5BAB4BF(iVar0, bParam1);
	}
	else if (unk_0xB12D030810E8447D(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(iVar0, func_58(unk_0x7AF0088ABFA713B6(), 0.7f, 0.7f));
	}
	return iVar0;
}

void func_64(var uParam0)//Position - 0x5F62
{
	if (!unk_0x36CEFBE9B745A58D((*uParam0)[0]) && !unk_0x36CEFBE9B745A58D((*uParam0)[1]))
	{
		if (unk_0xE642C1AC73CE364E((*uParam0)[0], (*uParam0)[1], 15f, 15f, 15f, 0, 1, 0) && unk_0xE642C1AC73CE364E((*uParam0)[0], unk_0xBC25C936A095B5BA(), 15f, 15f, 15f, 0, 1, 0))
		{
			switch (iLocal_223)
			{
				case 0:
					iLocal_224 = unk_0x105601648511CC64();
					iLocal_223++;
					break;
				
				case 1:
					if (func_125(iLocal_224, 2000))
					{
						if (!func_178())
						{
							func_169(&uLocal_53, "REGETAU", "REAWA_HOM2", 4, 0, 0, 0);
							iLocal_223++;
						}
					}
					break;
				
				case 2:
					if (!func_178())
					{
						if (func_114() == 0)
						{
							func_169(&uLocal_53, "REGETAU", "REAWA_HOM4M", 4, 0, 0, 0);
						}
						if (func_114() == 1)
						{
							func_169(&uLocal_53, "REGETAU", "REAWA_HOM4F", 4, 0, 0, 0);
						}
						if (func_114() == 2)
						{
							func_169(&uLocal_53, "REGETAU", "REAWA_HOM4T", 4, 0, 0, 0);
						}
						iLocal_223++;
					}
					break;
				}
			}
	}
}

void func_65(int iParam0)//Position - 0x6083
{
	if (unk_0x2DA8CA50A72528FB(iParam0))
	{
		unk_0x07B8ECB35A4ED3AC(&iParam0);
	}
}

void func_66()//Position - 0x609A
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < iLocal_258)
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_258[iVar0]))
		{
			if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
			{
				if (!func_126())
				{
					unk_0x2E35C4FA5F0ED22F(iLocal_258[iVar0], true);
					if (unk_0xD45C08B05D4687A7(iLocal_258[iVar0]))
					{
						unk_0x57EB4CC8F1928A47(iLocal_258[iVar0]);
					}
					if (unk_0xF4FCC3C1048FF2AB(iLocal_258[iVar0], 1227113341) != 1 && unk_0xF4FCC3C1048FF2AB(iLocal_258[iVar0], 1227113341) != 0)
					{
						unk_0x9565F9267674873A(iLocal_258[iVar0], unk_0xBC25C936A095B5BA(), -1, 6f, 2f, 1073741824, 0);
					}
					if (unk_0x5237AF95232D78C5(iLocal_258[iVar0], 0))
					{
						unk_0xA3981DED4FC2E56E(iLocal_258[iVar0], 0, 0);
					}
					if (!iLocal_251)
					{
						if (!func_178())
						{
							func_169(&uLocal_53, "REGETAU", "REAWA_CAR", 4, 0, 0, 0);
							iLocal_251 = 1;
						}
					}
				}
				else
				{
					iLocal_251 = 0;
					unk_0x2E35C4FA5F0ED22F(iLocal_258[iVar0], false);
					if (unk_0xF4FCC3C1048FF2AB(iLocal_258[iVar0], 1227113341) == 1 && unk_0xF4FCC3C1048FF2AB(iLocal_258[iVar0], 1227113341) == 0)
					{
						unk_0xA4E856A8CD53B8DF(iLocal_258[iVar0]);
					}
					if (!unk_0x36CEFBE9B745A58D(iLocal_258[0]) && !unk_0x36CEFBE9B745A58D(iLocal_258[1]))
					{
						unk_0x59B9712C1EAB0092(iLocal_258[0], 1);
						unk_0x59B9712C1EAB0092(iLocal_258[1], 0);
						if (unk_0x6F79ECA8C83E4357(unk_0xD20EBB97FE8799ED(unk_0xBC25C936A095B5BA())) == joaat("bus"))
						{
							if (!unk_0x1AAF0C23233C57AF(unk_0xD20EBB97FE8799ED(unk_0xBC25C936A095B5BA()), 1, 0))
							{
								iVar1 = unk_0x3187EF5798B5D209(unk_0xD20EBB97FE8799ED(unk_0xBC25C936A095B5BA()), 1, 0);
								if (!unk_0x5CAE759AE8219D20(iVar1))
								{
									unk_0x77815D3407C6700D(iVar1, true, 0);
									unk_0xF845620A03C7425B(&iVar1);
								}
							}
							if (!unk_0x1AAF0C23233C57AF(unk_0xD20EBB97FE8799ED(unk_0xBC25C936A095B5BA()), 0, 0))
							{
								iVar2 = unk_0x3187EF5798B5D209(unk_0xD20EBB97FE8799ED(unk_0xBC25C936A095B5BA()), 0, 0);
								if (!unk_0x5CAE759AE8219D20(iVar2))
								{
									unk_0x77815D3407C6700D(iVar2, true, 0);
									unk_0xF845620A03C7425B(&iVar2);
								}
							}
						}
					}
				}
			}
			else if (!unk_0xD45C08B05D4687A7(iLocal_258[iVar0]))
			{
				unk_0xA4E856A8CD53B8DF(iLocal_258[iVar0]);
				unk_0x75E3FA28CC7D5707(iLocal_258[iVar0], func_70());
				unk_0x0AB3C2863B144B82(iLocal_258[iVar0], 1);
				if (!unk_0x36CEFBE9B745A58D(iLocal_258[0]) && !unk_0x36CEFBE9B745A58D(iLocal_258[1]))
				{
					unk_0x59B9712C1EAB0092(iLocal_258[0], 1);
					unk_0x59B9712C1EAB0092(iLocal_258[1], 0);
				}
			}
		}
		iVar0++;
	}
}

void func_67()//Position - 0x62F9
{
	if (!func_56())
	{
		if (func_114() == 2)
		{
			Global_63A8 = 1;
		}
	}
}

int func_68(var uParam0, int iParam1, float fParam2)//Position - 0x6315
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (!unk_0x36CEFBE9B745A58D((*uParam0)[iVar0]))
		{
			if (!unk_0x62F3A07C43FFB568((*uParam0)[iVar0], iParam1, 0))
			{
				if (fParam2 > 0f)
				{
					if (unk_0xE642C1AC73CE364E((*uParam0)[iVar0], unk_0xBC25C936A095B5BA(), fParam2, fParam2, fParam2, 0, 1, 0))
					{
						return 0;
					}
				}
				else
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

void func_69(var uParam0, float fParam1)//Position - 0x637F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (unk_0x36CEFBE9B745A58D((*uParam0)[iVar0]))
		{
			if (unk_0x2DA8CA50A72528FB(uLocal_255[iVar0]))
			{
				unk_0x07B8ECB35A4ED3AC(&(uLocal_255[iVar0]));
			}
		}
		else
		{
			if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
			{
				if (unk_0xE59B7F5A03335350(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 0))
				{
					if (unk_0x62F3A07C43FFB568((*uParam0)[iVar0], unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 0) && unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 0))
					{
						if (unk_0x2DA8CA50A72528FB(uLocal_255[iVar0]))
						{
							unk_0x07B8ECB35A4ED3AC(&(uLocal_255[iVar0]));
						}
					}
					else if (!unk_0x2DA8CA50A72528FB(uLocal_255[iVar0]))
					{
						uLocal_255[iVar0] = func_62((*uParam0)[iVar0], 0, 145);
					}
				}
			}
			else if (!unk_0x2DA8CA50A72528FB(uLocal_255[iVar0]))
			{
				uLocal_255[iVar0] = func_62((*uParam0)[iVar0], 0, 145);
			}
			if (!unk_0xE642C1AC73CE364E((*uParam0)[iVar0], unk_0xBC25C936A095B5BA(), fParam1, fParam1, fParam1, 0, 1, 0))
			{
				if (unk_0x2DA8CA50A72528FB(uLocal_255[iVar0]))
				{
					unk_0x07B8ECB35A4ED3AC(&(uLocal_255[iVar0]));
				}
			}
		}
		iVar0++;
	}
}

int func_70()//Position - 0x64AA
{
	return unk_0x705BBFE5A8ADE4A9(unk_0xFC1CAE18F3ECBF2D());
}

int func_71()//Position - 0x64BA
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_258)
	{
		if (unk_0x724D816EA203A79E(iLocal_258[iVar0]))
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_258[iVar0]))
			{
				if (!unk_0xD45C08B05D4687A7(iLocal_258[iVar0]))
				{
					if (unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), 6))
					{
						if (unk_0x5CEC84BB4AC55121(iLocal_258[iVar0], unk_0xBC25C936A095B5BA()))
						{
							if (!unk_0x36CEFBE9B745A58D(iLocal_258[0]) && !unk_0x36CEFBE9B745A58D(iLocal_258[1]))
							{
								if (((unk_0xDF25D3BB3759E7D1(unk_0xB5CEFD608600A09F(), iLocal_258[0]) || unk_0x425BEBAA53B39EBF(unk_0xB5CEFD608600A09F(), iLocal_258[0])) || unk_0xDF25D3BB3759E7D1(unk_0xB5CEFD608600A09F(), iLocal_258[1])) || unk_0x425BEBAA53B39EBF(unk_0xB5CEFD608600A09F(), iLocal_258[1]))
								{
									if (iLocal_227 == -1)
									{
										iLocal_227 = unk_0x105601648511CC64();
									}
								}
								else
								{
									iLocal_227 = -1;
								}
							}
						}
					}
					if (!iLocal_254)
					{
						if (iLocal_227 != -1 && unk_0x105601648511CC64() > iLocal_227 + 1000)
						{
							func_167();
							SYSTEM::WAIT(0);
							func_169(&uLocal_53, "REGETAU", "REAWA_AIM", 4, 0, 0, 0);
							iLocal_254 = 1;
						}
					}
					if (!unk_0x1D403DFADBC2DE3C(unk_0x3E12B546F3F2597A(), 0))
					{
						if (unk_0xD9C1758D86688CEA(iLocal_258[iVar0], unk_0x3E12B546F3F2597A(), 1))
						{
							return 1;
						}
					}
					if ((unk_0xD9C1758D86688CEA(iLocal_258[iVar0], unk_0xBC25C936A095B5BA(), 1) && unk_0x8D66276473ABD7CC(iLocal_258[iVar0]) < 190) || (iLocal_227 != -1 && unk_0x105601648511CC64() > iLocal_227 + 5000))
					{
						return 1;
					}
				}
			}
			else
			{
				if (!unk_0x1D403DFADBC2DE3C(unk_0x3E12B546F3F2597A(), 0))
				{
					if (unk_0xD9C1758D86688CEA(iLocal_258[iVar0], unk_0x3E12B546F3F2597A(), 1))
					{
						return 1;
					}
				}
				if (unk_0xD9C1758D86688CEA(iLocal_258[iVar0], unk_0xBC25C936A095B5BA(), 1))
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_72(var uParam0, int iParam1)//Position - 0x667F
{
	int iVar0;
	
	if (!iLocal_219)
	{
		iVar0 = 0;
		while (iVar0 <= (*uParam0 - 1))
		{
			if (!unk_0x36CEFBE9B745A58D((*uParam0)[iVar0]))
			{
				if ((unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 121.8366f, -1503.006f, 28.0999f, 0.1367f, -1649.705f, 48.1608f, 125.8125f, 0, true, 0) && !unk_0x41A5D6415E2CC10E((*uParam0)[iVar0])) || unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 75.3661f, -1542.811f, 28.4601f, 43.7035f, -1580.28f, 33.4259f, 26f, 0, true, 0))
				{
					if (!unk_0x2DA8CA50A72528FB(uLocal_255[iVar0]))
					{
						if (!unk_0x36CEFBE9B745A58D((*uParam0)[iVar0]))
						{
							if (!func_200())
							{
								func_101(1);
								func_100(1);
								if (!unk_0x1D403DFADBC2DE3C(iLocal_264, 0))
								{
									if (!unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_264, 0) && !unk_0xE642C1AC73CE364E(unk_0xBC25C936A095B5BA(), iLocal_264, 50f, 50f, 50f, 0, 1, 0))
									{
										func_75(iLocal_264, 0, 145);
									}
								}
							}
							uLocal_255[iVar0] = func_62((*uParam0)[iVar0], 0, 145);
							unk_0x222805B89367761E(uLocal_255[iVar0], false);
							func_65(iLocal_52);
						}
					}
					if (!func_178())
					{
						if (iLocal_230 < unk_0x105601648511CC64())
						{
							func_169(&uLocal_53, "REGETAU", "REAWA_SHOUT", 4, 0, 0, 0);
							iLocal_230 = (unk_0x105601648511CC64() + unk_0x491B2241281A03B7(3500, 4000));
						}
					}
					if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 75.3661f, -1542.811f, 28.4601f, 43.7035f, -1580.28f, 33.4259f, 26f, 0, true, 0))
					{
						func_73();
						if (!unk_0x1D403DFADBC2DE3C(iParam1, 0))
						{
							if (!func_178())
							{
								if (func_126() && unk_0x58F9E0EA914AEF2C(unk_0x3E12B546F3F2597A()))
								{
									func_169(&uLocal_53, "REGETAU", "REAWA_START", 4, 0, 0, 0);
									iLocal_219 = 1;
								}
								else
								{
									func_169(&uLocal_53, "REGETAU", "REAWA_START2", 4, 0, 0, 0);
									iLocal_219 = 1;
								}
								if (unk_0x2DA8CA50A72528FB(uLocal_255[0]))
								{
									unk_0x222805B89367761E(uLocal_255[0], true);
								}
								if (unk_0x2DA8CA50A72528FB(uLocal_255[1]))
								{
									unk_0x222805B89367761E(uLocal_255[1], true);
								}
								if (!unk_0x36CEFBE9B745A58D((*uParam0)[1]) && !unk_0x36CEFBE9B745A58D(iLocal_257))
								{
									unk_0x2E9860A2B72187F5((*uParam0)[1], 156, true);
									unk_0xC5A6DFE2B8987B17(&iLocal_265);
									unk_0xE896C0AD02364F2A(0, "misslamar1ig_20", "stretch_call_hurry_a", 2f, -2f, -1, 0, 0, 0, 0, 0);
									unk_0xE896C0AD02364F2A(0, "combat@gestures@pistol@halt", "180", 2f, -2f, -1, 0, 0, 0, 0, 0);
									unk_0x57D65255D3D3B6A7(0, iLocal_257, -1, 0);
									unk_0x56F2E1B5599188FA(0, unk_0xBC25C936A095B5BA(), -1, 2096, 4);
									unk_0x535008C596714F9E(iLocal_265);
									unk_0xA8E6405305C0D7DF((*uParam0)[1], iLocal_265);
									unk_0x02DAF06EA4F08219(&iLocal_265);
								}
								unk_0x56F2E1B5599188FA((*uParam0)[iVar0], unk_0xBC25C936A095B5BA(), -1, 2096, 4);
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_73()//Position - 0x695F
{
	Global_394A = 0;
	func_74();
}

void func_74()//Position - 0x696F
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

int func_75(int iParam0, int iParam1, int iParam2)//Position - 0x69C6
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
	func_76(iParam0, iParam2);
	return 1;
}

void func_76(int iParam0, int iParam1)//Position - 0x6A06
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_82(iParam0))
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
	func_77(iParam0, &(Global_19B04.f_7F22.f_1586));
}

void func_77(int iParam0, var uParam1)//Position - 0x6C08
{
	int iVar0;
	
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		func_81(uParam1);
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
		if (uParam1->f_41 == -1 && !func_80(uParam1->f_42))
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
		func_79(&iParam0, &(uParam1->f_9), &(uParam1->f_3B));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xFC8A228C62614C5C(iParam0, iVar0 + 1))
			{
				unk_0xF0059F27F7BB6680(&(uParam1->f_4D), func_78(iVar0 + 1));
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

int func_78(int iParam0)//Position - 0x6EB3
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

int func_79(int iParam0, var uParam1, var uParam2)//Position - 0x6F63
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

int func_80(int iParam0)//Position - 0x703D
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

void func_81(var uParam0)//Position - 0x705D
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

int func_82(int iParam0)//Position - 0x710E
{
	if ((((((((((!unk_0x724D816EA203A79E(iParam0) || !unk_0xE59B7F5A03335350(iParam0, 0)) || func_98(iParam0, 0, 0)) || func_98(iParam0, 1, 0)) || func_98(iParam0, 2, 0)) || func_97(iParam0) != 145) || func_96(iParam0)) || func_95(iParam0)) || func_94(iParam0)) || func_93(iParam0)) || !func_83(unk_0x6F79ECA8C83E4357(iParam0)))
	{
		if (func_95(iParam0))
		{
		}
		if (func_95(iParam0))
		{
		}
		if (func_98(iParam0, 0, 0))
		{
		}
		if (func_98(iParam0, 1, 0))
		{
		}
		if (func_98(iParam0, 2, 0))
		{
		}
		if (func_97(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_83(int iParam0)//Position - 0x71EB
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_84(iParam0, 0))
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

int func_84(int iParam0, bool bParam1)//Position - 0x739C
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
		if (!func_92())
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
		if ((((!func_91() && !func_90()) && !func_89()) && !func_88()) && !func_92())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xF49912B78E2591B6() || unk_0x8ACB0C3FACC09467()) || unk_0xF7E138CFA19B55E7())
		{
		}
		else if (!func_89())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_87(iParam0))
		{
			return 0;
		}
	}
	if (!func_85(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_85(int iParam0)//Position - 0x752A
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_86())
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

int func_86()//Position - 0x75F6
{
	if (unk_0x8ACB0C3FACC09467())
	{
		return unk_0xC9D803F7D7E10861();
	}
	return 0;
}

int func_87(int iParam0)//Position - 0x760D
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

int func_88()//Position - 0x90B5
{
	return 0;
}

int func_89()//Position - 0x90BE
{
	return 1;
}

int func_90()//Position - 0x90C7
{
	return 1;
}

int func_91()//Position - 0x90D0
{
	if (unk_0x7B2F21BFE86AEB61(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_92()//Position - 0x90E9
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

int func_93(int iParam0)//Position - 0x91A4
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x6F79ECA8C83E4357(iParam0);
	sVar1 = unk_0x2232934AD664DD49(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x3362CDE8460ED38B(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_84(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_94(int iParam0)//Position - 0x91EA
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

int func_95(int iParam0)//Position - 0x9225
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

int func_96(int iParam0)//Position - 0x92A1
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

int func_97(int iParam0)//Position - 0x9389
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

int func_98(int iParam0, int iParam1, bool bParam2)//Position - 0x93EC
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0x724D816EA203A79E(iParam0) || !unk_0xE59B7F5A03335350(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_99(iParam1, iVar0, &sVar1, &iVar2))
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

int func_99(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0x945D
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

void func_100(bool bParam0)//Position - 0x9536
{
	if (bParam0)
	{
		StringCopy(&Global_19754, unk_0x1377080E9B0BD993(), 24);
		Global_1974E = 1;
	}
	else
	{
		StringCopy(&Global_19754, "NULL", 24);
		Global_1974E = 0;
	}
}

int func_101(int iParam0)//Position - 0x9562
{
	if (func_105())
	{
		Global_19AFA = 1;
		Global_19AF7 = unk_0x105601648511CC64();
		if (func_104(Global_19AF9))
		{
			func_102(0);
		}
		unk_0x3FF92BBF0607A406(1, "RE_TITLE");
		if (iParam0 && func_104(Global_19AF9))
		{
			unk_0x621CEDEDDD531386();
		}
		return 1;
	}
	return 0;
}

void func_102(int iParam0)//Position - 0x95B5
{
	switch (iParam0)
	{
		case 0:
			if (Global_19B04.f_6186.f_2 < 3)
			{
				if (!unk_0x5107E30005FCFEA8())
				{
					func_55(func_103(iParam0), -1);
					Global_19B04.f_6186.f_2++;
					unk_0xF0059F27F7BB6680(&Global_19B00, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0xFA30DFD0084E92FE(Global_19B00, 1))
			{
				if (!unk_0x5107E30005FCFEA8())
				{
					func_55(func_103(iParam0), -1);
					Global_19B04.f_6186.f_3++;
					unk_0xF0059F27F7BB6680(&Global_19B00, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0xFA30DFD0084E92FE(Global_19B00, 2))
			{
				if (!unk_0x5107E30005FCFEA8())
				{
					func_55(func_103(iParam0), -1);
					Global_19B04.f_6186.f_4++;
					unk_0xF0059F27F7BB6680(&Global_19B00, 2);
				}
			}
			break;
	}
}

char* func_103(int iParam0)//Position - 0x9696
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_104(int iParam0)//Position - 0x96DA
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

int func_105()//Position - 0x9709
{
	switch (func_106(&Global_62F8, 0, 5, 0, unk_0x8A55B15F4133C912()))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_106(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x973F
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
		if (func_110(0))
		{
			return 0;
		}
		Global_8C1D++;
		*uParam0 = Global_8C1D;
		unk_0x3D7FF8418367D451(unk_0xFC1CAE18F3ECBF2D(), 0);
		Global_4336.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x27CBA62D1F6DF074(8);
		}
		Global_8C41 = iParam2;
		Global_8C1B = *uParam0;
		Global_8C1C = iParam4;
		Global_8C1A = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_8C1A > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_8C1A)
			{
				if (Global_8C20[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_8C1B == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_108(iParam2))
		{
			return 0;
		}
		if (Global_8C1A == 8)
		{
			return 0;
		}
		Global_8C1D++;
		*uParam0 = Global_8C1D;
		Global_8C20[Global_8C1A /*4*/] = Global_8C1D;
		Global_8C20[Global_8C1A /*4*/].f_1 = iParam1;
		Global_8C20[Global_8C1A /*4*/].f_2 = iParam2;
		Global_8C20[Global_8C1A /*4*/].f_3 = 0;
		Global_8C1A++;
		if (iParam4 != 0)
		{
			func_107(uParam0, iParam4);
		}
	}
	return 2;
}

void func_107(var uParam0, int iParam1)//Position - 0x9876
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

bool func_108(int iParam0)//Position - 0x98C5
{
	return func_109(iParam0, Global_8C41);
}

int func_109(int iParam0, int iParam1)//Position - 0x98D6
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

int func_110(int iParam0)//Position - 0x9AB7
{
	if (Global_8C41 == 15)
	{
		return 0;
	}
	if (func_108(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_111(int iParam0, char* sParam1, int iParam2)//Position - 0x9AD9
{
	unk_0x53D8178763EDCE60(iParam0, sParam1, func_112(iParam2), 1);
}

int func_112(int iParam0)//Position - 0x9AF0
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

void func_113(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x9CE5
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

int func_114()//Position - 0x9D80
{
	func_8();
	return Global_19B04.f_932.f_21B.f_10CD;
}

void func_115(int iParam0, bool bParam1)//Position - 0x9D99
{
	if (bParam1)
	{
		if (!func_123(iParam0, 2, 1))
		{
			func_122(iParam0, 2, 1);
		}
	}
	else if (func_123(iParam0, 2, 1))
	{
		func_116(iParam0, 2, 1);
	}
}

void func_116(int iParam0, int iParam1, bool bParam2)//Position - 0x9DD0
{
	int iVar0;
	
	if (bParam2)
	{
		unk_0x7CB6FD92BE491AD9(&(Global_16B4F.f_531[iParam0]), iParam1);
	}
	else if (unk_0x7AF0088ABFA713B6())
	{
		if (func_121() == 0)
		{
			iVar0 = func_119(func_120(iParam0), -1, 0);
			unk_0x7CB6FD92BE491AD9(&iVar0, iParam1);
			func_117(func_120(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_29C[iParam0]), iParam1);
	}
}

void func_117(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x9E39
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_269BC5[iParam0 /*3*/][func_118(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x3A57956BCE003880(iVar0, iParam1, iParam3);
	}
}

int func_118(var uParam0)//Position - 0x9E69
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_25();
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

int func_119(int iParam0, int iParam1, int iParam2)//Position - 0x9E9D
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_269BC5[iParam0 /*3*/][func_118(iParam1)];
	if (unk_0x6CB99B97664C3727(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_120(int iParam0)//Position - 0x9ECF
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

int func_121()//Position - 0xA1C3
{
	return Global_62BD;
}

void func_122(int iParam0, int iParam1, bool bParam2)//Position - 0xA1CE
{
	int iVar0;
	
	if (bParam2)
	{
		unk_0xF0059F27F7BB6680(&(Global_16B4F.f_531[iParam0]), iParam1);
	}
	else if (unk_0x7AF0088ABFA713B6())
	{
		if (func_121() == 0)
		{
			iVar0 = func_119(func_120(iParam0), -1, 0);
			unk_0xF0059F27F7BB6680(&iVar0, iParam1);
			func_117(func_120(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xF0059F27F7BB6680(&(Global_19B04.f_29C[iParam0]), iParam1);
	}
}

int func_123(int iParam0, int iParam1, bool bParam2)//Position - 0xA237
{
	if (bParam2)
	{
		return unk_0xFA30DFD0084E92FE(Global_16B4F.f_531[iParam0], iParam1);
	}
	else if (unk_0x7AF0088ABFA713B6())
	{
		if (func_121() == 0)
		{
			return unk_0xFA30DFD0084E92FE(func_119(func_120(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xFA30DFD0084E92FE(Global_19B04.f_29C[iParam0], iParam1);
	}
	return 0;
}

int func_124(vector3 vParam0, float fParam1, int iParam2)//Position - 0xA297
{
	if (unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), vParam0, fParam1, fParam1, fParam1, false, true, 0))
	{
		if (iParam2 == 0)
		{
			if (unk_0x33CC9445B2DF9387(vParam0, 5f))
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

int func_125(int iParam0, int iParam1)//Position - 0xA2D5
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x105601648511CC64();
	iVar1 = (iVar0 - iParam0);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

int func_126()//Position - 0xA2F6
{
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		if (unk_0xE59B7F5A03335350(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 0))
		{
			if (((((!unk_0x5CFC8E6CC224744A(unk_0xBC25C936A095B5BA()) && !unk_0x62083F80FA40AAD2(unk_0xBC25C936A095B5BA())) && !unk_0x11030C52A0DDFF8C(unk_0xBC25C936A095B5BA())) && !unk_0xD3A0CD3AD9C3D22A(unk_0xBC25C936A095B5BA())) && !unk_0x12FF218EB7AE24A7(unk_0xBC25C936A095B5BA())) && !unk_0xEA8F5A4C494DBF3B(unk_0xBC25C936A095B5BA(), joaat("rhino")))
			{
				if (unk_0x524ABB0435146845(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)) >= 2)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
	{
		if (unk_0xE59B7F5A03335350(unk_0x25480ACDBB6DB8F1(unk_0xBC25C936A095B5BA()), 0))
		{
			if (((((!unk_0x7512ED01F3F46714(unk_0x6F79ECA8C83E4357(unk_0x25480ACDBB6DB8F1(unk_0xBC25C936A095B5BA()))) && !unk_0x8C1A6E7D5F410F4A(unk_0x6F79ECA8C83E4357(unk_0x25480ACDBB6DB8F1(unk_0xBC25C936A095B5BA())))) && !unk_0xA19D269B4B5A1532(unk_0x6F79ECA8C83E4357(unk_0x25480ACDBB6DB8F1(unk_0xBC25C936A095B5BA())))) && !unk_0xE7B3A320107C1379(unk_0x6F79ECA8C83E4357(unk_0x25480ACDBB6DB8F1(unk_0xBC25C936A095B5BA())))) && !unk_0xFF2234981505F7F4(unk_0x6F79ECA8C83E4357(unk_0x25480ACDBB6DB8F1(unk_0xBC25C936A095B5BA())))) && unk_0x6F79ECA8C83E4357(unk_0x25480ACDBB6DB8F1(unk_0xBC25C936A095B5BA())) != joaat("rhino"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_127(bool bParam0)//Position - 0xA42E
{
	if (bParam0)
	{
	}
}

int func_128(int iParam0)//Position - 0xA43B
{
	if (unk_0x684B06333594F9EA())
	{
		if (func_129(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_129(int iParam0)//Position - 0xA458
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			if (func_9(6) || func_9(7))
			{
				return 1;
			}
			else
			{
				return func_129(3);
			}
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			if (func_108(5))
			{
				if (func_130(4))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_130(int iParam0)//Position - 0xA4CA
{
	int iVar0;
	
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
		{
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				iVar0 = func_114();
				if (!func_10(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x8F1FDD0A40DC834A(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_139()) || Global_1974B) || Global_62BF) || func_138()) || func_137(8, -1)) || func_136()) || func_135()) || func_134()) || func_133()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1) || func_139()) || Global_62BF) || func_138()) || func_137(8, -1)) || func_134()) || func_136()) || func_135()) || func_133()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x8F1FDD0A40DC834A(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_139()) || Global_1974B) || Global_62BF) || func_138()) || func_137(8, -1)) || func_134()) || func_136()) || func_135()) || func_133()) || Global_19B04.f_1DEB.f_397[iVar0] == 5) || Global_8E64 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA()) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0)) || func_139()) || Global_1974B) || Global_62BF) || func_138()) || func_137(8, -1)) || func_136()) || func_135()) || func_133()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_139() || unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0) || func_137(8, -1)) || func_133()) || func_132()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_137(8, -1) || func_136()) || func_135()) || func_132()) || func_131())
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
							if ((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || func_139()) || Global_62BF) || func_138()) || func_137(8, -1)) || func_135()) || func_134()) || func_133()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || !unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F())) || !unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F())) || !unk_0x726D9204B160D23E()) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || func_139()) || func_135()) || Global_1974B) || Global_62BF) || func_138()) || Global_90C1) || func_137(8, -1)) || func_134()) || func_132()) || func_133()) || Global_19B04.f_1DEB.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x8F97799512B006B7(unk_0xBC25C936A095B5BA(), 0) || !unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F())) || !unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F())) || !unk_0x726D9204B160D23E()) || unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0)) || unk_0x2A348A3A98B80B13(unk_0xBC25C936A095B5BA())) || unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1)) || unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA())) || unk_0x16E28377989A37E9(unk_0xBC25C936A095B5BA())) || unk_0x9273B3557334635D(unk_0xBC25C936A095B5BA())) || unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1)) || unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F())) || func_139()) || Global_1974B) || Global_62BF) || func_138()) || func_137(8, -1)) || func_134()) || func_132()) || func_136()) || func_135()) || func_133())
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

var func_131()//Position - 0xABE7
{
	return Global_16B42.f_1;
}

int func_132()//Position - 0xABF5
{
	if (Global_15FA6 != -1)
	{
		return unk_0xFA30DFD0084E92FE(Global_147B0[Global_15FA6 /*34*/].f_F, 13);
	}
	return 0;
}

int func_133()//Position - 0xAC1B
{
	if (unk_0xB731B8C5BCE89836(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_134()//Position - 0xAC35
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

bool func_135()//Position - 0xAC5F
{
	return Global_16B4F.f_142 > 0;
}

bool func_136()//Position - 0xAC70
{
	return Global_16B4F.f_141 > 0;
}

bool func_137(int iParam0, int iParam1)//Position - 0xAC81
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

var func_138()//Position - 0xACBC
{
	return Global_140856;
}

int func_139()//Position - 0xACC8
{
	if (!unk_0x7AF0088ABFA713B6())
	{
		return Global_161D2.f_2C == 1;
	}
	return 0;
}

int func_140(int iParam0, struct<7> Param1, var uParam2, var uParam3)//Position - 0xACE4
{
	if (iParam0 == 1)
	{
		func_150(&uLocal_270, Param1);
		func_150(&uLocal_270, Param1.f_1);
		func_150(&uLocal_270, Param1.f_2);
		func_150(&uLocal_270, Param1.f_3);
		func_150(&uLocal_270, Param1.f_4);
		func_150(&uLocal_270, Param1.f_5);
		func_150(&uLocal_270, Param1.f_6);
		if (func_147(&uLocal_270))
		{
			return 1;
		}
	}
	else
	{
		func_141(&uLocal_270, 0);
	}
	return 0;
}

void func_141(var uParam0, bool bParam1)//Position - 0xAD57
{
	int iVar0;
	
	if (!bParam1)
	{
		func_143(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_142(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_91 = 0;
	uParam0->f_92 = -1;
}

void func_142(var uParam0)//Position - 0xAD92
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_143(var uParam0)//Position - 0xADAB
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0xFA30DFD0084E92FE((*uParam0)[iVar0 /*18*/], 30))
		{
			func_144(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_91 = 1;
}

void func_144(var uParam0)//Position - 0xADE4
{
	func_145(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_145(int iParam0, char* sParam1, int iParam2)//Position - 0xADFB
{
	if (unk_0xFA30DFD0084E92FE(iParam0, 30))
	{
		switch (func_146(iParam0))
		{
			case 0:
				unk_0x2CA123B0622F495C(iParam2);
				break;
			
			case 1:
				unk_0x4EA570997E107F35(sParam1);
				break;
			
			case 2:
				unk_0xFC4EC4916831BFC8(sParam1);
				break;
			
			case 3:
				unk_0x786556581D95BCB2(sParam1);
				break;
			
			case 4:
				unk_0x4F5DAC981AF98536(iParam2, sParam1);
				break;
			
			case 5:
				unk_0x4CE01E22F13D3913(sParam1);
				break;
			
			case 6:
				unk_0xC32C243942383443();
				break;
			
			case 7:
				unk_0xE0BCC382FA9C9FF7(iParam2);
				break;
			
			case 8:
				unk_0x841D233D3CE81152(iParam2, unk_0xFA30DFD0084E92FE(iParam0, 26));
				break;
			
			case 9:
				unk_0x8E5F062750135AD1();
				break;
			
			default:
				break;
		}
	}
}

int func_146(int iParam0)//Position - 0xAEBB
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0xFA30DFD0084E92FE(iParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_147(var uParam0)//Position - 0xAEE7
{
	int iVar0;
	
	if (!uParam0->f_91)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0xFA30DFD0084E92FE((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!unk_0xFA30DFD0084E92FE((*uParam0)[iVar0 /*18*/], 29))
			{
				return 0;
			}
			if (!func_148(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_91 = 0;
	return 1;
}

bool func_148(var uParam0)//Position - 0xAF49
{
	return func_149(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_149(int iParam0, char* sParam1, int iParam2)//Position - 0xAF60
{
	if (unk_0xFA30DFD0084E92FE(iParam0, 30))
	{
		if (unk_0xFA30DFD0084E92FE(iParam0, 29))
		{
			switch (func_146(iParam0))
			{
				case 0:
					return unk_0xD6513D668481290A(iParam2);
					break;
				
				case 1:
					return unk_0xF9E082857622D91E(sParam1);
					break;
				
				case 2:
					return unk_0x320539481B2F0121(sParam1);
					break;
				
				case 3:
					return unk_0x499783D01578C2D2(sParam1);
					break;
				
				case 4:
					return unk_0x00D24B3F2A5CD22C(iParam2, sParam1);
					break;
				
				case 5:
					return unk_0x1E8349F219AC5AF9(sParam1);
					break;
				
				case 6:
					return unk_0x284F2ACE6839D3C0(sParam1, unk_0xFA30DFD0084E92FE(iParam0, 27), -1);
					break;
				
				case 7:
					return unk_0xFEAEF0BFEF7FED8A(iParam2);
					break;
				
				case 8:
					return unk_0xFA9040D29FE330BD(iParam2);
					break;
				
				case 9:
					return unk_0x95654D7A61CD43DE();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

void func_150(var uParam0, int iParam1)//Position - 0xB054
{
	func_151(uParam0, 0, iParam1, "NULL", 0);
}

void func_151(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)//Position - 0xB068
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0xFA30DFD0084E92FE((*uParam0)[iVar0 /*18*/], 30))
		{
			if (unk_0xFA30DFD0084E92FE((*uParam0)[iVar0 /*18*/], iParam1))
			{
				if (iParam2 != -1)
				{
					if ((uParam0[iVar0 /*18*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (iParam1 != 4)
				{
					if (!unk_0x3362CDE8460ED38B(sParam3, "NULL"))
					{
						if (unk_0x3362CDE8460ED38B(&((uParam0[iVar0 /*18*/])->f_2), sParam3))
						{
							return;
						}
					}
				}
				if (iParam1 == 9)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_91)
	{
		uParam0->f_91 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!unk_0xFA30DFD0084E92FE((*uParam0)[iVar0 /*18*/], 30))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), sParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			unk_0xF0059F27F7BB6680(uParam0[iVar0 /*18*/], iParam1);
			unk_0xF0059F27F7BB6680(uParam0[iVar0 /*18*/], 30);
			return;
		}
		iVar0++;
	}
}

int func_152()//Position - 0xB150
{
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (SYSTEM::VDIST2(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), vLocal_49) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(unk_0xB5D9AE572C19509E(unk_0xBC25C936A095B5BA())) > 1369f && !func_163())
		{
			return 0;
		}
	}
	if (func_159())
	{
		return 1;
	}
	if (func_153(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_153(float fParam0, bool bParam1)//Position - 0xB1D6
{
	struct<27> Var0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	
	iVar2 = -1;
	fVar3 = fParam0;
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (func_10(func_114()))
		{
			iVar5 = func_7();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (unk_0xFA30DFD0084E92FE(Global_19B04.f_4871[iVar1 /*6*/], 2) && !unk_0xFA30DFD0084E92FE(Global_19B04.f_4871[iVar1 /*6*/], 3))
				{
					func_154(iVar1, &Var0);
					fVar4 = unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), false), Var0.f_6, true);
					if (fVar4 < fVar3)
					{
						bVar7 = true;
						if (bParam1)
						{
							if (iVar5 != Var0.f_1A)
							{
								bVar7 = false;
							}
						}
						if (bVar7)
						{
							iVar2 = iVar1;
							fVar3 = fVar4;
						}
					}
				}
				iVar6++;
			}
		}
	}
	return iVar2;
}

void func_154(int iParam0, var uParam1)//Position - 0xB28D
{
	switch (iParam0)
	{
		case 0:
			func_155(uParam1, "Abigail1", func_157(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_156(iParam0), 1, 0);
			break;
		
		case 1:
			func_155(uParam1, "Abigail2", func_157(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_156(iParam0), 1, 0);
			break;
		
		case 2:
			func_155(uParam1, "Barry1", func_157(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_156(iParam0), 1, 0);
			break;
		
		case 3:
			func_155(uParam1, "Barry2", func_157(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_156(iParam0), 1, 1);
			break;
		
		case 4:
			func_155(uParam1, "Barry3", func_157(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_156(iParam0), 0, 0);
			break;
		
		case 5:
			func_155(uParam1, "Barry3A", func_157(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_156(iParam0), 0, 1);
			break;
		
		case 6:
			func_155(uParam1, "Barry3C", func_157(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_156(iParam0), 0, 1);
			break;
		
		case 7:
			func_155(uParam1, "Barry4", func_157(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_156(iParam0), 0, 0);
			break;
		
		case 8:
			func_155(uParam1, "Dreyfuss1", func_157(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_156(iParam0), 0, 0);
			break;
		
		case 9:
			func_155(uParam1, "Epsilon1", func_157(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_156(iParam0), 0, 0);
			break;
		
		case 10:
			func_155(uParam1, "Epsilon2", func_157(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_156(iParam0), 1, 0);
			break;
		
		case 11:
			func_155(uParam1, "Epsilon3", func_157(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_156(iParam0), 0, 0);
			break;
		
		case 12:
			func_155(uParam1, "Epsilon4", func_157(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_156(iParam0), 0, 0);
			break;
		
		case 13:
			func_155(uParam1, "Epsilon5", func_157(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_156(iParam0), 1, 0);
			break;
		
		case 14:
			func_155(uParam1, "Epsilon6", func_157(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_156(iParam0), 0, 1);
			break;
		
		case 15:
			func_155(uParam1, "Epsilon7", func_157(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_156(iParam0), 0, 0);
			break;
		
		case 16:
			func_155(uParam1, "Epsilon8", func_157(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_156(iParam0), 1, 0);
			break;
		
		case 17:
			func_155(uParam1, "Extreme1", func_157(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_156(iParam0), 0, 1);
			break;
		
		case 18:
			func_155(uParam1, "Extreme2", func_157(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_156(iParam0), 0, 1);
			break;
		
		case 19:
			func_155(uParam1, "Extreme3", func_157(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_156(iParam0), 0, 1);
			break;
		
		case 20:
			func_155(uParam1, "Extreme4", func_157(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_156(iParam0), 0, 0);
			break;
		
		case 21:
			func_155(uParam1, "Fanatic1", func_157(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_156(iParam0), 1, 0);
			break;
		
		case 22:
			func_155(uParam1, "Fanatic2", func_157(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_156(iParam0), 1, 0);
			break;
		
		case 23:
			func_155(uParam1, "Fanatic3", func_157(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_156(iParam0), 0, 1);
			break;
		
		case 24:
			func_155(uParam1, "Hao1", func_157(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_156(iParam0), 0, 1);
			break;
		
		case 25:
			func_155(uParam1, "Hunting1", func_157(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_156(iParam0), 0, 1);
			break;
		
		case 26:
			func_155(uParam1, "Hunting2", func_157(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_156(iParam0), 0, 1);
			break;
		
		case 27:
			func_155(uParam1, "Josh1", func_157(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_156(iParam0), 1, 0);
			break;
		
		case 28:
			func_155(uParam1, "Josh2", func_157(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_156(iParam0), 1, 1);
			break;
		
		case 29:
			func_155(uParam1, "Josh3", func_157(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_156(iParam0), 1, 1);
			break;
		
		case 30:
			func_155(uParam1, "Josh4", func_157(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_156(iParam0), 1, 0);
			break;
		
		case 31:
			func_155(uParam1, "Maude1", func_157(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_156(iParam0), 0, 1);
			break;
		
		case 32:
			func_155(uParam1, "Minute1", func_157(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_156(iParam0), 0, 1);
			break;
		
		case 33:
			func_155(uParam1, "Minute2", func_157(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_156(iParam0), 0, 1);
			break;
		
		case 34:
			func_155(uParam1, "Minute3", func_157(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_156(iParam0), 0, 1);
			break;
		
		case 35:
			func_155(uParam1, "MrsPhilips1", func_157(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_156(iParam0), 0, 0);
			break;
		
		case 36:
			func_155(uParam1, "MrsPhilips2", func_157(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_156(iParam0), 0, 0);
			break;
		
		case 37:
			func_155(uParam1, "Nigel1", func_157(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_156(iParam0), 1, 0);
			break;
		
		case 38:
			func_155(uParam1, "Nigel1A", func_157(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_156(iParam0), 1, 1);
			break;
		
		case 39:
			func_155(uParam1, "Nigel1B", func_157(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_156(iParam0), 1, 1);
			break;
		
		case 40:
			func_155(uParam1, "Nigel1C", func_157(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_156(iParam0), 1, 1);
			break;
		
		case 41:
			func_155(uParam1, "Nigel1D", func_157(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_156(iParam0), 1, 1);
			break;
		
		case 42:
			func_155(uParam1, "Nigel2", func_157(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_156(iParam0), 1, 1);
			break;
		
		case 43:
			func_155(uParam1, "Nigel3", func_157(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_156(iParam0), 1, 1);
			break;
		
		case 44:
			func_155(uParam1, "Omega1", func_157(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_156(iParam0), 0, 0);
			break;
		
		case 45:
			func_155(uParam1, "Omega2", func_157(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_156(iParam0), 0, 0);
			break;
		
		case 46:
			func_155(uParam1, "Paparazzo1", func_157(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_156(iParam0), 0, 1);
			break;
		
		case 47:
			func_155(uParam1, "Paparazzo2", func_157(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_156(iParam0), 0, 1);
			break;
		
		case 48:
			func_155(uParam1, "Paparazzo3", func_157(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_156(iParam0), 0, 0);
			break;
		
		case 49:
			func_155(uParam1, "Paparazzo3A", func_157(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_156(iParam0), 0, 1);
			break;
		
		case 50:
			func_155(uParam1, "Paparazzo3B", func_157(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_156(iParam0), 0, 1);
			break;
		
		case 51:
			func_155(uParam1, "Paparazzo4", func_157(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_156(iParam0), 0, 0);
			break;
		
		case 52:
			func_155(uParam1, "Rampage1", func_157(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_156(iParam0), 0, 0);
			break;
		
		case 54:
			func_155(uParam1, "Rampage3", func_157(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_156(iParam0), 1, 0);
			break;
		
		case 55:
			func_155(uParam1, "Rampage4", func_157(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_156(iParam0), 1, 0);
			break;
		
		case 56:
			func_155(uParam1, "Rampage5", func_157(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_156(iParam0), 0, 0);
			break;
		
		case 53:
			func_155(uParam1, "Rampage2", func_157(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_156(iParam0), 1, 0);
			break;
		
		case 57:
			func_155(uParam1, "TheLastOne", func_157(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_156(iParam0), 0, 1);
			break;
		
		case 58:
			func_155(uParam1, "Tonya1", func_157(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_156(iParam0), 0, 1);
			break;
		
		case 59:
			func_155(uParam1, "Tonya2", func_157(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_156(iParam0), 0, 1);
			break;
		
		case 60:
			func_155(uParam1, "Tonya3", func_157(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_156(iParam0), 0, 1);
			break;
		
		case 61:
			func_155(uParam1, "Tonya4", func_157(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_156(iParam0), 0, 1);
			break;
		
		case 62:
			func_155(uParam1, "Tonya5", func_157(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_156(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_155(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)//Position - 0xC4D5
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

int func_156(int iParam0)//Position - 0xC566
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

struct<2> func_157(int iParam0)//Position - 0xC8AC
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_158(iParam0) };
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

struct<2> func_158(int iParam0)//Position - 0xC8E4
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

int func_159()//Position - 0xCD31
{
	if (func_162() && !func_163())
	{
		return 1;
	}
	if (func_161() && func_160())
	{
		return 1;
	}
	return 0;
}

bool func_160()//Position - 0xCD63
{
	return Global_199EA > 0;
}

int func_161()//Position - 0xCD71
{
	if (Global_15FA6 != -1)
	{
		return 1;
	}
	return 0;
}

int func_162()//Position - 0xCD86
{
	if (Global_15FA6 != -1)
	{
		return unk_0xFA30DFD0084E92FE(Global_147B0[Global_15FA6 /*34*/].f_F, 20);
	}
	return 0;
}

int func_163()//Position - 0xCDAC
{
	if (unk_0x8ACB0C3FACC09467())
	{
		if (unk_0x45397F173D3E5C6B() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

void func_164(int iParam0)//Position - 0xCDC9
{
	Global_19AF6 = iParam0;
}

void func_165()//Position - 0xCDD7
{
	if (!bLocal_248)
	{
		unk_0x29EBF830A072263F(func_179(unk_0xB5CEFD608600A09F()) - Vector(0f, 10f, 0f), unk_0x491B2241281A03B7(5, 15), &vLocal_235, 1, 3f, 0f);
		if (!unk_0x33CC9445B2DF9387(vLocal_235, 10f))
		{
			vLocal_233 = { vLocal_235 };
			bLocal_247 = true;
		}
		else
		{
			unk_0x29EBF830A072263F(func_179(unk_0xB5CEFD608600A09F()) + Vector(0f, 10f, 0f), unk_0x491B2241281A03B7(5, 15), &vLocal_235, 1, 3f, 0f);
			if (!unk_0x33CC9445B2DF9387(vLocal_235, 10f))
			{
				vLocal_233 = { vLocal_235 };
				bLocal_247 = true;
			}
			if (bLocal_247)
			{
				if (!unk_0x724D816EA203A79E(iLocal_260[0]))
				{
					iLocal_260[0] = unk_0x01B3635C3E8EDD81(6, joaat("s_m_y_cop_01"), vLocal_233 + Vector(0f, 5f, 0f), 0f, 1, true);
					if (func_60())
					{
						unk_0x7A535CE1F001F3FE(iLocal_260[0], joaat("weapon_pistol"), -1, true, true);
						unk_0x4106FAF8AA1D69D5(iLocal_260[0], iLocal_268);
						unk_0x2E35C4FA5F0ED22F(iLocal_260[0], true);
						unk_0xB90F3BE2A1EF63DB(iLocal_260[0], 50f, 0);
						unk_0x22321800954A532E(iLocal_260[0], true);
					}
					else
					{
						unk_0x2E35C4FA5F0ED22F(iLocal_260[0], true);
						unk_0xC5A6DFE2B8987B17(&iLocal_265);
						unk_0x9565F9267674873A(0, unk_0xBC25C936A095B5BA(), -1, 6f, 3f, 1073741824, 0);
						unk_0xE896C0AD02364F2A(0, "random@getawaydriver", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0, 0, 0, 0);
						unk_0x85DB484A637CEAB9(0, unk_0xBC25C936A095B5BA(), 0);
						unk_0xDE2D2B13F24A979D(0, 3000);
						unk_0x535008C596714F9E(iLocal_265);
						unk_0xA8E6405305C0D7DF(iLocal_260[0], iLocal_265);
						unk_0x02DAF06EA4F08219(&iLocal_265);
						unk_0x22321800954A532E(iLocal_260[0], true);
						func_113(&uLocal_53, 4, iLocal_260[0], "REGETCop", 0, 1);
					}
				}
				if (!unk_0x724D816EA203A79E(iLocal_260[1]))
				{
					iLocal_260[1] = unk_0x01B3635C3E8EDD81(6, joaat("s_m_y_cop_01"), vLocal_233 - Vector(0f, 5f, 0f), 0f, 1, true);
					if (func_60())
					{
						unk_0x7A535CE1F001F3FE(iLocal_260[0], joaat("weapon_pistol"), -1, false, true);
						unk_0x4106FAF8AA1D69D5(iLocal_260[1], iLocal_268);
						unk_0x2E35C4FA5F0ED22F(iLocal_260[1], true);
						unk_0xB90F3BE2A1EF63DB(iLocal_260[1], 50f, 0);
						unk_0x22321800954A532E(iLocal_260[1], true);
					}
					else
					{
						unk_0x2E35C4FA5F0ED22F(iLocal_260[1], true);
						unk_0xA2DBAE5B6ADB4DC9(iLocal_260[1], 68.7217f, -1569.83f, 28.6027f, 3f, 0, 0, 786603, -1082130432);
						unk_0x22321800954A532E(iLocal_260[1], true);
					}
				}
				if (!unk_0x724D816EA203A79E(iLocal_262))
				{
					iLocal_262 = unk_0x61C05BF08A1E0EFE(joaat("police3"), vLocal_233, 0f, true, true, false);
					vLocal_234 = { func_179(unk_0xB5CEFD608600A09F()) - unk_0x541C2AEF053615BC(iLocal_262, true) };
					unk_0x019CE76D5286C95C(iLocal_262, unk_0xFDC254CE02DB0919(vLocal_234.x, vLocal_234.y));
					unk_0x0FB6723EA68C0881(iLocal_262, 1);
				}
				if (!unk_0x724D816EA203A79E(iLocal_260[2]))
				{
					iLocal_260[2] = unk_0xFD8987C090669BD5(iLocal_262, 6, joaat("s_m_y_cop_01"), -1, 1, true);
					if (func_60())
					{
						unk_0x7A535CE1F001F3FE(iLocal_260[2], joaat("weapon_pistol"), -1, true, true);
						unk_0x4106FAF8AA1D69D5(iLocal_260[2], iLocal_268);
						unk_0x91629AC1E1F78419(iLocal_260[2], 1, true);
						unk_0x91629AC1E1F78419(iLocal_260[2], 3, false);
						unk_0x2E35C4FA5F0ED22F(iLocal_260[2], true);
						unk_0x1A06AE15BF21D407(iLocal_260[2], iLocal_262, iLocal_258[1], 6, 15f, 2, -1f, -1f, 1);
						unk_0x22321800954A532E(iLocal_260[2], true);
					}
					else
					{
						unk_0x2E35C4FA5F0ED22F(iLocal_260[2], true);
						unk_0xC5A6DFE2B8987B17(&iLocal_265);
						unk_0x509F549022512095(0, iLocal_262, 40.2328f, -1555.753f, 28.2128f, 10f, 0, joaat("police"), 786469, 1f, -1f);
						unk_0xDE2D2B13F24A979D(0, 5000);
						unk_0x535008C596714F9E(iLocal_265);
						unk_0xA8E6405305C0D7DF(iLocal_260[2], iLocal_265);
						unk_0x02DAF06EA4F08219(&iLocal_265);
						unk_0x22321800954A532E(iLocal_260[2], true);
					}
				}
				bLocal_248 = true;
			}
		}
	}
}

int func_166(var uParam0, int iParam1, float fParam2)//Position - 0xD17B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (unk_0x724D816EA203A79E((*uParam0)[iVar0]))
		{
			if (unk_0x724D816EA203A79E(iParam1))
			{
				if (unk_0xE59B7F5A03335350(iParam1, 0))
				{
					if (!unk_0x36CEFBE9B745A58D((*uParam0)[iVar0]))
					{
						if (unk_0x62F3A07C43FFB568((*uParam0)[iVar0], iParam1, 0))
						{
							return 0;
						}
						if (fParam2 > 0f)
						{
							if (unk_0xE642C1AC73CE364E((*uParam0)[iVar0], unk_0xBC25C936A095B5BA(), fParam2, fParam2, fParam2, 0, 1, 0))
							{
								return 0;
							}
						}
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
		iVar0++;
	}
	return 1;
}

void func_167()//Position - 0xD216
{
	Global_394A = 0;
	func_168();
}

void func_168()//Position - 0xD226
{
	unk_0x5C7DC611411E2CF9();
	Global_41AB = 0;
	if (unk_0xE6711F601F11B66B())
	{
		unk_0x1E08809A5041F85B(false);
		Global_3DB8 = 6;
	}
}

int func_169(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xD247
{
	func_177(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_170(sParam2, iParam3, 0);
}

int func_170(char* sParam0, int iParam1, bool bParam2)//Position - 0xD295
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
					func_74();
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
		if (func_137(8, -1))
		{
			return 0;
		}
		Global_3E04 = { Global_3DFE };
		func_176();
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
				func_175();
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
				if (func_174())
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
			if (func_173())
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
			func_172();
			Global_3DC2 = bParam2;
		}
		Global_3DBA = iParam1;
		StringCopy(&Global_3C3B, sParam0, 24);
		Global_394A = 0;
		func_171();
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
		func_74();
	}
	return 0;
}

void func_171()//Position - 0xD561
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

void func_172()//Position - 0xD593
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

int func_173()//Position - 0xD628
{
	if (Global_389D.f_1 == 1 || Global_389D.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_174()//Position - 0xD64F
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

void func_175()//Position - 0xD6E8
{
	if (func_9(14))
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
		Global_389D = func_114();
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

void func_176()//Position - 0xD78A
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

void func_177(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0xD7E2
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

int func_178()//Position - 0xD838
{
	if (Global_3DB8 != 0 || unk_0xE6711F601F11B66B())
	{
		return 1;
	}
	return 0;
}

Vector3 func_179(int iParam0)//Position - 0xD85A
{
	return unk_0x541C2AEF053615BC(unk_0xA95CF30C72EB526E(iParam0), false);
}

void func_180()//Position - 0xD86D
{
	func_181();
}

int func_181()//Position - 0xD87A
{
	if (func_182(0))
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

bool func_182(bool bParam0)//Position - 0xD8C5
{
	if (!bParam0 && unk_0xB731B8C5BCE89836(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_1163A, 0);
}

void func_183(int iParam0, int iParam1)//Position - 0xD8F0
{
	if (iParam0 == -1)
	{
		iParam0 = func_190();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_189(iParam0))
	{
		func_188(iParam0, iParam1);
		if (!func_13(51))
		{
			func_4("RE_REWARD", 1, 0, 4000, 10000, func_7(), 0, 138, 0);
			func_187(51);
		}
		if (func_104(iParam0))
		{
			Global_19B04.f_6186.f_2 = 3;
		}
		if (func_186(iParam0, iParam1) != 322)
		{
			func_184(func_186(iParam0, iParam1), vLocal_49.x, vLocal_49.y);
		}
		Global_19AF8 = iParam1;
		if (Global_19AF6 == 0)
		{
			if (((Global_19AF9 == 1 || Global_19AF9 == 5) || Global_19AF9 == 11) || Global_19AF9 == 25)
			{
				func_164(2);
			}
			else if ((Global_19AF9 == 26 || Global_19AF9 == 8) || Global_19AF9 == 17)
			{
				func_164(7);
			}
			else
			{
				func_164(1);
			}
		}
	}
}

void func_184(int iParam0, var uParam1, var uParam2)//Position - 0xD9F4
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
		func_24((891 + iParam0), 1, -1, 1);
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
		Global_19B04.f_27B5[iParam0 /*12*/].f_A = uParam1;
		Global_19B04.f_27B5[iParam0 /*12*/].f_B = uParam2;
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
		func_185();
	}
}

void func_185()//Position - 0xDADC
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
		func_45(13, SYSTEM::FLOOR(Global_19B04.f_27B5.f_F0D));
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
					func_181();
				}
			}
		}
	}
}

int func_186(int iParam0, int iParam1)//Position - 0xDF9D
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

void func_187(int iParam0)//Position - 0xE311
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
		unk_0xF0059F27F7BB6680(&(Global_19B04.f_4F9D.f_96[iVar1]), iVar0);
	}
}

void func_188(int iParam0, int iParam1)//Position - 0xE353
{
	unk_0xF0059F27F7BB6680(&(Global_19B04.f_6186.f_8[iParam0]), iParam1);
}

int func_189(int iParam0)//Position - 0xE36E
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

int func_190()//Position - 0xE41F
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0x1377080E9B0BD993(), 64);
	uVar1 = func_191(Var0);
	return uVar1;
}

int func_191(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)//Position - 0xE43C
{
	switch (unk_0x56BEECB328B6D29D(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		
		case joaat("re_accident"):
			return 0;
			break;
		
		case joaat("re_arrests"):
			return 15;
			break;
		
		case joaat("re_atmrobbery"):
			return 1;
			break;
		
		case joaat("re_bikethief"):
			return 26;
			break;
		
		case joaat("re_border"):
			return 29;
			break;
		
		case joaat("re_burials"):
			return 24;
			break;
		
		case joaat("re_bus_tours"):
			return 2;
			break;
		
		case joaat("re_cartheft"):
			return 17;
			break;
		
		case joaat("re_chasethieves"):
			return 11;
			break;
		
		case joaat("re_crashrescue"):
			return 16;
			break;
		
		case joaat("re_cultshootout"):
			return 18;
			break;
		
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		
		case joaat("re_domestic"):
			return 3;
			break;
		
		case joaat("re_drunkdriver"):
			return 27;
			break;
		
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		
		case joaat("re_gangfight"):
			return 19;
			break;
		
		case joaat("re_getaway_driver"):
			return 4;
			break;
		
		case joaat("re_hitch_lift"):
			return 13;
			break;
		
		case joaat("re_homeland_security"):
			return 28;
			break;
		
		case joaat("re_lured"):
			return 7;
			break;
		
		case joaat("re_muggings"):
			return 25;
			break;
		
		case joaat("re_paparazzi"):
			return 10;
			break;
		
		case joaat("re_prisonerlift"):
			return 22;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		
		case joaat("re_securityvan"):
			return 9;
			break;
		
		case joaat("re_shoprobbery"):
			return 5;
			break;
		
		case joaat("re_snatched"):
			return 6;
			break;
		
		case joaat("re_stag_do"):
			return 14;
			break;
		
		case joaat("re_yetarian"):
			return 30;
			break;
		
		case joaat("re_duel"):
			return 31;
			break;
		
		case joaat("re_seaplane"):
			return 32;
			break;
		
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return -1;
}

void func_192(int iParam0, bool bParam1)//Position - 0xE616
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 <= 31)
	{
		if (!func_195(iParam0))
		{
			unk_0xF0059F27F7BB6680(&(Global_19B04.f_6725.f_1), iVar0);
			if (!bParam1)
			{
				func_193(func_194(iParam0));
			}
		}
	}
}

void func_193(char* sParam0)//Position - 0xE65F
{
	unk_0x2E94302CFF011F2E("");
	unk_0x20CD8193D21A53C8("CHAR_ACTING_UP", "CHAR_ACTING_UP", 0, 0, "DI_FEED_CHAR", sParam0);
}

char* func_194(int iParam0)//Position - 0xE684
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

int func_195(int iParam0)//Position - 0xE767
{
	if (iParam0 != -1 && iParam0 != 13)
	{
		return unk_0xFA30DFD0084E92FE(Global_19B04.f_6725.f_1, iParam0);
	}
	return 0;
}

int func_196()//Position - 0xE796
{
	return 1;
}

int func_197()//Position - 0xE79F
{
	if (Global_63A9)
	{
		func_164(4);
		return 1;
	}
	return 0;
}

int func_198(int iParam0)//Position - 0xE7B7
{
	return func_123(iParam0, 5, 1);
}

int func_199()//Position - 0xE7C7
{
	if (!func_108(5))
	{
		return 1;
	}
	if (func_159())
	{
		return 1;
	}
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (SYSTEM::VMAG2(unk_0xB5D9AE572C19509E(unk_0xBC25C936A095B5BA())) > 1369f && !func_163())
		{
			return 0;
		}
	}
	if (func_153(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_200()//Position - 0xE829
{
	if ((Global_19AF9 == func_190() && unk_0x8520DF5301DD9811()) && Global_19AFA)
	{
		return 1;
	}
	return 0;
}

void func_201(var uParam0)//Position - 0xE854
{
	int iVar0;
	
	if (uParam0->f_91)
	{
		if ((unk_0xC87A57742F7D3C06() >= (uParam0->f_92 + uParam0->f_93) || unk_0xFA30DFD0084E92FE(Global_16B1B.f_14, 2)) || unk_0xFA30DFD0084E92FE(Global_16B1B.f_14, 13))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				if (unk_0xFA30DFD0084E92FE((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!unk_0xFA30DFD0084E92FE((*uParam0)[iVar0 /*18*/], 29))
					{
						func_202(uParam0[iVar0 /*18*/]);
						uParam0->f_92 = unk_0xC87A57742F7D3C06();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_202(int iParam0)//Position - 0xE8DE
{
	func_203(iParam0, &(iParam0->f_2), iParam0->f_1);
}

void func_203(int iParam0, char* sParam1, int iParam2)//Position - 0xE8F4
{
	if (unk_0xFA30DFD0084E92FE(*iParam0, 30))
	{
		switch (func_146(*iParam0))
		{
			case 0:
				unk_0xF243B7A14FCFD0F4(iParam2);
				break;
			
			case 1:
				unk_0x522053D86D6E1C7A(sParam1);
				break;
			
			case 2:
				unk_0x37FA5A8A7F1136BA(sParam1);
				break;
			
			case 3:
				unk_0x8AA3F48A15444B98(sParam1, unk_0xFA30DFD0084E92FE(*iParam0, 28));
				break;
			
			case 4:
				unk_0x1B2A7C8188ADBE04(iParam2, sParam1);
				break;
			
			case 5:
				unk_0x44840FD68E426678(sParam1);
				break;
			
			case 6:
				unk_0x284F2ACE6839D3C0(sParam1, unk_0xFA30DFD0084E92FE(*iParam0, 27), -1);
				break;
			
			case 7:
				unk_0x381A61AE1A1DAD09(iParam2);
				break;
			
			case 8:
				unk_0x900CF084251DED26(sParam1, iParam2);
				break;
			
			case 9:
				unk_0xA8396BF0E2C53C39();
				break;
			
			default:
				break;
		}
		unk_0xF0059F27F7BB6680(iParam0, 29);
	}
}

void func_204(int iParam0)//Position - 0xE9CE
{
	if (iParam0 == -1)
	{
		iParam0 = func_190();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_206(iParam0);
	unk_0x8A623F2A0D19557F(0);
	unk_0xCB0D7BF24DBB59C6(1);
	Global_19AF6 = 0;
	func_205();
}

void func_205()//Position - 0xEA04
{
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			unk_0x8510BC031C24B862(unk_0x6F79ECA8C83E4357(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)), true);
		}
		unk_0xC8FD3EBBB90E8D7F(unk_0xBC25C936A095B5BA(), 32, false);
	}
}

void func_206(int iParam0)//Position - 0xEA41
{
	Global_19AF9 = iParam0;
}

int func_207(vector3 vParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0xEA4F
{
	bool bVar0;
	vector3 vVar1;
	int iVar2;
	vector3 vVar3;
	int iVar4;
	
	if (!Global_230F1)
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		iParam1 = func_190();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_92())
		{
			return 0;
		}
	}
	vLocal_49 = { vParam0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
		{
			vVar1 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true) };
			if (SYSTEM::VMAG2(unk_0xB5D9AE572C19509E(unk_0xBC25C936A095B5BA())) > 1369f && !func_163())
			{
				return 0;
			}
		}
		if (!Global_19B04.f_2360)
		{
			return 0;
		}
		if (func_182(0))
		{
			return 0;
		}
		if (func_159())
		{
			return 0;
		}
		if (func_237())
		{
			return 0;
		}
		if (Global_19AF9 != -1)
		{
			return 0;
		}
		if (func_10(func_114()))
		{
			if (func_153(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()) && !bParam4)
		{
			if ((vVar1.z - vLocal_49.z) > 50f)
			{
				return 0;
			}
		}
		if (!func_236(iParam1))
		{
			return 0;
		}
		if (func_10(func_114()))
		{
			if (func_235(func_114()) == 4 || func_235(func_114()) == 5)
			{
				return 0;
			}
		}
		if (func_10(func_114()))
		{
			if (!func_234(iParam1, iParam2, 145))
			{
				return 0;
			}
		}
		if (!func_233(Global_19B04.f_6186.f_2B[iParam1]))
		{
			return 0;
		}
		if ((unk_0x105601648511CC64() - Global_19AFB) < 150000)
		{
			if (iParam1 != 30)
			{
				return 0;
			}
		}
		if (func_232())
		{
			return 0;
		}
		if (unk_0x04604C9E42BD0E47())
		{
			return 0;
		}
		if (unk_0x8520DF5301DD9811())
		{
			return 0;
		}
		if (!func_130(4))
		{
			return 0;
		}
		if (!func_108(5))
		{
			return 0;
		}
		if (func_231(iParam1, iParam2) && !bParam3)
		{
			return 0;
		}
		if (Global_3 && iParam1 != 10)
		{
			return 0;
		}
		if (unk_0xBF697FA7422C0621(unk_0x645938DA8ED5E0BA(unk_0xBC25C936A095B5BA())))
		{
			if ((unk_0x645938DA8ED5E0BA(unk_0xBC25C936A095B5BA()) == unk_0x9911032C958CE1B0(377.153f, -717.567f, 10.0536f) || unk_0x645938DA8ED5E0BA(unk_0xBC25C936A095B5BA()) == unk_0x9911032C958CE1B0(320.9934f, 265.2515f, 82.1221f)) || unk_0x645938DA8ED5E0BA(unk_0xBC25C936A095B5BA()) == unk_0x9911032C958CE1B0(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam1 == 9 && (iParam2 == 2 || iParam2 == 5)) && !func_231(0, 0))
		{
			return 0;
		}
		if (Global_634F)
		{
			return 0;
		}
		if (func_236(30) && !func_231(30, 0))
		{
			if (iParam1 != 30)
			{
				if (SYSTEM::VDIST2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_10(func_114()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				vVar3 = { Global_19B04.f_932.f_21B.f_8E8[iVar2 /*3*/] };
				iVar4 = Global_19B04.f_932.f_21B.f_8E4[iVar2];
				if (func_230(iVar4))
				{
					if (func_208(iVar2))
					{
						if (!func_59(vVar3, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), false), vVar3) < (210f * 210f))
							{
								if (func_114() != iVar2)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar2++;
			}
		}
	}
	return 1;
}

bool func_208(int iParam0)//Position - 0xEDE9
{
	int iVar0;
	
	iVar0 = Global_19B04.f_932.f_21B.f_8E4[iParam0];
	return func_209(iVar0);
}

int func_209(int iParam0)//Position - 0xEE0A
{
	return func_210(iParam0, 1);
}

int func_210(int iParam0, int iParam1)//Position - 0xEE19
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_230(iParam0))
	{
		return 0;
	}
	func_211(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_211(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0xEE6C
{
	func_212(func_223(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_212(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0xEE8A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_222(iParam0, iParam1))
	{
		iVar0 = func_221(iParam1);
		iVar1 = func_219(iParam0);
		iVar2 = (func_219(iParam0) - func_219(iParam1));
		iVar3 = (func_221(iParam0) - func_221(iParam1));
		iVar4 = (func_218(iParam0) - func_218(iParam1));
		iVar5 = (func_217(iParam0) - func_217(iParam1));
		iVar6 = (func_216(iParam0) - func_216(iParam1));
		iVar7 = (func_215(iParam0) - func_215(iParam1));
	}
	else
	{
		iVar0 = func_221(iParam0);
		iVar1 = func_219(iParam1);
		iVar2 = (func_219(iParam1) - func_219(iParam0));
		iVar3 = (func_221(iParam1) - func_221(iParam0));
		iVar4 = (func_218(iParam1) - func_218(iParam0));
		iVar5 = (func_217(iParam1) - func_217(iParam0));
		iVar6 = (func_216(iParam1) - func_216(iParam0));
		iVar7 = (func_215(iParam1) - func_215(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_214(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_213(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_213(float fParam0, float fParam1, float fParam2)//Position - 0xF08B
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(SYSTEM::ROUND(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_214(int iParam0, int iParam1)//Position - 0xF0CD
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

int func_215(int iParam0)//Position - 0xF16F
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_216(int iParam0)//Position - 0xF182
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_217(int iParam0)//Position - 0xF195
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_218(int iParam0)//Position - 0xF1A8
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_219(int iParam0)//Position - 0xF1BA
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_220(unk_0xFA30DFD0084E92FE(iParam0, 31), -1, 1)) + 2011;
}

int func_220(bool bParam0, int iParam1, int iParam2)//Position - 0xF1DF
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_221(int iParam0)//Position - 0xF1F6
{
	return iParam0 & 15;
}

int func_222(int iParam0, int iParam1)//Position - 0xF203
{
	int iVar0;
	int iVar1;
	
	if (!func_230(iParam1) || !func_230(iParam0))
	{
		return 1;
	}
	iVar0 = func_219(iParam0);
	iVar1 = func_219(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_221(iParam0);
	iVar1 = func_221(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_218(iParam0);
	iVar1 = func_218(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_217(iParam0);
	iVar1 = func_217(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_216(iParam0);
	iVar1 = func_216(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_215(iParam0);
	iVar1 = func_215(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_223()//Position - 0xF30F
{
	var uVar0;
	
	func_229(&uVar0, unk_0xF40D00CD7B81C0A8());
	func_228(&uVar0, unk_0x7E09057438B9D216());
	func_227(&uVar0, unk_0x6E06C0DB9B43570D());
	func_226(&uVar0, unk_0xBE14F159908E4EE5());
	func_225(&uVar0, unk_0xDD6A91E47ED4D0CF());
	func_224(&uVar0, unk_0x4EEB3860BFC44B78());
	return uVar0;
}

void func_224(var uParam0, int iParam1)//Position - 0xF355
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

void func_225(var uParam0, int iParam1)//Position - 0xF3DB
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_226(var uParam0, int iParam1)//Position - 0xF40E
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_221(*uParam0);
	iVar1 = func_219(*uParam0);
	if (iParam1 < 1 || iParam1 > func_214(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_227(var uParam0, int iParam1)//Position - 0xF45F
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_228(var uParam0, int iParam1)//Position - 0xF499
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_229(var uParam0, int iParam1)//Position - 0xF4D4
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_230(int iParam0)//Position - 0xF510
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
	iVar0 = func_215(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_216(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_217(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_219(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_221(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_218(iParam0);
	if (iVar5 < 1 || iVar5 > func_214(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_231(int iParam0, int iParam1)//Position - 0xF5EC
{
	if (unk_0xFA30DFD0084E92FE(Global_19B04.f_6186.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_232()//Position - 0xF60F
{
	func_175();
	if (Global_C60[Global_389D /*2811*/][0 /*281*/].f_103 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_233(int iParam0)//Position - 0xF637
{
	return func_222(func_223(), iParam0);
}

int func_234(int iParam0, int iParam1, int iParam2)//Position - 0xF649
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_114();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
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
			break;
		
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_235(int iParam0)//Position - 0xF72D
{
	if (!func_10(iParam0))
	{
		return 7;
	}
	return Global_19B04.f_1DEB.f_397[iParam0];
}

bool func_236(int iParam0)//Position - 0xF751
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_92())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0xFA30DFD0084E92FE(Global_19B04.f_6186, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0xFA30DFD0084E92FE(Global_19B04.f_6186.f_1, iVar0);
	}
	return bVar1;
}

int func_237()//Position - 0xF7AF
{
	int iVar0;
	
	if (Global_6353)
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
			if (unk_0xE59B7F5A03335350(iVar0, 0))
			{
				if (!unk_0x36CEFBE9B745A58D(unk_0x3187EF5798B5D209(iVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_238(var uParam0, int iParam1)//Position - 0xF7F3
{
	if (iParam1 > 0)
	{
		uParam0->f_93 = iParam1;
	}
}

void func_239(struct<9> Param0, int iParam1, bool bParam2)//Position - 0xF80A
{
	int iVar0;
	
	if (iLocal_269)
	{
		func_252(0);
		if (Global_63AC)
		{
			unk_0x3857DADBD6EC8A54("AC_STOP");
		}
		func_251();
		func_100(0);
		unk_0x379ACE23D404525C(vLocal_232 - Vector(20f, 20f, 20f), vLocal_232 + Vector(20f, 20f, 20f), true, 1);
		unk_0xB830DBD32591E1BC();
		unk_0x0B26CF9D19F91B70(vLocal_232 - Vector(20f, 20f, 20f), vLocal_232 + Vector(20f, 20f, 20f), 0);
		unk_0x832ADB79A274D4E9(vLocal_232 - Vector(20f, 20f, 20f), vLocal_232 + Vector(20f, 20f, 20f), true);
		unk_0x3804D2422B37C701(unk_0xB5CEFD608600A09F());
		unk_0xDF53A66AEE1401AA(1f);
		if (!unk_0x1D403DFADBC2DE3C(iLocal_264, 0))
		{
			func_75(iLocal_264, 0, 145);
		}
		if (!unk_0x36CEFBE9B745A58D(iLocal_257))
		{
			if (unk_0x96044E39418AAF17(iLocal_257, "random@getawaydriver", "idle_a", 3) || unk_0x96044E39418AAF17(iLocal_257, "random@getawaydriver", "idle_2_hands_up", 3))
			{
				unk_0xC5A6DFE2B8987B17(&iLocal_265);
				unk_0xE896C0AD02364F2A(0, "random@getawaydriver", "hands_up_2_idle", 4f, -4f, -1, 0, 0, 0, 0, 0);
				if (!unk_0x36CEFBE9B745A58D((*iParam1)[0]))
				{
					unk_0x5558ED6D4A2DEC93(0, (*iParam1)[0], 150f, -1, 0, 0);
				}
				else if (!unk_0x36CEFBE9B745A58D((*iParam1)[1]))
				{
					unk_0x5558ED6D4A2DEC93(0, (*iParam1)[1], 150f, -1, 0, 0);
				}
				unk_0x535008C596714F9E(iLocal_265);
				unk_0xA8E6405305C0D7DF(iLocal_257, iLocal_265);
				unk_0x02DAF06EA4F08219(&iLocal_265);
				unk_0x22321800954A532E(iLocal_257, true);
			}
			unk_0xD999D66C5AFA4BE3(iLocal_257);
			unk_0x91629AC1E1F78419(iLocal_257, 17, true);
			unk_0x2E35C4FA5F0ED22F(iLocal_257, false);
		}
		if (!unk_0x36CEFBE9B745A58D((*iParam1)[0]))
		{
			unk_0xC8FD3EBBB90E8D7F((*iParam1)[0], 317, true);
			unk_0x91629AC1E1F78419((*iParam1)[0], 17, true);
			unk_0x57EB4CC8F1928A47((*iParam1)[0]);
			unk_0xB105531EDD3DE51B((*iParam1)[0], true);
			unk_0x2E35C4FA5F0ED22F((*iParam1)[0], false);
		}
		if (!unk_0x36CEFBE9B745A58D((*iParam1)[1]))
		{
			unk_0xC8FD3EBBB90E8D7F((*iParam1)[1], 317, true);
			unk_0x91629AC1E1F78419((*iParam1)[1], 17, true);
			unk_0x57EB4CC8F1928A47((*iParam1)[1]);
			unk_0xB105531EDD3DE51B((*iParam1)[1], true);
			unk_0x2E35C4FA5F0ED22F((*iParam1)[1], false);
		}
		iVar0 = 0;
		while (iVar0 < iLocal_259)
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_259[iVar0]))
			{
				unk_0x2E35C4FA5F0ED22F(iLocal_259[iVar0], false);
			}
			iVar0++;
		}
		if (!unk_0x36CEFBE9B745A58D(iLocal_260[0]))
		{
			unk_0x7A535CE1F001F3FE(iLocal_260[0], joaat("weapon_pistol"), -1, false, true);
			unk_0x2E35C4FA5F0ED22F(iLocal_260[0], false);
		}
		if (!unk_0x36CEFBE9B745A58D(iLocal_260[1]))
		{
			unk_0x7A535CE1F001F3FE(iLocal_260[1], joaat("weapon_pistol"), -1, false, true);
			unk_0x2E35C4FA5F0ED22F(iLocal_260[1], false);
		}
		if (!unk_0x36CEFBE9B745A58D(iLocal_260[2]))
		{
			unk_0x7A535CE1F001F3FE(iLocal_260[2], joaat("weapon_pistol"), -1, false, true);
			unk_0x2E35C4FA5F0ED22F(iLocal_260[2], false);
		}
		if (!bParam2)
		{
			if (!unk_0x36CEFBE9B745A58D((*iParam1)[0]))
			{
				unk_0xAB43C54784946B9F((*iParam1)[0], func_179(unk_0xB5CEFD608600A09F()), 200f, -1, 0, 0);
			}
			if (!unk_0x36CEFBE9B745A58D((*iParam1)[1]))
			{
				unk_0xAB43C54784946B9F((*iParam1)[1], func_179(unk_0xB5CEFD608600A09F()), 200f, -1, 0, 0);
			}
		}
		if (!iLocal_218)
		{
			unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
			iLocal_218 = 1;
		}
		func_65(iLocal_51);
		if (unk_0x2DA8CA50A72528FB(iLocal_256))
		{
			unk_0x07B8ECB35A4ED3AC(&iLocal_256);
		}
		func_65(iLocal_52);
		func_127(0);
		func_140(0, Param0);
	}
	func_240(-1);
	unk_0x95E4B6F3ED223F5A();
}

void func_240(int iParam0)//Position - 0xFB7E
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_190();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_200())
	{
		func_244(iParam0);
		unk_0x3FF92BBF0607A406(0, 0);
		Global_19AFB = unk_0x105601648511CC64();
		func_243(30000);
		StringCopy(&cVar0, func_242(Global_19AF9, 1), 64);
		if (func_189(Global_19AF9) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_19AF8, 64);
		}
		unk_0x3D65262152B53A67(&cVar0, Global_19AF6, (unk_0x105601648511CC64() - Global_19AF7), 0);
	}
	else if (unk_0xFA30DFD0084E92FE(Global_19B00, 0) && Global_19B04.f_6186.f_2 < 3)
	{
		unk_0x7CB6FD92BE491AD9(&Global_19B00, 0);
	}
	func_241(&Global_62F8);
	Global_19AFA = 0;
	func_206(-1);
}

void func_241(var uParam0)//Position - 0xFC33
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_8C1B)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_8C1A = 0;
	Global_8C1C = 0;
	Global_8C41 = 15;
	Global_DA9C = 0;
	Global_DA9D = 0;
}

char* func_242(int iParam0, bool bParam1)//Position - 0xFC70
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_243(int iParam0)//Position - 0xFEB9
{
	Global_8E68 = (unk_0x105601648511CC64() + iParam0);
}

void func_244(int iParam0)//Position - 0xFECB
{
	func_245(iParam0, 0, func_250(iParam0));
}

void func_245(int iParam0, int iParam1, int iParam2)//Position - 0xFEE0
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_223();
	func_248(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_247(iParam0, &uVar0);
	Var1 = { func_246(&uVar0) };
}

struct<16> func_246(var uParam0)//Position - 0xFF0F
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_217(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_216(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_215(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_218(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_221(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_219(*uParam0), 64);
	return Var0;
}

void func_247(int iParam0, var uParam1)//Position - 0xFFE0
{
	Global_19B04.f_6186.f_2B[iParam0] = *uParam1;
}

void func_248(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xFFF8
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_219(*uParam0);
	iVar1 = func_221(*uParam0);
	iVar2 = func_218(*uParam0);
	iVar3 = func_217(*uParam0);
	iVar4 = func_216(*uParam0);
	iVar5 = func_215(*uParam0);
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
	iVar6 = func_214(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_214(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_249(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_249(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1017B
{
	func_229(uParam0, iParam1);
	func_228(uParam0, iParam2);
	func_227(uParam0, iParam3);
	func_225(uParam0, iParam5);
	func_226(uParam0, iParam4);
	func_224(uParam0, iParam6);
}

int func_250(int iParam0)//Position - 0x101B3
{
	int iVar0;
	
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

void func_251()//Position - 0x10356
{
	Global_63A8 = 0;
	Global_63A9 = 0;
	Global_63AB = 0;
	Global_63AC = 0;
	Global_63AD = 0;
}

void func_252(bool bParam0)//Position - 0x10372
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 49)
	{
		func_115(iVar0, bParam0);
		iVar0++;
	}
}

