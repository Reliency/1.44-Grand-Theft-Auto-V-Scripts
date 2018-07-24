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
	var uLocal_47 = -1;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 1000;
	var uLocal_55 = 1000;
	var uLocal_56 = 0;
	int iLocal_57[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
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
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	bool bLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	vector3 vLocal_77 = { 0f, 0f, 0f };
	var uLocal_78 = 0;
	int iLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	int iLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	bool bLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 1132396544;
	var uLocal_93 = 1132396544;
	var uLocal_94 = 1132396544;
	var uLocal_95 = 0;
	var uLocal_96 = -1082130432;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 8;
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
	var uLocal_156 = -1;
	var uLocal_157 = 1092616192;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	int iLocal_160 = 0;
	struct<21> Local_161 = { 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<10> Local_162[15];
	int iLocal_163 = 0;
	float fLocal_164 = 0f;
	struct<2> Local_165 = { 0, 16 } ;
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
	vector3 vLocal_230 = { 0f, 0f, 0f };
	vector3 vLocal_231 = { 0f, 0f, 0f };
	vector3 vLocal_232 = { 0f, 0f, 0f };
	vector3 vLocal_233 = { 0f, 0f, 0f };
	vector3 vLocal_234 = { 0f, 0f, 0f };
	vector3 vLocal_235 = { 0f, 0f, 0f };
	vector3 vLocal_236 = { 0f, 0f, 0f };
	vector3 vLocal_237 = { 0f, 0f, 0f };
	int iLocal_238 = 0;
	int iLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	int iLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	int iLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	bool bLocal_248 = 0;
	bool bLocal_249 = 0;
	int iLocal_250 = 0;
	int iLocal_251 = 0;
	bool bLocal_252 = 0;
	int iLocal_253 = 0;
	int iLocal_254 = 0;
	float fLocal_255 = 0f;
	float fLocal_256 = 0f;
	float fLocal_257 = 0f;
	var uLocal_258[4] = { 0, 0, 0, 0 };
	var uLocal_259[4] = { 0, 0, 0, 0 };
	struct<429> Local_260 = { 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_261 = 0;
	struct<27> Local_262 = { 3, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3 } ;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 3;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 3;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 5;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 3;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 3;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 1;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 4;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 4;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 4;
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
	var uLocal_330 = 1;
	var uLocal_331 = 2;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	vector3 vLocal_338[1] = {{ 0f, 0f, 0f } };
	int iLocal_339 = 0;
	var uLocal_340 = 0;
	vector3 vLocal_341 = { 0f, 0f, 0f };
	vector3 vLocal_342 = { 0f, 0f, 0f };
	int iLocal_343 = 0;
	bool bLocal_344 = 0;
	int iLocal_345 = 0;
	int iLocal_346 = 0;
	bool bLocal_347 = 0;
	struct<28> Local_348 = { -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 5;
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
	var uLocal_394 = 1097859072;
	var uLocal_395 = 1500;
	var uLocal_396 = 45;
	var uLocal_397 = 1103626240;
	var uLocal_398 = 5;
	int iLocal_399 = 0;
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
	iLocal_71 = unk_0xD736C0AC62BF73AD();
	iLocal_72 = unk_0x880E0FAC08C6FA65();
	vLocal_77 = { 500f, 500f, 500f };
	fLocal_255 = 98f;
	fLocal_256 = 55f;
	fLocal_257 = 60f;
	iLocal_339 = 1;
	vLocal_341 = { -1284.367f, 295.7437f, 63.83044f };
	vLocal_342 = { -1286.218f, 292.573f, 63.7927f };
	if (unk_0xE8A79675302ED812(67))
	{
		func_406(2);
		func_402();
	}
	unk_0x25A523E067E06F54(1);
	func_389();
	while (true)
	{
		if (unk_0x724D816EA203A79E(Local_260.f_2))
		{
			func_8();
		}
		else
		{
			func_1(&Local_260);
		}
		SYSTEM::WAIT(0);
	}
}

void func_1(var uParam0)//Position - 0x115
{
	uParam0->f_2 = unk_0xBC25C936A095B5BA();
	func_6(&(uParam0->f_F4));
	uParam0->f_1AC = func_2();
}

int func_2()//Position - 0x136
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_3(unk_0xBC25C936A095B5BA());
	if (iVar1 == 0)
	{
		iVar0 = joaat("sp0_dist_driving_car");
	}
	else if (iVar1 == 2)
	{
		iVar0 = joaat("sp2_dist_driving_car");
	}
	else if (iVar1 == 1)
	{
		iVar0 = joaat("sp1_dist_driving_car");
	}
	else
	{
		iVar0 = joaat("sp0_dist_driving_car");
	}
	return iVar0;
}

int func_3(int iParam0)//Position - 0x181
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_4(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_4(int iParam0)//Position - 0x1BE
{
	if (func_5(iParam0))
	{
		return Global_19B04.f_6D75[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_5(int iParam0)//Position - 0x1E8
{
	return iParam0 < 3;
}

void func_6(var uParam0)//Position - 0x1F4
{
	int iVar0;
	char cVar1[64];
	
	iVar0 = func_3(unk_0xBC25C936A095B5BA());
	if (iVar0 == 0)
	{
		func_7(uParam0, 0, unk_0xBC25C936A095B5BA(), "MICHAEL", 0, 1);
	}
	else if (iVar0 == 2)
	{
		func_7(uParam0, 0, unk_0xBC25C936A095B5BA(), "TREVOR", 0, 1);
	}
	else if (iVar0 == 1)
	{
		func_7(uParam0, 0, unk_0xBC25C936A095B5BA(), "FRANKLIN", 0, 1);
	}
	else
	{
		func_7(uParam0, 0, unk_0xBC25C936A095B5BA(), "MICHAEL", 0, 1);
		StringCopy(&cVar1, "Invalid enum passed to Taxi dialogue is: ", 64);
		StringIntConCat(&cVar1, iVar0, 64);
	}
	func_7(uParam0, 8, 0, "TaxiDispatch", 0, 1);
}

void func_7(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x27A
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

void func_8()//Position - 0x315
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (func_388(&Local_260))
	{
		func_387(&Local_260);
		if (Local_260.f_19A > 0)
		{
			if (func_386(&Local_260, 0))
			{
				func_384();
			}
		}
		else if (func_383(&Local_260, 31) > 5f)
		{
			func_406(2);
			func_402();
		}
	}
	else
	{
		func_361(&Local_260, &uLocal_392);
		func_360(&Local_260);
		func_359(&Local_260, &uLocal_340, 0);
		if (Local_260.f_19A < 9)
		{
			func_346(&Local_260, &Local_262, &uLocal_392);
		}
		if (Local_260.f_19A > 5 && !iLocal_343)
		{
			iLocal_343 = 1;
			Local_262.f_10[0 /*3*/] = { 27.36738f, -1356.948f, 28.2181f };
			Local_262.f_10[1 /*3*/] = { 314.3014f, -266.3495f, 52.78319f };
			Local_262.f_10[2 /*3*/] = { -159.9642f, -856.5309f, 28.71328f };
			Local_262.f_1A[0 /*3*/] = { 30.9791f, -1347.39f, 28.4939f };
			Local_262.f_1A[1 /*3*/] = { 313.893f, -279.0695f, 53.1647f };
			Local_262.f_1A[2 /*3*/] = { -88.0743f, -845.7833f, 40.797f };
		}
		if (Local_260.f_19A > 2)
		{
			if (!func_345(&Local_260))
			{
				if (!iLocal_345)
				{
					if (func_344())
					{
						func_342(&Local_262);
						iLocal_345 = 1;
					}
				}
				func_312();
			}
			else
			{
				func_293(&Local_260, "Taxi Not Driveable", func_311(&Local_260));
			}
		}
		if (Local_260.f_19A > 3)
		{
			if (!bVar3)
			{
				if (unk_0xE59B7F5A03335350(Local_260.f_4, 0))
				{
					iVar0 = 0;
					while (iVar0 < 5)
					{
						if (!unk_0x1D403DFADBC2DE3C(Local_262.f_4[iVar0], 0))
						{
							if (unk_0xD9C1758D86688CEA(Local_262.f_4[iVar0], Local_260.f_4, 1))
							{
								bVar3 = true;
							}
						}
						iVar0++;
					}
				}
			}
			if (bVar3)
			{
				iVar1 = 0;
				while (iVar1 < 5)
				{
					if (!unk_0x1D403DFADBC2DE3C(Local_262.f_4[iVar1], 0))
					{
						if (!unk_0x36CEFBE9B745A58D(Local_262.f_4[iVar1]))
						{
							unk_0xA4E856A8CD53B8DF(Local_262.f_4[iVar1]);
							unk_0x02DAF06EA4F08219(&iVar2);
							unk_0xC5A6DFE2B8987B17(&iVar2);
							unk_0x5558ED6D4A2DEC93(0, Local_260.f_2, 1000f, -1, 0, 0);
							unk_0x535008C596714F9E(iVar2);
							unk_0xA8E6405305C0D7DF(Local_262.f_4[iVar1], iVar2);
							unk_0x02DAF06EA4F08219(&iVar2);
						}
					}
					iVar1++;
				}
			}
		}
		if (Local_260.f_19A == 9)
		{
			func_269(&Local_260, 0, 1);
			func_268(&Local_260, &Local_262, 1128792064);
		}
		switch (Local_260.f_19A)
		{
			case 0:
				func_267(&(vLocal_338[0 /*3*/]), "TAXI_SC_BN_10", 200);
				func_266(&Local_260, &vLocal_338);
				func_264();
				func_262();
				func_261();
				func_260(&Local_260, 16, 4f, 0);
				func_257(&Local_260, vLocal_341, vLocal_342, &Local_262);
				func_256(&Local_260);
				func_255(&Local_260, 1);
				break;
			
			case 1:
				if (func_252())
				{
					func_251();
					func_231();
					func_230(&Local_260);
					func_228(&(Local_260.f_64), 8);
					func_228(&(Local_260.f_64), 2048);
					func_228(&(Local_260.f_64), 256);
					Local_260.f_E = { vLocal_341 };
					Local_260.f_31 = 0;
					func_255(&Local_260, 3);
				}
				break;
			
			case 3:
				if (func_220(&Local_260, 3))
				{
					func_219(&Local_260, 1, 0);
					func_218(&uLocal_409, vLocal_341, 20f, 0);
					func_255(&Local_260, 5);
				}
				break;
			
			case 5:
				func_217();
				if (func_197(&Local_260, &Local_262))
				{
					unk_0x70870CD1718D74F0(Local_260.f_1AC, &(Local_260.f_2A), -1);
					func_255(&Local_260, 15);
				}
				break;
			
			case 15:
				if (func_195(&Local_260, &Local_262))
				{
					func_191(&Local_260, 8, 1, 0, 0);
					if (!unk_0x1D403DFADBC2DE3C(Local_262[0], 0))
					{
						unk_0xC8FD3EBBB90E8D7F(Local_262[0], 26, true);
					}
					if (!unk_0x1D403DFADBC2DE3C(Local_262[1], 0))
					{
						unk_0xC8FD3EBBB90E8D7F(Local_262[1], 26, true);
					}
					if (!unk_0x1D403DFADBC2DE3C(Local_262[2], 0))
					{
						unk_0xC8FD3EBBB90E8D7F(Local_262[2], 26, true);
					}
					func_190(&Local_260);
					func_188(&Local_260, 0);
					func_187();
					func_185(&Local_260, 11);
					func_260(&Local_260, 10, 0, 0);
					func_260(&Local_260, 6, 0, 0);
					func_184();
					Local_260.f_24 = unk_0x55AEFCD285ECC0F2(3f, 10f);
					func_182(&Local_262);
					func_255(&Local_260, 9);
				}
				if (unk_0xE59B7F5A03335350(Local_260.f_4, 0))
				{
					if (!unk_0x62F3A07C43FFB568(Local_260.f_2, Local_260.f_4, 0))
					{
						func_178(&Local_260, &Local_262);
						func_255(&Local_260, 5);
					}
				}
				break;
			
			case 9:
				if (!bLocal_344)
				{
				}
				func_175(&Local_260);
				if (func_132(&Local_260, &Local_262, &Local_348, &uLocal_351))
				{
					func_131(&Local_348, -1, 1);
					if (func_130(&Local_262))
					{
						func_129(&Local_260, 0);
					}
					func_128(&Local_262);
					func_126(&Local_260);
					func_122(&Local_260);
					func_121(&Local_260);
					func_255(&Local_260, 27);
				}
				break;
			
			case 27:
				if (func_110(&Local_260, 1))
				{
					unk_0x02DAF06EA4F08219(&iVar2);
					unk_0xC5A6DFE2B8987B17(&iVar2);
					unk_0x346129B364057FF6(0, Local_262.f_1A[0 /*3*/], 1f, 20000, 1048576000, 0, 1193033728);
					unk_0x0D042F5C6172D20A(0, 0);
					if (unk_0xABB25056487DF1D7(Local_260.f_1D, 4f, 1))
					{
						unk_0xBE2047F9F9DE6F43(0, Local_260.f_1D, 4f, 0);
					}
					else
					{
						unk_0xC0FDCDB0DF739C50(0, 350.8689f, 0);
						unk_0xA3A7138EAD2268A0(0, "WORLD_HUMAN_WINDOW_SHOP_BROWSE", 0, 0);
					}
					unk_0x535008C596714F9E(iVar2);
					unk_0xA8E6405305C0D7DF(Local_260.f_3, iVar2);
					unk_0x22321800954A532E(Local_260.f_3, true);
					func_255(&Local_260, 29);
				}
				break;
			
			case 29:
				if (!unk_0x36CEFBE9B745A58D(Local_260.f_3))
				{
					if (func_109(Local_260.f_3, 29.11295f, -1349.218f, 29.6128f, 1) < 3f)
					{
						unk_0x2E9860A2B72187F5(Local_260.f_3, 60, true);
					}
				}
				if (func_78(&Local_260, &iLocal_399))
				{
					func_11(1, &Local_260, 0);
					func_260(&Local_260, 31, 0, 0);
					func_255(&Local_260, 30);
				}
				break;
			
			case 30:
				if (!unk_0x36CEFBE9B745A58D(Local_260.f_3))
				{
					if (func_109(Local_260.f_3, 29.11295f, -1349.218f, 29.6128f, 1) < 3f)
					{
						unk_0x2E9860A2B72187F5(Local_260.f_3, 60, true);
					}
					if ((unk_0x4DBCE270B354E123(Local_260.f_3, 31.05019f, -1347.285f, 29.49703f, 1f, 1f, 1f, false, true, 1) || func_9(Local_260.f_3, 1) > 50f) || func_383(&Local_260, 31) > 30f)
					{
						if (unk_0x4DBCE270B354E123(Local_260.f_3, 31.05019f, -1347.285f, 29.49703f, 1f, 1f, 1f, false, true, 1))
						{
						}
						if (func_9(Local_260.f_3, 1) > 50f)
						{
						}
						if (func_383(&Local_260, 31) > 30f)
						{
						}
						unk_0x2E35C4FA5F0ED22F(Local_260.f_3, false);
						unk_0xA902E18EDF6FA0C8(255, Local_260.f_19D, 1862763509);
						unk_0x02537C8C1BEEB477(&(Local_260.f_3));
						func_402();
					}
				}
				else
				{
					func_402();
				}
				break;
			}
	}
}

float func_9(int iParam0, bool bParam1)//Position - 0xA29
{
	return func_10(unk_0xA95CF30C72EB526E(unk_0xFC1CAE18F3ECBF2D()), iParam0, bParam1);
}

float func_10(int iParam0, int iParam1, bool bParam2)//Position - 0xA41
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

void func_11(bool bParam0, var uParam1, bool bParam2)//Position - 0xA9F
{
	if (bParam0)
	{
		func_54(uParam1);
		if (!unk_0x36CEFBE9B745A58D(uParam1->f_3))
		{
			unk_0xC8FD3EBBB90E8D7F(uParam1->f_3, 317, true);
		}
	}
	else
	{
		func_52(1, 0);
	}
	func_12(uParam1, bParam2);
}

void func_12(var uParam0, bool bParam1)//Position - 0xADB
{
	func_387(uParam0);
	if (func_51())
	{
		func_49();
	}
	func_47();
	unk_0xEB233A3B7635D2AC();
	unk_0x7456702622C62EA0(1);
	func_44(0);
	if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
	{
		unk_0xA73D1278857991A2(uParam0->f_4, false);
		unk_0xE421FE22DE8008EB(uParam0->f_4);
		unk_0xBF86DE1BFE3AA5CF(uParam0->f_4);
	}
	func_41(uParam0->f_E, 1);
	func_39(uParam0->f_E, 1, 1114636288);
	func_38(&(uParam0->f_F4), 3);
	unk_0xC8FD3EBBB90E8D7F(unk_0xBC25C936A095B5BA(), 32, true);
	if (func_35())
	{
		unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
	}
	unk_0xD5E53AA0828339DA(1);
	func_25(0, 1, 1, 0, 0);
	unk_0x43F06392C4EF25E0(true);
	unk_0x59B038076F830627(true);
	if (unk_0xEF0E25DA0CB6E8FF(*uParam0))
	{
		unk_0x4EC087603E1DEF9C(*uParam0, 0);
		unk_0x062C9995BFD27B2A(false, false, 3000, 1, 0, 0);
		unk_0x4AED68BFACFB14CB(true);
	}
	if (func_24(Global_19B04.f_4A7C, 4))
	{
		func_22(&(Global_19B04.f_4A7C), 4);
		unk_0x8510BC031C24B862(func_21(), false);
	}
	if (bParam1)
	{
		func_20(uParam0);
	}
	func_19(uParam0);
	unk_0x4EA570997E107F35("gestures@m@standing@casual");
	unk_0x4EA570997E107F35("oddjobs@taxi@");
	unk_0x4EA570997E107F35("oddjobs@towingcome_here");
	if (unk_0x57D316754A262B34())
	{
		func_17(uParam0->f_19B);
	}
	if (!unk_0x8CC5A4A5615C6420(unk_0xFC1CAE18F3ECBF2D()))
	{
		unk_0xDDCAA2E64649E083(unk_0xFC1CAE18F3ECBF2D(), true, 0);
	}
	unk_0x739C5CCC39AE3137(SYSTEM::ROUND((func_13(&iLocal_82) * 1000f)), 12, 0);
}

float func_13(var uParam0)//Position - 0xC2D
{
	if (func_16(uParam0))
	{
		if (func_15(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_14(unk_0xFA30DFD0084E92FE(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

float func_14(bool bParam0)//Position - 0xC69
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

bool func_15(var uParam0)//Position - 0xCC1
{
	return unk_0xFA30DFD0084E92FE(*uParam0, 2);
}

bool func_16(var uParam0)//Position - 0xCD1
{
	return unk_0xFA30DFD0084E92FE(*uParam0, 1);
}

void func_17(int iParam0)//Position - 0xCE1
{
	var uVar0;
	
	if (iLocal_57[0] != 0)
	{
		MemCopy(&uVar0, {func_18(iParam0)}, 6);
		if (!unk_0xEAEFBBEC1AEA464B(&uVar0))
		{
		}
	}
}

struct<8> func_18(int iParam0)//Position - 0xD08
{
	struct<8> Var0;
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "TAXI_SC_N_NE", 32);
			break;
		
		case 1:
			StringCopy(&Var0, "TAXI_SC_N_TE", 32);
			break;
		
		case 2:
			StringCopy(&Var0, "TAXI_SC_N_DL", 32);
			break;
		
		case 3:
			StringCopy(&Var0, "TAXI_SC_N_GB", 32);
			break;
		
		case 4:
			StringCopy(&Var0, "TAXI_SC_N_TB", 32);
			break;
		
		case 5:
			StringCopy(&Var0, "TAXI_SC_N_CY", 32);
			break;
		
		case 6:
			StringCopy(&Var0, "TAXI_SC_N_GN", 32);
			break;
		
		case 7:
			StringCopy(&Var0, "TAXI_SC_N_CC", 32);
			break;
		
		case 8:
			StringCopy(&Var0, "TAXI_SC_N_FC", 32);
			break;
		
		case 9:
			StringCopy(&Var0, "TAXI_BLIP_CAR", 32);
			break;
		
		default:
			StringCopy(&Var0, "InvalidEnum", 32);
			break;
	}
	return Var0;
}

void func_19(var uParam0)//Position - 0xDCD
{
	unk_0x0E330AFCF19FCA1E(uParam0->f_33[0]);
}

void func_20(var uParam0)//Position - 0xDE1
{
	if (unk_0x724D816EA203A79E(uParam0->f_3))
	{
		if (!unk_0x1D403DFADBC2DE3C(uParam0->f_3, 0))
		{
			if (!unk_0x5237AF95232D78C5(uParam0->f_3, 0))
			{
				unk_0x9E410F8AFFC2894E(uParam0->f_3);
			}
			unk_0x2E35C4FA5F0ED22F(uParam0->f_3, false);
			unk_0xA902E18EDF6FA0C8(255, uParam0->f_19D, 1862763509);
			if (unk_0x96044E39418AAF17(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
			{
				unk_0x08FA5F7132D73F6F(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -1056964608);
			}
			else if (unk_0x96044E39418AAF17(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
			{
				unk_0x08FA5F7132D73F6F(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -1056964608);
			}
			if (unk_0x96044E39418AAF17(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
			{
				unk_0x08FA5F7132D73F6F(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -1056964608);
			}
			if (unk_0x96044E39418AAF17(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				unk_0x08FA5F7132D73F6F(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", -1056964608);
			}
			unk_0x02537C8C1BEEB477(&(uParam0->f_3));
		}
	}
}

int func_21()//Position - 0xED6
{
	return joaat("taxi");
}

void func_22(var uParam0, int iParam1)//Position - 0xEE3
{
	func_23(uParam0, iParam1);
}

void func_23(var uParam0, int iParam1)//Position - 0xEF3
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_24(var uParam0, int iParam1)//Position - 0xF08
{
	return (uParam0 && iParam1) != 0;
}

void func_25(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)//Position - 0xF17
{
	if (bParam0)
	{
		unk_0x0D2E9062E966BE4F(unk_0xB5CEFD608600A09F());
		unk_0x8D554ED10E00EEE3(unk_0xB5CEFD608600A09F(), 1);
		unk_0xDE255B32C6B37E90(unk_0xB5CEFD608600A09F(), 1);
		func_34(1);
		unk_0x32FF237D69EB5489();
		unk_0x3169E2C5E6A096BC();
		if (Global_389D.f_1 > 3)
		{
			if (unk_0x58E7DDFF8D17A82A())
			{
				unk_0x1E08809A5041F85B(false);
			}
			if (!func_33())
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
		func_34(0);
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

bool func_26()//Position - 0x1040
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_27.f_12, 14);
}

bool func_27(int iParam0, int iParam1)//Position - 0x105D
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

int func_28(int iParam0, bool bParam1)//Position - 0x10A8
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

int func_29()//Position - 0x10E9
{
	return Global_1407E0;
}

int func_30(int iParam0)//Position - 0x10F5
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

bool func_31()//Position - 0x1137
{
	return unk_0xFA30DFD0084E92FE(Global_240006, 3);
}

int func_32(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x1148
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

int func_33()//Position - 0x117B
{
	if (Global_389D.f_1 == 1 || Global_389D.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_34(int iParam0)//Position - 0x11A2
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

int func_35()//Position - 0x11C5
{
	if (!func_37() && !func_36())
	{
		if (!unk_0xE7A89C39746A63AC(unk_0xFC1CAE18F3ECBF2D()))
		{
			return 1;
		}
	}
	return 0;
}

int func_36()//Position - 0x11F0
{
	if (unk_0xB731B8C5BCE89836(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_37()//Position - 0x120A
{
	if (unk_0xB731B8C5BCE89836(joaat("appinternet")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_38(var uParam0, int iParam1)//Position - 0x1224
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_39(vector3 vParam0, bool bParam1, float fParam2)//Position - 0x1241
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { func_40(vParam0, 1f, -fParam2, -fParam2, -fParam2) };
	vVar1 = { func_40(vParam0, 1f, fParam2, fParam2, fParam2) };
	vVar0.z = (vVar0.z - 22f);
	vVar1.z = (vVar1.z + 22f);
	if (!bParam1)
	{
		unk_0x6935EBF9868982DC(vVar0, vVar1, false, 1);
	}
	else
	{
		unk_0x832ADB79A274D4E9(vVar0, vVar1, true);
		unk_0x02DD9F29D9655E48();
	}
}

Vector3 func_40(vector3 vParam0, float fParam1, struct<2> Param2, float fParam3)//Position - 0x12B6
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	vector3 vVar4;
	
	fVar1 = fParam1;
	fVar2 = SYSTEM::COS(fVar1);
	fVar3 = SYSTEM::SIN(fVar1);
	vVar0.x = ((Param2 * fVar2) + (Param2.f_1 * fVar3));
	vVar0.y = ((Param2.f_1 * fVar2) - (Param2 * fVar3));
	vVar4 = { vParam0 + vVar0 };
	return vVar4;
}

void func_41(vector3 vParam0, bool bParam1)//Position - 0x1303
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!func_42(vParam0, func_43(), 0))
	{
		vVar0 = { func_40(vParam0, 1f, -30f, -30f, -10f) };
		vVar1 = { func_40(vParam0, 1f, 30f, 30f, 10f) };
		unk_0x379ACE23D404525C(vVar0, vVar1, bParam1, 1);
	}
}

bool func_42(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x1363
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

Vector3 func_43()//Position - 0x13AA
{
	vector3 vVar0;
	
	return vVar0;
}

void func_44(int iParam0)//Position - 0x13B6
{
	if (Global_3943)
	{
		func_45(0, 0);
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
	if (!func_33())
	{
		Global_389D.f_1 = 3;
	}
}

void func_45(bool bParam0, bool bParam1)//Position - 0x1426
{
	if (bParam0)
	{
		if (func_46(0))
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

int func_46(int iParam0)//Position - 0x149A
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

void func_47()//Position - 0x14F4
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_15FB1[iVar0 /*17*/] && !Global_15FB1[iVar0 /*17*/].f_1)
		{
			if (Global_15FB1[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_15FB1[iVar0 /*17*/].f_5 != 88 && Global_15FB1[iVar0 /*17*/].f_5 != 89) && Global_15FB1[iVar0 /*17*/].f_5 != 92)
				{
					func_48(Global_15FB1[iVar0 /*17*/].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_48(int iParam0, bool bParam1)//Position - 0x157B
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_1542D[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_1542D[iParam0 /*2*/] = 0;
	}
}

void func_49()//Position - 0x15B9
{
	Global_394A = 0;
	func_50();
}

void func_50()//Position - 0x15C9
{
	unk_0x5C7DC611411E2CF9();
	Global_41AB = 0;
	if (unk_0xE6711F601F11B66B())
	{
		unk_0x1E08809A5041F85B(false);
		Global_3DB8 = 6;
	}
}

int func_51()//Position - 0x15EA
{
	if (Global_3DB8 != 0 || unk_0xE6711F601F11B66B())
	{
		return 1;
	}
	return 0;
}

void func_52(int iParam0, int iParam1)//Position - 0x160C
{
	switch (iParam0)
	{
		case 0:
			Global_19B04.f_4A7C.f_16[0]++;
			func_53("Fares Completed ++ = ", Global_19B04.f_4A7C.f_16[0]);
			break;
		
		case 1:
			Global_19B04.f_4A7C.f_16[1]++;
			func_53("Fares Failed ++ = ", Global_19B04.f_4A7C.f_16[1]);
			break;
		
		case 2:
			Global_19B04.f_4A7C.f_16[2]++;
			func_53("Fares Accepted ++ ", Global_19B04.f_4A7C.f_16[2]);
			break;
		
		case 3:
			Global_19B04.f_4A7C.f_16[3]++;
			func_53("Fares Expired ++ ", Global_19B04.f_4A7C.f_16[3]);
			break;
		
		case 13:
			Global_19B04.f_4A7C.f_16[13]++;
			func_53("Passengers run ++ = ", Global_19B04.f_4A7C.f_16[13]);
			break;
		
		case 14:
			Global_19B04.f_4A7C.f_16[14]++;
			func_53("Passenger Forced to Pay ++ = ", Global_19B04.f_4A7C.f_16[14]);
			break;
		
		case 4:
			if (iParam1 != 0)
			{
				if (iParam1 > Global_19B04.f_4A7C.f_16[4])
				{
					Global_19B04.f_4A7C.f_16[4] = iParam1;
					func_53("This distance ", iParam1);
					func_53(" is longer than current best", Global_19B04.f_4A7C.f_16[4]);
				}
				else
				{
					func_53("Longest Distance Not Beat ", Global_19B04.f_4A7C.f_16[4]);
				}
			}
			break;
		
		case 5:
			Global_19B04.f_4A7C.f_16[5] = (Global_19B04.f_4A7C.f_16[5] + iParam1);
			func_53("Total Distance w/ Passenger = ", Global_19B04.f_4A7C.f_16[5]);
			break;
		
		case 6:
			if (iParam1 == 0)
			{
				Global_19B04.f_4A7C.f_16[6]++;
			}
			else
			{
				Global_19B04.f_4A7C.f_16[6] = (Global_19B04.f_4A7C.f_16[6] + iParam1);
			}
			func_53("Wanted Levels ++ = ", Global_19B04.f_4A7C.f_16[6]);
			break;
		
		case 7:
			if (iParam1 > 0)
			{
				Global_19B04.f_4A7C.f_16[7] = (Global_19B04.f_4A7C.f_16[7] + iParam1);
			}
			else
			{
				Global_19B04.f_4A7C.f_16[7]++;
			}
			func_53("Wanted Levels Lost = ", Global_19B04.f_4A7C.f_16[7]);
			break;
		
		case 8:
			Global_19B04.f_4A7C.f_16[8]++;
			func_53("Taxis wrecked ++ = ", Global_19B04.f_4A7C.f_16[8]);
			break;
		
		case 9:
			Global_19B04.f_4A7C.f_16[9]++;
			func_53("Horn Honked ++ = ", Global_19B04.f_4A7C.f_16[9]);
			break;
		
		case 10:
			Global_19B04.f_4A7C.f_16[10] = (Global_19B04.f_4A7C.f_16[10] + iParam1);
			func_53("Total Money Earned = ", Global_19B04.f_4A7C.f_16[10]);
			break;
		
		case 11:
			Global_19B04.f_4A7C.f_16[11] = (Global_19B04.f_4A7C.f_16[11] + iParam1);
			func_53("Total Tips Earned = ", Global_19B04.f_4A7C.f_16[11]);
			break;
		
		case 12:
			if (iParam1 > Global_19B04.f_4A7C.f_16[12])
			{
				Global_19B04.f_4A7C.f_16[12] = iParam1;
				func_53("New Highest Tip = ", Global_19B04.f_4A7C.f_16[12]);
			}
			else
			{
				func_53("Highest Tip Not Reached = ", Global_19B04.f_4A7C.f_16[12]);
			}
			break;
	}
}

void func_53(char* sParam0, int iParam1)//Position - 0x19FD
{
}

void func_54(var uParam0)//Position - 0x1A05
{
	func_52(0, 0);
	if (uParam0->f_19B != 9)
	{
		func_406(1);
		func_64(15, 1);
	}
	func_228(&(Global_19B04.f_4A7C), 1024);
	if (!func_24(Global_19B04.f_4A7C, 64))
	{
		func_55(func_62(func_63(uParam0)), 0, 0);
	}
}

void func_55(int iParam0, int iParam1, int iParam2)//Position - 0x1A59
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
		func_61((891 + iParam0), 1, -1, 1);
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
		func_56();
	}
}

void func_56()//Position - 0x1B41
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
		func_60(13, SYSTEM::FLOOR(Global_19B04.f_27B5.f_F0D));
	}
	if (!unk_0xF9BFA43C1BAFD016())
	{
		if (!Global_11542)
		{
			if (func_59() == 2 == 0 && !unk_0x7AF0088ABFA713B6())
			{
				if (unk_0x670C0C6C780A3F84())
				{
					Global_199FA = 0;
				}
				if (!Global_DA9F)
				{
					func_57();
				}
			}
		}
	}
}

int func_57()//Position - 0x2002
{
	if (func_58(0))
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

bool func_58(bool bParam0)//Position - 0x204D
{
	if (!bParam0 && unk_0xB731B8C5BCE89836(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_1163A, 0);
}

int func_59()//Position - 0x2078
{
	return Global_62BD;
}

int func_60(int iParam0, int iParam1)//Position - 0x2083
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

int func_61(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x20D4
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

int func_62(int iParam0)//Position - 0x25EE
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 199;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 2:
			iVar0 = 201;
			break;
		
		case 3:
			iVar0 = 202;
			break;
		
		case 4:
			iVar0 = 203;
			break;
		
		case 5:
			iVar0 = 204;
			break;
		
		case 6:
			iVar0 = 205;
			break;
		
		case 7:
			iVar0 = 206;
			break;
		
		case 8:
			iVar0 = 207;
			break;
		
		case 9:
			break;
		
		default:
			iVar0 = 199;
			break;
	}
	return iVar0;
}

int func_63(var uParam0)//Position - 0x2684
{
	return uParam0->f_19B;
}

int func_64(int iParam0, int iParam1)//Position - 0x2691
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_65(iParam0, iParam1);
}

int func_65(int iParam0, int iParam1)//Position - 0x26AC
{
	if (func_77(14) && !func_76(iParam0))
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
	if (func_75(&Global_411EB6))
	{
		if (func_73(&Global_411EB6, iParam0))
		{
			return 0;
		}
		if (func_66(&Global_411EB6, iParam0))
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

int func_66(var uParam0, int iParam1)//Position - 0x2749
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x6D5CBCB6411EDE89(iParam1))
	{
		return 0;
	}
	if (func_77(14) && !func_76(iParam1))
	{
		return 0;
	}
	if (func_73(uParam0, iParam1))
	{
		return 0;
	}
	if (func_72(uParam0) < 0f)
	{
		func_71(uParam0, 0);
	}
	func_69(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_67(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_67(var uParam0, int iParam1)//Position - 0x27FA
{
	int iVar0;
	
	if (unk_0x6D5CBCB6411EDE89(iParam1))
	{
		return 0;
	}
	if (func_77(14) && !func_76(iParam1))
	{
		return 0;
	}
	if (func_73(uParam0, iParam1))
	{
		return 0;
	}
	if (func_72(uParam0) < 0f)
	{
		func_71(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_68(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_68(var uParam0, int iParam1)//Position - 0x2875
{
	return (*uParam0)[iParam1] == 78;
}

void func_69(var uParam0)//Position - 0x2886
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_70(uParam0, iVar0);
		iVar0++;
	}
	func_71(uParam0, (Global_411EB5 - 0.5f));
}

void func_70(var uParam0, int iParam1)//Position - 0x28BA
{
	(*uParam0)[iParam1] = 78;
}

void func_71(var uParam0, float fParam1)//Position - 0x28CA
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

float func_72(var uParam0)//Position - 0x28E7
{
	return uParam0->f_50;
}

bool func_73(var uParam0, int iParam1)//Position - 0x28F3
{
	return func_74(uParam0, iParam1) != -1;
}

int func_74(var uParam0, int iParam1)//Position - 0x2905
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

bool func_75(var uParam0)//Position - 0x2932
{
	return uParam0->f_4F == 1;
}

int func_76(int iParam0)//Position - 0x2940
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

bool func_77(int iParam0)//Position - 0x2990
{
	return Global_8C41 == iParam0;
}

int func_78(var uParam0, int iParam1)//Position - 0x299E
{
	switch (iLocal_160)
	{
		case 0:
			if (!func_51() && func_383(uParam0, 0) > 1f)
			{
				if (func_35())
				{
					unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
				}
				func_108(uParam0);
				func_22(&(Global_19B04.f_4A7C), 4096);
				func_105(iParam1, "TAXI_FARE_TITLE", uParam0->f_32, uParam0->f_38, ((uParam0->f_32 + uParam0->f_38) + uParam0->f_69), uParam0->f_69, func_107(uParam0), "TAXI_FARE_MID", 4000, 1);
				iParam1->f_1 = 4000;
				unk_0xC4BA30B532FE260F(-1, "CHECKPOINT_UNDER_THE_BRIDGE", "HUD_MINI_GAME_SOUNDSET", false);
				func_104(1);
				iLocal_160 = 6;
			}
			break;
		
		case 6:
			if (!func_98(iParam1, 0))
			{
				func_79(uParam0);
				func_260(uParam0, 0, 0, 0);
				func_104(0);
				iLocal_160 = 7;
				return 1;
			}
			break;
	}
	return 0;
}

void func_79(var uParam0)//Position - 0x2A70
{
	int iVar0;
	
	iVar0 = ((uParam0->f_32 + uParam0->f_38) + uParam0->f_69);
	if (iVar0 > 0)
	{
		func_80(func_96(), 21, iVar0, 0, 0);
		func_52(10, iVar0);
		iLocal_57[0] = iVar0;
	}
}

void func_80(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x2AAE
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
	func_81(Global_19B04.f_6D75[iParam0 /*29*/].f_11, 1, iParam1, iParam2, 0);
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

int func_81(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x2B95
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_95();
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
					func_94(99, 1);
					func_93(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_93(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_93(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_92(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_88(5))
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
							func_93(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_93(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_93(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_88(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_93(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_93(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_93(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_93(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_93(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_93(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_93(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_93(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_93(joaat("sp2_money_spent_property"), iParam3);
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
									func_93(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_93(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_93(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_93(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_93(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_93(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_88(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_93(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_93(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_93(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_93(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_93(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_93(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_87(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_94(95, iParam3);
					break;
				
				case 1:
					func_94(97, iParam3);
					break;
				
				case 2:
					func_94(96, iParam3);
					break;
			}
			func_94(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_84(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_84(iVar1);
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
					func_93(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_93(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_93(joaat("sp2_total_cash_earned"), iParam3);
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
	func_83(iParam0);
	if (Global_8C41 == 15)
	{
		func_82(0);
	}
	return 1;
}

void func_82(bool bParam0)//Position - 0x3194
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

void func_83(int iParam0)//Position - 0x3416
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

void func_84(int iParam0)//Position - 0x3470
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_61(129, 0, -1, 1);
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
	else if (unk_0xFA30DFD0084E92FE(Global_19B04.f_5037.f_1D7, iParam0) || unk_0xFA30DFD0084E92FE(Global_200000[func_86() /*12171*/].f_1E08.f_A, iParam0))
	{
		bVar0 = true;
		unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_5037.f_1D7), iParam0);
		unk_0x7CB6FD92BE491AD9(&(Global_200000[func_86() /*12171*/].f_1E08.f_A), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x2E94302CFF011F2E("COUP_RED");
		unk_0xC9C304D0AABE1335(func_85(iParam0));
		unk_0x7BB0762D8C75A3C7(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_85(int iParam0)//Position - 0x3547
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

int func_86()//Position - 0x35CF
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_87(int iParam0)//Position - 0x35DC
{
	func_94(93, iParam0);
	func_94(29, iParam0);
	func_94(30, iParam0);
}

bool func_88(int iParam0)//Position - 0x35FC
{
	if (iParam0 == 8)
	{
		return func_89(129, -1, -1);
	}
	if (!unk_0x7AF0088ABFA713B6())
	{
		return unk_0xFA30DFD0084E92FE(Global_19B04.f_5037.f_1D7, iParam0);
	}
	return unk_0xFA30DFD0084E92FE(Global_200000[func_86() /*12171*/].f_1E08.f_A, iParam0);
}

int func_89(int iParam0, int iParam1, int iParam2)//Position - 0x364A
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_29();
	}
	iVar1 = func_91(iParam0, iParam1);
	uVar2 = func_90(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xDAB376DC6F83D68C(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_90(int iParam0)//Position - 0x3687
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

int func_91(int iParam0, int iParam1)//Position - 0x3973
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_29();
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

int func_92(bool bParam0)//Position - 0x3C40
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
		func_60(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_64(27, 1);
	return 1;
}

void func_93(int iParam0, int iParam1)//Position - 0x3CF7
{
	int iVar0;
	
	unk_0x6CB99B97664C3727(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x3A57956BCE003880(iParam0, iVar0, 1);
}

void func_94(int iParam0, int iParam1)//Position - 0x3D1A
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

void func_95()//Position - 0x3D77
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

int func_96()//Position - 0x3DEC
{
	func_97();
	return Global_19B04.f_932.f_21B.f_10CD;
}

void func_97()//Position - 0x3E05
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_4(Global_19B04.f_932.f_21B.f_10CD) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_3(unk_0xBC25C936A095B5BA());
			if (func_5(iVar0) && (!func_77(14) || Global_196EB))
			{
				if (Global_19B04.f_932.f_21B.f_10CD != iVar0 && func_5(Global_19B04.f_932.f_21B.f_10CD))
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

int func_98(var uParam0, int iParam1)//Position - 0x3F02
{
	if (!func_16(&(uParam0->f_2)))
	{
		func_102(&(uParam0->f_2));
	}
	unk_0x4E0EC60D119222B1(14);
	unk_0x4B6031094354FED6(*uParam0, 255, 255, 255, 255, 0);
	if (iParam1 || uParam0->f_8)
	{
		if (unk_0x694514BD37EC4E94(2, 201) || uParam0->f_8)
		{
			if (!func_16(&(uParam0->f_5)))
			{
				func_102(&(uParam0->f_5));
				func_101(uParam0, 1051260355);
			}
		}
		if (func_16(&(uParam0->f_5)))
		{
			if (func_100(&(uParam0->f_5)) > 0.33f)
			{
				func_99(&(uParam0->f_5));
				return 0;
			}
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_100(&(uParam0->f_2)) * 1000f) > SYSTEM::TO_FLOAT(uParam0->f_1)
	{
		if (!func_16(&(uParam0->f_5)))
		{
			func_102(&(uParam0->f_5));
			func_101(uParam0, 1051260355);
		}
		else if (func_100(&(uParam0->f_5)) > 0.33f)
		{
			func_99(&(uParam0->f_2));
			return 0;
		}
	}
	return 1;
}

void func_99(var uParam0)//Position - 0x4007
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_100(int iParam0)//Position - 0x401D
{
	if (func_16(iParam0))
	{
		if (func_15(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_14(unk_0xFA30DFD0084E92FE(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

void func_101(var uParam0, float fParam1)//Position - 0x405C
{
	unk_0x29CD142125FE177B(*uParam0, "SHARD_ANIM_OUT");
	unk_0x1E1FB49121565EB6(uParam0->f_9);
	unk_0xD44E04EBBDC4CE88(fParam1);
	unk_0xF9FBC2F3F73D94C9();
}

void func_102(int iParam0)//Position - 0x4082
{
	func_103(iParam0, 0f);
}

void func_103(int iParam0, float fParam1)//Position - 0x4091
{
	iParam0->f_1 = (func_14(unk_0xFA30DFD0084E92FE(*iParam0, 4)) - fParam1);
	unk_0xF0059F27F7BB6680(iParam0, 1);
	unk_0x7CB6FD92BE491AD9(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_104(int iParam0)//Position - 0x40BF
{
	Global_11646 = iParam0;
	Global_11647 = iParam0;
}

void func_105(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, char* sParam7, int iParam8, int iParam9)//Position - 0x40D3
{
	unk_0x29CD142125FE177B(*uParam0, func_106());
	unk_0x57016C44F10111F0("STRING");
	unk_0x449F0674640D94C0(iParam9);
	unk_0xC9C304D0AABE1335(sParam1);
	unk_0x64989E60CF560CA1();
	unk_0x57016C44F10111F0(sParam7);
	unk_0xAA5C5BF0489E5553(iParam2);
	unk_0xAA5C5BF0489E5553(iParam3);
	unk_0xC9C304D0AABE1335(sParam6);
	unk_0xAA5C5BF0489E5553(iParam5);
	unk_0xAA5C5BF0489E5553(iParam4);
	unk_0x64989E60CF560CA1();
	unk_0xF9FBC2F3F73D94C9();
	func_102(&(uParam0->f_2));
	uParam0->f_1 = iParam8;
	uParam0->f_9 = 1;
}

char* func_106()//Position - 0x413E
{
	if (unk_0x7AF0088ABFA713B6())
	{
		return "SHOW_COND_SHARD_MESSAGE";
	}
	return "SHOW_SHARD_MIDSIZED_MESSAGE";
}

char* func_107(var uParam0)//Position - 0x4158
{
	char* sVar0;
	
	switch (uParam0->f_19B)
	{
		case 0:
			sVar0 = "TAXI_SC_BN_02";
			break;
		
		case 1:
			sVar0 = "TAXI_SC_BN_01";
			break;
		
		case 2:
			sVar0 = "TAXI_SC_BN_03";
			break;
		
		case 3:
			sVar0 = "TAXI_SC_BN_12";
			break;
		
		case 4:
			sVar0 = "TAXI_SC_BN_08";
			break;
		
		case 5:
			sVar0 = "TAXI_SC_BN_07";
			break;
		
		case 6:
			sVar0 = "TAXI_SC_KO";
			break;
		
		case 7:
			sVar0 = "TAXI_SC_BN_10";
			break;
		
		case 8:
			sVar0 = "TAXI_SC_BN_04";
			break;
	}
	return sVar0;
}

void func_108(var uParam0)//Position - 0x41F2
{
	int iVar0;
	
	Local_161.f_1 = SYSTEM::TO_FLOAT(uParam0->f_32);
	Local_161.f_2 = SYSTEM::TO_FLOAT(uParam0->f_38);
	func_52(11, uParam0->f_38);
	func_52(12, uParam0->f_38);
	iLocal_57[1] = uParam0->f_38;
	iLocal_57[2] = uParam0->f_38;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_3C)
	{
		Local_161.f_4[iVar0 /*3*/] = { uParam0->f_3C[iVar0 /*3*/] };
		if (unk_0xFA30DFD0084E92FE(Local_161.f_4[iVar0 /*3*/], 2))
		{
			Local_161.f_3 = (Local_161.f_3 + IntToFloat(uParam0->f_3C[iVar0 /*3*/].f_1));
		}
		iVar0++;
	}
	Local_161 = uParam0->f_19B;
	Local_161.f_14 = ((Local_161.f_1 + Local_161.f_2) + Local_161.f_3);
}

float func_109(int iParam0, vector3 vParam1, bool bParam2)//Position - 0x42A1
{
	if (unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		return -1f;
	}
	return unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(iParam0, true), vParam1, bParam2);
}

int func_110(var uParam0, bool bParam1)//Position - 0x42CB
{
	if (!unk_0x1D403DFADBC2DE3C(uParam0->f_3, 0))
	{
		if (func_120(uParam0) && func_116(uParam0, 1, 1084227584))
		{
			if (bParam1)
			{
				if (func_115(uParam0, 2097152))
				{
					func_111(uParam0);
				}
			}
			else
			{
				func_111(uParam0);
			}
		}
		else if (!func_120(uParam0))
		{
			if (bParam1)
			{
				if (func_115(uParam0, 2097152))
				{
					if (unk_0xF4FCC3C1048FF2AB(uParam0->f_3, 451360105) == 7)
					{
						return 1;
					}
				}
			}
			else if (unk_0xF4FCC3C1048FF2AB(uParam0->f_3, 451360105) == 7)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_111(var uParam0)//Position - 0x4368
{
	vector3 vVar0;
	
	if (func_114(uParam0->f_1D))
	{
		vVar0 = { uParam0->f_11 };
	}
	else
	{
		vVar0 = { uParam0->f_1D };
	}
	func_112(uParam0, vVar0);
}

void func_112(var uParam0, vector3 vParam1)//Position - 0x439E
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
	{
		if (!unk_0x1D403DFADBC2DE3C(uParam0->f_3, 0) && unk_0x25EF720B1CAB1E23(uParam0->f_3, uParam0->f_4))
		{
			vVar0 = { unk_0xA4455714F3DCE207(uParam0->f_4, -1.78774f, -1.62399f, -0.6206f) };
			vVar1 = { unk_0xA4455714F3DCE207(uParam0->f_4, 1.78498f, -1.24105f, -0.6422f) };
			if (func_113(uParam0->f_3, uParam0->f_4) == 0)
			{
				unk_0x932E201A82D2EDB8(uParam0->f_3, uParam0->f_4, 512);
			}
			else if (unk_0xF0F2FC9DE291567F(vVar0, vParam1, false) < unk_0xF0F2FC9DE291567F(vVar1, vParam1, false) && unk_0x2101FAC9A9D4C29D(uParam0->f_3, uParam0->f_4, 1, 0, false))
			{
				unk_0x932E201A82D2EDB8(uParam0->f_3, uParam0->f_4, 131072);
			}
			else if (unk_0xF0F2FC9DE291567F(vVar0, vParam1, false) >= unk_0xF0F2FC9DE291567F(vVar1, vParam1, false) && unk_0x2101FAC9A9D4C29D(uParam0->f_3, uParam0->f_4, 2, 0, false))
			{
				unk_0x932E201A82D2EDB8(uParam0->f_3, uParam0->f_4, 262144);
			}
			else
			{
				unk_0x932E201A82D2EDB8(uParam0->f_3, uParam0->f_4, 0);
			}
		}
	}
}

int func_113(int iParam0, int iParam1)//Position - 0x44BF
{
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0) && !unk_0x1D403DFADBC2DE3C(iParam1, 0))
	{
		if (unk_0x25EF720B1CAB1E23(iParam0, iParam1))
		{
			if (unk_0x3187EF5798B5D209(iParam1, -1, 0) == iParam0)
			{
				return -1;
			}
			if (unk_0x3187EF5798B5D209(iParam1, 0, 0) == iParam0)
			{
				return 0;
			}
			if (unk_0x3187EF5798B5D209(iParam1, 1, 0) == iParam0)
			{
				return 1;
			}
			if (unk_0x3187EF5798B5D209(iParam1, 2, 0) == iParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

int func_114(vector3 vParam0)//Position - 0x4531
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_115(var uParam0, int iParam1)//Position - 0x455B
{
	if (iParam1 != 1073741824)
	{
		return (func_24(uParam0->f_51, iParam1) && !func_51());
	}
	return func_51();
}

int func_116(var uParam0, bool bParam1, float fParam2)//Position - 0x4588
{
	if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
	{
		if (unk_0x62F3A07C43FFB568(uParam0->f_2, uParam0->f_4, 0))
		{
			if (func_46(1))
			{
				func_44(0);
			}
			if (func_35())
			{
				func_119();
				return 1;
			}
			else if (func_117(uParam0->f_4, fParam2, 1, 1056964608, 0, 1, 0))
			{
				if (bParam1)
				{
					unk_0xDDCAA2E64649E083(unk_0xFC1CAE18F3ECBF2D(), false, 256);
				}
				else
				{
					unk_0xDDCAA2E64649E083(unk_0xFC1CAE18F3ECBF2D(), false, 0);
				}
			}
			unk_0x44126473C39898E7(uParam0->f_4, 1);
		}
	}
	return 0;
}

int func_117(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x4609
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
	func_118(iParam0);
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

void func_118(int iParam0)//Position - 0x4798
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

void func_119()//Position - 0x47C4
{
	if (unk_0x36210078ECC9DC40(unk_0xB5CEFD608600A09F()))
	{
		unk_0xD50A43D7C495F078(unk_0xB5CEFD608600A09F());
	}
}

int func_120(var uParam0)//Position - 0x47DF
{
	if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
	{
		if (!unk_0x36CEFBE9B745A58D(uParam0->f_3))
		{
			if (unk_0x62F3A07C43FFB568(uParam0->f_3, uParam0->f_4, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_121(var uParam0)//Position - 0x4814
{
	if (uParam0->f_38 >= uParam0->f_3B)
	{
		uParam0->f_38 = SYSTEM::CEIL((IntToFloat(uParam0->f_32) * 0.4f));
	}
	else if (uParam0->f_38 < uParam0->f_3B && uParam0->f_38 >= uParam0->f_3A)
	{
		uParam0->f_38 = SYSTEM::CEIL((IntToFloat(uParam0->f_32) * 0.15f));
	}
	else
	{
		uParam0->f_38 = 0;
	}
	if (!func_24(uParam0->f_37, 1))
	{
		func_228(&(uParam0->f_37), 1);
	}
}

void func_122(var uParam0)//Position - 0x4888
{
	func_124();
	unk_0xEB233A3B7635D2AC();
	if (uParam0->f_38 < uParam0->f_3A)
	{
		if (uParam0->f_19B == 0)
		{
			func_191(uParam0, 105, 1, 0, 0);
		}
		else
		{
			func_191(uParam0, 103, 1, 0, 0);
		}
		func_123(1);
	}
	else if (uParam0->f_38 >= uParam0->f_3B)
	{
		func_191(uParam0, 101, 1, 0, 0);
	}
	else
	{
		func_191(uParam0, 102, 1, 0, 0);
	}
	func_260(uParam0, 16, 4f, 0);
}

void func_123(int iParam0)//Position - 0x48FB
{
	Global_195FA.f_DD = iParam0;
}

void func_124()//Position - 0x490B
{
	Global_394A = 0;
	func_125();
}

void func_125()//Position - 0x491B
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

void func_126(var uParam0)//Position - 0x493F
{
	float fVar0;
	
	fVar0 = uParam0->f_29;
	fVar0 = func_127(fVar0);
	iLocal_57[4] = SYSTEM::CEIL(fVar0);
	iLocal_57[5] = SYSTEM::CEIL(fVar0);
	func_52(4, SYSTEM::CEIL(fVar0));
	func_52(5, SYSTEM::CEIL(fVar0));
	uParam0->f_32 = SYSTEM::CEIL((fVar0 * 100f));
}

float func_127(float fParam0)//Position - 0x4991
{
	return (fParam0 * 0.0006213712f);
}

void func_128(var uParam0)//Position - 0x49A1
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x2F1B39E315395385(uParam0->f_49[iVar0]))
		{
			unk_0x2CA8D9DC16C6AF09(uParam0->f_49[iVar0], 0);
		}
		iVar0++;
	}
	iLocal_245 = 0;
}

void func_129(var uParam0, int iParam1)//Position - 0x49DB
{
	if (iParam1 < 5)
	{
		unk_0xF0059F27F7BB6680(&(uParam0->f_3C[iParam1 /*3*/]), 2);
		uParam0->f_69 = (uParam0->f_69 + uParam0->f_3C[iParam1 /*3*/].f_1);
	}
}

bool func_130(var uParam0)//Position - 0x4A09
{
	return ((uParam0->f_37[0] && uParam0->f_37[1]) && uParam0->f_37[2]);
}

void func_131(var uParam0, int iParam1, bool bParam2)//Position - 0x4A30
{
	if (bParam2)
	{
		*uParam0 = 0;
	}
	else
	{
		*uParam0 = -1;
	}
	if (iParam1 > -1)
	{
		uParam0->f_1B = iParam1;
	}
}

int func_132(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0x4A54
{
	int iVar0;
	
	func_170(uParam0, uParam2, uParam1);
	if (func_169(uParam0) >= 14)
	{
		if (iLocal_250)
		{
			if (((func_383(uParam0, 11) > 20f && !func_51()) && !unk_0x4B8E3E5901E59EB8()) && !bLocal_248)
			{
				bLocal_248 = true;
			}
		}
	}
	if (uParam1->f_5A < 2)
	{
		if (uParam1->f_41 && !iLocal_250)
		{
			func_163(uParam0, uParam1, 0, uParam1->f_41);
			uParam1->f_41 = 0;
		}
		else
		{
			func_163(uParam0, uParam1, 0, 0);
		}
		if (uParam1->f_42 && uParam1->f_5A < 1)
		{
			if (!unk_0x36CEFBE9B745A58D((*uParam1)[uParam1->f_5F]) && unk_0x5237AF95232D78C5((*uParam1)[uParam1->f_5F], 0))
			{
				if (!iLocal_254)
				{
					if (func_162(uParam1[uParam1->f_5F], &(uParam1->f_5E)))
					{
						func_161(&(uParam1->f_5F));
					}
				}
				else if (!uParam1->f_48)
				{
					unk_0xA4E856A8CD53B8DF((*uParam1)[uParam1->f_5F]);
					unk_0xDE2D2B13F24A979D((*uParam1)[uParam1->f_5F], 500);
					uParam1->f_48 = 1;
				}
			}
		}
	}
	else if (!uParam1->f_3E)
	{
		func_163(uParam0, uParam1, 1, 0);
	}
	if ((((unk_0x36CEFBE9B745A58D((*uParam1)[0]) || unk_0x36CEFBE9B745A58D((*uParam1)[1])) || unk_0x36CEFBE9B745A58D((*uParam1)[2])) || unk_0xD9C1758D86688CEA((*uParam1)[1], uParam0->f_4, 1)) || unk_0xD9C1758D86688CEA((*uParam1)[2], uParam0->f_4, 1))
	{
		uParam0->f_19F = 14;
		func_293(uParam0, "Passenger injured.", 14);
	}
	if (!func_147(uParam0, uParam1))
	{
		if (!unk_0x2101FAC9A9D4C29D(uParam0->f_2, uParam0->f_4, -1, 0, false))
		{
			unk_0xA3981DED4FC2E56E((*uParam1)[0], 0, 0);
			bLocal_252 = true;
			iLocal_253 = 0;
		}
	}
	else
	{
		if (bLocal_252)
		{
			if (unk_0x1AAF0C23233C57AF(uParam0->f_4, 0, 0))
			{
				if (!iLocal_253)
				{
					unk_0xD179FA0466FA4FE3((*uParam1)[0], uParam0->f_4, 20000, 0, 2f, 1, 0);
					iLocal_253 = 1;
				}
				if (func_10(uParam0->f_4, (*uParam1)[0], 1) > 40f)
				{
					func_293(uParam0, "Passenger left behind.", 8);
				}
			}
			if (unk_0x3187EF5798B5D209(uParam0->f_4, 0, 0) == (*uParam1)[0])
			{
				func_182(uParam1);
				bLocal_252 = false;
			}
		}
		func_144(uParam0, 1097859072, 1117782016);
		func_143(uParam0, &(uParam0->f_2B));
		if (!bLocal_252 && !unk_0x62F3A07C43FFB568((*uParam1)[0], uParam0->f_4, 0))
		{
			func_293(uParam0, "Passenger left car.", 9);
		}
		switch (uParam1->f_5A)
		{
			case 0:
				if (!uParam1->f_33[2])
				{
					if (func_109(uParam0->f_4, uParam1->f_10[2 /*3*/], 1) < 150f && !iLocal_254)
					{
						func_191(uParam0, 99, 1, 0, 0);
						iLocal_254 = 1;
					}
					if (unk_0x4DBCE270B354E123(uParam0->f_4, uParam1->f_10[2 /*3*/], 5f, 5f, 2f, !uParam0->f_8C, true, 0))
					{
						if (func_116(uParam0, 1, 4f))
						{
							if (!unk_0x36CEFBE9B745A58D((*uParam1)[2]))
							{
								unk_0x07B8ECB35A4ED3AC(&(uParam1->f_24[2]));
								func_124();
								if (uParam1->f_5F == 2)
								{
									unk_0xA4E856A8CD53B8DF((*uParam1)[2]);
								}
								unk_0x02DAF06EA4F08219(&iVar0);
								unk_0xC5A6DFE2B8987B17(&iVar0);
								unk_0xA3981DED4FC2E56E(0, 0, 0);
								unk_0x346129B364057FF6(0, -98.0071f, -851.2611f, 40.9833f, 1f, 30000, 1048576000, 0, 1193033728);
								unk_0x346129B364057FF6(0, -83.1601f, -835.3889f, 39.5744f, 1f, 20000, 1048576000, 0, 1193033728);
								unk_0xA3A7138EAD2268A0(0, "WORLD_HUMAN_STAND_MOBILE", 0, 0);
								unk_0x535008C596714F9E(iVar0);
								unk_0xA8E6405305C0D7DF((*uParam1)[2], iVar0);
								unk_0x02DAF06EA4F08219(&iVar0);
								if (func_383(uParam0, 6) < fLocal_255)
								{
									uParam1->f_37[2] = 1;
									func_191(uParam0, 38, 1, 0, 0);
									uParam0->f_38 += 3;
								}
								else
								{
									uParam1->f_37[2] = 0;
									func_191(uParam0, 39, 1, 0, 0);
									uParam0->f_38 = (uParam0->f_38 - 3);
								}
								uParam1->f_5A++;
								func_141(uParam0, 6);
							}
						}
					}
				}
				break;
			
			case 1:
				if ((!func_139((*uParam1)[2], uParam0->f_4) && func_383(uParam0, 20) > 1f) && !uParam1->f_33[2])
				{
					func_128(uParam1);
					uParam1->f_33[2] = 1;
					uParam0->f_1A = { 193.102f, -220.0569f, 52.8647f };
					uParam0->f_22 = 250.7f;
					unk_0xDDCAA2E64649E083(unk_0xFC1CAE18F3ECBF2D(), true, 0);
				}
				else if (!func_136(uParam0) && unk_0x8CC5A4A5615C6420(unk_0xFC1CAE18F3ECBF2D()))
				{
					func_134(uParam3);
					func_131(uParam2, -1, 0);
					func_260(uParam0, 6, 0, 0);
					func_260(uParam0, 11, 0, 0);
					func_191(uParam0, 40, 1, 0, 0);
					if (!unk_0x2DA8CA50A72528FB(uParam1->f_24[1]))
					{
						func_182(uParam1);
					}
					iLocal_254 = 0;
					uParam1->f_5A++;
				}
				break;
			
			case 2:
				if (!uParam1->f_33[1])
				{
					if (func_109(uParam0->f_4, uParam1->f_10[1 /*3*/], 1) < 175f && !iLocal_254)
					{
						func_191(uParam0, 99, 1, 0, 0);
						iLocal_254 = 1;
					}
					if (unk_0x4DBCE270B354E123(uParam0->f_4, uParam1->f_10[1 /*3*/], 5f, 5f, 2f, !uParam0->f_8C, true, 0))
					{
						if (func_116(uParam0, 1, 4f))
						{
							if (!unk_0x36CEFBE9B745A58D((*uParam1)[1]))
							{
								func_124();
								unk_0x07B8ECB35A4ED3AC(&(uParam1->f_24[1]));
								func_133(&(uParam0->f_4), uParam1[1], uParam1->f_1A[1 /*3*/]);
								if (func_383(uParam0, 6) < fLocal_256)
								{
									uParam1->f_37[1] = 1;
									func_191(uParam0, 41, 1, 0, 0);
									uParam0->f_38 += 2;
								}
								else
								{
									uParam1->f_37[1] = 0;
									func_191(uParam0, 42, 1, 0, 0);
									uParam0->f_38 = (uParam0->f_38 - 2);
								}
								uParam1->f_5A++;
								func_141(uParam0, 6);
							}
						}
					}
				}
				break;
			
			case 3:
				if ((!func_139((*uParam1)[1], uParam0->f_4) && func_383(uParam0, 20) > 1f) && !uParam1->f_33[1])
				{
					uParam1->f_33[1] = 1;
					uParam0->f_1A = { 51.4688f, -1302.042f, 28.1383f };
					uParam0->f_22 = 216.5f;
					unk_0xDDCAA2E64649E083(unk_0xFC1CAE18F3ECBF2D(), true, 0);
				}
				else if (!func_136(uParam0) && unk_0x8CC5A4A5615C6420(unk_0xFC1CAE18F3ECBF2D()))
				{
					func_134(uParam3);
					func_131(uParam2, -1, 0);
					func_260(uParam0, 6, 0, 0);
					func_260(uParam0, 11, 0, 0);
					func_191(uParam0, 43, 1, 0, 0);
					iLocal_254 = 0;
					if (!unk_0x2DA8CA50A72528FB(uParam1->f_24[0]))
					{
						func_182(uParam1);
					}
					uParam1->f_5A++;
				}
				break;
			
			case 4:
				if (!uParam1->f_33[0])
				{
					if (func_109(uParam0->f_4, uParam1->f_10[0 /*3*/], 1) < 100f && !iLocal_254)
					{
						func_191(uParam0, 99, 1, 0, 0);
						iLocal_254 = 1;
					}
					if (unk_0x4DBCE270B354E123(uParam0->f_4, uParam1->f_10[0 /*3*/], 5f, 5f, 2f, !uParam0->f_8C, true, 0))
					{
						if (func_116(uParam0, 1, 4f))
						{
							unk_0x07B8ECB35A4ED3AC(&(uParam1->f_24[0]));
							uParam1->f_33[0] = 1;
							func_124();
							if (func_383(uParam0, 6) < fLocal_257)
							{
								uParam1->f_37[0] = 1;
								uParam0->f_38 += 2;
							}
							else
							{
								uParam1->f_37[0] = 0;
								uParam0->f_38 = (uParam0->f_38 - 2);
							}
							return 1;
						}
					}
				}
				break;
			}
	}
	return 0;
}

void func_133(var uParam0, var uParam1, vector3 vParam2)//Position - 0x51A9
{
	vector3 vVar0;
	vector3 vVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	
	if (unk_0xE59B7F5A03335350(*uParam0, 0))
	{
		if (!unk_0x1D403DFADBC2DE3C(*uParam1, 0))
		{
			vVar0 = { unk_0xA4455714F3DCE207(*uParam0, -1.78774f, -1.62399f, -0.6206f) };
			vVar1 = { unk_0xA4455714F3DCE207(*uParam0, 1.78498f, -1.24105f, -0.6422f) };
			if (unk_0xF0F2FC9DE291567F(vVar0, vParam2, false) < unk_0xF0F2FC9DE291567F(vVar1, vParam2, false) && unk_0x2101FAC9A9D4C29D(*uParam1, *uParam0, 1, 0, false))
			{
				iVar2 = 131072;
			}
			else if (unk_0xF0F2FC9DE291567F(vVar0, vParam2, false) >= unk_0xF0F2FC9DE291567F(vVar1, vParam2, false) && unk_0x2101FAC9A9D4C29D(*uParam1, *uParam0, 2, 0, false))
			{
				iVar2 = 262144;
			}
			else
			{
				iVar2 = 16;
			}
			vVar4 = { 312.9961f, -274.4479f, 52.92882f };
			if (iVar2 == 16)
			{
				unk_0x02DAF06EA4F08219(&iVar3);
				unk_0xC5A6DFE2B8987B17(&iVar3);
				unk_0xA3981DED4FC2E56E(0, 0, 0);
				unk_0x346129B364057FF6(0, vVar4, 1f, 20000, 1048576000, 0, 1193033728);
				unk_0xBE2047F9F9DE6F43(0, vVar4, 5f, 0);
				unk_0x346129B364057FF6(0, vParam2, 1f, 20000, 1048576000, 0, 1193033728);
				unk_0x535008C596714F9E(iVar3);
				unk_0xA8E6405305C0D7DF(*uParam1, iVar3);
			}
			else
			{
				unk_0x02DAF06EA4F08219(&iVar3);
				unk_0xC5A6DFE2B8987B17(&iVar3);
				unk_0x932E201A82D2EDB8(0, *uParam0, iVar2);
				unk_0x346129B364057FF6(0, vVar4, 1f, 20000, 1048576000, 0, 1193033728);
				unk_0xBE2047F9F9DE6F43(0, vVar4, 5f, 0);
				unk_0x346129B364057FF6(0, vParam2, 1f, 20000, 1048576000, 0, 1193033728);
				unk_0x535008C596714F9E(iVar3);
				unk_0xA8E6405305C0D7DF(*uParam1, iVar3);
			}
		}
	}
}

void func_134(var uParam0)//Position - 0x534C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		(uParam0[iVar0 /*8*/])->f_6 = 0;
		(uParam0[iVar0 /*8*/])->f_7 = 0;
		StringCopy(uParam0[iVar0 /*8*/], func_135(), 24);
		iVar0++;
	}
	unk_0xEB233A3B7635D2AC();
	func_49();
}

var func_135()//Position - 0x538C
{
	var uVar0;
	
	return uVar0;
}

int func_136(var uParam0)//Position - 0x5396
{
	if (func_51())
	{
		return 1;
	}
	if (func_138(uParam0, 17))
	{
		return 1;
	}
	if (func_138(uParam0, 14))
	{
		return 1;
	}
	if (func_137(uParam0))
	{
		return 1;
	}
	return 0;
}

bool func_137(var uParam0)//Position - 0x53D5
{
	return uParam0->f_6E;
}

bool func_138(var uParam0, int iParam1)//Position - 0x53E1
{
	return func_16(&(uParam0->f_92[iParam1 /*3*/]));
}

int func_139(int iParam0, int iParam1)//Position - 0x53F5
{
	if (func_140(iParam0, iParam1))
	{
		if (unk_0x62F3A07C43FFB568(iParam0, iParam1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_140(int iParam0, int iParam1)//Position - 0x5419
{
	if (unk_0xE59B7F5A03335350(iParam1, 0))
	{
		if (!unk_0x36CEFBE9B745A58D(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_141(var uParam0, int iParam1)//Position - 0x543A
{
	int iVar0;
	
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (!func_15(&(uParam0->f_92[iVar0 /*3*/])))
			{
				func_142(&(uParam0->f_92[iVar0 /*3*/]));
			}
			iVar0++;
		}
	}
	else if (func_16(&(uParam0->f_92[iParam1 /*3*/])))
	{
		if (!func_15(&(uParam0->f_92[iParam1 /*3*/])))
		{
			func_142(&(uParam0->f_92[iParam1 /*3*/]));
		}
	}
}

void func_142(int iParam0)//Position - 0x54A6
{
	if (func_16(iParam0))
	{
		if (!func_15(iParam0))
		{
			iParam0->f_2 = (func_14(unk_0xFA30DFD0084E92FE(*iParam0, 4)) - iParam0->f_1);
			unk_0xF0059F27F7BB6680(iParam0, 2);
		}
	}
}

void func_143(var uParam0, var uParam1)//Position - 0x54E0
{
	unk_0x70870CD1718D74F0(uParam0->f_1AC, uParam1, -1);
	uParam0->f_29 = (*uParam1 - uParam0->f_2A);
}

void func_144(var uParam0, float fParam1, float fParam2)//Position - 0x5501
{
	if (func_120(uParam0) && func_24(uParam0->f_2C, 4))
	{
		if ((unk_0xB66CFDE6B830965A(uParam0->f_4) || unk_0x8910237449BB6F79(uParam0->f_4) < 3f) && func_146(uParam0))
		{
			if (!func_138(uParam0, 2))
			{
				func_185(uParam0, 2);
			}
			else if (func_120(uParam0))
			{
				if (func_383(uParam0, 2) > fParam1 && !func_138(uParam0, 14))
				{
					if (func_37())
					{
						func_191(uParam0, 48, 1, 0, 0);
					}
					else
					{
						func_191(uParam0, 48, 1, 0, 0);
					}
					func_260(uParam0, 2, 0, 0);
					if (func_138(uParam0, 10))
					{
						func_260(uParam0, 10, 0, 0);
					}
				}
				if (!func_138(uParam0, 3))
				{
					func_260(uParam0, 3, 0, 0);
				}
				else if (func_383(uParam0, 3) >= fParam2)
				{
					func_145(uParam0, 3, 0);
					func_293(uParam0, "Car not moving", 20);
				}
			}
		}
		else
		{
			if (func_138(uParam0, 2))
			{
				func_145(uParam0, 2, 0);
			}
			if (func_138(uParam0, 3))
			{
				func_145(uParam0, 3, 0);
			}
		}
	}
}

void func_145(var uParam0, int iParam1, bool bParam2)//Position - 0x561C
{
	int iVar0;
	
	if (iParam1 == 14)
	{
	}
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			func_99(&(uParam0->f_92[iVar0 /*3*/]));
			iVar0++;
		}
	}
	else
	{
		func_99(&(uParam0->f_92[iParam1 /*3*/]));
	}
	if (bParam2)
	{
	}
}

int func_146(var uParam0)//Position - 0x5665
{
	if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
	{
		if (unk_0x3187EF5798B5D209(uParam0->f_4, -1, 0) == unk_0xBC25C936A095B5BA())
		{
			return 1;
		}
	}
	return 0;
}

int func_147(var uParam0, var uParam1)//Position - 0x568F
{
	int iVar0;
	bool bVar1;
	
	bVar1 = true;
	if (!unk_0xE59B7F5A03335350(uParam0->f_4, 0))
	{
		func_293(uParam0, "IS_TAXI_RIDE_ALL_READY - Taxi not drivable.", 0);
	}
	else
	{
		func_160(uParam0, &(uParam1->f_28));
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0x36CEFBE9B745A58D((*uParam1)[iVar0]))
			{
				func_293(uParam0, "Passenger injured.", 15);
				bVar1 = false;
			}
			iVar0++;
		}
		if (bVar1)
		{
			if (func_148(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_148(var uParam0)//Position - 0x5700
{
	if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
	{
		if (unk_0x3187EF5798B5D209(uParam0->f_4, -1, 0) == uParam0->f_2)
		{
			if (func_138(uParam0, 14))
			{
				func_156(uParam0);
			}
			func_149(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

void func_149(var uParam0, bool bParam1)//Position - 0x5742
{
	if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
	{
		if (bParam1)
		{
			if (unk_0x2DA8CA50A72528FB(uParam0->f_8))
			{
				unk_0x7781946F1FC054FA(uParam0->f_8, 0);
				unk_0x0BBAABB52887CF8C(uParam0->f_8, false);
				func_155(uParam0, &(uParam0->f_62), 4, 3);
			}
			else if (unk_0x2DA8CA50A72528FB(uParam0->f_9))
			{
				unk_0x7781946F1FC054FA(uParam0->f_9, 0);
				unk_0x0BBAABB52887CF8C(uParam0->f_9, false);
				unk_0xEB233A3B7635D2AC();
				if (func_120(uParam0))
				{
					func_191(uParam0, 2, 1, 0, 0);
				}
				else
				{
					func_155(uParam0, &(uParam0->f_62), 4, 3);
				}
			}
			func_150(uParam0, 0, 0);
		}
		else if (unk_0x2DA8CA50A72528FB(uParam0->f_A))
		{
			unk_0x07B8ECB35A4ED3AC(&(uParam0->f_A));
			if (unk_0x2DA8CA50A72528FB(uParam0->f_8))
			{
				unk_0x7781946F1FC054FA(uParam0->f_8, 255);
				unk_0x0BBAABB52887CF8C(uParam0->f_8, true);
			}
			else if (unk_0x2DA8CA50A72528FB(uParam0->f_9))
			{
				if (uParam0->f_19B == 5 && uParam0->f_19A == 17)
				{
					unk_0x7781946F1FC054FA(uParam0->f_9, 0);
					unk_0x0BBAABB52887CF8C(uParam0->f_9, false);
				}
				else if (uParam0->f_19B != 4)
				{
					unk_0x7781946F1FC054FA(uParam0->f_9, 255);
					unk_0x0BBAABB52887CF8C(uParam0->f_9, true);
				}
			}
			unk_0xEB233A3B7635D2AC();
		}
	}
}

void func_150(var uParam0, bool bParam1, bool bParam2)//Position - 0x5860
{
	if (bParam1)
	{
		func_387(uParam0);
	}
	if (!unk_0x2DA8CA50A72528FB(uParam0->f_A))
	{
		uParam0->f_A = func_153(uParam0->f_4, 1, 0);
		unk_0x436D0272182E484D(uParam0->f_A, "TAXI_BLIP_CAR");
		unk_0x0BBAABB52887CF8C(uParam0->f_A, true);
		func_151(uParam0);
		if (bParam2)
		{
			unk_0xEB233A3B7635D2AC();
			func_191(uParam0, 3, 1, 0, 0);
		}
	}
}

void func_151(var uParam0)//Position - 0x58BB
{
	func_260(uParam0, 14, 0, 0);
	func_152();
}

void func_152()//Position - 0x58D1
{
	int iVar0;
	
	iVar0 = unk_0x3E12B546F3F2597A();
	if (unk_0xE59B7F5A03335350(iVar0, 0))
	{
		unk_0xF2C27FE5A8B98CB5(-1, "Radio_Off", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

int func_153(int iParam0, bool bParam1, bool bParam2)//Position - 0x58FA
{
	int iVar0;
	
	if (!unk_0x724D816EA203A79E(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x511FE22BCF5353CD(iParam0);
	if (unk_0xD27AC0E9B78CFDD7(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(iVar0, func_154(unk_0x7AF0088ABFA713B6(), 1f, 1f));
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
		unk_0x3F5F1772D71D5EC4(iVar0, func_154(unk_0x7AF0088ABFA713B6(), 0.7f, 0.7f));
		unk_0xF9C2945DB5BAB4BF(iVar0, bParam1);
	}
	else if (unk_0xB12D030810E8447D(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(iVar0, func_154(unk_0x7AF0088ABFA713B6(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_154(bool bParam0, float fParam1, float fParam2)//Position - 0x599E
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_155(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x59B5
{
	if (!func_24(*uParam1, iParam2))
	{
		unk_0xEB233A3B7635D2AC();
		func_191(uParam0, iParam3, 1, 0, 0);
		func_228(uParam1, iParam2);
	}
}

void func_156(var uParam0)//Position - 0x59E1
{
	func_145(uParam0, 14, 0);
	func_145(uParam0, 15, 0);
	func_159();
	if (func_158())
	{
		func_157(0);
	}
}

void func_157(int iParam0)//Position - 0x5A0B
{
	Global_41AB = iParam0;
}

int func_158()//Position - 0x5A18
{
	if (Global_41AB == 1)
	{
		return 1;
	}
	return 0;
}

void func_159()//Position - 0x5A2F
{
	int iVar0;
	
	iVar0 = unk_0x3E12B546F3F2597A();
	if (unk_0xE59B7F5A03335350(iVar0, 0))
	{
		unk_0xF2C27FE5A8B98CB5(-1, "Radio_On", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

void func_160(var uParam0, var uParam1)//Position - 0x5A58
{
	if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
	{
		if (!unk_0x62F3A07C43FFB568(uParam0->f_2, uParam0->f_4, 0))
		{
			if (!func_138(uParam0, 14))
			{
				if (unk_0x2DA8CA50A72528FB(*uParam1) && unk_0xB1D6718ACE798CBB(*uParam1) > 0)
				{
					unk_0x7781946F1FC054FA(*uParam1, 0);
				}
				func_150(uParam0, 0, 0);
				func_191(uParam0, 2, 1, 1, 0);
			}
			else if (func_383(uParam0, 14) > 20f)
			{
				func_293(uParam0, "Player not in taxi.", 9);
			}
		}
		else
		{
			if (func_138(uParam0, 14))
			{
				func_156(uParam0);
			}
			if (unk_0x2DA8CA50A72528FB(uParam0->f_A))
			{
				unk_0x07B8ECB35A4ED3AC(&(uParam0->f_A));
			}
			if ((unk_0x2DA8CA50A72528FB(*uParam1) && unk_0xB1D6718ACE798CBB(*uParam1) < 255) && unk_0x904E94842BB9E173(unk_0xFC1CAE18F3ECBF2D()) < 1)
			{
				unk_0x7781946F1FC054FA(*uParam1, 255);
				unk_0x0BBAABB52887CF8C(*uParam1, true);
			}
		}
	}
}

void func_161(var uParam0)//Position - 0x5B3B
{
	int iVar0;
	
	iVar0 = *uParam0;
	iVar0++;
	if (iVar0 == 3)
	{
		iVar0 = 0;
	}
	*uParam0 = iVar0;
}

int func_162(var uParam0, var uParam1)//Position - 0x5B5C
{
	int iVar0;
	
	switch (*uParam1)
	{
		case 0:
			unk_0x02DAF06EA4F08219(&iVar0);
			unk_0xC5A6DFE2B8987B17(&iVar0);
			unk_0xE896C0AD02364F2A(0, "oddjobs@taxi@gyn@cc@hotbox", "idle_b", 8f, -8f, -1, 0, 0, 0, 0, 0);
			unk_0xE896C0AD02364F2A(0, "oddjobs@taxi@gyn@cc@hotbox", "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
			unk_0xE896C0AD02364F2A(0, "oddjobs@taxi@gyn@cc@hotbox", "idle_b", 8f, -8f, -1, 0, 0, 0, 0, 0);
			unk_0xE896C0AD02364F2A(0, "oddjobs@taxi@gyn@cc@hotbox", "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
			unk_0xE896C0AD02364F2A(0, "oddjobs@taxi@gyn@cc@hotbox", "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
			unk_0x535008C596714F9E(iVar0);
			unk_0xA8E6405305C0D7DF(*uParam0, iVar0);
			*uParam1 = 1;
			break;
		
		case 1:
			if (unk_0xF4FCC3C1048FF2AB(*uParam0, 242628503) != 1 || unk_0xF4FCC3C1048FF2AB(*uParam0, 242628503) == 7)
			{
				*uParam1 = 0;
				return 1;
			}
			break;
	}
	return 0;
}

void func_163(var uParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0x5C5C
{
	var uVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	
	if (bLocal_248)
	{
		if (!uParam1->f_3B)
		{
			if (!func_51())
			{
				func_167(&(uParam1->f_63));
				uParam1->f_3B = 1;
				func_166(uParam0, uParam1);
				uParam1->f_5B = unk_0x105601648511CC64();
			}
		}
	}
	if (bLocal_249)
	{
		if (!uParam1->f_3C)
		{
			if (!func_51())
			{
				uParam1->f_3C = 1;
				func_165(uParam0, uParam1);
				uParam1->f_5B = unk_0x105601648511CC64();
				uParam1->f_5C = unk_0x105601648511CC64();
			}
		}
	}
	uVar0 = func_164(uParam0);
	if (uParam1->f_3B || uParam1->f_3C)
	{
		fVar2 = unk_0x8910237449BB6F79(uParam0->f_4);
		fVar3 = 4f;
		if (fVar2 >= fVar3)
		{
			fVar4 = 1f;
		}
		else
		{
			fVar4 = (fVar2 / fVar3);
		}
		if (uParam1->f_3C)
		{
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < 4)
			{
				if (unk_0x2F1B39E315395385(uParam1->f_49[iVar1]))
				{
					unk_0xE426CF2117CBB2CF(uParam1->f_49[iVar1], "speed", fVar4, 0);
				}
				iVar1++;
			}
		}
		if (uParam1->f_3B)
		{
			unk_0xE426CF2117CBB2CF(uParam1->f_58, "speed", fVar4, 0);
			unk_0xE426CF2117CBB2CF(uParam1->f_59, "speed", fVar4, 0);
		}
	}
	if (unk_0x8910237449BB6F79(uParam0->f_4) >= 40f && !uParam1->f_3F)
	{
		uParam1->f_5B = unk_0x105601648511CC64();
		uParam1->f_3F = 1;
	}
	if ((unk_0x8910237449BB6F79(uParam0->f_4) < 40f && uParam1->f_3F) && !bParam2)
	{
		uParam1->f_5B = unk_0x105601648511CC64();
		uParam1->f_3F = 0;
		uParam1->f_3E = 0;
	}
	if (bParam2 && !uParam1->f_3F)
	{
		uParam1->f_5B = unk_0x105601648511CC64();
		uParam1->f_3F = 1;
	}
	if (((uParam1->f_3B || uParam1->f_3C) && !uParam1->f_3F) && !bParam2)
	{
		if (bParam3)
		{
			fVar8 = 0f;
			uParam1->f_3D = 1;
			uParam1->f_3F = 0;
			if (uParam1->f_3C)
			{
				iVar1 = 0;
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if (unk_0x5D4A2D469411FA21(uParam0->f_4, iVar1))
					{
						if (unk_0x2F1B39E315395385(uParam1->f_49[iVar1]))
						{
							unk_0xE426CF2117CBB2CF(uParam1->f_49[iVar1], "smoke", 1f, 0);
						}
					}
					else if (!unk_0x403C891106DCABAF(uParam0->f_4, iVar1))
					{
						if ((unk_0x105601648511CC64() % 2000) < 50)
						{
						}
						if (unk_0x2F1B39E315395385(uParam1->f_49[iVar1]))
						{
							unk_0xE426CF2117CBB2CF(uParam1->f_49[iVar1], "smoke", 1f, 0);
						}
					}
					else if (iVar1 > 1 && uVar0)
					{
						if (unk_0x2F1B39E315395385(uParam1->f_49[iVar1]))
						{
							unk_0xE426CF2117CBB2CF(uParam1->f_49[iVar1], "smoke", fVar8, 0);
						}
					}
					iVar1++;
				}
			}
			if (uParam1->f_3B)
			{
				unk_0xE426CF2117CBB2CF(uParam1->f_58, "smoke", fVar8, 0);
				unk_0xE426CF2117CBB2CF(uParam1->f_59, "smoke", fVar8, 0);
			}
		}
		else
		{
			iVar6 = 6000;
			iVar5 = (unk_0x105601648511CC64() - uParam1->f_5B);
			if (iVar5 >= iVar6)
			{
				fVar8 = 0f;
				uParam1->f_3D = 1;
				uParam1->f_3F = 0;
			}
			else
			{
				fVar8 = (1f - (SYSTEM::TO_FLOAT(iVar5) / SYSTEM::TO_FLOAT(iVar6)));
			}
			if (uParam1->f_3C)
			{
				iVar1 = 0;
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if (unk_0x5D4A2D469411FA21(uParam0->f_4, iVar1))
					{
						if (unk_0x2F1B39E315395385(uParam1->f_49[iVar1]))
						{
							unk_0xE426CF2117CBB2CF(uParam1->f_49[iVar1], "smoke", 1f, 0);
						}
					}
					else if (!unk_0x403C891106DCABAF(uParam0->f_4, iVar1))
					{
						if ((unk_0x105601648511CC64() % 2000) < 50)
						{
						}
						if (unk_0x2F1B39E315395385(uParam1->f_49[iVar1]))
						{
							unk_0xE426CF2117CBB2CF(uParam1->f_49[iVar1], "smoke", 1f, 0);
						}
					}
					else if (iVar1 > 1 && uVar0)
					{
						if (unk_0x2F1B39E315395385(uParam1->f_49[iVar1]))
						{
							unk_0xE426CF2117CBB2CF(uParam1->f_49[iVar1], "smoke", fVar8, 0);
						}
					}
					iVar1++;
				}
			}
			if (uParam1->f_3B)
			{
				unk_0xE426CF2117CBB2CF(uParam1->f_58, "smoke", fVar8, 0);
				unk_0xE426CF2117CBB2CF(uParam1->f_59, "smoke", fVar8, 0);
			}
		}
	}
	if ((uParam1->f_3B || uParam1->f_3C) && ((uParam1->f_3D && !uParam1->f_3E) || bParam2))
	{
		if (uParam1->f_3F)
		{
			iVar7 = 6000;
			iVar5 = (unk_0x105601648511CC64() - uParam1->f_5B);
			if (iVar5 >= iVar7)
			{
				fVar8 = 1f;
				uParam1->f_3E = 1;
			}
			else
			{
				fVar8 = (SYSTEM::TO_FLOAT(iVar5) / SYSTEM::TO_FLOAT(iVar7));
			}
			if (uParam1->f_3C)
			{
				iVar1 = 0;
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if (unk_0x5D4A2D469411FA21(uParam0->f_4, iVar1))
					{
						if (unk_0x2F1B39E315395385(uParam1->f_53[iVar1]))
						{
							unk_0xE426CF2117CBB2CF(uParam1->f_53[iVar1], "smoke", fVar8, 0);
						}
					}
					else if (!unk_0x403C891106DCABAF(uParam0->f_4, iVar1))
					{
						if (unk_0x2F1B39E315395385(uParam1->f_4E[iVar1]))
						{
							unk_0xE426CF2117CBB2CF(uParam1->f_4E[iVar1], "smoke", fVar8, 0);
						}
					}
					if (unk_0x2F1B39E315395385(uParam1->f_49[iVar1]))
					{
						unk_0xE426CF2117CBB2CF(uParam1->f_49[iVar1], "smoke", fVar8, 0);
					}
					iVar1++;
				}
			}
			if (uParam1->f_3B)
			{
				unk_0xE426CF2117CBB2CF(uParam1->f_58, "smoke", fVar8, 0);
				unk_0xE426CF2117CBB2CF(uParam1->f_59, "smoke", fVar8, 0);
			}
		}
	}
}

int func_164(var uParam0)//Position - 0x613E
{
	int iVar0;
	int iVar1;
	
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x5D4A2D469411FA21(uParam0->f_4, iVar0))
		{
			if (!unk_0xFA30DFD0084E92FE(uLocal_259[iVar0], 1))
			{
				unk_0xF0059F27F7BB6680(&(uLocal_259[iVar0]), 1);
			}
			if (unk_0xA499BE1E93004FF2(uParam0->f_4, iVar0))
			{
				iVar1 = 0;
				if (!iLocal_250)
				{
					iLocal_250 = 1;
				}
			}
		}
		else if (unk_0xFA30DFD0084E92FE(uLocal_259[iVar0], 1))
		{
			unk_0x7CB6FD92BE491AD9(&(uLocal_259[iVar0]), 1);
		}
		if (!unk_0x403C891106DCABAF(uParam0->f_4, iVar0))
		{
			iVar1 = 0;
			if (!unk_0xFA30DFD0084E92FE(uLocal_258[iVar0], 1))
			{
				unk_0xF0059F27F7BB6680(&(uLocal_258[iVar0]), 1);
			}
			if (!iLocal_250)
			{
				iLocal_250 = 1;
			}
		}
		else if (unk_0xFA30DFD0084E92FE(uLocal_258[iVar0], 1))
		{
			unk_0x7CB6FD92BE491AD9(&(uLocal_258[iVar0]), 1);
		}
		iVar0++;
	}
	return iVar1;
}

void func_165(var uParam0, var uParam1)//Position - 0x6215
{
	int iVar0;
	
	if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
	{
		uParam1->f_49[0] = unk_0xD0F8470A5BFEECF7("scr_ojtaxi_hotbox_trail", uParam0->f_4, vLocal_230, 0f, 0f, 0f, unk_0x55AEFCD285ECC0F2(0.4f, 0.6f), 0, 0, 0);
		uParam1->f_49[1] = unk_0xD0F8470A5BFEECF7("scr_ojtaxi_hotbox_trail", uParam0->f_4, vLocal_232, 0f, 0f, 0f, unk_0x55AEFCD285ECC0F2(0.4f, 0.6f), 0, 0, 0);
		uParam1->f_49[2] = unk_0xD0F8470A5BFEECF7("scr_ojtaxi_hotbox_trail", uParam0->f_4, vLocal_231, 0f, 0f, 0f, unk_0x55AEFCD285ECC0F2(0.8f, 1f), 0, 0, 0);
		uParam1->f_49[3] = unk_0xD0F8470A5BFEECF7("scr_ojtaxi_hotbox_trail", uParam0->f_4, vLocal_233, 0f, 0f, 0f, unk_0x55AEFCD285ECC0F2(0.8f, 1f), 0, 0, 0);
		iVar0 = 0;
		while (iVar0 < 4)
		{
			unk_0xE426CF2117CBB2CF(uParam1->f_49[iVar0], "smoke", 1f, 0);
			unk_0xE426CF2117CBB2CF(uParam1->f_49[iVar0], "speed", 0f, 0);
			iVar0++;
		}
	}
}

void func_166(var uParam0, var uParam1)//Position - 0x6307
{
	if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
	{
		uParam1->f_58 = unk_0xD0F8470A5BFEECF7("scr_ojtaxi_hotbox_door", uParam0->f_4, 0f, -0.15f, 0.2f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
		uParam1->f_59 = unk_0xD0F8470A5BFEECF7("scr_ojtaxi_hotbox_window", uParam0->f_4, 0f, -0.15f, 0.6f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
	}
	unk_0xF3EED157CBFF91FA(1);
}

void func_167(int iParam0)//Position - 0x636C
{
	func_168(iParam0, 0f);
}

void func_168(int iParam0, float fParam1)//Position - 0x637B
{
	iParam0->f_1 = (func_14(unk_0xFA30DFD0084E92FE(*iParam0, 4)) + fParam1);
	unk_0xF0059F27F7BB6680(iParam0, 1);
	unk_0x7CB6FD92BE491AD9(iParam0, 2);
	iParam0->f_2 = 0f;
}

int func_169(var uParam0)//Position - 0x63A9
{
	return uParam0->f_1A0;
}

void func_170(var uParam0, var uParam1, var uParam2)//Position - 0x63B6
{
	if (!func_24(uParam0->f_2C, 1))
	{
		switch (uParam0->f_19C)
		{
			case 0:
				if (unk_0x904E94842BB9E173(unk_0xFC1CAE18F3ECBF2D()) >= 1)
				{
					if (func_383(uParam0, 9) > 1f)
					{
						func_174(uParam0, unk_0x904E94842BB9E173(unk_0xFC1CAE18F3ECBF2D()));
						func_191(uParam0, 50, 1, 0, 0);
						func_260(uParam0, 9, 0, 0);
						if (unk_0x2DA8CA50A72528FB(uParam2->f_28))
						{
							unk_0x7781946F1FC054FA(uParam2->f_28, 0);
							unk_0x0BBAABB52887CF8C(uParam2->f_28, false);
						}
						uParam0->f_8C = 1;
						uParam0->f_19C = 1;
					}
				}
				break;
			
			case 1:
				if (!func_51() && func_383(uParam0, 9) > 4f)
				{
					func_191(uParam0, 52, 1, 0, 0);
					uParam0->f_19C = 2;
				}
				break;
			
			case 2:
				if (func_173("TAXI_OBJ_POL", 0, 0))
				{
					func_191(uParam0, 51, 0, 0, 0);
					uParam0->f_19C = 3;
				}
				else if (unk_0x904E94842BB9E173(unk_0xFC1CAE18F3ECBF2D()) < 1)
				{
					uParam0->f_19C = 3;
				}
				break;
			
			case 3:
				if (unk_0x86B385F1E3450315(unk_0xFC1CAE18F3ECBF2D(), func_172(uParam0)))
				{
					func_174(uParam0, unk_0x904E94842BB9E173(unk_0xFC1CAE18F3ECBF2D()));
					func_52(6, 0);
				}
				if (!func_137(uParam0))
				{
					if (!unk_0xE6711F601F11B66B())
					{
						if (func_383(uParam0, 16) > 10f)
						{
							func_191(uParam0, 51, 1, 0, 0);
						}
					}
				}
				if (unk_0x904E94842BB9E173(unk_0xFC1CAE18F3ECBF2D()) < 1)
				{
					if (unk_0x2DA8CA50A72528FB(uParam2->f_28))
					{
						unk_0x7781946F1FC054FA(uParam2->f_28, 255);
						unk_0x0BBAABB52887CF8C(uParam2->f_28, true);
					}
					uParam0->f_8C = 0;
					uParam0->f_19C = 4;
				}
				break;
			
			case 4:
				if (!func_51())
				{
					func_191(uParam0, 53, 1, 0, 1);
					func_52(7, func_172(uParam0));
					func_174(uParam0, 0);
					uParam0->f_19C = 5;
				}
				break;
			
			case 5:
				if (!func_51())
				{
					func_171(uParam1, -1, 4);
					uParam0->f_19C = 0;
				}
				break;
			}
	}
}

void func_171(var uParam0, int iParam1, int iParam2)//Position - 0x6596
{
	*uParam0 = iParam2;
	if (iParam1 > -1)
	{
		uParam0->f_1B = iParam1;
	}
}

int func_172(var uParam0)//Position - 0x65AF
{
	return uParam0->f_6A;
}

bool func_173(char* sParam0, int iParam1, char* sParam2)//Position - 0x65BB
{
	unk_0xE2CFC41F8121CE68(sParam0);
	if (iParam1 == 1)
	{
		unk_0xC9C304D0AABE1335(sParam2);
	}
	return unk_0x121EFFA2D57472F2();
}

void func_174(var uParam0, int iParam1)//Position - 0x65D9
{
	if (uParam0->f_6A != iParam1)
	{
		uParam0->f_6A = iParam1;
	}
}

void func_175(var uParam0)//Position - 0x65F0
{
	if (func_177(uParam0))
	{
		func_176(uParam0);
	}
}

void func_176(var uParam0)//Position - 0x6607
{
	if (unk_0xFFAEC2D4BAF978BE() && uParam0->f_1A2.f_4 != 0)
	{
		uParam0->f_1A2.f_4 = 0;
	}
	switch (uParam0->f_1A2.f_4)
	{
		case 0:
			uParam0->f_1A2 = unk_0x93DD0CE3F3963C56();
			func_145(uParam0, 20, 0);
			uParam0->f_1A2.f_4++;
			break;
		
		case 1:
			if (uParam0->f_1A2.f_8 && !uParam0->f_1A2 == uParam0->f_1A2.f_2)
			{
				if (func_383(uParam0, 20) > 3f)
				{
					func_191(uParam0, 87, 1, 0, 0);
					uParam0->f_1A2.f_8 = 0;
					uParam0->f_1A2.f_4++;
				}
			}
			else if (uParam0->f_1A2 == uParam0->f_1A2.f_1)
			{
				if (!func_24(uParam0->f_51, 262144) || !func_24(uParam0->f_51, 1048576))
				{
					if (func_383(uParam0, 20) > 5f)
					{
						uParam0->f_1A2.f_5 = 1;
						func_191(uParam0, 84, 1, 0, 0);
						uParam0->f_1A2.f_4++;
					}
				}
			}
			else if (uParam0->f_1A2 == uParam0->f_1A2.f_2)
			{
				if (!func_24(uParam0->f_52, 67108864))
				{
					if (func_383(uParam0, 20) > 5f)
					{
						uParam0->f_1A2.f_6 = 1;
						uParam0->f_1A2.f_8 = 0;
						func_191(uParam0, 85, 1, 0, 0);
						func_145(uParam0, 22, 0);
						uParam0->f_1A2.f_4++;
					}
				}
			}
			else if (uParam0->f_1A2.f_7)
			{
				if (func_383(uParam0, 20) > 8f)
				{
					func_191(uParam0, 86, 1, 0, 0);
					uParam0->f_1A2.f_4++;
				}
			}
			break;
		
		case 2:
			if (func_24(uParam0->f_51, 262144) || func_24(uParam0->f_52, 67108864))
			{
				if (!func_138(uParam0, 22))
				{
					func_185(uParam0, 22);
				}
			}
			if (func_138(uParam0, 22) && func_383(uParam0, 22) > 15f)
			{
				if (uParam0->f_1A2 == uParam0->f_1A2.f_1)
				{
					if (!func_24(uParam0->f_51, 1048576))
					{
						func_191(uParam0, 84, 1, 0, 0);
						func_145(uParam0, 22, 0);
					}
				}
				else if (uParam0->f_1A2 == uParam0->f_1A2.f_2)
				{
					if (!func_24(uParam0->f_52, 134217728))
					{
						func_191(uParam0, 85, 1, 0, 0);
						func_145(uParam0, 22, 0);
					}
				}
			}
			break;
	}
}

bool func_177(var uParam0)//Position - 0x6882
{
	return uParam0->f_78;
}

void func_178(var uParam0, var uParam1)//Position - 0x688E
{
	func_181(uParam0, 1000);
	if ((!unk_0x1D403DFADBC2DE3C((*uParam1)[0], 0) && !unk_0x1D403DFADBC2DE3C((*uParam1)[1], 0)) && !unk_0x1D403DFADBC2DE3C((*uParam1)[2], 0))
	{
		unk_0x49D46EE47C9CCB66((*uParam1)[0]);
		unk_0x49D46EE47C9CCB66((*uParam1)[1]);
		unk_0x49D46EE47C9CCB66((*uParam1)[2]);
	}
	func_179();
	func_156(uParam0);
}

void func_179()//Position - 0x68F2
{
	Global_394A = 0;
	func_180();
}

void func_180()//Position - 0x6902
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

void func_181(var uParam0, int iParam1)//Position - 0x6959
{
	if (unk_0xEF0E25DA0CB6E8FF(*uParam0))
	{
		unk_0x4EC087603E1DEF9C(*uParam0, 0);
	}
	if (iParam1 > 0)
	{
		unk_0x062C9995BFD27B2A(false, true, iParam1, 1, 0, 0);
	}
	else
	{
		unk_0x062C9995BFD27B2A(false, false, 3000, 1, 0, 0);
	}
}

void func_182(var uParam0)//Position - 0x6993
{
	if (!uParam0->f_33[2])
	{
		if (!unk_0x2DA8CA50A72528FB(uParam0->f_24[2]))
		{
			uParam0->f_24[2] = func_183(uParam0->f_10[2 /*3*/], 1);
			uParam0->f_28 = uParam0->f_24[2];
		}
		if (!unk_0xBC27F7BE8808F46F(uParam0->f_24[2]))
		{
			unk_0x0BBAABB52887CF8C(uParam0->f_24[2], true);
		}
	}
	else if (!uParam0->f_33[1])
	{
		if (!unk_0x2DA8CA50A72528FB(uParam0->f_24[1]))
		{
			uParam0->f_24[1] = func_183(uParam0->f_10[1 /*3*/], 1);
			uParam0->f_28 = uParam0->f_24[1];
		}
		if (!unk_0xBC27F7BE8808F46F(uParam0->f_24[1]))
		{
			unk_0x0BBAABB52887CF8C(uParam0->f_24[1], true);
		}
	}
	else
	{
		if (!unk_0x2DA8CA50A72528FB(uParam0->f_24[0]))
		{
			uParam0->f_24[0] = func_183(uParam0->f_10[0 /*3*/], 1);
			uParam0->f_28 = uParam0->f_24[0];
		}
		if (!unk_0xBC27F7BE8808F46F(uParam0->f_24[0]))
		{
			unk_0x0BBAABB52887CF8C(uParam0->f_24[0], true);
		}
	}
}

int func_183(vector3 vParam0, bool bParam1)//Position - 0x6A95
{
	int iVar0;
	
	iVar0 = unk_0x390CF6C8AD6903B7(vParam0);
	unk_0x3F5F1772D71D5EC4(iVar0, func_154(unk_0x7AF0088ABFA713B6(), 1f, 1f));
	unk_0x0BBAABB52887CF8C(iVar0, bParam1);
	return iVar0;
}

void func_184()//Position - 0x6AC1
{
	func_228(&(Local_260.f_37), 2);
	func_228(&(Local_260.f_37), 4);
	func_228(&(Local_260.f_37), 16);
	func_228(&(Local_260.f_37), 64);
	func_228(&(Local_260.f_37), 256);
	func_228(&(Local_260.f_37), 512);
	func_228(&(Local_260.f_37), 1024);
	func_228(&(Local_260.f_37), 2048);
	func_228(&(Local_260.f_37), 4096);
	func_228(&(Local_260.f_37), 1073741824);
	func_228(&uLocal_392, 2);
}

void func_185(var uParam0, int iParam1)//Position - 0x6B45
{
	func_186(&(uParam0->f_92[iParam1 /*3*/]));
}

void func_186(int iParam0)//Position - 0x6B59
{
	if (!func_16(iParam0))
	{
		func_102(iParam0);
	}
}

void func_187()//Position - 0x6B71
{
	unk_0x2CA123B0622F495C(joaat("stretch"));
	unk_0x2CA123B0622F495C(joaat("superd"));
	unk_0x2CA123B0622F495C(Local_262.f_2D[0]);
	unk_0x2CA123B0622F495C(Local_262.f_2D[1]);
	unk_0x2CA123B0622F495C(Local_262.f_2D[2]);
	unk_0x2CA123B0622F495C(Local_262.f_2D[3]);
	unk_0x2CA123B0622F495C(Local_262.f_2D[4]);
	unk_0x4EA570997E107F35("oddjobs@taxi@gyn@cc@intro");
	unk_0x4EA570997E107F35("amb@world_human_stand_impatient@female@no_sign@exit");
	unk_0x4EA570997E107F35("amb@world_human_stand_impatient@female@no_sign@base");
}

void func_188(var uParam0, bool bParam1)//Position - 0x6BDF
{
	func_189(uParam0);
	if (bParam1)
	{
		if (!unk_0x2DA8CA50A72528FB(uParam0->f_9))
		{
			uParam0->f_9 = func_183(uParam0->f_11, 1);
		}
		else if (unk_0xB1D6718ACE798CBB(uParam0->f_9) == 0)
		{
			unk_0xC2A76C105FD557E3(1, 0f);
			unk_0x7781946F1FC054FA(uParam0->f_9, 255);
			unk_0x1423825E528B4DE1(uParam0->f_9, uParam0->f_11);
			unk_0x0BBAABB52887CF8C(uParam0->f_9, true);
		}
	}
}

void func_189(var uParam0)//Position - 0x6C43
{
	if (unk_0x2DA8CA50A72528FB(uParam0->f_8))
	{
		unk_0x0BBAABB52887CF8C(uParam0->f_8, false);
		unk_0x07B8ECB35A4ED3AC(&(uParam0->f_8));
	}
}

void func_190(var uParam0)//Position - 0x6C67
{
	unk_0xA67D3DDB524B8DBA(unk_0xB5CEFD608600A09F());
	unk_0xDDCAA2E64649E083(unk_0xFC1CAE18F3ECBF2D(), true, 0);
	func_181(uParam0, 1000);
}

void func_191(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x6C8A
{
	uParam0->f_1A0 = iParam1;
	if (bParam4)
	{
		func_260(uParam0, 16, 4f, 0);
		if (func_192(uParam0))
		{
			func_49();
		}
	}
	func_219(uParam0, iParam2, bParam3);
}

int func_192(var uParam0)//Position - 0x6CBF
{
	vector3 vVar0;
	struct<6> Var1;
	
	StringCopy(&vVar0, uParam0->f_8F, 24);
	if (func_51())
	{
		Var1 = { func_194() };
		if (!unk_0xF1734B55490E9045(&Var1))
		{
			StringConCat(&vVar0, "_obj1", 24);
			if (unk_0x3362CDE8460ED38B(&Var1, &vVar0))
			{
				return 1;
			}
			StringCopy(&vVar0, uParam0->f_8F, 24);
			StringConCat(&vVar0, "_gret1", 24);
			func_193(&vVar0);
			if (unk_0x3362CDE8460ED38B(&Var1, &vVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_193(char* sParam0)//Position - 0x6D25
{
	StringConCat(sParam0, "F", 24);
}

struct<6> func_194()//Position - 0x6D35
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_3DB8 == 4)
	{
		return Global_3C3B;
	}
	return Var0;
}

bool func_195(var uParam0, var uParam1)//Position - 0x6D59
{
	return ((func_196((*uParam1)[0], uParam0) && func_196((*uParam1)[1], uParam0)) && func_196((*uParam1)[2], uParam0));
}

int func_196(int iParam0, var uParam1)//Position - 0x6D8C
{
	if (unk_0xE59B7F5A03335350(uParam1->f_4, 0))
	{
		if (!unk_0x36CEFBE9B745A58D(iParam0))
		{
			if (unk_0x25EF720B1CAB1E23(iParam0, uParam1->f_4))
			{
				return 1;
			}
		}
		else
		{
			func_293(uParam1, "Passenger was injured", 15);
		}
	}
	else
	{
		func_293(uParam1, "Taxi was destroyed", 0);
	}
	return 0;
}

int func_197(var uParam0, var uParam1)//Position - 0x6DD9
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	func_216(uParam0, (*uParam1)[0]);
	func_216(uParam0, (*uParam1)[1]);
	func_216(uParam0, (*uParam1)[2]);
	if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
	{
		if (!unk_0x62F3A07C43FFB568(uParam0->f_2, uParam0->f_4, 0))
		{
			func_214(uParam0, 1);
			if (func_35())
			{
				unk_0xDDCAA2E64649E083(unk_0xFC1CAE18F3ECBF2D(), true, 0);
				func_178(uParam0, uParam1);
			}
		}
		else if (unk_0x86B385F1E3450315(unk_0xFC1CAE18F3ECBF2D(), 0))
		{
			func_212(uParam0);
		}
		else
		{
			if (func_138(uParam0, 14))
			{
				func_156(uParam0);
				func_211(uParam0, uParam1, 0);
			}
			if (func_138(uParam0, 9))
			{
				func_145(uParam0, 9, 0);
				unk_0xEB233A3B7635D2AC();
				if (unk_0x2DA8CA50A72528FB(uParam0->f_8))
				{
					unk_0x7781946F1FC054FA(uParam0->f_8, 255);
					unk_0x0BBAABB52887CF8C(uParam0->f_8, true);
				}
			}
			if (!unk_0x36CEFBE9B745A58D((*uParam1)[0]))
			{
				if (!uParam0->f_8E)
				{
					fVar4 = ((unk_0x8910237449BB6F79(uParam0->f_4) / 5f) + 4f);
					if (uParam0->f_8D)
					{
						if (func_210(uParam0, (*uParam1)[iLocal_238]) > 50f || func_13(&iLocal_239) > 5f)
						{
							func_293(uParam0, "Left Passenger", 8);
						}
					}
					switch (uParam0->f_30)
					{
						case 0:
							if (unk_0xF4FCC3C1048FF2AB((*uParam1)[iLocal_238], 713668775) != 1 || ((func_10(unk_0xBC25C936A095B5BA(), (*uParam1)[iLocal_238], 1) < 20f && func_209((*uParam1)[iLocal_238], uParam0->f_B, 1) <= 28f) && func_209(uParam0->f_4, uParam0->f_B, 1) <= 28f))
							{
								if (func_207(uParam0, uParam1, 40f))
								{
									uParam0->f_30++;
								}
							}
							break;
						
						case 1:
							if (func_206(uParam0, uParam1, 0, 1108082688, 1090519040, 1082130432))
							{
								uParam0->f_8A = 1;
								if (bLocal_86)
								{
									iVar0 = func_205(uParam0, &uVar1);
									if (!unk_0x1D403DFADBC2DE3C(iVar0, 0))
									{
										unk_0xA3981DED4FC2E56E(iVar0, 0, 0);
									}
								}
								iVar3 = 0;
								while (iVar3 < 3)
								{
									unk_0xA4E856A8CD53B8DF((*uParam1)[iVar3]);
									unk_0x02DAF06EA4F08219(&iVar2);
									unk_0xC5A6DFE2B8987B17(&iVar2);
									switch (iVar3)
									{
										case 0:
											if (!unk_0x5237AF95232D78C5((*uParam1)[iVar3], 0))
											{
												unk_0x56F2E1B5599188FA(0, uParam0->f_4, -1, 0, 2);
												unk_0xDE2D2B13F24A979D(0, unk_0x491B2241281A03B7(1750, 2250));
												unk_0xD179FA0466FA4FE3(0, uParam0->f_4, 40000, 0, 1f, 1, 0);
											}
											break;
										
										case 1:
											if (!unk_0x5237AF95232D78C5((*uParam1)[iVar3], 0))
											{
												unk_0x56F2E1B5599188FA(0, uParam0->f_4, -1, 0, 2);
												unk_0xD179FA0466FA4FE3(0, uParam0->f_4, 40000, 1, 1f, 1, 0);
											}
											break;
										
										case 2:
											if (!unk_0x5237AF95232D78C5((*uParam1)[iVar3], 0))
											{
												unk_0x56F2E1B5599188FA(0, uParam0->f_4, -1, 0, 2);
												unk_0xDE2D2B13F24A979D(0, unk_0x491B2241281A03B7(750, 1250));
												unk_0xD179FA0466FA4FE3(0, uParam0->f_4, 40000, 2, 1f, 1, 0);
											}
											break;
									}
									unk_0x535008C596714F9E(iVar2);
									unk_0xA8E6405305C0D7DF((*uParam1)[iVar3], iVar2);
									iVar3++;
								}
								uParam0->f_30++;
							}
							else if (!func_146(uParam0))
							{
								unk_0xA4E856A8CD53B8DF((*uParam1)[0]);
								unk_0xA4E856A8CD53B8DF((*uParam1)[1]);
								unk_0xA4E856A8CD53B8DF((*uParam1)[2]);
							}
							else if ((unk_0xF4FCC3C1048FF2AB((*uParam1)[0], 242628503) != 1 && unk_0xF4FCC3C1048FF2AB((*uParam1)[0], 242628503) != 0) && func_210(uParam0, (*uParam1)[0]) > 8f)
							{
								unk_0x02DAF06EA4F08219(&(uParam0->f_F3));
								unk_0xC5A6DFE2B8987B17(&(uParam0->f_F3));
								unk_0x85DB484A637CEAB9(0, uParam0->f_4, 0);
								unk_0xE896C0AD02364F2A(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0, 0, 0, 0);
								unk_0x535008C596714F9E(uParam0->f_F3);
								unk_0xA8E6405305C0D7DF((*uParam1)[0], uParam0->f_F3);
							}
							break;
						
						case 2:
							if (bLocal_86)
							{
								if (func_10(uParam0->f_4, (*uParam1)[0], 1) < 3f)
								{
									if (!func_204(uParam0, 1))
									{
										unk_0x49D46EE47C9CCB66((*uParam1)[0]);
										unk_0x49D46EE47C9CCB66((*uParam1)[1]);
										unk_0x49D46EE47C9CCB66((*uParam1)[2]);
										func_293(uParam0, "You had a dead body in your back seat.", 5);
									}
								}
							}
							func_203(uParam0, uParam1);
							if (func_210(uParam0, (*uParam1)[0]) < fVar4 || func_35())
							{
								if (unk_0x62F3A07C43FFB568(uParam0->f_2, uParam0->f_4, 0))
								{
									if ((unk_0x5237AF95232D78C5((*uParam1)[0], 0) && unk_0x5237AF95232D78C5((*uParam1)[1], 0)) && unk_0x5237AF95232D78C5((*uParam1)[2], 0))
									{
										func_189(uParam0);
										unk_0xC8FD3EBBB90E8D7F((*uParam1)[0], 26, true);
										unk_0xC8FD3EBBB90E8D7F((*uParam1)[1], 26, true);
										unk_0xC8FD3EBBB90E8D7F((*uParam1)[2], 26, true);
										unk_0xC8FD3EBBB90E8D7F((*uParam1)[0], 104, true);
										func_145(uParam0, 5, 0);
										unk_0x0A6ECD5BD15B1522();
										return 1;
									}
								}
							}
							else
							{
								if ((unk_0x105601648511CC64() % 1000) < 50)
								{
								}
								unk_0x808BC8EC57F5B2FF(unk_0x541C2AEF053615BC((*uParam1)[0], true), fVar4, 0, 0, 255, 150);
							}
							if (func_202(uParam1))
							{
								unk_0xA4E856A8CD53B8DF((*uParam1)[0]);
								unk_0xA4E856A8CD53B8DF((*uParam1)[1]);
								unk_0xA4E856A8CD53B8DF((*uParam1)[2]);
								func_293(uParam0, "Left Passenger", 8);
							}
							if ((func_201(uParam0, uParam1) || func_200(uParam0, uParam1)) || func_199(uParam0, uParam1))
							{
								if (!unk_0x5237AF95232D78C5((*uParam1)[2], 0))
								{
									unk_0x346129B364057FF6((*uParam1)[2], func_40(uParam0->f_B, 0f, 0.5f, 0.5f, 0f), 1f, 20000, 1048576000, 0, 1193033728);
									iLocal_238 = 2;
								}
								if (!unk_0x5237AF95232D78C5((*uParam1)[1], 0))
								{
									unk_0x346129B364057FF6((*uParam1)[1], func_40(uParam0->f_B, 0f, 0.5f, 0.5f, 0f), 1f, 20000, 1048576000, 0, 1193033728);
									iLocal_238 = 1;
								}
								if (!unk_0x5237AF95232D78C5((*uParam1)[0], 0))
								{
									unk_0x346129B364057FF6((*uParam1)[0], uParam0->f_B, 1f, 20000, 1048576000, 0, 1193033728);
									iLocal_238 = 0;
								}
								unk_0x07B8ECB35A4ED3AC(&(uParam0->f_8));
								uParam0->f_8 = func_198((*uParam1)[iLocal_238], 0, 0);
								func_102(&iLocal_239);
								uParam0->f_30 = 0;
								iLocal_79 = 0;
							}
							break;
						}
				}
			}
			else
			{
				func_293(uParam0, "Passenger injured.", 9);
			}
		}
	}
	else
	{
		func_293(uParam0, "Taxi not drivable.", 9);
	}
	return 0;
}

int func_198(int iParam0, bool bParam1, bool bParam2)//Position - 0x7407
{
	return func_153(iParam0, !bParam1, bParam2);
}

int func_199(var uParam0, var uParam1)//Position - 0x741A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x36CEFBE9B745A58D((*uParam1)[iVar0]) && !unk_0x5237AF95232D78C5((*uParam1)[iVar0], 0))
		{
			if (func_210(uParam0, (*uParam1)[iVar0]) > 28f)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_200(var uParam0, var uParam1)//Position - 0x746D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x36CEFBE9B745A58D((*uParam1)[iVar0]) && !unk_0x5237AF95232D78C5((*uParam1)[iVar0], 0))
		{
			if (func_209(uParam0->f_4, uParam0->f_B, 1) > 28f)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_201(var uParam0, var uParam1)//Position - 0x74C3
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x36CEFBE9B745A58D((*uParam1)[iVar0]) && !unk_0x5237AF95232D78C5((*uParam1)[iVar0], 0))
		{
			if (func_209((*uParam1)[iVar0], uParam0->f_B, 1) > 28f)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_202(var uParam0)//Position - 0x751B
{
	if ((!unk_0x36CEFBE9B745A58D((*uParam0)[0]) && !unk_0x36CEFBE9B745A58D((*uParam0)[1])) && !unk_0x36CEFBE9B745A58D((*uParam0)[2]))
	{
		if ((unk_0x5237AF95232D78C5((*uParam0)[0], 0) || unk_0x5237AF95232D78C5((*uParam0)[1], 0)) || unk_0x5237AF95232D78C5((*uParam0)[2], 0))
		{
			if ((!unk_0x5237AF95232D78C5((*uParam0)[0], 0) || !unk_0x5237AF95232D78C5((*uParam0)[1], 0)) || !unk_0x5237AF95232D78C5((*uParam0)[2], 0))
			{
				if (!func_16(&iLocal_242))
				{
					func_186(&iLocal_242);
				}
				else if (func_100(&iLocal_242) > 15f)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_203(var uParam0, var uParam1)//Position - 0x75D5
{
	if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
	{
		if (!unk_0x36CEFBE9B745A58D((*uParam1)[iLocal_238]))
		{
			if (func_9((*uParam1)[iLocal_238], 1) > 30f)
			{
				if (unk_0xF4FCC3C1048FF2AB((*uParam1)[iLocal_238], -1794415470) == 1 || unk_0xF4FCC3C1048FF2AB((*uParam1)[iLocal_238], 242628503) == 1)
				{
					func_293(uParam0, "Player abandoned passenger on pickup.", 8);
				}
			}
		}
	}
}

int func_204(var uParam0, bool bParam1)//Position - 0x7646
{
	int iVar0[3];
	int iVar1;
	
	if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
	{
		iVar0[0] = unk_0x3187EF5798B5D209(uParam0->f_4, 1, 0);
		iVar0[1] = unk_0x3187EF5798B5D209(uParam0->f_4, 2, 0);
		iVar0[2] = unk_0x3187EF5798B5D209(uParam0->f_4, 0, 0);
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (unk_0x724D816EA203A79E(iVar0[iVar1]))
			{
				if (unk_0x1D403DFADBC2DE3C(iVar0[iVar1], 0))
				{
					if (iVar1 == 0)
					{
						uParam0->f_7 = 1;
						if (bParam1)
						{
						}
					}
					else if (iVar1 == 1)
					{
						uParam0->f_7 = 2;
						if (bParam1)
						{
						}
					}
					else
					{
						uParam0->f_7 = 0;
						if (bParam1)
						{
						}
					}
					if (bParam1)
					{
					}
					return 0;
				}
			}
			iVar1++;
		}
		if ((unk_0x105601648511CC64() % 1000) < 50)
		{
		}
	}
	return 1;
}

int func_205(var uParam0, var uParam1)//Position - 0x7700
{
	int iVar0;
	
	if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
	{
		iVar0 = unk_0x3187EF5798B5D209(uParam0->f_4, 1, 0);
		if (unk_0x724D816EA203A79E(iVar0))
		{
			*uParam1 = 1;
			return iVar0;
		}
		else
		{
			iVar0 = unk_0x3187EF5798B5D209(uParam0->f_4, 2, 0);
			if (unk_0x724D816EA203A79E(iVar0))
			{
				*uParam1 = 2;
				return iVar0;
			}
			else
			{
				iVar0 = unk_0x3187EF5798B5D209(uParam0->f_4, 0, 0);
				if (unk_0x724D816EA203A79E(iVar0))
				{
					*uParam1 = 0;
					return iVar0;
				}
			}
		}
	}
	return 0;
}

int func_206(var uParam0, var uParam1, int iParam2, float fParam3, float fParam4, float fParam5)//Position - 0x7775
{
	if (!unk_0x1D403DFADBC2DE3C((*uParam1)[0], 0))
	{
		if (!unk_0x41A5D6415E2CC10E((*uParam1)[iLocal_238]) && func_9((*uParam1)[iLocal_238], 1) < fParam3)
		{
			if (!func_138(uParam0, 5))
			{
				func_260(uParam0, 5, 0, 0);
			}
		}
		else if (func_138(uParam0, 5))
		{
			func_145(uParam0, 5, 0);
		}
		if (((func_383(uParam0, 5) > IntToFloat(iParam2) && unk_0x8910237449BB6F79(uParam0->f_4) < fParam5) && !unk_0x41A5D6415E2CC10E((*uParam1)[iLocal_238])) || func_9((*uParam1)[iLocal_238], 1) <= fParam4)
		{
			return 1;
		}
	}
	return 0;
}

int func_207(var uParam0, var uParam1, float fParam2)//Position - 0x7820
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	int iVar3;
	int iVar4;
	
	iVar4 = unk_0xB5B60A04E1654409(uParam0->f_4, "windscreen");
	vVar2 = { unk_0x3EA3A28A85F8C32F(uParam0->f_4, iVar4) };
	vVar2 = { unk_0x1483995DFFF0DEEA(uParam0->f_4, vVar2) };
	vVar2.y = (vVar2.y + 1f);
	vVar0 = { unk_0xA4455714F3DCE207(uParam0->f_4, vVar2) };
	vVar1 = { unk_0xA4455714F3DCE207(uParam0->f_3, 0f, 0.25f, 0.9f) };
	unk_0x9689CECD9CFDA876(vVar0, vVar1, 0, 0, 255, 255);
	switch (iLocal_79)
	{
		case 0:
			unk_0x2E35C4FA5F0ED22F((*uParam1)[0], true);
			unk_0x2E35C4FA5F0ED22F((*uParam1)[1], true);
			unk_0x2E35C4FA5F0ED22F((*uParam1)[2], true);
			iLocal_79 = 1;
			break;
		
		case 1:
			if ((func_10(uParam0->f_4, (*uParam1)[iLocal_238], 0) <= fParam2 && !uParam0->f_8E) && unk_0x357058E632979E65((vVar0.z - vVar1.z)) < 5f)
			{
				iVar3 = func_208(&(uParam0->f_199), vVar0, vVar1, 0);
				if (iVar3 == 0)
				{
					iLocal_79 = 2;
				}
			}
			break;
		
		case 2:
			unk_0xEB233A3B7635D2AC();
			func_191(uParam0, 4, 1, 0, 1);
			unk_0xA4E856A8CD53B8DF((*uParam1)[iLocal_238]);
			unk_0x56F2E1B5599188FA(uParam0->f_3, uParam0->f_4, -1, 2048, 4);
			unk_0x02DAF06EA4F08219(&(uParam0->f_F3));
			unk_0xC5A6DFE2B8987B17(&(uParam0->f_F3));
			unk_0xE896C0AD02364F2A(0, "oddjobs@towingcome_here", "come_here_idle_a", 8f, -8f, -1, 49, 0, 0, 0, 0);
			unk_0x85DB484A637CEAB9(0, uParam0->f_4, 0);
			unk_0x535008C596714F9E(uParam0->f_F3);
			unk_0xA8E6405305C0D7DF((*uParam1)[iLocal_238], uParam0->f_F3);
			return 1;
			break;
		
		case 3:
			iLocal_79 = 0;
			return 1;
			break;
	}
	return 0;
}

int func_208(var uParam0, vector3 vParam1, vector3 vParam2, bool bParam3)//Position - 0x79B7
{
	var uVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	
	if (*uParam0 == 0)
	{
		*uParam0 = unk_0xA20E4A82503CECB3(vParam1, vParam2, 511, 0, 7);
		if (bParam3)
		{
		}
	}
	else
	{
		iVar4 = unk_0xB0695CD48A28A3A9(*uParam0, &iVar2, &uVar0, &uVar1, &uVar3);
		if (iVar4 == 2)
		{
			if (bParam3)
			{
			}
			if (iVar2 == 0)
			{
				*uParam0 = 0;
				return iVar2;
			}
			else
			{
				if (bParam3)
				{
				}
				*uParam0 = 0;
				return iVar2;
			}
		}
		else if (iVar4 == 0)
		{
			if (bParam3)
			{
			}
			*uParam0 = 0;
		}
	}
	return -1;
}

float func_209(int iParam0, vector3 vParam1, bool bParam2)//Position - 0x7A31
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

float func_210(var uParam0, int iParam1)//Position - 0x7A6B
{
	if (!unk_0x1D403DFADBC2DE3C(iParam1, 0))
	{
		if (func_146(uParam0))
		{
			return func_10(uParam0->f_4, iParam1, 1);
		}
	}
	return 0f;
}

void func_211(var uParam0, var uParam1, bool bParam2)//Position - 0x7A96
{
	int iVar0;
	
	if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
	{
		if (bParam2)
		{
			if (unk_0x2DA8CA50A72528FB(uParam0->f_8))
			{
				unk_0x7781946F1FC054FA(uParam0->f_8, 0);
				unk_0x0BBAABB52887CF8C(uParam0->f_8, false);
				func_155(uParam0, &(uParam0->f_62), 4, 3);
			}
			else
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (unk_0x2DA8CA50A72528FB(uParam1->f_24[iVar0]))
					{
						unk_0x7781946F1FC054FA(uParam1->f_24[iVar0], 0);
					}
					iVar0++;
				}
				func_191(uParam0, 2, 1, 1, 0);
			}
			func_150(uParam0, 0, 0);
		}
		else if (unk_0x2DA8CA50A72528FB(uParam0->f_A))
		{
			unk_0x07B8ECB35A4ED3AC(&(uParam0->f_A));
			if (unk_0x2DA8CA50A72528FB(uParam0->f_8))
			{
				unk_0x7781946F1FC054FA(uParam0->f_8, 255);
				unk_0x0BBAABB52887CF8C(uParam0->f_8, true);
				func_155(uParam0, &(uParam0->f_62), 8, 1);
			}
			else
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (unk_0x2DA8CA50A72528FB(uParam1->f_24[iVar0]))
					{
						unk_0x7781946F1FC054FA(uParam1->f_24[iVar0], 255);
					}
					iVar0++;
				}
			}
		}
	}
}

void func_212(var uParam0)//Position - 0x7B8E
{
	func_216(uParam0, uParam0->f_3);
	if (func_146(uParam0))
	{
		if (func_138(uParam0, 14))
		{
			func_156(uParam0);
			if (unk_0x2DA8CA50A72528FB(uParam0->f_A))
			{
				unk_0x07B8ECB35A4ED3AC(&(uParam0->f_A));
			}
		}
	}
	if (!func_138(uParam0, 9))
	{
		if (unk_0x2DA8CA50A72528FB(uParam0->f_8))
		{
			unk_0x7781946F1FC054FA(uParam0->f_8, 0);
			unk_0x0BBAABB52887CF8C(uParam0->f_8, false);
		}
		func_260(uParam0, 9, 0, 0);
		func_213("TAXI_OBJ_POL", 7500, 1);
	}
}

void func_213(char* sParam0, int iParam1, int iParam2)//Position - 0x7C0C
{
	iParam2 = iParam2;
	unk_0x3714DE83381EADC2(sParam0);
	unk_0x41D8F63F629E76BE(iParam1, 1);
}

void func_214(var uParam0, bool bParam1)//Position - 0x7C25
{
	func_216(uParam0, uParam0->f_3);
	if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
	{
		if (!unk_0x62F3A07C43FFB568(uParam0->f_2, uParam0->f_4, 0))
		{
			if (!func_138(uParam0, 14))
			{
				if (func_51())
				{
					func_157(1);
				}
				func_215(uParam0, 11, 1);
				func_149(uParam0, 1);
				func_260(uParam0, 14, 0f, 1);
				if (uParam0->f_19A < 15)
				{
				}
			}
			else if (bParam1)
			{
				if (!func_120(uParam0))
				{
					if ((unk_0x105601648511CC64() % 1000) < 50)
					{
					}
					if (unk_0x5237AF95232D78C5(uParam0->f_2, 0))
					{
						if (func_383(uParam0, 15) > 5f)
						{
							func_260(uParam0, 15, 0f, 1);
						}
					}
					if (func_383(uParam0, 14) > 20f)
					{
						func_293(uParam0, "Player not in taxi. - YELL RETURN", 8);
					}
				}
				else if (func_383(uParam0, 14) > 20f)
				{
					if (func_9(uParam0->f_4, 1) > 40f)
					{
						func_293(uParam0, "Player not in taxi.", 21);
					}
					else
					{
						func_293(uParam0, "Player not in taxi. - YELL RETURN 2", 8);
					}
				}
			}
		}
	}
}

void func_215(var uParam0, int iParam1, bool bParam2)//Position - 0x7D30
{
	uParam0->f_19E = iParam1;
	if (bParam2)
	{
	}
}

void func_216(var uParam0, int iParam1)//Position - 0x7D44
{
	if (unk_0x724D816EA203A79E(iParam1))
	{
		if (!unk_0x36CEFBE9B745A58D(iParam1))
		{
			if (unk_0x231DB1D0F4218A1B(unk_0xB5CEFD608600A09F()))
			{
				if ((unk_0xD2B7EC731CF3F2D6(iParam1, joaat("weapon_stungun"), 0) || unk_0xD2B7EC731CF3F2D6(iParam1, 0, 2)) || unk_0xD2B7EC731CF3F2D6(iParam1, 0, 1))
				{
					func_293(uParam0, "Passenger injured by player with weapon.", 14);
				}
				unk_0xA67D3DDB524B8DBA(unk_0xB5CEFD608600A09F());
			}
		}
	}
}

void func_217()//Position - 0x7DA9
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (unk_0xE59B7F5A03335350(Local_260.f_4, 0))
	{
		if (func_146(&Local_260))
		{
			if (!iLocal_346)
			{
				iVar0 = unk_0xB5B60A04E1654409(Local_260.f_4, "window_lf");
				iVar1 = unk_0xB5B60A04E1654409(Local_260.f_4, "window_lr");
				iVar2 = unk_0xB5B60A04E1654409(Local_260.f_4, "window_rf");
				iVar3 = unk_0xB5B60A04E1654409(Local_260.f_4, "window_rr");
				vLocal_230 = { unk_0x3EA3A28A85F8C32F(Local_260.f_4, iVar0) };
				vLocal_230 = { unk_0x1483995DFFF0DEEA(Local_260.f_4, vLocal_230) };
				vLocal_234 = { vLocal_230 };
				vLocal_230.z = (vLocal_230.z + 0.15f);
				vLocal_230.y = (vLocal_230.y - 0.15f);
				vLocal_231 = { unk_0x3EA3A28A85F8C32F(Local_260.f_4, iVar1) };
				vLocal_231 = { unk_0x1483995DFFF0DEEA(Local_260.f_4, vLocal_231) };
				vLocal_235 = { vLocal_231 };
				vLocal_231.z = (vLocal_231.z + 0.15f);
				vLocal_232 = { unk_0x3EA3A28A85F8C32F(Local_260.f_4, iVar2) };
				vLocal_232 = { unk_0x1483995DFFF0DEEA(Local_260.f_4, vLocal_232) };
				vLocal_236 = { vLocal_232 };
				vLocal_232.z = (vLocal_232.z + 0.15f);
				vLocal_232.y = (vLocal_232.y - 0.15f);
				vLocal_233 = { unk_0x3EA3A28A85F8C32F(Local_260.f_4, iVar3) };
				vLocal_233 = { unk_0x1483995DFFF0DEEA(Local_260.f_4, vLocal_233) };
				vLocal_237 = { vLocal_233 };
				vLocal_233.z = (vLocal_233.z + 0.15f);
				iLocal_346 = 1;
			}
		}
		else if (iLocal_346)
		{
			iLocal_346 = 0;
		}
	}
}

void func_218(var uParam0, vector3 vParam1, float fParam2, bool bParam3)//Position - 0x7F30
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { func_40(vParam1, 1f, -fParam2, -fParam2, -22f) };
	vVar1 = { func_40(vParam1, 1f, fParam2, fParam2, 44f) };
	vVar0.z = (vVar0.z - 22f);
	vVar1.z = (vVar1.z + 22f);
	if (!bParam3)
	{
		unk_0xF16F7C45E0B1B52B(vVar0, vVar1);
		*uParam0 = unk_0x1DAA351326EA3537(vVar0, vVar1, 0, 1, 1, 1);
		unk_0xA0C0B32E74BE8DB7(vParam1, fParam2, 0);
	}
	else
	{
		unk_0x02DD9F29D9655E48();
		unk_0x483687B0FCA5415A(*uParam0, 0);
	}
}

void func_219(var uParam0, int iParam1, bool bParam2)//Position - 0x7FC1
{
	uParam0->f_6E = iParam1;
	if (bParam2)
	{
		func_49();
		func_260(uParam0, 16, 4f, 0);
		unk_0xEB233A3B7635D2AC();
	}
}

int func_220(var uParam0, int iParam1)//Position - 0x7FE6
{
	if (!unk_0xFA9040D29FE330BD(2))
	{
		return 0;
	}
	func_227(12);
	if (func_24(uParam0->f_2C, 8))
	{
		if (!func_24(uParam0->f_2C, 128))
		{
			if (unk_0x4FCDC2EC534819EF(unk_0xBC25C936A095B5BA()) && !func_24(uParam0->f_2C, 256))
			{
				func_228(&(uParam0->f_2C), 256);
			}
			if (func_24(uParam0->f_2C, 256) && unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
			{
				func_191(uParam0, 135, 1, 0, 1);
				func_228(&(uParam0->f_2C), 128);
			}
		}
	}
	if (!func_224(uParam0, iParam1))
	{
		if (func_9(uParam0->f_3, 1) < 35f)
		{
			if (!func_24(uParam0->f_2C, 8))
			{
				unk_0x85DB484A637CEAB9(uParam0->f_3, unk_0xBC25C936A095B5BA(), 0);
				func_191(uParam0, 133, 1, 0, 1);
				func_228(&(uParam0->f_2C), 8);
			}
		}
		if ((unk_0x36CEFBE9B745A58D(uParam0->f_3) || unk_0x889DA6CE8E4DB344(uParam0->f_3)) || func_9(uParam0->f_3, 1) > 400f)
		{
			func_293(uParam0, "ped is fleeing or injured", 5);
		}
	}
	else
	{
		uParam0->f_4 = unk_0x9FE9D386222EEE47(uParam0->f_2, 0);
		unk_0xA73D1278857991A2(uParam0->f_4, true);
		if (unk_0x3187EF5798B5D209(uParam0->f_4, -1, 0) == uParam0->f_2)
		{
			unk_0x0E622862E5E566BB(uParam0->f_4);
			func_222(uParam0);
			func_52(2, 0);
			bLocal_86 = true;
			func_186(&iLocal_82);
			return 1;
		}
		else
		{
			func_293(uParam0, "No Taxi", 21);
			func_221("TAXI_DBG_NTAXI", -1);
		}
	}
	return 0;
}

void func_221(char* sParam0, int iParam1)//Position - 0x8161
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 0, true, iParam1);
}

void func_222(var uParam0)//Position - 0x8178
{
	if (!unk_0x1D403DFADBC2DE3C(uParam0->f_4, 0))
	{
		if (func_223())
		{
		}
	}
}

int func_223()//Position - 0x8194
{
	if (unk_0xFA30DFD0084E92FE(unk_0x491B2241281A03B7(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_224(var uParam0, int iParam1)//Position - 0x81B5
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
			if (unk_0xE59B7F5A03335350(iVar0, 0))
			{
				iVar1 = unk_0x6F79ECA8C83E4357(iVar0);
				bVar2 = func_226(iVar0);
				bVar3 = true;
				if (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((iVar1 == joaat("rhino") || iVar1 == joaat("ratloader")) || iVar1 == joaat("surfer")) || iVar1 == joaat("surfer2")) || iVar1 == joaat("armytanker")) || iVar1 == joaat("barracks")) || iVar1 == joaat("barracks2")) || iVar1 == joaat("crusader")) || iVar1 == joaat("utillitruck")) || iVar1 == joaat("utillitruck2")) || iVar1 == joaat("utillitruck3")) || iVar1 == joaat("airtug")) || iVar1 == joaat("caddy")) || iVar1 == joaat("caddy2")) || iVar1 == joaat("dloader")) || iVar1 == joaat("docktug")) || iVar1 == joaat("flatbed")) || iVar1 == joaat("ripley")) || iVar1 == joaat("romero")) || iVar1 == joaat("towtruck")) || iVar1 == joaat("towtruck2")) || iVar1 == joaat("airbus")) || iVar1 == joaat("bus")) || iVar1 == joaat("coach")) || iVar1 == joaat("rentalbus")) || iVar1 == joaat("tourbus")) || iVar1 == joaat("riot")) || iVar1 == joaat("trash")) || iVar1 == joaat("benson")) || iVar1 == joaat("biff")) || iVar1 == joaat("hauler")) || iVar1 == joaat("packer")) || iVar1 == joaat("phantom")) || iVar1 == joaat("pounder")) || iVar1 == joaat("bulldozer")) || iVar1 == joaat("handler")) || iVar1 == joaat("tiptruck2")) || iVar1 == joaat("cutter")) || iVar1 == joaat("dump")) || iVar1 == joaat("mixer")) || iVar1 == joaat("mixer2")) || iVar1 == joaat("rubble")) || iVar1 == joaat("scrap")) || iVar1 == joaat("tiptruck")) || iVar1 == joaat("camper")) || iVar1 == joaat("taco")) || iVar1 == joaat("boxville")) || iVar1 == joaat("boxville2")) || iVar1 == joaat("boxville3")) || iVar1 == joaat("burrito")) || iVar1 == joaat("burrito2")) || iVar1 == joaat("burrito3")) || iVar1 == joaat("burrito4")) || iVar1 == joaat("gburrito")) || iVar1 == joaat("journey")) || iVar1 == joaat("mule")) || iVar1 == joaat("mule2")) || iVar1 == joaat("pony")) || iVar1 == joaat("rumpo")) || iVar1 == joaat("rumpo2")) || iVar1 == joaat("speedo")) || iVar1 == joaat("speedo2")) || iVar1 == joaat("youga")) || iVar1 == joaat("mower")) || iVar1 == joaat("tractor")) || iVar1 == joaat("tractor2")) || iVar1 == joaat("fbi")) || iVar1 == joaat("fbi2")) || iVar1 == joaat("pranger")) || iVar1 == joaat("ambulance")) || iVar1 == joaat("dilettante2")) || iVar1 == 1938952078) || iVar1 == joaat("lguard")) || iVar1 == joaat("dune")) || iVar1 == joaat("pbus")) || iVar1 == joaat("police")) || iVar1 == joaat("police2")) || iVar1 == joaat("police3")) || iVar1 == joaat("police4")) || iVar1 == joaat("policeb")) || iVar1 == joaat("policet")) || iVar1 == joaat("sheriff")) || iVar1 == joaat("sheriff2")) || iVar1 == joaat("stockade"))
				{
					bVar3 = false;
				}
				if (uParam0->f_19B == 7)
				{
					if (iVar1 == joaat("bodhi2"))
					{
						bVar3 = false;
					}
				}
				bVar4 = false;
				if (unk_0x7C28D15641461C68(iVar1))
				{
					if (unk_0x3187EF5798B5D209(iVar0, -1, 0) == unk_0xBC25C936A095B5BA())
					{
						bVar4 = true;
					}
				}
				bVar5 = true;
				if (unk_0x524ABB0435146845(iVar0) < iParam1)
				{
					bVar5 = false;
				}
				if (!bVar2)
				{
					if (!func_24(uParam0->f_2C, 64))
					{
						if (unk_0xFA9040D29FE330BD(2))
						{
							func_221("TX_VIP_DMGD", -1);
							if (func_225("TX_VIP_DMGD"))
							{
								func_228(&(uParam0->f_2C), 64);
							}
						}
					}
					return 0;
				}
				else if (!bVar4 || !bVar3)
				{
					if (!func_24(uParam0->f_2C, 32))
					{
						if (unk_0xFA9040D29FE330BD(2))
						{
							func_221("TX_VIP_CAR", -1);
							if (func_225("TX_VIP_CAR"))
							{
								func_228(&(uParam0->f_2C), 32);
							}
						}
					}
					return 0;
				}
				else if (!bVar5)
				{
					if (!func_24(uParam0->f_2C, 16))
					{
						if (unk_0xFA9040D29FE330BD(2))
						{
							func_221("TX_VIP_SMALL", -1);
							if (func_225("TX_VIP_SMALL"))
							{
								func_228(&(uParam0->f_2C), 16);
							}
						}
					}
					return 0;
				}
				return 1;
			}
		}
		else
		{
			func_22(&(uParam0->f_2C), 16);
			func_22(&(uParam0->f_2C), 64);
			func_22(&(uParam0->f_2C), 32);
		}
	}
	return 0;
}

int func_225(char* sParam0)//Position - 0x87CA
{
	unk_0xF07D20149ECBC61E(sParam0);
	return unk_0xA66DBDA0A072514A(0);
}

int func_226(int iParam0)//Position - 0x87DD
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!unk_0xE1A8FD31526DD6C8(iParam0, 0, 0))
	{
		iVar0++;
	}
	if (!unk_0xE1A8FD31526DD6C8(iParam0, 1, 0))
	{
		iVar0++;
	}
	if (!unk_0xE1A8FD31526DD6C8(iParam0, 4, 0))
	{
		iVar0++;
	}
	if (!unk_0xE1A8FD31526DD6C8(iParam0, 5, 0))
	{
		iVar0++;
	}
	if (iVar0 < 2)
	{
		return 0;
	}
	if (unk_0x7C28D15641461C68(unk_0x6F79ECA8C83E4357(iParam0)))
	{
		iVar1 = 0;
		if (!unk_0xA499BE1E93004FF2(iParam0, 0))
		{
			iVar1++;
		}
		if (!unk_0xA499BE1E93004FF2(iParam0, 1))
		{
			iVar1++;
		}
		if (!unk_0xA499BE1E93004FF2(iParam0, 2))
		{
			iVar1++;
		}
		if (!unk_0xA499BE1E93004FF2(iParam0, 3))
		{
			iVar1++;
		}
		if (iVar1 < 2)
		{
			return 0;
		}
	}
	return 1;
}

void func_227(int iParam0)//Position - 0x8899
{
	var uVar0;
	vector3 vVar1[24];
	
	if (unk_0xA76D65C63ED50F67() || unk_0xF49912B78E2591B6())
	{
		uVar0 = iParam0;
		unk_0xCEFBE636B33A557B(8, &uVar0, 1, 1);
	}
	else if (unk_0x3E9993F328985CCB() || unk_0xF7E138CFA19B55E7())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0x785F3AE9C51AE93D(8, &cVar1);
	}
}

void func_228(var uParam0, int iParam1)//Position - 0x88F2
{
	func_229(uParam0, iParam1);
}

void func_229(var uParam0, int iParam1)//Position - 0x8902
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_230(var uParam0)//Position - 0x8913
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_23(&(uParam0->f_64), iVar0);
		iVar0++;
	}
}

void func_231()//Position - 0x8938
{
	Local_165 = 0;
	func_248(36075/*func_250*/, 36050/*func_249*/, 1);
	func_248(35811/*func_246*/, 35788/*func_245*/, 1);
	func_248(35726/*func_244*/, 35701/*func_243*/, 1);
	func_248(35629/*func_242*/, 35605/*func_241*/, 1);
	func_248(35495/*func_240*/, 35474/*func_239*/, 1);
	func_248(35421/*func_237*/, 35396/*func_236*/, 1);
	func_248(35254/*func_233*/, 35231/*func_232*/, 1);
}

int func_232(var uParam0, var uParam1)//Position - 0x899F
{
	uParam1 = uParam1;
	func_293(uParam0, "Taxi Not Driveable", 1);
	return 1;
}

int func_233(var uParam0)//Position - 0x89B6
{
	if (unk_0x724D816EA203A79E(uParam0->f_4))
	{
		if (func_235(uParam0->f_4))
		{
			func_234(uParam0, 1);
			return 1;
		}
	}
	return 0;
}

void func_234(var uParam0, int iParam1)//Position - 0x89E0
{
	uParam0->f_75 = 1;
	uParam0->f_76 = iParam1;
}

int func_235(int iParam0)//Position - 0x89F3
{
	if (!unk_0xE59B7F5A03335350(iParam0, 0))
	{
		return 1;
	}
	if (unk_0x77F5C030D3238E26(iParam0) < -100f)
	{
		return 1;
	}
	else if (unk_0xBCDD4514E5CAE591(iParam0, 0, 40000) || unk_0xBCDD4514E5CAE591(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

int func_236(var uParam0, var uParam1)//Position - 0x8A44
{
	uParam1 = uParam1;
	func_293(uParam0, "Didn't lose police in time.", 9);
	return 1;
}

int func_237(var uParam0)//Position - 0x8A5D
{
	if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0)
	{
		if (func_238(uParam0->f_55, 32))
		{
			return 1;
		}
	}
	return 0;
}

bool func_238(var uParam0, int iParam1)//Position - 0x8A83
{
	return (uParam0 && iParam1) != 0;
}

int func_239(var uParam0, var uParam1)//Position - 0x8A92
{
	uParam1 = uParam1;
	func_234(uParam0, 11);
	return 1;
}

int func_240(var uParam0)//Position - 0x8AA7
{
	if (unk_0x724D816EA203A79E(uParam0->f_4))
	{
		if (unk_0x149E9368A11035DE(uParam0->f_4) && !unk_0x58F9E0EA914AEF2C(uParam0->f_4))
		{
			if (!func_138(uParam0, 25))
			{
				func_260(uParam0, 25, 0, 0);
			}
			else if (func_383(uParam0, 25) > 2f)
			{
				return 1;
			}
		}
		else if (func_138(uParam0, 25))
		{
			func_145(uParam0, 25, 0);
		}
	}
	return 0;
}

int func_241(var uParam0, var uParam1)//Position - 0x8B15
{
	uParam1 = uParam1;
	func_293(uParam0, "Taxi Is Flipped", 0);
	return 1;
}

int func_242(var uParam0)//Position - 0x8B2D
{
	if (!unk_0x1D403DFADBC2DE3C(uParam0->f_4, 0))
	{
		if (unk_0xB9FEB746FD810A52(uParam0->f_4))
		{
			if (unk_0xBCDD4514E5CAE591(uParam0->f_4, 0, 40000) || unk_0xBCDD4514E5CAE591(uParam0->f_4, 1, 40000))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_243(var uParam0, var uParam1)//Position - 0x8B75
{
	uParam1 = uParam1;
	func_293(uParam0, "Stayed stopped for too long.", 9);
	return 1;
}

int func_244(var uParam0)//Position - 0x8B8E
{
	if (!unk_0x1D403DFADBC2DE3C(uParam0->f_4, 0))
	{
		if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
		{
			if (unk_0xB66CFDE6B830965A(uParam0->f_4))
			{
				if (func_238(uParam0->f_56, 8))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_245(var uParam0, var uParam1)//Position - 0x8BCC
{
	uParam1 = uParam1;
	func_293(uParam0, "Taxi Not Driveable", 0);
	return 1;
}

int func_246(var uParam0)//Position - 0x8BE3
{
	if (unk_0x724D816EA203A79E(uParam0->f_4))
	{
		if (func_247(uParam0->f_4))
		{
			func_234(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

int func_247(int iParam0)//Position - 0x8C0D
{
	if (!unk_0xE59B7F5A03335350(iParam0, 0))
	{
		return 1;
	}
	if (unk_0x77F5C030D3238E26(iParam0) == 0f)
	{
		if (!unk_0xE59B7F5A03335350(iParam0, 0))
		{
		}
		return 1;
	}
	else if (unk_0xBCDD4514E5CAE591(iParam0, 0, 40000) || unk_0xBCDD4514E5CAE591(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

void func_248(int iParam0, int iParam1, bool bParam2)//Position - 0x8C68
{
	if (Local_165 >= 16)
	{
		Local_165 = 16;
		return;
	}
	Local_165.f_1[Local_165 /*4*/] = 0;
	func_229(&(Local_165.f_1[Local_165 /*4*/]), 1);
	if (bParam2)
	{
		func_229(&(Local_165.f_1[Local_165 /*4*/]), 2);
	}
	Local_165.f_1[Local_165 /*4*/].f_2 = iParam0;
	Local_165.f_1[Local_165 /*4*/].f_3 = iParam1;
	Local_165++;
}

int func_249(var uParam0, var uParam1)//Position - 0x8CD2
{
	uParam1 = uParam1;
	func_293(uParam0, "Passenger injured.", 15);
	return 1;
}

int func_250(var uParam0)//Position - 0x8CEB
{
	if (unk_0x724D816EA203A79E(uParam0->f_3))
	{
		if ((unk_0x36CEFBE9B745A58D(uParam0->f_3) || unk_0x1D403DFADBC2DE3C(uParam0->f_3, 0)) || unk_0x7544D2465B934445(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

void func_251()//Position - 0x8D2B
{
	Local_162[5 /*10*/] = 5;
	Local_162[5 /*10*/].f_1 = 0;
	Local_162[5 /*10*/].f_2 = "TX_SPEED_N";
	Local_162[5 /*10*/].f_9 = 78;
	Local_162[0 /*10*/] = 5;
	Local_162[0 /*10*/].f_1 = 0;
	Local_162[0 /*10*/].f_2 = "TX_AIR_N";
	Local_162[0 /*10*/].f_9 = 76;
	Local_162[2 /*10*/] = 5;
	Local_162[2 /*10*/].f_1 = 0;
	Local_162[2 /*10*/].f_2 = "TX_QSTOP_N";
	Local_162[2 /*10*/].f_9 = 21;
	Local_162[1 /*10*/] = 10;
	Local_162[1 /*10*/].f_1 = 0;
	Local_162[1 /*10*/].f_2 = "TX_DRIFT_N";
	Local_162[1 /*10*/].f_9 = 71;
	Local_162[4 /*10*/] = 10;
	Local_162[4 /*10*/].f_1 = 0;
	Local_162[4 /*10*/].f_2 = "TX_SIDEWALK_N";
	Local_162[4 /*10*/].f_9 = 79;
	Local_162[6 /*10*/] = 10;
	Local_162[6 /*10*/].f_1 = 0;
	Local_162[6 /*10*/].f_2 = "TX_ONCOMING_N";
	Local_162[6 /*10*/].f_9 = 80;
	Local_162[9 /*10*/] = 15;
	Local_162[9 /*10*/].f_1 = 0;
	Local_162[9 /*10*/].f_2 = "TX_HITRUN_N";
	Local_162[9 /*10*/].f_9 = 82;
	Local_162[8 /*10*/] = 15;
	Local_162[8 /*10*/].f_1 = 0;
	Local_162[8 /*10*/].f_2 = "TX_RECKLESS_N";
	Local_162[8 /*10*/].f_9 = 72;
	Local_162[7 /*10*/] = 15;
	Local_162[7 /*10*/].f_1 = 0;
	Local_162[7 /*10*/].f_2 = "TX_ROLL_N";
	Local_162[7 /*10*/].f_9 = 74;
	Local_162[11 /*10*/] = 5;
	Local_162[11 /*10*/].f_1 = 0;
	Local_162[11 /*10*/].f_2 = "TX_SWERVE_N";
	Local_162[11 /*10*/].f_9 = 70;
	Local_162[12 /*10*/] = 5;
	Local_162[12 /*10*/].f_1 = 0;
	Local_162[12 /*10*/].f_2 = "TX_REVERSE_N";
	Local_162[12 /*10*/].f_9 = 69;
	Local_162[13 /*10*/] = 10;
	Local_162[13 /*10*/].f_1 = 0;
	Local_162[13 /*10*/].f_2 = "TX_OFFROAD_N";
	Local_162[13 /*10*/].f_9 = 67;
	Local_162[14 /*10*/] = 10;
	Local_162[14 /*10*/].f_1 = 0;
	Local_162[14 /*10*/].f_2 = "TX_NEARMIS_N";
	Local_162[14 /*10*/].f_9 = 75;
}

int func_252()//Position - 0x8F03
{
	if (!unk_0xD6513D668481290A(Local_262.f_29[0]))
	{
		func_254("TAXI_ASSETS_STREAMED - Loading A_M_Y_BUSINESS_01", &iLocal_339, 1000);
		return 0;
	}
	if (!unk_0xD6513D668481290A(Local_262.f_29[1]))
	{
		func_254("TAXI_ASSETS_STREAMED - Loading A_M_Y_BUSINESS_02", &iLocal_339, 1000);
		return 0;
	}
	if (!unk_0xD6513D668481290A(Local_262.f_29[2]))
	{
		func_254("TAXI_ASSETS_STREAMED - Loading A_M_Y_GOLFER_01", &iLocal_339, 1000);
		return 0;
	}
	if (!unk_0xA7F138B5B1AB2CF6(iLocal_399))
	{
		return 0;
	}
	if (!func_253(&iLocal_339, 1))
	{
		func_254("TAXI_ASSETS_STREAMED - Waiting for assets...", &iLocal_339, 1000);
		return 0;
	}
	return 1;
}

int func_253(int iParam0, bool bParam1)//Position - 0x8F9F
{
	if (!unk_0xD6513D668481290A(func_21()))
	{
		func_254("TAXI_SHARED_ASSETS_STREAMED - TAXI MODEL Loading...", iParam0, 1000);
		return 0;
	}
	if (bParam1)
	{
		if (!unk_0xF9E082857622D91E("gestures@m@standing@casual"))
		{
			func_254("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts gestures@m@standing@casual Loading...", iParam0, 1000);
			return 0;
		}
	}
	if (!unk_0xF9E082857622D91E("oddjobs@taxi@"))
	{
		func_254("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@taxi@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0xF9E082857622D91E("oddjobs@towingcome_here"))
	{
		func_254("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@towingcome_here Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0xF9E082857622D91E("misscommon@response"))
	{
		func_254("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts misscommon@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0xFA9040D29FE330BD(2))
	{
		func_254("TAXI_SHARED_ASSETS_STREAMED - Mission Text Loading...", iParam0, 1000);
		return 0;
	}
	return 1;
}

void func_254(char* sParam0, int iParam1, int iParam2)//Position - 0x9055
{
	if (unk_0x105601648511CC64() < (*iParam1 + iParam2))
	{
		return;
	}
	*iParam1 = unk_0x105601648511CC64();
}

void func_255(var uParam0, int iParam1)//Position - 0x9074
{
	switch (iParam1)
	{
		case 1:
			uParam0->f_7B = "TRS_STREAMING";
			break;
		
		case 2:
			uParam0->f_7B = " TRS_FINDING_LOCATION ";
			break;
		
		case 3:
			uParam0->f_7B = " TRS_SPAWNING ";
			break;
		
		case 4:
			uParam0->f_7B = " TRS_SPAWN_CAR ";
			break;
		
		case 5:
			uParam0->f_7B = " TRS_MANAGE_PICKUP ";
			break;
		
		case 6:
			uParam0->f_7B = " TRS_PASSENGER_ENTER ";
			break;
		
		case 7:
			uParam0->f_7B = " TRS_WAIT_FOR_TIME ";
			break;
		
		case 8:
			uParam0->f_7B = " TRS_WAIT_FOR_TAIL ";
			break;
		
		case 9:
			uParam0->f_7B = " TRS_DRIVING_PASSENGER ";
			break;
		
		case 10:
			uParam0->f_7B = " TRS_WAIT_FOR_FULL_STOP ";
			break;
		
		case 18:
			uParam0->f_7B = " TRS_PRE_CUTSCENE ";
			break;
		
		case 11:
			uParam0->f_7B = " TRS_SWITCH_JOB ";
			break;
		
		case 19:
			uParam0->f_7B = " TRS_CUTSCENE ";
			break;
		
		case 20:
			uParam0->f_7B = " TRS_CUTSCENE_02 ";
			break;
		
		case 13:
			uParam0->f_7B = " TRS_CHASE_DRIVER ";
			break;
		
		case 12:
			uParam0->f_7B = " TRS_SAVE_DAMSEL ";
			break;
		
		case 14:
			uParam0->f_7B = " TRS_REVEAL_DESTINATION ";
			break;
		
		case 15:
			uParam0->f_7B = " TRS_WAIT_PARK ";
			break;
		
		case 16:
			uParam0->f_7B = " TRS_SEND_TO_STORE ";
			break;
		
		case 17:
			uParam0->f_7B = " TRS_WAIT_1ST_STOP ";
			break;
		
		case 22:
			uParam0->f_7B = " TRS_DROPPING_OFF ";
			break;
		
		case 25:
			uParam0->f_7B = " TRS_ESCAPE_POLICE ";
			break;
		
		case 26:
			uParam0->f_7B = " TRS_POLICE_ESCAPED ";
			break;
		
		case 24:
			uParam0->f_7B = " TRS_TIE_UP_LOSE_ENDS ";
			break;
		
		case 27:
			uParam0->f_7B = " TRS_REGULAR_PAYMENT ";
			break;
		
		case 23:
			uParam0->f_7B = " TRS_ELIMATE_ALL_ENEMIES ";
			break;
		
		case 28:
			uParam0->f_7B = " TRS_SPECIAL_ENDING ";
			break;
		
		case 29:
			uParam0->f_7B = " TRS_SCORECARD_GRADE ";
			break;
		
		case 30:
			uParam0->f_7B = " TRS_CLEANUP ";
			break;
		
		case 21:
			uParam0->f_7B = " TRS_WAIT_FOR_PASSENGER ";
			break;
		
		default:
			uParam0->f_7B = " TRS IS UNIDENTIFIED - FIX THIS ";
			break;
	}
	uParam0->f_19A = iParam1;
}

void func_256(var uParam0)//Position - 0x9293
{
	if (!unk_0x36CEFBE9B745A58D(uParam0->f_3))
	{
		uParam0->f_8 = func_198(uParam0->f_3, 0, 0);
		unk_0x436D0272182E484D(uParam0->f_8, "TAXI_BLIP_PASS");
		unk_0xC2A76C105FD557E3(1, 0f);
		unk_0x0BBAABB52887CF8C(uParam0->f_8, true);
	}
}

int func_257(var uParam0, vector3 vParam1, vector3 vParam2, var uParam3)//Position - 0x92D0
{
	uParam0->f_B = { vParam1 };
	uParam0->f_E = { vParam2 };
	func_41(uParam0->f_E, 0);
	unk_0xEDAD35A0D81ED3FB(uParam0->f_E, 25f, 0, 0, 0, 0, false, 0);
	if (unk_0x724D816EA203A79E(Global_195FA.f_E1[0]))
	{
		(*uParam3)[0] = Global_195FA.f_E1[0];
		(*uParam3)[1] = Global_195FA.f_E1[1];
		(*uParam3)[2] = Global_195FA.f_E1[2];
		unk_0x77815D3407C6700D((*uParam3)[0], true, 1);
		unk_0x77815D3407C6700D((*uParam3)[1], true, 1);
		unk_0x77815D3407C6700D((*uParam3)[2], true, 1);
	}
	else
	{
		(*uParam3)[0] = unk_0x01B3635C3E8EDD81(26, uParam3->f_29[0], uParam0->f_B, -178.76f, 1, true);
		(*uParam3)[1] = unk_0x01B3635C3E8EDD81(26, uParam3->f_29[1], unk_0xA4455714F3DCE207((*uParam3)[0], 0.5f, 0.5f, 0f), 21.77f, 1, true);
		(*uParam3)[2] = unk_0x01B3635C3E8EDD81(26, uParam3->f_29[1], unk_0xA4455714F3DCE207((*uParam3)[0], 0.5f, -0.5f, 0f), -147.25f, 1, true);
	}
	func_259(uParam0, uParam3[0]);
	uParam3->f_33[0] = 0;
	uParam3->f_33[1] = 0;
	uParam3->f_33[2] = 0;
	uParam3->f_C[0] = 0;
	uParam3->f_C[1] = 1;
	uParam3->f_C[2] = 2;
	if ((!unk_0x36CEFBE9B745A58D((*uParam3)[0]) && !unk_0x36CEFBE9B745A58D((*uParam3)[1])) && !unk_0x36CEFBE9B745A58D((*uParam3)[2]))
	{
		unk_0x85DB484A637CEAB9((*uParam3)[1], (*uParam3)[0], 0);
		unk_0x85DB484A637CEAB9((*uParam3)[2], (*uParam3)[0], 0);
		unk_0x85DB484A637CEAB9((*uParam3)[0], (*uParam3)[1], 0);
	}
	if (!unk_0x36CEFBE9B745A58D((*uParam3)[2]))
	{
		func_7(&(uParam0->f_F4), 5, (*uParam3)[2], "TaxiPaulie", 0, 1);
		unk_0x36C3B58DA78A2679((*uParam3)[2], "TaxiPaulie");
		unk_0xC8FD3EBBB90E8D7F((*uParam3)[2], 317, true);
	}
	if (!unk_0x36CEFBE9B745A58D((*uParam3)[1]))
	{
		func_7(&(uParam0->f_F4), 4, (*uParam3)[1], "TaxiClyde", 0, 1);
		unk_0x36C3B58DA78A2679((*uParam3)[1], "TaxiClyde");
		unk_0xC8FD3EBBB90E8D7F((*uParam3)[1], 317, true);
	}
	if (!unk_0x36CEFBE9B745A58D((*uParam3)[0]))
	{
		func_7(&(uParam0->f_F4), 3, (*uParam3)[0], "TaxiDarren", 0, 1);
		unk_0x36C3B58DA78A2679((*uParam3)[0], "TaxiDarren");
		unk_0xC8FD3EBBB90E8D7F((*uParam3)[0], 317, true);
		unk_0xB2CB6EAA6B280A84("TAXI_Passenger", &(uParam0->f_19D));
		unk_0xA902E18EDF6FA0C8(1, uParam0->f_19D, 1862763509);
		unk_0x4106FAF8AA1D69D5((*uParam3)[0], uParam0->f_19D);
		func_258((*uParam3)[1], uParam0->f_19D);
		func_258((*uParam3)[2], uParam0->f_19D);
		return 1;
	}
	return 0;
}

void func_258(int iParam0, int iParam1)//Position - 0x9573
{
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		unk_0x4106FAF8AA1D69D5(iParam0, iParam1);
	}
}

void func_259(var uParam0, var uParam1)//Position - 0x958D
{
	if (!unk_0x36CEFBE9B745A58D(*uParam1))
	{
		uParam0->f_3 = *uParam1;
	}
}

void func_260(var uParam0, int iParam1, float fParam2, bool bParam3)//Position - 0x95AA
{
	int iVar0;
	
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (fParam2 > 0f)
			{
				func_103(&(uParam0->f_92[iVar0 /*3*/]), fParam2);
			}
			else
			{
				func_102(&(uParam0->f_92[iVar0 /*3*/]));
			}
			iVar0++;
		}
	}
	else if (fParam2 > 0f)
	{
		func_103(&(uParam0->f_92[iParam1 /*3*/]), fParam2);
	}
	else
	{
		func_102(&(uParam0->f_92[iParam1 /*3*/]));
	}
	if (bParam3)
	{
	}
}

void func_261()//Position - 0x961C
{
	unk_0xA8396BF0E2C53C39();
	unk_0x522053D86D6E1C7A("oddjobs@taxi@gyn@cc@hotbox");
}

void func_262()//Position - 0x9630
{
	unk_0xF243B7A14FCFD0F4(Local_262.f_2D[0]);
	unk_0xF243B7A14FCFD0F4(Local_262.f_2D[1]);
	unk_0xF243B7A14FCFD0F4(Local_262.f_2D[2]);
	unk_0xF243B7A14FCFD0F4(Local_262.f_2D[3]);
	unk_0xF243B7A14FCFD0F4(Local_262.f_2D[4]);
	unk_0xF243B7A14FCFD0F4(joaat("stretch"));
	unk_0xF243B7A14FCFD0F4(joaat("superd"));
	unk_0x522053D86D6E1C7A("oddjobs@taxi@gyn@cc@intro");
	unk_0x522053D86D6E1C7A("amb@world_human_stand_impatient@female@no_sign@exit");
	unk_0x522053D86D6E1C7A("amb@world_human_stand_impatient@female@no_sign@base");
	iLocal_399 = func_263();
}

int func_263()//Position - 0x96A5
{
	return unk_0x9934FEFB3B8C6DB8("MIDSIZED_MESSAGE");
}

void func_264()//Position - 0x96B5
{
	unk_0xF243B7A14FCFD0F4(Local_262.f_29[0]);
	unk_0xF243B7A14FCFD0F4(Local_262.f_29[1]);
	unk_0xF243B7A14FCFD0F4(Local_262.f_29[2]);
	func_265(1);
}

void func_265(bool bParam0)//Position - 0x96E6
{
	unk_0xF243B7A14FCFD0F4(func_21());
	if (bParam0)
	{
		unk_0x522053D86D6E1C7A("gestures@m@standing@casual");
	}
	unk_0x522053D86D6E1C7A("oddjobs@taxi@");
	unk_0x522053D86D6E1C7A("oddjobs@towingcome_here");
	unk_0x522053D86D6E1C7A("misscommon@response");
	unk_0x900CF084251DED26("TAXI", 2);
	if (!func_24(Global_19B04.f_4A7C, 128))
	{
		func_228(&(Global_19B04.f_4A7C), 128);
	}
}

void func_266(var uParam0, var uParam1)//Position - 0x973F
{
	int iVar0;
	
	if (*uParam1 <= 5)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			unk_0x7CB6FD92BE491AD9(&(uParam0->f_3C[iVar0 /*3*/]), 1);
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			uParam0->f_3C[iVar0 /*3*/] = { *(uParam1[iVar0 /*3*/]) };
			unk_0xF0059F27F7BB6680(&(uParam0->f_3C[iVar0 /*3*/]), 1);
			unk_0x7CB6FD92BE491AD9(&(uParam0->f_3C[iVar0 /*3*/]), 2);
			iVar0++;
		}
	}
}

void func_267(var uParam0, char* sParam1, int iParam2)//Position - 0x97B6
{
	*uParam0 = 0;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = sParam1;
}

void func_268(var uParam0, var uParam1, float fParam2)//Position - 0x97CE
{
	int iVar0;
	
	if (!unk_0x1D403DFADBC2DE3C(uParam0->f_2, 0))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (!unk_0x1D403DFADBC2DE3C(uParam1->f_4[iVar0], 0))
			{
				if (func_10(uParam0->f_2, uParam1->f_4[iVar0], 1) > fParam2)
				{
					unk_0x02537C8C1BEEB477(&(uParam1->f_4[iVar0]));
				}
			}
			iVar0++;
		}
	}
	if (!unk_0x1D403DFADBC2DE3C(uParam1->f_A, 0))
	{
		if (func_10(uParam0->f_2, uParam1->f_A, 1) > fParam2)
		{
			unk_0x1E7A09C1710FB071(&(uParam1->f_A));
			unk_0x1E7A09C1710FB071(&(uParam1->f_B));
		}
	}
}

void func_269(var uParam0, int iParam1, bool bParam2)//Position - 0x9859
{
	if (uParam0->f_19B == 0)
	{
		if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) == 0)
		{
			if (bParam2)
			{
				if (func_383(uParam0, 10) > (20f + 10f))
				{
					if (uParam0->f_70)
					{
						func_191(uParam0, 92, 1, 0, 0);
						uParam0->f_70 = 0;
					}
					else
					{
						func_191(uParam0, 83, 1, 0, 0);
					}
					uParam0->f_71 = 1;
					func_260(uParam0, 10, 0f, 1);
				}
			}
			else if (func_383(uParam0, 10) > 20f)
			{
				if (uParam0->f_70)
				{
					func_191(uParam0, 92, 1, 0, 0);
					uParam0->f_70 = 0;
				}
				else
				{
					func_191(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_71 = 1;
				func_260(uParam0, 10, 0f, 1);
			}
		}
	}
	if (uParam0->f_19B == 1)
	{
		if (func_383(uParam0, 10) > 30f)
		{
			if (!func_51())
			{
				if (uParam0->f_70)
				{
					func_191(uParam0, 92, 1, 0, 0);
					uParam0->f_70 = 0;
				}
				else
				{
					func_191(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_71 = 1;
				func_260(uParam0, 10, 0f, 1);
			}
		}
	}
	if (func_24(uParam0->f_64, 64))
	{
		if (!func_16(&(Local_162[5 /*10*/].f_6)))
		{
			func_186(&(Local_162[5 /*10*/].f_6));
		}
		else if (func_100(&(Local_162[5 /*10*/].f_6)) > 6f)
		{
			if (func_292(uParam0))
			{
				if (uParam0->f_71)
				{
					func_191(uParam0, 93, 1, 0, 0);
					uParam0->f_71 = 0;
				}
				else
				{
					func_191(uParam0, Local_162[5 /*10*/].f_9, 1, 0, 0);
				}
				func_291(uParam0, 1);
				func_289(5, uParam0);
				func_288(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_64, 1))
	{
		if (!func_16(&(Local_162[0 /*10*/].f_6)))
		{
			func_186(&(Local_162[0 /*10*/].f_6));
		}
		else if (func_100(&(Local_162[0 /*10*/].f_6)) > 5f)
		{
			if (func_287(uParam0))
			{
				func_291(uParam0, 1);
				func_289(0, uParam0);
				if (uParam0->f_71)
				{
					func_191(uParam0, 93, 1, 0, 0);
					uParam0->f_71 = 0;
				}
				else
				{
					func_191(uParam0, Local_162[0 /*10*/].f_9, 1, 0, 0);
				}
				func_288(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_64, 2))
	{
		if (!func_16(&(Local_162[1 /*10*/].f_6)))
		{
			func_186(&(Local_162[1 /*10*/].f_6));
		}
		else if (func_100(&(Local_162[1 /*10*/].f_6)) > 5f)
		{
			if (func_286(uParam0))
			{
				func_291(uParam0, 1);
				func_289(1, uParam0);
				if (uParam0->f_71)
				{
					func_191(uParam0, 93, 1, 0, 0);
					uParam0->f_71 = 0;
				}
				else
				{
					func_191(uParam0, Local_162[1 /*10*/].f_9, 1, 0, 0);
				}
				func_288(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_64, 2048))
	{
		if (!func_16(&(Local_162[8 /*10*/].f_6)))
		{
			if (unk_0x724D816EA203A79E(uParam0->f_4))
			{
				uParam0->f_2E = unk_0x8D66276473ABD7CC(uParam0->f_4);
				func_186(&(Local_162[8 /*10*/].f_6));
			}
		}
		else if (func_100(&(Local_162[8 /*10*/].f_6)) > 7f || Local_162[8 /*10*/].f_1 == 0)
		{
			if (func_285(uParam0))
			{
				func_291(uParam0, 1);
				func_289(8, uParam0);
				func_288(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_64, 128))
	{
		if (!func_16(&(Local_162[6 /*10*/].f_6)))
		{
			func_186(&(Local_162[6 /*10*/].f_6));
		}
		else if (func_100(&(Local_162[6 /*10*/].f_6)) > 5f)
		{
			if (func_284(uParam0))
			{
				func_291(uParam0, 1);
				func_289(6, uParam0);
				if (uParam0->f_71)
				{
					func_191(uParam0, 93, 1, 0, 0);
					uParam0->f_71 = 0;
				}
				else
				{
					func_191(uParam0, Local_162[6 /*10*/].f_9, 1, 0, 0);
				}
				func_288(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_64, 32))
	{
		if (!func_16(&(Local_162[4 /*10*/].f_6)))
		{
			func_186(&(Local_162[4 /*10*/].f_6));
		}
		else if (func_100(&(Local_162[4 /*10*/].f_6)) > 4f)
		{
			if (func_283(uParam0))
			{
				func_291(uParam0, 1);
				func_289(4, uParam0);
				if (uParam0->f_71)
				{
					func_191(uParam0, 93, 1, 0, 0);
					uParam0->f_71 = 0;
				}
				else
				{
					func_191(uParam0, Local_162[4 /*10*/].f_9, 1, 0, 0);
				}
				func_288(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_64, 256))
	{
		if (!func_16(&(Local_162[7 /*10*/].f_6)))
		{
			func_186(&(Local_162[7 /*10*/].f_6));
		}
		else if (func_100(&(Local_162[7 /*10*/].f_6)) > 5f || Local_162[7 /*10*/].f_1 == 0)
		{
			if (func_282(uParam0))
			{
				func_289(7, uParam0);
				func_291(uParam0, 1);
				if (uParam0->f_71)
				{
					func_191(uParam0, 93, 1, 0, 0);
					uParam0->f_71 = 0;
				}
				else
				{
					func_191(uParam0, Local_162[7 /*10*/].f_9, 1, 0, 1);
				}
				func_288(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_64, 8))
	{
		if (!func_16(&(Local_162[9 /*10*/].f_6)))
		{
			func_186(&(Local_162[9 /*10*/].f_6));
		}
		else if (func_100(&(Local_162[9 /*10*/].f_6)) <= 7f)
		{
			unk_0xA67D3DDB524B8DBA(unk_0xB5CEFD608600A09F());
		}
		else if (func_100(&(Local_162[9 /*10*/].f_6)) > 7f || Local_162[9 /*10*/].f_1 == 0)
		{
			if (func_281(uParam0))
			{
				func_291(uParam0, 1);
				func_289(9, uParam0);
				if (uParam0->f_71)
				{
					func_191(uParam0, 93, 1, 0, 0);
					uParam0->f_71 = 0;
				}
				else
				{
					func_191(uParam0, Local_162[9 /*10*/].f_9, 1, 0, 1);
				}
				func_288(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_64, 16384))
	{
		if (!func_16(&(Local_162[13 /*10*/].f_6)))
		{
			func_186(&(Local_162[13 /*10*/].f_6));
		}
		else if (func_100(&(Local_162[13 /*10*/].f_6)) > 10f)
		{
			if (func_275(uParam0))
			{
				func_291(uParam0, 1);
				func_289(13, uParam0);
				if (uParam0->f_71)
				{
					func_191(uParam0, 93, 1, 0, 0);
					uParam0->f_71 = 0;
				}
				else
				{
					func_191(uParam0, Local_162[13 /*10*/].f_9, 1, 0, 0);
				}
				func_288(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_64, 32768))
	{
		if (!func_16(&(Local_162[14 /*10*/].f_6)))
		{
			func_186(&(Local_162[14 /*10*/].f_6));
		}
		else if (func_100(&(Local_162[14 /*10*/].f_6)) > 7f)
		{
			if (func_274(uParam0))
			{
				func_291(uParam0, 1);
				func_289(14, uParam0);
				if (uParam0->f_71)
				{
					func_191(uParam0, 93, 1, 0, 0);
					uParam0->f_71 = 0;
				}
				else
				{
					func_191(uParam0, Local_162[14 /*10*/].f_9, 1, 0, 0);
				}
				func_288(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_64, 4096))
	{
		if (!func_16(&(Local_162[11 /*10*/].f_6)))
		{
			func_186(&(Local_162[11 /*10*/].f_6));
		}
		else if (func_100(&(Local_162[11 /*10*/].f_6)) > 8f)
		{
			if (func_273(uParam0))
			{
				func_291(uParam0, 1);
				func_289(11, uParam0);
				if (uParam0->f_71)
				{
					func_191(uParam0, 93, 1, 0, 0);
					uParam0->f_71 = 0;
				}
				else
				{
					func_191(uParam0, Local_162[11 /*10*/].f_9, 1, 0, 0);
				}
				func_288(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_64, 8192))
	{
		if (!func_16(&(Local_162[12 /*10*/].f_6)))
		{
			func_186(&(Local_162[12 /*10*/].f_6));
		}
		else if (func_100(&(Local_162[12 /*10*/].f_6)) > 5f)
		{
			if (func_272(uParam0))
			{
				func_291(uParam0, 1);
				func_289(12, uParam0);
				if (uParam0->f_71)
				{
					func_191(uParam0, 93, 1, 0, 0);
					uParam0->f_71 = 0;
				}
				else
				{
					func_191(uParam0, Local_162[12 /*10*/].f_9, 1, 0, 0);
				}
				func_288(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_64, 4))
	{
		if (!func_16(&(Local_162[2 /*10*/].f_6)))
		{
			func_271(&(Local_162[2 /*10*/].f_6), 0f);
		}
		else if (func_100(&(Local_162[2 /*10*/].f_6)) > 5f)
		{
			if (func_270(uParam0))
			{
				if (uParam0->f_71)
				{
					func_191(uParam0, 93, 1, 0, 0);
					uParam0->f_71 = 0;
				}
				else
				{
					func_191(uParam0, Local_162[2 /*10*/].f_9, 1, 0, 0);
				}
				func_291(uParam0, 1);
				func_289(2, uParam0);
				func_288(uParam0);
			}
		}
	}
}

int func_270(var uParam0)//Position - 0xA053
{
	float fVar0;
	
	if (!unk_0x36CEFBE9B745A58D(uParam0->f_2))
	{
		if ((!unk_0x63276C96B907C69E(uParam0->f_2) && !func_16(&(Local_162[0 /*10*/].f_3))) && !func_16(&(Local_162[1 /*10*/].f_3)))
		{
			if (!func_16(&(Local_162[2 /*10*/].f_3)))
			{
				uParam0->f_25 = unk_0x8910237449BB6F79(uParam0->f_2);
				if (uParam0->f_25 > 10f)
				{
					func_186(&(Local_162[2 /*10*/].f_3));
				}
			}
			else if (func_100(&(Local_162[2 /*10*/].f_3)) > 0.9f)
			{
				uParam0->f_26 = uParam0->f_25;
				uParam0->f_25 = unk_0x8910237449BB6F79(uParam0->f_2);
				fVar0 = (uParam0->f_26 - uParam0->f_25);
				func_99(&(Local_162[2 /*10*/].f_3));
				if (fVar0 > 10f && uParam0->f_25 < 12f)
				{
					return 1;
				}
			}
		}
		else
		{
			func_99(&(Local_162[2 /*10*/].f_3));
		}
	}
	return 0;
}

void func_271(int iParam0, float fParam1)//Position - 0xA136
{
	if (!func_16(iParam0))
	{
		func_103(iParam0, fParam1);
	}
}

int func_272(var uParam0)//Position - 0xA150
{
	vector3 vVar0;
	
	if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
	{
		vVar0 = { unk_0xA43418B5859810A6(uParam0->f_4, 1) };
		if (vVar0.y < -10f && !func_16(&(Local_162[0 /*10*/].f_3)))
		{
			if (!func_16(&(Local_162[12 /*10*/].f_3)))
			{
				func_186(&(Local_162[12 /*10*/].f_3));
			}
			else if (func_100(&(Local_162[12 /*10*/].f_3)) > 5f)
			{
				func_99(&(Local_162[12 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_99(&(Local_162[12 /*10*/].f_3));
		}
	}
	return 0;
}

int func_273(var uParam0)//Position - 0xA1DF
{
	vector3 vVar0;
	
	if ((((((unk_0xE59B7F5A03335350(uParam0->f_4, 0) && !func_16(&(Local_162[0 /*10*/].f_3))) && !func_16(&(Local_162[1 /*10*/].f_3))) && !func_16(&(Local_162[5 /*10*/].f_3))) && !func_16(&(Local_162[9 /*10*/].f_3))) && !func_16(&(Local_162[7 /*10*/].f_3))) && !func_16(&(Local_162[8 /*10*/].f_3)))
	{
		vVar0 = { unk_0xA43418B5859810A6(uParam0->f_4, 1) };
		if (unk_0x357058E632979E65(vVar0.x) > 2.5f && !func_16(&(Local_162[0 /*10*/].f_3)))
		{
			if (!func_16(&(Local_162[11 /*10*/].f_3)))
			{
				func_186(&(Local_162[11 /*10*/].f_3));
				fLocal_164 = vVar0.x;
			}
			else if (func_100(&(Local_162[11 /*10*/].f_3)) < 1.5f && (unk_0x357058E632979E65(fLocal_164) - unk_0x357058E632979E65(vVar0.x)) < 0f)
			{
				func_99(&(Local_162[11 /*10*/].f_3));
				return 1;
			}
			else if (func_100(&(Local_162[11 /*10*/].f_3)) >= 1.5f)
			{
				func_99(&(Local_162[11 /*10*/].f_3));
				return 0;
			}
		}
	}
	return 0;
}

int func_274(var uParam0)//Position - 0xA30F
{
	if (((((unk_0xE59B7F5A03335350(uParam0->f_4, 0) && !func_16(&(Local_162[0 /*10*/].f_3))) && !func_16(&(Local_162[8 /*10*/].f_3))) && !func_16(&(Local_162[5 /*10*/].f_3))) && !func_16(&(Local_162[9 /*10*/].f_3))) && !func_16(&(Local_162[7 /*10*/].f_3)))
	{
		if (!func_16(&(Local_162[14 /*10*/].f_3)))
		{
			uParam0->f_5 = unk_0x39827CF9BEAB804C(unk_0x541C2AEF053615BC(uParam0->f_4, true), 10f, 0, 260);
			if (unk_0x724D816EA203A79E(uParam0->f_5))
			{
				if ((unk_0x8910237449BB6F79(uParam0->f_4) > 15f && func_10(uParam0->f_5, uParam0->f_4, 1) < 3f) && (!unk_0x1D403DFADBC2DE3C(uParam0->f_5, 0) && !unk_0x1AAF0C23233C57AF(uParam0->f_5, -1, 0)))
				{
					func_186(&(Local_162[14 /*10*/].f_3));
				}
			}
		}
		else if ((func_100(&(Local_162[14 /*10*/].f_3)) < 1.5f && func_10(uParam0->f_5, uParam0->f_4, 1) > 4.5f) && !unk_0x127812AA6652253F(uParam0->f_5))
		{
			func_99(&(Local_162[14 /*10*/].f_3));
			return 1;
		}
		else if (func_100(&(Local_162[14 /*10*/].f_3)) >= 1.5f)
		{
			func_99(&(Local_162[14 /*10*/].f_3));
			return 0;
		}
		else if (unk_0x127812AA6652253F(uParam0->f_5))
		{
			func_99(&(Local_162[14 /*10*/].f_3));
			return 0;
		}
	}
	return 0;
}

int func_275(var uParam0)//Position - 0xA494
{
	if (((unk_0xE59B7F5A03335350(uParam0->f_4, 0) && !func_16(&(Local_162[9 /*10*/].f_3))) && !func_16(&(Local_162[7 /*10*/].f_3))) && !func_16(&(Local_162[4 /*10*/].f_3)))
	{
		if (!func_276(uParam0->f_4) && unk_0x8910237449BB6F79(uParam0->f_4) > 15f)
		{
			if (!func_16(&(Local_162[13 /*10*/].f_3)))
			{
				func_186(&(Local_162[13 /*10*/].f_3));
			}
			else if (func_100(&(Local_162[13 /*10*/].f_3)) > 5f)
			{
				func_99(&(Local_162[13 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_99(&(Local_162[13 /*10*/].f_3));
		}
	}
	return 0;
}

bool func_276(int iParam0)//Position - 0xA54B
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	vector3 vVar7;
	vector3 vVar8;
	float fVar9;
	
	unk_0x29EBF830A072263F(unk_0x541C2AEF053615BC(iParam0, true), 1, &vVar0, 1, 3f, 0f);
	unk_0x29EBF830A072263F(unk_0x541C2AEF053615BC(iParam0, true), 2, &vVar1, 1, 3f, 0f);
	unk_0x15EA9596CBD1F90D(vVar0, -1, &vVar2);
	fVar9 = SYSTEM::VMAG(vVar2 - vVar0);
	vVar3 = { func_280((vVar1.x - vVar0.x), (vVar1.y - vVar0.y), 0f) };
	vVar4 = { func_279(vVar3, 0) * Vector(fVar9, fVar9, fVar9) };
	vVar3 = { vVar3 * Vector(2f, 2f, 2f) };
	vVar5 = { vVar0 - vVar3 + vVar4 };
	vVar6 = { vVar0 - vVar3 - vVar4 };
	vVar7 = { vVar1 + vVar3 + vVar4 };
	vVar8 = { vVar1 + vVar3 - vVar4 };
	vVar8 = { vVar8 };
	return func_277(unk_0x541C2AEF053615BC(iParam0, true), vVar5, vVar6, vVar7);
}

int func_277(vector3 vParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3)//Position - 0xA634
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	
	vParam0.z = 0f;
	vParam1.z = 0f;
	vParam2.z = 0f;
	vParam3.z = 0f;
	vVar0 = { func_280(vParam2 - vParam1) };
	vVar1 = { func_280(vParam3 - vParam1) };
	fVar2 = func_278(vParam0, vVar0);
	fVar3 = func_278(vParam1, vVar0);
	fVar4 = func_278(vParam2, vVar0);
	fVar5 = func_278(vParam0, vVar1);
	fVar6 = func_278(vParam1, vVar1);
	fVar7 = func_278(vParam3, vVar1);
	if (fVar3 > fVar4)
	{
		fVar8 = fVar3;
		fVar3 = fVar4;
		fVar4 = fVar8;
	}
	if (fVar2 < fVar3 || fVar2 > fVar4)
	{
		return 0;
	}
	if (fVar6 > fVar7)
	{
		fVar9 = fVar6;
		fVar6 = fVar7;
		fVar7 = fVar9;
	}
	if (fVar5 < fVar6 || fVar5 > fVar7)
	{
		return 0;
	}
	return 1;
}

float func_278(vector3 vParam0, vector3 vParam1)//Position - 0xA71D
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

Vector3 func_279(vector3 vParam0, int iParam1)//Position - 0xA73E
{
	vector3 vVar0;
	
	switch (iParam1)
	{
		case 0:
			vVar0.x = -vParam0.y;
			vVar0.y = vParam0.x;
			break;
		
		case 1:
			vVar0.x = -vParam0.x;
			vVar0.y = -vParam0.y;
			break;
		
		case 2:
			vVar0.x = vParam0.y;
			vVar0.y = -vParam0.x;
			break;
	}
	vVar0.z = vParam0.z;
	return vVar0;
}

Vector3 func_280(vector3 vParam0)//Position - 0xA79C
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

int func_281(var uParam0)//Position - 0xA7DB
{
	if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
	{
		if (unk_0x3187EF5798B5D209(uParam0->f_4, -1, 0) == unk_0xBC25C936A095B5BA())
		{
			if (unk_0x231DB1D0F4218A1B(unk_0xB5CEFD608600A09F()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_282(var uParam0)//Position - 0xA810
{
	if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
	{
		if (unk_0x3187EF5798B5D209(uParam0->f_4, -1, 0) == unk_0xBC25C936A095B5BA())
		{
			if (unk_0x8730A01B72F31307(uParam0->f_4))
			{
				if (!iLocal_163)
				{
					if (unk_0x637D801AD41A6525(uParam0->f_4) <= -145f || unk_0x637D801AD41A6525(uParam0->f_4) >= 145f)
					{
						iLocal_163 = 1;
					}
				}
			}
			else if (iLocal_163)
			{
				if (unk_0x637D801AD41A6525(uParam0->f_4) <= 35f && unk_0x637D801AD41A6525(uParam0->f_4) >= -35f)
				{
					iLocal_163 = 0;
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_283(var uParam0)//Position - 0xA8A6
{
	int iVar0;
	
	if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
	{
		iVar0 = unk_0xDE2406913267F913(unk_0xB5CEFD608600A09F());
		if (iVar0 == 0)
		{
			if (!func_16(&(Local_162[4 /*10*/].f_3)))
			{
				func_186(&(Local_162[4 /*10*/].f_3));
			}
			else if (func_100(&(Local_162[4 /*10*/].f_3)) > 2f)
			{
				func_99(&(Local_162[4 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_99(&(Local_162[4 /*10*/].f_3));
		}
	}
	return 0;
}

int func_284(var uParam0)//Position - 0xA918
{
	int iVar0;
	
	if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
	{
		iVar0 = unk_0x2D2916537452B0DE(unk_0xB5CEFD608600A09F());
		if (iVar0 == 0)
		{
			if (!func_16(&(Local_162[6 /*10*/].f_3)))
			{
				func_186(&(Local_162[6 /*10*/].f_3));
			}
			else if (func_100(&(Local_162[6 /*10*/].f_3)) > 3.5f)
			{
				func_99(&(Local_162[6 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_99(&(Local_162[6 /*10*/].f_3));
		}
	}
	return 0;
}

int func_285(var uParam0)//Position - 0xA98E
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
	{
		if (unk_0x8B2EFFDCF3FE7E80(uParam0->f_4))
		{
			iVar0 = unk_0x8D66276473ABD7CC(uParam0->f_4);
			iVar1 = (uParam0->f_2E - iVar0);
			uParam0->f_2E = iVar0;
			unk_0x5502708AECB47F5D(uParam0->f_4);
			if (IntToFloat(iVar1) > 10f)
			{
				if (uParam0->f_71)
				{
					func_191(uParam0, 93, 1, 0, 0);
					uParam0->f_71 = 0;
				}
				else
				{
					func_191(uParam0, 72, 1, 0, 1);
				}
				func_99(&(Local_162[2 /*10*/].f_6));
				return 1;
			}
		}
	}
	return 0;
}

int func_286(var uParam0)//Position - 0xAA0F
{
	vector3 vVar0;
	
	if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
	{
		vVar0 = { unk_0xA43418B5859810A6(uParam0->f_4, 1) };
		if (unk_0x357058E632979E65(vVar0.x) > 3f && !func_16(&(Local_162[0 /*10*/].f_3)))
		{
			if (!func_16(&(Local_162[1 /*10*/].f_3)))
			{
				func_186(&(Local_162[1 /*10*/].f_3));
			}
			else if (func_100(&(Local_162[1 /*10*/].f_3)) > 1.2f)
			{
				func_99(&(Local_162[1 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_99(&(Local_162[1 /*10*/].f_3));
		}
	}
	return 0;
}

int func_287(var uParam0)//Position - 0xAA9B
{
	if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
	{
		if (!unk_0x58F9E0EA914AEF2C(uParam0->f_4) && unk_0x2A348A3A98B80B13(uParam0->f_4))
		{
			if (!func_16(&(Local_162[0 /*10*/].f_3)))
			{
				func_186(&(Local_162[0 /*10*/].f_3));
			}
			else if (func_100(&(Local_162[0 /*10*/].f_3)) > 0.7f)
			{
				func_99(&(Local_162[0 /*10*/].f_3));
				func_102(&(Local_162[1 /*10*/].f_6));
				return 1;
			}
		}
		else
		{
			func_99(&(Local_162[0 /*10*/].f_3));
		}
	}
	return 0;
}

void func_288(var uParam0)//Position - 0xAB25
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_16(&(Local_162[iVar0 /*10*/].f_6)))
		{
			func_102(&(Local_162[iVar0 /*10*/].f_6));
		}
		iVar0++;
	}
	func_260(uParam0, 10, 0f, 1);
	unk_0xA67D3DDB524B8DBA(unk_0xB5CEFD608600A09F());
}

void func_289(int iParam0, var uParam1)//Position - 0xAB6D
{
	Local_162[iParam0 /*10*/].f_1++;
	func_290(uParam1, iParam0);
	func_99(&(Local_162[iParam0 /*10*/].f_6));
	uParam1->f_70 = 1;
}

void func_290(var uParam0, int iParam1)//Position - 0xABA0
{
	uParam0->f_4C = (uParam0->f_4C + Local_162[iParam1 /*10*/]);
}

void func_291(var uParam0, int iParam1)//Position - 0xABB7
{
	uParam0->f_68 = (uParam0->f_68 + iParam1);
}

int func_292(var uParam0)//Position - 0xABCA
{
	if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
	{
		if (unk_0x8910237449BB6F79(uParam0->f_4) > 25f)
		{
			if (!func_16(&(Local_162[5 /*10*/].f_3)))
			{
				func_186(&(Local_162[5 /*10*/].f_3));
			}
			else if (func_100(&(Local_162[5 /*10*/].f_3)) > 3.5f)
			{
				func_99(&(Local_162[5 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_99(&(Local_162[5 /*10*/].f_3));
		}
	}
	return 0;
}

void func_293(var uParam0, char* sParam1, int iParam2)//Position - 0xAC41
{
	vector3 vVar0;
	
	func_179();
	func_406(2);
	vVar0 = { func_310() };
	if ((!unk_0xF1734B55490E9045(&vVar0) && func_51()) && !unk_0x3362CDE8460ED38B(&vVar0, "NULL"))
	{
	}
	else
	{
		unk_0xEB233A3B7635D2AC();
		unk_0x7456702622C62EA0(1);
		StringCopy(&vVar0, uParam0->f_8F, 24);
		if (!unk_0x1D403DFADBC2DE3C(uParam0->f_3, 0))
		{
			if (!func_120(uParam0))
			{
				if (unk_0x96044E39418AAF17(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
				{
					unk_0x08FA5F7132D73F6F(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -1056964608);
				}
				else if (unk_0x96044E39418AAF17(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
				{
					unk_0x08FA5F7132D73F6F(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -1056964608);
				}
				else if (unk_0x96044E39418AAF17(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
				{
					unk_0x08FA5F7132D73F6F(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -1056964608);
				}
			}
		}
		uParam0->f_6D = 1;
		uParam0->f_79 = sParam1;
		uParam0->f_19F = iParam2;
		func_260(uParam0, 3, 0, 0);
		if (iParam2 == 8 || iParam2 == 18)
		{
			if (uParam0->f_19B != 9)
			{
				if (uParam0->f_73)
				{
					StringConCat(&vVar0, "_aband2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_aband1", 24);
				}
				func_308(uParam0, &vVar0);
			}
			else if (!unk_0x36CEFBE9B745A58D(uParam0->f_3))
			{
				func_306(uParam0->f_3, "TAXI_FAIL", uParam0->f_91, 4);
			}
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 10)
		{
			if (uParam0->f_73)
			{
				StringConCat(&vVar0, "_aggro2", 24);
			}
			else
			{
				StringConCat(&vVar0, "_aggro", 24);
			}
			func_308(uParam0, &vVar0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_SPK", 24);
		}
		else if (uParam0->f_19F == 15)
		{
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_DEAD", 24);
		}
		else if (iParam2 == 2)
		{
			StringConCat(&vVar0, "_lost1", 24);
			func_308(uParam0, &vVar0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 3)
		{
			StringConCat(&vVar0, "_spotd1", 24);
			func_308(uParam0, &vVar0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 4)
		{
			StringConCat(&vVar0, "_wntd1", 24);
			func_308(uParam0, &vVar0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 5)
		{
			StringConCat(&vVar0, "_spook", 24);
			func_308(uParam0, &vVar0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_SPK", 24);
			if (func_120(uParam0))
			{
				if (unk_0xB66CFDE6B830965A(uParam0->f_4))
				{
					func_304(uParam0, 4096, 0);
				}
				else
				{
					func_304(uParam0, 0, 0);
				}
			}
		}
		else if (iParam2 == 6)
		{
			StringConCat(&vVar0, "_hit2", 24);
			func_308(uParam0, &vVar0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_SPK", 24);
		}
		else if (iParam2 == 7)
		{
			StringConCat(&vVar0, "_jak", 24);
			func_308(uParam0, &vVar0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 14)
		{
			if (uParam0->f_19B != 9)
			{
				if (uParam0->f_73)
				{
					StringConCat(&vVar0, "_shot2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_shot1", 24);
				}
				func_308(uParam0, &vVar0);
			}
			else if (!unk_0x36CEFBE9B745A58D(uParam0->f_3))
			{
				func_306(uParam0->f_3, "CALL_COPS_COMMIT", uParam0->f_91, 4);
			}
			unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), 1, 0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_SHT", 24);
		}
		else if (iParam2 == 12)
		{
			StringConCat(&vVar0, "_shot1", 24);
			func_308(uParam0, &vVar0);
			unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), 1, 0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 13)
		{
			StringConCat(&vVar0, "_shot1", 24);
			func_308(uParam0, &vVar0);
			unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), 1, 0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_CK", 24);
		}
		else if (iParam2 == 11)
		{
			func_52(8, 0);
			iLocal_57[3] = 1;
			if (uParam0->f_19B != 9)
			{
				if (uParam0->f_73)
				{
					StringConCat(&vVar0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_noDri1", 24);
				}
				func_308(uParam0, &vVar0);
			}
			else if (!unk_0x36CEFBE9B745A58D(uParam0->f_3))
			{
				func_306(uParam0->f_3, "GENERIC_INSULT_MED", uParam0->f_91, 4);
			}
			func_304(uParam0, 0, 0);
			func_308(uParam0, &vVar0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_WAT", 24);
		}
		else if (iParam2 == 0)
		{
			func_52(8, 0);
			iLocal_57[3] = 1;
			if (uParam0->f_19B != 9)
			{
				if (uParam0->f_73)
				{
					StringConCat(&vVar0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_noDri1", 24);
				}
				func_308(uParam0, &vVar0);
			}
			else if (!unk_0x36CEFBE9B745A58D(uParam0->f_3))
			{
				func_306(uParam0->f_3, "TAXI_FAIL", uParam0->f_91, 4);
			}
			func_308(uParam0, &vVar0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_DR", 24);
		}
		else if (iParam2 == 1)
		{
			func_52(8, 0);
			iLocal_57[3] = 1;
			if (uParam0->f_19B != 9)
			{
				if (uParam0->f_73)
				{
					StringConCat(&vVar0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_noDri1", 24);
				}
				func_308(uParam0, &vVar0);
			}
			else if (!unk_0x36CEFBE9B745A58D(uParam0->f_3))
			{
				func_306(uParam0->f_3, "TAXI_FAIL", uParam0->f_91, 4);
			}
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_FIRE", 24);
		}
		else if (iParam2 == 19)
		{
			StringCopy(&vVar0, "OJTX_QUIT_", 24);
			func_303(&vVar0);
			func_294(&(uParam0->f_F4), "OJTXAUD", &vVar0, 7, 0, 0, 0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_CNCL", 24);
		}
		else if (iParam2 == 20)
		{
			if (uParam0->f_73)
			{
				StringConCat(&vVar0, "_aband2", 24);
			}
			else
			{
				StringConCat(&vVar0, "_fail1", 24);
			}
			func_308(uParam0, &vVar0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_FAIL", 24);
		}
		else
		{
			if (uParam0->f_19B != 9)
			{
				if (iParam2 != 21)
				{
					StringConCat(&vVar0, "_Fail1", 24);
				}
				else
				{
					StringConCat(&vVar0, "_aband1", 24);
				}
				if (uParam0->f_19A > 5)
				{
					func_308(uParam0, &vVar0);
				}
			}
			else if (!unk_0x36CEFBE9B745A58D(uParam0->f_3))
			{
				func_306(uParam0->f_3, "TAXI_FAIL", uParam0->f_91, 4);
			}
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_FAIL", 24);
			func_52(3, 0);
		}
		func_260(uParam0, 3, 0f, 1);
	}
}

int func_294(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xB1EC
{
	func_302(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_295(sParam2, iParam3, 0);
}

int func_295(char* sParam0, int iParam1, bool bParam2)//Position - 0xB23A
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
					func_180();
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
		if (func_301(8, -1))
		{
			return 0;
		}
		Global_3E04 = { Global_3DFE };
		func_300();
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
				func_299();
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
				if (func_298())
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
			if (func_33())
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
			func_297();
			Global_3DC2 = bParam2;
		}
		Global_3DBA = iParam1;
		StringCopy(&Global_3C3B, sParam0, 24);
		Global_394A = 0;
		func_296();
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
		func_180();
	}
	return 0;
}

void func_296()//Position - 0xB506
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

void func_297()//Position - 0xB538
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

int func_298()//Position - 0xB5CD
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

void func_299()//Position - 0xB666
{
	if (func_77(14))
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
		Global_389D = func_96();
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

void func_300()//Position - 0xB708
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

bool func_301(int iParam0, int iParam1)//Position - 0xB760
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

void func_302(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0xB79B
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

void func_303(char* sParam0)//Position - 0xB7F1
{
	switch (func_3(unk_0xBC25C936A095B5BA()))
	{
		case 0:
			StringConCat(sParam0, "M", 24);
			break;
		
		case 2:
			StringConCat(sParam0, "T", 24);
			break;
		
		case 1:
			StringConCat(sParam0, "F", 24);
			break;
		
		default:
			StringConCat(sParam0, "M", 24);
			break;
	}
}

void func_304(var uParam0, int iParam1, bool bParam2)//Position - 0xB844
{
	int iVar0;
	
	if (!unk_0x1D403DFADBC2DE3C(uParam0->f_3, 0))
	{
		unk_0x2E35C4FA5F0ED22F(uParam0->f_3, false);
		unk_0x5502708AECB47F5D(uParam0->f_3);
		unk_0xABA7AE40608505F2(uParam0->f_3, 3, false);
		unk_0x91629AC1E1F78419(uParam0->f_3, 17, true);
		unk_0xA4E856A8CD53B8DF(uParam0->f_3);
		if ((func_109(uParam0->f_3, uParam0->f_1D, 1) <= 200f && !func_114(uParam0->f_1D)) && !bParam2)
		{
			func_305(uParam0);
		}
		else
		{
			unk_0xABA7AE40608505F2(uParam0->f_3, 1024, true);
			unk_0xABA7AE40608505F2(uParam0->f_3, 131072, true);
			unk_0xC5A6DFE2B8987B17(&iVar0);
			unk_0xA3981DED4FC2E56E(0, 0, iParam1);
			if (uParam0->f_19F == 8)
			{
				unk_0x8CE2798B9A7027EC(0, 1193033728, 0);
			}
			else
			{
				unk_0x5558ED6D4A2DEC93(0, unk_0xBC25C936A095B5BA(), 1000f, -1, 0, 0);
			}
			unk_0x0D042F5C6172D20A(0, 0);
			unk_0x535008C596714F9E(iVar0);
			unk_0xA8E6405305C0D7DF(uParam0->f_3, iVar0);
			unk_0x02DAF06EA4F08219(&iVar0);
		}
		unk_0x22321800954A532E(uParam0->f_3, true);
	}
}

void func_305(var uParam0)//Position - 0xB938
{
	int iVar0;
	
	if (!unk_0x1D403DFADBC2DE3C(uParam0->f_3, 0))
	{
		if (func_42(func_43(), uParam0->f_1D, 0))
		{
			if (uParam0->f_19B == 2)
			{
				unk_0x019CE76D5286C95C(uParam0->f_3, 84.9058f);
				unk_0x22321800954A532E(uParam0->f_3, true);
			}
			else if (uParam0->f_19B == 4)
			{
				unk_0x019CE76D5286C95C(uParam0->f_3, 68.3138f);
				unk_0x22321800954A532E(uParam0->f_3, true);
			}
			else
			{
				unk_0x8CE2798B9A7027EC(uParam0->f_3, 1193033728, 0);
			}
		}
		else
		{
			unk_0xA4E856A8CD53B8DF(uParam0->f_3);
			unk_0x02DAF06EA4F08219(&iVar0);
			unk_0xC5A6DFE2B8987B17(&iVar0);
			unk_0xA3981DED4FC2E56E(0, 0, 0);
			unk_0x0D042F5C6172D20A(0, 0);
			unk_0x346129B364057FF6(0, uParam0->f_1D, 1f, -1, 1048576000, 0, 1193033728);
			if (uParam0->f_19B == 2)
			{
				unk_0xA3A7138EAD2268A0(0, "WORLD_HUMAN_AA_SMOKE", 0, 0);
			}
			else if (uParam0->f_19B == 0)
			{
				unk_0xC8D68BDC49FEF571(0, 1);
				unk_0x346129B364057FF6(0, 813.9421f, 1172.681f, 329.7988f, 1f, -1, 1048576000, 0, 1193033728);
				unk_0xC0FDCDB0DF739C50(0, 151.7794f, 0);
				unk_0xA3A7138EAD2268A0(0, "WORLD_HUMAN_SMOKING_POT", 0, 0);
			}
			else if (uParam0->f_19B == 4)
			{
				unk_0xBE2047F9F9DE6F43(0, uParam0->f_1D, 15f, 0);
			}
			else if (uParam0->f_19B == 1)
			{
				unk_0xBE2047F9F9DE6F43(0, uParam0->f_1D, 15f, 20000);
				unk_0x8CE2798B9A7027EC(0, 1193033728, 0);
			}
			else
			{
				unk_0xE896C0AD02364F2A(0, "oddjobs@taxi@", "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0xE896C0AD02364F2A(0, "gestures@m@standing@casual", "gesture_pleased", 8f, -8f, -1, 0, 0, 0, 0, 0);
			}
			if (unk_0xABB25056487DF1D7(uParam0->f_1D, 15f, 1))
			{
				unk_0xBE2047F9F9DE6F43(0, uParam0->f_1D, 15f, 0);
			}
			else
			{
				unk_0x8CE2798B9A7027EC(0, 1193033728, 0);
			}
			unk_0x535008C596714F9E(iVar0);
			unk_0xA8E6405305C0D7DF(uParam0->f_3, iVar0);
			unk_0x02DAF06EA4F08219(&iVar0);
		}
		unk_0x22321800954A532E(uParam0->f_3, true);
	}
}

void func_306(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0xBB1D
{
	unk_0x7E80A36CD8BDF4D1(iParam0, sParam1, sParam2, func_307(iParam3), 0);
}

int func_307(int iParam0)//Position - 0xBB36
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

void func_308(var uParam0, char* sParam1)//Position - 0xBD2B
{
	if (func_309(uParam0))
	{
		func_294(&(uParam0->f_F4), uParam0->f_90, sParam1, 9, 0, 0, 0);
	}
}

int func_309(var uParam0)//Position - 0xBD53
{
	if (!unk_0x1D403DFADBC2DE3C(uParam0->f_3, 0))
	{
		if (func_10(unk_0xBC25C936A095B5BA(), uParam0->f_3, 1) < 40f && !unk_0x41A5D6415E2CC10E(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_310()//Position - 0xBD91
{
	struct<6> Var0;
	int iVar1;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_3DB8 == 4)
	{
		iVar1 = unk_0xC0A904C0F2775676();
		iVar1 = (iVar1 + Global_41AA);
		if (iVar1 > -1)
		{
			return Global_394C[iVar1 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

int func_311(var uParam0)//Position - 0xBDD7
{
	return uParam0->f_76;
}

void func_312()//Position - 0xBDE3
{
	func_341(&Local_260);
	if (func_340(&Local_260, &Local_348))
	{
		switch (Local_348.f_1B)
		{
			case 0:
				if (Local_260.f_19A == 9)
				{
					if (!func_136(&Local_260))
					{
						if (func_339("TAXI_OBJ_CC1") || unk_0x2DA8CA50A72528FB(Local_262.f_24[2]))
						{
							Local_348.f_1B++;
						}
						else if (func_169(&Local_260) != 10)
						{
							func_191(&Local_260, 10, 1, 0, 1);
						}
					}
				}
				break;
			
			case 1:
				if ((func_169(&Local_260) > 10 && func_169(&Local_260) != 15) && !func_136(&Local_260))
				{
					func_191(&Local_260, 15, 1, 0, 0);
					if (bLocal_347)
					{
					}
					func_185(&Local_260, 7);
				}
				break;
			
			case 2:
				if (!Local_262.f_42)
				{
					Local_262.f_42 = 1;
					bLocal_248 = true;
				}
				if (func_109(Local_260.f_4, Local_262.f_10[2 /*3*/], 1) < 530f)
				{
					Local_348.f_1B++;
				}
				if (func_383(&Local_260, 11) > 17f || func_109(Local_260.f_4, Local_262.f_10[2 /*3*/], 1) < 700f)
				{
					func_191(&Local_260, 95, 1, 0, 0);
					if (bLocal_347)
					{
					}
				}
				else if ((unk_0x105601648511CC64() % 1000) < 50)
				{
				}
				break;
			
			case 3:
				if ((func_169(&Local_260) > 10 && func_169(&Local_260) != 16) && !func_136(&Local_260))
				{
					func_191(&Local_260, 16, 1, 0, 0);
					if (bLocal_347)
					{
					}
				}
				break;
			
			case 4:
				if (func_109(Local_260.f_4, Local_262.f_10[2 /*3*/], 1) < 530f)
				{
					Local_348.f_1B++;
				}
				if (func_383(&Local_260, 11) > 8f || func_109(Local_260.f_4, Local_262.f_10[2 /*3*/], 1) < 700f)
				{
					func_191(&Local_260, 94, 1, 0, 0);
					if (bLocal_347)
					{
					}
				}
				else if ((unk_0x105601648511CC64() % 1000) < 50)
				{
				}
				break;
			
			case 5:
				if (func_383(&Local_260, 11) > 20f || func_109(Local_260.f_4, Local_262.f_10[2 /*3*/], 1) < 530f)
				{
					if (!iLocal_251)
					{
						iLocal_251 = 1;
					}
					if (!bLocal_249)
					{
						func_191(&Local_260, 96, 1, 0, 0);
						bLocal_249 = true;
						if (bLocal_347)
						{
						}
					}
				}
				else if ((unk_0x105601648511CC64() % 1000) < 50)
				{
				}
				break;
			
			case 6:
				if (func_383(&Local_260, 18) > unk_0x55AEFCD285ECC0F2(8f, 16f))
				{
				}
				break;
			}
	}
	func_313(&Local_260, &uLocal_351, &Local_348, bLocal_347);
}

int func_313(var uParam0, var uParam1, var uParam2, bool bParam3)//Position - 0xC0C4
{
	func_321(uParam0, uParam1);
	if (((*uParam2 == -1 && uParam0->f_19A < 29) && !uParam0->f_6D) && !func_138(uParam0, 2))
	{
		if (func_320(uParam1))
		{
			*uParam2 = 1;
			if (bParam3)
			{
			}
		}
		else if ((unk_0x105601648511CC64() % 2000) < 50)
		{
		}
	}
	if (!uParam0->f_6D)
	{
		switch (*uParam2)
		{
			case 1:
				if (!func_319(uParam0))
				{
					uParam2->f_7 = { func_318(uParam1) };
					func_294(&(uParam0->f_F4), uParam0->f_90, &(uParam2->f_7), 8, 0, 0, 0);
					*uParam2 = 2;
					if (bParam3)
					{
					}
				}
				break;
			
			case 2:
				if (func_51())
				{
					uParam2->f_D = { func_194() };
					if (unk_0x3362CDE8460ED38B(&(uParam2->f_D), &(uParam2->f_7)))
					{
						if (bParam3)
						{
						}
					}
				}
				else
				{
					func_229(&(uParam2->f_1A), SYSTEM::ROUND(SYSTEM::POW(2f, SYSTEM::TO_FLOAT(uParam2->f_1B))));
					uParam2->f_1B++;
					func_316(uParam1);
					func_260(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 3:
				if (func_137(uParam0))
				{
					if (func_51())
					{
						func_260(uParam0, 17, 0f, 1);
						uParam2->f_1 = { func_315() };
						if (unk_0x904E94842BB9E173(unk_0xFC1CAE18F3ECBF2D()) >= 1)
						{
							*uParam2 = 0;
						}
						else
						{
							*uParam2 = 4;
						}
					}
				}
				else if (func_51())
				{
					uParam2->f_13 = { func_310() };
				}
				else
				{
					func_229(&(uParam2->f_1A), SYSTEM::ROUND(SYSTEM::POW(2f, SYSTEM::TO_FLOAT(uParam2->f_1B))));
					uParam2->f_1B++;
					func_316(uParam1);
					func_260(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 4:
				if (((!func_138(uParam0, 14) && !func_51()) && !func_137(uParam0)) && func_383(uParam0, 18) > 1f)
				{
					func_260(uParam0, 18, 0, 0);
					*uParam2 = 6;
					if (bParam3)
					{
					}
				}
				break;
			
			case 6:
				if (!func_51())
				{
					if (func_383(uParam0, 18) > 1f)
					{
						if (!unk_0xF1734B55490E9045(&(uParam2->f_1)))
						{
							func_314(&(uParam0->f_F4), uParam0->f_90, &(uParam2->f_D), &(uParam2->f_1), 8, 0, 0);
							if (bParam3)
							{
							}
						}
						*uParam2 = 3;
					}
				}
				break;
			
			case 7:
				if (!func_51())
				{
					func_229(&(uParam2->f_1A), SYSTEM::ROUND(SYSTEM::POW(2f, SYSTEM::TO_FLOAT(uParam2->f_1B))));
					uParam2->f_1B++;
					func_316(uParam1);
					func_260(uParam0, 18, 0, 0);
					*uParam2 = -1;
				}
				break;
			}
	}
	return 0;
}

int func_314(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0xC364
{
	func_302(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_3DBF = 0;
	Global_3DC6 = 0;
	Global_3DC1 = 0;
	Global_4197 = 0;
	Global_4199 = 0;
	Global_419D = 1;
	StringCopy(&Global_41A4, sParam3, 24);
	Global_280001 = 0;
	return func_295(sParam2, iParam4, 0);
}

struct<6> func_315()//Position - 0xC3B8
{
	struct<6> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_3DB8 == 4)
	{
		iVar1 = unk_0xC0A904C0F2775676();
		iVar1 = (iVar1 + Global_41AA);
		iVar2 = iVar1 + 1;
		if (iVar2 > -1 && iVar1 > -1)
		{
			if (unk_0x0F6F4C227FB5DD52(&(Global_394C[iVar2 /*6*/])))
			{
				return Global_394C[iVar2 /*6*/];
			}
			else
			{
				iVar3 = iVar2;
				while (iVar3 < 70)
				{
					if (unk_0x0F6F4C227FB5DD52(&(Global_394C[iVar3 /*6*/])))
					{
						return Global_394C[iVar3 /*6*/];
						iVar3 = 70;
					}
					iVar3++;
				}
				return Var0;
			}
			return Global_394C[iVar1 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

void func_316(var uParam0)//Position - 0xC464
{
	int iVar0;
	
	iVar0 = func_317(uParam0);
	if (iVar0 > -1)
	{
		func_22(&((uParam0[iVar0 /*8*/])->f_7), 2);
		func_22(&((uParam0[iVar0 /*8*/])->f_7), 4);
		func_228(&((uParam0[iVar0 /*8*/])->f_7), 8);
		StringCopy(uParam0[iVar0 /*8*/], func_135(), 24);
	}
}

int func_317(var uParam0)//Position - 0xC4AE
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_24((uParam0[iVar0 /*8*/])->f_7, 4))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

struct<6> func_318(var uParam0)//Position - 0xC4DE
{
	int iVar0;
	struct<6> Var1;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_24((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			Var1 = { *(uParam0[iVar0 /*8*/]) };
			func_228(&((uParam0[iVar0 /*8*/])->f_7), 4);
		}
		iVar0++;
	}
	return Var1;
}

int func_319(var uParam0)//Position - 0xC525
{
	switch (uParam0->f_19B)
	{
		case 0:
			if (func_173("TX_OBJ_NEX_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_173("TX_OBJ_TIE_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_173("TX_OBJ_DL_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 3:
			if ((func_173("TX_OBJ_GYB_DO", 0, 0) || func_173("TAXI_OBJ_GYB", 0, 0)) || func_173("TAXI_OBJ_GYB_2", 0, 0))
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_173("TX_OBJ_TTB_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 5:
			if ((func_173("TX_OBJ_CYI_DO", 0, 0) || func_173("TAXI_OBJ_CYI_01", 0, 0)) || func_173("TAXI_OBJ_CYI_02", 0, 0))
			{
				return 1;
			}
			break;
		
		case 6:
			if (((func_173("TX_OBJ_GYN_DO", 0, 0) || func_173("TAXI_OBJ_GYN", 0, 0)) || func_173("TAXI_OBJ_GYN_TG", 0, 0)) || func_173("TAXI_OBJ_GYN_GF", 0, 0))
			{
				return 1;
			}
			break;
		
		case 7:
			if ((func_173("TAXI_OBJ_CC1", 0, 0) || func_173("TAXI_OBJ_CC2", 0, 0)) || func_173("TAXI_OBJ_CC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 8:
			if ((func_173("TAXI_OBJ_FTC1", 0, 0) || func_173("TAXI_OBJ_FTC2", 0, 0)) || func_173("TAXI_OBJ_FTC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 9:
			if (func_173("TX_OBJ_PRO_DO", 0, 0))
			{
				return 1;
			}
			break;
	}
	return (((((func_173("TAXI_OBJ_GETRUN", 0, 0) || func_173("TAXI_OBJ_DRIVE", 0, 0)) || func_173("TAXI_OBJ_RETURN", 0, 0)) || func_173("TAXI_OBJ_POL", 0, 0)) || func_173("TAXI_OBJ_RUNOUT", 0, 0)) || func_173("TAXI_OBJ_POL", 0, 0));
}

int func_320(var uParam0)//Position - 0xC745
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_24((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_321(var uParam0, var uParam1)//Position - 0xC774
{
	vector3 vVar0;
	char cVar1[48];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5[8];
	bool bVar6;
	
	if (func_319(uParam0))
	{
	}
	else if (!uParam0->f_6E)
	{
	}
	else if (func_138(uParam0, 14))
	{
		StringCopy(&vVar0, uParam0->f_8F, 24);
		switch (func_169(uParam0))
		{
			case 55:
				StringConCat(&vVar0, "_lvMe1", 24);
				cVar1 = { vVar0 };
				func_338(&(uParam0->f_5D), 3, &cVar1, 0, 1, 0);
				func_337(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 8, 0, 0);
				func_260(uParam0, 16, 0, 0);
				func_336(4, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
				func_219(uParam0, 0, 0);
				break;
			
			case 2:
				if (!func_51())
				{
					if (uParam0->f_73)
					{
						StringConCat(&vVar0, "_retrn2", 24);
					}
					else
					{
						StringConCat(&vVar0, "_retrn1", 24);
					}
					if (uParam0->f_19B != 9)
					{
						func_335(uParam0, &vVar0, 0, 0, 8);
					}
				}
				else
				{
					func_332(uParam0, vVar0, func_334(uParam0, 2));
				}
				if (func_24(uParam0->f_62, 4))
				{
					func_260(uParam0, 16, 0, 0);
					func_219(uParam0, 0, 0);
				}
				func_155(uParam0, &(uParam0->f_62), 4, 3);
				break;
			
			case 3:
				if (func_383(uParam0, 16) > 1f)
				{
					func_157(1);
					if (uParam0->f_19B == 9)
					{
						func_213("TAXI_OBJ_RETURN", 7500, 1);
					}
					else
					{
						func_213("TAXI_VIP_RETURN", 7500, 1);
					}
					func_260(uParam0, 16, 0, 0);
					func_219(uParam0, 0, 0);
				}
				break;
			
			case 65:
				if (uParam0->f_73)
				{
					StringConCat(&vVar0, "_aggro2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_aggro", 24);
				}
				uParam0->f_6B++;
				if (uParam0->f_19B != 9)
				{
					func_335(uParam0, &vVar0, 0, 1, 8);
				}
				else if (!unk_0x36CEFBE9B745A58D(uParam0->f_3))
				{
					func_306(uParam0->f_3, "TAXI_WHAT_THE_HELL", uParam0->f_91, 4);
				}
				break;
		}
	}
	else if ((func_383(uParam0, 16) > func_154(uParam0->f_19B == 0, 1f, 4f) && !uParam0->f_8E) && (((uParam0->f_19B == 0 || uParam0->f_19B == 1) && !func_51()) || (uParam0->f_19B != 0 && uParam0->f_19B != 1)))
	{
		StringCopy(&vVar0, uParam0->f_8F, 24);
		switch (func_169(uParam0))
		{
			case 142:
				if (uParam0->f_73)
				{
					StringConCat(&vVar0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_noDri1", 24);
				}
				func_335(uParam0, &vVar0, 1, 0, 8);
				break;
			
			case 56:
				StringConCat(&vVar0, "_lvMe2", 24);
				cVar1 = { vVar0 };
				func_338(&(uParam0->f_5D), 3, &cVar1, 0, 1, 0);
				func_337(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 8, 0, 0);
				func_260(uParam0, 16, 0, 0);
				func_336(4, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
				func_219(uParam0, 0, 0);
				break;
			
			case 0:
				if (uParam0->f_19B == 9)
				{
					func_294(&(uParam0->f_F4), "OJTXAUD", "OJTX_PRO_CON", 8, 0, 0, 0);
				}
				func_191(uParam0, 1, 1, 0, 0);
				break;
			
			case 1:
				func_260(uParam0, 16, 0, 0);
				func_191(uParam0, 4, 0, 0, 0);
				break;
			
			case 4:
				StringConCat(&vVar0, "_hail1", 24);
				cVar1 = { vVar0 };
				if (!func_24(uParam0->f_2C, 128))
				{
					if ((uParam0->f_19B == 0 || uParam0->f_19B == 1) || uParam0->f_19B == 4)
					{
						func_338(&(uParam0->f_63), 4, &cVar1, 0, 1, 0);
						func_337(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 8, 0, 0);
					}
					else
					{
						func_335(uParam0, &vVar0, 0, 0, 8);
					}
				}
				func_260(uParam0, 16, 4f, 0);
				uParam0->f_8D = 1;
				func_260(uParam0, 16, 0, 0);
				func_219(uParam0, 0, 0);
				break;
			
			case 5:
				if (uParam0->f_19B == 7)
				{
					func_213("TAXI_OBJ_GPCKUP", 7500, 1);
				}
				else
				{
					func_213("TAXI_OBJ_PICKUP", 7500, 1);
				}
				uParam0->f_8D = 1;
				func_260(uParam0, 16, 0, 0);
				func_219(uParam0, 0, 0);
				break;
			
			case 8:
				StringConCat(&vVar0, "_obj1", 24);
				func_335(uParam0, &vVar0, 0, 0, 8);
				if (uParam0->f_19B != 7 && uParam0->f_19B != 4)
				{
					if (!unk_0x2DA8CA50A72528FB(uParam0->f_9))
					{
						uParam0->f_9 = func_183(uParam0->f_11, 1);
					}
					else if (unk_0xB1D6718ACE798CBB(uParam0->f_9) == 0)
					{
						unk_0x7781946F1FC054FA(uParam0->f_9, 255);
						unk_0x1423825E528B4DE1(uParam0->f_9, uParam0->f_11);
						unk_0x0BBAABB52887CF8C(uParam0->f_9, true);
					}
				}
				func_191(uParam0, 10, 1, 0, 0);
				uParam0->f_1A1 = 10;
				break;
			
			case 9:
				if ((uParam0->f_65 == 1 || uParam0->f_19B == 2) || uParam0->f_19B == 0)
				{
					StringConCat(&vVar0, "_gret1", 24);
				}
				else
				{
					switch (uParam0->f_66)
					{
						case 1:
							StringConCat(&vVar0, "_gret1", 24);
							break;
						
						case 0:
							StringConCat(&vVar0, "_gret2", 24);
							break;
						
						case 2:
							StringConCat(&vVar0, "_gret3", 24);
							break;
						
						default:
							StringConCat(&vVar0, "_gret4", 24);
							break;
						}
				}
				func_193(&vVar0);
				if (uParam0->f_19B != 9)
				{
					func_335(uParam0, &vVar0, 0, 0, 8);
				}
				else
				{
					func_306(uParam0->f_3, "TAXI_START", uParam0->f_91, 4);
				}
				if (uParam0->f_19B != 7 && uParam0->f_19B != 4)
				{
					if (!unk_0x2DA8CA50A72528FB(uParam0->f_9))
					{
						uParam0->f_9 = func_183(uParam0->f_11, 1);
					}
					else if (unk_0xB1D6718ACE798CBB(uParam0->f_9) == 0)
					{
						unk_0x7781946F1FC054FA(uParam0->f_9, 255);
						unk_0x1423825E528B4DE1(uParam0->f_9, uParam0->f_11);
						unk_0x0BBAABB52887CF8C(uParam0->f_9, true);
					}
				}
				func_191(uParam0, 10, 1, 0, 0);
				uParam0->f_1A1 = 10;
				break;
			
			case 7:
				StringConCat(&vVar0, "_dest2", 24);
				func_331(uParam0, 33554432, vVar0, "", 1, 8);
				func_260(uParam0, 16, 0, 0);
				func_191(uParam0, 10, 1, 0, 0);
				uParam0->f_1A1 = 10;
				break;
			
			case 10:
				if (!func_51())
				{
					func_330(uParam0, 0);
					func_228(&(uParam0->f_2C), 4);
					func_260(uParam0, 16, 0, 0);
					func_191(uParam0, 13, 0, 0, 0);
				}
				break;
			
			case 14:
				switch (uParam0->f_66)
				{
					case 0:
						StringConCat(&vVar0, "_bant2", 24);
						break;
					
					case 1:
						StringConCat(&vVar0, "_bant1", 24);
						break;
					
					case 2:
						StringConCat(&vVar0, "_bant3", 24);
						break;
					
					default:
						StringConCat(&vVar0, "_bant1", 24);
						break;
				}
				func_193(&vVar0);
				func_328(vVar0, uParam1);
				func_260(uParam0, 16, 0, 0);
				func_260(uParam0, 11, 0, 0);
				func_219(uParam0, 0, 0);
				break;
			
			case 15:
				if (func_383(uParam0, 11) > uParam0->f_24)
				{
					if (uParam0->f_19B == 0)
					{
						StringConCat(&vVar0, "_ban1", 24);
					}
					else
					{
						StringConCat(&vVar0, "_bant1", 24);
						func_193(&vVar0);
					}
					func_328(vVar0, uParam1);
					func_228(&(uParam0->f_51), 67108864);
					func_260(uParam0, 16, 0, 0);
					func_260(uParam0, 11, 0, 0);
					func_219(uParam0, 0, 0);
				}
				break;
			
			case 16:
				if (func_383(uParam0, 11) > uParam0->f_24)
				{
					if (uParam0->f_19B == 0)
					{
						StringConCat(&vVar0, "_ban2", 24);
					}
					else if (uParam0->f_19B == 1)
					{
						StringConCat(&vVar0, "_banter", 24);
					}
					else
					{
						StringConCat(&vVar0, "_bant2", 24);
						if (uParam0->f_19B != 6)
						{
							func_193(&vVar0);
						}
					}
					func_328(vVar0, uParam1);
					func_260(uParam0, 11, 0, 0);
					func_260(uParam0, 16, 0, 0);
					func_219(uParam0, 0, 0);
				}
				break;
			
			case 17:
				if (uParam0->f_19B == 0)
				{
					StringConCat(&vVar0, "_ban3", 24);
				}
				else
				{
					StringConCat(&vVar0, "_bant3", 24);
					func_193(&vVar0);
				}
				func_328(vVar0, uParam1);
				func_260(uParam0, 16, 0, 0);
				func_219(uParam0, 0, 0);
				break;
			
			case 18:
				if (uParam0->f_19B == 0)
				{
					StringConCat(&vVar0, "_BAN4", 24);
				}
				else
				{
					StringConCat(&vVar0, "_bant4", 24);
				}
				func_193(&vVar0);
				func_328(vVar0, uParam1);
				func_260(uParam0, 16, 0, 0);
				func_219(uParam0, 0, 0);
				break;
			
			case 19:
				if (uParam0->f_19B == 0)
				{
					StringConCat(&vVar0, "_BAN5", 24);
				}
				else
				{
					StringConCat(&vVar0, "_bant5", 24);
				}
				func_193(&vVar0);
				func_328(vVar0, uParam1);
				func_260(uParam0, 16, 0, 0);
				func_219(uParam0, 0, 0);
				break;
			
			case 20:
				StringConCat(&vVar0, "_dest2b", 24);
				func_193(&vVar0);
				func_328(vVar0, uParam1);
				func_260(uParam0, 16, 0, 0);
				func_260(uParam0, 11, 0, 0);
				func_219(uParam0, 0, 0);
				func_228(&(uParam0->f_52), 262144);
				uParam0->f_24 = 20f;
				break;
			
			case 23:
				StringConCat(&vVar0, "_seePt1", 24);
				func_335(uParam0, &vVar0, 0, 0, 8);
				func_191(uParam0, 24, 1, 0, 0);
				break;
			
			case 24:
				uParam0->f_1A1 = 24;
				func_260(uParam0, 16, 0, 0);
				func_219(uParam0, 0, 0);
				break;
			
			case 90:
				StringConCat(&vVar0, "_talk", 24);
				StringIntConCat(&vVar0, 1, 24);
				func_193(&vVar0);
				func_335(uParam0, &vVar0, 1, 0, 8);
				break;
			
			case 89:
				switch (uParam0->f_66)
				{
					case 0:
						StringConCat(&vVar0, "_deal1", 24);
						break;
					
					case 1:
						StringConCat(&vVar0, "_deal1", 24);
						break;
					
					default:
						StringConCat(&vVar0, "_deal1", 24);
						break;
				}
				func_335(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 91:
				StringConCat(&vVar0, "_ig1c", 24);
				func_335(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 27:
				StringConCat(&vVar0, "_bTime", 24);
				if (uParam0->f_19B == 2)
				{
					iVar3 = 8;
				}
				else
				{
					iVar3 = 3;
				}
				iVar2 = 0;
				while (iVar2 < iVar3)
				{
					switch (uParam0->f_19B)
					{
						case 2:
							switch (iVar2)
							{
								case 3:
								case 5:
								case 6:
								case 7:
									iVar5[iVar2] = 0;
									break;
								
								default:
									iVar5[iVar2] = 1;
									break;
							}
							break;
						
						default:
							iVar5[iVar2] = 1;
							break;
					}
					iVar2++;
				}
				if (uParam0->f_19B == 2)
				{
					func_327(&(uParam0->f_5A), 8, &vVar0, &iVar5, 1, 0);
				}
				else
				{
					func_327(&(uParam0->f_5A), 3, &vVar0, &iVar5, 1, 0);
				}
				func_328(vVar0, uParam1);
				func_336(0, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
				func_260(uParam0, 16, 0, 0);
				func_260(uParam0, 6, 0f, 1);
				func_219(uParam0, 0, 0);
				break;
			
			case 26:
				StringConCat(&vVar0, "_gTime", 24);
				iVar2 = 0;
				while (iVar2 < 8)
				{
					switch (uParam0->f_19B)
					{
						case 2:
							switch (iVar2)
							{
								case 3:
								case 4:
								case 5:
								case 7:
									iVar5[iVar2] = 0;
									break;
								
								default:
									iVar5[iVar2] = 1;
									break;
							}
							break;
						
						default:
							iVar5[iVar2] = 1;
							break;
					}
					iVar2++;
				}
				if (uParam0->f_19B == 2)
				{
					func_327(&(uParam0->f_59), 8, &vVar0, &iVar5, 1, 0);
				}
				else
				{
					func_327(&(uParam0->f_59), 3, &vVar0, &iVar5, 1, 0);
				}
				func_328(vVar0, uParam1);
				func_336(0, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 1);
				func_260(uParam0, 16, 0, 0);
				func_260(uParam0, 6, 0f, 1);
				func_219(uParam0, 0, 0);
				break;
			
			case 12:
				func_213("TAXI_OBJ_GYB", 3500, 1);
				func_260(uParam0, 16, 0, 0);
				func_219(uParam0, 0, 0);
				break;
			
			case 11:
				if (uParam0->f_19A == 12 || uParam0->f_19A == 18)
				{
					func_213("TAXI_OBJ_GYN_TG", 7500, 1);
				}
				else if (uParam0->f_19A < 21)
				{
					func_213("TAXI_OBJ_GYN", 7500, 1);
				}
				else
				{
					func_213("TAXI_OBJ_GYN_GF", 7500, 1);
				}
				uParam0->f_1A1 = 11;
				uParam0->f_8D = 1;
				func_260(uParam0, 16, 0, 0);
				func_219(uParam0, 0, 0);
				break;
			
			case 28:
				switch (uParam0->f_66)
				{
					case 0:
						StringConCat(&vVar0, "_dest1A", 24);
						break;
					
					case 1:
						StringConCat(&vVar0, "_dest1B", 24);
						break;
					
					default:
						StringConCat(&vVar0, "_dest1A", 24);
						break;
				}
				func_335(uParam0, &vVar0, 0, 0, 8);
				func_191(uParam0, 29, 1, 0, 0);
				break;
			
			case 29:
				if (!func_24(uParam0->f_62, 268435456))
				{
					func_213("TAXI_OBJ_CYI_01", 7500, 1);
					func_228(&(uParam0->f_62), 268435456);
				}
				uParam0->f_1A1 = 29;
				func_260(uParam0, 16, 0, 0);
				func_219(uParam0, 0, 0);
				break;
			
			case 30:
				StringConCat(&vVar0, "_rCar1", 24);
				func_193(&vVar0);
				func_328(vVar0, uParam1);
				uParam0->f_7C = { vVar0 };
				func_260(uParam0, 16, 0, 0);
				func_219(uParam0, 0, 0);
				break;
			
			case 31:
				StringConCat(&vVar0, "_rCar2", 24);
				func_193(&vVar0);
				func_328(vVar0, uParam1);
				uParam0->f_7C = { vVar0 };
				func_260(uParam0, 16, 0, 0);
				func_219(uParam0, 0, 0);
				break;
			
			case 32:
				StringConCat(&vVar0, "_rCar3", 24);
				func_193(&vVar0);
				func_328(vVar0, uParam1);
				uParam0->f_7C = { vVar0 };
				func_260(uParam0, 16, 0, 0);
				func_219(uParam0, 0, 0);
				break;
			
			case 33:
				func_213("TAXI_OBJ_CYI_02", 7500, 1);
				uParam0->f_1A1 = 33;
				func_260(uParam0, 16, 0, 0);
				func_219(uParam0, 0, 0);
				break;
			
			case 34:
				if (!func_24(uParam0->f_52, 8192))
				{
					if (func_383(uParam0, 11) > uParam0->f_24)
					{
						StringConCat(&vVar0, "_airBr1", 24);
						func_193(&vVar0);
						if (uParam0->f_19B == 5)
						{
							func_328(vVar0, uParam1);
						}
						else
						{
							func_335(uParam0, &vVar0, 0, 0, 8);
						}
						func_228(&(uParam0->f_52), 8192);
						func_260(uParam0, 16, 0, 0);
						func_260(uParam0, 11, 0, 0);
						func_219(uParam0, 0, 0);
					}
				}
				break;
			
			case 35:
				if (!func_24(uParam0->f_52, 16384))
				{
					StringConCat(&vVar0, "_seeD1", 24);
					func_193(&vVar0);
					func_335(uParam0, &vVar0, 0, 0, 8);
					func_228(&(uParam0->f_52), 16384);
				}
				break;
			
			case 36:
				if (!func_24(uParam0->f_52, 32768))
				{
					StringConCat(&vVar0, "_seeD2", 24);
					func_193(&vVar0);
					func_335(uParam0, &vVar0, 0, 0, 8);
					func_228(&(uParam0->f_52), 32768);
				}
				break;
			
			case 37:
				StringConCat(&vVar0, "_done1", 24);
				func_335(uParam0, &vVar0, 0, 0, 8);
				func_191(uParam0, 46, 1, 0, 0);
				break;
			
			case 138:
				if (uParam0->f_65 == 1)
				{
					StringConCat(&vVar0, "_ftc1", 24);
				}
				else
				{
					switch (uParam0->f_66)
					{
						case 1:
							StringConCat(&vVar0, "_ftc1", 24);
							break;
						
						case 0:
							StringConCat(&vVar0, "_ftc2", 24);
							break;
						
						case 2:
							StringConCat(&vVar0, "_ftc3", 24);
							break;
						
						default:
							StringConCat(&vVar0, "_ftc3", 24);
							break;
						}
				}
				func_193(&vVar0);
				func_335(uParam0, &vVar0, 0, 0, 8);
				func_191(uParam0, 139, 1, 0, 0);
				uParam0->f_1A1 = 139;
				func_219(uParam0, 0, 0);
				break;
			
			case 139:
				func_213("TAXI_OBJ_FTC2", 7500, 1);
				uParam0->f_1A1 = 13;
				func_191(uParam0, 13, 0, 0, 0);
				break;
			
			case 38:
				StringConCat(&vVar0, "_dOff1", 24);
				cVar1 = { vVar0 };
				iVar4 = unk_0x491B2241281A03B7(0, 120);
				if (!func_24(uParam0->f_52, 268435456))
				{
					if (iVar4 > 80)
					{
						StringConCat(&cVar1, "_1", 24);
					}
					else if (iVar4 > 40)
					{
						StringConCat(&cVar1, "_2", 24);
					}
					else
					{
						StringConCat(&cVar1, "_3", 24);
					}
					func_228(&(uParam0->f_52), 268435456);
				}
				else if (iVar4 > 80)
				{
					StringConCat(&cVar1, "_4", 24);
				}
				else if (iVar4 > 40)
				{
					StringConCat(&cVar1, "_5", 24);
				}
				else
				{
					StringConCat(&cVar1, "_6", 24);
				}
				func_337(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 8, 0, 0);
				func_260(uParam0, 16, 0, 0);
				func_219(uParam0, 0, 0);
				break;
			
			case 39:
				StringConCat(&vVar0, "_bdOff1", 24);
				cVar1 = { vVar0 };
				iVar4 = unk_0x491B2241281A03B7(0, 100);
				if (!func_24(uParam0->f_52, 268435456))
				{
					if (iVar4 < 50)
					{
						StringConCat(&cVar1, "_1", 24);
					}
					else
					{
						StringConCat(&cVar1, "_2", 24);
					}
					func_228(&(uParam0->f_52), 268435456);
				}
				else if (iVar4 < 50)
				{
					StringConCat(&cVar1, "_3", 24);
				}
				else
				{
					StringConCat(&cVar1, "_4", 24);
				}
				func_337(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 8, 0, 0);
				func_260(uParam0, 16, 0, 0);
				func_219(uParam0, 0, 0);
				break;
			
			case 41:
				StringConCat(&vVar0, "_dr2P", 24);
				func_335(uParam0, &vVar0, 0, 0, 8);
				func_260(uParam0, 16, 0, 0);
				func_219(uParam0, 0, 0);
				break;
			
			case 42:
				StringConCat(&vVar0, "_dr2N", 24);
				func_335(uParam0, &vVar0, 0, 0, 8);
				func_260(uParam0, 16, 0, 0);
				func_219(uParam0, 0, 0);
				break;
			
			case 40:
				StringConCat(&vVar0, "_dOff2", 24);
				func_335(uParam0, &vVar0, 0, 0, 8);
				func_191(uParam0, 44, 1, 0, 0);
				break;
			
			case 44:
				func_213("TAXI_OBJ_CC2", 7500, 1);
				uParam0->f_1A1 = 44;
				func_219(uParam0, 0, 0);
				func_191(uParam0, 97, 1, 0, 0);
				break;
			
			case 43:
				StringConCat(&vVar0, "_dOff3", 24);
				func_335(uParam0, &vVar0, 0, 0, 8);
				func_191(uParam0, 45, 1, 0, 0);
				break;
			
			case 45:
				if (!func_51())
				{
					func_213("TAXI_OBJ_CC3", 7500, 1);
					uParam0->f_1A1 = 45;
					func_219(uParam0, 0, 0);
					func_191(uParam0, 98, 1, 0, 0);
				}
				break;
			
			case 46:
				func_213("TAXI_OBJ_FTC3", 7500, 1);
				uParam0->f_1A1 = 46;
				func_219(uParam0, 0, 0);
				break;
			
			case 21:
				if (!func_24(uParam0->f_51, 1))
				{
					func_326(uParam0, 1, vVar0, "_sick1", 8);
					func_22(&(uParam0->f_51), 2);
				}
				else if (!func_24(uParam0->f_51, 2))
				{
					func_326(uParam0, 2, vVar0, "_sick2", 8);
					func_22(&(uParam0->f_51), 1);
				}
				func_336(12, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
				func_219(uParam0, 0, 0);
				break;
			
			case 22:
				if (!func_24(uParam0->f_52, 2097152))
				{
					StringConCat(&vVar0, "_nopke1", 24);
				}
				else if (!func_24(uParam0->f_52, 4194304))
				{
					StringConCat(&vVar0, "_nopke2", 24);
				}
				func_228(&(uParam0->f_51), 2097152);
				func_335(uParam0, &vVar0, 0, 0, 8);
				func_260(uParam0, 16, 0, 0);
				func_336(17, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 1);
				func_219(uParam0, 0, 0);
				break;
			
			case 61:
				StringConCat(&vVar0, "_Puke1", 24);
				func_335(uParam0, &vVar0, 0, 0, 8);
				func_336(18, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
				break;
			
			case 63:
				StringConCat(&vVar0, "_PkStp2", 24);
				func_335(uParam0, &vVar0, 0, 0, 8);
				func_336(20, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
				func_260(uParam0, 16, 0, 0);
				func_219(uParam0, 0, 0);
				break;
			
			case 62:
				StringConCat(&vVar0, "_PkStp1", 24);
				func_335(uParam0, &vVar0, 0, 0, 8);
				func_336(19, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
				break;
			
			case 64:
				StringConCat(&vVar0, "_PukeR1", 24);
				func_193(&vVar0);
				func_335(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 71:
				if (!func_24(uParam0->f_51, 4))
				{
					func_326(uParam0, 4, vVar0, "_turns1", 8);
				}
				else if (!func_24(uParam0->f_51, 8))
				{
					func_326(uParam0, 8, vVar0, "_turns2", 8);
				}
				else
				{
					func_326(uParam0, 8, vVar0, "_turns3", 8);
					func_22(&(uParam0->f_51), 4);
					func_22(&(uParam0->f_51), 8);
				}
				func_336(13, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
				func_219(uParam0, 0, 0);
				break;
			
			case 72:
				if (func_325(uParam0))
				{
					func_332(uParam0, vVar0, func_334(uParam0, 72));
				}
				else if (uParam0->f_19B == 9)
				{
					if (!unk_0x36CEFBE9B745A58D(uParam0->f_3))
					{
						func_306(uParam0->f_3, "CRASH_GENERIC", uParam0->f_91, 4);
					}
				}
				else if (uParam0->f_19B == 1)
				{
					StringConCat(&vVar0, "_carHt", 24);
					cVar1 = { vVar0 };
					func_338(&(uParam0->f_5F), 5, &cVar1, 1, 0, 1);
					func_294(&(uParam0->f_F4), uParam0->f_90, &cVar1, 8, 0, 0, 0);
				}
				else
				{
					StringConCat(&vVar0, "_carHt1", 24);
					cVar1 = { vVar0 };
					if (uParam0->f_19B == 0)
					{
						func_338(&(uParam0->f_5F), 8, &cVar1, 1, 1, 0);
					}
					else
					{
						func_338(&(uParam0->f_5F), 5, &cVar1, 1, 1, 0);
					}
					func_337(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 8, 0, 0);
				}
				func_336(2, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), cVar1, 0);
				func_260(uParam0, 16, 0, 0);
				func_219(uParam0, 0, 0);
				break;
			
			case 73:
				StringConCat(&vVar0, "_genPnHi", 24);
				func_335(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 75:
				if (!func_24(uParam0->f_53, 128))
				{
					StringConCat(&vVar0, "_nMiss1", 24);
					func_294(&(uParam0->f_F4), uParam0->f_90, &vVar0, 8, 0, 0, 0);
					func_228(&(uParam0->f_53), 128);
					func_22(&(uParam0->f_53), 256);
					func_260(uParam0, 16, 0, 0);
				}
				else if (!func_24(uParam0->f_53, 256))
				{
					StringConCat(&vVar0, "_nMiss2", 24);
					func_294(&(uParam0->f_F4), uParam0->f_90, &vVar0, 8, 0, 0, 0);
					func_228(&(uParam0->f_53), 256);
					func_22(&(uParam0->f_53), 512);
					func_260(uParam0, 16, 0, 0);
				}
				else if (!func_24(uParam0->f_53, 512))
				{
					StringConCat(&vVar0, "_nMiss3", 24);
					func_294(&(uParam0->f_F4), uParam0->f_90, &vVar0, 8, 0, 0, 0);
					func_228(&(uParam0->f_53), 512);
					func_22(&(uParam0->f_53), 128);
					func_260(uParam0, 16, 0, 0);
				}
				func_219(uParam0, 0, 0);
				break;
			
			case 76:
				if (uParam0->f_19B == 1 || uParam0->f_19B == 0)
				{
					bVar6 = true;
				}
				if (!func_24(uParam0->f_53, 1))
				{
					StringConCat(&vVar0, "_air1", 24);
					if (bVar6)
					{
						func_193(&vVar0);
					}
					func_294(&(uParam0->f_F4), uParam0->f_90, &vVar0, 8, 0, 0, 0);
					func_228(&(uParam0->f_53), 1);
					func_22(&(uParam0->f_53), 2);
					func_260(uParam0, 16, 0, 0);
				}
				else if (!func_24(uParam0->f_53, 2))
				{
					StringConCat(&vVar0, "_air2", 24);
					if (bVar6)
					{
						func_193(&vVar0);
					}
					func_294(&(uParam0->f_F4), uParam0->f_90, &vVar0, 8, 0, 0, 0);
					func_228(&(uParam0->f_53), 2);
					if (uParam0->f_19B == 0)
					{
						func_22(&(uParam0->f_53), 4);
					}
					else
					{
						func_22(&(uParam0->f_53), 1);
					}
					func_260(uParam0, 16, 0, 0);
				}
				else if (!func_24(uParam0->f_53, 4))
				{
					StringConCat(&vVar0, "_air3", 24);
					if (bVar6)
					{
						func_193(&vVar0);
					}
					func_294(&(uParam0->f_F4), uParam0->f_90, &vVar0, 8, 0, 0, 0);
					func_228(&(uParam0->f_53), 4);
					func_22(&(uParam0->f_53), 1);
					func_260(uParam0, 16, 0, 0);
				}
				func_336(11, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
				func_219(uParam0, 0, 0);
				break;
			
			case 79:
				if (uParam0->f_19B == 1 || uParam0->f_19B == 0)
				{
					bVar6 = true;
				}
				if (!func_24(uParam0->f_51, 4096))
				{
					func_331(uParam0, 4096, vVar0, "_sideW1", bVar6, 8);
				}
				else if (!func_24(uParam0->f_51, 8192))
				{
					func_331(uParam0, 8192, vVar0, "_sideW2", bVar6, 8);
				}
				func_336(15, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
				func_219(uParam0, 0, 0);
				break;
			
			case 80:
				if (uParam0->f_19B == 1 || uParam0->f_19B == 0)
				{
					bVar6 = true;
				}
				if (!func_24(uParam0->f_51, 16384))
				{
					func_331(uParam0, 16384, vVar0, "_opLne1", bVar6, 8);
				}
				else if (!func_24(uParam0->f_51, 32768))
				{
					func_331(uParam0, 32768, vVar0, "_opLne2", bVar6, 8);
				}
				func_336(14, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
				func_219(uParam0, 0, 0);
				break;
			
			case 83:
				if (uParam0->f_19B == 0)
				{
					if (!func_24(uParam0->f_52, 8))
					{
						func_324(uParam0, 8, vVar0, "_bored1", 8, 0);
					}
					else if (!func_24(uParam0->f_52, 16))
					{
						func_324(uParam0, 16, vVar0, "_bored2", 8, 0);
					}
					else if (!func_24(uParam0->f_52, 32))
					{
						func_324(uParam0, 32, vVar0, "_bored3", 8, 0);
					}
					func_336(9, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
					func_219(uParam0, 0, 0);
				}
				if (uParam0->f_19B == 1)
				{
					StringConCat(&vVar0, "_good1", 24);
					cVar1 = { vVar0 };
					func_338(&(uParam0->f_5D), 6, &cVar1, 0, 1, 0);
					func_337(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 8, 0, 0);
					func_336(9, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
					func_260(uParam0, 16, 0, 0);
					func_219(uParam0, 0, 0);
				}
				break;
			
			case 92:
				StringConCat(&vVar0, "_EtoB1", 24);
				cVar1 = { vVar0 };
				func_338(&(uParam0->f_60), 2, &cVar1, 0, 1, 0);
				func_337(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 8, 0, 0);
				func_336(9, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
				func_260(uParam0, 16, 0, 0);
				func_219(uParam0, 0, 0);
				break;
			
			case 93:
				StringConCat(&vVar0, "_BtoE1", 24);
				cVar1 = { vVar0 };
				func_338(&(uParam0->f_61), 2, &cVar1, 0, 1, 0);
				func_337(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 8, 0, 0);
				func_336(12, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
				func_260(uParam0, 16, 0, 0);
				func_219(uParam0, 0, 0);
				break;
			
			case 81:
				if (!func_24(uParam0->f_51, 65536))
				{
					func_331(uParam0, 65536, vVar0, "_runLit1", 1, 8);
				}
				else if (!func_24(uParam0->f_51, 131072))
				{
					func_331(uParam0, 131072, vVar0, "_runLit2", 1, 8);
				}
				func_219(uParam0, 0, 0);
				break;
			
			case 82:
				if (func_325(uParam0))
				{
					func_332(uParam0, vVar0, func_334(uParam0, 82));
				}
				else if (uParam0->f_19B == 9)
				{
					if (!unk_0x36CEFBE9B745A58D(uParam0->f_3))
					{
						func_306(uParam0->f_3, "CAR_HIT_PED_DRIVEN", uParam0->f_91, 4);
					}
				}
				else if (!func_24(uParam0->f_53, 8))
				{
					StringConCat(&vVar0, "_hitR1", 24);
					func_193(&vVar0);
					func_294(&(uParam0->f_F4), uParam0->f_90, &vVar0, 8, 0, 0, 0);
					func_228(&(uParam0->f_53), 8);
					func_22(&(uParam0->f_53), 16);
					func_260(uParam0, 16, 0, 0);
				}
				else if (!func_24(uParam0->f_53, 16))
				{
					StringConCat(&vVar0, "_hitR2", 24);
					func_193(&vVar0);
					func_294(&(uParam0->f_F4), uParam0->f_90, &vVar0, 8, 0, 0, 0);
					func_228(&(uParam0->f_53), 16);
					func_22(&(uParam0->f_53), 32);
					func_260(uParam0, 16, 0, 0);
				}
				else if (!func_24(uParam0->f_53, 32))
				{
					StringConCat(&vVar0, "_hitR3", 24);
					func_193(&vVar0);
					func_294(&(uParam0->f_F4), uParam0->f_90, &vVar0, 8, 0, 0, 0);
					func_228(&(uParam0->f_53), 32);
					if (uParam0->f_19B == 0)
					{
						func_22(&(uParam0->f_53), 64);
					}
					else
					{
						func_22(&(uParam0->f_53), 8);
					}
					func_260(uParam0, 16, 0, 0);
				}
				else if (!func_24(uParam0->f_53, 64))
				{
					StringConCat(&vVar0, "_hitR4", 24);
					func_193(&vVar0);
					func_294(&(uParam0->f_F4), uParam0->f_90, &vVar0, 8, 0, 0, 0);
					func_228(&(uParam0->f_53), 64);
					func_22(&(uParam0->f_53), 8);
					func_260(uParam0, 16, 0, 0);
				}
				func_336(1, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
				func_219(uParam0, 0, 0);
				break;
			
			case 65:
				if (!func_51())
				{
					if (uParam0->f_73)
					{
						StringConCat(&vVar0, "_aggro2", 24);
					}
					else
					{
						StringConCat(&vVar0, "_aggro", 24);
					}
					func_335(uParam0, &vVar0, 0, 1, 8);
				}
				else
				{
					func_332(uParam0, vVar0, func_334(uParam0, 65));
					func_219(uParam0, 0, 0);
				}
				uParam0->f_6B++;
				break;
			
			case 66:
				if (!func_51())
				{
					if (uParam0->f_19B == 4)
					{
						StringCopy(&vVar0, "tm6_shoot", 24);
					}
					else if (uParam0->f_73)
					{
						StringConCat(&vVar0, "_shootlz", 24);
					}
					else
					{
						StringConCat(&vVar0, "_shoot", 24);
					}
					func_335(uParam0, &vVar0, 0, 1, 8);
				}
				else
				{
					func_332(uParam0, vVar0, func_334(uParam0, 66));
					func_219(uParam0, 0, 0);
				}
				uParam0->f_6B++;
				break;
			
			case 13:
				if (uParam0->f_19B == 8)
				{
					if (!uParam0->f_6D && !func_51())
					{
						switch (uParam0->f_19E)
						{
							case 3:
								StringConCat(&vVar0, "_warnC1", 24);
								func_335(uParam0, &vVar0, 0, 0, 8);
								break;
							
							case 6:
								StringConCat(&vVar0, "_warnF1", 24);
								func_335(uParam0, &vVar0, 0, 0, 8);
								break;
							
							case 1:
								StringConCat(&vVar0, "_far1", 24);
								func_335(uParam0, &vVar0, 0, 0, 8);
								func_336(21, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
								break;
							
							case 2:
								StringConCat(&vVar0, "_close1", 24);
								func_335(uParam0, &vVar0, 0, 0, 8);
								func_336(22, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
								break;
							
							case 10:
								StringConCat(&vVar0, "_hit1", 24);
								func_335(uParam0, &vVar0, 0, 0, 8);
								break;
							
							case 8:
								StringConCat(&vVar0, "_good1", 24);
								cVar1 = { vVar0 };
								func_338(&(uParam0->f_5D), 6, &cVar1, 1, 1, 0);
								func_337(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 8, 0, 0);
								func_336(23, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), cVar1, 0);
								func_260(uParam0, 16, 0, 0);
								func_219(uParam0, 0, 0);
								break;
							
							case 9:
								if (!iLocal_58)
								{
									StringConCat(&vVar0, "_sBant1", 24);
									cVar1 = { vVar0 };
									func_335(uParam0, &vVar0, 0, 0, 8);
									func_260(uParam0, 16, 0, 0);
									func_260(uParam0, 11, 0, 0);
									func_219(uParam0, 0, 0);
									if (!iLocal_60)
									{
										iLocal_58 = 1;
									}
								}
								else
								{
									if (!iLocal_59)
									{
										StringConCat(&vVar0, "_bant3", 24);
										iLocal_59 = 1;
									}
									else
									{
										StringConCat(&vVar0, "_bant2", 24);
										iLocal_60 = 1;
									}
									func_193(&vVar0);
									func_335(uParam0, &vVar0, 0, 0, 8);
									func_260(uParam0, 16, 0, 0);
									func_260(uParam0, 11, 0, 0);
									func_219(uParam0, 0, 0);
									iLocal_58 = 0;
								}
								break;
							
							case 7:
								StringConCat(&vVar0, "_done1", 24);
								func_335(uParam0, &vVar0, 0, 0, 8);
								break;
						}
						func_191(uParam0, 143, 0, 0, 0);
					}
				}
				break;
			
			case 78:
				StringConCat(&vVar0, "_speed1", 24);
				cVar1 = { vVar0 };
				func_338(&(uParam0->f_57), 6, &cVar1, 1, 1, 0);
				func_337(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 8, 0, 0);
				func_336(10, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
				func_260(uParam0, 16, 0, 0);
				func_219(uParam0, 0, 0);
				break;
			
			case 25:
				if (!func_24(uParam0->f_52, 1))
				{
					func_324(uParam0, 1, vVar0, "_close1", 8, 0);
				}
				else if (!func_24(uParam0->f_52, 2))
				{
					func_324(uParam0, 2, vVar0, "_close2", 8, 0);
				}
				else if (!func_24(uParam0->f_52, 4))
				{
					func_324(uParam0, 4, vVar0, "_close3", 8, 0);
				}
				func_219(uParam0, 0, 0);
				break;
			
			case 48:
				if (uParam0->f_73)
				{
					StringConCat(&vVar0, "_stop2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_stop1", 24);
				}
				cVar1 = { vVar0 };
				func_338(&(uParam0->f_56), 4, &cVar1, 0, 1, 0);
				if (uParam0->f_19B != 9)
				{
					func_337(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 8, 0, 0);
				}
				else if (!unk_0x36CEFBE9B745A58D(uParam0->f_3))
				{
					func_306(uParam0->f_3, "TAXI_STOPPED", uParam0->f_91, 4);
				}
				func_260(uParam0, 16, 0, 0);
				func_336(5, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
				func_219(uParam0, 0, 0);
				break;
			
			case 74:
				if (func_325(uParam0))
				{
					func_332(uParam0, vVar0, func_334(uParam0, 74));
				}
				else if (uParam0->f_19B == 9)
				{
					if (!unk_0x36CEFBE9B745A58D(uParam0->f_3))
					{
						func_306(uParam0->f_3, "VEHICLE_FLIPPED", uParam0->f_91, 4);
					}
				}
				else
				{
					StringConCat(&vVar0, "_roll1", 24);
					func_323(uParam0, vVar0, 8);
				}
				func_336(3, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
				func_260(uParam0, 16, 0, 0);
				func_219(uParam0, 0, 0);
				break;
			
			case 70:
				if (!func_24(uParam0->f_53, 1024))
				{
					func_228(&(uParam0->f_53), 1024);
					func_260(uParam0, 16, 0, 0);
					StringConCat(&vVar0, "_swrv1", 24);
					func_193(&vVar0);
					func_294(&(uParam0->f_F4), uParam0->f_90, &vVar0, 8, 0, 0, 0);
				}
				else if (!func_24(uParam0->f_53, 2048))
				{
					func_228(&(uParam0->f_53), 2048);
					func_260(uParam0, 16, 0, 0);
					StringConCat(&vVar0, "_swrv2", 24);
					func_193(&vVar0);
					func_294(&(uParam0->f_F4), uParam0->f_90, &vVar0, 8, 0, 0, 0);
				}
				else if (!func_24(uParam0->f_53, 4096))
				{
					func_228(&(uParam0->f_53), 4096);
					func_260(uParam0, 16, 0, 0);
					StringConCat(&vVar0, "_swrv3", 24);
					func_193(&vVar0);
					func_294(&(uParam0->f_F4), uParam0->f_90, &vVar0, 8, 0, 0, 0);
				}
				func_219(uParam0, 0, 0);
				break;
			
			case 69:
				if (!func_24(uParam0->f_52, 1024))
				{
					func_324(uParam0, 1024, vVar0, "_rvrs1", 8, 1);
					func_22(&(uParam0->f_52), 2048);
				}
				else if (!func_24(uParam0->f_52, 2048))
				{
					func_324(uParam0, 2048, vVar0, "_rvrs2", 8, 1);
				}
				func_219(uParam0, 0, 0);
				break;
			
			case 67:
				StringConCat(&vVar0, "_ofrd1", 24);
				cVar1 = { vVar0 };
				func_338(&(uParam0->f_58), 4, &cVar1, 0, 1, 0);
				func_337(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 8, 0, 0);
				func_336(16, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), cVar1, 0);
				func_260(uParam0, 16, 0, 0);
				func_219(uParam0, 0, 0);
				break;
			
			case 68:
				StringConCat(&vVar0, "_ofrdch1", 24);
				func_294(&(uParam0->f_F4), uParam0->f_90, &vVar0, 9, 0, 0, 0);
				func_260(uParam0, 16, 0, 0);
				func_219(uParam0, 0, 0);
				break;
			
			case 49:
				StringConCat(&vVar0, "_losPol1", 24);
				func_335(uParam0, &vVar0, 0, 0, 8);
				func_191(uParam0, 52, 1, 0, 0);
				break;
			
			case 50:
				if (uParam0->f_73)
				{
					StringConCat(&vVar0, "_lsPo2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_lsPo1", 24);
				}
				if (uParam0->f_19B != 9)
				{
					func_335(uParam0, &vVar0, 0, 0, 8);
				}
				else if (!unk_0x36CEFBE9B745A58D(uParam0->f_3))
				{
					func_306(uParam0->f_3, "POLICE_PURSUIT_DRIVEN", uParam0->f_91, 4);
				}
				func_260(uParam0, 16, 0, 0);
				func_219(uParam0, 0, 0);
				break;
			
			case 51:
				if (func_325(uParam0))
				{
					if (uParam0->f_19B == 2)
					{
						StringConCat(&vVar0, "_copBa1", 24);
						cVar1 = { vVar0 };
						cVar1 = { vVar0 };
						func_335(uParam0, &vVar0, 0, 0, 8);
						func_191(uParam0, 52, 1, 0, 0);
						func_260(uParam0, 16, 0, 0);
					}
					else
					{
						if (uParam0->f_19B == 5 && uParam0->f_19A > 9)
						{
							StringConCat(&vVar0, "_copBa2", 24);
						}
						else
						{
							StringConCat(&vVar0, "_copBa1", 24);
						}
						cVar1 = { vVar0 };
						func_335(uParam0, &vVar0, 0, 0, 8);
						func_260(uParam0, 16, 0, 0);
					}
				}
				else
				{
					StringConCat(&vVar0, "_copBa1", 24);
					cVar1 = { vVar0 };
					func_338(&(uParam0->f_55), 6, &cVar1, 1, 1, 0);
					func_337(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 8, 0, 0);
					func_260(uParam0, 16, 0, 0);
					func_219(uParam0, 0, 0);
				}
				break;
			
			case 53:
				StringConCat(&vVar0, "_evdeP1", 24);
				func_336(8, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
				func_335(uParam0, &vVar0, 0, 0, 8);
				func_260(uParam0, 10, 0f, 1);
				break;
			
			case 52:
				if (unk_0x904E94842BB9E173(unk_0xFC1CAE18F3ECBF2D()) >= 1)
				{
					func_213("TAXI_OBJ_POL", 7500, 1);
					uParam0->f_1A1 = 52;
				}
				func_219(uParam0, 0, 0);
				break;
			
			case 54:
				StringConCat(&vVar0, "_cpFz1", 24);
				func_193(&vVar0);
				func_335(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 84:
				if (!func_24(uParam0->f_51, 262144))
				{
					func_331(uParam0, 262144, vVar0, "_rdCh1", 1, 8);
				}
				else if (!func_24(uParam0->f_51, 1048576))
				{
					if (uParam0->f_19B == 0 || uParam0->f_19B == 1)
					{
						func_331(uParam0, 1048576, vVar0, "_rdCh2", 1, 8);
					}
					else
					{
						func_331(uParam0, 1048576, vVar0, "_rdCh2", 0, 8);
					}
				}
				func_336(7, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
				func_219(uParam0, 0, 0);
				break;
			
			case 85:
				if (!func_24(uParam0->f_52, 67108864))
				{
					if (uParam0->f_1A2.f_6)
					{
						func_322(uParam0, 67108864, vVar0, "_rdLk1", 1, 7);
					}
				}
				else if (!func_24(uParam0->f_52, 134217728))
				{
					func_322(uParam0, 134217728, vVar0, "_rdFv1", 0, 7);
				}
				func_336(6, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
				func_219(uParam0, 0, 0);
				break;
			
			case 86:
				StringConCat(&vVar0, "_rdneu1", 24);
				func_335(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 87:
				StringConCat(&vVar0, "_rdtip1", 24);
				cVar1 = { vVar0 };
				StringConCat(&cVar1, "_", 24);
				StringIntConCat(&cVar1, uParam0->f_1A2.f_3, 24);
				func_337(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 8, 0, 0);
				func_260(uParam0, 16, 0, 0);
				func_219(uParam0, 0, 0);
				break;
			
			case 100:
				func_213("TAXI_OBJ_GYB_2", 7500, 1);
				uParam0->f_1A1 = 100;
				func_219(uParam0, 0, 0);
				break;
			
			case 47:
				if (uParam0->f_19B == 1)
				{
					StringConCat(&vVar0, "_horn", 24);
					func_335(uParam0, &vVar0, 0, 0, 8);
				}
				break;
			
			case 101:
				StringConCat(&vVar0, "_thank1", 24);
				if ((uParam0->f_19B == 1 || uParam0->f_19B == 5) || uParam0->f_19B == 0)
				{
					func_193(&vVar0);
				}
				func_228(&(uParam0->f_51), 2097152);
				if (uParam0->f_19B != 9)
				{
					func_335(uParam0, &vVar0, 0, 0, 8);
				}
				break;
			
			case 102:
				StringConCat(&vVar0, "_thank2", 24);
				if ((uParam0->f_19B == 1 || uParam0->f_19B == 5) || uParam0->f_19B == 0)
				{
					func_193(&vVar0);
				}
				func_228(&(uParam0->f_51), 2097152);
				if (uParam0->f_19B != 9)
				{
					func_335(uParam0, &vVar0, 0, 0, 8);
				}
				break;
			
			case 103:
				if (uParam0->f_19B == 4)
				{
					StringConCat(&vVar0, "_pissed1", 24);
				}
				else
				{
					StringConCat(&vVar0, "_thank3", 24);
				}
				if ((uParam0->f_19B == 1 || uParam0->f_19B == 5) || uParam0->f_19B == 0)
				{
					func_193(&vVar0);
				}
				func_228(&(uParam0->f_51), 2097152);
				if (uParam0->f_19B != 9)
				{
					func_335(uParam0, &vVar0, 0, 0, 8);
				}
				break;
			
			case 97:
				if (!func_24(uParam0->f_52, 65536))
				{
					if (func_383(uParam0, 11) > uParam0->f_24)
					{
						switch (uParam0->f_66)
						{
							case 0:
								StringConCat(&vVar0, "_ccba2", 24);
								break;
							
							case 1:
								StringConCat(&vVar0, "_ccba1", 24);
								break;
							
							default:
								StringConCat(&vVar0, "_ccba1", 24);
								break;
						}
						func_193(&vVar0);
						func_328(vVar0, uParam1);
						func_228(&(uParam0->f_52), 65536);
						func_260(uParam0, 16, 0, 0);
						func_260(uParam0, 11, 0, 0);
						func_219(uParam0, 0, 0);
					}
				}
				break;
			
			case 98:
				if (!func_24(uParam0->f_52, 131072))
				{
					if (func_383(uParam0, 11) > uParam0->f_24)
					{
						StringConCat(&vVar0, "_ccbb1", 24);
						func_193(&vVar0);
						func_328(vVar0, uParam1);
						func_228(&(uParam0->f_52), 131072);
						func_260(uParam0, 16, 0, 0);
						func_260(uParam0, 11, 0, 0);
						func_219(uParam0, 0, 0);
					}
				}
				break;
			
			case 99:
				if (!func_24(uParam0->f_52, 8388608))
				{
					StringConCat(&vVar0, "_close1", 24);
					func_228(&(uParam0->f_52), 8388608);
				}
				else if (!func_24(uParam0->f_52, 16777216))
				{
					StringConCat(&vVar0, "_close2", 24);
					func_228(&(uParam0->f_52), 16777216);
				}
				else if (!func_24(uParam0->f_52, 33554432))
				{
					StringConCat(&vVar0, "_close3", 24);
					func_228(&(uParam0->f_52), 33554432);
				}
				func_328(vVar0, uParam1);
				func_260(uParam0, 16, 0, 0);
				func_219(uParam0, 0, 0);
				break;
			
			case 58:
				if (uParam0->f_19B == 6)
				{
					StringConCat(&vVar0, "_kill1", 24);
					cVar1 = { vVar0 };
					func_338(&(uParam0->f_5D), 6, &cVar1, 1, 1, 1);
					func_193(&vVar0);
					func_337(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 8, 0, 0);
				}
				else if (uParam0->f_19B == 8)
				{
					StringConCat(&vVar0, "_cheat1", 24);
					func_335(uParam0, &vVar0, 0, 0, 8);
				}
				else
				{
					StringConCat(&vVar0, "_kill1", 24);
					func_335(uParam0, &vVar0, 0, 0, 8);
				}
				func_260(uParam0, 16, 0, 0);
				func_219(uParam0, 0, 0);
				break;
			
			case 95:
				StringConCat(&vVar0, "_wndw2", 24);
				func_328(vVar0, uParam1);
				func_260(uParam0, 16, 0, 0);
				func_260(uParam0, 11, 0, 0);
				func_219(uParam0, 0, 0);
				break;
			
			case 94:
				StringConCat(&vVar0, "_wndw0", 24);
				func_328(vVar0, uParam1);
				func_260(uParam0, 16, 0, 0);
				func_260(uParam0, 11, 0, 0);
				func_219(uParam0, 0, 0);
				break;
			
			case 96:
				StringConCat(&vVar0, "_wndw1", 24);
				func_328(vVar0, uParam1);
				func_260(uParam0, 16, 0, 0);
				func_260(uParam0, 11, 0, 0);
				func_219(uParam0, 0, 0);
				break;
			
			case 113:
				StringConCat(&vVar0, "_csite1", 24);
				func_193(&vVar0);
				func_335(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 119:
				StringConCat(&vVar0, "_fair1", 24);
				func_193(&vVar0);
				func_335(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 115:
				StringConCat(&vVar0, "_AlCk1", 24);
				cVar1 = { vVar0 };
				func_338(&(uParam0->f_5B), 5, &cVar1, 1, 1, 0);
				func_337(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 8, 0, 0);
				func_260(uParam0, 16, 0, 0);
				func_219(uParam0, 0, 0);
				break;
			
			case 116:
				StringConCat(&vVar0, "_eggG1", 24);
				cVar1 = { vVar0 };
				func_338(&(uParam0->f_5C), 5, &cVar1, 1, 1, 0);
				func_337(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 8, 0, 0);
				func_260(uParam0, 16, 0, 0);
				func_219(uParam0, 0, 0);
				break;
			
			case 114:
				StringConCat(&vVar0, "_goons1", 24);
				func_335(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 59:
				StringConCat(&vVar0, "_oRun1", 24);
				func_335(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 117:
				StringConCat(&vVar0, "_gotG1", 24);
				func_335(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 118:
				StringConCat(&vVar0, "_getA1", 24);
				func_335(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 120:
				StringConCat(&vVar0, "_gnawy1", 24);
				func_335(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 121:
				StringConCat(&vVar0, "_grl1", 24);
				func_193(&vVar0);
				func_335(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 122:
				StringConCat(&vVar0, "_figt1", 24);
				func_335(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 123:
				StringConCat(&vVar0, "_gEgg1", 24);
				func_335(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 124:
				StringConCat(&vVar0, "_gEgg3", 24);
				func_335(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 125:
				StringConCat(&vVar0, "_gEgg2", 24);
				func_335(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 126:
				StringConCat(&vVar0, "_gLeav1", 24);
				func_335(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 127:
				StringConCat(&vVar0, "_aKill1", 24);
				func_335(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 129:
				StringConCat(&vVar0, "_gHelp1", 24);
				func_193(&vVar0);
				func_335(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 130:
				StringConCat(&vVar0, "_gDest1", 24);
				func_335(uParam0, &vVar0, 0, 0, 8);
				func_191(uParam0, 11, 1, 0, 0);
				break;
			
			case 128:
				StringConCat(&vVar0, "_gKO1", 24);
				func_335(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 132:
				StringConCat(&vVar0, "_gThank1", 24);
				func_228(&(uParam0->f_51), 2097152);
				func_335(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 131:
				StringConCat(&vVar0, "_gDriv1", 24);
				func_193(&vVar0);
				func_328(vVar0, uParam1);
				func_228(&(uParam0->f_51), 67108864);
				func_260(uParam0, 16, 0, 0);
				func_260(uParam0, 11, 0, 0);
				func_219(uParam0, 0, 0);
				break;
			
			case 60:
				StringConCat(&vVar0, "_cash1", 24);
				func_335(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 105:
				if (!func_24(uParam0->f_51, 33554432) && uParam0->f_19B != 9)
				{
					func_331(uParam0, 33554432, vVar0, "_noPay1", 1, 8);
				}
				else if (uParam0->f_19B == 9)
				{
					if (!unk_0x36CEFBE9B745A58D(uParam0->f_3))
					{
						func_306(uParam0->f_3, "TAXI_NO_PAY", uParam0->f_91, 4);
					}
				}
				func_191(uParam0, 108, 1, 0, 0);
				break;
			
			case 106:
				StringConCat(&vVar0, "_foot", 24);
				func_294(&(uParam0->f_F4), uParam0->f_90, &vVar0, 9, 0, 0, 0);
				func_260(uParam0, 16, 0, 0);
				func_219(uParam0, 0, 0);
				break;
			
			case 107:
				if (!func_24(uParam0->f_51, 268435456))
				{
					func_331(uParam0, 268435456, vVar0, "_kPay1", 1, 8);
				}
				func_191(uParam0, 52, 1, 0, 0);
				break;
			
			case 108:
				func_213("TAXI_OBJ_RUNOUT", 7500, 1);
				uParam0->f_1A1 = 108;
				func_219(uParam0, 0, 0);
				break;
			
			case 109:
				if (!func_24(uParam0->f_51, 4194304))
				{
					if (uParam0->f_19B == 2 || uParam0->f_19B == 6)
					{
						func_331(uParam0, 4194304, vVar0, "_mPay1", 0, 8);
					}
					else if (uParam0->f_19B == 9)
					{
						if (!unk_0x36CEFBE9B745A58D(uParam0->f_3))
						{
							func_306(uParam0->f_3, "APOLOGY_NO_TROUBLE", uParam0->f_91, 4);
						}
					}
					else
					{
						func_331(uParam0, 4194304, vVar0, "_mPay1", 1, 8);
					}
				}
				func_191(uParam0, 111, 1, 0, 0);
				break;
			
			case 111:
				func_213("TAXI_OBJ_GETRUN", 7500, 1);
				uParam0->f_1A1 = 111;
				func_219(uParam0, 0, 0);
				break;
			
			case 110:
				StringConCat(&vVar0, "_runoff", 24);
				func_294(&(uParam0->f_F4), uParam0->f_90, &vVar0, 9, 0, 0, 0);
				func_260(uParam0, 16, 0, 0);
				func_219(uParam0, 0, 0);
				break;
			
			case 141:
				if (!func_24(uParam0->f_51, 16777216))
				{
					func_331(uParam0, 16777216, vVar0, "_ret1", 1, 8);
				}
				func_219(uParam0, 0, 0);
				break;
			
			case 88:
				func_213("TAXI_TIEFLEE", 7500, 1);
				func_219(uParam0, 0, 0);
				break;
			
			case 57:
				if (!func_24(uParam0->f_62, 536870912))
				{
					func_213("TAXI_OBJ_CYI_1B", 7500, 1);
					func_228(&(uParam0->f_62), 536870912);
				}
				uParam0->f_1A1 = 57;
				func_219(uParam0, 0, 0);
				break;
			
			case 104:
				StringConCat(&vVar0, "_joke1", 24);
				func_193(&vVar0);
				func_335(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 136:
				if (uParam0->f_73)
				{
					StringConCat(&vVar0, "_wronglz", 24);
				}
				else if (uParam0->f_74)
				{
					StringConCat(&vVar0, "_wrong2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_wrong", 24);
				}
				func_335(uParam0, &vVar0, 0, 0, 8);
				func_219(uParam0, 0, 0);
				break;
			
			case 140:
				StringConCat(&vVar0, "_shout", 24);
				func_335(uParam0, &vVar0, 0, 0, 8);
				func_219(uParam0, 0, 0);
				break;
			
			case 135:
				if (uParam0->f_19B == 4)
				{
					StringCopy(&vVar0, "tm6_jack", 24);
				}
				else
				{
					StringConCat(&vVar0, "_jack", 24);
				}
				func_335(uParam0, &vVar0, 0, 0, 8);
				func_219(uParam0, 0, 0);
				break;
			
			case 133:
				StringConCat(&vVar0, "_getCar", 24);
				func_335(uParam0, &vVar0, 1, 0, 8);
				func_191(uParam0, 134, 1, 0, 0);
				break;
			
			case 134:
				func_213("TX_VIP", 7500, 0);
				uParam0->f_1A1 = 134;
				func_191(uParam0, 0, 0, 0, 0);
				func_219(uParam0, 0, 0);
				break;
			}
	}
}

void func_322(var uParam0, int iParam1, vector3 vParam2, var uParam3, var uParam4, var uParam5, char* sParam6, bool bParam7, int iParam8)//Position - 0xFA32
{
	func_228(&(uParam0->f_52), iParam1);
	func_260(uParam0, 16, 0, 0);
	StringConCat(&vParam2, sParam6, 24);
	if (bParam7)
	{
		func_193(&vParam2);
	}
	func_294(&(uParam0->f_F4), uParam0->f_90, &vParam2, iParam8, 0, 0, 0);
}

void func_323(var uParam0, struct<6> Param1, int iParam2)//Position - 0xFA73
{
	vector3 vVar0[24];
	
	cVar0 = { Param1 };
	if (!func_24(uParam0->f_52, 64))
	{
		func_228(&(uParam0->f_52), 64);
		StringConCat(&cVar0, "_1", 24);
	}
	else if (!func_24(uParam0->f_52, 128))
	{
		func_228(&(uParam0->f_52), 128);
		StringConCat(&cVar0, "_2", 24);
	}
	else
	{
		StringConCat(&cVar0, "_", 24);
		StringIntConCat(&cVar0, unk_0x491B2241281A03B7(1, 3), 24);
	}
	func_337(&(uParam0->f_F4), uParam0->f_90, &Param1, &cVar0, iParam2, 0, 0);
	func_260(uParam0, 16, 0, 0);
}

void func_324(var uParam0, int iParam1, vector3 vParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char* sParam6, int iParam7, bool bParam8)//Position - 0xFAFA
{
	func_228(&(uParam0->f_52), iParam1);
	func_260(uParam0, 16, 0, 0);
	StringConCat(&vParam2, sParam6, 24);
	if ((((uParam0->f_19B == 1 || uParam0->f_19B == 0) || uParam0->f_19B == 5) || uParam0->f_19B == 8) || uParam0->f_19B == 2)
	{
		if (bParam8)
		{
			func_193(&vParam2);
		}
	}
	func_294(&(uParam0->f_F4), uParam0->f_90, &vParam2, iParam7, 0, 0, 0);
}

int func_325(var uParam0)//Position - 0xFB7A
{
	if ((((((uParam0->f_19B == 2 || uParam0->f_19B == 3) || uParam0->f_19B == 4) || uParam0->f_19B == 5) || uParam0->f_19B == 6) || uParam0->f_19B == 7) || uParam0->f_19B == 8)
	{
		return 1;
	}
	return 0;
}

void func_326(var uParam0, int iParam1, vector3 vParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char* sParam6, int iParam7)//Position - 0xFBE0
{
	func_228(&(uParam0->f_51), iParam1);
	func_260(uParam0, 16, 0, 0);
	StringConCat(&vParam2, sParam6, 24);
	func_294(&(uParam0->f_F4), uParam0->f_90, &vParam2, iParam7, 0, 0, 0);
}

void func_327(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0xFC16
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = SYSTEM::TO_FLOAT(iVar2);
		iVar1 = SYSTEM::ROUND(SYSTEM::POW(2f, fVar0));
		if (!func_238(*uParam0, iVar1))
		{
			func_229(uParam0, iVar1);
			if (bParam5)
			{
				StringConCat(sParam2, "_", 24);
			}
			StringIntConCat(sParam2, iVar2 + 1, 24);
			if ((*iParam3)[iVar2])
			{
				func_193(sParam2);
			}
			if (bParam4)
			{
				if (iVar2 == (iParam1 - 1))
				{
					*uParam0 = 0;
				}
			}
			return;
		}
		iVar2++;
	}
}

void func_328(char[24] cParam0, var uParam1)//Position - 0xFC97
{
	int iVar0;
	
	iVar0 = func_329(uParam1);
	if (iVar0 > -1)
	{
		*(uParam1[iVar0 /*8*/]) = { cParam0 };
		func_228(&((uParam1[iVar0 /*8*/])->f_7), 2);
	}
}

int func_329(var uParam0)//Position - 0xFCC6
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (unk_0xF1734B55490E9045(uParam0[iVar0 /*8*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_330(var uParam0, bool bParam1)//Position - 0xFCF3
{
	switch (uParam0->f_19B)
	{
		case 0:
			if (bParam1)
			{
				func_213("TX_OBJ_NEX_PU", 7500, 1);
			}
			else
			{
				func_213("TX_OBJ_NEX_DO", 7500, 1);
			}
			break;
		
		case 1:
			if (bParam1)
			{
				func_213("TX_OBJ_TIE_PU", 7500, 1);
			}
			else
			{
				func_213("TX_OBJ_TIE_DO", 7500, 1);
			}
			break;
		
		case 2:
			if (bParam1)
			{
				func_213("TX_OBJ_DL_PU", 7500, 1);
			}
			else
			{
				func_213("TX_OBJ_DL_DO", 7500, 1);
			}
			break;
		
		case 3:
			if (bParam1)
			{
				func_213("TX_OBJ_GYB_PU", 7500, 1);
			}
			else
			{
				func_213("TX_OBJ_GYB_DO", 7500, 1);
			}
			break;
		
		case 4:
			if (bParam1)
			{
				func_213("TX_OBJ_TTB_PU", 7500, 1);
			}
			else
			{
				func_213("TX_OBJ_TTB_DO", 7500, 1);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				func_213("TX_OBJ_CYI_PU", 7500, 1);
			}
			else
			{
				func_213("TX_OBJ_CYI_DO", 7500, 1);
			}
			break;
		
		case 6:
			if (bParam1)
			{
				func_213("TX_OBJ_GYN_PU", 7500, 1);
			}
			else
			{
				func_213("TX_OBJ_GYN_DO", 7500, 1);
			}
			break;
		
		case 7:
			if (bParam1)
			{
				func_213("TX_OBJ_CC_PU", 7500, 1);
			}
			else
			{
				func_213("TAXI_OBJ_CC1", 7500, 1);
			}
			break;
		
		case 8:
			if (bParam1)
			{
				func_213("TX_OBJ_FC_PU", 7500, 1);
			}
			else
			{
				func_213("TAXI_OBJ_FTC1", 7500, 1);
			}
			break;
		
		case 9:
			if (bParam1)
			{
				func_213("TX_OBJ_PRO_PU", 7500, 1);
			}
			else
			{
				func_213("TX_OBJ_PRO_DO", 7500, 1);
			}
			break;
	}
	if (!bParam1)
	{
		uParam0->f_8B = 1;
	}
}

void func_331(var uParam0, int iParam1, vector3 vParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char* sParam6, bool bParam7, int iParam8)//Position - 0xFEAA
{
	func_228(&(uParam0->f_51), iParam1);
	func_260(uParam0, 16, 0, 0);
	StringConCat(&vParam2, sParam6, 24);
	if (bParam7)
	{
		func_193(&vParam2);
	}
	func_294(&(uParam0->f_F4), uParam0->f_90, &vParam2, iParam8, 0, 0, 0);
}

void func_332(var uParam0, char[12] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char* sParam5)//Position - 0xFEEB
{
	func_260(uParam0, 16, 0, 0);
	func_260(uParam0, 17, 0f, 1);
	StringConCat(&cParam1, sParam5, 24);
	if (!unk_0x36CEFBE9B745A58D(uParam0->f_3))
	{
		unk_0xD508385315EA1DAC(uParam0->f_3, &cParam1, func_333(uParam0));
	}
}

char* func_333(var uParam0)//Position - 0xFF29
{
	char* sVar0;
	
	switch (uParam0->f_19B)
	{
		case 0:
			sVar0 = "TaxiFelipe";
			break;
		
		case 1:
			sVar0 = "TaxiOtis";
			break;
		
		case 2:
			sVar0 = "TaxiKwak";
			break;
		
		case 3:
			sVar0 = "TaxiWalter";
			break;
		
		case 4:
			sVar0 = "TaxiMiranda";
			break;
		
		case 5:
			sVar0 = "TaxiDerrick";
			break;
		
		case 6:
			sVar0 = "TaxiAlonzo";
			break;
		
		case 7:
			sVar0 = "TaxiDarren";
			break;
		
		case 8:
			sVar0 = "TaxiKeyla";
			break;
	}
	return sVar0;
}

char* func_334(var uParam0, int iParam1)//Position - 0xFFC4
{
	switch (iParam1)
	{
		case 72:
			switch (uParam0->f_19B)
			{
				case 0:
					return "_ACRH";
				
				case 1:
					return "_ACRH";
				
				case 2:
					return "_ACAA";
				
				case 3:
					return "_ACRH";
				
				case 4:
					return "_AEAA";
				
				case 5:
					return "_DKAA";
				
				case 6:
					return "_ACAA";
				
				case 7:
					return "_ACAA";
				
				case 8:
					return "_ACRH";
				
				default:
			}
			return "_ACRH";
			break;
		
		case 82:
			switch (uParam0->f_19B)
			{
				case 0:
					return "_AHIT";
				
				case 1:
					return "_AHIT";
				
				case 2:
					return "_AEAA";
				
				case 3:
					return "_ADAA";
				
				case 4:
					return "_AFAA";
				
				case 5:
					return "_AFAA";
				
				case 6:
					return "_AEAA";
				
				case 7:
					return "_AHAA";
				
				case 8:
					return "_AEAA";
				
				default:
			}
			return "_AHIT";
			break;
		
		case 74:
			switch (uParam0->f_19B)
			{
				case 0:
					return "_AROL";
				
				case 1:
					return "_AROL";
				
				case 2:
					return "_AHAA";
				
				case 3:
					return "_AROL";
				
				case 4:
					return "_AGAA";
				
				case 5:
					return "_AROL";
				
				case 6:
					return "_AROL";
				
				case 7:
					return "_AROL";
				
				case 8:
					return "_AROL";
				
				default:
			}
			return "_AROL";
			break;
		
		case 65:
			switch (uParam0->f_19B)
			{
				case 0:
					return "_ABAA";
				
				case 1:
					return "_FUAA";
				
				case 2:
					return "_AFAA";
				
				case 3:
					return "_DBAA";
				
				case 4:
					return "_DLAA";
				
				case 5:
					return "_DKAA";
				
				case 6:
					if (uParam0->f_73)
					{
						return "_EEAA";
					}
					else
					{
						return "_EFAA";
					}
					break;
				
				case 7:
					return "_DBAA";
				
				case 8:
					return "_EFAA";
				
				default:
					return "_AROL";
			}
			break;
		
		case 66:
			switch (uParam0->f_19B)
			{
				case 0:
					return "_AEAA";
				
				case 1:
					return "_ACAA";
				
				case 2:
					return "_AJAA";
				
				case 3:
					return "_AHAA";
				
				case 4:
					return "_AHAA";
				
				case 5:
					return "_AIAA";
				
				case 6:
					if (uParam0->f_73)
					{
						return "_AJAA";
					}
					else
					{
						return "_AGAA";
					}
					break;
				
				case 7:
					return "_AUAA";
				
				case 8:
					return "_AHAA";
				
				default:
					return "_AROL";
			}
			break;
		
		case 2:
			switch (uParam0->f_19B)
			{
				case 0:
					return "_AAAA";
				
				case 1:
					return "_AAAA";
				
				case 2:
					return "_ADAA";
				
				case 3:
					return "_ABAA";
				
				case 4:
					return "_AAAA";
				
				case 5:
					return "_ABAA";
				
				case 6:
					if (uParam0->f_73)
					{
						return "_AHAA";
					}
					else
					{
						return "_ABAA";
					}
					break;
				
				case 7:
					return "_BUAA";
				
				case 8:
					return "_ADAA";
				
				default:
					return "_AAAA";
			}
			break;
	}
	return "_ACRH";
}

int func_335(var uParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x10374
{
	func_260(uParam0, 16, 0, 0);
	if (bParam3)
	{
		func_260(uParam0, 17, 0f, 1);
	}
	func_219(uParam0, iParam2, 0);
	return func_294(&(uParam0->f_F4), uParam0->f_90, sParam1, iParam4, 0, 0, 0);
}

void func_336(int iParam0, var uParam1, var uParam2, var uParam3, char[24] cParam4, bool bParam5)//Position - 0x103B1
{
	if (iParam0 == 0)
	{
		if (func_24(*uParam2, 2))
		{
			if (!bParam5)
			{
				*uParam1 = (*uParam1 - 2);
			}
			else
			{
				*uParam1 += 3;
			}
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 8)
	{
		if (func_24(*uParam2, 1073741824))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 1)
	{
		if (func_24(*uParam2, 4))
		{
			if (!func_24(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_22(uParam2, 4096);
			}
		}
		else if (func_24(*uParam2, 8))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 5)
	{
		if (func_24(*uParam2, 512))
		{
			if (!func_24(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_22(uParam2, 4096);
			}
		}
	}
	else if (iParam0 == 2)
	{
		if (func_24(*uParam2, 16))
		{
			if (!func_24(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_22(uParam2, 4096);
			}
		}
		else if (func_24(*uParam2, 32))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 3)
	{
		if (func_24(*uParam2, 64))
		{
			if (!func_24(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_22(uParam2, 4096);
			}
		}
		else if (func_24(*uParam2, 128))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 4)
	{
		if (func_24(*uParam2, 256))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 6)
	{
		if (func_24(*uParam2, 1024))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 7)
	{
		if (func_24(*uParam2, 2048))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 9)
	{
		if (func_24(*uParam2, 8192))
		{
			if (func_24(*uParam2, 2097152))
			{
				*uParam1 += 3;
				*uParam3 = { cParam4 };
			}
			else if (func_24(*uParam2, 4194304))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 10)
	{
		if (func_24(*uParam2, 16384))
		{
			if (func_24(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
			else
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 11)
	{
		if (func_24(*uParam2, 32768))
		{
			if (func_24(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_24(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 12)
	{
		if (func_24(*uParam2, 65536))
		{
			if (func_24(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 13)
	{
		if (func_24(*uParam2, 131072))
		{
			if (func_24(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_24(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 14)
	{
		if (func_24(*uParam2, 262144))
		{
			if (func_24(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_24(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 15)
	{
		if (func_24(*uParam2, 524288))
		{
			if (func_24(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_24(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 16)
	{
		if (func_24(*uParam2, 1048576))
		{
			if (func_24(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_24(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 21)
	{
		if (func_24(*uParam2, 8388608))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 22)
	{
		if (func_24(*uParam2, 16777216))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 23)
	{
		if (func_24(*uParam2, 33554432))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 17)
	{
		if (func_24(*uParam2, 67108864))
		{
			if (func_24(*uParam2, 67108864))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 18)
	{
		if (func_24(*uParam2, 134217728))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 20)
	{
		if (func_24(*uParam2, 536870912))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 19)
	{
		if (func_24(*uParam2, 268435456))
		{
			*uParam1++;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 25)
	{
		if (func_24(*uParam2, 32768))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
}

int func_337(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x109BB
{
	func_302(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_3DBF = 0;
	Global_3DC6 = 0;
	Global_3DC1 = 0;
	Global_4197 = 1;
	Global_4199 = 0;
	Global_419D = 0;
	StringCopy(&Global_41A4, sParam3, 24);
	Global_280001 = 0;
	return func_295(sParam2, iParam4, 0);
}

void func_338(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x10A0F
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = SYSTEM::TO_FLOAT(iVar2);
		iVar1 = SYSTEM::ROUND(SYSTEM::POW(2f, fVar0));
		if (!func_238(*uParam0, iVar1))
		{
			func_229(uParam0, iVar1);
			if (bParam5)
			{
				if (!bParam4)
				{
					StringIntConCat(sParam2, iVar2 + 1, 24);
					func_193(sParam2);
				}
				else
				{
					func_193(sParam2);
				}
			}
			else
			{
				if (bParam4)
				{
					StringConCat(sParam2, "_", 24);
				}
				StringIntConCat(sParam2, iVar2 + 1, 24);
			}
			if (bParam3)
			{
				if (iVar2 == (iParam1 - 1))
				{
					*uParam0 = 0;
				}
			}
			return;
		}
		iVar2++;
	}
}

int func_339(char* sParam0)//Position - 0x10AA6
{
	if (!unk_0xEAEFBBEC1AEA464B(sParam0))
	{
		if (func_173(sParam0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_340(var uParam0, var uParam1)//Position - 0x10AC8
{
	return ((*uParam1 == -1 && uParam0->f_19C == 0) && !func_138(uParam0, 9));
}

void func_341(var uParam0)//Position - 0x10AEF
{
	if (func_138(uParam0, 17))
	{
		if (!func_138(uParam0, 14))
		{
			if (!func_137(uParam0))
			{
				if (!func_51())
				{
					func_145(uParam0, 17, 1);
				}
			}
		}
	}
}

void func_342(var uParam0)//Position - 0x10B29
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar3;
	
	if (unk_0x724D816EA203A79E(Global_195FA.f_E1[3]))
	{
		uParam0->f_4[0] = Global_195FA.f_E1[3];
		uParam0->f_4[1] = Global_195FA.f_E1[4];
		uParam0->f_4[2] = Global_195FA.f_E1[5];
		unk_0x77815D3407C6700D(uParam0->f_4[0], true, 1);
		unk_0x77815D3407C6700D(uParam0->f_4[1], true, 1);
		unk_0x77815D3407C6700D(uParam0->f_4[2], true, 1);
	}
	else
	{
		uParam0->f_4[0] = unk_0x01B3635C3E8EDD81(26, uParam0->f_2D[0], -1283.45f, 299.3781f, 63.9305f, 151.9095f, 1, true);
		uParam0->f_4[1] = unk_0x01B3635C3E8EDD81(26, uParam0->f_2D[1], unk_0xA4455714F3DCE207(uParam0->f_4[0], 1f, 1f, 0f), 90.5877f, 1, true);
		uParam0->f_4[2] = unk_0x01B3635C3E8EDD81(26, uParam0->f_2D[2], unk_0xA4455714F3DCE207(uParam0->f_4[0], -1f, 1f, 0f), 163.5411f, 1, true);
	}
	if (unk_0x724D816EA203A79E(Global_195FA.f_E1[6]))
	{
		uParam0->f_4[3] = Global_195FA.f_E1[6];
		uParam0->f_4[4] = Global_195FA.f_E1[7];
		unk_0x77815D3407C6700D(uParam0->f_4[3], true, 1);
		unk_0x77815D3407C6700D(uParam0->f_4[4], true, 1);
	}
	else
	{
		uParam0->f_4[3] = unk_0x01B3635C3E8EDD81(26, uParam0->f_2D[3], -1282.83f, 306.2308f, 63.9354f, 163.5411f, 1, true);
		uParam0->f_4[4] = unk_0x01B3635C3E8EDD81(26, uParam0->f_2D[4], -1280.987f, 305.4652f, 63.9499f, 90.5877f, 1, true);
	}
	if (unk_0x724D816EA203A79E(Global_195FA.f_DE[0]))
	{
		uParam0->f_A = Global_195FA.f_DE[0];
		uParam0->f_B = Global_195FA.f_DE[1];
		unk_0x77815D3407C6700D(uParam0->f_A, true, 1);
		unk_0x77815D3407C6700D(uParam0->f_B, true, 1);
	}
	else
	{
		uParam0->f_A = unk_0x61C05BF08A1E0EFE(joaat("stretch"), -1290.724f, 284.893f, 63.7823f, 55.6864f, true, true, false);
		uParam0->f_B = unk_0x61C05BF08A1E0EFE(joaat("superd"), -1288.964f, 296.9287f, 63.8537f, 67.6169f, true, true, false);
	}
	vVar2 = { -1276.693f, 312.9434f, 64.491f };
	vVar3 = { -1281.349f, 315.1646f, 64.4805f };
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (!unk_0x1D403DFADBC2DE3C(uParam0->f_4[iVar1], 0))
		{
			unk_0x49D46EE47C9CCB66(uParam0->f_4[iVar1]);
			unk_0x02DAF06EA4F08219(&iVar0);
			unk_0xC5A6DFE2B8987B17(&iVar0);
			switch (iVar1)
			{
				case 0:
					unk_0x85DB484A637CEAB9(0, uParam0->f_4[1], 0);
					unk_0xE896C0AD02364F2A(0, "oddjobs@taxi@gyn@cc@intro", "f_impatient_a", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0xE896C0AD02364F2A(0, "amb@world_human_stand_impatient@female@no_sign@base", "base", 4f, -4f, 4000, 0, 0, 0, 0, 0);
					unk_0xE896C0AD02364F2A(0, "amb@world_human_stand_impatient@female@no_sign@exit", "exit", 4f, -4f, -1, 0, 0, 0, 0, 0);
					unk_0xDF14F570C0180463(0, vVar2, 1f, 20000, 1193033728, 0.5f);
					unk_0xDF14F570C0180463(0, vVar3, 1f, 20000, 1193033728, 0.5f);
					break;
				
				case 1:
					unk_0x85DB484A637CEAB9(0, uParam0->f_4[0], 0);
					unk_0xE896C0AD02364F2A(0, "oddjobs@taxi@gyn@cc@intro", "f_impatient_b", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0xE896C0AD02364F2A(0, "amb@world_human_stand_impatient@female@no_sign@base", "base", 4f, -4f, 6000, 0, 0, 0, 0, 0);
					unk_0xE896C0AD02364F2A(0, "amb@world_human_stand_impatient@female@no_sign@exit", "exit", 4f, -4f, -1, 0, 0, 0, 0, 0);
					unk_0xDF14F570C0180463(0, vVar2, 1f, 20000, 1193033728, 0.5f);
					unk_0xDF14F570C0180463(0, vVar3, 1f, 20000, 1193033728, 0.5f);
					break;
				
				case 2:
					unk_0x85DB484A637CEAB9(0, uParam0->f_4[0], 0);
					unk_0xE896C0AD02364F2A(0, "oddjobs@taxi@gyn@cc@intro", "f_impatient_c", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0xE896C0AD02364F2A(0, "amb@world_human_stand_impatient@female@no_sign@base", "base", 4f, -4f, 8500, 0, 0, 0, 0, 0);
					unk_0xE896C0AD02364F2A(0, "amb@world_human_stand_impatient@female@no_sign@exit", "exit", 4f, -4f, -1, 0, 0, 0, 0, 0);
					unk_0xDF14F570C0180463(0, vVar2, 1f, 20000, 1193033728, 0.5f);
					unk_0xDF14F570C0180463(0, vVar3, 1f, 20000, 1193033728, 0.5f);
					break;
				
				case 3:
					unk_0x85DB484A637CEAB9(0, uParam0->f_4[4], 0);
					unk_0x56F2E1B5599188FA(0, uParam0->f_4[4], 3, 2, 2);
					unk_0x1F4D9C2C225AC479(0, uParam0->f_4[4], 16, 0f, 0f, 0f, 0f, 0f);
					break;
				
				case 4:
					unk_0x85DB484A637CEAB9(0, uParam0->f_4[3], 0);
					unk_0x56F2E1B5599188FA(0, uParam0->f_4[3], 3, 2, 2);
					unk_0x1F4D9C2C225AC479(0, uParam0->f_4[3], 16, 0f, 0f, 0f, 0f, 0f);
					break;
			}
			unk_0x535008C596714F9E(iVar0);
			unk_0xA8E6405305C0D7DF(uParam0->f_4[iVar1], iVar0);
		}
		iVar1++;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (!unk_0x36CEFBE9B745A58D((*uParam0)[iVar1]) && (unk_0xF4FCC3C1048FF2AB((*uParam0)[iVar1], 242628503) != 1 || unk_0xF4FCC3C1048FF2AB((*uParam0)[iVar1], 242628503) == 7))
		{
			unk_0x2E35C4FA5F0ED22F((*uParam0)[iVar1], true);
			unk_0x49D46EE47C9CCB66((*uParam0)[iVar1]);
			unk_0x02DAF06EA4F08219(&iVar0);
			unk_0xC5A6DFE2B8987B17(&iVar0);
			func_343(uParam0, iVar1, unk_0x491B2241281A03B7(1000, 2000));
			unk_0x535008C596714F9E(iVar0);
			unk_0xA8E6405305C0D7DF((*uParam0)[iVar1], iVar0);
		}
		iVar1++;
	}
}

void func_343(var uParam0, int iParam1, int iParam2)//Position - 0x11081
{
	iParam2 = iParam2;
	switch (iParam1)
	{
		case 0:
			unk_0x85DB484A637CEAB9(0, (*uParam0)[1], 0);
			unk_0x56F2E1B5599188FA(0, (*uParam0)[1], 3, 2, 2);
			unk_0xE896C0AD02364F2A(0, "oddjobs@taxi@gyn@cc@intro", "m_impatient_a", 8f, -8f, -1, 0, 0, 0, 0, 0);
			break;
		
		case 1:
			unk_0x85DB484A637CEAB9(0, (*uParam0)[0], 0);
			unk_0x56F2E1B5599188FA(0, (*uParam0)[0], 3, 2, 2);
			unk_0xE896C0AD02364F2A(0, "oddjobs@taxi@gyn@cc@intro", "m_impatient_b", 8f, -8f, -1, 0, 0, 0, 0, 0);
			break;
		
		case 2:
			unk_0x85DB484A637CEAB9(0, (*uParam0)[0], 0);
			unk_0x56F2E1B5599188FA(0, (*uParam0)[0], 3, 2, 2);
			unk_0xE896C0AD02364F2A(0, "oddjobs@taxi@gyn@cc@intro", "m_impatient_c", 8f, -8f, -1, 0, 0, 0, 0, 0);
			break;
	}
}

int func_344()//Position - 0x1114E
{
	if (!unk_0xD6513D668481290A(Local_262.f_2D[0]))
	{
		func_254("TAXI_ASSETS_STREAMED - Loading TAXI_AMB_P0_AMANDA", &iLocal_339, 1000);
		return 0;
	}
	if (!unk_0xD6513D668481290A(Local_262.f_2D[1]))
	{
		func_254("TAXI_ASSETS_STREAMED - Loading TAXI_AMB_P1_BRENDA", &iLocal_339, 1000);
		return 0;
	}
	if (!unk_0xD6513D668481290A(Local_262.f_2D[2]))
	{
		func_254("TAXI_ASSETS_STREAMED - Loading TAXI_AMB_P2_CANDY", &iLocal_339, 1000);
		return 0;
	}
	if (!unk_0xD6513D668481290A(Local_262.f_2D[3]))
	{
		func_254("TAXI_ASSETS_STREAMED - Loading TAXI_AMB_P4_GUEST1", &iLocal_339, 1000);
		return 0;
	}
	if (!unk_0xD6513D668481290A(Local_262.f_2D[4]))
	{
		func_254("TAXI_ASSETS_STREAMED - Loading TAXI_AMB_P6_GUEST3", &iLocal_339, 1000);
		return 0;
	}
	if (!unk_0xD6513D668481290A(joaat("stretch")))
	{
		func_254("TAXI_ASSETS_STREAMED - Loading STRETCH", &iLocal_339, 1000);
		return 0;
	}
	if (!unk_0xD6513D668481290A(joaat("superd")))
	{
		func_254("TAXI_ASSETS_STREAMED - Loading SUPERD", &iLocal_339, 1000);
		return 0;
	}
	if (!unk_0xF9E082857622D91E("oddjobs@taxi@gyn@cc@intro"))
	{
		func_254("TAXI_ASSETS_STREAMED - Anim Dicts oddjobs@taxi@gyn@cc@intro Loading...", &iLocal_339, 1000);
		return 0;
	}
	if (!unk_0xF9E082857622D91E("amb@world_human_stand_impatient@female@no_sign@exit"))
	{
		func_254("TAXI_ASSETS_STREAMED - Anim Dicts amb@world_human_stand_impatient@female@no_sign@exit Loading...", &iLocal_339, 1000);
		return 0;
	}
	if (!unk_0xF9E082857622D91E("amb@world_human_stand_impatient@female@no_sign@base"))
	{
		func_254("TAXI_ASSETS_STREAMED - Anim Dicts amb@world_human_stand_impatient@female@no_sign@exit Loading...", &iLocal_339, 1000);
		return 0;
	}
	return 1;
}

bool func_345(var uParam0)//Position - 0x11299
{
	return uParam0->f_75;
}

int func_346(var uParam0, var uParam1, var uParam2)//Position - 0x112A5
{
	var uVar0;
	int iVar1;
	
	if (!uParam0->f_6D)
	{
		if ((func_352((*uParam1)[0], uParam0->f_4, uParam2, &uVar0, 0, 1, 0, 1, 1) || func_352((*uParam1)[1], uParam0->f_4, uParam2, &uVar0, 0, 1, 0, 1, 1)) || func_352((*uParam1)[2], uParam0->f_4, uParam2, &uVar0, 0, 1, 0, 1, 1))
		{
			func_350(uParam0, &uVar0, uParam2);
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
			{
				if (func_352(uParam1->f_4[iVar1], uParam0->f_4, uParam2, &uVar0, 0, 1, 0, 1, 1))
				{
					func_293(uParam0, "Taxi attacked the entourage", 9);
					return 1;
				}
			}
			iVar1++;
		}
		func_347(uParam0);
	}
	return 0;
}

void func_347(var uParam0)//Position - 0x11361
{
	var uVar0;
	
	if (uParam0->f_19A < 7 && !uParam0->f_8A)
	{
		if (((uParam0->f_19B == 9 && func_349()) && !func_146(uParam0)) || ((uParam0->f_19B != 9 && func_224(uParam0, 1)) && !func_146(uParam0)))
		{
			uVar0 = func_348(uParam0->f_4);
			unk_0x91BCA7FA73FFCDF2(&uVar0);
			uParam0->f_4 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
			unk_0x77815D3407C6700D(uParam0->f_4, true, 0);
			func_156(uParam0);
			func_149(uParam0, 0);
		}
	}
}

var func_348(var uParam0)//Position - 0x113F7
{
	return uParam0;
}

int func_349()//Position - 0x11401
{
	int iVar0;
	
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
			if (unk_0xE59B7F5A03335350(iVar0, 0))
			{
				if (unk_0x3187EF5798B5D209(iVar0, -1, 0) == unk_0xBC25C936A095B5BA())
				{
					if (unk_0x5E87CB0495C97732(iVar0, func_21()))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_350(var uParam0, var uParam1, var uParam2)//Position - 0x11458
{
	switch (*uParam1)
	{
		case 1:
			if (func_351(uParam0, 0, 1))
			{
				func_293(uParam0, "Aggro Aiming", 5);
			}
			break;
		
		case 4:
			if (func_351(uParam0, 0, 4))
			{
				func_293(uParam0, "Aggro Shot Near", 8);
			}
			break;
		
		case 8:
			if (func_351(uParam0, 0, 8))
			{
				func_293(uParam0, "Aggro Heard Shot", 8);
			}
			break;
		
		case 16:
			if (func_351(uParam0, 1, 1))
			{
				func_293(uParam0, "Aggro Attacked", 14);
			}
			break;
		
		case 32:
			if (func_351(uParam0, 0, 1))
			{
				func_293(uParam0, "Aggro Minor Attacked", 8);
			}
			break;
		
		case 2:
			if (!func_24(*uParam2, 2) && func_120(uParam0))
			{
				func_293(uParam0, "Aggro Went Wanted", 5);
			}
			break;
	}
}

int func_351(var uParam0, int iParam1, int iParam2)//Position - 0x11533
{
	if (((uParam0->f_6B >= 2 && uParam0->f_19A < 29) || uParam0->f_19A <= 5) || (iParam1 && !uParam0->f_72))
	{
		return 1;
	}
	else if (!unk_0x1D403DFADBC2DE3C(uParam0->f_3, 0))
	{
		if (!unk_0x41A5D6415E2CC10E(uParam0->f_3))
		{
			if (iParam2 == 4)
			{
				func_191(uParam0, 66, 1, 0, 1);
			}
			else
			{
				func_191(uParam0, 65, 1, 0, 1);
			}
		}
	}
	return 0;
}

int func_352(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x115B0
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0xBC25C936A095B5BA();
	if (!unk_0x1D403DFADBC2DE3C(iVar0, 0) && !unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		if (!func_24(*uParam2, 1))
		{
			if (func_358(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!func_24(*uParam2, 2))
		{
			if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!func_24(*uParam2, 4))
		{
			if (func_356(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!func_24(*uParam2, 8))
		{
			if (func_355(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_24(*uParam2, 128);
		if (bParam4)
		{
			if (func_353(iParam0, iParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!func_24(*uParam2, 16))
		{
			if (func_353(iParam0, iParam1, 0, bParam6, bVar1, bParam8))
			{
				*uParam3 = 16;
				return 1;
			}
		}
	}
	else if (unk_0x724D816EA203A79E(iParam0))
	{
		if (iParam7 && unk_0xD9C1758D86688CEA(iParam0, iVar0, 1))
		{
			*uParam3 = 16;
			return 1;
		}
	}
	return 0;
}

int func_353(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x116DA
{
	int iVar0;
	int iVar1;
	
	if (bParam3)
	{
		if (!bLocal_73)
		{
			iLocal_74 = unk_0x8D66276473ABD7CC(iParam0);
			bLocal_73 = true;
		}
		iLocal_75 = unk_0x8D66276473ABD7CC(iParam0);
		iLocal_76 = (iLocal_74 - iLocal_75);
		iVar0 = unk_0x3E12B546F3F2597A();
		if (!unk_0x1D403DFADBC2DE3C(iVar0, 0))
		{
			if (unk_0xD9C1758D86688CEA(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_76) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_73)
		{
			if (unk_0xD9C1758D86688CEA(iParam0, unk_0xBC25C936A095B5BA(), 1))
			{
				if (IntToFloat(iLocal_76) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xD9C1758D86688CEA(iParam0, unk_0xBC25C936A095B5BA(), 1))
	{
		return 1;
	}
	if (!bParam3)
	{
		iVar1 = unk_0x3E12B546F3F2597A();
		if (!unk_0x1D403DFADBC2DE3C(iVar1, 0))
		{
			if (unk_0xD9C1758D86688CEA(iParam0, iVar1, 1))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
		{
			if (unk_0xA4813477CC5DD00F(iParam0))
			{
				if (unk_0x33213E99DDEE4631(iParam0) == unk_0xBC25C936A095B5BA())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (unk_0xABB2AFD7539464EA(unk_0xBC25C936A095B5BA()))
		{
			if (unk_0x4DBCE270B354E123(iParam0, unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), 10f, 10f, 10f, false, true, 0))
			{
				if (unk_0x231DB1D0F4218A1B(unk_0xB5CEFD608600A09F()))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0xADA34C38F1319208(unk_0xBC25C936A095B5BA()))
	{
		if (unk_0xD1071273B19F81DF(iParam0))
		{
			return 1;
		}
	}
	if (func_354(unk_0xBC25C936A095B5BA(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0x2CDE18D6C89522AD(iParam0) && func_9(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (unk_0x5237AF95232D78C5(iParam0, 0))
		{
			if (unk_0xE921F8171F0733B3(unk_0xBC25C936A095B5BA(), unk_0x9FE9D386222EEE47(iParam0, 0)))
			{
				return 1;
			}
		}
		else if (unk_0xE921F8171F0733B3(unk_0xBC25C936A095B5BA(), iParam0))
		{
			return 1;
		}
		if (!unk_0x1D403DFADBC2DE3C(iParam1, 0))
		{
			if (unk_0xD9C1758D86688CEA(iParam1, unk_0xBC25C936A095B5BA(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_354(int iParam0, int iParam1)//Position - 0x118A2
{
	int iVar0;
	
	unk_0x9CDD10270A1ACF6F(iParam0, &iVar0, 1);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (unk_0x32E373675659FDB0(iParam0))
		{
			if (SYSTEM::VDIST(unk_0x541C2AEF053615BC(iParam0, true), unk_0x541C2AEF053615BC(iParam1, true)) < 2.5f)
			{
				if (unk_0xC5B8A5F778E321DD(iParam0, iParam1, 180f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_355(int iParam0, int iParam1, var uParam2)//Position - 0x118F7
{
	if (unk_0x72C9157015C2151B(iParam0, 4))
	{
		if (unk_0x32E373675659FDB0(iParam0) && !unk_0x75F706B6889D7D86(iParam0))
		{
			if (unk_0x4DBCE270B354E123(iParam1, unk_0x541C2AEF053615BC(iParam0, true), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), false, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_356(int iParam0, int iParam1, var uParam2, bool bParam3)//Position - 0x11945
{
	vector3 vVar0;
	int iVar1;
	
	iVar1 = 0;
	if (!unk_0x1D403DFADBC2DE3C(iParam1, 0))
	{
		vVar0 = { unk_0x541C2AEF053615BC(iParam1, true) };
	}
	if (unk_0x04880508C862E589(vVar0, 4f, 1))
	{
		return 1;
	}
	if (unk_0xB7CB92A84A7518CD(vVar0, SYSTEM::TO_FLOAT(uParam2->f_6), 1, 1))
	{
		return 1;
	}
	if (unk_0x72C9157015C2151B(iParam0, 2))
	{
		if (unk_0x32E373675659FDB0(iParam0))
		{
			if (unk_0x4DBCE270B354E123(iParam1, unk_0x541C2AEF053615BC(iParam0, true), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, true, 0))
			{
				if (unk_0xC5B8A5F778E321DD(unk_0x399F7937FFE4DEBF(iParam1), iParam0, 120f) && unk_0x4833C1F1F1364989(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (unk_0x5237AF95232D78C5(unk_0x399F7937FFE4DEBF(iParam1), 0))
			{
				iVar1 = unk_0x9FE9D386222EEE47(unk_0x399F7937FFE4DEBF(iParam1), 0);
			}
			if (unk_0x042228744678C7D4(iParam0) || func_357(iVar1))
			{
				if (unk_0x4DBCE270B354E123(iParam1, unk_0x541C2AEF053615BC(iParam0, true), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, true, 0))
				{
					if (unk_0xC5B8A5F778E321DD(unk_0x399F7937FFE4DEBF(iParam1), iParam0, 120f) && unk_0x4833C1F1F1364989(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (unk_0x876474582C5DECDE((vVar0.x - IntToFloat(uParam2->f_6)), (vVar0.y - IntToFloat(uParam2->f_6)), (vVar0.z - IntToFloat(uParam2->f_6)), (vVar0.x + IntToFloat(uParam2->f_6)), (vVar0.y + IntToFloat(uParam2->f_6)), (vVar0.z + IntToFloat(uParam2->f_6)), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_357(int iParam0)//Position - 0x11ABE
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		if (unk_0xE59B7F5A03335350(iParam0, 0))
		{
			if (unk_0x3187EF5798B5D209(iParam0, -1, 0) != 0)
			{
				if (unk_0x9CDD10270A1ACF6F(unk_0xBC25C936A095B5BA(), &iVar0, 1))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_10(unk_0xBC25C936A095B5BA(), iParam0, 1) < 40f)
						{
							if (unk_0x1CD240A97A49C198(unk_0xB5CEFD608600A09F(), &iVar1))
							{
								if ((unk_0xD27AC0E9B78CFDD7(iVar1) && unk_0x233ED4CD1F1A42C1(iVar1) == iParam0) || (unk_0x386592AF38881675(iVar1) && unk_0x399F7937FFE4DEBF(iVar1) == unk_0x3187EF5798B5D209(iParam0, -1, 0)))
								{
									if ((unk_0x7214F4879DF8A314(unk_0xBC25C936A095B5BA()) && unk_0x8FCEEB789599BD9B(0, 24)) || (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0) && unk_0x8FCEEB789599BD9B(0, 69)))
									{
										return 1;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_358(int iParam0, var uParam1)//Position - 0x11B8C
{
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		if (unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), 6))
		{
			if (unk_0xDF25D3BB3759E7D1(unk_0xB5CEFD608600A09F(), iParam0) || unk_0x425BEBAA53B39EBF(unk_0xB5CEFD608600A09F(), iParam0))
			{
				if (unk_0xC5B8A5F778E321DD(iParam0, unk_0xBC25C936A095B5BA(), 90f))
				{
					if (func_9(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = unk_0x105601648511CC64();
						}
						else if ((unk_0x105601648511CC64() - uParam1->f_1) > uParam1->f_3)
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

void func_359(var uParam0, var uParam1, bool bParam2)//Position - 0x11C11
{
	if (!func_24(uParam0->f_37, 1))
	{
		switch (*uParam1)
		{
			case 0:
				if (!unk_0xF1734B55490E9045(&(uParam0->f_7C)) && func_51())
				{
					*uParam1++;
				}
				break;
			
			case 1:
				if (!func_51())
				{
					StringCopy(&(uParam0->f_7C), func_135(), 24);
					uParam0->f_38 = (uParam0->f_38 + uParam0->f_39);
					if (uParam0->f_38 < 0)
					{
						uParam0->f_38 = 0;
					}
					uParam0->f_39 = 0;
					*uParam1 = 0;
					if (bParam2)
					{
					}
				}
				break;
			}
	}
}

void func_360(var uParam0)//Position - 0x11C97
{
	int iVar0;
	
	if (uParam0->f_19A >= 5)
	{
		if (unk_0x724D816EA203A79E(uParam0->f_4))
		{
			if (Local_165 > 0 && !func_238(Local_165.f_1[4 /*4*/], 4))
			{
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 <= (Local_165 - 1))
				{
					if (func_238(Local_165.f_1[iVar0 /*4*/], 2))
					{
						Stack.Push(uParam0);
						Call_Loc(Local_165.f_1[iVar0 /*4*/].f_2);
						if (StackVal)
						{
							if (!func_238(Local_165.f_1[iVar0 /*4*/], 4))
							{
								func_229(&(Local_165.f_1[iVar0 /*4*/]), 4);
								Local_165.f_1[iVar0 /*4*/].f_1 = unk_0x105601648511CC64();
							}
						}
						else
						{
							func_23(&(Local_165.f_1[iVar0 /*4*/]), 12);
						}
						if (func_238(Local_165.f_1[iVar0 /*4*/], 4) && !func_238(Local_165.f_1[iVar0 /*4*/], 8))
						{
							Stack.Push(uParam0);
							Stack.Push(Local_165.f_1[iVar0 /*4*/].f_1);
							Call_Loc(Local_165.f_1[iVar0 /*4*/].f_3);
							if (StackVal)
							{
								func_229(&(Local_165.f_1[iVar0 /*4*/]), 8);
							}
						}
					}
					iVar0++;
				}
			}
		}
		else
		{
			func_293(uParam0, "Taxi Garbage Collected", 18);
		}
	}
}

int func_361(var uParam0, var uParam1)//Position - 0x11DAA
{
	var uVar0;
	
	if (!func_138(uParam0, 27))
	{
		func_185(uParam0, 27);
		uParam1->f_3 = 250;
		uParam1->f_2 = 40f;
	}
	if (!uParam0->f_6D && func_383(uParam0, 27) > 5f)
	{
		if (func_352(uParam0->f_3, uParam0->f_4, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			func_260(uParam0, 27, 0, 0);
			func_260(uParam0, 10, 0, 0);
			func_350(uParam0, &uVar0, uParam1);
		}
		func_347(uParam0);
	}
	if (uParam0->f_19A >= 3 && uParam0->f_19A <= 5)
	{
		func_362(uParam0);
	}
	if ((((!unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F()) && (unk_0xEF0E25DA0CB6E8FF(*uParam0) && !unk_0xEDEA6C8F42EE05F6(*uParam0))) && (unk_0xEF0E25DA0CB6E8FF(uParam0->f_1) && !unk_0xEDEA6C8F42EE05F6(uParam0->f_1))) && !unk_0x4B8E3E5901E59EB8()) && !func_51())
	{
		if (func_383(uParam0, 26) > 10f)
		{
			func_145(uParam0, 26, 0);
			unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
		}
	}
	else if (func_138(uParam0, 26))
	{
		func_145(uParam0, 26, 0);
	}
	return 0;
}

void func_362(var uParam0)//Position - 0x11ED4
{
	if (!func_382(uParam0->f_1AD))
	{
		uParam0->f_1AD = func_381();
		func_372(&(uParam0->f_1AD), 0, 0, unk_0x491B2241281A03B7(4, 7), 0, 0, 0);
	}
	else if (func_363(uParam0->f_1AD))
	{
		func_293(uParam0, "Player took too long to make pickup", 9);
	}
}

bool func_363(int iParam0)//Position - 0x11F21
{
	return func_364(func_381(), iParam0);
}

int func_364(int iParam0, int iParam1)//Position - 0x11F33
{
	int iVar0;
	int iVar1;
	
	if (!func_382(iParam1) || !func_382(iParam0))
	{
		return 1;
	}
	iVar0 = func_370(iParam0);
	iVar1 = func_370(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_369(iParam0);
	iVar1 = func_369(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_368(iParam0);
	iVar1 = func_368(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_367(iParam0);
	iVar1 = func_367(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_366(iParam0);
	iVar1 = func_366(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_365(iParam0);
	iVar1 = func_365(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_365(int iParam0)//Position - 0x1203F
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_366(int iParam0)//Position - 0x12052
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_367(int iParam0)//Position - 0x12065
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_368(int iParam0)//Position - 0x12078
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_369(int iParam0)//Position - 0x1208A
{
	return iParam0 & 15;
}

var func_370(int iParam0)//Position - 0x12097
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_371(unk_0xFA30DFD0084E92FE(iParam0, 31), -1, 1)) + 2011;
}

int func_371(bool bParam0, int iParam1, int iParam2)//Position - 0x120BC
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_372(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x120D3
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_370(*uParam0);
	iVar1 = func_369(*uParam0);
	iVar2 = func_368(*uParam0);
	iVar3 = func_367(*uParam0);
	iVar4 = func_366(*uParam0);
	iVar5 = func_365(*uParam0);
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
	iVar6 = func_380(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_380(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_373(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_373(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x12255
{
	func_379(uParam0, iParam1);
	func_378(uParam0, iParam2);
	func_377(uParam0, iParam3);
	func_376(uParam0, iParam5);
	func_375(uParam0, iParam4);
	func_374(uParam0, iParam6);
}

void func_374(var uParam0, int iParam1)//Position - 0x1228D
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

void func_375(var uParam0, int iParam1)//Position - 0x12313
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_369(*uParam0);
	iVar1 = func_370(*uParam0);
	if (iParam1 < 1 || iParam1 > func_380(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_376(var uParam0, int iParam1)//Position - 0x12364
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_377(var uParam0, int iParam1)//Position - 0x12397
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_378(var uParam0, int iParam1)//Position - 0x123D1
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_379(var uParam0, int iParam1)//Position - 0x1240C
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_380(int iParam0, int iParam1)//Position - 0x12448
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

int func_381()//Position - 0x124EA
{
	var uVar0;
	
	func_379(&uVar0, unk_0xF40D00CD7B81C0A8());
	func_378(&uVar0, unk_0x7E09057438B9D216());
	func_377(&uVar0, unk_0x6E06C0DB9B43570D());
	func_375(&uVar0, unk_0xBE14F159908E4EE5());
	func_376(&uVar0, unk_0xDD6A91E47ED4D0CF());
	func_374(&uVar0, unk_0x4EEB3860BFC44B78());
	return uVar0;
}

int func_382(int iParam0)//Position - 0x12530
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
	iVar0 = func_365(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_366(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_367(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_370(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_369(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_368(iParam0);
	if (iVar5 < 1 || iVar5 > func_380(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

float func_383(var uParam0, int iParam1)//Position - 0x1260C
{
	if (!func_16(&(uParam0->f_92[iParam1 /*3*/])))
	{
		func_186(&(uParam0->f_92[iParam1 /*3*/]));
	}
	return func_100(&(uParam0->f_92[iParam1 /*3*/]));
}

void func_384()//Position - 0x1263C
{
	func_385(&Local_260);
	func_402();
}

void func_385(var uParam0)//Position - 0x1264F
{
	func_11(0, uParam0, 1);
	if (uParam0->f_19B != 9)
	{
		func_406(2);
	}
}

int func_386(var uParam0, bool bParam1)//Position - 0x1266E
{
	if (bParam1)
	{
		return 1;
	}
	if ((((!func_51() && func_383(uParam0, 3) > 1f) || uParam0->f_19F == 18) || uParam0->f_19F == 14) || uParam0->f_19F == 15)
	{
		if (!unk_0x1D403DFADBC2DE3C(uParam0->f_3, 0))
		{
			if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
			{
				if (unk_0x62F3A07C43FFB568(uParam0->f_3, uParam0->f_4, 0))
				{
					if (func_63(uParam0) == 0 || func_238(uParam0->f_55, 32))
					{
						if (!unk_0xB66CFDE6B830965A(uParam0->f_4))
						{
							func_304(uParam0, 4160, 0);
						}
						else
						{
							func_304(uParam0, 0, 0);
						}
						return 1;
					}
					else
					{
						func_304(uParam0, 0, 0);
						return 1;
					}
				}
				else
				{
					func_304(uParam0, 0, 0);
					return 1;
				}
			}
			else
			{
				func_304(uParam0, 0, 0);
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else if ((unk_0x105601648511CC64() % 1000) < 50)
	{
	}
	return 0;
}

void func_387(var uParam0)//Position - 0x1276D
{
	if (unk_0x2DA8CA50A72528FB(uParam0->f_8))
	{
		unk_0x07B8ECB35A4ED3AC(&(uParam0->f_8));
	}
	if (unk_0x2DA8CA50A72528FB(uParam0->f_9))
	{
		unk_0x07B8ECB35A4ED3AC(&(uParam0->f_9));
	}
	if (unk_0x2DA8CA50A72528FB(uParam0->f_A))
	{
		unk_0x07B8ECB35A4ED3AC(&(uParam0->f_A));
	}
}

int func_388(var uParam0)//Position - 0x127AE
{
	if (uParam0->f_6D && uParam0->f_19A < 29)
	{
		return 1;
	}
	return 0;
}

void func_389()//Position - 0x127CF
{
	func_391(&Local_260, 7);
	Local_260.f_19A = 0;
	Local_260.f_17 = { -1248.422f, 252.6221f, 63.0799f };
	Local_260.f_21 = 34.4f;
	Local_260.f_1A = { -231.2259f, -889.5931f, 28.8903f };
	Local_260.f_22 = 251.9658f;
	Local_262.f_29[0] = joaat("a_m_y_business_02");
	Local_262.f_29[1] = joaat("a_m_y_business_02");
	Local_262.f_29[2] = joaat("a_m_y_business_02");
	Local_262.f_2D[0] = joaat("a_f_y_beach_01");
	Local_262.f_2D[1] = joaat("a_f_y_beach_01");
	Local_262.f_2D[2] = joaat("a_f_y_beach_01");
	Local_262.f_2D[3] = joaat("a_f_y_beach_01");
	Local_262.f_2D[4] = joaat("a_m_y_business_01");
	func_390(&Local_260, 3, 6);
}

void func_390(var uParam0, int iParam1, int iParam2)//Position - 0x12897
{
	uParam0->f_3A = iParam1;
	uParam0->f_3B = iParam2;
}

void func_391(var uParam0, int iParam1)//Position - 0x128AB
{
	func_401(1);
	func_159();
	func_6(&(uParam0->f_F4));
	func_400(uParam0);
	uParam0->f_19B = iParam1;
	if (!func_24(Global_19B04.f_4A7C, 4))
	{
		func_228(&(Global_19B04.f_4A7C), 4);
	}
	func_395(uParam0);
	func_393(uParam0);
	unk_0xC8FD3EBBB90E8D7F(unk_0xBC25C936A095B5BA(), 32, false);
	uParam0->f_66 = (func_392(uParam0->f_19B) % uParam0->f_65);
	uParam0->f_50 = 0;
	uParam0->f_1AC = func_2();
	unk_0x900CF084251DED26("TAXI", 2);
}

int func_392(int iParam0)//Position - 0x1292D
{
	return Global_19B04.f_4A7C.f_27[iParam0];
}

void func_393(var uParam0)//Position - 0x12942
{
	switch (func_63(uParam0))
	{
		case 0:
			func_394(uParam0, "EXC", "Txm2", "Txm2aud");
			uParam0->f_65 = 2;
			break;
		
		case 1:
			func_394(uParam0, "TIE", "Txm1", "txm1aud");
			uParam0->f_65 = 1;
			break;
		
		case 2:
			func_394(uParam0, "DED", "Txm3", "Txm3aud");
			uParam0->f_65 = 1;
			break;
		
		case 3:
			func_394(uParam0, "GYB", "Txm12", "Txm12au");
			uParam0->f_65 = 2;
			break;
		
		case 4:
			func_394(uParam0, "TTB", "Txm6", "Txm6aud");
			uParam0->f_65 = 2;
			break;
		
		case 5:
			func_394(uParam0, "CUI", "Txm8", "Txm8aud");
			uParam0->f_65 = 1;
			break;
		
		case 6:
			func_394(uParam0, "GYN", "Txm9", "Txm9aud");
			uParam0->f_65 = 1;
			break;
		
		case 7:
			func_394(uParam0, "TCC", "Txm10", "Txm10au");
			uParam0->f_65 = 2;
			break;
		
		case 8:
			func_394(uParam0, "TFC", "Txm4", "Txm4aud");
			uParam0->f_65 = 1;
			break;
		
		case 9:
			func_394(uParam0, "PRO", "txmP", "TxmPaud");
			uParam0->f_65 = 1;
			break;
	}
}

void func_394(var uParam0, char* sParam1, char* sParam2, char* sParam3)//Position - 0x12A95
{
	uParam0->f_7A = sParam1;
	uParam0->f_8F = sParam2;
	uParam0->f_90 = sParam3;
}

void func_395(var uParam0)//Position - 0x12AAF
{
	int iVar0;
	
	switch (uParam0->f_19B)
	{
		case 0:
			func_399(uParam0, 3);
			func_398(uParam0, 14);
			break;
		
		case 1:
			func_399(uParam0, 14);
			func_398(uParam0, 8);
			break;
		
		case 2:
			func_399(uParam0, 8);
			func_398(uParam0, 7);
			break;
		
		case 3:
			func_399(uParam0, 15);
			func_398(uParam0, 6);
			break;
		
		case 4:
			func_399(uParam0, 0);
			func_398(uParam0, 3);
			break;
		
		case 5:
			func_399(uParam0, 6);
			func_398(uParam0, 7);
			break;
		
		case 6:
			func_399(uParam0, 8);
			func_398(uParam0, 15);
			break;
		
		case 7:
			func_399(uParam0, 8);
			func_398(uParam0, 14);
			break;
		
		case 8:
			func_399(uParam0, 7);
			func_398(uParam0, 15);
			break;
		
		case 9:
			func_399(uParam0, unk_0x491B2241281A03B7(0, 17));
			iVar0 = func_397((uParam0->f_1A2.f_2 + unk_0x491B2241281A03B7(1, 17)), 0, 16);
			func_398(uParam0, iVar0);
			func_396(uParam0);
			uParam0->f_1A2.f_7 = 1;
			uParam0->f_1A2.f_8 = 1;
			break;
	}
}

void func_396(var uParam0)//Position - 0x12BE6
{
	switch (uParam0->f_1A2.f_2)
	{
		case 2:
		case 8:
			uParam0->f_1A2.f_3 = 1;
			break;
		
		case 0:
		case 3:
		case 5:
		case 9:
		case 15:
			uParam0->f_1A2.f_3 = 2;
			break;
		
		case 4:
		case 10:
			uParam0->f_1A2.f_3 = 3;
			break;
		
		case 1:
		case 6:
		case 13:
			uParam0->f_1A2.f_3 = 4;
			break;
		
		case 11:
			uParam0->f_1A2.f_3 = 5;
			break;
		
		case 12:
		case 14:
			uParam0->f_1A2.f_3 = 6;
			break;
		
		case 7:
			uParam0->f_1A2.f_3 = 7;
			break;
	}
}

int func_397(int iParam0, int iParam1, int iParam2)//Position - 0x12CA7
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam1 > iParam2)
	{
		return -1;
	}
	if (iParam0 >= iParam1 && iParam0 <= iParam2)
	{
		return iParam0;
	}
	iVar0 = 0;
	if (iParam0 < iParam1)
	{
		if (iParam0 < 0)
		{
			iVar0 = -iParam0;
		}
	}
	else if (iParam1 < 0)
	{
		iVar0 = -iParam1;
	}
	iParam0 = (iParam0 + iVar0);
	iParam1 = (iParam1 + iVar0);
	iParam2 = (iParam2 + iVar0);
	iVar1 = (iParam2 - iParam1);
	if (iParam0 > iParam2)
	{
		iVar2 = (iParam0 - iParam2);
		iVar3 = (iVar2 % iVar1);
		iParam0 = (iParam1 + iVar3);
	}
	else
	{
		iVar2 = (iParam1 - iParam0);
		iVar3 = (iVar2 % iVar1);
		iParam0 = (iParam2 - iVar3);
	}
	return (iParam0 - iVar0);
}

void func_398(var uParam0, int iParam1)//Position - 0x12D49
{
	uParam0->f_1A2.f_1 = iParam1;
}

void func_399(var uParam0, int iParam1)//Position - 0x12D5A
{
	uParam0->f_1A2.f_2 = iParam1;
}

void func_400(var uParam0)//Position - 0x12D6B
{
	uParam0->f_2 = unk_0xBC25C936A095B5BA();
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_E = { func_43() };
	uParam0->f_11 = { func_43() };
	uParam0->f_23 = 0f;
	uParam0->f_4C = 0;
	uParam0->f_31 = 0;
	uParam0->f_6D = 0;
	uParam0->f_24 = 0f;
	uParam0->f_19A = 2;
	uParam0->f_7B = "TRS_FINDING_LOCATION";
	func_145(uParam0, 32, 0);
}

void func_401(bool bParam0)//Position - 0x12DC9
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

void func_402()//Position - 0x12DF5
{
	func_405(&Local_262);
	func_187();
	func_404();
	func_403();
	unk_0x95E4B6F3ED223F5A();
}

void func_403()//Position - 0x12E14
{
	unk_0x8E5F062750135AD1();
	unk_0x4EA570997E107F35("oddjobs@taxi@gyn@cc@hotbox");
}

void func_404()//Position - 0x12E28
{
	unk_0x2CA123B0622F495C(Local_262.f_29[0]);
	unk_0x2CA123B0622F495C(Local_262.f_29[1]);
	unk_0x2CA123B0622F495C(Local_262.f_29[2]);
}

void func_405(var uParam0)//Position - 0x12E54
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x2F1B39E315395385(uParam0->f_49[iVar0]))
		{
			unk_0x0DDA5155C0628144(uParam0->f_49[iVar0], 0);
		}
		iVar0++;
	}
}

void func_406(int iParam0)//Position - 0x12E8A
{
	Global_195FA.f_16 = iParam0;
}

