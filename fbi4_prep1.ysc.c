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
	bool bLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	struct<4> Local_38[10];
	bool bLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	struct<27> Local_42 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	struct<11> Local_45[2];
	struct<25> Local_46[21];
	float fLocal_47 = 0f;
	int iLocal_48 = 0;
	bool bLocal_49 = 0;
	bool bLocal_50 = 0;
	bool bLocal_51 = 0;
	bool bLocal_52 = 0;
	int iLocal_53 = 0;
	vector3 vLocal_54 = { 0f, 0f, 0f };
	int iLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = -1;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 1000;
	var uLocal_66 = 1000;
	var uLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	var uLocal_72 = 0;
	struct<8> Local_73[3];
	var uLocal_74 = 15;
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
	var uLocal_126 = 15;
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
	int iLocal_178 = 0;
	char* sLocal_179 = NULL;
	char* sLocal_180 = NULL;
	int iLocal_181 = 0;
	int iLocal_182 = 0;
	int iLocal_183 = 0;
	int iLocal_184 = 0;
	vector3 vLocal_185 = { 0f, 0f, 0f };
	vector3 vLocal_186 = { 0f, 0f, 0f };
	int iLocal_187 = 0;
	int iLocal_188 = 0;
	int iLocal_189 = 0;
	bool bLocal_190 = 0;
	int iLocal_191 = 0;
	int iLocal_192 = 0;
	int iLocal_193 = 0;
	int iLocal_194 = 0;
	int iLocal_195 = 0;
	int iLocal_196 = 0;
	struct<14> Local_197 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<14> Local_198 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_199 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_200 = 0;
	int iLocal_201 = 0;
	int iLocal_202 = 0;
	int iLocal_203 = 0;
	char[] cLocal_204[8] = 0;
	var uLocal_205 = 16;
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
	char[] cLocal_370[8] = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	int iLocal_374[3] = { 0, 0, 0 };
	int iLocal_375 = 0;
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
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_36 = 3;
	iLocal_41 = 21;
	fLocal_47 = -1f;
	vLocal_54 = { 0f, 0f, 0f };
	iLocal_55 = -1;
	sLocal_180 = "FBIPRA";
	vLocal_185 = { 0f, 0f, 0f };
	vLocal_186 = { 1381.472f, -2072.245f, 50.9981f };
	cLocal_204 = "FIBP1AU";
	iLocal_375 = -1;
	unk_0x25A523E067E06F54(1);
	if (unk_0xE8A79675302ED812(19))
	{
		sLocal_179 = 0;
		func_380();
		func_368();
	}
	func_351();
	if (func_350())
	{
		func_349(918.8851f, -269.789f, 67.2145f, 68.2149f, 1, 0);
	}
	func_335();
	while (true)
	{
		unk_0x2E94C9549322098D("M_TrT", 0);
		if (func_334(unk_0xBC25C936A095B5BA()))
		{
			func_330();
			func_326();
			unk_0x6A095EC1C9AF12A4(unk_0xB5CEFD608600A09F());
			unk_0x598D851D7D0D2BA3(0.8f);
			switch (iLocal_68)
			{
				case 0:
					func_265();
					break;
				
				case 1:
					func_233();
					break;
				
				case 2:
					func_215();
					break;
				
				case 3:
					func_102();
					break;
				
				case 4:
					func_38();
					break;
				
				case 5:
					func_1();
					break;
			}
			if (iLocal_68 != 5)
			{
				if (iLocal_68 >= 0 && !bLocal_28)
				{
				}
			}
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x189
{
	int iVar0;
	
	switch (iLocal_69)
	{
		case 0:
			unk_0xEB233A3B7635D2AC();
			unk_0x7456702622C62EA0(1);
			func_37();
			if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
			{
				iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
				if (func_36(iVar0) && unk_0x6F79ECA8C83E4357(iVar0) == joaat("towtruck"))
				{
					func_35(iVar0, 2);
				}
			}
			if (!unk_0xF1734B55490E9045(sLocal_179))
			{
				func_33(sLocal_179);
			}
			else
			{
				func_18(0);
			}
			iLocal_69 = 1;
			break;
		
		case 1:
			if (func_17())
			{
				if (func_16())
				{
					func_11();
				}
				func_2();
				unk_0x6C5F5B5F6894CCE3(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), 30f, 1, 0, 0, false);
				func_368();
			}
			break;
	}
}

void func_2()//Position - 0x23E
{
	func_9(&Local_199);
	func_9(&iLocal_201);
	func_9(&iLocal_200);
	func_8(&Local_197);
	func_8(&Local_198);
	func_9(&iLocal_202);
	func_3();
}

void func_3()//Position - 0x274
{
	func_7(&(Local_45[0 /*11*/].f_4));
	func_7(&(Local_45[1 /*11*/].f_4));
	func_6(&iLocal_43);
	func_5(&(Local_45[0 /*11*/]), 1, 0, 1);
	func_5(&(Local_45[1 /*11*/]), 1, 0, 1);
	func_4(&(Local_46[iLocal_48 /*25*/].f_11), 0);
	unk_0x926FDA90094AA5FA(iLocal_40);
	unk_0x4EA570997E107F35("missfbi4prepp1");
	unk_0x6984B170050030EF("missfbi4prepp1_garbageman");
}

void func_4(int iParam0, bool bParam1)//Position - 0x2D2
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

void func_5(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x30D
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
			unk_0x22321800954A532E(*iParam0, bParam1);
			if (iParam2 == 1)
			{
				unk_0x2E35C4FA5F0ED22F(*iParam0, false);
			}
		}
		unk_0x02537C8C1BEEB477(iParam0);
	}
}

void func_6(int iParam0)//Position - 0x35D
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

void func_7(int iParam0)//Position - 0x395
{
	if (unk_0x2DA8CA50A72528FB(*iParam0))
	{
		unk_0x0BBAABB52887CF8C(*iParam0, false);
		unk_0x07B8ECB35A4ED3AC(iParam0);
	}
}

void func_8(int iParam0)//Position - 0x3B5
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

void func_9(int iParam0)//Position - 0x3F6
{
	if (unk_0x724D816EA203A79E(*iParam0))
	{
		if (!unk_0x5CAE759AE8219D20(*iParam0))
		{
			unk_0x77815D3407C6700D(*iParam0, true, 0);
		}
		if (func_36(*iParam0))
		{
			if (unk_0x5CAE759AE8219D20(*iParam0) && unk_0xB248FAA35ED47DB9(*iParam0, 1))
			{
				if (func_10(unk_0xBC25C936A095B5BA()))
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
			if (func_10(unk_0xBC25C936A095B5BA()))
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

int func_10(int iParam0)//Position - 0x492
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

void func_11()//Position - 0x4B3
{
	func_14(918.8851f, -269.789f, 67.2145f, 325.9081f);
	func_12(917.5291f, -263.8595f, 67.3489f, 188.0605f);
}

void func_12(vector3 vParam0, float fParam1)//Position - 0x4EB
{
	func_13(&(Global_181DF.f_B3B), vParam0, fParam1);
}

void func_13(var uParam0, vector3 vParam1, var uParam2)//Position - 0x504
{
	*uParam0 = { vParam1 };
	uParam0->f_6 = uParam2;
}

void func_14(vector3 vParam0, float fParam1)//Position - 0x51A
{
	if (func_15(Global_11632, 0f, 0f, 0f, 0))
	{
		Global_11632 = { vParam0 };
		Global_11635 = fParam1;
	}
}

bool func_15(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x546
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_16()//Position - 0x58D
{
	if (Global_16B1B == 7)
	{
		return 1;
	}
	return 0;
}

int func_17()//Position - 0x5A2
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

void func_18(int iParam0)//Position - 0x5CF
{
	int iVar0;
	
	if (Global_19B04.f_2360 || func_32(0))
	{
		iVar0 = func_31();
		if (!func_19(iVar0))
		{
			return;
		}
		unk_0xF0059F27F7BB6680(&(Global_1478C[iVar0 /*5*/].f_1), 5);
		Global_16B3F = iParam0;
	}
}

int func_19(int iParam0)//Position - 0x614
{
	int iVar0;
	int iVar1;
	
	func_24();
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		unk_0x31E433A1F2A666D9(5000);
	}
	iVar0 = Global_1478C[iParam0 /*5*/];
	iVar1 = Global_1164F.f_6D[iVar0 /*4*/];
	func_23(iVar1, 1);
	unk_0xD0D466F17C0F30DB(unk_0xB5CEFD608600A09F());
	unk_0xD50A43D7C495F078(unk_0xB5CEFD608600A09F());
	func_20(&(Global_19B04.f_932.f_21B), iVar1);
	if (Global_154EB == Global_16B40)
	{
		Global_19B04.f_2360.f_14A[iVar1 /*6*/].f_1++;
	}
	if (!unk_0xFA30DFD0084E92FE(Global_147B0[iVar1 /*34*/].f_F, 1))
	{
		if (!unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
		{
			unk_0xC63520BF0B3FB162(0);
		}
	}
	Global_19B04.f_2360.f_14A[iVar1 /*6*/].f_2++;
	Global_154EB = Global_16B40;
	if (iParam0 == -1)
	{
		if (Global_19B04.f_2360)
		{
		}
		return 0;
	}
	if (unk_0xFA30DFD0084E92FE(Global_1478C[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (unk_0xFA30DFD0084E92FE(Global_1478C[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_20(var uParam0, int iParam1)//Position - 0x72B
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
			if (!func_22(Global_19B04.f_4848[iVar0], &vVar2, &fVar3))
			{
				Global_19B04.f_4848[iVar0] = 318;
				func_21(&(uParam0->f_8E4[iVar0]));
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

void func_21(var uParam0)//Position - 0x8F4
{
	*uParam0 = -15;
}

int func_22(int iParam0, var uParam1, float fParam2)//Position - 0x902
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
			return func_22(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_22(8, uParam1, fParam2);
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

void func_23(int iParam0, bool bParam1)//Position - 0x1271
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

void func_24()//Position - 0x12AF
{
	Global_16B3E = 1;
	if (unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1))
	{
		if (unk_0xF1734B55490E9045(&Global_1162A))
		{
			switch (func_25())
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
			switch (func_25())
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

int func_25()//Position - 0x1396
{
	func_26();
	return Global_19B04.f_932.f_21B.f_10CD;
}

void func_26()//Position - 0x13AF
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_30(Global_19B04.f_932.f_21B.f_10CD) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_29(unk_0xBC25C936A095B5BA());
			if (func_28(iVar0) && (!func_27(14) || Global_196EB))
			{
				if (Global_19B04.f_932.f_21B.f_10CD != iVar0 && func_28(Global_19B04.f_932.f_21B.f_10CD))
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

bool func_27(int iParam0)//Position - 0x14AC
{
	return Global_8C41 == iParam0;
}

bool func_28(int iParam0)//Position - 0x14BA
{
	return iParam0 < 3;
}

int func_29(int iParam0)//Position - 0x14C6
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_30(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_30(int iParam0)//Position - 0x1503
{
	if (func_28(iParam0))
	{
		return Global_19B04.f_6D75[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_31()//Position - 0x152D
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (unk_0xFA30DFD0084E92FE(Global_1478C[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_32(bool bParam0)//Position - 0x1562
{
	if (!bParam0 && unk_0xB731B8C5BCE89836(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_1163A, 0);
}

void func_33(char* sParam0)//Position - 0x158D
{
	func_34(sParam0);
	func_18(0);
}

void func_34(char* sParam0)//Position - 0x15A0
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

void func_35(int iParam0, int iParam1)//Position - 0x15DF
{
	Global_16B1B.f_16[iParam1] = iParam0;
}

int func_36(int iParam0)//Position - 0x15F3
{
	if (func_10(iParam0))
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

void func_37()//Position - 0x161D
{
	func_7(&iLocal_182);
}

void func_38()//Position - 0x162C
{
	int iVar0;
	
	switch (iLocal_69)
	{
		case 0:
			iLocal_69 = 1;
			break;
		
		case 1:
			if (!func_101(unk_0xBC25C936A095B5BA(), vLocal_186, 270f))
			{
				iLocal_69 = 2;
			}
			else if (!func_100("PRA_LEVAREA", 0, 0))
			{
				func_99("PRA_LEVAREA", 60000, 0);
			}
			break;
		
		case 2:
			iVar0 = func_25();
			if (func_100("PRA_LEVAREA", 0, 0))
			{
				unk_0xEB233A3B7635D2AC();
			}
			if (iVar0 == 0)
			{
				if (func_66(&uLocal_72, &cLocal_370, &uLocal_205))
				{
					func_62();
					func_57();
				}
			}
			else
			{
				func_52(func_56(iVar0), -621899663, -621899663, 5, 0, iVar0, func_55(iVar0), 0, 6000, 6000, -1, 0, 0);
				func_62();
				func_57();
			}
			break;
		
		case 3:
			func_39(1, 1, 1);
			iLocal_69 = 2;
			break;
	}
}

void func_39(int iParam0, int iParam1, int iParam2)//Position - 0x170D
{
	func_41(0, 0, iParam2, 1);
	if (iParam0 == 1)
	{
		unk_0x2B9AEC08E469E384(0f, 1065353216);
		unk_0xF3F01A78937DC905(0f);
	}
	if (iParam1 == 1)
	{
		func_40(500, 0);
	}
}

void func_40(int iParam0, bool bParam1)//Position - 0x1741
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

void func_41(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x177D
{
	int iVar0;
	
	iVar0 = unk_0xFC1CAE18F3ECBF2D();
	unk_0x0B55204F721A7EA1(iVar0, 0);
	unk_0xDDCAA2E64649E083(iVar0, bParam3, 0);
	func_42(0, 1, 0, 0, 0);
	if (iParam2 == 1)
	{
		unk_0x43F06392C4EF25E0(true);
		unk_0x59B038076F830627(true);
	}
	unk_0x7456702622C62EA0(1);
	if (iParam0 == 1)
	{
		unk_0xAC8915327014F426(false, 0);
	}
	if (iParam1 == 1)
	{
		if ((iLocal_37 != 0 && iLocal_37 != joaat("object")) && iLocal_37 != joaat("gadget_parachute"))
		{
			if (func_10(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x7B2E29350659BE8E(unk_0xBC25C936A095B5BA(), iLocal_37, 0))
				{
					unk_0x8E25082A46F87892(unk_0xBC25C936A095B5BA(), iLocal_37, false);
				}
			}
		}
	}
	if (func_334(unk_0xBC25C936A095B5BA()))
	{
		unk_0x4060A19D5551068A(unk_0xBC25C936A095B5BA(), 0, 0);
	}
}

void func_42(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x1825
{
	if (bParam0)
	{
		unk_0x0D2E9062E966BE4F(unk_0xB5CEFD608600A09F());
		unk_0x8D554ED10E00EEE3(unk_0xB5CEFD608600A09F(), 1);
		unk_0xDE255B32C6B37E90(unk_0xB5CEFD608600A09F(), 1);
		func_51(1);
		unk_0x32FF237D69EB5489();
		unk_0x3169E2C5E6A096BC();
		if (Global_389D.f_1 > 3)
		{
			if (unk_0x58E7DDFF8D17A82A())
			{
				unk_0x1E08809A5041F85B(false);
			}
			if (!func_50())
			{
				Global_389D.f_1 = 3;
			}
			Global_3DB8 = 5;
		}
		func_49(1, iParam3, iParam2, 0);
		Global_DAA5 = 1;
		Global_10ABB = 1;
		Global_11540 = 1;
	}
	else
	{
		func_51(0);
		unk_0xCB50D125C355ED9C();
		Global_DAA5 = 0;
		if (bParam1)
		{
			unk_0x7FF4F08CAB3344B1();
		}
		unk_0x8D554ED10E00EEE3(unk_0xB5CEFD608600A09F(), 0);
		unk_0xDE255B32C6B37E90(unk_0xB5CEFD608600A09F(), 0);
		func_49(0, iParam3, iParam2, 0);
		if (unk_0x7AF0088ABFA713B6())
		{
			if ((((!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && !func_47(unk_0xB5CEFD608600A09F())) && !func_44(unk_0xB5CEFD608600A09F(), 0)) && !func_43()) && !bParam4)
			{
				unk_0x1E5C2A1EAB944289(unk_0xBC25C936A095B5BA(), false);
			}
		}
		else if ((!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && !func_47(unk_0xB5CEFD608600A09F())) && !bParam4)
		{
			unk_0x1E5C2A1EAB944289(unk_0xBC25C936A095B5BA(), false);
		}
		Global_11540 = 0;
	}
}

bool func_43()//Position - 0x194E
{
	return unk_0xFA30DFD0084E92FE(Global_18402B[unk_0xB5CEFD608600A09F() /*770*/].f_27.f_12, 14);
}

bool func_44(int iParam0, int iParam1)//Position - 0x196B
{
	bool bVar0;
	
	if (iParam0 == unk_0xB5CEFD608600A09F())
	{
		bVar0 = func_45(-1, 0) == 8;
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

int func_45(int iParam0, bool bParam1)//Position - 0x19B6
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_46();
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

int func_46()//Position - 0x19F7
{
	return Global_1407E0;
}

int func_47(int iParam0)//Position - 0x1A03
{
	if (func_44(iParam0, 0))
	{
		return 1;
	}
	if (func_48())
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

bool func_48()//Position - 0x1A45
{
	return unk_0xFA30DFD0084E92FE(Global_240006, 3);
}

int func_49(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x1A56
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

int func_50()//Position - 0x1A89
{
	if (Global_389D.f_1 == 1 || Global_389D.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_51(int iParam0)//Position - 0x1AB0
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

int func_52(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)//Position - 0x1AD3
{
	struct<15> Var0;
	int iVar1;
	
	if (func_32(0))
	{
		return 0;
	}
	if (iParam8 < 0)
	{
		return 0;
	}
	if (iParam9 < 0)
	{
		return 0;
	}
	if (iParam10 == 76)
	{
		return 0;
	}
	if (iParam11 == 235)
	{
		return 0;
	}
	if (iParam6 == iParam5)
	{
		return 0;
	}
	if (((iParam5 != 144 && iParam5 != 0) && iParam5 != 1) && iParam5 != 2)
	{
		return 0;
	}
	if (Global_19B04.f_1DEB.f_88 < 9)
	{
		Var0 = uParam0;
		Var0.f_A = iParam1;
		Var0.f_B = iParam2;
		Var0.f_9 = iParam3;
		if (Global_19B04.f_1DEB.f_38F == Var0)
		{
			Global_19B04.f_1DEB.f_38F = -1;
		}
		Var0.f_3 = func_54(iParam4);
		Var0.f_5 = iParam9;
		Var0.f_4 = (unk_0x105601648511CC64() + iParam8);
		Var0.f_1 = iParam12;
		iVar1 = 0;
		unk_0xF0059F27F7BB6680(&iVar1, iParam5);
		Var0.f_2 = iVar1;
		Var0.f_6 = iParam6;
		Var0.f_E = iParam7;
		Var0.f_7 = iParam10;
		Var0.f_8 = iParam11;
		unk_0xF0059F27F7BB6680(&(Var0.f_1), 0);
		unk_0xF0059F27F7BB6680(&(Var0.f_1), 13);
		unk_0x7CB6FD92BE491AD9(&(Var0.f_1), 1);
		if (iParam4 == 0)
		{
			unk_0xF0059F27F7BB6680(&(Var0.f_1), 10);
		}
		Global_19B04.f_1DEB[Global_19B04.f_1DEB.f_88 /*15*/] = { Var0 };
		Global_19B04.f_1DEB.f_88++;
		func_53(iParam5);
		return 1;
	}
	return 0;
}

void func_53(int iParam0)//Position - 0x1C30
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_28(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_19B04.f_1DEB.f_88)
	{
		if (unk_0xFA30DFD0084E92FE(Global_19B04.f_1DEB[iVar0 /*15*/].f_2, iParam0))
		{
			if (Global_19B04.f_1DEB[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_19B04.f_1DEB[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_19B04.f_1DEB.f_2FC)
	{
		if (unk_0xFA30DFD0084E92FE(Global_19B04.f_1DEB.f_28B[iVar2 /*14*/].f_2, iParam0))
		{
			if (Global_19B04.f_1DEB.f_28B[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_19B04.f_1DEB.f_397[iParam0] = iVar1;
}

int func_54(int iParam0)//Position - 0x1CF4
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 5;
			break;
		
		case 7:
			return 4;
			break;
		
		case 2:
			return 3;
			break;
		
		case 1:
			return 2;
			break;
		
		case 3:
			return 1;
			break;
		
		case 5:
		case 6:
			return 0;
			break;
	}
	return 7;
}

int func_55(int iParam0)//Position - 0x1D5E
{
	if (iParam0 == 1)
	{
		return 9;
	}
	return 8;
}

int func_56(int iParam0)//Position - 0x1D73
{
	if (iParam0 == 1)
	{
		return -714760066;
	}
	return -1198055521;
}

void func_57()//Position - 0x1D8E
{
	unk_0xEB233A3B7635D2AC();
	func_60();
	func_58(0, 0);
	func_368();
}

void func_58(bool bParam0, int iParam1)//Position - 0x1DA8
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_DAA1)
	{
		Global_DAA1 = iParam1;
	}
	if (bParam0)
	{
		if ((func_32(0) && Global_11638.f_1 == 1) && func_59(Global_11638))
		{
		}
		else
		{
			Global_DA9F = 1;
		}
	}
	if (Global_19B04.f_2360 || func_32(0))
	{
		iVar0 = func_31();
		iVar1 = Global_1478C[iVar0 /*5*/];
		uVar2 = Global_1164F.f_6D[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_19B04.f_2360)
			{
			}
			return;
		}
		if (unk_0xFA30DFD0084E92FE(Global_1478C[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (unk_0xFA30DFD0084E92FE(Global_1478C[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		unk_0xF0059F27F7BB6680(&(Global_1478C[iVar0 /*5*/].f_1), 4);
		unk_0xF0059F27F7BB6680(&Global_1163A, 1);
		Global_1164A = uVar2;
		Global_1164B = unk_0x105601648511CC64();
	}
}

int func_59(int iParam0)//Position - 0x1E7E
{
	switch (iParam0)
	{
		case 71:
			return 1;
			break;
		
		case 86:
			return 1;
			break;
		
		case 91:
			return 1;
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

void func_60()//Position - 0x1EBC
{
	Global_394A = 0;
	func_61();
}

void func_61()//Position - 0x1ECC
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

void func_62()//Position - 0x1F23
{
	func_65(0, -1);
	func_64(0, 318);
	func_63(1, 320);
}

void func_63(bool bParam0, int iParam1)//Position - 0x1F41
{
	int iVar0;
	
	if (Global_DAA7)
	{
	}
	Global_DAA7 = 0;
	if (bParam0)
	{
		Global_DAA8 = 1;
	}
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_109DE)
		{
			if (Global_DB80[Global_109DF[iVar0 /*9*/] /*13*/] == 4)
			{
				Global_109DF[iVar0 /*9*/].f_5 = 0;
				return;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_109DE)
		{
			if (Global_109DF[iVar0 /*9*/] > 0)
			{
				if (Global_109DF[iVar0 /*9*/] == iParam1)
				{
					Global_109DF[iVar0 /*9*/].f_5 = 0;
					return;
				}
			}
			iVar0++;
		}
	}
}

void func_64(int iParam0, int iParam1)//Position - 0x1FDB
{
	int iVar0;
	
	Global_DAAC = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_109DE)
	{
		if (iParam1 == -1 || Global_109DF[iVar0 /*9*/] == iParam1)
		{
			if (Global_109DF[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_109DF[iVar0 /*9*/].f_6 = iParam0;
				Global_109DF[iVar0 /*9*/].f_7 = 1;
				Global_109DF[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

void func_65(int iParam0, int iParam1)//Position - 0x2046
{
	Global_DAAA = iParam0;
	Global_DAAB = iParam1;
}

int func_66(var uParam0, char* sParam1, var uParam2)//Position - 0x2058
{
	switch (*uParam0)
	{
		case 0:
			if (func_97())
			{
				if ((func_96(74) || func_96(75)) && func_95())
				{
					if (func_25() == 0)
					{
						func_94(1);
						func_93(46, 1);
						*uParam0 = 4;
					}
					else
					{
						func_92(uParam2, 0, 0, "MICHAEL", 0, 1);
						if (func_81(uParam2, func_91(), func_25(), "FBIPRAU", func_90(), 9, 1, 0, 0, 0))
						{
							*sParam1 = { func_80(1) };
							func_93(46, 1);
							*uParam0 = 1;
						}
					}
				}
				else if (func_25() == 0)
				{
					func_94(0);
					*uParam0 = 4;
				}
				else
				{
					func_92(uParam2, 0, 0, "MICHAEL", 0, 1);
					if (func_81(uParam2, func_91(), func_25(), "FBIPRAU", func_90(), 9, 1, 0, 0, 0))
					{
						*sParam1 = { func_80(0) };
						*uParam0 = 1;
					}
				}
			}
			else
			{
				func_73();
				*uParam0 = 4;
			}
			break;
		
		case 1:
			if (func_72())
			{
				if (unk_0xC0A904C0F2775676() >= 0)
				{
					func_71("FBIPRAU", sParam1);
					func_70(1);
					*uParam0 = 3;
				}
			}
			if (func_69())
			{
				*uParam0 = 3;
			}
			break;
		
		case 2:
			break;
		
		case 3:
			if (!func_72())
			{
				if (!func_68(0))
				{
					if (!func_96(3) && func_97())
					{
						func_67(50, 0);
					}
					return 1;
				}
			}
			break;
		
		case 4:
			return 1;
			break;
	}
	return 0;
}

void func_67(int iParam0, int iParam1)//Position - 0x21CD
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_19B04.f_2188[iParam0] = 1;
	Global_19B04.f_2188.f_EC[iParam0] = (unk_0x105601648511CC64() + iParam1);
}

int func_68(int iParam0)//Position - 0x220A
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

int func_69()//Position - 0x2264
{
	if (Global_3DE9 == 1 || Global_41B0 == 1)
	{
		return 1;
	}
	return 0;
}

void func_70(bool bParam0)//Position - 0x2287
{
	unk_0x1E08809A5041F85B(bParam0);
	if (bParam0)
	{
	}
}

void func_71(char* sParam0, char* sParam1)//Position - 0x229B
{
	if (unk_0x58E7DDFF8D17A82A())
	{
		Global_3DF1 = 1;
		StringCopy(&Global_3DF8, sParam0, 24);
		StringCopy(&Global_3DF2, sParam1, 24);
	}
}

int func_72()//Position - 0x22BC
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

void func_73()//Position - 0x22E1
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = func_78(iVar0);
		if (!unk_0x36CEFBE9B745A58D(iVar1))
		{
			if (func_77(iVar1, 0))
			{
				return;
			}
		}
		iVar0++;
	}
	func_74(func_75(), 0, func_25(), func_91(), 9, 6000, 6000, -1, 0, -1, 0);
}

int func_74(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x2338
{
	struct<15> Var0;
	int iVar1;
	
	if (func_32(0))
	{
		return 0;
	}
	if (iParam5 < 0)
	{
		return 0;
	}
	if (iParam6 < 0)
	{
		return 0;
	}
	if (iParam7 == 76)
	{
		return 0;
	}
	if (iParam8 == 235)
	{
		return 0;
	}
	if (iParam3 == iParam2)
	{
		return 0;
	}
	if (((iParam2 != 144 && iParam2 != 0) && iParam2 != 1) && iParam2 != 2)
	{
		return 0;
	}
	if (Global_19B04.f_1DEB.f_88 < 9)
	{
		Var0 = iParam0;
		if (Global_19B04.f_1DEB.f_38F == Var0)
		{
			Global_19B04.f_1DEB.f_38F = -1;
		}
		Var0.f_3 = func_54(iParam1);
		Var0.f_5 = iParam6;
		Var0.f_4 = (unk_0x105601648511CC64() + iParam5);
		Var0.f_1 = iParam10;
		iVar1 = 0;
		unk_0xF0059F27F7BB6680(&iVar1, iParam2);
		Var0.f_2 = iVar1;
		Var0.f_6 = iParam3;
		Var0.f_E = iParam4;
		Var0.f_A = -1;
		Var0.f_B = -1;
		Var0.f_7 = iParam7;
		Var0.f_8 = iParam8;
		Var0.f_9 = iParam9;
		unk_0xF0059F27F7BB6680(&(Var0.f_1), 0);
		unk_0x7CB6FD92BE491AD9(&(Var0.f_1), 1);
		if (iParam1 == 0)
		{
			unk_0xF0059F27F7BB6680(&(Var0.f_1), 10);
		}
		Global_19B04.f_1DEB[Global_19B04.f_1DEB.f_88 /*15*/] = { Var0 };
		Global_19B04.f_1DEB.f_88++;
		func_53(iParam2);
		return 1;
	}
	return 0;
}

int func_75()//Position - 0x2489
{
	switch (func_76())
	{
		case 33:
			switch (func_25())
			{
				case 0:
					return -1847734803;
					break;
				
				case 1:
					return -714760066;
					break;
				
				case 2:
					return -1198055521;
					break;
			}
			break;
		
		case 34:
			switch (func_25())
			{
				case 0:
					return 1374342572;
					break;
				
				case 1:
					return 530956160;
					break;
				
				case 2:
					return 240475766;
					break;
			}
			break;
		
		case 36:
			switch (func_25())
			{
				case 0:
					return 580731697;
					break;
				
				case 1:
					return 728176806;
					break;
				
				case 2:
					return 910240872;
					break;
			}
			break;
		
		case 37:
			switch (func_25())
			{
				case 0:
					return 74540475;
					break;
				
				case 1:
					return -1200353264;
					break;
				
				case 2:
					return 801340541;
					break;
			}
			break;
	}
	return -1;
}

int func_76()//Position - 0x25AF
{
	return Global_11648;
}

int func_77(int iParam0, int iParam1)//Position - 0x25BB
{
	int iVar0;
	
	return 0;
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		iVar0 = func_29(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_78(iVar0) != iParam0)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == unk_0xBC25C936A095B5BA())
			{
				return 0;
			}
		}
		if (unk_0xFA30DFD0084E92FE(Global_15B79, iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_78(int iParam0)//Position - 0x2617
{
	if (iParam0 > 3)
	{
		return 0;
	}
	if (iParam0 == func_25())
	{
		return unk_0xBC25C936A095B5BA();
	}
	return Global_161D2[func_79(iParam0)];
}

int func_79(int iParam0)//Position - 0x2648
{
	if (iParam0 == 0)
	{
		return 0;
	}
	else if (iParam0 == 2)
	{
		return 2;
	}
	else if (iParam0 == 1)
	{
		return 1;
	}
	else if (iParam0 == 145)
	{
		return 3;
	}
	return 4;
}

struct<4> func_80(bool bParam0)//Position - 0x2683
{
	struct<4> Var0;
	
	if (bParam0)
	{
		switch (func_25())
		{
			case 1:
				StringCopy(&Var0, "FBI4_ISAGO", 16);
				break;
			
			case 2:
				StringCopy(&Var0, "FBI4_ISAGO", 16);
				break;
		}
	}
	else
	{
		switch (func_25())
		{
			case 1:
				StringCopy(&Var0, "FBI4_THATSIT", 16);
				break;
			
			case 2:
				StringCopy(&Var0, "FBI4_THATSIT", 16);
				break;
			}
	}
	return Var0;
}

bool func_81(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)//Position - 0x26E9
{
	func_89(uParam0, iParam1, sParam3, iParam7, iParam8, 0);
	Global_691 = iParam2;
	Global_3DE8 = 0;
	Global_3DBF = 1;
	Global_3DC6 = 0;
	Global_3DC1 = 0;
	Global_4197 = 0;
	Global_4199 = 0;
	Global_419D = 0;
	Global_3DC6 = 0;
	Global_3DBD = 1;
	Global_3DEC = 0;
	Global_3DEE = 0;
	if (iParam6 == 1)
	{
		Global_3DC4 = 1;
	}
	else
	{
		Global_3DC4 = 0;
	}
	Global_280001 = 0;
	return func_82(sParam4, iParam5, bParam9);
}

int func_82(char* sParam0, int iParam1, bool bParam2)//Position - 0x2751
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
					func_61();
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
		if (func_88(8, -1))
		{
			return 0;
		}
		Global_3E04 = { Global_3DFE };
		func_87();
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
				func_86();
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
				if (func_85())
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
			if (func_50())
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
			func_84();
			Global_3DC2 = bParam2;
		}
		Global_3DBA = iParam1;
		StringCopy(&Global_3C3B, sParam0, 24);
		Global_394A = 0;
		func_83();
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
		func_61();
	}
	return 0;
}

void func_83()//Position - 0x2A1D
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

void func_84()//Position - 0x2A4E
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

int func_85()//Position - 0x2AE3
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

void func_86()//Position - 0x2B7C
{
	if (func_27(14))
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
		Global_389D = func_25();
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

void func_87()//Position - 0x2C1E
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

bool func_88(int iParam0, int iParam1)//Position - 0x2C75
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

void func_89(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x2CB0
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

char* func_90()//Position - 0x2D06
{
	char* sVar0;
	
	switch (func_76())
	{
		case 33:
			switch (func_25())
			{
				case 0:
					sVar0 = "FBIP1_MENDC";
					break;
				
				case 1:
					sVar0 = "FBIP1_FENDC";
					break;
				
				case 2:
					sVar0 = "FBIP1_TENDC";
					break;
			}
			break;
		
		case 34:
			switch (func_25())
			{
				case 0:
					sVar0 = "FBIP2_MENDC";
					break;
				
				case 1:
					sVar0 = "FBIP2_FENDC";
					break;
				
				case 2:
					sVar0 = "FBIP2_TENDC";
					break;
			}
			break;
		
		case 36:
			switch (func_25())
			{
				case 0:
					sVar0 = "FBIP4_MENDC";
					break;
				
				case 1:
					sVar0 = "FBIP4_FENDC";
					break;
				
				case 2:
					sVar0 = "FBIP4_TENDC";
					break;
			}
			break;
		
		case 37:
			switch (func_25())
			{
				case 0:
					sVar0 = "FBIP5_MENDC";
					break;
				
				case 1:
					sVar0 = "FBIP5_FENDC";
					break;
				
				case 2:
					sVar0 = "FBIP5_TENDC";
					break;
			}
			break;
	}
	return sVar0;
}

int func_91()//Position - 0x2E0E
{
	int iVar0;
	
	switch (func_25())
	{
		case 0:
			iVar0 = 5;
			break;
		
		case 1:
			iVar0 = 9;
			break;
		
		case 2:
			iVar0 = 8;
			break;
	}
	return iVar0;
}

void func_92(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x2E47
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

void func_93(int iParam0, int iParam1)//Position - 0x2EE2
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

void func_94(bool bParam0)//Position - 0x2F27
{
	if (bParam0)
	{
		func_74(1527885205, 0, func_25(), 23, 3, 6000, 6000, -1, 0, -1, 0);
	}
	else if (!func_96(3))
	{
		func_74(-224691627, 0, func_25(), 23, 3, 6000, 6000, -1, 50, -1, 0);
	}
	else
	{
		func_74(-224691627, 0, func_25(), 23, 3, 6000, 6000, -1, 0, -1, 0);
	}
}

int func_95()//Position - 0x2F98
{
	if ((func_96(41) && func_96(3)) && func_96(21))
	{
		return 1;
	}
	return 0;
}

int func_96(int iParam0)//Position - 0x2FC3
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_19B04.f_2360.f_14A[iParam0 /*6*/];
}

int func_97()//Position - 0x2FEF
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 33;
	while (iVar1 <= 37)
	{
		if (func_96(iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	if (func_98(45))
	{
		iVar0++;
	}
	if (iVar0 == 4)
	{
		return 1;
	}
	return 0;
}

int func_98(int iParam0)//Position - 0x3037
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_19B04.f_2360.f_63.f_3A[iParam0];
}

void func_99(char* sParam0, int iParam1, int iParam2)//Position - 0x3064
{
	iParam2 = iParam2;
	unk_0x3714DE83381EADC2(sParam0);
	unk_0x41D8F63F629E76BE(iParam1, 1);
}

bool func_100(char* sParam0, int iParam1, char* sParam2)//Position - 0x307D
{
	unk_0xE2CFC41F8121CE68(sParam0);
	if (iParam1 == 1)
	{
		unk_0xC9C304D0AABE1335(sParam2);
	}
	return unk_0x121EFFA2D57472F2();
}

bool func_101(int iParam0, vector3 vParam1, float fParam2)//Position - 0x309B
{
	return SYSTEM::VDIST2(unk_0x541C2AEF053615BC(iParam0, true), vParam1) <= (fParam2 * fParam2);
}

void func_102()//Position - 0x30B8
{
	func_209(&iLocal_200, &iLocal_201, &iLocal_71, &iLocal_183, &iLocal_182, vLocal_186, Local_199, 0, 1090519040);
	func_208();
	func_149();
	switch (iLocal_69)
	{
		case 0:
			if (func_116(iLocal_68, bLocal_28))
			{
				if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) == 0)
				{
					if (func_36(iLocal_200))
					{
						if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_200, 0))
						{
							func_115("PRA_LEVVEH", &iLocal_181);
						}
					}
				}
				iLocal_69 = 1;
			}
			break;
		
		case 1:
			func_114(&iLocal_182, vLocal_186, &iLocal_70, iLocal_71, &iLocal_181, &iLocal_195);
			if (func_107(iLocal_200, vLocal_186, &iLocal_182, iLocal_71, iLocal_70, &iLocal_193, &iLocal_196, &iLocal_192, &iLocal_191, &iLocal_181, 1090519040))
			{
				if (!func_106())
				{
					if (func_66(&uLocal_72, &cLocal_370, &uLocal_205))
					{
						func_62();
						func_57();
					}
				}
				else
				{
					func_93(46, 1);
					func_62();
					func_104(0);
				}
			}
			break;
		
		case 3:
			if (func_36(Local_199))
			{
				if (!unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), Local_199, 0))
				{
					unk_0xBD53A029D0155A42(unk_0xBC25C936A095B5BA(), Local_199, -1);
				}
				else
				{
					func_103(Local_199, vLocal_186, 126.0705f, 0, 1);
					func_39(1, 1, 1);
					iLocal_69 = 1;
				}
			}
			break;
	}
}

int func_103(int iParam0, vector3 vParam1, float fParam2, bool bParam3, int iParam4)//Position - 0x320B
{
	bool bVar0;
	float fVar1;
	
	bVar0 = false;
	if (func_10(iParam0))
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
		unk_0x641B19E156645A92(iParam0, vParam1, 1, false, 0, iParam4);
		unk_0x019CE76D5286C95C(iParam0, fParam2);
		if (bParam3)
		{
			return bVar0;
		}
		return 1;
	}
	return 0;
}

void func_104(bool bParam0)//Position - 0x3267
{
	func_105(iLocal_68);
	iLocal_178 = iLocal_68;
	if (!bParam0)
	{
		iLocal_68 = iLocal_178 + 1;
	}
	else if (iLocal_178 > 0)
	{
		iLocal_68 = (iLocal_178 - 1);
	}
	iLocal_181 = 0;
	iLocal_69 = 0;
}

void func_105(int iParam0)//Position - 0x32A4
{
	switch (iParam0)
	{
		case 0:
			break;
	}
}

int func_106()//Position - 0x32BC
{
	if (func_97())
	{
		if ((func_96(74) || func_96(75)) && func_95())
		{
			return 1;
		}
	}
	return 0;
}

int func_107(int iParam0, vector3 vParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, float fParam10)//Position - 0x32EE
{
	float fVar0;
	
	if ((iParam3 == 1 || iParam3 == 2) || iParam3 == 3)
	{
		if (iParam4 == 0)
		{
			if (func_36(iParam0))
			{
				if (!unk_0x8730A01B72F31307(iParam0))
				{
					func_115(func_113(func_76()), iParam9);
				}
			}
			if (!unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), vParam1, fParam10, fParam10, 2f, false, true, 2))
			{
				unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), vParam1, fParam10, fParam10, 2f, true, true, 2);
				if (func_100(func_113(func_76()), 0, 0))
				{
					unk_0xBB5629E7D44054AE(func_113(func_76()));
				}
				*iParam5 = 1;
				func_111(iParam2, vParam1, 1);
			}
			else
			{
				if (*iParam5)
				{
					fVar0 = (fParam10 / 2f);
					if (func_101(unk_0xBC25C936A095B5BA(), vParam1, fVar0))
					{
						*iParam5 = 0;
						func_110(1077936128, 1);
					}
				}
				func_7(iParam2);
			}
		}
	}
	else if (unk_0x4DBCE270B354E123(iParam0, vParam1, fParam10, fParam10, 2f, false, true, 2))
	{
		if (*iParam7 == -1)
		{
			unk_0xD421BC740C5340C3(iParam0, 2);
			return 1;
		}
		if (!*iParam8)
		{
			if (func_100(func_113(func_76()), 0, 0))
			{
				unk_0xEB233A3B7635D2AC();
			}
			*iParam7 = unk_0x105601648511CC64();
			*iParam8 = 1;
			unk_0xD421BC740C5340C3(iParam0, 2);
		}
		else if ((unk_0x105601648511CC64() - *iParam7) > 3000)
		{
			return 1;
		}
	}
	else
	{
		if (unk_0xA3E58143095D5828(iParam0) == 2)
		{
			unk_0xD421BC740C5340C3(iParam0, 1);
		}
		if (!*iParam6)
		{
			if (func_100(func_109(func_76(), 0), 0, 0))
			{
				unk_0xBB5629E7D44054AE(func_109(func_76(), 0));
			}
			if (!func_100(func_108(func_76()), 0, 0))
			{
				func_99(func_108(func_76()), 7500, 0);
				*iParam6 = 1;
			}
		}
		*iParam5 = 1;
	}
	return 0;
}

char* func_108(int iParam0)//Position - 0x3498
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 33:
			sVar0 = "PRA_RETVEH";
			break;
		
		case 34:
			sVar0 = "PRB_RETVEH";
			break;
		
		case 78:
			sVar0 = "PR_RETVEH";
			break;
		
		case 80:
		case 81:
		case 82:
			sVar0 = "PRF_RETVEH";
			break;
	}
	return sVar0;
}

char* func_109(int iParam0, bool bParam1)//Position - 0x34F1
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 33:
			sVar0 = "PRA_TAKBACK";
			break;
		
		case 34:
			sVar0 = "PRB_TAKBACK";
			break;
		
		case 78:
			sVar0 = "PR_TAKBACK";
			break;
		
		case 80:
		case 81:
		case 82:
			if (!bParam1)
			{
				sVar0 = "PRF_TAKBACK";
			}
			else
			{
				sVar0 = "PRF_GARAGE";
			}
			break;
	}
	return sVar0;
}

int func_110(float fParam0, int iParam1)//Position - 0x3559
{
	int iVar0;
	
	if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		return 1;
	}
	iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
	if (unk_0xE59B7F5A03335350(iVar0, 0))
	{
		if (unk_0x3187EF5798B5D209(iVar0, -1, 0) == unk_0xBC25C936A095B5BA())
		{
			if (!unk_0xB66CFDE6B830965A(iVar0))
			{
				unk_0x241D744C1CCBC526(iVar0, fParam0, iParam1, 0);
				return 0;
			}
		}
		else
		{
			return 1;
		}
	}
	if (unk_0x63276C96B907C69E(unk_0xBC25C936A095B5BA()))
	{
		return 1;
	}
	if (unk_0xE59B7F5A03335350(iVar0, 0))
	{
		if (unk_0xB66CFDE6B830965A(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

void func_111(int iParam0, vector3 vParam1, bool bParam2)//Position - 0x35DD
{
	if (!unk_0x2DA8CA50A72528FB(*iParam0))
	{
		*iParam0 = func_112(vParam1, 5, bParam2);
	}
}

int func_112(vector3 vParam0, int iParam1, bool bParam2)//Position - 0x35FE
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = unk_0x390CF6C8AD6903B7(vParam0);
	unk_0x12DB69036F6569F7(iVar0, iParam1);
	unk_0x3F5F1772D71D5EC4(iVar0, 1f);
	unk_0x0BBAABB52887CF8C(iVar0, bParam2);
	return iVar0;
}

char* func_113(int iParam0)//Position - 0x362C
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 33:
			sVar0 = "PRA_LEVVEH";
			break;
		
		case 34:
			sVar0 = "PRB_LEVVEH";
			break;
		
		case 78:
			sVar0 = "PR_LEVVEH";
			break;
		
		case 80:
		case 81:
		case 82:
			sVar0 = "PRF_LEAVE";
			break;
	}
	return sVar0;
}

void func_114(int iParam0, vector3 vParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x3685
{
	switch (*iParam2)
	{
		case 0:
			if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0)
			{
				*iParam2 = 1;
			}
			break;
		
		case 1:
			func_7(iParam0);
			if ((iParam3 == 1 || iParam3 == 2) || iParam3 == 3)
			{
				unk_0xEB233A3B7635D2AC();
				func_99("LOSE_WANTED", 7500, 0);
				*iParam2 = 2;
			}
			break;
		
		case 2:
			if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) == 0)
			{
				unk_0xEB233A3B7635D2AC();
				if ((iParam3 == 1 || iParam3 == 2) || iParam3 == 3)
				{
					func_115(func_109(func_76(), 0), iParam4);
					func_111(iParam0, vParam1, 1);
				}
				else if (iParam3 == 0 && !*iParam5)
				{
					func_99(func_108(func_76()), 7500, 0);
					*iParam5 = 1;
				}
				*iParam2 = 0;
			}
			break;
	}
}

void func_115(char* sParam0, int iParam1)//Position - 0x3765
{
	if (!*iParam1)
	{
		func_99(sParam0, 7500, 0);
		*iParam1 = 1;
	}
}

int func_116(int iParam0, bool bParam1)//Position - 0x3782
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				bLocal_28 = false;
				func_39(1, 1, 1);
			}
			else if (func_143(1, vLocal_185, 0))
			{
				if (func_142())
				{
					func_141(33);
					unk_0x8510BC031C24B862(joaat("trash"), true);
					unk_0x8510BC031C24B862(joaat("towtruck"), true);
					unk_0x8510BC031C24B862(joaat("s_m_y_garbage"), true);
					iLocal_68 = 2;
					func_7(&iLocal_182);
					func_139(&uLocal_56, 0, 0);
					func_138(190, 1244.338f, -339.3197f, 68.0823f);
					func_136();
					unk_0xD0FC9D284379BED4("DRIVE", 0);
					unk_0xD0FC9D284379BED4("WORLD_VEHICLE_ATTRACTOR", 0);
					unk_0xD0FC9D284379BED4("WORLD_VEHICLE_DRIVE_PASSENGERS", 0);
					unk_0xD0FC9D284379BED4("WORLD_VEHICLE_DRIVE_SOLO", 0);
					return 1;
				}
				else if (((func_143(2, Local_199.f_1, Local_199.f_4) && func_143(3, Local_197.f_1, Local_197.f_4)) && func_143(4, Local_198.f_1, Local_198.f_4)) && func_135(0))
				{
					func_136();
					func_141(33);
					if (func_334(Local_197))
					{
						func_134(Local_197);
					}
					if (func_334(Local_198))
					{
						func_133(Local_198);
					}
					func_132(Local_199);
					if (func_334(Local_198) && func_334(Local_197))
					{
						func_121(iLocal_187, 1, 0, 1);
					}
					unk_0x8510BC031C24B862(joaat("trash"), true);
					unk_0x8510BC031C24B862(joaat("towtruck"), true);
					unk_0x8510BC031C24B862(joaat("s_m_y_garbage"), true);
					if (unk_0x6D01571F8E6286B4(Local_199) != 0)
					{
						iVar0 = unk_0x6D01571F8E6286B4(Local_199);
						unk_0xB5AD2E78802711D6(1);
						func_7(&iVar0);
						unk_0xB5AD2E78802711D6(0);
					}
					func_119(&iLocal_182, Local_199, 1);
					func_138(190, 1244.338f, -339.3197f, 68.0823f);
					unk_0xD0FC9D284379BED4("DRIVE", 0);
					unk_0xD0FC9D284379BED4("WORLD_VEHICLE_ATTRACTOR", 0);
					unk_0xD0FC9D284379BED4("WORLD_VEHICLE_DRIVE_PASSENGERS", 0);
					unk_0xD0FC9D284379BED4("WORLD_VEHICLE_DRIVE_SOLO", 0);
					return 1;
				}
			}
			break;
		
		case 1:
			if (bParam1)
			{
				if ((func_143(2, Local_199.f_1, Local_199.f_4) && func_143(3, Local_197.f_1, Local_197.f_4)) && func_143(4, Local_198.f_1, Local_198.f_4))
				{
					func_118(unk_0xBC25C936A095B5BA(), 1197.861f, -353.011f, 68.0929f, 278.9647f);
					func_117();
					bLocal_28 = false;
					unk_0xD0FC9D284379BED4("DRIVE", 0);
					unk_0xD0FC9D284379BED4("WORLD_VEHICLE_ATTRACTOR", 0);
					unk_0xD0FC9D284379BED4("WORLD_VEHICLE_DRIVE_PASSENGERS", 0);
					unk_0xD0FC9D284379BED4("WORLD_VEHICLE_DRIVE_SOLO", 0);
					func_39(1, 1, 1);
				}
			}
			else
			{
				func_136();
				return 1;
			}
			break;
		
		case 2:
			if (bParam1)
			{
				if (func_143(2, Local_199.f_1, Local_199.f_4))
				{
					func_117();
					func_136();
					unk_0xBD53A029D0155A42(unk_0xBC25C936A095B5BA(), Local_199, -1);
					bLocal_28 = false;
					func_39(1, 1, 1);
				}
			}
			else
			{
				return 1;
			}
			break;
		
		case 3:
			if (bParam1)
			{
				if (func_143(2, vLocal_186, Local_199.f_4))
				{
					func_117();
					unk_0xBD53A029D0155A42(unk_0xBC25C936A095B5BA(), Local_199, -1);
					func_136();
					bLocal_28 = false;
					func_39(1, 1, 1);
				}
			}
			else
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_117()//Position - 0x3A98
{
	if (iLocal_68 == 1)
	{
		func_134(Local_197);
		func_133(Local_198);
		func_132(Local_199);
		func_121(iLocal_187, 1, 0, 1);
	}
	iLocal_203 = 0;
	iLocal_195 = 0;
	iLocal_196 = 0;
	iLocal_191 = 0;
	iLocal_192 = 0;
	iLocal_193 = 0;
}

void func_118(int iParam0, vector3 vParam1, float fParam2)//Position - 0x3ADE
{
	if (func_334(iParam0))
	{
		unk_0xA4E856A8CD53B8DF(iParam0);
	}
	func_103(iParam0, vParam1, fParam2, 0, 1);
}

void func_119(int iParam0, int iParam1, bool bParam2)//Position - 0x3B04
{
	if (!unk_0x2DA8CA50A72528FB(*iParam0))
	{
		*iParam0 = func_120(iParam1, bParam2, 5);
	}
}

int func_120(int iParam0, bool bParam1, int iParam2)//Position - 0x3B23
{
	int iVar0;
	
	iVar0 = 0;
	if (func_10(iParam0))
	{
		iVar0 = unk_0x511FE22BCF5353CD(iParam0);
		unk_0xF9C2945DB5BAB4BF(iVar0, bParam1);
		unk_0x12DB69036F6569F7(iVar0, iParam2);
		unk_0x3F5F1772D71D5EC4(iVar0, 1f);
	}
	return iVar0;
}

void func_121(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3B58
{
	int iVar0;
	
	iLocal_41 = iParam0;
	bLocal_50 = iParam1;
	bLocal_49 = iParam2;
	bLocal_51 = iParam3;
	Local_45[0 /*11*/].f_1 = 0;
	Local_45[1 /*11*/].f_1 = 0;
	iVar0 = 0;
	while (iVar0 <= (iLocal_41 - 1))
	{
		Local_46[iVar0 /*25*/].f_12 = 0;
		iVar0++;
	}
	fLocal_47 = 0f;
	func_123();
	Local_45[1 /*11*/].f_7 = 3;
	Local_45[1 /*11*/].f_5 = 0;
	Local_45[1 /*11*/].f_A = 1;
	Local_45[1 /*11*/].f_2 = 1500;
	Local_45[1 /*11*/].f_3 = 500;
	Local_45[0 /*11*/].f_5 = 0;
	Local_45[0 /*11*/].f_A = 0;
	Local_45[0 /*11*/].f_2 = 1000;
	Local_45[0 /*11*/].f_3 = 100;
	unk_0xB2CB6EAA6B280A84("Enemies", &iLocal_40);
	unk_0x4106FAF8AA1D69D5(Local_45[0 /*11*/], iLocal_40);
	unk_0x4106FAF8AA1D69D5(Local_45[1 /*11*/], iLocal_40);
	unk_0xE43AD8CB1B4DDED9(Local_45[0 /*11*/], 1, 0);
	unk_0xE43AD8CB1B4DDED9(Local_45[1 /*11*/], 1, 0);
	func_122(1.9f, 1.9f, 8f, 0f, 0f, 0f);
}

void func_122(vector3 vParam0, vector3 vParam1)//Position - 0x3C45
{
	Local_42.f_8 = { vParam0 };
	Local_42.f_B = { vParam1 };
	Local_42.f_1 = 4;
}

void func_123()//Position - 0x3C66
{
	if (!unk_0x62F3A07C43FFB568(Local_45[0 /*11*/], iLocal_43, 0))
	{
		unk_0x346129B364057FF6(Local_45[0 /*11*/], unk_0xA4455714F3DCE207(iLocal_43, func_131(1)), 1f, -1, 1048576000, 0, 1193033728);
		Local_45[0 /*11*/].f_7 = 1;
	}
	else
	{
		func_124(1);
	}
}

void func_124(bool bParam0)//Position - 0x3CAF
{
	if (!unk_0x1AAF0C23233C57AF(iLocal_43, 0, 0))
	{
		func_125(bParam0);
		if (iLocal_48 != (iLocal_41 - 1))
		{
			if (iLocal_48 == 4)
			{
				unk_0xB8ACD714C9A709EE(Local_45[0 /*11*/], iLocal_43, Local_46[iLocal_48 /*25*/], 15f, 2883755, Local_46[iLocal_48 /*25*/].f_6);
			}
			else
			{
				unk_0x509F549022512095(Local_45[0 /*11*/], iLocal_43, Local_46[iLocal_48 /*25*/], 15f, 0, 0, 2883755, Local_46[iLocal_48 /*25*/].f_6, Local_46[iLocal_48 /*25*/].f_7);
			}
			Local_45[0 /*11*/].f_8 = Local_45[0 /*11*/].f_7;
			Local_45[0 /*11*/].f_7 = 4;
		}
		else
		{
			unk_0x204BA7B1C7DD25F4(Local_45[0 /*11*/], iLocal_43, 15f, 786599);
			Local_45[0 /*11*/].f_8 = Local_45[0 /*11*/].f_7;
			Local_45[0 /*11*/].f_7 = 10;
		}
	}
	else
	{
		Local_45[0 /*11*/].f_8 = Local_45[0 /*11*/].f_7;
		Local_45[0 /*11*/].f_7 = 7;
	}
}

void func_125(bool bParam0)//Position - 0x3D91
{
	if (iLocal_48 != -1)
	{
		if (!func_130(Local_46[iLocal_48 /*25*/].f_B) && !func_130(Local_46[iLocal_48 /*25*/].f_E))
		{
			unk_0x379ACE23D404525C(Local_46[iLocal_48 /*25*/].f_B - Local_46[iLocal_48 /*25*/].f_E, Local_46[iLocal_48 /*25*/].f_B + Local_46[iLocal_48 /*25*/].f_E, true, 1);
		}
	}
	if (!bParam0)
	{
		func_128();
	}
	else
	{
		iLocal_48 = func_126();
	}
	if (iLocal_48 != -1)
	{
		if (!func_130(Local_46[iLocal_48 /*25*/].f_B) && !func_130(Local_46[iLocal_48 /*25*/].f_E))
		{
			unk_0x379ACE23D404525C(Local_46[iLocal_48 /*25*/].f_B - Local_46[iLocal_48 /*25*/].f_E, Local_46[iLocal_48 /*25*/].f_B + Local_46[iLocal_48 /*25*/].f_E, false, 1);
		}
	}
}

int func_126()//Position - 0x3E73
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	int iVar3;
	float fVar4[21];
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	
	if (func_36(iLocal_43))
	{
		vVar1 = { unk_0x541C2AEF053615BC(iLocal_43, true) };
		iVar2 = 0;
		while (iVar2 <= (iLocal_41 - 1))
		{
			fVar5 = unk_0xF0F2FC9DE291567F(vVar1, Local_46[iVar2 /*25*/], true);
			if (!func_130(Local_46[iVar2 /*25*/]) && fVar5 > 25f)
			{
				fVar4[iVar2] = fVar5;
			}
			else
			{
				fVar4[iVar2] = -1f;
			}
			iVar2++;
		}
		fVar6 = fVar4[0];
		iVar2 = 0;
		while (iVar2 <= (iLocal_41 - 1))
		{
			if (fVar4[iVar2] != -1f)
			{
				if (fVar4[iVar2] < fVar6)
				{
					fVar6 = fVar4[iVar2];
					iVar0 = iVar2;
				}
			}
			iVar2++;
		}
		fVar7 = func_127(Local_46[iVar0 /*25*/] - vVar1, unk_0xF90427F311003E57(iLocal_43));
		iVar3 = iVar0;
		iVar8 = 0;
		while (fVar7 < 0f && iVar8 < 40)
		{
			iVar3++;
			if (iVar3 >= 21)
			{
				iVar3 = 0;
			}
			vVar1 = { unk_0x541C2AEF053615BC(iLocal_43, true) };
			fVar7 = func_127(Local_46[iVar3 /*25*/] - vVar1, unk_0xF90427F311003E57(iLocal_43));
			iVar8++;
		}
		if (iVar8 >= 40)
		{
			iVar3 = (iLocal_41 - 1);
		}
	}
	iVar0 = iVar3;
	return iVar0;
}

float func_127(vector3 vParam0, vector3 vParam1)//Position - 0x3FAC
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

void func_128()//Position - 0x3FCD
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (bLocal_50)
	{
		while (Local_46[iLocal_48 /*25*/].f_12 && iVar0 != -1)
		{
			iLocal_48++;
			if (iLocal_48 >= (iLocal_41 - 1))
			{
				iVar0 = -1;
				iLocal_48 = (iLocal_41 - 1);
			}
		}
		if (iLocal_48 == (iLocal_41 - 1))
		{
			if (bLocal_49)
			{
				iLocal_48 = 0;
				iVar0 = 0;
				while (iVar0 <= (iLocal_41 - 1))
				{
					Local_46[iVar0 /*25*/].f_12 = 0;
					iVar0++;
				}
			}
			else
			{
				iLocal_48 = (iLocal_41 - 1);
				return;
			}
		}
	}
	else
	{
		iVar1 = 0;
		iVar0 = 0;
		while (iVar0 <= (iLocal_41 - 1))
		{
			if (Local_46[iVar0 /*25*/].f_12)
			{
				iVar1++;
			}
			iVar0++;
		}
		if (iVar1 == (iLocal_41 - 1))
		{
			iLocal_48 = (iLocal_41 - 1);
		}
		else if (iVar1 == iLocal_41)
		{
			if (bLocal_49)
			{
				iVar0 = 0;
				while (iVar0 <= (iLocal_41 - 1))
				{
					Local_46[iVar0 /*25*/].f_12 = 0;
					iVar0++;
				}
				iLocal_48 = func_129();
			}
			else
			{
				iLocal_48 = -1;
				return;
			}
		}
		else
		{
			iLocal_48 = func_129();
		}
	}
}

int func_129()//Position - 0x40D7
{
	int iVar0;
	
	iVar0 = unk_0x491B2241281A03B7(0, (iLocal_41 - 1));
	while (Local_46[iVar0 /*25*/].f_12)
	{
		iVar0 = unk_0x491B2241281A03B7(0, (iLocal_41 - 1));
	}
	return iVar0;
}

int func_130(vector3 vParam0)//Position - 0x4105
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_131(bool bParam0)//Position - 0x412F
{
	vector3 vVar0;
	int iVar1;
	
	if (!bParam0)
	{
		iVar1 = unk_0xB5B60A04E1654409(iLocal_43, "wheel_rf");
	}
	else
	{
		iVar1 = unk_0xB5B60A04E1654409(iLocal_43, "wheel_lf");
	}
	vVar0 = { unk_0x3EA3A28A85F8C32F(iLocal_43, iVar1) };
	vVar0 = { unk_0x1483995DFFF0DEEA(iLocal_43, vVar0) };
	if (!bParam0)
	{
		vVar0 = { vVar0 + Vector(0.5f, 0f, 1f) };
	}
	else
	{
		vVar0 = { vVar0 + Vector(0.5f, 0f, -1f) };
	}
	return vVar0;
}

void func_132(int iParam0)//Position - 0x419F
{
	if (func_36(iParam0))
	{
		iLocal_43 = iParam0;
	}
}

void func_133(int iParam0)//Position - 0x41B7
{
	if (func_334(iParam0))
	{
		Local_45[1 /*11*/] = iParam0;
	}
}

void func_134(int iParam0)//Position - 0x41D2
{
	if (func_334(iParam0))
	{
		Local_45[0 /*11*/] = iParam0;
	}
}

int func_135(bool bParam0)//Position - 0x41ED
{
	unk_0x522053D86D6E1C7A("missfbi4prepp1");
	unk_0xF632E62AC7874CD3("missfbi4prepp1_garbageman");
	if (bParam0)
	{
		while (!unk_0xF9E082857622D91E("missfbi4prepp1") && !unk_0x3114757F155123AF("missfbi4prepp1_garbageman"))
		{
			SYSTEM::WAIT(0);
		}
		return 1;
	}
	else if (unk_0xF9E082857622D91E("missfbi4prepp1") && unk_0x3114757F155123AF("missfbi4prepp1_garbageman"))
	{
		return 1;
	}
	return 0;
}

void func_136()//Position - 0x424A
{
	func_137(&uLocal_205);
}

void func_137(var uParam0)//Position - 0x4259
{
	int iVar0;
	char* sVar1;
	
	switch (func_25())
	{
		case 0:
			iVar0 = 0;
			sVar1 = "MICHAEL";
			break;
		
		case 1:
			iVar0 = 1;
			sVar1 = "FRANKLIN";
			break;
		
		case 2:
			iVar0 = 2;
			sVar1 = "TREVOR";
			break;
	}
	func_92(uParam0, iVar0, unk_0xBC25C936A095B5BA(), sVar1, 0, 1);
}

void func_138(int iParam0, vector3 vParam1)//Position - 0x42AF
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if ((vParam1.x == Global_6416[iVar0 /*23*/][0 /*3*/] && vParam1.y == Global_6416[iVar0 /*23*/][0 /*3*/].f_1) && vParam1.z == Global_6416[iVar0 /*23*/][0 /*3*/].f_2)
	{
		return;
	}
	Global_6413 = 1;
	unk_0xF0059F27F7BB6680(&(Global_6416[iVar0 /*23*/].f_B), 18);
	Global_6416[iVar0 /*23*/][0 /*3*/] = { vParam1 };
	Global_7BB8 = 1;
}

void func_139(var uParam0, int iParam1, int iParam2)//Position - 0x4343
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
		if (func_140(uParam0->f_3))
		{
			unk_0x7456702622C62EA0(1);
		}
	}
	if (!unk_0xEAEFBBEC1AEA464B(sVar0))
	{
		if (func_140(sVar0))
		{
			unk_0x7456702622C62EA0(1);
		}
	}
}

int func_140(char* sParam0)//Position - 0x4420
{
	unk_0xF07D20149ECBC61E(sParam0);
	return unk_0xA66DBDA0A072514A(0);
}

void func_141(int iParam0)//Position - 0x4433
{
	if (Global_15FA6 != -1)
	{
		if (iParam0 == Global_15FA6)
		{
			Global_15FAA = 1;
			return;
		}
	}
}

int func_142()//Position - 0x4457
{
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		if (unk_0x5E87CB0495C97732(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), joaat("trash")))
		{
			unk_0x77815D3407C6700D(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), true, 0);
			iLocal_200 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
			if (func_36(iLocal_200))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_143(int iParam0, vector3 vParam1, float fParam2)//Position - 0x44AA
{
	switch (iParam0)
	{
		case 0:
			if (func_148(vParam1, vLocal_185, 1056964608, 0) && fParam2 == 0f)
			{
				return 1;
			}
			break;
		
		case 1:
			unk_0x900CF084251DED26(sLocal_180, 0);
			if (unk_0xFA9040D29FE330BD(0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_36(Global_15DFD[0]))
			{
				unk_0x77815D3407C6700D(Global_15DFD[0], true, 1);
				Local_199 = Global_15DFD[0];
				if (func_36(Local_199))
				{
					func_35(Local_199, 0);
					unk_0xA73D1278857991A2(Local_199, true);
					unk_0x656194E145691D3E(Local_199, 1);
					return 1;
				}
			}
			else if (func_147(&Local_199, Local_199.f_5, Local_199.f_1, Local_199.f_4, 1))
			{
				func_35(Local_199, 0);
				unk_0xA73D1278857991A2(Local_199, true);
				unk_0x656194E145691D3E(Local_199, 1);
				return 1;
			}
			break;
		
		case 3:
			if (unk_0x724D816EA203A79E(Global_15DFD.f_9[0]))
			{
				if (!unk_0x610A1308608A0F91(Global_15DFD.f_9[0], 1))
				{
					unk_0x77815D3407C6700D(Global_15DFD.f_9[0], true, 1);
					Local_197 = Global_15DFD.f_9[0];
					if (func_334(Local_197))
					{
						unk_0x2E35C4FA5F0ED22F(Local_197, true);
						unk_0xC8FD3EBBB90E8D7F(Local_197, 170, false);
						unk_0xABA7AE40608505F2(Local_197, 65536, true);
						unk_0x91629AC1E1F78419(Local_197, 50, true);
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
			else if (func_144(&Local_197, Local_197.f_5, Local_197.f_1, Local_197.f_4, 1, 0, 1, 1))
			{
				if (func_36(Local_199))
				{
					unk_0xBD53A029D0155A42(Local_197, Local_199, -1);
					unk_0x2E35C4FA5F0ED22F(Local_197, true);
					unk_0xC8FD3EBBB90E8D7F(Local_197, 170, false);
					unk_0xABA7AE40608505F2(Local_197, 65536, true);
					unk_0x91629AC1E1F78419(Local_197, 50, true);
					return 1;
				}
			}
			break;
		
		case 4:
			if (unk_0x724D816EA203A79E(Global_15DFD.f_9[1]))
			{
				if (!unk_0x610A1308608A0F91(Global_15DFD.f_9[1], 1))
				{
					unk_0x77815D3407C6700D(Global_15DFD.f_9[1], true, 1);
					Local_198 = Global_15DFD.f_9[1];
					if (func_334(Local_198))
					{
						unk_0xC8FD3EBBB90E8D7F(Local_198, 170, false);
						unk_0xABA7AE40608505F2(Local_198, 65536, true);
						unk_0x91629AC1E1F78419(Local_198, 50, true);
						unk_0x2E35C4FA5F0ED22F(Local_198, true);
						unk_0xB71D41C0310C93DE(Local_198, 1, 1);
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
			else if (func_144(&Local_198, Local_198.f_5, Local_198.f_1, Local_198.f_4, 1, 0, 1, 1))
			{
				if (func_36(Local_199))
				{
					unk_0xBD53A029D0155A42(Local_198, Local_199, 0);
					unk_0xC8FD3EBBB90E8D7F(Local_198, 170, false);
					unk_0xABA7AE40608505F2(Local_198, 65536, true);
					unk_0x91629AC1E1F78419(Local_198, 50, true);
					unk_0x2E35C4FA5F0ED22F(Local_198, true);
					unk_0xB71D41C0310C93DE(Local_198, 1, 1);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_144(int iParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x4770
{
	if (!unk_0x724D816EA203A79E(*iParam0))
	{
		if (func_146(iParam1, "Loading", 0))
		{
			*iParam0 = unk_0x01B3635C3E8EDD81(26, iParam1, vParam2, fParam3, 1, true);
			if (func_334(*iParam0))
			{
				if (bParam5)
				{
					unk_0x346478B12F69D4E3(*iParam0, true);
				}
				if (bParam6)
				{
					unk_0x2E35C4FA5F0ED22F(*iParam0, bParam6);
				}
				if (!bParam7)
				{
					unk_0xB105531EDD3DE51B(*iParam0, bParam7);
				}
				if (bParam4)
				{
					func_145(iParam1, 1);
				}
				return 1;
			}
		}
	}
	else if (func_334(*iParam0))
	{
		return 1;
	}
	return 0;
}

void func_145(int iParam0, bool bParam1)//Position - 0x47FA
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

int func_146(int iParam0, char* sParam1, int iParam2)//Position - 0x481F
{
	unk_0xF243B7A14FCFD0F4(iParam0);
	if (!unk_0xF1734B55490E9045(sParam1) && iParam2 != -1)
	{
	}
	if (unk_0xD6513D668481290A(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_147(int iParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4)//Position - 0x484E
{
	if (!unk_0x724D816EA203A79E(*iParam0))
	{
		if (func_146(iParam1, "Loading", 0))
		{
			*iParam0 = unk_0x61C05BF08A1E0EFE(iParam1, vParam2, fParam3, 1, 1, 0);
			if (unk_0x724D816EA203A79E(*iParam0))
			{
				if (!unk_0x5CAE759AE8219D20(*iParam0))
				{
					unk_0x77815D3407C6700D(*iParam0, true, 0);
				}
				unk_0xF0A40F19AAB79E88(*iParam0, 1084227584);
				if (bParam4)
				{
					func_145(iParam1, 1);
				}
				return 1;
			}
		}
	}
	else
	{
		if (func_36(*iParam0))
		{
			unk_0x641B19E156645A92(*iParam0, vParam2, 1, false, 0, 1);
			unk_0x019CE76D5286C95C(*iParam0, fParam3);
		}
		if (!unk_0x5CAE759AE8219D20(*iParam0))
		{
			unk_0x77815D3407C6700D(*iParam0, true, 0);
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_148(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)//Position - 0x4901
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

void func_149()//Position - 0x497C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (2 - 1))
	{
		func_150(&(Local_45[iVar0 /*11*/]), iVar0);
		iVar0++;
	}
}

void func_150(int iParam0, int iParam1)//Position - 0x49A4
{
	if (func_334(*iParam0))
	{
		func_196(iParam0, iParam1, 0);
		if (unk_0x96044E39418AAF17(*iParam0, "missfbi4prepp1", "_bag_drop_garbage_man", 3))
		{
			if (unk_0x4A3B2CF8BADDD74E(*iParam0, "missfbi4prepp1", "_bag_drop_garbage_man") >= 0.172f)
			{
				if (func_10(Local_46[iLocal_48 /*25*/].f_11) && unk_0xE7E55F7532DEE345(Local_46[iLocal_48 /*25*/].f_11))
				{
					unk_0x7FD552896FDFC9E4(*iParam0, 1048576000);
					unk_0x47319B0052B870E0(*iParam0);
					if (iLocal_48 <= 20 && iLocal_48 != -1)
					{
						Local_46[iLocal_48 /*25*/].f_12 = 1;
						iParam0->f_9 = 0;
					}
					unk_0x17175087F2DB6AC8(Local_46[iLocal_48 /*25*/].f_11, 1, 0);
					unk_0x31C1FC8FA0753412(Local_46[iLocal_48 /*25*/].f_11, 1, unk_0xF90427F311003E57(*iParam0), 0, 1, 1, 0);
				}
			}
		}
		switch (iParam0->f_5)
		{
			case 0:
				if (iParam1 == 0)
				{
					func_193();
					func_192(iParam0);
				}
				func_179(iParam0);
				break;
			
			case 1:
				func_152(iParam0);
				break;
		}
	}
	else
	{
		if (func_10(Local_46[iLocal_48 /*25*/].f_11))
		{
			if (unk_0xE7E55F7532DEE345(Local_46[iLocal_48 /*25*/].f_11))
			{
				unk_0x17175087F2DB6AC8(Local_46[iLocal_48 /*25*/].f_11, 1, 0);
				unk_0x31C1FC8FA0753412(Local_46[iLocal_48 /*25*/].f_11, 1, unk_0xF90427F311003E57(*iParam0), 0, 1, 1, 0);
			}
		}
		func_7(&(iParam0->f_4));
		if (unk_0x724D816EA203A79E(*iParam0))
		{
			if (!func_151(unk_0xBC25C936A095B5BA(), *iParam0, 150f, 1) && !bLocal_52)
			{
				func_5(iParam0, 1, 0, 1);
			}
		}
	}
}

bool func_151(int iParam0, int iParam1, float fParam2, bool bParam3)//Position - 0x4B22
{
	return SYSTEM::VDIST2(unk_0x541C2AEF053615BC(iParam0, bParam3), unk_0x541C2AEF053615BC(iParam1, bParam3)) <= (fParam2 * fParam2);
}

void func_152(int iParam0)//Position - 0x4B44
{
	var uVar0;
	var uVar1;
	
	switch (iParam0->f_6)
	{
		case 5:
			if ((unk_0x105601648511CC64() - iParam0->f_1) > iParam0->f_3)
			{
				if (func_178(*iParam0, 780511057))
				{
					unk_0xA4E856A8CD53B8DF(*iParam0);
				}
				unk_0x5558ED6D4A2DEC93(*iParam0, unk_0xBC25C936A095B5BA(), 30f, -1, 0, 0);
				iParam0->f_6 = 6;
				iParam0->f_1 = unk_0x105601648511CC64();
			}
			break;
		
		case 21:
			if (unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), 6))
			{
				if (func_171(*iParam0, unk_0xBC25C936A095B5BA(), 1126825984, 1, 250, 7))
				{
					func_170(iParam0, 1);
					return;
				}
			}
			if ((unk_0x105601648511CC64() - iParam0->f_1) > iParam0->f_3)
			{
				if (!unk_0x5237AF95232D78C5(*iParam0, 0))
				{
					unk_0x14B7E28AC7E6CE45(*iParam0, unk_0xBC25C936A095B5BA(), 8f, -1f, 10f, 0);
				}
				else
				{
					unk_0xC5A6DFE2B8987B17(&uVar0);
					unk_0xA3981DED4FC2E56E(0, 0, 0);
					unk_0xB8CBD998685C0685(0, unk_0xBC25C936A095B5BA(), 0, 16);
					unk_0x535008C596714F9E(uVar0);
					unk_0xA8E6405305C0D7DF(*iParam0, uVar0);
					unk_0x02DAF06EA4F08219(&uVar0);
				}
				if (!unk_0x2DA8CA50A72528FB(iParam0->f_4))
				{
					iParam0->f_4 = func_167(*iParam0, 1, 145);
				}
				iParam0->f_6 = 22;
				iParam0->f_1 = unk_0x105601648511CC64();
			}
			break;
		
		case 10:
			if ((unk_0x105601648511CC64() - iParam0->f_1) > iParam0->f_3)
			{
				if (unk_0x5237AF95232D78C5(*iParam0, 0))
				{
					unk_0x2E9860A2B72187F5(*iParam0, 120, true);
					iParam0->f_6 = 12;
					iParam0->f_1 = unk_0x105601648511CC64();
				}
				else if (!func_178(*iParam0, 474215631))
				{
					if (func_178(*iParam0, 780511057))
					{
						unk_0xA4E856A8CD53B8DF(*iParam0);
					}
					unk_0xEE7131C3C73E7282(*iParam0, -1);
					iParam0->f_6 = 12;
					iParam0->f_1 = unk_0x105601648511CC64();
				}
			}
			break;
		
		case 3:
			if ((unk_0x105601648511CC64() - iParam0->f_1) > iParam0->f_3)
			{
				unk_0x419DE08DC356F2FD(*iParam0, 1, 1);
				unk_0x5558ED6D4A2DEC93(*iParam0, unk_0xBC25C936A095B5BA(), 500f, -1, 0, 1);
				iParam0->f_1 = unk_0x105601648511CC64();
				iParam0->f_6 = 4;
				iParam0->f_5 = 1;
			}
			break;
		
		case 11:
			func_166(iParam0);
			if ((unk_0x105601648511CC64() - iParam0->f_1) > 5000)
			{
				if (!func_178(*iParam0, 713668775))
				{
					if (unk_0x724D816EA203A79E(Local_45[func_165(iParam0->f_A) /*11*/]))
					{
						unk_0x346129B364057FF6(*iParam0, vLocal_54, 1f, -1, 2f, 0, 1193033728);
					}
				}
				iParam0->f_1 = unk_0x105601648511CC64();
				iParam0->f_6 = 23;
				iParam0->f_5 = 1;
			}
			break;
		
		case 18:
			if (!func_178(*iParam0, -2017877118))
			{
				unk_0xC5A6DFE2B8987B17(&uVar1);
				if (func_164(unk_0x541C2AEF053615BC(*iParam0, true), unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true)) > 1.5f)
				{
					unk_0xCF4C6C235CD09F4F(0, unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true), 0);
				}
				unk_0xA3A7138EAD2268A0(0, "WORLD_HUMAN_MOBILE_FILM_SHOCKING", 6000, 1);
				unk_0x535008C596714F9E(uVar1);
				unk_0xA8E6405305C0D7DF(*iParam0, uVar1);
				unk_0x02DAF06EA4F08219(&uVar1);
				iParam0->f_5 = 1;
				iParam0->f_6 = 20;
				iParam0->f_1 = unk_0x105601648511CC64();
			}
			break;
		
		case 19:
			func_166(iParam0);
			if (!func_178(*iParam0, -2017877118))
			{
				unk_0xA3A7138EAD2268A0(*iParam0, "WORLD_HUMAN_MOBILE_FILM_SHOCKING", 6000, 1);
				iParam0->f_5 = 1;
				iParam0->f_6 = 20;
				iParam0->f_1 = unk_0x105601648511CC64();
			}
			break;
		
		case 1:
			if (!unk_0x62F3A07C43FFB568(*iParam0, iLocal_43, 0))
			{
				func_162(iParam0);
			}
			break;
		
		case 2:
			if (!unk_0xCBBE5AFE2CD2E9B6(*iParam0) && (unk_0x105601648511CC64() - iParam0->f_1) > 3000)
			{
				func_162(iParam0);
			}
			break;
		
		case 4:
			if ((unk_0x105601648511CC64() - iParam0->f_1) > 8000)
			{
				unk_0x5558ED6D4A2DEC93(*iParam0, unk_0xBC25C936A095B5BA(), 500f, -1, 0, 0);
				if (!iLocal_53)
				{
					if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) == 0)
					{
						unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), 2, 0);
						unk_0xCE6A8FE7DACF8BD4(unk_0xB5CEFD608600A09F(), 0);
						iLocal_53 = 1;
					}
				}
				unk_0x419DE08DC356F2FD(*iParam0, 0, 1);
				iParam0->f_1 = unk_0x105601648511CC64();
				iParam0->f_6 = 8;
			}
			else if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 1)
			{
				unk_0x419DE08DC356F2FD(*iParam0, 0, 1);
				iParam0->f_1 = unk_0x105601648511CC64();
				iParam0->f_6 = 8;
			}
			break;
		
		case 6:
			if ((unk_0x105601648511CC64() - iParam0->f_1) > iParam0->f_2)
			{
				if (!func_151(*iParam0, unk_0xBC25C936A095B5BA(), 15f, 1))
				{
					func_7(&(iParam0->f_4));
					iParam0->f_6 = 7;
					iParam0->f_1 = unk_0x105601648511CC64();
				}
			}
			break;
		
		case 7:
			if (unk_0x62F3A07C43FFB568(*iParam0, iLocal_43, 1))
			{
				if (iParam0->f_6 != 4 && iParam0->f_6 != 1)
				{
					if (func_160())
					{
						if (func_334(*iParam0))
						{
							unk_0xA4E856A8CD53B8DF(*iParam0);
							unk_0x5558ED6D4A2DEC93(*iParam0, unk_0xBC25C936A095B5BA(), 500f, -1, 0, 1);
							iParam0->f_6 = 1;
						}
					}
				}
				if (!func_151(*iParam0, unk_0xBC25C936A095B5BA(), 120f, 1))
				{
					func_5(iParam0, 1, 0, 1);
				}
			}
			else
			{
				func_162(iParam0);
			}
			break;
		
		case 8:
			if (!func_151(*iParam0, unk_0xBC25C936A095B5BA(), 120f, 1))
			{
				func_5(iParam0, 1, 0, 1);
			}
			break;
		
		case 9:
			if (unk_0xA4813477CC5DD00F(*iParam0))
			{
				func_170(iParam0, 1);
				return;
			}
			if ((unk_0x105601648511CC64() - iParam0->f_1) > iParam0->f_2 || !func_178(*iParam0, 2104565373))
			{
				func_157(iParam0);
			}
			break;
		
		case 12:
			if ((unk_0x105601648511CC64() - iParam0->f_1) >= iParam0->f_2)
			{
				unk_0x5558ED6D4A2DEC93(*iParam0, unk_0xBC25C936A095B5BA(), 500f, -1, 0, 1);
				iParam0->f_6 = 5;
			}
			else
			{
				unk_0x2E9860A2B72187F5(*iParam0, 120, true);
			}
			break;
		
		case 13:
			if ((unk_0x105601648511CC64() - iParam0->f_1) >= iParam0->f_2)
			{
				if (!func_151(*iParam0, unk_0xBC25C936A095B5BA(), 15f, 1))
				{
					func_157(iParam0);
					iParam0->f_1 = unk_0x105601648511CC64();
				}
				else if (func_171(Local_45[func_165(iParam0->f_A) /*11*/], *iParam0, 1126825984, 1, 250, 7))
				{
					func_170(iParam0, 0);
				}
				else
				{
					func_156(iParam0);
					iParam0->f_1 = unk_0x105601648511CC64();
				}
			}
			break;
		
		case 15:
			if ((unk_0x105601648511CC64() - iParam0->f_1) >= iParam0->f_2)
			{
				if (!func_151(*iParam0, unk_0xBC25C936A095B5BA(), 15f, 1))
				{
					func_157(iParam0);
					iParam0->f_1 = unk_0x105601648511CC64();
				}
				else if (func_171(Local_45[func_165(iParam0->f_A) /*11*/], *iParam0, 1126825984, 1, 250, 7))
				{
					func_170(iParam0, 0);
				}
				else
				{
					func_156(iParam0);
					iParam0->f_1 = unk_0x105601648511CC64();
				}
			}
			break;
		
		case 16:
			if (unk_0xA4813477CC5DD00F(*iParam0))
			{
				func_170(iParam0, 1);
				return;
			}
			if ((unk_0x105601648511CC64() - iLocal_55) >= 9000)
			{
				if (!func_155(iParam0))
				{
					func_157(iParam0);
					iParam0->f_1 = unk_0x105601648511CC64();
				}
				else
				{
					iParam0->f_1 = unk_0x105601648511CC64();
					iParam0->f_5 = 1;
					iParam0->f_6 = 16;
				}
			}
			else if ((unk_0x105601648511CC64() - iLocal_55) >= 5000 && (unk_0x105601648511CC64() - iLocal_55) <= 5500)
			{
				if (unk_0x5237AF95232D78C5(*iParam0, 0))
				{
					if (unk_0x55D2D1156024C86F(*iParam0))
					{
						unk_0x4DBC1CA094C3BD19(*iParam0);
					}
				}
			}
			break;
		
		case 14:
			if ((unk_0x105601648511CC64() - iParam0->f_1) >= iParam0->f_2)
			{
				if (!func_151(*iParam0, unk_0xBC25C936A095B5BA(), 15f, 1))
				{
					func_157(iParam0);
					iParam0->f_1 = unk_0x105601648511CC64();
				}
				else if (func_171(Local_45[func_165(iParam0->f_A) /*11*/], *iParam0, 1126825984, 1, 250, 7))
				{
					func_170(iParam0, 0);
				}
				else
				{
					func_156(iParam0);
					iParam0->f_1 = unk_0x105601648511CC64();
				}
			}
			break;
		
		case 17:
			if ((unk_0x105601648511CC64() - iParam0->f_1) >= iParam0->f_2)
			{
				if (!func_151(*iParam0, unk_0xBC25C936A095B5BA(), 15f, 1))
				{
					func_157(iParam0);
					iParam0->f_1 = unk_0x105601648511CC64();
				}
				else if (func_171(Local_45[func_165(iParam0->f_A) /*11*/], *iParam0, 1126825984, 1, 250, 7))
				{
					func_170(iParam0, 0);
				}
				else
				{
					func_156(iParam0);
					iParam0->f_1 = unk_0x105601648511CC64();
				}
			}
			break;
		
		case 20:
			if (unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), 6) && !unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
			{
				if (func_171(*iParam0, unk_0xBC25C936A095B5BA(), 1126825984, 1, 250, 7))
				{
					func_170(iParam0, 1);
					return;
				}
			}
			if ((unk_0x105601648511CC64() - iParam0->f_1) >= 6000)
			{
				if (!unk_0x0C265B3C448E6954(*iParam0, unk_0xA4455714F3DCE207(iLocal_43, 5f, 0f, -2f), unk_0x541C2AEF053615BC(iLocal_43, true) + Vector(2f, 0f, 0f), 9f, 0, true, 0))
				{
					func_157(iParam0);
				}
				else
				{
					func_162(iParam0);
					func_162(&(Local_45[func_165(iParam0->f_A) /*11*/]));
				}
				iParam0->f_1 = unk_0x105601648511CC64();
			}
			func_166(iParam0);
			break;
		
		case 22:
			if (unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), 6))
			{
				if (func_171(*iParam0, unk_0xBC25C936A095B5BA(), 1126825984, 1, 250, 7))
				{
					func_170(iParam0, 1);
					return;
				}
			}
			if ((unk_0x105601648511CC64() - iParam0->f_1) >= iParam0->f_2)
			{
				if (!func_151(*iParam0, unk_0xBC25C936A095B5BA(), 15f, 1))
				{
					func_157(iParam0);
					iParam0->f_1 = unk_0x105601648511CC64();
					return;
				}
				else
				{
					func_156(iParam0);
					iParam0->f_1 = unk_0x105601648511CC64();
				}
			}
			break;
		
		case 23:
			func_196(iParam0, iParam0->f_A, 1);
			func_166(iParam0);
			if (func_101(*iParam0, vLocal_54, 2f))
			{
				if (func_153(*iParam0, vLocal_54, 1126825984, 0))
				{
					unk_0xA4E856A8CD53B8DF(*iParam0);
					iParam0->f_6 = 19;
					iParam0->f_5 = 1;
					iParam0->f_1 = unk_0x105601648511CC64();
				}
			}
			break;
	}
}

int func_153(int iParam0, vector3 vParam1, float fParam2, int iParam3)//Position - 0x5490
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	vVar0 = { func_154(vParam1 - unk_0x541C2AEF053615BC(iParam0, true)) };
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
		vVar1 = { func_154(unk_0x823166D9421223CA(iParam0, 31086, 0f, 5f, 0f) - unk_0x823166D9421223CA(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar2 = func_127(vVar1, vVar0);
	if (fVar2 <= SYSTEM::COS((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

Vector3 func_154(vector3 vParam0)//Position - 0x551E
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

int func_155(int iParam0)//Position - 0x555D
{
	if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), unk_0xA4455714F3DCE207(iLocal_43, 0f, 10f, -2f), unk_0xA4455714F3DCE207(iLocal_43, 0f, 3f, 2f), 5f, 0, true, 0) && unk_0x63276C96B907C69E(*iParam0))
	{
		return 1;
	}
	return 0;
}

void func_156(int iParam0)//Position - 0x559F
{
	int iVar0;
	
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
		if (func_36(iVar0))
		{
			if (!unk_0x2101FAC9A9D4C29D(*iParam0, iVar0, -1, 0, 0))
			{
				iParam0->f_6 = 18;
				iParam0->f_1 = unk_0x105601648511CC64();
			}
		}
	}
}

void func_157(int iParam0)//Position - 0x55E5
{
	unk_0xA902E18EDF6FA0C8(2, iLocal_40, 1862763509);
	switch (iParam0->f_8)
	{
		case 4:
			break;
		
		case 10:
			break;
		
		case 8:
			func_123();
			break;
		
		case 3:
			if (!func_178(*iParam0, 242628503))
			{
				if (iLocal_48 <= 20 && iLocal_48 != -1)
				{
					Local_46[iLocal_48 /*25*/].f_12 = 1;
				}
				if (!unk_0x62F3A07C43FFB568(*iParam0, iLocal_43, 0))
				{
					if (iParam0->f_A == 0)
					{
						unk_0x346129B364057FF6(*iParam0, unk_0xA4455714F3DCE207(iLocal_43, func_131(1)), 1f, -1, 1048576000, 0, 1193033728);
						iParam0->f_7 = 1;
					}
					else
					{
						unk_0x346129B364057FF6(*iParam0, unk_0xA4455714F3DCE207(iLocal_43, func_131(0)), 1f, -1, 1048576000, 0, 1193033728);
						iParam0->f_7 = 1;
					}
				}
			}
			break;
		
		case 2:
			if (!unk_0x62F3A07C43FFB568(*iParam0, iLocal_43, 0))
			{
				if (iParam0->f_A == 0)
				{
					unk_0x346129B364057FF6(*iParam0, unk_0xA4455714F3DCE207(iLocal_43, func_131(1)), 1f, -1, 1048576000, 0, 1193033728);
					iParam0->f_7 = 1;
				}
				else
				{
					unk_0x346129B364057FF6(*iParam0, unk_0xA4455714F3DCE207(iLocal_43, func_131(0)), 1f, -1, 1048576000, 0, 1193033728);
					iParam0->f_7 = 1;
				}
			}
			break;
		
		case 9:
			if (!Local_46[iLocal_48 /*25*/].f_12)
			{
				if (iParam0->f_9 == 1)
				{
					func_158(iParam0);
				}
				else if (iParam0->f_A == 0)
				{
					unk_0x346129B364057FF6(*iParam0, unk_0xA4455714F3DCE207(iLocal_43, func_131(1)), 1f, -1, 1048576000, 0, 1193033728);
					iParam0->f_7 = 1;
				}
				else
				{
					unk_0x346129B364057FF6(*iParam0, unk_0xA4455714F3DCE207(iLocal_43, func_131(0)), 1f, -1, 1048576000, 0, 1193033728);
					iParam0->f_7 = 1;
				}
			}
			else if (!unk_0x62F3A07C43FFB568(*iParam0, iLocal_43, 0))
			{
				if (iParam0->f_A == 0)
				{
					unk_0x346129B364057FF6(*iParam0, unk_0xA4455714F3DCE207(iLocal_43, func_131(1)), 1f, -1, 1048576000, 0, 1193033728);
					iParam0->f_7 = 1;
				}
				else
				{
					unk_0x346129B364057FF6(*iParam0, unk_0xA4455714F3DCE207(iLocal_43, func_131(0)), 1f, -1, 1048576000, 0, 1193033728);
					iParam0->f_7 = 1;
				}
			}
			break;
		
		default:
			break;
	}
	iParam0->f_1 = unk_0x105601648511CC64();
	iParam0->f_5 = 0;
}

void func_158(var uParam0)//Position - 0x5810
{
	if (!func_178(*uParam0, -71340211))
	{
		if (Local_46[iLocal_48 /*25*/].f_17 != 0)
		{
			if (func_10(Local_46[iLocal_48 /*25*/].f_11))
			{
				unk_0x7DE0769E5DAD8450(*uParam0, Local_46[iLocal_48 /*25*/].f_11, -1, 0f, 180f, 1f, 0);
			}
		}
		else
		{
			unk_0x346129B364057FF6(*uParam0, Local_46[iLocal_48 /*25*/].f_13, 1f, 20000, -1f, 0, func_159(Local_46[iLocal_48 /*25*/].f_13, unk_0x541C2AEF053615BC(*uParam0, true), 1));
		}
		if (func_36(iLocal_43))
		{
			unk_0x1C5BDB4E5D257D63(iLocal_43, 5, 0, 0);
		}
		uParam0->f_8 = uParam0->f_7;
		uParam0->f_7 = 9;
		uParam0->f_9 = 1;
	}
}

float func_159(struct<2> Param0, var uParam1, struct<2> Param2, float fParam3, int iParam4)//Position - 0x58B6
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = (Param2 - Param0);
	fVar2 = (Param2.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = unk_0xE8CFCB6B2165523B(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam4 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

int func_160()//Position - 0x591B
{
	if (func_36(iLocal_43) && func_334(unk_0xBC25C936A095B5BA()))
	{
		if (unk_0xD9C1758D86688CEA(iLocal_43, unk_0xBC25C936A095B5BA(), 1))
		{
			unk_0x5502708AECB47F5D(iLocal_43);
			if (func_161() || unk_0x8D66276473ABD7CC(iLocal_43) < 851)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_161()//Position - 0x5969
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (unk_0xE1A8FD31526DD6C8(iLocal_43, iVar0, 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= 3)
	{
		return 1;
	}
	return 0;
}

void func_162(int iParam0)//Position - 0x59A3
{
	if (iParam0->f_6 != 3 && iParam0->f_6 != 4)
	{
		func_163(iParam0);
		iParam0->f_1 = unk_0x105601648511CC64();
		iParam0->f_6 = 3;
		iParam0->f_5 = 1;
	}
}

void func_163(var uParam0)//Position - 0x59D7
{
	if (uParam0->f_7 == 9)
	{
		if (uParam0->f_9 >= 2)
		{
			if (!unk_0x36CEFBE9B745A58D(*uParam0))
			{
				unk_0x7FD552896FDFC9E4(*uParam0, 1048576000);
				unk_0x47319B0052B870E0(*uParam0);
				unk_0xE896C0AD02364F2A(*uParam0, "missfbi4prepp1", "_bag_drop_garbage_man", 8f, -8f, -1, 56, 0, 0, 0, 0);
			}
		}
	}
}

float func_164(struct<2> Param0, float fParam1, struct<2> Param2, float fParam3)//Position - 0x5A2D
{
	return unk_0xFDC254CE02DB0919((Param2 - Param0), (Param2.f_1 - Param0.f_1));
}

int func_165(int iParam0)//Position - 0x5A47
{
	if (iParam0 == 0)
	{
		return 1;
	}
	return 0;
}

void func_166(int iParam0)//Position - 0x5A5A
{
	if (func_36(iLocal_43) && (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_43, 0) && !unk_0x62F3A07C43FFB568(*iParam0, iLocal_43, 0)))
	{
		if (unk_0x8910237449BB6F79(iLocal_43) > 0f)
		{
			iParam0->f_1 = unk_0x105601648511CC64();
			iParam0->f_8 = iParam0->f_7;
			iParam0->f_5 = 1;
			iParam0->f_6 = 21;
		}
	}
}

int func_167(int iParam0, bool bParam1, int iParam2)//Position - 0x5AB4
{
	int iVar0;
	
	iVar0 = func_168(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x2DA8CA50A72528FB(iVar0)) && unk_0x0F6F4C227FB5DD52(&(Global_19B04.f_6D75[iParam2 /*29*/].f_3)))
	{
		unk_0x436D0272182E484D(iVar0, &(Global_19B04.f_6D75[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_168(int iParam0, bool bParam1, bool bParam2)//Position - 0x5B06
{
	int iVar0;
	
	if (!unk_0x724D816EA203A79E(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x511FE22BCF5353CD(iParam0);
	if (unk_0xD27AC0E9B78CFDD7(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(iVar0, func_169(unk_0x7AF0088ABFA713B6(), 1f, 1f));
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
		unk_0x3F5F1772D71D5EC4(iVar0, func_169(unk_0x7AF0088ABFA713B6(), 0.7f, 0.7f));
		unk_0xF9C2945DB5BAB4BF(iVar0, bParam1);
	}
	else if (unk_0xB12D030810E8447D(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(iVar0, func_169(unk_0x7AF0088ABFA713B6(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_169(bool bParam0, float fParam1, float fParam2)//Position - 0x5BAA
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_170(int iParam0, int iParam1)//Position - 0x5BC1
{
	func_163(iParam0);
	if ((unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), 6) || iParam1) || iParam0->f_6 == 23)
	{
		if (!func_151(unk_0xBC25C936A095B5BA(), *iParam0, 10f, 1))
		{
			if (!func_178(*iParam0, 1805844857))
			{
				iParam0->f_6 = 5;
				iParam0->f_5 = 1;
				iParam0->f_1 = unk_0x105601648511CC64();
			}
		}
		else
		{
			iParam0->f_6 = 10;
			iParam0->f_5 = 1;
			iParam0->f_1 = unk_0x105601648511CC64();
		}
	}
	else if (iParam0->f_5 != 1)
	{
		if (!func_178(*iParam0, 780511057) && !func_178(*iParam0, -71340211))
		{
			iParam0->f_5 = 1;
			iParam0->f_6 = 21;
			iParam0->f_1 = unk_0x105601648511CC64();
		}
	}
}

bool func_171(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0x5C7D
{
	var uVar0;
	vector3 vVar1;
	int iVar2;
	
	iVar2 = func_177(iParam0, iParam1);
	if (!func_10(iParam0) || !func_10(iParam1))
	{
		if (iVar2 != -1)
		{
			func_176(&(Local_38[iVar2 /*4*/]));
		}
		return 0;
	}
	if (!func_175(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar2 == -1)
	{
		iVar2 = func_174();
		if (iVar2 == -1)
		{
			return 0;
		}
		Local_38[iVar2 /*4*/].f_1 = iParam0;
		Local_38[iVar2 /*4*/].f_2 = iParam1;
	}
	vVar1 = { unk_0x823166D9421223CA(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_172(&(Local_38[iVar2 /*4*/]), vVar1, iParam1, &(Local_38[iVar2 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (unk_0x105601648511CC64() - Local_38[iVar2 /*4*/].f_3) < iParam4);
}

int func_172(var uParam0, vector3 vParam1, int iParam2, var uParam3, int iParam4, int iParam5)//Position - 0x5D3E
{
	var uVar0;
	vector3 vVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	iVar3 = 0;
	if (!func_10(iParam2))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		vVar1 = { func_173(iParam2, iParam5) };
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
		func_10(iVar3);
		if (unk_0x399F7937FFE4DEBF(iVar3) == iParam2)
		{
			if (bLocal_39)
			{
				unk_0xD1FD19DF6D5B1300(vParam1, unk_0x541C2AEF053615BC(iParam2, true), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam3 = unk_0x105601648511CC64();
			return 1;
		}
		return 0;
	}
	if (unk_0xD27AC0E9B78CFDD7(iVar3))
	{
		func_10(iVar3);
		if (unk_0x5237AF95232D78C5(iParam2, 0))
		{
			if (unk_0x233ED4CD1F1A42C1(iVar3) == unk_0x9FE9D386222EEE47(iParam2, 0))
			{
				if (bLocal_39)
				{
					unk_0xD1FD19DF6D5B1300(vParam1, unk_0x541C2AEF053615BC(iParam2, true), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam3 = unk_0x105601648511CC64();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}

Vector3 func_173(int iParam0, int iParam1)//Position - 0x5E6A
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		iVar0 = unk_0x491B2241281A03B7(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return unk_0x541C2AEF053615BC(iParam0, true);
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
	return unk_0x541C2AEF053615BC(iParam0, true);
}

int func_174()//Position - 0x5F2F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_38)
	{
		if ((Local_38[iVar0 /*4*/] == 0 && Local_38[iVar0 /*4*/].f_1 == 0) && Local_38[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_175(int iParam0, int iParam1, float fParam2, int iParam3)//Position - 0x5F79
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	vVar0 = { func_154(unk_0x541C2AEF053615BC(iParam1, true) - unk_0x541C2AEF053615BC(iParam0, true)) };
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
		vVar1 = { func_154(unk_0x823166D9421223CA(iParam0, 31086, 0f, 5f, 0f) - unk_0x823166D9421223CA(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar2 = func_127(vVar1, vVar0);
	if (fVar2 <= SYSTEM::COS((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

void func_176(var uParam0)//Position - 0x600A
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_177(int iParam0, int iParam1)//Position - 0x6025
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_38)
	{
		if (Local_38[iVar0 /*4*/].f_1 == iParam0 && Local_38[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_178(int iParam0, int iParam1)//Position - 0x6064
{
	if (func_334(iParam0))
	{
		if (unk_0xF4FCC3C1048FF2AB(iParam0, iParam1) == 1 || unk_0xF4FCC3C1048FF2AB(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_179(var uParam0)//Position - 0x6097
{
	float fVar0;
	
	if (uParam0->f_9 == 0 && uParam0->f_A == 1)
	{
	}
	switch (uParam0->f_7)
	{
		case 1:
			if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_43, 1))
			{
				func_170(uParam0, 0);
				return;
			}
			if (uParam0->f_A == 0)
			{
				func_190(uParam0, 1);
			}
			else
			{
				func_190(uParam0, 0);
			}
			break;
		
		case 2:
			if (unk_0x25EF720B1CAB1E23(*uParam0, iLocal_43))
			{
				if (!func_178(*uParam0, -1794415470))
				{
					if (uParam0->f_A == 0)
					{
						func_124(0);
					}
					else
					{
						uParam0->f_7 = 3;
					}
				}
			}
			else if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_43, 1))
			{
				func_170(uParam0, 0);
				return;
			}
			break;
		
		case 3:
			if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_43, 1))
			{
				func_170(uParam0, 0);
				return;
			}
			if (bLocal_51)
			{
				if (iLocal_48 <= 20 && iLocal_48 != -1)
				{
					if (!Local_46[iLocal_48 /*25*/].f_12)
					{
						if (func_101(*uParam0, Local_46[iLocal_48 /*25*/], 20f))
						{
							if (Local_46[iLocal_48 /*25*/].f_9 && unk_0xB66CFDE6B830965A(iLocal_43))
							{
								func_189();
							}
						}
					}
				}
				else
				{
					uParam0->f_7 = 10;
				}
			}
			break;
		
		case 4:
			if (func_101(*uParam0, Local_46[iLocal_48 /*25*/], 25f))
			{
				if (Local_46[iLocal_48 /*25*/].f_9)
				{
					func_188(uParam0);
				}
				else
				{
					Local_46[iLocal_48 /*25*/].f_12 = 1;
					func_124(0);
				}
			}
			break;
		
		case 5:
			if (func_36(iLocal_43))
			{
				unk_0x241D744C1CCBC526(iLocal_43, 25f, 10, 0);
				fVar0 = unk_0x8910237449BB6F79(iLocal_43);
				if (fVar0 < 8f)
				{
					func_188(uParam0);
				}
			}
			break;
		
		case 6:
			if (!func_178(*uParam0, 242628503) && unk_0xB66CFDE6B830965A(iLocal_43))
			{
				if (bLocal_51)
				{
					uParam0->f_8 = uParam0->f_7;
					uParam0->f_7 = 7;
				}
				else
				{
					unk_0xA3981DED4FC2E56E(*uParam0, 0, 0);
					uParam0->f_8 = uParam0->f_7;
					uParam0->f_7 = 8;
				}
			}
			break;
		
		case 7:
			if (func_334(Local_45[1 /*11*/]))
			{
				if (unk_0x62F3A07C43FFB568(Local_45[1 /*11*/], iLocal_43, 0) && Local_45[1 /*11*/].f_7 == 3)
				{
					func_124(0);
				}
			}
			break;
		
		case 8:
			if (!unk_0x62F3A07C43FFB568(*uParam0, iLocal_43, 0))
			{
				func_158(uParam0);
			}
			break;
		
		case 9:
			func_180(uParam0);
			break;
	}
}

void func_180(var uParam0)//Position - 0x6300
{
	var uVar0;
	var uVar1;
	
	if (uParam0->f_9 >= 1 && uParam0->f_9 != 0)
	{
	}
	switch (uParam0->f_9)
	{
		case 1:
			if (!func_178(*uParam0, -2015108952))
			{
				unk_0xC5A6DFE2B8987B17(&uVar0);
				if (func_164(unk_0x541C2AEF053615BC(*uParam0, true), Local_46[iLocal_48 /*25*/].f_13) > 1.5f)
				{
					unk_0xCF4C6C235CD09F4F(0, Local_46[iLocal_48 /*25*/].f_13, 0);
				}
				unk_0xE896C0AD02364F2A(0, "missfbi4prepp1", "_bag_pickup_garbage_man", 8f, -16f, -1, 528384, 0, 0, 0, 0);
				unk_0x535008C596714F9E(uVar0);
				unk_0xA8E6405305C0D7DF(*uParam0, uVar0);
				unk_0x02DAF06EA4F08219(&uVar0);
				uParam0->f_9 = 2;
			}
			else if (func_185(Local_46[iLocal_48 /*25*/].f_13, *uParam0, 1f, 1f, 8f))
			{
				func_184(uParam0);
				return;
			}
			unk_0x215E73A9479A9C9B(*uParam0, 0.2f);
			break;
		
		case 2:
			if (func_178(*uParam0, 242628503))
			{
				if (unk_0x96044E39418AAF17(*uParam0, "missfbi4prepp1", "_bag_pickup_garbage_man", 3))
				{
					if (unk_0x4A3B2CF8BADDD74E(*uParam0, "missfbi4prepp1", "_bag_pickup_garbage_man") >= 0.333f)
					{
						unk_0x43B967881C60631D(*uParam0, "missfbi4prepp1_garbageman", 0f);
						unk_0x806480CBE8DA756E(*uParam0, "missfbi4prepp1_garbageman");
						if (func_10(Local_46[iLocal_48 /*25*/].f_11) && !unk_0xE7E55F7532DEE345(Local_46[iLocal_48 /*25*/].f_11))
						{
							unk_0x5DBE04849460E608(Local_46[iLocal_48 /*25*/].f_11, *uParam0, unk_0xFA18E720A39243D0(*uParam0, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
						}
					}
				}
				if (func_185(Local_46[iLocal_48 /*25*/].f_13, *uParam0, 1f, 1f, 8f))
				{
					func_184(uParam0);
					return;
				}
			}
			else if (!func_178(*uParam0, 713668775))
			{
				if (func_36(iLocal_43))
				{
					unk_0x346129B364057FF6(*uParam0, unk_0xA4455714F3DCE207(iLocal_43, 0f, -4.8f, 0f), 1f, -1, 0.25f, 0, unk_0x349C94FFF43E2979(iLocal_43));
				}
				uParam0->f_9 = 3;
			}
			unk_0x215E73A9479A9C9B(*uParam0, 0.2f);
			break;
		
		case 3:
			if (func_36(iLocal_43))
			{
				if (!func_185(unk_0xA4455714F3DCE207(iLocal_43, 0f, -5.5f, 0f), iLocal_43, 1.9f, 1.9f, 8f))
				{
					if (unk_0x4DBCE270B354E123(*uParam0, unk_0xA4455714F3DCE207(iLocal_43, 0f, -5.5f, 0f), 0.9f, 0.9f, 2f, false, true, 0))
					{
						if (!func_178(*uParam0, 713668775))
						{
							unk_0xC5A6DFE2B8987B17(&uVar1);
							if (func_164(unk_0x541C2AEF053615BC(*uParam0, true), unk_0x541C2AEF053615BC(iLocal_43, true)) > 3f)
							{
								unk_0xC0FDCDB0DF739C50(0, unk_0x349C94FFF43E2979(iLocal_43), 0);
							}
							unk_0xE896C0AD02364F2A(0, "missfbi4prepp1", "_bag_throw_garbage_man", 8f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0x535008C596714F9E(uVar1);
							unk_0xA8E6405305C0D7DF(*uParam0, uVar1);
							unk_0x02DAF06EA4F08219(&uVar1);
							uParam0->f_9 = 4;
						}
					}
					else if (!func_178(*uParam0, 713668775))
					{
						unk_0x346129B364057FF6(*uParam0, unk_0xA4455714F3DCE207(iLocal_43, 0f, -4.8f, 0f), 1f, -1, 0.25f, 0, unk_0x349C94FFF43E2979(iLocal_43));
					}
				}
				else
				{
					func_182(uParam0);
				}
			}
			break;
		
		case 4:
			if (!func_185(unk_0xA4455714F3DCE207(iLocal_43, 0f, -5.5f, 0f), *uParam0, 1.9f, 1.9f, 8f))
			{
				if (func_178(*uParam0, 242628503))
				{
					if (unk_0x96044E39418AAF17(*uParam0, "missfbi4prepp1", "_bag_throw_garbage_man", 3))
					{
						if (unk_0x4A3B2CF8BADDD74E(*uParam0, "missfbi4prepp1", "_bag_throw_garbage_man") >= 0.391f)
						{
							if (func_10(Local_46[iLocal_48 /*25*/].f_11))
							{
								if (unk_0xE7E55F7532DEE345(Local_46[iLocal_48 /*25*/].f_11))
								{
									unk_0x7FD552896FDFC9E4(*uParam0, 1048576000);
									unk_0x47319B0052B870E0(*uParam0);
									unk_0x17175087F2DB6AC8(Local_46[iLocal_48 /*25*/].f_11, 1, 0);
									unk_0x2FBD8BF42E7AF9CC(Local_46[iLocal_48 /*25*/].f_11, 2f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1082130432, -1082130432, -1082130432);
									unk_0x31C1FC8FA0753412(Local_46[iLocal_48 /*25*/].f_11, 1, unk_0xF90427F311003E57(*uParam0), 0, 1, 1, 0);
								}
								if (unk_0xE921F8171F0733B3(Local_46[iLocal_48 /*25*/].f_11, iLocal_43))
								{
									func_181(&(Local_46[iLocal_48 /*25*/].f_11));
								}
							}
						}
					}
				}
				else
				{
					uParam0->f_9 = 0;
					if (func_36(iLocal_43))
					{
						unk_0x82948B11F55E5713(iLocal_43, 5, 0);
						func_181(&(Local_46[iLocal_48 /*25*/].f_11));
					}
					func_157(uParam0);
				}
			}
			else
			{
				func_182(uParam0);
			}
			break;
		
		case 5:
			break;
	}
}

void func_181(int iParam0)//Position - 0x6744
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

void func_182(var uParam0)//Position - 0x676F
{
	var uVar0;
	var uVar1;
	
	unk_0xA902E18EDF6FA0C8(5, iLocal_40, 1862763509);
	func_163(uParam0);
	if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		if (!unk_0x5237AF95232D78C5(*uParam0, 0))
		{
			unk_0x14B7E28AC7E6CE45(*uParam0, unk_0xBC25C936A095B5BA(), 8f, -1f, 10f, 0);
		}
		else
		{
			unk_0xC5A6DFE2B8987B17(&uVar0);
			unk_0xA3981DED4FC2E56E(0, 0, 0);
			unk_0xB8CBD998685C0685(0, unk_0xBC25C936A095B5BA(), 0, 16);
			unk_0x535008C596714F9E(uVar0);
			unk_0xA8E6405305C0D7DF(*uParam0, uVar0);
			unk_0x02DAF06EA4F08219(&uVar0);
		}
	}
	else
	{
		unk_0xC5A6DFE2B8987B17(&uVar1);
		unk_0x85DB484A637CEAB9(0, unk_0xBC25C936A095B5BA(), 0);
		unk_0xB8CBD998685C0685(0, unk_0xBC25C936A095B5BA(), 0, 16);
		unk_0x535008C596714F9E(uVar1);
		unk_0xA8E6405305C0D7DF(*uParam0, uVar1);
		unk_0x02DAF06EA4F08219(&uVar1);
	}
	unk_0x7FD552896FDFC9E4(*uParam0, 1048576000);
	unk_0x47319B0052B870E0(*uParam0);
	func_183();
	if (!unk_0x2DA8CA50A72528FB(uParam0->f_4))
	{
		uParam0->f_4 = func_167(*uParam0, 1, 145);
	}
	uParam0->f_1 = unk_0x105601648511CC64();
	uParam0->f_8 = uParam0->f_7;
	uParam0->f_5 = 1;
	uParam0->f_6 = 15;
}

void func_183()//Position - 0x686A
{
	Local_42 = 0;
	Local_42.f_1A = 0;
	Local_42.f_12 = 0;
}

void func_184(var uParam0)//Position - 0x687F
{
	var uVar0;
	var uVar1;
	
	unk_0xA902E18EDF6FA0C8(5, iLocal_40, 1862763509);
	func_163(uParam0);
	if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		if (!unk_0x5237AF95232D78C5(*uParam0, 0))
		{
			unk_0x14B7E28AC7E6CE45(*uParam0, unk_0xBC25C936A095B5BA(), 8f, -1f, 10f, 0);
		}
		else
		{
			unk_0xC5A6DFE2B8987B17(&uVar0);
			unk_0xA3981DED4FC2E56E(0, 0, 0);
			unk_0xB8CBD998685C0685(0, unk_0xBC25C936A095B5BA(), 0, 16);
			unk_0x535008C596714F9E(uVar0);
			unk_0xA8E6405305C0D7DF(*uParam0, uVar0);
			unk_0x02DAF06EA4F08219(&uVar0);
		}
	}
	else
	{
		unk_0xC5A6DFE2B8987B17(&uVar1);
		unk_0x85DB484A637CEAB9(0, unk_0xBC25C936A095B5BA(), 0);
		unk_0xB8CBD998685C0685(0, unk_0xBC25C936A095B5BA(), 0, 16);
		unk_0x535008C596714F9E(uVar1);
		unk_0xA8E6405305C0D7DF(*uParam0, uVar1);
		unk_0x02DAF06EA4F08219(&uVar1);
	}
	unk_0x7FD552896FDFC9E4(*uParam0, 1048576000);
	unk_0x47319B0052B870E0(*uParam0);
	func_183();
	if (!unk_0x2DA8CA50A72528FB(uParam0->f_4))
	{
		uParam0->f_4 = func_167(*uParam0, 1, 145);
	}
	uParam0->f_1 = unk_0x105601648511CC64();
	uParam0->f_8 = uParam0->f_7;
	uParam0->f_5 = 1;
	uParam0->f_6 = 14;
}

int func_185(vector3 vParam0, int iParam1, vector3 vParam2)//Position - 0x697A
{
	Local_42.f_2 = { vParam0 };
	Local_42.f_8 = { vParam2 };
	func_186(&Local_42, iParam1);
	if (Local_42.f_1A)
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			if (unk_0xD27AC0E9B78CFDD7(Local_42.f_12))
			{
				if (func_10(Local_42.f_12))
				{
					if (unk_0x233ED4CD1F1A42C1(Local_42.f_12) == unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 1))
					{
						return 1;
					}
				}
			}
		}
		else if (unk_0x386592AF38881675(Local_42.f_12))
		{
			if (func_10(Local_42.f_12))
			{
				if (unk_0x399F7937FFE4DEBF(Local_42.f_12) == unk_0xBC25C936A095B5BA())
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_186(var uParam0, int iParam1)//Position - 0x6A0C
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0xB0695CD48A28A3A9(*uParam0, &iVar0, &(uParam0->f_14), &(uParam0->f_17), &(uParam0->f_12));
	uParam0->f_13 = 2 == iVar1;
	if (uParam0->f_13)
	{
		if (0 == iVar0)
		{
			uParam0->f_1A = 0;
		}
		else
		{
			uParam0->f_1A = 1;
		}
	}
	if (iVar1 != 1)
	{
		func_187(uParam0, iParam1);
	}
}

void func_187(var uParam0, int iParam1)//Position - 0x6A5B
{
	switch (uParam0->f_1)
	{
		case 0:
			break;
		
		case 1:
			*uParam0 = unk_0xA20E4A82503CECB3(uParam0->f_2, uParam0->f_5, 511, iParam1, 7);
			break;
		
		case 2:
			*uParam0 = unk_0xD5C1C0A13D20F79D(uParam0->f_11, 511, 4);
			break;
		
		case 3:
			*uParam0 = unk_0x9BF0482FF8B87FBF(uParam0->f_11, 511, 4);
			break;
		
		case 4:
			*uParam0 = unk_0x214FB3B40BB28D3C(uParam0->f_2, uParam0->f_8, uParam0->f_B, uParam0->f_E, 6, iParam1, 4);
			break;
		
		case 5:
			*uParam0 = unk_0xEDB5D06AC6E2D672(uParam0->f_2, uParam0->f_5, uParam0->f_F, 511, iParam1, 4);
			break;
	}
	uParam0->f_10 = *uParam0 != 0;
}

void func_188(var uParam0)//Position - 0x6B20
{
	var uVar0;
	
	if (func_36(iLocal_43))
	{
		unk_0xC5A6DFE2B8987B17(&uVar0);
		unk_0x509F549022512095(0, iLocal_43, Local_46[iLocal_48 /*25*/].f_3, 8f, 0, joaat("trash"), 786469, 10f, 15f);
		unk_0xD8386C462DB4E5CF(0, iLocal_43, Local_46[iLocal_48 /*25*/].f_3, Local_46[iLocal_48 /*25*/].f_8, Local_46[iLocal_48 /*25*/].f_A, 5f, 1);
		unk_0x535008C596714F9E(uVar0);
		unk_0xA8E6405305C0D7DF(*uParam0, uVar0);
		unk_0x02DAF06EA4F08219(&uVar0);
		uParam0->f_7 = 6;
	}
}

void func_189()//Position - 0x6BA2
{
	func_158(&(Local_45[1 /*11*/]));
}

void func_190(var uParam0, bool bParam1)//Position - 0x6BB3
{
	int iVar0;
	
	if (func_185(unk_0xA4455714F3DCE207(iLocal_43, func_131(bParam1)), iLocal_43, 1.9f, 1.9f, 8f))
	{
		if (unk_0x0C265B3C448E6954(*uParam0, unk_0xA4455714F3DCE207(iLocal_43, 5f, 0f, -2f), unk_0x541C2AEF053615BC(iLocal_43, true) + Vector(2f, 0f, 0f), 9f, 0, true, 0) && unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), unk_0xA4455714F3DCE207(iLocal_43, 5f, 0f, -2f), unk_0x541C2AEF053615BC(iLocal_43, true) + Vector(2f, 0f, 0f), 9f, 0, true, 0))
		{
			func_191(uParam0);
		}
		else if (!func_178(*uParam0, 1227113341) && unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), unk_0xA4455714F3DCE207(iLocal_43, 5f, 0f, -2f), unk_0x541C2AEF053615BC(iLocal_43, true) + Vector(2f, 0f, 0f), 9f, 0, true, 0))
		{
			unk_0xA4E856A8CD53B8DF(*uParam0);
			unk_0x9565F9267674873A(*uParam0, unk_0xBC25C936A095B5BA(), -1, 4f, 1f, 1073741824, 0);
		}
	}
	else if (func_101(*uParam0, unk_0xA4455714F3DCE207(iLocal_43, func_131(bParam1)), 5f))
	{
		iVar0 = -1;
		if (!bParam1)
		{
			iVar0 = 0;
		}
		unk_0xD179FA0466FA4FE3(*uParam0, iLocal_43, -1, iVar0, 1f, 8388609, 0);
		uParam0->f_7 = 2;
	}
}

void func_191(var uParam0)//Position - 0x6CD4
{
	var uVar0;
	var uVar1;
	
	unk_0xA902E18EDF6FA0C8(5, iLocal_40, 1862763509);
	func_163(uParam0);
	if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		if (!unk_0x5237AF95232D78C5(*uParam0, 0))
		{
			unk_0x14B7E28AC7E6CE45(*uParam0, unk_0xBC25C936A095B5BA(), 8f, -1f, 10f, 0);
		}
		else
		{
			unk_0xC5A6DFE2B8987B17(&uVar0);
			unk_0xA3981DED4FC2E56E(0, 0, 0);
			unk_0xB8CBD998685C0685(0, unk_0xBC25C936A095B5BA(), 0, 16);
			unk_0x535008C596714F9E(uVar0);
			unk_0xA8E6405305C0D7DF(*uParam0, uVar0);
			unk_0x02DAF06EA4F08219(&uVar0);
		}
	}
	else
	{
		unk_0xC5A6DFE2B8987B17(&uVar1);
		unk_0x85DB484A637CEAB9(0, unk_0xBC25C936A095B5BA(), 0);
		unk_0xB8CBD998685C0685(0, unk_0xBC25C936A095B5BA(), 0, 16);
		unk_0x535008C596714F9E(uVar1);
		unk_0xA8E6405305C0D7DF(*uParam0, uVar1);
		unk_0x02DAF06EA4F08219(&uVar1);
	}
	unk_0x7FD552896FDFC9E4(*uParam0, 1048576000);
	unk_0x47319B0052B870E0(*uParam0);
	func_183();
	uParam0->f_1 = unk_0x105601648511CC64();
	uParam0->f_8 = uParam0->f_7;
	uParam0->f_5 = 1;
	uParam0->f_6 = 13;
}

void func_192(var uParam0)//Position - 0x6DB5
{
	if (uParam0->f_5 != 1)
	{
		if (func_36(iLocal_43) && unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			if (!func_178(*uParam0, 2104565373) && unk_0x62F3A07C43FFB568(*uParam0, iLocal_43, 0))
			{
				if (func_151(unk_0xBC25C936A095B5BA(), iLocal_43, 10f, 1))
				{
					if (unk_0xE921F8171F0733B3(iLocal_43, unk_0xBC25C936A095B5BA()))
					{
						unk_0x10790F4A9247B707(*uParam0, unk_0xBC25C936A095B5BA(), 0, 0f, 0f, 0f, 10f, 100, 1, -957453492);
						uParam0->f_1 = unk_0x105601648511CC64();
						uParam0->f_6 = 9;
					}
				}
			}
		}
	}
}

void func_193()//Position - 0x6E45
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (iLocal_41 - 1))
	{
		if (Local_46[iVar0 /*25*/].f_17 != 0)
		{
			if (Local_46[iVar0 /*25*/].f_18)
			{
				if ((iVar0 != iLocal_48 && func_10(Local_46[iVar0 /*25*/].f_11)) && func_195(Local_46[iVar0 /*25*/].f_11, unk_0xBC25C936A095B5BA(), 1) > 200f)
				{
					unk_0xA35241BCE4C1A24B(&(Local_46[iVar0 /*25*/].f_11));
					Local_46[iVar0 /*25*/].f_18 = 0;
				}
			}
			else if (Local_46[iVar0 /*25*/].f_17 != 0)
			{
				if (func_101(unk_0xBC25C936A095B5BA(), Local_46[iVar0 /*25*/], 100f) || func_101(Local_45[0 /*11*/], Local_46[iVar0 /*25*/], 120f))
				{
					Local_46[iVar0 /*25*/].f_18 = func_194(&(Local_46[iVar0 /*25*/].f_11), Local_46[iVar0 /*25*/].f_17, Local_46[iVar0 /*25*/].f_13, Local_46[iVar0 /*25*/].f_16, 1);
				}
			}
		}
		iVar0++;
	}
}

int func_194(var uParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4)//Position - 0x6F36
{
	if (!unk_0x724D816EA203A79E(*uParam0))
	{
		if (func_146(iParam1, "Loading", 0))
		{
			*uParam0 = unk_0xB6896943DA475493(iParam1, vParam2, true, true, 0);
			if (unk_0x724D816EA203A79E(*uParam0))
			{
				unk_0x019CE76D5286C95C(*uParam0, fParam3);
				unk_0x46913653D1C7E82E(*uParam0);
				if (bParam4)
				{
					func_145(iParam1, 1);
				}
				return 1;
			}
		}
	}
	else if (func_10(*uParam0))
	{
		return 1;
	}
	return 0;
}

float func_195(int iParam0, int iParam1, bool bParam2)//Position - 0x6FA3
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

void func_196(int iParam0, int iParam1, int iParam2)//Position - 0x7001
{
	if (iParam0->f_5 != 1 || iParam2)
	{
		if (!func_334(Local_45[func_165(iParam1) /*11*/]))
		{
			if (!bLocal_52)
			{
				if (unk_0x724D816EA203A79E(Local_45[func_165(iParam1) /*11*/]))
				{
					if (func_175(*iParam0, Local_45[func_165(iParam1) /*11*/], 140f, 0) || func_151(Local_45[func_165(iParam1) /*11*/], *iParam0, 3f, 1))
					{
						func_170(iParam0, 0);
						bLocal_52 = true;
						return;
					}
					else
					{
						vLocal_54 = { unk_0x541C2AEF053615BC(Local_45[func_165(iParam1) /*11*/], true) };
						iParam0->f_1 = unk_0x105601648511CC64();
						iParam0->f_8 = iParam0->f_7;
						iParam0->f_5 = 1;
						iParam0->f_6 = 11;
					}
				}
				else
				{
					func_170(iParam0, 0);
				}
			}
		}
		else if (Local_45[func_165(iParam1) /*11*/].f_6 == 22)
		{
			if (func_175(*iParam0, Local_45[func_165(iParam1) /*11*/], 140f, 0) && func_151(Local_45[func_165(iParam1) /*11*/], unk_0xBC25C936A095B5BA(), 15f, 1))
			{
				iParam0->f_5 = 1;
				iParam0->f_6 = 21;
			}
		}
		else if (Local_45[func_165(iParam1) /*11*/].f_6 == 5 || Local_45[func_165(iParam1) /*11*/].f_6 == 7)
		{
			if (func_151(Local_45[func_165(iParam1) /*11*/], *iParam0, 10f, 1))
			{
				func_170(iParam0, 0);
			}
		}
		if (func_207(*iParam0))
		{
			func_163(iParam0);
			iParam0->f_1 = unk_0x105601648511CC64();
			iParam0->f_8 = iParam0->f_7;
			iParam0->f_5 = 1;
			iParam0->f_6 = 21;
		}
		if (iParam0->f_A == 0 && iParam0->f_7 == 4)
		{
			if (func_155(iParam0))
			{
				if (unk_0x62F3A07C43FFB568(*iParam0, iLocal_43, 0))
				{
					unk_0x10790F4A9247B707(*iParam0, unk_0xBC25C936A095B5BA(), 0, 0f, 0f, 0f, 10f, 100, 1, -957453492);
					unk_0x45E676EE6DA3D155(iLocal_43, 2000f);
					iLocal_55 = unk_0x105601648511CC64();
					iParam0->f_1 = unk_0x105601648511CC64();
					iParam0->f_6 = 16;
					iParam0->f_5 = 1;
				}
			}
		}
		if (func_198(*iParam0, 1, 70f, 170f, 0, 1, 0, 0) && !func_197(iParam0))
		{
			if (unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), 6))
			{
				if (func_36(iLocal_43))
				{
					if (unk_0x62F3A07C43FFB568(*iParam0, iLocal_43, 0))
					{
						if (unk_0x8910237449BB6F79(iLocal_43) > 5f)
						{
							if (iParam1 == 0)
							{
								unk_0x1A06AE15BF21D407(*iParam0, iLocal_43, unk_0xBC25C936A095B5BA(), 8, 30f, 786469, 300f, 2f, 1);
								iParam0->f_6 = 7;
								unk_0xEE7131C3C73E7282(Local_45[func_165(iParam1) /*11*/], -1);
								Local_45[func_165(iParam1) /*11*/].f_6 = 10;
								Local_45[func_165(iParam1) /*11*/].f_5 = 1;
								iParam0->f_5 = 1;
								iParam0->f_1 = unk_0x105601648511CC64();
								Local_45[func_165(iParam1) /*11*/].f_1 = unk_0x105601648511CC64();
							}
							else
							{
								unk_0xEE7131C3C73E7282(*iParam0, -1);
								iParam0->f_6 = 12;
								unk_0x1A06AE15BF21D407(Local_45[func_165(iParam1) /*11*/], iLocal_43, unk_0xBC25C936A095B5BA(), 8, 30f, 786469, 300f, 2f, 1);
								Local_45[func_165(iParam1) /*11*/].f_6 = 5;
								Local_45[func_165(iParam1) /*11*/].f_5 = 1;
								iParam0->f_5 = 1;
								iParam0->f_1 = unk_0x105601648511CC64();
								Local_45[func_165(iParam1) /*11*/].f_1 = unk_0x105601648511CC64();
							}
						}
						else
						{
							func_170(iParam0, 0);
							if (unk_0x724D816EA203A79E(Local_45[func_165(iParam1) /*11*/]))
							{
								if (func_175(Local_45[func_165(iParam1) /*11*/], unk_0xBC25C936A095B5BA(), 1126825984, 0))
								{
									func_170(&(Local_45[func_165(iParam1) /*11*/]), 0);
								}
							}
						}
						unk_0x5502708AECB47F5D(*iParam0);
					}
					else
					{
						func_170(iParam0, 0);
						if (unk_0x724D816EA203A79E(Local_45[func_165(iParam1) /*11*/]))
						{
							if (func_171(Local_45[func_165(iParam1) /*11*/], *iParam0, 1126825984, 1, 250, 7))
							{
								func_170(&(Local_45[func_165(iParam1) /*11*/]), 0);
							}
						}
					}
				}
			}
			else
			{
				iParam0->f_1 = unk_0x105601648511CC64();
				iParam0->f_8 = iParam0->f_7;
				iParam0->f_5 = 1;
				iParam0->f_6 = 21;
				unk_0x5502708AECB47F5D(*iParam0);
				if (func_171(Local_45[func_165(iParam1) /*11*/], *iParam0, 1126825984, 1, 250, 7))
				{
					Local_45[func_165(iParam1) /*11*/].f_1 = unk_0x105601648511CC64();
					Local_45[func_165(iParam1) /*11*/].f_8 = iParam0->f_7;
					Local_45[func_165(iParam1) /*11*/].f_5 = 1;
					Local_45[func_165(iParam1) /*11*/].f_6 = 21;
					unk_0x5502708AECB47F5D(Local_45[func_165(iParam1) /*11*/]);
				}
			}
			iParam0->f_5 = 1;
		}
		else if (unk_0xA4813477CC5DD00F(*iParam0))
		{
			func_163(iParam0);
			unk_0x5558ED6D4A2DEC93(*iParam0, unk_0xBC25C936A095B5BA(), 500f, -1, 0, 1);
			iParam0->f_6 = 2;
			iParam0->f_5 = 1;
			iParam0->f_1 = unk_0x105601648511CC64();
		}
		if (unk_0x2CDE18D6C89522AD(*iParam0))
		{
			if (func_10(Local_46[iLocal_48 /*25*/].f_11))
			{
				if (unk_0xE7E55F7532DEE345(Local_46[iLocal_48 /*25*/].f_11))
				{
					unk_0x17175087F2DB6AC8(Local_46[iLocal_48 /*25*/].f_11, 1, 0);
					unk_0x31C1FC8FA0753412(Local_46[iLocal_48 /*25*/].f_11, 1, unk_0xF90427F311003E57(*iParam0), 0, 1, 1, 0);
				}
			}
		}
	}
	if (iParam0->f_5 != 1)
	{
		if (func_334(Local_45[func_165(iParam1) /*11*/]))
		{
			if (unk_0xA4813477CC5DD00F(Local_45[func_165(iParam1) /*11*/]))
			{
				func_163(iParam0);
				unk_0x5558ED6D4A2DEC93(*iParam0, unk_0xBC25C936A095B5BA(), 120f, -1, 0, 0);
				iParam0->f_1 = unk_0x105601648511CC64();
				iParam0->f_6 = 7;
				iParam0->f_5 = 1;
			}
		}
	}
}

int func_197(var uParam0)//Position - 0x7529
{
	if ((unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), unk_0xA4455714F3DCE207(*uParam0, 0f, -2f, 0f), 2f, 3f, 2f, false, true, 0) && !unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), 6)) && unk_0xB3B744D2D9D757D1(unk_0xBC25C936A095B5BA()))
	{
		return 1;
	}
	return 0;
}

int func_198(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x7571
{
	vector3 vVar0;
	
	if (func_10(unk_0xBC25C936A095B5BA()) && func_10(iParam0))
	{
		if (unk_0xD9C1758D86688CEA(iParam0, unk_0xBC25C936A095B5BA(), 1))
		{
			return 1;
		}
		if (func_203(iParam0, bParam1, bParam5, bParam6, bParam7))
		{
			return 1;
		}
		if (!unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), 6))
		{
			if (unk_0xABB2AFD7539464EA(unk_0xBC25C936A095B5BA()))
			{
				vVar0 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true) - unk_0x541C2AEF053615BC(iParam0, true) };
				if ((((vVar0.x * vVar0.x) + (vVar0.y * vVar0.y)) + (vVar0.z * vVar0.z)) <= 5f)
				{
					return func_202(unk_0xBC25C936A095B5BA(), iParam0, fParam2);
				}
			}
		}
		if (bParam4)
		{
			return 0;
		}
		else if (func_199(iParam0, fParam3))
		{
			return 1;
		}
	}
	return 0;
}

int func_199(int iParam0, float fParam1)//Position - 0x762C
{
	float fVar0;
	
	if (func_10(unk_0xBC25C936A095B5BA()) && func_10(iParam0))
	{
		if (func_201(iParam0) || unk_0x425BEBAA53B39EBF(unk_0xB5CEFD608600A09F(), iParam0))
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
				if (func_200(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_200(int iParam0, float fParam1)//Position - 0x76A2
{
	return func_171(iParam0, unk_0xBC25C936A095B5BA(), fParam1, 1, 250, 7);
}

int func_201(int iParam0)//Position - 0x76BA
{
	if (unk_0xDF25D3BB3759E7D1(unk_0xB5CEFD608600A09F(), iParam0) && unk_0x72C9157015C2151B(unk_0xBC25C936A095B5BA(), 6))
	{
		return 1;
	}
	return 0;
}

bool func_202(int iParam0, int iParam1, float fParam2)//Position - 0x76E2
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { unk_0xF90427F311003E57(iParam0) };
	vVar1 = { unk_0x541C2AEF053615BC(iParam1, true) - unk_0x541C2AEF053615BC(iParam0, true) };
	return (((vVar0.x * vVar1.x) + (vVar0.y * vVar1.y)) / SYSTEM::VDIST(vVar1, 0f, 0f, 0f)) > SYSTEM::COS(fParam2);
}

int func_203(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x7729
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
	if (func_10(unk_0xBC25C936A095B5BA()) && func_10(iParam0))
	{
		unk_0x9CDD10270A1ACF6F(unk_0xBC25C936A095B5BA(), &iVar2, 1);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_206(iParam0, bParam1, fVar0, fVar1))
			{
				return 1;
			}
			if (func_204(iParam0, fVar1, bParam3, bParam4))
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
					if (unk_0x04880508C862E589(unk_0x541C2AEF053615BC(iParam0, true), fVar0, 1))
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
				if (func_206(iParam0, bParam1, fVar0, fVar1))
				{
					return 1;
				}
			}
			if (func_204(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_204(int iParam0, float fParam1, bool bParam2, bool bParam3)//Position - 0x7824
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { unk_0x541C2AEF053615BC(iParam0, true) };
	vVar1 = { vVar0 };
	vVar0.x = (vVar0.x - fParam1);
	vVar0.y = (vVar0.y - fParam1);
	vVar0.z = (vVar0.z - fParam1);
	vVar1.x = (vVar1.x + fParam1);
	vVar1.y = (vVar1.y + fParam1);
	vVar1.z = (vVar1.z + fParam1);
	if (bParam2)
	{
		if (((unk_0x882DD30F83E61E2F(unk_0x541C2AEF053615BC(iParam0, true), joaat("weapon_grenade"), fParam1, 1) || unk_0x882DD30F83E61E2F(unk_0x541C2AEF053615BC(iParam0, true), joaat("weapon_molotov"), fParam1, 1)) || unk_0x882DD30F83E61E2F(unk_0x541C2AEF053615BC(iParam0, true), joaat("weapon_smokegrenade"), fParam1, 1)) || unk_0x882DD30F83E61E2F(unk_0x541C2AEF053615BC(iParam0, true), joaat("weapon_stickybomb"), 5f, 1))
		{
			if (bParam3)
			{
				if (func_205(iParam0, fParam1))
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
			if (func_205(iParam0, fParam1))
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

int func_205(int iParam0, float fParam1)//Position - 0x7930
{
	var uVar0;
	vector3 vVar1;
	
	if ((((unk_0x532D2AB42B013CC0(iParam0, joaat("weapon_grenade"), fParam1, &vVar1, &uVar0, 0) || unk_0x532D2AB42B013CC0(iParam0, joaat("weapon_smokegrenade"), fParam1, &vVar1, &uVar0, 0)) || unk_0x532D2AB42B013CC0(iParam0, joaat("weapon_bzgas"), fParam1, &vVar1, &uVar0, 0)) || unk_0x532D2AB42B013CC0(iParam0, joaat("weapon_stickybomb"), fParam1, &vVar1, &uVar0, 0)) || unk_0x532D2AB42B013CC0(iParam0, joaat("weapon_molotov"), fParam1, &vVar1, &uVar0, 0))
	{
		if (func_153(iParam0, vVar1, 90f, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_206(int iParam0, bool bParam1, float fParam2, float fParam3)//Position - 0x79C5
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
	if (unk_0x04880508C862E589(unk_0x541C2AEF053615BC(iParam0, true), fParam2, 1))
	{
		return 1;
	}
	return 0;
}

int func_207(int iParam0)//Position - 0x7A0D
{
	if (func_151(iParam0, unk_0xBC25C936A095B5BA(), 6f, 1))
	{
		if (!unk_0x5237AF95232D78C5(iParam0, 0))
		{
			if (unk_0xE921F8171F0733B3(iParam0, unk_0xBC25C936A095B5BA()))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_208()//Position - 0x7A41
{
	if (func_36(Local_199))
	{
		if (func_151(unk_0xBC25C936A095B5BA(), Local_199, 100f, 1) && !iLocal_194)
		{
			unk_0x3B6B082832176FA5(joaat("trash"), 3);
			if (!unk_0x317B2443006524C2(joaat("trash")))
			{
				iLocal_194 = 1;
			}
		}
		else if (!func_151(unk_0xBC25C936A095B5BA(), Local_199, 120f, 1) && iLocal_194)
		{
			unk_0xDC5D58521808C640(joaat("trash"));
			iLocal_194 = 0;
		}
	}
}

void func_209(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, vector3 vParam5, int iParam6, bool bParam7, float fParam8)//Position - 0x7AB8
{
	if (func_36(*iParam0))
	{
		switch (*iParam2)
		{
			case 0:
				if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), *iParam0, 0))
				{
					func_7(iParam3);
					if (func_100(func_108(func_76()), 0, 0))
					{
						unk_0xBB5629E7D44054AE(func_108(func_76()));
					}
					if (*iParam0 == iParam6)
					{
						*iParam2 = 1;
					}
					else
					{
						*iParam2 = 2;
					}
				}
				else if (func_214(*iParam0) || func_213(*iParam0))
				{
					func_7(iParam3);
					if (func_100(func_108(func_76()), 0, 0))
					{
						unk_0xBB5629E7D44054AE(func_108(func_76()));
					}
					*iParam2 = 3;
				}
				else
				{
					if (func_100(func_109(func_76(), bParam7), 0, 0))
					{
						unk_0xBB5629E7D44054AE(func_109(func_76(), bParam7));
					}
					if (func_76() != 33)
					{
						func_211(iParam0);
					}
					else
					{
						func_210(iParam0, iParam1);
					}
				}
				break;
			
			case 2:
			case 1:
				if ((!unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), *iParam0, 0) && !func_214(*iParam0)) && !func_213(*iParam0))
				{
					func_7(iParam4);
					if (!unk_0x4DBCE270B354E123(*iParam0, vParam5, fParam8, fParam8, 2f, false, true, 2))
					{
						func_119(iParam3, *iParam0, 1);
					}
					*iParam2 = 0;
				}
				break;
			
			case 3:
				if (!func_214(*iParam0) && !func_213(*iParam0))
				{
					func_7(iParam4);
					if (!unk_0x4DBCE270B354E123(*iParam0, vParam5, fParam8, fParam8, 2f, false, true, 2))
					{
						func_119(iParam3, *iParam0, 1);
					}
					*iParam2 = 0;
				}
				break;
		}
	}
	else if (func_76() != 33)
	{
		func_211(iParam0);
	}
	else
	{
		func_210(iParam0, iParam1);
	}
}

void func_210(int iParam0, var uParam1)//Position - 0x7C6C
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!bLocal_28)
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
			if (iVar0 != *iParam0)
			{
				if (func_36(iVar0))
				{
					iVar1 = unk_0x6F79ECA8C83E4357(iVar0);
					if (iVar1 == joaat("trash"))
					{
						*uParam1 = *iParam0;
						func_6(iParam0);
						*iParam0 = iVar0;
						func_35(*iParam0, 1);
						func_35(*uParam1, 3);
						if (!unk_0x5CAE759AE8219D20(*iParam0))
						{
							unk_0x77815D3407C6700D(*iParam0, true, 1);
						}
					}
					else if (iVar1 == joaat("towtruck"))
					{
						iVar2 = unk_0x9A61F74401879226(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0));
						if (func_10(iVar2))
						{
							iVar0 = unk_0x233ED4CD1F1A42C1(iVar2);
							if (unk_0x6F79ECA8C83E4357(iVar0) == joaat("trash"))
							{
								*uParam1 = *iParam0;
								func_6(iParam0);
								*iParam0 = iVar0;
								func_35(*iParam0, 1);
								func_35(*uParam1, 3);
								if (!unk_0x5CAE759AE8219D20(*iParam0))
								{
									unk_0x77815D3407C6700D(*iParam0, true, 1);
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_211(int iParam0)//Position - 0x7D59
{
	int iVar0;
	
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
		if (iVar0 != *iParam0)
		{
			if (func_36(iVar0))
			{
				if (unk_0x6F79ECA8C83E4357(iVar0) == func_212(func_76()))
				{
					func_6(iParam0);
					*iParam0 = iVar0;
					func_35(*iParam0, 1);
					unk_0x77815D3407C6700D(*iParam0, true, 1);
				}
			}
		}
	}
}

int func_212(int iParam0)//Position - 0x7DB6
{
	int iVar0;
	
	switch (iParam0)
	{
		case 33:
			iVar0 = joaat("trash");
			break;
		
		case 34:
			iVar0 = joaat("towtruck");
			break;
		
		case 78:
			iVar0 = 0;
			break;
		
		case 80:
		case 81:
		case 82:
			iVar0 = joaat("gauntlet");
			break;
	}
	return iVar0;
}

int func_213(int iParam0)//Position - 0x7E0F
{
	int iVar0;
	int iVar1;
	
	if ((func_334(unk_0xBC25C936A095B5BA()) && unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0)) && func_36(iParam0))
	{
		iVar0 = unk_0x3E12B546F3F2597A();
		if (func_36(iVar0))
		{
			iVar1 = unk_0x6F79ECA8C83E4357(iVar0);
			if ((iVar1 == joaat("cargobob") || iVar1 == joaat("cargobob2")) || iVar1 == joaat("cargobob3"))
			{
				if (unk_0x3E7A19282640095F(iVar0))
				{
					if (unk_0xAEA754DE0733E937(iVar0, iParam0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_214(int iParam0)//Position - 0x7E92
{
	int iVar0;
	int iVar1;
	
	if ((func_334(unk_0xBC25C936A095B5BA()) && unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0)) && func_36(iParam0))
	{
		iVar0 = unk_0x3E12B546F3F2597A();
		if (func_36(iVar0))
		{
			iVar1 = unk_0x6F79ECA8C83E4357(iVar0);
			if (iVar1 == joaat("towtruck") || iVar1 == joaat("towtruck2"))
			{
				if (unk_0x27C9F6C1391327CF(iVar0, iParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_215()//Position - 0x7EFE
{
	func_209(&iLocal_200, &iLocal_201, &iLocal_71, &iLocal_183, &iLocal_182, vLocal_186, Local_199, 0, 1090519040);
	func_149();
	func_232();
	func_208();
	switch (iLocal_69)
	{
		case 0:
			if (func_116(iLocal_68, bLocal_28))
			{
				if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) == 0 && !func_231())
				{
					func_111(&iLocal_182, vLocal_186, 1);
					func_115("PRA_TAKBACK", &iLocal_181);
				}
				iLocal_69 = 1;
			}
			break;
		
		case 1:
			func_114(&iLocal_182, vLocal_186, &iLocal_70, iLocal_71, &iLocal_181, &iLocal_195);
			func_221();
			if (func_219(iLocal_200, vLocal_186, &iLocal_182, iLocal_70, iLocal_71, &iLocal_181, &iLocal_196, 0, 0, 1086324736))
			{
				unk_0x1D1C393C7689E5A6(8f, 5f, 4);
				iLocal_69 = 2;
			}
			break;
		
		case 2:
			func_216();
			func_7(&iLocal_182);
			func_7(&iLocal_183);
			if (func_110(1077936128, 1))
			{
				func_104(0);
			}
			break;
		
		case 3:
			if (func_36(iLocal_200))
			{
				if (!unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_200, 0))
				{
					unk_0xBD53A029D0155A42(unk_0xBC25C936A095B5BA(), iLocal_200, -1);
				}
				else
				{
					func_103(iLocal_200, vLocal_186, 146.5443f, 0, 1);
					func_39(1, 1, 1);
					iLocal_69 = 1;
				}
			}
			break;
	}
}

void func_216()//Position - 0x805D
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = func_78(iVar0);
		if (!unk_0x36CEFBE9B745A58D(iVar1))
		{
			if (func_218(iVar1))
			{
				func_217(iVar1);
			}
		}
		iVar0++;
	}
}

int func_217(int iParam0)//Position - 0x8099
{
	int iVar0;
	
	return 0;
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		iVar0 = func_29(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_78(iVar0) != iParam0)
		{
			return 0;
		}
		if (!unk_0xFA30DFD0084E92FE(Global_15B7A, iVar0))
		{
			return 0;
		}
		unk_0x7CB6FD92BE491AD9(&Global_15B7A, iVar0);
		return 1;
	}
	return 0;
}

int func_218(int iParam0)//Position - 0x80F1
{
	int iVar0;
	
	return 0;
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		iVar0 = func_29(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_78(iVar0) != iParam0)
		{
			return 0;
		}
		if (unk_0xFA30DFD0084E92FE(Global_15B7A, iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_219(int iParam0, vector3 vParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, float fParam9)//Position - 0x813A
{
	if ((iParam4 == 1 || iParam4 == 2) || iParam4 == 3)
	{
		if (iParam3 == 0)
		{
			func_111(iParam2, vParam1, 1);
			if (!bParam8)
			{
				if (func_36(iParam0))
				{
					if (unk_0x4DBCE270B354E123(iParam0, vParam1, fParam9, fParam9, 2f, true, true, 0))
					{
						return 1;
					}
				}
			}
			else if (unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), vParam1, fParam9, fParam9, 2f, true, true, 2))
			{
				return 1;
			}
			if (func_100(func_108(func_76()), 0, 0))
			{
				unk_0xBB5629E7D44054AE(func_108(func_76()));
			}
			if (!func_220())
			{
				func_115(func_109(func_76(), bParam7), iParam5);
			}
		}
	}
	else if (iParam3 == 0)
	{
		if (!*iParam6)
		{
			if (func_100(func_109(func_76(), 0), 0, 0))
			{
				unk_0xBB5629E7D44054AE(func_109(func_76(), 0));
			}
			func_99(func_108(func_76()), 7500, 0);
			*iParam6 = 1;
		}
	}
	return 0;
}

bool func_220()//Position - 0x822D
{
	return Global_16B4F.f_141 > 0;
}

void func_221()//Position - 0x823E
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar2 = func_78(iVar0);
		if (!unk_0x36CEFBE9B745A58D(iVar2))
		{
			if (func_77(iVar2, 0))
			{
				if (!bVar1)
				{
					if (func_151(unk_0xBC25C936A095B5BA(), iVar2, 5f, 1))
					{
						if (!func_231())
						{
							func_226(iVar0);
							bVar1 = true;
						}
					}
				}
				if (!iLocal_374[iVar0])
				{
					if (iVar0 == 0)
					{
						func_92(&uLocal_205, iVar0, iVar2, "MICHAEL", 0, 1);
					}
					else if (iVar0 == 1)
					{
						func_92(&uLocal_205, iVar0, iVar2, "FRANKLIN", 0, 1);
					}
					else if (iVar0 == 2)
					{
						func_92(&uLocal_205, iVar0, iVar2, "TREVOR", 0, 1);
					}
					iLocal_374[iVar0] = 1;
				}
			}
			if (!func_218(iVar2))
			{
				if (func_77(iVar2, 0))
				{
					if (func_225(iVar2) || func_223(iVar2))
					{
						if (func_222(iVar2, 0))
						{
							unk_0x77815D3407C6700D(iVar2, true, 1);
							unk_0x2E35C4FA5F0ED22F(iVar2, true);
							unk_0xA4E856A8CD53B8DF(iVar2);
						}
					}
				}
			}
			else if (unk_0xB248FAA35ED47DB9(iVar2, 1))
			{
				if (func_225(iVar2))
				{
					if (unk_0xF4FCC3C1048FF2AB(iVar2, -1273030092) != 1 && unk_0xF4FCC3C1048FF2AB(iVar2, -1273030092) != 0)
					{
						if (unk_0x37718415CE714A5B(623.3781f, -172.26f, 1700.732f, -2115.843f))
						{
							unk_0x509F549022512095(iVar2, unk_0x9FE9D386222EEE47(iVar2, 0), vLocal_186, 20f, 0, 0, 34340901, 2f, 10f);
						}
						else
						{
							unk_0x4B656426561BA934(623.3781f, -172.26f, 1700.732f, -2115.843f);
						}
					}
				}
				else if (func_223(iVar2))
				{
					if (func_36(Local_199))
					{
						if (!func_151(iVar2, Local_199, 17f, 1))
						{
							if (unk_0xF4FCC3C1048FF2AB(iVar2, -1273030092) != 1 && unk_0xF4FCC3C1048FF2AB(iVar2, -1273030092) != 0)
							{
								unk_0x488EB206498BC561(iVar2, unk_0x9FE9D386222EEE47(iVar2, 0), Local_199, 3, 20f, 786468, 2f, 0.5f, 1);
							}
						}
					}
				}
				else
				{
					func_217(iVar2);
				}
			}
		}
		iVar0++;
	}
}

int func_222(int iParam0, int iParam1)//Position - 0x844B
{
	int iVar0;
	
	return 0;
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		iVar0 = func_29(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_78(iVar0) != iParam0)
		{
			return 0;
		}
		if (unk_0xFA30DFD0084E92FE(Global_15B7A, iVar0))
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == unk_0xBC25C936A095B5BA())
			{
				return 0;
			}
		}
		if (unk_0xFA30DFD0084E92FE(Global_15B79, iVar0))
		{
			unk_0x97AA3135A3018C3C(iParam0, 0, 0);
			unk_0xB71D41C0310C93DE(iParam0, 0, 1);
			unk_0xF0059F27F7BB6680(&Global_15B7A, iVar0);
			return 1;
		}
	}
	return 0;
}

int func_223(int iParam0)//Position - 0x84D2
{
	int iVar0;
	
	if (!func_224())
	{
		if ((!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0)) && unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) == 0)
		{
			iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
			if (func_36(iVar0))
			{
				if (unk_0x5E87CB0495C97732(iVar0, joaat("trash")))
				{
					return 0;
				}
				if (unk_0x62F3A07C43FFB568(iParam0, iVar0, 0) && unk_0x3187EF5798B5D209(iVar0, -1, 0) == iParam0)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_224()//Position - 0x8552
{
	if (!unk_0x7AF0088ABFA713B6())
	{
		return Global_161D2.f_2C == 1;
	}
	return 0;
}

int func_225(int iParam0)//Position - 0x856E
{
	if (!func_224())
	{
		if ((unk_0x724D816EA203A79E(Local_199) && unk_0xE59B7F5A03335350(Local_199, 0)) && !unk_0x4DBCE270B354E123(Local_199, vLocal_186, 2f, 2f, 2f, false, true, 0))
		{
			if ((!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), Local_199, 0)) && unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) == 0)
			{
				if (unk_0x62F3A07C43FFB568(iParam0, Local_199, 0) && unk_0x3187EF5798B5D209(Local_199, -1, 0) == iParam0)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_226(int iParam0)//Position - 0x85FC
{
	if (iLocal_68 > 1)
	{
		if (iLocal_70 > 0)
		{
			if (!unk_0xFA30DFD0084E92FE(Local_73[iParam0 /*8*/].f_7, 0) && iLocal_71 == 1)
			{
				if (!unk_0x4B8E3E5901E59EB8())
				{
					if (func_230(&uLocal_205, cLocal_204, Local_73[iParam0 /*8*/][0], 8, 0, 0, 0))
					{
						unk_0xF0059F27F7BB6680(&(Local_73[iParam0 /*8*/].f_7), 0);
					}
				}
			}
		}
		else
		{
			if ((unk_0xFA30DFD0084E92FE(Local_73[iParam0 /*8*/].f_7, 0) && !unk_0xFA30DFD0084E92FE(Local_73[iParam0 /*8*/].f_7, 1)) && iLocal_71 == 1)
			{
				if (!unk_0x4B8E3E5901E59EB8())
				{
					if (func_230(&uLocal_205, cLocal_204, Local_73[iParam0 /*8*/][1], 7, 0, 0, 0))
					{
						unk_0xF0059F27F7BB6680(&(Local_73[iParam0 /*8*/].f_7), 1);
					}
				}
			}
			if (!unk_0xFA30DFD0084E92FE(Local_73[iParam0 /*8*/].f_7, 5))
			{
				if (func_229(iLocal_200, vLocal_186, 1) < 15f && iLocal_71 == 1)
				{
					if (!unk_0x4B8E3E5901E59EB8())
					{
						if (func_230(&uLocal_205, cLocal_204, Local_73[iParam0 /*8*/][5], 7, 0, 0, 0))
						{
							unk_0xF0059F27F7BB6680(&(Local_73[iParam0 /*8*/].f_7), 5);
						}
					}
				}
			}
			switch (func_29(unk_0xBC25C936A095B5BA()))
			{
				case 0:
					if (iParam0 == 1)
					{
						if (!func_228(2))
						{
							func_227(iParam0, 2);
						}
					}
					else if (iParam0 == 2)
					{
						if (!func_228(4))
						{
							func_227(iParam0, 4);
						}
					}
					break;
				
				case 1:
					if (iParam0 == 0)
					{
						if (!func_228(2))
						{
							func_227(iParam0, 2);
						}
					}
					else if (iParam0 == 2)
					{
						if (!func_228(3))
						{
							func_227(iParam0, 3);
						}
					}
					break;
				
				case 2:
					if (iParam0 == 1)
					{
						if (!func_228(3))
						{
							func_227(iParam0, 3);
						}
					}
					else if (iParam0 == 0)
					{
						if (!func_228(4))
						{
							func_227(iParam0, 4);
						}
					}
					break;
				}
			}
	}
}

void func_227(int iParam0, int iParam1)//Position - 0x87DB
{
	if (!unk_0xFA30DFD0084E92FE(Local_73[iParam0 /*8*/].f_7, iParam1))
	{
		if (iLocal_375 != -1)
		{
			if (!unk_0x4B8E3E5901E59EB8())
			{
				if (func_230(&uLocal_205, cLocal_204, Local_73[iParam0 /*8*/][iParam1], 7, 0, 0, 0))
				{
					unk_0xF0059F27F7BB6680(&(Local_73[iParam0 /*8*/].f_7), iParam1);
				}
			}
		}
		else if (!func_231() && !unk_0x4B8E3E5901E59EB8())
		{
			iLocal_375 = unk_0x105601648511CC64();
		}
		else
		{
			iLocal_375 = -1;
		}
	}
}

int func_228(int iParam0)//Position - 0x8853
{
	if ((unk_0xFA30DFD0084E92FE(Local_73[0 /*8*/].f_7, iParam0) || unk_0xFA30DFD0084E92FE(Local_73[1 /*8*/].f_7, iParam0)) || unk_0xFA30DFD0084E92FE(Local_73[2 /*8*/].f_7, iParam0))
	{
		return 1;
	}
	return 0;
}

float func_229(int iParam0, vector3 vParam1, bool bParam2)//Position - 0x8899
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

bool func_230(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x88D3
{
	func_89(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_82(sParam2, iParam3, 0);
}

int func_231()//Position - 0x8921
{
	if (Global_3DB8 != 0 || unk_0xE6711F601F11B66B())
	{
		return 1;
	}
	return 0;
}

void func_232()//Position - 0x8943
{
	if (func_101(unk_0xBC25C936A095B5BA(), vLocal_186, 220f))
	{
		if (!iLocal_203 && !func_101(unk_0xBC25C936A095B5BA(), vLocal_186, 100f))
		{
			iLocal_203 = func_147(&iLocal_202, joaat("cavalcade2"), 1370.912f, -2060.055f, 50.9983f, 312.8686f, 1);
		}
	}
	else if (func_101(unk_0xBC25C936A095B5BA(), vLocal_186, 240f))
	{
		if (iLocal_203)
		{
			func_6(&iLocal_202);
			iLocal_203 = 0;
		}
	}
}

void func_233()//Position - 0x89CC
{
	func_209(&iLocal_200, &iLocal_201, &iLocal_71, &iLocal_183, &iLocal_182, vLocal_186, Local_199, 0, 1090519040);
	func_208();
	func_149();
	switch (iLocal_69)
	{
		case 0:
			if (func_116(iLocal_68, bLocal_28))
			{
				func_119(&iLocal_182, Local_199, 1);
				func_115("PRA_GOVAN", &iLocal_181);
				iLocal_69 = 1;
			}
			break;
		
		case 1:
			func_221();
			if (func_36(Local_199))
			{
				func_236(&uLocal_56, Local_199, 0, 0, 1, 1, 1);
			}
			if (!bLocal_190)
			{
				if (func_334(Local_197) && unk_0xA4813477CC5DD00F(Local_197))
				{
					func_235();
				}
				if (func_334(Local_198) && unk_0xA4813477CC5DD00F(Local_198))
				{
					func_235();
				}
			}
			if (func_36(iLocal_200))
			{
				if ((iLocal_71 == 1 || iLocal_71 == 2) || iLocal_71 == 3)
				{
					unk_0x1D1C393C7689E5A6(5f, 5f, 4);
					iLocal_69 = 2;
				}
			}
			break;
		
		case 2:
			func_7(&iLocal_182);
			func_139(&uLocal_56, 0, 0);
			func_104(0);
			break;
		
		case 3:
			func_8(&Local_197);
			func_8(&Local_198);
			if (func_36(Local_199))
			{
				unk_0xBD53A029D0155A42(unk_0xBC25C936A095B5BA(), Local_199, -1);
			}
			func_234(1);
			func_39(1, 1, 1);
			iLocal_69 = 1;
			break;
	}
}

void func_234(bool bParam0)//Position - 0x8B23
{
	unk_0xE85B33FB221A23CD(1, bParam0);
	unk_0xE85B33FB221A23CD(2, bParam0);
	unk_0xE85B33FB221A23CD(3, bParam0);
	unk_0xE85B33FB221A23CD(4, bParam0);
	unk_0xE85B33FB221A23CD(5, bParam0);
	if (bParam0)
	{
		unk_0xDF53A66AEE1401AA(1f);
		unk_0xAEC867D0DBB7AFEB(5);
	}
	else
	{
		unk_0xAEC867D0DBB7AFEB(0);
		unk_0xDF53A66AEE1401AA(0f);
	}
}

void func_235()//Position - 0x8B6A
{
	char* sVar0;
	
	switch (func_25())
	{
		case 0:
			sVar0 = "FBI4_JACKSM";
			break;
		
		case 1:
			sVar0 = "FBI4_JACKSF";
			break;
		
		case 2:
			sVar0 = "FBI4_JACKST";
			break;
	}
	bLocal_190 = func_230(&uLocal_205, "FBIPRAU", sVar0, 7, 0, 0, 0);
	if (bLocal_190)
	{
		unk_0x1D1C393C7689E5A6(8f, 8f, 4);
	}
}

void func_236(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x8BD0
{
	func_237(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_237(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)//Position - 0x8BED
{
	func_238(uParam0, iParam1, vParam2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_238(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)//Position - 0x8C0B
{
	if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
	{
		func_139(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_239(uParam0, iParam1, vParam2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_239(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)//Position - 0x8C43
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
	if (func_140(iVar0))
	{
		func_264();
	}
	if (func_263(iParam1) && unk_0x8F6EAC9E7D6812D5(iParam1))
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
			if (func_258(uParam0, bParam5, bParam7, 0))
			{
				func_255(uParam0, iParam1, vParam2, iParam4);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_244(iVar0))
				{
					if ((unk_0xEAEFBBEC1AEA464B(uParam0->f_3) && !unk_0xEAEFBBEC1AEA464B(iVar0)) && unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
					{
						if ((iVar1 && !unk_0xF16DAFF595E80F7C()) && uParam6)
						{
							if (!func_140(iVar0))
							{
								func_243(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x3362CDE8460ED38B("CMN_HINT", iVar0))
								{
									func_242(1);
								}
							}
						}
					}
				}
			}
			else if (func_244(iVar0))
			{
				if (unk_0xEAEFBBEC1AEA464B(uParam0->f_3) && !unk_0xEAEFBBEC1AEA464B(iVar0))
				{
					if (((unk_0xD1DC4B08247A4317(iParam1) && iVar1) && !unk_0xF16DAFF595E80F7C()) && uParam6)
					{
						if (!func_140(iVar0))
						{
							func_243(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x3362CDE8460ED38B("CMN_HINT", iVar0))
							{
								func_242(1);
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
				if (func_140(sParam3))
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
						func_139(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xE3CA72BD77D43B09(unk_0xBC25C936A095B5BA()))
				{
					if (unk_0x3D875C2512206692(6) == 3 || unk_0x3D875C2512206692(6) == 4)
					{
						func_139(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x57379381A330B2FF(unk_0xBC25C936A095B5BA()))
				{
					if (unk_0x3D875C2512206692(4) == 3 || unk_0x3D875C2512206692(4) == 4)
					{
						func_139(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xD3A0CD3AD9C3D22A(unk_0xBC25C936A095B5BA()))
				{
					if (unk_0x3D875C2512206692(5) == 3 || unk_0x3D875C2512206692(5) == 4)
					{
						func_139(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x5CFC8E6CC224744A(unk_0xBC25C936A095B5BA()))
				{
					if (unk_0x3D875C2512206692(2) == 3 || unk_0x3D875C2512206692(2) == 4)
					{
						func_139(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x621126C4FACA4770() == 3 || unk_0x621126C4FACA4770() == 4)
				{
					func_139(uParam0, iVar0, 1);
				}
			}
			if (!func_258(uParam0, bParam5, bParam7, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_241(uParam0))
				{
					func_240(uParam0);
				}
			}
		}
	}
	else
	{
		func_139(uParam0, iVar0, 0);
	}
}

void func_240(var uParam0)//Position - 0x8FB0
{
	if (func_263(unk_0xBC25C936A095B5BA()))
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

int func_241(var uParam0)//Position - 0x9019
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

int func_242(bool bParam0)//Position - 0x9044
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

void func_243(char* sParam0, int iParam1)//Position - 0x90EE
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 0, true, iParam1);
}

int func_244(char* sParam0)//Position - 0x9105
{
	if (!func_245(1, 1, 0))
	{
		if ((!unk_0xF1734B55490E9045(sParam0) && func_140(sParam0)) || func_140("CMN_HINT"))
		{
			unk_0x7456702622C62EA0(1);
		}
		return 0;
	}
	switch (Global_8C41)
	{
		case 0:
		case 3:
			if (func_242(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_242(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_242(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_245(bool bParam0, bool bParam1, bool bParam2)//Position - 0x919E
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
	if (func_68(0))
	{
		return 0;
	}
	if (func_254())
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
	if ((func_253() || func_252(Global_440000.f_243FE)) || func_251())
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
			iVar1 = func_250(unk_0xBC25C936A095B5BA(), 0);
			if (((unk_0xE8E192A5EFE0253F(iVar0, iVar1) || (unk_0x6F79ECA8C83E4357(iVar0) == 562680400 && iVar1 != -1)) || (unk_0x6F79ECA8C83E4357(iVar0) == 1181327175 && iVar1 != -1)) || (((unk_0x6F79ECA8C83E4357(iVar0) == -1693015116 && iVar1 == 0) && func_249(iVar0, 10)) && unk_0x3EB14CBD49DA0017(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (func_246(unk_0xB5CEFD608600A09F()))
	{
		return 0;
	}
	return 1;
}

int func_246(int iParam0)//Position - 0x93EC
{
	if (iParam0 != func_248())
	{
		if (func_247(iParam0, 1, 1))
		{
			return Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1;
		}
		else if ((Global_140856 && iParam0 == unk_0xB5CEFD608600A09F()) && func_247(iParam0, 1, 0))
		{
			return Global_24FB5C[iParam0 /*406*/].f_131.f_1 != -1;
		}
	}
	return 0;
}

int func_247(int iParam0, bool bParam1, bool bParam2)//Position - 0x9452
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

int func_248()//Position - 0x949C
{
	return -1;
}

int func_249(int iParam0, int iParam1)//Position - 0x94A5
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

int func_250(int iParam0, int iParam1)//Position - 0x9507
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

var func_251()//Position - 0x958C
{
	return Global_255A46.f_10;
}

bool func_252(int iParam0)//Position - 0x959A
{
	return iParam0 == 51;
}

var func_253()//Position - 0x95A7
{
	return Global_255A46.f_F;
}

bool func_254()//Position - 0x95B5
{
	return unk_0x105601648511CC64() <= Global_43C1.f_1671 + 100;
}

void func_255(var uParam0, int iParam1, vector3 vParam2, int iParam3)//Position - 0x95CA
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
		func_139(uParam0, 0, 0);
	}
	if (func_15(vParam2, 0f, 0f, 0f, 0))
	{
		if (unk_0x386592AF38881675(iParam1))
		{
			iVar0 = unk_0x399F7937FFE4DEBF(iParam1);
			if (!unk_0x5237AF95232D78C5(iVar0, 0))
			{
				if (unk_0x15DBD981998D4FE1(iVar0))
				{
					if (!func_256())
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

bool func_256()//Position - 0x96DA
{
	return func_257(unk_0xB5CEFD608600A09F());
}

int func_257(int iParam0)//Position - 0x96EA
{
	if (unk_0x6F79ECA8C83E4357(unk_0xA95CF30C72EB526E(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_258(var uParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x9709
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
					if (func_262(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x105601648511CC64();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_261(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x105601648511CC64();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_261(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x105601648511CC64();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_262(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x105601648511CC64();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_241(uParam0))
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
						if (!func_262(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x105601648511CC64();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_261(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x105601648511CC64();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_261(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x105601648511CC64();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_262(bParam1, bParam2, bParam3))
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
					if (!func_262(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_261(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_261(bParam1, bParam2, bParam3) || unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
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
				else if (!func_262(bParam1, bParam2, bParam3))
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
						if (func_260(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_259(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1) || func_259(bParam1, bParam2, bParam3))
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
					else if (func_260(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_241(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_245(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_264();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_259(bool bParam0, bool bParam1, bool bParam2)//Position - 0x9A75
{
	if (!func_245(bParam0, bParam1, bParam2))
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

int func_260(bool bParam0, bool bParam1, bool bParam2)//Position - 0x9AC7
{
	if (!func_245(bParam0, bParam1, bParam2))
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

int func_261(bool bParam0, bool bParam1, bool bParam2)//Position - 0x9B10
{
	if (!func_245(bParam0, bParam1, bParam2))
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

int func_262(bool bParam0, bool bParam1, bool bParam2)//Position - 0x9B6F
{
	if (!func_245(bParam0, bParam1, bParam2))
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

int func_263(int iParam0)//Position - 0x9BC5
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

void func_264()//Position - 0x9C20
{
	unk_0xF0059F27F7BB6680(&Global_93C, 4);
}

void func_265()//Position - 0x9C30
{
	switch (iLocal_69)
	{
		case 0:
			if (func_116(iLocal_68, 0))
			{
				func_277();
				func_275(33);
				unk_0xAEC867D0DBB7AFEB(2);
				unk_0xDF53A66AEE1401AA(0.1f);
				if (func_350())
				{
					func_272(0, -1, 1);
					func_40(500, 1);
					iLocal_69 = 2;
				}
				else
				{
					if (func_32(0))
					{
						func_118(unk_0xBC25C936A095B5BA(), 1228.635f, -348.4277f, 68.0929f, 86.7244f);
						func_267(1228.635f, -348.4277f, 68.0929f, 1112014848, 12, 5000, 0, 0);
						func_40(500, 1);
					}
					func_266();
					if (iLocal_68 == 2)
					{
						iLocal_69 = 0;
					}
					else
					{
						iLocal_69 = 2;
					}
				}
			}
			break;
		
		case 2:
			func_104(0);
			break;
	}
}

void func_266()//Position - 0x9CF8
{
}

void func_267(vector3 vParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0x9D00
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
				func_269(0);
			}
			if (bParam4)
			{
				func_268();
			}
			SYSTEM::WAIT(0);
		}
		if (unk_0x105601648511CC64() < iVar1)
		{
		}
		unk_0xFD35AC7E0C27D42B(uVar0);
	}
}

void func_268()//Position - 0x9D70
{
	Global_4336.f_6 = 1;
}

void func_269(int iParam0)//Position - 0x9D7E
{
	if (!Global_389D.f_1 == 1)
	{
		if (func_68(0))
		{
			func_270(iParam0);
		}
		unk_0xF0059F27F7BB6680(&Global_93C, 2);
	}
}

void func_270(int iParam0)//Position - 0x9DA7
{
	if (Global_3943)
	{
		func_271(0, 0);
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
	if (!func_50())
	{
		Global_389D.f_1 = 3;
	}
}

void func_271(bool bParam0, bool bParam1)//Position - 0x9E17
{
	if (bParam0)
	{
		if (func_68(0))
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

void func_272(int iParam0, int iParam1, int iParam2)//Position - 0x9E8B
{
	if (func_350() && func_274())
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
		func_273(0);
	}
}

void func_273(int iParam0)//Position - 0x9F4F
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

bool func_274()//Position - 0x9F78
{
	return unk_0xFA30DFD0084E92FE(Global_16B1B.f_14, 13);
}

void func_275(int iParam0)//Position - 0x9F8C
{
	Global_15B7B = 0;
	switch (iParam0)
	{
		case 72:
			func_276(2);
			func_276(4);
			break;
		
		case 73:
			func_276(0);
			func_276(1);
			func_276(7);
			break;
		
		case 92:
			func_276(10);
			func_276(9);
			func_276(13);
			func_276(6);
			break;
		
		case 68:
			func_276(11);
			break;
		
		case 78:
			func_276(14);
			break;
		
		case 79:
			func_276(3);
			break;
		
		default:
			break;
	}
}

void func_276(int iParam0)//Position - 0xA01A
{
	unk_0xF0059F27F7BB6680(&Global_15B7B, iParam0);
}

void func_277()//Position - 0xA02C
{
	int iVar0;
	
	iVar0 = unk_0x3E12B546F3F2597A();
	if (unk_0x724D816EA203A79E(iVar0))
	{
		if (unk_0xE59B7F5A03335350(iVar0, 0))
		{
			func_278(iVar0, unk_0x541C2AEF053615BC(iVar0, true), unk_0x349C94FFF43E2979(iVar0), 24, 0);
		}
	}
}

void func_278(int iParam0, vector3 vParam1, float fParam2, int iParam3, bool bParam4)//Position - 0xA069
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
		func_325(iParam3);
		Var0.f_9 = 49;
		Var0.f_3B = 2;
		func_320(iParam0, &Var0);
		if (func_15(vParam1, 0f, 0f, 0f, 0))
		{
			vParam1 = { unk_0x541C2AEF053615BC(iParam0, true) };
			fParam2 = unk_0x349C94FFF43E2979(iParam0);
		}
		if (iParam3 == 24)
		{
			if (unk_0x56BEECB328B6D29D(unk_0x1377080E9B0BD993()) != joaat("vehicle_gen_controller"))
			{
				Global_11484 = unk_0x56BEECB328B6D29D(unk_0x1377080E9B0BD993());
			}
		}
		func_313(iParam3, &Var0, vParam1, fParam2, func_319(iParam0));
		func_279(iParam3, iParam0, 0);
	}
}

void func_279(int iParam0, int iParam1, int iParam2)//Position - 0xA192
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_310(&(Global_110A8.f_22B[0 /*21*/]), iParam0))
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
				Global_19B04.f_7F22.f_12C1 = func_299();
			}
			if (iParam1 != Global_110A8.f_8B[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_298(iParam0);
					if ((unk_0x724D816EA203A79E(iVar0) && unk_0xE59B7F5A03335350(iVar0, 0)) && iParam1 != iVar0)
					{
						func_280(iVar0, 145);
					}
				}
				Global_11432 = iParam1;
				Global_11433 = iParam0;
				Global_11434 = iParam2;
			}
		}
	}
}

void func_280(int iParam0, int iParam1)//Position - 0xA2AF
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_281(iParam0))
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
	func_320(iParam0, &(Global_19B04.f_7F22.f_1586));
}

int func_281(int iParam0)//Position - 0xA4B1
{
	if ((((((((((!unk_0x724D816EA203A79E(iParam0) || !unk_0xE59B7F5A03335350(iParam0, 0)) || func_296(iParam0, 0, 0)) || func_296(iParam0, 1, 0)) || func_296(iParam0, 2, 0)) || func_319(iParam0) != 145) || func_295(iParam0)) || func_294(iParam0)) || func_293(iParam0)) || func_292(iParam0)) || !func_282(unk_0x6F79ECA8C83E4357(iParam0)))
	{
		if (func_294(iParam0))
		{
		}
		if (func_294(iParam0))
		{
		}
		if (func_296(iParam0, 0, 0))
		{
		}
		if (func_296(iParam0, 1, 0))
		{
		}
		if (func_296(iParam0, 2, 0))
		{
		}
		if (func_319(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_282(int iParam0)//Position - 0xA58E
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_283(iParam0, 0))
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

int func_283(int iParam0, bool bParam1)//Position - 0xA73F
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
		if (!func_291())
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
		if ((((!func_290() && !func_289()) && !func_288()) && !func_287()) && !func_291())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xF49912B78E2591B6() || unk_0x8ACB0C3FACC09467()) || unk_0xF7E138CFA19B55E7())
		{
		}
		else if (!func_288())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_286(iParam0))
		{
			return 0;
		}
	}
	if (!func_284(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_284(int iParam0)//Position - 0xA8CD
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_285())
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

int func_285()//Position - 0xA999
{
	if (unk_0x8ACB0C3FACC09467())
	{
		return unk_0xC9D803F7D7E10861();
	}
	return 0;
}

int func_286(int iParam0)//Position - 0xA9B0
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

int func_287()//Position - 0xC457
{
	return 0;
}

int func_288()//Position - 0xC460
{
	return 1;
}

int func_289()//Position - 0xC469
{
	return 1;
}

int func_290()//Position - 0xC472
{
	if (unk_0x7B2F21BFE86AEB61(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_291()//Position - 0xC48B
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

int func_292(int iParam0)//Position - 0xC546
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x6F79ECA8C83E4357(iParam0);
	sVar1 = unk_0x2232934AD664DD49(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x3362CDE8460ED38B(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_283(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_293(int iParam0)//Position - 0xC58C
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

int func_294(int iParam0)//Position - 0xC5C7
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

int func_295(int iParam0)//Position - 0xC643
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

int func_296(int iParam0, int iParam1, bool bParam2)//Position - 0xC72B
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0x724D816EA203A79E(iParam0) || !unk_0xE59B7F5A03335350(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_297(iParam1, iVar0, &sVar1, &iVar2))
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

int func_297(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0xC79C
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

int func_298(int iParam0)//Position - 0xC874
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_110A8.f_8B[iParam0];
}

var func_299()//Position - 0xC890
{
	var uVar0;
	
	func_309(&uVar0, unk_0xF40D00CD7B81C0A8());
	func_308(&uVar0, unk_0x7E09057438B9D216());
	func_307(&uVar0, unk_0x6E06C0DB9B43570D());
	func_302(&uVar0, unk_0xBE14F159908E4EE5());
	func_301(&uVar0, unk_0xDD6A91E47ED4D0CF());
	func_300(&uVar0, unk_0x4EEB3860BFC44B78());
	return uVar0;
}

void func_300(var uParam0, int iParam1)//Position - 0xC8D6
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

void func_301(var uParam0, int iParam1)//Position - 0xC95C
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_302(var uParam0, int iParam1)//Position - 0xC98F
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_306(*uParam0);
	iVar1 = func_304(*uParam0);
	if (iParam1 < 1 || iParam1 > func_303(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_303(int iParam0, int iParam1)//Position - 0xC9E0
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

var func_304(int iParam0)//Position - 0xCA82
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_305(unk_0xFA30DFD0084E92FE(iParam0, 31), -1, 1)) + 2011;
}

int func_305(bool bParam0, int iParam1, int iParam2)//Position - 0xCAA7
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_306(var uParam0)//Position - 0xCABE
{
	return uParam0 & 15;
}

void func_307(var uParam0, int iParam1)//Position - 0xCACB
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_308(var uParam0, int iParam1)//Position - 0xCB05
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_309(var uParam0, int iParam1)//Position - 0xCB40
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_310(var uParam0, int iParam1)//Position - 0xCB7C
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
			uParam0->f_4 = func_311(0, 1);
			uParam0->f_C = 0;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_311(0, 1);
			uParam0->f_C = 0;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_311(1, 1);
			uParam0->f_C = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_311(1, 2);
			uParam0->f_C = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 19);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_311(1, 1);
			uParam0->f_C = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_311(1, 2);
			uParam0->f_C = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 19);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_311(2, 1);
			uParam0->f_C = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_311(2, 1);
			uParam0->f_C = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_311(2, 1);
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
			if (func_291())
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
			if (func_291())
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
		if (!func_15(Global_19B04.f_7F22.f_748[uParam0->f_E /*3*/], 0f, 0f, 0f, 0))
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
		if (!func_15(Global_19B04.f_932.f_21B.f_DF0[1 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_19B04.f_932.f_21B.f_DF0[1 /*10*/][uParam0->f_C /*3*/] };
			uParam0->f_3 = Global_19B04.f_932.f_21B.f_E05[1 /*4*/][uParam0->f_C];
		}
	}
	else if (unk_0xFA30DFD0084E92FE(uParam0->f_9, 20))
	{
		if (!func_15(Global_19B04.f_932.f_21B.f_DF0[0 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_19B04.f_932.f_21B.f_DF0[0 /*10*/][uParam0->f_C /*3*/] };
			uParam0->f_3 = Global_19B04.f_932.f_21B.f_E05[0 /*4*/][uParam0->f_C];
		}
	}
	return iVar0;
}

int func_311(int iParam0, int iParam1)//Position - 0xE273
{
	struct<82> Var0;
	
	if (func_28(iParam0))
	{
		Var0.f_B = 12;
		Var0.f_1F = 49;
		Var0.f_51 = 2;
		func_312(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_312(int iParam0, var uParam1, int iParam2)//Position - 0xE2B5
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

void func_313(int iParam0, var uParam1, vector3 vParam2, float fParam3, int iParam4)//Position - 0xE511
{
	if (func_310(&(Global_110A8.f_22B[0 /*21*/]), iParam0))
	{
		if (unk_0xFA30DFD0084E92FE(Global_110A8.f_22B[0 /*21*/].f_9, 10))
		{
			func_318(iParam0);
			func_317(uParam1, &(Global_19B04.f_7F22.f_45[Global_110A8.f_22B[0 /*21*/].f_E /*78*/]));
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
			func_314(iParam0, 1);
		}
	}
}

void func_314(int iParam0, bool bParam1)//Position - 0xE610
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_316(iParam0, 0))
		{
			func_315(iParam0, 1, 0);
			func_315(iParam0, 2, 0);
			func_315(iParam0, 3, 0);
			func_315(iParam0, 4, 0);
			func_315(iParam0, 0, 1);
			Global_110A8[iParam0] = 1;
		}
	}
	else
	{
		func_315(iParam0, 0, 0);
	}
}

void func_315(int iParam0, int iParam1, bool bParam2)//Position - 0xE66D
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

bool func_316(int iParam0, int iParam1)//Position - 0xE6A8
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_19B04.f_7F22[iParam0], iParam1);
}

void func_317(var uParam0, var uParam1)//Position - 0xE6CB
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

void func_318(int iParam0)//Position - 0xE797
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_310(&(Global_110A8.f_22B[0 /*21*/]), iParam0))
	{
		if (unk_0x724D816EA203A79E(Global_110A8.f_8B[iParam0]))
		{
			unk_0x77815D3407C6700D(Global_110A8.f_8B[iParam0], true, 1);
			unk_0x1E7A09C1710FB071(&(Global_110A8.f_8B[iParam0]));
			Global_110A8.f_8B[iParam0] = 0;
		}
		if (unk_0xFA30DFD0084E92FE(Global_110A8.f_22B[0 /*21*/].f_9, 13))
		{
			func_314(iParam0, 0);
		}
	}
}

int func_319(int iParam0)//Position - 0xE811
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

void func_320(int iParam0, var uParam1)//Position - 0xE874
{
	int iVar0;
	
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		func_324(uParam1);
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
		if (uParam1->f_41 == -1 && !func_323(uParam1->f_42))
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
		func_322(&iParam0, &(uParam1->f_9), &(uParam1->f_3B));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xFC8A228C62614C5C(iParam0, iVar0 + 1))
			{
				unk_0xF0059F27F7BB6680(&(uParam1->f_4D), func_321(iVar0 + 1));
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

int func_321(int iParam0)//Position - 0xEB1F
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

int func_322(int iParam0, var uParam1, var uParam2)//Position - 0xEBCF
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

int func_323(int iParam0)//Position - 0xECA9
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

void func_324(var uParam0)//Position - 0xECC9
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

void func_325(int iParam0)//Position - 0xED79
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_318(iParam0);
	func_314(iParam0, 0);
}

void func_326()//Position - 0xEDA0
{
	func_329();
	func_327();
}

void func_327()//Position - 0xEDB0
{
	if (!iLocal_188)
	{
		if (func_36(iLocal_200))
		{
			if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_200, 0))
			{
				func_65(iLocal_200, -1);
				func_64(iLocal_200, 318);
				iLocal_188 = 1;
			}
		}
	}
	if (!iLocal_189)
	{
		if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) > 0)
		{
			func_328(320, 0);
			iLocal_189 = 1;
		}
	}
	else if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) == 0)
	{
		func_63(0, 320);
		iLocal_189 = 0;
	}
}

void func_328(int iParam0, bool bParam1)//Position - 0xEE28
{
	int iVar0;
	
	Global_DAA9 = iParam0;
	if (!Global_DAA7)
	{
		Global_DAA7 = 1;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < Global_109DE)
		{
			if (Global_109DF[iVar0 /*9*/] == iParam0)
			{
				Global_109DF[iVar0 /*9*/].f_1 = 0;
			}
			iVar0++;
		}
	}
}

void func_329()//Position - 0xEE72
{
}

void func_330()//Position - 0xEE7A
{
	if (!bLocal_28 && iLocal_68 != 5)
	{
		if (iLocal_68 > 0)
		{
			func_331();
		}
	}
}

void func_331()//Position - 0xEE9D
{
	float fVar0;
	int iVar1;
	
	fVar0 = 600f;
	if (!func_36(iLocal_200))
	{
		if (!func_36(iLocal_201) && !func_36(Local_199))
		{
			func_333(1);
			return;
		}
		if (func_36(Local_199) && !func_151(unk_0xBC25C936A095B5BA(), Local_199, fVar0, 1))
		{
			func_333(2);
		}
	}
	else
	{
		iVar1 = 0;
		if (!func_151(unk_0xBC25C936A095B5BA(), iLocal_200, fVar0, 1))
		{
			iVar1++;
		}
		if (func_36(iLocal_201))
		{
			if (!func_151(unk_0xBC25C936A095B5BA(), iLocal_201, fVar0, 1))
			{
				iVar1++;
			}
		}
		else
		{
			iVar1++;
		}
		if (func_36(Local_199))
		{
			if (!func_151(unk_0xBC25C936A095B5BA(), Local_199, fVar0, 1))
			{
				iVar1++;
			}
		}
		else
		{
			iVar1++;
		}
		if (iVar1 >= 3)
		{
			func_333(2);
			return;
		}
		iVar1 = 0;
		if (func_332(iLocal_200))
		{
			iVar1++;
		}
		if (func_36(iLocal_201))
		{
			if (func_332(iLocal_201))
			{
				iVar1++;
			}
		}
		else
		{
			iVar1++;
		}
		if (func_36(Local_199))
		{
			if (func_332(Local_199))
			{
				iVar1++;
			}
		}
		else
		{
			iVar1++;
		}
		if (iVar1 >= 3)
		{
			func_333(3);
			return;
		}
	}
}

int func_332(int iParam0)//Position - 0xEFE3
{
	if (func_36(iParam0))
	{
		if (((unk_0xBCDD4514E5CAE591(iParam0, 0, 7000) || unk_0xBCDD4514E5CAE591(iParam0, 3, 30000)) || unk_0xBCDD4514E5CAE591(iParam0, 2, 30000)) || unk_0xBCDD4514E5CAE591(iParam0, 1, 40000))
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

void func_333(int iParam0)//Position - 0xF03E
{
	unk_0xEB233A3B7635D2AC();
	func_60();
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			sLocal_179 = "PRA_FWRECK";
			break;
		
		case 2:
			sLocal_179 = "PRA_FFAR";
			break;
		
		case 3:
			sLocal_179 = "PRA_FSTUCK";
			break;
	}
	iLocal_68 = 5;
	iLocal_69 = 0;
}

int func_334(int iParam0)//Position - 0xF096
{
	if (func_10(iParam0))
	{
		if (!unk_0x36CEFBE9B745A58D(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_335()//Position - 0xF0B6
{
	if (!func_96(36))
	{
		func_336(21, 0, 0);
	}
}

void func_336(int iParam0, bool bParam1, int iParam2)//Position - 0xF0D0
{
	if (bParam1)
	{
		if (!func_348(iParam0, 0, 0))
		{
			if (iParam2 && Global_16B4F.f_12[iParam0])
			{
				if (func_347(iParam0) == 3 && !func_346(iParam0))
				{
					func_345(iParam0);
					func_344(iParam0, 0, 0);
					func_338(iParam0, 1, 0);
					func_337(iParam0);
				}
				else
				{
					func_344(iParam0, 1, 0);
					func_337(iParam0);
				}
			}
			else
			{
				func_344(iParam0, 0, 0);
				func_338(iParam0, 1, 0);
				func_337(iParam0);
			}
		}
		else
		{
			func_338(iParam0, 1, 0);
			func_337(iParam0);
		}
	}
	else if (func_348(iParam0, 0, 0))
	{
		func_338(iParam0, 0, 0);
		func_338(iParam0, 1, 0);
		func_337(iParam0);
	}
}

void func_337(int iParam0)//Position - 0xF18F
{
	Global_16B4F.f_A9[iParam0] = 1;
	Global_16B4F.f_A8 = 1;
}

void func_338(int iParam0, int iParam1, bool bParam2)//Position - 0xF1A9
{
	int iVar0;
	
	if (bParam2)
	{
		unk_0x7CB6FD92BE491AD9(&(Global_16B4F.f_531[iParam0]), iParam1);
	}
	else if (unk_0x7AF0088ABFA713B6())
	{
		if (func_343() == 0)
		{
			iVar0 = func_341(func_342(iParam0), -1, 0);
			unk_0x7CB6FD92BE491AD9(&iVar0, iParam1);
			func_339(func_342(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&(Global_19B04.f_29C[iParam0]), iParam1);
	}
}

void func_339(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0xF212
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_269BC5[iParam0 /*3*/][func_340(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x3A57956BCE003880(iVar0, iParam1, iParam3);
	}
}

int func_340(var uParam0)//Position - 0xF242
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_46();
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

int func_341(int iParam0, int iParam1, int iParam2)//Position - 0xF276
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_269BC5[iParam0 /*3*/][func_340(iParam1)];
	if (unk_0x6CB99B97664C3727(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_342(int iParam0)//Position - 0xF2A8
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

int func_343()//Position - 0xF59C
{
	return Global_62BD;
}

void func_344(int iParam0, int iParam1, bool bParam2)//Position - 0xF5A7
{
	int iVar0;
	
	if (bParam2)
	{
		unk_0xF0059F27F7BB6680(&(Global_16B4F.f_531[iParam0]), iParam1);
	}
	else if (unk_0x7AF0088ABFA713B6())
	{
		if (func_343() == 0)
		{
			iVar0 = func_341(func_342(iParam0), -1, 0);
			unk_0xF0059F27F7BB6680(&iVar0, iParam1);
			func_339(func_342(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xF0059F27F7BB6680(&(Global_19B04.f_29C[iParam0]), iParam1);
	}
}

void func_345(int iParam0)//Position - 0xF610
{
	if (Global_16B4F.f_12[iParam0])
	{
		func_344(iParam0, 10, 1);
		func_344(iParam0, 19, 1);
	}
}

bool func_346(int iParam0)//Position - 0xF637
{
	return func_348(iParam0, 5, 1);
}

int func_347(int iParam0)//Position - 0xF647
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
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
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
		
		case 48:
			return 3;
			break;
	}
	return 6;
}

int func_348(int iParam0, int iParam1, bool bParam2)//Position - 0xF8E1
{
	if (bParam2)
	{
		return unk_0xFA30DFD0084E92FE(Global_16B4F.f_531[iParam0], iParam1);
	}
	else if (unk_0x7AF0088ABFA713B6())
	{
		if (func_343() == 0)
		{
			return unk_0xFA30DFD0084E92FE(func_341(func_342(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xFA30DFD0084E92FE(Global_19B04.f_29C[iParam0], iParam1);
	}
	return 0;
}

void func_349(vector3 vParam0, float fParam1, int iParam2, int iParam3)//Position - 0xF941
{
	if (func_350())
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
		func_273(1);
	}
}

int func_350()//Position - 0xF9D6
{
	if (Global_16B1B == 10 || Global_16B1B == 9)
	{
		return 1;
	}
	return 0;
}

void func_351()//Position - 0xF9FA
{
	func_366();
	func_364();
	func_357();
	func_354();
	func_352();
}

void func_352()//Position - 0xFA16
{
	iLocal_374[0] = 0;
	iLocal_374[1] = 0;
	iLocal_374[2] = 0;
	Local_73[0 /*8*/] = { func_353("FP1_WANTM", "FP1_LOSTM", "FP1_THEREM", "FP1_CHATFM", "", "FP1_CHATTM") };
	Local_73[1 /*8*/] = { func_353("FP1_WANTT", "FP1_LOSTT", "FP1_THERET", "FP1_CHATFM", "FP1_CHATFT", "") };
	Local_73[2 /*8*/] = { func_353("FP1_WANTF", "FP1_LOSTF", "FP1_THEREF", "", "FP1_CHATFT", "FP1_CHATTM") };
}

struct<8> func_353(char* sParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)//Position - 0xFA9F
{
	struct<8> Var0;
	
	Var0 = 6;
	Var0[0] = sParam0;
	Var0[1] = sParam1;
	Var0[5] = sParam2;
	Var0[2] = sParam3;
	Var0[3] = sParam4;
	Var0[4] = sParam5;
	return Var0;
}

void func_354()//Position - 0xFADD
{
	Local_46[0 /*25*/] = { func_356(1203.146f, -337.3543f, 67.9314f, 1245.118f, -348.5059f, 68.2099f, 253.1908f, 0) };
	func_355(&(Local_46[0 /*25*/]), vLocal_185, 0, 15f, 5f, 270f, 3, 1192.006f, -631.4703f, 61.6972f, 10f, 10f, 5f);
	Local_46[1 /*25*/] = { func_356(1215.084f, -339.3139f, 68.1323f, 964.9214f, -555.212f, 58.0211f, 39.645f, 0) };
	func_355(&(Local_46[1 /*25*/]), vLocal_185, 0, 15f, 10f, 270f, 3, 1103.29f, -764.532f, 56.633f, 10f, 10f, 5f);
	Local_46[2 /*25*/] = { func_356(1179.533f, -361.3286f, 67.4559f, 929.8701f, -619.4534f, 56.4632f, 164.3631f, 0) };
	func_355(&(Local_46[2 /*25*/]), vLocal_185, 0, 15f, 10f, 270f, 3, 933.3745f, -615.9453f, 56.3041f, 10f, 10f, 5f);
	Local_46[3 /*25*/] = { func_356(1107.674f, -364.0569f, 65.9581f, 1099.266f, -775.0809f, 57.3525f, 178.2038f, 0) };
	func_355(&(Local_46[3 /*25*/]), vLocal_185, 0, 15f, 2f, 270f, 3, 1062.149f, -479.4801f, 62.9454f, 10f, 10f, 5f);
	Local_46[4 /*25*/] = { func_356(1069.279f, -393.5795f, 66.0262f, 1065.364f, -389.9561f, 66.1504f, 220.1611f, 0) };
	func_355(&(Local_46[4 /*25*/]), vLocal_185, 0, 5f, 30f, 128.1732f, 3, 1069.718f, -393.9912f, 66.0261f, 10f, 10f, 5f);
	Local_46[5 /*25*/] = { func_356(1031.673f, -424.599f, 64.5439f, 1027.179f, -420.6656f, 64.6268f, 178.2038f, joaat("p_binbag_01_s")) };
	func_355(&(Local_46[5 /*25*/]), 1028.201f, -428.3677f, 64.3571f, 1, 15f, 2f, 128.3915f, 1, 1027.179f, -420.6656f, 64.6268f, 10f, 10f, 5f);
	Local_46[6 /*25*/] = { func_356(942.1528f, -488.8956f, 59.3129f, 932.0198f, -489.3886f, 58.9212f, 202.5785f, joaat("p_binbag_01_s")) };
	func_355(&(Local_46[6 /*25*/]), 930.7186f, -494.9253f, 58.616f, 1, 15f, 2f, 119.6518f, 1, 952.9781f, -482.5082f, 60.0003f, 10f, 10f, 5f);
	Local_46[7 /*25*/] = { func_356(868.2734f, -529.5473f, 56.2071f, 865.0042f, -522.4746f, 56.3363f, 241.9711f, joaat("p_binbag_01_s")) };
	func_355(&(Local_46[7 /*25*/]), 865.2349f, -535.8759f, 56.1574f, 1, 15f, 2f, 162.7219f, 1, 1062.149f, -479.4801f, 62.9454f, 10f, 10f, 5f);
	Local_46[8 /*25*/] = { func_356(874.8076f, -571.2073f, 56.2987f, 983.125f, -541.9902f, 58.5929f, 49.7653f, 0) };
	func_355(&(Local_46[8 /*25*/]), vLocal_185, 0, 15f, 2f, 270f, 3, 1062.149f, -479.4801f, 62.9454f, 10f, 10f, 5f);
	Local_46[9 /*25*/] = { func_356(931.5218f, -614.2144f, 56.3119f, 928.6471f, -620.711f, 56.4611f, -108.06f, joaat("p_binbag_01_s")) };
	func_355(&(Local_46[9 /*25*/]), 940.4086f, -622.1787f, 56.3003f, 1, 15f, 2f, 228.1176f, 1, 918.6716f, -602.9258f, 56.3395f, 10f, 10f, 5f);
	Local_46[10 /*25*/] = { func_356(964.9758f, -645.9614f, 56.4465f, 927.1033f, -575.4162f, 56.5329f, 55.9317f, 0) };
	func_355(&(Local_46[10 /*25*/]), vLocal_185, 0, 15f, 2f, 270f, 3, 1062.149f, -479.4801f, 62.9454f, 10f, 10f, 5f);
	Local_46[11 /*25*/] = { func_356(983.4438f, -683.1442f, 56.4087f, 929.3757f, -618.9091f, 56.4612f, 181.1844f, 0) };
	func_355(&(Local_46[11 /*25*/]), vLocal_185, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_46[12 /*25*/] = { func_356(1016.261f, -731.546f, 56.555f, 1011.801f, -733.0652f, 56.7435f, 314.5626f, joaat("p_binbag_01_s")) };
	func_355(&(Local_46[12 /*25*/]), 1020.251f, -736.815f, 56.6235f, 1, 15f, 2f, 220.7804f, 1, 1011.238f, -724.7085f, 56.5183f, 10f, 10f, 5f);
	Local_46[13 /*25*/] = { func_356(1164.126f, -762.2866f, 56.6656f, 1099.342f, -775.4273f, 57.3525f, 177.5729f, 0) };
	func_355(&(Local_46[13 /*25*/]), vLocal_185, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_46[14 /*25*/] = { func_356(1199.339f, -678.0995f, 59.9051f, 1205.415f, -672.1282f, 60.1445f, 105.2374f, 0) };
	func_355(&(Local_46[14 /*25*/]), vLocal_185, 0, 15f, 2f, 12.1103f, 3, 1199.339f, -678.0995f, 59.9051f, 10f, 10f, 5f);
	Local_46[15 /*25*/] = { func_356(1183.445f, -582.9476f, 63.0962f, 929.3757f, -618.9091f, 56.4612f, 181.1844f, 0) };
	func_355(&(Local_46[15 /*25*/]), vLocal_185, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_46[16 /*25*/] = { func_356(1192.479f, -485.1086f, 64.7195f, 1264.359f, -719.084f, 63.328f, 65.0519f, 0) };
	func_355(&(Local_46[16 /*25*/]), vLocal_185, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_46[17 /*25*/] = { func_356(1212.693f, -400.0532f, 67.0971f, 1284.109f, -676.728f, 65.0225f, 69.9898f, 0) };
	func_355(&(Local_46[17 /*25*/]), vLocal_185, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_46[18 /*25*/] = { func_356(1114.573f, -232.3706f, 68.0949f, 929.3757f, -618.9091f, 56.4612f, 181.1844f, 0) };
	func_355(&(Local_46[18 /*25*/]), vLocal_185, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	iLocal_187 = 19;
}

void func_355(var uParam0, vector3 vParam1, int iParam2, float fParam3, float fParam4, float fParam5, int iParam6, vector3 vParam7, vector3 vParam8)//Position - 0x102C7
{
	uParam0->f_3 = { vParam1 };
	uParam0->f_6 = fParam3;
	uParam0->f_7 = fParam4;
	uParam0->f_8 = fParam5;
	uParam0->f_9 = iParam2;
	uParam0->f_A = iParam6;
	uParam0->f_B = { vParam7 };
	uParam0->f_E = { vParam8 };
}

struct<25> func_356(vector3 vParam0, vector3 vParam1, float fParam2, int iParam3)//Position - 0x1030B
{
	struct<25> Var0;
	
	Var0.f_9 = 1;
	Var0.f_A = 3;
	Var0 = { vParam0 };
	Var0.f_13 = { vParam1 };
	Var0.f_16 = fParam2;
	Var0.f_17 = iParam3;
	return Var0;
}

void func_357()//Position - 0x10345
{
	vector3 vVar0[6];
	
	vVar0[0 /*3*/] = { 1251.308f, -400.6231f, 68.0926f };
	vVar0[1 /*3*/] = { 1183.993f, -403.3443f, 66.8734f };
	vVar0[2 /*3*/] = { 1161.54f, -372.6073f, 66.6034f };
	vVar0[3 /*3*/] = { 1167.644f, -273.7987f, 67.9705f };
	vVar0[4 /*3*/] = { 1252.362f, -247.353f, 77.5631f };
	vVar0[5 /*3*/] = { 1330.062f, -341.0342f, 100.3476f };
	func_358(&vVar0, 6);
}

void func_358(var uParam0, int iParam1)//Position - 0x103DD
{
	int iVar0;
	
	func_363(&uLocal_74);
	iVar0 = 0;
	while (iVar0 <= (iParam1 - 1))
	{
		func_362(&uLocal_74, *(uParam0[iVar0 /*3*/]));
		iVar0++;
	}
	func_361(&uLocal_74);
	func_359(&uLocal_126, &uLocal_74, 50f);
}

void func_359(var uParam0, var uParam1, float fParam2)//Position - 0x10426
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	
	if (uParam1->f_2E < 3)
	{
	}
	iVar0 = (uParam1->f_2E - 1);
	iVar1 = 0;
	iVar2 = 1;
	uParam0->f_2E = uParam1->f_2E;
	while (iVar1 < uParam1->f_2E)
	{
		vVar3 = { *(uParam1[iVar1 /*3*/]) - *(uParam1[iVar0 /*3*/]) };
		vVar4 = { *(uParam1[iVar2 /*3*/]) - *(uParam1[iVar1 /*3*/]) };
		vVar3 = { vVar3 / FtoV(SYSTEM::SQRT(((vVar3.x * vVar3.x) + (vVar3.y * vVar3.y)))) };
		vVar4 = { vVar4 / FtoV(SYSTEM::SQRT(((vVar4.x * vVar4.x) + (vVar4.y * vVar4.y)))) };
		vVar5 = { vVar3 - vVar4 };
		vVar5 = { vVar5 / FtoV(SYSTEM::SQRT(((vVar5.x * vVar5.x) + (vVar5.y * vVar5.y)))) };
		if (func_360(uParam1, *(uParam1[iVar1 /*3*/]) + vVar5))
		{
			vVar5 = { -vVar5 };
		}
		*(uParam0[iVar1 /*3*/]) = { *(uParam1[iVar1 /*3*/]) + vVar5 * Vector(fParam2, fParam2, fParam2) };
		iVar0 = iVar1;
		iVar1++;
		iVar2 = (iVar2 + 1 % uParam1->f_2E);
	}
}

bool func_360(var uParam0, struct<2> Param1, Vector3 vParam2)//Position - 0x10533
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (uParam0->f_2E < 3)
	{
	}
	bVar0 = false;
	iVar1 = 0;
	iVar2 = (uParam0->f_2E - 1);
	while (iVar1 < uParam0->f_2E)
	{
		if (((uParam0[iVar1 /*3*/])->f_1 < Param1.f_1 && (uParam0[iVar2 /*3*/])->f_1 >= Param1.f_1) || ((uParam0[iVar2 /*3*/])->f_1 < Param1.f_1 && (uParam0[iVar1 /*3*/])->f_1 >= Param1.f_1))
		{
			if (((*uParam0)[iVar1 /*3*/] + (((Param1.f_1 - (uParam0[iVar1 /*3*/])->f_1) / ((uParam0[iVar2 /*3*/])->f_1 - (uParam0[iVar1 /*3*/])->f_1)) * ((*uParam0)[iVar2 /*3*/] - (*uParam0)[iVar1 /*3*/]))) < Param1)
			{
				bVar0 = !bVar0;
			}
		}
		iVar2 = iVar1;
		iVar1++;
	}
	return bVar0;
}

void func_361(var uParam0)//Position - 0x105EF
{
	int iVar0;
	float fVar1;
	
	if (uParam0->f_33 == 0)
	{
	}
	if (uParam0->f_2E < 3)
	{
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_2E)
	{
		uParam0->f_2F = { uParam0->f_2F + *(uParam0[iVar0 /*3*/]) };
		iVar0++;
	}
	uParam0->f_2F = { uParam0->f_2F / FtoV(SYSTEM::TO_FLOAT(iVar0)) };
	iVar0 = 0;
	while (iVar0 < uParam0->f_2E)
	{
		fVar1 = SYSTEM::VDIST2(uParam0->f_2F, *(uParam0[iVar0 /*3*/]));
		if (fVar1 > uParam0->f_32)
		{
			uParam0->f_32 = fVar1;
		}
		iVar0++;
	}
	uParam0->f_32 = SYSTEM::SQRT(uParam0->f_32);
	uParam0->f_33 = 0;
}

void func_362(var uParam0, vector3 vParam1)//Position - 0x1068F
{
	if (uParam0->f_33 == 0)
	{
	}
	if (uParam0->f_2E >= 15)
	{
	}
	*(uParam0[uParam0->f_2E /*3*/]) = { vParam1 };
	uParam0->f_2E++;
}

void func_363(var uParam0)//Position - 0x106C0
{
	if (uParam0->f_33)
	{
	}
	uParam0->f_2E = 0;
	uParam0->f_2F = { 0f, 0f, 0f };
	uParam0->f_32 = 0f;
	uParam0->f_33 = 1;
}

void func_364()//Position - 0x106E7
{
	Local_197 = { func_365(1200.61f, -344.2721f, 68.0424f, 269.2015f, joaat("s_m_y_garbage")) };
	Local_198 = { func_365(1202.42f, -341.6034f, 67.9378f, 273.1125f, joaat("s_m_y_garbage")) };
}

struct<14> func_365(vector3 vParam0, float fParam1, int iParam2)//Position - 0x10735
{
	struct<14> Var0;
	
	Var0.f_1 = { vParam0 };
	Var0.f_4 = fParam1;
	Var0.f_5 = iParam2;
	return Var0;
}

void func_366()//Position - 0x10758
{
	Local_199 = { func_367(1203.146f, -337.3543f, 67.9314f, 189.7047f, joaat("trash")) };
}

struct<6> func_367(vector3 vParam0, float fParam1, int iParam2)//Position - 0x10782
{
	struct<6> Var0;
	
	Var0.f_1 = { vParam0 };
	Var0.f_4 = fParam1;
	Var0.f_5 = iParam2;
	return Var0;
}

void func_368()//Position - 0x107A4
{
	func_234(1);
	func_379(1);
	unk_0x8510BC031C24B862(joaat("trash"), false);
	unk_0x8510BC031C24B862(joaat("towtruck"), false);
	unk_0x8510BC031C24B862(joaat("s_m_y_garbage"), false);
	func_62();
	func_378();
	func_377();
	func_369(0);
	unk_0x95E4B6F3ED223F5A();
}

void func_369(bool bParam0)//Position - 0x107E9
{
	vector3 vVar0;
	
	if (bParam0)
	{
	}
	unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
	unk_0xD0FC9D284379BED4("DRIVE", 1);
	unk_0xD0FC9D284379BED4("WORLD_VEHICLE_ATTRACTOR", 1);
	unk_0xD0FC9D284379BED4("WORLD_VEHICLE_DRIVE_PASSENGERS", 1);
	unk_0xD0FC9D284379BED4("WORLD_VEHICLE_DRIVE_SOLO", 1);
	func_37();
	func_376();
	func_375();
	func_374();
	func_373();
	func_216();
	if (bParam0)
	{
		if (unk_0x724D816EA203A79E(iLocal_200))
		{
			if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
			{
				if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
				{
					if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_200, 0))
					{
						vVar0 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), true) };
						unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), vVar0, 1, false, 0, 1);
					}
				}
			}
		}
		func_371();
		unk_0xEB233A3B7635D2AC();
		func_2();
	}
	else
	{
		func_370();
	}
	unk_0xA2F21B9C95E0F635(0);
	func_139(&uLocal_56, 0, 0);
	if (unk_0xEF0E25DA0CB6E8FF(iLocal_184))
	{
		unk_0x062C9995BFD27B2A(false, false, 3000, 1, 0, 0);
		unk_0x4EC087603E1DEF9C(iLocal_184, 0);
	}
}

void func_370()//Position - 0x108CD
{
	func_3();
	func_6(&Local_199);
	func_6(&iLocal_201);
	func_6(&iLocal_200);
	func_5(&Local_197, 1, 0, 1);
	func_5(&Local_198, 1, 0, 1);
	func_6(&iLocal_202);
}

void func_371()//Position - 0x10909
{
	Global_394A = 0;
	func_372();
}

void func_372()//Position - 0x10919
{
	unk_0x5C7DC611411E2CF9();
	Global_41AB = 0;
	if (unk_0xE6711F601F11B66B())
	{
		unk_0x1E08809A5041F85B(false);
		Global_3DB8 = 6;
	}
}

void func_373()//Position - 0x1093A
{
}

void func_374()//Position - 0x10942
{
	if (iLocal_194)
	{
		unk_0xDC5D58521808C640(joaat("trash"));
	}
}

void func_375()//Position - 0x10959
{
}

void func_376()//Position - 0x10961
{
	unk_0x2CA123B0622F495C(Local_199.f_5);
}

void func_377()//Position - 0x10972
{
	func_336(21, 1, 0);
}

void func_378()//Position - 0x10982
{
	Global_15B7B = 0;
}

void func_379(int iParam0)//Position - 0x1098F
{
	Global_16126 = iParam0;
}

void func_380()//Position - 0x1099D
{
	int iVar0;
	
	if (unk_0xACE95AD318CE412B("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 1424);
	}
	if (Global_19B04.f_2360 || func_32(0))
	{
		if (!func_381())
		{
			iVar0 = func_31();
			if (iVar0 != -1)
			{
				if (!func_19(iVar0))
				{
					return;
				}
				unk_0xF0059F27F7BB6680(&(Global_1478C[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_24();
		}
	}
}

int func_381()//Position - 0x10A0E
{
	if (((Global_16B1B == 13 || Global_16B1B == 10) || Global_16B1B == 11) || Global_16B1B == 12)
	{
		return 0;
	}
	return 1;
}

