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
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	bool bLocal_86 = 0;
	float fLocal_87 = 0f;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
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
	vector3 vLocal_230[1] = {{ 0f, 0f, 0f } };
	int iLocal_231 = 0;
	int iLocal_232 = 0;
	int iLocal_233 = 0;
	int iLocal_234 = 0;
	int iLocal_235[3] = { 0, 0, 0 };
	int iLocal_236 = 0;
	int iLocal_237 = 0;
	struct<418> Local_238 = { 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_239 = -1;
	var uLocal_240 = -1;
	var uLocal_241 = -1;
	var uLocal_242 = -1;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	struct<32> Local_251 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_252 = 0;
	int iLocal_253 = 0;
	int iLocal_254 = 0;
	int iLocal_255 = 0;
	int iLocal_256 = 0;
	int iLocal_257 = 0;
	int iLocal_258 = 0;
	int iLocal_259 = 0;
	int iLocal_260 = 0;
	int iLocal_261 = 0;
	var uLocal_262 = 0;
	int iLocal_263 = 0;
	int iLocal_264 = 0;
	var uLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	bool bLocal_268 = 0;
	int iLocal_269 = 0;
	int iLocal_270 = 0;
	int iLocal_271 = 0;
	int iLocal_272 = 0;
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	bool bLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	int iLocal_278 = 0;
	int iLocal_279 = 0;
	int iLocal_280 = 0;
	int iLocal_281 = 0;
	int iLocal_282 = 0;
	vector3 vLocal_283 = { 0f, 0f, 0f };
	vector3 vLocal_284 = { 0f, 0f, 0f };
	vector3 vLocal_285 = { 0f, 0f, 0f };
	vector3 vLocal_286 = { 0f, 0f, 0f };
	vector3 vLocal_287 = { 0f, 0f, 0f };
	vector3 vLocal_288 = { 0f, 0f, 0f };
	vector3 vLocal_289 = { 0f, 0f, 0f };
	vector3 vLocal_290 = { 0f, 0f, 0f };
	vector3 vLocal_291 = { 0f, 0f, 0f };
	vector3 vLocal_292 = { 0f, 0f, 0f };
	vector3 vLocal_293 = { 0f, 0f, 0f };
	vector3 vLocal_294 = { 0f, 0f, 0f };
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	vector3 vLocal_298 = { 0f, 0f, 0f };
	vector3 vLocal_299 = { 0f, 0f, 0f };
	vector3 vLocal_300 = { 0f, 0f, 0f };
	vector3 vLocal_301 = { 0f, 0f, 0f };
	vector3 vLocal_302 = { 0f, 0f, 0f };
	float fLocal_303 = 0f;
	float fLocal_304 = 0f;
	float fLocal_305 = 0f;
	float fLocal_306 = 0f;
	float fLocal_307 = 0f;
	int iLocal_308 = 0;
	char cLocal_309[16] = "";
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	char cLocal_312[64] = "";
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	char cLocal_321[64] = "";
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	char cLocal_330[64] = "";
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	char cLocal_339[64] = "";
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	vector3 vLocal_348 = { 0f, 0f, 0f };
	vector3 vLocal_349 = { 0f, 0f, 0f };
	float fLocal_350 = 0f;
	bool bLocal_351 = 0;
	struct<28> Local_352 = { -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 5;
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
	int iLocal_396 = 0;
	int iLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 1097859072;
	var uLocal_401 = 1500;
	var uLocal_402 = 45;
	var uLocal_403 = 1103626240;
	var uLocal_404 = 5;
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
	int iLocal_415 = 0;
	int iLocal_416 = 0;
	int iLocal_417 = 0;
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
	iLocal_253 = joaat("a_f_y_genhot_01");
	iLocal_254 = joaat("a_f_y_bevhills_01");
	iLocal_255 = joaat("ambulance");
	iLocal_256 = joaat("bison");
	iLocal_263 = 1;
	iLocal_264 = 1000;
	vLocal_283 = { 1358.822f, -1547.396f, 53.7793f };
	vLocal_284 = { 1358.822f, -1547.396f, 53.7793f };
	vLocal_285 = { -694.2758f, -1119.447f, 13.525f };
	vLocal_286 = { -683.1272f, -1102.185f, 13.5257f };
	vLocal_287 = { 410.2629f, -1399.16f, 28.4017f };
	vLocal_288 = { 371.3834f, -1482.955f, 28.3418f };
	vLocal_289 = { 404.8026f, -1416.294f, 28.435f };
	vLocal_290 = { 406.612f, -1419.937f, 29.00375f };
	vLocal_291 = { -682.5392f, -1109.082f, 13.6729f };
	vLocal_292 = { -688.6727f, -1117.512f, 13.52498f };
	vLocal_293 = { -667.136f, -1046.06f, 15.9174f };
	vLocal_294 = { -703.1228f, -1142.432f, 9.8127f };
	vLocal_298 = { -701.2533f, -1080.285f, 12.2884f };
	vLocal_299 = { -687.8794f, -1108.073f, 13.5257f };
	vLocal_300 = { -703.0013f, -1084.073f, 12.1105f };
	fLocal_303 = 25.0227f;
	fLocal_304 = 226.3085f;
	fLocal_305 = -128.2329f;
	fLocal_306 = 238.4969f;
	fLocal_307 = 212.7682f;
	StringCopy(&cLocal_309, "taxi_oj_fc_2", 16);
	StringCopy(&cLocal_312, "amb@world_human_hang_out_street@male_c@idle_a", 64);
	StringCopy(&cLocal_321, "amb@world_human_hang_out_street@male_c@exit", 64);
	StringCopy(&cLocal_330, "amb@world_human_hang_out_street@female_hold_arm@idle_a", 64);
	StringCopy(&cLocal_339, "amb@world_human_hang_out_street@female_hold_arm@exit", 64);
	vLocal_348 = { -727.111f, -1046.357f, 11.43926f };
	vLocal_349 = { -642.6097f, -1085.538f, 28.42921f };
	fLocal_350 = 76.75f;
	iLocal_396 = 786468;
	iLocal_397 = 1;
	if (unk_0xE8A79675302ED812(67))
	{
		func_451(2);
		func_447();
	}
	unk_0x25A523E067E06F54(1);
	func_433();
	while (true)
	{
		if (unk_0x724D816EA203A79E(Local_238.f_2))
		{
			func_8();
		}
		else
		{
			func_1(&Local_238);
		}
		SYSTEM::WAIT(0);
	}
}

void func_1(var uParam0)//Position - 0x2B1
{
	uParam0->f_2 = unk_0xBC25C936A095B5BA();
	func_6(&(uParam0->f_F4));
	uParam0->f_1AC = func_2();
}

int func_2()//Position - 0x2D2
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

int func_3(int iParam0)//Position - 0x31D
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

int func_4(int iParam0)//Position - 0x35A
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

bool func_5(int iParam0)//Position - 0x384
{
	return iParam0 < 3;
}

void func_6(var uParam0)//Position - 0x390
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

void func_7(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x419
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

void func_8()//Position - 0x4B4
{
	if (func_432(&Local_238))
	{
		func_431(&Local_238);
		if (unk_0x2DA8CA50A72528FB(Local_251.f_4))
		{
			unk_0x07B8ECB35A4ED3AC(&(Local_251.f_4));
		}
		if (func_430(&Local_238, 0))
		{
			func_428();
		}
	}
	else
	{
		func_427(&Local_238);
		if (Local_238.f_19A < 28)
		{
			func_393(&Local_238, &uLocal_398);
			func_392(&Local_238);
			func_391(&Local_238, &uLocal_265, 0);
		}
		if (Local_238.f_19A > 2)
		{
			if (!func_390(&Local_238))
			{
				func_359();
			}
			else
			{
				func_350(&Local_238, "Taxi Not Driveable", func_358(&Local_238));
			}
		}
		if (Local_238.f_19A >= 21 && !iLocal_272)
		{
			func_338();
		}
		if (iLocal_274)
		{
			unk_0x598D851D7D0D2BA3(0.8f);
		}
		if (Local_238.f_19A == 9 || Local_238.f_19A == 17)
		{
			func_314(&Local_238, 0, 0);
		}
		switch (Local_238.f_19A)
		{
			case 0:
				func_311();
				func_310(&Local_238, 16, 4f, 0);
				func_308(&Local_238, vLocal_283, vLocal_284, "TaxiKeyla", iLocal_253, 41.1334f, 15f);
				func_307(&Local_238);
				func_306(&Local_238, 1);
				break;
			
			case 1:
				if (func_304())
				{
					func_303();
					func_283();
					func_282(&(vLocal_230[0 /*3*/]), "TAXI_SC_BN_04", 100);
					func_281(&Local_238, &vLocal_230);
					func_280(&Local_238);
					unk_0x379ACE23D404525C(vLocal_287, vLocal_288, false, 1);
					Local_238.f_E = { vLocal_283 };
					func_306(&Local_238, 3);
				}
				break;
			
			case 3:
				if (func_275(&Local_238, 1))
				{
					if (!unk_0x1D403DFADBC2DE3C(Local_238.f_3, 0))
					{
						unk_0xB0031DDAE4FF0BC3(Local_238.f_3, 0, 0, 1, 0);
						unk_0xB0031DDAE4FF0BC3(Local_238.f_3, 2, 1, 2, 0);
						unk_0xB0031DDAE4FF0BC3(Local_238.f_3, 3, 0, 2, 0);
						unk_0xB0031DDAE4FF0BC3(Local_238.f_3, 4, 1, 3, 0);
						unk_0xB0031DDAE4FF0BC3(Local_238.f_3, 8, 1, 0, 0);
					}
					func_274(&Local_238, 1, 0);
					unk_0xB2CB6EAA6B280A84("TAXI_Escapee", &(Local_251.f_1E));
					unk_0xA902E18EDF6FA0C8(255, Local_251.f_1E, Local_238.f_19D);
					unk_0xA902E18EDF6FA0C8(255, Local_251.f_1E, 1862763509);
					unk_0x6935EBF9868982DC(1346.9f, -1606.52f, 31.16f, 1457.25f, -1508.19f, 83.05f, false, 1);
					func_306(&Local_238, 5);
				}
				break;
			
			case 5:
				if (func_255(&Local_238, 0, 1109393408))
				{
					func_254();
					func_306(&Local_238, 6);
				}
				break;
			
			case 6:
				if (func_253(&Local_238))
				{
					func_249(&Local_238, 9, 1, 0, 0);
					func_248(&Local_238);
					Local_238.f_11 = { 485.2039f, -1418.064f, 28.2112f };
					func_247();
					func_246(392.8545f, -1379.577f, 29.2837f, 0, 50f);
					func_306(&Local_238, 17);
				}
				if (unk_0xE59B7F5A03335350(Local_238.f_4, 0))
				{
					if (!unk_0x62F3A07C43FFB568(Local_238.f_2, Local_238.f_4, 0))
					{
						func_244(&Local_238);
						func_306(&Local_238, 5);
					}
				}
				break;
			
			case 17:
				func_243(&Local_238, &(Local_238.f_9));
				if (!unk_0x724D816EA203A79E(Local_251.f_3))
				{
					if (func_242())
					{
						func_241(&Local_251, vLocal_290, fLocal_305);
					}
				}
				else
				{
					func_240(&Local_238, &Local_251);
				}
				if (func_214(&Local_238, 9f, 1097859072, 1117782016))
				{
					if (unk_0xBC27F7BE8808F46F(Local_238.f_9))
					{
						unk_0x0BBAABB52887CF8C(Local_238.f_9, false);
					}
					unk_0x07B8ECB35A4ED3AC(&(Local_238.f_9));
					func_306(&Local_238, 19);
				}
				break;
			
			case 19:
				if (func_207())
				{
					if (!func_206())
					{
						func_249(&Local_238, 139, 1, 0, 0);
						iLocal_274 = 1;
						func_306(&Local_238, 9);
					}
				}
				break;
			
			case 9:
				func_240(&Local_238, &Local_251);
				func_205();
				if (func_204(Local_251.f_2, Local_251.f_3))
				{
					func_203(&Local_238, 2, 0);
					unk_0x6F81644465434992(Local_251.f_2, 1);
					unk_0x91629AC1E1F78419(Local_251.f_2, 6, true);
					unk_0x91629AC1E1F78419(Local_251.f_2, 17, true);
					func_274(&Local_238, 1, 0);
					Local_251.f_5 = unk_0x8D66276473ABD7CC(Local_251.f_3);
					Local_251.f_F = unk_0x77F5C030D3238E26(Local_251.f_3);
					Local_251.f_10 = unk_0xA6EB9CEADFB819EC(Local_251.f_3);
					func_310(&Local_238, 13, 0f, 0);
					func_310(&Local_238, 20, 0f, 0);
					unk_0xF16F7C45E0B1B52B(vLocal_293, vLocal_294);
					iLocal_261 = unk_0x1DAA351326EA3537(vLocal_293, vLocal_294, 0, 1, 1, 1);
					unk_0x4AED68BFACFB14CB(false);
					func_306(&Local_238, 13);
				}
				break;
			
			case 13:
				func_205();
				func_240(&Local_238, &Local_251);
				func_243(&Local_238, &(Local_251.f_4));
				if (func_202(&Local_238))
				{
					if (func_201(Local_251.f_2, Local_251.f_4))
					{
						func_249(&Local_238, 51, 1, 0, 0);
						func_306(&Local_238, 25);
					}
					func_197(&Local_238);
					func_194(Local_251.f_3, 291.0313f, -1476.446f, 28.2945f, 15f, &Local_352, 2);
					if (func_154())
					{
						if (unk_0x9DD22A56B46C85AD(Local_251.f_3))
						{
							unk_0xD87F0F9CDF39238A(Local_251.f_3);
							unk_0x4F5DAC981AF98536(0, "taxi_oj_fc3");
						}
						func_152(&uLocal_45, 0, 0);
						func_151();
						func_306(&Local_238, 20);
					}
				}
				break;
			
			case 20:
				if (func_150())
				{
					if (func_129())
					{
						func_306(&Local_238, 14);
					}
				}
				break;
			
			case 14:
				func_128(&Local_238, &(Local_238.f_2B));
				if (unk_0xE59B7F5A03335350(Local_251.f_3, 0))
				{
					if ((unk_0x4DBCE270B354E123(Local_251.f_3, vLocal_285, 20f, 20f, 60f, true, true, 0) && unk_0x8910237449BB6F79(Local_251.f_3) < 5f) || Local_251.f_1F > 2)
					{
						if (!unk_0x1D403DFADBC2DE3C(iLocal_257, 0))
						{
							unk_0xA4E856A8CD53B8DF(iLocal_257);
							unk_0x641B19E156645A92(iLocal_257, vLocal_292, 1, false, 0, 1);
						}
						func_249(&Local_238, 37, 1, 0, 0);
						func_306(&Local_238, 21);
					}
				}
				break;
			
			case 21:
				func_128(&Local_238, &(Local_238.f_2B));
				func_127(&Local_238, Local_251.f_2, 1, 1);
				func_127(&Local_238, iLocal_257, 0, 0);
				func_243(&Local_238, &(Local_238.f_9));
				if (unk_0x2DA8CA50A72528FB(Local_251.f_4))
				{
					unk_0x07B8ECB35A4ED3AC(&(Local_251.f_4));
					Local_238.f_11 = { vLocal_286 };
				}
				else if (!unk_0x2DA8CA50A72528FB(Local_238.f_9))
				{
					Local_238.f_9 = func_125(Local_238.f_11, 1);
				}
				if (unk_0xE59B7F5A03335350(Local_238.f_4, 0))
				{
					if (unk_0x62F3A07C43FFB568(Local_238.f_2, Local_238.f_4, 0))
					{
						if (unk_0x4DBCE270B354E123(Local_238.f_4, -684.526f, -1105.76f, 13.52571f, 1f, 1f, 2f, !Local_238.f_8C, true, 0))
						{
						}
						if (unk_0x0C265B3C448E6954(Local_238.f_4, -685.0081f, -1101.297f, 13.527f, -678.677f, -1110.64f, 15.5871f, 2.25f, 0, true, 0) || unk_0x0C265B3C448E6954(Local_238.f_4, -704.1705f, -1115.226f, 13.525f, -700.2585f, -1121.292f, 15.4336f, 2.25f, 0, true, 0))
						{
							if (unk_0x0C265B3C448E6954(Local_238.f_4, -685.0081f, -1101.297f, 13.527f, -678.677f, -1110.64f, 15.5871f, 2.25f, 0, true, 0))
							{
								iLocal_231 = 0;
							}
							else
							{
								iLocal_231 = 1;
							}
							Local_238.f_23 = 60f;
							Local_238.f_1A1 = 143;
							Local_238.f_1A0 = 143;
							iLocal_274 = 0;
							func_306(&Local_238, 22);
						}
					}
				}
				break;
			
			case 22:
				func_127(&Local_238, Local_251.f_2, 0, 1);
				func_127(&Local_238, iLocal_257, 0, 0);
				if (!unk_0x36CEFBE9B745A58D(Local_238.f_3))
				{
					if (unk_0xE59B7F5A03335350(Local_238.f_4, 0))
					{
						if (Local_251.f_1F != 6)
						{
							if (func_121(&Local_238, 1, 3f))
							{
								iLocal_273 = 1;
								unk_0x07B8ECB35A4ED3AC(&(Local_238.f_9));
								func_306(&Local_238, 27);
							}
						}
						else
						{
							if (!unk_0x2DA8CA50A72528FB(Local_238.f_9))
							{
								Local_238.f_9 = func_125(Local_238.f_11, 1);
							}
							if (func_214(&Local_238, 8f, 1097859072, 1117782016) || func_121(&Local_238, 1, 1084227584))
							{
								unk_0x07B8ECB35A4ED3AC(&(Local_238.f_9));
								func_306(&Local_238, 27);
							}
						}
					}
				}
				break;
			
			case 25:
				func_127(&Local_238, Local_251.f_2, 0, 1);
				func_127(&Local_238, iLocal_257, 0, 0);
				if (unk_0x904E94842BB9E173(unk_0xFC1CAE18F3ECBF2D()) < 1)
				{
					func_249(&Local_238, 37, 1, 0, 0);
					func_306(&Local_238, 27);
				}
				break;
			
			case 27:
				func_127(&Local_238, Local_251.f_2, 0, 1);
				func_127(&Local_238, iLocal_257, 0, 0);
				if (!unk_0x36CEFBE9B745A58D(Local_238.f_3))
				{
					if (unk_0x2DA8CA50A72528FB(Local_251.f_4))
					{
						unk_0x07B8ECB35A4ED3AC(&(Local_251.f_4));
					}
					unk_0xBB5629E7D44054AE("TAXI_OBJ_DRIVE");
					if (Local_251.f_9 > 2)
					{
						Local_238.f_38 = -10;
					}
					else if (Local_251.f_9 == 0)
					{
						Local_238.f_38 = 7;
						func_120(&Local_238, 0);
					}
					else
					{
						Local_238.f_38 = 4;
					}
					func_118(&Local_238);
					func_114(&Local_238);
					func_113(&Local_238);
					func_306(&Local_238, 29);
				}
				break;
			
			case 29:
				unk_0xBB5629E7D44054AE("TAXI_OBJ_DRIVE");
				if (func_80(&Local_238, &uLocal_405))
				{
					func_54(&Local_238);
					func_306(&Local_238, 28);
				}
				break;
			
			case 28:
				if (iLocal_272 || iLocal_271)
				{
					func_306(&Local_238, 30);
				}
				break;
			
			case 30:
				unk_0xBB5629E7D44054AE("TAXI_OBJ_DRIVE");
				if ((!unk_0x36CEFBE9B745A58D(Local_238.f_3) && unk_0xD9C1758D86688CEA(iLocal_257, Local_238.f_3, 1)) && unk_0xD9C1758D86688CEA(Local_251.f_2, Local_238.f_3, 1))
				{
					if (iLocal_277 || SYSTEM::TIMERA() > 20000)
					{
						func_51(1, &Local_238, 1);
						func_447();
					}
					else
					{
						iLocal_236 = unk_0x67FCE1EB536A0735(vLocal_291, 10f, joaat("ambulance"), 0);
						if (unk_0xE59B7F5A03335350(iLocal_236, 0))
						{
							iLocal_277 = 1;
						}
						iLocal_258 = unk_0xDD69F88FEB1D3ABD(vLocal_291, 5f, 5f, 5f, -1);
						if (!unk_0x36CEFBE9B745A58D(iLocal_258))
						{
							iLocal_277 = 1;
						}
						if (!iLocal_278)
						{
							if (unk_0x9EDABB1E7725D7A0(5, vLocal_291, 1, 0f, &uLocal_262, 0, 0))
							{
								SYSTEM::SETTIMERA(0);
								iLocal_278 = 1;
							}
						}
					}
				}
				if (func_49(vLocal_291, 1) > 100f || func_47(Local_238.f_3, unk_0xBC25C936A095B5BA()) > 100f)
				{
					func_51(1, &Local_238, 1);
					func_447();
				}
				else if ((unk_0x36CEFBE9B745A58D(Local_238.f_3) || unk_0xD9C1758D86688CEA(iLocal_257, unk_0xBC25C936A095B5BA(), 1)) || unk_0xD9C1758D86688CEA(Local_251.f_2, unk_0xBC25C936A095B5BA(), 1))
				{
					if (!unk_0x36CEFBE9B745A58D(Local_238.f_3))
					{
						unk_0x2E35C4FA5F0ED22F(Local_238.f_3, true);
						unk_0xA4E856A8CD53B8DF(Local_238.f_3);
						unk_0x02DAF06EA4F08219(&iLocal_232);
						unk_0xC5A6DFE2B8987B17(&iLocal_232);
						unk_0xEE7131C3C73E7282(0, 2000);
						unk_0xAB43C54784946B9F(0, Local_238.f_11, 1000f, -1, 0, 0);
						unk_0x535008C596714F9E(iLocal_232);
						unk_0xA8E6405305C0D7DF(Local_238.f_3, iLocal_232);
						unk_0x02DAF06EA4F08219(&iLocal_232);
						unk_0x22321800954A532E(Local_238.f_3, true);
					}
					if (!unk_0x36CEFBE9B745A58D(iLocal_257))
					{
						unk_0x2E35C4FA5F0ED22F(iLocal_257, true);
						unk_0xA4E856A8CD53B8DF(iLocal_257);
						unk_0x02DAF06EA4F08219(&iLocal_232);
						unk_0xC5A6DFE2B8987B17(&iLocal_232);
						unk_0xEE7131C3C73E7282(0, 1000);
						unk_0xAB43C54784946B9F(0, Local_238.f_11, 1000f, -1, 0, 0);
						unk_0x535008C596714F9E(iLocal_232);
						unk_0xA8E6405305C0D7DF(iLocal_257, iLocal_232);
						unk_0x02DAF06EA4F08219(&iLocal_232);
						unk_0x22321800954A532E(iLocal_257, true);
					}
					if (!unk_0x36CEFBE9B745A58D(Local_251.f_2))
					{
						unk_0x2E35C4FA5F0ED22F(Local_251.f_2, true);
						unk_0x02DAF06EA4F08219(&iLocal_232);
						unk_0xC5A6DFE2B8987B17(&iLocal_232);
						if (bLocal_275)
						{
							unk_0xE896C0AD02364F2A(0, "MOVE_DUCK_FOR_COVER", "exit", 8f, -8f, -1, 0, 0, 0, 0, 0);
						}
						unk_0xDE2D2B13F24A979D(0, 500);
						unk_0xAB43C54784946B9F(0, Local_238.f_11, 1000f, -1, 0, 0);
						unk_0x535008C596714F9E(iLocal_232);
						unk_0xA8E6405305C0D7DF(Local_251.f_2, iLocal_232);
						unk_0x02DAF06EA4F08219(&iLocal_232);
						unk_0x22321800954A532E(Local_251.f_2, true);
					}
					func_51(1, &Local_238, 1);
					func_447();
				}
				else if ((iLocal_271 && !func_206()) && (unk_0x105601648511CC64() - iLocal_267) > 500)
				{
					if (!unk_0x36CEFBE9B745A58D(Local_238.f_3))
					{
						unk_0x2E35C4FA5F0ED22F(Local_238.f_3, true);
						unk_0xA4E856A8CD53B8DF(Local_238.f_3);
						unk_0x02DAF06EA4F08219(&iLocal_232);
						unk_0xC5A6DFE2B8987B17(&iLocal_232);
						unk_0x3D3F19B39A42CF7A(0, unk_0xBC25C936A095B5BA(), -1, -957453492);
						unk_0x535008C596714F9E(iLocal_232);
						unk_0xA8E6405305C0D7DF(Local_238.f_3, iLocal_232);
						unk_0x02DAF06EA4F08219(&iLocal_232);
						unk_0x22321800954A532E(Local_238.f_3, true);
					}
					if (!unk_0x36CEFBE9B745A58D(iLocal_257))
					{
						unk_0x2E35C4FA5F0ED22F(iLocal_257, true);
						unk_0xA4E856A8CD53B8DF(iLocal_257);
						unk_0x02DAF06EA4F08219(&iLocal_232);
						unk_0xC5A6DFE2B8987B17(&iLocal_232);
						unk_0xEE7131C3C73E7282(0, 1000);
						unk_0xAB43C54784946B9F(0, Local_238.f_11, 1000f, -1, 0, 0);
						unk_0x535008C596714F9E(iLocal_232);
						unk_0xA8E6405305C0D7DF(iLocal_257, iLocal_232);
						unk_0x02DAF06EA4F08219(&iLocal_232);
						unk_0x22321800954A532E(iLocal_257, true);
					}
					if (!unk_0x36CEFBE9B745A58D(Local_251.f_2))
					{
						unk_0x2E35C4FA5F0ED22F(Local_251.f_2, true);
						unk_0xA4E856A8CD53B8DF(Local_251.f_2);
						unk_0x02DAF06EA4F08219(&iLocal_232);
						unk_0xC5A6DFE2B8987B17(&iLocal_232);
						unk_0xDE2D2B13F24A979D(0, 500);
						unk_0xAB43C54784946B9F(0, Local_238.f_11, 1000f, -1, 0, 0);
						unk_0x535008C596714F9E(iLocal_232);
						unk_0xA8E6405305C0D7DF(Local_251.f_2, iLocal_232);
						unk_0x02DAF06EA4F08219(&iLocal_232);
						unk_0x22321800954A532E(Local_251.f_2, true);
					}
					func_9(&Local_238, 1);
					func_447();
				}
				break;
			}
	}
}

void func_9(var uParam0, bool bParam1)//Position - 0x1250
{
	func_431(uParam0);
	if (func_206())
	{
		func_45();
	}
	func_43();
	unk_0xEB233A3B7635D2AC();
	unk_0x7456702622C62EA0(1);
	func_40(0);
	if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
	{
		unk_0xA73D1278857991A2(uParam0->f_4, false);
		unk_0xE421FE22DE8008EB(uParam0->f_4);
		unk_0xBF86DE1BFE3AA5CF(uParam0->f_4);
	}
	func_36(uParam0->f_E, 1);
	func_246(uParam0->f_E, 1, 1114636288);
	func_35(&(uParam0->f_F4), 3);
	unk_0xC8FD3EBBB90E8D7F(unk_0xBC25C936A095B5BA(), 32, true);
	if (func_32())
	{
		unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
	}
	unk_0xD5E53AA0828339DA(1);
	func_22(0, 1, 1, 0, 0);
	unk_0x43F06392C4EF25E0(true);
	unk_0x59B038076F830627(true);
	if (unk_0xEF0E25DA0CB6E8FF(*uParam0))
	{
		unk_0x4EC087603E1DEF9C(*uParam0, 0);
		unk_0x062C9995BFD27B2A(false, false, 3000, 1, 0, 0);
		unk_0x4AED68BFACFB14CB(true);
	}
	if (func_21(Global_19B04.f_4A7C, 4))
	{
		func_19(&(Global_19B04.f_4A7C), 4);
		unk_0x8510BC031C24B862(func_18(), false);
	}
	if (bParam1)
	{
		func_17(uParam0);
	}
	func_16(uParam0);
	unk_0x4EA570997E107F35("gestures@m@standing@casual");
	unk_0x4EA570997E107F35("oddjobs@taxi@");
	unk_0x4EA570997E107F35("oddjobs@towingcome_here");
	if (unk_0x57D316754A262B34())
	{
		func_14(uParam0->f_19B);
	}
	if (!unk_0x8CC5A4A5615C6420(unk_0xFC1CAE18F3ECBF2D()))
	{
		unk_0xDDCAA2E64649E083(unk_0xFC1CAE18F3ECBF2D(), true, 0);
	}
	unk_0x739C5CCC39AE3137(SYSTEM::ROUND((func_10(&iLocal_82) * 1000f)), 12, 0);
}

float func_10(var uParam0)//Position - 0x13A5
{
	if (func_13(uParam0))
	{
		if (func_12(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_11(unk_0xFA30DFD0084E92FE(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

float func_11(bool bParam0)//Position - 0x13E1
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

bool func_12(var uParam0)//Position - 0x1439
{
	return unk_0xFA30DFD0084E92FE(*uParam0, 2);
}

bool func_13(var uParam0)//Position - 0x1449
{
	return unk_0xFA30DFD0084E92FE(*uParam0, 1);
}

void func_14(int iParam0)//Position - 0x1459
{
	var uVar0;
	
	if (iLocal_57[0] != 0)
	{
		MemCopy(&uVar0, {func_15(iParam0)}, 6);
		if (!unk_0xEAEFBBEC1AEA464B(&uVar0))
		{
		}
	}
}

struct<8> func_15(int iParam0)//Position - 0x1480
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

void func_16(var uParam0)//Position - 0x1549
{
	unk_0x0E330AFCF19FCA1E(uParam0->f_33[0]);
}

void func_17(var uParam0)//Position - 0x155D
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

int func_18()//Position - 0x165A
{
	return joaat("taxi");
}

void func_19(var uParam0, int iParam1)//Position - 0x1667
{
	func_20(uParam0, iParam1);
}

void func_20(var uParam0, int iParam1)//Position - 0x1677
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_21(var uParam0, int iParam1)//Position - 0x168C
{
	return (uParam0 && iParam1) != 0;
}

void func_22(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x169B
{
	if (bParam0)
	{
		unk_0x0D2E9062E966BE4F(unk_0xB5CEFD608600A09F());
		unk_0x8D554ED10E00EEE3(unk_0xB5CEFD608600A09F(), 1);
		unk_0xDE255B32C6B37E90(unk_0xB5CEFD608600A09F(), 1);
		func_31(1);
		unk_0x32FF237D69EB5489();
		unk_0x3169E2C5E6A096BC();
		if (Global_389D.f_1 > 3)
		{
			if (unk_0x58E7DDFF8D17A82A())
			{
				unk_0x1E08809A5041F85B(false);
			}
			if (!func_30())
			{
				Global_389D.f_1 = 3;
			}
			Global_3DB8 = 5;
		}
		func_29(1, iParam3, iParam2, 0);
		Global_DAA5 = 1;
		Global_10ABB = 1;
		Global_11540 = 1;
	}
	else
	{
		func_31(0);
		unk_0xCB50D125C355ED9C();
		Global_DAA5 = 0;
		if (bParam1)
		{
			unk_0x7FF4F08CAB3344B1();
		}
		unk_0x8D554ED10E00EEE3(unk_0xB5CEFD608600A09F(), 0);
		unk_0xDE255B32C6B37E90(unk_0xB5CEFD608600A09F(), 0);
		func_29(0, iParam3, iParam2, 0);
		if (unk_0x7AF0088ABFA713B6())
		{
			if ((((!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && !func_27(unk_0xB5CEFD608600A09F())) && !func_24(unk_0xB5CEFD608600A09F(), 0)) && !func_23()) && !bParam4)
			{
				unk_0x1E5C2A1EAB944289(unk_0xBC25C936A095B5BA(), false);
			}
		}
		else if ((!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && !func_27(unk_0xB5CEFD608600A09F())) && !bParam4)
		{
			unk_0x1E5C2A1EAB944289(unk_0xBC25C936A095B5BA(), false);
		}
		Global_11540 = 0;
	}
}

bool func_23()//Position - 0x17C4
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_27.f_12, 14);
}

bool func_24(int iParam0, int iParam1)//Position - 0x17E1
{
	bool bVar0;
	
	if (iParam0 == unk_0xB5CEFD608600A09F())
	{
		bVar0 = func_25(-1, 0) == 8;
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

int func_25(int iParam0, bool bParam1)//Position - 0x182C
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_26();
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

int func_26()//Position - 0x186D
{
	return Global_1407E0;
}

int func_27(int iParam0)//Position - 0x1879
{
	if (func_24(iParam0, 0))
	{
		return 1;
	}
	if (func_28())
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

bool func_28()//Position - 0x18BB
{
	return unk_0xFA30DFD0084E92FE(Global_240006, 3);
}

int func_29(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x18CC
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

int func_30()//Position - 0x18FF
{
	if (Global_389D.f_1 == 1 || Global_389D.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_31(int iParam0)//Position - 0x1926
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

int func_32()//Position - 0x1949
{
	if (!func_34() && !func_33())
	{
		if (!unk_0xE7A89C39746A63AC(unk_0xFC1CAE18F3ECBF2D()))
		{
			return 1;
		}
	}
	return 0;
}

int func_33()//Position - 0x1974
{
	if (unk_0xB731B8C5BCE89836(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_34()//Position - 0x198E
{
	if (unk_0xB731B8C5BCE89836(joaat("appinternet")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_35(var uParam0, int iParam1)//Position - 0x19A8
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_36(vector3 vParam0, bool bParam1)//Position - 0x19C5
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!func_38(vParam0, func_39(), 0))
	{
		vVar0 = { func_37(vParam0, 1f, -30f, -30f, -10f) };
		vVar1 = { func_37(vParam0, 1f, 30f, 30f, 10f) };
		unk_0x379ACE23D404525C(vVar0, vVar1, bParam1, 1);
	}
}

Vector3 func_37(vector3 vParam0, float fParam1, struct<2> Param2, float fParam3)//Position - 0x1A25
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

bool func_38(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x1A72
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

Vector3 func_39()//Position - 0x1AB9
{
	vector3 vVar0;
	
	return vVar0;
}

void func_40(int iParam0)//Position - 0x1AC5
{
	if (Global_3943)
	{
		func_41(0, 0);
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
	if (!func_30())
	{
		Global_389D.f_1 = 3;
	}
}

void func_41(bool bParam0, bool bParam1)//Position - 0x1B35
{
	if (bParam0)
	{
		if (func_42(0))
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

int func_42(int iParam0)//Position - 0x1BA9
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

void func_43()//Position - 0x1C03
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
					func_44(Global_15FB1[iVar0 /*17*/].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_44(int iParam0, bool bParam1)//Position - 0x1C8A
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

void func_45()//Position - 0x1CC8
{
	Global_394A = 0;
	func_46();
}

void func_46()//Position - 0x1CD8
{
	unk_0x5C7DC611411E2CF9();
	Global_41AB = 0;
	if (unk_0xE6711F601F11B66B())
	{
		unk_0x1E08809A5041F85B(false);
		Global_3DB8 = 6;
	}
}

float func_47(int iParam0, int iParam1)//Position - 0x1CF9
{
	return func_48(iParam0, iParam1, 1);
}

float func_48(int iParam0, int iParam1, bool bParam2)//Position - 0x1D0A
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

float func_49(vector3 vParam0, bool bParam1)//Position - 0x1D68
{
	return func_50(unk_0xA95CF30C72EB526E(unk_0xFC1CAE18F3ECBF2D()), vParam0, bParam1);
}

float func_50(int iParam0, vector3 vParam1, bool bParam2)//Position - 0x1D82
{
	if (unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		return -1f;
	}
	return unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(iParam0, true), vParam1, bParam2);
}

void func_51(bool bParam0, var uParam1, bool bParam2)//Position - 0x1DAC
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
	func_9(uParam1, bParam2);
}

void func_52(int iParam0, int iParam1)//Position - 0x1DE8
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

void func_53(char* sParam0, int iParam1)//Position - 0x21D9
{
}

void func_54(int iParam0)//Position - 0x21E1
{
	func_52(0, 0);
	if (iParam0->f_19B != 9)
	{
		func_451(1);
		func_66(15, 1);
	}
	func_64(&(Global_19B04.f_4A7C), 1024);
	if (!func_21(Global_19B04.f_4A7C, 64))
	{
		func_55(func_62(func_63(iParam0)), 0, 0);
	}
}

void func_55(int iParam0, int iParam1, int iParam2)//Position - 0x2235
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

void func_56()//Position - 0x231D
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

int func_57()//Position - 0x27DE
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

bool func_58(bool bParam0)//Position - 0x2829
{
	if (!bParam0 && unk_0xB731B8C5BCE89836(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_1163A, 0);
}

int func_59()//Position - 0x2854
{
	return Global_62BD;
}

int func_60(int iParam0, int iParam1)//Position - 0x285F
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

int func_61(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x28B0
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
		iParam2 = func_26();
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

int func_62(int iParam0)//Position - 0x2DCA
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

int func_63(var uParam0)//Position - 0x2E60
{
	return uParam0->f_19B;
}

void func_64(var uParam0, int iParam1)//Position - 0x2E6D
{
	func_65(uParam0, iParam1);
}

void func_65(var uParam0, int iParam1)//Position - 0x2E7D
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_66(int iParam0, int iParam1)//Position - 0x2E8E
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_67(iParam0, iParam1);
}

int func_67(int iParam0, int iParam1)//Position - 0x2EA9
{
	if (func_79(14) && !func_78(iParam0))
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
	if (func_77(&Global_411EB6))
	{
		if (func_75(&Global_411EB6, iParam0))
		{
			return 0;
		}
		if (func_68(&Global_411EB6, iParam0))
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

int func_68(var uParam0, int iParam1)//Position - 0x2F46
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x6D5CBCB6411EDE89(iParam1))
	{
		return 0;
	}
	if (func_79(14) && !func_78(iParam1))
	{
		return 0;
	}
	if (func_75(uParam0, iParam1))
	{
		return 0;
	}
	if (func_74(uParam0) < 0f)
	{
		func_73(uParam0, 0);
	}
	func_71(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_69(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_69(var uParam0, int iParam1)//Position - 0x2FF7
{
	int iVar0;
	
	if (unk_0x6D5CBCB6411EDE89(iParam1))
	{
		return 0;
	}
	if (func_79(14) && !func_78(iParam1))
	{
		return 0;
	}
	if (func_75(uParam0, iParam1))
	{
		return 0;
	}
	if (func_74(uParam0) < 0f)
	{
		func_73(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_70(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_70(var uParam0, int iParam1)//Position - 0x3072
{
	return (*uParam0)[iParam1] == 78;
}

void func_71(var uParam0)//Position - 0x3083
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_72(uParam0, iVar0);
		iVar0++;
	}
	func_73(uParam0, (Global_411EB5 - 0.5f));
}

void func_72(var uParam0, int iParam1)//Position - 0x30B7
{
	(*uParam0)[iParam1] = 78;
}

void func_73(var uParam0, float fParam1)//Position - 0x30C7
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

float func_74(var uParam0)//Position - 0x30E4
{
	return uParam0->f_50;
}

bool func_75(var uParam0, int iParam1)//Position - 0x30F0
{
	return func_76(uParam0, iParam1) != -1;
}

int func_76(var uParam0, int iParam1)//Position - 0x3102
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

bool func_77(var uParam0)//Position - 0x312F
{
	return uParam0->f_4F == 1;
}

int func_78(int iParam0)//Position - 0x313D
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

bool func_79(int iParam0)//Position - 0x318D
{
	return Global_8C41 == iParam0;
}

int func_80(int iParam0, var uParam1)//Position - 0x319B
{
	switch (iLocal_160)
	{
		case 0:
			if (!func_206() && func_111(iParam0, 0) > 1f)
			{
				if (func_32())
				{
					unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
				}
				func_110(iParam0);
				func_19(&(Global_19B04.f_4A7C), 4096);
				func_107(uParam1, "TAXI_FARE_TITLE", iParam0->f_32, iParam0->f_38, ((iParam0->f_32 + iParam0->f_38) + iParam0->f_69), iParam0->f_69, func_109(iParam0), "TAXI_FARE_MID", 4000, 1);
				uParam1->f_1 = 4000;
				unk_0xC4BA30B532FE260F(-1, "CHECKPOINT_UNDER_THE_BRIDGE", "HUD_MINI_GAME_SOUNDSET", false);
				func_106(1);
				iLocal_160 = 6;
			}
			break;
		
		case 6:
			if (!func_100(uParam1, 0))
			{
				func_81(iParam0);
				func_310(iParam0, 0, 0, 0);
				func_106(0);
				iLocal_160 = 7;
				return 1;
			}
			break;
	}
	return 0;
}

void func_81(int iParam0)//Position - 0x326D
{
	int iVar0;
	
	iVar0 = ((iParam0->f_32 + iParam0->f_38) + iParam0->f_69);
	if (iVar0 > 0)
	{
		func_82(func_98(), 21, iVar0, 0, 0);
		func_52(10, iVar0);
		iLocal_57[0] = iVar0;
	}
}

void func_82(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x32AB
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
	func_83(Global_19B04.f_6D75[iParam0 /*29*/].f_11, 1, iParam1, iParam2, 0);
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

int func_83(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x3392
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_97();
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
					func_96(99, 1);
					func_95(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_95(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_95(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_94(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_90(5))
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
							func_95(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_95(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_95(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_90(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_95(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_95(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_95(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_95(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_95(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_95(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_95(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_95(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_95(joaat("sp2_money_spent_property"), iParam3);
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
									func_95(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_95(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_95(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_95(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_95(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_95(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_90(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_95(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_95(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_95(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_95(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_95(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_95(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_89(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_96(95, iParam3);
					break;
				
				case 1:
					func_96(97, iParam3);
					break;
				
				case 2:
					func_96(96, iParam3);
					break;
			}
			func_96(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_86(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_86(iVar1);
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
					func_95(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_95(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_95(joaat("sp2_total_cash_earned"), iParam3);
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
	func_85(iParam0);
	if (Global_8C41 == 15)
	{
		func_84(0);
	}
	return 1;
}

void func_84(bool bParam0)//Position - 0x3991
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

void func_85(int iParam0)//Position - 0x3C13
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

void func_86(int iParam0)//Position - 0x3C6D
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
	else if (unk_0xFA30DFD0084E92FE(Global_19B04.f_5037.f_1D7, iParam0) || unk_0xFA30DFD0084E92FE(Global_200000[func_88() /*12171*/].f_1E08.f_A, iParam0))
	{
		bVar0 = true;
		unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_5037.f_1D7), iParam0);
		unk_0x7CB6FD92BE491AD9(&(Global_200000[func_88() /*12171*/].f_1E08.f_A), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x2E94302CFF011F2E("COUP_RED");
		unk_0xC9C304D0AABE1335(func_87(iParam0));
		unk_0x7BB0762D8C75A3C7(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_87(int iParam0)//Position - 0x3D44
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

int func_88()//Position - 0x3DCC
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_89(int iParam0)//Position - 0x3DD9
{
	func_96(93, iParam0);
	func_96(29, iParam0);
	func_96(30, iParam0);
}

bool func_90(int iParam0)//Position - 0x3DF9
{
	if (iParam0 == 8)
	{
		return func_91(129, -1, -1);
	}
	if (!unk_0x7AF0088ABFA713B6())
	{
		return unk_0xFA30DFD0084E92FE(Global_19B04.f_5037.f_1D7, iParam0);
	}
	return unk_0xFA30DFD0084E92FE(Global_200000[func_88() /*12171*/].f_1E08.f_A, iParam0);
}

int func_91(int iParam0, int iParam1, int iParam2)//Position - 0x3E47
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_26();
	}
	iVar1 = func_93(iParam0, iParam1);
	uVar2 = func_92(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xDAB376DC6F83D68C(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_92(int iParam0)//Position - 0x3E84
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

int func_93(int iParam0, int iParam1)//Position - 0x4172
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_26();
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

int func_94(bool bParam0)//Position - 0x443F
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
	func_66(27, 1);
	return 1;
}

void func_95(int iParam0, int iParam1)//Position - 0x44F6
{
	int iVar0;
	
	unk_0x6CB99B97664C3727(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x3A57956BCE003880(iParam0, iVar0, 1);
}

void func_96(int iParam0, int iParam1)//Position - 0x4519
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

void func_97()//Position - 0x4576
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

int func_98()//Position - 0x45EB
{
	func_99();
	return Global_19B04.f_932.f_21B.f_10CD;
}

void func_99()//Position - 0x4604
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_4(Global_19B04.f_932.f_21B.f_10CD) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_3(unk_0xBC25C936A095B5BA());
			if (func_5(iVar0) && (!func_79(14) || Global_196EB))
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

int func_100(var uParam0, int iParam1)//Position - 0x4701
{
	if (!func_13(&(uParam0->f_2)))
	{
		func_104(&(uParam0->f_2));
	}
	unk_0x4E0EC60D119222B1(14);
	unk_0x4B6031094354FED6(*uParam0, 255, 255, 255, 255, 0);
	if (iParam1 || uParam0->f_8)
	{
		if (unk_0x694514BD37EC4E94(2, 201) || uParam0->f_8)
		{
			if (!func_13(&(uParam0->f_5)))
			{
				func_104(&(uParam0->f_5));
				func_103(uParam0, 1051260355);
			}
		}
		if (func_13(&(uParam0->f_5)))
		{
			if (func_102(&(uParam0->f_5)) > 0.33f)
			{
				func_101(&(uParam0->f_5));
				return 0;
			}
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_102(&(uParam0->f_2)) * 1000f) > SYSTEM::TO_FLOAT(uParam0->f_1)
	{
		if (!func_13(&(uParam0->f_5)))
		{
			func_104(&(uParam0->f_5));
			func_103(uParam0, 1051260355);
		}
		else if (func_102(&(uParam0->f_5)) > 0.33f)
		{
			func_101(&(uParam0->f_2));
			return 0;
		}
	}
	return 1;
}

void func_101(var uParam0)//Position - 0x4804
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_102(var uParam0)//Position - 0x481A
{
	if (func_13(uParam0))
	{
		if (func_12(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_11(unk_0xFA30DFD0084E92FE(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

void func_103(var uParam0, float fParam1)//Position - 0x4859
{
	unk_0x29CD142125FE177B(*uParam0, "SHARD_ANIM_OUT");
	unk_0x1E1FB49121565EB6(uParam0->f_9);
	unk_0xD44E04EBBDC4CE88(fParam1);
	unk_0xF9FBC2F3F73D94C9();
}

void func_104(int iParam0)//Position - 0x487F
{
	func_105(iParam0, 0f);
}

void func_105(int iParam0, float fParam1)//Position - 0x488E
{
	iParam0->f_1 = (func_11(unk_0xFA30DFD0084E92FE(*iParam0, 4)) - fParam1);
	unk_0xF0059F27F7BB6680(iParam0, 1);
	unk_0x7CB6FD92BE491AD9(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_106(int iParam0)//Position - 0x48BC
{
	Global_11646 = iParam0;
	Global_11647 = iParam0;
}

void func_107(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, char* sParam7, int iParam8, int iParam9)//Position - 0x48D0
{
	unk_0x29CD142125FE177B(*uParam0, func_108());
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
	func_104(&(uParam0->f_2));
	uParam0->f_1 = iParam8;
	uParam0->f_9 = 1;
}

char* func_108()//Position - 0x493B
{
	if (unk_0x7AF0088ABFA713B6())
	{
		return "SHOW_COND_SHARD_MESSAGE";
	}
	return "SHOW_SHARD_MIDSIZED_MESSAGE";
}

char* func_109(int iParam0)//Position - 0x4955
{
	char* sVar0;
	
	switch (iParam0->f_19B)
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

void func_110(int iParam0)//Position - 0x49F0
{
	int iVar0;
	
	Local_161.f_1 = SYSTEM::TO_FLOAT(iParam0->f_32);
	Local_161.f_2 = SYSTEM::TO_FLOAT(iParam0->f_38);
	func_52(11, iParam0->f_38);
	func_52(12, iParam0->f_38);
	iLocal_57[1] = iParam0->f_38;
	iLocal_57[2] = iParam0->f_38;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iParam0->f_3C)
	{
		Local_161.f_4[iVar0 /*3*/] = { iParam0->f_3C[iVar0 /*3*/] };
		if (unk_0xFA30DFD0084E92FE(Local_161.f_4[iVar0 /*3*/], 2))
		{
			Local_161.f_3 = (Local_161.f_3 + IntToFloat(iParam0->f_3C[iVar0 /*3*/].f_1));
		}
		iVar0++;
	}
	Local_161 = iParam0->f_19B;
	Local_161.f_14 = ((Local_161.f_1 + Local_161.f_2) + Local_161.f_3);
}

float func_111(int iParam0, int iParam1)//Position - 0x4A9F
{
	if (!func_13(&(iParam0->f_92[iParam1 /*3*/])))
	{
		func_112(&(iParam0->f_92[iParam1 /*3*/]));
	}
	return func_102(&(iParam0->f_92[iParam1 /*3*/]));
}

void func_112(int iParam0)//Position - 0x4ACF
{
	if (!func_13(iParam0))
	{
		func_104(iParam0);
	}
}

void func_113(int iParam0)//Position - 0x4AE7
{
	if (iParam0->f_38 >= iParam0->f_3B)
	{
		iParam0->f_38 = SYSTEM::CEIL((IntToFloat(iParam0->f_32) * 0.4f));
	}
	else if (iParam0->f_38 < iParam0->f_3B && iParam0->f_38 >= iParam0->f_3A)
	{
		iParam0->f_38 = SYSTEM::CEIL((IntToFloat(iParam0->f_32) * 0.15f));
	}
	else
	{
		iParam0->f_38 = 0;
	}
	if (!func_21(iParam0->f_37, 1))
	{
		func_64(&(iParam0->f_37), 1);
	}
}

void func_114(int iParam0)//Position - 0x4B5B
{
	func_116();
	unk_0xEB233A3B7635D2AC();
	if (iParam0->f_38 < iParam0->f_3A)
	{
		if (iParam0->f_19B == 0)
		{
			func_249(iParam0, 105, 1, 0, 0);
		}
		else
		{
			func_249(iParam0, 103, 1, 0, 0);
		}
		func_115(1);
	}
	else if (iParam0->f_38 >= iParam0->f_3B)
	{
		func_249(iParam0, 101, 1, 0, 0);
	}
	else
	{
		func_249(iParam0, 102, 1, 0, 0);
	}
	func_310(iParam0, 16, 4f, 0);
}

void func_115(int iParam0)//Position - 0x4BCE
{
	Global_195FA.f_DD = iParam0;
}

void func_116()//Position - 0x4BDE
{
	Global_394A = 0;
	func_117();
}

void func_117()//Position - 0x4BEE
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

void func_118(var uParam0)//Position - 0x4C12
{
	float fVar0;
	
	fVar0 = uParam0->f_29;
	fVar0 = func_119(fVar0);
	iLocal_57[4] = SYSTEM::CEIL(fVar0);
	iLocal_57[5] = SYSTEM::CEIL(fVar0);
	func_52(4, SYSTEM::CEIL(fVar0));
	func_52(5, SYSTEM::CEIL(fVar0));
	uParam0->f_32 = SYSTEM::CEIL((fVar0 * 100f));
}

float func_119(float fParam0)//Position - 0x4C64
{
	return (fParam0 * 0.0006213712f);
}

void func_120(var uParam0, int iParam1)//Position - 0x4C74
{
	if (iParam1 < 5)
	{
		unk_0xF0059F27F7BB6680(&(uParam0->f_3C[iParam1 /*3*/]), 2);
		uParam0->f_69 = (uParam0->f_69 + uParam0->f_3C[iParam1 /*3*/].f_1);
	}
}

int func_121(var uParam0, bool bParam1, float fParam2)//Position - 0x4CA2
{
	if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
	{
		if (unk_0x62F3A07C43FFB568(uParam0->f_2, uParam0->f_4, 0))
		{
			if (func_42(1))
			{
				func_40(0);
			}
			if (func_32())
			{
				func_124();
				return 1;
			}
			else if (func_122(uParam0->f_4, fParam2, 1, 1056964608, 0, 1, 0))
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

int func_122(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x4D23
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
	func_123(iParam0);
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

void func_123(int iParam0)//Position - 0x4EB2
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

void func_124()//Position - 0x4EDE
{
	if (unk_0x36210078ECC9DC40(unk_0xB5CEFD608600A09F()))
	{
		unk_0xD50A43D7C495F078(unk_0xB5CEFD608600A09F());
	}
}

int func_125(vector3 vParam0, bool bParam1)//Position - 0x4EF9
{
	int iVar0;
	
	iVar0 = unk_0x390CF6C8AD6903B7(vParam0);
	unk_0x3F5F1772D71D5EC4(iVar0, func_126(unk_0x7AF0088ABFA713B6(), 1f, 1f));
	unk_0x0BBAABB52887CF8C(iVar0, bParam1);
	return iVar0;
}

float func_126(bool bParam0, float fParam1, float fParam2)//Position - 0x4F25
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_127(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x4F3C
{
	if (unk_0x724D816EA203A79E(iParam1))
	{
		if (bParam2)
		{
			if (!unk_0x1D403DFADBC2DE3C(iParam1, 0))
			{
				if (unk_0xA4813477CC5DD00F(iParam1))
				{
					if (unk_0x4FCDC2EC534819EF(unk_0xBC25C936A095B5BA()))
					{
						if (Local_238.f_6D == 0)
						{
							func_350(&Local_238, "Driver jacked the fiance", 7);
						}
					}
				}
			}
		}
		if (unk_0x36CEFBE9B745A58D(iParam1))
		{
			if (bParam3)
			{
				if (!unk_0x1D403DFADBC2DE3C(iLocal_257, 0))
				{
					unk_0xA4E856A8CD53B8DF(iLocal_257);
					unk_0x5558ED6D4A2DEC93(iLocal_257, unk_0xBC25C936A095B5BA(), 100f, 20000, 0, 0);
					unk_0x22321800954A532E(iLocal_257, true);
				}
				func_350(iParam0, "Target injured.", 13);
			}
			else
			{
				if (!unk_0x1D403DFADBC2DE3C(Local_251.f_2, 0))
				{
					unk_0xA4E856A8CD53B8DF(Local_251.f_2);
					unk_0x5558ED6D4A2DEC93(Local_251.f_2, unk_0xBC25C936A095B5BA(), 100f, 20000, 0, 0);
					unk_0x22321800954A532E(Local_251.f_2, true);
				}
				func_350(iParam0, "Mistress injured.", 14);
			}
		}
		else if (unk_0x231DB1D0F4218A1B(unk_0xB5CEFD608600A09F()))
		{
			if ((unk_0xD2B7EC731CF3F2D6(iParam1, joaat("weapon_stungun"), 0) || unk_0xD2B7EC731CF3F2D6(iParam1, 0, 2)) || unk_0xD2B7EC731CF3F2D6(iParam1, 0, 1))
			{
				if (!unk_0x1D403DFADBC2DE3C(iLocal_257, 0))
				{
					unk_0xA4E856A8CD53B8DF(iLocal_257);
					unk_0x5558ED6D4A2DEC93(iLocal_257, unk_0xBC25C936A095B5BA(), 100f, 20000, 0, 0);
					unk_0x22321800954A532E(iLocal_257, true);
				}
				if (!unk_0x1D403DFADBC2DE3C(Local_251.f_2, 0))
				{
					unk_0xA4E856A8CD53B8DF(Local_251.f_2);
					unk_0x5558ED6D4A2DEC93(Local_251.f_2, unk_0xBC25C936A095B5BA(), 100f, 20000, 0, 0);
					unk_0x22321800954A532E(Local_251.f_2, true);
				}
				func_350(iParam0, "Passenger injured by player with weapon.", 14);
			}
			if (!bParam3)
			{
				unk_0xA67D3DDB524B8DBA(unk_0xB5CEFD608600A09F());
			}
		}
	}
}

void func_128(int iParam0, var uParam1)//Position - 0x50D2
{
	unk_0x70870CD1718D74F0(iParam0->f_1AC, uParam1, -1);
	iParam0->f_29 = (*uParam1 - iParam0->f_2A);
}

int func_129()//Position - 0x50F3
{
	vector3 vVar0;
	
	func_149();
	if (iLocal_416 < 3 && iLocal_416 > 0)
	{
		if (func_145(iLocal_264))
		{
			iLocal_416 = 3;
		}
	}
	if (unk_0x724D816EA203A79E(iLocal_257))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_257))
		{
			vVar0 = { unk_0x541C2AEF053615BC(iLocal_257, true) };
		}
	}
	switch (iLocal_416)
	{
		case 0:
			if (func_144(1, 1, 1) && !Local_238.f_8E)
			{
				iLocal_264 = unk_0x105601648511CC64();
				func_142(&uLocal_355);
				func_141(&Local_352, -1, 1);
				func_246(vLocal_299, 0, 15f);
				func_246(vLocal_300, 0, 15f);
				func_140(&Local_238, 0f, 0f, 0f, 0f, 0f, 0f, 1112014848);
				func_139();
				func_310(&Local_238, 19, 0, 0);
				iLocal_416 = 1;
			}
			else
			{
				func_138("TX_FC CAN_PLAYER_START_CUTSCENE returns false", &(Local_238.f_4E), 1000);
			}
			break;
		
		case 1:
			if (func_111(&Local_238, 19) > 0.5f)
			{
				func_137(0, 0, 1);
				unk_0xEDAD35A0D81ED3FB(vLocal_299, 30f, 0, 0, 0, 0, false, 0);
				unk_0xEDAD35A0D81ED3FB(vLocal_300, 30f, 0, 0, 0, 0, false, 0);
				unk_0xA0C0B32E74BE8DB7(vLocal_299, 30f, 0);
				unk_0xA0C0B32E74BE8DB7(vLocal_300, 30f, 0);
				func_135(vLocal_299, 1114636288, 1);
				func_135(vLocal_300, 1114636288, 1);
				unk_0x379ACE23D404525C(vLocal_293, vLocal_294, false, 1);
				func_249(&Local_238, 35, 1, 1, 0);
				unk_0x6125108F6208C1F6(Local_238, func_134(0));
				unk_0x3553F2A72957724E(Local_238, func_133(0), 2);
				unk_0x9DF315A9EFFF87AC(Local_238, 44.5167f);
				unk_0x2FB83B8BD6C05FD2(Local_238, "HAND_SHAKE", 0.1f);
				unk_0x348665177DBFB93B(Local_238, true);
				unk_0x062C9995BFD27B2A(true, false, 3000, 1, 0, 0);
				if (unk_0xE59B7F5A03335350(Local_251.f_3, 0))
				{
					unk_0x641B19E156645A92(Local_251.f_3, vLocal_298, 1, false, 0, 1);
					unk_0x019CE76D5286C95C(Local_251.f_3, fLocal_304);
					if (unk_0xCAC52C0AB7ACD02D(&cLocal_309, vLocal_298, &iLocal_266))
					{
					}
					if (unk_0x393B6E06ED8B1152(&cLocal_309, iLocal_266, &uLocal_295))
					{
					}
					if (!unk_0x1D403DFADBC2DE3C(Local_251.f_2, 0))
					{
						unk_0xEB469C5B92ADC7B0(Local_251.f_2, Local_251.f_3, &cLocal_309, iLocal_397, iLocal_266 + 4, 0, -1, -1082130432, 0, 1073741824);
					}
				}
				func_310(&Local_238, 19, 0, 0);
				iLocal_416 = 2;
			}
			break;
		
		case 2:
			if (func_111(&Local_238, 19) > 5f)
			{
				func_310(&Local_238, 19, 0, 0);
				iLocal_416 = 4;
			}
			else if (func_111(&Local_238, 19) > 4.7f)
			{
				if (func_132())
				{
					if (!iLocal_282)
					{
						unk_0x9216004FAC08D1DC("CamPushInNeutral", 0, 0);
						unk_0xC4BA30B532FE260F(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
						iLocal_282 = 1;
					}
				}
			}
			break;
		
		case 3:
			if (unk_0xE59B7F5A03335350(Local_251.f_3, 0))
			{
				unk_0x641B19E156645A92(Local_251.f_3, vLocal_285, 1, false, 0, 1);
				unk_0x019CE76D5286C95C(Local_251.f_3, fLocal_307);
				unk_0xD87F0F9CDF39238A(Local_251.f_3);
			}
			func_310(&Local_238, 19, 0, 0);
			iLocal_416 = 4;
			break;
		
		case 4:
			if (unk_0xE59B7F5A03335350(Local_238.f_4, 0))
			{
				Local_238.f_8D = 0;
				unk_0x829FA4611BD56B44(800);
				unk_0xF3F01A78937DC905(0f);
				unk_0x2B9AEC08E469E384(0f, 1065353216);
				if (unk_0xE59B7F5A03335350(Local_251.f_3, 0))
				{
					unk_0x641B19E156645A92(Local_251.f_3, vLocal_285, 1, false, 0, 1);
					unk_0x019CE76D5286C95C(Local_251.f_3, fLocal_307);
					unk_0xD87F0F9CDF39238A(Local_251.f_3);
					if (!unk_0x1D403DFADBC2DE3C(Local_251.f_2, 0))
					{
						unk_0x49D46EE47C9CCB66(Local_251.f_2);
						unk_0x641B19E156645A92(Local_251.f_2, -691.1571f, -1117.732f, 13.52498f, 1, false, 0, 1);
						unk_0x019CE76D5286C95C(Local_251.f_2, -49.27436f);
					}
				}
				unk_0x4EC087603E1DEF9C(Local_238, 0);
				unk_0x4EC087603E1DEF9C(iLocal_237, 0);
				func_130(1, 1, 1);
				unk_0x062C9995BFD27B2A(false, false, 3000, 1, 0, 0);
				while (!unk_0x726D9204B160D23E())
				{
					SYSTEM::WAIT(0);
				}
				func_203(&Local_238, 19, 0);
				iLocal_416 = 5;
				return 1;
			}
			break;
	}
	return 0;
}

void func_130(bool bParam0, bool bParam1, int iParam2)//Position - 0x54F8
{
	if (bParam0)
	{
		unk_0xDDCAA2E64649E083(unk_0xFC1CAE18F3ECBF2D(), true, 0);
	}
	unk_0xD5E53AA0828339DA(1);
	func_22(0, 1, iParam2, 0, 0);
	if (bParam1)
	{
		unk_0x43F06392C4EF25E0(true);
		unk_0x59B038076F830627(true);
	}
	func_131(23, 0);
}

void func_131(int iParam0, bool bParam1)//Position - 0x5534
{
	if (bParam1)
	{
		unk_0xF0059F27F7BB6680(&Global_63B2, iParam0);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&Global_63B2, iParam0);
	}
}

int func_132()//Position - 0x5556
{
	if (unk_0x3D875C2512206692(unk_0xEBC6179F395EFBEB()) == 4)
	{
		return 1;
	}
	return 0;
}

Vector3 func_133(int iParam0)//Position - 0x556F
{
	vector3 vVar0;
	
	switch (iParam0)
	{
		case 0:
			vVar0 = { 1.9027f, 0f, 170.5764f };
			break;
	}
	return vVar0;
}

Vector3 func_134(int iParam0)//Position - 0x559A
{
	vector3 vVar0;
	
	switch (iParam0)
	{
		case 0:
			vVar0 = { -686.0368f, -1073.22f, 16.1762f };
			break;
	}
	return vVar0;
}

void func_135(vector3 vParam0, float fParam1, bool bParam2)//Position - 0x55C9
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	
	unk_0x3F473AC37A85C668(vParam0, &vVar1, &fVar0, 1, 1077936128, 0);
	vVar2 = { func_37(vVar1, func_136(fVar0), fParam1, fParam1, 5f) };
	vVar3 = { func_37(vVar1, fVar0, fParam1, fParam1, -5f) };
	vVar3.z = (vVar3.z - 22f);
	vVar2.z = (vVar2.z + 22f);
	if (bParam2)
	{
		unk_0x6935EBF9868982DC(vVar3, vVar2, false, 1);
	}
	else
	{
		unk_0x832ADB79A274D4E9(vVar3, vVar2, true);
	}
}

float func_136(float fParam0)//Position - 0x5652
{
	if (fParam0 > 180f)
	{
		return (fParam0 - 180f);
	}
	return (fParam0 + 180f);
}

void func_137(int iParam0, int iParam1, int iParam2)//Position - 0x567B
{
	unk_0xDDCAA2E64649E083(unk_0xFC1CAE18F3ECBF2D(), false, iParam0);
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		unk_0x7A71B0C6DDC0D7DA(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), 15f);
	}
	unk_0xD5E53AA0828339DA(iParam1);
	func_40(0);
	func_22(1, 1, iParam2, 0, 0);
	unk_0x43F06392C4EF25E0(false);
	unk_0x59B038076F830627(false);
	func_131(23, 1);
}

void func_138(char* sParam0, int iParam1, int iParam2)//Position - 0x56D2
{
	if (unk_0x105601648511CC64() < (*iParam1 + iParam2))
	{
		return;
	}
	*iParam1 = unk_0x105601648511CC64();
}

void func_139()//Position - 0x56F1
{
	int iVar0;
	
	iLocal_257 = unk_0x01B3635C3E8EDD81(26, iLocal_254, vLocal_291, fLocal_303, 1, true);
	unk_0x9F55475569E78DF5(iLocal_257, 5);
	unk_0xB0031DDAE4FF0BC3(iLocal_257, 3, 1, 2, 0);
	unk_0xB0031DDAE4FF0BC3(iLocal_257, 4, 0, 1, 0);
	unk_0xB0031DDAE4FF0BC3(iLocal_257, 2, 1, 2, 0);
	unk_0xC8FD3EBBB90E8D7F(iLocal_257, 20, true);
	func_7(&(Local_238.f_F4), 5, iLocal_257, "TaxiCarrie", 0, 1);
	if (!unk_0x1D403DFADBC2DE3C(iLocal_257, 0))
	{
		unk_0x019CE76D5286C95C(iLocal_257, fLocal_303);
		unk_0x02DAF06EA4F08219(&iVar0);
		unk_0xC5A6DFE2B8987B17(&iVar0);
		unk_0xDE2D2B13F24A979D(0, 2500);
		unk_0xE896C0AD02364F2A(0, "oddjobs@towingcome_here", "come_here_idle_a", 8f, -1.5f, 2000, 0, 0, 0, 0, 0);
		unk_0xA2DBAE5B6ADB4DC9(0, vLocal_292, 1f, 0, 0, 786603, -1082130432);
		unk_0x535008C596714F9E(iVar0);
		unk_0xA8E6405305C0D7DF(iLocal_257, iVar0);
		unk_0x02DAF06EA4F08219(&iVar0);
	}
}

void func_140(var uParam0, vector3 vParam1, vector3 vParam2, float fParam3)//Position - 0x57C9
{
	if (!unk_0xEF0E25DA0CB6E8FF(*uParam0))
	{
		*uParam0 = unk_0x585DE1CBEEB2D27D(26379945, vParam1, vParam2, fParam3, 0, 2);
	}
}

void func_141(var uParam0, int iParam1, bool bParam2)//Position - 0x57F4
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

void func_142(var uParam0)//Position - 0x5818
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		(uParam0[iVar0 /*8*/])->f_6 = 0;
		(uParam0[iVar0 /*8*/])->f_7 = 0;
		StringCopy(uParam0[iVar0 /*8*/], func_143(), 24);
		iVar0++;
	}
	unk_0xEB233A3B7635D2AC();
	func_45();
}

var func_143()//Position - 0x5858
{
	var uVar0;
	
	return uVar0;
}

int func_144(bool bParam0, bool bParam1, bool bParam2)//Position - 0x5862
{
	int iVar0;
	
	if (unk_0x21EBACBD9FF28F79())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		if (!unk_0xCBBE5AFE2CD2E9B6(unk_0xBC25C936A095B5BA()))
		{
			return 0;
		}
		iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
		if (bParam0)
		{
			if (unk_0x1D403DFADBC2DE3C(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x1D403DFADBC2DE3C(iVar0, 0))
			{
				if (unk_0x3187EF5798B5D209(iVar0, -1, 0) != unk_0xBC25C936A095B5BA())
				{
					return 0;
				}
			}
		}
		if (!unk_0x1D403DFADBC2DE3C(iVar0, 0))
		{
			if (unk_0xEFA31351B754089B(iVar0) < 0.95f || unk_0xEFA31351B754089B(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x17E283E7CFFB759B(unk_0xB5CEFD608600A09F()))
	{
		return 0;
	}
	if (!unk_0xDB625D1720DAC49A(unk_0xB5CEFD608600A09F()))
	{
		return 0;
	}
	return 1;
}

int func_145(int iParam0)//Position - 0x5947
{
	if (func_148() && unk_0x105601648511CC64() >= iParam0 + 1000)
	{
		unk_0x7A41D32A383895D8(500);
		while (!unk_0x17FAADF9916EF741())
		{
			SYSTEM::WAIT(0);
		}
		func_40(0);
		func_146();
		return 1;
	}
	return 0;
}

void func_146()//Position - 0x598A
{
	Global_394A = 0;
	func_147();
}

void func_147()//Position - 0x599A
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

int func_148()//Position - 0x59F1
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

void func_149()//Position - 0x5A23
{
	if (func_34())
	{
		unk_0xA451DE3BE57FDA90("appInternet");
	}
	if (func_33())
	{
		unk_0xA451DE3BE57FDA90("appCamera");
	}
	if (func_42(1))
	{
		func_40(0);
	}
}

int func_150()//Position - 0x5A56
{
	if (!unk_0xD6513D668481290A(iLocal_254))
	{
		return 0;
	}
	if (!unk_0xF9E082857622D91E("MOVE_DUCK_FOR_COVER"))
	{
		func_138("TAXI_ASSETS_STREAMED - Loading MOVE_DUCK_FOR_COVER", &iLocal_263, 1000);
		return 0;
	}
	return 1;
}

void func_151()//Position - 0x5A8C
{
	unk_0xF243B7A14FCFD0F4(iLocal_254);
	unk_0x522053D86D6E1C7A("MOVE_DUCK_FOR_COVER");
	unk_0x522053D86D6E1C7A(&cLocal_312);
	unk_0x522053D86D6E1C7A(&cLocal_321);
	unk_0x522053D86D6E1C7A(&cLocal_330);
	unk_0x522053D86D6E1C7A(&cLocal_339);
}

void func_152(var uParam0, int iParam1, int iParam2)//Position - 0x5ABF
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
			unk_0xC4BA30B532FE260F(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_B = 0;
		}
	}
	unk_0x4AED68BFACFB14CB(true);
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
		if (func_153(uParam0->f_3))
		{
			unk_0x7456702622C62EA0(1);
		}
	}
	if (!unk_0xEAEFBBEC1AEA464B(sVar0))
	{
		if (func_153(sVar0))
		{
			unk_0x7456702622C62EA0(1);
		}
	}
}

int func_153(char* sParam0)//Position - 0x5B9C
{
	unk_0xF07D20149ECBC61E(sParam0);
	return unk_0xA66DBDA0A072514A(0);
}

int func_154()//Position - 0x5BAF
{
	if (func_111(&Local_238, 20) > 2f)
	{
		if (!Local_238.f_8E)
		{
			func_183(&Local_238, &Local_251, (unk_0x105601648511CC64() - iLocal_308) > 15000, 0);
		}
	}
	if (unk_0xE59B7F5A03335350(Local_251.f_3, 0))
	{
		if (unk_0xE59B7F5A03335350(Local_238.f_4, 0))
		{
			if (unk_0x0C265B3C448E6954(Local_238.f_4, vLocal_348, vLocal_349, fLocal_350, 0, true, 0))
			{
				unk_0x241D744C1CCBC526(Local_238.f_4, 5f, 1, 0);
				return 1;
			}
		}
		func_155(&uLocal_45, Local_251.f_3, 0, 0, 1, 1, 1);
		func_128(&Local_238, &(Local_238.f_2B));
		if (!iLocal_270)
		{
			if (!unk_0x1D403DFADBC2DE3C(Local_251.f_2, 0))
			{
				if (!unk_0xB34E411B0A4BF096(Local_251.f_3) && IntToFloat((unk_0x105601648511CC64() - iLocal_308)) > unk_0x2FB219F9AD4BD760(120, "txm_fc_h1_"))
				{
					unk_0x509F549022512095(Local_251.f_2, Local_251.f_3, vLocal_298, 28f, 0, Local_251.f_1, iLocal_396, 13.75f, -1f);
					iLocal_270 = 1;
				}
			}
		}
	}
	return 0;
}

void func_155(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x5CAE
{
	func_156(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_156(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)//Position - 0x5CC8
{
	uParam0->f_6 = 0;
	func_157(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

void func_157(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)//Position - 0x5CEA
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
	if (func_153(iVar0))
	{
		func_182();
	}
	if (func_181(iParam1) && unk_0x8F6EAC9E7D6812D5(iParam1))
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
			if (func_176(uParam0, bParam5, bParam7, 0))
			{
				func_173(uParam0, iParam1, vParam2, iParam4);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_162(iVar0))
				{
					if ((unk_0xEAEFBBEC1AEA464B(uParam0->f_3) && !unk_0xEAEFBBEC1AEA464B(iVar0)) && unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
					{
						if ((iVar1 && !unk_0xF16DAFF595E80F7C()) && uParam6)
						{
							if (!func_153(iVar0))
							{
								func_161(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x3362CDE8460ED38B("CMN_HINT", iVar0))
								{
									func_160(1);
								}
							}
						}
					}
				}
			}
			else if (func_162(iVar0))
			{
				if (unk_0xEAEFBBEC1AEA464B(uParam0->f_3) && !unk_0xEAEFBBEC1AEA464B(iVar0))
				{
					if (((unk_0xD1DC4B08247A4317(iParam1) && iVar1) && !unk_0xF16DAFF595E80F7C()) && uParam6)
					{
						if (!func_153(iVar0))
						{
							func_161(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x3362CDE8460ED38B("CMN_HINT", iVar0))
							{
								func_160(1);
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
				if (func_153(sParam3))
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
						func_152(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xE3CA72BD77D43B09(unk_0xBC25C936A095B5BA()))
				{
					if (unk_0x3D875C2512206692(6) == 3 || unk_0x3D875C2512206692(6) == 4)
					{
						func_152(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x57379381A330B2FF(unk_0xBC25C936A095B5BA()))
				{
					if (unk_0x3D875C2512206692(4) == 3 || unk_0x3D875C2512206692(4) == 4)
					{
						func_152(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xD3A0CD3AD9C3D22A(unk_0xBC25C936A095B5BA()))
				{
					if (unk_0x3D875C2512206692(5) == 3 || unk_0x3D875C2512206692(5) == 4)
					{
						func_152(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x5CFC8E6CC224744A(unk_0xBC25C936A095B5BA()))
				{
					if (unk_0x3D875C2512206692(2) == 3 || unk_0x3D875C2512206692(2) == 4)
					{
						func_152(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x621126C4FACA4770() == 3 || unk_0x621126C4FACA4770() == 4)
				{
					func_152(uParam0, iVar0, 1);
				}
			}
			if (!func_176(uParam0, bParam5, bParam7, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_159(uParam0))
				{
					func_158(uParam0);
				}
			}
		}
	}
	else
	{
		func_152(uParam0, iVar0, 0);
	}
}

void func_158(var uParam0)//Position - 0x6057
{
	if (func_181(unk_0xBC25C936A095B5BA()))
	{
		unk_0x44C98C11ED6DD327(unk_0xBC25C936A095B5BA());
	}
	if (unk_0xBFFAD293E2DA992B())
	{
		unk_0x4AED68BFACFB14CB(true);
		unk_0xF04F2EB4128A4367(0);
		unk_0xC1300D0F3A74E20B("HINT_CAM_SCENE");
		unk_0x1A058EB0D1ACEC78("FocusIn");
		if (uParam0->f_B)
		{
			unk_0x9216004FAC08D1DC("FocusOut", 0, 0);
			unk_0xC4BA30B532FE260F(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_B = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_159(var uParam0)//Position - 0x60C0
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

int func_160(bool bParam0)//Position - 0x60EB
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

void func_161(char* sParam0, int iParam1)//Position - 0x6195
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 0, true, iParam1);
}

int func_162(char* sParam0)//Position - 0x61AC
{
	if (!func_163(1, 1, 0))
	{
		if ((!unk_0xF1734B55490E9045(sParam0) && func_153(sParam0)) || func_153("CMN_HINT"))
		{
			unk_0x7456702622C62EA0(1);
		}
		return 0;
	}
	switch (Global_8C41)
	{
		case 0:
		case 3:
			if (func_160(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_160(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_160(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_163(bool bParam0, bool bParam1, bool bParam2)//Position - 0x6245
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
	if (func_42(0))
	{
		return 0;
	}
	if (func_172())
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
	if ((func_171() || func_170(Global_440000.f_243FE)) || func_169())
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
			iVar1 = func_168(unk_0xBC25C936A095B5BA(), 0);
			if (((unk_0xE8E192A5EFE0253F(iVar0, iVar1) || (unk_0x6F79ECA8C83E4357(iVar0) == 562680400 && iVar1 != -1)) || (unk_0x6F79ECA8C83E4357(iVar0) == 1181327175 && iVar1 != -1)) || (((unk_0x6F79ECA8C83E4357(iVar0) == -1693015116 && iVar1 == 0) && func_167(iVar0, 10)) && unk_0x3EB14CBD49DA0017(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (func_164(unk_0xB5CEFD608600A09F()))
	{
		return 0;
	}
	return 1;
}

int func_164(int iParam0)//Position - 0x6493
{
	if (iParam0 != func_166())
	{
		if (func_165(iParam0, 1, 1))
		{
			return Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1;
		}
		else if ((Global_140856 && iParam0 == unk_0xB5CEFD608600A09F()) && func_165(iParam0, 1, 0))
		{
			return Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1;
		}
	}
	return 0;
}

int func_165(int iParam0, bool bParam1, bool bParam2)//Position - 0x64F9
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

int func_166()//Position - 0x6543
{
	return -1;
}

int func_167(int iParam0, int iParam1)//Position - 0x654C
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

int func_168(int iParam0, int iParam1)//Position - 0x65AE
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

var func_169()//Position - 0x6633
{
	return Global_255A46.f_10;
}

bool func_170(int iParam0)//Position - 0x6641
{
	return iParam0 == 51;
}

var func_171()//Position - 0x664E
{
	return Global_255A46.f_F;
}

bool func_172()//Position - 0x665C
{
	return unk_0x105601648511CC64() <= Global_43C1.f_1671 + 100;
}

void func_173(var uParam0, int iParam1, vector3 vParam2, int iParam3)//Position - 0x6671
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
		func_152(uParam0, 0, 0);
	}
	if (func_38(vParam2, 0f, 0f, 0f, 0))
	{
		if (unk_0x386592AF38881675(iParam1))
		{
			iVar0 = unk_0x399F7937FFE4DEBF(iParam1);
			if (!unk_0x5237AF95232D78C5(iVar0, 0))
			{
				if (unk_0x15DBD981998D4FE1(iVar0))
				{
					if (!func_174())
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
	unk_0x4AED68BFACFB14CB(false);
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
	unk_0xC4BA30B532FE260F(-1, "FocusIn", "HintCamSounds", true);
	uParam0->f_B = 1;
	uParam0->f_8 = unk_0x105601648511CC64();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_174()//Position - 0x6781
{
	return func_175(unk_0xB5CEFD608600A09F());
}

int func_175(int iParam0)//Position - 0x6791
{
	if (unk_0x6F79ECA8C83E4357(unk_0xA95CF30C72EB526E(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_176(var uParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x67B0
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
					if (func_180(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x105601648511CC64();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_179(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x105601648511CC64();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_179(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x105601648511CC64();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_180(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x105601648511CC64();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_159(uParam0))
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
						if (!func_180(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x105601648511CC64();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_179(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x105601648511CC64();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_179(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x105601648511CC64();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_180(bParam1, bParam2, bParam3))
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
					if (!func_180(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_179(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_179(bParam1, bParam2, bParam3) || unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
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
				else if (!func_180(bParam1, bParam2, bParam3))
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
						if (func_178(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_177(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1) || func_177(bParam1, bParam2, bParam3))
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
					else if (func_178(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_159(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_163(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_182();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_177(bool bParam0, bool bParam1, bool bParam2)//Position - 0x6B1C
{
	if (!func_163(bParam0, bParam1, bParam2))
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

int func_178(bool bParam0, bool bParam1, bool bParam2)//Position - 0x6B6E
{
	if (!func_163(bParam0, bParam1, bParam2))
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
				unk_0x4AED68BFACFB14CB(false);
				return 1;
			}
		}
	}
	return 0;
}

int func_179(bool bParam0, bool bParam1, bool bParam2)//Position - 0x6BB7
{
	if (!func_163(bParam0, bParam1, bParam2))
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

int func_180(bool bParam0, bool bParam1, bool bParam2)//Position - 0x6C16
{
	if (!func_163(bParam0, bParam1, bParam2))
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
				unk_0x4AED68BFACFB14CB(false);
				return 1;
			}
		}
	}
	return 0;
}

int func_181(int iParam0)//Position - 0x6C6C
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

void func_182()//Position - 0x6CC7
{
	unk_0xF0059F27F7BB6680(&Global_93C, 4);
}

void func_183(int iParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0x6CD7
{
	if (!unk_0x1D403DFADBC2DE3C(uParam1->f_2, 0))
	{
		if (unk_0xD9C1758D86688CEA(uParam1->f_2, unk_0xBC25C936A095B5BA(), 0))
		{
			func_350(iParam0, "Taxi shot up the car", 12);
		}
	}
	else
	{
		func_350(iParam0, "Followee died", 13);
	}
	if ((unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0 && unk_0xE59B7F5A03335350(uParam1->f_3, 0)) && !unk_0x1D403DFADBC2DE3C(uParam1->f_2, 0))
	{
		unk_0x488EB206498BC561(uParam1->f_2, uParam1->f_3, iParam0->f_4, 8, 100f, 786468, 1000f, 1000f, 1);
		unk_0x22321800954A532E(uParam1->f_2, true);
		func_350(iParam0, "Player went wanted", 4);
	}
	func_192(iParam0, uParam1);
	if (unk_0xE59B7F5A03335350(uParam1->f_3, 0) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (bParam3)
		{
			if (func_191(&(uParam1->f_3)))
			{
				unk_0x808BC8EC57F5B2FF(unk_0x541C2AEF053615BC(uParam1->f_3, true), 22.5f, 255, 0, 0, 60);
			}
			else if (func_190(&(uParam1->f_3)))
			{
				unk_0x808BC8EC57F5B2FF(unk_0x541C2AEF053615BC(uParam1->f_3, true), func_189(&(uParam1->f_3)), 255, 0, 0, 60);
			}
			else if (func_188(&(uParam1->f_3)))
			{
				unk_0x808BC8EC57F5B2FF(unk_0x541C2AEF053615BC(uParam1->f_3, true), 13f, 125, 0, 125, 60);
			}
		}
		if ((unk_0x77F5C030D3238E26(uParam1->f_3) < uParam1->f_F || unk_0xD9C1758D86688CEA(uParam1->f_3, unk_0xBC25C936A095B5BA(), 1)) || unk_0xA6EB9CEADFB819EC(uParam1->f_3) < uParam1->f_10)
		{
			if (unk_0xD9C1758D86688CEA(uParam1->f_3, unk_0xBC25C936A095B5BA(), 0))
			{
				func_350(iParam0, "Taxi shot up the car", 12);
			}
			if (func_111(iParam0, 13) > 5f)
			{
				func_187(iParam0, uParam1, 1);
			}
			else
			{
				uParam1->f_F = unk_0x77F5C030D3238E26(uParam1->f_3);
				uParam1->f_5 = unk_0x8D66276473ABD7CC(uParam1->f_3);
				uParam1->f_10 = unk_0xA6EB9CEADFB819EC(uParam1->f_3);
			}
		}
		if (func_48(iParam0->f_4, uParam1->f_3, 1) >= 120f)
		{
			if (func_48(iParam0->f_4, uParam1->f_3, 1) >= 480f)
			{
				func_249(iParam0, 143, 0, 0, 0);
				func_350(iParam0, "Taxi let the Chasee lose him", 2);
			}
			else if (!uParam1->f_15)
			{
				if ((func_186(&(iParam0->f_199), unk_0x541C2AEF053615BC(iParam0->f_4, true), unk_0x541C2AEF053615BC(uParam1->f_3, true), 0) == -1 && func_48(iParam0->f_4, uParam1->f_3, 1) >= 150f) && func_111(iParam0, 8) > 10f)
				{
					uParam1->f_15 = 1;
					uParam1->f_17 = 0;
					uParam1->f_9++;
					func_310(iParam0, 8, 0, 0);
					if (uParam1->f_9 > 3)
					{
						if (unk_0xE59B7F5A03335350(uParam1->f_3, 0) && !unk_0x1D403DFADBC2DE3C(uParam1->f_2, 0))
						{
							unk_0x488EB206498BC561(uParam1->f_2, uParam1->f_3, iParam0->f_4, 8, 100f, 786468, 1000f, 1000f, 1);
							unk_0x22321800954A532E(uParam1->f_2, true);
						}
						func_350(iParam0, "Taxi let the Chasee lose him", 2);
					}
					else if (uParam1->f_9 == 3)
					{
						func_185(iParam0, 6, 1);
					}
					else
					{
						func_185(iParam0, 1, 1);
					}
					func_249(iParam0, 13, 1, 0, 0);
				}
			}
			else if (unk_0x4833C1F1F1364989(iParam0->f_4, uParam1->f_3, 17))
			{
				uParam1->f_15 = 0;
				func_310(iParam0, 8, 0, 0);
			}
			else if (func_48(iParam0->f_4, uParam1->f_3, 1) >= 300f)
			{
				func_249(iParam0, 143, 0, 0, 0);
				func_350(iParam0, "Taxi let the Chasee lose him", 2);
			}
		}
		else if (((func_48(iParam0->f_4, uParam1->f_3, 1) < 22.5f && func_191(&(uParam1->f_3))) || (func_48(iParam0->f_4, uParam1->f_3, 1) < 13f && func_188(&(uParam1->f_3)))) || (func_48(iParam0->f_4, uParam1->f_3, 1) < func_189(&(uParam1->f_3)) && func_190(&(uParam1->f_3))))
		{
			if (!uParam1->f_16 || func_184(iParam0, 21))
			{
				if ((unk_0x4833C1F1F1364989(iParam0->f_4, uParam1->f_3, 17) && func_111(iParam0, 8) > 10f) && bParam2)
				{
					uParam1->f_16 = 1;
					uParam1->f_17 = 0;
					uParam1->f_8++;
					uParam1->f_9++;
					func_310(iParam0, 8, 0, 0);
					if (!func_184(iParam0, 21))
					{
						func_310(iParam0, 21, 0, 0);
					}
					if (uParam1->f_9 > 3)
					{
						if (!func_206())
						{
							if (unk_0xE59B7F5A03335350(uParam1->f_3, 0) && !unk_0x1D403DFADBC2DE3C(uParam1->f_2, 0))
							{
								unk_0x488EB206498BC561(uParam1->f_2, uParam1->f_3, iParam0->f_4, 8, 100f, 786468, 1000f, 1000f, 1);
								unk_0x22321800954A532E(uParam1->f_2, true);
							}
							func_350(iParam0, "Taxi was ID'd by the Chasee", 3);
						}
						else
						{
							func_146();
						}
					}
					else if (uParam1->f_9 == 3)
					{
						func_185(iParam0, 3, 1);
					}
					else
					{
						func_185(iParam0, 2, 1);
					}
					if (func_48(iParam0->f_4, uParam1->f_3, 1) < 15f)
					{
						if (!func_206())
						{
							func_249(iParam0, 143, 0, 0, 0);
							func_45();
							if (unk_0xE59B7F5A03335350(uParam1->f_3, 0) && !unk_0x1D403DFADBC2DE3C(uParam1->f_2, 0))
							{
								unk_0x488EB206498BC561(uParam1->f_2, uParam1->f_3, iParam0->f_4, 8, 100f, 786468, 1000f, 1000f, 1);
								unk_0x22321800954A532E(uParam1->f_2, true);
							}
							func_350(iParam0, "Taxi was ID'd by the Chasee", 3);
						}
						else
						{
							func_146();
						}
					}
					else if (uParam1->f_9 <= 3)
					{
						func_249(iParam0, 13, 1, 0, 0);
					}
					uParam1->f_F = unk_0x77F5C030D3238E26(uParam1->f_3);
				}
			}
		}
		else
		{
			if (func_184(iParam0, 21))
			{
				func_203(iParam0, 21, 0);
			}
			if (uParam1->f_16)
			{
				if (func_48(iParam0->f_4, uParam1->f_3, 1) > 22.5f)
				{
					uParam1->f_16 = 0;
					func_310(iParam0, 8, 0, 0);
				}
			}
			if (uParam1->f_15)
			{
				if (func_48(iParam0->f_4, uParam1->f_3, 1) < 150f && unk_0x4833C1F1F1364989(iParam0->f_4, uParam1->f_3, 17))
				{
					uParam1->f_15 = 0;
					func_310(iParam0, 8, 0, 0);
				}
			}
			if (!uParam1->f_17)
			{
				if (!uParam1->f_15 && !uParam1->f_16)
				{
					uParam1->f_17 = 1;
					func_185(iParam0, 8, 1);
					func_249(iParam0, 13, 1, 0, 0);
					func_310(iParam0, 8, 0, 0);
				}
			}
			else
			{
				if (iParam0->f_50 > iParam0->f_65)
				{
					uParam1->f_18 = 1;
				}
				if ((!uParam1->f_18 && !uParam1->f_15) && !uParam1->f_16)
				{
					if (func_111(iParam0, 8) > 15f && !func_206())
					{
						func_185(iParam0, 9, 1);
						func_249(iParam0, 13, 1, 0, 0);
						func_310(iParam0, 8, 0, 0);
					}
				}
			}
		}
	}
}

bool func_184(int iParam0, int iParam1)//Position - 0x7382
{
	return func_13(&(iParam0->f_92[iParam1 /*3*/]));
}

void func_185(int iParam0, int iParam1, bool bParam2)//Position - 0x7396
{
	iParam0->f_19E = iParam1;
	if (bParam2)
	{
	}
}

int func_186(var uParam0, vector3 vParam1, vector3 vParam2, bool bParam3)//Position - 0x73AA
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

void func_187(int iParam0, var uParam1, bool bParam2)//Position - 0x7424
{
	uParam1->f_6++;
	uParam1->f_9++;
	if (uParam1->f_6 >= 1)
	{
		if (!func_206())
		{
			func_274(iParam0, 0, 1);
			if (unk_0xE59B7F5A03335350(uParam1->f_3, 0) && !unk_0x1D403DFADBC2DE3C(uParam1->f_2, 0))
			{
				unk_0x488EB206498BC561(uParam1->f_2, uParam1->f_3, iParam0->f_4, 8, 100f, 786468, 1000f, 1000f, 1);
				unk_0x22321800954A532E(uParam1->f_2, true);
			}
			func_350(iParam0, "Taxi was ID'd by the Chasee", 3);
		}
		else
		{
			func_146();
		}
	}
	else
	{
		func_310(iParam0, 13, 0, 0);
		unk_0x5502708AECB47F5D(uParam1->f_3);
		func_185(iParam0, 10, 1);
		func_274(iParam0, 1, 0);
	}
	if (bParam2)
	{
	}
}

int func_188(var uParam0)//Position - 0x74DF
{
	if (unk_0xE59B7F5A03335350(*uParam0, 0))
	{
		if (unk_0xB66CFDE6B830965A(*uParam0) || unk_0x8910237449BB6F79(*uParam0) < 4f)
		{
			return 1;
		}
	}
	return 0;
}

float func_189(var uParam0)//Position - 0x7510
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar2 = 22.5f;
	fVar3 = 13f;
	if (unk_0xE59B7F5A03335350(*uParam0, 0))
	{
		fVar1 = unk_0x8910237449BB6F79(*uParam0);
	}
	fVar0 = ((((fVar1 - 4f) / 11f) * (fVar2 - fVar3)) + fVar3);
	return fVar0;
}

int func_190(var uParam0)//Position - 0x7551
{
	if (unk_0xE59B7F5A03335350(*uParam0, 0))
	{
		if (unk_0x8910237449BB6F79(*uParam0) >= 4f && unk_0x8910237449BB6F79(*uParam0) < 15f)
		{
			return 1;
		}
	}
	return 0;
}

int func_191(var uParam0)//Position - 0x7587
{
	if (unk_0xE59B7F5A03335350(*uParam0, 0))
	{
		if (unk_0x8910237449BB6F79(*uParam0) >= 15f)
		{
			return 1;
		}
	}
	return 0;
}

void func_192(int iParam0, var uParam1)//Position - 0x75AF
{
	if (unk_0xE59B7F5A03335350(uParam1->f_3, 0) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (func_48(iParam0->f_4, uParam1->f_3, 1) < 120f)
		{
			if (iParam0->f_19E == 6 || iParam0->f_19E == 1)
			{
				if (func_193(iParam0) == 13)
				{
					func_116();
				}
			}
		}
		if (func_48(iParam0->f_4, uParam1->f_3, 1) >= 22.5f)
		{
			if (iParam0->f_19E == 3 || iParam0->f_19E == 2)
			{
				if (func_193(iParam0) == 13)
				{
					func_116();
				}
			}
		}
	}
}

int func_193(int iParam0)//Position - 0x7649
{
	return iParam0->f_1A0;
}

void func_194(int iParam0, vector3 vParam1, float fParam2, var uParam3, int iParam4)//Position - 0x7656
{
	if (!func_206())
	{
		if (unk_0xE59B7F5A03335350(iParam0, 0))
		{
			if (func_50(iParam0, vParam1, 1) < fParam2)
			{
				if (func_196(uParam3))
				{
					func_195(uParam3, iParam4, -1);
				}
			}
		}
	}
}

void func_195(var uParam0, int iParam1, int iParam2)//Position - 0x7693
{
	*uParam0 = iParam2;
	if (iParam1 > -1)
	{
		uParam0->f_1B = iParam1;
	}
}

bool func_196(var uParam0)//Position - 0x76AC
{
	return *uParam0 == 0;
}

void func_197(int iParam0)//Position - 0x76B9
{
	if (func_200(iParam0))
	{
		func_198(iParam0);
	}
}

void func_198(var uParam0)//Position - 0x76D0
{
	if (unk_0xFFAEC2D4BAF978BE() && uParam0->f_1A2.f_4 != 0)
	{
		uParam0->f_1A2.f_4 = 0;
	}
	switch (uParam0->f_1A2.f_4)
	{
		case 0:
			uParam0->f_1A2 = unk_0x93DD0CE3F3963C56();
			func_203(uParam0, 20, 0);
			uParam0->f_1A2.f_4++;
			break;
		
		case 1:
			if (uParam0->f_1A2.f_8 && !uParam0->f_1A2 == uParam0->f_1A2.f_2)
			{
				if (func_111(uParam0, 20) > 3f)
				{
					func_249(uParam0, 87, 1, 0, 0);
					uParam0->f_1A2.f_8 = 0;
					uParam0->f_1A2.f_4++;
				}
			}
			else if (uParam0->f_1A2 == uParam0->f_1A2.f_1)
			{
				if (!func_21(uParam0->f_51, 262144) || !func_21(uParam0->f_51, 1048576))
				{
					if (func_111(uParam0, 20) > 5f)
					{
						uParam0->f_1A2.f_5 = 1;
						func_249(uParam0, 84, 1, 0, 0);
						uParam0->f_1A2.f_4++;
					}
				}
			}
			else if (uParam0->f_1A2 == uParam0->f_1A2.f_2)
			{
				if (!func_21(uParam0->f_52, 67108864))
				{
					if (func_111(uParam0, 20) > 5f)
					{
						uParam0->f_1A2.f_6 = 1;
						uParam0->f_1A2.f_8 = 0;
						func_249(uParam0, 85, 1, 0, 0);
						func_203(uParam0, 22, 0);
						uParam0->f_1A2.f_4++;
					}
				}
			}
			else if (uParam0->f_1A2.f_7)
			{
				if (func_111(uParam0, 20) > 8f)
				{
					func_249(uParam0, 86, 1, 0, 0);
					uParam0->f_1A2.f_4++;
				}
			}
			break;
		
		case 2:
			if (func_21(uParam0->f_51, 262144) || func_21(uParam0->f_52, 67108864))
			{
				if (!func_184(uParam0, 22))
				{
					func_199(uParam0, 22);
				}
			}
			if (func_184(uParam0, 22) && func_111(uParam0, 22) > 15f)
			{
				if (uParam0->f_1A2 == uParam0->f_1A2.f_1)
				{
					if (!func_21(uParam0->f_51, 1048576))
					{
						func_249(uParam0, 84, 1, 0, 0);
						func_203(uParam0, 22, 0);
					}
				}
				else if (uParam0->f_1A2 == uParam0->f_1A2.f_2)
				{
					if (!func_21(uParam0->f_52, 134217728))
					{
						func_249(uParam0, 85, 1, 0, 0);
						func_203(uParam0, 22, 0);
					}
				}
			}
			break;
	}
}

void func_199(var uParam0, int iParam1)//Position - 0x794B
{
	func_112(&(uParam0->f_92[iParam1 /*3*/]));
}

bool func_200(var uParam0)//Position - 0x795F
{
	return uParam0->f_78;
}

int func_201(int iParam0, int iParam1)//Position - 0x796B
{
	if (unk_0x904E94842BB9E173(unk_0xFC1CAE18F3ECBF2D()) < 1)
	{
		if (unk_0x36CEFBE9B745A58D(iParam0))
		{
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0xD9C1758D86688CEA(iParam0, unk_0xBC25C936A095B5BA(), 1))
				{
					unk_0x7024F5748BAC99FC(unk_0xFC1CAE18F3ECBF2D(), 1, 0);
					unk_0xCE6A8FE7DACF8BD4(unk_0xFC1CAE18F3ECBF2D(), 0);
					if (unk_0x2DA8CA50A72528FB(iParam1))
					{
						unk_0x07B8ECB35A4ED3AC(&iParam1);
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_202(int iParam0)//Position - 0x79C9
{
	if (unk_0xE59B7F5A03335350(iParam0->f_4, 0))
	{
		if (unk_0x3187EF5798B5D209(iParam0->f_4, -1, 0) == unk_0xBC25C936A095B5BA())
		{
			return 1;
		}
	}
	return 0;
}

void func_203(int iParam0, int iParam1, bool bParam2)//Position - 0x79F3
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
			func_101(&(iParam0->f_92[iVar0 /*3*/]));
			iVar0++;
		}
	}
	else
	{
		func_101(&(iParam0->f_92[iParam1 /*3*/]));
	}
	if (bParam2)
	{
	}
}

int func_204(int iParam0, int iParam1)//Position - 0x7A3C
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

void func_205()//Position - 0x7A5D
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { 402.42f, -1457.19f, 28.82f };
	vVar1 = { -701.25f, -1080.29f, 12.29f };
	if (vVar1.x <= vVar0.x)
	{
		vLocal_301.x = vVar1.x;
		vLocal_302.x = vVar0.x;
	}
	else
	{
		vLocal_301.x = vVar0.x;
		vLocal_302.x = vVar1.x;
	}
	if (vVar1.y <= vVar0.y)
	{
		vLocal_301.y = vVar1.y;
		vLocal_302.y = vVar0.y;
	}
	else
	{
		vLocal_301.y = vVar0.y;
		vLocal_302.y = vVar1.y;
	}
	vLocal_301 = { vLocal_301 - Vector(20f, 20f, 20f) };
	vLocal_302 = { vLocal_302 + Vector(20f, 20f, 20f) };
	unk_0x4B656426561BA934(vLocal_301.x, vLocal_301.y, vLocal_302.x, vLocal_302.y);
}

int func_206()//Position - 0x7B26
{
	if (Global_3DB8 != 0 || unk_0xE6711F601F11B66B())
	{
		return 1;
	}
	return 0;
}

int func_207()//Position - 0x7B48
{
	func_149();
	if (iLocal_417 < 9 && iLocal_417 > 2)
	{
		if (func_145(iLocal_264))
		{
			iLocal_417 = 9;
		}
	}
	switch (iLocal_417)
	{
		case 0:
			if (func_144(1, 1, 1))
			{
				iLocal_264 = unk_0x105601648511CC64();
				func_137(256, 0, 1);
				func_142(&uLocal_355);
				func_141(&Local_352, 2, 0);
				if (func_213(&Local_251, vLocal_289, fLocal_306))
				{
					unk_0x6935EBF9868982DC(1346.9f, -1606.52f, 31.16f, 1457.25f, -1508.19f, 83.05f, true, 1);
					func_140(&Local_238, 0f, 0f, 0f, 0f, 0f, 0f, 1112014848);
					func_249(&Local_238, 138, 1, 0, 0);
					iLocal_417 = 1;
				}
			}
			break;
		
		case 1:
			if (func_111(&Local_238, 19) > 3f)
			{
				if (!unk_0x36CEFBE9B745A58D(Local_251.f_2))
				{
					unk_0x2E35C4FA5F0ED22F(Local_251.f_2, true);
					unk_0xA4E856A8CD53B8DF(Local_251.f_2);
					if (unk_0xE59B7F5A03335350(Local_251.f_3, 0))
					{
						unk_0x02DAF06EA4F08219(&iLocal_232);
						unk_0xC5A6DFE2B8987B17(&iLocal_232);
						unk_0xD179FA0466FA4FE3(0, Local_251.f_3, 20000, -1, 1f, 1, 0);
						unk_0xE896C0AD02364F2A(0, "veh@truck@ds@base", "start_engine", 8f, -8f, -1, 0, 0, 0, 0, 0);
						unk_0x535008C596714F9E(iLocal_232);
						unk_0xA8E6405305C0D7DF(Local_251.f_2, iLocal_232);
						unk_0xD421BC740C5340C3(Local_251.f_3, 1);
					}
				}
				unk_0xD2096E855BB80581(unk_0xBC25C936A095B5BA(), Local_238.f_11);
				unk_0x6125108F6208C1F6(Local_238, func_212(0));
				unk_0x3553F2A72957724E(Local_238, func_211(0), 2);
				unk_0x9DF315A9EFFF87AC(Local_238, 17.2f);
				unk_0x2FB83B8BD6C05FD2(Local_238, "HAND_SHAKE", 0.1f);
				unk_0x348665177DBFB93B(Local_238, true);
				unk_0x062C9995BFD27B2A(true, false, 3000, 1, 0, 0);
				func_310(&Local_238, 19, 0, 0);
				iLocal_417 = 2;
			}
			break;
		
		case 2:
			iLocal_237 = unk_0x585DE1CBEEB2D27D(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
			unk_0x6125108F6208C1F6(iLocal_237, func_212(4));
			unk_0x3553F2A72957724E(iLocal_237, func_211(0), 2);
			unk_0x9DF315A9EFFF87AC(iLocal_237, 17.2f);
			unk_0x2FB83B8BD6C05FD2(iLocal_237, "HAND_SHAKE", 0.1f);
			unk_0xAE099C1ADC89C331(iLocal_237, Local_238, 6000, 1, 1);
			func_310(&Local_238, 19, 0, 0);
			iLocal_417 = 3;
			break;
		
		case 3:
			if (func_111(&Local_238, 19) > 7.85f && !iLocal_279)
			{
				if (func_193(&Local_238) > 10)
				{
					func_208();
				}
				iLocal_279 = 1;
			}
			if (func_111(&Local_238, 19) > 8f && iLocal_279)
			{
				unk_0x6125108F6208C1F6(Local_238, func_212(2));
				unk_0xA65BD9EDFDFA4D71(Local_238, Local_251.f_3, 0f, 0f, 0f, 1);
				unk_0x9DF315A9EFFF87AC(Local_238, 35f);
				unk_0x2FB83B8BD6C05FD2(Local_238, "HAND_SHAKE", 0.2f);
				unk_0x348665177DBFB93B(Local_238, true);
				unk_0x062C9995BFD27B2A(true, false, 3000, 1, 0, 0);
				func_310(&Local_238, 19, 0, 0);
				iLocal_417 = 4;
			}
			break;
		
		case 4:
			unk_0x6125108F6208C1F6(iLocal_237, func_212(2));
			unk_0xA65BD9EDFDFA4D71(iLocal_237, Local_251.f_3, 0f, 0f, 0f, 1);
			unk_0x9DF315A9EFFF87AC(iLocal_237, 45f);
			unk_0x2FB83B8BD6C05FD2(iLocal_237, "HAND_SHAKE", 0.2f);
			unk_0xAE099C1ADC89C331(iLocal_237, Local_238, 10000, 1, 1);
			func_310(&Local_238, 19, 0, 0);
			iLocal_417 = 11;
			break;
		
		case 9:
			if (!unk_0x1D403DFADBC2DE3C(Local_251.f_2, 0) && !unk_0x1D403DFADBC2DE3C(Local_251.f_3, 0))
			{
				if (!unk_0x5237AF95232D78C5(Local_251.f_2, 0))
				{
					unk_0xBD53A029D0155A42(Local_251.f_2, Local_251.f_3, -1);
				}
				unk_0xA4DFFFD5B234240D(Local_251.f_3, 10f);
				func_104(&(Local_251.f_1B));
				func_310(&Local_238, 19, 2f, 0);
				iLocal_417 = 11;
				if (!bLocal_268)
				{
					func_208();
				}
			}
			break;
		
		case 11:
			if ((unk_0x105601648511CC64() % 1000) < 50)
			{
			}
			if (unk_0x70CF24CEFB0F53B0(413.8f, -1416.19f, 29.26f, 5f, 1230099731, 0))
			{
				unk_0x702FD033579B62CE(1230099731, 413.8f, -1416.19f, 29.26f, false, 0.85f, 0);
			}
			if (func_111(&Local_238, 19) > 4f)
			{
				unk_0x829FA4611BD56B44(800);
				unk_0xF3F01A78937DC905(0f);
				unk_0x2B9AEC08E469E384(0f, 1065353216);
				func_104(&(Local_251.f_1B));
				unk_0x4EC087603E1DEF9C(Local_238, 0);
				unk_0x4EC087603E1DEF9C(iLocal_237, 0);
				func_130(1, 1, 1);
				unk_0x062C9995BFD27B2A(false, false, 3000, 1, 0, 0);
				func_203(&Local_238, 19, 0);
				iLocal_417 = 12;
			}
			else if (func_111(&Local_238, 19) > 3.7f)
			{
				if (func_132())
				{
					if (!iLocal_281)
					{
						unk_0x9216004FAC08D1DC("CamPushInNeutral", 0, 0);
						unk_0xC4BA30B532FE260F(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
						iLocal_281 = 1;
					}
				}
			}
			break;
		
		case 12:
			return 1;
			break;
	}
	return 0;
}

void func_208()//Position - 0x8007
{
	bLocal_268 = true;
	if (!unk_0x36CEFBE9B745A58D(Local_251.f_2))
	{
		if (unk_0xE59B7F5A03335350(Local_251.f_3, 0))
		{
			if (unk_0x62F3A07C43FFB568(Local_251.f_2, Local_251.f_3, 0))
			{
				unk_0x641B19E156645A92(Local_251.f_3, 406.612f, -1419.937f, 29.00375f, 1, false, 0, 1);
				unk_0x4106FAF8AA1D69D5(Local_251.f_2, Local_251.f_1E);
				unk_0x91629AC1E1F78419(Local_251.f_2, 1, true);
				unk_0x91629AC1E1F78419(Local_251.f_2, 6, false);
				unk_0x91629AC1E1F78419(Local_251.f_2, 17, false);
				unk_0x91629AC1E1F78419(Local_251.f_2, 3, false);
				unk_0x6CCBC1B22488DC0C(Local_251.f_2, 500f);
				unk_0x5AAB329BBC1053A1(Local_251.f_2, 500f);
				unk_0x1D772375218D2BDC(Local_251.f_2, 500f);
				unk_0x2E35C4FA5F0ED22F(Local_251.f_2, true);
				unk_0xAF9FC4463EA3090B(Local_251.f_3, 500);
				unk_0xAF9FC4463EA3090B(Local_251.f_2, 500);
				unk_0xB71D41C0310C93DE(Local_251.f_3, true, 1);
				unk_0xB71D41C0310C93DE(Local_251.f_2, true, 1);
				if (!unk_0x2DA8CA50A72528FB(Local_251.f_4))
				{
					Local_251.f_4 = func_209(Local_251.f_3, 0, 0);
				}
				unk_0x2E35C4FA5F0ED22F(Local_251.f_2, true);
				unk_0x9E6D037EC3389728(Local_251.f_3, 120, "txm_fc_h1_", 1);
				unk_0x821B5D8CB4B20F84(Local_251.f_3, 0.8f);
				iLocal_308 = unk_0x105601648511CC64();
			}
		}
	}
}

int func_209(int iParam0, bool bParam1, bool bParam2)//Position - 0x8144
{
	return func_210(iParam0, !bParam1, bParam2);
}

int func_210(int iParam0, bool bParam1, bool bParam2)//Position - 0x8157
{
	int iVar0;
	
	if (!unk_0x724D816EA203A79E(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x511FE22BCF5353CD(iParam0);
	if (unk_0xD27AC0E9B78CFDD7(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(iVar0, func_126(unk_0x7AF0088ABFA713B6(), 1f, 1f));
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
		unk_0x3F5F1772D71D5EC4(iVar0, func_126(unk_0x7AF0088ABFA713B6(), 0.7f, 0.7f));
		unk_0xF9C2945DB5BAB4BF(iVar0, bParam1);
	}
	else if (unk_0xB12D030810E8447D(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(iVar0, func_126(unk_0x7AF0088ABFA713B6(), 0.7f, 0.7f));
	}
	return iVar0;
}

Vector3 func_211(int iParam0)//Position - 0x81FB
{
	vector3 vVar0;
	
	switch (iParam0)
	{
		case 0:
			vVar0 = { -0.7535f, -0.0475f, 91.9877f };
			break;
		
		case 1:
			vVar0 = { 4.2328f, 0f, 165.0072f };
			break;
		
		case 2:
			vVar0 = { -0.3221f, 0f, 68.7635f };
			break;
		
		case 3:
			vVar0 = { -0.3614f, 0f, -145.1533f };
			break;
		
		case 4:
			vVar0 = { -5.4284f, 0f, 1.8065f };
			break;
		
		case 5:
			vVar0 = { 1.2038f, 0f, 68.7635f };
			break;
		
		case 6:
			vVar0 = { -2.1877f, 0f, 71.1648f };
			break;
	}
	return vVar0;
}

Vector3 func_212(int iParam0)//Position - 0x82BA
{
	vector3 vVar0;
	
	switch (iParam0)
	{
		case 0:
			vVar0 = { 495.4f, -1416.8f, 30.2f };
			break;
		
		case 1:
			vVar0 = { 429.6911f, -1385.415f, 29.7266f };
			break;
		
		case 2:
			vVar0 = { 417.9f, -1419.4f, 30.6f };
			break;
		
		case 3:
			vVar0 = { 426.754f, -1386.51f, 29.6201f };
			break;
		
		case 4:
			vVar0 = { 493.7f, -1416.9f, 30.2f };
			break;
		
		case 5:
			vVar0 = { 450.0146f, -1414.523f, 34.4507f };
			break;
		
		case 6:
			vVar0 = { 448.2621f, -1413.842f, 34.4501f };
			break;
	}
	return vVar0;
}

int func_213(var uParam0, vector3 vParam1, float fParam2)//Position - 0x8391
{
	if (!unk_0x724D816EA203A79E(uParam0->f_2))
	{
		uParam0->f_2 = unk_0x01B3635C3E8EDD81(26, *uParam0, vParam1, fParam2, 1, true);
	}
	func_7(&(Local_238.f_F4), 4, uParam0->f_2, "TaxiJames", 0, 1);
	unk_0x36C3B58DA78A2679(uParam0->f_2, "TaxiJames");
	if (!unk_0x1D403DFADBC2DE3C(iLocal_257, 0))
	{
		unk_0xC8FD3EBBB90E8D7F(iLocal_257, 20, true);
	}
	if (!unk_0x1D403DFADBC2DE3C(uParam0->f_2, 0))
	{
		unk_0xB0031DDAE4FF0BC3(uParam0->f_2, 0, 1, 0, 0);
		unk_0xB0031DDAE4FF0BC3(uParam0->f_2, 3, 0, 0, 0);
		unk_0xB0031DDAE4FF0BC3(uParam0->f_2, 4, 0, 1, 0);
		unk_0xB0031DDAE4FF0BC3(uParam0->f_2, 8, 0, 0, 0);
		unk_0xB0031DDAE4FF0BC3(uParam0->f_2, 11, 0, 1, 0);
		unk_0x4106FAF8AA1D69D5(uParam0->f_2, uParam0->f_1E);
		unk_0x91629AC1E1F78419(uParam0->f_2, 1, true);
		unk_0x91629AC1E1F78419(uParam0->f_2, 6, true);
		unk_0x91629AC1E1F78419(uParam0->f_2, 17, true);
		unk_0x91629AC1E1F78419(uParam0->f_2, 3, false);
		unk_0x6CCBC1B22488DC0C(uParam0->f_2, 300f);
		unk_0x5AAB329BBC1053A1(uParam0->f_2, 300f);
		unk_0x1D772375218D2BDC(uParam0->f_2, 300f);
		unk_0x2E35C4FA5F0ED22F(uParam0->f_2, true);
	}
	return 1;
}

int func_214(var uParam0, float fParam1, float fParam2, float fParam3)//Position - 0x84A1
{
	if ((((unk_0x726D9204B160D23E() && !unk_0x26641E1BFD792DBC()) && !unk_0x422F9EDE839E6ABB()) && !unk_0x17FAADF9916EF741()) && !uParam0->f_8E)
	{
		if (func_226(uParam0))
		{
			func_128(uParam0, &(uParam0->f_2B));
			func_221(uParam0);
			func_220(uParam0);
			func_197(uParam0);
			func_219(uParam0, fParam2, fParam3);
			func_217(uParam0);
			return func_215(uParam0, fParam1);
		}
	}
	return 0;
}

int func_215(var uParam0, float fParam1)//Position - 0x8519
{
	if (func_63(uParam0) == 2)
	{
		if (unk_0x4DBCE270B354E123(uParam0->f_4, uParam0->f_11, (fParam1 + 1f), (fParam1 + 1f), 2f, !uParam0->f_8C, true, 0))
		{
		}
		if (((func_216(uParam0->f_4, uParam0->f_11, 1) <= (fParam1 + 1f) && unk_0x904E94842BB9E173(unk_0xFC1CAE18F3ECBF2D()) < 1) && func_144(1, 1, 1)) && unk_0x58F9E0EA914AEF2C(uParam0->f_4))
		{
			return func_121(uParam0, 1, fParam1);
		}
	}
	else if (((unk_0x4DBCE270B354E123(uParam0->f_4, uParam0->f_11, (fParam1 + 1f), (fParam1 + 1f), 2f, !uParam0->f_8C, true, 0) && unk_0x904E94842BB9E173(unk_0xFC1CAE18F3ECBF2D()) < 1) && func_144(1, 1, 1)) && unk_0x58F9E0EA914AEF2C(uParam0->f_4))
	{
		return func_121(uParam0, 1, fParam1);
	}
	return 0;
}

float func_216(int iParam0, vector3 vParam1, bool bParam2)//Position - 0x85F0
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

void func_217(var uParam0)//Position - 0x862A
{
	float fVar0;
	
	if ((func_218(uParam0) && func_21(uParam0->f_51, 67108864)) && unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) == 0)
	{
		if ((unk_0x105601648511CC64() - iLocal_89) >= 10000)
		{
			fVar0 = func_49(uParam0->f_11, 1);
			if (fVar0 > fLocal_87)
			{
				iLocal_88++;
			}
			else
			{
				iLocal_88 = 0;
			}
			fLocal_87 = fVar0;
			iLocal_89 = unk_0x105601648511CC64();
		}
		if (iLocal_88 >= 2 && !func_206())
		{
			func_249(uParam0, 136, 1, 0, 1);
			iLocal_88 = 0;
		}
		if ((unk_0x105601648511CC64() % 1000) < 50)
		{
		}
	}
	else
	{
		if ((unk_0x105601648511CC64() % 4000) < 50)
		{
			if (!func_218(uParam0))
			{
			}
			if (!func_21(uParam0->f_51, 67108864))
			{
			}
		}
		if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0)
		{
			if (iLocal_88 > 0)
			{
				iLocal_88 = 0;
			}
		}
	}
}

int func_218(var uParam0)//Position - 0x8700
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

void func_219(var uParam0, float fParam1, float fParam2)//Position - 0x8735
{
	if (func_218(uParam0) && func_21(uParam0->f_2C, 4))
	{
		if ((unk_0xB66CFDE6B830965A(uParam0->f_4) || unk_0x8910237449BB6F79(uParam0->f_4) < 3f) && func_202(uParam0))
		{
			if (!func_184(uParam0, 2))
			{
				func_199(uParam0, 2);
			}
			else if (func_218(uParam0))
			{
				if (func_111(uParam0, 2) > fParam1 && !func_184(uParam0, 14))
				{
					if (func_34())
					{
						func_249(uParam0, 48, 1, 0, 0);
					}
					else
					{
						func_249(uParam0, 48, 1, 0, 0);
					}
					func_310(uParam0, 2, 0, 0);
					if (func_184(uParam0, 10))
					{
						func_310(uParam0, 10, 0, 0);
					}
				}
				if (!func_184(uParam0, 3))
				{
					func_310(uParam0, 3, 0, 0);
				}
				else if (func_111(uParam0, 3) >= fParam2)
				{
					func_203(uParam0, 3, 0);
					func_350(uParam0, "Car not moving", 20);
				}
			}
		}
		else
		{
			if (func_184(uParam0, 2))
			{
				func_203(uParam0, 2, 0);
			}
			if (func_184(uParam0, 3))
			{
				func_203(uParam0, 3, 0);
			}
		}
	}
}

void func_220(var uParam0)//Position - 0x8850
{
	if (unk_0xD95B48C451FB1A20(unk_0xFC1CAE18F3ECBF2D()) && !func_21(uParam0->f_2C, 2))
	{
		func_64(&(uParam0->f_2C), 2);
	}
	else if (!unk_0xD95B48C451FB1A20(unk_0xFC1CAE18F3ECBF2D()) && func_21(uParam0->f_2C, 2))
	{
		func_19(&(uParam0->f_2C), 2);
		uParam0->f_2F++;
		func_52(9, 0);
	}
	if (uParam0->f_2F > 30)
	{
		func_249(uParam0, 47, 1, 0, 0);
		uParam0->f_2F = 0;
		uParam0->f_4C = (uParam0->f_4C + SYSTEM::CEIL(5f));
	}
}

void func_221(var uParam0)//Position - 0x88D9
{
	if (!func_21(uParam0->f_2C, 1))
	{
		switch (uParam0->f_19C)
		{
			case 0:
				if (unk_0x904E94842BB9E173(unk_0xFC1CAE18F3ECBF2D()) >= 1)
				{
					if (func_111(uParam0, 9) > 1f)
					{
						func_225(uParam0, unk_0x904E94842BB9E173(unk_0xFC1CAE18F3ECBF2D()));
						if (uParam0->f_19A != 22)
						{
							func_249(uParam0, 50, 1, 1, 0);
						}
						func_310(uParam0, 9, 0, 0);
						if (unk_0x2DA8CA50A72528FB(uParam0->f_9))
						{
							unk_0x7781946F1FC054FA(uParam0->f_9, 0);
							unk_0x0BBAABB52887CF8C(uParam0->f_9, false);
						}
						uParam0->f_8C = 1;
						uParam0->f_19C = 1;
					}
				}
				break;
			
			case 1:
				if (!func_206() && func_111(uParam0, 9) > 4f)
				{
					func_249(uParam0, 52, 1, 0, 0);
					uParam0->f_19C = 2;
				}
				break;
			
			case 2:
				if (func_224("TAXI_OBJ_POL", 0, 0))
				{
					if (uParam0->f_19A != 22)
					{
						func_249(uParam0, 51, 0, 0, 0);
					}
					uParam0->f_19C = 3;
				}
				else if (unk_0x904E94842BB9E173(unk_0xFC1CAE18F3ECBF2D()) < 1)
				{
					uParam0->f_19C = 3;
				}
				break;
			
			case 3:
				if (unk_0x86B385F1E3450315(unk_0xFC1CAE18F3ECBF2D(), func_223(uParam0)))
				{
					func_225(uParam0, unk_0x904E94842BB9E173(unk_0xFC1CAE18F3ECBF2D()));
					func_52(6, 0);
				}
				if (!func_222(uParam0))
				{
					if (!unk_0xE6711F601F11B66B())
					{
						if (func_111(uParam0, 16) > 10f)
						{
							if (uParam0->f_19A != 22)
							{
								func_249(uParam0, 51, 1, 0, 0);
							}
						}
					}
				}
				if (unk_0x904E94842BB9E173(unk_0xFC1CAE18F3ECBF2D()) < 1)
				{
					if (func_224("TAXI_OBJ_POL", 0, 0))
					{
						unk_0xEB233A3B7635D2AC();
					}
					if (unk_0x2DA8CA50A72528FB(uParam0->f_9))
					{
						unk_0x7781946F1FC054FA(uParam0->f_9, 255);
						unk_0x0BBAABB52887CF8C(uParam0->f_9, true);
					}
					uParam0->f_8C = 0;
					uParam0->f_19C = 4;
				}
				break;
			
			case 4:
				if (!func_206())
				{
					if (uParam0->f_19A != 22)
					{
						func_249(uParam0, 53, 1, 0, 1);
					}
					func_52(7, func_223(uParam0));
					func_225(uParam0, 0);
					uParam0->f_19C = 5;
				}
				break;
			
			case 5:
				if (!func_206())
				{
					func_203(uParam0, 9, 0);
					func_310(uParam0, 11, 0, 0);
					uParam0->f_19C = 0;
				}
				break;
			}
	}
}

bool func_222(var uParam0)//Position - 0x8AFD
{
	return uParam0->f_6E;
}

int func_223(var uParam0)//Position - 0x8B09
{
	return uParam0->f_6A;
}

bool func_224(char* sParam0, int iParam1, char* sParam2)//Position - 0x8B15
{
	unk_0xE2CFC41F8121CE68(sParam0);
	if (iParam1 == 1)
	{
		unk_0xC9C304D0AABE1335(sParam2);
	}
	return unk_0x121EFFA2D57472F2();
}

void func_225(var uParam0, int iParam1)//Position - 0x8B33
{
	if (uParam0->f_6A != iParam1)
	{
		uParam0->f_6A = iParam1;
	}
}

int func_226(var uParam0)//Position - 0x8B4A
{
	if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
	{
		if (!unk_0x36CEFBE9B745A58D(uParam0->f_3))
		{
			if (!unk_0x62F3A07C43FFB568(uParam0->f_3, uParam0->f_4, 1) && !unk_0x8F1FDD0A40DC834A(uParam0->f_3))
			{
				func_350(uParam0, "Passenger left car.", 9);
			}
			else if (func_236(uParam0))
			{
				if (func_224("TAXI_OBJ_PICKUP", 0, 0))
				{
					unk_0xBB5629E7D44054AE("TAXI_OBJ_PICKUP");
				}
				if (unk_0x726D9204B160D23E())
				{
					return 1;
				}
			}
			else
			{
				if ((unk_0x105601648511CC64() % 1000) < 50)
				{
				}
				func_227(uParam0, 1);
			}
		}
	}
	return 0;
}

void func_227(var uParam0, bool bParam1)//Position - 0x8BD9
{
	func_235(uParam0, uParam0->f_3);
	if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
	{
		if (!unk_0x62F3A07C43FFB568(uParam0->f_2, uParam0->f_4, 0))
		{
			if (!func_184(uParam0, 14))
			{
				if (func_206())
				{
					func_234(1);
				}
				func_185(uParam0, 11, 1);
				func_229(uParam0, 1);
				func_310(uParam0, 14, 0f, 1);
				if (uParam0->f_19A < 15)
				{
				}
			}
			else if (bParam1)
			{
				if (!func_218(uParam0))
				{
					if ((unk_0x105601648511CC64() % 1000) < 50)
					{
					}
					if (unk_0x5237AF95232D78C5(uParam0->f_2, 0))
					{
						if (func_111(uParam0, 15) > 5f)
						{
							func_310(uParam0, 15, 0f, 1);
						}
					}
					if (func_111(uParam0, 14) > 20f)
					{
						func_350(uParam0, "Player not in taxi. - YELL RETURN", 8);
					}
				}
				else if (func_111(uParam0, 14) > 20f)
				{
					if (func_228(uParam0->f_4, 1) > 40f)
					{
						func_350(uParam0, "Player not in taxi.", 21);
					}
					else
					{
						func_350(uParam0, "Player not in taxi. - YELL RETURN 2", 8);
					}
				}
			}
		}
	}
}

float func_228(int iParam0, bool bParam1)//Position - 0x8CE4
{
	return func_48(unk_0xA95CF30C72EB526E(unk_0xFC1CAE18F3ECBF2D()), iParam0, bParam1);
}

void func_229(var uParam0, bool bParam1)//Position - 0x8CFC
{
	if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
	{
		if (bParam1)
		{
			if (unk_0x2DA8CA50A72528FB(uParam0->f_8))
			{
				unk_0x7781946F1FC054FA(uParam0->f_8, 0);
				unk_0x0BBAABB52887CF8C(uParam0->f_8, false);
				func_233(uParam0, &(uParam0->f_62), 4, 3);
			}
			else if (unk_0x2DA8CA50A72528FB(uParam0->f_9))
			{
				unk_0x7781946F1FC054FA(uParam0->f_9, 0);
				unk_0x0BBAABB52887CF8C(uParam0->f_9, false);
				unk_0xEB233A3B7635D2AC();
				if (func_218(uParam0))
				{
					func_249(uParam0, 2, 1, 0, 0);
				}
				else
				{
					func_233(uParam0, &(uParam0->f_62), 4, 3);
				}
			}
			func_230(uParam0, 0, 0);
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

void func_230(var uParam0, bool bParam1, bool bParam2)//Position - 0x8E1A
{
	if (bParam1)
	{
		func_431(uParam0);
	}
	if (!unk_0x2DA8CA50A72528FB(uParam0->f_A))
	{
		uParam0->f_A = func_210(uParam0->f_4, 1, 0);
		unk_0x436D0272182E484D(uParam0->f_A, "TAXI_BLIP_CAR");
		unk_0x0BBAABB52887CF8C(uParam0->f_A, true);
		func_231(uParam0);
		if (bParam2)
		{
			unk_0xEB233A3B7635D2AC();
			func_249(uParam0, 3, 1, 0, 0);
		}
	}
}

void func_231(var uParam0)//Position - 0x8E75
{
	func_310(uParam0, 14, 0, 0);
	func_232();
}

void func_232()//Position - 0x8E8B
{
	int iVar0;
	
	iVar0 = unk_0x3E12B546F3F2597A();
	if (unk_0xE59B7F5A03335350(iVar0, 0))
	{
		unk_0xF2C27FE5A8B98CB5(-1, "Radio_Off", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

void func_233(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x8EB4
{
	if (!func_21(*uParam1, iParam2))
	{
		unk_0xEB233A3B7635D2AC();
		func_249(uParam0, iParam3, 1, 0, 0);
		func_64(uParam1, iParam2);
	}
}

void func_234(int iParam0)//Position - 0x8EE0
{
	Global_41AB = iParam0;
}

void func_235(var uParam0, int iParam1)//Position - 0x8EED
{
	if (unk_0x724D816EA203A79E(iParam1))
	{
		if (!unk_0x36CEFBE9B745A58D(iParam1))
		{
			if (unk_0x231DB1D0F4218A1B(unk_0xB5CEFD608600A09F()))
			{
				if ((unk_0xD2B7EC731CF3F2D6(iParam1, joaat("weapon_stungun"), 0) || unk_0xD2B7EC731CF3F2D6(iParam1, 0, 2)) || unk_0xD2B7EC731CF3F2D6(iParam1, 0, 1))
				{
					func_350(uParam0, "Passenger injured by player with weapon.", 14);
				}
				unk_0xA67D3DDB524B8DBA(unk_0xB5CEFD608600A09F());
			}
		}
	}
}

int func_236(var uParam0)//Position - 0x8F52
{
	if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
	{
		if (unk_0x3187EF5798B5D209(uParam0->f_4, -1, 0) == uParam0->f_2)
		{
			if (func_184(uParam0, 14))
			{
				func_237(uParam0);
			}
			func_229(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

void func_237(var uParam0)//Position - 0x8F94
{
	func_203(uParam0, 14, 0);
	func_203(uParam0, 15, 0);
	func_239();
	if (func_238())
	{
		func_234(0);
	}
}

int func_238()//Position - 0x8FBE
{
	if (Global_41AB == 1)
	{
		return 1;
	}
	return 0;
}

void func_239()//Position - 0x8FD5
{
	int iVar0;
	
	iVar0 = unk_0x3E12B546F3F2597A();
	if (unk_0xE59B7F5A03335350(iVar0, 0))
	{
		unk_0xF2C27FE5A8B98CB5(-1, "Radio_On", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

void func_240(int iParam0, var uParam1)//Position - 0x8FFE
{
	func_127(iParam0, uParam1->f_2, 1, 1);
	if (unk_0xE59B7F5A03335350(uParam1->f_3, 0))
	{
		if (unk_0xD9C1758D86688CEA(uParam1->f_3, unk_0xBC25C936A095B5BA(), 1))
		{
			if (!func_206())
			{
				func_350(&Local_238, "Target's vehicle has been damaged by the player", 3);
			}
			else
			{
				func_146();
			}
		}
	}
	else if (!func_206())
	{
		func_350(&Local_238, "Target's vehicle isn't driveable", 13);
	}
	else
	{
		func_146();
	}
}

int func_241(var uParam0, vector3 vParam1, float fParam2)//Position - 0x9068
{
	uParam0->f_11 = { vParam1 };
	uParam0->f_A = fParam2;
	uParam0->f_3 = unk_0x61C05BF08A1E0EFE(uParam0->f_1, uParam0->f_11, uParam0->f_A, true, true, false);
	unk_0x8510BC031C24B862(uParam0->f_1, true);
	unk_0x2CA123B0622F495C(uParam0->f_1);
	iLocal_235[0] = unk_0x61C05BF08A1E0EFE(iLocal_255, 404.9912f, -1423.974f, 28.4638f, 227.5235f, true, true, false);
	iLocal_235[1] = unk_0x61C05BF08A1E0EFE(iLocal_255, 402.2958f, -1427.018f, 28.4632f, 226.6982f, true, true, false);
	iLocal_235[2] = unk_0x61C05BF08A1E0EFE(iLocal_256, 398.415f, -1428.167f, 28.4504f, 226.4081f, true, true, false);
	unk_0xD421BC740C5340C3(iLocal_235[0], 2);
	unk_0xD421BC740C5340C3(iLocal_235[1], 2);
	unk_0xD421BC740C5340C3(iLocal_235[2], 2);
	unk_0xEA0AB6C644C58C1D(iLocal_235[0], "BRAVEST");
	unk_0xEA0AB6C644C58C1D(iLocal_235[1], "BOLDEST");
	unk_0xEA0AB6C644C58C1D(iLocal_235[2], "BADDEST");
	unk_0x65E471E4A2D56226(uParam0->f_3, 800, 0);
	unk_0xEA0AB6C644C58C1D(uParam0->f_3, "PUSSYWAG");
	unk_0x6FA721E3E050370C(uParam0->f_3, 1);
	unk_0xEC6E535291C98050(uParam0->f_3, 1);
	uParam0->f_F = unk_0x77F5C030D3238E26(uParam0->f_3);
	uParam0->f_1F = 1;
	unk_0xF82197F205B9D8FD(uParam0->f_3, true);
	func_246(Local_238.f_E, 1, 1114636288);
	func_246(vLocal_299, 1, 15f);
	func_246(vLocal_300, 1, 15f);
	unk_0xD421BC740C5340C3(uParam0->f_3, 2);
	return 1;
}

int func_242()//Position - 0x91DE
{
	if (!unk_0xD6513D668481290A(Local_251))
	{
		func_138("TAXI_ASSETS_FC_STAGE_02 - Loading escape ped", &iLocal_263, 1000);
		return 0;
	}
	if (!unk_0xD6513D668481290A(Local_251.f_1))
	{
		func_138("TAXI_ASSETS_FC_STAGE_02 - Loading escape car", &iLocal_263, 1000);
		return 0;
	}
	if (!unk_0xD6513D668481290A(iLocal_255))
	{
		func_138("TAXI_ASSETS_FC_STAGE_02 - Loading ambulance", &iLocal_263, 1000);
		return 0;
	}
	if (!unk_0xD6513D668481290A(iLocal_256))
	{
		func_138("TAXI_ASSETS_FC_STAGE_02 - Loading hospital car 2", &iLocal_263, 1000);
		return 0;
	}
	if (!unk_0x00D24B3F2A5CD22C(120, "txm_fc_h1_"))
	{
		func_138("TAXI_ASSETS_FC_STAGE_02 - Vehicle Recording Loading txm_fc_h1_...", &iLocal_263, 1000);
		return 0;
	}
	if (!unk_0x00D24B3F2A5CD22C(0, "taxi_oj_fc3"))
	{
		func_138("TAXI_ASSETS_FC_STAGE_02 - Vehicle Recording Loading taxi_oj_fc3...", &iLocal_263, 1000);
		return 0;
	}
	if (!unk_0x1E8349F219AC5AF9(&cLocal_309))
	{
		func_138("TAXI_ASSETS_FC_STAGE_02 - Way point Recording Loading taxi_oj_fc...", &iLocal_263, 1000);
		return 0;
	}
	if (!unk_0xF9E082857622D91E("veh@truck@ds@base"))
	{
		return 0;
	}
	return 1;
}

void func_243(int iParam0, var uParam1)//Position - 0x92CC
{
	if (unk_0xE59B7F5A03335350(iParam0->f_4, 0))
	{
		if (!unk_0x62F3A07C43FFB568(iParam0->f_2, iParam0->f_4, 0))
		{
			if (!func_184(iParam0, 14))
			{
				if (unk_0x2DA8CA50A72528FB(*uParam1) && unk_0xB1D6718ACE798CBB(*uParam1) > 0)
				{
					unk_0x7781946F1FC054FA(*uParam1, 0);
				}
				func_230(iParam0, 0, 0);
				func_249(iParam0, 2, 1, 0, 0);
			}
			else if (func_111(iParam0, 14) > 20f)
			{
				func_350(iParam0, "Player not in taxi - HANDLE BLIPS", 8);
			}
		}
		else
		{
			if (func_184(iParam0, 14))
			{
				func_310(iParam0, 2, 0, 0);
				func_237(iParam0);
			}
			if (unk_0x2DA8CA50A72528FB(iParam0->f_A))
			{
				unk_0x07B8ECB35A4ED3AC(&(iParam0->f_A));
			}
			if ((unk_0x2DA8CA50A72528FB(*uParam1) && unk_0xB1D6718ACE798CBB(*uParam1) < 255) && unk_0x904E94842BB9E173(unk_0xFC1CAE18F3ECBF2D()) < 1)
			{
				unk_0x7781946F1FC054FA(*uParam1, 255);
				unk_0x0BBAABB52887CF8C(*uParam1, true);
			}
		}
	}
}

void func_244(var uParam0)//Position - 0x93B8
{
	func_245(uParam0, 1000);
	if (!unk_0x1D403DFADBC2DE3C(uParam0->f_3, 0) && !unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0x49D46EE47C9CCB66(uParam0->f_3);
		unk_0x85DB484A637CEAB9(uParam0->f_3, unk_0xBC25C936A095B5BA(), 0);
	}
	func_146();
	func_237(uParam0);
}

void func_245(var uParam0, int iParam1)//Position - 0x9404
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

void func_246(vector3 vParam0, bool bParam1, float fParam2)//Position - 0x943E
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { func_37(vParam0, 1f, -fParam2, -fParam2, -fParam2) };
	vVar1 = { func_37(vParam0, 1f, fParam2, fParam2, fParam2) };
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

void func_247()//Position - 0x94B3
{
	func_64(&(Local_238.f_37), 2);
	func_64(&(Local_238.f_37), 4);
	func_64(&(Local_238.f_37), 16);
	func_64(&(Local_238.f_37), 64);
	func_64(&(Local_238.f_37), 256);
	func_64(&(Local_238.f_37), 512);
	func_64(&(Local_238.f_37), 1024);
	func_64(&(Local_238.f_37), 2048);
	func_64(&(Local_238.f_37), 1073741824);
	func_64(&(Local_238.f_37), 8388608);
	func_64(&(Local_238.f_37), 33554432);
	func_64(&(Local_238.f_37), 16777216);
	func_64(&(Local_238.f_37), 4096);
	func_64(&(Local_238.f_64), 8);
	func_64(&(Local_238.f_64), 2048);
	func_64(&(Local_238.f_64), 256);
	func_64(&uLocal_398, 2);
}

void func_248(var uParam0)//Position - 0x9583
{
	unk_0xA67D3DDB524B8DBA(unk_0xB5CEFD608600A09F());
	unk_0xDDCAA2E64649E083(unk_0xFC1CAE18F3ECBF2D(), true, 0);
	func_245(uParam0, 1000);
}

void func_249(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x95A6
{
	iParam0->f_1A0 = iParam1;
	if (bParam4)
	{
		func_310(iParam0, 16, 4f, 0);
		if (func_250(iParam0))
		{
			func_45();
		}
	}
	func_274(iParam0, iParam2, bParam3);
}

int func_250(var uParam0)//Position - 0x95DB
{
	vector3 vVar0;
	struct<6> Var1;
	
	StringCopy(&vVar0, uParam0->f_8F, 24);
	if (func_206())
	{
		Var1 = { func_252() };
		if (!unk_0xF1734B55490E9045(&Var1))
		{
			StringConCat(&vVar0, "_obj1", 24);
			if (unk_0x3362CDE8460ED38B(&Var1, &vVar0))
			{
				return 1;
			}
			StringCopy(&vVar0, uParam0->f_8F, 24);
			StringConCat(&vVar0, "_gret1", 24);
			func_251(&vVar0);
			if (unk_0x3362CDE8460ED38B(&Var1, &vVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_251(char* sParam0)//Position - 0x9641
{
	StringConCat(sParam0, "F", 24);
}

struct<6> func_252()//Position - 0x9651
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_3DB8 == 4)
	{
		return Global_3C3B;
	}
	return Var0;
}

int func_253(var uParam0)//Position - 0x9675
{
	if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
	{
		if (!unk_0x36CEFBE9B745A58D(uParam0->f_3))
		{
			if ((unk_0x8F1FDD0A40DC834A(uParam0->f_3) && (unk_0x105601648511CC64() - iLocal_81) > 500) || unk_0x62F3A07C43FFB568(uParam0->f_3, uParam0->f_4, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_254()//Position - 0x96C8
{
	unk_0xF243B7A14FCFD0F4(Local_251);
	unk_0xF243B7A14FCFD0F4(Local_251.f_1);
	unk_0xF243B7A14FCFD0F4(iLocal_255);
	unk_0xF243B7A14FCFD0F4(iLocal_256);
	unk_0x1B2A7C8188ADBE04(120, "txm_fc_h1_");
	unk_0x1B2A7C8188ADBE04(0, "taxi_oj_fc3");
	unk_0x44840FD68E426678(&cLocal_309);
	unk_0x522053D86D6E1C7A("veh@truck@ds@base");
}

int func_255(var uParam0, bool bParam1, float fParam2)//Position - 0x9710
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
	{
		if (!unk_0x62F3A07C43FFB568(uParam0->f_2, uParam0->f_4, 0))
		{
			if ((unk_0x105601648511CC64() % 1000) < 50)
			{
			}
			func_227(uParam0, 1);
			if (func_32())
			{
				unk_0xDDCAA2E64649E083(unk_0xFC1CAE18F3ECBF2D(), true, 0);
			}
			if (unk_0xF4FCC3C1048FF2AB(uParam0->f_3, 2106541073) == 1 || unk_0xF4FCC3C1048FF2AB(uParam0->f_3, 2106541073) == 0)
			{
				unk_0x49D46EE47C9CCB66(uParam0->f_3);
				uParam0->f_30 = 0;
				iLocal_79 = 0;
				unk_0x85DB484A637CEAB9(uParam0->f_3, unk_0xBC25C936A095B5BA(), 0);
			}
		}
		else if (unk_0x86B385F1E3450315(unk_0xFC1CAE18F3ECBF2D(), 0))
		{
			func_272(uParam0);
			if (uParam0->f_30 > 1)
			{
				unk_0x02DAF06EA4F08219(&iVar3);
				unk_0xC5A6DFE2B8987B17(&iVar3);
				unk_0x346129B364057FF6(0, uParam0->f_B, uParam0->f_6, 20000, 1048576000, 0, 1193033728);
				unk_0x85DB484A637CEAB9(0, uParam0->f_4, 0);
				unk_0x535008C596714F9E(iVar3);
				unk_0xA8E6405305C0D7DF(uParam0->f_3, iVar3);
				uParam0->f_30 = 0;
			}
		}
		else
		{
			if (func_184(uParam0, 14))
			{
				func_237(uParam0);
				func_229(uParam0, 0);
			}
			if (func_184(uParam0, 9))
			{
				func_203(uParam0, 9, 0);
				unk_0xEB233A3B7635D2AC();
				if (unk_0x2DA8CA50A72528FB(uParam0->f_8))
				{
					unk_0x7781946F1FC054FA(uParam0->f_8, 255);
					unk_0x0BBAABB52887CF8C(uParam0->f_8, true);
				}
			}
			if (!unk_0x1D403DFADBC2DE3C(uParam0->f_3, 0))
			{
				fVar4 = ((unk_0x8910237449BB6F79(uParam0->f_4) / 5f) + 4f);
				if (uParam0->f_8D && func_271(uParam0, uParam0->f_3) > 300f)
				{
					func_350(uParam0, "Left Passenger", 8);
				}
				switch (uParam0->f_30)
				{
					case 0:
						if (unk_0xF4FCC3C1048FF2AB(uParam0->f_3, 242628503) != 1 || ((func_48(unk_0xBC25C936A095B5BA(), uParam0->f_3, 1) < 20f && func_216(uParam0->f_3, uParam0->f_B, 1) <= 28f) && func_216(uParam0->f_4, uParam0->f_B, 1) <= 28f))
						{
							if (func_268(uParam0, fParam2))
							{
								uParam0->f_30++;
							}
						}
						break;
					
					case 1:
						if (func_267(uParam0, 0, 28f, fVar4, 4f))
						{
							uParam0->f_8A = 1;
							if (bLocal_86)
							{
								uParam0->f_7 = func_266(uParam0->f_4, uParam0->f_3);
								iVar0 = func_265(uParam0, &iVar1);
								if (!unk_0x1D403DFADBC2DE3C(iVar0, 0))
								{
									if (iVar1 == uParam0->f_7)
									{
										if (uParam0->f_7 == 1)
										{
											iVar2 = 262144;
										}
										else if (uParam0->f_7 == 2)
										{
											iVar2 = 131072;
										}
										unk_0xA3981DED4FC2E56E(iVar0, 0, iVar2);
									}
									else
									{
										unk_0xA3981DED4FC2E56E(iVar0, 0, 0);
									}
								}
								if (uParam0->f_19B == 0)
								{
									if (unk_0x2101FAC9A9D4C29D(uParam0->f_3, uParam0->f_4, 0, 0, false))
									{
										if (uParam0->f_7 == 2)
										{
											uParam0->f_7 = 0;
											if (!unk_0x1D403DFADBC2DE3C(iVar0, 0))
											{
												unk_0xA3981DED4FC2E56E(iVar0, 0, 4096);
											}
										}
									}
								}
							}
							unk_0xA4E856A8CD53B8DF(uParam0->f_3);
							unk_0xD179FA0466FA4FE3(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 1, 0);
							uParam0->f_30++;
						}
						else
						{
							if (bParam1)
							{
								unk_0x808BC8EC57F5B2FF(unk_0x541C2AEF053615BC(uParam0->f_3, true), fVar4, 0, 0, 255, 150);
							}
							if (!func_202(uParam0))
							{
								unk_0xA4E856A8CD53B8DF(uParam0->f_3);
							}
							else if (((unk_0xF4FCC3C1048FF2AB(uParam0->f_3, 242628503) != 1 && unk_0xF4FCC3C1048FF2AB(uParam0->f_3, 242628503) != 0) && unk_0xF4FCC3C1048FF2AB(uParam0->f_3, 242628503) != 7) && func_271(uParam0, uParam0->f_3) > 8f)
							{
								unk_0x02DAF06EA4F08219(&(uParam0->f_F3));
								unk_0xC5A6DFE2B8987B17(&(uParam0->f_F3));
								unk_0x85DB484A637CEAB9(0, unk_0xBC25C936A095B5BA(), 0);
								if (uParam0->f_19B != 9)
								{
									unk_0xE896C0AD02364F2A(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0, 0, 0, 0);
								}
								else
								{
									unk_0xE896C0AD02364F2A(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -8f, -1, 48, 0, 0, 0, 0);
								}
								unk_0x535008C596714F9E(uParam0->f_F3);
								unk_0xA8E6405305C0D7DF(uParam0->f_3, uParam0->f_F3);
							}
							if (unk_0x96044E39418AAF17(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
							{
								unk_0x1D3127CFE7D9B190(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 1.75f);
							}
						}
						break;
					
					case 2:
						if (bLocal_86)
						{
							if (func_48(uParam0->f_4, uParam0->f_3, 1) < 3f)
							{
								if (!func_264(uParam0, 1))
								{
									unk_0x49D46EE47C9CCB66(uParam0->f_3);
									func_350(uParam0, "You had a dead body in your back seat.", 5);
								}
								else if (!func_263(uParam0->f_4))
								{
									unk_0x49D46EE47C9CCB66(uParam0->f_3);
									func_350(uParam0, "You had a dead body in your back seat.", 0);
								}
							}
						}
						func_261(uParam0);
						if (func_271(uParam0, uParam0->f_3) < fVar4 || func_32())
						{
							if (unk_0x62F3A07C43FFB568(uParam0->f_2, uParam0->f_4, 0))
							{
								if (func_257(uParam0))
								{
									func_256(uParam0);
									iLocal_81 = unk_0x105601648511CC64();
									unk_0xC8FD3EBBB90E8D7F(uParam0->f_3, 26, true);
									func_203(uParam0, 5, 0);
									unk_0x0A6ECD5BD15B1522();
									unk_0x70870CD1718D74F0(uParam0->f_1AC, &(uParam0->f_2A), -1);
									unk_0xF0B851960DDCE3D8(uParam0->f_3, 0);
									return 1;
								}
							}
						}
						else if (bParam1)
						{
							unk_0x808BC8EC57F5B2FF(unk_0x541C2AEF053615BC(uParam0->f_3, true), fVar4, 0, 0, 255, 150);
						}
						break;
					}
				}
			}
	}
	return 0;
}

void func_256(var uParam0)//Position - 0x9C23
{
	if (unk_0x2DA8CA50A72528FB(uParam0->f_8))
	{
		unk_0x0BBAABB52887CF8C(uParam0->f_8, false);
		unk_0x07B8ECB35A4ED3AC(&(uParam0->f_8));
	}
}

int func_257(var uParam0)//Position - 0x9C47
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	vector3 vVar7;
	
	func_138("UPDATE_PASSENGER_ENTER_CUTSCENE", &(uParam0->f_4E), 1000);
	iVar6 = -1;
	if (!unk_0x1D403DFADBC2DE3C(uParam0->f_3, 0) && !unk_0x1D403DFADBC2DE3C(uParam0->f_4, 0))
	{
		func_149();
	}
	if (bLocal_86)
	{
		iLocal_78 = 10;
	}
	if ((iLocal_78 < 7 && iLocal_78 > 0) && !bLocal_86)
	{
		if (func_145(iLocal_80))
		{
			iLocal_78 = 7;
		}
	}
	switch (iLocal_78)
	{
		case 0:
			if (func_121(uParam0, 0, 1084227584) && func_144(1, 1, 1))
			{
				if (func_264(uParam0, 1))
				{
					iLocal_80 = unk_0x105601648511CC64();
					SYSTEM::SETTIMERA(0);
					iLocal_78 = 1;
				}
				else
				{
					func_350(uParam0, "You had a dead body in your back seat.", 5);
				}
			}
			break;
		
		case 1:
			if (SYSTEM::TIMERA() > 500)
			{
				uParam0->f_7 = func_266(uParam0->f_4, uParam0->f_3);
				iVar3 = func_265(uParam0, &iVar4);
				if (!unk_0x1D403DFADBC2DE3C(iVar3, 0))
				{
					if (iVar4 == uParam0->f_7)
					{
						if (uParam0->f_7 == 1)
						{
							iVar5 = 262144;
						}
						else
						{
							iVar5 = 131072;
						}
						unk_0xA3981DED4FC2E56E(iVar3, 0, iVar5);
					}
					else
					{
						unk_0xA3981DED4FC2E56E(iVar3, 0, 0);
					}
				}
				if (uParam0->f_19B == 0)
				{
					if (unk_0x2101FAC9A9D4C29D(uParam0->f_3, uParam0->f_4, 0, 0, false))
					{
						uParam0->f_7 = 0;
						if (!unk_0x1D403DFADBC2DE3C(iVar3, 0))
						{
							unk_0xA3981DED4FC2E56E(iVar3, 0, 4096);
						}
					}
				}
				iLocal_78 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_7 == 0)
			{
				vVar2 = { 1.5f, 0f, -0.6422f };
				vVar0 = { -1.4309f, 3.958f, 3.5037f };
				vVar1 = { 0.1017f, 1.3354f, -0.0925f };
			}
			else if (uParam0->f_7 == 2)
			{
				vVar2 = { 1.5f, -1f, -0.6422f };
				vVar0 = { 1.4309f, 3.958f, 0.5037f };
				vVar1 = { 0.1017f, 1.3354f, -0.0925f };
			}
			else
			{
				vVar2 = { -1.5f, -1f, -0.6422f };
				vVar0 = { -1.4823f, 4.2333f, 0.5939f };
				vVar1 = { -0.4718f, 1.4282f, 0.3619f };
			}
			iVar6 = func_186(&(uParam0->f_199), unk_0xA4455714F3DCE207(uParam0->f_4, 0f, 2.2f, 0.275f), unk_0xA4455714F3DCE207(uParam0->f_4, vVar0), 1);
			if (iVar6 == 1)
			{
				vVar0.z = (vVar0.z + 1.5f);
				if (uParam0->f_7 == 2)
				{
					vVar1 = { 0.7632f, 1.4884f, 0.4369f };
				}
			}
			if (iVar6 != -1)
			{
				func_137(0, 0, 1);
				unk_0xA0C0B32E74BE8DB7(unk_0x541C2AEF053615BC(uParam0->f_4, true), 3f, 0);
				unk_0x4516EDD0A096FB5B(unk_0x541C2AEF053615BC(uParam0->f_4, true), 25f, 0);
				unk_0x7456702622C62EA0(1);
				unk_0xEB233A3B7635D2AC();
				func_116();
				func_274(uParam0, 0, 0);
				vVar7 = { unk_0xA4455714F3DCE207(uParam0->f_4, vVar2) };
				unk_0x641B19E156645A92(uParam0->f_3, vVar7, 1, false, 0, 1);
				unk_0x019CE76D5286C95C(uParam0->f_3, func_259(uParam0));
				func_140(uParam0, 1f, 1f, 1f, 0f, 0f, 0f, 1112014848);
				unk_0x6125108F6208C1F6(*uParam0, unk_0xA4455714F3DCE207(uParam0->f_4, vVar0));
				unk_0xA65BD9EDFDFA4D71(*uParam0, uParam0->f_4, vVar1, 1);
				unk_0x348665177DBFB93B(*uParam0, true);
				unk_0x062C9995BFD27B2A(true, false, 3000, 1, 0, 0);
				unk_0x2EB4D46478766D87(uParam0->f_3, 0, 0);
				unk_0xD179FA0466FA4FE3(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 3, 0);
				iLocal_78 = 5;
			}
			break;
		
		case 5:
			func_138("TAXI_PED_ENTER_CUT_WAIT", &(uParam0->f_4E), 1000);
			if (SYSTEM::TIMERA() > 3500)
			{
				iLocal_78 = 9;
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (!unk_0x1D403DFADBC2DE3C(uParam0->f_3, 0) && !unk_0x1D403DFADBC2DE3C(uParam0->f_4, 0))
			{
				if (!unk_0x5237AF95232D78C5(uParam0->f_3, 0))
				{
					unk_0xBD53A029D0155A42(uParam0->f_3, uParam0->f_4, uParam0->f_7);
					unk_0x82948B11F55E5713(uParam0->f_4, func_258(uParam0->f_7), 1);
				}
				unk_0x062C9995BFD27B2A(false, false, 3000, 1, 0, 0);
				unk_0x4EC087603E1DEF9C(*uParam0, 0);
				unk_0x4EC087603E1DEF9C(uParam0->f_1, 0);
				unk_0xF3F01A78937DC905(0f);
				unk_0x2B9AEC08E469E384(0f, 1065353216);
				unk_0x829FA4611BD56B44(800);
				unk_0x7456702622C62EA0(1);
				unk_0xEB233A3B7635D2AC();
				func_116();
				func_274(uParam0, 0, 0);
				iLocal_78 = 8;
			}
			break;
		
		case 8:
			if (unk_0x726D9204B160D23E() && !unk_0x26641E1BFD792DBC())
			{
				func_130(1, 1, 1);
				return 1;
			}
			break;
		
		case 9:
			unk_0x062C9995BFD27B2A(false, false, 3000, 1, 0, 0);
			unk_0x4EC087603E1DEF9C(*uParam0, 0);
			unk_0x4EC087603E1DEF9C(uParam0->f_1, 0);
			unk_0xF3F01A78937DC905(0f);
			unk_0x2B9AEC08E469E384(0f, 1065353216);
			func_130(1, 1, 1);
			return 1;
			break;
		
		case 10:
			if (!unk_0x1D403DFADBC2DE3C(uParam0->f_3, 0) && !unk_0x1D403DFADBC2DE3C(uParam0->f_4, 0))
			{
				if (unk_0x8F1FDD0A40DC834A(uParam0->f_3) || unk_0x5237AF95232D78C5(uParam0->f_3, 1))
				{
					return 1;
				}
				else if (unk_0xF4FCC3C1048FF2AB(unk_0xBC25C936A095B5BA(), -1794415470) != 1 && unk_0xF4FCC3C1048FF2AB(unk_0xBC25C936A095B5BA(), -1794415470) != 0)
				{
					unk_0xD179FA0466FA4FE3(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 1, 0);
				}
			}
			break;
	}
	return 0;
}

int func_258(int iParam0)//Position - 0xA154
{
	switch (iParam0)
	{
		case 1:
			return 2;
		
		case 2:
			return 3;
		
		case 0:
			return 1;
		
		case -1:
			return 0;
		
		default:
	}
	return 2;
}

float func_259(var uParam0)//Position - 0xA18C
{
	float fVar0;
	vector3 vVar1;
	
	fVar0 = 0f;
	vVar1 = { func_39() };
	if (uParam0->f_7 == 2)
	{
		vVar1 = { unk_0xA4455714F3DCE207(uParam0->f_4, 0.773f, -0.646f, -0.6422f) };
	}
	else
	{
		vVar1 = { unk_0xA4455714F3DCE207(uParam0->f_4, -0.773f, -0.646f, -0.6422f) };
	}
	fVar0 = func_260(unk_0x541C2AEF053615BC(uParam0->f_3, true), vVar1);
	return fVar0;
}

float func_260(struct<2> Param0, float fParam1, struct<2> Param2, var uParam3)//Position - 0xA1F5
{
	return unk_0xFDC254CE02DB0919((Param2 - Param0), (Param2.f_1 - Param0.f_1));
}

void func_261(var uParam0)//Position - 0xA20F
{
	int iVar0;
	
	if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
	{
		if (!unk_0x36CEFBE9B745A58D(uParam0->f_3))
		{
			if (func_228(uParam0->f_3, 1) > 30f || func_262(uParam0))
			{
				if (unk_0xF4FCC3C1048FF2AB(uParam0->f_3, -1794415470) == 1 || unk_0xF4FCC3C1048FF2AB(uParam0->f_3, 242628503) == 1)
				{
					unk_0x02DAF06EA4F08219(&iVar0);
					unk_0xC5A6DFE2B8987B17(&iVar0);
					unk_0x85DB484A637CEAB9(0, uParam0->f_4, 0);
					unk_0xE896C0AD02364F2A(0, "misscommon@response", "screw_you", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0x346129B364057FF6(0, uParam0->f_B, uParam0->f_6, 20000, 1048576000, 0, 1193033728);
					unk_0x535008C596714F9E(iVar0);
					unk_0xA8E6405305C0D7DF(uParam0->f_3, iVar0);
					func_350(uParam0, "Player abandoned passenger on pickup.", 8);
				}
			}
		}
	}
}

int func_262(var uParam0)//Position - 0xA2E0
{
	if ((unk_0x8910237449BB6F79(uParam0->f_4) > 3f && func_111(uParam0, 5) > 15f) || unk_0x8730A01B72F31307(uParam0->f_4))
	{
		return 1;
	}
	return 0;
}

int func_263(int iParam0)//Position - 0xA31A
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

int func_264(var uParam0, bool bParam1)//Position - 0xA3D6
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

int func_265(var uParam0, var uParam1)//Position - 0xA490
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

int func_266(int iParam0, int iParam1)//Position - 0xA505
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = unk_0x524ABB0435146845(iParam0);
	vVar0 = { unk_0x1483995DFFF0DEEA(iParam0, unk_0x541C2AEF053615BC(iParam1, true)) };
	if (unk_0x6F79ECA8C83E4357(iParam0) != joaat("vacca"))
	{
	}
	if (unk_0x6F79ECA8C83E4357(iParam0) == joaat("sentinel2"))
	{
		iVar2 = 1;
	}
	if (iVar2 == 1)
	{
		iVar1 = 0;
	}
	else if (vVar0.x > 0f)
	{
		if (unk_0x2101FAC9A9D4C29D(iParam1, iParam0, 2, 0, false))
		{
			iVar1 = 2;
		}
		else if (unk_0x2101FAC9A9D4C29D(iParam1, iParam0, 1, 0, false))
		{
			iVar1 = 1;
		}
		else
		{
			iVar1 = -2;
		}
	}
	else if (unk_0x2101FAC9A9D4C29D(iParam1, iParam0, 1, 0, false))
	{
		iVar1 = 1;
	}
	else if (unk_0x2101FAC9A9D4C29D(iParam1, iParam0, 2, 0, false))
	{
		iVar1 = 2;
	}
	else
	{
		iVar1 = -2;
	}
	return iVar1;
}

int func_267(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4)//Position - 0xA5BD
{
	if (!unk_0x1D403DFADBC2DE3C(uParam0->f_3, 0))
	{
		if (!unk_0x41A5D6415E2CC10E(uParam0->f_3) && func_228(uParam0->f_3, 1) < fParam2)
		{
			if (!func_184(uParam0, 5))
			{
				func_310(uParam0, 5, 0, 0);
			}
		}
		else if (func_184(uParam0, 5))
		{
			func_203(uParam0, 5, 0);
		}
		if (((func_111(uParam0, 5) > IntToFloat(iParam1) && unk_0x8910237449BB6F79(uParam0->f_4) < fParam4) && !unk_0x41A5D6415E2CC10E(uParam0->f_3)) || func_228(uParam0->f_3, 1) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

int func_268(var uParam0, float fParam1)//Position - 0xA65B
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	var uVar6;
	int iVar7;
	int iVar8;
	
	iVar8 = unk_0xB5B60A04E1654409(uParam0->f_4, "windscreen");
	if (iVar8 == -1)
	{
		iVar8 = unk_0xB5B60A04E1654409(uParam0->f_4, "windscreen_f");
	}
	if (iVar8 != -1)
	{
		vVar2 = { unk_0x3EA3A28A85F8C32F(uParam0->f_4, iVar8) };
		vVar2 = { unk_0x1483995DFFF0DEEA(uParam0->f_4, vVar2) };
		vVar2.y = (vVar2.y + 1f);
	}
	else
	{
		vVar2 = { 0f, 1f, 1f };
	}
	vVar0 = { unk_0xA4455714F3DCE207(uParam0->f_4, vVar2) };
	vVar1 = { unk_0xA4455714F3DCE207(uParam0->f_3, 0f, 0.25f, 0.9f) };
	unk_0x9689CECD9CFDA876(vVar0, vVar1, 0, 0, 255, 255);
	switch (iLocal_79)
	{
		case 0:
			unk_0x2E35C4FA5F0ED22F(uParam0->f_3, true);
			iLocal_79 = 1;
			break;
		
		case 1:
			if ((func_48(uParam0->f_4, uParam0->f_3, 0) <= fParam1 && !uParam0->f_8E) && unk_0x357058E632979E65((vVar0.z - vVar1.z)) < 5f)
			{
				if (uParam0->f_199 == 0)
				{
					uParam0->f_199 = unk_0xA20E4A82503CECB3(vVar0, vVar1, 511, 0, 7);
				}
				else
				{
					iVar7 = unk_0xB0695CD48A28A3A9(uParam0->f_199, &iVar5, &uVar3, &uVar4, &uVar6);
					if (iVar7 == 2)
					{
						if (iVar5 == 0)
						{
							iLocal_79 = 2;
						}
						uParam0->f_199 = 0;
					}
					else if (iVar7 == 0)
					{
						uParam0->f_199 = 0;
					}
				}
			}
			else if (unk_0xF4FCC3C1048FF2AB(uParam0->f_3, 242628503) != 1 && unk_0xF4FCC3C1048FF2AB(uParam0->f_3, 242628503) != 0)
			{
				unk_0x02DAF06EA4F08219(&(uParam0->f_F3));
				unk_0xC5A6DFE2B8987B17(&(uParam0->f_F3));
				unk_0xE896C0AD02364F2A(0, "oddjobs@taxi@", "idle_a", 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0x85DB484A637CEAB9(0, unk_0xBC25C936A095B5BA(), 0);
				unk_0xAFD74A5E065F57E0(uParam0->f_F3, 1);
				unk_0x535008C596714F9E(uParam0->f_F3);
				unk_0xA8E6405305C0D7DF(uParam0->f_3, uParam0->f_F3);
			}
			break;
		
		case 2:
			unk_0xEB233A3B7635D2AC();
			if (uParam0->f_19B != 9)
			{
				if (!func_21(uParam0->f_2C, 128))
				{
					func_249(uParam0, 4, 1, 0, 1);
				}
			}
			else
			{
				func_269(uParam0->f_3, "TAXI_HAIL", uParam0->f_91, 4);
			}
			unk_0xA4E856A8CD53B8DF(uParam0->f_3);
			unk_0x56F2E1B5599188FA(uParam0->f_3, uParam0->f_4, -1, 2048, 4);
			unk_0x02DAF06EA4F08219(&(uParam0->f_F3));
			unk_0xC5A6DFE2B8987B17(&(uParam0->f_F3));
			if (uParam0->f_19B != 9)
			{
				unk_0xE896C0AD02364F2A(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0, 0, 0, 0);
			}
			else
			{
				unk_0xE896C0AD02364F2A(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -1.5f, -1, 48, 0, 0, 0, 0);
			}
			unk_0x85DB484A637CEAB9(0, unk_0xBC25C936A095B5BA(), 0);
			unk_0x535008C596714F9E(uParam0->f_F3);
			unk_0xA8E6405305C0D7DF(uParam0->f_3, uParam0->f_F3);
			unk_0x02DAF06EA4F08219(&(uParam0->f_F3));
			iLocal_79 = 3;
			break;
		
		case 3:
			iLocal_79 = 0;
			if (unk_0x96044E39418AAF17(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				unk_0x1D3127CFE7D9B190(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 0.8f);
			}
			return 1;
			break;
	}
	return 0;
}

void func_269(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0xA93C
{
	unk_0x7E80A36CD8BDF4D1(iParam0, sParam1, sParam2, func_270(iParam3), 0);
}

int func_270(int iParam0)//Position - 0xA955
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

float func_271(var uParam0, int iParam1)//Position - 0xAB4A
{
	if (!unk_0x1D403DFADBC2DE3C(iParam1, 0))
	{
		if (func_202(uParam0))
		{
			return func_48(uParam0->f_4, iParam1, 1);
		}
	}
	return 0f;
}

void func_272(var uParam0)//Position - 0xAB75
{
	func_235(uParam0, uParam0->f_3);
	if (func_202(uParam0))
	{
		if (func_184(uParam0, 14))
		{
			func_237(uParam0);
			if (unk_0x2DA8CA50A72528FB(uParam0->f_A))
			{
				unk_0x07B8ECB35A4ED3AC(&(uParam0->f_A));
			}
		}
	}
	if (!func_184(uParam0, 9))
	{
		if (unk_0x2DA8CA50A72528FB(uParam0->f_8))
		{
			unk_0x7781946F1FC054FA(uParam0->f_8, 0);
			unk_0x0BBAABB52887CF8C(uParam0->f_8, false);
		}
		func_310(uParam0, 9, 0, 0);
		func_273("TAXI_OBJ_POL", 7500, 1);
	}
}

void func_273(char* sParam0, int iParam1, int iParam2)//Position - 0xABF3
{
	iParam2 = iParam2;
	unk_0x3714DE83381EADC2(sParam0);
	unk_0x41D8F63F629E76BE(iParam1, 1);
}

void func_274(int iParam0, int iParam1, bool bParam2)//Position - 0xAC0C
{
	iParam0->f_6E = iParam1;
	if (bParam2)
	{
		func_45();
		func_310(iParam0, 16, 4f, 0);
		unk_0xEB233A3B7635D2AC();
	}
}

int func_275(var uParam0, int iParam1)//Position - 0xAC31
{
	if (!unk_0xFA9040D29FE330BD(2))
	{
		return 0;
	}
	func_279(12);
	if (func_21(uParam0->f_2C, 8))
	{
		if (!func_21(uParam0->f_2C, 128))
		{
			if (unk_0x4FCDC2EC534819EF(unk_0xBC25C936A095B5BA()) && !func_21(uParam0->f_2C, 256))
			{
				func_64(&(uParam0->f_2C), 256);
			}
			if (func_21(uParam0->f_2C, 256) && unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
			{
				func_249(uParam0, 135, 1, 0, 1);
				func_64(&(uParam0->f_2C), 128);
			}
		}
	}
	if (!func_278(uParam0, iParam1))
	{
		if (func_228(uParam0->f_3, 1) < 35f)
		{
			if (!func_21(uParam0->f_2C, 8))
			{
				unk_0x85DB484A637CEAB9(uParam0->f_3, unk_0xBC25C936A095B5BA(), 0);
				func_249(uParam0, 133, 1, 0, 1);
				func_64(&(uParam0->f_2C), 8);
			}
		}
		if ((unk_0x36CEFBE9B745A58D(uParam0->f_3) || unk_0x889DA6CE8E4DB344(uParam0->f_3)) || func_228(uParam0->f_3, 1) > 400f)
		{
			func_350(uParam0, "ped is fleeing or injured", 5);
		}
	}
	else
	{
		uParam0->f_4 = unk_0x9FE9D386222EEE47(uParam0->f_2, 0);
		unk_0xA73D1278857991A2(uParam0->f_4, true);
		if (unk_0x3187EF5798B5D209(uParam0->f_4, -1, 0) == uParam0->f_2)
		{
			unk_0x0E622862E5E566BB(uParam0->f_4);
			func_276(uParam0);
			func_52(2, 0);
			bLocal_86 = true;
			func_112(&iLocal_82);
			return 1;
		}
		else
		{
			func_350(uParam0, "No Taxi", 21);
			func_161("TAXI_DBG_NTAXI", -1);
		}
	}
	return 0;
}

void func_276(var uParam0)//Position - 0xADAA
{
	if (!unk_0x1D403DFADBC2DE3C(uParam0->f_4, 0))
	{
		if (func_277())
		{
		}
	}
}

int func_277()//Position - 0xADC6
{
	if (unk_0xFA30DFD0084E92FE(unk_0x491B2241281A03B7(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_278(var uParam0, int iParam1)//Position - 0xADE7
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
				bVar2 = func_263(iVar0);
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
					if (!func_21(uParam0->f_2C, 64))
					{
						if (unk_0xFA9040D29FE330BD(2))
						{
							func_161("TX_VIP_DMGD", -1);
							if (func_153("TX_VIP_DMGD"))
							{
								func_64(&(uParam0->f_2C), 64);
							}
						}
					}
					return 0;
				}
				else if (!bVar4 || !bVar3)
				{
					if (!func_21(uParam0->f_2C, 32))
					{
						if (unk_0xFA9040D29FE330BD(2))
						{
							func_161("TX_VIP_CAR", -1);
							if (func_153("TX_VIP_CAR"))
							{
								func_64(&(uParam0->f_2C), 32);
							}
						}
					}
					return 0;
				}
				else if (!bVar5)
				{
					if (!func_21(uParam0->f_2C, 16))
					{
						if (unk_0xFA9040D29FE330BD(2))
						{
							func_161("TX_VIP_SMALL", -1);
							if (func_153("TX_VIP_SMALL"))
							{
								func_64(&(uParam0->f_2C), 16);
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
			func_19(&(uParam0->f_2C), 16);
			func_19(&(uParam0->f_2C), 64);
			func_19(&(uParam0->f_2C), 32);
		}
	}
	return 0;
}

void func_279(int iParam0)//Position - 0xB3FC
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

void func_280(var uParam0)//Position - 0xB455
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_20(&(uParam0->f_64), iVar0);
		iVar0++;
	}
}

void func_281(var uParam0, var uParam1)//Position - 0xB47A
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

void func_282(var uParam0, char* sParam1, int iParam2)//Position - 0xB4F1
{
	*uParam0 = 0;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = sParam1;
}

void func_283()//Position - 0xB509
{
	Local_165 = 0;
	func_300(47294/*func_302*/, 47269/*func_301*/, 1);
	func_300(47030/*func_298*/, 47006/*func_297*/, 1);
	func_300(46944/*func_296*/, 46919/*func_295*/, 1);
	func_300(46847/*func_294*/, 46823/*func_293*/, 1);
	func_300(46713/*func_292*/, 46692/*func_291*/, 1);
	func_300(46639/*func_289*/, 46614/*func_288*/, 1);
	func_300(46472/*func_285*/, 46448/*func_284*/, 1);
}

int func_284(int iParam0, var uParam1)//Position - 0xB570
{
	uParam1 = uParam1;
	func_350(iParam0, "Taxi Not Driveable", 1);
	return 1;
}

int func_285(var uParam0)//Position - 0xB588
{
	if (unk_0x724D816EA203A79E(uParam0->f_4))
	{
		if (func_287(uParam0->f_4))
		{
			func_286(uParam0, 1);
			return 1;
		}
	}
	return 0;
}

void func_286(var uParam0, int iParam1)//Position - 0xB5B2
{
	uParam0->f_75 = 1;
	uParam0->f_76 = iParam1;
}

int func_287(int iParam0)//Position - 0xB5C5
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

int func_288(int iParam0, var uParam1)//Position - 0xB616
{
	uParam1 = uParam1;
	func_350(iParam0, "Didn't lose police in time.", 9);
	return 1;
}

int func_289(var uParam0)//Position - 0xB62F
{
	if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0)
	{
		if (func_290(uParam0->f_55, 32))
		{
			return 1;
		}
	}
	return 0;
}

bool func_290(var uParam0, int iParam1)//Position - 0xB655
{
	return (uParam0 && iParam1) != 0;
}

int func_291(var uParam0, var uParam1)//Position - 0xB664
{
	uParam1 = uParam1;
	func_286(uParam0, 11);
	return 1;
}

int func_292(int iParam0)//Position - 0xB679
{
	if (unk_0x724D816EA203A79E(iParam0->f_4))
	{
		if (unk_0x149E9368A11035DE(iParam0->f_4) && !unk_0x58F9E0EA914AEF2C(iParam0->f_4))
		{
			if (!func_184(iParam0, 25))
			{
				func_310(iParam0, 25, 0, 0);
			}
			else if (func_111(iParam0, 25) > 2f)
			{
				return 1;
			}
		}
		else if (func_184(iParam0, 25))
		{
			func_203(iParam0, 25, 0);
		}
	}
	return 0;
}

int func_293(int iParam0, var uParam1)//Position - 0xB6E7
{
	uParam1 = uParam1;
	func_350(iParam0, "Taxi Is Flipped", 0);
	return 1;
}

int func_294(var uParam0)//Position - 0xB6FF
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

int func_295(int iParam0, var uParam1)//Position - 0xB747
{
	uParam1 = uParam1;
	func_350(iParam0, "Stayed stopped for too long.", 9);
	return 1;
}

int func_296(var uParam0)//Position - 0xB760
{
	if (!unk_0x1D403DFADBC2DE3C(uParam0->f_4, 0))
	{
		if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
		{
			if (unk_0xB66CFDE6B830965A(uParam0->f_4))
			{
				if (func_290(uParam0->f_56, 8))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_297(int iParam0, var uParam1)//Position - 0xB79E
{
	uParam1 = uParam1;
	func_350(iParam0, "Taxi Not Driveable", 0);
	return 1;
}

int func_298(var uParam0)//Position - 0xB7B6
{
	if (unk_0x724D816EA203A79E(uParam0->f_4))
	{
		if (func_299(uParam0->f_4))
		{
			func_286(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

int func_299(int iParam0)//Position - 0xB7E0
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

void func_300(int iParam0, int iParam1, bool bParam2)//Position - 0xB83B
{
	if (Local_165 >= 16)
	{
		Local_165 = 16;
		return;
	}
	Local_165.f_1[Local_165 /*4*/] = 0;
	func_65(&(Local_165.f_1[Local_165 /*4*/]), 1);
	if (bParam2)
	{
		func_65(&(Local_165.f_1[Local_165 /*4*/]), 2);
	}
	Local_165.f_1[Local_165 /*4*/].f_2 = iParam0;
	Local_165.f_1[Local_165 /*4*/].f_3 = iParam1;
	Local_165++;
}

int func_301(int iParam0, var uParam1)//Position - 0xB8A5
{
	uParam1 = uParam1;
	func_350(iParam0, "Passenger injured.", 15);
	return 1;
}

int func_302(var uParam0)//Position - 0xB8BE
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

void func_303()//Position - 0xB8FE
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

int func_304()//Position - 0xBAD6
{
	if (!unk_0xD6513D668481290A(iLocal_253))
	{
		return 0;
	}
	if (!unk_0xF9E082857622D91E("gestures@m@standing@casual"))
	{
		return 0;
	}
	if (!func_305(&iLocal_263, 0))
	{
		func_138("TAXI_ASSETS_STREAMED - Loading shared assets", &iLocal_263, 1000);
		return 0;
	}
	return 1;
}

int func_305(int iParam0, bool bParam1)//Position - 0xBB1C
{
	if (!unk_0xD6513D668481290A(func_18()))
	{
		func_138("TAXI_SHARED_ASSETS_STREAMED - TAXI MODEL Loading...", iParam0, 1000);
		return 0;
	}
	if (bParam1)
	{
		if (!unk_0xF9E082857622D91E("gestures@m@standing@casual"))
		{
			func_138("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts gestures@m@standing@casual Loading...", iParam0, 1000);
			return 0;
		}
	}
	if (!unk_0xF9E082857622D91E("oddjobs@taxi@"))
	{
		func_138("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@taxi@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0xF9E082857622D91E("oddjobs@towingcome_here"))
	{
		func_138("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@towingcome_here Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0xF9E082857622D91E("misscommon@response"))
	{
		func_138("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts misscommon@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0xFA9040D29FE330BD(2))
	{
		func_138("TAXI_SHARED_ASSETS_STREAMED - Mission Text Loading...", iParam0, 1000);
		return 0;
	}
	return 1;
}

void func_306(int iParam0, int iParam1)//Position - 0xBBD5
{
	switch (iParam1)
	{
		case 1:
			iParam0->f_7B = "TRS_STREAMING";
			break;
		
		case 2:
			iParam0->f_7B = " TRS_FINDING_LOCATION ";
			break;
		
		case 3:
			iParam0->f_7B = " TRS_SPAWNING ";
			break;
		
		case 4:
			iParam0->f_7B = " TRS_SPAWN_CAR ";
			break;
		
		case 5:
			iParam0->f_7B = " TRS_MANAGE_PICKUP ";
			break;
		
		case 6:
			iParam0->f_7B = " TRS_PASSENGER_ENTER ";
			break;
		
		case 7:
			iParam0->f_7B = " TRS_WAIT_FOR_TIME ";
			break;
		
		case 8:
			iParam0->f_7B = " TRS_WAIT_FOR_TAIL ";
			break;
		
		case 9:
			iParam0->f_7B = " TRS_DRIVING_PASSENGER ";
			break;
		
		case 10:
			iParam0->f_7B = " TRS_WAIT_FOR_FULL_STOP ";
			break;
		
		case 18:
			iParam0->f_7B = " TRS_PRE_CUTSCENE ";
			break;
		
		case 11:
			iParam0->f_7B = " TRS_SWITCH_JOB ";
			break;
		
		case 19:
			iParam0->f_7B = " TRS_CUTSCENE ";
			break;
		
		case 20:
			iParam0->f_7B = " TRS_CUTSCENE_02 ";
			break;
		
		case 13:
			iParam0->f_7B = " TRS_CHASE_DRIVER ";
			break;
		
		case 12:
			iParam0->f_7B = " TRS_SAVE_DAMSEL ";
			break;
		
		case 14:
			iParam0->f_7B = " TRS_REVEAL_DESTINATION ";
			break;
		
		case 15:
			iParam0->f_7B = " TRS_WAIT_PARK ";
			break;
		
		case 16:
			iParam0->f_7B = " TRS_SEND_TO_STORE ";
			break;
		
		case 17:
			iParam0->f_7B = " TRS_WAIT_1ST_STOP ";
			break;
		
		case 22:
			iParam0->f_7B = " TRS_DROPPING_OFF ";
			break;
		
		case 25:
			iParam0->f_7B = " TRS_ESCAPE_POLICE ";
			break;
		
		case 26:
			iParam0->f_7B = " TRS_POLICE_ESCAPED ";
			break;
		
		case 24:
			iParam0->f_7B = " TRS_TIE_UP_LOSE_ENDS ";
			break;
		
		case 27:
			iParam0->f_7B = " TRS_REGULAR_PAYMENT ";
			break;
		
		case 23:
			iParam0->f_7B = " TRS_ELIMATE_ALL_ENEMIES ";
			break;
		
		case 28:
			iParam0->f_7B = " TRS_SPECIAL_ENDING ";
			break;
		
		case 29:
			iParam0->f_7B = " TRS_SCORECARD_GRADE ";
			break;
		
		case 30:
			iParam0->f_7B = " TRS_CLEANUP ";
			break;
		
		case 21:
			iParam0->f_7B = " TRS_WAIT_FOR_PASSENGER ";
			break;
		
		default:
			iParam0->f_7B = " TRS IS UNIDENTIFIED - FIX THIS ";
			break;
	}
	iParam0->f_19A = iParam1;
}

int func_307(var uParam0)//Position - 0xBDF4
{
	if (!unk_0x36CEFBE9B745A58D(uParam0->f_3))
	{
		uParam0->f_8 = func_209(uParam0->f_3, 0, 0);
		unk_0xC2A76C105FD557E3(1, 0f);
		unk_0x0BBAABB52887CF8C(uParam0->f_8, true);
		unk_0x436D0272182E484D(uParam0->f_8, "TAXI_BLIP_PASS");
		unk_0x56F2E1B5599188FA(uParam0->f_3, unk_0xBC25C936A095B5BA(), -1, 2048, 4);
	}
	return 1;
}

int func_308(var uParam0, vector3 vParam1, vector3 vParam2, char* sParam3, int iParam4, float fParam5, float fParam6)//Position - 0xBE43
{
	if (!unk_0x724D816EA203A79E(uParam0->f_3))
	{
		func_309(uParam0, uParam0->f_E);
		uParam0->f_B = { vParam1 };
		uParam0->f_E = { vParam2 };
		func_36(uParam0->f_E, 0);
		unk_0xA0C0B32E74BE8DB7(uParam0->f_E, 2f, 0);
		func_246(uParam0->f_E, 0, fParam6);
		if (iParam4 == 0)
		{
			uParam0->f_3 = unk_0xD65D4CDDC3AC5774(uParam0->f_B);
		}
		else if (unk_0x724D816EA203A79E(Global_195FA.f_E1[0]))
		{
			uParam0->f_3 = Global_195FA.f_E1[0];
			unk_0x77815D3407C6700D(uParam0->f_3, true, 1);
		}
		else
		{
			uParam0->f_3 = unk_0x01B3635C3E8EDD81(26, iParam4, uParam0->f_B, fParam5, 1, true);
		}
		func_7(&(uParam0->f_F4), 3, uParam0->f_3, sParam3, 0, 1);
		unk_0x36C3B58DA78A2679(uParam0->f_3, sParam3);
		unk_0x2E9860A2B72187F5(uParam0->f_3, 112, true);
		if (!unk_0x36CEFBE9B745A58D(uParam0->f_3))
		{
			unk_0xAF9FC4463EA3090B(uParam0->f_3, 250);
			unk_0xC8FD3EBBB90E8D7F(uParam0->f_3, 32, false);
			unk_0xC8FD3EBBB90E8D7F(uParam0->f_3, 104, true);
			unk_0xC8FD3EBBB90E8D7F(uParam0->f_3, 177, true);
			unk_0xC8FD3EBBB90E8D7F(uParam0->f_3, 116, false);
			unk_0xB2CB6EAA6B280A84("TAXI_Passenger", &(uParam0->f_19D));
			unk_0xA902E18EDF6FA0C8(1, uParam0->f_19D, 1862763509);
			unk_0xA902E18EDF6FA0C8(2, uParam0->f_19D, -1533126372);
			unk_0x4106FAF8AA1D69D5(uParam0->f_3, uParam0->f_19D);
			return 1;
		}
	}
	return 0;
}

void func_309(var uParam0, vector3 vParam1)//Position - 0xBF98
{
	uParam0->f_33[0] = unk_0xF0EA164D7EE8F57D(vParam1, 20f, 5f, 0);
}

void func_310(int iParam0, int iParam1, float fParam2, bool bParam3)//Position - 0xBFB6
{
	int iVar0;
	
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (fParam2 > 0f)
			{
				func_105(&(iParam0->f_92[iVar0 /*3*/]), fParam2);
			}
			else
			{
				func_104(&(iParam0->f_92[iVar0 /*3*/]));
			}
			iVar0++;
		}
	}
	else if (fParam2 > 0f)
	{
		func_105(&(iParam0->f_92[iParam1 /*3*/]), fParam2);
	}
	else
	{
		func_104(&(iParam0->f_92[iParam1 /*3*/]));
	}
	if (bParam3)
	{
	}
}

void func_311()//Position - 0xC029
{
	unk_0xF243B7A14FCFD0F4(iLocal_253);
	func_313(0);
	uLocal_405 = func_312();
	unk_0x522053D86D6E1C7A("gestures@m@standing@casual");
}

int func_312()//Position - 0xC04C
{
	return unk_0x9934FEFB3B8C6DB8("MIDSIZED_MESSAGE");
}

void func_313(bool bParam0)//Position - 0xC05C
{
	unk_0xF243B7A14FCFD0F4(func_18());
	if (bParam0)
	{
		unk_0x522053D86D6E1C7A("gestures@m@standing@casual");
	}
	unk_0x522053D86D6E1C7A("oddjobs@taxi@");
	unk_0x522053D86D6E1C7A("oddjobs@towingcome_here");
	unk_0x522053D86D6E1C7A("misscommon@response");
	unk_0x900CF084251DED26("TAXI", 2);
	if (!func_21(Global_19B04.f_4A7C, 128))
	{
		func_64(&(Global_19B04.f_4A7C), 128);
	}
}

void func_314(var uParam0, int iParam1, bool bParam2)//Position - 0xC0B8
{
	if (uParam0->f_19B == 0)
	{
		if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) == 0)
		{
			if (bParam2)
			{
				if (func_111(uParam0, 10) > (20f + 10f))
				{
					if (uParam0->f_70)
					{
						func_249(uParam0, 92, 1, 0, 0);
						uParam0->f_70 = 0;
					}
					else
					{
						func_249(uParam0, 83, 1, 0, 0);
					}
					uParam0->f_71 = 1;
					func_310(uParam0, 10, 0f, 1);
				}
			}
			else if (func_111(uParam0, 10) > 20f)
			{
				if (uParam0->f_70)
				{
					func_249(uParam0, 92, 1, 0, 0);
					uParam0->f_70 = 0;
				}
				else
				{
					func_249(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_71 = 1;
				func_310(uParam0, 10, 0f, 1);
			}
		}
	}
	if (uParam0->f_19B == 1)
	{
		if (func_111(uParam0, 10) > 30f)
		{
			if (!func_206())
			{
				if (uParam0->f_70)
				{
					func_249(uParam0, 92, 1, 0, 0);
					uParam0->f_70 = 0;
				}
				else
				{
					func_249(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_71 = 1;
				func_310(uParam0, 10, 0f, 1);
			}
		}
	}
	if (func_21(uParam0->f_64, 64))
	{
		if (!func_13(&(Local_162[5 /*10*/].f_6)))
		{
			func_112(&(Local_162[5 /*10*/].f_6));
		}
		else if (func_102(&(Local_162[5 /*10*/].f_6)) > 6f)
		{
			if (func_337(uParam0))
			{
				if (uParam0->f_71)
				{
					func_249(uParam0, 93, 1, 0, 0);
					uParam0->f_71 = 0;
				}
				else
				{
					func_249(uParam0, Local_162[5 /*10*/].f_9, 1, 0, 0);
				}
				func_336(uParam0, 1);
				func_334(5, uParam0);
				func_333(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_64, 1))
	{
		if (!func_13(&(Local_162[0 /*10*/].f_6)))
		{
			func_112(&(Local_162[0 /*10*/].f_6));
		}
		else if (func_102(&(Local_162[0 /*10*/].f_6)) > 5f)
		{
			if (func_332(uParam0))
			{
				func_336(uParam0, 1);
				func_334(0, uParam0);
				if (uParam0->f_71)
				{
					func_249(uParam0, 93, 1, 0, 0);
					uParam0->f_71 = 0;
				}
				else
				{
					func_249(uParam0, Local_162[0 /*10*/].f_9, 1, 0, 0);
				}
				func_333(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_64, 2))
	{
		if (!func_13(&(Local_162[1 /*10*/].f_6)))
		{
			func_112(&(Local_162[1 /*10*/].f_6));
		}
		else if (func_102(&(Local_162[1 /*10*/].f_6)) > 5f)
		{
			if (func_331(uParam0))
			{
				func_336(uParam0, 1);
				func_334(1, uParam0);
				if (uParam0->f_71)
				{
					func_249(uParam0, 93, 1, 0, 0);
					uParam0->f_71 = 0;
				}
				else
				{
					func_249(uParam0, Local_162[1 /*10*/].f_9, 1, 0, 0);
				}
				func_333(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_64, 2048))
	{
		if (!func_13(&(Local_162[8 /*10*/].f_6)))
		{
			if (unk_0x724D816EA203A79E(uParam0->f_4))
			{
				uParam0->f_2E = unk_0x8D66276473ABD7CC(uParam0->f_4);
				func_112(&(Local_162[8 /*10*/].f_6));
			}
		}
		else if (func_102(&(Local_162[8 /*10*/].f_6)) > 7f || Local_162[8 /*10*/].f_1 == 0)
		{
			if (func_330(uParam0))
			{
				func_336(uParam0, 1);
				func_334(8, uParam0);
				func_333(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_64, 128))
	{
		if (!func_13(&(Local_162[6 /*10*/].f_6)))
		{
			func_112(&(Local_162[6 /*10*/].f_6));
		}
		else if (func_102(&(Local_162[6 /*10*/].f_6)) > 5f)
		{
			if (func_329(uParam0))
			{
				func_336(uParam0, 1);
				func_334(6, uParam0);
				if (uParam0->f_71)
				{
					func_249(uParam0, 93, 1, 0, 0);
					uParam0->f_71 = 0;
				}
				else
				{
					func_249(uParam0, Local_162[6 /*10*/].f_9, 1, 0, 0);
				}
				func_333(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_64, 32))
	{
		if (!func_13(&(Local_162[4 /*10*/].f_6)))
		{
			func_112(&(Local_162[4 /*10*/].f_6));
		}
		else if (func_102(&(Local_162[4 /*10*/].f_6)) > 4f)
		{
			if (func_328(uParam0))
			{
				func_336(uParam0, 1);
				func_334(4, uParam0);
				if (uParam0->f_71)
				{
					func_249(uParam0, 93, 1, 0, 0);
					uParam0->f_71 = 0;
				}
				else
				{
					func_249(uParam0, Local_162[4 /*10*/].f_9, 1, 0, 0);
				}
				func_333(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_64, 256))
	{
		if (!func_13(&(Local_162[7 /*10*/].f_6)))
		{
			func_112(&(Local_162[7 /*10*/].f_6));
		}
		else if (func_102(&(Local_162[7 /*10*/].f_6)) > 5f || Local_162[7 /*10*/].f_1 == 0)
		{
			if (func_327(uParam0))
			{
				func_334(7, uParam0);
				func_336(uParam0, 1);
				if (uParam0->f_71)
				{
					func_249(uParam0, 93, 1, 0, 0);
					uParam0->f_71 = 0;
				}
				else
				{
					func_249(uParam0, Local_162[7 /*10*/].f_9, 1, 0, 1);
				}
				func_333(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_64, 8))
	{
		if (!func_13(&(Local_162[9 /*10*/].f_6)))
		{
			func_112(&(Local_162[9 /*10*/].f_6));
		}
		else if (func_102(&(Local_162[9 /*10*/].f_6)) <= 7f)
		{
			unk_0xA67D3DDB524B8DBA(unk_0xB5CEFD608600A09F());
		}
		else if (func_102(&(Local_162[9 /*10*/].f_6)) > 7f || Local_162[9 /*10*/].f_1 == 0)
		{
			if (func_326(uParam0))
			{
				func_336(uParam0, 1);
				func_334(9, uParam0);
				if (uParam0->f_71)
				{
					func_249(uParam0, 93, 1, 0, 0);
					uParam0->f_71 = 0;
				}
				else
				{
					func_249(uParam0, Local_162[9 /*10*/].f_9, 1, 0, 1);
				}
				func_333(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_64, 16384))
	{
		if (!func_13(&(Local_162[13 /*10*/].f_6)))
		{
			func_112(&(Local_162[13 /*10*/].f_6));
		}
		else if (func_102(&(Local_162[13 /*10*/].f_6)) > 10f)
		{
			if (func_320(uParam0))
			{
				func_336(uParam0, 1);
				func_334(13, uParam0);
				if (uParam0->f_71)
				{
					func_249(uParam0, 93, 1, 0, 0);
					uParam0->f_71 = 0;
				}
				else
				{
					func_249(uParam0, Local_162[13 /*10*/].f_9, 1, 0, 0);
				}
				func_333(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_64, 32768))
	{
		if (!func_13(&(Local_162[14 /*10*/].f_6)))
		{
			func_112(&(Local_162[14 /*10*/].f_6));
		}
		else if (func_102(&(Local_162[14 /*10*/].f_6)) > 7f)
		{
			if (func_319(uParam0))
			{
				func_336(uParam0, 1);
				func_334(14, uParam0);
				if (uParam0->f_71)
				{
					func_249(uParam0, 93, 1, 0, 0);
					uParam0->f_71 = 0;
				}
				else
				{
					func_249(uParam0, Local_162[14 /*10*/].f_9, 1, 0, 0);
				}
				func_333(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_64, 4096))
	{
		if (!func_13(&(Local_162[11 /*10*/].f_6)))
		{
			func_112(&(Local_162[11 /*10*/].f_6));
		}
		else if (func_102(&(Local_162[11 /*10*/].f_6)) > 8f)
		{
			if (func_318(uParam0))
			{
				func_336(uParam0, 1);
				func_334(11, uParam0);
				if (uParam0->f_71)
				{
					func_249(uParam0, 93, 1, 0, 0);
					uParam0->f_71 = 0;
				}
				else
				{
					func_249(uParam0, Local_162[11 /*10*/].f_9, 1, 0, 0);
				}
				func_333(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_64, 8192))
	{
		if (!func_13(&(Local_162[12 /*10*/].f_6)))
		{
			func_112(&(Local_162[12 /*10*/].f_6));
		}
		else if (func_102(&(Local_162[12 /*10*/].f_6)) > 5f)
		{
			if (func_317(uParam0))
			{
				func_336(uParam0, 1);
				func_334(12, uParam0);
				if (uParam0->f_71)
				{
					func_249(uParam0, 93, 1, 0, 0);
					uParam0->f_71 = 0;
				}
				else
				{
					func_249(uParam0, Local_162[12 /*10*/].f_9, 1, 0, 0);
				}
				func_333(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_64, 4))
	{
		if (!func_13(&(Local_162[2 /*10*/].f_6)))
		{
			func_316(&(Local_162[2 /*10*/].f_6), 0f);
		}
		else if (func_102(&(Local_162[2 /*10*/].f_6)) > 5f)
		{
			if (func_315(uParam0))
			{
				if (uParam0->f_71)
				{
					func_249(uParam0, 93, 1, 0, 0);
					uParam0->f_71 = 0;
				}
				else
				{
					func_249(uParam0, Local_162[2 /*10*/].f_9, 1, 0, 0);
				}
				func_336(uParam0, 1);
				func_334(2, uParam0);
				func_333(uParam0);
			}
		}
	}
}

int func_315(var uParam0)//Position - 0xC8B2
{
	float fVar0;
	
	if (!unk_0x36CEFBE9B745A58D(uParam0->f_2))
	{
		if ((!unk_0x63276C96B907C69E(uParam0->f_2) && !func_13(&(Local_162[0 /*10*/].f_3))) && !func_13(&(Local_162[1 /*10*/].f_3)))
		{
			if (!func_13(&(Local_162[2 /*10*/].f_3)))
			{
				uParam0->f_25 = unk_0x8910237449BB6F79(uParam0->f_2);
				if (uParam0->f_25 > 10f)
				{
					func_112(&(Local_162[2 /*10*/].f_3));
				}
			}
			else if (func_102(&(Local_162[2 /*10*/].f_3)) > 0.9f)
			{
				uParam0->f_26 = uParam0->f_25;
				uParam0->f_25 = unk_0x8910237449BB6F79(uParam0->f_2);
				fVar0 = (uParam0->f_26 - uParam0->f_25);
				func_101(&(Local_162[2 /*10*/].f_3));
				if (fVar0 > 10f && uParam0->f_25 < 12f)
				{
					return 1;
				}
			}
		}
		else
		{
			func_101(&(Local_162[2 /*10*/].f_3));
		}
	}
	return 0;
}

void func_316(int iParam0, float fParam1)//Position - 0xC995
{
	if (!func_13(iParam0))
	{
		func_105(iParam0, fParam1);
	}
}

int func_317(var uParam0)//Position - 0xC9AF
{
	vector3 vVar0;
	
	if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
	{
		vVar0 = { unk_0xA43418B5859810A6(uParam0->f_4, 1) };
		if (vVar0.y < -10f && !func_13(&(Local_162[0 /*10*/].f_3)))
		{
			if (!func_13(&(Local_162[12 /*10*/].f_3)))
			{
				func_112(&(Local_162[12 /*10*/].f_3));
			}
			else if (func_102(&(Local_162[12 /*10*/].f_3)) > 5f)
			{
				func_101(&(Local_162[12 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_101(&(Local_162[12 /*10*/].f_3));
		}
	}
	return 0;
}

int func_318(var uParam0)//Position - 0xCA3E
{
	vector3 vVar0;
	
	if ((((((unk_0xE59B7F5A03335350(uParam0->f_4, 0) && !func_13(&(Local_162[0 /*10*/].f_3))) && !func_13(&(Local_162[1 /*10*/].f_3))) && !func_13(&(Local_162[5 /*10*/].f_3))) && !func_13(&(Local_162[9 /*10*/].f_3))) && !func_13(&(Local_162[7 /*10*/].f_3))) && !func_13(&(Local_162[8 /*10*/].f_3)))
	{
		vVar0 = { unk_0xA43418B5859810A6(uParam0->f_4, 1) };
		if (unk_0x357058E632979E65(vVar0.x) > 2.5f && !func_13(&(Local_162[0 /*10*/].f_3)))
		{
			if (!func_13(&(Local_162[11 /*10*/].f_3)))
			{
				func_112(&(Local_162[11 /*10*/].f_3));
				fLocal_164 = vVar0.x;
			}
			else if (func_102(&(Local_162[11 /*10*/].f_3)) < 1.5f && (unk_0x357058E632979E65(fLocal_164) - unk_0x357058E632979E65(vVar0.x)) < 0f)
			{
				func_101(&(Local_162[11 /*10*/].f_3));
				return 1;
			}
			else if (func_102(&(Local_162[11 /*10*/].f_3)) >= 1.5f)
			{
				func_101(&(Local_162[11 /*10*/].f_3));
				return 0;
			}
		}
	}
	return 0;
}

int func_319(var uParam0)//Position - 0xCB6E
{
	if (((((unk_0xE59B7F5A03335350(uParam0->f_4, 0) && !func_13(&(Local_162[0 /*10*/].f_3))) && !func_13(&(Local_162[8 /*10*/].f_3))) && !func_13(&(Local_162[5 /*10*/].f_3))) && !func_13(&(Local_162[9 /*10*/].f_3))) && !func_13(&(Local_162[7 /*10*/].f_3)))
	{
		if (!func_13(&(Local_162[14 /*10*/].f_3)))
		{
			uParam0->f_5 = unk_0x39827CF9BEAB804C(unk_0x541C2AEF053615BC(uParam0->f_4, true), 10f, 0, 260);
			if (unk_0x724D816EA203A79E(uParam0->f_5))
			{
				if ((unk_0x8910237449BB6F79(uParam0->f_4) > 15f && func_48(uParam0->f_5, uParam0->f_4, 1) < 3f) && (!unk_0x1D403DFADBC2DE3C(uParam0->f_5, 0) && !unk_0x1AAF0C23233C57AF(uParam0->f_5, -1, 0)))
				{
					func_112(&(Local_162[14 /*10*/].f_3));
				}
			}
		}
		else if ((func_102(&(Local_162[14 /*10*/].f_3)) < 1.5f && func_48(uParam0->f_5, uParam0->f_4, 1) > 4.5f) && !unk_0x127812AA6652253F(uParam0->f_5))
		{
			func_101(&(Local_162[14 /*10*/].f_3));
			return 1;
		}
		else if (func_102(&(Local_162[14 /*10*/].f_3)) >= 1.5f)
		{
			func_101(&(Local_162[14 /*10*/].f_3));
			return 0;
		}
		else if (unk_0x127812AA6652253F(uParam0->f_5))
		{
			func_101(&(Local_162[14 /*10*/].f_3));
			return 0;
		}
	}
	return 0;
}

int func_320(var uParam0)//Position - 0xCCF3
{
	if (((unk_0xE59B7F5A03335350(uParam0->f_4, 0) && !func_13(&(Local_162[9 /*10*/].f_3))) && !func_13(&(Local_162[7 /*10*/].f_3))) && !func_13(&(Local_162[4 /*10*/].f_3)))
	{
		if (!func_321(uParam0->f_4) && unk_0x8910237449BB6F79(uParam0->f_4) > 15f)
		{
			if (!func_13(&(Local_162[13 /*10*/].f_3)))
			{
				func_112(&(Local_162[13 /*10*/].f_3));
			}
			else if (func_102(&(Local_162[13 /*10*/].f_3)) > 5f)
			{
				func_101(&(Local_162[13 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_101(&(Local_162[13 /*10*/].f_3));
		}
	}
	return 0;
}

bool func_321(int iParam0)//Position - 0xCDAA
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
	vVar3 = { func_325((vVar1.x - vVar0.x), (vVar1.y - vVar0.y), 0f) };
	vVar4 = { func_324(vVar3, 0) * Vector(fVar9, fVar9, fVar9) };
	vVar3 = { vVar3 * Vector(2f, 2f, 2f) };
	vVar5 = { vVar0 - vVar3 + vVar4 };
	vVar6 = { vVar0 - vVar3 - vVar4 };
	vVar7 = { vVar1 + vVar3 + vVar4 };
	vVar8 = { vVar1 + vVar3 - vVar4 };
	vVar8 = { vVar8 };
	return func_322(unk_0x541C2AEF053615BC(iParam0, true), vVar5, vVar6, vVar7);
}

int func_322(vector3 vParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3)//Position - 0xCE93
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
	vVar0 = { func_325(vParam2 - vParam1) };
	vVar1 = { func_325(vParam3 - vParam1) };
	fVar2 = func_323(vParam0, vVar0);
	fVar3 = func_323(vParam1, vVar0);
	fVar4 = func_323(vParam2, vVar0);
	fVar5 = func_323(vParam0, vVar1);
	fVar6 = func_323(vParam1, vVar1);
	fVar7 = func_323(vParam3, vVar1);
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

float func_323(vector3 vParam0, vector3 vParam1)//Position - 0xCF7C
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

Vector3 func_324(vector3 vParam0, int iParam1)//Position - 0xCF9D
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

Vector3 func_325(vector3 vParam0)//Position - 0xCFFB
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

int func_326(var uParam0)//Position - 0xD03A
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

int func_327(var uParam0)//Position - 0xD06F
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

int func_328(var uParam0)//Position - 0xD105
{
	int iVar0;
	
	if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
	{
		iVar0 = unk_0xDE2406913267F913(unk_0xB5CEFD608600A09F());
		if (iVar0 == 0)
		{
			if (!func_13(&(Local_162[4 /*10*/].f_3)))
			{
				func_112(&(Local_162[4 /*10*/].f_3));
			}
			else if (func_102(&(Local_162[4 /*10*/].f_3)) > 2f)
			{
				func_101(&(Local_162[4 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_101(&(Local_162[4 /*10*/].f_3));
		}
	}
	return 0;
}

int func_329(var uParam0)//Position - 0xD177
{
	int iVar0;
	
	if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
	{
		iVar0 = unk_0x2D2916537452B0DE(unk_0xB5CEFD608600A09F());
		if (iVar0 == 0)
		{
			if (!func_13(&(Local_162[6 /*10*/].f_3)))
			{
				func_112(&(Local_162[6 /*10*/].f_3));
			}
			else if (func_102(&(Local_162[6 /*10*/].f_3)) > 3.5f)
			{
				func_101(&(Local_162[6 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_101(&(Local_162[6 /*10*/].f_3));
		}
	}
	return 0;
}

int func_330(var uParam0)//Position - 0xD1ED
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
					func_249(uParam0, 93, 1, 0, 0);
					uParam0->f_71 = 0;
				}
				else
				{
					func_249(uParam0, 72, 1, 0, 1);
				}
				func_101(&(Local_162[2 /*10*/].f_6));
				return 1;
			}
		}
	}
	return 0;
}

int func_331(var uParam0)//Position - 0xD26E
{
	vector3 vVar0;
	
	if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
	{
		vVar0 = { unk_0xA43418B5859810A6(uParam0->f_4, 1) };
		if (unk_0x357058E632979E65(vVar0.x) > 3f && !func_13(&(Local_162[0 /*10*/].f_3)))
		{
			if (!func_13(&(Local_162[1 /*10*/].f_3)))
			{
				func_112(&(Local_162[1 /*10*/].f_3));
			}
			else if (func_102(&(Local_162[1 /*10*/].f_3)) > 1.2f)
			{
				func_101(&(Local_162[1 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_101(&(Local_162[1 /*10*/].f_3));
		}
	}
	return 0;
}

int func_332(var uParam0)//Position - 0xD2FA
{
	if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
	{
		if (!unk_0x58F9E0EA914AEF2C(uParam0->f_4) && unk_0x2A348A3A98B80B13(uParam0->f_4))
		{
			if (!func_13(&(Local_162[0 /*10*/].f_3)))
			{
				func_112(&(Local_162[0 /*10*/].f_3));
			}
			else if (func_102(&(Local_162[0 /*10*/].f_3)) > 0.7f)
			{
				func_101(&(Local_162[0 /*10*/].f_3));
				func_104(&(Local_162[1 /*10*/].f_6));
				return 1;
			}
		}
		else
		{
			func_101(&(Local_162[0 /*10*/].f_3));
		}
	}
	return 0;
}

void func_333(var uParam0)//Position - 0xD384
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_13(&(Local_162[iVar0 /*10*/].f_6)))
		{
			func_104(&(Local_162[iVar0 /*10*/].f_6));
		}
		iVar0++;
	}
	func_310(uParam0, 10, 0f, 1);
	unk_0xA67D3DDB524B8DBA(unk_0xB5CEFD608600A09F());
}

void func_334(int iParam0, var uParam1)//Position - 0xD3CC
{
	Local_162[iParam0 /*10*/].f_1++;
	func_335(uParam1, iParam0);
	func_101(&(Local_162[iParam0 /*10*/].f_6));
	uParam1->f_70 = 1;
}

void func_335(var uParam0, int iParam1)//Position - 0xD3FF
{
	uParam0->f_4C = (uParam0->f_4C + Local_162[iParam1 /*10*/]);
}

void func_336(var uParam0, int iParam1)//Position - 0xD416
{
	uParam0->f_68 = (uParam0->f_68 + iParam1);
}

int func_337(var uParam0)//Position - 0xD429
{
	if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
	{
		if (unk_0x8910237449BB6F79(uParam0->f_4) > 25f)
		{
			if (!func_13(&(Local_162[5 /*10*/].f_3)))
			{
				func_112(&(Local_162[5 /*10*/].f_3));
			}
			else if (func_102(&(Local_162[5 /*10*/].f_3)) > 3.5f)
			{
				func_101(&(Local_162[5 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_101(&(Local_162[5 /*10*/].f_3));
		}
	}
	return 0;
}

void func_338()//Position - 0xD4A0
{
	vector3 vVar0;
	
	func_138("UPDATE_FINAL_SCENE()", &iLocal_263, 1000);
	if ((Local_238.f_19A >= 28 && !iLocal_272) && ((unk_0xD9C1758D86688CEA(Local_238.f_3, unk_0xBC25C936A095B5BA(), 1) || unk_0xD9C1758D86688CEA(iLocal_257, unk_0xBC25C936A095B5BA(), 1)) || unk_0xD9C1758D86688CEA(Local_251.f_2, unk_0xBC25C936A095B5BA(), 1)))
	{
		iLocal_272 = 1;
	}
	else if (!unk_0x1D403DFADBC2DE3C(Local_238.f_3, 0))
	{
		if (unk_0xD9C1758D86688CEA(Local_251.f_2, Local_238.f_3, 1) && iLocal_415 < 6)
		{
			iLocal_272 = 1;
		}
	}
	if (iLocal_415 >= 4)
	{
		if (func_228(Local_238.f_3, 1) < 3f && !iLocal_271)
		{
			if (!func_206())
			{
				func_341(&(Local_238.f_F4), Local_238.f_90, "txm4_aggro", 8, 0, 0, 0);
				unk_0x57D65255D3D3B6A7(Local_238.f_3, unk_0xBC25C936A095B5BA(), -1, 0);
				iLocal_267 = unk_0x105601648511CC64();
				iLocal_271 = 1;
			}
			else if (!iLocal_280)
			{
				func_146();
				iLocal_280 = 1;
			}
		}
	}
	switch (iLocal_415)
	{
		case 0:
			if ((!unk_0x1D403DFADBC2DE3C(Local_251.f_2, 0) && !unk_0x1D403DFADBC2DE3C(Local_238.f_3, 0)) && !unk_0x1D403DFADBC2DE3C(iLocal_257, 0))
			{
				unk_0xB2CB6EAA6B280A84("TAXI_Whore", &iLocal_260);
				iLocal_259 = unk_0x84788C4CA5E15BDC(Local_238.f_3);
				unk_0xA902E18EDF6FA0C8(255, Local_251.f_1E, iLocal_260);
				unk_0xA902E18EDF6FA0C8(255, Local_251.f_1E, iLocal_259);
				unk_0x4106FAF8AA1D69D5(Local_251.f_2, Local_251.f_1E);
				unk_0x4106FAF8AA1D69D5(iLocal_257, iLocal_260);
				unk_0x2E35C4FA5F0ED22F(Local_251.f_2, true);
				unk_0x91629AC1E1F78419(Local_251.f_2, 17, true);
				unk_0x65E471E4A2D56226(Local_251.f_2, 130, 0);
				unk_0x751846449040F7EC(Local_251.f_2, 1);
				unk_0x566684DB6DAC0531(Local_251.f_2, true);
				unk_0xA4E856A8CD53B8DF(Local_251.f_2);
				unk_0x2E35C4FA5F0ED22F(iLocal_257, true);
				unk_0x91629AC1E1F78419(iLocal_257, 17, true);
				unk_0x65E471E4A2D56226(iLocal_257, 130, 0);
				unk_0x751846449040F7EC(iLocal_257, 1);
				unk_0x566684DB6DAC0531(iLocal_257, true);
				unk_0xA4E856A8CD53B8DF(iLocal_257);
				iLocal_415 = 1;
			}
			break;
		
		case 1:
			if (((!unk_0x1D403DFADBC2DE3C(Local_251.f_2, 0) && !unk_0x1D403DFADBC2DE3C(Local_238.f_3, 0)) && !unk_0x1D403DFADBC2DE3C(iLocal_257, 0)) && !unk_0x1D403DFADBC2DE3C(Local_251.f_3, 0))
			{
				unk_0x02DAF06EA4F08219(&iLocal_232);
				unk_0xC5A6DFE2B8987B17(&iLocal_232);
				unk_0x85DB484A637CEAB9(0, iLocal_257, 0);
				unk_0xE896C0AD02364F2A(0, &cLocal_312, "idle_b", 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0xE896C0AD02364F2A(0, &cLocal_321, "exit", 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0x535008C596714F9E(iLocal_232);
				unk_0xA8E6405305C0D7DF(Local_251.f_2, iLocal_232);
				unk_0x02DAF06EA4F08219(&iLocal_232);
				unk_0x02DAF06EA4F08219(&iLocal_233);
				unk_0xC5A6DFE2B8987B17(&iLocal_233);
				unk_0x85DB484A637CEAB9(0, Local_251.f_2, 0);
				unk_0xE896C0AD02364F2A(0, &cLocal_330, "idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0x535008C596714F9E(iLocal_233);
				unk_0xA8E6405305C0D7DF(iLocal_257, iLocal_233);
				unk_0x02DAF06EA4F08219(&iLocal_233);
				iLocal_415 = 2;
			}
			break;
		
		case 2:
			if (iLocal_273)
			{
				if (!unk_0x1D403DFADBC2DE3C(iLocal_257, 0) && !unk_0x1D403DFADBC2DE3C(Local_238.f_3, 0))
				{
					unk_0x4106FAF8AA1D69D5(Local_238.f_3, iLocal_259);
					unk_0x2E35C4FA5F0ED22F(Local_238.f_3, true);
					unk_0x91629AC1E1F78419(Local_238.f_3, 13, true);
					unk_0x479A4C6E23FBB038(Local_238.f_3, 100);
					unk_0xFC3C88E2313FA926(Local_238.f_3, 100);
					unk_0x65E471E4A2D56226(Local_238.f_3, 105, 0);
					unk_0xA4E856A8CD53B8DF(Local_238.f_3);
					unk_0x02DAF06EA4F08219(&iLocal_234);
					unk_0xC5A6DFE2B8987B17(&iLocal_234);
					unk_0xDE2D2B13F24A979D(0, 5000);
					func_340(&Local_238, -691.48f, -1113.31f, 13.53f);
					unk_0x8744E2AAA4C44FDC(0, func_339(iLocal_231), iLocal_257, 3f, true, 0.5f, 4f, true, 0, 0, -957453492, 20000);
					unk_0x3D3F19B39A42CF7A(0, iLocal_257, -1, -957453492);
					unk_0x535008C596714F9E(iLocal_234);
					unk_0xA8E6405305C0D7DF(Local_238.f_3, iLocal_234);
					unk_0x02DAF06EA4F08219(&iLocal_234);
					iLocal_269 = 1;
					unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 256);
					unk_0x7A535CE1F001F3FE(Local_238.f_3, joaat("weapon_pistol"), 100, true, true);
					iLocal_415 = 3;
				}
			}
			else if (!iLocal_276)
			{
				if (!unk_0x36CEFBE9B745A58D(Local_251.f_2) && !unk_0x36CEFBE9B745A58D(iLocal_257))
				{
					if (func_228(Local_251.f_2, 1) < 2f || func_228(iLocal_257, 1) < 2f)
					{
						unk_0xA4E856A8CD53B8DF(Local_251.f_2);
						unk_0xA4E856A8CD53B8DF(iLocal_257);
						unk_0x56F2E1B5599188FA(Local_251.f_2, unk_0xBC25C936A095B5BA(), -1, 2048, 4);
						unk_0x02DAF06EA4F08219(&iLocal_232);
						unk_0xC5A6DFE2B8987B17(&iLocal_232);
						unk_0x85DB484A637CEAB9(0, unk_0xBC25C936A095B5BA(), 0);
						unk_0x535008C596714F9E(iLocal_232);
						unk_0xA8E6405305C0D7DF(Local_251.f_2, iLocal_232);
						unk_0x56F2E1B5599188FA(iLocal_257, unk_0xBC25C936A095B5BA(), -1, 2048, 4);
						unk_0x02DAF06EA4F08219(&iLocal_233);
						unk_0xC5A6DFE2B8987B17(&iLocal_233);
						unk_0x85DB484A637CEAB9(0, unk_0xBC25C936A095B5BA(), 0);
						unk_0x535008C596714F9E(iLocal_233);
						unk_0xA8E6405305C0D7DF(iLocal_257, iLocal_233);
						iLocal_276 = 1;
					}
				}
				else
				{
					if (unk_0x36CEFBE9B745A58D(Local_251.f_2))
					{
					}
					else
					{
						unk_0xA4E856A8CD53B8DF(Local_251.f_2);
						unk_0x5558ED6D4A2DEC93(Local_251.f_2, unk_0xBC25C936A095B5BA(), 100f, 20000, 0, 0);
					}
					if (unk_0x36CEFBE9B745A58D(iLocal_257))
					{
					}
					else
					{
						unk_0xA4E856A8CD53B8DF(iLocal_257);
						unk_0x5558ED6D4A2DEC93(iLocal_257, unk_0xBC25C936A095B5BA(), 100f, 20000, 0, 0);
					}
				}
			}
			break;
		
		case 3:
			func_138("UPDATE_FINAL_SCENE - FINAL_SCENE_WAIT_FOR_DIALOGUE", &iLocal_263, 1000);
			if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0) && !unk_0x1D403DFADBC2DE3C(Local_238.f_3, 0))
			{
				if (unk_0xF4FCC3C1048FF2AB(Local_238.f_3, 242628503) == 1)
				{
					if (unk_0xD62938026B30481A(Local_238.f_3) > 0 && iLocal_269)
					{
						unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
						iLocal_269 = 0;
					}
				}
			}
			else
			{
				unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
			}
			if (((!unk_0x36CEFBE9B745A58D(iLocal_257) && unk_0x48EBE45A9A7EB10C(iLocal_257)) && !unk_0x1D403DFADBC2DE3C(Local_251.f_2, 0)) && !bLocal_275)
			{
				unk_0x56F2E1B5599188FA(Local_251.f_2, Local_238.f_3, -1, 2048, 4);
				unk_0x02DAF06EA4F08219(&iLocal_232);
				unk_0xC5A6DFE2B8987B17(&iLocal_232);
				unk_0xDE2D2B13F24A979D(0, 500);
				unk_0xE896C0AD02364F2A(0, "MOVE_DUCK_FOR_COVER", "enter", 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0xE896C0AD02364F2A(0, "MOVE_DUCK_FOR_COVER", "loop", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0x85DB484A637CEAB9(0, Local_238.f_3, 0);
				unk_0x535008C596714F9E(iLocal_232);
				unk_0xA8E6405305C0D7DF(Local_251.f_2, iLocal_232);
				bLocal_275 = true;
			}
			if (!unk_0x1D403DFADBC2DE3C(Local_238.f_3, 0) && !unk_0x1D403DFADBC2DE3C(Local_251.f_2, 0))
			{
				if (unk_0xD62938026B30481A(Local_238.f_3) > 2)
				{
					func_249(&Local_238, 58, 1, 0, 0);
					unk_0x02DAF06EA4F08219(&iLocal_234);
					unk_0xC5A6DFE2B8987B17(&iLocal_234);
					unk_0x44C98C11ED6DD327(0);
					unk_0x57D65255D3D3B6A7(0, Local_251.f_2, 2000, 0);
					unk_0x535008C596714F9E(iLocal_234);
					unk_0xA8E6405305C0D7DF(Local_238.f_3, iLocal_234);
					iLocal_415 = 4;
				}
			}
			break;
		
		case 4:
			func_138("FINAL_SCENE_KILL_WOMAN", &iLocal_263, 1000);
			if (unk_0x1D403DFADBC2DE3C(iLocal_257, 0))
			{
				if (!unk_0x1D403DFADBC2DE3C(Local_251.f_2, 0))
				{
					if (!unk_0x1D403DFADBC2DE3C(Local_238.f_3, 0))
					{
						unk_0x02DAF06EA4F08219(&iLocal_233);
						unk_0xC5A6DFE2B8987B17(&iLocal_233);
						unk_0x8744E2AAA4C44FDC(0, -691.48f, -1113.31f, 13.53f, Local_251.f_2, 1f, false, 0.5f, 4f, true, 0, 0, -957453492, 20000);
						unk_0x57D65255D3D3B6A7(0, Local_251.f_2, -1, 1);
						unk_0x535008C596714F9E(iLocal_233);
						unk_0xA8E6405305C0D7DF(Local_238.f_3, iLocal_233);
					}
				}
				iLocal_415 = 6;
			}
			break;
		
		case 6:
			func_138("FINAL_SCENE_KILL_MAN", &iLocal_263, 1000);
			if (!func_206())
			{
				if (!unk_0x1D403DFADBC2DE3C(Local_238.f_3, 0) && !unk_0x1D403DFADBC2DE3C(Local_251.f_2, 0))
				{
					unk_0x3D3F19B39A42CF7A(Local_238.f_3, Local_251.f_2, -1, -957453492);
					iLocal_415 = 7;
				}
			}
			break;
		
		case 7:
			func_138("FINAL_SCENE_FLEE", &iLocal_263, 1000);
			if (unk_0x1D403DFADBC2DE3C(Local_251.f_2, 0) && !unk_0x1D403DFADBC2DE3C(Local_238.f_3, 0))
			{
				vVar0 = { unk_0x541C2AEF053615BC(Local_251.f_2, false) };
				unk_0xC5A6DFE2B8987B17(&iLocal_234);
				unk_0xF90A8AD825CA2E0C(0, vVar0, 1000, 0, 0);
				unk_0x74C219E0C7FC4E4B(0, 0);
				unk_0xDE2D2B13F24A979D(0, 500);
				unk_0xAB43C54784946B9F(0, -691.48f, -1113.31f, 13.53f, 1000f, -1, 0, 0);
				unk_0x535008C596714F9E(iLocal_234);
				unk_0xA8E6405305C0D7DF(Local_238.f_3, iLocal_234);
				unk_0x02DAF06EA4F08219(&iLocal_234);
				unk_0x22321800954A532E(Local_238.f_3, true);
				iLocal_272 = 1;
			}
			break;
	}
}

Vector3 func_339(int iParam0)//Position - 0xDD1A
{
	switch (iParam0)
	{
		case 0:
			return -691.48f, -1113.31f, 13.53f;
		
		case 1:
			return -691.48f, -1113.31f, 13.53f;
		
		default:
	}
	return -691.48f, -1113.31f, 13.53f;
}

void func_340(var uParam0, vector3 vParam1)//Position - 0xDD68
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
	{
		if (!unk_0x1D403DFADBC2DE3C(uParam0->f_3, 0))
		{
			vVar0 = { unk_0xA4455714F3DCE207(uParam0->f_4, -1.78774f, -1.62399f, -0.6206f) };
			vVar1 = { unk_0xA4455714F3DCE207(uParam0->f_4, 1.78498f, -1.24105f, -0.6422f) };
			if (unk_0xF0F2FC9DE291567F(vVar0, vParam1, false) < unk_0xF0F2FC9DE291567F(vVar1, vParam1, false) && unk_0x2101FAC9A9D4C29D(uParam0->f_3, uParam0->f_4, 1, 0, false))
			{
				unk_0x932E201A82D2EDB8(0, uParam0->f_4, 131584);
			}
			else if (unk_0xF0F2FC9DE291567F(vVar0, vParam1, false) >= unk_0xF0F2FC9DE291567F(vVar1, vParam1, false) && unk_0x2101FAC9A9D4C29D(uParam0->f_3, uParam0->f_4, 2, 0, false))
			{
				unk_0x932E201A82D2EDB8(0, uParam0->f_4, 262656);
			}
			else
			{
				unk_0x932E201A82D2EDB8(0, uParam0->f_4, 512);
			}
		}
	}
}

int func_341(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xDE4F
{
	func_349(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_342(sParam2, iParam3, 0);
}

int func_342(char* sParam0, int iParam1, bool bParam2)//Position - 0xDE9D
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
					func_147();
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
		if (func_348(8, -1))
		{
			return 0;
		}
		Global_3E04 = { Global_3DFE };
		func_347();
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
				func_346();
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
				if (func_345())
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
			if (func_30())
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
			func_344();
			Global_3DC2 = bParam2;
		}
		Global_3DBA = iParam1;
		StringCopy(&Global_3C3B, sParam0, 24);
		Global_394A = 0;
		func_343();
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
		func_147();
	}
	return 0;
}

void func_343()//Position - 0xE169
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

void func_344()//Position - 0xE19B
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

int func_345()//Position - 0xE230
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

void func_346()//Position - 0xE2C9
{
	if (func_79(14))
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
		Global_389D = func_98();
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

void func_347()//Position - 0xE36B
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

bool func_348(int iParam0, int iParam1)//Position - 0xE3C3
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

void func_349(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0xE3FE
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

void func_350(int iParam0, char* sParam1, int iParam2)//Position - 0xE454
{
	vector3 vVar0;
	
	func_146();
	func_451(2);
	vVar0 = { func_357() };
	if ((!unk_0xF1734B55490E9045(&vVar0) && func_206()) && !unk_0x3362CDE8460ED38B(&vVar0, "NULL"))
	{
	}
	else
	{
		unk_0xEB233A3B7635D2AC();
		unk_0x7456702622C62EA0(1);
		StringCopy(&vVar0, iParam0->f_8F, 24);
		if (!unk_0x1D403DFADBC2DE3C(iParam0->f_3, 0))
		{
			if (!func_218(iParam0))
			{
				if (unk_0x96044E39418AAF17(iParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
				{
					unk_0x08FA5F7132D73F6F(iParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -1056964608);
				}
				else if (unk_0x96044E39418AAF17(iParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
				{
					unk_0x08FA5F7132D73F6F(iParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -1056964608);
				}
				else if (unk_0x96044E39418AAF17(iParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
				{
					unk_0x08FA5F7132D73F6F(iParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -1056964608);
				}
			}
		}
		iParam0->f_6D = 1;
		iParam0->f_79 = sParam1;
		iParam0->f_19F = iParam2;
		func_310(iParam0, 3, 0, 0);
		if (iParam2 == 8 || iParam2 == 18)
		{
			if (iParam0->f_19B != 9)
			{
				if (iParam0->f_73)
				{
					StringConCat(&vVar0, "_aband2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_aband1", 24);
				}
				func_355(iParam0, &vVar0);
			}
			else if (!unk_0x36CEFBE9B745A58D(iParam0->f_3))
			{
				func_269(iParam0->f_3, "TAXI_FAIL", iParam0->f_91, 4);
			}
			StringCopy(&(iParam0->f_82), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 10)
		{
			if (iParam0->f_73)
			{
				StringConCat(&vVar0, "_aggro2", 24);
			}
			else
			{
				StringConCat(&vVar0, "_aggro", 24);
			}
			func_355(iParam0, &vVar0);
			StringCopy(&(iParam0->f_82), "TAXI_OBJ_F_SPK", 24);
		}
		else if (iParam0->f_19F == 15)
		{
			StringCopy(&(iParam0->f_82), "TAXI_OBJ_F_DEAD", 24);
		}
		else if (iParam2 == 2)
		{
			StringConCat(&vVar0, "_lost1", 24);
			func_355(iParam0, &vVar0);
			StringCopy(&(iParam0->f_82), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 3)
		{
			StringConCat(&vVar0, "_spotd1", 24);
			func_355(iParam0, &vVar0);
			StringCopy(&(iParam0->f_82), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 4)
		{
			StringConCat(&vVar0, "_wntd1", 24);
			func_355(iParam0, &vVar0);
			StringCopy(&(iParam0->f_82), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 5)
		{
			StringConCat(&vVar0, "_spook", 24);
			func_355(iParam0, &vVar0);
			StringCopy(&(iParam0->f_82), "TAXI_OBJ_F_SPK", 24);
			if (func_218(iParam0))
			{
				if (unk_0xB66CFDE6B830965A(iParam0->f_4))
				{
					func_352(iParam0, 4096, 0);
				}
				else
				{
					func_352(iParam0, 0, 0);
				}
			}
		}
		else if (iParam2 == 6)
		{
			StringConCat(&vVar0, "_hit2", 24);
			func_355(iParam0, &vVar0);
			StringCopy(&(iParam0->f_82), "TAXI_OBJ_F_SPK", 24);
		}
		else if (iParam2 == 7)
		{
			StringConCat(&vVar0, "_jak", 24);
			func_355(iParam0, &vVar0);
			StringCopy(&(iParam0->f_82), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 14)
		{
			if (iParam0->f_19B != 9)
			{
				if (iParam0->f_73)
				{
					StringConCat(&vVar0, "_shot2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_shot1", 24);
				}
				func_355(iParam0, &vVar0);
			}
			else if (!unk_0x36CEFBE9B745A58D(iParam0->f_3))
			{
				func_269(iParam0->f_3, "CALL_COPS_COMMIT", iParam0->f_91, 4);
			}
			unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), 1, 0);
			StringCopy(&(iParam0->f_82), "TAXI_OBJ_F_SHT", 24);
		}
		else if (iParam2 == 12)
		{
			StringConCat(&vVar0, "_shot1", 24);
			func_355(iParam0, &vVar0);
			unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), 1, 0);
			StringCopy(&(iParam0->f_82), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 13)
		{
			StringConCat(&vVar0, "_shot1", 24);
			func_355(iParam0, &vVar0);
			unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), 1, 0);
			StringCopy(&(iParam0->f_82), "TAXI_OBJ_F_CK", 24);
		}
		else if (iParam2 == 11)
		{
			func_52(8, 0);
			iLocal_57[3] = 1;
			if (iParam0->f_19B != 9)
			{
				if (iParam0->f_73)
				{
					StringConCat(&vVar0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_noDri1", 24);
				}
				func_355(iParam0, &vVar0);
			}
			else if (!unk_0x36CEFBE9B745A58D(iParam0->f_3))
			{
				func_269(iParam0->f_3, "GENERIC_INSULT_MED", iParam0->f_91, 4);
			}
			func_352(iParam0, 0, 0);
			func_355(iParam0, &vVar0);
			StringCopy(&(iParam0->f_82), "TAXI_OBJ_F_WAT", 24);
		}
		else if (iParam2 == 0)
		{
			func_52(8, 0);
			iLocal_57[3] = 1;
			if (iParam0->f_19B != 9)
			{
				if (iParam0->f_73)
				{
					StringConCat(&vVar0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_noDri1", 24);
				}
				func_355(iParam0, &vVar0);
			}
			else if (!unk_0x36CEFBE9B745A58D(iParam0->f_3))
			{
				func_269(iParam0->f_3, "TAXI_FAIL", iParam0->f_91, 4);
			}
			func_355(iParam0, &vVar0);
			StringCopy(&(iParam0->f_82), "TAXI_OBJ_F_DR", 24);
		}
		else if (iParam2 == 1)
		{
			func_52(8, 0);
			iLocal_57[3] = 1;
			if (iParam0->f_19B != 9)
			{
				if (iParam0->f_73)
				{
					StringConCat(&vVar0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_noDri1", 24);
				}
				func_355(iParam0, &vVar0);
			}
			else if (!unk_0x36CEFBE9B745A58D(iParam0->f_3))
			{
				func_269(iParam0->f_3, "TAXI_FAIL", iParam0->f_91, 4);
			}
			StringCopy(&(iParam0->f_82), "TAXI_OBJ_F_FIRE", 24);
		}
		else if (iParam2 == 19)
		{
			StringCopy(&vVar0, "OJTX_QUIT_", 24);
			func_351(&vVar0);
			func_341(&(iParam0->f_F4), "OJTXAUD", &vVar0, 7, 0, 0, 0);
			StringCopy(&(iParam0->f_82), "TAXI_OBJ_CNCL", 24);
		}
		else if (iParam2 == 20)
		{
			if (iParam0->f_73)
			{
				StringConCat(&vVar0, "_aband2", 24);
			}
			else
			{
				StringConCat(&vVar0, "_fail1", 24);
			}
			func_355(iParam0, &vVar0);
			StringCopy(&(iParam0->f_82), "TAXI_OBJ_FAIL", 24);
		}
		else
		{
			if (iParam0->f_19B != 9)
			{
				if (iParam2 != 21)
				{
					StringConCat(&vVar0, "_Fail1", 24);
				}
				else
				{
					StringConCat(&vVar0, "_aband1", 24);
				}
				if (iParam0->f_19A > 5)
				{
					func_355(iParam0, &vVar0);
				}
			}
			else if (!unk_0x36CEFBE9B745A58D(iParam0->f_3))
			{
				func_269(iParam0->f_3, "TAXI_FAIL", iParam0->f_91, 4);
			}
			StringCopy(&(iParam0->f_82), "TAXI_OBJ_FAIL", 24);
			func_52(3, 0);
		}
		func_310(iParam0, 3, 0f, 1);
	}
}

void func_351(char* sParam0)//Position - 0xEA05
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

void func_352(var uParam0, int iParam1, bool bParam2)//Position - 0xEA58
{
	int iVar0;
	
	if (!unk_0x1D403DFADBC2DE3C(uParam0->f_3, 0))
	{
		unk_0x2E35C4FA5F0ED22F(uParam0->f_3, false);
		unk_0x5502708AECB47F5D(uParam0->f_3);
		unk_0xABA7AE40608505F2(uParam0->f_3, 3, false);
		unk_0x91629AC1E1F78419(uParam0->f_3, 17, true);
		unk_0xA4E856A8CD53B8DF(uParam0->f_3);
		if ((func_50(uParam0->f_3, uParam0->f_1D, 1) <= 200f && !func_354(uParam0->f_1D)) && !bParam2)
		{
			func_353(uParam0);
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

void func_353(var uParam0)//Position - 0xEB4C
{
	int iVar0;
	
	if (!unk_0x1D403DFADBC2DE3C(uParam0->f_3, 0))
	{
		if (func_38(func_39(), uParam0->f_1D, 0))
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

int func_354(vector3 vParam0)//Position - 0xED33
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_355(var uParam0, char* sParam1)//Position - 0xED5D
{
	if (func_356(uParam0))
	{
		func_341(&(uParam0->f_F4), uParam0->f_90, sParam1, 9, 0, 0, 0);
	}
}

int func_356(var uParam0)//Position - 0xED85
{
	if (!unk_0x1D403DFADBC2DE3C(uParam0->f_3, 0))
	{
		if (func_48(unk_0xBC25C936A095B5BA(), uParam0->f_3, 1) < 40f && !unk_0x41A5D6415E2CC10E(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_357()//Position - 0xEDC3
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

int func_358(var uParam0)//Position - 0xEE09
{
	return uParam0->f_76;
}

void func_359()//Position - 0xEE15
{
	func_389(&Local_238);
	if (func_388(&Local_238, &Local_352))
	{
		switch (Local_352.f_1B)
		{
			case 0:
				if (Local_238.f_19A == 17)
				{
					if (!func_387(&Local_238))
					{
						if (func_386("TAXI_OBJ_FTC1") || unk_0x2DA8CA50A72528FB(Local_238.f_9))
						{
							Local_352.f_1B++;
						}
						else if (func_193(&Local_238) != 10)
						{
							func_249(&Local_238, 10, 1, 0, 1);
						}
					}
				}
				break;
			
			case 1:
				if ((func_193(&Local_238) > 10 && func_193(&Local_238) != 15) && !func_387(&Local_238))
				{
					func_249(&Local_238, 15, 1, 0, 0);
					func_199(&Local_238, 7);
				}
				break;
			}
	}
	func_360(&Local_238, &uLocal_355, &Local_352, bLocal_351);
}

int func_360(var uParam0, var uParam1, var uParam2, bool bParam3)//Position - 0xEEF2
{
	func_368(uParam0, uParam1);
	if (((*uParam2 == -1 && uParam0->f_19A < 29) && !uParam0->f_6D) && !func_184(uParam0, 2))
	{
		if (func_367(uParam1))
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
				if (!func_366(uParam0))
				{
					uParam2->f_7 = { func_365(uParam1) };
					func_341(&(uParam0->f_F4), uParam0->f_90, &(uParam2->f_7), 8, 0, 0, 0);
					*uParam2 = 2;
					if (bParam3)
					{
					}
				}
				break;
			
			case 2:
				if (func_206())
				{
					uParam2->f_D = { func_252() };
					if (unk_0x3362CDE8460ED38B(&(uParam2->f_D), &(uParam2->f_7)))
					{
						if (bParam3)
						{
						}
					}
				}
				else
				{
					func_65(&(uParam2->f_1A), SYSTEM::ROUND(SYSTEM::POW(2f, SYSTEM::TO_FLOAT(uParam2->f_1B))));
					uParam2->f_1B++;
					func_363(uParam1);
					func_310(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 3:
				if (func_222(uParam0))
				{
					if (func_206())
					{
						func_310(uParam0, 17, 0f, 1);
						uParam2->f_1 = { func_362() };
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
				else if (func_206())
				{
					uParam2->f_13 = { func_357() };
				}
				else
				{
					func_65(&(uParam2->f_1A), SYSTEM::ROUND(SYSTEM::POW(2f, SYSTEM::TO_FLOAT(uParam2->f_1B))));
					uParam2->f_1B++;
					func_363(uParam1);
					func_310(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 4:
				if (((!func_184(uParam0, 14) && !func_206()) && !func_222(uParam0)) && func_111(uParam0, 18) > 1f)
				{
					func_310(uParam0, 18, 0, 0);
					*uParam2 = 6;
					if (bParam3)
					{
					}
				}
				break;
			
			case 6:
				if (!func_206())
				{
					if (func_111(uParam0, 18) > 1f)
					{
						if (!unk_0xF1734B55490E9045(&(uParam2->f_1)))
						{
							func_361(&(uParam0->f_F4), uParam0->f_90, &(uParam2->f_D), &(uParam2->f_1), 8, 0, 0);
							if (bParam3)
							{
							}
						}
						*uParam2 = 3;
					}
				}
				break;
			
			case 7:
				if (!func_206())
				{
					func_65(&(uParam2->f_1A), SYSTEM::ROUND(SYSTEM::POW(2f, SYSTEM::TO_FLOAT(uParam2->f_1B))));
					uParam2->f_1B++;
					func_363(uParam1);
					func_310(uParam0, 18, 0, 0);
					*uParam2 = -1;
				}
				break;
			}
	}
	return 0;
}

int func_361(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0xF192
{
	func_349(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_342(sParam2, iParam4, 0);
}

struct<6> func_362()//Position - 0xF1E6
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

void func_363(var uParam0)//Position - 0xF292
{
	int iVar0;
	
	iVar0 = func_364(uParam0);
	if (iVar0 > -1)
	{
		func_19(&((uParam0[iVar0 /*8*/])->f_7), 2);
		func_19(&((uParam0[iVar0 /*8*/])->f_7), 4);
		func_64(&((uParam0[iVar0 /*8*/])->f_7), 8);
		StringCopy(uParam0[iVar0 /*8*/], func_143(), 24);
	}
}

int func_364(var uParam0)//Position - 0xF2DC
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_21((uParam0[iVar0 /*8*/])->f_7, 4))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

struct<6> func_365(var uParam0)//Position - 0xF30C
{
	int iVar0;
	struct<6> Var1;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_21((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			Var1 = { *(uParam0[iVar0 /*8*/]) };
			func_64(&((uParam0[iVar0 /*8*/])->f_7), 4);
		}
		iVar0++;
	}
	return Var1;
}

int func_366(var uParam0)//Position - 0xF353
{
	switch (uParam0->f_19B)
	{
		case 0:
			if (func_224("TX_OBJ_NEX_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_224("TX_OBJ_TIE_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_224("TX_OBJ_DL_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 3:
			if ((func_224("TX_OBJ_GYB_DO", 0, 0) || func_224("TAXI_OBJ_GYB", 0, 0)) || func_224("TAXI_OBJ_GYB_2", 0, 0))
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_224("TX_OBJ_TTB_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 5:
			if ((func_224("TX_OBJ_CYI_DO", 0, 0) || func_224("TAXI_OBJ_CYI_01", 0, 0)) || func_224("TAXI_OBJ_CYI_02", 0, 0))
			{
				return 1;
			}
			break;
		
		case 6:
			if (((func_224("TX_OBJ_GYN_DO", 0, 0) || func_224("TAXI_OBJ_GYN", 0, 0)) || func_224("TAXI_OBJ_GYN_TG", 0, 0)) || func_224("TAXI_OBJ_GYN_GF", 0, 0))
			{
				return 1;
			}
			break;
		
		case 7:
			if ((func_224("TAXI_OBJ_CC1", 0, 0) || func_224("TAXI_OBJ_CC2", 0, 0)) || func_224("TAXI_OBJ_CC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 8:
			if ((func_224("TAXI_OBJ_FTC1", 0, 0) || func_224("TAXI_OBJ_FTC2", 0, 0)) || func_224("TAXI_OBJ_FTC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 9:
			if (func_224("TX_OBJ_PRO_DO", 0, 0))
			{
				return 1;
			}
			break;
	}
	return (((((func_224("TAXI_OBJ_GETRUN", 0, 0) || func_224("TAXI_OBJ_DRIVE", 0, 0)) || func_224("TAXI_OBJ_RETURN", 0, 0)) || func_224("TAXI_OBJ_POL", 0, 0)) || func_224("TAXI_OBJ_RUNOUT", 0, 0)) || func_224("TAXI_OBJ_POL", 0, 0));
}

int func_367(var uParam0)//Position - 0xF573
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_21((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_368(var uParam0, var uParam1)//Position - 0xF5A2
{
	vector3 vVar0;
	char cVar1[48];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5[8];
	bool bVar6;
	
	if (func_366(uParam0))
	{
	}
	else if (!uParam0->f_6E)
	{
	}
	else if (func_184(uParam0, 14))
	{
		StringCopy(&vVar0, uParam0->f_8F, 24);
		switch (func_193(uParam0))
		{
			case 55:
				StringConCat(&vVar0, "_lvMe1", 24);
				cVar1 = { vVar0 };
				func_385(&(uParam0->f_5D), 3, &cVar1, 0, 1, 0);
				func_384(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 8, 0, 0);
				func_310(uParam0, 16, 0, 0);
				func_383(4, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
				func_274(uParam0, 0, 0);
				break;
			
			case 2:
				if (!func_206())
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
						func_382(uParam0, &vVar0, 0, 0, 8);
					}
				}
				else
				{
					func_379(uParam0, vVar0, func_381(uParam0, 2));
				}
				if (func_21(uParam0->f_62, 4))
				{
					func_310(uParam0, 16, 0, 0);
					func_274(uParam0, 0, 0);
				}
				func_233(uParam0, &(uParam0->f_62), 4, 3);
				break;
			
			case 3:
				if (func_111(uParam0, 16) > 1f)
				{
					func_234(1);
					if (uParam0->f_19B == 9)
					{
						func_273("TAXI_OBJ_RETURN", 7500, 1);
					}
					else
					{
						func_273("TAXI_VIP_RETURN", 7500, 1);
					}
					func_310(uParam0, 16, 0, 0);
					func_274(uParam0, 0, 0);
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
					func_382(uParam0, &vVar0, 0, 1, 8);
				}
				else if (!unk_0x36CEFBE9B745A58D(uParam0->f_3))
				{
					func_269(uParam0->f_3, "TAXI_WHAT_THE_HELL", uParam0->f_91, 4);
				}
				break;
		}
	}
	else if ((func_111(uParam0, 16) > func_126(uParam0->f_19B == 0, 1f, 4f) && !uParam0->f_8E) && (((uParam0->f_19B == 0 || uParam0->f_19B == 1) && !func_206()) || (uParam0->f_19B != 0 && uParam0->f_19B != 1)))
	{
		StringCopy(&vVar0, uParam0->f_8F, 24);
		switch (func_193(uParam0))
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
				func_382(uParam0, &vVar0, 1, 0, 8);
				break;
			
			case 56:
				StringConCat(&vVar0, "_lvMe2", 24);
				cVar1 = { vVar0 };
				func_385(&(uParam0->f_5D), 3, &cVar1, 0, 1, 0);
				func_384(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 8, 0, 0);
				func_310(uParam0, 16, 0, 0);
				func_383(4, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
				func_274(uParam0, 0, 0);
				break;
			
			case 0:
				if (uParam0->f_19B == 9)
				{
					func_341(&(uParam0->f_F4), "OJTXAUD", "OJTX_PRO_CON", 8, 0, 0, 0);
				}
				func_249(uParam0, 1, 1, 0, 0);
				break;
			
			case 1:
				func_310(uParam0, 16, 0, 0);
				func_249(uParam0, 4, 0, 0, 0);
				break;
			
			case 4:
				StringConCat(&vVar0, "_hail1", 24);
				cVar1 = { vVar0 };
				if (!func_21(uParam0->f_2C, 128))
				{
					if ((uParam0->f_19B == 0 || uParam0->f_19B == 1) || uParam0->f_19B == 4)
					{
						func_385(&(uParam0->f_63), 4, &cVar1, 0, 1, 0);
						func_384(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 8, 0, 0);
					}
					else
					{
						func_382(uParam0, &vVar0, 0, 0, 8);
					}
				}
				func_310(uParam0, 16, 4f, 0);
				uParam0->f_8D = 1;
				func_310(uParam0, 16, 0, 0);
				func_274(uParam0, 0, 0);
				break;
			
			case 5:
				if (uParam0->f_19B == 7)
				{
					func_273("TAXI_OBJ_GPCKUP", 7500, 1);
				}
				else
				{
					func_273("TAXI_OBJ_PICKUP", 7500, 1);
				}
				uParam0->f_8D = 1;
				func_310(uParam0, 16, 0, 0);
				func_274(uParam0, 0, 0);
				break;
			
			case 8:
				StringConCat(&vVar0, "_obj1", 24);
				func_382(uParam0, &vVar0, 0, 0, 8);
				if (uParam0->f_19B != 7 && uParam0->f_19B != 4)
				{
					if (!unk_0x2DA8CA50A72528FB(uParam0->f_9))
					{
						uParam0->f_9 = func_125(uParam0->f_11, 1);
					}
					else if (unk_0xB1D6718ACE798CBB(uParam0->f_9) == 0)
					{
						unk_0x7781946F1FC054FA(uParam0->f_9, 255);
						unk_0x1423825E528B4DE1(uParam0->f_9, uParam0->f_11);
						unk_0x0BBAABB52887CF8C(uParam0->f_9, true);
					}
				}
				func_249(uParam0, 10, 1, 0, 0);
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
				func_251(&vVar0);
				if (uParam0->f_19B != 9)
				{
					func_382(uParam0, &vVar0, 0, 0, 8);
				}
				else
				{
					func_269(uParam0->f_3, "TAXI_START", uParam0->f_91, 4);
				}
				if (uParam0->f_19B != 7 && uParam0->f_19B != 4)
				{
					if (!unk_0x2DA8CA50A72528FB(uParam0->f_9))
					{
						uParam0->f_9 = func_125(uParam0->f_11, 1);
					}
					else if (unk_0xB1D6718ACE798CBB(uParam0->f_9) == 0)
					{
						unk_0x7781946F1FC054FA(uParam0->f_9, 255);
						unk_0x1423825E528B4DE1(uParam0->f_9, uParam0->f_11);
						unk_0x0BBAABB52887CF8C(uParam0->f_9, true);
					}
				}
				func_249(uParam0, 10, 1, 0, 0);
				uParam0->f_1A1 = 10;
				break;
			
			case 7:
				StringConCat(&vVar0, "_dest2", 24);
				func_378(uParam0, 33554432, vVar0, "", 1, 8);
				func_310(uParam0, 16, 0, 0);
				func_249(uParam0, 10, 1, 0, 0);
				uParam0->f_1A1 = 10;
				break;
			
			case 10:
				if (!func_206())
				{
					func_377(uParam0, 0);
					func_64(&(uParam0->f_2C), 4);
					func_310(uParam0, 16, 0, 0);
					func_249(uParam0, 13, 0, 0, 0);
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
				func_251(&vVar0);
				func_375(vVar0, uParam1);
				func_310(uParam0, 16, 0, 0);
				func_310(uParam0, 11, 0, 0);
				func_274(uParam0, 0, 0);
				break;
			
			case 15:
				if (func_111(uParam0, 11) > uParam0->f_24)
				{
					if (uParam0->f_19B == 0)
					{
						StringConCat(&vVar0, "_ban1", 24);
					}
					else
					{
						StringConCat(&vVar0, "_bant1", 24);
						func_251(&vVar0);
					}
					func_375(vVar0, uParam1);
					func_64(&(uParam0->f_51), 67108864);
					func_310(uParam0, 16, 0, 0);
					func_310(uParam0, 11, 0, 0);
					func_274(uParam0, 0, 0);
				}
				break;
			
			case 16:
				if (func_111(uParam0, 11) > uParam0->f_24)
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
							func_251(&vVar0);
						}
					}
					func_375(vVar0, uParam1);
					func_310(uParam0, 11, 0, 0);
					func_310(uParam0, 16, 0, 0);
					func_274(uParam0, 0, 0);
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
					func_251(&vVar0);
				}
				func_375(vVar0, uParam1);
				func_310(uParam0, 16, 0, 0);
				func_274(uParam0, 0, 0);
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
				func_251(&vVar0);
				func_375(vVar0, uParam1);
				func_310(uParam0, 16, 0, 0);
				func_274(uParam0, 0, 0);
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
				func_251(&vVar0);
				func_375(vVar0, uParam1);
				func_310(uParam0, 16, 0, 0);
				func_274(uParam0, 0, 0);
				break;
			
			case 20:
				StringConCat(&vVar0, "_dest2b", 24);
				func_251(&vVar0);
				func_375(vVar0, uParam1);
				func_310(uParam0, 16, 0, 0);
				func_310(uParam0, 11, 0, 0);
				func_274(uParam0, 0, 0);
				func_64(&(uParam0->f_52), 262144);
				uParam0->f_24 = 20f;
				break;
			
			case 23:
				StringConCat(&vVar0, "_seePt1", 24);
				func_382(uParam0, &vVar0, 0, 0, 8);
				func_249(uParam0, 24, 1, 0, 0);
				break;
			
			case 24:
				uParam0->f_1A1 = 24;
				func_310(uParam0, 16, 0, 0);
				func_274(uParam0, 0, 0);
				break;
			
			case 90:
				StringConCat(&vVar0, "_talk", 24);
				StringIntConCat(&vVar0, 1, 24);
				func_251(&vVar0);
				func_382(uParam0, &vVar0, 1, 0, 8);
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
				func_382(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 91:
				StringConCat(&vVar0, "_ig1c", 24);
				func_382(uParam0, &vVar0, 0, 0, 8);
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
					func_374(&(uParam0->f_5A), 8, &vVar0, &iVar5, 1, 0);
				}
				else
				{
					func_374(&(uParam0->f_5A), 3, &vVar0, &iVar5, 1, 0);
				}
				func_375(vVar0, uParam1);
				func_383(0, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
				func_310(uParam0, 16, 0, 0);
				func_310(uParam0, 6, 0f, 1);
				func_274(uParam0, 0, 0);
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
					func_374(&(uParam0->f_59), 8, &vVar0, &iVar5, 1, 0);
				}
				else
				{
					func_374(&(uParam0->f_59), 3, &vVar0, &iVar5, 1, 0);
				}
				func_375(vVar0, uParam1);
				func_383(0, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 1);
				func_310(uParam0, 16, 0, 0);
				func_310(uParam0, 6, 0f, 1);
				func_274(uParam0, 0, 0);
				break;
			
			case 12:
				func_273("TAXI_OBJ_GYB", 3500, 1);
				func_310(uParam0, 16, 0, 0);
				func_274(uParam0, 0, 0);
				break;
			
			case 11:
				if (uParam0->f_19A == 12 || uParam0->f_19A == 18)
				{
					func_273("TAXI_OBJ_GYN_TG", 7500, 1);
				}
				else if (uParam0->f_19A < 21)
				{
					func_273("TAXI_OBJ_GYN", 7500, 1);
				}
				else
				{
					func_273("TAXI_OBJ_GYN_GF", 7500, 1);
				}
				uParam0->f_1A1 = 11;
				uParam0->f_8D = 1;
				func_310(uParam0, 16, 0, 0);
				func_274(uParam0, 0, 0);
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
				func_382(uParam0, &vVar0, 0, 0, 8);
				func_249(uParam0, 29, 1, 0, 0);
				break;
			
			case 29:
				if (!func_21(uParam0->f_62, 268435456))
				{
					func_273("TAXI_OBJ_CYI_01", 7500, 1);
					func_64(&(uParam0->f_62), 268435456);
				}
				uParam0->f_1A1 = 29;
				func_310(uParam0, 16, 0, 0);
				func_274(uParam0, 0, 0);
				break;
			
			case 30:
				StringConCat(&vVar0, "_rCar1", 24);
				func_251(&vVar0);
				func_375(vVar0, uParam1);
				uParam0->f_7C = { vVar0 };
				func_310(uParam0, 16, 0, 0);
				func_274(uParam0, 0, 0);
				break;
			
			case 31:
				StringConCat(&vVar0, "_rCar2", 24);
				func_251(&vVar0);
				func_375(vVar0, uParam1);
				uParam0->f_7C = { vVar0 };
				func_310(uParam0, 16, 0, 0);
				func_274(uParam0, 0, 0);
				break;
			
			case 32:
				StringConCat(&vVar0, "_rCar3", 24);
				func_251(&vVar0);
				func_375(vVar0, uParam1);
				uParam0->f_7C = { vVar0 };
				func_310(uParam0, 16, 0, 0);
				func_274(uParam0, 0, 0);
				break;
			
			case 33:
				func_273("TAXI_OBJ_CYI_02", 7500, 1);
				uParam0->f_1A1 = 33;
				func_310(uParam0, 16, 0, 0);
				func_274(uParam0, 0, 0);
				break;
			
			case 34:
				if (!func_21(uParam0->f_52, 8192))
				{
					if (func_111(uParam0, 11) > uParam0->f_24)
					{
						StringConCat(&vVar0, "_airBr1", 24);
						func_251(&vVar0);
						if (uParam0->f_19B == 5)
						{
							func_375(vVar0, uParam1);
						}
						else
						{
							func_382(uParam0, &vVar0, 0, 0, 8);
						}
						func_64(&(uParam0->f_52), 8192);
						func_310(uParam0, 16, 0, 0);
						func_310(uParam0, 11, 0, 0);
						func_274(uParam0, 0, 0);
					}
				}
				break;
			
			case 35:
				if (!func_21(uParam0->f_52, 16384))
				{
					StringConCat(&vVar0, "_seeD1", 24);
					func_251(&vVar0);
					func_382(uParam0, &vVar0, 0, 0, 8);
					func_64(&(uParam0->f_52), 16384);
				}
				break;
			
			case 36:
				if (!func_21(uParam0->f_52, 32768))
				{
					StringConCat(&vVar0, "_seeD2", 24);
					func_251(&vVar0);
					func_382(uParam0, &vVar0, 0, 0, 8);
					func_64(&(uParam0->f_52), 32768);
				}
				break;
			
			case 37:
				StringConCat(&vVar0, "_done1", 24);
				func_382(uParam0, &vVar0, 0, 0, 8);
				func_249(uParam0, 46, 1, 0, 0);
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
				func_251(&vVar0);
				func_382(uParam0, &vVar0, 0, 0, 8);
				func_249(uParam0, 139, 1, 0, 0);
				uParam0->f_1A1 = 139;
				func_274(uParam0, 0, 0);
				break;
			
			case 139:
				func_273("TAXI_OBJ_FTC2", 7500, 1);
				uParam0->f_1A1 = 13;
				func_249(uParam0, 13, 0, 0, 0);
				break;
			
			case 38:
				StringConCat(&vVar0, "_dOff1", 24);
				cVar1 = { vVar0 };
				iVar4 = unk_0x491B2241281A03B7(0, 120);
				if (!func_21(uParam0->f_52, 268435456))
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
					func_64(&(uParam0->f_52), 268435456);
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
				func_384(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 8, 0, 0);
				func_310(uParam0, 16, 0, 0);
				func_274(uParam0, 0, 0);
				break;
			
			case 39:
				StringConCat(&vVar0, "_bdOff1", 24);
				cVar1 = { vVar0 };
				iVar4 = unk_0x491B2241281A03B7(0, 100);
				if (!func_21(uParam0->f_52, 268435456))
				{
					if (iVar4 < 50)
					{
						StringConCat(&cVar1, "_1", 24);
					}
					else
					{
						StringConCat(&cVar1, "_2", 24);
					}
					func_64(&(uParam0->f_52), 268435456);
				}
				else if (iVar4 < 50)
				{
					StringConCat(&cVar1, "_3", 24);
				}
				else
				{
					StringConCat(&cVar1, "_4", 24);
				}
				func_384(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 8, 0, 0);
				func_310(uParam0, 16, 0, 0);
				func_274(uParam0, 0, 0);
				break;
			
			case 41:
				StringConCat(&vVar0, "_dr2P", 24);
				func_382(uParam0, &vVar0, 0, 0, 8);
				func_310(uParam0, 16, 0, 0);
				func_274(uParam0, 0, 0);
				break;
			
			case 42:
				StringConCat(&vVar0, "_dr2N", 24);
				func_382(uParam0, &vVar0, 0, 0, 8);
				func_310(uParam0, 16, 0, 0);
				func_274(uParam0, 0, 0);
				break;
			
			case 40:
				StringConCat(&vVar0, "_dOff2", 24);
				func_382(uParam0, &vVar0, 0, 0, 8);
				func_249(uParam0, 44, 1, 0, 0);
				break;
			
			case 44:
				func_273("TAXI_OBJ_CC2", 7500, 1);
				uParam0->f_1A1 = 44;
				func_274(uParam0, 0, 0);
				func_249(uParam0, 97, 1, 0, 0);
				break;
			
			case 43:
				StringConCat(&vVar0, "_dOff3", 24);
				func_382(uParam0, &vVar0, 0, 0, 8);
				func_249(uParam0, 45, 1, 0, 0);
				break;
			
			case 45:
				if (!func_206())
				{
					func_273("TAXI_OBJ_CC3", 7500, 1);
					uParam0->f_1A1 = 45;
					func_274(uParam0, 0, 0);
					func_249(uParam0, 98, 1, 0, 0);
				}
				break;
			
			case 46:
				func_273("TAXI_OBJ_FTC3", 7500, 1);
				uParam0->f_1A1 = 46;
				func_274(uParam0, 0, 0);
				break;
			
			case 21:
				if (!func_21(uParam0->f_51, 1))
				{
					func_373(uParam0, 1, vVar0, "_sick1", 8);
					func_19(&(uParam0->f_51), 2);
				}
				else if (!func_21(uParam0->f_51, 2))
				{
					func_373(uParam0, 2, vVar0, "_sick2", 8);
					func_19(&(uParam0->f_51), 1);
				}
				func_383(12, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
				func_274(uParam0, 0, 0);
				break;
			
			case 22:
				if (!func_21(uParam0->f_52, 2097152))
				{
					StringConCat(&vVar0, "_nopke1", 24);
				}
				else if (!func_21(uParam0->f_52, 4194304))
				{
					StringConCat(&vVar0, "_nopke2", 24);
				}
				func_64(&(uParam0->f_51), 2097152);
				func_382(uParam0, &vVar0, 0, 0, 8);
				func_310(uParam0, 16, 0, 0);
				func_383(17, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 1);
				func_274(uParam0, 0, 0);
				break;
			
			case 61:
				StringConCat(&vVar0, "_Puke1", 24);
				func_382(uParam0, &vVar0, 0, 0, 8);
				func_383(18, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
				break;
			
			case 63:
				StringConCat(&vVar0, "_PkStp2", 24);
				func_382(uParam0, &vVar0, 0, 0, 8);
				func_383(20, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
				func_310(uParam0, 16, 0, 0);
				func_274(uParam0, 0, 0);
				break;
			
			case 62:
				StringConCat(&vVar0, "_PkStp1", 24);
				func_382(uParam0, &vVar0, 0, 0, 8);
				func_383(19, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
				break;
			
			case 64:
				StringConCat(&vVar0, "_PukeR1", 24);
				func_251(&vVar0);
				func_382(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 71:
				if (!func_21(uParam0->f_51, 4))
				{
					func_373(uParam0, 4, vVar0, "_turns1", 8);
				}
				else if (!func_21(uParam0->f_51, 8))
				{
					func_373(uParam0, 8, vVar0, "_turns2", 8);
				}
				else
				{
					func_373(uParam0, 8, vVar0, "_turns3", 8);
					func_19(&(uParam0->f_51), 4);
					func_19(&(uParam0->f_51), 8);
				}
				func_383(13, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
				func_274(uParam0, 0, 0);
				break;
			
			case 72:
				if (func_372(uParam0))
				{
					func_379(uParam0, vVar0, func_381(uParam0, 72));
				}
				else if (uParam0->f_19B == 9)
				{
					if (!unk_0x36CEFBE9B745A58D(uParam0->f_3))
					{
						func_269(uParam0->f_3, "CRASH_GENERIC", uParam0->f_91, 4);
					}
				}
				else if (uParam0->f_19B == 1)
				{
					StringConCat(&vVar0, "_carHt", 24);
					cVar1 = { vVar0 };
					func_385(&(uParam0->f_5F), 5, &cVar1, 1, 0, 1);
					func_341(&(uParam0->f_F4), uParam0->f_90, &cVar1, 8, 0, 0, 0);
				}
				else
				{
					StringConCat(&vVar0, "_carHt1", 24);
					cVar1 = { vVar0 };
					if (uParam0->f_19B == 0)
					{
						func_385(&(uParam0->f_5F), 8, &cVar1, 1, 1, 0);
					}
					else
					{
						func_385(&(uParam0->f_5F), 5, &cVar1, 1, 1, 0);
					}
					func_384(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 8, 0, 0);
				}
				func_383(2, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), cVar1, 0);
				func_310(uParam0, 16, 0, 0);
				func_274(uParam0, 0, 0);
				break;
			
			case 73:
				StringConCat(&vVar0, "_genPnHi", 24);
				func_382(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 75:
				if (!func_21(uParam0->f_53, 128))
				{
					StringConCat(&vVar0, "_nMiss1", 24);
					func_341(&(uParam0->f_F4), uParam0->f_90, &vVar0, 8, 0, 0, 0);
					func_64(&(uParam0->f_53), 128);
					func_19(&(uParam0->f_53), 256);
					func_310(uParam0, 16, 0, 0);
				}
				else if (!func_21(uParam0->f_53, 256))
				{
					StringConCat(&vVar0, "_nMiss2", 24);
					func_341(&(uParam0->f_F4), uParam0->f_90, &vVar0, 8, 0, 0, 0);
					func_64(&(uParam0->f_53), 256);
					func_19(&(uParam0->f_53), 512);
					func_310(uParam0, 16, 0, 0);
				}
				else if (!func_21(uParam0->f_53, 512))
				{
					StringConCat(&vVar0, "_nMiss3", 24);
					func_341(&(uParam0->f_F4), uParam0->f_90, &vVar0, 8, 0, 0, 0);
					func_64(&(uParam0->f_53), 512);
					func_19(&(uParam0->f_53), 128);
					func_310(uParam0, 16, 0, 0);
				}
				func_274(uParam0, 0, 0);
				break;
			
			case 76:
				if (uParam0->f_19B == 1 || uParam0->f_19B == 0)
				{
					bVar6 = true;
				}
				if (!func_21(uParam0->f_53, 1))
				{
					StringConCat(&vVar0, "_air1", 24);
					if (bVar6)
					{
						func_251(&vVar0);
					}
					func_341(&(uParam0->f_F4), uParam0->f_90, &vVar0, 8, 0, 0, 0);
					func_64(&(uParam0->f_53), 1);
					func_19(&(uParam0->f_53), 2);
					func_310(uParam0, 16, 0, 0);
				}
				else if (!func_21(uParam0->f_53, 2))
				{
					StringConCat(&vVar0, "_air2", 24);
					if (bVar6)
					{
						func_251(&vVar0);
					}
					func_341(&(uParam0->f_F4), uParam0->f_90, &vVar0, 8, 0, 0, 0);
					func_64(&(uParam0->f_53), 2);
					if (uParam0->f_19B == 0)
					{
						func_19(&(uParam0->f_53), 4);
					}
					else
					{
						func_19(&(uParam0->f_53), 1);
					}
					func_310(uParam0, 16, 0, 0);
				}
				else if (!func_21(uParam0->f_53, 4))
				{
					StringConCat(&vVar0, "_air3", 24);
					if (bVar6)
					{
						func_251(&vVar0);
					}
					func_341(&(uParam0->f_F4), uParam0->f_90, &vVar0, 8, 0, 0, 0);
					func_64(&(uParam0->f_53), 4);
					func_19(&(uParam0->f_53), 1);
					func_310(uParam0, 16, 0, 0);
				}
				func_383(11, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
				func_274(uParam0, 0, 0);
				break;
			
			case 79:
				if (uParam0->f_19B == 1 || uParam0->f_19B == 0)
				{
					bVar6 = true;
				}
				if (!func_21(uParam0->f_51, 4096))
				{
					func_378(uParam0, 4096, vVar0, "_sideW1", bVar6, 8);
				}
				else if (!func_21(uParam0->f_51, 8192))
				{
					func_378(uParam0, 8192, vVar0, "_sideW2", bVar6, 8);
				}
				func_383(15, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
				func_274(uParam0, 0, 0);
				break;
			
			case 80:
				if (uParam0->f_19B == 1 || uParam0->f_19B == 0)
				{
					bVar6 = true;
				}
				if (!func_21(uParam0->f_51, 16384))
				{
					func_378(uParam0, 16384, vVar0, "_opLne1", bVar6, 8);
				}
				else if (!func_21(uParam0->f_51, 32768))
				{
					func_378(uParam0, 32768, vVar0, "_opLne2", bVar6, 8);
				}
				func_383(14, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
				func_274(uParam0, 0, 0);
				break;
			
			case 83:
				if (uParam0->f_19B == 0)
				{
					if (!func_21(uParam0->f_52, 8))
					{
						func_371(uParam0, 8, vVar0, "_bored1", 8, 0);
					}
					else if (!func_21(uParam0->f_52, 16))
					{
						func_371(uParam0, 16, vVar0, "_bored2", 8, 0);
					}
					else if (!func_21(uParam0->f_52, 32))
					{
						func_371(uParam0, 32, vVar0, "_bored3", 8, 0);
					}
					func_383(9, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
					func_274(uParam0, 0, 0);
				}
				if (uParam0->f_19B == 1)
				{
					StringConCat(&vVar0, "_good1", 24);
					cVar1 = { vVar0 };
					func_385(&(uParam0->f_5D), 6, &cVar1, 0, 1, 0);
					func_384(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 8, 0, 0);
					func_383(9, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
					func_310(uParam0, 16, 0, 0);
					func_274(uParam0, 0, 0);
				}
				break;
			
			case 92:
				StringConCat(&vVar0, "_EtoB1", 24);
				cVar1 = { vVar0 };
				func_385(&(uParam0->f_60), 2, &cVar1, 0, 1, 0);
				func_384(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 8, 0, 0);
				func_383(9, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
				func_310(uParam0, 16, 0, 0);
				func_274(uParam0, 0, 0);
				break;
			
			case 93:
				StringConCat(&vVar0, "_BtoE1", 24);
				cVar1 = { vVar0 };
				func_385(&(uParam0->f_61), 2, &cVar1, 0, 1, 0);
				func_384(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 8, 0, 0);
				func_383(12, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
				func_310(uParam0, 16, 0, 0);
				func_274(uParam0, 0, 0);
				break;
			
			case 81:
				if (!func_21(uParam0->f_51, 65536))
				{
					func_378(uParam0, 65536, vVar0, "_runLit1", 1, 8);
				}
				else if (!func_21(uParam0->f_51, 131072))
				{
					func_378(uParam0, 131072, vVar0, "_runLit2", 1, 8);
				}
				func_274(uParam0, 0, 0);
				break;
			
			case 82:
				if (func_372(uParam0))
				{
					func_379(uParam0, vVar0, func_381(uParam0, 82));
				}
				else if (uParam0->f_19B == 9)
				{
					if (!unk_0x36CEFBE9B745A58D(uParam0->f_3))
					{
						func_269(uParam0->f_3, "CAR_HIT_PED_DRIVEN", uParam0->f_91, 4);
					}
				}
				else if (!func_21(uParam0->f_53, 8))
				{
					StringConCat(&vVar0, "_hitR1", 24);
					func_251(&vVar0);
					func_341(&(uParam0->f_F4), uParam0->f_90, &vVar0, 8, 0, 0, 0);
					func_64(&(uParam0->f_53), 8);
					func_19(&(uParam0->f_53), 16);
					func_310(uParam0, 16, 0, 0);
				}
				else if (!func_21(uParam0->f_53, 16))
				{
					StringConCat(&vVar0, "_hitR2", 24);
					func_251(&vVar0);
					func_341(&(uParam0->f_F4), uParam0->f_90, &vVar0, 8, 0, 0, 0);
					func_64(&(uParam0->f_53), 16);
					func_19(&(uParam0->f_53), 32);
					func_310(uParam0, 16, 0, 0);
				}
				else if (!func_21(uParam0->f_53, 32))
				{
					StringConCat(&vVar0, "_hitR3", 24);
					func_251(&vVar0);
					func_341(&(uParam0->f_F4), uParam0->f_90, &vVar0, 8, 0, 0, 0);
					func_64(&(uParam0->f_53), 32);
					if (uParam0->f_19B == 0)
					{
						func_19(&(uParam0->f_53), 64);
					}
					else
					{
						func_19(&(uParam0->f_53), 8);
					}
					func_310(uParam0, 16, 0, 0);
				}
				else if (!func_21(uParam0->f_53, 64))
				{
					StringConCat(&vVar0, "_hitR4", 24);
					func_251(&vVar0);
					func_341(&(uParam0->f_F4), uParam0->f_90, &vVar0, 8, 0, 0, 0);
					func_64(&(uParam0->f_53), 64);
					func_19(&(uParam0->f_53), 8);
					func_310(uParam0, 16, 0, 0);
				}
				func_383(1, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
				func_274(uParam0, 0, 0);
				break;
			
			case 65:
				if (!func_206())
				{
					if (uParam0->f_73)
					{
						StringConCat(&vVar0, "_aggro2", 24);
					}
					else
					{
						StringConCat(&vVar0, "_aggro", 24);
					}
					func_382(uParam0, &vVar0, 0, 1, 8);
				}
				else
				{
					func_379(uParam0, vVar0, func_381(uParam0, 65));
					func_274(uParam0, 0, 0);
				}
				uParam0->f_6B++;
				break;
			
			case 66:
				if (!func_206())
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
					func_382(uParam0, &vVar0, 0, 1, 8);
				}
				else
				{
					func_379(uParam0, vVar0, func_381(uParam0, 66));
					func_274(uParam0, 0, 0);
				}
				uParam0->f_6B++;
				break;
			
			case 13:
				if (uParam0->f_19B == 8)
				{
					if (!uParam0->f_6D && !func_206())
					{
						switch (uParam0->f_19E)
						{
							case 3:
								StringConCat(&vVar0, "_warnC1", 24);
								func_382(uParam0, &vVar0, 0, 0, 8);
								break;
							
							case 6:
								StringConCat(&vVar0, "_warnF1", 24);
								func_382(uParam0, &vVar0, 0, 0, 8);
								break;
							
							case 1:
								StringConCat(&vVar0, "_far1", 24);
								func_382(uParam0, &vVar0, 0, 0, 8);
								func_383(21, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
								break;
							
							case 2:
								StringConCat(&vVar0, "_close1", 24);
								func_382(uParam0, &vVar0, 0, 0, 8);
								func_383(22, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
								break;
							
							case 10:
								StringConCat(&vVar0, "_hit1", 24);
								func_382(uParam0, &vVar0, 0, 0, 8);
								break;
							
							case 8:
								StringConCat(&vVar0, "_good1", 24);
								cVar1 = { vVar0 };
								func_385(&(uParam0->f_5D), 6, &cVar1, 1, 1, 0);
								func_384(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 8, 0, 0);
								func_383(23, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), cVar1, 0);
								func_310(uParam0, 16, 0, 0);
								func_274(uParam0, 0, 0);
								break;
							
							case 9:
								if (!iLocal_58)
								{
									StringConCat(&vVar0, "_sBant1", 24);
									cVar1 = { vVar0 };
									func_382(uParam0, &vVar0, 0, 0, 8);
									func_310(uParam0, 16, 0, 0);
									func_310(uParam0, 11, 0, 0);
									func_274(uParam0, 0, 0);
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
									func_251(&vVar0);
									func_382(uParam0, &vVar0, 0, 0, 8);
									func_310(uParam0, 16, 0, 0);
									func_310(uParam0, 11, 0, 0);
									func_274(uParam0, 0, 0);
									iLocal_58 = 0;
								}
								break;
							
							case 7:
								StringConCat(&vVar0, "_done1", 24);
								func_382(uParam0, &vVar0, 0, 0, 8);
								break;
						}
						func_249(uParam0, 143, 0, 0, 0);
					}
				}
				break;
			
			case 78:
				StringConCat(&vVar0, "_speed1", 24);
				cVar1 = { vVar0 };
				func_385(&(uParam0->f_57), 6, &cVar1, 1, 1, 0);
				func_384(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 8, 0, 0);
				func_383(10, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
				func_310(uParam0, 16, 0, 0);
				func_274(uParam0, 0, 0);
				break;
			
			case 25:
				if (!func_21(uParam0->f_52, 1))
				{
					func_371(uParam0, 1, vVar0, "_close1", 8, 0);
				}
				else if (!func_21(uParam0->f_52, 2))
				{
					func_371(uParam0, 2, vVar0, "_close2", 8, 0);
				}
				else if (!func_21(uParam0->f_52, 4))
				{
					func_371(uParam0, 4, vVar0, "_close3", 8, 0);
				}
				func_274(uParam0, 0, 0);
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
				func_385(&(uParam0->f_56), 4, &cVar1, 0, 1, 0);
				if (uParam0->f_19B != 9)
				{
					func_384(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 8, 0, 0);
				}
				else if (!unk_0x36CEFBE9B745A58D(uParam0->f_3))
				{
					func_269(uParam0->f_3, "TAXI_STOPPED", uParam0->f_91, 4);
				}
				func_310(uParam0, 16, 0, 0);
				func_383(5, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
				func_274(uParam0, 0, 0);
				break;
			
			case 74:
				if (func_372(uParam0))
				{
					func_379(uParam0, vVar0, func_381(uParam0, 74));
				}
				else if (uParam0->f_19B == 9)
				{
					if (!unk_0x36CEFBE9B745A58D(uParam0->f_3))
					{
						func_269(uParam0->f_3, "VEHICLE_FLIPPED", uParam0->f_91, 4);
					}
				}
				else
				{
					StringConCat(&vVar0, "_roll1", 24);
					func_370(uParam0, vVar0, 8);
				}
				func_383(3, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
				func_310(uParam0, 16, 0, 0);
				func_274(uParam0, 0, 0);
				break;
			
			case 70:
				if (!func_21(uParam0->f_53, 1024))
				{
					func_64(&(uParam0->f_53), 1024);
					func_310(uParam0, 16, 0, 0);
					StringConCat(&vVar0, "_swrv1", 24);
					func_251(&vVar0);
					func_341(&(uParam0->f_F4), uParam0->f_90, &vVar0, 8, 0, 0, 0);
				}
				else if (!func_21(uParam0->f_53, 2048))
				{
					func_64(&(uParam0->f_53), 2048);
					func_310(uParam0, 16, 0, 0);
					StringConCat(&vVar0, "_swrv2", 24);
					func_251(&vVar0);
					func_341(&(uParam0->f_F4), uParam0->f_90, &vVar0, 8, 0, 0, 0);
				}
				else if (!func_21(uParam0->f_53, 4096))
				{
					func_64(&(uParam0->f_53), 4096);
					func_310(uParam0, 16, 0, 0);
					StringConCat(&vVar0, "_swrv3", 24);
					func_251(&vVar0);
					func_341(&(uParam0->f_F4), uParam0->f_90, &vVar0, 8, 0, 0, 0);
				}
				func_274(uParam0, 0, 0);
				break;
			
			case 69:
				if (!func_21(uParam0->f_52, 1024))
				{
					func_371(uParam0, 1024, vVar0, "_rvrs1", 8, 1);
					func_19(&(uParam0->f_52), 2048);
				}
				else if (!func_21(uParam0->f_52, 2048))
				{
					func_371(uParam0, 2048, vVar0, "_rvrs2", 8, 1);
				}
				func_274(uParam0, 0, 0);
				break;
			
			case 67:
				StringConCat(&vVar0, "_ofrd1", 24);
				cVar1 = { vVar0 };
				func_385(&(uParam0->f_58), 4, &cVar1, 0, 1, 0);
				func_384(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 8, 0, 0);
				func_383(16, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), cVar1, 0);
				func_310(uParam0, 16, 0, 0);
				func_274(uParam0, 0, 0);
				break;
			
			case 68:
				StringConCat(&vVar0, "_ofrdch1", 24);
				func_341(&(uParam0->f_F4), uParam0->f_90, &vVar0, 9, 0, 0, 0);
				func_310(uParam0, 16, 0, 0);
				func_274(uParam0, 0, 0);
				break;
			
			case 49:
				StringConCat(&vVar0, "_losPol1", 24);
				func_382(uParam0, &vVar0, 0, 0, 8);
				func_249(uParam0, 52, 1, 0, 0);
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
					func_382(uParam0, &vVar0, 0, 0, 8);
				}
				else if (!unk_0x36CEFBE9B745A58D(uParam0->f_3))
				{
					func_269(uParam0->f_3, "POLICE_PURSUIT_DRIVEN", uParam0->f_91, 4);
				}
				func_310(uParam0, 16, 0, 0);
				func_274(uParam0, 0, 0);
				break;
			
			case 51:
				if (func_372(uParam0))
				{
					if (uParam0->f_19B == 2)
					{
						StringConCat(&vVar0, "_copBa1", 24);
						cVar1 = { vVar0 };
						cVar1 = { vVar0 };
						func_382(uParam0, &vVar0, 0, 0, 8);
						func_249(uParam0, 52, 1, 0, 0);
						func_310(uParam0, 16, 0, 0);
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
						func_382(uParam0, &vVar0, 0, 0, 8);
						func_310(uParam0, 16, 0, 0);
					}
				}
				else
				{
					StringConCat(&vVar0, "_copBa1", 24);
					cVar1 = { vVar0 };
					func_385(&(uParam0->f_55), 6, &cVar1, 1, 1, 0);
					func_384(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 8, 0, 0);
					func_310(uParam0, 16, 0, 0);
					func_274(uParam0, 0, 0);
				}
				break;
			
			case 53:
				StringConCat(&vVar0, "_evdeP1", 24);
				func_383(8, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
				func_382(uParam0, &vVar0, 0, 0, 8);
				func_310(uParam0, 10, 0f, 1);
				break;
			
			case 52:
				if (unk_0x904E94842BB9E173(unk_0xFC1CAE18F3ECBF2D()) >= 1)
				{
					func_273("TAXI_OBJ_POL", 7500, 1);
					uParam0->f_1A1 = 52;
				}
				func_274(uParam0, 0, 0);
				break;
			
			case 54:
				StringConCat(&vVar0, "_cpFz1", 24);
				func_251(&vVar0);
				func_382(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 84:
				if (!func_21(uParam0->f_51, 262144))
				{
					func_378(uParam0, 262144, vVar0, "_rdCh1", 1, 8);
				}
				else if (!func_21(uParam0->f_51, 1048576))
				{
					if (uParam0->f_19B == 0 || uParam0->f_19B == 1)
					{
						func_378(uParam0, 1048576, vVar0, "_rdCh2", 1, 8);
					}
					else
					{
						func_378(uParam0, 1048576, vVar0, "_rdCh2", 0, 8);
					}
				}
				func_383(7, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
				func_274(uParam0, 0, 0);
				break;
			
			case 85:
				if (!func_21(uParam0->f_52, 67108864))
				{
					if (uParam0->f_1A2.f_6)
					{
						func_369(uParam0, 67108864, vVar0, "_rdLk1", 1, 7);
					}
				}
				else if (!func_21(uParam0->f_52, 134217728))
				{
					func_369(uParam0, 134217728, vVar0, "_rdFv1", 0, 7);
				}
				func_383(6, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0);
				func_274(uParam0, 0, 0);
				break;
			
			case 86:
				StringConCat(&vVar0, "_rdneu1", 24);
				func_382(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 87:
				StringConCat(&vVar0, "_rdtip1", 24);
				cVar1 = { vVar0 };
				StringConCat(&cVar1, "_", 24);
				StringIntConCat(&cVar1, uParam0->f_1A2.f_3, 24);
				func_384(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 8, 0, 0);
				func_310(uParam0, 16, 0, 0);
				func_274(uParam0, 0, 0);
				break;
			
			case 100:
				func_273("TAXI_OBJ_GYB_2", 7500, 1);
				uParam0->f_1A1 = 100;
				func_274(uParam0, 0, 0);
				break;
			
			case 47:
				if (uParam0->f_19B == 1)
				{
					StringConCat(&vVar0, "_horn", 24);
					func_382(uParam0, &vVar0, 0, 0, 8);
				}
				break;
			
			case 101:
				StringConCat(&vVar0, "_thank1", 24);
				if ((uParam0->f_19B == 1 || uParam0->f_19B == 5) || uParam0->f_19B == 0)
				{
					func_251(&vVar0);
				}
				func_64(&(uParam0->f_51), 2097152);
				if (uParam0->f_19B != 9)
				{
					func_382(uParam0, &vVar0, 0, 0, 8);
				}
				break;
			
			case 102:
				StringConCat(&vVar0, "_thank2", 24);
				if ((uParam0->f_19B == 1 || uParam0->f_19B == 5) || uParam0->f_19B == 0)
				{
					func_251(&vVar0);
				}
				func_64(&(uParam0->f_51), 2097152);
				if (uParam0->f_19B != 9)
				{
					func_382(uParam0, &vVar0, 0, 0, 8);
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
					func_251(&vVar0);
				}
				func_64(&(uParam0->f_51), 2097152);
				if (uParam0->f_19B != 9)
				{
					func_382(uParam0, &vVar0, 0, 0, 8);
				}
				break;
			
			case 97:
				if (!func_21(uParam0->f_52, 65536))
				{
					if (func_111(uParam0, 11) > uParam0->f_24)
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
						func_251(&vVar0);
						func_375(vVar0, uParam1);
						func_64(&(uParam0->f_52), 65536);
						func_310(uParam0, 16, 0, 0);
						func_310(uParam0, 11, 0, 0);
						func_274(uParam0, 0, 0);
					}
				}
				break;
			
			case 98:
				if (!func_21(uParam0->f_52, 131072))
				{
					if (func_111(uParam0, 11) > uParam0->f_24)
					{
						StringConCat(&vVar0, "_ccbb1", 24);
						func_251(&vVar0);
						func_375(vVar0, uParam1);
						func_64(&(uParam0->f_52), 131072);
						func_310(uParam0, 16, 0, 0);
						func_310(uParam0, 11, 0, 0);
						func_274(uParam0, 0, 0);
					}
				}
				break;
			
			case 99:
				if (!func_21(uParam0->f_52, 8388608))
				{
					StringConCat(&vVar0, "_close1", 24);
					func_64(&(uParam0->f_52), 8388608);
				}
				else if (!func_21(uParam0->f_52, 16777216))
				{
					StringConCat(&vVar0, "_close2", 24);
					func_64(&(uParam0->f_52), 16777216);
				}
				else if (!func_21(uParam0->f_52, 33554432))
				{
					StringConCat(&vVar0, "_close3", 24);
					func_64(&(uParam0->f_52), 33554432);
				}
				func_375(vVar0, uParam1);
				func_310(uParam0, 16, 0, 0);
				func_274(uParam0, 0, 0);
				break;
			
			case 58:
				if (uParam0->f_19B == 6)
				{
					StringConCat(&vVar0, "_kill1", 24);
					cVar1 = { vVar0 };
					func_385(&(uParam0->f_5D), 6, &cVar1, 1, 1, 1);
					func_251(&vVar0);
					func_384(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 8, 0, 0);
				}
				else if (uParam0->f_19B == 8)
				{
					StringConCat(&vVar0, "_cheat1", 24);
					func_382(uParam0, &vVar0, 0, 0, 8);
				}
				else
				{
					StringConCat(&vVar0, "_kill1", 24);
					func_382(uParam0, &vVar0, 0, 0, 8);
				}
				func_310(uParam0, 16, 0, 0);
				func_274(uParam0, 0, 0);
				break;
			
			case 95:
				StringConCat(&vVar0, "_wndw2", 24);
				func_375(vVar0, uParam1);
				func_310(uParam0, 16, 0, 0);
				func_310(uParam0, 11, 0, 0);
				func_274(uParam0, 0, 0);
				break;
			
			case 94:
				StringConCat(&vVar0, "_wndw0", 24);
				func_375(vVar0, uParam1);
				func_310(uParam0, 16, 0, 0);
				func_310(uParam0, 11, 0, 0);
				func_274(uParam0, 0, 0);
				break;
			
			case 96:
				StringConCat(&vVar0, "_wndw1", 24);
				func_375(vVar0, uParam1);
				func_310(uParam0, 16, 0, 0);
				func_310(uParam0, 11, 0, 0);
				func_274(uParam0, 0, 0);
				break;
			
			case 113:
				StringConCat(&vVar0, "_csite1", 24);
				func_251(&vVar0);
				func_382(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 119:
				StringConCat(&vVar0, "_fair1", 24);
				func_251(&vVar0);
				func_382(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 115:
				StringConCat(&vVar0, "_AlCk1", 24);
				cVar1 = { vVar0 };
				func_385(&(uParam0->f_5B), 5, &cVar1, 1, 1, 0);
				func_384(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 8, 0, 0);
				func_310(uParam0, 16, 0, 0);
				func_274(uParam0, 0, 0);
				break;
			
			case 116:
				StringConCat(&vVar0, "_eggG1", 24);
				cVar1 = { vVar0 };
				func_385(&(uParam0->f_5C), 5, &cVar1, 1, 1, 0);
				func_384(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 8, 0, 0);
				func_310(uParam0, 16, 0, 0);
				func_274(uParam0, 0, 0);
				break;
			
			case 114:
				StringConCat(&vVar0, "_goons1", 24);
				func_382(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 59:
				StringConCat(&vVar0, "_oRun1", 24);
				func_382(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 117:
				StringConCat(&vVar0, "_gotG1", 24);
				func_382(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 118:
				StringConCat(&vVar0, "_getA1", 24);
				func_382(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 120:
				StringConCat(&vVar0, "_gnawy1", 24);
				func_382(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 121:
				StringConCat(&vVar0, "_grl1", 24);
				func_251(&vVar0);
				func_382(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 122:
				StringConCat(&vVar0, "_figt1", 24);
				func_382(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 123:
				StringConCat(&vVar0, "_gEgg1", 24);
				func_382(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 124:
				StringConCat(&vVar0, "_gEgg3", 24);
				func_382(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 125:
				StringConCat(&vVar0, "_gEgg2", 24);
				func_382(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 126:
				StringConCat(&vVar0, "_gLeav1", 24);
				func_382(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 127:
				StringConCat(&vVar0, "_aKill1", 24);
				func_382(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 129:
				StringConCat(&vVar0, "_gHelp1", 24);
				func_251(&vVar0);
				func_382(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 130:
				StringConCat(&vVar0, "_gDest1", 24);
				func_382(uParam0, &vVar0, 0, 0, 8);
				func_249(uParam0, 11, 1, 0, 0);
				break;
			
			case 128:
				StringConCat(&vVar0, "_gKO1", 24);
				func_382(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 132:
				StringConCat(&vVar0, "_gThank1", 24);
				func_64(&(uParam0->f_51), 2097152);
				func_382(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 131:
				StringConCat(&vVar0, "_gDriv1", 24);
				func_251(&vVar0);
				func_375(vVar0, uParam1);
				func_64(&(uParam0->f_51), 67108864);
				func_310(uParam0, 16, 0, 0);
				func_310(uParam0, 11, 0, 0);
				func_274(uParam0, 0, 0);
				break;
			
			case 60:
				StringConCat(&vVar0, "_cash1", 24);
				func_382(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 105:
				if (!func_21(uParam0->f_51, 33554432) && uParam0->f_19B != 9)
				{
					func_378(uParam0, 33554432, vVar0, "_noPay1", 1, 8);
				}
				else if (uParam0->f_19B == 9)
				{
					if (!unk_0x36CEFBE9B745A58D(uParam0->f_3))
					{
						func_269(uParam0->f_3, "TAXI_NO_PAY", uParam0->f_91, 4);
					}
				}
				func_249(uParam0, 108, 1, 0, 0);
				break;
			
			case 106:
				StringConCat(&vVar0, "_foot", 24);
				func_341(&(uParam0->f_F4), uParam0->f_90, &vVar0, 9, 0, 0, 0);
				func_310(uParam0, 16, 0, 0);
				func_274(uParam0, 0, 0);
				break;
			
			case 107:
				if (!func_21(uParam0->f_51, 268435456))
				{
					func_378(uParam0, 268435456, vVar0, "_kPay1", 1, 8);
				}
				func_249(uParam0, 52, 1, 0, 0);
				break;
			
			case 108:
				func_273("TAXI_OBJ_RUNOUT", 7500, 1);
				uParam0->f_1A1 = 108;
				func_274(uParam0, 0, 0);
				break;
			
			case 109:
				if (!func_21(uParam0->f_51, 4194304))
				{
					if (uParam0->f_19B == 2 || uParam0->f_19B == 6)
					{
						func_378(uParam0, 4194304, vVar0, "_mPay1", 0, 8);
					}
					else if (uParam0->f_19B == 9)
					{
						if (!unk_0x36CEFBE9B745A58D(uParam0->f_3))
						{
							func_269(uParam0->f_3, "APOLOGY_NO_TROUBLE", uParam0->f_91, 4);
						}
					}
					else
					{
						func_378(uParam0, 4194304, vVar0, "_mPay1", 1, 8);
					}
				}
				func_249(uParam0, 111, 1, 0, 0);
				break;
			
			case 111:
				func_273("TAXI_OBJ_GETRUN", 7500, 1);
				uParam0->f_1A1 = 111;
				func_274(uParam0, 0, 0);
				break;
			
			case 110:
				StringConCat(&vVar0, "_runoff", 24);
				func_341(&(uParam0->f_F4), uParam0->f_90, &vVar0, 9, 0, 0, 0);
				func_310(uParam0, 16, 0, 0);
				func_274(uParam0, 0, 0);
				break;
			
			case 141:
				if (!func_21(uParam0->f_51, 16777216))
				{
					func_378(uParam0, 16777216, vVar0, "_ret1", 1, 8);
				}
				func_274(uParam0, 0, 0);
				break;
			
			case 88:
				func_273("TAXI_TIEFLEE", 7500, 1);
				func_274(uParam0, 0, 0);
				break;
			
			case 57:
				if (!func_21(uParam0->f_62, 536870912))
				{
					func_273("TAXI_OBJ_CYI_1B", 7500, 1);
					func_64(&(uParam0->f_62), 536870912);
				}
				uParam0->f_1A1 = 57;
				func_274(uParam0, 0, 0);
				break;
			
			case 104:
				StringConCat(&vVar0, "_joke1", 24);
				func_251(&vVar0);
				func_382(uParam0, &vVar0, 0, 0, 8);
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
				func_382(uParam0, &vVar0, 0, 0, 8);
				func_274(uParam0, 0, 0);
				break;
			
			case 140:
				StringConCat(&vVar0, "_shout", 24);
				func_382(uParam0, &vVar0, 0, 0, 8);
				func_274(uParam0, 0, 0);
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
				func_382(uParam0, &vVar0, 0, 0, 8);
				func_274(uParam0, 0, 0);
				break;
			
			case 133:
				StringConCat(&vVar0, "_getCar", 24);
				func_382(uParam0, &vVar0, 1, 0, 8);
				func_249(uParam0, 134, 1, 0, 0);
				break;
			
			case 134:
				func_273("TX_VIP", 7500, 0);
				uParam0->f_1A1 = 134;
				func_249(uParam0, 0, 0, 0, 0);
				func_274(uParam0, 0, 0);
				break;
			}
	}
}

void func_369(var uParam0, int iParam1, vector3 vParam2, var uParam3, var uParam4, var uParam5, char* sParam6, bool bParam7, int iParam8)//Position - 0x12861
{
	func_64(&(uParam0->f_52), iParam1);
	func_310(uParam0, 16, 0, 0);
	StringConCat(&vParam2, sParam6, 24);
	if (bParam7)
	{
		func_251(&vParam2);
	}
	func_341(&(uParam0->f_F4), uParam0->f_90, &vParam2, iParam8, 0, 0, 0);
}

void func_370(var uParam0, struct<6> Param1, int iParam2)//Position - 0x128A2
{
	vector3 vVar0[24];
	
	cVar0 = { Param1 };
	if (!func_21(uParam0->f_52, 64))
	{
		func_64(&(uParam0->f_52), 64);
		StringConCat(&cVar0, "_1", 24);
	}
	else if (!func_21(uParam0->f_52, 128))
	{
		func_64(&(uParam0->f_52), 128);
		StringConCat(&cVar0, "_2", 24);
	}
	else
	{
		StringConCat(&cVar0, "_", 24);
		StringIntConCat(&cVar0, unk_0x491B2241281A03B7(1, 3), 24);
	}
	func_384(&(uParam0->f_F4), uParam0->f_90, &Param1, &cVar0, iParam2, 0, 0);
	func_310(uParam0, 16, 0, 0);
}

void func_371(var uParam0, int iParam1, vector3 vParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char* sParam6, int iParam7, bool bParam8)//Position - 0x12929
{
	func_64(&(uParam0->f_52), iParam1);
	func_310(uParam0, 16, 0, 0);
	StringConCat(&vParam2, sParam6, 24);
	if ((((uParam0->f_19B == 1 || uParam0->f_19B == 0) || uParam0->f_19B == 5) || uParam0->f_19B == 8) || uParam0->f_19B == 2)
	{
		if (bParam8)
		{
			func_251(&vParam2);
		}
	}
	func_341(&(uParam0->f_F4), uParam0->f_90, &vParam2, iParam7, 0, 0, 0);
}

int func_372(var uParam0)//Position - 0x129A9
{
	if ((((((uParam0->f_19B == 2 || uParam0->f_19B == 3) || uParam0->f_19B == 4) || uParam0->f_19B == 5) || uParam0->f_19B == 6) || uParam0->f_19B == 7) || uParam0->f_19B == 8)
	{
		return 1;
	}
	return 0;
}

void func_373(var uParam0, int iParam1, vector3 vParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char* sParam6, int iParam7)//Position - 0x12A0F
{
	func_64(&(uParam0->f_51), iParam1);
	func_310(uParam0, 16, 0, 0);
	StringConCat(&vParam2, sParam6, 24);
	func_341(&(uParam0->f_F4), uParam0->f_90, &vParam2, iParam7, 0, 0, 0);
}

void func_374(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0x12A45
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = SYSTEM::TO_FLOAT(iVar2);
		iVar1 = SYSTEM::ROUND(SYSTEM::POW(2f, fVar0));
		if (!func_290(*uParam0, iVar1))
		{
			func_65(uParam0, iVar1);
			if (bParam5)
			{
				StringConCat(sParam2, "_", 24);
			}
			StringIntConCat(sParam2, iVar2 + 1, 24);
			if ((*iParam3)[iVar2])
			{
				func_251(sParam2);
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

void func_375(char[24] cParam0, var uParam1)//Position - 0x12AC6
{
	int iVar0;
	
	iVar0 = func_376(uParam1);
	if (iVar0 > -1)
	{
		*(uParam1[iVar0 /*8*/]) = { cParam0 };
		func_64(&((uParam1[iVar0 /*8*/])->f_7), 2);
	}
}

int func_376(var uParam0)//Position - 0x12AF5
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

void func_377(var uParam0, bool bParam1)//Position - 0x12B22
{
	switch (uParam0->f_19B)
	{
		case 0:
			if (bParam1)
			{
				func_273("TX_OBJ_NEX_PU", 7500, 1);
			}
			else
			{
				func_273("TX_OBJ_NEX_DO", 7500, 1);
			}
			break;
		
		case 1:
			if (bParam1)
			{
				func_273("TX_OBJ_TIE_PU", 7500, 1);
			}
			else
			{
				func_273("TX_OBJ_TIE_DO", 7500, 1);
			}
			break;
		
		case 2:
			if (bParam1)
			{
				func_273("TX_OBJ_DL_PU", 7500, 1);
			}
			else
			{
				func_273("TX_OBJ_DL_DO", 7500, 1);
			}
			break;
		
		case 3:
			if (bParam1)
			{
				func_273("TX_OBJ_GYB_PU", 7500, 1);
			}
			else
			{
				func_273("TX_OBJ_GYB_DO", 7500, 1);
			}
			break;
		
		case 4:
			if (bParam1)
			{
				func_273("TX_OBJ_TTB_PU", 7500, 1);
			}
			else
			{
				func_273("TX_OBJ_TTB_DO", 7500, 1);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				func_273("TX_OBJ_CYI_PU", 7500, 1);
			}
			else
			{
				func_273("TX_OBJ_CYI_DO", 7500, 1);
			}
			break;
		
		case 6:
			if (bParam1)
			{
				func_273("TX_OBJ_GYN_PU", 7500, 1);
			}
			else
			{
				func_273("TX_OBJ_GYN_DO", 7500, 1);
			}
			break;
		
		case 7:
			if (bParam1)
			{
				func_273("TX_OBJ_CC_PU", 7500, 1);
			}
			else
			{
				func_273("TAXI_OBJ_CC1", 7500, 1);
			}
			break;
		
		case 8:
			if (bParam1)
			{
				func_273("TX_OBJ_FC_PU", 7500, 1);
			}
			else
			{
				func_273("TAXI_OBJ_FTC1", 7500, 1);
			}
			break;
		
		case 9:
			if (bParam1)
			{
				func_273("TX_OBJ_PRO_PU", 7500, 1);
			}
			else
			{
				func_273("TX_OBJ_PRO_DO", 7500, 1);
			}
			break;
	}
	if (!bParam1)
	{
		uParam0->f_8B = 1;
	}
}

void func_378(var uParam0, int iParam1, vector3 vParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char* sParam6, bool bParam7, int iParam8)//Position - 0x12CD9
{
	func_64(&(uParam0->f_51), iParam1);
	func_310(uParam0, 16, 0, 0);
	StringConCat(&vParam2, sParam6, 24);
	if (bParam7)
	{
		func_251(&vParam2);
	}
	func_341(&(uParam0->f_F4), uParam0->f_90, &vParam2, iParam8, 0, 0, 0);
}

void func_379(var uParam0, char[12] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char* sParam5)//Position - 0x12D1A
{
	func_310(uParam0, 16, 0, 0);
	func_310(uParam0, 17, 0f, 1);
	StringConCat(&cParam1, sParam5, 24);
	if (!unk_0x36CEFBE9B745A58D(uParam0->f_3))
	{
		unk_0xD508385315EA1DAC(uParam0->f_3, &cParam1, func_380(uParam0));
	}
}

char* func_380(var uParam0)//Position - 0x12D58
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

char* func_381(var uParam0, int iParam1)//Position - 0x12DF3
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

int func_382(var uParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x1319C
{
	func_310(uParam0, 16, 0, 0);
	if (bParam3)
	{
		func_310(uParam0, 17, 0f, 1);
	}
	func_274(uParam0, iParam2, 0);
	return func_341(&(uParam0->f_F4), uParam0->f_90, sParam1, iParam4, 0, 0, 0);
}

void func_383(int iParam0, var uParam1, var uParam2, var uParam3, char[24] cParam4, bool bParam5)//Position - 0x131D9
{
	if (iParam0 == 0)
	{
		if (func_21(*uParam2, 2))
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
		if (func_21(*uParam2, 1073741824))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 1)
	{
		if (func_21(*uParam2, 4))
		{
			if (!func_21(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_19(uParam2, 4096);
			}
		}
		else if (func_21(*uParam2, 8))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 5)
	{
		if (func_21(*uParam2, 512))
		{
			if (!func_21(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_19(uParam2, 4096);
			}
		}
	}
	else if (iParam0 == 2)
	{
		if (func_21(*uParam2, 16))
		{
			if (!func_21(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_19(uParam2, 4096);
			}
		}
		else if (func_21(*uParam2, 32))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 3)
	{
		if (func_21(*uParam2, 64))
		{
			if (!func_21(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_19(uParam2, 4096);
			}
		}
		else if (func_21(*uParam2, 128))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 4)
	{
		if (func_21(*uParam2, 256))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 6)
	{
		if (func_21(*uParam2, 1024))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 7)
	{
		if (func_21(*uParam2, 2048))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 9)
	{
		if (func_21(*uParam2, 8192))
		{
			if (func_21(*uParam2, 2097152))
			{
				*uParam1 += 3;
				*uParam3 = { cParam4 };
			}
			else if (func_21(*uParam2, 4194304))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 10)
	{
		if (func_21(*uParam2, 16384))
		{
			if (func_21(*uParam2, 4194304))
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
		if (func_21(*uParam2, 32768))
		{
			if (func_21(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_21(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 12)
	{
		if (func_21(*uParam2, 65536))
		{
			if (func_21(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 13)
	{
		if (func_21(*uParam2, 131072))
		{
			if (func_21(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_21(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 14)
	{
		if (func_21(*uParam2, 262144))
		{
			if (func_21(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_21(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 15)
	{
		if (func_21(*uParam2, 524288))
		{
			if (func_21(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_21(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 16)
	{
		if (func_21(*uParam2, 1048576))
		{
			if (func_21(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_21(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 21)
	{
		if (func_21(*uParam2, 8388608))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 22)
	{
		if (func_21(*uParam2, 16777216))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 23)
	{
		if (func_21(*uParam2, 33554432))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 17)
	{
		if (func_21(*uParam2, 67108864))
		{
			if (func_21(*uParam2, 67108864))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 18)
	{
		if (func_21(*uParam2, 134217728))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 20)
	{
		if (func_21(*uParam2, 536870912))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 19)
	{
		if (func_21(*uParam2, 268435456))
		{
			*uParam1++;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 25)
	{
		if (func_21(*uParam2, 32768))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
}

int func_384(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x137E3
{
	func_349(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_342(sParam2, iParam4, 0);
}

void func_385(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x13837
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = SYSTEM::TO_FLOAT(iVar2);
		iVar1 = SYSTEM::ROUND(SYSTEM::POW(2f, fVar0));
		if (!func_290(*uParam0, iVar1))
		{
			func_65(uParam0, iVar1);
			if (bParam5)
			{
				if (!bParam4)
				{
					StringIntConCat(sParam2, iVar2 + 1, 24);
					func_251(sParam2);
				}
				else
				{
					func_251(sParam2);
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

int func_386(char* sParam0)//Position - 0x138CE
{
	if (!unk_0xEAEFBBEC1AEA464B(sParam0))
	{
		if (func_224(sParam0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_387(var uParam0)//Position - 0x138F0
{
	if (func_206())
	{
		return 1;
	}
	if (func_184(uParam0, 17))
	{
		return 1;
	}
	if (func_184(uParam0, 14))
	{
		return 1;
	}
	if (func_222(uParam0))
	{
		return 1;
	}
	return 0;
}

bool func_388(var uParam0, var uParam1)//Position - 0x1392F
{
	return ((*uParam1 == -1 && uParam0->f_19C == 0) && !func_184(uParam0, 9));
}

void func_389(var uParam0)//Position - 0x13956
{
	if (func_184(uParam0, 17))
	{
		if (!func_184(uParam0, 14))
		{
			if (!func_222(uParam0))
			{
				if (!func_206())
				{
					func_203(uParam0, 17, 1);
				}
			}
		}
	}
}

bool func_390(var uParam0)//Position - 0x13990
{
	return uParam0->f_75;
}

void func_391(var uParam0, var uParam1, bool bParam2)//Position - 0x1399C
{
	if (!func_21(uParam0->f_37, 1))
	{
		switch (*uParam1)
		{
			case 0:
				if (!unk_0xF1734B55490E9045(&(uParam0->f_7C)) && func_206())
				{
					*uParam1++;
				}
				break;
			
			case 1:
				if (!func_206())
				{
					StringCopy(&(uParam0->f_7C), func_143(), 24);
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

void func_392(var uParam0)//Position - 0x13A22
{
	int iVar0;
	
	if (uParam0->f_19A >= 5)
	{
		if (unk_0x724D816EA203A79E(uParam0->f_4))
		{
			if (Local_165 > 0 && !func_290(Local_165.f_1[4 /*4*/], 4))
			{
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 <= (Local_165 - 1))
				{
					if (func_290(Local_165.f_1[iVar0 /*4*/], 2))
					{
						Stack.Push(uParam0);
						Call_Loc(Local_165.f_1[iVar0 /*4*/].f_2);
						if (StackVal)
						{
							if (!func_290(Local_165.f_1[iVar0 /*4*/], 4))
							{
								func_65(&(Local_165.f_1[iVar0 /*4*/]), 4);
								Local_165.f_1[iVar0 /*4*/].f_1 = unk_0x105601648511CC64();
							}
						}
						else
						{
							func_20(&(Local_165.f_1[iVar0 /*4*/]), 12);
						}
						if (func_290(Local_165.f_1[iVar0 /*4*/], 4) && !func_290(Local_165.f_1[iVar0 /*4*/], 8))
						{
							Stack.Push(uParam0);
							Stack.Push(Local_165.f_1[iVar0 /*4*/].f_1);
							Call_Loc(Local_165.f_1[iVar0 /*4*/].f_3);
							if (StackVal)
							{
								func_65(&(Local_165.f_1[iVar0 /*4*/]), 8);
							}
						}
					}
					iVar0++;
				}
			}
		}
		else
		{
			func_350(uParam0, "Taxi Garbage Collected", 18);
		}
	}
}

int func_393(var uParam0, var uParam1)//Position - 0x13B35
{
	var uVar0;
	
	if (!func_184(uParam0, 27))
	{
		func_199(uParam0, 27);
		uParam1->f_3 = 250;
		uParam1->f_2 = 40f;
	}
	if (!uParam0->f_6D && func_111(uParam0, 27) > 5f)
	{
		if (func_420(uParam0->f_3, uParam0->f_4, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			func_310(uParam0, 27, 0, 0);
			func_310(uParam0, 10, 0, 0);
			func_418(uParam0, &uVar0, uParam1);
		}
		func_415(uParam0);
	}
	if (uParam0->f_19A >= 3 && uParam0->f_19A <= 5)
	{
		func_394(uParam0);
	}
	if ((((!unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F()) && (unk_0xEF0E25DA0CB6E8FF(*uParam0) && !unk_0xEDEA6C8F42EE05F6(*uParam0))) && (unk_0xEF0E25DA0CB6E8FF(uParam0->f_1) && !unk_0xEDEA6C8F42EE05F6(uParam0->f_1))) && !unk_0x4B8E3E5901E59EB8()) && !func_206())
	{
		if (func_111(uParam0, 26) > 10f)
		{
			func_203(uParam0, 26, 0);
			unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
		}
	}
	else if (func_184(uParam0, 26))
	{
		func_203(uParam0, 26, 0);
	}
	return 0;
}

void func_394(var uParam0)//Position - 0x13C5F
{
	if (!func_414(uParam0->f_1AD))
	{
		uParam0->f_1AD = func_413();
		func_404(&(uParam0->f_1AD), 0, 0, unk_0x491B2241281A03B7(4, 7), 0, 0, 0);
	}
	else if (func_395(uParam0->f_1AD))
	{
		func_350(uParam0, "Player took too long to make pickup", 9);
	}
}

bool func_395(int iParam0)//Position - 0x13CAC
{
	return func_396(func_413(), iParam0);
}

int func_396(int iParam0, int iParam1)//Position - 0x13CBE
{
	int iVar0;
	int iVar1;
	
	if (!func_414(iParam1) || !func_414(iParam0))
	{
		return 1;
	}
	iVar0 = func_402(iParam0);
	iVar1 = func_402(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_401(iParam0);
	iVar1 = func_401(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_400(iParam0);
	iVar1 = func_400(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_399(iParam0);
	iVar1 = func_399(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_398(iParam0);
	iVar1 = func_398(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_397(iParam0);
	iVar1 = func_397(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_397(int iParam0)//Position - 0x13DCA
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_398(int iParam0)//Position - 0x13DDD
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_399(int iParam0)//Position - 0x13DF0
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_400(int iParam0)//Position - 0x13E03
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_401(int iParam0)//Position - 0x13E15
{
	return iParam0 & 15;
}

var func_402(int iParam0)//Position - 0x13E22
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_403(unk_0xFA30DFD0084E92FE(iParam0, 31), -1, 1)) + 2011;
}

int func_403(bool bParam0, int iParam1, int iParam2)//Position - 0x13E47
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_404(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x13E5E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_402(*uParam0);
	iVar1 = func_401(*uParam0);
	iVar2 = func_400(*uParam0);
	iVar3 = func_399(*uParam0);
	iVar4 = func_398(*uParam0);
	iVar5 = func_397(*uParam0);
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
	iVar6 = func_412(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_412(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_405(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_405(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x13FE0
{
	func_411(uParam0, iParam1);
	func_410(uParam0, iParam2);
	func_409(uParam0, iParam3);
	func_408(uParam0, iParam5);
	func_407(uParam0, iParam4);
	func_406(uParam0, iParam6);
}

void func_406(var uParam0, int iParam1)//Position - 0x14019
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

void func_407(var uParam0, int iParam1)//Position - 0x1409F
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_401(*uParam0);
	iVar1 = func_402(*uParam0);
	if (iParam1 < 1 || iParam1 > func_412(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_408(var uParam0, int iParam1)//Position - 0x140F0
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_409(var uParam0, int iParam1)//Position - 0x14123
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_410(var uParam0, int iParam1)//Position - 0x1415D
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_411(var uParam0, int iParam1)//Position - 0x14198
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_412(int iParam0, int iParam1)//Position - 0x141D4
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

int func_413()//Position - 0x14276
{
	var uVar0;
	
	func_411(&uVar0, unk_0xF40D00CD7B81C0A8());
	func_410(&uVar0, unk_0x7E09057438B9D216());
	func_409(&uVar0, unk_0x6E06C0DB9B43570D());
	func_407(&uVar0, unk_0xBE14F159908E4EE5());
	func_408(&uVar0, unk_0xDD6A91E47ED4D0CF());
	func_406(&uVar0, unk_0x4EEB3860BFC44B78());
	return uVar0;
}

int func_414(int iParam0)//Position - 0x142BC
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
	iVar0 = func_397(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_398(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_399(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_402(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_401(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_400(iParam0);
	if (iVar5 < 1 || iVar5 > func_412(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_415(var uParam0)//Position - 0x14398
{
	var uVar0;
	
	if (uParam0->f_19A < 7 && !uParam0->f_8A)
	{
		if (((uParam0->f_19B == 9 && func_417()) && !func_202(uParam0)) || ((uParam0->f_19B != 9 && func_278(uParam0, 1)) && !func_202(uParam0)))
		{
			uVar0 = func_416(uParam0->f_4);
			unk_0x91BCA7FA73FFCDF2(&uVar0);
			uParam0->f_4 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
			unk_0x77815D3407C6700D(uParam0->f_4, true, 0);
			func_237(uParam0);
			func_229(uParam0, 0);
		}
	}
}

var func_416(var uParam0)//Position - 0x1442E
{
	return uParam0;
}

int func_417()//Position - 0x14438
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
					if (unk_0x5E87CB0495C97732(iVar0, func_18()))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_418(var uParam0, var uParam1, var uParam2)//Position - 0x1448F
{
	switch (*uParam1)
	{
		case 1:
			if (func_419(uParam0, 0, 1))
			{
				func_350(uParam0, "Aggro Aiming", 5);
			}
			break;
		
		case 4:
			if (func_419(uParam0, 0, 4))
			{
				func_350(uParam0, "Aggro Shot Near", 8);
			}
			break;
		
		case 8:
			if (func_419(uParam0, 0, 8))
			{
				func_350(uParam0, "Aggro Heard Shot", 8);
			}
			break;
		
		case 16:
			if (func_419(uParam0, 1, 1))
			{
				func_350(uParam0, "Aggro Attacked", 14);
			}
			break;
		
		case 32:
			if (func_419(uParam0, 0, 1))
			{
				func_350(uParam0, "Aggro Minor Attacked", 8);
			}
			break;
		
		case 2:
			if (!func_21(*uParam2, 2) && func_218(uParam0))
			{
				func_350(uParam0, "Aggro Went Wanted", 5);
			}
			break;
	}
}

int func_419(var uParam0, int iParam1, int iParam2)//Position - 0x1456A
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
				func_249(uParam0, 66, 1, 0, 1);
			}
			else
			{
				func_249(uParam0, 65, 1, 0, 1);
			}
		}
	}
	return 0;
}

int func_420(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x145E7
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0xBC25C936A095B5BA();
	if (!unk_0x1D403DFADBC2DE3C(iVar0, 0) && !unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		if (!func_21(*uParam2, 1))
		{
			if (func_426(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!func_21(*uParam2, 2))
		{
			if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!func_21(*uParam2, 4))
		{
			if (func_424(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!func_21(*uParam2, 8))
		{
			if (func_423(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_21(*uParam2, 128);
		if (bParam4)
		{
			if (func_421(iParam0, iParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!func_21(*uParam2, 16))
		{
			if (func_421(iParam0, iParam1, 0, bParam6, bVar1, bParam8))
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

int func_421(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x14711
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
	if (func_422(unk_0xBC25C936A095B5BA(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0x2CDE18D6C89522AD(iParam0) && func_228(iParam0, 1) < 1.5f)
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

int func_422(int iParam0, int iParam1)//Position - 0x148D9
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

int func_423(int iParam0, int iParam1, var uParam2)//Position - 0x1492E
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

int func_424(int iParam0, int iParam1, var uParam2, bool bParam3)//Position - 0x1497C
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
			if (unk_0x042228744678C7D4(iParam0) || func_425(iVar1))
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

int func_425(int iParam0)//Position - 0x14AF5
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
						if (func_48(unk_0xBC25C936A095B5BA(), iParam0, 1) < 40f)
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

int func_426(int iParam0, var uParam1)//Position - 0x14BC3
{
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		if (unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), 6))
		{
			if (unk_0xDF25D3BB3759E7D1(unk_0xB5CEFD608600A09F(), iParam0) || unk_0x425BEBAA53B39EBF(unk_0xB5CEFD608600A09F(), iParam0))
			{
				if (unk_0xC5B8A5F778E321DD(iParam0, unk_0xBC25C936A095B5BA(), 90f))
				{
					if (func_228(iParam0, 1) < uParam1->f_2)
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

void func_427(var uParam0)//Position - 0x14C48
{
	if (!func_21(uParam0->f_62, 2))
	{
		if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
		{
			if (func_50(uParam0->f_4, uParam0->f_11, 1) < 180f)
			{
				unk_0xEDAD35A0D81ED3FB(uParam0->f_11, 25f, 0, 0, 0, 0, false, 0);
				func_64(&(uParam0->f_62), 2);
			}
		}
	}
}

void func_428()//Position - 0x14C9F
{
	func_429(&Local_238);
	func_451(2);
	func_447();
}

void func_429(var uParam0)//Position - 0x14CB7
{
	func_51(0, uParam0, 1);
	if (uParam0->f_19B != 9)
	{
		func_451(2);
	}
}

int func_430(var uParam0, bool bParam1)//Position - 0x14CD6
{
	if (bParam1)
	{
		return 1;
	}
	if ((((!func_206() && func_111(uParam0, 3) > 1f) || uParam0->f_19F == 18) || uParam0->f_19F == 14) || uParam0->f_19F == 15)
	{
		if (!unk_0x1D403DFADBC2DE3C(uParam0->f_3, 0))
		{
			if (unk_0xE59B7F5A03335350(uParam0->f_4, 0))
			{
				if (unk_0x62F3A07C43FFB568(uParam0->f_3, uParam0->f_4, 0))
				{
					if (func_63(uParam0) == 0 || func_290(uParam0->f_55, 32))
					{
						if (!unk_0xB66CFDE6B830965A(uParam0->f_4))
						{
							func_352(uParam0, 4160, 0);
						}
						else
						{
							func_352(uParam0, 0, 0);
						}
						return 1;
					}
					else
					{
						func_352(uParam0, 0, 0);
						return 1;
					}
				}
				else
				{
					func_352(uParam0, 0, 0);
					return 1;
				}
			}
			else
			{
				func_352(uParam0, 0, 0);
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

void func_431(var uParam0)//Position - 0x14DD5
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

int func_432(var uParam0)//Position - 0x14E16
{
	if (uParam0->f_6D && uParam0->f_19A < 29)
	{
		return 1;
	}
	return 0;
}

void func_433()//Position - 0x14E37
{
	func_436(&Local_238, 8);
	Local_238.f_19A = 0;
	func_435(&Local_238, 3, 6);
	Local_238.f_17 = { 1412.324f, -1518.315f, 58.4644f };
	Local_238.f_21 = 114.1f;
	Local_238.f_1A = { vLocal_286 };
	Local_238.f_22 = 95.93f;
	func_434(&Local_238, &Local_251);
	Local_251 = joaat("s_m_m_doctor_01");
	Local_251.f_1 = joaat("bison");
}

void func_434(var uParam0, var uParam1)//Position - 0x14EAA
{
	int iVar0;
	
	iVar0 = Global_19B04.f_4A7C.f_27[uParam0->f_19B];
	uParam1->f_14 = 1;
	uParam1->f_20 = -1817882002;
	uParam1->f_C = (0.7f - (0.6f * IntToFloat(iVar0)));
	uParam1->f_D = (0.8f - (0.6f * IntToFloat(iVar0)));
	uParam1->f_E = (24f + IntToFloat((10 * iVar0)));
}

void func_435(var uParam0, int iParam1, int iParam2)//Position - 0x14F08
{
	uParam0->f_3A = iParam1;
	uParam0->f_3B = iParam2;
}

void func_436(var uParam0, int iParam1)//Position - 0x14F1C
{
	func_446(1);
	func_239();
	func_6(&(uParam0->f_F4));
	func_445(uParam0);
	uParam0->f_19B = iParam1;
	if (!func_21(Global_19B04.f_4A7C, 4))
	{
		func_64(&(Global_19B04.f_4A7C), 4);
	}
	func_440(uParam0);
	func_438(uParam0);
	unk_0xC8FD3EBBB90E8D7F(unk_0xBC25C936A095B5BA(), 32, false);
	uParam0->f_66 = (func_437(uParam0->f_19B) % uParam0->f_65);
	uParam0->f_50 = 0;
	uParam0->f_1AC = func_2();
	unk_0x900CF084251DED26("TAXI", 2);
}

int func_437(int iParam0)//Position - 0x14F9E
{
	return Global_19B04.f_4A7C.f_27[iParam0];
}

void func_438(var uParam0)//Position - 0x14FB3
{
	switch (func_63(uParam0))
	{
		case 0:
			func_439(uParam0, "EXC", "Txm2", "Txm2aud");
			uParam0->f_65 = 2;
			break;
		
		case 1:
			func_439(uParam0, "TIE", "Txm1", "txm1aud");
			uParam0->f_65 = 1;
			break;
		
		case 2:
			func_439(uParam0, "DED", "Txm3", "Txm3aud");
			uParam0->f_65 = 1;
			break;
		
		case 3:
			func_439(uParam0, "GYB", "Txm12", "Txm12au");
			uParam0->f_65 = 2;
			break;
		
		case 4:
			func_439(uParam0, "TTB", "Txm6", "Txm6aud");
			uParam0->f_65 = 2;
			break;
		
		case 5:
			func_439(uParam0, "CUI", "Txm8", "Txm8aud");
			uParam0->f_65 = 1;
			break;
		
		case 6:
			func_439(uParam0, "GYN", "Txm9", "Txm9aud");
			uParam0->f_65 = 1;
			break;
		
		case 7:
			func_439(uParam0, "TCC", "Txm10", "Txm10au");
			uParam0->f_65 = 2;
			break;
		
		case 8:
			func_439(uParam0, "TFC", "Txm4", "Txm4aud");
			uParam0->f_65 = 1;
			break;
		
		case 9:
			func_439(uParam0, "PRO", "txmP", "TxmPaud");
			uParam0->f_65 = 1;
			break;
	}
}

void func_439(var uParam0, char* sParam1, char* sParam2, char* sParam3)//Position - 0x15106
{
	uParam0->f_7A = sParam1;
	uParam0->f_8F = sParam2;
	uParam0->f_90 = sParam3;
}

void func_440(var uParam0)//Position - 0x15120
{
	int iVar0;
	
	switch (uParam0->f_19B)
	{
		case 0:
			func_444(uParam0, 3);
			func_443(uParam0, 14);
			break;
		
		case 1:
			func_444(uParam0, 14);
			func_443(uParam0, 8);
			break;
		
		case 2:
			func_444(uParam0, 8);
			func_443(uParam0, 7);
			break;
		
		case 3:
			func_444(uParam0, 15);
			func_443(uParam0, 6);
			break;
		
		case 4:
			func_444(uParam0, 0);
			func_443(uParam0, 3);
			break;
		
		case 5:
			func_444(uParam0, 6);
			func_443(uParam0, 7);
			break;
		
		case 6:
			func_444(uParam0, 8);
			func_443(uParam0, 15);
			break;
		
		case 7:
			func_444(uParam0, 8);
			func_443(uParam0, 14);
			break;
		
		case 8:
			func_444(uParam0, 7);
			func_443(uParam0, 15);
			break;
		
		case 9:
			func_444(uParam0, unk_0x491B2241281A03B7(0, 17));
			iVar0 = func_442((uParam0->f_1A2.f_2 + unk_0x491B2241281A03B7(1, 17)), 0, 16);
			func_443(uParam0, iVar0);
			func_441(uParam0);
			uParam0->f_1A2.f_7 = 1;
			uParam0->f_1A2.f_8 = 1;
			break;
	}
}

void func_441(var uParam0)//Position - 0x15257
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

int func_442(int iParam0, int iParam1, int iParam2)//Position - 0x15318
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

void func_443(var uParam0, int iParam1)//Position - 0x153BA
{
	uParam0->f_1A2.f_1 = iParam1;
}

void func_444(var uParam0, int iParam1)//Position - 0x153CB
{
	uParam0->f_1A2.f_2 = iParam1;
}

void func_445(var uParam0)//Position - 0x153DC
{
	uParam0->f_2 = unk_0xBC25C936A095B5BA();
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_E = { func_39() };
	uParam0->f_11 = { func_39() };
	uParam0->f_23 = 0f;
	uParam0->f_4C = 0;
	uParam0->f_31 = 0;
	uParam0->f_6D = 0;
	uParam0->f_24 = 0f;
	uParam0->f_19A = 2;
	uParam0->f_7B = "TRS_FINDING_LOCATION";
	func_203(uParam0, 32, 0);
}

void func_446(bool bParam0)//Position - 0x1543A
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

void func_447()//Position - 0x15466
{
	unk_0x379ACE23D404525C(vLocal_287, vLocal_288, true, 1);
	unk_0x379ACE23D404525C(vLocal_293, vLocal_294, true, 1);
	func_135(vLocal_299, 60f, 0);
	func_135(vLocal_300, 60f, 0);
	unk_0x02DD9F29D9655E48();
	unk_0x483687B0FCA5415A(iLocal_261, 0);
	unk_0x926FDA90094AA5FA(iLocal_260);
	unk_0x926FDA90094AA5FA(iLocal_259);
	unk_0x4CE01E22F13D3913(&cLocal_309);
	func_246(385.1685f, -1372.719f, 29.8554f, 1, 50f);
	func_450();
	func_449();
	func_448();
	unk_0x8510BC031C24B862(Local_251.f_1, false);
	func_152(&uLocal_45, 0, 0);
	unk_0x95E4B6F3ED223F5A();
}

void func_448()//Position - 0x15508
{
	unk_0x2CA123B0622F495C(iLocal_254);
	unk_0x4EA570997E107F35("MOVE_DUCK_FOR_COVER");
	unk_0x4EA570997E107F35(&cLocal_312);
	unk_0x4EA570997E107F35(&cLocal_321);
	unk_0x4EA570997E107F35(&cLocal_330);
	unk_0x4EA570997E107F35(&cLocal_339);
}

void func_449()//Position - 0x1553B
{
	unk_0x2CA123B0622F495C(Local_251);
	unk_0x2CA123B0622F495C(Local_251.f_1);
	unk_0x2CA123B0622F495C(iLocal_255);
	unk_0x2CA123B0622F495C(iLocal_256);
	unk_0x4CE01E22F13D3913(&cLocal_309);
	unk_0x4EA570997E107F35("veh@truck@ds@base");
}

void func_450()//Position - 0x15570
{
	unk_0x2CA123B0622F495C(iLocal_253);
	unk_0x4EA570997E107F35("gestures@m@standing@casual");
}

void func_451(int iParam0)//Position - 0x15587
{
	Global_195FA.f_16 = iParam0;
}

