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
	float fLocal_46 = 0f;
	var uLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	vector3 vLocal_51[16] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_52[16] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	vector3 vLocal_53 = { 0f, 0f, 0f };
	vector3 vLocal_54 = { 0f, 0f, 0f };
	vector3 vLocal_55 = { 0f, 0f, 0f };
	vector3 vLocal_56 = { 0f, 0f, 0f };
	float fLocal_57 = 0f;
	vector3 vLocal_58 = { 0f, 0f, 0f };
	vector3 vLocal_59 = { 0f, 0f, 0f };
	float fLocal_60 = 0f;
	vector3 vLocal_61 = { 0f, 0f, 0f };
	vector3 vLocal_62 = { 0f, 0f, 0f };
	float fLocal_63 = 0f;
	vector3 vLocal_64 = { 0f, 0f, 0f };
	vector3 vLocal_65 = { 0f, 0f, 0f };
	float fLocal_66 = 0f;
	vector3 vLocal_67 = { 0f, 0f, 0f };
	vector3 vLocal_68 = { 0f, 0f, 0f };
	float fLocal_69 = 0f;
	vector3 vLocal_70 = { 0f, 0f, 0f };
	vector3 vLocal_71 = { 0f, 0f, 0f };
	float fLocal_72 = 0f;
	vector3 vLocal_73 = { 0f, 0f, 0f };
	vector3 vLocal_74 = { 0f, 0f, 0f };
	float fLocal_75 = 0f;
	bool bLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	bool bLocal_79 = 0;
	int iLocal_80 = 0;
	bool bLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	bool bLocal_84 = 0;
	int iLocal_85 = 0;
	float fLocal_86 = 0f;
	float fLocal_87 = 0f;
	float fLocal_88 = 0f;
	float fLocal_89 = 0f;
	var uLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	var uLocal_97[2] = { 0, 0 };
	int iLocal_98[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	var uLocal_102[4] = { 0, 0, 0, 0 };
	int iLocal_103[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_104 = 0;
	var uLocal_105[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_106 = 0;
	var uLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
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
	var uLocal_132 = 8;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 4;
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
	var uLocal_151 = 4;
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
	var uLocal_166 = 4;
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
	var uLocal_181 = 4;
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
	var uLocal_196 = 4;
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
	var uLocal_211 = 4;
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
	var uLocal_226 = 4;
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
	var uLocal_241 = 4;
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
	int iLocal_259 = 0;
	int iLocal_260 = 0;
	char[] cLocal_261[8] = 0;
	char* sLocal_262 = NULL;
	char* sLocal_263 = NULL;
	char* sLocal_264 = NULL;
	char* sLocal_265 = NULL;
	char* sLocal_266 = NULL;
	char* sLocal_267 = NULL;
	char* sLocal_268 = NULL;
	char* sLocal_269 = NULL;
	int iLocal_270 = 0;
	var uLocal_271 = 16;
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
	var uLocal_417 = 0;
	var uLocal_418 = 0;
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
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	int iLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 5;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 5;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	int iVar1;
	
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
	fLocal_46 = -1f;
	vLocal_53 = { -1109.213f, 4914.744f, 216.101f };
	vLocal_54 = { -1034.6f, 4918.6f, 205.9f };
	vLocal_55 = { -1066.963f, 4873.13f, 207.3281f };
	vLocal_56 = { -1112.946f, 4986.957f, 241.133f };
	fLocal_57 = 72.3125f;
	vLocal_58 = { -1138.386f, 4872.04f, 207.5488f };
	vLocal_59 = { -1091.959f, 4983.27f, 241.1698f };
	fLocal_60 = 57.8125f;
	vLocal_61 = { -1171.648f, 4888.658f, 211.0756f };
	vLocal_62 = { -1137.907f, 4926.572f, 240.999f };
	fLocal_63 = 17.9375f;
	vLocal_64 = { -1177.981f, 4903.231f, 212.477f };
	vLocal_65 = { -1153.398f, 4902.631f, 241.155f };
	fLocal_66 = 17.9375f;
	vLocal_67 = { -1175.693f, 4904.839f, 207.5207f };
	vLocal_68 = { -1142.08f, 4985.32f, 241.2887f };
	fLocal_69 = 36.375f;
	vLocal_70 = { -1106.212f, 4860.086f, 206.1207f };
	vLocal_71 = { -1105.016f, 4873.854f, 241.1453f };
	fLocal_72 = 11.5625f;
	vLocal_73 = { -1044.268f, 4916.587f, 209.8365f };
	vLocal_74 = { -1063.605f, 4972.88f, 241.1299f };
	fLocal_75 = 12.875f;
	iLocal_96 = 4;
	cLocal_261 = "REPLAY_TMG";
	sLocal_262 = "CMN_TDIED";
	if (unk_0xE8A79675302ED812(26))
	{
		func_184();
	}
	if (unk_0x027905FCBF85C0D2())
	{
		unk_0x95E4B6F3ED223F5A();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (unk_0x684B06333594F9EA() || iLocal_77)
		{
			unk_0xDF53A66AEE1401AA(0f);
			switch (iLocal_50)
			{
				case 0:
					if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
					{
						if (Global_19B04.f_6186.f_5 >= iLocal_96 && !func_183())
						{
							iLocal_50 = 2;
						}
						func_180();
						func_177();
					}
					break;
				
				case 1:
					unk_0x6A095EC1C9AF12A4(unk_0xB5CEFD608600A09F());
					if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
					{
						if (SYSTEM::TIMERA() > 2000)
						{
							if (iLocal_91 == 1)
							{
								func_176();
							}
							else if (iLocal_91 == 2)
							{
								func_151();
							}
						}
						if (SYSTEM::TIMERA() > 1300)
						{
							if (iLocal_93 < 3)
							{
								func_150();
							}
							else
							{
								func_149();
							}
						}
						if (iLocal_78)
						{
							func_136(26, 1);
							iLocal_78 = 0;
							iLocal_50 = 0;
						}
					}
					break;
				
				case 2:
					unk_0x6A095EC1C9AF12A4(unk_0xB5CEFD608600A09F());
					if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
					{
						func_108();
					}
					unk_0xF72F6BB050622804(Global_88D4[9 /*31*/], 0, 0, 1);
					unk_0xF72F6BB050622804(Global_88D4[10 /*31*/], 0, 0, 1);
					break;
				
				case 4:
					if (!unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
					{
						iLocal_50 = 3;
						break;
					}
					bLocal_79 = false;
					unk_0xDF53A66AEE1401AA(0f);
					iVar0 = 0;
					while (iVar0 < iLocal_98)
					{
						if (unk_0x36CEFBE9B745A58D(iLocal_98[iVar0]))
						{
							if (unk_0x2DA8CA50A72528FB(uLocal_105[iVar0]))
							{
								unk_0x07B8ECB35A4ED3AC(&(uLocal_105[iVar0]));
							}
						}
						else
						{
							if (unk_0xFF2AD13F5BBF6764(iLocal_98[iVar0]))
							{
								if (unk_0x2DA8CA50A72528FB(uLocal_105[iVar0]))
								{
									unk_0x07B8ECB35A4ED3AC(&(uLocal_105[iVar0]));
								}
							}
							else if (unk_0xE642C1AC73CE364E(iLocal_98[iVar0], unk_0xBC25C936A095B5BA(), 30f, 30f, 30f, 0, 1, 0))
							{
								if (!func_107())
								{
									if (iLocal_95 < unk_0x105601648511CC64())
									{
										iVar1 = unk_0x491B2241281A03B7(0, 3);
										if (iVar1 == 0)
										{
											func_97(&uLocal_271, "ACULTAU", "ACULT_SHOUT", 4, 0, 0, 0);
										}
										else if (iVar1 == 1)
										{
											func_96(&uLocal_271, 1, iLocal_98[iVar0], "ACULTMember1", 0, 1);
											func_97(&uLocal_271, "ACULTAU", "ACULT_FIGHT1", 4, 0, 0, 0);
										}
										else if (iVar1 == 2)
										{
											func_96(&uLocal_271, 2, iLocal_98[iVar0], "ACULTMember2", 0, 1);
											func_97(&uLocal_271, "ACULTAU", "ACULT_FIGHT2", 4, 0, 0, 0);
										}
										iLocal_95 = (unk_0x105601648511CC64() + unk_0x491B2241281A03B7(4500, 6000));
									}
								}
							}
							bLocal_79 = true;
						}
						iVar0++;
					}
					if (!bLocal_79)
					{
						func_60();
					}
					break;
				
				case 3:
					if (!iLocal_77)
					{
						iLocal_109 = func_59();
						if (!unk_0xA7F138B5B1AB2CF6(iLocal_109))
						{
							break;
						}
						func_58(&uLocal_114, 0);
						iLocal_77 = 1;
					}
					if (func_29(&uLocal_114, &uLocal_120, &iLocal_109, cLocal_261, sLocal_262, &bLocal_76, 78))
					{
						iLocal_94 = 0;
						unk_0x926FDA90094AA5FA(iLocal_270);
						unk_0xD9245E5E4AE1D853(iLocal_108);
						iVar0 = 0;
						while (iVar0 < iLocal_98)
						{
							if (unk_0x724D816EA203A79E(iLocal_98[iVar0]))
							{
								unk_0xF845620A03C7425B(&(iLocal_98[iVar0]));
							}
							iVar0++;
						}
						iVar0 = 0;
						while (iVar0 < iLocal_103)
						{
							if (unk_0x724D816EA203A79E(iLocal_103[iVar0]))
							{
								unk_0xA35241BCE4C1A24B(&(iLocal_103[iVar0]));
							}
							iVar0++;
						}
						if (unk_0xEF0E25DA0CB6E8FF(iLocal_106))
						{
							unk_0x348665177DBFB93B(iLocal_106, false);
						}
						if (unk_0x724D816EA203A79E(iLocal_101))
						{
							unk_0xA35241BCE4C1A24B(&iLocal_101);
						}
						if (unk_0x724D816EA203A79E(iLocal_101))
						{
							unk_0xA35241BCE4C1A24B(&iLocal_101);
						}
						if (bLocal_76)
						{
							func_9();
							func_3(0);
							func_1(1);
							iLocal_77 = 0;
							iLocal_50 = 2;
						}
						else
						{
							iLocal_77 = 0;
							func_184();
						}
					}
					break;
			}
		}
		else if (bLocal_81)
		{
		}
		else
		{
			func_184();
		}
	}
}

void func_1(bool bParam0)//Position - 0x55E
{
	if (bParam0)
	{
		unk_0xC63520BF0B3FB162(0);
		unk_0x720260ACC9BD334E(1);
		unk_0x4101DC5C065D2EB5(0);
		func_2(1);
		Global_15926 = 1;
	}
	else
	{
		unk_0xC63520BF0B3FB162(1);
		unk_0x720260ACC9BD334E(0);
		unk_0x4101DC5C065D2EB5(1);
		func_2(0);
		Global_15926 = 0;
	}
}

void func_2(bool bParam0)//Position - 0x5A0
{
	if ((Global_8C41 == 9 || Global_8C41 == 10) || Global_8C41 == 5)
	{
		Global_195BD = bParam0;
		if (bParam0)
		{
		}
	}
	else
	{
		if (bParam0)
		{
		}
		Global_195BD = 0;
	}
}

void func_3(bool bParam0)//Position - 0x5E6
{
	if (bParam0)
	{
		func_8();
		if (Global_389D.f_1 == 10 || Global_389D.f_1 == 9)
		{
			unk_0xF0059F27F7BB6680(&Global_93C, 16);
		}
		Global_389D.f_1 = 1;
		if (func_7(0))
		{
			func_4(0);
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

void func_4(int iParam0)//Position - 0x649
{
	if (Global_3943)
	{
		func_6(0, 0);
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
	if (!func_5())
	{
		Global_389D.f_1 = 3;
	}
}

int func_5()//Position - 0x6B9
{
	if (Global_389D.f_1 == 1 || Global_389D.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_6(bool bParam0, bool bParam1)//Position - 0x6E0
{
	if (bParam0)
	{
		if (func_7(0))
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

int func_7(int iParam0)//Position - 0x754
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

void func_8()//Position - 0x7AE
{
	if (Global_389D.f_1 == 9 || Global_389D.f_1 == 10)
	{
		Global_3DED = 0;
		Global_3DE9 = 1;
	}
}

void func_9()//Position - 0x7D7
{
	func_19();
	func_12(0, 1);
	func_10(0, 1);
}

void func_10(int iParam0, int iParam1)//Position - 0x7EF
{
	if (iParam0 == 1)
	{
		func_12(0, 0);
		unk_0x9216004FAC08D1DC("DeathFailOut", 0, 0);
		unk_0xF0059F27F7BB6680(&iLocal_48, 1);
		func_11(1, 2, 0);
		unk_0xEBFF48776C732268(2);
	}
	else
	{
		if (unk_0xFA30DFD0084E92FE(iLocal_48, 1) || iParam1)
		{
			unk_0x1A058EB0D1ACEC78("DeathFailOut");
			func_11(0, 2, 1);
			unk_0xEBFF48776C732268(0);
		}
		unk_0x7CB6FD92BE491AD9(&iLocal_48, 1);
	}
}

void func_11(int iParam0, int iParam1, int iParam2)//Position - 0x84E
{
	if (iParam0 == 1)
	{
		unk_0xF0059F27F7BB6680(&iLocal_48, 2);
		if (!unk_0x7AF0088ABFA713B6())
		{
			if (iParam1 == 1)
			{
				unk_0x2991B7F8ABC4BB0C(0.2f);
			}
			else
			{
				unk_0x2991B7F8ABC4BB0C(0.075f);
			}
		}
	}
	else
	{
		if (unk_0xFA30DFD0084E92FE(iLocal_48, 2) || iParam2)
		{
			if (!unk_0x7AF0088ABFA713B6())
			{
				unk_0x2991B7F8ABC4BB0C(1f);
			}
		}
		unk_0x7CB6FD92BE491AD9(&iLocal_48, 2);
	}
}

void func_12(int iParam0, int iParam1)//Position - 0x8AF
{
	char* sVar0;
	
	switch (func_13())
	{
		case 0:
			sVar0 = "DeathFailMichaelIn";
			break;
		
		case 1:
			sVar0 = "DeathFailFranklinIn";
			break;
		
		case 2:
			sVar0 = "DeathFailTrevorIn";
			break;
	}
	if (iParam0 == 1)
	{
		if (!unk_0xFA30DFD0084E92FE(iLocal_48, 0) || iParam1)
		{
			unk_0x9216004FAC08D1DC(sVar0, 0, 0);
			unk_0xF0059F27F7BB6680(&iLocal_48, 0);
			func_11(1, 1, 0);
			unk_0xEBFF48776C732268(1);
		}
	}
	else
	{
		if (unk_0xFA30DFD0084E92FE(iLocal_48, 0) || iParam1)
		{
			unk_0x1A058EB0D1ACEC78(sVar0);
			func_11(0, 1, 1);
			unk_0xEBFF48776C732268(0);
		}
		unk_0x7CB6FD92BE491AD9(&iLocal_48, 0);
	}
}

int func_13()//Position - 0x94C
{
	func_14();
	return Global_19B04.f_932.f_21B.f_10CD;
}

void func_14()//Position - 0x965
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_18(Global_19B04.f_932.f_21B.f_10CD) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_17(unk_0xBC25C936A095B5BA());
			if (func_16(iVar0) && (!func_15(14) || Global_196EB))
			{
				if (Global_19B04.f_932.f_21B.f_10CD != iVar0 && func_16(Global_19B04.f_932.f_21B.f_10CD))
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

bool func_15(int iParam0)//Position - 0xA62
{
	return Global_8C41 == iParam0;
}

bool func_16(int iParam0)//Position - 0xA70
{
	return iParam0 < 3;
}

int func_17(int iParam0)//Position - 0xA7C
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_18(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_18(int iParam0)//Position - 0xAB9
{
	if (func_16(iParam0))
	{
		return Global_19B04.f_6D75[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_19()//Position - 0xAE3
{
	iLocal_48 = 0;
	iLocal_49 = 0;
	func_20(0, 1, 1, 0, 0);
	func_3(1);
}

void func_20(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)//Position - 0xAFF
{
	if (bParam0)
	{
		unk_0x0D2E9062E966BE4F(unk_0xB5CEFD608600A09F());
		unk_0x8D554ED10E00EEE3(unk_0xB5CEFD608600A09F(), 1);
		unk_0xDE255B32C6B37E90(unk_0xB5CEFD608600A09F(), 1);
		func_28(1);
		unk_0x32FF237D69EB5489();
		unk_0x3169E2C5E6A096BC();
		if (Global_389D.f_1 > 3)
		{
			if (unk_0x58E7DDFF8D17A82A())
			{
				unk_0x1E08809A5041F85B(false);
			}
			if (!func_5())
			{
				Global_389D.f_1 = 3;
			}
			Global_3DB8 = 5;
		}
		func_27(1, iParam3, iParam2, 0);
		Global_DAA5 = 1;
		Global_10ABB = 1;
		Global_11540 = 1;
	}
	else
	{
		func_28(0);
		unk_0xCB50D125C355ED9C();
		Global_DAA5 = 0;
		if (bParam1)
		{
			unk_0x7FF4F08CAB3344B1();
		}
		unk_0x8D554ED10E00EEE3(unk_0xB5CEFD608600A09F(), 0);
		unk_0xDE255B32C6B37E90(unk_0xB5CEFD608600A09F(), 0);
		func_27(0, iParam3, iParam2, 0);
		if (unk_0x7AF0088ABFA713B6())
		{
			if ((((!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && !func_25(unk_0xB5CEFD608600A09F())) && !func_22(unk_0xB5CEFD608600A09F(), 0)) && !func_21()) && !bParam4)
			{
				unk_0x1E5C2A1EAB944289(unk_0xBC25C936A095B5BA(), 0);
			}
		}
		else if ((!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && !func_25(unk_0xB5CEFD608600A09F())) && !bParam4)
		{
			unk_0x1E5C2A1EAB944289(unk_0xBC25C936A095B5BA(), 0);
		}
		Global_11540 = 0;
	}
}

bool func_21()//Position - 0xC28
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_27.f_12, 14);
}

bool func_22(int iParam0, int iParam1)//Position - 0xC45
{
	bool bVar0;
	
	if (iParam0 == unk_0xB5CEFD608600A09F())
	{
		bVar0 = func_23(-1, 0) == 8;
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

int func_23(int iParam0, bool bParam1)//Position - 0xC90
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_24();
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

int func_24()//Position - 0xCD1
{
	return Global_1407E0;
}

int func_25(int iParam0)//Position - 0xCDD
{
	if (func_22(iParam0, 0))
	{
		return 1;
	}
	if (func_26())
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

bool func_26()//Position - 0xD1F
{
	return unk_0xFA30DFD0084E92FE(Global_240006, 3);
}

int func_27(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0xD30
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

void func_28(int iParam0)//Position - 0xD63
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

int func_29(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6)//Position - 0xD86
{
	switch (*uParam0)
	{
		case 0:
			*uParam0 = 1;
			unk_0xD6423910AAD8A379("DEATH_SCENE");
			unk_0xC4BA30B532FE260F(-1, "ScreenFlash", "WastedSounds", 1);
			func_57(&(uParam0->f_1));
			func_19();
			func_56(uParam1, (0.15f * 0.075f), 0.5f);
			unk_0xC4248B71D9B26306(true);
			break;
		
		case 1:
			if (func_54() || unk_0x17FAADF9916EF741())
			{
				*uParam0 = 2;
			}
			if (!func_53(uParam0->f_4, 4))
			{
				if (unk_0x284F2ACE6839D3C0("OFFMISSION_WASTED", 0, -1))
				{
					unk_0xC4BA30B532FE260F(-1, "Bed", "WastedSounds", 1);
					func_51(&(uParam0->f_4), 4);
				}
			}
			if (IntToFloat(SYSTEM::TIMERA()) > (1500f * 0.2f))
			{
				if (!func_53(uParam0->f_4, 2))
				{
					unk_0xC4BA30B532FE260F(-1, "TextHit", "WastedSounds", 1);
					func_51(&(uParam0->f_4), 2);
				}
				func_30(iParam2, uParam1, sParam3, sParam4, iParam5, ((iParam6 - 4 & iParam6) - 2 & iParam6) | 16, 7, 1, 1097859072, 0);
			}
			break;
		
		case 2:
			if (func_30(iParam2, uParam1, sParam3, sParam4, iParam5, (((iParam6 - 8 & iParam6) - 4 & iParam6) - 2 & iParam6), 7, 1, 1097859072, 1))
			{
				func_12(0, 1);
				func_10(0, 1);
				func_19();
				if (*iParam5)
				{
					unk_0xE44AD04338101C64(1);
				}
				else if (!uParam0->f_5)
				{
					func_2(0);
				}
				unk_0xC4248B71D9B26306(false);
				unk_0x720260ACC9BD334E(0);
				*uParam0 = 3;
			}
			break;
		
		case 3:
			if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
			{
				unk_0xC63520BF0B3FB162(1);
				func_12(0, 1);
				func_10(0, 1);
				unk_0xC1300D0F3A74E20B("DEATH_SCENE");
				unk_0xC4248B71D9B26306(false);
				return 1;
			}
			break;
		
		case 4:
			unk_0xC4248B71D9B26306(false);
			return 1;
			break;
	}
	return 0;
}

int func_30(var uParam0, var uParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, bool bParam7, float fParam8, bool bParam9)//Position - 0xF3E
{
	switch (*uParam1)
	{
		case 0:
			if (!unk_0x17FAADF9916EF741() || unk_0x422F9EDE839E6ABB())
			{
				unk_0x7A41D32A383895D8(2500);
				unk_0x2423B13D9CFAD1DD();
			}
			if (bParam9)
			{
				unk_0xC4248B71D9B26306(true);
			}
			unk_0x2991B7F8ABC4BB0C(0.2f);
			if (func_50(iParam5, 4))
			{
				if (unk_0x284F2ACE6839D3C0("generic_failed", 0, -1))
				{
					*uParam1 = 1;
				}
			}
			else
			{
				*uParam1 = 1;
			}
			break;
		
		case 1:
			unk_0x29CD142125FE177B(*uParam0, "SHOW_CENTERED_MP_MESSAGE_LARGE");
			unk_0x57016C44F10111F0("STRING");
			unk_0x449F0674640D94C0(6);
			unk_0xC9C304D0AABE1335(sParam2);
			unk_0x64989E60CF560CA1();
			func_49(sParam3);
			unk_0x1E1FB49121565EB6(100);
			unk_0x5E5DBD0A6623969E(true);
			unk_0xC27A95D32A8160C0();
			if (func_50(iParam5, 32))
			{
				if (!uParam1->f_88)
				{
					unk_0x29CD142125FE177B(*uParam0, "TRANSITION_UP");
					unk_0xD44E04EBBDC4CE88(uParam1->f_86);
					unk_0xF9FBC2F3F73D94C9();
					uParam1->f_88 = 1;
				}
			}
			if (!func_50(iParam5, 1))
			{
				unk_0xE93D261B305E994A(0);
			}
			func_48(&(uParam1->f_A), 0, 1, 1, 1);
			func_47(&(uParam1->f_A), "IB_RETRY", 2, 201, 1, 1, 0);
			func_47(&(uParam1->f_A), "FE_HLP16", 2, 202, 1, 1, 0);
			if (func_50(iParam5, 4))
			{
				unk_0xC4BA30B532FE260F(-1, "ScreenFlash", "MissionFailedSounds", 1);
			}
			if (func_50(iParam5, 8))
			{
				switch (func_13())
				{
					case 0:
						unk_0x9216004FAC08D1DC("MinigameEndMichael", 500, 0);
						break;
					
					case 1:
						unk_0x9216004FAC08D1DC("MinigameEndFranklin", 500, 0);
						break;
					
					case 2:
						unk_0x9216004FAC08D1DC("MinigameEndTrevor", 500, 0);
						break;
					}
			}
			if (!func_46(&(uParam1->f_1)))
			{
				func_45(&(uParam1->f_1));
			}
			if (func_50(iParam5, 2))
			{
				if (!func_46(&(uParam1->f_4)))
				{
					func_45(&(uParam1->f_4));
				}
			}
			*uParam1 = 2;
			break;
		
		case 2:
			unk_0x37CCF3DE21C7FD23();
			if (func_50(iParam5, 32))
			{
				if (!uParam1->f_88)
				{
					unk_0x29CD142125FE177B(*uParam0, "TRANSITION_UP");
					unk_0xD44E04EBBDC4CE88(uParam1->f_86);
					unk_0xF9FBC2F3F73D94C9();
					uParam1->f_88 = 1;
				}
			}
			unk_0x996AC9A66B2A5A3F(iParam6);
			func_43(uParam0, 0, 0);
			if (!func_50(iParam5, 16) && (func_41(&(uParam1->f_1)) >= uParam1->f_87 || unk_0x17FAADF9916EF741()))
			{
				func_35(&(uParam1->f_A), 1128792064, iParam6, bParam7, 1, 1065353216);
				unk_0x08009E53F6E7E15C();
				if (unk_0x093484B35A948BFC(2, 201))
				{
					uParam1->f_8A = 1;
					unk_0xC4BA30B532FE260F(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_50(iParam5, 1))
					{
						unk_0xB2F93D9024A0F798(0);
					}
					func_34(&(uParam1->f_A));
					*uParam1 = 3;
					return 0;
				}
				else if (unk_0x093484B35A948BFC(2, 202))
				{
					uParam1->f_8A = 0;
					unk_0xC4BA30B532FE260F(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_50(iParam5, 1))
					{
						unk_0xB2F93D9024A0F798(0);
					}
					func_34(&(uParam1->f_A));
					*uParam1 = 3;
					return 0;
				}
			}
			if (func_50(iParam5, 2))
			{
				if (func_41(&(uParam1->f_4)) >= fParam8)
				{
					uParam1->f_8A = 0;
					unk_0xC4BA30B532FE260F(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_50(iParam5, 1))
					{
						unk_0xB2F93D9024A0F798(0);
					}
					func_34(&(uParam1->f_A));
					*uParam1 = 3;
					return 0;
				}
			}
			break;
		
		case 3:
			func_43(uParam0, 0, 0);
			unk_0x2991B7F8ABC4BB0C(1f);
			if (uParam1->f_8A || !((unk_0x3362CDE8460ED38B("stunt_plane_races", unk_0x1377080E9B0BD993()) || unk_0x3362CDE8460ED38B("pilot_school", unk_0x1377080E9B0BD993())) || (unk_0x3362CDE8460ED38B("bj", unk_0x1377080E9B0BD993()) && unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))))
			{
				unk_0x829FA4611BD56B44(2500);
			}
			if (func_50(iParam5, 64) && uParam1->f_8A)
			{
				unk_0x7A41D32A383895D8(500);
			}
			func_31(&(uParam1->f_4));
			if (bParam9)
			{
				unk_0xC4248B71D9B26306(false);
			}
			*uParam1 = 4;
			break;
		
		case 4:
			if (func_41(&(uParam1->f_4)) <= 0.1f)
			{
				func_43(uParam0, 0, 0);
			}
			else
			{
				*uParam4 = uParam1->f_8A;
				return 1;
			}
			break;
	}
	return 0;
}

void func_31(int iParam0)//Position - 0x131E
{
	func_32(iParam0, 0f);
}

void func_32(int iParam0, float fParam1)//Position - 0x132D
{
	iParam0->f_1 = (func_33(unk_0xFA30DFD0084E92FE(*iParam0, 4)) - fParam1);
	unk_0xF0059F27F7BB6680(iParam0, 1);
	unk_0x7CB6FD92BE491AD9(iParam0, 2);
	iParam0->f_2 = 0f;
}

float func_33(bool bParam0)//Position - 0x135B
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

void func_34(var uParam0)//Position - 0x13B3
{
	if (*uParam0 != 0)
	{
		unk_0xB0B0FE33F4F22679(uParam0);
		*uParam0 = 0;
	}
	uParam0->f_1 = 0;
	uParam0->f_7B = 0;
}

void func_35(var uParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)//Position - 0x13D6
{
	int iVar0;
	int iVar1;
	bool bVar2;
	char* sVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	
	if (((unk_0x422F9EDE839E6ABB() || unk_0x26641E1BFD792DBC()) || unk_0x17FAADF9916EF741()) || unk_0xF6023EB13558345B())
	{
		if (!bParam3)
		{
			return;
		}
	}
	if (!func_40(uParam0))
	{
		return;
	}
	unk_0x37CCF3DE21C7FD23();
	unk_0x996AC9A66B2A5A3F(iParam2);
	if (!func_50(uParam0->f_1, 256) || (func_50(uParam0->f_1, 8192) && unk_0x8A0D8839261BAEEF(2)))
	{
		unk_0x29CD142125FE177B(*uParam0, "SET_CLEAR_SPACE");
		unk_0xD44E04EBBDC4CE88(fParam1);
		unk_0xF9FBC2F3F73D94C9();
		unk_0x29CD142125FE177B(*uParam0, "SET_MAX_WIDTH");
		unk_0xD44E04EBBDC4CE88(fParam5);
		unk_0xF9FBC2F3F73D94C9();
		unk_0x29CD142125FE177B(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0xF9FBC2F3F73D94C9();
		if (unk_0x8ACB0C3FACC09467())
		{
			unk_0x29CD142125FE177B(*uParam0, "TOGGLE_MOUSE_BUTTONS");
			unk_0x5E5DBD0A6623969E(func_50(uParam0->f_1, 4096));
			unk_0xF9FBC2F3F73D94C9();
		}
		iVar5 = 0;
		iVar6 = 0;
		while (iVar6 < uParam0->f_7B)
		{
			switch (uParam0->f_2[iVar6 /*15*/].f_2)
			{
				case 0:
					bVar4 = true;
					break;
				
				case 1:
					bVar4 = unk_0x50465D2C022B9E04(2);
					break;
				
				case 2:
					bVar4 = !unk_0x50465D2C022B9E04(2);
					break;
				
				default:
					bVar4 = false;
					break;
			}
			if (bVar4)
			{
				if (unk_0x29CD142125FE177B(*uParam0, "SET_DATA_SLOT"))
				{
					unk_0x1E1FB49121565EB6(iVar5);
					iVar5++;
					iVar7 = 0;
					while (iVar7 < uParam0->f_2[iVar6 /*15*/].f_E)
					{
						iVar0 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/];
						iVar1 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/].f_1;
						bVar2 = unk_0xFA30DFD0084E92FE(uParam0->f_2[iVar6 /*15*/].f_D, iVar7);
						if (!unk_0xFA30DFD0084E92FE(uParam0->f_2[iVar6 /*15*/].f_C, iVar7))
						{
							sVar3 = unk_0xE57EAD1FEA2A6FAF(iVar0, iVar1, bVar2);
						}
						else
						{
							sVar3 = unk_0xC7CF72D26EA6A227(iVar0, iVar1, bVar2);
						}
						if (!unk_0xF1734B55490E9045(sVar3))
						{
							func_39(sVar3);
						}
						iVar7++;
					}
					if (!unk_0xF1734B55490E9045(uParam0->f_2[iVar6 /*15*/]))
					{
						func_49(uParam0->f_2[iVar6 /*15*/]);
					}
					if (unk_0x8ACB0C3FACC09467())
					{
						if (func_50(uParam0->f_1, 4096))
						{
							if (uParam0->f_2[iVar6 /*15*/].f_1)
							{
								unk_0x5E5DBD0A6623969E(true);
								unk_0x1E1FB49121565EB6(uParam0->f_2[iVar6 /*15*/].f_3[0 /*2*/].f_1);
							}
							else
							{
								unk_0x5E5DBD0A6623969E(false);
								unk_0x1E1FB49121565EB6(-1);
							}
						}
					}
					unk_0xF9FBC2F3F73D94C9();
				}
			}
			iVar6++;
		}
		fVar8 = func_38(bParam4, func_38(func_50(uParam0->f_1, 32), 1f, 0f), -1f);
		unk_0x29CD142125FE177B(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0xD44E04EBBDC4CE88(fVar8);
		unk_0xF9FBC2F3F73D94C9();
		unk_0x29CD142125FE177B(*uParam0, "SET_BACKGROUND_COLOUR");
		unk_0xD44E04EBBDC4CE88(0f);
		unk_0xD44E04EBBDC4CE88(0f);
		unk_0xD44E04EBBDC4CE88(0f);
		unk_0xD44E04EBBDC4CE88(80f);
		unk_0xF9FBC2F3F73D94C9();
		func_37(&(uParam0->f_1), 256);
		func_36(&(uParam0->f_1), 128);
	}
	unk_0x4B6031094354FED6(*uParam0, 255, 255, 255, 0, 0);
}

void func_36(var uParam0, int iParam1)//Position - 0x1696
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_37(var uParam0, int iParam1)//Position - 0x16AB
{
	*uParam0 = (*uParam0 || iParam1);
}

float func_38(bool bParam0, float fParam1, float fParam2)//Position - 0x16BC
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_39(char* sParam0)//Position - 0x16D3
{
	unk_0xCB30200B8055CA57(sParam0);
}

int func_40(var uParam0)//Position - 0x16E1
{
	if (*uParam0 != 0)
	{
		if (unk_0xA7F138B5B1AB2CF6(*uParam0))
		{
			func_37(&(uParam0->f_1), 1);
			return 1;
		}
	}
	return 0;
}

float func_41(var uParam0)//Position - 0x1708
{
	if (func_46(uParam0))
	{
		if (func_42(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_33(unk_0xFA30DFD0084E92FE(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

bool func_42(var uParam0)//Position - 0x1747
{
	return unk_0xFA30DFD0084E92FE(*uParam0, 2);
}

int func_43(var uParam0, bool bParam1, bool bParam2)//Position - 0x1757
{
	if (!func_46(&(uParam0->f_2)))
	{
		func_31(&(uParam0->f_2));
	}
	unk_0x4E0EC60D119222B1(14);
	if (!bParam2)
	{
		unk_0x4B6031094354FED6(*uParam0, 255, 255, 255, 255, 0);
	}
	else if (bParam2)
	{
		unk_0x4B6031094354FED6(*uParam0, 255, 255, 255, 255, 0);
	}
	if (bParam1)
	{
		if (unk_0x8FCEEB789599BD9B(2, 201))
		{
			return 0;
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_41(&(uParam0->f_2)) * 1000f) > SYSTEM::TO_FLOAT(uParam0->f_1)
	{
		func_44(&(uParam0->f_2));
		return 0;
	}
	return 1;
}

void func_44(var uParam0)//Position - 0x17E9
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_45(int iParam0)//Position - 0x17FF
{
	if (!func_46(iParam0))
	{
		func_31(iParam0);
	}
}

bool func_46(var uParam0)//Position - 0x1817
{
	return unk_0xFA30DFD0084E92FE(*uParam0, 1);
}

int func_47(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1827
{
	int iVar0;
	int iVar1;
	
	if (*uParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (iParam5 == 1)
	{
		iVar0 = 1;
	}
	iVar1 = uParam0->f_7B;
	if (iVar1 < 8)
	{
		uParam0->f_2[iVar1 /*15*/] = sParam1;
		uParam0->f_2[iVar1 /*15*/].f_1 = iVar0;
		uParam0->f_2[iVar1 /*15*/].f_2 = iParam6;
		uParam0->f_2[iVar1 /*15*/].f_C = 0;
		uParam0->f_2[iVar1 /*15*/].f_D = 0;
		uParam0->f_2[iVar1 /*15*/].f_E = 0;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/] = iParam2;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/].f_1 = iParam3;
		if (iParam4 == 1)
		{
			unk_0xF0059F27F7BB6680(&(uParam0->f_2[iVar1 /*15*/].f_D), 0);
		}
		uParam0->f_2[iVar1 /*15*/].f_E++;
		uParam0->f_7B++;
		return 1;
	}
	return 0;
}

void func_48(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x18F0
{
	if (*uParam0 == 0)
	{
		*uParam0 = unk_0x4B4A22319BB70CD6("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_7B = 0;
	if (bParam1)
	{
		func_37(&(uParam0->f_1), 32);
	}
	if (unk_0xA7F138B5B1AB2CF6(*uParam0))
	{
		func_37(&(uParam0->f_1), 1);
		if (bParam2)
		{
			unk_0xAD45B3B464AA7C2E(*uParam0, 1);
		}
	}
	if (unk_0x8ACB0C3FACC09467())
	{
		if (bParam3)
		{
			func_37(&(uParam0->f_1), 4096);
		}
	}
	if (bParam4)
	{
		func_37(&(uParam0->f_1), 8192);
	}
}

void func_49(char* sParam0)//Position - 0x196A
{
	unk_0x57016C44F10111F0(sParam0);
	unk_0x64989E60CF560CA1();
}

bool func_50(var uParam0, int iParam1)//Position - 0x197C
{
	return (uParam0 && iParam1) != 0;
}

void func_51(var uParam0, int iParam1)//Position - 0x198B
{
	func_52(uParam0, iParam1);
}

void func_52(var uParam0, var uParam1)//Position - 0x199B
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_53(var uParam0, int iParam1)//Position - 0x19AC
{
	return (uParam0 && iParam1) != 0;
}

int func_54()//Position - 0x19BB
{
	if (!unk_0xFA30DFD0084E92FE(iLocal_48, 0) && !unk_0xFA30DFD0084E92FE(iLocal_48, 1))
	{
		SYSTEM::SETTIMERA(0);
		func_12(1, 0);
	}
	if (!unk_0x866EAD7E27D8D0F8())
	{
		unk_0xEB233A3B7635D2AC();
	}
	unk_0xBBC4195AD74D153D(2, 199, 1);
	unk_0xBBC4195AD74D153D(0, 59, 1);
	unk_0xBBC4195AD74D153D(0, 60, 1);
	unk_0xBBC4195AD74D153D(0, 37, 1);
	unk_0xBBC4195AD74D153D(0, 25, 1);
	unk_0x9684558EA44C8D99();
	if (IntToFloat(SYSTEM::TIMERA()) > (1500f * 0.2f))
	{
		if (!unk_0xFA30DFD0084E92FE(iLocal_48, 1))
		{
			func_10(1, 0);
			SYSTEM::SETTIMERB(0);
		}
		else if (IntToFloat(SYSTEM::TIMERB()) > (1500f * 0.075f) || unk_0x17FAADF9916EF741())
		{
			if (!unk_0x17FAADF9916EF741())
			{
				if (!unk_0x422F9EDE839E6ABB())
				{
					unk_0x7A41D32A383895D8(1500);
				}
			}
			else if (iLocal_49 == 0)
			{
				iLocal_49 = unk_0x105601648511CC64() + 1000;
				if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
				{
					unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 0);
				}
				func_11(0, 2, 1);
				func_20(1, 1, 1, 0, 0);
				func_3(1);
				unk_0xD941904CB477C7EE(0);
				unk_0xD2EDBB43BBCA0E8B(0);
				unk_0x7456702622C62EA0(1);
				unk_0xEB233A3B7635D2AC();
				if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
				{
					unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 0);
				}
				func_12(0, 0);
				func_55(0);
			}
			else if (unk_0x105601648511CC64() < iLocal_49)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_55(int iParam0)//Position - 0x1B00
{
	int iVar0;
	
	iVar0 = 0;
	if (iVar0 == 0)
	{
		if (iParam0 == 1)
		{
			if (!unk_0xFA30DFD0084E92FE(iLocal_48, 3))
			{
				unk_0x121BBDEFA4F0C22B(1);
				unk_0xF0059F27F7BB6680(&iLocal_48, 3);
			}
		}
		else if (unk_0xFA30DFD0084E92FE(iLocal_48, 3))
		{
			unk_0x121BBDEFA4F0C22B(0);
			unk_0x7CB6FD92BE491AD9(&iLocal_48, 3);
		}
	}
}

void func_56(var uParam0, float fParam1, float fParam2)//Position - 0x1B47
{
	if (func_46(&(uParam0->f_1)))
	{
		func_44(&(uParam0->f_1));
	}
	if (func_46(&(uParam0->f_4)))
	{
		func_44(&(uParam0->f_4));
	}
	func_34(&(uParam0->f_A));
	uParam0->f_86 = fParam1;
	uParam0->f_87 = fParam2;
	uParam0->f_89 = 1;
	uParam0->f_88 = 0;
	*uParam0 = 0;
}

void func_57(int iParam0)//Position - 0x1B97
{
	if (!func_46(iParam0))
	{
		func_45(iParam0);
	}
	else
	{
		func_31(iParam0);
	}
}

void func_58(var uParam0, int iParam1)//Position - 0x1BB8
{
	*uParam0 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = iParam1;
	unk_0x284F2ACE6839D3C0("OFFMISSION_WASTED", 0, -1);
}

int func_59()//Position - 0x1BD9
{
	return unk_0x9934FEFB3B8C6DB8("MP_BIG_MESSAGE_FREEMODE");
}

void func_60()//Position - 0x1BE9
{
	if (!iLocal_80)
	{
		unk_0x155A8308CD79CCE9("COUNTRYSIDE_ALTRUIST_CULT_01", 0);
		Global_19B04.f_6186.f_5 = 1000;
		unk_0xB3078ECF4A478FBC(64);
		Global_19B04.f_5037.f_1D8 = 54;
		iLocal_259 = unk_0x9934FEFB3B8C6DB8("MIDSIZED_MESSAGE");
		func_95(1);
		while (!unk_0xA7F138B5B1AB2CF6(iLocal_259))
		{
			SYSTEM::WAIT(0);
		}
		unk_0x29CD142125FE177B(iLocal_259, "SHOW_SHARD_MIDSIZED_MESSAGE");
		func_49("CULT_PASS");
		unk_0xC27A95D32A8160C0();
		while (!func_94())
		{
			SYSTEM::WAIT(0);
		}
		func_93();
		SYSTEM::SETTIMERA(0);
		unk_0xC4BA30B532FE260F(-1, "PROPERTY_PURCHASE", "HUD_AWARDS", 1);
		iLocal_80 = 1;
	}
	unk_0x4B6031094354FED6(iLocal_259, 255, 255, 255, 255, 0);
	if (!iLocal_82)
	{
		if (SYSTEM::TIMERA() > 9500)
		{
			unk_0x29CD142125FE177B(iLocal_259, "SHARD_ANIM_OUT");
			unk_0x1E1FB49121565EB6(1);
			unk_0xD44E04EBBDC4CE88(0.33f);
			unk_0xF9FBC2F3F73D94C9();
			iLocal_82 = 1;
		}
	}
	if (SYSTEM::TIMERA() > 10000)
	{
		if (unk_0xA7F138B5B1AB2CF6(iLocal_259))
		{
			unk_0xB0B0FE33F4F22679(&iLocal_259);
			func_95(0);
		}
		while (unk_0xF0F2FC9DE291567F(func_92(unk_0xB5CEFD608600A09F()), vLocal_53, true) < 209f && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
		{
			SYSTEM::WAIT(0);
		}
		func_61(18);
		func_184();
	}
}

void func_61(int iParam0)//Position - 0x1D1D
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_90();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_89())
	{
		func_67(iParam0);
		unk_0x3FF92BBF0607A406(0, 0);
		Global_19AFB = unk_0x105601648511CC64();
		func_66(30000);
		StringCopy(&cVar0, func_65(Global_19AF9, 1), 64);
		if (func_64(Global_19AF9) > 0)
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
	func_63(&Global_62F8);
	Global_19AFA = 0;
	func_62(-1);
}

void func_62(int iParam0)//Position - 0x1DD2
{
	Global_19AF9 = iParam0;
}

void func_63(var uParam0)//Position - 0x1DE0
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

int func_64(int iParam0)//Position - 0x1E1D
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

char* func_65(int iParam0, bool bParam1)//Position - 0x1ECE
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

void func_66(int iParam0)//Position - 0x2117
{
	Global_8E68 = (unk_0x105601648511CC64() + iParam0);
}

void func_67(int iParam0)//Position - 0x2129
{
	func_68(iParam0, 0, func_88(iParam0));
}

void func_68(int iParam0, int iParam1, int iParam2)//Position - 0x213E
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_87();
	func_78(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_77(iParam0, &uVar0);
	Var1 = { func_69(&uVar0) };
}

struct<16> func_69(var uParam0)//Position - 0x216D
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_76(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_75(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_74(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_73(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_72(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_70(*uParam0), 64);
	return Var0;
}

int func_70(int iParam0)//Position - 0x223E
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_71(unk_0xFA30DFD0084E92FE(iParam0, 31), -1, 1)) + 2011;
}

int func_71(bool bParam0, int iParam1, int iParam2)//Position - 0x2263
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_72(var uParam0)//Position - 0x227A
{
	return uParam0 & 15;
}

int func_73(int iParam0)//Position - 0x2287
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_74(int iParam0)//Position - 0x2299
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_75(int iParam0)//Position - 0x22AC
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_76(int iParam0)//Position - 0x22BF
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

void func_77(int iParam0, var uParam1)//Position - 0x22D2
{
	Global_19B04.f_6186.f_2B[iParam0] = *uParam1;
}

void func_78(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x22EA
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_70(*uParam0);
	iVar1 = func_72(*uParam0);
	iVar2 = func_73(*uParam0);
	iVar3 = func_76(*uParam0);
	iVar4 = func_75(*uParam0);
	iVar5 = func_74(*uParam0);
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
	iVar6 = func_86(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_86(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_79(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_79(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x246C
{
	func_85(uParam0, iParam1);
	func_84(uParam0, iParam2);
	func_83(uParam0, iParam3);
	func_82(uParam0, iParam5);
	func_81(uParam0, iParam4);
	func_80(uParam0, iParam6);
}

void func_80(var uParam0, int iParam1)//Position - 0x24A4
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

void func_81(var uParam0, int iParam1)//Position - 0x252A
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_72(*uParam0);
	iVar1 = func_70(*uParam0);
	if (iParam1 < 1 || iParam1 > func_86(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_82(var uParam0, int iParam1)//Position - 0x257B
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_83(var uParam0, int iParam1)//Position - 0x25AE
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_84(var uParam0, int iParam1)//Position - 0x25E8
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_85(var uParam0, int iParam1)//Position - 0x2623
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_86(int iParam0, int iParam1)//Position - 0x265F
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

var func_87()//Position - 0x2701
{
	var uVar0;
	
	func_85(&uVar0, unk_0xF40D00CD7B81C0A8());
	func_84(&uVar0, unk_0x7E09057438B9D216());
	func_83(&uVar0, unk_0x6E06C0DB9B43570D());
	func_81(&uVar0, unk_0xBE14F159908E4EE5());
	func_82(&uVar0, unk_0xDD6A91E47ED4D0CF());
	func_80(&uVar0, unk_0x4EEB3860BFC44B78());
	return uVar0;
}

int func_88(int iParam0)//Position - 0x2747
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

int func_89()//Position - 0x28EA
{
	if ((Global_19AF9 == func_90() && unk_0x8520DF5301DD9811()) && Global_19AFA)
	{
		return 1;
	}
	return 0;
}

int func_90()//Position - 0x2915
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0x1377080E9B0BD993(), 64);
	uVar1 = func_91(Var0);
	return uVar1;
}

int func_91(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)//Position - 0x2932
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

Vector3 func_92(int iParam0)//Position - 0x2B0C
{
	return unk_0x541C2AEF053615BC(unk_0xA95CF30C72EB526E(iParam0), 0);
}

void func_93()//Position - 0x2B1F
{
	Global_63A8 = 0;
	Global_63A9 = 0;
	Global_63AB = 0;
	Global_63AC = 0;
	Global_63AD = 0;
}

int func_94()//Position - 0x2B3B
{
	return 1;
}

void func_95(int iParam0)//Position - 0x2B44
{
	Global_11646 = iParam0;
	Global_11647 = iParam0;
}

void func_96(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x2B58
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

int func_97(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x2BF3
{
	func_106(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_98(sParam2, iParam3, 0);
}

int func_98(char* sParam0, int iParam1, bool bParam2)//Position - 0x2C41
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
					func_105();
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
		if (func_104(8, -1))
		{
			return 0;
		}
		Global_3E04 = { Global_3DFE };
		func_103();
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
				func_102();
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
				if (func_101())
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
			if (func_5())
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
			func_100();
			Global_3DC2 = bParam2;
		}
		Global_3DBA = iParam1;
		StringCopy(&Global_3C3B, sParam0, 24);
		Global_394A = 0;
		func_99();
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
		func_105();
	}
	return 0;
}

void func_99()//Position - 0x2F0D
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

void func_100()//Position - 0x2F3F
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

int func_101()//Position - 0x2FD4
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

void func_102()//Position - 0x306D
{
	if (func_15(14))
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
		Global_389D = func_13();
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

void func_103()//Position - 0x310F
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

bool func_104(int iParam0, int iParam1)//Position - 0x3167
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

void func_105()//Position - 0x31A2
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

void func_106(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x31F9
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

int func_107()//Position - 0x324F
{
	if (Global_3DB8 != 0 || unk_0xE6711F601F11B66B())
	{
		return 1;
	}
	return 0;
}

void func_108()//Position - 0x3271
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	switch (iLocal_94)
	{
		case 0:
			unk_0x34DAC25A04E24704("THUNDER", 20f);
			if (!unk_0x102F1A3BD4B68933())
			{
				unk_0x04DD7A558FCF2C34("ac_ig_3_p3_b", 8);
			}
			unk_0xF243B7A14FCFD0F4(joaat("a_m_o_acult_02"));
			unk_0xF243B7A14FCFD0F4(joaat("a_m_y_acult_02"));
			unk_0xF243B7A14FCFD0F4(-2022916910);
			unk_0xF243B7A14FCFD0F4(-1322183878);
			unk_0xF243B7A14FCFD0F4(joaat("prop_box_wood05a"));
			unk_0xF243B7A14FCFD0F4(joaat("prop_security_case_01"));
			while ((((((!func_135() || !unk_0xD6513D668481290A(joaat("a_m_o_acult_02"))) || !unk_0xD6513D668481290A(joaat("a_m_y_acult_02"))) || !unk_0xD6513D668481290A(-2022916910)) || !unk_0xD6513D668481290A(-1322183878)) || !unk_0xD6513D668481290A(joaat("prop_box_wood05a"))) || !unk_0xD6513D668481290A(joaat("prop_security_case_01")))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_436 = func_128(unk_0xBC25C936A095B5BA(), joaat("weapon_assaultrifle"), 1, 0, 0, 0, 0, 0, 0);
			if (unk_0x724D816EA203A79E(iLocal_436))
			{
				unk_0x538BB037E00A3AD9(iLocal_436, "Trevors_weapon", 0, 0, 0);
			}
			unk_0x538BB037E00A3AD9(0, "Rifle_Mag1^1", 3, unk_0xE756C4AA1BCB8705(joaat("component_assaultrifle_clip_01")), 0);
			if (func_135() && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				unk_0x538BB037E00A3AD9(unk_0xBC25C936A095B5BA(), "TREVOR", 0, 0, 0);
				unk_0x538BB037E00A3AD9(iLocal_98[11], "Cult_Master", 2, joaat("a_m_o_acult_02"), 0);
				unk_0x538BB037E00A3AD9(iLocal_98[12], "Rear_Cult", 2, joaat("a_m_o_acult_02"), 0);
				unk_0x538BB037E00A3AD9(iLocal_98[13], "Left_Old_Cult", 2, joaat("a_m_o_acult_02"), 0);
				unk_0x538BB037E00A3AD9(iLocal_98[14], "Carbine_Cult", 2, joaat("a_m_y_acult_02"), 0);
				unk_0x538BB037E00A3AD9(iLocal_98[15], "Shotgun_Cult", 2, joaat("a_m_y_acult_02"), 0);
				unk_0x93B1CB6BD50812C7(0);
			}
			SYSTEM::WAIT(0);
			if (!bLocal_76 && Global_19B04.f_6186.f_5 != 1000)
			{
				func_127();
			}
			if (unk_0x724D816EA203A79E(iLocal_98[0]))
			{
				unk_0xF845620A03C7425B(&(iLocal_98[0]));
			}
			if (unk_0x724D816EA203A79E(iLocal_98[1]))
			{
				unk_0xF845620A03C7425B(&(iLocal_98[1]));
			}
			if (unk_0xEF0E25DA0CB6E8FF(iLocal_106))
			{
				unk_0x348665177DBFB93B(iLocal_106, false);
			}
			if (unk_0x724D816EA203A79E(iLocal_101))
			{
				unk_0xA35241BCE4C1A24B(&iLocal_101);
			}
			if (unk_0x724D816EA203A79E(iLocal_101))
			{
				unk_0xA35241BCE4C1A24B(&iLocal_101);
			}
			unk_0x062C9995BFD27B2A(false, 0, 3000, 1, 0, 0);
			if (unk_0x2DA8CA50A72528FB(iLocal_104))
			{
				unk_0x07B8ECB35A4ED3AC(&iLocal_104);
			}
			func_20(1, 1, 1, 0, 0);
			unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 0);
			unk_0x7456702622C62EA0(1);
			unk_0x59B038076F830627(0);
			unk_0x43F06392C4EF25E0(0);
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				unk_0x0FC2D36CE8F740E4(unk_0xBC25C936A095B5BA(), 1);
			}
			unk_0x6C5F5B5F6894CCE3(vLocal_53, 100f, 1, 0, 0, false);
			unk_0x1DAA351326EA3537(vLocal_53 - Vector(100f, 60f, 80f), vLocal_53 + Vector(100f, 60f, 80f), 0, 1, 1, 1);
			unk_0xDF53A66AEE1401AA(0f);
			unk_0xE85B33FB221A23CD(3, 0);
			unk_0xE85B33FB221A23CD(5, 0);
			iLocal_108 = unk_0x8B67EE903D03E264(-1173.509f, 4924.365f, 222.21f, 277.2293f, 2, 0, 2, 1);
			unk_0xF243B7A14FCFD0F4(joaat("a_m_o_acult_01"));
			while (!unk_0xD6513D668481290A(joaat("a_m_o_acult_01")))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_94 = 6;
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			break;
		
		case 6:
			if (unk_0x4B088956DA856645(0))
			{
				if (unk_0x3F3252765FE36DA8("CULT_MASTER", 0))
				{
					if (!unk_0x724D816EA203A79E(iLocal_98[11]))
					{
						iLocal_98[11] = unk_0x399F7937FFE4DEBF(unk_0x95E040A13E9940DC("CULT_MASTER", 0));
					}
				}
				if (unk_0x3F3252765FE36DA8("REAR_CULT", 0))
				{
					if (!unk_0x724D816EA203A79E(iLocal_98[12]))
					{
						iLocal_98[12] = unk_0x399F7937FFE4DEBF(unk_0x95E040A13E9940DC("REAR_CULT", 0));
					}
				}
				if (unk_0x3F3252765FE36DA8("LEFT_OLD_CULT", 0))
				{
					if (!unk_0x724D816EA203A79E(iLocal_98[13]))
					{
						iLocal_98[13] = unk_0x399F7937FFE4DEBF(unk_0x95E040A13E9940DC("LEFT_OLD_CULT", 0));
					}
				}
				if (unk_0x3F3252765FE36DA8("CARBINE_CULT", 0))
				{
					if (!unk_0x724D816EA203A79E(iLocal_98[14]))
					{
						iLocal_98[14] = unk_0x399F7937FFE4DEBF(unk_0x95E040A13E9940DC("CARBINE_CULT", 0));
					}
				}
				if (unk_0x3F3252765FE36DA8("SHOTGUN_CULT", 0))
				{
					if (!unk_0x724D816EA203A79E(iLocal_98[15]))
					{
						iLocal_98[15] = unk_0x399F7937FFE4DEBF(unk_0x95E040A13E9940DC("SHOTGUN_CULT", 0));
					}
				}
				if (unk_0x3F3252765FE36DA8("TREVOR", 0))
				{
					unk_0x0FC2D36CE8F740E4(unk_0xBC25C936A095B5BA(), 0);
					unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), -1173.531f, 4924.357f, 222.2101f, 1, 0, 0, 1);
					unk_0x019CE76D5286C95C(unk_0xBC25C936A095B5BA(), 188.9369f);
					unk_0x13EC634EB553E1CE(unk_0xBC25C936A095B5BA(), -1173.509f, 4924.365f, 222.21f, -1, 0, 0f, 1, 0, iLocal_108, 0);
					unk_0x2EB4D46478766D87(unk_0xBC25C936A095B5BA(), 1, 0);
				}
				if (unk_0x3F3252765FE36DA8("Trevors_weapon", 0))
				{
					unk_0xE0569554083892F4(iLocal_436, unk_0xBC25C936A095B5BA());
				}
				unk_0xF3F01A78937DC905(91.3878f);
				unk_0x2B9AEC08E469E384(4.4337f, 1065353216);
				func_20(0, 1, 1, 0, 0);
				unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
				unk_0x59B038076F830627(1);
				unk_0x43F06392C4EF25E0(1);
				vLocal_51[0 /*3*/] = { -1044.632f, 4918.149f, 211.3315f };
				fLocal_52[0] = 254.8275f;
				vLocal_51[1 /*3*/] = { -1054.92f, 4915.155f, 210.8241f };
				fLocal_52[1] = 270.2025f;
				vLocal_51[2 /*3*/] = { -1051.859f, 4903.902f, 209.6199f };
				fLocal_52[2] = 299.8404f;
				vLocal_51[3 /*3*/] = { -1068.246f, 4899.532f, 213.2755f };
				fLocal_52[3] = 298.4257f;
				vLocal_51[4 /*3*/] = { -1083.322f, 4899.532f, 213.2755f };
				fLocal_52[4] = 283.5311f;
				vLocal_51[5 /*3*/] = { -1084.058f, 4933.805f, 228.2246f };
				fLocal_52[5] = 87.5233f;
				vLocal_51[6 /*3*/] = { -1081.976f, 4937.339f, 232.3275f };
				fLocal_52[6] = 109.6546f;
				vLocal_51[7 /*3*/] = { -1092.075f, 4939.958f, 217.3385f };
				fLocal_52[7] = 210.2433f;
				vLocal_51[8 /*3*/] = { -1101.798f, 4930.33f, 217.3544f };
				fLocal_52[8] = 203.732f;
				vLocal_51[9 /*3*/] = { -1070.675f, 4869.301f, 220.2917f };
				fLocal_52[9] = 39.1109f;
				vLocal_51[10 /*3*/] = { -1115.703f, 4878.439f, 225.8085f };
				fLocal_52[10] = 25.8472f;
				unk_0xB2CB6EAA6B280A84("rghCult", &iLocal_270);
				iVar1 = 0;
				while (iVar1 < iLocal_98)
				{
					if (((iVar1 == 0 || iVar1 == 5) || iVar1 == 6) || iVar1 == 10)
					{
						iLocal_98[iVar1] = unk_0x01B3635C3E8EDD81(26, joaat("a_m_o_acult_01"), vLocal_51[iVar1 /*3*/], fLocal_52[iVar1], 1, true);
						unk_0x7D314AB19CA29C96(iLocal_98[iVar1], 0);
						unk_0x7A535CE1F001F3FE(iLocal_98[iVar1], joaat("weapon_assaultrifle"), -1, 1, 1);
						unk_0x54480313BB3E8DD0(iLocal_98[iVar1], 0);
						unk_0xE20EB9C9BC14ECEB(iLocal_98[iVar1], 2);
						unk_0x9C74359FED150B42(iLocal_98[iVar1], 50f, 20);
						unk_0xFC3C88E2313FA926(iLocal_98[iVar1], 5);
						unk_0x5AAB329BBC1053A1(iLocal_98[iVar1], 100f);
						unk_0x6CCBC1B22488DC0C(iLocal_98[iVar1], 100f);
						unk_0x65E471E4A2D56226(iLocal_98[iVar1], 150, 0);
						unk_0x479A4C6E23FBB038(iLocal_98[iVar1], unk_0x491B2241281A03B7(40, 60));
						unk_0xB8CBD998685C0685(iLocal_98[iVar1], unk_0xBC25C936A095B5BA(), 0, 16);
					}
					else if (iVar1 == 2)
					{
						iLocal_98[iVar1] = unk_0x01B3635C3E8EDD81(26, joaat("a_m_o_acult_02"), vLocal_51[iVar1 /*3*/], fLocal_52[iVar1], 1, true);
						unk_0x7D314AB19CA29C96(iLocal_98[iVar1], 0);
						unk_0x7A535CE1F001F3FE(iLocal_98[iVar1], joaat("weapon_sawnoffshotgun"), -1, 1, 1);
						unk_0x91629AC1E1F78419(iLocal_98[iVar1], 50, 1);
						unk_0x54480313BB3E8DD0(iLocal_98[iVar1], 2);
						unk_0xE20EB9C9BC14ECEB(iLocal_98[iVar1], 1);
						unk_0x9C74359FED150B42(iLocal_98[iVar1], 50f, 20);
						unk_0xFC3C88E2313FA926(iLocal_98[iVar1], 5);
						unk_0x5AAB329BBC1053A1(iLocal_98[iVar1], 100f);
						unk_0x6CCBC1B22488DC0C(iLocal_98[iVar1], 100f);
						unk_0x479A4C6E23FBB038(iLocal_98[iVar1], unk_0x491B2241281A03B7(40, 60));
						unk_0xB8CBD998685C0685(iLocal_98[iVar1], unk_0xBC25C936A095B5BA(), 0, 16);
					}
					else if (iVar1 > 10 && iVar1 < 20)
					{
						if (((((!unk_0x36CEFBE9B745A58D(iLocal_98[iVar1]) && !unk_0x36CEFBE9B745A58D(iLocal_98[11])) && !unk_0x36CEFBE9B745A58D(iLocal_98[12])) && !unk_0x36CEFBE9B745A58D(iLocal_98[13])) && !unk_0x36CEFBE9B745A58D(iLocal_98[14])) && !unk_0x36CEFBE9B745A58D(iLocal_98[15]))
						{
							unk_0x7A535CE1F001F3FE(iLocal_98[11], joaat("weapon_pistol"), -1, 1, 1);
							unk_0x7A535CE1F001F3FE(iLocal_98[12], joaat("weapon_assaultrifle"), -1, 1, 1);
							unk_0x7A535CE1F001F3FE(iLocal_98[13], joaat("weapon_assaultrifle"), -1, 1, 1);
							unk_0x7A535CE1F001F3FE(iLocal_98[14], joaat("weapon_carbinerifle"), -1, 1, 1);
							unk_0x7A535CE1F001F3FE(iLocal_98[15], joaat("weapon_pumpshotgun"), -1, 1, 1);
							unk_0x91629AC1E1F78419(iLocal_98[iVar1], 0, 1);
							unk_0x54480313BB3E8DD0(iLocal_98[iVar1], 3);
							unk_0xE20EB9C9BC14ECEB(iLocal_98[iVar1], 0);
							unk_0xFC3C88E2313FA926(iLocal_98[iVar1], 0);
							unk_0xDF55FBF0BCED278F(iLocal_98[iVar1], 1f, 1f);
							unk_0xC5A6DFE2B8987B17(&uLocal_107);
							unk_0x8744E2AAA4C44FDC(0, -1159.33f, 4924.412f, 221.6576f, unk_0xBC25C936A095B5BA(), 2f, 1, 0.5f, 4f, 1, 0, 0, -957453492, 20000);
							unk_0x57D65255D3D3B6A7(0, unk_0xBC25C936A095B5BA(), 6000, 0);
							unk_0x57D65255D3D3B6A7(0, unk_0xBC25C936A095B5BA(), 4500, 0);
							unk_0xB8CBD998685C0685(0, unk_0xBC25C936A095B5BA(), 0, 16);
							unk_0x535008C596714F9E(uLocal_107);
							unk_0xA8E6405305C0D7DF(iLocal_98[15], uLocal_107);
							unk_0x02DAF06EA4F08219(&uLocal_107);
							unk_0xC5A6DFE2B8987B17(&uLocal_107);
							unk_0x8744E2AAA4C44FDC(0, -1163.279f, 4932.933f, 222.541f, unk_0xBC25C936A095B5BA(), 1f, 1, 0.5f, 4f, 1, 0, 0, -957453492, 20000);
							unk_0x40DD085221F706D0(0, unk_0xBC25C936A095B5BA(), 5000, 0);
							unk_0x57D65255D3D3B6A7(0, unk_0xBC25C936A095B5BA(), 7500, 0);
							unk_0x57D65255D3D3B6A7(0, unk_0xBC25C936A095B5BA(), 4500, 0);
							unk_0xB8CBD998685C0685(0, unk_0xBC25C936A095B5BA(), 0, 16);
							unk_0x535008C596714F9E(uLocal_107);
							unk_0xA8E6405305C0D7DF(iLocal_98[14], uLocal_107);
							unk_0x02DAF06EA4F08219(&uLocal_107);
							unk_0xC5A6DFE2B8987B17(&uLocal_107);
							unk_0x57D65255D3D3B6A7(0, unk_0xBC25C936A095B5BA(), 2500, 0);
							unk_0x40DD085221F706D0(0, unk_0xBC25C936A095B5BA(), 5000, 0);
							unk_0x8744E2AAA4C44FDC(0, -1156.175f, 4926.073f, 221.3447f, unk_0xBC25C936A095B5BA(), 2f, 1, 0.5f, 4f, 1, 0, 0, -957453492, 20000);
							unk_0x57D65255D3D3B6A7(0, unk_0xBC25C936A095B5BA(), 6500, 0);
							unk_0x57D65255D3D3B6A7(0, unk_0xBC25C936A095B5BA(), 4500, 0);
							unk_0xB8CBD998685C0685(0, unk_0xBC25C936A095B5BA(), 0, 16);
							unk_0x535008C596714F9E(uLocal_107);
							unk_0xA8E6405305C0D7DF(iLocal_98[13], uLocal_107);
							unk_0x02DAF06EA4F08219(&uLocal_107);
							unk_0xC5A6DFE2B8987B17(&uLocal_107);
							unk_0x57D65255D3D3B6A7(0, unk_0xBC25C936A095B5BA(), 3000, 0);
							unk_0x8744E2AAA4C44FDC(0, -1157.962f, 4922.196f, 221.309f, unk_0xBC25C936A095B5BA(), 2f, 1, 0.5f, 4f, 1, 0, 0, -957453492, 20000);
							unk_0x57D65255D3D3B6A7(0, unk_0xBC25C936A095B5BA(), 5500, 0);
							unk_0x57D65255D3D3B6A7(0, unk_0xBC25C936A095B5BA(), 4500, 0);
							unk_0xB8CBD998685C0685(0, unk_0xBC25C936A095B5BA(), 0, 16);
							unk_0x535008C596714F9E(uLocal_107);
							unk_0xA8E6405305C0D7DF(iLocal_98[12], uLocal_107);
							unk_0x02DAF06EA4F08219(&uLocal_107);
							unk_0xC5A6DFE2B8987B17(&uLocal_107);
							unk_0x57D65255D3D3B6A7(0, unk_0xBC25C936A095B5BA(), 4500, 0);
							unk_0x40DD085221F706D0(0, unk_0xBC25C936A095B5BA(), 10000, 0);
							unk_0x8744E2AAA4C44FDC(0, -1161.475f, 4916.061f, 220.5658f, unk_0xBC25C936A095B5BA(), 2f, 1, 0.5f, 4f, 1, 0, 0, -957453492, 20000);
							unk_0x57D65255D3D3B6A7(0, unk_0xBC25C936A095B5BA(), 4500, 0);
							unk_0x57D65255D3D3B6A7(0, unk_0xBC25C936A095B5BA(), 4500, 0);
							unk_0xB8CBD998685C0685(0, unk_0xBC25C936A095B5BA(), 0, 16);
							unk_0x535008C596714F9E(uLocal_107);
							unk_0xA8E6405305C0D7DF(iLocal_98[11], uLocal_107);
							unk_0x02DAF06EA4F08219(&uLocal_107);
							unk_0x22321800954A532E(iLocal_98[iVar1], 1);
							unk_0x2E9860A2B72187F5(iLocal_98[iVar1], 156, 1);
						}
					}
					else
					{
						iLocal_98[iVar1] = unk_0x01B3635C3E8EDD81(26, joaat("a_m_o_acult_02"), vLocal_51[iVar1 /*3*/], fLocal_52[iVar1], 1, true);
						unk_0x7D314AB19CA29C96(iLocal_98[iVar1], 0);
						unk_0x7A535CE1F001F3FE(iLocal_98[iVar1], joaat("weapon_pistol"), -1, 1, 1);
						unk_0x91629AC1E1F78419(iLocal_98[iVar1], 50, 1);
						unk_0x54480313BB3E8DD0(iLocal_98[iVar1], 2);
						unk_0xE20EB9C9BC14ECEB(iLocal_98[iVar1], 0);
						unk_0x9C74359FED150B42(iLocal_98[iVar1], 50f, 20);
						unk_0x80F51E5792576467(iLocal_98[iVar1], 1);
						unk_0xFC3C88E2313FA926(iLocal_98[iVar1], 5);
						unk_0x5AAB329BBC1053A1(iLocal_98[iVar1], 100f);
						unk_0x6CCBC1B22488DC0C(iLocal_98[iVar1], 100f);
						unk_0x479A4C6E23FBB038(iLocal_98[iVar1], unk_0x491B2241281A03B7(40, 60));
						unk_0xB8CBD998685C0685(iLocal_98[iVar1], unk_0xBC25C936A095B5BA(), 0, 16);
					}
					unk_0x4106FAF8AA1D69D5(iLocal_98[iVar1], iLocal_270);
					unk_0x019CE76D5286C95C(iLocal_98[iVar1], func_126(unk_0x541C2AEF053615BC(iLocal_98[iVar1], 1), func_92(unk_0xB5CEFD608600A09F())));
					unk_0x2E35C4FA5F0ED22F(iLocal_98[iVar1], 1);
					unk_0xC8FD3EBBB90E8D7F(iLocal_98[iVar1], 42, true);
					uLocal_105[iVar1] = func_124(iLocal_98[iVar1], 1, 145);
					iVar1++;
				}
				func_96(&uLocal_271, 0, unk_0xBC25C936A095B5BA(), "TREVOR", 0, 1);
				func_96(&uLocal_271, 3, iLocal_98[11], "ACULTMaster", 0, 1);
				func_96(&uLocal_271, 4, 0, "ACULTGroup", 0, 1);
				unk_0xF0059F27F7BB6680(&iVar0, 1);
				unk_0xF0059F27F7BB6680(&iVar0, 3);
				unk_0xF0059F27F7BB6680(&iVar0, 4);
				if (!bLocal_76)
				{
					uLocal_102[0] = unk_0x37B86314BDCAA6F0(joaat("pickup_money_case"), -1074.165f, 4897.468f, 213.2754f, -72f, 0f, 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
					uLocal_102[1] = unk_0x37B86314BDCAA6F0(joaat("pickup_money_case"), -1094.671f, 4892.789f, 215.0707f, -72f, 0f, 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
					uLocal_102[2] = unk_0x37B86314BDCAA6F0(joaat("pickup_money_case"), -1113.95f, 4904.385f, 217.6001f, -72f, 0f, 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
					uLocal_102[3] = unk_0x37B86314BDCAA6F0(joaat("pickup_money_case"), -1145.273f, 4907.894f, 219.9734f, -72f, 0f, 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
				}
				uLocal_102[0] = uLocal_102[0];
				uLocal_102[1] = uLocal_102[1];
				uLocal_102[2] = uLocal_102[2];
				uLocal_102[3] = uLocal_102[3];
				iLocal_103[0] = unk_0xB6896943DA475493(-1322183878, -1158.69f, 4915.709f, 220.2644f, true, true, 0);
				iLocal_103[1] = unk_0xB6896943DA475493(-2022916910, -1156.246f, 4918.6f, 220.5432f, true, true, 0);
				iLocal_103[2] = unk_0xB6896943DA475493(-1322183878, -1145.802f, 4931.816f, 219.9683f, true, true, 0);
				iLocal_103[3] = unk_0xB6896943DA475493(-1322183878, -1133.369f, 4919.067f, 218.8385f, true, true, 0);
				iLocal_103[4] = unk_0xB6896943DA475493(joaat("prop_box_wood05a"), -1132.025f, 4921.483f, 218.8244f, true, true, 0);
				iLocal_103[5] = unk_0xB6896943DA475493(-2022916910, -1112.66f, 4929.268f, 217.1752f, true, true, 0);
				unk_0x784C605D172817C8(iLocal_103[0], 12.24288f, -0.014582f, 27.06056f, 2, 1);
				unk_0x784C605D172817C8(iLocal_103[1], 7.733739f, 9.432779f, -2.865618f, 2, 1);
				unk_0x784C605D172817C8(iLocal_103[2], 3.735082f, 4.551246f, 86.30917f, 2, 1);
				unk_0x784C605D172817C8(iLocal_103[3], 0.240341f, 1.095195f, 36.59031f, 2, 1);
				unk_0x784C605D172817C8(iLocal_103[4], 7.6772f, 1.232743f, 93.27483f, 2, 1);
				unk_0x784C605D172817C8(iLocal_103[5], 3.367802f, -5.14387f, 97.30567f, 2, 1);
				if (func_123() < 50)
				{
					unk_0x978D2CE8F368F394(unk_0xB5CEFD608600A09F(), 0.5f, 1);
				}
				if (func_122() != 18)
				{
					func_120(18);
				}
				if (!func_89())
				{
					func_109(0);
				}
				func_1(1);
				bLocal_76 = false;
				iLocal_50 = 4;
			}
			break;
	}
}

int func_109(int iParam0)//Position - 0x422C
{
	if (func_114())
	{
		Global_19AFA = 1;
		Global_19AF7 = unk_0x105601648511CC64();
		if (func_113(Global_19AF9))
		{
			func_110(0);
		}
		unk_0x3FF92BBF0607A406(1, "RE_TITLE");
		if (iParam0 && func_113(Global_19AF9))
		{
			unk_0x621CEDEDDD531386();
		}
		return 1;
	}
	return 0;
}

void func_110(int iParam0)//Position - 0x427F
{
	switch (iParam0)
	{
		case 0:
			if (Global_19B04.f_6186.f_2 < 3)
			{
				if (!unk_0x5107E30005FCFEA8())
				{
					func_111(func_112(iParam0), -1);
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
					func_111(func_112(iParam0), -1);
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
					func_111(func_112(iParam0), -1);
					Global_19B04.f_6186.f_4++;
					unk_0xF0059F27F7BB6680(&Global_19B00, 2);
				}
			}
			break;
	}
}

void func_111(char* sParam0, int iParam1)//Position - 0x4360
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 0, 1, iParam1);
}

char* func_112(int iParam0)//Position - 0x4377
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

int func_113(int iParam0)//Position - 0x43BB
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

int func_114()//Position - 0x43EA
{
	switch (func_115(&Global_62F8, 0, 5, 0, unk_0x8A55B15F4133C912()))
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

int func_115(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x4420
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
		if (func_119(0))
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
		if (!func_117(iParam2))
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
			func_116(uParam0, iParam4);
		}
	}
	return 2;
}

void func_116(var uParam0, int iParam1)//Position - 0x4557
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

bool func_117(int iParam0)//Position - 0x45A6
{
	return func_118(iParam0, Global_8C41);
}

int func_118(int iParam0, int iParam1)//Position - 0x45B7
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

int func_119(int iParam0)//Position - 0x4798
{
	if (Global_8C41 == 15)
	{
		return 0;
	}
	if (func_117(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_120(int iParam0)//Position - 0x47BA
{
	if (iParam0 == -1)
	{
		iParam0 = func_90();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_62(iParam0);
	unk_0x8A623F2A0D19557F(0);
	unk_0xCB0D7BF24DBB59C6(1);
	Global_19AF6 = 0;
	func_121();
}

void func_121()//Position - 0x47F0
{
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			unk_0x8510BC031C24B862(unk_0x6F79ECA8C83E4357(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)), 1);
		}
		unk_0xC8FD3EBBB90E8D7F(unk_0xBC25C936A095B5BA(), 32, false);
	}
}

int func_122()//Position - 0x482D
{
	return Global_19AF9;
}

int func_123()//Position - 0x4839
{
	var uVar0;
	
	switch (func_13())
	{
		case 0:
			unk_0x6CB99B97664C3727(joaat("sp0_special_ability"), &uVar0, -1);
			break;
		
		case 1:
			unk_0x6CB99B97664C3727(joaat("sp1_special_ability"), &uVar0, -1);
			break;
		
		case 2:
			unk_0x6CB99B97664C3727(joaat("sp2_special_ability"), &uVar0, -1);
			break;
	}
	return uVar0;
}

int func_124(int iParam0, bool bParam1, int iParam2)//Position - 0x488E
{
	int iVar0;
	
	iVar0 = func_125(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x2DA8CA50A72528FB(iVar0)) && unk_0x0F6F4C227FB5DD52(&(Global_19B04.f_6D75[iParam2 /*29*/].f_3)))
	{
		unk_0x436D0272182E484D(iVar0, &(Global_19B04.f_6D75[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_125(int iParam0, bool bParam1, bool bParam2)//Position - 0x48E0
{
	int iVar0;
	
	if (!unk_0x724D816EA203A79E(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x511FE22BCF5353CD(iParam0);
	if (unk_0xD27AC0E9B78CFDD7(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(iVar0, func_38(unk_0x7AF0088ABFA713B6(), 1f, 1f));
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
		unk_0x3F5F1772D71D5EC4(iVar0, func_38(unk_0x7AF0088ABFA713B6(), 0.7f, 0.7f));
		unk_0xF9C2945DB5BAB4BF(iVar0, bParam1);
	}
	else if (unk_0xB12D030810E8447D(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(iVar0, func_38(unk_0x7AF0088ABFA713B6(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_126(struct<2> Param0, float fParam1, struct<2> Param2, var uParam3)//Position - 0x4984
{
	return unk_0xFDC254CE02DB0919((Param2 - Param0), (Param2.f_1 - Param0.f_1));
}

void func_127()//Position - 0x499E
{
	Global_63A9 = 1;
}

int func_128(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x49AA
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	int iVar6;
	int iVar7;
	
	iVar0 = 0;
	iVar2 = iParam1;
	if (!unk_0x7B2E29350659BE8E(iParam0, iParam1, 0))
	{
		iVar0 = 1;
	}
	if (iVar2 == joaat("weapon_unarmed"))
	{
		return 0;
	}
	iVar3 = 0;
	if (iParam2 == 1)
	{
		if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
		{
			iVar3 = unk_0x46C0645571D5BB21(iParam0, iVar2);
		}
		if (iVar3 == -1)
		{
			iVar4 = unk_0x2EC80AB0ACD7EC6D(iVar2);
			if (iVar4 > 0)
			{
				iVar3 = iVar4;
			}
			else
			{
				unk_0xDBF94F25838DCE55(iParam0, iVar2, &iVar3);
			}
		}
	}
	vVar5 = { unk_0x541C2AEF053615BC(iParam0, 0) - Vector(10f, 0f, 0f) };
	if (bParam3)
	{
		vVar5 = { iParam4, iParam5, iParam6 };
	}
	while (func_132(iVar2, iVar6) != 0)
	{
		if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
		{
			if (unk_0x1D3364A4FCD401E3(iParam0, iVar2, func_132(iVar2, iVar6)))
			{
				if (func_131(func_132(iVar2, iVar6)))
				{
					iVar7 = unk_0xE756C4AA1BCB8705(func_132(iVar2, iVar6));
				}
			}
		}
		iVar6++;
	}
	iVar1 = unk_0x8DF8172E178D3B37(iVar2, iVar3, vVar5, iVar0, 1065353216, iVar7, iParam7, iParam8);
	while (func_132(iVar2, iVar6) != 0)
	{
		if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
		{
			if (unk_0x1D3364A4FCD401E3(iParam0, iVar2, func_132(iVar2, iVar6)))
			{
				unk_0x112064CBEF6B2384(iVar1, func_132(iVar2, iVar6));
				func_129(iVar1, func_132(iVar2, iVar6));
			}
		}
		iVar6++;
	}
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		if (unk_0x7B2E29350659BE8E(iParam0, iVar2, 0))
		{
			unk_0x57699A4990D540E5(iVar1, unk_0x5BA4FE244D010B3B(iParam0, iVar2));
		}
	}
	return iVar1;
}

void func_129(int iParam0, int iParam1)//Position - 0x4B1E
{
	int iVar0;
	
	iVar0 = func_130(iParam1);
	if (iVar0 != 0)
	{
		unk_0x112064CBEF6B2384(iParam0, iVar0);
	}
}

int func_130(int iParam0)//Position - 0x4B3C
{
	switch (iParam0)
	{
		case 1550611612:
			return -1258515792;
			break;
		
		case 368550800:
			return 438243936;
			break;
		
		case -1769069349:
			return -455079056;
			break;
		
		case 24902297:
			return 740920107;
			break;
		
		case -228041614:
			return -541616347;
			break;
		
		case -584961562:
			return 1809261196;
			break;
		
		case -1153175946:
			return -1646538868;
			break;
		
		case 1301287696:
			return -1290164948;
			break;
		
		case 1597093459:
			return -964465134;
			break;
		
		case 1769871776:
			return 1135718771;
			break;
		
		case -1827882671:
			return 1253942266;
			break;
		
		case 259780317:
			return -403805974;
			break;
		
		case -1973342474:
			return 691432737;
			break;
		
		case 1996130345:
			return 987648331;
			break;
		
		case -1455657812:
			return -431680535;
			break;
		
		case -1668263084:
			return -847582310;
			break;
		
		case 1308243489:
			return -92592218;
			break;
		
		case 1122574335:
			return -494548326;
			break;
		
		case 1420313469:
			return 730876697;
			break;
		
		case 109848390:
			return 583159708;
			break;
		
		case 593945703:
			return -1928503603;
			break;
		
		case 1142457062:
			return 520557834;
			break;
	}
	return 0;
}

int func_131(int iParam0)//Position - 0x4CC2
{
	if ((((((((((((((((((((((((((((((((iParam0 == joaat("component_pistol_varmod_luxe") || iParam0 == joaat("component_combatpistol_varmod_lowrider")) || iParam0 == joaat("component_appistol_varmod_luxe")) || iParam0 == joaat("component_microsmg_varmod_luxe")) || iParam0 == joaat("component_smg_varmod_luxe")) || iParam0 == joaat("component_assaultrifle_varmod_luxe")) || iParam0 == joaat("component_carbinerifle_varmod_luxe")) || iParam0 == joaat("component_advancedrifle_varmod_luxe")) || iParam0 == joaat("component_mg_varmod_lowrider")) || iParam0 == joaat("component_combatmg_varmod_lowrider")) || iParam0 == joaat("component_pumpshotgun_varmod_lowrider")) || iParam0 == joaat("component_sniperrifle_varmod_luxe")) || iParam0 == joaat("component_assaultsmg_varmod_lowrider")) || iParam0 == joaat("component_pistol50_varmod_luxe")) || iParam0 == joaat("component_sawnoffshotgun_varmod_luxe")) || iParam0 == joaat("component_bullpuprifle_varmod_low")) || iParam0 == joaat("component_snspistol_varmod_lowrider")) || iParam0 == joaat("component_specialcarbine_varmod_lowrider")) || iParam0 == joaat("component_sawnoffshotgun_varmod_luxe")) || iParam0 == joaat("component_knuckle_varmod_pimp")) || iParam0 == joaat("component_knuckle_varmod_ballas")) || iParam0 == joaat("component_knuckle_varmod_dollar")) || iParam0 == joaat("component_knuckle_varmod_diamond")) || iParam0 == joaat("component_knuckle_varmod_hate")) || iParam0 == joaat("component_knuckle_varmod_love")) || iParam0 == joaat("component_knuckle_varmod_player")) || iParam0 == joaat("component_knuckle_varmod_king")) || iParam0 == joaat("component_knuckle_varmod_vagos")) || iParam0 == joaat("component_switchblade_varmod_var1")) || iParam0 == joaat("component_switchblade_varmod_var2")) || iParam0 == joaat("component_revolver_varmod_boss")) || iParam0 == joaat("component_revolver_varmod_goon")) || iParam0 == 1623028892)
	{
		return 1;
	}
	return 0;
}

int func_132(int iParam0, int iParam1)//Position - 0x4E9A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	struct<4> Var5;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_pistol_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_pistol_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_pi_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_pistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_combatpistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_appistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_appistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_appistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_microsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_microsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_microsmg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_smg_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 5:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 8:
					iVar0 = joaat("component_smg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_assaultrifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_assaultrifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_assaultrifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 8:
					iVar0 = joaat("component_assaultrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_carbinerifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_carbinerifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_carbinerifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 7:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 8:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 9:
					iVar0 = joaat("component_carbinerifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_advancedrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_advancedrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_advancedrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_mg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_mg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_mg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_combatmg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_combatmg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_combatmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_sr_supp");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_pumpshotgun_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultshotgun_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultshotgun_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sniperrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_sniperrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_heavysniper_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_max");
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small");
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minigun_clip_01");
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_assaultsmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol50_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol50_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol50_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpdw_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpdw_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_combatpdw_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sawnoffshotgun_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_bullpuprifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_bullpuprifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_bullpuprifle_varmod_low");
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_snspistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_snspistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_snspistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_specialcarbine_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_specialcarbine_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_specialcarbine_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 7:
					iVar0 = joaat("component_specialcarbine_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_knuckle_varmod_pimp");
					break;
				
				case 1:
					iVar0 = joaat("component_knuckle_varmod_ballas");
					break;
				
				case 2:
					iVar0 = joaat("component_knuckle_varmod_dollar");
					break;
				
				case 3:
					iVar0 = joaat("component_knuckle_varmod_diamond");
					break;
				
				case 4:
					iVar0 = joaat("component_knuckle_varmod_hate");
					break;
				
				case 5:
					iVar0 = joaat("component_knuckle_varmod_love");
					break;
				
				case 6:
					iVar0 = joaat("component_knuckle_varmod_player");
					break;
				
				case 7:
					iVar0 = joaat("component_knuckle_varmod_king");
					break;
				
				case 8:
					iVar0 = joaat("component_knuckle_varmod_vagos");
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_machinepistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_machinepistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_machinepistol_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_switchblade_varmod_var1");
					break;
				
				case 1:
					iVar0 = joaat("component_switchblade_varmod_var2");
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_revolver_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_revolver_varmod_boss");
					break;
				
				case 2:
					iVar0 = joaat("component_revolver_varmod_goon");
					break;
			}
			break;
		
		case -1121678507:
			switch (iParam1)
			{
				case 0:
					iVar0 = -2067221805;
					break;
				
				case 1:
					iVar0 = -1820405577;
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_134(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < unk_0x24C19AF1AF00F6A0(iVar1))
					{
						if (unk_0x9278F82C9078D16B(iVar1, iVar2, &Var5))
						{
							if (!func_133(Var5.f_3))
							{
								if (iVar3 == iParam1)
								{
									return Var5.f_3;
								}
								iVar3++;
							}
						}
						iVar2++;
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_133(int iParam0)//Position - 0x5A0B
{
	switch (iParam0)
	{
		case -1258515792:
		case 438243936:
		case -455079056:
		case 740920107:
		case -541616347:
		case 1809261196:
		case -1646538868:
		case -1290164948:
		case -964465134:
		case 1135718771:
		case 1253942266:
		case -403805974:
		case 691432737:
		case 987648331:
		case -431680535:
		case -847582310:
		case -92592218:
		case -494548326:
		case 730876697:
		case 583159708:
		case -1928503603:
		case 520557834:
			return 1;
			break;
	}
	return 0;
}

int func_134(int iParam0, var uParam1)//Position - 0x5AA6
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x8E3F7DC568AC987B();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0x6740839132C4BD08(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

bool func_135()//Position - 0x5AE1
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

int func_136(int iParam0, int iParam1)//Position - 0x5B04
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_137(iParam0, iParam1);
}

int func_137(int iParam0, int iParam1)//Position - 0x5B1F
{
	if (func_15(14) && !func_148(iParam0))
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
	if (func_147(&Global_411EB6))
	{
		if (func_145(&Global_411EB6, iParam0))
		{
			return 0;
		}
		if (func_138(&Global_411EB6, iParam0))
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

int func_138(var uParam0, int iParam1)//Position - 0x5BBC
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x6D5CBCB6411EDE89(iParam1))
	{
		return 0;
	}
	if (func_15(14) && !func_148(iParam1))
	{
		return 0;
	}
	if (func_145(uParam0, iParam1))
	{
		return 0;
	}
	if (func_144(uParam0) < 0f)
	{
		func_143(uParam0, 0);
	}
	func_141(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_139(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_139(var uParam0, int iParam1)//Position - 0x5C6D
{
	int iVar0;
	
	if (unk_0x6D5CBCB6411EDE89(iParam1))
	{
		return 0;
	}
	if (func_15(14) && !func_148(iParam1))
	{
		return 0;
	}
	if (func_145(uParam0, iParam1))
	{
		return 0;
	}
	if (func_144(uParam0) < 0f)
	{
		func_143(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_140(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_140(var uParam0, int iParam1)//Position - 0x5CE8
{
	return (*uParam0)[iParam1] == 78;
}

void func_141(var uParam0)//Position - 0x5CF9
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_142(uParam0, iVar0);
		iVar0++;
	}
	func_143(uParam0, (Global_411EB5 - 0.5f));
}

void func_142(var uParam0, int iParam1)//Position - 0x5D2D
{
	(*uParam0)[iParam1] = 78;
}

void func_143(var uParam0, float fParam1)//Position - 0x5D3D
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

float func_144(var uParam0)//Position - 0x5D5A
{
	return uParam0->f_50;
}

bool func_145(var uParam0, int iParam1)//Position - 0x5D66
{
	return func_146(uParam0, iParam1) != -1;
}

int func_146(var uParam0, int iParam1)//Position - 0x5D78
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

bool func_147(var uParam0)//Position - 0x5DA5
{
	return uParam0->f_4F == 1;
}

int func_148(int iParam0)//Position - 0x5DB3
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

void func_149()//Position - 0x5E03
{
	if (fLocal_87 > 0f)
	{
		fLocal_87 = (fLocal_87 - (0.6f / (1f / unk_0x11F9F9006143871A())));
	}
	else
	{
		fLocal_87 = 0f;
	}
	if (fLocal_87 >= 0f)
	{
		unk_0xC0D8311F0A9723A0(Global_88D4[10 /*31*/], fLocal_87, 0, 1);
		unk_0xF72F6BB050622804(Global_88D4[10 /*31*/], 4, 0, 1);
	}
	if (fLocal_86 < 0f)
	{
		fLocal_86 = (fLocal_86 + (0.6f / (1f / unk_0x11F9F9006143871A())));
	}
	else
	{
		fLocal_86 = 0f;
	}
	if (fLocal_86 <= 0f)
	{
		unk_0xC0D8311F0A9723A0(Global_88D4[9 /*31*/], fLocal_86, 0, 1);
		unk_0xF72F6BB050622804(Global_88D4[9 /*31*/], 4, 0, 1);
	}
}

void func_150()//Position - 0x5E8F
{
	if (fLocal_87 < 1f)
	{
		fLocal_87 = (fLocal_87 + (0.6f / (1f / unk_0x11F9F9006143871A())));
	}
	else
	{
		fLocal_87 = 1f;
	}
	if (fLocal_87 <= 1f)
	{
		unk_0xC0D8311F0A9723A0(Global_88D4[10 /*31*/], fLocal_87, 0, 1);
		unk_0xF72F6BB050622804(Global_88D4[10 /*31*/], 4, 0, 1);
	}
	if (fLocal_86 > -1f)
	{
		fLocal_86 = (fLocal_86 - (0.6f / (1f / unk_0x11F9F9006143871A())));
	}
	else
	{
		fLocal_86 = -1f;
	}
	if (fLocal_86 >= -1f)
	{
		unk_0xC0D8311F0A9723A0(Global_88D4[9 /*31*/], fLocal_86, 0, 1);
		unk_0xF72F6BB050622804(Global_88D4[9 /*31*/], 4, 0, 1);
	}
}

void func_151()//Position - 0x5F1B
{
	switch (iLocal_93)
	{
		case 0:
			unk_0xF243B7A14FCFD0F4(joaat("a_m_o_acult_02"));
			unk_0xF243B7A14FCFD0F4(joaat("prop_anim_cash_pile_02"));
			unk_0x522053D86D6E1C7A("random@altruist_cult");
			unk_0x6FED2D1AA2EBF334("AC_DELIVERED");
			unk_0x10DE9785302A9E9F(joaat("weapon_assaultrifle"), 31, 0);
			if ((((unk_0xD6513D668481290A(joaat("a_m_o_acult_02")) && unk_0xD6513D668481290A(joaat("prop_anim_cash_pile_02"))) && unk_0xF9E082857622D91E("random@altruist_cult")) && unk_0x6FED2D1AA2EBF334("AC_DELIVERED")) && unk_0x696DA708CCD839AD(joaat("weapon_assaultrifle")))
			{
				if (Global_19B04.f_6186.f_5 < 2)
				{
					if (Global_19B04.f_6186.f_5 == 0)
					{
						sLocal_269 = "ACULT_HI";
					}
					else
					{
						sLocal_269 = "ACULT_LEAVE5";
					}
					sLocal_263 = "cult_p5_guard";
					sLocal_265 = "cult_p5_trv";
					sLocal_266 = "cult_p5_victim_01";
					sLocal_267 = "cult_p5_victim_02";
					sLocal_268 = "cult_p5_cam";
					fLocal_89 = 0.75f;
					fLocal_88 = 0.999f;
				}
				else if (Global_19B04.f_6186.f_5 >= 2)
				{
					sLocal_269 = "ACULT_CAPT";
					sLocal_263 = "cult_p7_guard_01";
					sLocal_264 = "cult_p7_guard_02";
					sLocal_265 = "cult_p7_trv";
					sLocal_266 = "cult_p7_victim_01";
					sLocal_267 = "cult_p7_victim_02";
					sLocal_268 = "cult_p7_cam";
					fLocal_89 = 0.98f;
					fLocal_88 = 0.98f;
					unk_0xF243B7A14FCFD0F4(-2022916910);
					unk_0xF243B7A14FCFD0F4(-1322183878);
					unk_0xF243B7A14FCFD0F4(joaat("prop_box_wood05a"));
					unk_0xF243B7A14FCFD0F4(joaat("prop_security_case_01"));
					if (!unk_0x102F1A3BD4B68933())
					{
						unk_0x04DD7A558FCF2C34("ac_ig_3_p3_b", 8);
					}
				}
				if (unk_0x2DA8CA50A72528FB(iLocal_104))
				{
					unk_0x07B8ECB35A4ED3AC(&iLocal_104);
				}
				func_20(1, 1, 1, 0, 0);
				unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 0);
				unk_0x7456702622C62EA0(1);
				unk_0x59B038076F830627(0);
				unk_0x43F06392C4EF25E0(0);
				unk_0x0FC2D36CE8F740E4(unk_0xBC25C936A095B5BA(), 1);
				unk_0x8E25082A46F87892(unk_0xBC25C936A095B5BA(), joaat("weapon_unarmed"), 1);
				unk_0x3857DADBD6EC8A54("AC_DELIVERED");
				if (func_175())
				{
					func_174(0);
				}
				func_172();
				SYSTEM::WAIT(0);
				if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
				{
					iLocal_99 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
					if (unk_0xE59B7F5A03335350(iLocal_99, 0))
					{
						if (unk_0xB66CFDE6B830965A(iLocal_99))
						{
							iLocal_93++;
						}
					}
				}
				else
				{
					iLocal_99 = unk_0x3E12B546F3F2597A();
					if (!unk_0x36CEFBE9B745A58D(uLocal_97[0]) && !unk_0x36CEFBE9B745A58D(uLocal_97[1]))
					{
						unk_0xA4E856A8CD53B8DF(uLocal_97[0]);
						unk_0x57EB4CC8F1928A47(uLocal_97[0]);
						unk_0xA4E856A8CD53B8DF(uLocal_97[1]);
						unk_0x57EB4CC8F1928A47(uLocal_97[1]);
					}
					iLocal_93++;
				}
			}
			break;
		
		case 1:
			if (unk_0x724D816EA203A79E(iLocal_99))
			{
				if (!unk_0x5CAE759AE8219D20(iLocal_99))
				{
					unk_0x77815D3407C6700D(iLocal_99, 1, 0);
				}
				if (unk_0x4DBCE270B354E123(iLocal_99, vLocal_54, 13f, 13f, 13f, 0, 1, 0))
				{
					unk_0x641B19E156645A92(iLocal_99, -1028.415f, 4924.863f, 205.9386f, 0, 0, 0, 1);
					if (!unk_0x1D403DFADBC2DE3C(iLocal_99, 0))
					{
						unk_0x019CE76D5286C95C(iLocal_99, 149.8882f);
						unk_0xF0A40F19AAB79E88(iLocal_99, 1084227584);
					}
				}
			}
			unk_0x6C5F5B5F6894CCE3(vLocal_54, 12f, 1, 0, 0, false);
			unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), -1035.625f, 4915.152f, 205.5761f, 1, 0, 0, 1);
			unk_0x019CE76D5286C95C(unk_0xBC25C936A095B5BA(), 128.2065f);
			if (!unk_0x36CEFBE9B745A58D(uLocal_97[0]) && !unk_0x36CEFBE9B745A58D(uLocal_97[1]))
			{
				unk_0x641B19E156645A92(uLocal_97[0], Vector(205.5761f, 4915.152f, -1035.625f) - Vector(0f, 0f, 1f), 1, 0, 0, 1);
				unk_0x019CE76D5286C95C(uLocal_97[0], 128.2065f);
				unk_0x641B19E156645A92(uLocal_97[1], Vector(205.5761f, 4915.152f, -1035.625f) - Vector(0f, 1f, 0f), 1, 0, 0, 1);
				unk_0x019CE76D5286C95C(uLocal_97[1], 128.2065f);
			}
			iLocal_98[0] = unk_0x01B3635C3E8EDD81(26, joaat("a_m_o_acult_02"), -1042.56f, 4913.516f, 207.0988f, 282.4169f, 1, true);
			func_96(&uLocal_271, 1, iLocal_98[0], "ACULTMember1", 0, 1);
			if (Global_19B04.f_6186.f_5 >= 2)
			{
				iLocal_98[1] = unk_0x01B3635C3E8EDD81(26, joaat("a_m_o_acult_02"), -1041.757f, 4908.49f, 207.2777f, 305.3168f, 1, true);
				func_96(&uLocal_271, 2, iLocal_98[1], "ACULTMember2", 0, 1);
			}
			func_96(&uLocal_271, 0, unk_0xBC25C936A095B5BA(), "TREVOR", 0, 1);
			func_96(&uLocal_271, 3, 0, "ACULTMaster", 0, 1);
			func_96(&uLocal_271, 4, 0, "ACULTGroup", 0, 1);
			func_97(&uLocal_271, "ACULTAU", sLocal_269, 4, 0, 0, 0);
			unk_0x2E35C4FA5F0ED22F(iLocal_98[0], 1);
			iLocal_101 = unk_0x8DF8172E178D3B37(joaat("weapon_assaultrifle"), -1, unk_0x541C2AEF053615BC(iLocal_98[0], 1), 1, 1065353216, 0, 0, 1);
			unk_0x5DBE04849460E608(iLocal_101, iLocal_98[0], unk_0xFA18E720A39243D0(iLocal_98[0], 60309), 0.12f, 0.028f, -0.003f, -82.208f, -7.06f, -8.038f, 0, 0, 0, 0, 2, 1);
			if (Global_19B04.f_6186.f_5 < 2)
			{
				iLocal_100 = unk_0xB6896943DA475493(joaat("prop_anim_cash_pile_02"), vLocal_53, true, true, 0);
				unk_0x5DBE04849460E608(iLocal_100, unk_0xBC25C936A095B5BA(), unk_0xFA18E720A39243D0(unk_0xBC25C936A095B5BA(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
			}
			else if (Global_19B04.f_6186.f_5 >= 2)
			{
				unk_0x7A535CE1F001F3FE(iLocal_98[1], joaat("weapon_assaultrifle"), -1, 1, 1);
			}
			iLocal_106 = unk_0x578D5D08EC980893("DEFAULT_ANIMATED_CAMERA", 1);
			iLocal_92 = unk_0xD0D858E538FD01C3(-1044.636f, 4915.204f, 212.32f, 0f, 0f, 110.52f, 2);
			unk_0xB62398E536F695FC(unk_0xBC25C936A095B5BA(), iLocal_92, "random@altruist_cult", sLocal_265, 1000f, -2f, 4, 0, 1148846080, 0);
			unk_0xB62398E536F695FC(iLocal_98[0], iLocal_92, "random@altruist_cult", sLocal_263, 1000f, -2f, 4, 0, 1148846080, 0);
			if (Global_19B04.f_6186.f_5 >= 2)
			{
				unk_0xB62398E536F695FC(iLocal_98[1], iLocal_92, "random@altruist_cult", sLocal_264, 1000f, -2f, 4, 0, 1148846080, 0);
			}
			unk_0xA4DB448107C6D171(iLocal_106, iLocal_92, sLocal_268, "random@altruist_cult");
			unk_0x062C9995BFD27B2A(true, 0, 3000, 1, 0, 0);
			if (!unk_0x36CEFBE9B745A58D(uLocal_97[0]) && !unk_0x36CEFBE9B745A58D(uLocal_97[1]))
			{
				unk_0xB62398E536F695FC(uLocal_97[0], iLocal_92, "random@altruist_cult", sLocal_266, 1000f, -2f, 4, 0, 1148846080, 0);
				unk_0xB62398E536F695FC(uLocal_97[1], iLocal_92, "random@altruist_cult", sLocal_267, 1000f, -2f, 4, 0, 1148846080, 0);
			}
			iLocal_93++;
			break;
		
		case 2:
			if (!unk_0x36CEFBE9B745A58D(uLocal_97[0]))
			{
				if (unk_0xB6FD7D587FE0A1B4(uLocal_97[0]))
				{
					func_170(uLocal_97[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_170(uLocal_97[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (!unk_0x36CEFBE9B745A58D(uLocal_97[1]))
			{
				if (unk_0xB6FD7D587FE0A1B4(uLocal_97[1]))
				{
					func_170(uLocal_97[1], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_170(uLocal_97[1], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (unk_0x8FD30584EB38411B(iLocal_92) > fLocal_89)
			{
				iLocal_93++;
			}
			break;
		
		case 3:
			if (!unk_0x36CEFBE9B745A58D(uLocal_97[0]))
			{
				if (unk_0xB6FD7D587FE0A1B4(uLocal_97[0]))
				{
					func_170(uLocal_97[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_170(uLocal_97[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (!unk_0x36CEFBE9B745A58D(uLocal_97[1]))
			{
				if (unk_0xB6FD7D587FE0A1B4(uLocal_97[1]))
				{
					func_170(uLocal_97[1], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_170(uLocal_97[1], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (unk_0x8FD30584EB38411B(iLocal_92) > fLocal_88)
			{
				iLocal_93++;
			}
			break;
		
		case 4:
			if (Global_19B04.f_6186.f_5 < 2)
			{
				func_127();
				if (unk_0x724D816EA203A79E(iLocal_98[0]))
				{
					unk_0xF845620A03C7425B(&(iLocal_98[0]));
				}
				if (unk_0x724D816EA203A79E(iLocal_98[1]))
				{
					unk_0xF845620A03C7425B(&(iLocal_98[1]));
				}
				if (unk_0x724D816EA203A79E(iLocal_100))
				{
					unk_0xA35241BCE4C1A24B(&iLocal_100);
				}
				if (unk_0x724D816EA203A79E(iLocal_101))
				{
					unk_0xA35241BCE4C1A24B(&iLocal_101);
				}
				unk_0xA4E856A8CD53B8DF(unk_0xBC25C936A095B5BA());
				unk_0x9CB4DD3D88846081(0, 0, 3, 0);
				unk_0x348665177DBFB93B(iLocal_106, false);
				func_20(0, 1, 1, 0, 0);
				unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
				unk_0x59B038076F830627(1);
				unk_0x43F06392C4EF25E0(1);
				unk_0x0FC2D36CE8F740E4(unk_0xBC25C936A095B5BA(), 0);
				unk_0xF3F01A78937DC905(0f);
				func_152(func_13(), 1, 2000, 0, 0);
			}
			unk_0x3857DADBD6EC8A54("AC_DONE");
			Global_19B04.f_6186.f_5 += 2;
			iLocal_78 = 1;
			break;
	}
}

void func_152(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x674F
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
	func_153(Global_19B04.f_6D75[iParam0 /*29*/].f_11, 1, iParam1, iParam2, 0);
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

int func_153(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x6836
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_169();
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
					func_168(99, 1);
					func_167(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_167(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_167(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_165(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_161(5))
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
							func_167(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_167(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_167(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_161(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_167(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_167(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_167(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_167(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_167(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_167(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_167(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_167(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_167(joaat("sp2_money_spent_property"), iParam3);
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
									func_167(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_167(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_167(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_167(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_167(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_167(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_161(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_167(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_167(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_167(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_167(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_167(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_167(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_160(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_168(95, iParam3);
					break;
				
				case 1:
					func_168(97, iParam3);
					break;
				
				case 2:
					func_168(96, iParam3);
					break;
			}
			func_168(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_156(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_156(iVar1);
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
					func_167(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_167(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_167(joaat("sp2_total_cash_earned"), iParam3);
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
	func_155(iParam0);
	if (Global_8C41 == 15)
	{
		func_154(0);
	}
	return 1;
}

void func_154(bool bParam0)//Position - 0x6E35
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

void func_155(int iParam0)//Position - 0x70B7
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

void func_156(int iParam0)//Position - 0x7111
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_159(129, 0, -1, 1);
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
	else if (unk_0xFA30DFD0084E92FE(Global_19B04.f_5037.f_1D7, iParam0) || unk_0xFA30DFD0084E92FE(Global_200000[func_158() /*12171*/].f_1E08.f_A, iParam0))
	{
		bVar0 = true;
		unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_5037.f_1D7), iParam0);
		unk_0x7CB6FD92BE491AD9(&(Global_200000[func_158() /*12171*/].f_1E08.f_A), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x2E94302CFF011F2E("COUP_RED");
		unk_0xC9C304D0AABE1335(func_157(iParam0));
		unk_0x7BB0762D8C75A3C7(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_157(int iParam0)//Position - 0x71E8
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

int func_158()//Position - 0x7270
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_159(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x727D
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
		iParam2 = func_24();
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

void func_160(int iParam0)//Position - 0x7797
{
	func_168(93, iParam0);
	func_168(29, iParam0);
	func_168(30, iParam0);
}

bool func_161(int iParam0)//Position - 0x77B7
{
	if (iParam0 == 8)
	{
		return func_162(129, -1, -1);
	}
	if (!unk_0x7AF0088ABFA713B6())
	{
		return unk_0xFA30DFD0084E92FE(Global_19B04.f_5037.f_1D7, iParam0);
	}
	return unk_0xFA30DFD0084E92FE(Global_200000[func_158() /*12171*/].f_1E08.f_A, iParam0);
}

int func_162(int iParam0, int iParam1, int iParam2)//Position - 0x7805
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_24();
	}
	iVar1 = func_164(iParam0, iParam1);
	uVar2 = func_163(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xDAB376DC6F83D68C(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_163(int iParam0)//Position - 0x7842
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

int func_164(int iParam0, int iParam1)//Position - 0x7B2E
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_24();
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

int func_165(bool bParam0)//Position - 0x7DFB
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
		func_166(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_136(27, 1);
	return 1;
}

int func_166(int iParam0, int iParam1)//Position - 0x7EB2
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

void func_167(int iParam0, int iParam1)//Position - 0x7F03
{
	int iVar0;
	
	unk_0x6CB99B97664C3727(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x3A57956BCE003880(iParam0, iVar0, 1);
}

void func_168(int iParam0, int iParam1)//Position - 0x7F26
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

void func_169()//Position - 0x7F83
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

void func_170(var uParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x7FF8
{
	unk_0x7E80A36CD8BDF4D1(uParam0, sParam1, sParam2, func_171(iParam3), 0);
}

int func_171(int iParam0)//Position - 0x8012
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

void func_172()//Position - 0x8207
{
	Global_394A = 0;
	func_173();
}

void func_173()//Position - 0x8217
{
	unk_0x5C7DC611411E2CF9();
	Global_41AB = 0;
	if (unk_0xE6711F601F11B66B())
	{
		unk_0x1E08809A5041F85B(false);
		Global_3DB8 = 6;
	}
}

void func_174(int iParam0)//Position - 0x8238
{
	Global_41AB = iParam0;
}

int func_175()//Position - 0x8245
{
	if (Global_41AB == 1)
	{
		return 1;
	}
	return 0;
}

void func_176()//Position - 0x825C
{
	switch (iLocal_93)
	{
		case 0:
			unk_0xF243B7A14FCFD0F4(joaat("a_m_o_acult_02"));
			unk_0xF243B7A14FCFD0F4(joaat("prop_anim_cash_pile_02"));
			unk_0x522053D86D6E1C7A("random@altruist_cult");
			unk_0x6FED2D1AA2EBF334("AC_DELIVERED");
			unk_0x10DE9785302A9E9F(joaat("weapon_assaultrifle"), 31, 0);
			if ((((unk_0xD6513D668481290A(joaat("a_m_o_acult_02")) && unk_0xD6513D668481290A(joaat("prop_anim_cash_pile_02"))) && unk_0xF9E082857622D91E("random@altruist_cult")) && unk_0x6FED2D1AA2EBF334("AC_DELIVERED")) && unk_0x696DA708CCD839AD(joaat("weapon_assaultrifle")))
			{
				if (Global_19B04.f_6186.f_5 == 0)
				{
					sLocal_269 = "ACULT_HI";
					sLocal_263 = "cult_p2_guard";
					sLocal_265 = "cult_p2_trv";
					sLocal_266 = "cult_p2_victim";
					sLocal_268 = "cult_p2_cam";
					fLocal_89 = 0.8f;
					fLocal_88 = 0.968f;
				}
				else if (Global_19B04.f_6186.f_5 == 1)
				{
					sLocal_269 = "ACULT_LEAVE3";
					sLocal_263 = "cult_p4_guard";
					sLocal_265 = "cult_p4_trv";
					sLocal_266 = "cult_p4_victim";
					sLocal_268 = "cult_p4_cam";
					fLocal_89 = 0.77f;
					fLocal_88 = 0.999f;
				}
				else if (Global_19B04.f_6186.f_5 == 2)
				{
					sLocal_269 = "ACULT_LEAVE3";
					sLocal_263 = "cult_p4_guard";
					sLocal_265 = "cult_p4_trv";
					sLocal_266 = "cult_p4_victim";
					sLocal_268 = "cult_p4_cam";
					fLocal_89 = 0.77f;
					fLocal_88 = 0.999f;
				}
				else if (Global_19B04.f_6186.f_5 >= 3)
				{
					sLocal_269 = "ACULT_CAPT";
					sLocal_263 = "cult_p7_guard_01";
					sLocal_264 = "cult_p7_guard_02";
					sLocal_265 = "cult_p7_trv";
					sLocal_266 = "cult_p7_victim_01";
					sLocal_268 = "cult_p7_cam";
					fLocal_89 = 0.98f;
					fLocal_88 = 0.98f;
					unk_0xF243B7A14FCFD0F4(-2022916910);
					unk_0xF243B7A14FCFD0F4(-1322183878);
					unk_0xF243B7A14FCFD0F4(joaat("prop_box_wood05a"));
					unk_0xF243B7A14FCFD0F4(joaat("prop_security_case_01"));
					if (!unk_0x102F1A3BD4B68933())
					{
						unk_0x04DD7A558FCF2C34("ac_ig_3_p3_b", 8);
					}
				}
				if (unk_0x2DA8CA50A72528FB(iLocal_104))
				{
					unk_0x07B8ECB35A4ED3AC(&iLocal_104);
				}
				func_20(1, 1, 1, 0, 0);
				unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 0);
				unk_0x7456702622C62EA0(1);
				unk_0x59B038076F830627(0);
				unk_0x43F06392C4EF25E0(0);
				unk_0x0FC2D36CE8F740E4(unk_0xBC25C936A095B5BA(), 1);
				unk_0x8E25082A46F87892(unk_0xBC25C936A095B5BA(), joaat("weapon_unarmed"), 1);
				unk_0x3857DADBD6EC8A54("AC_DELIVERED");
				if (func_175())
				{
					func_174(0);
				}
				func_172();
				SYSTEM::WAIT(0);
				if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
				{
					iLocal_99 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
					if (unk_0xE59B7F5A03335350(iLocal_99, 0))
					{
						if (unk_0xB66CFDE6B830965A(iLocal_99))
						{
							iLocal_93++;
						}
					}
				}
				else
				{
					iLocal_99 = unk_0x3E12B546F3F2597A();
					if (!unk_0x36CEFBE9B745A58D(uLocal_97[0]))
					{
						unk_0xA4E856A8CD53B8DF(uLocal_97[0]);
						unk_0x57EB4CC8F1928A47(uLocal_97[0]);
					}
					iLocal_93++;
				}
			}
			break;
		
		case 1:
			if (unk_0x724D816EA203A79E(iLocal_99))
			{
				if (!unk_0x5CAE759AE8219D20(iLocal_99))
				{
					unk_0x77815D3407C6700D(iLocal_99, 1, 0);
				}
				if (unk_0x4DBCE270B354E123(iLocal_99, vLocal_54, 13f, 13f, 13f, 0, 1, 0))
				{
					unk_0x641B19E156645A92(iLocal_99, -1028.415f, 4924.863f, 205.9386f, 0, 0, 0, 1);
					if (!unk_0x1D403DFADBC2DE3C(iLocal_99, 0))
					{
						unk_0x019CE76D5286C95C(iLocal_99, 149.8882f);
						unk_0xF0A40F19AAB79E88(iLocal_99, 1084227584);
					}
				}
			}
			unk_0x6C5F5B5F6894CCE3(vLocal_54, 12f, 1, 0, 0, false);
			unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), -1035.625f, 4915.152f, 205.5761f, 1, 0, 0, 1);
			unk_0x019CE76D5286C95C(unk_0xBC25C936A095B5BA(), 128.2065f);
			if (!unk_0x36CEFBE9B745A58D(uLocal_97[0]))
			{
				unk_0x641B19E156645A92(uLocal_97[0], Vector(205.5761f, 4915.152f, -1035.625f) - Vector(0f, 0f, 1f), 1, 0, 0, 1);
				unk_0x019CE76D5286C95C(uLocal_97[0], 128.2065f);
			}
			iLocal_98[0] = unk_0x01B3635C3E8EDD81(26, joaat("a_m_o_acult_02"), -1042.56f, 4913.516f, 207.0988f, 282.4169f, 1, true);
			func_96(&uLocal_271, 1, iLocal_98[0], "ACULTMember1", 0, 1);
			if (Global_19B04.f_6186.f_5 >= 3)
			{
				iLocal_98[1] = unk_0x01B3635C3E8EDD81(26, joaat("a_m_o_acult_02"), -1041.757f, 4908.49f, 207.2777f, 305.3168f, 1, true);
				func_96(&uLocal_271, 2, iLocal_98[1], "ACULTMember2", 0, 1);
			}
			func_96(&uLocal_271, 0, unk_0xBC25C936A095B5BA(), "TREVOR", 0, 1);
			func_96(&uLocal_271, 3, 0, "ACULTMaster", 0, 1);
			func_96(&uLocal_271, 4, 0, "ACULTGroup", 0, 1);
			if (Global_19B04.f_6186.f_5 != 1 && Global_19B04.f_6186.f_5 != 2)
			{
				func_97(&uLocal_271, "ACULTAU", sLocal_269, 4, 0, 0, 0);
			}
			SYSTEM::SETTIMERB(0);
			unk_0x2E35C4FA5F0ED22F(iLocal_98[0], 1);
			iLocal_100 = unk_0xB6896943DA475493(joaat("prop_anim_cash_pile_02"), vLocal_53, true, true, 0);
			iLocal_101 = unk_0x8DF8172E178D3B37(joaat("weapon_assaultrifle"), -1, unk_0x541C2AEF053615BC(iLocal_98[0], 1), 1, 1065353216, 0, 0, 1);
			unk_0x5DBE04849460E608(iLocal_101, iLocal_98[0], unk_0xFA18E720A39243D0(iLocal_98[0], 60309), 0.12f, 0.028f, -0.003f, -82.208f, -7.06f, -8.038f, 0, 0, 0, 0, 2, 1);
			if (Global_19B04.f_6186.f_5 < 3)
			{
				if (Global_19B04.f_6186.f_5 == 0)
				{
					unk_0x5DBE04849460E608(iLocal_100, unk_0xBC25C936A095B5BA(), unk_0xFA18E720A39243D0(unk_0xBC25C936A095B5BA(), 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				}
				else
				{
					unk_0x5DBE04849460E608(iLocal_100, unk_0xBC25C936A095B5BA(), unk_0xFA18E720A39243D0(unk_0xBC25C936A095B5BA(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				}
			}
			else if (Global_19B04.f_6186.f_5 >= 3)
			{
				unk_0x7A535CE1F001F3FE(iLocal_98[1], joaat("weapon_assaultrifle"), -1, 1, 1);
			}
			iLocal_106 = unk_0x578D5D08EC980893("DEFAULT_ANIMATED_CAMERA", 1);
			iLocal_92 = unk_0xD0D858E538FD01C3(-1044.636f, 4915.204f, 212.32f, 0f, 0f, 110.52f, 2);
			unk_0xB62398E536F695FC(unk_0xBC25C936A095B5BA(), iLocal_92, "random@altruist_cult", sLocal_265, 1000f, -2f, 4, 0, 1148846080, 0);
			unk_0xB62398E536F695FC(iLocal_98[0], iLocal_92, "random@altruist_cult", sLocal_263, 1000f, -2f, 4, 0, 1148846080, 0);
			if (Global_19B04.f_6186.f_5 >= 3)
			{
				unk_0xB62398E536F695FC(iLocal_98[1], iLocal_92, "random@altruist_cult", sLocal_264, 1000f, -2f, 4, 0, 1148846080, 0);
			}
			unk_0xA4DB448107C6D171(iLocal_106, iLocal_92, sLocal_268, "random@altruist_cult");
			unk_0x062C9995BFD27B2A(true, 0, 3000, 1, 0, 0);
			if (!unk_0x36CEFBE9B745A58D(uLocal_97[0]))
			{
				unk_0xB62398E536F695FC(uLocal_97[0], iLocal_92, "random@altruist_cult", sLocal_266, 1000f, -2f, 4, 0, 1148846080, 0);
			}
			iLocal_93++;
			break;
		
		case 2:
			if (!unk_0x36CEFBE9B745A58D(uLocal_97[0]))
			{
				if (unk_0xB6FD7D587FE0A1B4(uLocal_97[0]))
				{
					func_170(uLocal_97[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_170(uLocal_97[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (SYSTEM::TIMERB() > 2000 && SYSTEM::TIMERB() < 2100)
			{
				if (Global_19B04.f_6186.f_5 == 1 || Global_19B04.f_6186.f_5 == 2)
				{
					if (!func_107())
					{
						func_97(&uLocal_271, "ACULTAU", sLocal_269, 4, 0, 0, 0);
					}
				}
			}
			if (unk_0x8FD30584EB38411B(iLocal_92) > fLocal_89)
			{
				iLocal_93++;
			}
			break;
		
		case 3:
			if (!unk_0x36CEFBE9B745A58D(uLocal_97[0]))
			{
				if (unk_0xB6FD7D587FE0A1B4(uLocal_97[0]))
				{
					func_170(uLocal_97[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_170(uLocal_97[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (Global_19B04.f_6186.f_5 == 1 || Global_19B04.f_6186.f_5 == 2)
			{
				if ((unk_0x8FD30584EB38411B(iLocal_92) > 0.9742857f && !iLocal_85) && unk_0x7FCE28BE45D0735E() == 4)
				{
					unk_0x9216004FAC08D1DC("CamPushInNeutral", 0, 0);
					unk_0xC4BA30B532FE260F(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
					iLocal_85 = 1;
				}
			}
			if (unk_0x8FD30584EB38411B(iLocal_92) > fLocal_88)
			{
				iLocal_93++;
			}
			break;
		
		case 4:
			if (Global_19B04.f_6186.f_5 < 3)
			{
				if (Global_19B04.f_6186.f_5 != 1 && Global_19B04.f_6186.f_5 != 2)
				{
					func_127();
					if (unk_0x724D816EA203A79E(iLocal_98[0]))
					{
						unk_0xF845620A03C7425B(&(iLocal_98[0]));
					}
					if (unk_0x724D816EA203A79E(iLocal_98[1]))
					{
						unk_0xF845620A03C7425B(&(iLocal_98[1]));
					}
				}
				else
				{
					SYSTEM::SETTIMERB(0);
					if (unk_0x724D816EA203A79E(iLocal_98[0]))
					{
						unk_0xDC078F87049ECECE(iLocal_98[0], false, 0);
					}
					if (unk_0x724D816EA203A79E(iLocal_98[1]))
					{
						unk_0xDC078F87049ECECE(iLocal_98[1], false, 0);
					}
					if (unk_0x724D816EA203A79E(uLocal_97[0]))
					{
						unk_0xDC078F87049ECECE(uLocal_97[0], false, 0);
					}
					iLocal_93++;
				}
				if (unk_0x724D816EA203A79E(iLocal_100))
				{
					unk_0xA35241BCE4C1A24B(&iLocal_100);
				}
				if (unk_0x724D816EA203A79E(iLocal_101))
				{
					unk_0xA35241BCE4C1A24B(&iLocal_101);
				}
				unk_0xA4E856A8CD53B8DF(unk_0xBC25C936A095B5BA());
				if (Global_19B04.f_6186.f_5 == 0)
				{
					unk_0x3E2B7D349B5735D3(unk_0xBC25C936A095B5BA(), -668482597, 0, 0, 0);
					unk_0x56EDA6006F1B166D(unk_0xB5CEFD608600A09F(), 1f, 750, 0f, 1, 0);
				}
				if (unk_0x3362CDE8460ED38B(sLocal_268, "cult_p4_cam"))
				{
					unk_0x062C9995BFD27B2A(false, 0, 3000, 1, 0, 0);
				}
				else
				{
					unk_0x9CB4DD3D88846081(0, 0, 3, 0);
				}
				unk_0x348665177DBFB93B(iLocal_106, false);
				func_20(0, 1, 1, 0, 0);
				unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
				unk_0x59B038076F830627(1);
				unk_0x43F06392C4EF25E0(1);
				unk_0x0FC2D36CE8F740E4(unk_0xBC25C936A095B5BA(), 0);
				unk_0xF3F01A78937DC905(0f);
				func_152(func_13(), 1, 1000, 0, 0);
			}
			if (Global_19B04.f_6186.f_5 != 1 && Global_19B04.f_6186.f_5 != 2)
			{
				unk_0x3857DADBD6EC8A54("AC_DONE");
				Global_19B04.f_6186.f_5++;
				iLocal_78 = 1;
			}
			break;
		
		case 5:
			if (!func_107() || SYSTEM::TIMERB() > 7000)
			{
				func_127();
				if (unk_0x724D816EA203A79E(iLocal_98[0]))
				{
					unk_0xF845620A03C7425B(&(iLocal_98[0]));
				}
				if (unk_0x724D816EA203A79E(iLocal_98[1]))
				{
					unk_0xF845620A03C7425B(&(iLocal_98[1]));
				}
				unk_0x3857DADBD6EC8A54("AC_DONE");
				Global_19B04.f_6186.f_5++;
				iLocal_78 = 1;
			}
			break;
	}
}

void func_177()//Position - 0x8C24
{
	if (func_179())
	{
		if (func_13() == 2)
		{
			if (unk_0xB3CF56CA25030EC5(func_178()))
			{
				unk_0xB8F54B762E8EC022(func_178(), &uLocal_90, &iLocal_91);
				if (iLocal_91 == 1)
				{
					uLocal_97[0] = unk_0x663C4CC16445B8F5(func_178(), 0);
					if (unk_0x4DBCE270B354E123(uLocal_97[0], vLocal_54, 5f, 5f, 5f, 0, 1, 0))
					{
						if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
						{
							if (!unk_0x1D403DFADBC2DE3C(unk_0x3E12B546F3F2597A(), 0))
							{
								unk_0x241D744C1CCBC526(unk_0x3E12B546F3F2597A(), 10.5f, 5, 0);
							}
						}
						SYSTEM::SETTIMERA(0);
						iLocal_50 = 1;
					}
				}
				else if (iLocal_91 == 2)
				{
					uLocal_97[0] = unk_0x663C4CC16445B8F5(func_178(), 0);
					uLocal_97[1] = unk_0x663C4CC16445B8F5(func_178(), 1);
					if (unk_0x4DBCE270B354E123(uLocal_97[0], vLocal_54, 5f, 5f, 5f, 0, 1, 0) && unk_0x4DBCE270B354E123(uLocal_97[1], vLocal_54, 5f, 5f, 5f, 0, 1, 0))
					{
						if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
						{
							if (!unk_0x1D403DFADBC2DE3C(unk_0x3E12B546F3F2597A(), 0))
							{
								unk_0x241D744C1CCBC526(unk_0x3E12B546F3F2597A(), 10.5f, 5, 0);
							}
						}
						SYSTEM::SETTIMERA(0);
						iLocal_50 = 1;
					}
				}
			}
		}
	}
}

var func_178()//Position - 0x8D2F
{
	return unk_0x705BBFE5A8ADE4A9(unk_0xFC1CAE18F3ECBF2D());
}

bool func_179()//Position - 0x8D3F
{
	return Global_63A8;
}

void func_180()//Position - 0x8D4A
{
	if (func_183())
	{
		if (iLocal_260 == 0)
		{
			iLocal_260 = unk_0x1DAA351326EA3537(vLocal_53 - Vector(100f, 60f, 80f), vLocal_53 + Vector(100f, 60f, 80f), 0, 1, 1, 1);
		}
		while (unk_0xF0F2FC9DE291567F(func_92(unk_0xB5CEFD608600A09F()), vLocal_53, true) < 209f)
		{
			SYSTEM::WAIT(0);
		}
	}
	if (func_13() == 0 || func_13() == 1)
	{
		if (unk_0xF9E3B31053F43360(2017343592, 1862763509) != 5)
		{
			if (func_182())
			{
				unk_0xA902E18EDF6FA0C8(5, 2017343592, 1862763509);
			}
			else if (func_181())
			{
				unk_0xA902E18EDF6FA0C8(5, 2017343592, 1862763509);
			}
		}
	}
	else if (func_13() == 2)
	{
		if (unk_0xF9E3B31053F43360(2017343592, 1862763509) != 5)
		{
			if (func_182())
			{
				if (unk_0x32E373675659FDB0(unk_0xBC25C936A095B5BA()) || (unk_0xABB2AFD7539464EA(unk_0xBC25C936A095B5BA()) && unk_0xE1C3A331B6951C3D(unk_0xB5CEFD608600A09F())))
				{
					unk_0xA902E18EDF6FA0C8(5, 2017343592, 1862763509);
				}
			}
			else if (func_181())
			{
				unk_0xA902E18EDF6FA0C8(5, 2017343592, 1862763509);
			}
			else if (unk_0xF9E3B31053F43360(2017343592, 1862763509) != 1)
			{
				unk_0xA902E18EDF6FA0C8(1, 2017343592, 1862763509);
			}
		}
	}
	if (func_182())
	{
		if (iLocal_83)
		{
			if (!unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 3))
			{
				unk_0x3857DADBD6EC8A54("AC_START");
			}
			unk_0xDF53A66AEE1401AA(0f);
			unk_0x155A8308CD79CCE9("COUNTRYSIDE_ALTRUIST_CULT_01", 1);
			if (unk_0x70CF24CEFB0F53B0(Global_88D4[9 /*31*/].f_2, 6f, Global_88D4[9 /*31*/].f_5, 0))
			{
				unk_0x702FD033579B62CE(Global_88D4[9 /*31*/].f_5, Global_88D4[9 /*31*/].f_2, 0, 0f, 0);
			}
			if (unk_0x70CF24CEFB0F53B0(Global_88D4[10 /*31*/].f_2, 6f, Global_88D4[10 /*31*/].f_5, 0))
			{
				unk_0x702FD033579B62CE(Global_88D4[10 /*31*/].f_5, Global_88D4[10 /*31*/].f_2, 0, 0f, 0);
			}
			bLocal_84 = true;
			iLocal_83 = 0;
		}
	}
	else if (!iLocal_83)
	{
		if (unk_0x179432B321CCFD03())
		{
			unk_0x3857DADBD6EC8A54("AC_END");
		}
		unk_0xDF53A66AEE1401AA(1f);
		unk_0x155A8308CD79CCE9("COUNTRYSIDE_ALTRUIST_CULT_01", 0);
		if (!bLocal_84)
		{
			func_149();
		}
		iLocal_83 = 1;
	}
}

int func_181()//Position - 0x8F7B
{
	if ((((((unk_0x596EC89128D2052F(vLocal_55, vLocal_56, fLocal_57, 1) || unk_0x596EC89128D2052F(vLocal_58, vLocal_59, fLocal_60, 1)) || unk_0x596EC89128D2052F(vLocal_61, vLocal_62, fLocal_63, 1)) || unk_0x596EC89128D2052F(vLocal_64, vLocal_65, fLocal_66, 1)) || unk_0x596EC89128D2052F(vLocal_67, vLocal_68, fLocal_69, 1)) || unk_0x596EC89128D2052F(vLocal_70, vLocal_71, fLocal_72, 1)) || unk_0x596EC89128D2052F(vLocal_73, vLocal_74, fLocal_75, 1))
	{
		return 1;
	}
	return 0;
}

int func_182()//Position - 0x9018
{
	if ((((((unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), vLocal_55, vLocal_56, fLocal_57, 0, 1, 0) || unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), vLocal_58, vLocal_59, fLocal_60, 0, 1, 0)) || unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), vLocal_61, vLocal_62, fLocal_63, 0, 1, 0)) || unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), vLocal_64, vLocal_65, fLocal_66, 0, 1, 0)) || unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), vLocal_67, vLocal_68, fLocal_69, 0, 1, 0)) || unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), vLocal_70, vLocal_71, fLocal_72, 0, 1, 0)) || unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), vLocal_73, vLocal_74, fLocal_75, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_183()//Position - 0x90DF
{
	if (Global_19B04.f_6186.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

void func_184()//Position - 0x90FB
{
	unk_0xA902E18EDF6FA0C8(255, 2017343592, 1862763509);
	if (Global_19B04.f_6186.f_5 >= iLocal_96 && Global_19B04.f_6186.f_5 != 1000)
	{
		if (bLocal_76)
		{
			func_1(1);
			func_9();
			func_3(0);
			iLocal_50 = 3;
		}
		else
		{
			func_185(&iLocal_109);
			Global_15925 = 0;
			Global_15926 = 0;
			Global_15927 = 0;
			func_12(0, 1);
			func_10(0, 1);
			func_2(0);
			unk_0x4101DC5C065D2EB5(1);
			unk_0x720260ACC9BD334E(0);
			unk_0xE44AD04338101C64(0);
			func_3(0);
			unk_0xDF53A66AEE1401AA(1f);
			unk_0xE85B33FB221A23CD(3, 1);
			unk_0xE85B33FB221A23CD(5, 1);
			unk_0x11E7662BFA0E7D15();
			iLocal_83 = 0;
			func_93();
			Global_19B04.f_6186.f_5 = (iLocal_96 - 1);
			unk_0x95E4B6F3ED223F5A();
		}
	}
	else
	{
		unk_0xB830DBD32591E1BC();
		func_185(&iLocal_109);
		Global_15925 = 0;
		Global_15926 = 0;
		Global_15927 = 0;
		func_12(0, 1);
		func_10(0, 1);
		func_2(0);
		unk_0x4101DC5C065D2EB5(1);
		unk_0x720260ACC9BD334E(0);
		unk_0xE44AD04338101C64(0);
		func_3(0);
		if (unk_0xA7F138B5B1AB2CF6(iLocal_259))
		{
			unk_0xB0B0FE33F4F22679(&iLocal_259);
			func_95(0);
		}
		unk_0xDF53A66AEE1401AA(1f);
		unk_0xE85B33FB221A23CD(3, 1);
		unk_0xE85B33FB221A23CD(5, 1);
		unk_0x11E7662BFA0E7D15();
		iLocal_83 = 0;
		unk_0x95E4B6F3ED223F5A();
	}
}

void func_185(var uParam0)//Position - 0x9227
{
	if (unk_0xA7F138B5B1AB2CF6(*uParam0))
	{
		unk_0xB0B0FE33F4F22679(uParam0);
		*uParam0 = 0;
	}
}

